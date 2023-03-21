// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#94,  not equal)
enum {
	ENE_DEAD_NO_MODE = 0,
	ENE_DEAD_MODE_M3BG1 = 1,
	ENE_DEAD_MODE_M3BG1_WAIT = 2,
	ENE_DEAD_MODE_BGREQ = 3,
	ENE_DEAD_MODE_DGREQ = 4,
	ENE_DEAD_MODE_FGREQ = 5
};

ENE_DAT jene_dat0[0] = {
};
AENE_INFO_DAT aene_info_dat0[0] = {
};
FLY_DATA fly_dat[0] = {
};
ENE_DAT jene_dat1[0] = {
};
ENE_DAT fene_dat1[0] = {
};
AENE_INFO_DAT aene_info_dat1[0] = {
};
ENE_DAT jene_dat2[0] = {
};
ENE_DAT fene_dat2[0] = {
};
AENE_INFO_DAT aene_info_dat2[0] = {
};
ENE_DAT jene_dat3[0] = {
};
ENE_DAT fene_dat3[0] = {
};
AENE_INFO_DAT aene_info_dat3[0] = {
};
ENE_DAT jene_dat4[0] = {
};
ENE_DAT fene_dat4[0] = {
};
AENE_INFO_DAT aene_info_dat4[0] = {
};
ENE_DAT *jene_dat[0] = {
};
ENE_DAT *fene_dat[0] = {
};
AENE_INFO_DAT *aene_info_dat[0] = {
};
u_char req_dmg_ef[3] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0
};
static u_short es_adpcm_tm = 0;
int ene_dead_load = 0;
int ene_dead_mode = 0;
int erootd0[20][3] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [3] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [4] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [5] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [6] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [7] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [8] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [9] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [10] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [11] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [12] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [13] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [14] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [15] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [16] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [17] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [18] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [19] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};
int erootd1[20][3] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [3] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [4] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [5] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [6] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [7] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [8] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [9] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [10] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [11] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [12] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [13] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [14] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [15] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [16] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [17] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [18] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [19] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};
int erootd2[20][3] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [3] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [4] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [5] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [6] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [7] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [8] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [9] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [10] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [11] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [12] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [13] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [14] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [15] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [16] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [17] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [18] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* [19] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};
u_char er_max_tbl[3] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0
};

void EneCtrlMain() {
	u_char i;
	static u_char flag = 0;
	
  ushort uVar1;
  uint uVar2;
  int iVar3;
  FLY_WRK *fw;
  ENE_WRK *ew;
  uint uVar4;
  
  if (DBG_cam_id_move_chk == 0) {
    if (flag_120 != '\0') {
      flag_120 = '\0';
      ReqEneStop('\0','\0');
    }
  }
  else if (flag_120 == '\0') {
    flag_120 = '\x01';
    ReqEneStop('\x01','\0');
  }
  uVar4 = 0;
  iVar3 = 0;
  do {
    ew = (ENE_WRK *)((int)&ene_wrk[0].sta + iVar3);
    uVar2 = ew->sta;
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) != 0) {
        EneEntryChk((byte)uVar4);
      }
    }
    else {
      if ((uVar2 & 0x2000) != 0) {
        EneDmgTexDel(uVar4);
      }
      iVar3 = EneWrkReleaseChk(ew);
      if (iVar3 == 0) {
        EneRule(ew);
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
    iVar3 = uVar4 * 0x430;
  } while (uVar4 < 4);
  uVar4 = 0;
  iVar3 = 0;
  do {
    fw = (FLY_WRK *)((int)&fly_wrk[0].sta + iVar3);
    uVar1 = fw->sta;
    if ((((uVar1 & 1) != 0) && ((uVar1 & 4) == 0)) && (plyr_wrk.ap_timer == 0)) {
      FlyRule(fw);
      MoveCtrl((MOVE_BOX *)(&fly_wrk[0].move_box.job_no + iVar3));
    }
    uVar4 = uVar4 + 1 & 0xff;
    iVar3 = uVar4 * 0xd0;
  } while (uVar4 < 10);
  plyr_wrk.dop._14_1_ = plyr_wrk.dop._13_1_;
  return;
}

void EneEntryChk(u_char no) {
  byte bVar1;
  int iVar2;
  byte wrk_no;
  uint work_id;
  
  work_id = (int)(char)no & 0xff;
  iVar2 = work_id * 0x430;
  bVar1 = *(byte *)((int)ene_wrk + iVar2 + 0x10);
  wrk_no = (byte)work_id;
  if (bVar1 == 1) {
    FEneEntry(wrk_no,*(byte *)((int)ene_wrk + iVar2 + 0x11));
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      JEneEntry(wrk_no,*(byte *)((int)ene_wrk + iVar2 + 0x11));
    }
  }
  else if (bVar1 == 2) {
    AEneEntry(wrk_no,*(byte *)((int)ene_wrk + iVar2 + 0x11));
  }
  motSetAnmPacket(wrk_no);
  SetEneTexture(work_id);
  SetEneDmgTex(work_id);
  RequestSpirit(work_id,1);
  return;
}

void JEneEntry(u_char wrk_no, u_char dat_no) {
	ENE_WRK *ew;
	sceVu0FVECTOR p;
	float rot;
	u_int sta_save;
	u_char i;
	u_char cnt;
	
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ENE_WRK *ew;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float p [4];
  float rot;
  
  uVar13 = (int)(char)wrk_no & 0xff;
  iVar9 = uVar13 * 0x430;
  ew = (ENE_WRK *)((int)ene_wrk + iVar9);
  uVar17 = *(undefined4 *)((int)ene_wrk + iVar9 + 0x30);
  uVar16 = *(undefined4 *)((int)ene_wrk + iVar9 + 0x34);
  uVar12 = ew->sta & 0x80000000;
  uVar15 = *(undefined4 *)((int)ene_wrk + iVar9 + 0x38);
  uVar14 = *(undefined4 *)((int)ene_wrk + iVar9 + 0x3c);
  InitEneWrk((byte)uVar13);
  bVar2 = ingame_wrk.msn_no;
  *(undefined *)((int)ene_wrk + iVar9 + 0x10) = 0;
  *(char *)((int)ene_wrk + iVar9 + 0x11) = (char)((int)(char)dat_no & 0xffU);
  uVar7 = ew->sta;
  iVar11 = *(int *)(&jene_dat + (uint)bVar2 * 4) + ((int)(char)dat_no & 0xffU) * 0x40;
  uVar4 = *(undefined2 *)(iVar11 + 10);
  ew->sta = uVar7 | 1 | uVar12;
  *(undefined2 *)((int)ene_wrk + iVar9 + 8) = uVar4;
  *(int *)((int)ene_wrk + iVar9 + 0xb0) = iVar11;
  if ((uVar7 & 0x80000000 | uVar12) == 0) {
    if (ingame_wrk.game == 1) {
      *(undefined4 *)((int)ene_wrk + iVar9 + 0x30) = uVar17;
      *(undefined4 *)((int)ene_wrk + iVar9 + 0x34) = uVar16;
      *(undefined4 *)((int)ene_wrk + iVar9 + 0x38) = uVar15;
      *(undefined4 *)((int)ene_wrk + iVar9 + 0x3c) = uVar14;
    }
    else {
      uVar5 = *(ushort *)(iVar11 + 0x3c);
      *(float *)((int)ene_wrk + iVar9 + 0x30) = (float)(uint)*(ushort *)(iVar11 + 0x38);
      sVar3 = *(short *)(iVar11 + 0x3a);
      *(float *)((int)ene_wrk + iVar9 + 0x38) = (float)(uint)uVar5;
      *(undefined4 *)((int)ene_wrk + iVar9 + 0x3c) = 0;
      *(float *)((int)ene_wrk + iVar9 + 0x34) = (float)(int)sVar3;
    }
  }
  else {
    time_wrk.zerohour = 0x708;
    *(undefined4 *)((int)ene_wrk + iVar9 + 0x30) = uVar17;
    *(undefined4 *)((int)ene_wrk + iVar9 + 0x34) = uVar16;
    *(undefined4 *)((int)ene_wrk + iVar9 + 0x38) = uVar15;
    *(undefined4 *)((int)ene_wrk + iVar9 + 0x3c) = uVar14;
  }
  EnePosInfoSet(ew);
  uVar7 = (uint)*(ushort *)(*(int *)((int)ene_wrk + iVar9 + 0xb0) + 0x36);
  if (uVar7 == 1000) {
    rot = GetTrgtRotY((float *)((int)ene_wrk + iVar9 + 0x30),&plyr_wrk.move_box.spd.z);
  }
  else {
    rot = ((float)uVar7 * DAT_00355c04) / 180.0;
    RotLimitChk(&rot);
  }
  *(undefined4 *)((int)ene_wrk + iVar9 + 0x60) = 0;
  *(float *)((int)ene_wrk + iVar9 + 100) = rot;
  *(undefined4 *)((int)ene_wrk + iVar9 + 0x68) = 0;
  *(undefined4 *)((int)ene_wrk + iVar9 + 0x6c) = 0;
  EneBlinkDataSet(ew);
  uVar7 = 0;
  cVar6 = '\0';
  iVar11 = *(int *)((int)ene_wrk + iVar9 + 0xb0);
  while( true ) {
    cVar1 = *(char *)(iVar11 + uVar7 + 0x30);
    *(char *)(iVar9 + 0x253282 + uVar7) = cVar1;
    if (cVar1 != -1) {
      cVar6 = cVar6 + '\x01';
    }
    uVar7 = uVar7 + 1 & 0xff;
    if (5 < uVar7) break;
    iVar11 = *(int *)((int)ene_wrk + iVar9 + 0xb0);
  }
  if (cVar6 == '\x01') {
    if (ingame_wrk.game == 1) {
      iVar11 = *(int *)((int)ene_wrk + iVar9 + 0xb0);
    }
    else {
      DoorLockBattleSet();
      iVar11 = *(int *)((int)ene_wrk + iVar9 + 0xb0);
    }
  }
  else {
    iVar11 = *(int *)((int)ene_wrk + iVar9 + 0xb0);
  }
  AdpcmPlayGhost(*(int *)(iVar11 + 0x24),(float (*) [4])((int)ene_wrk + iVar9 + 0x30),0x3fff,
                 (byte)uVar13,200);
  *(undefined4 *)((int)ene_wrk + iVar9 + 0x388) = DAT_00355c08;
  bVar2 = *(byte *)(*(int *)((int)ene_wrk + iVar9 + 0xb0) + 0x2f);
  *(undefined4 *)((int)ene_wrk + iVar9 + 900) = 0x3f800000;
  *(uint *)((int)ene_wrk + iVar9 + 0x38c) = bVar2 | 0x40404500;
  pvVar8 = SetEffects(0x1c,2);
  uVar7 = *(uint *)(*(int *)((int)ene_wrk + iVar9 + 0xb0) + 0x20);
  *(void **)((int)ene_wrk + iVar9 + 0x380) = pvVar8;
  cVar6 = SeGetGhostPos(uVar7,*(uchar *)((int)ene_wrk + iVar9 + 0x10));
  *(char *)((int)ene_wrk + iVar9 + 0x3fd) = cVar6;
  EneActSet(ew,'\t');
  iVar9 = ZeroGhostBattleJudge();
  if (iVar9 != 0) {
    puVar10 = (uint *)((int)ene_wrk + uVar13 * 0x430);
    *puVar10 = *puVar10 | 0x80000000;
  }
  return;
}

