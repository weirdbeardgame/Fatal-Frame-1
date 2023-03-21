// STATUS: NOT STARTED

typedef struct {
	u_char ggst[5];
	u_char room[5];
	short int pos[5][3];
} GGOST_DAT;

// warning: multiple differing types with the same name (#101,  not equal)
enum {
	GUARD_GHOST_NO_REQ = 0,
	GUARD_GHOST_LOAD = 1,
	GUARD_GHOST_AP_WAIT = 2,
	GUARD_GHOST_AP_NOW = 3,
	GUARD_GHOST_BTL_END = 4
};

// warning: multiple differing types with the same name (#101,  not equal)
enum {
	GGLOAD_MODE_REQ = 0,
	GGLOAD_MODE_REREQ = 1,
	GGLOAD_MODE_START = 2,
	GGLOAD_MODE_RESTART = 3,
	GGLOAD_MODE_MDL = 4,
	GGLOAD_MODE_MOT = 5,
	GGLOAD_MODE_SE = 6,
	GGLOAD_MODE_END = 7
};

GGOST_DAT msn03ggst_dat = {
	/* .ggst = */ {
		/* [0] = */ 4,
		/* [1] = */ 0,
		/* [2] = */ 4,
		/* [3] = */ 255,
		/* [4] = */ 255
	},
	/* .room = */ {
		/* [0] = */ 3,
		/* [1] = */ 23,
		/* [2] = */ 27,
		/* [3] = */ 255,
		/* [4] = */ 255
	},
	/* .pos = */ {
		/* [0] = */ {
			/* [0] = */ 2500,
			/* [1] = */ -60,
			/* [2] = */ 1600
		},
		/* [1] = */ {
			/* [0] = */ 2000,
			/* [1] = */ 0,
			/* [2] = */ 3000
		},
		/* [2] = */ {
			/* [0] = */ -2000,
			/* [1] = */ 0,
			/* [2] = */ 3200
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
		}
	}
};
GGOST_DAT msn04ggst_dat = {
	/* .ggst = */ {
		/* [0] = */ 7,
		/* [1] = */ 11,
		/* [2] = */ 255,
		/* [3] = */ 255,
		/* [4] = */ 255
	},
	/* .room = */ {
		/* [0] = */ 16,
		/* [1] = */ 22,
		/* [2] = */ 255,
		/* [3] = */ 255,
		/* [4] = */ 255
	},
	/* .pos = */ {
		/* [0] = */ {
			/* [0] = */ 5500,
			/* [1] = */ 0,
			/* [2] = */ 2500
		},
		/* [1] = */ {
			/* [0] = */ 5100,
			/* [1] = */ 0,
			/* [2] = */ 4400
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
		}
	}
};
GGOST_DAT *ggst_dat[0] = {
};
int gg_load_mode = 0;
int gg_room_bak = 0;

int GuardGhostAppearSet() {
	int i;
	int dat_no;
	
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar2 = _ggst_dat;
  if (ingame_wrk.msn_no == 3) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + 5;
      pbVar3 = ap_wrk.gg_room + iVar4;
      iVar4 = iVar4 + 1;
      *pbVar3 = pbVar2[iVar1];
    } while (iVar4 < 5);
    ap_wrk.ggst_cnt = 0;
    ap_wrk.gg_mode = 0;
    gg_load_mode = 0;
    ap_wrk.ggst_no = *_ggst_dat;
    return 1;
  }
  return 0;
}

void GuardGhostLoadInit() {
  gg_load_mode = 0;
  return;
}

