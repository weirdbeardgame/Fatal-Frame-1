// STATUS: NOT STARTED

typedef struct {
	u_char mode;
	u_char count;
	u_char lock;
	int load_id;
} LOAD_START_WRK;

// warning: multiple differing types with the same name (#91,  not equal)
enum {
	LOAD_START_MODE_PREQ = 0,
	LOAD_START_MODE_PLYR = 1,
	LOAD_START_MODE_DREQ = 2,
	LOAD_START_MODE_DATA = 3,
	LOAD_START_MODE_ROOM = 4,
	LOAD_START_MODE_RGRQ = 5,
	LOAD_START_MODE_RGST = 6,
	LOAD_START_MODE_FGST = 7,
	LOAD_START_MODE_GGST = 8,
	LOAD_START_MODE_FADEIN = 9,
	LOAD_START_MODE_END = 10
};

LOAD_START_WRK load_start_wrk = {
	/* .mode = */ 0,
	/* .count = */ 0,
	/* .lock = */ 0,
	/* .load_id = */ 0
};

void InitCamera() {
	u_char i;
	
  uchar *puVar1;
  uint uVar2;
  
  memset(&camera,0,0x230);
  uVar2 = 0;
  camera.roll = DAT_00355b24;
  camera.zmax = DAT_00355b34;
  camera.fov = DAT_00355b28;
  camera.nearz = DAT_00355b2c;
  camera.farz = 32768.0;
  camera.ax = 1.0;
  camera.ay = DAT_00355b30;
  camera.cy = 2048.0;
  camera.cx = 2048.0;
  camera.zmin = 0.0;
  do {
    puVar1 = ene_cam_req_checker + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *puVar1 = '\0';
  } while (uVar2 < 0x32);
  return;
}

void InitPlyr() {
  memset(&plyr_wrk,0,0x400);
  plyr_wrk.hp = 500;
  _DAT_00252e80 = 0xffffffff;
  plyr_wrk.spd = 5.5;
  DAT_00252e63 = 0xff;
  plyr_wrk.film_no = '\x01';
  plyr_wrk.dop.dov[3]._0_2_ = 0xffff;
  plyr_wrk.po_set = -1;
  plyr_wrk.dop._12_1_ = 0xff;
  plyr_wrk.pr_set = -1;
  return;
}

void InitPlyr2(int film_no) {
  memset(&plyr_wrk,0,0x400);
  plyr_wrk.film_no = (uchar)film_no;
  _DAT_00252e80 = 0xffffffff;
  plyr_wrk.hp = 500;
  plyr_wrk.spd = 5.5;
  DAT_00252e63 = 0xff;
  plyr_wrk.dop.dov[3]._0_2_ = 0xffff;
  plyr_wrk.po_set = -1;
  plyr_wrk.dop._12_1_ = 0xff;
  plyr_wrk.pr_set = -1;
  return;
}

void InitPlyrAfterLoad() {
  _DAT_00252e80 = 0xffffffff;
  return;
}

void InitEnemy() {
  memset(ene_wrk,0,0x10c0);
  InitRequestSpirit();
  InitRequestFly();
  return;
}

void EnemyActDataLoad() {
	int eadat_tbl[3];
	
  uint uVar1;
  ulong *puVar2;
  int eadat_tbl [3];
  
  uVar1 = (int)eadat_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)eadat_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034e400 >> (7 - uVar1) * 8;
  eadat_tbl._0_8_ = DAT_0034e400;
  eadat_tbl[2] = DAT_0034e408;
  FileLoadB(eadat_tbl[ingame_wrk.msn_no],0x7e0000);
  return;
}

void InitFlyWrk() {
  memset(fly_wrk,0,0x820);
  return;
}

void InitFilm() {
  return;
}

void LoadStartDataInit() {
  memset(&load_start_wrk,0,8);
  ingame_wrk.stts = ingame_wrk.stts | 0x28;
  SortLoadDataAddr();
  load_start_wrk.mode = '\0';
  InitNowLoading();
  SetNowLoadingON();
  load_start_wrk.lock = '\x01';
  return;
}

int LoadStartDataSet() {
	int ret;
	
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = SetNowLoading();
  if (load_start_wrk.mode == '\0') {
    load_start_wrk.mode = '\x01';
    ReqMsnInitPlyr(ingame_wrk.msn_no);
  }
  else if ((load_start_wrk.mode == '\x01') && (cVar1 = MsnInitPlyr(), cVar1 != '\0')) {
    load_start_wrk.mode = '\x02';
  }
  if (load_start_wrk.mode == '\x03') {
    iVar2 = IsLoadEnd(load_start_wrk.load_id);
    if (iVar2 != 0) {
      MissionDataLoadAfterInit(load_dat_wrk + load_start_wrk.count);
      load_start_wrk.mode = '\x02';
      load_start_wrk.count = load_start_wrk.count + '\x01';
      return 0;
    }
  }
  else if (load_start_wrk.mode == '\x02') {
    if (load_start_wrk.count < 0x28) {
      do {
        uVar3 = load_start_wrk.count + 1;
        if (load_dat_wrk[load_start_wrk.count].file_no != -1) {
          load_start_wrk.load_id = MissionDataLoadReq(load_dat_wrk + load_start_wrk.count);
          load_start_wrk.mode = '\x03';
          return 0;
        }
        load_start_wrk.count = (uchar)uVar3;
      } while ((uVar3 & 0xff) < 0x28);
    }
    AreaRoomAllLoadInit();
    RoomMdlLoadReq((uint *)0x0,'\0',ingame_wrk.msn_no,plyr_wrk.dop._13_1_,'\x01');
    load_start_wrk.mode = '\x04';
    area_wrk.padding._2_1_ = 0xff;
    area_wrk.padding._1_1_ = plyr_wrk.dop._13_1_;
  }
  else if (load_start_wrk.mode == '\x04') {
    iVar2 = RoomMdlLoadWait();
    if (iVar2 != 0) {
      load_start_wrk.mode = '\x05';
    }
  }
  else if (load_start_wrk.mode == '\x05') {
    RareGhostLoadGameLoadReq();
    load_start_wrk.mode = '\x06';
  }
  else if (load_start_wrk.mode == '\x06') {
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) {
      return 0;
    }
    FloatGhostLoadReq();
    load_start_wrk.mode = '\a';
    ap_wrk.fgst_no = 0xff;
  }
  else if (load_start_wrk.mode == '\a') {
    iVar2 = FloatGhostLoadMain();
    if (iVar2 == 0) {
      return 0;
    }
    GuardGhostLoadReq();
    load_start_wrk.mode = '\b';
  }
  else if (load_start_wrk.mode == '\b') {
    iVar2 = GuardGhostLoad();
    if (iVar2 != 0) {
      printf("GuardGhostLoadend\n");
      load_start_wrk.mode = '\t';
    }
  }
  else {
    if (load_start_wrk.mode != '\t') {
      if (load_start_wrk.mode != '\n') {
        return 0;
      }
      if (iVar2 == 0xff) {
        SetBlackIn2(0x3c);
        ingame_wrk.mode = 6;
        ingame_wrk.stts = ingame_wrk.stts & 0xd7;
        return 1;
      }
      return 0;
    }
    SetNowLoadingOFF();
    load_start_wrk.mode = '\n';
  }
  return 0;
}

void InitLoadStartLock() {
  load_start_wrk.lock = '\0';
  return;
}

int GetLoadStartLock() {
  return (int)load_start_wrk.lock;
}
