// STATUS: NOT STARTED

typedef struct {
	sceVu0FVECTOR pos;
	u_char floor;
} FREE_DAT;

// warning: multiple differing types with the same name (#174,  not equal)
enum {
	BTL_LOAD_MODE_PREQ = 0,
	BTL_LOAD_MODE_PLYR = 1,
	BTL_LOAD_MODE_DREQ = 2,
	BTL_LOAD_MODE_DATA = 3,
	BTL_LOAD_MODE_RREQ = 4,
	BTL_LOAD_MODE_ROOM = 5,
	BTL_LOAD_MODE_GOST = 6,
	BTL_LOAD_MODE_END = 7
};

typedef struct {
	u_char *addr;
	int size;
} BTL_SAVE_STR;

MSN_LOAD_DAT stage_load_dat0[0] = {
};
MSN_LOAD_DAT stage_load_dat1[0] = {
};
MSN_LOAD_DAT stage_load_dat2[0] = {
};
MSN_LOAD_DAT stage_load_dat3[0] = {
};
MSN_LOAD_DAT stage_load_dat4[0] = {
};
MSN_LOAD_DAT *stage_load_dat[0] = {
};
FREE_DAT free_dat[0] = {
};
BTL_SAVE_STR btl_save_str[0] = {
};
u_long btl_save_str_num = 20;

void FreeModeMain() {
	char *str1;
	char *str2;
	char *str3;
	char *csr0;
	
  bool bVar1;
  float x;
  float y;
  
  SetASCIIString(60.0,50.0,"FREE MODE");
  y = 150.0;
  SetASCIIString(120.0,110.0,s_MSN_NO_00357788);
  x = 230.0;
  SetASCIIString(120.0,y,s_ROOM_NO_00357790);
  SetASCIIString(120.0,190.0,s_START_00357798);
  SetASCIIString(90.0,(float)((uint)btl_wrk.csr[0] * 0x28 + 0x6e),&DAT_003577a0);
  SetInteger2(0,x,110.0,0,0x80,0x80,0x80,(uint)btl_wrk.csr[1]);
  SetInteger2(0,x,y,0,0x80,0x80,0x80,(uint)btl_wrk.csr[2]);
  if (*key_now[5] == 1) {
    OutGameModeChange(4);
    return;
  }
  if (*key_now[7] == 1) {
    if (btl_wrk.csr[0] == '\x02') {
      ingame_wrk.game = 1;
      GameModeChange(0);
      return;
    }
  }
  else if (*key_now[0] == 1) {
    if (btl_wrk.csr[0] != '\0') {
      btl_wrk.csr[0] = btl_wrk.csr[0] + 0xff;
    }
  }
  else if (*key_now[1] == 1) {
    if (btl_wrk.csr[0] < 2) {
      btl_wrk.csr[0] = btl_wrk.csr[0] + '\x01';
    }
  }
  else if (*key_now[2] == 1) {
    if ((btl_wrk.csr[0] == '\0') &&
       (bVar1 = btl_wrk.csr[1] == '\0', btl_wrk.csr[1] = btl_wrk.csr[1] + 0xff, bVar1)) {
      btl_wrk.csr[1] = '\x04';
    }
    if ((btl_wrk.csr[0] == '\x01') &&
       (bVar1 = btl_wrk.csr[2] == '\0', btl_wrk.csr[2] = btl_wrk.csr[2] + 0xff, bVar1)) {
      btl_wrk.csr[2] = '&';
    }
  }
  else if (*key_now[3] == 1) {
    if ((btl_wrk.csr[0] == '\0') &&
       (bVar1 = 3 < btl_wrk.csr[1], btl_wrk.csr[1] = btl_wrk.csr[1] + '\x01', bVar1)) {
      btl_wrk.csr[1] = '\0';
    }
    if ((btl_wrk.csr[0] == '\x01') &&
       (bVar1 = 0x25 < btl_wrk.csr[2], btl_wrk.csr[2] = btl_wrk.csr[2] + '\x01', bVar1)) {
      btl_wrk.csr[2] = '\0';
    }
  }
  return;
}