void FEneEntry(u_char wrk_no, u_char dat_no) {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	float rot;
	
  byte bVar1;
  undefined2 uVar2;
  uint se_file_no;
  int iVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  byte wrk_no_00;
  ENE_WRK *ew;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float tv [4];
  float rot;
  
  iVar3 = ((int)(char)wrk_no & 0xffU) * 0x430;
  ew = (ENE_WRK *)((int)ene_wrk + iVar3);
  uVar10 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x30);
  uVar8 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x34);
  uVar7 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x38);
  uVar9 = *(undefined4 *)((int)ene_wrk + iVar3 + 0x3c);
  rot = *(float *)((int)ene_wrk + iVar3 + 100);
  RotLimitChk(&rot);
  wrk_no_00 = (byte)((int)(char)wrk_no & 0xffU);
  InitEneWrk(wrk_no_00);
  bVar1 = ingame_wrk.msn_no;
  *(char *)((int)ene_wrk + iVar3 + 0x11) = (char)((int)(char)dat_no & 0xffU);
  *(undefined *)((int)ene_wrk + iVar3 + 0x10) = 1;
  iVar6 = *(int *)(&fene_dat + (uint)bVar1 * 4) + ((int)(char)dat_no & 0xffU) * 0x40;
  uVar2 = *(undefined2 *)(iVar6 + 10);
  ew->sta = ew->sta | 1;
  *(undefined2 *)((int)ene_wrk + iVar3 + 8) = uVar2;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x30) = uVar10;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x34) = uVar8;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x38) = uVar7;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x3c) = uVar9;
  *(int *)((int)ene_wrk + iVar3 + 0xb0) = iVar6;
  EnePosInfoSet(ew);
  *(float *)((int)ene_wrk + iVar3 + 100) = rot;
  EneBlinkDataSet(ew);
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x388) = DAT_00355c0c;
  bVar1 = *(byte *)(*(int *)((int)ene_wrk + iVar3 + 0xb0) + 0x2f);
  *(undefined4 *)((int)ene_wrk + iVar3 + 900) = 0x3f800000;
  *(uint *)((int)ene_wrk + iVar3 + 0x38c) = bVar1 | 0x40404500;
  pvVar5 = SetEffects(0x1c,2);
  se_file_no = *(uint *)(*(int *)((int)ene_wrk + iVar3 + 0xb0) + 0x20);
  *(void **)((int)ene_wrk + iVar3 + 0x380) = pvVar5;
  cVar4 = SeGetGhostPos(se_file_no,*(uchar *)((int)ene_wrk + iVar3 + 0x10));
  *(char *)((int)ene_wrk + iVar3 + 0x3fd) = cVar4;
  AdpcmPlayGhost(*(int *)(*(int *)((int)ene_wrk + iVar3 + 0xb0) + 0x24),
                 (float (*) [4])((int)ene_wrk + iVar3 + 0x30),0x3fff,wrk_no_00,200);
  EneActSet(ew,'\t');
  return;
}

void AEneEntry(u_char wrk_no, u_char dat_no) {
	ENE_WRK *ew;
	AENE_INFO_DAT *aie;
	float rot;
	static ENE_DAT tmp_aene_dat;
	
  short sVar1;
  ushort uVar2;
  uint se_file_no;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ENE_WRK *ew;
  float rot;
  
  iVar3 = ((int)(char)wrk_no & 0xffU) * 0x430;
  ew = (ENE_WRK *)((int)ene_wrk + iVar3);
  InitEneWrk((byte)((int)(char)wrk_no & 0xffU));
  bVar4 = ingame_wrk.msn_no;
  *(char *)((int)ene_wrk + iVar3 + 0x11) = (char)((int)(char)dat_no & 0xffU);
  *(undefined *)((int)ene_wrk + iVar3 + 0x10) = 2;
  iVar6 = *(int *)(&aene_info_dat + (uint)bVar4 * 4) + ((int)(char)dat_no & 0xffU) * 0x20;
  DAT_00401f3a = *(undefined2 *)(iVar6 + 0x12);
  ew->sta = ew->sta | 1;
  DAT_00401f40 = *(undefined4 *)(iVar6 + 0x18);
  DAT_00401f3c = *(undefined2 *)(iVar6 + 0x14);
  *(undefined **)((int)ene_wrk + iVar3 + 0xb0) = &tmp_aene_dat_133;
  DAT_00401f4c = *(undefined2 *)(iVar6 + 0x16);
  *(undefined2 *)((int)ene_wrk + iVar3 + 8) = 100;
  *(int *)((int)ene_wrk + iVar3 + 0x41c) = iVar6;
  uVar2 = *(ushort *)(iVar6 + 8);
  *(float *)((int)ene_wrk + iVar3 + 0x30) = (float)(uint)*(ushort *)(iVar6 + 4);
  sVar1 = *(short *)(iVar6 + 6);
  *(float *)((int)ene_wrk + iVar3 + 0x38) = (float)(uint)uVar2;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x3c) = 0;
  *(float *)((int)ene_wrk + iVar3 + 0x34) = (float)(int)sVar1;
  EnePosInfoSet(ew);
  if (*(short *)(iVar6 + 2) == 1000) {
    rot = GetTrgtRotY((float *)((int)ene_wrk + iVar3 + 0x30),&plyr_wrk.move_box.spd.z);
  }
  else {
    rot = ((float)(uint)*(ushort *)(iVar6 + 2) * DAT_00355c10) / 180.0;
    RotLimitChk(&rot);
  }
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x60) = 0;
  *(float *)((int)ene_wrk + iVar3 + 100) = rot;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x68) = 0;
  *(undefined4 *)((int)ene_wrk + iVar3 + 0x6c) = 0;
  EneBlinkDataSet(ew);
  EneActSet(ew,'\x02');
  se_file_no = *(uint *)(*(int *)((int)ene_wrk + iVar3 + 0xb0) + 0x20);
  if (se_file_no == 0xffffffff) {
    *(undefined *)((int)ene_wrk + iVar3 + 0x3fd) = 0xff;
  }
  else {
    cVar5 = SeGetAutoGhostPos(se_file_no);
    *(char *)((int)ene_wrk + iVar3 + 0x3fd) = cVar5;
  }
  es_adpcm_tm = 0;
  return;
}

