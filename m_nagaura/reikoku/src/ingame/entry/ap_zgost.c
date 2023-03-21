// STATUS: NOT STARTED

typedef struct {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR rot;
	u_char room;
	u_char floor;
	u_char zh_mdl_bak[2];
	u_char zh_mot_bak[2];
	u_char zh_mmt_bak[2];
	u_short time;
} ZHOUR_WRK;

// warning: multiple differing types with the same name (#105,  not equal)
enum {
	ZH_NO_REQ = 0,
	ZH_READY = 1,
	ZH_READY2 = 2,
	ZH_START = 3,
	ZH_NOW = 4,
	ZH_OUT_REQ = 5,
	ZH_OUT = 6,
	ZH_OUT_WAIT = 7,
	ZH_OUT_LOAD0 = 8,
	ZH_OUT_LOAD1 = 9,
	ZH_RETURN = 10,
	ZH_END = 11
};

ZHOUR_WRK zh_wrk = {
	/* .pos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .rot = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .room = */ 0,
	/* .floor = */ 0,
	/* .zh_mdl_bak = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .zh_mot_bak = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .zh_mmt_bak = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .time = */ 0
};

int ZeroHourAppearMain() {
	sceVu0FVECTOR tv;
	u_char no_tbl[5];
	
  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  float tv [4];
  uchar no_tbl [5];
  
  puVar5 = &DAT_00350000;
  puVar1 = no_tbl + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00356ff0 >> (3 - uVar2) * 8;
  no_tbl._0_4_ = DAT_00356ff0;
  no_tbl[4] = DAT_00356ff4;
  if (1 < ingame_wrk.msn_no) {
    switch(ap_wrk.zh_mode) {
    case 0:
      iVar6 = ZeroHourAppearJudge();
      if (iVar6 != 0) {
        ap_wrk.zh_efct = 0;
        SetEffects(0x10,8);
        ZeroHourDataBackUp();
        LoadReq(0x347,0xc80000);
        LoadReq(0x37f,0xa30000);
        LoadEneDmgTex(0x28,(uint *)0xac8000);
        if (plyr_wrk.mode == 1) {
          FinderEndSet();
        }
        AdpcmPreMagatokiFadeOut(0x28);
        ap_wrk.zh_mode = 1;
        ingame_wrk.stts = ingame_wrk.stts | 0x80;
      }
      break;
    case 1:
      iVar6 = IsLoadEndAll();
      if (iVar6 != 0) {
        motInitEnemyMdl((uint *)0xc80000,0x28);
        motInitEnemyAnm((uint *)0xa30000,0x28,0x1c);
        ap_wrk.zh_mode = 2;
      }
      break;
    case 2:
      bVar3 = IsFadeoutEndAdpcmMagatoki();
      if (bVar3 != 0) {
        ap_wrk.zh_efct = 1;
        ap_wrk.zh_mode = 3;
      }
      break;
    case 3:
      if (ap_wrk.zh_efct != 2) {
        return 0;
      }
      ene_wrk[0].dat_no = no_tbl[ingame_wrk.msn_no];
      tv[2] = DAT_00355cf4;
      ene_wrk[0].sta = 0x80000002;
      tv[0] = 0.0;
      tv[1] = 0.0;
      tv[3] = 0.0;
      RotFvector(&plyr_wrk.move_box.trot.z,tv);
      sceVu0AddVector(&ene_wrk[0].move_box.tpos,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
      AdpcmMagatokiPlay(0x701);
      ingame_wrk.stts = ingame_wrk.stts & 0x7f;
      ap_wrk.zh_mode = 4;
      return 1;
    case 5:
      zh_wrk.time = 0xb4;
      ap_wrk.zh_mode = 7;
      ap_wrk.zh_efct = 3;
      break;
    case 7:
      zh_wrk.time = zh_wrk.time + -1;
      if (zh_wrk.time != -1) {
        return 0;
      }
      ap_wrk.zh_mode = 8;
      break;
    case 8:
      ZeroHourEnemyReLoad();
      zh_wrk.time = 0x10;
      ap_wrk.zh_mode = 9;
      break;
    case 9:
      sVar4 = zh_wrk.time + -1;
      if (zh_wrk.time == 0) {
        iVar6 = IsLoadEndAll();
        if (iVar6 == 0) {
          return 0;
        }
        ZeroHourAfterRoomLoadReq();
        AdpcmMagatokiStop();
        ap_wrk.zh_mode = 10;
      }
      else {
        if (sVar4 != 0) {
          zh_wrk.time = sVar4;
          return 0;
        }
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        zh_wrk.time = sVar4;
      }
      break;
    case 10:
      iVar6 = RoomMdlLoadWait();
      if (iVar6 != 0) {
        ap_wrk.zh_efct = 4;
        ZeroHourEnemyReLoadAfter();
        ZeroHourAfterPosReset();
        ap_wrk.zh_mode = 0xb;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      }
      break;
    case 0xb:
      if (ap_wrk.zh_efct != 5) {
        return 0;
      }
      ingame_wrk.stts = ingame_wrk.stts & 0x7f;
      if ((ap_wrk.stts & 4) != 0) {
        ap_wrk.stts = ap_wrk.stts & 0xfb;
      }
      ap_wrk.zh_mode = 0;
    }
    puVar5 = (undefined *)0x0;
  }
  return (int)puVar5;
}

void ZeroHourDataBackUp() {
	int i;
	
  short sVar1;
  uchar *puVar2;
  MSN_LOAD_DAT *pMVar3;
  int iVar4;
  
  puVar2 = zh_wrk.zh_mot_bak;
  iVar4 = 1;
  do {
    puVar2[-2] = 0xff;
    iVar4 = iVar4 + -1;
    *puVar2 = 0xff;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar4);
  pMVar3 = load_dat_wrk;
  iVar4 = 0x27;
  sVar1 = load_dat_wrk[0].file_no;
  while( true ) {
    if (sVar1 != -1) {
      if (pMVar3->file_type == '\b') {
        if (pMVar3->addr == 0xc80000) {
          zh_wrk.zh_mdl_bak[0] = *(char *)&pMVar3->file_no + 0xe1;
        }
        else if (pMVar3->addr == 0xd00000) {
          zh_wrk.zh_mdl_bak[1] = *(char *)&pMVar3->file_no + 0xe1;
        }
      }
      else if (pMVar3->file_type == '\t') {
        if (pMVar3->addr == 0xa30000) {
          zh_wrk.zh_mmt_bak[0] = pMVar3->tmp_no;
          zh_wrk.zh_mot_bak[0] = *(char *)&pMVar3->file_no + 0x9d;
          motReleaseAniMdlBuf((uint)zh_wrk.zh_mot_bak[0],(uint *)0xa30000);
        }
        else if (pMVar3->addr == 0xae0000) {
          zh_wrk.zh_mmt_bak[1] = pMVar3->tmp_no;
          zh_wrk.zh_mot_bak[1] = *(char *)&pMVar3->file_no + 0x9d;
          motReleaseAniMdlBuf((uint)zh_wrk.zh_mot_bak[1],(uint *)0xae0000);
        }
      }
    }
    pMVar3 = pMVar3 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
    sVar1 = pMVar3->file_no;
  }
  zh_wrk.pos[0] = plyr_wrk.move_box.spd.z;
  zh_wrk.pos[1] = plyr_wrk.move_box.spd.w;
  zh_wrk.pos[2] = plyr_wrk.move_box.rot.x;
  zh_wrk.pos[3] = plyr_wrk.move_box.rot.y;
  zh_wrk.rot[0] = plyr_wrk.move_box.trot.z;
  zh_wrk.rot[1] = plyr_wrk.move_box.trot.w;
  zh_wrk.rot[2] = plyr_wrk.move_box.pos_mid.x;
  zh_wrk.rot[3] = plyr_wrk.move_box.pos_mid.y;
  zh_wrk.room = plyr_wrk.dop._13_1_;
  zh_wrk.floor = map_wrk.floor;
  ZeroHourEneDmgTexDel((uint)zh_wrk.zh_mdl_bak[0]);
  ZeroHourEneDmgTexDel((uint)zh_wrk.zh_mdl_bak[1]);
  return;
}

void ZeroHourEnemyReLoad() {
  if (zh_wrk.zh_mdl_bak[0] != 0xff) {
    LoadReq(zh_wrk.zh_mdl_bak[0] + 799,0xc80000);
  }
  if (zh_wrk.zh_mdl_bak[1] != 0xff) {
    LoadReq(zh_wrk.zh_mdl_bak[1] + 799,0xd00000);
  }
  if (zh_wrk.zh_mot_bak[0] != 0xff) {
    LoadReq(zh_wrk.zh_mot_bak[0] + 0x363,0xa30000);
    LoadEneDmgTex((uint)zh_wrk.zh_mdl_bak[0],(uint *)0xac8000);
  }
  if (zh_wrk.zh_mot_bak[1] != 0xff) {
    LoadReq(zh_wrk.zh_mot_bak[1] + 0x363,0xae0000);
    LoadEneDmgTex((uint)zh_wrk.zh_mdl_bak[1],(uint *)0xb78000);
    return;
  }
  return;
}

void ZeroHourEnemyReLoadAfter() {
  if (zh_wrk.zh_mdl_bak[0] != 0xff) {
    motInitEnemyMdl((uint *)0xc80000,(uint)zh_wrk.zh_mdl_bak[0]);
  }
  if (zh_wrk.zh_mdl_bak[1] != 0xff) {
    motInitEnemyMdl((uint *)0xd00000,(uint)zh_wrk.zh_mdl_bak[1]);
  }
  if (zh_wrk.zh_mot_bak[0] != 0xff) {
    motInitEnemyAnm((uint *)0xa30000,(uint)zh_wrk.zh_mmt_bak[0],(uint)zh_wrk.zh_mot_bak[0]);
  }
  if (zh_wrk.zh_mot_bak[1] != 0xff) {
    motInitEnemyAnm((uint *)0xae0000,(uint)zh_wrk.zh_mmt_bak[1],(uint)zh_wrk.zh_mot_bak[1]);
    return;
  }
  return;
}

void ZeroHourAfterPosReset() {
  plyr_wrk.move_box.pos_mid.y = zh_wrk.rot[3];
  plyr_wrk.move_box.spd.z = zh_wrk.pos[0];
  plyr_wrk.move_box.spd.w = zh_wrk.pos[1];
  plyr_wrk.move_box.rot.x = zh_wrk.pos[2];
  plyr_wrk.move_box.rot.y = zh_wrk.pos[3];
  plyr_wrk.move_box.trot.z = zh_wrk.rot[0];
  plyr_wrk.move_box.trot.w = zh_wrk.rot[1];
  plyr_wrk.move_box.pos_mid.x = zh_wrk.rot[2];
  if (zh_wrk.floor != map_wrk.floor) {
    MapFloorChange(zh_wrk.floor);
    return;
  }
  return;
}

void ZeroHourOutReq() {
  motReleaseAniMdlBuf(0x1c,(uint *)0xa30000);
  ap_wrk.zh_efct = 0;
  FinderEndSet();
  ap_wrk.zh_mode = 5;
  ingame_wrk.stts = ingame_wrk.stts | 0x80;
  return;
}

void ZeroHourAfterRoomLoadReq() {
	int i;
	int load_room;
	
  uchar room_no;
  int iVar1;
  int iVar2;
  FURN_WRK *fwp;
  uchar *puVar3;
  
  room_no = zh_wrk.room;
  puVar3 = (uchar *)((int)&area_wrk.padding + 1);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    if (zh_wrk.room == *puVar3) {
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
    if (plyr_wrk.dop._13_1_ != *puVar3) {
      RoomMdlLoadReq((uint *)0x0,(uchar)iVar2,ingame_wrk.msn_no,room_no,'\x01');
      FloatGhostAppearTypeSet(ap_wrk.fgst_no,(uchar)iVar2,room_no);
      *puVar3 = room_no;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 2);
  return;
}

int ZeroHourAppearJudge() {
  return 0;
}
