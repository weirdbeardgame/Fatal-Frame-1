// STATUS: NOT STARTED

AP_WRK ap_wrk = {
	/* .stts = */ 0,
	/* .gtime = */ 0,
	/* .rtime = */ 0,
	/* .ptime = */ 0,
	/* .atime = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0,
		/* [10] = */ 0
	},
	/* .room_fg = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0,
		/* [10] = */ 0,
		/* [11] = */ 0,
		/* [12] = */ 0,
		/* [13] = */ 0,
		/* [14] = */ 0,
		/* [15] = */ 0,
		/* [16] = */ 0,
		/* [17] = */ 0,
		/* [18] = */ 0,
		/* [19] = */ 0,
		/* [20] = */ 0,
		/* [21] = */ 0,
		/* [22] = */ 0,
		/* [23] = */ 0,
		/* [24] = */ 0,
		/* [25] = */ 0,
		/* [26] = */ 0,
		/* [27] = */ 0,
		/* [28] = */ 0,
		/* [29] = */ 0,
		/* [30] = */ 0,
		/* [31] = */ 0,
		/* [32] = */ 0,
		/* [33] = */ 0,
		/* [34] = */ 0,
		/* [35] = */ 0,
		/* [36] = */ 0,
		/* [37] = */ 0,
		/* [38] = */ 0,
		/* [39] = */ 0,
		/* [40] = */ 0,
		/* [41] = */ 0
	},
	/* .sound = */ 0,
	/* .pic_num = */ 0,
	/* .raze = */ 0,
	/* .fg_mode = */ 0,
	/* .fgst_no = */ 0,
	/* .gg_mode = */ 0,
	/* .ggst_no = */ 0,
	/* .zh_mode = */ 0,
	/* .zh_efct = */ 0,
	/* .fg_pos = */ {
		/* [0] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		}
	},
	/* .fg_set_num = */ 0,
	/* .fg_se_empty = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .gg_room = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	},
	/* .pg_req = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	},
	/* .ggst_cnt = */ 0,
	/* .fgst_cnt = */ 0,
	/* .dgst_cnt = */ 0,
	/* .zh_ap = */ 0,
	/* .fg_ap = */ 0
};

void EntryInit() {
	int i;
	
  int iVar1;
  byte *pbVar2;
  
  memset(&ap_wrk,0,0x60);
  pbVar2 = ap_wrk.pg_req + 4;
  iVar1 = 4;
  do {
    *pbVar2 = 0xff;
    iVar1 = iVar1 + -1;
    pbVar2 = pbVar2 + -1;
  } while (-1 < iVar1);
  FloatGhostAppearInit();
  SettleGhostInit();
  ap_wrk.ggst_no = 0xff;
  return;
}

void ClearAppearWrkInfo() {
	int i;
	
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 10;
  ap_wrk.gtime = 0;
  pbVar1 = ap_wrk.atime + 10;
  ap_wrk.rtime = 0;
  ap_wrk.ptime = 0;
  do {
    *pbVar1 = 0;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar1 + -1;
  } while (-1 < iVar2);
  ap_wrk.raze = 0;
  ap_wrk.sound = 0;
  ap_wrk.pic_num = 0;
  return;
}

void EntryMain() {
  EntryTimeCtrl();
  if (dbg_wrk.param_fuyurei != 0) {
    if ((((ap_wrk.stts & 4) != 0) || (ap_wrk.room_fg[plyr_wrk.dop._13_1_] != 0)) ||
       (ap_wrk.zh_mode != 0)) {
      ZeroHourAppearMain();
    }
    if (((ap_wrk.stts & 0x40) == 0) && (ap_wrk.room_fg[plyr_wrk.dop._13_1_] != 0)) {
      if (ap_wrk.zh_mode != 0) goto LAB_001988c4;
      FloatGhostAppearMain();
    }
  }
  if (ap_wrk.zh_mode == 0) {
    GuardGhostAppearMain();
  }
LAB_001988c4:
  if ((ap_wrk.stts & 0x20) == 0) {
    RareGhostAppearCtrl();
  }
  if ((ap_wrk.stts & 0x10) == 0) {
    PuzzleGhostMain();
  }
  ClearAppearWrkInfo();
  return;
}

void AreaEntrySet() {
  return;
}
