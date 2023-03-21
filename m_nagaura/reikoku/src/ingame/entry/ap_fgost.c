// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#100,  not equal)
enum {
	FG_NO_REQ = 0,
	FG_COUNT = 1,
	FG_WAIT = 2,
	FG_ENTRY = 3,
	FG_BATTLE = 4,
	FG_DEAD = 5
};

typedef struct {
	u_char mode;
	u_char load_id;
	u_char load_num;
	u_char load_no;
} FG_LOAD_WRK;

// warning: multiple differing types with the same name (#100,  not equal)
enum {
	FG_LOAD_MODE_READY = 0,
	FG_LOAD_MDL_LOAD = 1,
	FG_LOAD_MDL_WAIT = 2,
	FG_LOAD_MOT_LOAD = 3,
	FG_LOAD_MOT_WAIT = 4,
	FG_LOAD_SE_LOAD = 5,
	FG_LOAD_SE_WAIT = 6,
	FG_LOAD_SE_TRANS = 7,
	FG_LOAD_MODE_END = 8
};

int load_mdl_addr[0] = {
};
int load_mot_addr[0] = {
};
int load_se_addr[0] = {
};
FG_LOAD_WRK fg_load_wrk = {
	/* .mode = */ 0,
	/* .load_id = */ 0,
	/* .load_num = */ 0,
	/* .load_no = */ 0
};

void FloatGhostAppearInit() {
	int i;
	
  byte (*pabVar1) [3];
  int iVar2;
  
  ap_wrk.fg_mode = 1;
  pabVar1 = ap_wrk.fg_pos[1];
  ap_wrk.fgst_no = 0xff;
  iVar2 = 2;
  do {
    pabVar1[-1][0] = 0xff;
    iVar2 = iVar2 + -1;
    (*pabVar1)[0] = 0xff;
    pabVar1 = (byte (*) [3])(*pabVar1 + 1);
  } while (-1 < iVar2);
  ap_wrk.stts = ap_wrk.stts | 0x40;
  return;
}

int FloatGhostEntrySet(u_char area) {
  return 0;
}

int FloatGhostAppearMain() {
	u_char type;
	
  int iVar1;
  short sVar2;
  uint uVar3;
  uchar type;
  
  uVar3 = (uint)ap_wrk.fg_mode;
  if (uVar3 == 1) {
    if (ap_wrk.fg_set_num != 0) {
      if (ingame_wrk.msn_no == 3) {
        sVar2 = 500;
      }
      else {
        sVar2 = 0x15e;
      }
      register0x00000020 = ram0x003227d6 + (ushort)ap_wrk.ptime * sVar2;
    }
    iVar1 = EnemyUseJudge(1);
    if (iVar1 != 0) {
      if (ram0x003227d6 < 0x3b6) {
        return 0;
      }
      ram0x003227d6 = 0x3b6;
      return 0;
    }
    iVar1 = FloatGhostAppearJudge();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = DeadGhostAppearJudge();
    if (iVar1 != 0) {
      DeadGhostAppearReq();
      ap_wrk.fg_mode = 3;
      ram0x003227d6 = 700;
      return 0;
    }
    ap_wrk.fg_mode = 2;
    iVar1 = GetFloatGhostAppearPosType(&type);
    if ((iVar1 == 0) && (plyr_wrk.mode != 1)) {
      return 0;
    }
    FloatGhostAppearPosSet(0xff,ene_wrk[2].mpos.p2,ene_wrk[2].mpos.p5);
    ene_wrk[2].move_box.comm_add._4_4_ = 2;
    iVar1 = (uint)(ushort)ap_wrk._88_2_ % 0x14 + (uint)ingame_wrk.msn_no * 0x14;
  }
  else {
    if (uVar3 != 2) {
      return 0;
    }
    iVar1 = EnemyUseJudge(1);
    if (iVar1 != 0) {
      ap_wrk.fg_mode = 1;
      ram0x003227d6 = 0x3b6;
      return 0;
    }
    iVar1 = GetFloatGhostAppearPosType(&type);
    if (iVar1 == 0) {
      return 0;
    }
    FloatGhostAppearPosSet(type,ene_wrk[2].mpos.p2,ene_wrk[2].mpos.p5);
    iVar1 = (uint)(ushort)ap_wrk._88_2_ % 0x14 + (uint)ingame_wrk.msn_no * 0x14;
    ene_wrk[2].move_box.comm_add._4_4_ = uVar3;
  }
  ap_wrk.fg_mode = 3;
  ene_wrk[2].mpos.p0[0]._1_1_ = fgst_ap_no[iVar1];
  ene_wrk[2].mpos.p0[0]._0_1_ = 1;
  return 0;
}

int FloatGhostAppearJudge() {
  if ((plyr_wrk.mode != 4) && (ingame_wrk.mode != 0xe)) {
    if (999 < ram0x003227d6) {
      ram0x003227d6 = 0x3b6;
      return 1;
    }
    return 0;
  }
  return 0;
}

