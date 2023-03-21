// STATUS: NOT STARTED

typedef struct {
	sceVu0FVECTOR pos;
	int se_no;
	int vpos;
	int ewrk_no;
	int fin_spd;
	u_short vol_max;
	u_short pitch;
	u_char mode;
	u_char room_id;
	u_char menu;
} SE_REQ_TMP_STR;

SE_CTRL se_ctrl = {
	/* .btlhit_no = */ 0,
	/* .voice_no = */ 0,
	/* .door_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .foot_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0
	},
	/* .srund_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .ghost_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .event_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .wide_no = */ 0,
	/* .jidou_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	},
	/* .ghost_type = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};
SE_MENU_FADE sm_fade = {
	/* .mvol = */ 0,
	/* .tgt_vol = */ 0,
	/* .deg = */ 0
};
static SE_WRK se_wrk[24];
static SE_WRK se_wrk_bk[24];

void InitSe() {
  se_ctrl.btlhit_no = 0xffffffff;
  se_ctrl.jidou_no[3] = 0xffffffff;
  se_ctrl.ghost_type[2] = '\0';
  se_ctrl.voice_no = 0xffffffff;
  se_ctrl.door_no[0] = 0xffffffff;
  se_ctrl.door_no[1] = 0xffffffff;
  se_ctrl.door_no[2] = 0xffffffff;
  se_ctrl.foot_no[0] = 0xffffffff;
  se_ctrl.foot_no[1] = 0xffffffff;
  se_ctrl.foot_no[2] = 0xffffffff;
  se_ctrl.foot_no[3] = 0xffffffff;
  se_ctrl.foot_no[4] = 0xffffffff;
  se_ctrl.foot_no[5] = 0xffffffff;
  se_ctrl.foot_no[6] = 0xffffffff;
  se_ctrl.foot_no[7] = 0xffffffff;
  se_ctrl.srund_no[0] = 0xffffffff;
  se_ctrl.srund_no[1] = 0xffffffff;
  se_ctrl.ghost_no[0] = 0xffffffff;
  se_ctrl.ghost_no[1] = 0xffffffff;
  se_ctrl.ghost_no[2] = 0xffffffff;
  se_ctrl.event_no[0] = 0xffffffff;
  se_ctrl.event_no[1] = 0xffffffff;
  se_ctrl.wide_no = 0xffffffff;
  se_ctrl.jidou_no[0] = 0xffffffff;
  se_ctrl.jidou_no[1] = 0xffffffff;
  se_ctrl.jidou_no[2] = 0xffffffff;
  se_ctrl.ghost_type[0] = '\0';
  se_ctrl.ghost_type[1] = '\0';
  SeInitSeWrk();
  InitSeMenuFade();
  return;
}

void InitSeGhost() {
	int i;
	
  uchar *puVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0;
  puVar3 = se_ctrl.ghost_no;
  do {
    puVar1 = se_ctrl.ghost_type + iVar2;
    *puVar3 = 0xffffffff;
    iVar2 = iVar2 + 1;
    *puVar1 = '\0';
    puVar3 = puVar3 + 1;
  } while (iVar2 < 3);
  return;
}

void InitSeMenuFade() {
  sm_fade.deg = 0x80;
  sm_fade.mvol = 0xfff;
  sm_fade.tgt_vol = 0xfff;
  return;
}

void UpdateSeMenuFade() {
  if (sm_fade.mvol < sm_fade.tgt_vol) {
    if (sm_fade.deg + sm_fade.mvol < sm_fade.tgt_vol) {
      sm_fade.mvol = sm_fade.deg + sm_fade.mvol;
      return;
    }
  }
  else if ((sm_fade.mvol <= sm_fade.tgt_vol) ||
          (sm_fade.mvol = sm_fade.mvol - sm_fade.deg, sm_fade.tgt_vol <= sm_fade.mvol)) {
    return;
  }
  sm_fade.mvol = sm_fade.tgt_vol;
  return;
}

void SetTargetVolSeMenuFade(int tgt_vol) {
  if (tgt_vol < 0) {
    tgt_vol = 0;
  }
  else if (0xfff < tgt_vol) {
    tgt_vol = 0xfff;
  }
  sm_fade.tgt_vol = tgt_vol;
  return;
}

void SeInitSeWrk() {
	int i;
	
  int pos;
  
  pos = 0;
  do {
    SeInitSeWrkSub(pos);
    pos = pos + 1;
  } while (pos < 0x18);
  return;
}

static void SeInitSeWrkSub(int pos) {
  tagSE_WRK *swp;
  
  swp = SeGetSeWrk(pos);
  SeInitSeWrkP(swp);
  return;
}

static void SeInitSeWrkP(SE_WRK *swp) {
  if (swp != (tagSE_WRK *)0x0) {
    swp->vol_rate = 0x1000;
    swp->spos[0] = 0.0;
    swp->pan = 0x280;
    swp->menu = '\0';
    swp->mpos = (void *)0x0;
    swp->spos[2] = 0.0;
    swp->spos[1] = 0.0;
    swp->status = 0;
    swp->atr = 0;
    swp->se_p = 0;
    swp->v_p = 0;
    swp->pitch = 0x1000;
    swp->vol_phase = '\0';
  }
  return;
}