int GuardGhostAppearMain() {
  byte bVar1;
  uint uVar2;
  
  bVar1 = ingame_wrk.msn_no;
  if (ingame_wrk.msn_no == 3) {
    uVar2 = (uint)(ap_wrk.gg_mode < 3);
    if (ap_wrk.gg_mode == 2) {
      uVar2 = GuardGhostAppear();
      if (uVar2 != 0) {
        ap_wrk.gg_mode = bVar1;
      }
    }
    else if ((uVar2 != 0) && (uVar2 = 1, ap_wrk.gg_mode == 1)) {
      uVar2 = GuardGhostLoad();
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

int GuardGhostReloadReq() {
	int dat_no;
	
  if ((ap_wrk.ggst_cnt != 5) &&
     (*(char *)(*(int *)(&ggst_dat + (ingame_wrk.msn_no - 3) * 4) + (uint)ap_wrk.ggst_cnt) != -1)) {
    gg_load_mode = 1;
    return 1;
  }
  ene_dead_load = 0;
  return 0;
}

void GuardGhostLoadReq() {
	int dat_no;
	
  if (ingame_wrk.msn_no != 3) {
    ene_dead_load = 0;
    ap_wrk.ggst_no = 0xff;
    ap_wrk.gg_mode = 0;
    return;
  }
  if (ap_wrk.ggst_cnt == 5) {
    ap_wrk.gg_mode = 0;
    ap_wrk.ggst_no = 0xff;
    ene_dead_load = 0;
    return;
  }
  if (*(byte *)(_ggst_dat + (uint)ap_wrk.ggst_cnt) != 0xff) {
    ap_wrk.gg_mode = 1;
    ene_dead_load = 1;
    gg_load_mode = 0;
    return;
  }
  ap_wrk.ggst_no = *(byte *)(_ggst_dat + (uint)ap_wrk.ggst_cnt);
  ap_wrk.gg_mode = 0;
  ene_dead_load = 0;
  return;
}

int GuardGhostLoad() {
	int dat_no;
	int gg_no;
	
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)ap_wrk.ggst_no;
  uVar3 = (uint)ingame_wrk.msn_no;
  if (uVar3 != 3) {
    return 1;
  }
  if (uVar4 == 0xff) {
    return 1;
  }
  switch(gg_load_mode) {
  case 0:
    gg_load_mode = 2;
    break;
  case 1:
    gg_load_mode = 3;
    break;
  case 2:
    if (ap_wrk.ggst_cnt != 0) {
      motReleaseAniMdlBuf((uint)*(ushort *)
                                 ((uint)ap_wrk.ggst_no * 0x40 +
                                  *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1c),
                          (uint *)0xb90000);
      ap_wrk.ggst_no = *(byte *)(*(int *)(&ggst_dat + (uVar3 - 3) * 4) + (uint)ap_wrk.ggst_cnt);
    }
    uVar1 = *(ushort *)
             ((uint)ap_wrk.ggst_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a
             );
    goto LAB_0019a528;
  case 3:
    uVar1 = *(ushort *)
             ((uint)ap_wrk.ggst_no * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a
             );
LAB_0019a528:
    LoadReq(uVar1 + 799,0xd80000);
    gg_load_mode = 4;
    break;
  case 4:
    iVar2 = IsLoadEndAll();
    if (iVar2 != 0) {
      iVar2 = uVar4 * 0x40;
      motInitEnemyMdl((uint *)0xd80000,
                      (uint)*(ushort *)
                             (iVar2 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a));
      LoadEneDmgTex((uint)*(ushort *)
                           (iVar2 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1a),
                    (uint *)0xc28000);
      LoadReq(*(ushort *)(iVar2 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x1c) + 0x363,
              0xb90000);
      gg_load_mode = 5;
    }
    break;
  case 5:
    iVar2 = IsLoadEndAll();
    if (iVar2 != 0) {
      iVar2 = uVar4 * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4);
      motInitEnemyAnm((uint *)0xb90000,(uint)*(ushort *)(iVar2 + 0x1a),
                      (uint)*(ushort *)(iVar2 + 0x1c));
      SeFileLoadAndSetFGhost
                (*(uint *)(uVar4 * 0x40 + *(int *)(&fene_dat + (uint)ingame_wrk.msn_no * 4) + 0x20),
                 0x12);
      gg_load_mode = 6;
    }
    break;
  case 6:
    iVar2 = IsLoadEndAll();
    if (iVar2 != 0) {
      ap_wrk.gg_mode = 2;
      ene_dead_load = 0;
      gg_load_mode = 7;
      return 1;
    }
  }
  return 0;
}

int GuardGhostAppear() {
	int i;
	
  uchar uVar1;
  byte *pbVar2;
  int room_no;
  int iVar3;
  
  uVar1 = IsAllConnectDoorClose();
  if (uVar1 != '\0') {
    pbVar2 = ap_wrk.gg_room;
    room_no = 0;
    do {
      if (*pbVar2 == plyr_wrk.dop._13_1_) {
        GuardGhostBattleSet(room_no);
        return 1;
      }
      iVar3 = room_no + 1;
      pbVar2 = ap_wrk.gg_room + room_no + 1;
      room_no = iVar3;
    } while (iVar3 < 5);
  }
  return 0;
}

void GuardGhostBattleSet(int room_no) {
	int dat_no;
	sceVu0FVECTOR pos;
	
  byte bVar1;
  int iVar2;
  Vector4 pos;
  
  bVar1 = ap_wrk.room_fg[plyr_wrk.dop._13_1_];
  ap_wrk.room_fg[plyr_wrk.dop._13_1_] = 1;
  iVar2 = *(int *)(&ggst_dat + (ingame_wrk.msn_no - 3) * 4);
  ene_wrk[0].dat_no = ap_wrk.ggst_no;
  ene_wrk[0].sta = 2;
  ene_wrk[0].type = 1;
  pos.x = (float)(int)*(short *)(iVar2 + (uint)ap_wrk.ggst_cnt * 6 + 10);
  gg_room_bak = (int)bVar1;
  pos.y = (float)(int)*(short *)((uint)ap_wrk.ggst_cnt * 6 + iVar2 + 0xc);
  pos.z = (float)(int)*(short *)((uint)ap_wrk.ggst_cnt * 6 + iVar2 + 0xe);
  sceVu0AddVector(&pos,room_wrk.pos,&pos);
  ene_wrk[0].move_box.tpos.x = pos.x;
  ene_wrk[0].move_box.tpos.y = pos.y;
  ene_wrk[0].move_box.tpos.z = pos.z;
  ene_wrk[0].move_box.tpos.w = pos.w;
  DoorLockBattleSet();
  ap_wrk.gg_room[room_no] = 0xff;
  return;
}

void GuardGhostBattleEnd() {
  ap_wrk.room_fg[plyr_wrk.dop._13_1_] = (byte)gg_room_bak;
  ap_wrk.ggst_cnt = ap_wrk.ggst_cnt + 1;
  GuardGhostLoadReq();
  DoorLockBattleAfter();
  return;
}