void EneRule(ENE_WRK *ew) {
	u_char act_no;
	u_char view_chk;
	char *str1;
	char *str2;
	char *str3;
	char *str_clr;
	
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  char *str;
  uchar g;
  uchar act_no;
  
  str = "FUYU ENE   ";
  if (dbg_wrk.param_enetype == 0) {
    SetASCIIString2(0x10,430.0,(float)((uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 10 + 10),1,
                    0xdc,0xdc,'2',"           ");
    goto LAB_0018e09c;
  }
  bVar1 = ew->type;
  if (bVar1 == 1) {
    bVar2 = *(byte *)((int)&(ew->move_box).pos.x + 3);
    uVar3 = '2';
    g = 0xdc;
LAB_0018dfcc:
    SetASCIIString2(0x10,430.0,(float)((uint)bVar2 * 10 + 10),1,uVar3,g,'2',str);
    bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
LAB_0018e024:
    uVar5 = (uint)bVar1;
  }
  else if (bVar1 < 2) {
    bVar2 = *(byte *)((int)&(ew->move_box).pos.x + 3);
    uVar5 = (uint)bVar2;
    if (bVar1 == 0) {
      uVar3 = 0xdc;
      g = '2';
      str = "JIBAKU ENE ";
      goto LAB_0018dfcc;
    }
  }
  else {
    bVar2 = *(byte *)((int)&(ew->move_box).pos.x + 3);
    uVar5 = (uint)bVar2;
    if (bVar1 == 2) {
      SetASCIIString2(0x10,430.0,(float)((uint)bVar2 * 10 + 10),1,0xdc,0xdc,'2',"JIDOU ENE  ");
      bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
      goto LAB_0018e024;
    }
  }
  SetInteger2(0x10,DAT_00355c14,(float)(uVar5 * 10 + 10),1,0xff,0xff,0xff,(uint)ew->dat_no);
LAB_0018e09c:
  if ((plyr_wrk.ap_timer == 0) || (ew->dmg != 0)) {
    EneInDispChk(ew);
    EneLightCtrl(ew);
    EneBlinkPosSet(ew);
    if (ew->type == 2) {
      EneSpeakAdpcmCtrl(ew);
      uVar6 = *(ulong *)ew;
    }
    else {
      EneAdpcmPlayChk(ew);
      EneCondCtrl(ew);
      EneNormalEffectCtrl(ew);
      EneSeOmenChk(ew,'\x01');
      EneMoveCtrl(ew);
      uVar3 = EnePRecogChkChk(ew);
      if (uVar3 == '\0') {
        act_no = ew->act_no;
        uVar3 = '\0';
      }
      else {
        uVar3 = EnePRecogChk(ew,&act_no);
      }
      EneActIniChk(ew,uVar3,act_no);
      EneActRule(ew);
      EneAuraCtrl(ew);
      EneMinDmgCtrl(ew);
      EneAniResolutionCtrl(ew);
      uVar6 = *(ulong *)ew;
    }
    if ((uVar6 & 0x38000000) == 0) {
      if (dbg_wrk.param_enestop == 0) {
        MoveCtrl((MOVE_BOX *)&(ew->move_box).pos);
        sVar4 = *(short *)&ew[1].move_box.tpos.w;
      }
      else {
        sVar4 = *(short *)&ew[1].move_box.tpos.w;
      }
    }
    else {
      sVar4 = *(short *)&ew[1].move_box.tpos.w;
    }
    if (sVar4 == 0) {
      EneBlinkCtrl(ew);
    }
  }
  return;
}

void EneCondCtrl(ENE_WRK *ew) {
  short sVar1;
  short sVar2;
  uint *puVar3;
  
  sVar1 = *(short *)((int)&ew[1].move_box.tpos.z + 2);
  if (sVar1 != 0) {
    *(short *)((int)&ew[1].move_box.tpos.z + 2) = sVar1 + -1;
  }
  sVar1 = *(short *)&ew[1].move_box.tpos.w;
  if (sVar1 != 0) {
    *(short *)&ew[1].move_box.tpos.w = sVar1 + -1;
  }
  sVar1 = *(short *)((int)&ew[1].move_box.tpos.w + 2);
  sVar2 = sVar1 + -1;
  if ((sVar1 != 0) && (*(short *)((int)&ew[1].move_box.tpos.w + 2) = sVar2, sVar2 == 0)) {
    puVar3 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar3 = *puVar3 & 0xefffffff;
  }
  return;
}

void EneAuraCtrl(ENE_WRK *ew) {
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (plyr_wrk.mode == 2) {
    *(undefined *)&ew[1].move_box.spd.x = 0x32;
    *(undefined *)&ew->nee = 0x32;
  }
  if ((*(uint *)(ew->mpos).p0[3] & 0x10) == 0) {
    if ((ingame_wrk.difficult == 0) || (ingame_wrk.game != 0)) goto LAB_0018e2d4;
    uVar1 = ew->sta;
  }
  else {
    uVar1 = ew->sta;
  }
  if ((uVar1 & 0x2000000) != 0) {
    if ((plyr_wrk.mode - 1 < 2) || (ew->act_no == 8)) {
      *(undefined *)&ew->nee = 0x80;
    }
    else {
      *(undefined *)&ew->nee = 0;
    }
  }
LAB_0018e2d4:
  if (plyr_wrk.mode == 1) {
    (ew->pp).w = 0.0;
  }
  else if (efcnt[12].dat._0_1_ == '\0') {
    if ((ew->sta & 0x8000) == 0) {
      if (ew->hp == 0) {
        (ew->pp).w = 0.0;
      }
      else {
        (ew->pp).w = 60.0;
      }
    }
    else {
      (ew->pp).w = 0.0;
    }
  }
  else {
    (ew->pp).w = 0.0;
  }
  if (efcnt[12].dat._0_1_ == '\0') {
    if (ew->hp != 0) {
      fVar3 = (ew->sp).y;
      if (*(char *)&ew->nee != '\0') {
        fVar2 = fVar3 + DAT_00355c18;
        if (1.0 <= fVar3 + DAT_00355c18) {
          fVar2 = 1.0;
        }
        (ew->sp).y = fVar2;
        return;
      }
      fVar2 = 0.0;
      if (DAT_00355c1c < fVar3) {
        fVar2 = fVar3 - DAT_00355c1c;
      }
      (ew->sp).y = fVar2;
    }
    return;
  }
  (ew->sp).y = 0.0;
  return;
}

void InitEneWrk(u_char wrk_no) {
	ENE_WRK *ew;
	int i;
	
  int iVar1;
  ENE_WRK *ew;
  undefined *puVar2;
  int i;
  
  iVar1 = ((int)(char)wrk_no & 0xffU) * 0x430;
  memset((void *)((int)ene_wrk + iVar1),0,0x430);
  InitMoveBox((MOVE_BOX *)((int)ene_wrk + iVar1 + 0x20));
  *(char *)((int)ene_wrk + iVar1 + 0x23) = (char)((int)(char)wrk_no & 0xffU);
  *(undefined4 *)((int)ene_wrk + iVar1 + 0x33c) = 0x3f800000;
  *(undefined *)((int)ene_wrk + iVar1 + 0x413) = 0xff;
  *(undefined *)((int)ene_wrk + iVar1 + 0x412) = 0xff;
  i = 0;
  do {
    puVar2 = (undefined *)(iVar1 + 0x2532a6 + i);
    *(undefined *)(iVar1 + 0x2532a4 + i) = 0xff;
    i = i + 1;
    *puVar2 = 0xff;
  } while (i < 2);
  ew = (ENE_WRK *)((int)ene_wrk + iVar1 + 0x394);
  i = 1;
  do {
    ew->sta = 0xffffffff;
    i = i + -1;
    ew = (ENE_WRK *)((int)&ew[-1].stm_view + 1);
  } while (-1 < i);
  puVar2 = (undefined *)((int)ene_wrk + iVar1 + 0x3f7);
  i = 5;
  do {
    *puVar2 = 0xff;
    i = i + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < i);
  *(undefined4 *)((int)ene_wrk + iVar1 + 0x378) = 0;
  *(undefined4 *)((int)ene_wrk + iVar1 + 0x380) = 0;
  *(undefined4 *)((int)ene_wrk + iVar1 + 0x370) = 0;
  return;
}

int EneWrkReleaseChk(ENE_WRK *ew) {
	int result;
	
  byte bVar1;
  uchar data_id;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  if ((map_wrk.mirror_flg == '\0') && (iVar2 = EnemyUseJudge(0), iVar2 < 2)) {
    uVar3 = ew->sta;
  }
  else {
    pvVar4 = (void *)(ew->pp).z;
    if (pvVar4 == (void *)0x0) {
      uVar3 = ew->sta;
    }
    else {
      ResetEffects(pvVar4);
      (ew->pp).z = 0.0;
      uVar3 = ew->sta;
    }
  }
  if ((uVar3 & 0x2000) == 0) {
    return 0;
  }
  if ((uVar3 & 0x8000) != 0) {
    return 0;
  }
  if (ew->atk_tm != 0) {
    return 0;
  }
  if ((plyr_wrk.sta & 8) != 0) {
    return 1;
  }
  bVar1 = ew->type;
  if (bVar1 == 1) {
    iVar2 = EnemyNoDeadGhostJudge((uint)ew->dat_no);
    if (iVar2 == 0) {
      if (ew->dat_no != ap_wrk.ggst_no) {
        if (ew->hp == 0) {
          FloatGhostBattleEnd();
        }
        else {
          FloatGhostEscapeEnd();
        }
      }
    }
    else if (ew->hp == 0) {
      DeadGhostBattleEnd();
    }
    else {
      FloatGhostEscapeEnd();
    }
    AdpcmStopGhost(0x14);
    pvVar4 = (void *)(ew->sp).x;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        BattleEndEventOpenJudge(ew->dat_no);
        AdpcmStopGhost(0x14);
        if (ingame_wrk.msn_no == 1) {
          if (ew->dat_no == 0) {
            OpenCameraMenu();
            pvVar4 = (void *)(ew->sp).x;
          }
          else {
            pvVar4 = (void *)(ew->sp).x;
          }
          goto LAB_0018e680;
        }
      }
    }
    else if (bVar1 == 2) {
      BattleEndEventOpenJudge(ew->dat_no);
      data_id = *(uchar *)(*(int *)((int)&ew[1].move_box.tpos.y + 2) + 1);
      if (data_id != 0xff) {
        CallWanderSoul(data_id,(ew->mpos).p2 + 3);
      }
      es_adpcm_tm = 0;
      AdpcmStopAutoGhost(10);
    }
    pvVar4 = (void *)(ew->sp).x;
  }
LAB_0018e680:
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)(ew->pp).x;
  }
  else {
    ResetEffects(pvVar4);
    pvVar4 = (void *)(ew->pp).x;
  }
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)(ew->pp).z;
  }
  else {
    ResetEffects(pvVar4);
    pvVar4 = (void *)(ew->pp).z;
  }
  if (pvVar4 != (void *)0x0) {
    ResetEffects(pvVar4);
  }
  if (ew != (ENE_WRK *)0xfffffbec) {
    room_wrk.mylight[0].point_num = room_wrk.mylight[0].point_num + -1;
  }
  EneSeOmenChk(ew,'\0');
  if (ew->hp != 0) {
    RequestSpirit((uint)*(byte *)((int)&(ew->move_box).pos.x + 3),0);
    ReleaseEneTexture((uint)*(byte *)((int)&(ew->move_box).pos.x + 3));
    motReleaseAnmPacket(*(uchar *)((int)&(ew->move_box).pos.x + 3));
  }
  memset(ew,0,0x430);
  if (ap_wrk.zh_mode != 0) {
    ZeroHourOutReq();
  }
  DoorLockBattleAfter();
  if (ingame_wrk.game == 1) {
    BattleModeClear();
  }
  return 1;
}

void FuyuEneRelease() {
	u_char i;
	
  int iVar1;
  ENE_WRK *ew;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  while( true ) {
    ew = (ENE_WRK *)((int)&ene_wrk[0].sta + iVar1);
    if (((ew->sta & 1) != 0) && ((&ene_wrk[0].type)[iVar1] == 1)) {
      ew->sta = ew->sta | 0x2000;
      EneWrkReleaseChk(ew);
    }
    uVar2 = uVar2 + 1 & 0xff;
    if (2 < uVar2) break;
    iVar1 = uVar2 * 0x430;
  }
  return;
}

void EnePosInfoSet(ENE_WRK *ew) {
  uint uVar1;
  
  uVar1 = GetPointRoom((short)(int)(ew->move_box).tpos.x,(short)(int)(ew->move_box).tpos.z);
  ew[1].move_box.wait_time = (uchar)uVar1;
  if (((uVar1 & 0xff) != 0xff) && ((*(uint *)(ew->mpos).p0[3] & 0x40) != 0)) {
    GetPointHeightChk(&(ew->move_box).tpos.x);
    return;
  }
  return;
}