int FloatGhostAppearTypeSet(u_char fg_no, u_char wrk_no, u_char room) {
	int i;
	int ret;
	
  byte *pbVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  
  pbVar1 = ap_wrk.fg_pos[(int)(char)wrk_no & 0xffU] + 2;
  iVar4 = 0;
  iVar3 = 2;
  do {
    *pbVar1 = 0xff;
    iVar3 = iVar3 + -1;
    pbVar1 = pbVar1 + -1;
  } while (-1 < iVar3);
  iVar3 = 0;
  if (*(char *)(*(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + 1) != '\v') {
    do {
      puVar2 = (uchar *)(iVar3 * 0x30 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4));
      if ((*(ushort *)
            (((int)(char)fg_no & 0xffU) * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) +
            0x36) == (ushort)puVar2[1]) && (room == *puVar2)) {
        ap_wrk.fg_pos[(int)(char)wrk_no & 0xffU][iVar4] = (byte)iVar3;
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (*(char *)(iVar3 * 0x30 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + 1) !=
             '\v');
  }
  return iVar4;
}

int GetFloatGhostAppearPosType(u_char *type) {
	int i;
	int j;
	
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte (*pabVar4) [3];
  
  iVar1 = 0;
  iVar3 = 0;
  pabVar4 = ap_wrk.fg_pos;
  while (plyr_wrk.dop._13_1_ != area_wrk.rgst[iVar1 + 8]) {
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 2;
    pabVar4 = pabVar4[1];
    if (1 < iVar1) {
      return 0;
    }
  }
  if ((*pabVar4)[0] == 0xff) {
    *type = 0xff;
    return 1;
  }
  if (plyr_wrk.mode != 1) {
    if (plyr_wrk.se_deadly._3_1_ != '\0') {
      return 0;
    }
    pbVar2 = (byte *)(iVar3 + iVar1 + 0x3227ba);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (*(short *)((uint)*pbVar2 * 0x30 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + 4)
          == plyr_wrk.dop.dov[0]._0_2_) {
        *type = *pbVar2;
        return 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < 3);
    return 0;
  }
  pbVar2 = (byte *)(iVar3 + iVar1 + 0x3227ba);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(short *)((uint)*pbVar2 * 0x30 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + 4) ==
        plyr_wrk.dop.dov[0]._0_2_) {
      *type = 0xff;
      return 1;
    }
    pbVar2 = pbVar2 + 1;
  } while (iVar1 < 3);
  return 0;
}

void FloatGhostAppearPosSet(u_char dat_no, float *set_pos, float *set_rot) {
	int i;
	float dist;
	float dist_bak;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float pos [4];
  float tv [4];
  float rv [4];
  
  uVar4 = (int)(char)dat_no & 0xff;
  memset((Vector4 *)tv,0,0x10);
  tv[2] = DAT_00355cf0;
  memset(rv,0,0x10);
  *set_rot = 0.0;
  set_rot[1] = 0.0;
  set_rot[2] = 0.0;
  set_rot[3] = 0.0;
  if (uVar4 == 0xff) {
    iVar3 = GetRndSP(0,0x167);
    rv[1] = SetRot360((ushort)iVar3);
    RotFvector(rv,(float *)(Vector4 *)tv);
    sceVu0AddVector((Vector4 *)set_pos,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
  }
  else {
    iVar3 = 0;
    fVar6 = *set_rot;
    if (*(char *)(uVar4 * 0x30 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + 2) != '\0') {
      do {
        iVar1 = uVar4 * 0x30;
        iVar2 = iVar3 * 0xc;
        pos[0] = (float)*(int *)(iVar1 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + iVar2
                                + 0xc);
        pos[1] = (float)*(int *)(iVar1 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + iVar2
                                + 0x10);
        pos[2] = (float)*(int *)(iVar1 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + iVar2
                                + 0x14);
        sceVu0AddVector((Vector4 *)pos,room_wrk.pos,(Vector4 *)pos);
        fVar5 = GetDistV2(pos,&plyr_wrk.move_box.spd.z);
        if (fVar6 < fVar5) {
          *set_pos = pos[0];
          set_pos[1] = pos[1];
          set_pos[2] = pos[2];
          set_pos[3] = pos[3];
          fVar6 = SetRot360(*(ushort *)
                             (iVar1 + *(int *)(&fg_ap_dat + (uint)ingame_wrk.msn_no * 4) + iVar3 * 2
                             + 6));
          set_rot[1] = fVar6;
          fVar6 = fVar5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(iVar1 + *(int *)(&fg_ap_dat +
                                                            (uint)ingame_wrk.msn_no * 4) + 2));
    }
  }
  return;
}

int FloatGhostBattleEnd() {
  ap_wrk.fg_mode = 1;
  ram0x003227d6 = 0;
  return (int)&ap_wrk;
}

int FloatGhostEscapeEnd() {
  ram0x003227d6 = 700;
  ap_wrk.fg_mode = 1;
  return (int)&ap_wrk;
}

void FloatGhostLoadReq() {
  memset(&fg_load_wrk,0,4);
  fg_load_wrk.mode = '\0';
  return;
}

int FloatGhostLoadMain() {
  uchar uVar1;
  int iVar2;
  
  switch(fg_load_wrk.mode) {
  case '\0':
    iVar2 = FloatGhostLoadSet();
    if (iVar2 == 0) {
      fg_load_wrk.mode = '\b';
    }
    else {
      fg_load_wrk.mode = '\x01';
    }
    break;
  case '\x01':
    GetFloatGhostModelLoad();
    fg_load_wrk.mode = '\x02';
    break;
  case '\x02':
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) {
      return 0;
    }
    GetFloatGhostModelLoadAfter();
    fg_load_wrk.mode = '\x03';
  case '\x03':
    GetFloatGhostMotionLoad();
    fg_load_wrk.mode = '\x04';
    break;
  case '\x04':
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) {
      return 0;
    }
    GetFloatGhostMotionLoadAfter();
    fg_load_wrk.mode = '\x05';
  case '\x05':
    GetFloatGhostSELoad();
    fg_load_wrk.mode = '\x06';
    break;
  case '\x06':
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) {
      return 0;
    }
    fg_load_wrk.mode = '\a';
    FGTransInit();
  case '\a':
    SeFGhostTransCtrl();
    uVar1 = IsEndFgTrans();
    if (uVar1 != '\0') {
      fg_load_wrk.mode = '\b';
switchD_00199d88_caseD_8:
      return 1;
    }
    break;
  case '\b':
    goto switchD_00199d88_caseD_8;
  }
  return 0;
}

