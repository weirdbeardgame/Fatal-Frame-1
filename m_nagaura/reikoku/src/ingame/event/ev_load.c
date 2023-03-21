// STATUS: NOT STARTED

typedef struct {
	u_char scn_no;
	MSN_LOAD_DAT *load_dat;
	u_short *del_dat;
} SCN_LOAD_DAT;

typedef struct {
	u_char mode;
	u_char load_mode;
	u_char load_count;
	u_char time;
	int load_id;
} MSN_TITLE_WRK;

// warning: multiple differing types with the same name (#110,  not equal)
enum {
	MSN_TITLE_MODE_READY = 0,
	MSN_TITLE_MODE_IN = 1,
	MSN_TITLE_MODE_LOAD = 2,
	MSN_TITLE_MODE_OUT = 3,
	MSN_TITLE_MODE_END_PRE = 4,
	MSN_TITLE_MODE_END = 5
};

// warning: multiple differing types with the same name (#110,  not equal)
enum {
	MT_LOAD_MODE_PREQ = 0,
	MT_LOAD_MODE_PLYR = 1,
	MT_LOAD_MODE_DREQ = 2,
	MT_LOAD_MODE_DATA = 3,
	MT_LOAD_MODE_RREQ = 4,
	MT_LOAD_MODE_ROOM = 5,
	MT_LOAD_MODE_FGST = 6,
	MT_LOAD_MODE_DGST = 7,
	MT_LOAD_MODE_GGST = 8,
	MT_LOAD_MODE_END = 9
};

typedef struct {
	u_char mode;
	u_char count;
	int load_id;
} EVENT_LOAD_WRK;

// warning: multiple differing types with the same name (#110,  not equal)
enum {
	EV_LOAD_MODE_READY = 0,
	EV_LOAD_MODE_REQ = 1,
	EV_LOAD_MODE_LOAD = 2,
	EV_LOAD_MODE_ROOM = 3,
	EV_LOAD_MODE_SCENE = 4,
	EV_LOAD_MODE_END = 5
};