void EneSeOmenChk(ENE_WRK *ew, u_char id) {
	float dist_tbl[2];
	u_short se_tbl[2];
	float dist;
	int i;
	
  byte bVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  float fVar5;
  Vector4 *pVVar6;
  float *pfVar7;
  int iVar8;
  ushort *puVar9;
  float fVar10;
  float dist_tbl [2];
  short se_tbl [2];
  
  pfVar7 = dist_tbl;
  bVar1 = ew->type;
  uVar2 = (int)dist_tbl + 7U & 7;
  puVar3 = (ulong *)(((int)dist_tbl + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_00356f70 >> (7 - uVar2) * 8;
  dist_tbl = DAT_00356f70;
  uVar2 = (int)se_tbl + 3U & 3;
  puVar4 = (uint *)(((int)se_tbl + 3U) - uVar2);
  *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | (uint)PTR_DAT_00356f78 >> (3 - uVar2) * 8;
  se_tbl = (short  [2])PTR_DAT_00356f78;
  if (bVar1 != 2) {
    if (id == '\0') {
      pVVar6 = &ew->si;
      iVar8 = 1;
      do {
        if (pVVar6->x != -NAN) {
          SeFadeFlame((int)pVVar6->x,0xb4,0);
          pVVar6->x = -NAN;
        }
        iVar8 = iVar8 + -1;
        pVVar6 = (Vector4 *)&pVVar6->y;
      } while (-1 < iVar8);
    }
    else if (ew->hp != 0) {
      fVar10 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x);
      pVVar6 = &ew->si;
      puVar9 = (ushort *)se_tbl;
      iVar8 = 1;
      do {
        if (pVVar6->x == -NAN) {
          if ((fVar10 <= *pfVar7) && (ew[1].move_box.idx != 0xff)) {
            fVar5 = (float)SeStartGhostFlame((uint)*puVar9,
                                             (uint)*(byte *)((int)&(ew->move_box).pos.x + 3),0xb4,
                                             0x1000,0x1000,ew[1].move_box.idx);
            pVVar6->x = fVar5;
          }
        }
        else if (*pfVar7 < fVar10) {
          SeFadeFlame((int)pVVar6->x,0xb4,0);
          pVVar6->x = -NAN;
        }
        pfVar7 = pfVar7 + 1;
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
        pVVar6 = (Vector4 *)&pVVar6->y;
      } while (-1 < iVar8);
    }
  }
  return;
}

void EneMoveCtrl(ENE_WRK *ew) {
	MOVE_BOX *mb;
	sceVu0FVECTOR tv;
	u_char i;
	
  Vector4 *pVVar1;
  int iVar2;
  uint uVar3;
  Vector4 *rot;
  float fVar4;
  float tv [4];
  
  if ((dbg_wrk.param_enestop == 0) && (uVar3 = ew->sta, (uVar3 & 0x38000000) == 0)) {
    tv[0] = (ew->move_box).rot.x;
    tv[1] = (ew->move_box).rot.y;
    tv[2] = (ew->move_box).rot.z;
    tv[3] = (ew->move_box).rot.w;
    if (*(short *)((int)&ew[1].move_box.tpos.z + 2) != 0) {
      sceVu0ScaleVector(0.5,(Vector4 *)tv,(Vector4 *)tv);
      uVar3 = ew->sta;
    }
    rot = &(ew->move_box).rspd;
    if ((uVar3 & 0xc00000) == 0) {
      RotFvector(&rot->x,tv);
    }
    pVVar1 = &(ew->move_box).tpos;
    uVar3 = 0;
    sceVu0AddVector(pVVar1,pVVar1,(Vector4 *)tv);
    EnePosInfoSet(ew);
    sceVu0AddVector(rot,rot,&(ew->move_box).trot);
    iVar2 = 0;
    while( true ) {
      RotLimitChk((float *)((int)(ew->mpos).p0 + iVar2 + -0x44));
      uVar3 = uVar3 + 1 & 0xff;
      if (2 < uVar3) break;
      iVar2 = uVar3 << 2;
    }
    if ((ew->move_box).pos_mid.w != 0.0) {
      tv[1] = (ew->move_box).pos_mid.y - (ew->move_box).rspd.y;
      RotLimitChk((float *)((uint)tv | 4));
      fVar4 = (ew->move_box).pos_mid.w;
      if (0.0 < tv[1]) {
        if (fVar4 <= tv[1]) {
          (ew->move_box).rspd.y = (ew->move_box).rspd.y + fVar4;
          RotLimitChk(&(ew->move_box).rspd.y);
          return;
        }
        fVar4 = (ew->move_box).pos_mid.y;
      }
      else {
        if (tv[1] <= -fVar4) {
          (ew->move_box).rspd.y = (ew->move_box).rspd.y - fVar4;
          RotLimitChk(&(ew->move_box).rspd.y);
          return;
        }
        fVar4 = (ew->move_box).pos_mid.y;
      }
      (ew->move_box).pos_mid.w = 0.0;
      (ew->move_box).rspd.y = fVar4;
    }
  }
  return;
}

u_char EnePRecogChkChk(ENE_WRK *ew) {
	u_char req;
	
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uchar uVar4;
  
  uVar4 = '\0';
  if ((ew->sta & 4) == 0) {
    bVar1 = ew->act_no;
    if ((((bVar1 == 0xff) || (bVar1 == 2)) || (bVar1 == 3)) || (bVar1 == 4)) {
      cVar2 = *(char *)((int)&ew->acomm_add_top + 7);
      if (cVar2 == '\0') {
        *(undefined *)((int)&ew->acomm_add_top + 7) = 0;
        uVar4 = '\x01';
      }
      else {
        *(char *)((int)&ew->acomm_add_top + 7) = cVar2 + -1;
      }
    }
  }
  else {
    uVar4 = '\x01';
    puVar3 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  return uVar4;
}

u_char EnePRecogChk(ENE_WRK *ew, u_char *act_no) {
	u_char new_act;
	
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  uint *puVar4;
  Vector4 *p1;
  byte bVar5;
  float fVar6;
  
  *act_no = ew->act_no;
  if ((*(uint *)(ew->mpos).p0[3] & 0x40) == 0) {
    bVar5 = 4;
LAB_0018ed34:
    bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  }
  else {
    if ((ew->sta & 0x18) != 0) {
      p1 = &(ew->move_box).tpos;
      fVar6 = GetDistV(&plyr_wrk.move_box.spd.z,&p1->x);
      uVar2 = HitChkSegment2All(&plyr_wrk.move_box.spd.z,&p1->x,fVar6 / 50.0);
      bVar5 = 4;
      if (uVar2 != '\0') {
        bVar5 = 3;
      }
      goto LAB_0018ed34;
    }
    bVar5 = 2;
    uVar2 = HitDmgChk(ew);
    if ((((uVar2 != '\0') || (uVar2 = CaptureOnChk1(ew), uVar2 != '\0')) ||
        (uVar2 = CaptureOnChk2(ew), uVar2 != '\0')) ||
       ((uVar2 = CaptureOnChk3(ew), uVar2 != '\0' || (uVar2 = CaptureOnChk4(ew), uVar2 != '\0')))) {
      uVar2 = PlyrOutAreaChk(ew);
      if (uVar2 == '\0') {
        bVar5 = 3;
      }
      goto LAB_0018ed34;
    }
    bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  }
  puVar4 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  *puVar4 = *puVar4 & 0xffffffe7;
  if (bVar5 == 3) {
    puVar4 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    uVar3 = *puVar4 | 8;
  }
  else {
    if (bVar5 != 4) {
      *act_no = bVar5;
      goto LAB_0018edac;
    }
    puVar4 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    uVar3 = *puVar4 | 0x18;
  }
  *puVar4 = uVar3;
  *act_no = bVar5;
LAB_0018edac:
  return ew->act_no != bVar5;
}

u_char HitDmgChk(ENE_WRK *ew) {
	u_char chk;
	
  bool bVar1;
  uint *puVar2;
  
  bVar1 = (ew->sta & 0x80) != 0;
  if (bVar1) {
    puVar2 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar2 = *puVar2 & 0xffffff7f;
  }
  return bVar1;
}

u_char CaptureOnChk1(ENE_WRK *ew) {
	u_char chk;
	float gthr_rng;
	
  ushort uVar1;
  uchar uVar2;
  float fVar3;
  
  fVar3 = (ew->mpos).p0[3];
  uVar2 = '\0';
  if (((*(byte *)((int)fVar3 + 6) & 1) != 0) &&
     (uVar1 = *(ushort *)((int)fVar3 + 4),
     fVar3 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x), fVar3 <= (float)(uint)uVar1)
     ) {
    uVar2 = '\x01';
  }
  return uVar2;
}

u_char CaptureOnChk3(ENE_WRK *ew) {
	u_char chk;
	
  uchar uVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(byte *)((int)(ew->mpos).p0[3] + 6) & 4) != 0) {
    uVar1 = PlyrSeFootChk(ew);
    bVar2 = uVar1 != '\0';
  }
  return bVar2;
}

u_char CaptureOnChk4(ENE_WRK *ew) {
  return '\0';
}

u_char CaptureOnChk2(ENE_WRK *ew) {
	sceVu0FVECTOR rot;
	float gthr_rng;
	u_char chk;
	
  ushort uVar1;
  Vector4 *p1;
  uchar uVar2;
  float fVar3;
  float rot [4];
  
  fVar3 = (ew->mpos).p0[3];
  uVar2 = '\0';
  if ((*(byte *)((int)fVar3 + 6) & 2) != 0) {
    uVar1 = *(ushort *)((int)fVar3 + 4);
    p1 = &(ew->move_box).tpos;
    fVar3 = GetDistV(&plyr_wrk.move_box.spd.z,&p1->x);
    if (fVar3 <= (float)(uint)uVar1) {
      GetTrgtRot(&p1->x,&plyr_wrk.move_box.spd.z,rot,2);
      rot[1] = rot[1] - (ew->move_box).rspd.y;
      RotLimitChk((float *)((uint)rot | 4));
      if (rot[1] < 0.0) {
        rot[1] = -rot[1];
      }
      if (rot[1] <= DAT_00355c20) {
        uVar2 = '\x01';
      }
    }
  }
  return uVar2;
}

u_char PlyrSeFootChk(ENE_WRK *ew) {
	float rng;
	u_char chk;
	
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_00355c24;
  if ((((plyr_wrk.mvsta & 1) == 0) && (fVar2 = DAT_00355c28, (plyr_wrk.mvsta & 2) == 0)) &&
     ((plyr_wrk.mvsta & 8) == 0)) {
    fVar2 = 0.0;
  }
  fVar1 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x);
  return fVar1 <= fVar2;
}

void EneActIniChk(ENE_WRK *ew, u_char view_chk, u_char act_no) {
  uint *puVar1;
  
  if ((view_chk == '\0') && ((ew->sta & 0x1000) == 0)) {
    return;
  }
  puVar1 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar1 = *puVar1 & 0xffffefff;
  EneActSet(ew,act_no);
  return;
}