void FreeModePosSet() {
  map_wrk.floor = (&DAT_00344100)[(uint)btl_wrk.csr[2] * 0x20];
  plyr_wrk.move_box.rot.y = *(float *)(&DAT_003440fc + (uint)btl_wrk.csr[2] * 0x20);
  plyr_wrk.move_box.spd.z = *(float *)(&free_dat + (uint)btl_wrk.csr[2] * 0x20);
  plyr_wrk.move_box.spd.w = *(float *)(&DAT_003440f4 + (uint)btl_wrk.csr[2] * 0x20);
  plyr_wrk.move_box.rot.x = *(float *)(&DAT_003440f8 + (uint)btl_wrk.csr[2] * 0x20);
  return;
}

void BattleModeInit() {
  memset(&btl_wrk,0,0xe);
  return;
}

void ClearStageWrk() {
	int i;
	
  int iVar1;
  short *psVar2;
  
  memset(stage_wrk,0,0x140);
  psVar2 = &stage_wrk[0x13].best_time;
  iVar1 = 0x13;
  do {
    *psVar2 = -0x739c;
    iVar1 = iVar1 + -1;
    psVar2 = psVar2 + -8;
  } while (-1 < iVar1);
  return;
}

void BattleModeMain() {
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str7;
	char *str5;
	char *str6;
	char *csr0;
	
  uchar uVar1;
  float y;
  float x;
  float y_00;
  float y_01;
  float y_02;
  
  SetASCIIString(30.0,50.0,"BATTLE MODE");
  y_01 = 190.0;
  SetASCIIString(70.0,150.0,s_STAGE_1_003577a8);
  y_00 = 270.0;
  y_02 = 310.0;
  SetASCIIString(70.0,y_01,s_STAGE_2_003577b0);
  y = 110.0;
  SetASCIIString(70.0,230.0,s_STAGE_3_003577b8);
  SetASCIIString(70.0,y_00,s_STAGE_4_003577c0);
  SetASCIIString(70.0,y_02,s_STAGE_5_003577c8);
  x = 400.0;
  SetASCIIString(y_00,y,&DAT_003577d0);
  SetASCIIString(410.0,y,s_SCORE_003577d8);
  SetASCIIString(40.0,(float)((uint)btl_wrk.stage_no * 0x28 + 0x96),&DAT_003577a0);
  SetInteger2(0,212.0,150.0,0,0x80,0x80,0x80,(ushort)stage_wrk[0].best_time / 0x3c);
  SetInteger2(0,240.0,154.0,0,0x80,0x80,0x80,((uint)(ushort)stage_wrk[0].best_time % 0x3c) / 6);
  SetInteger2(0,212.0,y_01,0,0x80,0x80,0x80,(ushort)stage_wrk[1].best_time / 0x3c);
  SetInteger2(0,240.0,194.0,0,0x80,0x80,0x80,((uint)(ushort)stage_wrk[1].best_time % 0x3c) / 6);
  SetInteger2(0,212.0,230.0,0,0x80,0x80,0x80,(ushort)stage_wrk[2].best_time / 0x3c);
  SetInteger2(0,240.0,234.0,0,0x80,0x80,0x80,((uint)(ushort)stage_wrk[2].best_time % 0x3c) / 6);
  SetInteger2(0,212.0,y_00,0,0x80,0x80,0x80,(ushort)stage_wrk[3].best_time / 0x3c);
  SetInteger2(0,240.0,274.0,0,0x80,0x80,0x80,((uint)(ushort)stage_wrk[3].best_time % 0x3c) / 6);
  SetInteger2(0,212.0,y_02,0,0x80,0x80,0x80,(ushort)stage_wrk[4].best_time / 0x3c);
  SetInteger2(0,240.0,314.0,0,0x80,0x80,0x80,((uint)(ushort)stage_wrk[4].best_time % 0x3c) / 6);
  SetInteger2(0,x,150.0,0,0x80,0x80,0x80,(int)stage_wrk[0].best_shot);
  SetInteger2(0,x,y_01,0,0x80,0x80,0x80,(int)stage_wrk[1].best_shot);
  SetInteger2(0,x,230.0,0,0x80,0x80,0x80,(int)stage_wrk[2].best_shot);
  SetInteger2(0,x,y_00,0,0x80,0x80,0x80,(int)stage_wrk[3].best_shot);
  SetInteger2(0,x,y_02,0,0x80,0x80,0x80,(int)stage_wrk[4].best_shot);
  SetInteger2(0,470.0,150.0,0,0x80,0x80,0x80,(uint)stage_wrk[0].rank);
  SetInteger2(0,470.0,y_01,0,0x80,0x80,0x80,(uint)stage_wrk[1].rank);
  SetInteger2(0,470.0,230.0,0,0x80,0x80,0x80,(uint)stage_wrk[2].rank);
  SetInteger2(0,470.0,y_00,0,0x80,0x80,0x80,(uint)stage_wrk[3].rank);
  SetInteger2(0,470.0,y_02,0,0x80,0x80,0x80,(uint)stage_wrk[4].rank);
  if (*key_now[5] == 1) {
    OutGameModeChange(4);
    return;
  }
  if (*key_now[7] == 1) {
    ingame_wrk.game = 1;
    GameModeChange(0);
    return;
  }
  if (*key_now[0] == 1) {
    uVar1 = btl_wrk.stage_no;
    if (btl_wrk.stage_no != '\0') {
      uVar1 = btl_wrk.stage_no + 0xff;
    }
  }
  else {
    if (*key_now[1] != 1) {
      return;
    }
    uVar1 = btl_wrk.stage_no + '\x01';
    if (3 < btl_wrk.stage_no) {
      return;
    }
  }
  btl_wrk.stage_no = uVar1;
  return;
}

