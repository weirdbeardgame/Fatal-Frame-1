// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#99,  not equal)
enum {
	DGLOAD_MODE_REQ = 0,
	DGLOAD_MODE_START = 1,
	DGLOAD_MODE_MDL = 2,
	DGLOAD_MODE_MOT = 3,
	DGLOAD_MODE_SE = 4,
	DGLOAD_MODE_END = 5
};

typedef struct {
	u_char mode;
	u_char load_mode;
} DGST_WRK;

u_char dgst_room[0] = {
};
MSN_LOAD_DAT dgst_load[3] = {
	/* [0] = */ {
		/* .file_no = */ 854,
		/* .file_type = */ 8,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [1] = */ {
		/* .file_no = */ 897,
		/* .file_type = */ 9,
		/* .tmp_no = */ 55,
		/* .addr = */ 0
	},
	/* [2] = */ {
		/* .file_no = */ 1379,
		/* .file_type = */ 2,
		/* .tmp_no = */ 1,
		/* .addr = */ 16
	}
};
DGST_WRK dgst_wrk = {
	/* .mode = */ 0,
	/* .load_mode = */ 0
};

void DeadGhostAppearReq() {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR tv0;
	sceVu0FVECTOR tv1;
	sceVu0FVECTOR tv2;
	sceVu0FVECTOR rv;
	
  int iVar1;
  float pos [4];
  float tv0 [4];
  float tv1 [4];
  float tv2 [4];
  float rv [4];
  
  memset((Vector4 *)tv0,0,0x10);
  tv0[2] = 1400.0;
  memset((Vector4 *)tv1,0,0x10);
  tv1[2] = 1800.0;
  memset((Vector4 *)tv2,0,0x10);
  tv2[2] = DAT_00355cec;
  memset(rv,0,0x10);
  if (ingame_wrk.msn_no == 3) {
    ene_wrk[0].dat_no = 0xb;
    ene_wrk[1].move_box.rot.z._3_1_ = 0xc;
    ene_wrk[2].mpos.p0[0]._1_1_ = 0xd;
  }
  else if (ingame_wrk.msn_no == 4) {
    ene_wrk[0].dat_no = 8;
    ene_wrk[1].move_box.rot.z._3_1_ = 9;
    ene_wrk[2].mpos.p0[0]._1_1_ = 10;
  }
  ene_wrk[0].sta = 2;
  ene_wrk[2].move_box.comm_add._4_4_ = 2;
  ene_wrk[2].mpos.p0[0]._0_1_ = 1;
  ene_wrk[0].type = 1;
  ene_wrk[1].move_box.spd._10_4_ = 2.802597e-45;
  ene_wrk[1].move_box.rot.z._2_1_ = 1;
  iVar1 = GetRndSP(0,0x167);
  rv[1] = SetRot360((ushort)iVar1);
  RotFvector(rv,(float *)(Vector4 *)tv0);
  sceVu0AddVector(&ene_wrk[0].move_box.tpos,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv0);
  iVar1 = GetRndSP(0,0x167);
  rv[1] = SetRot360((ushort)iVar1);
  RotFvector(rv,(float *)(Vector4 *)tv1);
  sceVu0AddVector((Vector4 *)((int)&ene_wrk[1].move_box.trot.z + 2),
                  (Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv1);
  iVar1 = GetRndSP(0,0x167);
  rv[1] = SetRot360((ushort)iVar1);
  RotFvector(rv,(float *)(Vector4 *)tv2);
  sceVu0AddVector((Vector4 *)ene_wrk[2].mpos.p2,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv2);
  return;
}

void DeadGhostAppearMain() {
  return;
}

int DeadGhostAppearJudge() {
	int i;
	
  byte bVar1;
  uchar uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  if (ingame_wrk.msn_no == 3) {
    pbVar4 = &dgst_room;
    if (dgst_room != plyr_wrk.dop._13_1_) {
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        if (bVar1 == 0xff) {
          return 0;
        }
      } while (*pbVar4 != plyr_wrk.dop._13_1_);
    }
    iVar3 = EnemyUseJudge(0);
    if (iVar3 == 0) {
      pbVar4 = ap_wrk.gg_room;
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        if (*pbVar4 == plyr_wrk.dop._13_1_) {
          return 0;
        }
        pbVar4 = ap_wrk.gg_room + iVar3 + 1;
        iVar3 = iVar5;
      } while (iVar5 < 5);
      uVar2 = IsAllConnectDoorClose();
      if (uVar2 != '\0') {
        if ((ushort)ap_wrk._90_2_ <= (ushort)ap_wrk._88_2_) {
          ap_wrk._90_2_ = ap_wrk._90_2_ + 1;
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

void DeadGhostLoadReq() {
  dgst_wrk.load_mode = '\0';
  return;
}

int DeadGhostLoad() {
  int iVar1;
  
  if (ingame_wrk.msn_no == 3) {
    switch(dgst_wrk.load_mode) {
    case '\0':
      dgst_wrk.load_mode = '\x01';
      break;
    case '\x01':
      LoadReq(0x356,0xc80000);
      dgst_wrk.load_mode = '\x02';
      return 0;
    case '\x02':
      iVar1 = IsLoadEndAll();
      if (iVar1 != 0) {
        motInitEnemyMdl((uint *)0xc80000,0x37);
        LoadEneDmgTex(0x2a,(uint *)0xac8000);
        LoadReq(0x381,0xa30000);
        dgst_wrk.load_mode = '\x03';
        return 0;
      }
      break;
    case '\x03':
      iVar1 = IsLoadEndAll();
      if (iVar1 != 0) {
        motInitEnemyAnm((uint *)0xa30000,0x37,0x1e);
        SeFileLoadAndSetFGhost(0x563,0x10);
        ap_wrk.fg_se_empty[0] = 1;
        dgst_wrk.load_mode = '\x04';
        return 0;
      }
      break;
    case '\x04':
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) {
        return 0;
      }
      DeadGhostSetLoad();
      dgst_wrk.load_mode = '\x05';
      break;
    case '\x05':
      goto switchD_001992e0_caseD_5;
    }
    iVar1 = 0;
  }
  else {
switchD_001992e0_caseD_5:
    iVar1 = 1;
  }
  return iVar1;
}

void DeadGhostBattleEnd() {
  int iVar1;
  
  iVar1 = EnemyUseJudge(1);
  if (iVar1 != 0) {
    FloatGhostBattleEnd();
    return;
  }
  return;
}

int EnemyNoDeadGhostJudge(int ene_no) {
  int iVar1;
  
  if (ingame_wrk.msn_no == 3) {
    if (((ene_no == 0xb) || (ene_no == 0xc)) || (iVar1 = 0, ene_no == 0xd)) {
      return 1;
    }
  }
  else {
    iVar1 = 0;
    if (ingame_wrk.msn_no == 4) {
      if (ene_no == 8) {
        return 1;
      }
      if (ene_no == 9) {
        return 1;
      }
      iVar1 = 1;
      if (ene_no != 10) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

void DeadGhostSetLoad() {
	int i;
	
  MSN_LOAD_DAT *dat;
  int iVar1;
  
  iVar1 = 2;
  dat = dgst_load;
  do {
    iVar1 = iVar1 + -1;
    SetDataLoadWrk(dat);
    dat = dat + 1;
  } while (-1 < iVar1);
  return;
}

void DeadGhostLoadDel() {
	int i;
	
  short file_no;
  MSN_LOAD_DAT *pMVar1;
  int iVar2;
  
  iVar2 = 2;
  pMVar1 = dgst_load;
  file_no = dgst_load[0].file_no;
  while( true ) {
    iVar2 = iVar2 + -1;
    pMVar1 = pMVar1 + 1;
    DelDataLoadWrk(file_no);
    if (iVar2 < 0) break;
    file_no = pMVar1->file_no;
  }
  return;
}