void EneActIniSet(ENE_WRK *ew, u_char act_no) {
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  
  ew->act_no = (byte)((int)(char)act_no & 0xffU);
  *(undefined8 *)((ew->mpos).p0 + 1) = 0x7e0000;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  pbVar4 = (byte *)((*(ushort *)
                      ((*(ushort *)((uint)ew->type * 2 + 0x7e0000) | 0x7e0000) +
                      (uint)ew->dat_no * 2) | 0x7e0000) + ((int)(char)act_no & 0xffU) * 2);
  bVar1 = pbVar4[1];
  bVar2 = *pbVar4;
  *(undefined *)((int)&(ew->move_box).pos.x + 2) = 1;
  *(undefined *)((int)&(ew->move_box).pos.x + 1) = 0;
  (ew->move_box).rot.x = 0.0;
  *(ulong *)&ew->dat = (ulong)bVar2 | (long)(int)((uint)bVar1 << 8) | 0x7e0000;
  (ew->move_box).rot.y = 0.0;
  uVar3 = *puVar5;
  (ew->move_box).rot.z = 0.0;
  (ew->move_box).rot.w = 0.0;
  *puVar5 = uVar3 & 0xfeffffff;
  (ew->move_box).trot.x = 0.0;
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  (ew->move_box).trot.y = 0.0;
  (ew->move_box).trot.z = 0.0;
  (ew->move_box).trot.w = 0.0;
  (ew->move_box).rspd.z = 0.0;
  puVar5 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  *puVar5 = *puVar5 & 0xffbfffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xff7fffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfdffffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfff7ffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfffeffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfffdffff;
  return;
}

void EneActSet(ENE_WRK *ew, u_char act_no) {
	MOVE_BOX *mb;
	
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  
  ew->act_no = (byte)((int)(char)act_no & 0xffU);
  *(undefined8 *)((ew->mpos).p0 + 1) = 0x7e0000;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  pbVar4 = (byte *)((*(ushort *)
                      ((*(ushort *)((uint)ew->type * 2 + 0x7e0000) | 0x7e0000) +
                      (uint)ew->dat_no * 2) | 0x7e0000) + ((int)(char)act_no & 0xffU) * 2);
  bVar1 = pbVar4[1];
  bVar2 = *pbVar4;
  *(undefined *)((int)&(ew->move_box).pos.x + 2) = 1;
  *(undefined *)((int)&(ew->move_box).pos.x + 1) = 0;
  (ew->move_box).rot.x = 0.0;
  *(ulong *)&ew->dat = (ulong)bVar2 | (long)(int)((uint)bVar1 << 8) | 0x7e0000;
  (ew->move_box).rot.y = 0.0;
  uVar3 = *puVar5;
  (ew->move_box).rot.z = 0.0;
  (ew->move_box).rot.w = 0.0;
  *puVar5 = uVar3 & 0xfeffffff;
  (ew->move_box).trot.x = 0.0;
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  (ew->move_box).trot.y = 0.0;
  (ew->move_box).trot.z = 0.0;
  (ew->move_box).trot.w = 0.0;
  (ew->move_box).rspd.z = 0.0;
  puVar5 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  *puVar5 = *puVar5 & 0xffbfffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xff7fffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfdffffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfff7ffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfffeffff;
  puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar5 = *puVar5 & 0xfffdffff;
  return;
}

void EneBlinkDataSet(ENE_WRK *ew) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  *(undefined8 *)&ew->pdf2 = 0x7e0000;
  pbVar3 = (byte *)(*(ushort *)
                     ((*(ushort *)((uint)ew->type * 2 + 0x7e0000) | 0x7e0000) + (uint)ew->dat_no * 2
                     ) | 0x7e0000);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(undefined *)((int)&ew->acomm_add_top + 6) = 1;
  *(undefined *)((int)&ew->acomm_add_top + 5) = 0;
  *(ulong *)&ew->pdf = (ulong)bVar2 | (long)(int)((uint)bVar1 << 8) | 0x7e0000;
  return;
}

void EneARatioDataSet(ENE_WRK *ew, u_char anime_no) {
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  *(undefined8 *)ew->se_omen = 0x7e0000;
  pbVar3 = (byte *)((*(ushort *)
                      ((*(ushort *)
                         ((*(ushort *)((uint)ew->type * 2 + 0x7e0000) | 0x7e0000) +
                         (uint)ew->dat_no * 2) | 0x7e0000) + 2) | 0x7e0000) +
                   ((int)(char)anime_no & 0xffU) * 2);
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *(undefined *)((int)&ew->nee + 3) = 1;
  *(undefined *)((int)&ew->nee + 2) = 0;
  *(ulong *)&ew->nee_size = (ulong)bVar2 | (long)(int)((uint)bVar1 << 8) | 0x7e0000;
  return;
}

void EneActRule(ENE_WRK *ew) {
	float dist;
	u_char act_no;
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  Vector4 *p1;
  float fVar6;
  float fVar7;
  uchar act_no;
  
  act_no = 0xff;
  if ((ew->sta & 0x8000000) == 0) {
    iVar3 = EneActPreferChk(ew,&act_no);
    uVar1 = act_no;
    if (iVar3 == 0) {
      uVar4 = ew->sta;
      if ((uVar4 & 0x8000) != 0) {
        EneAtkCtrl(ew);
        uVar4 = ew->sta;
      }
      if ((uVar4 & 0x10000000) != 0) {
        return;
      }
      uVar1 = act_no;
      if (ew->act_no == 4) {
        if (dbg_wrk.param_enestop == 0) {
          p1 = &(ew->move_box).tpos;
          fVar7 = GetDistV2(&plyr_wrk.move_box.spd.z,&p1->x);
          uVar1 = act_no;
          if (((fVar7 <= (float)(uint)*(ushort *)((int)(ew->mpos).p0[3] + 0xc)) &&
              ((ew->sta & 0x480000) == 0)) &&
             (uVar2 = HitChkSegment2AllChk(&plyr_wrk.move_box.spd.z,&p1->x,fVar7 / 50.0),
             uVar1 = act_no, uVar2 == '\0')) {
            uVar1 = '\x05';
          }
        }
      }
      else if (ew->act_no == 5) {
        fVar6 = GetDistV2(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x);
        fVar7 = (ew->mpos).p0[3];
        uVar1 = '\x02';
        if (((fVar6 < (float)(uint)*(ushort *)((int)fVar7 + 0xc) + 400.0) &&
            (uVar1 = act_no, (ew->sta & 0x10000) != 0)) &&
           (fVar6 <= (float)(uint)*(ushort *)((int)fVar7 + 0x10))) {
          puVar5 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
          *puVar5 = *puVar5 | 0x20000;
        }
      }
    }
    act_no = uVar1;
    if (act_no != 0xff) {
      EneActSet(ew,act_no);
    }
  }
  return;
}

int EneActPreferChk(ENE_WRK *ew, u_char *act_no) {
	u_char n;
	u_char prefer_act[4];
	
  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  uchar *puVar4;
  int iVar5;
  uchar prefer_act [4];
  
  puVar4 = prefer_act;
  puVar1 = prefer_act + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)DAT_00356f80 >> (3 - uVar2) * 8;
  prefer_act = DAT_00356f80;
  uVar3 = PlyrOutAreaChk(ew);
  if (uVar3 == '\0') {
    uVar3 = EneDmgChk(ew);
    if (uVar3 == '\x01') {
      iVar5 = 2;
    }
    else {
      if (uVar3 != '\x02') {
        iVar5 = 0;
        goto LAB_0018f610;
      }
      iVar5 = 3;
    }
  }
  else {
    iVar5 = 1;
  }
  puVar4 = prefer_act + iVar5;
LAB_0018f610:
  *act_no = *puVar4;
  return iVar5;
}

void EneAniResolutionCtrl(ENE_WRK *ew) {
	u_char no;
	static u_char reso[4][2] = {
		/* [0] = */ {
			/* [0] = */ 255,
			/* [1] = */ 255
		},
		/* [1] = */ {
			/* [0] = */ 255,
			/* [1] = */ 255
		},
		/* [2] = */ {
			/* [0] = */ 255,
			/* [1] = */ 255
		},
		/* [3] = */ {
			/* [0] = */ 255,
			/* [1] = */ 255
		}
	};
	
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  if (dbg_wrk.param_enestop != 0) {
    *(undefined *)&ew[1].move_box.loop = 0;
    return;
  }
  if ((ew->sta & 0x18000000) != 0) {
    *(undefined *)((int)&ew[1].move_box.loop + 1) = 0;
    *(undefined *)&ew[1].move_box.loop = 0;
    *(undefined *)((int)&PTR_00356f89 + (uint)bVar1 * 2) = 0xff;
    (&reso_209)[(uint)bVar1 * 2] = 0xff;
    return;
  }
  if ((ew->sta & 0x20000000) == 0) {
    sVar4 = *(short *)((int)&ew[1].move_box.tpos.z + 2);
  }
  else {
    uVar5 = 5;
    if (ew->hp != 0) goto LAB_0018f6c4;
    sVar4 = *(short *)((int)&ew[1].move_box.tpos.z + 2);
  }
  uVar5 = 3;
  if (sVar4 == 0) {
    if ((1 < ew->act_no - 3) || (ew->anime_no != 2)) {
      *(undefined *)&ew[1].move_box.loop = 1;
      return;
    }
    iVar8 = (uint)bVar1 * 2;
    pbVar9 = &reso_209 + iVar8;
    bVar1 = *pbVar9;
    if (bVar1 == 0xff) {
      cVar2 = *(char *)((int)&ew[1].move_box.loop + 1);
      if (cVar2 != '\0') {
        *(char *)((int)&ew[1].move_box.loop + 1) = cVar2 + -1;
        return;
      }
      uVar6 = GetRndSP(2,8);
      *pbVar9 = (byte)uVar6;
      if (5 < (uVar6 & 0xff)) {
        *pbVar9 = 1;
      }
      iVar7 = GetRndSP(0x14,100);
      *(char *)((int)&ew[1].move_box.loop + 1) = (char)iVar7;
    }
    else {
      bVar3 = *(byte *)&ew[1].move_box.loop;
      if (bVar1 == bVar3) {
        *pbVar9 = 0xff;
        return;
      }
      cVar2 = *(char *)((int)&PTR_00356f89 + iVar8);
      if (cVar2 != '\0') {
        *(char *)((int)&PTR_00356f89 + iVar8) = cVar2 + -1;
        return;
      }
      cVar2 = -1;
      if (bVar3 <= bVar1) {
        cVar2 = '\x01';
      }
      *(byte *)&ew[1].move_box.loop = bVar3 + cVar2;
    }
    *(undefined *)((int)&PTR_00356f89 + iVar8) = 0xf;
    return;
  }
LAB_0018f6c4:
  iVar8 = (uint)bVar1 * 2;
  *(undefined *)&ew[1].move_box.loop = uVar5;
  *(undefined *)((int)&ew[1].move_box.loop + 1) = 0;
  *(undefined *)((int)&PTR_00356f89 + iVar8) = 0xff;
  (&reso_209)[iVar8] = 0xff;
  return;
}