int StageTitleInit() {
	int ret;
	
  int iVar1;
  
  btl_wrk.load_mode = '\0';
  iVar1 = LoadReq((uint)btl_wrk.stage_no % 5 + 0x26,0x1e90000);
  map_wrk.floor = (&DAT_00344864)[(uint)btl_wrk.stage_no * 0xc0];
  plyr_wrk.move_box.trot.w = SetRot360(*(ushort *)(&DAT_00344872 + (uint)btl_wrk.stage_no * 0xc0));
  ingame_wrk.msn_no = (&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0];
  plyr_wrk.move_box.rot.x = *(float *)(&DAT_00344888 + (uint)btl_wrk.stage_no * 0xc0);
  plyr_wrk.move_box.spd.z = *(float *)(&DAT_00344880 + (uint)btl_wrk.stage_no * 0xc0);
  plyr_wrk.move_box.spd.w = *(float *)(&DAT_00344884 + (uint)btl_wrk.stage_no * 0xc0);
  return iVar1;
}

int StageTitleLoad() {
	int map_no;
	
  char cVar1;
  int iVar2;
  MSN_LOAD_DAT *dat;
  int *piVar3;
  
  if (btl_wrk.load_mode == '\a') {
    iVar2 = 1;
  }
  else if (btl_wrk.load_mode == '\0') {
    btl_wrk.load_mode = '\x01';
    ReqMsnInitPlyr('\x01');
    iVar2 = 0;
  }
  else {
    if (btl_wrk.load_mode == '\x01') {
      cVar1 = MsnInitPlyr();
      if (cVar1 != '\0') {
        btl_wrk.load_mode = '\x02';
      }
    }
    else {
      piVar3 = (int *)(&stage_load_dat +
                      (uint)(byte)(&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0] * 4);
      dat = (MSN_LOAD_DAT *)((uint)btl_wrk.load_count * 8 + *piVar3);
      if (dat->file_no == -1) {
        StageGhostLoadReq();
        btl_wrk.load_count = '\0';
        btl_wrk.load_mode = '\x06';
      }
      else if (btl_wrk.load_mode == '\x03') {
        iVar2 = IsLoadEnd((uint)btl_wrk.load_id);
        if (iVar2 == 0) {
          return 0;
        }
        MissionDataLoadAfterInit((MSN_LOAD_DAT *)(*piVar3 + (uint)btl_wrk.load_count * 8));
        SetDataLoadWrk((MSN_LOAD_DAT *)(*piVar3 + (uint)btl_wrk.load_count * 8));
        btl_wrk.load_mode = '\x02';
        btl_wrk.load_count = btl_wrk.load_count + '\x01';
      }
      else if (btl_wrk.load_mode == '\x02') {
        iVar2 = MissionDataLoadReq(dat);
        btl_wrk.load_mode = '\x03';
        btl_wrk.load_id = (uchar)iVar2;
      }
      else if (btl_wrk.load_mode == '\x06') {
        iVar2 = IsLoadEndAll();
        if (iVar2 == 0) {
          return 0;
        }
        StageGhostLoadAfter();
        btl_wrk.load_mode = '\x04';
      }
      else if (btl_wrk.load_mode == '\x04') {
        if (btl_wrk.load_count != '\0') {
          btl_wrk.load_mode = '\a';
          return 1;
        }
        RoomMdlLoadReq((uint *)0x0,'\0',(&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0],
                       (&DAT_00344863)[(uint)btl_wrk.stage_no * 0xc0],'\x01');
        btl_wrk.load_mode = '\x05';
        area_wrk.rgst[btl_wrk.load_count + 8] = (&DAT_00344863)[(uint)btl_wrk.stage_no * 0xc0];
      }
      else {
        if (btl_wrk.load_mode != '\x05') {
          return 0;
        }
        iVar2 = RoomMdlLoadWait();
        if (iVar2 == 0) {
          return 0;
        }
        btl_wrk.load_mode = '\x04';
        btl_wrk.load_count = btl_wrk.load_count + '\x01';
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

void StageGhostLoadReq() {
	int i;
	int ene_no;
	ENE_DAT *edp;
	
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ENE_DAT *edp;
  
  iVar5 = 0;
  iVar2 = *(int *)(&jene_dat + (uint)(byte)(&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0] * 4);
  bVar1 = (&DAT_00344865)[(uint)btl_wrk.stage_no * 0xc0];
  while (bVar1 != 0xff) {
    iVar4 = iVar5 * 4;
    iVar3 = (uint)bVar1 * 0x40 + iVar2;
    LoadReq(*(ushort *)(iVar3 + 0x1a) + 799,*(uint *)(&load_mdl_addr + iVar4));
    LoadEneDmgTex((uint)*(ushort *)(iVar3 + 0x1a),
                  (uint *)(*(uint *)(&load_mot_addr + iVar4) + 0x98000));
    LoadReq(*(ushort *)(iVar3 + 0x1c) + 0x363,*(uint *)(&load_mot_addr + iVar4));
    if (*(short *)(&DAT_00344870 + (uint)btl_wrk.stage_no * 0xc0) != -1) {
      SeFileLoadAndSet(0x548,1);
    }
    iVar5 = iVar5 + 1;
    SeFileLoadAndSet(*(uint *)(iVar3 + 0x20),*(int *)(&load_se_addr + iVar4));
    if (2 < iVar5) break;
    bVar1 = (&DAT_00344865)[(uint)btl_wrk.stage_no * 0xc0 + iVar5];
  }
  if (*(ushort *)(&DAT_00344870 + (uint)btl_wrk.stage_no * 0xc0) != 0xffff) {
    LoadReq(*(ushort *)(&DAT_00344870 + (uint)btl_wrk.stage_no * 0xc0) + 799,0xd80000);
    return;
  }
  return;
}

void StageGhostLoadAfter() {
	int i;
	int ene_no;
	ENE_DAT *edp;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = (uint)(byte)(&DAT_00344865)[(uint)btl_wrk.stage_no * 0xc0];
  iVar1 = *(int *)(&jene_dat + (uint)(byte)(&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0] * 4);
  if (uVar2 != 0xff) {
    iVar4 = 0;
    do {
      iVar3 = uVar2 * 0x40 + iVar1;
      iVar5 = iVar5 + 1;
      motInitEnemyMdl(*(uint **)(&load_mdl_addr + iVar4),(uint)*(ushort *)(iVar3 + 0x1a));
      motInitEnemyAnm(*(uint **)(&load_mot_addr + iVar4),(uint)*(ushort *)(iVar3 + 0x1a),
                      (uint)*(ushort *)(iVar3 + 0x1c));
      if (2 < iVar5) break;
      uVar2 = (uint)(byte)(&DAT_00344865)[(uint)btl_wrk.stage_no * 0xc0 + iVar5];
      iVar4 = iVar5 * 4;
    } while (uVar2 != 0xff);
  }
  if (*(ushort *)(&DAT_00344870 + (uint)btl_wrk.stage_no * 0xc0) != 0xffff) {
    motInitEnemyMdl((uint *)0xd80000,
                    (uint)*(ushort *)(&DAT_00344870 + (uint)btl_wrk.stage_no * 0xc0));
    return;
  }
  return;
}

void SaveStoryWrk() {
	u_char *srcp;
	u_char *dstp;
	int i;
	int j;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  pbVar7 = (byte *)0x1090000;
  uVar6 = 0;
  if (btl_save_str_num == 0) {
    pbVar4 = (byte *)0x1090001;
  }
  else {
    pbVar4 = (byte *)0x1090001;
    uVar8 = btl_save_str_num;
    do {
      iVar5 = (int)uVar6;
      iVar3 = 0;
      pbVar2 = *(byte **)(&btl_save_str + iVar5 * 8);
      if (0 < (int)(&DAT_003445d4)[iVar5 * 2]) {
        while( true ) {
          bVar1 = *pbVar2;
          iVar3 = iVar3 + 1;
          pbVar2 = pbVar2 + 1;
          *pbVar7 = bVar1;
          pbVar7 = pbVar4;
          if ((int)(&DAT_003445d4)[iVar5 * 2] <= iVar3) break;
          pbVar4 = pbVar4 + 1;
        }
        uVar8 = btl_save_str_num;
        pbVar4 = pbVar4 + 1;
      }
      uVar6 = (ulong)(iVar5 + 1);
    } while (uVar6 < uVar8);
  }
  *pbVar7 = ingame_wrk.init_flg;
  *pbVar4 = ingame_wrk.stts;
  pbVar4[1] = ingame_wrk.msn_no;
  pbVar4[2] = ingame_wrk.difficult;
  return;
}

void LoadStoryWrk() {
	u_char *srcp;
	u_char *dstp;
	int i;
	int j;
	
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar2 = 0;
  ingame_wrk.init_flg = bRam01090000;
  if (btl_save_str_num == 0) {
    pbVar5 = (byte *)0x1090001;
  }
  else {
    pbVar5 = (byte *)0x1090001;
    uVar6 = btl_save_str_num;
    do {
      iVar1 = (int)uVar2;
      iVar4 = 0;
      pbVar3 = *(byte **)(&btl_save_str + iVar1 * 8);
      if (0 < (int)(&DAT_003445d4)[iVar1 * 2]) {
        while( true ) {
          *pbVar3 = ingame_wrk.init_flg;
          iVar4 = iVar4 + 1;
          pbVar3 = pbVar3 + 1;
          if ((int)(&DAT_003445d4)[iVar1 * 2] <= iVar4) break;
          ingame_wrk.init_flg = *pbVar5;
          pbVar5 = pbVar5 + 1;
        }
        ingame_wrk.init_flg = *pbVar5;
        uVar6 = btl_save_str_num;
        pbVar5 = pbVar5 + 1;
      }
      uVar2 = (ulong)(iVar1 + 1);
    } while (uVar2 < uVar6);
  }
  ingame_wrk.stts = *pbVar5;
  ingame_wrk.msn_no = pbVar5[1];
  ingame_wrk.difficult = pbVar5[2];
  return;
}