MSN_LOAD_DAT msn0_title_load_dat[0] = {
};
MSN_LOAD_DAT scn0022_load[0] = {
};
u_short scn0022_del_dat[0] = {
};
SCN_LOAD_DAT scn_load0[0] = {
};
MSN_LOAD_DAT msn1_title_load_dat[0] = {
};
MSN_LOAD_DAT scn1010_load[0] = {
};
u_short scn1010_del_dat[0] = {
};
MSN_LOAD_DAT scn1030_load[0] = {
};
u_short scn1030_del_dat[0] = {
};
MSN_LOAD_DAT scn1034_load[0] = {
};
u_short scn1034_del_dat[0] = {
};
MSN_LOAD_DAT scn1160_load[0] = {
};
u_short scn1160_del_dat[0] = {
};
MSN_LOAD_DAT scn1070_load[0] = {
};
u_short scn1070_del_dat[0] = {
};
MSN_LOAD_DAT scn1090_load[0] = {
};
u_short scn1090_del_dat[0] = {
};
MSN_LOAD_DAT scn1100_load[0] = {
};
u_short scn1100_del_dat[0] = {
};
MSN_LOAD_DAT scn1102_load[0] = {
};
u_short scn1102_del_dat[0] = {
};
MSN_LOAD_DAT scn1120_load[0] = {
};
u_short scn1120_del_dat[0] = {
};
MSN_LOAD_DAT scn1170_load[0] = {
};
u_short scn1170_del_dat[0] = {
};
MSN_LOAD_DAT scn1150_load[0] = {
};
u_short scn1150_del_dat[0] = {
};
MSN_LOAD_DAT scn1180_load[0] = {
};
u_short scn1180_del_dat[0] = {
};
MSN_LOAD_DAT scn1230_load[0] = {
};
u_short scn1230_del_dat[0] = {
};
MSN_LOAD_DAT scn1220_load[0] = {
};
u_short scn1220_del_dat[0] = {
};
MSN_LOAD_DAT scn1260_load[0] = {
};
u_short scn1260_del_dat[0] = {
};
MSN_LOAD_DAT scn1250_load[0] = {
};
u_short scn1250_del_dat[0] = {
};
MSN_LOAD_DAT scn1280_load[0] = {
};
u_short scn1280_del_dat[0] = {
};
MSN_LOAD_DAT scn1301_load[0] = {
};
u_short scn1301_del_dat[0] = {
};
MSN_LOAD_DAT scn1320_load[0] = {
};
u_short scn1320_del_dat[0] = {
};
MSN_LOAD_DAT scn1330_load[0] = {
};
u_short scn1330_del_dat[0] = {
};
MSN_LOAD_DAT scn1410_load[0] = {
};
u_short scn1410_del_dat[0] = {
};
SCN_LOAD_DAT scn_load1[0] = {
};
MSN_LOAD_DAT msn2_title_load_dat[0] = {
};
MSN_LOAD_DAT scn2013_load[0] = {
};
u_short scn2013_del_dat[0] = {
};
MSN_LOAD_DAT scn2160_load[0] = {
};
u_short scn2160_del_dat[0] = {
};
MSN_LOAD_DAT scn2020_load[0] = {
};
u_short scn2020_del_dat[0] = {
};
MSN_LOAD_DAT scn2030_load[0] = {
};
u_short scn2030_del_dat[0] = {
};
MSN_LOAD_DAT scn2100_load[0] = {
};
u_short scn2100_del_dat[0] = {
};
MSN_LOAD_DAT scn2040_load[0] = {
};
u_short scn2040_del_dat[0] = {
};
MSN_LOAD_DAT scn2170_load[0] = {
};
u_short scn2170_del_dat[0] = {
};
MSN_LOAD_DAT scn2060_load[0] = {
};
u_short scn2060_del_dat[0] = {
};
MSN_LOAD_DAT scn2062_load[0] = {
};
u_short scn2062_del_dat[0] = {
};
MSN_LOAD_DAT scn2070_load[0] = {
};
u_short scn2070_del_dat[0] = {
};
MSN_LOAD_DAT scn2072_load[0] = {
};
u_short scn2072_del_dat[0] = {
};
MSN_LOAD_DAT scn2090_load[0] = {
};
u_short scn2090_del_dat[0] = {
};
MSN_LOAD_DAT scn2092_load[0] = {
};
u_short scn2092_del_dat[0] = {
};
MSN_LOAD_DAT scn2130_load[0] = {
};
u_short scn2130_del_dat[0] = {
};
MSN_LOAD_DAT scn2132_load[0] = {
};
u_short scn2132_del_dat[0] = {
};
MSN_LOAD_DAT scn2140_load[0] = {
};
u_short scn2140_del_dat[0] = {
};
MSN_LOAD_DAT scn2141_load[0] = {
};
u_short scn2141_del_dat[0] = {
};
MSN_LOAD_DAT scn2150_load[0] = {
};
u_short scn2150_del_dat[0] = {
};
SCN_LOAD_DAT scn_load2[0] = {
};
MSN_LOAD_DAT msn3_title_load_dat[0] = {
};
MSN_LOAD_DAT scn3020_load[0] = {
};
u_short scn3020_del_dat[0] = {
};
MSN_LOAD_DAT scn3030_load[0] = {
};
u_short scn3030_del_dat[0] = {
};
MSN_LOAD_DAT scn3100_load[0] = {
};
u_short scn3100_del_dat[0] = {
};
MSN_LOAD_DAT scn3050_load[0] = {
};
u_short scn3050_del_dat[0] = {
};
MSN_LOAD_DAT scn3110_load[0] = {
};
u_short scn3110_del_dat[0] = {
};
MSN_LOAD_DAT scn3060_load[0] = {
};
u_short scn3060_del_dat[0] = {
};
MSN_LOAD_DAT scn3070_load[0] = {
};
u_short scn3070_del_dat[0] = {
};
MSN_LOAD_DAT scn4900_load[0] = {
};
u_short scn4900_del_dat[0] = {
};
MSN_LOAD_DAT scn4901_load[0] = {
};
u_short scn4901_del_dat[0] = {
};
SCN_LOAD_DAT scn_load3[0] = {
};
MSN_LOAD_DAT msn4_title_load_dat[0] = {
};
MSN_LOAD_DAT scn4011_load[0] = {
};
u_short scn4011_del_dat[0] = {
};
MSN_LOAD_DAT scn4020_load[0] = {
};
u_short scn4020_del_dat[0] = {
};
MSN_LOAD_DAT scn4040_load[0] = {
};
u_short scn4040_del_dat[0] = {
};
MSN_LOAD_DAT scn4042_load[0] = {
};
u_short scn4042_del_dat[0] = {
};
MSN_LOAD_DAT scn4030_load[0] = {
};
u_short scn4030_del_dat[0] = {
};
MSN_LOAD_DAT scn4050_load[0] = {
};
u_short scn4050_del_dat[0] = {
};
MSN_LOAD_DAT scn4070_load[0] = {
};
u_short scn4070_del_dat[0] = {
};
SCN_LOAD_DAT scn_load4[0] = {
};
MSN_LOAD_DAT *msn_title_load_dat[0] = {
};
u_char msn_start_floor[0] = {
};
u_char msn_start_room[0] = {
};
SCN_LOAD_DAT *scn_load[0] = {
};
SPRT_SDAT msn_title_sp_bak[0] = {
};
SPRT_SDAT msn_title00_sp_flr[0] = {
};
SPRT_SDAT msn_title00_sp_ttl[0] = {
};
SPRT_SDAT msn_title01_sp_flr[0] = {
};
SPRT_SDAT msn_title01_sp_ttl[0] = {
};
SPRT_SDAT msn_title02_sp_flr[0] = {
};
SPRT_SDAT msn_title02_sp_ttl[0] = {
};
SPRT_SDAT msn_title03_sp_flr[0] = {
};
SPRT_SDAT msn_title03_sp_ttl[0] = {
};
SPRT_SDAT msn_title04_sp_flr[0] = {
};
SPRT_SDAT msn_title04_sp_ttl[0] = {
};
u_char msn_title_sp_flr_no[0] = {
};
u_char msn_title_flr_sp_num[0] = {
};
u_char msn_title_sp_ttl_no[0] = {
};
u_char msn_title_ttl_sp_num[0] = {
};
SPRT_SDAT *msn_title_sp_flr[0] = {
};
SPRT_SDAT *msn_title_sp_ttl[0] = {
};
SPRT_SDAT stg_title_sp_bak[0] = {
};
SPRT_SDAT stg_title_sp_flr[0] = {
};
SPRT_SDAT stg_title_sp_ttl[0] = {
};
MSN_LOAD_DAT load_dat_wrk[40] = {
	/* [0] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [1] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [2] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [3] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [4] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [5] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [6] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [7] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [8] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [9] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [10] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [11] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [12] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [13] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [14] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [15] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [16] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [17] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [18] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [19] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [20] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [21] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [22] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [23] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [24] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [25] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [26] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [27] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [28] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [29] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [30] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [31] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [32] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [33] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [34] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [35] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [36] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [37] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [38] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	},
	/* [39] = */ {
		/* .file_no = */ 0,
		/* .file_type = */ 0,
		/* .tmp_no = */ 0,
		/* .addr = */ 0
	}
};
MSN_TITLE_WRK mttl_wrk = {
	/* .mode = */ 0,
	/* .load_mode = */ 0,
	/* .load_count = */ 0,
	/* .time = */ 0,
	/* .load_id = */ 0
};
EVENT_LOAD_WRK ev_load_wrk = {
	/* .mode = */ 0,
	/* .count = */ 0,
	/* .load_id = */ 0
};