void EneAtkCtrl(ENE_WRK *ew) {
  uint *puVar1;
  
  if (ew->atk_tm == 0) {
    puVar1 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar1 = *puVar1 & 0xffff7fff;
    return;
  }
  ew->atk_tm = ew->atk_tm + -1;
  return;
}

u_char EneDmgChk(ENE_WRK *ew) {
	u_char result;
	
  byte bVar1;
  uint *puVar2;
  ushort uVar3;
  uchar uVar4;
  
  uVar4 = '\0';
  if (ew->dmg == 0) {
    return '\0';
  }
  ClrEneStaDmg(ew);
  if ((*(ulong *)ew & 0x80000800) == 0x80000000) {
    ew->dmg = 0;
    return '\0';
  }
  uVar3 = ew->dmg;
  if (uVar3 < (ushort)ew->hp) {
    ew->hp = ew->hp - uVar3;
    if ((ew->sta & 0x800) == 0) {
      bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
      if (req_dmg_ef[bVar1] != '\0') goto LAB_0018f904;
      req_dmg_ef[bVar1] = '\x01';
      goto LAB_0018f8f8;
    }
    uVar4 = '\x01';
  }
  else {
    ew->hp = 0;
    *(undefined *)((int)&ew->acomm_add_top + 6) = 0;
    uVar4 = '\x02';
    plyr_wrk.cond_tm = 0;
LAB_0018f8f8:
    uVar3 = ew->dmg;
  }
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
LAB_0018f904:
  ew->dmg_old = uVar3;
  ew->dmg = 0;
  puVar2 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  *puVar2 = *puVar2 | 0x80;
  if (uVar3 != 0) {
    SetEneDmgEffect1((uint)*(byte *)((int)&(ew->move_box).pos.x + 3));
  }
  return uVar4;
}

void ClrEneStaDmg(ENE_WRK *ew) {
  byte bVar1;
  uint *puVar2;
  
  if ((ew->sta & 0x800) != 0) {
    puVar2 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    *puVar2 = *puVar2 & 0xffbfffff;
  }
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  *(undefined2 *)((int)&ew[1].move_box.tpos.w + 2) = 0;
  *(undefined2 *)&ew[1].move_box.tpos.w = 0;
  *(undefined2 *)((int)&ew[1].move_box.tpos.z + 2) = 0;
  puVar2 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
  *puVar2 = *puVar2 & 0xcfffffff;
  return;
}

u_char PlyrOutAreaChk(ENE_WRK *ew) {
	u_char result;
	
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  
  bVar1 = ew->act_no;
  bVar3 = false;
  if (((((bVar1 == 0xff) || (bVar1 == 9)) || (bVar1 == 2)) || ((bVar1 == 3 || (bVar1 == 4)))) &&
     (((plyr_wrk.mode != 7 && (plyr_wrk.mode != 2)) ||
      (plyr_wrk.atk_no != *(uchar *)((int)&(ew->move_box).pos.x + 3))))) {
    uVar2 = EneTrtryChk(ew,plyr_wrk.dop._13_1_);
    bVar3 = uVar2 == '\0';
  }
  return bVar3;
}

u_char EneTrtryChk(ENE_WRK *ew, u_char room_no) {
	u_char result;
	u_char i;
	
  uint uVar1;
  uint uVar2;
  uchar uVar3;
  
  if (((int)ew->sta < 0) || (ingame_wrk.game == 1)) {
    return '\x01';
  }
  if (ew->type == 1) {
    if (ap_wrk.room_fg[plyr_wrk.dop._13_1_] == 0) {
      return '\0';
    }
    uVar3 = *(uchar *)&ew[1].dmg_old;
    if (uVar3 == 0xff) {
      if (room_no == ew[1].move_box.wait_time) {
        *(uchar *)&ew[1].dmg_old = room_no;
        return '\x01';
      }
      return '\x01';
    }
    if ((((*(uint *)(ew->mpos).p0[3] & 0x80) == 0) && (*(char *)((int)&ew[1].dmg_old + 1) == -1)) &&
       (room_no != uVar3)) {
      *(uchar *)((int)&ew[1].dmg_old + 1) = room_no;
    }
  }
  else {
    uVar3 = *(uchar *)&ew[1].dmg_old;
  }
  if (uVar3 != room_no) {
    uVar1 = 1;
    do {
      uVar2 = uVar1 & 0xff;
      if (5 < uVar2) {
        return '\0';
      }
      uVar1 = uVar2 + 1;
    } while (*(uchar *)((int)&ew[1].dmg_old + uVar2) != room_no);
  }
  return '\x01';
}

void EneLightCtrl(ENE_WRK *ew) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR tv2;
	POINT_WRK *p;
	SPOT_WRK *s;
	u_char id;
	u_char i;
	
  byte *pbVar1;
  Vector4 *pVVar2;
  uint uVar3;
  float *pfVar4;
  byte *pbVar5;
  Vector4 *pVVar6;
  float fVar7;
  float fVar8;
  float tv [4];
  float tv2 [4];
  
  if ((ew->mylight).ambient[3] != 0.0) {
    fVar7 = camera.p.x - (ew->mpos).p1[3];
    fVar8 = (ew->mpos).p2[1];
    (ew->mylight).parallel[1].direction[0] = -1.0;
    (ew->mylight).parallel[0].diffuse[3] = fVar7;
    fVar7 = camera.p.z;
    (ew->mylight).parallel[1].direction[2] = 0.0;
    (ew->mylight).parallel[1].direction[1] = fVar7 - fVar8;
  }
  uVar3 = 0;
  pbVar5 = (byte *)((int)&ew[1].move_box.pos.w + 2);
  pVVar6 = &ew[1].move_box.tpos;
  pbVar1 = pbVar5;
  do {
    if (*pbVar1 != 0xff) {
      tv[0] = *(float *)&ew->in_finder_tm;
      tv[1] = *(float *)(ew->area + 2);
      tv[2] = *(float *)&ew->tr_time;
      tv[3] = *(float *)&ew->se_area_no;
      pfVar4 = (float *)(uVar3 * 0x1d0 + 0x254030 + (uint)*pbVar1 * 0x30);
      RotFvector(&(ew->move_box).rspd.x,tv);
      sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)((ew->mpos).p1 + 3));
      *pfVar4 = tv[0];
      pfVar4[1] = tv[1];
      pfVar4[2] = tv[2];
      pfVar4[3] = tv[3];
    }
    uVar3 = uVar3 + 1 & 0xff;
    pbVar1 = pbVar5 + uVar3;
  } while (uVar3 < 2);
  uVar3 = (uint)*(byte *)&ew[1].move_box.pos.w;
  if (uVar3 != 0xff) {
    tv[0] = *(float *)&ew->in_finder_tm;
    tv[1] = *(float *)(ew->area + 2);
    tv[2] = *(float *)&ew->tr_time;
    tv[3] = *(float *)&ew->se_area_no;
    pfVar4 = (ew->mylight).point[uVar3].diffuse + 3;
    RotFvector(&(ew->move_box).rspd.x,tv);
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)((ew->mpos).p1 + 3));
    *pfVar4 = tv[0];
    pfVar4[1] = tv[1];
    pfVar4[2] = tv[2];
    pfVar4[3] = tv[3];
  }
  uVar3 = 0;
  pVVar2 = pVVar6;
  do {
    if (*(byte *)&pVVar2->x != 0xff) {
      tv[0] = *(float *)((int)ew->fp + 1);
      tv[1] = *(float *)((int)ew->fp2 + 1);
      tv[2] = *(float *)((int)ew->fp2[1] + 1);
      tv[3] = *(float *)((int)ew->fp2[2] + 1);
      pfVar4 = (float *)(uVar3 * 0x1d0 + 0x2540c0 + (uint)*(byte *)&pVVar2->x * 0x40);
      RotFvector(&(ew->move_box).rspd.x,tv);
      sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)((ew->mpos).p1 + 3));
      *pfVar4 = tv[0];
      pfVar4[1] = tv[1];
      pfVar4[2] = tv[2];
      pfVar4[3] = tv[3];
    }
    uVar3 = uVar3 + 1 & 0xff;
    pVVar2 = (Vector4 *)((int)&pVVar6->x + uVar3);
  } while (uVar3 < 2);
  uVar3 = (uint)*(byte *)((int)&ew[1].move_box.pos.w + 1);
  if (uVar3 != 0xff) {
    tv[0] = *(float *)((int)ew->fp + 1);
    tv[1] = *(float *)((int)ew->fp2 + 1);
    tv[2] = *(float *)((int)ew->fp2[1] + 1);
    pVVar6 = &(ew->move_box).rspd;
    tv[3] = *(float *)((int)ew->fp2[2] + 1);
    pfVar4 = &(ew->mylight).spot[uVar3].direction.w;
    pVVar2 = (Vector4 *)((ew->mpos).p1 + 3);
    RotFvector(&pVVar6->x,tv);
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,pVVar2);
    *pfVar4 = tv[0];
    pfVar4[1] = tv[1];
    pfVar4[2] = tv[2];
    pfVar4[3] = tv[3];
    tv2[3] = *(float *)((int)&ew->aie + 1);
    tv2[0] = *(float *)(ew->eroot + 1);
    tv2[1] = *(float *)(ew->plight_svm + 1);
    tv2[2] = *(float *)((int)&ew->pa_radius + 1);
    RotFvector(&pVVar6->x,(float *)(Vector4 *)tv2);
    sceVu0AddVector((Vector4 *)tv2,(Vector4 *)tv2,pVVar2);
    sceVu0SubVector((Vector4 *)tv2,tv,(Vector4 *)tv2);
    pfVar4[4] = tv2[0];
    pfVar4[5] = tv2[1];
    pfVar4[6] = tv2[2];
    pfVar4[7] = tv2[3];
  }
  return;
}