void SetReverbVolume(u_short vol) {
  SetIopCmdSm(6,(int)vol & 0xffff,0,0);
  return;
}

void SeStopAndBackup() {
  char cVar1;
  undefined8 uVar2;
  uint voice_num;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  tagSE_WRK *ptVar9;
  tagSE_WRK *swp;
  
  swp = se_wrk_bk;
  ptVar9 = se_wrk;
  do {
    SeInitSeWrkP(swp);
    if (ptVar9->status != 0) {
      if (ptVar9->fade_mode == '\x02') {
        voice_num = (uint)(ushort)ptVar9->v_p;
      }
      else if ((ptVar9->atr & 7) == 2) {
        voice_num = (uint)(ushort)ptVar9->v_p;
      }
      else {
        cVar1 = CheckSeUse((uint)(ushort)ptVar9->se_p);
        if (cVar1 == '\x02') {
          uVar2 = *(undefined8 *)&ptVar9->field_0x8;
          uVar3 = *(undefined8 *)ptVar9->spos;
          uVar4 = *(undefined8 *)(ptVar9->spos + 2);
          uVar5 = *(undefined8 *)&ptVar9->status;
          uVar6 = *(undefined8 *)&ptVar9->se_p;
          uVar7 = *(undefined8 *)&ptVar9->pan;
          uVar8 = *(undefined8 *)&ptVar9->fade_spd;
          *(undefined8 *)swp = *(undefined8 *)ptVar9;
          *(undefined8 *)&swp->field_0x8 = uVar2;
          *(undefined8 *)swp->spos = uVar3;
          *(undefined8 *)(swp->spos + 2) = uVar4;
          *(undefined8 *)&swp->status = uVar5;
          *(undefined8 *)&swp->se_p = uVar6;
          *(undefined8 *)&swp->pan = uVar7;
          *(undefined8 *)&swp->fade_spd = uVar8;
          voice_num = (uint)(ushort)ptVar9->v_p;
        }
        else {
          voice_num = (uint)(ushort)ptVar9->v_p;
        }
      }
      SeFadeFlame(voice_num,10,0);
    }
    swp = swp + 1;
    ptVar9 = ptVar9 + 1;
  } while ((int)swp < 0x358ad0);
  return;
}

void SeBackupInit() {
	int i;
	
  tagSE_WRK *swp;
  int iVar1;
  
  iVar1 = 0x17;
  swp = se_wrk_bk;
  do {
    iVar1 = iVar1 + -1;
    SeInitSeWrkP(swp);
    swp = swp + 1;
  } while (-1 < iVar1);
  return;
}

void SeRevival(u_short fin_spd) {
	SE_REQ_TMP_STR tmp;
	int i;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  tagSE_WRK *ptVar5;
  int iVar6;
  SE_REQ_TMP_STR tmp;
  
  iVar6 = 0x17;
  ptVar5 = se_wrk_bk;
  iVar3 = se_wrk_bk[0].status;
  do {
    if (iVar3 != 0) {
      uVar4 = ptVar5->atr & 7;
      tmp.fin_spd = (int)fin_spd & 0xffff;
      if (uVar4 == 1) {
        tmp.pos[0] = ptVar5->spos[0];
        tmp.pos[1] = ptVar5->spos[1];
        tmp.pos[2] = ptVar5->spos[2];
        uVar1 = ptVar5->se_p;
        uVar2 = ptVar5->v_p;
        tmp.vol_max = ptVar5->fade_tgt;
        tmp.pitch = ptVar5->pitch;
        tmp.room_id = ptVar5->room_id;
        tmp.mode = '\x02';
      }
      else {
        if (uVar4 != 0) {
          if ((uVar4 != 3) && (uVar4 == 4)) {
            tmp.vol_max = ptVar5->fade_tgt;
            tmp.pitch = ptVar5->pitch;
            tmp.se_no = (int)(ushort)ptVar5->se_p;
            tmp.vpos = (int)(ushort)ptVar5->v_p;
            tmp.mode = '\x05';
            tmp.room_id = plyr_wrk.dop._13_1_;
            tmp.pos[0] = 0.0;
            tmp.pos[1] = 0.0;
            tmp.pos[2] = 0.0;
            SeStartVp(&tmp);
          }
          goto LAB_00111984;
        }
        uVar1 = ptVar5->se_p;
        uVar2 = ptVar5->v_p;
        tmp.vol_max = ptVar5->fade_tgt;
        tmp.pitch = ptVar5->pitch;
        tmp.mode = '\x01';
        tmp.room_id = 0xff;
        tmp.pos[0] = 0.0;
        tmp.pos[1] = 0.0;
        tmp.pos[2] = 0.0;
      }
      tmp.vpos = (int)uVar2;
      tmp.se_no = (int)uVar1;
      SeStartVp(&tmp);
    }
LAB_00111984:
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      return;
    }
    iVar3 = ptVar5[1].status;
    ptVar5 = ptVar5 + 1;
  } while( true );
}