void MissionTitleInit(int msn_no) {
  DataLoadWrkInit();
  memset(&mttl_wrk,0,8);
  mttl_wrk.mode = '\0';
  mttl_wrk.load_mode = '\0';
  ingame_wrk.stts = ingame_wrk.stts | 0x28;
  if (ingame_wrk.game == 0) {
    map_wrk.floor = (&msn_start_floor)[msn_no];
    mttl_wrk.load_id = LoadReq(msn_no + 0x26,0x1e90000);
  }
  else if (ingame_wrk.game == 1) {
    mttl_wrk.load_id = StageTitleInit();
  }
  MissionStartMapItemInit(msn_no);
  AdpcmMapNoUse();
  return;
}

int MissionTitleMain(int msn_no) {
  int iVar1;
  
  switch(mttl_wrk.mode) {
  case '\0':
    iVar1 = IsLoadEnd(mttl_wrk.load_id);
    if (iVar1 != 0) {
      mttl_wrk.mode = '\x01';
      mttl_wrk.time = '\x1e';
      EAdpcmCmdPlay(0,0,0x5fa,0,0x3fff,0x280,0xfff,0);
    }
    break;
  case '\x01':
    if (mttl_wrk.time == '\0') {
      mttl_wrk.mode = '\x02';
      mttl_wrk.time = 0xb4;
      break;
    }
    goto LAB_001b0ea8;
  case '\x02':
    if (mttl_wrk.time != '\0') {
      mttl_wrk.time = mttl_wrk.time + 0xff;
    }
    if (ingame_wrk.game == 0) {
      iVar1 = MissionTitleLoad(msn_no);
    }
    else {
      if (ingame_wrk.game != 1) break;
      iVar1 = StageTitleLoad();
    }
    if ((iVar1 != 0) && (mttl_wrk.time == '\0')) {
      mttl_wrk.time = '\x1e';
      mttl_wrk.mode = '\x03';
    }
    break;
  case '\x03':
    if (mttl_wrk.time == '\0') {
      mttl_wrk.mode = '\x04';
      EAdpcmFadeOut(0x1e);
      break;
    }
LAB_001b0ea8:
    mttl_wrk.time = mttl_wrk.time + 0xff;
    break;
  case '\x04':
    iVar1 = IsEndAdpcmFadeOut();
    if (iVar1 != 0) {
      mttl_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    ingame_wrk.stts = ingame_wrk.stts & 0xd7;
    return 1;
  }
  if ((mttl_wrk.mode != '\0') && (mttl_wrk.mode != '\x05')) {
    if (ingame_wrk.game == 0) {
      MissionTitleDisp(msn_no);
      return 0;
    }
    if (ingame_wrk.game != 1) {
      return 0;
    }
    StageTitleDisp(msn_no);
  }
  return 0;
}

int MissionTitleLoad(int msn_no) {
  char cVar1;
  int iVar2;
  MSN_LOAD_DAT *dat;
  int *piVar3;
  
  if (mttl_wrk.load_mode == '\t') {
    return 1;
  }
  if (mttl_wrk.load_mode == '\0') {
    mttl_wrk.load_mode = '\x01';
    ReqMsnInitPlyr((uchar)msn_no);
    return 0;
  }
  if (mttl_wrk.load_mode == '\x01') {
    cVar1 = MsnInitPlyr();
    if (cVar1 == '\0') {
      return 0;
    }
    mttl_wrk.load_mode = '\x02';
    return 0;
  }
  piVar3 = (int *)(&msn_title_load_dat + msn_no * 4);
  dat = (MSN_LOAD_DAT *)((uint)mttl_wrk.load_count * 8 + *piVar3);
  if (dat->file_no == -1) {
    mttl_wrk.load_mode = '\x04';
    mttl_wrk.load_count = '\0';
    return 0;
  }
  if (mttl_wrk.load_mode == '\x03') {
    iVar2 = IsLoadEnd(mttl_wrk.load_id);
    if (iVar2 == 0) {
      return 0;
    }
    MissionDataLoadAfterInit((MSN_LOAD_DAT *)(*piVar3 + (uint)mttl_wrk.load_count * 8));
    SetDataLoadWrk((MSN_LOAD_DAT *)(*piVar3 + (uint)mttl_wrk.load_count * 8));
    mttl_wrk.load_mode = '\x02';
  }
  else {
    if (mttl_wrk.load_mode == '\x02') {
      mttl_wrk.load_id = MissionDataLoadReq(dat);
      mttl_wrk.load_mode = '\x03';
      return 0;
    }
    if (mttl_wrk.load_mode == '\x04') {
      if (mttl_wrk.load_count != '\0') {
        FloatGhostLoadReq();
        mttl_wrk.load_mode = '\x06';
        return 0;
      }
      RoomMdlLoadReq((uint *)0x0,'\0',(uchar)msn_no,(&msn_start_room)[msn_no],'\x01');
      area_wrk.rgst[mttl_wrk.load_count + 8] = (&msn_start_room)[msn_no];
      mttl_wrk.load_mode = '\x05';
      return 0;
    }
    if (mttl_wrk.load_mode != '\x05') {
      if (mttl_wrk.load_mode == '\x06') {
        iVar2 = FloatGhostLoadMain();
        if (iVar2 == 0) {
          return 0;
        }
        FloatGhostAppearTypeSet(ap_wrk.fgst_no,'\0',(&msn_start_room)[msn_no]);
        iVar2 = GuardGhostAppearSet();
      }
      else {
        if (mttl_wrk.load_mode != '\a') {
          if (mttl_wrk.load_mode != '\b') {
            return 0;
          }
          iVar2 = GuardGhostLoad();
          if (iVar2 != 0) {
            mttl_wrk.load_mode = '\t';
            return 0;
          }
          return 0;
        }
        iVar2 = DeadGhostLoad();
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = GuardGhostAppearSet();
      }
      if (iVar2 == 0) {
        mttl_wrk.load_mode = '\t';
        return 0;
      }
      mttl_wrk.load_mode = '\b';
      return 0;
    }
    iVar2 = RoomMdlLoadWait();
    if (iVar2 == 0) {
      return 0;
    }
    mttl_wrk.load_mode = '\x04';
  }
  mttl_wrk.load_count = mttl_wrk.load_count + '\x01';
  return 0;
}

int MissionDataLoadReq(MSN_LOAD_DAT *dat) {
	int ret;
	
  uchar uVar1;
  uint uVar2;
  int iVar3;
  
  if (dat->file_type != '\x02') {
    if (dat->file_type != '\t') {
      iVar3 = LoadReq((uint)(ushort)dat->file_no,dat->addr);
      return iVar3;
    }
    LoadEneDmgTex((uint)dat->tmp_no,(uint *)(dat->addr + 0x98000));
    iVar3 = LoadReq((uint)(ushort)dat->file_no,dat->addr);
    return iVar3;
  }
  uVar2 = dat->addr;
  if (uVar2 == 0x10) {
    ap_wrk.fg_se_empty[0] = 1;
  }
  else if (uVar2 == 0x11) {
    ap_wrk.fg_se_empty[1] = 1;
  }
  else {
    if (uVar2 != 0x12) {
      uVar1 = dat->tmp_no;
      goto LAB_001b1240;
    }
    ap_wrk.fg_se_empty[2] = 1;
  }
  uVar1 = dat->tmp_no;
LAB_001b1240:
  if (uVar1 == '\0') {
    iVar3 = SeFileLoadAndSet((uint)(ushort)dat->file_no,dat->addr);
  }
  else {
    iVar3 = SeFileLoadAndSetFGhost((uint)(ushort)dat->file_no,dat->addr);
  }
  return iVar3;
}

void MissionDataLoadAfterInit(MSN_LOAD_DAT *dat) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  MAP_CAM_DAT *pMVar6;
  uint uVar7;
  ulong *puVar8;
  ulong in_a1;
  ulong in_a2;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong in_t0;
  ulong uVar12;
  
  uVar11 = (ulong)(int)dat;
  switch(dat->file_type) {
  case '\x03':
    uVar12 = (ulong)(int)dat->addr;
    pMVar6 = map_cam_dat;
    uVar9 = (ulong)(int)(dat->addr + 0x55e0);
    if ((uVar12 & 7) == 0) {
      do {
        puVar8 = (ulong *)uVar12;
        in_a1 = *puVar8;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar10 = puVar8[3];
        *(ulong *)pMVar6 = in_a1;
        *(ulong *)pMVar6->p1 = uVar11;
        *(ulong *)(pMVar6->p2 + 1) = uVar12;
        *(ulong *)(pMVar6->p3 + 2) = uVar10;
        puVar8 = puVar8 + 4;
        uVar12 = (ulong)(int)puVar8;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (uVar12 != uVar9);
    }
    else {
      do {
        uVar7 = (uint)uVar12;
        uVar2 = uVar7 + 7 & 7;
        uVar3 = uVar7 & 7;
        in_a1 = (*(long *)((uVar7 + 7) - uVar2) << (7 - uVar2) * 8 |
                in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(uVar7 - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0xf & 7;
        uVar3 = uVar7 + 8 & 7;
        in_a2 = (*(long *)((uVar7 + 0xf) - uVar2) << (7 - uVar2) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((uVar7 + 8) - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0x17 & 7;
        uVar3 = uVar7 + 0x10 & 7;
        uVar11 = (*(long *)((uVar7 + 0x17) - uVar2) << (7 - uVar2) * 8 |
                 uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar7 + 0x10) - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0x1f & 7;
        uVar3 = uVar7 + 0x18 & 7;
        in_t0 = (*(long *)((uVar7 + 0x1f) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((uVar7 + 0x18) - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)pMVar6->p0 + 5);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_a1 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6 = in_a1;
        puVar1 = (undefined *)((int)pMVar6->p2 + 1);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_a2 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6->p1 = in_a2;
        puVar1 = (undefined *)((int)pMVar6->p3 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p2 + 1) = uVar11;
        puVar1 = (undefined *)((int)pMVar6->roll + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p3 + 2) = in_t0;
        puVar8 = (ulong *)(uVar7 + 0x20);
        uVar12 = (ulong)(int)puVar8;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (uVar12 != uVar9);
    }
    uVar2 = (int)puVar8 + 7U & 7;
    uVar3 = (uint)puVar8 & 7;
    uVar11 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
    uVar2 = (int)puVar8 + 0xfU & 7;
    uVar3 = (uint)(puVar8 + 1) & 7;
    uVar9 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
            in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pMVar6->p0 + 5);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6 = uVar11;
    puVar1 = (undefined *)((int)pMVar6->p2 + 1);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6->p1 = uVar9;
    break;
  case '\x04':
    uVar12 = (ulong)(int)dat->addr;
    pMVar6 = map_cam_dat2;
    uVar9 = (ulong)(int)(dat->addr + 0x55e0);
    if ((uVar12 & 7) == 0) {
      do {
        puVar8 = (ulong *)uVar12;
        in_t0 = *puVar8;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar10 = puVar8[3];
        *(ulong *)pMVar6 = in_t0;
        *(ulong *)pMVar6->p1 = uVar11;
        *(ulong *)(pMVar6->p2 + 1) = uVar12;
        *(ulong *)(pMVar6->p3 + 2) = uVar10;
        puVar8 = puVar8 + 4;
        uVar12 = (ulong)(int)puVar8;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (uVar12 != uVar9);
    }
    else {
      do {
        uVar7 = (uint)uVar12;
        uVar2 = uVar7 + 7 & 7;
        uVar3 = uVar7 & 7;
        in_t0 = (*(long *)((uVar7 + 7) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(uVar7 - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0xf & 7;
        uVar3 = uVar7 + 8 & 7;
        in_a1 = (*(long *)((uVar7 + 0xf) - uVar2) << (7 - uVar2) * 8 |
                in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((uVar7 + 8) - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0x17 & 7;
        uVar3 = uVar7 + 0x10 & 7;
        in_a2 = (*(long *)((uVar7 + 0x17) - uVar2) << (7 - uVar2) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((uVar7 + 0x10) - uVar3) >> uVar3 * 8;
        uVar2 = uVar7 + 0x1f & 7;
        uVar3 = uVar7 + 0x18 & 7;
        uVar11 = (*(long *)((uVar7 + 0x1f) - uVar2) << (7 - uVar2) * 8 |
                 uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar7 + 0x18) - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)pMVar6->p0 + 5);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6 = in_t0;
        puVar1 = (undefined *)((int)pMVar6->p2 + 1);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_a1 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6->p1 = in_a1;
        puVar1 = (undefined *)((int)pMVar6->p3 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | in_a2 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p2 + 1) = in_a2;
        puVar1 = (undefined *)((int)pMVar6->roll + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p3 + 2) = uVar11;
        puVar8 = (ulong *)(uVar7 + 0x20);
        uVar12 = (ulong)(int)puVar8;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (uVar12 != uVar9);
    }
    uVar2 = (int)puVar8 + 7U & 7;
    uVar3 = (uint)puVar8 & 7;
    uVar12 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
             in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
    uVar2 = (int)puVar8 + 0xfU & 7;
    uVar3 = (uint)(puVar8 + 1) & 7;
    uVar11 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pMVar6->p0 + 5);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6 = uVar12;
    puVar1 = (undefined *)((int)pMVar6->p2 + 1);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6->p1 = uVar11;
    break;
  case '\x05':
    puVar8 = (ulong *)dat->addr;
    pMVar6 = map_cam_dat3;
    puVar5 = puVar8 + 0x670;
    if (((uint)puVar8 & 7) == 0) {
      do {
        uVar11 = *puVar8;
        in_t0 = puVar8[1];
        uVar9 = puVar8[2];
        uVar12 = puVar8[3];
        *(ulong *)pMVar6 = uVar11;
        *(ulong *)pMVar6->p1 = in_t0;
        *(ulong *)(pMVar6->p2 + 1) = uVar9;
        *(ulong *)(pMVar6->p3 + 2) = uVar12;
        puVar8 = puVar8 + 4;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (puVar8 != puVar5);
    }
    else {
      do {
        uVar2 = (int)puVar8 + 7U & 7;
        uVar3 = (uint)puVar8 & 7;
        uVar11 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
                 uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0xfU & 7;
        uVar3 = (uint)(puVar8 + 1) & 7;
        in_t0 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0x17U & 7;
        uVar3 = (uint)(puVar8 + 2) & 7;
        in_a1 = (*(long *)(((int)puVar8 + 0x17U) - uVar2) << (7 - uVar2) * 8 |
                in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)(puVar8 + 2) - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0x1fU & 7;
        uVar3 = (uint)(puVar8 + 3) & 7;
        in_a2 = (*(long *)(((int)puVar8 + 0x1fU) - uVar2) << (7 - uVar2) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)(puVar8 + 3) - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)pMVar6->p0 + 5);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6 = uVar11;
        puVar1 = (undefined *)((int)pMVar6->p2 + 1);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6->p1 = in_t0;
        puVar1 = (undefined *)((int)pMVar6->p3 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a1 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p2 + 1) = in_a1;
        puVar1 = (undefined *)((int)pMVar6->roll + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a2 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p3 + 2) = in_a2;
        puVar8 = puVar8 + 4;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (puVar8 != puVar5);
    }
    uVar2 = (int)puVar8 + 7U & 7;
    uVar3 = (uint)puVar8 & 7;
    uVar11 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
    uVar2 = (int)puVar8 + 0xfU & 7;
    uVar3 = (uint)(puVar8 + 1) & 7;
    uVar9 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
            in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pMVar6->p0 + 5);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6 = uVar11;
    puVar1 = (undefined *)((int)pMVar6->p2 + 1);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6->p1 = uVar9;
    break;
  case '\x06':
    puVar8 = (ulong *)dat->addr;
    pMVar6 = map_cam_dat4;
    puVar5 = puVar8 + 0x670;
    if (((uint)puVar8 & 7) == 0) {
      do {
        in_a2 = *puVar8;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar9 = puVar8[3];
        *(ulong *)pMVar6 = in_a2;
        *(ulong *)pMVar6->p1 = uVar11;
        *(ulong *)(pMVar6->p2 + 1) = uVar12;
        *(ulong *)(pMVar6->p3 + 2) = uVar9;
        puVar8 = puVar8 + 4;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (puVar8 != puVar5);
    }
    else {
      do {
        uVar2 = (int)puVar8 + 7U & 7;
        uVar3 = (uint)puVar8 & 7;
        in_a2 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0xfU & 7;
        uVar3 = (uint)(puVar8 + 1) & 7;
        uVar11 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
                 uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0x17U & 7;
        uVar3 = (uint)(puVar8 + 2) & 7;
        in_t0 = (*(long *)(((int)puVar8 + 0x17U) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)(puVar8 + 2) - uVar3) >> uVar3 * 8;
        uVar2 = (int)puVar8 + 0x1fU & 7;
        uVar3 = (uint)(puVar8 + 3) & 7;
        in_a1 = (*(long *)(((int)puVar8 + 0x1fU) - uVar2) << (7 - uVar2) * 8 |
                in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)((int)(puVar8 + 3) - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)pMVar6->p0 + 5);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a2 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6 = in_a2;
        puVar1 = (undefined *)((int)pMVar6->p2 + 1);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        *(ulong *)pMVar6->p1 = uVar11;
        puVar1 = (undefined *)((int)pMVar6->p3 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p2 + 1) = in_t0;
        puVar1 = (undefined *)((int)pMVar6->roll + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a1 >> (7 - uVar2) * 8;
        *(ulong *)(pMVar6->p3 + 2) = in_a1;
        puVar8 = puVar8 + 4;
        pMVar6 = (MAP_CAM_DAT *)(pMVar6->roll + 1);
      } while (puVar8 != puVar5);
    }
    uVar2 = (int)puVar8 + 7U & 7;
    uVar3 = (uint)puVar8 & 7;
    uVar9 = (*(long *)(((int)puVar8 + 7U) - uVar2) << (7 - uVar2) * 8 |
            in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)puVar8 - uVar3) >> uVar3 * 8;
    uVar2 = (int)puVar8 + 0xfU & 7;
    uVar3 = (uint)(puVar8 + 1) & 7;
    uVar11 = (*(long *)(((int)puVar8 + 0xfU) - uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(puVar8 + 1) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pMVar6->p0 + 5);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6 = uVar9;
    puVar1 = (undefined *)((int)pMVar6->p2 + 1);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    *(ulong *)pMVar6->p1 = uVar11;
    break;
  case '\a':
    FSpeMapDataMapping();
    map_wrk.dat_adr = GetFloorTopAddr(map_wrk.floor);
    break;
  case '\b':
    motInitEnemyMdl((uint *)dat->addr,(ushort)dat->file_no - 799);
    return;
  case '\t':
  case '\n':
    motInitEnemyAnm((uint *)dat->addr,(uint)dat->tmp_no,(ushort)dat->file_no - 0x363);
    return;
  case '\v':
    ItemLoadAfterInit((ushort)dat->file_no - 0x3b0,dat->addr);
    return;
  }
  return;
}

void DataLoadWrkInit() {
	int i;
	
  int iVar1;
  MSN_LOAD_DAT *pMVar2;
  
  memset(load_dat_wrk,0,0x140);
  pMVar2 = load_dat_wrk + 0x27;
  iVar1 = 0x27;
  do {
    pMVar2->file_no = -1;
    iVar1 = iVar1 + -1;
    pMVar2 = pMVar2 + -1;
  } while (-1 < iVar1);
  return;
}

void SetDataLoadWrk(MSN_LOAD_DAT *dat) {
	int i;
	
  int iVar1;
  MSN_LOAD_DAT *pMVar2;
  
  iVar1 = 0;
  pMVar2 = load_dat_wrk;
  do {
    iVar1 = iVar1 + 1;
    if (pMVar2->file_no == -1) {
      pMVar2->file_no = dat->file_no;
      pMVar2->file_type = dat->file_type;
      pMVar2->tmp_no = dat->tmp_no;
      pMVar2->addr = dat->addr;
      return;
    }
    pMVar2 = pMVar2 + 1;
  } while (iVar1 < 0x28);
  return;
}

void DelDataLoadWrk(u_short file_no) {
  ushort uVar1;
  uint uVar2;
  MSN_LOAD_DAT *pMVar3;
  
  pMVar3 = load_dat_wrk;
  uVar1 = load_dat_wrk[0].file_no;
  while( true ) {
    if ((uint)uVar1 == ((int)file_no & 0xffffU)) {
      uVar2 = ((int)file_no & 0xffffU) - 0x363;
      if ((uVar2 & 0xffff) < 0x4e) {
        motReleaseAniMdlBuf(uVar2,(uint *)pMVar3->addr);
        pMVar3->file_no = -1;
      }
      else if (pMVar3->file_type == '\x02') {
        uVar2 = pMVar3->addr;
        if (uVar2 == 0x10) {
          ap_wrk.fg_se_empty[0] = 0;
        }
        else if (uVar2 == 0x11) {
          ap_wrk.fg_se_empty[1] = 0;
        }
        else if (uVar2 == 0x12) {
          ap_wrk.fg_se_empty[2] = 0;
        }
        pMVar3->file_no = -1;
      }
      else {
        pMVar3->file_no = -1;
      }
      return;
    }
    pMVar3 = pMVar3 + 1;
    if (0x32986f < (int)pMVar3) break;
    uVar1 = pMVar3->file_no;
  }
  return;
}

u_int GetLoadDataAddr(u_short file_no) {
	int i;
	
  MSN_LOAD_DAT *pMVar1;
  int iVar2;
  
  pMVar1 = load_dat_wrk;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (pMVar1->file_no == file_no) {
      return pMVar1->addr;
    }
    pMVar1 = pMVar1 + 1;
  } while (iVar2 < 0x28);
  return 0;
}

void SortLoadDataAddr() {
	int i;
	int j;
	MSN_LOAD_DAT tmp;
	
  uchar uVar1;
  uchar uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  MSN_LOAD_DAT *pMVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  MSN_LOAD_DAT tmp;
  
  iVar9 = 0;
  iVar5 = 0;
  do {
    iVar9 = iVar9 + 1;
    if (((&load_dat_wrk[0].file_type)[iVar5] - 9 < 2) && (iVar9 < 0x28)) {
      puVar10 = (uint *)((int)&load_dat_wrk[0].addr + iVar5);
      pMVar6 = load_dat_wrk + iVar9;
      psVar7 = (short *)((int)&load_dat_wrk[0].file_no + iVar5);
      iVar8 = iVar9;
      do {
        iVar8 = iVar8 + 1;
        if (1 < pMVar6->file_type - 9) {
          sVar3 = *psVar7;
          uVar1 = (&load_dat_wrk[0].file_type)[iVar5];
          uVar4 = *puVar10;
          uVar2 = (&load_dat_wrk[0].tmp_no)[iVar5];
          *psVar7 = pMVar6->file_no;
          (&load_dat_wrk[0].file_type)[iVar5] = pMVar6->file_type;
          (&load_dat_wrk[0].tmp_no)[iVar5] = pMVar6->tmp_no;
          pMVar6->file_no = sVar3;
          *puVar10 = pMVar6->addr;
          pMVar6->file_type = uVar1;
          pMVar6->tmp_no = uVar2;
          pMVar6->addr = uVar4;
        }
        pMVar6 = pMVar6 + 1;
      } while (iVar8 < 0x28);
    }
    iVar5 = iVar9 * 8;
  } while (iVar9 < 0x28);
  return;
}

void MissionTitleDisp(int msn_no) {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	
  int iVar1;
  int iVar2;
  SPRT_SDAT *ssd_00;
  uint uVar3;
  SPRT_SDAT ssd;
  
  SetSprFile(0x1e90000);
  if (mttl_wrk.mode == 1) {
    uVar3 = (int)((0x1e - (uint)mttl_wrk.time) * 100) / 0x1e & 0xff;
  }
  else if (mttl_wrk.mode - 3 < 2) {
    uVar3 = ((uint)mttl_wrk.time * 100) / 0x1e & 0xff;
  }
  else {
    uVar3 = 100;
  }
  iVar2 = 0;
  ssd_00 = (SPRT_SDAT *)&msn_title_sp_bak;
  do {
    SimpleDispSprt(ssd_00,0x1e90000,iVar2,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,(uchar)uVar3);
    iVar2 = iVar2 + 1;
    ssd_00 = ssd_00 + 1;
  } while (iVar2 < 0xb);
  iVar2 = 0;
  if ((&msn_title_flr_sp_num)[msn_no] != '\0') {
    do {
      iVar1 = iVar2 * 0xe;
      iVar2 = iVar2 + 1;
      SimpleDispAlphaSprt((SPRT_SDAT *)(*(int *)(&msn_title_sp_flr + msn_no * 4) + iVar1),0x1e90000,
                          (uint)(byte)(&msn_title_sp_flr_no)[msn_no],(uchar)((uVar3 * 0x46) / 100),
                          '\0');
    } while (iVar2 < (int)(uint)(byte)(&msn_title_flr_sp_num)[msn_no]);
  }
  iVar2 = 0;
  if ((&msn_title_ttl_sp_num)[msn_no] != '\0') {
    do {
      iVar1 = iVar2 * 0xe;
      iVar2 = iVar2 + 1;
      SimpleDispSprt((SPRT_SDAT *)(*(int *)(&msn_title_sp_ttl + msn_no * 4) + iVar1),0x1e90000,
                     (uint)(byte)(&msn_title_sp_ttl_no)[msn_no],(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                     (uchar)uVar3);
    } while (iVar2 < (int)(uint)(byte)(&msn_title_ttl_sp_num)[msn_no]);
  }
  return;
}

void StageTitleDisp(int msn_no) {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	
  int sp_no;
  SPRT_SDAT *ssd_00;
  uchar alp_rate;
  SPRT_SDAT ssd;
  
  SetSprFile(0x1e90000);
  if (mttl_wrk.mode == 1) {
    alp_rate = (uchar)((int)((0x1e - (uint)mttl_wrk.time) * 100) / 0x1e);
  }
  else if (mttl_wrk.mode - 3 < 2) {
    alp_rate = (uchar)(((uint)mttl_wrk.time * 100) / 0x1e);
  }
  else {
    alp_rate = 'd';
  }
  sp_no = 0;
  ssd_00 = (SPRT_SDAT *)&stg_title_sp_bak;
  do {
    SimpleDispSprt(ssd_00,0x1e90000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    sp_no = sp_no + 1;
    ssd_00 = ssd_00 + 1;
  } while (sp_no < 0xb);
  return;
}

void EventLoadDataInit() {
  memset(&ev_load_wrk,0,8);
  return;
}

int EventLoadData(u_char load_no) {
	SCN_LOAD_DAT *sld;
	MSN_LOAD_DAT *mld;
	int i;
	
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  MSN_LOAD_DAT *dat;
  uint uVar6;
  
  if (ev_load_wrk.mode == '\x05') {
    return 1;
  }
  uVar6 = 0;
  puVar2 = *(uchar **)(&scn_load + (uint)ingame_wrk.msn_no * 4);
  if (*puVar2 == 0xff) {
    ev_load_wrk.mode = '\x05';
    return 1;
  }
  puVar5 = puVar2;
  if (load_no == *puVar2) {
    uVar6 = 0;
  }
  else {
    do {
      puVar5 = puVar5 + 0xc;
      uVar6 = uVar6 + 1;
      if (*puVar5 == 0xff) {
        ev_load_wrk.mode = '\x05';
        return 1;
      }
    } while (load_no != *puVar5);
    uVar6 = uVar6 & 0xff;
  }
  dat = (MSN_LOAD_DAT *)(*(int *)(puVar2 + uVar6 * 0xc + 4) + (uint)ev_load_wrk.count * 8);
  uVar1 = dat->file_type;
  if ((uVar1 == '\0') && (ev_load_wrk.mode != '\0')) {
    ev_load_wrk.mode = '\x05';
    return 1;
  }
  if (ev_load_wrk.mode == '\x01') {
    if (uVar1 == '\r') {
      SceneDataLoadReq((uint)(ushort)dat->file_no,(uint *)dat->addr);
      ev_load_wrk.mode = '\x04';
      return 0;
    }
    if (uVar1 == '\f') {
      RoomLoadReq((uint)(ushort)dat->file_no);
      ev_load_wrk.mode = '\x03';
      return 0;
    }
  }
  switch(ev_load_wrk.mode) {
  case '\0':
    iVar4 = 0;
    if (**(short **)(puVar2 + uVar6 * 0xc + 8) != -1) {
      iVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        DelDataLoadWrk(*(short *)(iVar3 + *(int *)(puVar2 + uVar6 * 0xc + 8)));
        iVar3 = iVar4 * 2;
      } while (*(short *)(iVar3 + *(int *)(puVar2 + uVar6 * 0xc + 8)) != -1);
    }
    ev_load_wrk.mode = '\x01';
    break;
  case '\x01':
    ev_load_wrk.load_id = MissionDataLoadReq(dat);
    ev_load_wrk.mode = '\x02';
    break;
  case '\x02':
    iVar4 = IsLoadEnd(ev_load_wrk.load_id);
    if (iVar4 == 0) {
      return 0;
    }
    MissionDataLoadAfterInit(dat);
    goto LAB_001b1e84;
  case '\x03':
    iVar4 = RoomMdlLoadWait();
    if (iVar4 == 0) {
      return 0;
    }
    goto LAB_001b1e8c;
  case '\x04':
    iVar4 = SceneDataLoadWait();
    if (iVar4 == 0) {
      return 0;
    }
LAB_001b1e84:
    SetDataLoadWrk(dat);
LAB_001b1e8c:
    ev_load_wrk.mode = '\x01';
    ev_load_wrk.count = ev_load_wrk.count + '\x01';
  }
  return 0;
}

int GetLoadGhostInfo(u_char *load_inf) {
	int i;
	int count;
	
  uchar uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0x27;
  puVar4 = &load_dat_wrk[0].addr;
  uVar1 = load_dat_wrk[0].file_type;
  do {
    if (uVar1 != '\b') goto LAB_001b1f34;
    uVar2 = *puVar4;
    if (uVar2 == 0xd00000) {
      load_inf[1] = '\x01';
LAB_001b1f2c:
      iVar3 = iVar3 + 1;
    }
    else if (uVar2 < 0xd00001) {
      if (uVar2 == 0xc80000) {
        *load_inf = '\x01';
        goto LAB_001b1f2c;
      }
    }
    else if (uVar2 == 0xd80000) {
      load_inf[2] = '\x01';
      goto LAB_001b1f2c;
    }
LAB_001b1f34:
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      return iVar3;
    }
    uVar1 = *(uchar *)((int)puVar4 + 6);
    puVar4 = puVar4 + 2;
  } while( true );
}

void MikuCGDisp() {
	int i;
	SPRT_SDAT ssd;
	
  int sp_no;
  SPRT_SDAT *ssd_00;
  SPRT_SDAT ssd;
  
  ssd_00 = (SPRT_SDAT *)&msn_title_sp_bak;
  sp_no = 0;
  do {
    SimpleDispSprt(ssd_00,0xb30000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    sp_no = sp_no + 1;
    ssd_00 = ssd_00 + 1;
  } while (sp_no < 0xb);
  return;
}

void RoomLoadReq(int load_room) {
	int i;
	
  uchar room_no;
  int iVar1;
  int iVar2;
  FURN_WRK *fwp;
  uchar *puVar3;
  
  puVar3 = (uchar *)((int)&area_wrk.padding + 1);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    if (load_room == (uint)*puVar3) {
      return;
    }
    puVar3 = area_wrk.rgst + iVar2 + 9;
    iVar2 = iVar1;
  } while (iVar1 < 2);
  fwp = furn_wrk;
  iVar2 = 0;
  do {
    if ((fwp->room_id != room_wrk.disp_no[0]) && ((fwp->use == '\0' || (fwp->use == '\x02')))) {
      FurnSetWrkNoUse(fwp,iVar2);
    }
    iVar2 = iVar2 + 1;
    fwp = fwp + 1;
  } while (iVar2 < 0x3c);
  iVar2 = 0;
  DoorFreeFurnWrk('\0');
  FurnSortFurnWrk('\0');
  puVar3 = (uchar *)((int)&area_wrk.padding + 1);
  do {
    room_no = (uchar)load_room;
    if (plyr_wrk.dop._13_1_ != *puVar3) {
      RoomMdlLoadReq((uint *)0x0,(uchar)iVar2,ingame_wrk.msn_no,room_no,'\x02');
      FloatGhostAppearTypeSet(ap_wrk.fgst_no,(uchar)iVar2,room_no);
      *puVar3 = room_no;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 2);
  return;
}