void EneInDispChk(ENE_WRK *ew) {
	PP_JUDGE ppj;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	float rot;
	float tx;
	float ty;
	
  uchar uVar1;
  Vector4 *pos;
  float rot;
  PP_JUDGE ppj;
  float tv [4];
  float rv [4];
  float tx;
  float ty;
  
  pos = (Vector4 *)((ew->mpos).p1 + 3);
  rot = GetTrgtRotY((float *)&camera,&camera.i.x);
  GetCamI2DPos((float *)pos,&tx,&ty);
  ew->sta2 = ew->sta2 & 0xfffffffe;
  if (((((ew->sta & 0x80000) == 0) &&
       (uVar1 = OutSightChk((float *)pos,(float *)&camera,rot,DAT_00355c2c,DAT_00355c30),
       uVar1 == '\0')) && (0.0 <= tx)) && (((tx <= 640.0 && (0.0 <= ty)) && (ty <= 224.0)))) {
    tv[3] = 0.0;
    ppj.num = '\x01';
    tv[2] = 200.0;
    ppj.result[0] = '\0';
    tv[0] = 0.0;
    tv[1] = 0.0;
    GetTrgtRot((float *)pos,(float *)&camera,rv,3);
    RotFvector(rv,(float *)(Vector4 *)tv);
    sceVu0AddVector((Vector4 *)ppj.p,pos,(Vector4 *)tv);
    CheckPointDepth(&ppj);
    if (ppj.result[0] != '\0') {
      ew->sta2 = ew->sta2 | 1;
    }
  }
  return;
}

void EneBlinkPosSet(ENE_WRK *ew) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR tr;
	
  Vector4 *p0;
  float fVar1;
  float fVar2;
  float fVar3;
  float tv [4];
  float tr [4];
  
  p0 = (Vector4 *)((ew->mpos).p2 + 3);
  memset(tv,0,0x10);
  tv[2] = 300.0;
  GetTrgtRot((float *)p0,(float *)&camera,tr,3);
  RotFvector(tr,tv);
  sceVu0AddVector((Vector4 *)((int)&ew->stm_slow + 1),p0,(Vector4 *)tv);
  if ((ew->sta & 0x200000) != 0) {
    fVar2 = (ew->move_box).tpos.y;
    fVar3 = (ew->move_box).tpos.z;
    fVar1 = (ew->move_box).tpos.w;
    (ew->mpos).p1[3] = (ew->move_box).tpos.x;
    (ew->mpos).p2[0] = fVar2 - 500.0;
    (ew->mpos).p2[1] = fVar3;
    (ew->mpos).p2[2] = fVar1;
  }
  return;
}

void FlyRule(FLY_WRK *fw) {
	MOVE_BOX *mb;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR av;
	
  byte bVar1;
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float tv [4];
  float av [4];
  
  tv[3] = fw->adjp[3];
  if (tv[3] != 0.0) {
    tv[0] = fw->adjp[0];
    tv[1] = fw->adjp[1];
    tv[2] = fw->adjp[2];
    RotFvector((float *)((int)ene_wrk + (uint)fw->ene * 0x430 + 0x60),tv);
    if (fw->adjmv[3] == 0.0) {
      bVar1 = fw->ene;
    }
    else {
      av[0] = fw->adjmv[0];
      av[1] = fw->adjmv[1];
      av[2] = fw->adjmv[2];
      av[3] = fw->adjmv[3];
      RotFvector((float *)((int)ene_wrk + (uint)fw->ene * 0x430 + 0x60),(float *)(Vector4 *)av);
      sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)av);
      bVar1 = fw->ene;
    }
    sceVu0AddVector((Vector4 *)&(fw->move_box).pos.y,
                    (Vector4 *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x30),(Vector4 *)tv);
    bVar1 = fw->ene;
    (fw->move_box).rot.y = *(float *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x60);
    (fw->move_box).rot.z = *(float *)((int)ene_wrk + (uint)bVar1 * 0x430 + 100);
    (fw->move_box).rot.w = *(float *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x68);
    (fw->move_box).rspd.x = *(float *)((int)ene_wrk + (uint)bVar1 * 0x430 + 0x6c);
    return;
  }
  if ((fw->move_box).pos_mid.x == 0.0) {
    uVar2 = fw->sta;
    goto LAB_001902c4;
  }
  tv[1] = (fw->move_box).trot.z - (fw->move_box).rot.z;
  RotLimitChk((float *)((uint)tv | 4));
  fVar5 = (fw->move_box).pos_mid.x;
  if (0.0 < tv[1]) {
    if (fVar5 <= tv[1]) {
      (fw->move_box).rot.z = (fw->move_box).rot.z + fVar5;
      RotLimitChk(&(fw->move_box).rot.z);
      uVar2 = fw->sta;
      goto LAB_001902c4;
    }
    fVar5 = (fw->move_box).trot.z;
LAB_001902a4:
    (fw->move_box).pos_mid.x = 0.0;
    (fw->move_box).rot.z = fVar5;
  }
  else {
    if (-fVar5 < tv[1]) {
      fVar5 = (fw->move_box).trot.z;
      goto LAB_001902a4;
    }
    (fw->move_box).rot.z = (fw->move_box).rot.z - fVar5;
    RotLimitChk(&(fw->move_box).rot.z);
  }
  uVar2 = fw->sta;
LAB_001902c4:
  tv[0] = (fw->move_box).spd.y;
  tv[1] = (fw->move_box).spd.z;
  tv[2] = (fw->move_box).spd.w;
  tv[3] = (fw->move_box).rot.x;
  if ((uVar2 & 0x10) == 0) {
    RotFvector(&(fw->move_box).rot.y,tv);
  }
  iVar3 = FlyPlyrHitChk(fw,tv);
  if (iVar3 != 0) {
    FlyAtkHit(fw);
  }
  pfVar4 = &(fw->move_box).pos.y;
  sceVu0AddVector((Vector4 *)pfVar4,(Vector4 *)pfVar4,(Vector4 *)tv);
  return;
}

int FlyPlyrHitChk(FLY_WRK *fw, float *tv) {
	sceVu0FVECTOR pf;
	sceVu0FVECTOR pp;
	int result;
	
  FLY_DATA *pFVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float pf [4];
  float pp [4];
  
  fVar3 = plyr_wrk.soulp.x;
  iVar4 = 0;
  if (((fw->sta & 8U) == 0) || ((fw->sta & 2U) != 0)) {
    iVar4 = 0;
  }
  else {
    pFVar1 = fw->dat;
    fVar6 = (fw->move_box).pos.y;
    fVar5 = (float)(uint)(ushort)pFVar1->hit_rng;
    fVar7 = (fw->move_box).pos.w;
    if (ABS(fVar6 - plyr_wrk.cp_old.z) <= fVar5 + ABS(*tv)) {
      if (fVar5 + ABS(tv[1]) + 300.0 < ABS((fw->move_box).pos.z - plyr_wrk.cp_old.w)) {
        iVar4 = 0;
      }
      else if (fVar5 + ABS(tv[2]) < ABS(fVar7 - plyr_wrk.soulp.x)) {
        iVar4 = 0;
      }
      else {
        if (*tv != 0.0) {
          bVar2 = plyr_wrk.cp_old.z < fVar6;
          fVar5 = ABS(plyr_wrk.cp_old.z - fVar6) - fVar5;
          *tv = fVar5;
          if (bVar2) {
            *tv = -fVar5;
          }
        }
        iVar4 = 1;
        if (tv[2] != 0.0) {
          fVar5 = ABS(fVar3 - fVar7) - (float)(uint)(ushort)pFVar1->hit_rng;
          tv[2] = fVar5;
          iVar4 = 1;
          if (fVar3 < fVar7) {
            tv[2] = -fVar5;
          }
        }
      }
    }
  }
  return iVar4;
}

void FlyAtkHit(FLY_WRK *fw) {
	sceVu0FVECTOR rv;
	
  ulong uVar1;
  float rv [4];
  
  plyr_wrk.dmg = plyr_wrk.dmg + fw->dat->dmg;
  SeStartFix(0x21,0,0x1000,0x1000,0);
  fw->sta = fw->sta | 2;
  ReqFinderInOverRap(0);
  uVar1 = CONCAT44(plyr_wrk.mvsta,plyr_wrk.sta);
  if (plyr_wrk.mode == 1) {
    FinderEndSet();
    uVar1 = CONCAT44(plyr_wrk.mvsta,plyr_wrk.sta);
  }
  plyr_wrk.cond_tm = 0;
  plyr_wrk.dmg_type = '\0';
  plyr_wrk.dmg_cam_flag = '\0';
  if (((uVar1 & 0x20000000000008) == 0) && (plyr_wrk.mode != 2)) {
    plyr_wrk.dmg_type = '\x01';
    plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
    GetTrgtRot(&plyr_wrk.move_box.spd.z,&(fw->move_box).pos.y,rv,2);
    rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
    RotLimitChk((float *)((uint)rv | 4));
    ConvertRot2Dir(rv[1],'\x02');
    SetPlyrAnime('>','\0');
    plyr_wrk.cond = *(byte *)&fw->dat->cond;
    plyr_wrk.cond_tm = 0x1e0;
  }
  return;
}

void EneMinDmgCtrl(ENE_WRK *ew) {
	u_char no;
	static u_char wait_time[3];
	
  byte bVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  uVar6 = (uint)bVar1;
  switch(req_dmg_ef[bVar1]) {
  case '\x01':
    if ((ew->sta & 0x800) != 0) {
      req_dmg_ef[bVar1] = '\0';
      return;
    }
    goto LAB_001906f4;
  case '\x02':
    if (ew[1].move_box.idx != 0xff) {
      SeStartGhost(0x38,(uint)bVar1,0,0x1000,0x1000,ew[1].move_box.idx);
    }
    uVar2 = req_dmg_ef[uVar6];
    puVar5 = (uint *)((int)ene_wrk + uVar6 * 0x430);
    uVar4 = *puVar5;
    *(undefined *)((int)ene_wrk + uVar6 * 0x430 + 0x358) = 0x50;
    (&wait_time_246)[bVar1] = 0x78;
    req_dmg_ef[uVar6] = uVar2 + '\x01';
    *puVar5 = uVar4 | 0x23000000;
    break;
  case '\x03':
    cVar3 = (&wait_time_246)[bVar1];
    if (cVar3 != '\0') {
      (&wait_time_246)[bVar1] = cVar3 + -1;
      return;
    }
LAB_001906f4:
    req_dmg_ef[uVar6] = req_dmg_ef[uVar6] + '\x01';
    break;
  case '\x04':
    puVar5 = (uint *)((int)ene_wrk + (uint)bVar1 * 0x430);
    uVar6 = *puVar5;
    req_dmg_ef[bVar1] = '\0';
    *puVar5 = uVar6 & 0xdcffffff;
  }
  return;
}

