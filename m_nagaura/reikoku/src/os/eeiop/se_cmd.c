// STATUS: NOT STARTED


void SeCtrlInit() {
  return;
}

void SeCtrlMain() {
	SE_WRK tmp_sw;
	SE_WRK *swp;
	int cmd_flg;
	int i;
	float rot_oc;
	float dist_obj;
	float rot_cam;
	u_char stop_flg;
	
  uchar uVar1;
  void *pvVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  tagSE_WRK *ptVar7;
  ushort uVar8;
  char cVar9;
  int voice_num;
  float fVar10;
  float rot1;
  float fVar11;
  tagSE_WRK tmp_sw;
  
  voice_num = 0;
  ptVar7 = SeGetSeWrk(0);
  UpdateSeMenuFade();
  rot1 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
  do {
    bVar3 = false;
    cVar9 = false;
    if (ptVar7->status == 0) goto switchD_00113298_caseD_5;
    uVar1 = ptVar7->fade_mode;
    if (uVar1 == '\0') {
      uVar8 = ptVar7->fade_tgt;
      ptVar7->fade_vol = uVar8;
    }
    else if (uVar1 == '\x01') {
      uVar8 = ptVar7->fade_tgt;
      uVar4 = ptVar7->fade_vol + ptVar7->fade_spd;
      ptVar7->fade_vol = uVar4;
      if (uVar8 < uVar4) {
        ptVar7->fade_vol = uVar8;
        ptVar7->fade_mode = '\0';
      }
      cVar9 = true;
    }
    else if (uVar1 == '\x02') {
      cVar9 = (int)(uint)(ushort)ptVar7->fade_spd <=
              (int)((uint)(ushort)ptVar7->fade_vol - (uint)(ushort)ptVar7->fade_tgt);
      if ((bool)cVar9) {
        ptVar7->fade_vol = ptVar7->fade_vol - ptVar7->fade_spd;
      }
      else {
        ptVar7->fade_mode = '\0';
        ptVar7->fade_vol = ptVar7->fade_tgt;
        SeStop(voice_num);
        ptVar7->status = 0;
      }
      bVar3 = !(bool)cVar9;
      uVar8 = ptVar7->fade_tgt;
    }
    else {
      uVar8 = ptVar7->fade_tgt;
    }
    if (ptVar7->fade_vol == uVar8) {
      ptVar7->vol_rate = 0x1000;
    }
    else {
      ptVar7->vol_rate = (short)(((uint)(ushort)ptVar7->fade_vol << 0xc) / 0xfff);
    }
    ptVar7->now_pitch = ptVar7->pitch;
    switch(ptVar7->atr & 7) {
    case 0:
    case 3:
      if (sm_fade.mvol != sm_fade.tgt_vol) {
        cVar9 = cVar9 + '\x01';
      }
      goto switchD_00113298_caseD_5;
    case 1:
      fVar10 = SgAtan2f(ptVar7->spos[0] - camera.p.x,ptVar7->spos[2] - camera.p.z);
      fVar11 = SeCmdGetAngle(fVar10,rot1);
      fVar10 = GetDistV(ptVar7->spos,&plyr_wrk.move_box.spd.z);
      fVar10 = GetDist(fVar10,ptVar7->spos[1] - plyr_wrk.move_box.spd.w);
      sVar5 = SeCmdGetPan(fVar11);
      ptVar7->pan = sVar5;
      sVar5 = SeCmdGetPhase(fVar11);
      ptVar7->vol_phase = (uchar)sVar5;
      sVar6 = SeCmdGetPitch(fVar11,ptVar7->pitch);
      sVar5 = ptVar7->vol_rate;
      break;
    case 2:
      if ((*(uint *)((int)ene_wrk + (uint)ptVar7->ene_wrk_no * 0x430) & 1) != 0) {
        pvVar2 = ptVar7->mpos;
        ptVar7->spos[0] = *(float *)((int)pvVar2 + 0x10);
        ptVar7->spos[1] = *(float *)((int)pvVar2 + 0x14);
        ptVar7->spos[2] = *(float *)((int)pvVar2 + 0x18);
      }
      fVar10 = SgAtan2f(ptVar7->spos[0] - camera.p.x,ptVar7->spos[2] - camera.p.z);
      fVar11 = SeCmdGetAngle(fVar10,rot1);
      fVar10 = GetDistV(ptVar7->spos,&plyr_wrk.move_box.spd.z);
      fVar10 = GetDist(fVar10,ptVar7->spos[1] - plyr_wrk.move_box.spd.w);
      sVar5 = SeCmdGetPan(fVar11);
      ptVar7->pan = sVar5;
      sVar5 = SeCmdGetPhase(fVar11);
      ptVar7->vol_phase = (uchar)sVar5;
      sVar6 = SeCmdGetPitch(fVar11,ptVar7->pitch);
      sVar5 = ptVar7->vol_rate;
      break;
    case 4:
      pvVar2 = ptVar7->mpos;
      fVar11 = *(float *)((int)pvVar2 + 0x10);
      ptVar7->spos[0] = fVar11;
      ptVar7->spos[1] = *(float *)((int)pvVar2 + 0x14);
      fVar10 = *(float *)((int)pvVar2 + 0x18);
      ptVar7->spos[2] = fVar10;
      fVar10 = SgAtan2f(fVar11 - camera.p.x,fVar10 - camera.p.z);
      fVar10 = SeCmdGetAngle(fVar10,rot1);
      sVar5 = SeCmdGetPan(fVar10);
      ptVar7->pan = sVar5;
      sVar5 = SeCmdGetPhase(fVar10);
      ptVar7->vol_phase = (uchar)sVar5;
      sVar6 = SeCmdGetPitch(fVar10,ptVar7->pitch);
      fVar10 = 0.0;
      sVar5 = ptVar7->vol_rate;
      break;
    default:
      goto switchD_00113298_caseD_5;
    }
    ptVar7->now_pitch = sVar6;
    sVar5 = SeCmdGetVol(fVar10,sVar5);
    ptVar7->vol_rate = sVar5;
    if ((map_wrk.now_room != ptVar7->room_id) && (ptVar7->room_id != 0xff)) {
      ptVar7->vol_rate = (short)(((int)sVar5 & 0xffffU) >> 1);
    }
    cVar9 = cVar9 + '\x01';
switchD_00113298_caseD_5:
    if ((cVar9 != '\0') && (!bVar3)) {
      if (ptVar7->menu == '\0') {
        SetIopCmdLg(3,(uint)(ushort)ptVar7->v_p,(uint)(ushort)ptVar7->se_p,
                    (uint)(ushort)ptVar7->now_pitch,(uint)(ushort)ptVar7->pan,
                    (int)((uint)(ushort)ptVar7->vol_rate * sm_fade.mvol) / 0xfff,0,0);
      }
      else {
        SetIopCmdLg(3,(uint)(ushort)ptVar7->v_p,(uint)(ushort)ptVar7->se_p,
                    (uint)(ushort)ptVar7->now_pitch,(uint)(ushort)ptVar7->pan,
                    (uint)(ushort)ptVar7->vol_rate,0,0);
      }
    }
    voice_num = voice_num + 1;
    ptVar7 = ptVar7 + 1;
    if (0x17 < voice_num) {
      return;
    }
  } while( true );
}