int SeStartFix(int se_no, u_short fin_spd, u_short vol_max, u_short pitch, u_char menu) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int iVar2;
  int iVar3;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  if ((se_no == 0xff) || (cVar1 = CheckSeUse(se_no), cVar1 == '\0')) {
    iVar3 = -1;
  }
  else {
    iVar2 = SeGetFreeVoice(0,1);
    iVar3 = -1;
    if (iVar2 != -1) {
      tmp.mode = '\x01';
      tmp.room_id = 0xff;
      tmp.pos[0] = 0.0;
      tmp.pos[1] = 0.0;
      tmp.pos[2] = 0.0;
      tmp.se_no = se_no;
      tmp.vpos = iVar2;
      tmp.vol_max = vol_max;
      tmp.pitch = pitch;
      tmp.menu = menu;
      SeStartVp(&tmp);
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

int SeStartFixFlame(int se_no, u_short flame, u_short vol_max, u_short pitch, u_char menu) {
	u_short fin_spd;
	
  int iVar1;
  short fin_spd;
  uint uVar2;
  
  uVar2 = (int)flame & 0xffff;
  if (uVar2 == 0) {
    fin_spd = 0;
  }
  else {
    if (uVar2 == 0) {
      trap(7);
    }
    fin_spd = (short)(((int)vol_max & 0xffffU) / uVar2);
  }
  iVar1 = SeStartFix(se_no,fin_spd,(short)((int)vol_max & 0xffffU),pitch,menu);
  return iVar1;
}

int SeStartFixV(int se_no, u_short fin_spd, u_short vol_max, u_short pitch, u_char voice_no) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int unaff_s6_lo;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  tmp.vpos = (int)(char)voice_no & 0xff;
  if ((se_no == 0xff) || (cVar1 = CheckSeUse(se_no), cVar1 == '\0')) {
    unaff_s6_lo = -1;
  }
  else {
    tmp.mode = '\x01';
    tmp.room_id = 0xff;
    tmp.pos[0] = 0.0;
    tmp.pos[1] = 0.0;
    tmp.pos[2] = 0.0;
    tmp.menu = '\0';
    tmp.se_no = se_no;
    tmp.vol_max = vol_max;
    tmp.pitch = pitch;
    SeStartVp(&tmp);
  }
  return unaff_s6_lo;
}

int SeStartPos(int se_no, float *pos, u_short fin_spd, u_short vol_max, u_short pitch, u_char room_id) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int iVar2;
  int iVar3;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  if ((se_no == 0xff) || (cVar1 = CheckSeUse(se_no), cVar1 == '\0')) {
    iVar3 = -1;
  }
  else {
    iVar2 = SeGetFreeVoice(0,1);
    iVar3 = -1;
    if (iVar2 != -1) {
      tmp.pos[2] = pos[2];
      tmp.pos[0] = *pos;
      tmp.pos[1] = pos[1];
      tmp.mode = '\x02';
      tmp.menu = '\0';
      tmp.se_no = se_no;
      tmp.vpos = iVar2;
      tmp.vol_max = vol_max;
      tmp.pitch = pitch;
      tmp.room_id = room_id;
      SeStartVp(&tmp);
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

int SeStartPosFlame(int se_no, float *pos, u_short flame, u_short vol_max, u_short pitch, u_char room_id) {
	u_short fin_spd;
	
  int iVar1;
  short fin_spd;
  uint uVar2;
  
  uVar2 = (int)flame & 0xffff;
  if (uVar2 == 0) {
    fin_spd = 0;
  }
  else {
    if (uVar2 == 0) {
      trap(7);
    }
    fin_spd = (short)(((int)vol_max & 0xffffU) / uVar2);
  }
  iVar1 = SeStartPos(se_no,pos,fin_spd,(short)((int)vol_max & 0xffffU),pitch,room_id);
  return iVar1;
}

int SeStartPut(int se_no, float *pos, u_short fin_spd, u_short vol_max, u_short pitch, u_char room_id) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int iVar2;
  int iVar3;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  if ((se_no == 0xff) || (cVar1 = CheckSeUse(se_no), cVar1 == '\0')) {
    iVar3 = -1;
  }
  else {
    iVar2 = SeGetFreeVoice(0,1);
    iVar3 = -1;
    if (iVar2 != -1) {
      tmp.pos[2] = pos[2];
      tmp.pos[0] = *pos;
      tmp.pos[1] = pos[1];
      tmp.mode = '\x04';
      tmp.menu = '\0';
      tmp.se_no = se_no;
      tmp.vpos = iVar2;
      tmp.vol_max = vol_max;
      tmp.pitch = pitch;
      tmp.room_id = room_id;
      SeStartVp(&tmp);
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

int SeStartPutFlame(int se_no, float *pos, u_short flame, u_short vol_max, u_short pitch, u_char room_id) {
	u_short fin_spd;
	
  int iVar1;
  short fin_spd;
  uint uVar2;
  
  uVar2 = (int)flame & 0xffff;
  if (uVar2 == 0) {
    fin_spd = 0;
  }
  else {
    if (uVar2 == 0) {
      trap(7);
    }
    fin_spd = (short)(((int)vol_max & 0xffffU) / uVar2);
  }
  iVar1 = SeStartPut(se_no,pos,fin_spd,(short)((int)vol_max & 0xffffU),pitch,room_id);
  return iVar1;
}

int SeStartGhost(int se_no, int ewrk_no, u_short fin_spd, u_short vol_max, u_short pitch, u_char gno) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int iVar2;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  if (se_no != 0xff) {
    tmp.se_no = ((int)(char)gno & 0xffU) * 0xb + se_no;
    cVar1 = CheckSeUse(tmp.se_no);
    if (cVar1 != '\0') {
      iVar2 = SeGetFreeVoice(0,1);
      if (iVar2 == -1) {
        return -1;
      }
      tmp.room_id = *(uchar *)((int)ene_wrk + ewrk_no * 0x430 + 0x3fc);
      tmp.mode = '\x03';
      tmp.pos[0] = 0.0;
      tmp.pos[1] = 0.0;
      tmp.pos[2] = 0.0;
      tmp.menu = '\0';
      tmp.vpos = iVar2;
      tmp.ewrk_no = ewrk_no;
      tmp.vol_max = vol_max;
      tmp.pitch = pitch;
      SeStartVp(&tmp);
      return iVar2;
    }
  }
  return -1;
}

int SeStartGhostFlame(int se_no, int ewrk_no, u_short flame, u_short vol_max, u_short pitch, u_char gno) {
	u_short fin_spd;
	
  int iVar1;
  short fin_spd;
  uint uVar2;
  
  uVar2 = (int)flame & 0xffff;
  if (uVar2 == 0) {
    fin_spd = 0;
  }
  else {
    if (uVar2 == 0) {
      trap(7);
    }
    fin_spd = (short)(((int)vol_max & 0xffffU) / uVar2);
  }
  iVar1 = SeStartGhost(se_no,ewrk_no,fin_spd,(short)((int)vol_max & 0xffffU),pitch,gno);
  return iVar1;
}

int SeStartPlyr(int se_no, u_short fin_spd, u_short vol_max, u_short pitch) {
	SE_REQ_TMP_STR tmp;
	int vpos;
	
  char cVar1;
  int iVar2;
  int iVar3;
  SE_REQ_TMP_STR tmp;
  
  tmp.fin_spd = (int)fin_spd & 0xffff;
  if ((se_no == 0xff) || (cVar1 = CheckSeUse(se_no), cVar1 == '\0')) {
    iVar3 = -1;
  }
  else {
    iVar2 = SeGetFreeVoice(0,1);
    iVar3 = -1;
    if (iVar2 != -1) {
      tmp.mode = '\x05';
      tmp.room_id = plyr_wrk.dop._13_1_;
      tmp.pos[0] = 0.0;
      tmp.pos[1] = 0.0;
      tmp.pos[2] = 0.0;
      tmp.menu = '\0';
      tmp.se_no = se_no;
      tmp.vpos = iVar2;
      tmp.vol_max = vol_max;
      tmp.pitch = pitch;
      SeStartVp(&tmp);
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

int SeStartPlyrFlame(int se_no, u_short flame, u_short vol_max, u_short pitch) {
	u_short fin_spd;
	
  int iVar1;
  short fin_spd;
  uint uVar2;
  
  uVar2 = (int)flame & 0xffff;
  if (uVar2 == 0) {
    fin_spd = 0;
  }
  else {
    if (uVar2 == 0) {
      trap(7);
    }
    fin_spd = (short)(((int)vol_max & 0xffffU) / uVar2);
  }
  iVar1 = SeStartPlyr(se_no,fin_spd,(short)((int)vol_max & 0xffffU),pitch);
  return iVar1;
}

static void SeStartVp(SE_REQ_TMP_STR *tmp_str) {
	SE_WRK *swp;
	float rot_oc;
	
  byte bVar1;
  int iVar2;
  short sVar3;
  tagSE_WRK *ptVar4;
  float fVar5;
  float fVar6;
  
  ptVar4 = SeGetSeWrk(tmp_str->vpos);
  SeInitSeWrkSub(tmp_str->vpos);
  ptVar4->se_p = *(short *)&tmp_str->se_no;
  ptVar4->v_p = *(short *)&tmp_str->vpos;
  sVar3 = *(short *)&tmp_str->fin_spd;
  ptVar4->fade_spd = sVar3;
  ptVar4->pitch = tmp_str->pitch;
  ptVar4->room_id = tmp_str->room_id;
  ptVar4->menu = tmp_str->menu;
  if (sVar3 == 0) {
    ptVar4->fade_mode = '\0';
    ptVar4->fade_vol = tmp_str->vol_max;
    ptVar4->fade_tgt = tmp_str->vol_max;
  }
  else {
    ptVar4->fade_vol = 0;
    ptVar4->fade_mode = '\x01';
    ptVar4->fade_tgt = tmp_str->vol_max;
  }
  ptVar4->vol_rate = (short)(((uint)(ushort)ptVar4->fade_vol << 0xc) / 0xfff);
  fVar5 = plyr_wrk.move_box.spd.z;
  switch(tmp_str->mode) {
  default:
    goto switchD_00112124_caseD_0;
  case '\x01':
    ptVar4->status = 4;
    goto switchD_00112124_caseD_0;
  case '\x02':
    fVar5 = tmp_str->pos[0];
    ptVar4->spos[0] = fVar5;
    ptVar4->atr = 1;
    fVar6 = tmp_str->pos[1];
    ptVar4->status = 4;
    ptVar4->spos[1] = fVar6;
    fVar6 = tmp_str->pos[2];
    break;
  case '\x03':
    bVar1 = *(byte *)&tmp_str->ewrk_no;
    ptVar4->ene_wrk_no = bVar1;
    iVar2 = (uint)bVar1 * 0x430;
    ptVar4->atr = 2;
    ptVar4->status = 4;
    fVar6 = *(float *)((int)ene_wrk + iVar2 + 0x30);
    ptVar4->mpos = (void *)(iVar2 + 0x252eb0);
    ptVar4->spos[0] = fVar6;
    ptVar4->spos[1] = *(float *)((int)ene_wrk + iVar2 + 0x34);
    fVar5 = *(float *)((int)ene_wrk + iVar2 + 0x38);
    ptVar4->spos[2] = fVar5;
    fVar5 = SgAtan2f(fVar6 - camera.p.x,fVar5 - camera.p.z);
    fVar6 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
    fVar5 = SeCmdGetAngle(fVar5,fVar6);
    sVar3 = SeCmdGetPan(fVar5);
    ptVar4->pan = sVar3;
    fVar6 = GetDistV(ptVar4->spos,(float *)&camera);
    goto LAB_001122e8;
  case '\x04':
    fVar5 = tmp_str->pos[0];
    ptVar4->spos[0] = fVar5;
    ptVar4->status = 4;
    fVar6 = tmp_str->pos[1];
    ptVar4->atr = 3;
    ptVar4->spos[1] = fVar6;
    fVar6 = tmp_str->pos[2];
    break;
  case '\x05':
    ptVar4->status = 4;
    ptVar4->spos[0] = fVar5;
    ptVar4->mpos = (void *)0x252be0;
    fVar6 = plyr_wrk.move_box.spd.w;
    ptVar4->atr = 4;
    ptVar4->spos[1] = fVar6;
    fVar6 = plyr_wrk.move_box.rot.x;
  }
  ptVar4->spos[2] = fVar6;
  fVar5 = SgAtan2f(fVar5 - camera.p.x,fVar6 - camera.p.z);
  fVar6 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
  fVar5 = SeCmdGetAngle(fVar5,fVar6);
  sVar3 = SeCmdGetPan(fVar5);
  ptVar4->pan = sVar3;
  fVar6 = GetDistV(ptVar4->spos,(float *)&camera);
LAB_001122e8:
  fVar6 = GetDist(fVar6,ptVar4->spos[1] - camera.p.y);
  sVar3 = SeCmdGetVol(fVar6,ptVar4->vol_rate);
  ptVar4->vol_rate = sVar3;
  if ((map_wrk.now_room != ptVar4->room_id) && (ptVar4->room_id != 0xff)) {
    ptVar4->vol_rate = (short)(((int)sVar3 & 0xffffU) >> 1);
  }
  sVar3 = SeCmdGetPitch(fVar5,ptVar4->pitch);
  ptVar4->pitch = sVar3;
switchD_00112124_caseD_0:
  if (ptVar4->menu == '\0') {
    SetIopCmdLg(2,tmp_str->vpos,(uint)(ushort)ptVar4->se_p,(uint)(ushort)ptVar4->pitch,
                (uint)(ushort)ptVar4->pan,
                (int)((uint)(ushort)ptVar4->vol_rate * sm_fade.mvol) / 0xfff,0,0);
    return;
  }
  SetIopCmdLg(2,tmp_str->vpos,(uint)(ushort)ptVar4->se_p,(uint)(ushort)ptVar4->pitch,
              (uint)(ushort)ptVar4->pan,(uint)(ushort)ptVar4->vol_rate,0,0);
  return;
}

int SeStartPosSrundFlame(u_char room_id, float *pos, u_short flame, u_short vol_max, u_short pitch) {
	int i;
	int req_file_no;
	int req_se_no;
	
  int iVar1;
  uint uVar2;
  int se_no;
  
  se_no = -1;
  switch(room_id) {
  default:
    uVar2 = 0x5d6;
    break;
  case 2:
    uVar2 = 0x5d7;
    break;
  case 3:
    uVar2 = 0x5d8;
    break;
  case 4:
    uVar2 = 0x5d9;
    break;
  case 7:
    uVar2 = 0x5da;
    break;
  case 9:
    uVar2 = 0x5db;
    break;
  case 10:
  case 0x28:
    uVar2 = 0x5dc;
    break;
  case 0xb:
    uVar2 = 0x5dd;
    break;
  case 0xc:
    uVar2 = 0x5de;
    break;
  case 0xe:
    uVar2 = 0x5df;
    break;
  case 0xf:
    uVar2 = 0x5e0;
    break;
  case 0x10:
    uVar2 = 0x5e1;
    break;
  case 0x14:
    uVar2 = 0x5e2;
    break;
  case 0x15:
    uVar2 = 0x5e3;
    break;
  case 0x16:
    uVar2 = 0x5e4;
    break;
  case 0x1c:
  case 0x1d:
  case 0x20:
  case 0x22:
    uVar2 = 0x5e5;
    break;
  case 0x1e:
    uVar2 = 0x5e7;
    break;
  case 0x29:
    uVar2 = 0x5e8;
  }
  if (se_ctrl.srund_no[0] == uVar2) {
    se_no = 0x34;
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (se_ctrl.srund_no[iVar1] == uVar2) {
        se_no = iVar1 + 0x34;
        break;
      }
    }
  }
  iVar1 = -1;
  if (se_no != -1) {
    iVar1 = SeStartPosFlame(se_no,pos,flame,vol_max,pitch,room_id);
  }
  return iVar1;
}

int SeStartPosEventFlame(u_char room_id, u_char req_pos, float *pos, u_short flame, u_short vol_max, u_short pitch) {
	int i;
	int req_file_no;
	int req_se_no;
	
  int iVar1;
  uint uVar2;
  int se_no;
  
  se_no = -1;
  switch(room_id) {
  default:
    uVar2 = 0x577;
    break;
  case 1:
    uVar2 = 0x578;
    break;
  case 2:
    uVar2 = 0x579;
    break;
  case 3:
    uVar2 = 0x57a;
    break;
  case 5:
    uVar2 = 0x57b;
    break;
  case 6:
    uVar2 = 0x57c;
    break;
  case 7:
    uVar2 = 0x57d;
    break;
  case 8:
    uVar2 = 0x57e;
    break;
  case 9:
    uVar2 = 0x57f;
    break;
  case 10:
  case 0x28:
    uVar2 = 0x580;
    break;
  case 0xb:
    uVar2 = 0x581;
    break;
  case 0xc:
    uVar2 = 0x582;
    break;
  case 0xe:
    uVar2 = 0x583;
    break;
  case 0xf:
    uVar2 = 0x584;
    break;
  case 0x10:
  case 0x1b:
    uVar2 = 0x58d;
    break;
  case 0x11:
    uVar2 = 0x586;
    break;
  case 0x12:
  case 0x15:
    uVar2 = 0x587;
    break;
  case 0x16:
    uVar2 = 0x588;
    break;
  case 0x17:
    uVar2 = 0x589;
    break;
  case 0x18:
    uVar2 = 0x58a;
    break;
  case 0x19:
    uVar2 = 0x58b;
    break;
  case 0x1a:
    uVar2 = 0x58c;
    break;
  case 0x23:
    uVar2 = 0x58e;
    break;
  case 0x26:
    uVar2 = 0x58f;
  }
  if (se_ctrl.event_no[0] == uVar2) {
    se_no = ((int)(char)req_pos & 0xffU) + 0x57;
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (se_ctrl.event_no[iVar1] == uVar2) {
        se_no = iVar1 * 3 + ((int)(char)req_pos & 0xffU) + 0x57;
        break;
      }
    }
  }
  iVar1 = -1;
  if (se_no != -1) {
    iVar1 = SeStartPosFlame(se_no,pos,flame,vol_max,pitch,room_id);
  }
  return iVar1;
}

static int SeGetFreeVoice(int start_no, int get) {
	SE_VSTAT *svp;
	int i;
	
  IOP_STAT *pIVar1;
  tagSE_WRK *ptVar2;
  SE_VSTAT *pSVar3;
  
  pIVar1 = GetIopStatP();
  pSVar3 = pIVar1->sev_stat + start_no;
  if ((pSVar3 != (SE_VSTAT *)0x0) && (start_no < 0x18)) {
    do {
      if ((pSVar3->status == 0) && (ptVar2 = SeGetSeWrk(start_no), ptVar2->status != 4)) {
        if (get == 0) {
          return start_no;
        }
        pSVar3->status = 3;
        return start_no;
      }
      start_no = start_no + 1;
      pSVar3 = pSVar3 + 1;
    } while (start_no < 0x18);
  }
  return -1;
}

int SeStopAll() {
  SeInitSeWrk();
  SetIopCmdSm(8,0,0,0);
  return 0;
}

int SeStop(int voice_num) {
  if (-1 < voice_num) {
    SetIopCmdSm(4,voice_num,0,0);
  }
  return 0;
}

void SeFadeOut(int voice_num, int fout_spd, int tgt_vol) {
	SE_WRK *swp;
	
  tagSE_WRK *ptVar1;
  
  ptVar1 = SeGetSeWrk(voice_num);
  if (ptVar1 != (tagSE_WRK *)0x0) {
    ptVar1->fade_tgt = (short)tgt_vol;
    ptVar1->fade_mode = '\x02';
    ptVar1->fade_spd = (short)fout_spd;
  }
  return;
}

void SeFadeFlame(int voice_num, u_short flame, u_short tgt_vol) {
	SE_WRK *swp;
	
  ushort uVar1;
  tagSE_WRK *ptVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (int)tgt_vol & 0xffff;
  uVar4 = (int)flame & 0xffff;
  ptVar2 = SeGetSeWrk(voice_num);
  if (ptVar2 == (tagSE_WRK *)0x0) {
    return;
  }
  if (uVar4 == 0) {
    SeStop(voice_num);
    return;
  }
  uVar1 = ptVar2->fade_vol;
  if (uVar5 < uVar1) {
    iVar3 = uVar1 - uVar5;
    ptVar2->fade_mode = '\x02';
    if (uVar4 == 0) {
      trap(7);
    }
  }
  else {
    if (uVar5 == uVar1) {
      ptVar2->fade_mode = '\0';
      goto LAB_001128b0;
    }
    ptVar2->fade_mode = '\x01';
    iVar3 = uVar5 - (ushort)ptVar2->fade_vol;
    if (uVar4 == 0) {
      trap(7);
    }
  }
  ptVar2->fade_spd = (short)(iVar3 / (int)uVar4);
  if ((iVar3 / (int)uVar4 & 0xffffU) == 0) {
    ptVar2->fade_spd = 1;
  }
LAB_001128b0:
  ptVar2->fade_tgt = (short)uVar5;
  return;
}

void SeFadeFlameAll(u_short flame, u_short tgt_vol) {
	SE_WRK *swp;
	int i;
	
  tagSE_WRK *ptVar1;
  int iVar2;
  
  iVar2 = 0x17;
  ptVar1 = se_wrk;
  do {
    iVar2 = iVar2 + -1;
    if (ptVar1->status != 0) {
      SeFadeFlame((uint)(ushort)ptVar1->v_p,flame,tgt_vol);
    }
    ptVar1 = ptVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void SeWrkUpdate() {
	IOP_STAT *isp;
	SE_WRK *swp;
	int i;
	
  IOP_STAT *pIVar1;
  tagSE_WRK *ptVar2;
  int iVar3;
  int iVar4;
  
  pIVar1 = GetIopStatP();
  ptVar2 = SeGetSeWrk(0);
  iVar4 = 0x17;
  iVar3 = pIVar1->sev_stat[0].status;
  while( true ) {
    iVar4 = iVar4 + -1;
    pIVar1 = (IOP_STAT *)(pIVar1->sev_stat + 1);
    if (iVar3 == 0) {
      if (ptVar2->status != 4) {
        ptVar2->status = 0;
      }
    }
    else if (ptVar2->status == 4) {
      ptVar2->status = 1;
    }
    ptVar2 = ptVar2 + 1;
    if (iVar4 < 0) break;
    iVar3 = pIVar1->sev_stat[0].status;
  }
  return;
}

u_char IsEndSe(int v_no) {
  if ((uint)v_no < 0x18) {
    return se_wrk[v_no].status == 0;
  }
  return 1;
}

u_char IsEndSeGhost(int v_no, u_char se_no, u_char gno) {
  if (gno < 2) {
    if (0x17 < (uint)v_no) {
      return 1;
    }
    if (se_wrk[v_no].se_p == (ushort)(byte)(gno * '\v' + se_no)) {
      return se_wrk[v_no].status == 0;
    }
  }
  return 1;
}

void SeSetEfctVol(u_short vol) {
  SetIopCmdSm(6,(int)vol & 0xffff,0,0);
  return;
}

void SeSetMVol(u_short vol) {
	int iop_vol;
	
  uint uVar1;
  
  uVar1 = 0xfff;
  if (((int)vol & 0xffffU) < 0x1000) {
    uVar1 = (int)vol & 0xffffU;
  }
  SetIopCmdSm(9,(uVar1 * 0x3fff) / 0xfff,0,0);
  return;
}

void SeSetSteMono(u_char mono) {
  if (mono != '\0') {
    SetIopCmdSm(10,1,0,0);
    return;
  }
  SetIopCmdSm(10,0,0,0);
  return;
}

int SeFileLoadAndSet(u_int file_no, int type) {
	int ret;
	
  int iVar1;
  
  if ((uint)type < 0x1a) {
                    /* WARNING: Could not recover jumptable at 0x00112b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&PTR_LAB_00349e90)[type])((&PTR_LAB_00349e90)[type],type,file_no);
    return iVar1;
  }
  return -1;
}

int SeFileLoadAndSetFGhost(u_int file_no, int type) {
	int ret;
	
  int iVar1;
  
  if ((type < 0x13) && (0xf < type)) {
    se_ctrl.door_no[type + -3] = file_no;
    *(undefined *)((int)se_ctrl.jidou_no + type) = 1;
    iVar1 = LoadReqSe(file_no,type & 0xff);
    FloatGhostSENotEmpty();
  }
  else {
    iVar1 = SeFileLoadAndSet(file_no,type);
  }
  return iVar1;
}

int SeFileLoadAndSetWide(u_short lbl_no) {
	u_int file_no;
	
  int iVar1;
  uint file_no;
  
  switch(lbl_no) {
  case 0:
  case 7:
    file_no = 0x5f1;
    break;
  case 1:
  case 4:
    file_no = 0x5ef;
    break;
  case 2:
    file_no = 0x5e9;
    break;
  case 3:
  case 10:
    file_no = 0x5f0;
    break;
  case 5:
    file_no = 0x5f7;
    break;
  default:
    file_no = 0x5ea;
    break;
  case 8:
    file_no = 0x5f4;
    break;
  case 0xb:
    file_no = 0x5ed;
    break;
  case 0xc:
    file_no = 0x5ee;
  }
  iVar1 = SeFileLoadAndSet(file_no,0x15);
  return iVar1;
}

char SeGetGhostPos(u_int se_file_no, u_char type) {
	char i;
	
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = se_ctrl.ghost_no;
  iVar1 = 0;
  iVar2 = 0x1000000;
  while (((*puVar3 != se_file_no || (*puVar3 == 0xffffffff)) || (se_ctrl.ghost_type[iVar1] != type))
        ) {
    puVar3 = puVar3 + 1;
    iVar1 = iVar2 >> 0x18;
    iVar2 = iVar2 + 0x1000000;
    if (2 < iVar1) {
      return -1;
    }
  }
  return (char)iVar1;
}

char SeGetAutoGhostPos(u_int se_file_no) {
	char i;
	
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0;
  puVar3 = se_ctrl.jidou_no;
  iVar1 = 0x1000000;
  while ((*puVar3 != se_file_no || (*puVar3 == 0xffffffff))) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar1 >> 0x18;
    iVar1 = iVar1 + 0x1000000;
    if (3 < iVar2) {
      return -1;
    }
  }
  return (char)iVar2;
}

SE_WRK* SeGetSeWrk(int no) {
  if ((uint)no < 0x18) {
    return se_wrk + no;
  }
  return (tagSE_WRK *)0x0;
}

int SeGetSvStat(int v_no) {
  IOP_STAT *pIVar1;
  
  pIVar1 = GetIopStatP();
  return pIVar1->sev_stat[v_no].status;
}

int SeStartCmn(int se_no, float *pos, float *mb, int fin_spd, u_short vol_max) {
	int vpos;
	
  int vpos;
  int iVar1;
  
  if (se_no == 0xff) {
    iVar1 = -1;
  }
  else {
    vpos = SeGetFreeVoice(0,1);
    iVar1 = -1;
    if (vpos != -1) {
      SeStartVpCmn(se_no,vpos,pos,mb,fin_spd,vol_max);
      iVar1 = vpos;
    }
  }
  return iVar1;
}

void SeStartVpCmn(int se_no, int vpos, float *pos, float *mb, int fin_spd, u_short vol_max) {
	SE_WRK *swp;
	int mode;
	float rot_oc;
	
  short sVar1;
  int iVar2;
  tagSE_WRK *ptVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = SeChkReqMode(pos,mb);
  ptVar3 = SeGetSeWrk(vpos);
  SeInitSeWrkSub(vpos);
  ptVar3->se_p = (short)se_no;
  ptVar3->v_p = (short)vpos;
  ptVar3->fade_spd = (short)fin_spd;
  if ((fin_spd & 0xffffU) == 0) {
    ptVar3->fade_mode = '\0';
    ptVar3->fade_vol = 0xfff;
  }
  else {
    ptVar3->fade_vol = 0;
    ptVar3->fade_mode = '\x01';
  }
  ptVar3->vol_rate = (short)(((uint)(ushort)ptVar3->fade_vol << 0xc) / 0xfff);
  switch(iVar2) {
  default:
    goto switchD_00112fdc_caseD_0;
  case 2:
    fVar5 = *pos;
    ptVar3->spos[0] = fVar5;
    ptVar3->status = 1;
    fVar4 = pos[1];
    ptVar3->atr = 1;
    break;
  case 4:
    fVar5 = *pos;
    ptVar3->spos[0] = fVar5;
    ptVar3->atr = 3;
    fVar4 = pos[1];
  }
  ptVar3->spos[1] = fVar4;
  fVar4 = pos[2];
  ptVar3->spos[2] = fVar4;
  fVar4 = SgAtan2f(fVar5 - camera.p.x,fVar4 - camera.p.z);
  fVar5 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
  fVar4 = SeCmdGetAngle(fVar4,fVar5);
  sVar1 = SeCmdGetPan(fVar4);
  ptVar3->pan = sVar1;
  sVar1 = SeCmdGetPitch(fVar4,ptVar3->pitch);
  ptVar3->pitch = sVar1;
switchD_00112fdc_caseD_0:
  SetIopCmdLg(2,vpos,(uint)(ushort)ptVar3->se_p,(uint)(ushort)ptVar3->pitch,
              (uint)(ushort)ptVar3->pan,(uint)(ushort)ptVar3->vol_rate,0,0);
  return;
}

static int SeChkReqMode(float *pos, float *mb) {
	int mode;
	
  int iVar1;
  
  iVar1 = 2;
  if (pos == (float *)0x0) {
    if (mb == (float *)0x0) {
      iVar1 = 1;
    }
  }
  else if (mb != (float *)0x0) {
    iVar1 = 0;
  }
  return iVar1;
}

u_char SeGetFreeSv() {
  return '\0';
}

int SeStartV(int se_no, u_char voice_no) {
  int in_v0_lo;
  
  return in_v0_lo;
}