void EneNormalEffectCtrl(ENE_WRK *ew) {
	sceVu0FVECTOR rv;
	u_char no;
	static u_char ne_job[3] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	};
	static u_short time[3];
	static float spd[3];
	static float rate[3];
	static float trate[3];
	static sceVu0FVECTOR padj[3];
	static void *dp[3];
	
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float rv [4];
  
  bVar1 = *(byte *)((int)&(ew->move_box).pos.x + 3);
  if ((((plyr_wrk.mode != 1) || (map_wrk.mirror_flg != '\0')) ||
      (iVar5 = EnemyUseJudge(0), 1 < iVar5)) ||
     ((((ew->sta & 0x80000) != 0 || (*(char *)&ew[1].move_box.loop == '\0')) || (ew->hp == 0)))) {
    pbVar9 = (byte *)((int)&ne_job_250 + (uint)bVar1);
    if (*pbVar9 < 2) {
      return;
    }
    ResetEffects((&dp_256)[bVar1]);
    *pbVar9 = 0;
    return;
  }
  uVar10 = (uint)bVar1;
  if (4 < *(byte *)((int)&ne_job_250 + uVar10)) {
    return;
  }
  uVar11 = (uint)bVar1;
  switch(*(byte *)((int)&ne_job_250 + uVar10)) {
  case 0:
    iVar5 = GetRndSP(0x3c,0x78);
    cVar2 = *(char *)((int)&ne_job_250 + uVar11);
    *(short *)(&time_251 + uVar11 * 2) = (short)iVar5;
    *(char *)((int)&ne_job_250 + uVar11) = cVar2 + '\x01';
    break;
  case 1:
    psVar6 = (short *)(&time_251 + uVar11 * 2);
    sVar3 = *psVar6;
    if (sVar3 == 0) {
      if (*(char *)&ew->nee == '\0') {
        return;
      }
      *(char *)((int)&ne_job_250 + uVar11) = *(char *)((int)&ne_job_250 + uVar11) + '\x01';
      return;
    }
    goto LAB_00190a48;
  case 2:
    iVar5 = GetRndSP(1,2);
    iVar8 = uVar10 * 4;
    *(float *)(&spd_252 + iVar8) = (float)iVar5;
    uVar4 = DAT_00355c34;
    *(undefined4 *)(&rate_253 + iVar8) = 0x3f800000;
    *(undefined4 *)(&trate_254 + iVar8) = uVar4;
    *(undefined2 *)(&time_251 + uVar10 * 2) = 0x32;
    fVar14 = *(float *)((int)&ew->stm_stop + 1);
    fVar12 = *(float *)((int)&ew[1].sta + 2);
    fVar13 = *(float *)((int)&ew[1].sta2 + 2);
    (ew->mylight).pad = *(int *)((int)&ew->stm_slow + 1);
    (ew->mylight).ambient[0] = fVar14;
    (ew->mylight).ambient[1] = fVar12;
    (ew->mylight).ambient[2] = fVar13;
    dp_256 = SetEffects(0x1b,4);
    iVar5 = uVar11 * 0x10;
    *(char *)((int)&ne_job_250 + uVar11) = *(char *)((int)&ne_job_250 + uVar11) + '\x01';
    *(undefined4 *)(&DAT_00401f94 + iVar5) = 0xc0e00000;
    *(undefined4 *)(&DAT_00401f9c + iVar5) = 0;
    *(undefined4 *)(&padj_255 + iVar5) = 0;
    *(undefined4 *)(&DAT_00401f98 + iVar5) = 0;
    break;
  case 3:
    psVar6 = (short *)(&time_251 + uVar11 * 2);
    if (*psVar6 == 0) {
      cVar2 = *(char *)((int)&ne_job_250 + uVar11);
      *psVar6 = 0x32;
      *(char *)((int)&ne_job_250 + uVar11) = cVar2 + '\x01';
    }
    else {
      piVar7 = &(ew->mylight).pad;
      *psVar6 = *psVar6 + -1;
      sceVu0AddVector((Vector4 *)piVar7,(Vector4 *)piVar7,(Vector4 *)(&padj_255 + uVar11 * 0x10));
    }
    break;
  case 4:
    psVar6 = (short *)(&time_251 + uVar10 * 2);
    sVar3 = *psVar6;
    if (sVar3 == 0) {
      *(undefined *)((int)&ne_job_250 + uVar11) = 0;
      return;
    }
LAB_00190a48:
    *psVar6 = sVar3 + -1;
  }
  return;
}

char EndAutoEne(u_char type) {
	char result;
	
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)ene_wrk[3].mpos.p3._10_4_ & 1) != 0) {
    if (type == '\0') {
      ene_wrk[3].mpos.p3._10_4_ = (float)((uint)ene_wrk[3].mpos.p3._10_4_ | 0x800);
    }
    else {
      ene_wrk[3].mpos.p3._10_4_ = (float)((uint)ene_wrk[3].mpos.p3._10_4_ | 0x2000);
      EneWrkReleaseChk((ENE_WRK *)((int)ene_wrk[3].mpos.p3 + 10));
    }
    cVar1 = '\x01';
  }
  return cVar1;
}

void ReqEneSpeakAdpcmCnt(u_short time) {
  es_adpcm_tm = time;
  return;
}

void EneSpeakAdpcmCtrl(ENE_WRK *ew) {
  int file_no;
  
  if (((es_adpcm_tm != 0) && (es_adpcm_tm = es_adpcm_tm + -1, es_adpcm_tm == 0)) &&
     (file_no = *(int *)(*(int *)((int)&ew[1].move_box.tpos.y + 2) + 0xc), file_no != -1)) {
    AdpcmPlayAutoGhost(file_no,(float (*) [4])((ew->mpos).p1 + 3),0x3fff,
                       *(uchar *)((int)&(ew->move_box).pos.x + 3),5);
    return;
  }
  return;
}

void GhostDeadInit(int wrk_no) {
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = wrk_no * 0x430;
  uVar3 = (uint)*(byte *)((int)ene_wrk + iVar1 + 0x10);
  if (uVar3 == 0) {
    iVar2 = SettleGhostBattleEnd();
    if (iVar2 == 0) {
      iVar2 = BindGhostBattleEnd(wrk_no);
      if (iVar2 == 0) {
        if ((ingame_wrk.msn_no == 3) && (*(char *)((int)ene_wrk + iVar1 + 0x11) == '\0')) {
          DeadGhostLoadReq();
          ingame_wrk.mode = 0x12;
          ene_dead_mode = 1;
          ene_dead_load = 1;
        }
      }
      else {
        ingame_wrk.mode = 0x12;
        ene_dead_load = 1;
        ene_dead_mode = 3;
      }
    }
    else {
      ene_dead_load = 1;
    }
  }
  else if ((uVar3 == 1) &&
          (iVar2 = EnemyNoDeadGhostJudge((uint)*(byte *)((int)ene_wrk + iVar1 + 0x11)), iVar2 == 0))
  {
    if (*(byte *)((int)ene_wrk + iVar1 + 0x11) == ap_wrk.ggst_no) {
      GuardGhostBattleEnd();
      return;
    }
    ap_wrk._88_2_ = ap_wrk._88_2_ + 1;
    ingame_wrk.mode = 0x12;
    ene_dead_mode = 5;
    FloatGhostLoadReq();
    ene_dead_load = uVar3;
  }
  return;
}

void GhostDeadMain() {
	static int gd_load_id;
	
  int iVar1;
  
  switch(ene_dead_mode) {
  case 0:
    ingame_wrk.mode = 6;
    ene_dead_load = 0;
    return;
  case 1:
    Mission03BindGhost01Delete();
    gd_load_id_272 = SeFileLoadAndSet(0x547,1);
    ene_dead_mode = 2;
    return;
  case 2:
    iVar1 = IsLoadEnd(gd_load_id_272);
    if (iVar1 != 0) {
      ene_dead_mode = 4;
      return;
    }
    return;
  case 3:
    iVar1 = BindGhostLoad();
    break;
  case 4:
    iVar1 = DeadGhostLoad();
    break;
  case 5:
    iVar1 = FloatGhostLoadMain();
    break;
  default:
    return;
  }
  if (iVar1 != 0) {
    ingame_wrk.mode = 6;
    ene_dead_load = 0;
    ene_dead_mode = 0;
  }
  return;
}

int GhostDeadLoadEndJudge() {
  return (int)(ene_dead_load == 0);
}

int EnemyUseJudge(u_char ene_type) {
	int i;
	int ene_num;
	int cnt;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 4;
  iVar2 = 0;
  if (ene_type != 0) {
    iVar4 = 3;
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    do {
      iVar1 = iVar2 * 0x430;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (*(uint *)((int)ene_wrk + iVar1) & 1);
    } while (iVar2 < iVar4);
  }
  return iVar3;
}

int ZeroGhostBattleJudge() {
	int result;
	u_char no[3];
	
  byte bVar1;
  uint uVar2;
  ENE_WRK *pEVar3;
  undefined uVar4;
  uchar no [3];
  
  no[0] = DAT_00356fa0;
  no[1] = DAT_00356fa1;
  no[2] = DAT_00356fa2;
  uVar4 = 1;
  if (ingame_wrk.msn_no == 2) {
    no[0] = '\x13';
  }
  else if (ingame_wrk.msn_no < 3) {
    if (ingame_wrk.msn_no == 1) {
      no[0] = '\v';
    }
    else {
      uVar4 = 0;
    }
  }
  else if (ingame_wrk.msn_no == 4) {
    no[1] = '\x02';
    no[2] = '\b';
    no[0] = '\x01';
  }
  else {
    uVar4 = 0;
  }
  if (!(bool)uVar4) {
    return 0;
  }
  pEVar3 = ene_wrk;
  uVar2 = ene_wrk[0].sta;
  do {
    if ((uVar2 & 1) != 0) {
      bVar1 = pEVar3->dat_no;
      if (no[0] == bVar1) {
        return 1;
      }
      if (no[1] == bVar1) {
        return 1;
      }
      if (no[2] == bVar1) {
        return 1;
      }
    }
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    if (0x253b1f < (int)pEVar3) {
      return 0;
    }
    uVar2 = pEVar3->sta;
  } while( true );
}

void EneAdpcmPlayChk(ENE_WRK *ew) {
  if (adpcm_map.ghost.use == 0) {
    AdpcmPlayGhost(*(int *)((int)(ew->mpos).p0[3] + 0x24),&(ew->move_box).tpos.x,0x3fff,
                   *(byte *)((int)&(ew->move_box).pos.x + 3),200);
    return;
  }
  return;
}