u_short SeCmdGetPan(float rot) {
	float panf;
	
  short sVar1;
  float fVar3;
  uint uVar2;
  
  fVar3 = SgSinf(rot);
  uVar2 = (int)(fVar3 * 640.0 + 640.0) & 0xffff;
  sVar1 = (short)uVar2;
  if (0x4ff < uVar2) {
    sVar1 = 0x4ff;
  }
  return sVar1;
}

u_short SeCmdGetPhase(float rot) {
  if ((rot <= DAT_00355144) && (DAT_00355144 <= -rot)) {
    return 0;
  }
  return 1;
}

u_short SeCmdGetPitch(float rot, u_short pitch) {
	float fpitch_rate;
	
  if (rot < 0.0) {
    rot = -rot;
  }
  return (short)(int)((float)((int)pitch & 0xffff) +
                     (rot / DAT_00355148) * (float)((int)pitch & 0xffff) * DAT_0035514c);
}

u_short SeCmdGetVol(float dist, u_short vol) {
	float ratio_dist;
	
  float fVar1;
  
  if (dist < DAT_00355150) {
    fVar1 = (DAT_00355150 - dist) / DAT_00355150;
    fVar1 = fVar1 * fVar1;
  }
  else {
    fVar1 = 0.0;
  }
  return (short)(int)((float)((int)vol & 0xffff) * fVar1);
}

void SeCmdSetVolForStts(SE_WRK *swp) {
  return;
}

static void SeCmdAjstVolChng(u_short *new_vol, u_short old_vol) {
  return;
}

int SeCmdFdIn(int sw_no, u_short vol_tgt, short int vol_inc) {
  int in_v0_lo;
  
  return in_v0_lo;
}

int SeCmdFdOut(int sw_no, short int vol_inc) {
	SE_WRK *swp;
	
  tagSE_WRK *ptVar1;
  
  if (((uint)sw_no < 0x18) && (ptVar1 = SeGetSeWrk(sw_no), ptVar1->status != 0)) {
    if (-1 < (short)vol_inc) {
      return -1;
    }
    ptVar1->fade_spd = 0;
    ptVar1->fade_mode = '\x02';
    ptVar1->fade_vol = 0;
    return sw_no;
  }
  return -1;
}

static void SeSetVolReg(SE_WRK *swp) {
  return;
}

float SeCmdGetAngle(float rot0, float rot1) {
	float rot_oc;
	
  float rot_oc;
  
  rot_oc = rot0 - rot1;
  RotLimitChk(&rot_oc);
  return rot_oc;
}

static int SeCmdGetRotRatio(float rot, float *ratio_rot_l, float *ratio_rot_r) {
  int in_v0_lo;
  
  return in_v0_lo;
}

int SeCmdSetPitch(int sw_no, u_short pitch) {
  int in_v0_lo;
  
  SetIopCmdSm(7,sw_no,(int)pitch & 0xffff,0);
  return in_v0_lo;
}

u_short SeCmdGetDataPitch(int se_req_no) {
  short in_v0_lo;
  
  return in_v0_lo;
}