int FloatGhostLoadSet() {
  if ((ingame_wrk.msn_no != 0) && (ingame_wrk.msn_no != 4)) {
    ap_wrk.fg_set_num = 1;
    fg_load_wrk.load_no = fgst_ap_no[ingame_wrk.msn_no][(uint)(ushort)ap_wrk._88_2_ % 0x14];
    if (ap_wrk.fgst_no != fg_load_wrk.load_no) {
      if (ap_wrk.fgst_no != 0xff) {
        motReleaseAniMdlBuf((uint)*(ushort *)
                                   ((uint)ap_wrk.fgst_no * 0x40 +
                                    *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1c),
                            (uint *)0x1330000);
      }
      return 1;
    }
  }
  return 0;
}

int FloatGhostSetJudge() {
  return 1;
}

void GetLoadFloatGhost(u_char set_num, u_char *set_fgst) {
  *set_fgst = fgst_ap_no[ingame_wrk.msn_no][(uint)(ushort)ap_wrk._88_2_ % 0x14];
  return;
}

void GetFloatGhostModelLoad() {
  LoadReq(*(ushort *)
           ((uint)fg_load_wrk.load_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) +
           0x1a) + 799,0x13e0000);
  ap_wrk.fgst_no = fg_load_wrk.load_no;
  return;
}

void GetFloatGhostModelLoadAfter() {
  motInitEnemyMdl((uint *)0x13e0000,
                  (uint)*(ushort *)
                         ((uint)fg_load_wrk.load_no * 0x40 +
                          *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a));
  return;
}

void GetFloatGhostMotionLoad() {
  LoadEneDmgTex((uint)*(ushort *)
                       ((uint)fg_load_wrk.load_no * 0x40 +
                        *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a),(uint *)0x13c8000)
  ;
  LoadReq(*(ushort *)
           ((uint)fg_load_wrk.load_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) +
           0x1c) + 0x363,0x1330000);
  return;
}

void GetFloatGhostMotionLoadAfter() {
  int iVar1;
  
  iVar1 = (uint)fg_load_wrk.load_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4);
  motInitEnemyAnm((uint *)0x1330000,(uint)*(ushort *)(iVar1 + 0x1a),(uint)*(ushort *)(iVar1 + 0x1c))
  ;
  return;
}

void GetFloatGhostSELoad() {
  LoadReq(*(int *)((uint)fg_load_wrk.load_no * 0x40 +
                   *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x20),0x1460000);
  return;
}

void FloatGhostAppearStop() {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0x29;
  pbVar1 = ap_wrk.room_fg + 0x29;
  do {
    *pbVar1 = 0;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar1 + -1;
  } while (-1 < iVar2);
  return;
}

void FloatGhostAppearStart() {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0x29;
  pbVar1 = ap_wrk.room_fg + 0x29;
  do {
    *pbVar1 = 1;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar1 + -1;
  } while (-1 < iVar2);
  return;
}
