// STATUS: NOT STARTED

typedef struct {
	short int pos_x;
	short int pos_y;
	u_short siz_x;
	u_short siz_y;
	u_char win_no;
} MSK_SIZ;

typedef struct {
	short int pos_x;
	short int pos_y;
	u_short siz_x;
	u_short siz_y;
	u_char u_hgh;
	u_char d_hgh;
	u_char l_wid;
	u_char r_wid;
	u_char pri;
	u_char bak;
} WIN_PTN;

typedef struct {
	short int pos_x;
	short int pos_y;
	u_short siz_x;
	u_short siz_y;
	u_char win_no;
} PLS_LIN;

typedef struct {
	u_short on_cnt[4];
} ANA_PAD;

STR_DAT ig_menu_str = {
	/* .str = */ NULL,
	/* .pos_x = */ 0,
	/* .pos_y = */ 0,
	/* .type = */ 0,
	/* .r = */ 255,
	/* .g = */ 255,
	/* .b = */ 255,
	/* .alpha = */ 128,
	/* .pri = */ 2
};
int get_time_once = 0;
SPRT_DAT sozai = {
	/* .tex0 = */ 2307082595247104795,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 128,
	/* .h = */ 64,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 520192,
	/* .alpha = */ 128
};
SPRT_DAT mask_l = {
	/* .tex0 = */ 2307077781395120919,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 8,
	/* .h = */ 8,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 520192,
	/* .alpha = */ 128
};
SPRT_DAT mask_s = {
	/* .tex0 = */ 2307078055132177177,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 4,
	/* .h = */ 4,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 520192,
	/* .alpha = */ 128
};
static ANA_PAD ana_pad;
static FLSH_CORE flsh;
static int menu_load_id;
static int fndr_load_id;
static int mode_load_id;

void NewgameMenuInit() {
  NewgameMenuMapInit();
  MenuItemInit();
  NewgameMenuFileInit();
  NewgameMenuOptionInit();
  return;
}

void LoadgameMenuInit() {
  LoadgameMenuMapInit();
  LoadgameMenuItemInit();
  LoadgameMenuFileInit();
  LoadgameMenuOptionInit();
  return;
}

void IngameMenuInit() {
  memset(&ig_menu_wrk,0,0x10);
  memset(&yw2d,0,0x74);
  mode_load_id = -1;
  menu_load_id = -1;
  fndr_load_id = -1;
  return;
}

void IngameMenuOpenStart() {
  char cVar1;
  
  cVar1 = CanYouOpenMyMind('\0');
  if (cVar1 != '\0') {
    IngameMenuOpenInit();
    SeStartFix(1,0,0x1000,0x1000,1);
    CaptureScreen(0x1a40);
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    ingame_wrk.mode = 10;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
  }
  return;
}

static void IngameMenuOpenInit() {
	int i;
	
  int iVar1;
  FOR_YW2D *pFVar2;
  
  memset(menu_item_wrk,0xff,0x18);
  pFVar2 = &yw2d;
  memset(&ana_pad,0,8);
  yw2d.menu_io_cnt = 0;
  yw2d.pad_lock = 1;
  yw2d.menu_io_flg = 1;
  yw2d.menu_cnt = 0;
  ItemInitAtMenuOpen();
  iVar1 = 6;
  do {
    pFVar2->io_a[0] = 0.0;
    iVar1 = iVar1 + -1;
    pFVar2->io_y[0] = 0.0;
    pFVar2->io_x[0] = 0.0;
    pFVar2 = (FOR_YW2D *)(pFVar2->io_x + 1);
  } while (-1 < iVar1);
  yw2d.inn_mode_cnt = 0;
  ig_menu_wrk.mode = '\a';
  yw2d.io_x[3] = 300.0;
  SetTargetVolSeMenuFade(0x600);
  SetTargetVolAdpcmMenuFade(0x600);
  return;
}

void IngameMenuMain() {
  uchar uVar1;
  int iVar2;
  
  SetSprFile(0x1ce0000);
  SetSprFile(0x1d15600);
  SetSprFile(0x1d266c0);
  if (yw2d.inn_mode_cnt == 0) {
    uVar1 = MenuInOut();
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0x7d000);
    if (uVar1 != '\0') {
      return;
    }
  }
  else {
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0xffff7d0);
  }
  if (mode_load_id == -1) {
    switch(ig_menu_wrk.mode) {
    case '\0':
      SetSprFile(0x1e05b00);
      IngameMenuMap();
      break;
    case '\x01':
      SetSprFile(0x1e90000);
      IngameMenuItem();
      break;
    case '\x02':
      SetSprFile(0x1d573b0);
      IngameMenuAlbum('\0');
      break;
    case '\x03':
      SetSprFile(0x1e90000);
      IngameMenuFile();
      break;
    case '\x04':
      SetSprFile(0x1e90000);
      IngameMenuGlst();
      break;
    case '\x05':
      SetSprFile(0x1d573b0);
      IngameMenuRank();
      break;
    case '\x06':
      SetSprFile(0x1e90000);
      CameraCustomMain();
      break;
    case '\a':
      IngameMenuModeSlct();
      break;
    case '\b':
    case '\t':
      IngameMenuItemUseSlct();
      break;
    case '\n':
      IngameMenuFileData();
      break;
    case '\v':
      RelationShip();
      break;
    case '\f':
      SetSprFile(0x1e90000);
      IngameMenuOption();
    }
    return;
  }
  iVar2 = IsLoadEnd(mode_load_id);
  if (iVar2 != 0) {
    mode_load_id = -1;
  }
  IngameMenuModeSlctDisp();
  return;
}

void IngameMenuModeSlct() {
	u_char mode_limit;
	
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  
  IngameMenuModeSlctDisp();
  bVar6 = 4;
  if (ingame_wrk.clear_count != 0) {
    bVar6 = 6;
  }
  iVar5 = StopCameraMenu();
  if (iVar5 != 0) {
    bVar6 = bVar6 - 1;
  }
  if (yw2d.pad_lock == 0) {
    if (*key_now[4] == 1) {
      yw2d.menu_io_cnt = 0x2d;
      yw2d.menu_io_flg = 2;
      SeStartFix(3,0,0x1000,0x1000,1);
      SetTargetVolSeMenuFade(0xfff);
      SetTargetVolAdpcmMenuFade(0xfff);
      return;
    }
    if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      switch(ig_menu_wrk.csr[0]) {
      case '\0':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\0';
        mode_load_id = -1;
        StartMapModeInit();
        return;
      case '\x01':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x01';
        mode_load_id = LoadReq(0x50,0x1e90000);
        StartItemModeInit();
        return;
      case '\x02':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x02';
        mode_load_id = LoadReq(0x51,0x1d573b0);
        StartAlbumModeInit();
        return;
      case '\x03':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x03';
        mode_load_id = LoadReq(0x52,0x1e90000);
        StartFileModeInit();
        return;
      case '\x04':
        if (ingame_wrk.clear_count == 0) {
          SeStartFix(1,0,0x1000,0x1000,1);
          ig_menu_wrk.mode = '\x06';
          mode_load_id = LoadReq(0x66,0x1e90000);
          CameraCustomInit();
          return;
        }
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x04';
        mode_load_id = LoadReq(0x65,0x1e90000);
        StartGlstModeInit();
        return;
      case '\x05':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x05';
        mode_load_id = LoadReq(0x54,0x1d573b0);
        StartRankModeInit();
        return;
      case '\x06':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\x06';
        mode_load_id = LoadReq(0x66,0x1e90000);
        CameraCustomInit();
        return;
      case '\f':
        SeStartFix(1,0,0x1000,0x1000,1);
        ig_menu_wrk.mode = '\f';
        mode_load_id = LoadReq(0x55,0x1e90000);
        StartOptionModeInit('\0');
        return;
      }
    }
    else {
      if ((*key_now[0] == 1) ||
         ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\0'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\0'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\0'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = ig_menu_wrk.csr[0] != '\0';
        uVar2 = ig_menu_wrk.csr[0] + 0xff;
        ig_menu_wrk.csr[0] = bVar6;
        if (bVar1) {
          ig_menu_wrk.csr[0] = uVar2;
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if ((((*key_now[1] == 1) ||
           ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
          (sVar3 = Ana2PadDirCnt('\x02'), sVar3 == 1)) ||
         ((uVar4 = Ana2PadDirCnt('\x02'), 0x19 < uVar4 &&
          (sVar3 = Ana2PadDirCnt('\x02'), (int)sVar3 % 5 == 1)))) {
        bVar1 = bVar6 <= ig_menu_wrk.csr[0];
        ig_menu_wrk.csr[0] = ig_menu_wrk.csr[0] + '\x01';
        if (bVar1) {
          ig_menu_wrk.csr[0] = '\0';
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
    }
  }
  return;
}

int Get4Byte(u_char *addr) {
  return (uint)addr[3] * 0x1000000 + (uint)*addr + (uint)addr[1] * 0x100 + (uint)addr[2] * 0x10000;
}

int GetIngameMSGAddr(u_char type, int msg_no) {
  int iVar1;
  
  iVar1 = Get4Byte((uchar *)(((int)(char)type & 0xffU) << 2 | 0x84a000));
  iVar1 = Get4Byte((uchar *)(iVar1 + msg_no * 4 + 0x84a000));
  return iVar1 + 0x84a000;
}

void IngameMenuModeSlctDispInit() {
  yw2d.menu_io_cnt = 0x2d;
  return;
}

void IngameMenuModeSlctDisp() {
  PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
  DspTopMenu(0,0,0x80,(short)(int)yw2d.io_x[3]);
  DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\0');
  yw2d.inn_mode_cnt = 0;
  if (yw2d.menu_cnt != -1) {
    yw2d.menu_cnt = yw2d.menu_cnt + 1;
  }
  return;
}

void DspTopMenu(short int pos_x, short int pos_y, short int alpha, u_short anm) {
	int i;
	short int pos_v;
	short int pos_h;
	short int alp1;
	short int alp2;
	short int alp3;
	float alp_per;
	int rgb;
	
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong in_hi;
  float fVar9;
  float fVar10;
  float pos_y_00;
  float fVar11;
  float fVar12;
  int rgb;
  int local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  
  iVar6 = (int)(short)pos_x;
  local_ec = (uint)(short)alpha;
  iVar5 = (int)(short)pos_y;
  uVar8 = (int)anm & 0xffff;
  if (uVar8 == 0) {
    local_f0 = 0;
    fVar10 = (float)local_ec;
    local_e0 = 0;
    fVar9 = fVar10;
  }
  else if (uVar8 < 200) {
    if (uVar8 < 100) {
      fVar10 = (float)local_ec;
      local_e0 = 0;
      local_f0 = 0;
      fVar9 = (float)(100 - uVar8) / 100.0;
      local_ec = (uint)(short)(int)(fVar10 * fVar9 * fVar9);
      fVar9 = fVar10;
    }
    else {
      iVar3 = (uVar8 - 100) * 0x1e;
      in_hi = (ulong)(uint)(iVar3 >> 0x1f);
      fVar10 = (float)local_ec;
      local_e0 = 0;
      local_ec = 0;
      fVar9 = (float)(200 - uVar8) / 100.0;
      local_f0 = (int)(short)(int)((float)iVar3 / 100.0);
      fVar9 = (float)(int)(short)(int)(fVar10 * fVar9 * fVar9);
    }
  }
  else {
    iVar3 = (uVar8 - 200) * 0x19;
    in_hi = (ulong)(uint)(iVar3 >> 0x1f);
    fVar9 = (float)local_ec;
    local_ec = 0;
    local_f0 = 0x1e;
    fVar10 = (float)(300 - uVar8) / 100.0;
    fVar10 = (float)(int)(short)(int)(fVar9 * fVar10 * fVar10);
    local_e0 = (int)(short)(int)((float)iVar3 / 100.0);
    fVar9 = 0.0;
  }
  iVar3 = iVar6 + -0xf;
  if (ingame_wrk.clear_count == 0) {
    fVar11 = (float)local_ec;
    iVar4 = (iVar5 + 0x4c) * 0x10000 >> 0x10;
    fVar12 = (float)iVar4;
    PutSpriteYW(0xb8,0xbc,(float)iVar3,fVar12,0.0,0x808080,fVar11,1.0,1.0,0,0xff,1,0,0);
    local_ec = local_ec & 0xff;
    FlashStarYW(&flsh,0x80,'@','x','\0');
    local_d8 = local_f0 + -0xe4;
    local_e8 = local_e0 + -9;
    local_e0 = local_e0 + 9;
    CLRtoRGB(&rgb,flsh.alpha,flsh.alpha,flsh.alpha);
    local_f0 = local_f0 + 0xe4;
    local_f8 = iVar4 + 0x8a;
    local_fc = iVar4 + 0x82;
    local_e4 = iVar6 + 0x10;
    local_f4 = iVar6 + 0x92;
    iVar5 = 0xbf;
    iVar2 = iVar4 + 0xa8;
    do {
      iVar7 = rgb;
      if (iVar5 == 0xc3) {
        if (ig_menu_wrk.csr[0] == 4) {
          sVar1 = 0xc5;
          pos_y_00 = (float)(iVar4 + -0x4c);
          goto LAB_001e0edc;
        }
        PutSpriteYW(0xc5,0xc5,(float)iVar3,(float)(iVar4 + -0x4c),0.0,0x808080,fVar11,1.0,1.0,0,0xff
                    ,1,0,0);
      }
      else {
        sVar1 = (short)iVar5;
        pos_y_00 = fVar12;
        if (iVar5 != ig_menu_wrk.csr[0] + 0xbf) {
          iVar7 = 0x808080;
        }
LAB_001e0edc:
        PutSpriteYW(sVar1,sVar1,(float)iVar3,pos_y_00,0.0,iVar7,fVar11,1.0,1.0,0,0xff,1,0,0);
      }
      uVar8 = (uint)in_hi;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc4);
    iVar5 = StopCameraMenu();
    if (iVar5 != 0) {
      PolySquareYW((float)(iVar6 + 0x23),(float)(iVar4 + 0x122),0x79,0x1e,0,fVar11 * 0.5,1.0,1.0,
                   0x73000,0,0,0);
    }
    iVar7 = iVar6 - local_e8;
    CmnCursol(pos_x + 0x21,
              (ushort)(((local_f8 | uVar8) + (uint)ig_menu_wrk.csr[0] * 0x26) * 0x10000 >> 0x10),
              0x7b,0x1e,(float)(uint)flsh.alpha,(byte)local_ec,0x73000);
    iVar3 = 2;
    iVar6 = iVar6 + local_e0;
    iVar5 = local_fc;
    do {
      fVar11 = (float)iVar5;
      iVar5 = iVar5 + 0x4c;
      PutSpriteYW(0xb5,0xb5,(float)iVar6,fVar11,0.0,0x808080,fVar10,1.0,1.0,0,0xff,1,0,0);
      iVar3 = iVar3 + -1;
      fVar11 = (float)iVar2;
      iVar2 = iVar2 + 0x4c;
      PutSpriteYW(0xb5,0xb5,(float)iVar7,fVar11,0.0,0x808080,fVar10,1.0,1.0,0,0xff,1,0,0);
    } while (-1 < iVar3);
    PutSpriteYW(0xaf,0xb0,(float)local_e4,(float)(iVar4 + local_f0),0.0,0x808080,fVar9,1.0,1.0,0,
                0xff,1,0,0);
    PutSpriteYW(0xaf,0xb0,(float)local_f4,(float)(iVar4 - local_d8),0.0,0x808080,fVar9,1.0,1.0,0,
                0xff,1,0,0);
  }
  else {
    fVar11 = (float)local_ec;
    fVar12 = (float)iVar5;
    local_ec = local_ec & 0xff;
    PutSpriteYW(0xb8,0xbe,(float)iVar3,fVar12,0.0,0x808080,fVar11,1.0,1.0,0,0xff,1,0,0);
    FlashStarYW(&flsh,0x80,'@','x','\0');
    local_dc = local_f0 + -0x109;
    local_e8 = local_e0 + -9;
    local_e0 = local_e0 + 9;
    CLRtoRGB(&rgb,flsh.alpha,flsh.alpha,flsh.alpha);
    iVar2 = 0xbf;
    local_f8 = iVar5 + 0x8a;
    local_fc = iVar5 + 0x82;
    local_e4 = iVar6 + 0x10;
    local_f4 = iVar6 + 0x92;
    iVar4 = iVar5 + 0xa8;
    do {
      sVar1 = (short)iVar2;
      if (iVar2 == ig_menu_wrk.csr[0] + 0xbf) {
        PutSpriteYW(sVar1,sVar1,(float)iVar3,fVar12,0.0,rgb,fVar11,1.0,1.0,0,0xff,1,0,0);
      }
      else {
        PutSpriteYW(sVar1,sVar1,(float)iVar3,fVar12,0.0,0x808080,fVar11,1.0,1.0,0,0xff,1,0,0);
      }
      uVar8 = (uint)in_hi;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc6);
    iVar3 = StopCameraMenu();
    if (iVar3 != 0) {
      PolySquareYW((float)(iVar6 + 0x23),(float)(iVar5 + 0x16e),0x79,0x1e,0,fVar11 * 0.5,1.0,1.0,
                   0x73000,0,0,0);
    }
    iVar7 = iVar6 - local_e8;
    CmnCursol(pos_x + 0x21,
              (ushort)(((local_f8 | uVar8) + (uint)ig_menu_wrk.csr[0] * 0x26) * 0x10000 >> 0x10),
              0x7b,0x1e,(float)(uint)flsh.alpha,(byte)local_ec,0x73000);
    iVar2 = 3;
    iVar6 = iVar6 + local_e0;
    iVar3 = local_fc;
    do {
      fVar11 = (float)iVar3;
      iVar3 = iVar3 + 0x4c;
      PutSpriteYW(0xb5,0xb5,(float)iVar6,fVar11,0.0,0x808080,fVar10,1.0,1.0,0,0xff,1,0,0);
      iVar2 = iVar2 + -1;
      fVar11 = (float)iVar4;
      iVar4 = iVar4 + 0x4c;
      PutSpriteYW(0xb5,0xb5,(float)iVar7,fVar11,0.0,0x808080,fVar10,1.0,1.0,0,0xff,1,0,0);
    } while (-1 < iVar2);
    PutSpriteYW(0xb3,0xb4,(float)local_e4,(float)(iVar5 + local_f0 + 0x109),0.0,0x808080,fVar9,1.0,
                1.0,0,0xff,1,0,0);
    PutSpriteYW(0xb3,0xb4,(float)local_f4,(float)(iVar5 - local_dc),0.0,0x808080,fVar9,1.0,1.0,0,
                0xff,1,0,0);
  }
  return;
}

void WakuWaku(short int pos_x, short int pos_y, u_char alp, u_char num, u_char pri) {
	int i;
	u_char adj_h[7];
	u_char adj_h2[7];
	
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short end_label;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  float rot;
  float alp_00;
  byte bStack_f1;
  uchar adj_h [7];
  byte bStack_e1;
  uchar adj_h2 [7];
  int local_d0;
  int local_cc;
  int local_c8;
  
  uVar10 = (long)(char)num & 0xff;
  iVar11 = (int)(short)pos_y;
  iVar8 = (int)(short)pos_x;
  iVar9 = (int)uVar10;
  uVar5 = (int)(char)pri & 0xff;
  puVar1 = adj_h + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357180 >> (3 - uVar2) * 8;
  adj_h._0_4_ = DAT_00357180;
  adj_h[4] = DAT_00357184;
  adj_h[5] = DAT_00357185;
  adj_h[6] = DAT_00357186;
  puVar1 = adj_h2 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357188 >> (3 - uVar2) * 8;
  adj_h2._0_4_ = DAT_00357188;
  adj_h2[4] = DAT_0035718c;
  adj_h2[5] = DAT_0035718d;
  adj_h2[6] = DAT_0035718e;
  if ((iVar9 - 1U & 0xff) < 7) {
    lVar7 = 0;
    if (uVar10 != 0) {
      do {
        sVar4 = (short)lVar7 + 0xb8;
        PutSpriteYW(sVar4,sVar4,(float)iVar8,(float)(iVar11 - (uint)adj_h2[iVar9 + -1]),0.0,0x808080
                    ,(float)((int)(char)alp & 0xffU),1.0,1.0,0,(uVar5 + 2 & 0xff) << 0xc,1,0,0);
        lVar7 = (long)((int)lVar7 + 1);
      } while (lVar7 < (long)uVar10);
    }
    local_c8 = uVar5 << 0xc;
    local_cc = iVar8 + 0x1f;
    local_d0 = iVar8 + 0xa1;
    alp_00 = (float)((int)(char)alp & 0xffU);
    iVar6 = 0;
    if (iVar9 != -1) {
      do {
        iVar3 = iVar6 * 0x26;
        iVar6 = iVar6 + 1;
        PutSpriteYW(0xb5,0xb5,(float)(iVar8 + 0x18),(float)(iVar3 + iVar11 + 0x18),0.0,0x808080,
                    alp_00,1.0,1.0,0,(uVar5 + 1 & 0xff) << 0xc,1,0,0);
      } while (iVar6 < iVar9 + 1);
    }
    sVar4 = (short)(iVar9 - 1U) * 2;
    end_label = sVar4 + 0xa8;
    sVar4 = sVar4 + 0xa7;
    rot = 0.0;
    PutSpriteYW(sVar4,end_label,(float)local_cc,(float)((uint)adj_h[iVar9 + -1] + iVar11),0.0,
                0x808080,alp_00,1.0,1.0,0,local_c8,1,0,0);
    PutSpriteYW(sVar4,end_label,(float)local_d0,(float)((uint)adj_h[iVar9 + -1] + iVar11),rot,
                0x808080,alp_00,1.0,1.0,0,local_c8,1,0,0);
  }
  return;
}

void WakuWaku2(short int pos_x, short int pos_y, u_char alp, u_char num, u_char pri) {
	int i;
	
  int iVar1;
  short sVar2;
  short end_label;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float rot;
  float alp_00;
  int local_d0;
  int local_cc;
  int local_c8;
  
  iVar9 = (int)(short)pos_y;
  iVar7 = (int)(short)pos_x;
  uVar8 = (int)(char)pri & 0xff;
  uVar4 = (long)(char)num & 0xff;
  lVar6 = 0;
  iVar3 = (int)uVar4;
  if (uVar4 == 0) {
    alp_00 = (float)((int)(char)alp & 0xffU);
  }
  else {
    alp_00 = (float)((int)(char)alp & 0xffU);
    do {
      PutSpriteYW(0xb8,0xb8,(float)iVar7,(float)(iVar9 + (int)lVar6 * 0x32 + -0xd),0.0,0x808080,
                  alp_00,1.0,1.3125,0,(uVar8 + 2 & 0xff) << 0xc,1,0,0);
      lVar6 = (long)((int)lVar6 + 1);
    } while (lVar6 < (long)uVar4);
  }
  local_c8 = uVar8 << 0xc;
  local_cc = iVar7 + 0x9f;
  local_d0 = iVar7 + 0x1c;
  iVar5 = 0;
  if (iVar3 != -1) {
    do {
      iVar1 = iVar5 * 0x32;
      iVar5 = iVar5 + 1;
      PutSpriteYW(0xb5,0xb5,(float)(iVar7 + 0x18),(float)(iVar1 + 0x70 + iVar9),0.0,0x808080,alp_00,
                  1.0,1.0,0,(uVar8 + 1 & 0xff) << 0xc,1,0,0);
    } while (iVar5 < iVar3 + 1);
  }
  rot = 0.0;
  sVar2 = (short)(iVar3 << 1);
  end_label = sVar2 + 0xa8;
  sVar2 = sVar2 + 0xa7;
  PutSpriteYW(sVar2,end_label,(float)local_d0,(float)(iVar9 + 0xd6),0.0,0x808080,alp_00,1.0,1.0,0,
              local_c8,1,0,0);
  PutSpriteYW(sVar2,end_label,(float)local_cc,(float)(iVar9 + 0xd6),rot,0x808080,alp_00,1.0,1.0,0,
              local_c8,1,0,0);
  return;
}

static u_char MenuInOut() {
	u_char count;
	float per;
	u_short cnt;
	u_char rtn;
	
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short cnt;
  float per;
  
  if (yw2d.menu_io_flg == 1) {
    if ((ushort)yw2d.menu_io_cnt < 0x1e) {
      yw2d.io_a[1] = 0.0;
      cnt = yw2d.menu_io_cnt;
      yw2d.io_a[2] = 0.0;
      yw2d.io_a[0] = (float)((uint)(byte)yw2d.menu_io_cnt << 7) / 30.0;
      SimpleMoveRuler((float *)((uint)&cnt | 4),0x14,0,10,100,&cnt);
      yw2d.io_x[3] = 300.0;
      yw2d.io_x[0] = (1.0 - per / 100.0) * 84.0;
    }
    else {
      yw2d.io_x[0] = 0.0;
      uVar4 = (byte)yw2d.menu_io_cnt - 0x1e & 0xff;
      yw2d.io_a[0] = 128.0;
      yw2d.io_a[1] = (float)(uVar4 << 7) / 15.0;
      yw2d.io_x[3] = (float)((0xf - uVar4) * 300) / 15.0;
      yw2d.io_a[2] = yw2d.io_a[1];
    }
    if ((menu_load_id != -1) && (iVar3 = IsLoadEnd(menu_load_id), iVar3 != 0)) {
      menu_load_id = -1;
    }
    if ((ushort)yw2d.menu_io_cnt < 0x1e) {
      yw2d.pad_lock = 1;
      yw2d.menu_io_cnt = yw2d.menu_io_cnt + 1;
      bVar1 = true;
    }
    else if ((ushort)yw2d.menu_io_cnt < 0x2d) {
      sVar2 = 0x1e;
      if (menu_load_id == -1) {
        sVar2 = yw2d.menu_io_cnt + 1;
      }
      yw2d.pad_lock = 1;
      yw2d.menu_io_cnt = sVar2;
      bVar1 = menu_load_id != -1;
    }
    else {
      yw2d.menu_io_flg = 0;
      yw2d.menu_io_cnt = 0x2d;
      yw2d.pad_lock = 0;
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
    if (yw2d.menu_io_flg == 2) {
      if ((ushort)yw2d.menu_io_cnt < 0x1e) {
        cnt = 0x1d - yw2d.menu_io_cnt;
        yw2d.io_a[1] = 0.0;
        yw2d.io_a[2] = 0.0;
        yw2d.io_a[0] = (float)((uint)(byte)yw2d.menu_io_cnt << 7) / 30.0;
        SimpleMoveRuler((float *)((uint)&cnt | 4),10,0,0x14,100,&cnt);
        yw2d.io_x[3] = 300.0;
        yw2d.io_x[0] = (per * 84.0) / 100.0;
      }
      else {
        yw2d.io_x[0] = 0.0;
        uVar4 = (byte)yw2d.menu_io_cnt - 0x1e & 0xff;
        yw2d.io_a[0] = 128.0;
        yw2d.io_a[1] = (float)(uVar4 << 7) / 15.0;
        yw2d.io_x[3] = (float)((0xf - uVar4) * 300) / 15.0;
        yw2d.io_a[2] = yw2d.io_a[1];
      }
      if ((fndr_load_id != -1) && (iVar3 = IsLoadEnd(fndr_load_id), iVar3 != 0)) {
        fndr_load_id = -1;
      }
      if ((ushort)yw2d.menu_io_cnt < 0x1e) {
        if (yw2d.menu_io_cnt == 0) {
          bVar1 = true;
          if (fndr_load_id == -1) {
            yw2d.menu_io_flg = 0;
            ingame_wrk.mode = 6;
            ingame_wrk.stts = ingame_wrk.stts & 0xdf;
            yw2d.menu_io_cnt = 0;
            yw2d.pad_lock = 0;
            SendManMdlTex();
            bVar1 = true;
          }
        }
        else {
          if (yw2d.menu_io_cnt == 0x1c) {
            fndr_load_id = -1;
          }
          bVar1 = (ushort)yw2d.menu_io_cnt < 0x1d;
          yw2d.menu_io_cnt = yw2d.menu_io_cnt + -1;
          yw2d.pad_lock = 1;
        }
      }
      else {
        yw2d.pad_lock = 1;
        yw2d.menu_io_cnt = yw2d.menu_io_cnt + -1;
        bVar1 = false;
      }
    }
  }
  return bVar1;
}

void DspPlayData(short int pos_x, short int pos_y, float alpha, u_char str_mode) {
  if (str_mode < 2) {
    PutSpriteYW(0x21d,0x222,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,alpha,1.0
                ,1.0,0,0xff,1,0,0);
    TimeZone(pos_x + 0x1c8,pos_y + 0x58,alpha);
    DspMenuTitle(pos_x,pos_y,alpha,'n','\b');
    DispCaption(0,(byte)(int)alpha);
  }
  if ((str_mode != '\0') && (str_mode != '\x02')) {
    return;
  }
  ComingOut(pos_x + 1,pos_y + 1,alpha,'\x01');
  ComingOut(pos_x,pos_y,alpha,'\0');
  return;
}

static void TimeZone(short int pos_x, short int pos_y, float alp) {
	float rot_s;
	float rot_m;
	float rot_h;
	sceCdCLOCK tmp;
	
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  ushort pos_x_00;
  ushort pos_y_00;
  float alp_00;
  float rot;
  float rot_00;
  float rot_01;
  sceCdCLOCK tmp;
  
  MenuAdjClock(&tmp);
  uVar1 = TimeIsMoney(tmp.second);
  uVar2 = TimeIsMoney(tmp.minute);
  uVar3 = TimeIsMoney(tmp.hour);
  rot_01 = (float)((char)uVar1 * 6);
  rot_00 = (float)((char)uVar2 * 6) + rot_01 / 60.0;
  rot = (float)((char)uVar3 * 0x1e) + rot_00 / 12.0;
  PutSpriteYW(0x223,0x223,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,alp,1.0,1.0
              ,0,0xff,1,0,0);
  ClockHari(0x224,pos_x,pos_y,rot,0x50,0x4a,alp);
  pos_x_00 = pos_x + 2;
  pos_y_00 = pos_y + 2;
  alp_00 = (alp + alp) / 3.0;
  ClockHari(0x225,pos_x_00,pos_y_00,rot,0x52,0x4c,alp_00);
  ClockHari(0x226,pos_x,pos_y,rot_00,0x50,0x4a,alp);
  ClockHari(0x227,pos_x_00,pos_y_00,rot_00,0x52,0x4c,alp_00);
  ClockHari(0x228,pos_x,pos_y,rot_01,0x50,0x4a,alp);
  ClockHari(0x229,pos_x_00,pos_y_00,rot_01,0x52,0x4c,alp_00);
  return;
}

static void ClockHari(u_short char_lbl, short int pos_x, short int pos_y, float rot, short int rot_x, short int rot_y, float alp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)char_lbl & 0xffffU) * 0x20));
  ds.x = ds.x + (float)(int)(short)pos_x;
  ds.y = ds.y + (float)(int)(short)pos_y;
  ds.tex1 = 0x161;
  ds.crx = (float)((int)(short)pos_x + (int)(short)rot_x);
  ds.cry = (float)((int)(short)pos_y + (int)(short)rot_y);
  ds.alpha = (byte)(int)alp;
  ds.rot = rot;
  DispSprD(&ds);
  return;
}

static void ComingOut(short int pos_x, short int pos_y, float alp, u_char shadow) {
	int rgb;
	int pri;
	sceCdCLOCK tmp;
	
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort alpha;
  int rgb;
  int pri;
  int iVar8;
  sceCdCLOCK tmp;
  
  if (shadow == '\0') {
    pri = 0x1000;
    rgb = 0x808080;
  }
  else {
    rgb = 0;
    pri = 0x2000;
  }
  iVar8 = (int)alp;
  MenuAdjClock(&tmp);
  bVar1 = (byte)iVar8;
  uVar2 = TimeIsMoney(tmp.year);
  uVar3 = TimeIsMoney(tmp.month);
  uVar4 = TimeIsMoney(tmp.day);
  bVar5 = TimeIsMoney(tmp.hour);
  uVar6 = pos_y + 0x82;
  PutStringYW(0x28,uVar3 + 0x17,pos_x + 0xde,uVar6,rgb,bVar1,pri,0);
  uVar7 = (ushort)iVar8;
  PutNumberYW(3,(int)(char)uVar4,pos_x + 0x115,uVar6,1.0,1.0,rgb,uVar7,pri,2,0);
  PutStringYW(0x28,0x17,pos_x + 0x144,uVar6,rgb,bVar1,pri,0);
  PutNumberYW(3,(int)(char)uVar2,pos_x + 0x157,uVar6,1.0,1.0,rgb,uVar7,pri,2,1);
  if (bVar5 < 0xc) {
    PutStringYW(0x28,3,pos_x + 0x185,uVar6,rgb,bVar1,pri,0);
  }
  else {
    PutStringYW(0x28,4,pos_x + 0x185,uVar6,rgb,bVar1,pri,0);
  }
  uVar6 = pos_x + 0xdc;
  bVar1 = (byte)(int)alp;
  PutStringYW(0x28,5,uVar6,pos_y + 0xb9,rgb,bVar1,pri,0);
  PutStringYW(0x28,0x16,pos_x + 0x14f,pos_y + 0xd7,rgb,bVar1,pri,0);
  PutStringYW(0x28,0x16,pos_x + 0x184,pos_y + 0xd7,rgb,bVar1,pri,0);
  MenuPlayTime(&tmp);
  uVar2 = TimeIsMoney(tmp.hour);
  uVar3 = TimeIsMoney(tmp.minute);
  uVar4 = TimeIsMoney(tmp.second);
  uVar7 = pos_y + 0xd9;
  alpha = (ushort)(int)alp;
  PutNumberYW(3,(int)(char)uVar2,pos_x + 299,uVar7,1.0,1.0,rgb,alpha,pri,2,0);
  PutNumberYW(3,(int)(char)uVar3,pos_x + 0x160,uVar7,1.0,1.0,rgb,alpha,pri,2,1);
  PutNumberYW(3,(int)(char)uVar4,pos_x + 0x195,uVar7,1.0,1.0,rgb,alpha,pri,2,1);
  PutStringYW(0x28,9,uVar6,pos_y + 0xff,rgb,bVar1,pri,0);
  PutNumberYW(0,ingame_wrk.pht_cnt,pos_x + 0x185,pos_y + 0xff,1.0,1.0,rgb,alpha,pri,7,0);
  PutStringYW(0x28,0xb,uVar6,pos_y + 0x127,rgb,bVar1,pri,0);
  PutNumberYW(0,(uint)(ushort)ingame_wrk.ghost_cnt,pos_x + 0x1a9,pos_y + 0x127,1.0,1.0,rgb,alpha,pri
              ,5,0);
  if (ingame_wrk.clear_count != 0) {
    PutStringYW(0x28,0xf,uVar6,pos_y + 0x14f,rgb,bVar1,pri,0);
    PutNumberYW(0,(uint)ingame_wrk.clear_count,pos_x + 0x1cc,pos_y + 0x14f,1.0,1.0,rgb,alpha,pri,3,0
               );
    if (ingame_wrk.clear_count != 0) {
      PutStringYW(0x28,0x11,uVar6,pos_y + 0x177,rgb,bVar1,pri,0);
      PutNumberYW(0,(uint)(ushort)save_rank.best_score,pos_x + 0x182,pos_y + 0x177,1.0,1.0,rgb,alpha
                  ,pri,7,0);
    }
  }
  return;
}

static void MenuAdjClock(sceCdCLOCK *time) {
	u_long all_second;
	u_char adj_minute;
	u_char adj_hour;
	u_char rslt_second;
	u_char rslt_minute;
	u_char rslt_hour;
	
  uchar uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  if ((long)time_wrk.real_ofs < 0) {
    fVar8 = __floatdisf(time_wrk.real_ofs & 1 | time_wrk.real_ofs >> 1);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = __floatdisf(time_wrk.real_ofs);
  }
  uVar2 = __fixunssfdi(fVar8 / 60.0);
  uVar3 = __umoddi3(uVar2,0x3c);
  uVar4 = __udivdi3(uVar2,0x3c);
  uVar4 = __umoddi3(uVar4,0x3c);
  uVar6 = (uint)uVar4 & 0xff;
  uVar2 = __udivdi3(uVar2,0xe10);
  uVar2 = __umoddi3(uVar2,0x3c);
  uVar5 = (uint)uVar2 & 0xff;
  uVar1 = TimeIsMoney(time_wrk.real.second);
  uVar7 = (int)(char)uVar1 + ((uint)uVar3 & 0xff) & 0xff;
  if (0x3b < uVar7) {
    uVar7 = uVar7 % 0x3c;
    uVar6 = uVar6 + 1 & 0xff;
  }
  uVar1 = TimeIsMoney(time_wrk.real.minute);
  uVar6 = (int)(char)uVar1 + uVar6 & 0xff;
  if (0x3b < uVar6) {
    uVar6 = uVar6 % 0x3c;
    uVar5 = uVar5 + 1 & 0xff;
  }
  uVar1 = TimeIsMoney(time_wrk.real.hour);
  uVar5 = (int)(char)uVar1 + uVar5 & 0xff;
  if (0x17 < uVar5) {
    uVar5 = uVar5 % 0x18;
    SetRealTime();
    get_time_once = 0;
  }
  uVar1 = MoneyIsTime((uchar)uVar7);
  time->second = uVar1;
  uVar1 = MoneyIsTime((uchar)uVar6);
  time->minute = uVar1;
  uVar1 = MoneyIsTime((uchar)uVar5);
  time->hour = uVar1;
  time->day = time_wrk.real.day;
  time->month = time_wrk.real.month;
  time->year = time_wrk.real.year;
  return;
}

static void MenuPlayTime(sceCdCLOCK *time) {
	u_long all_second;
	
  uchar uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  if ((long)time_wrk.game < 0) {
    fVar5 = __floatdisf(time_wrk.game & 1 | time_wrk.game >> 1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = __floatdisf(time_wrk.game);
  }
  uVar2 = __fixunssfdi(fVar5 / 60.0);
  uVar3 = __umoddi3(uVar2,0x3c);
  uVar4 = __udivdi3(uVar2,0x3c);
  uVar4 = __umoddi3(uVar4,0x3c);
  uVar2 = __udivdi3(uVar2,0xe10);
  uVar1 = MoneyIsTime((uchar)uVar3);
  time->second = uVar1;
  uVar1 = MoneyIsTime((uchar)uVar4);
  time->minute = uVar1;
  uVar1 = MoneyIsTime((uchar)uVar2);
  time->hour = uVar1;
  return;
}

void DspMenuTitle(short int pos_x, short int pos_y, float alp, u_char pri, u_char mode) {
  short top_label;
  short end_label;
  int pri_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = (int)(short)pos_x;
  iVar3 = (int)(short)pos_y;
  uVar2 = (int)(char)pri & 0xff;
  iVar1 = iVar4 + -0xf;
  PutSpriteYW(200,200,(float)iVar1,(float)(iVar3 + -0x67),0.0,0x808080,alp * 0.5,1.0,1.0,0,
              (uVar2 + 4 & 0xff) << 0xc,1,0,0);
  switch(mode) {
  case '\x01':
    fVar5 = (float)(iVar3 + -0x67);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xbf;
    end_label = 0xbf;
    break;
  case '\x02':
    fVar5 = (float)(iVar3 + -0x8d);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc0;
    end_label = 0xc0;
    break;
  case '\x03':
    fVar5 = (float)(iVar3 + -0xb3);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc1;
    end_label = 0xc1;
    break;
  case '\x04':
    fVar5 = (float)(iVar3 + -0xd9);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc2;
    end_label = 0xc2;
    break;
  case '\x05':
    fVar5 = (float)(iVar3 + -0xff);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc3;
    end_label = 0xc3;
    break;
  case '\x06':
    fVar5 = (float)(iVar3 + -0x125);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc4;
    end_label = 0xc4;
    break;
  case '\a':
    fVar5 = (float)(iVar3 + -0x14b);
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc5;
    end_label = 0xc5;
    break;
  case '\b':
    fVar5 = (float)iVar3;
    pri_00 = (uVar2 + 3 & 0xff) << 0xc;
    top_label = 0xc6;
    end_label = 0xc6;
    break;
  case '\t':
    PutSpriteYW(199,199,(float)iVar1,(float)(iVar3 + -0x14b),0.0,0x808080,alp,1.0,1.0,0,
                (uVar2 + 3 & 0xff) << 0xc,1,0,0);
  default:
    goto switchD_001e2900_caseD_9;
  }
  PutSpriteYW(top_label,end_label,(float)iVar1,fVar5,0.0,0x808080,alp,1.0,1.0,0,pri_00,1,0,0);
switchD_001e2900_caseD_9:
  fVar5 = 0.0;
  iVar1 = (uVar2 + 1 & 0xff) << 0xc;
  PutSpriteYW(0xb5,0xb5,(float)(iVar4 + 9),(float)(iVar3 + 0x1b),0.0,0x808080,alp,1.0,1.0,0,iVar1,1,
              0,0);
  PutSpriteYW(0xb5,0xb5,(float)(iVar4 + 9),(float)(iVar3 + 0x41),fVar5,0x808080,alp,1.0,1.0,0,iVar1,
              1,0,0);
  PutSpriteYW(0xa7,0xa8,(float)(iVar4 + 0x10),(float)(iVar3 + 0x30),fVar5,0x808080,alp,1.0,1.0,0,
              uVar2 << 0xc,1,0,0);
  PutSpriteYW(0xa7,0xa8,(float)(iVar4 + 0x92),(float)(iVar3 + 0x30),fVar5,0x808080,alp,1.0,1.0,0,
              uVar2 << 0xc,1,0,0);
  return;
}

char SimpleMoveRuler(float *rslt, u_short t1, u_short t2, u_short t3, u_short dst, u_short *cnt) {
	u_short count;
	float vmax;
	float a;
	float v;
	static float move;
	
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  uVar4 = (int)t3 & 0xffff;
  if (*cnt == 0) {
    move_183 = 0.0;
  }
  iVar3 = (int)((long)t1 & 0xffffU);
  iVar6 = iVar3 + ((int)t2 & 0xffffU);
  uVar1 = *cnt;
  iVar5 = iVar6 + uVar4;
  fVar7 = (float)(((int)dst & 0xffffU) << 1) / (float)(iVar6 + uVar4 + ((int)t2 & 0xffffU));
  uVar2 = (long)(int)((float)(iVar5 * (uint)uVar1) / (float)iVar5) & 0xffff;
  if (uVar2 < ((long)t1 & 0xffffU)) {
    move_183 = move_183 + (fVar7 / (float)iVar3) * (float)(int)uVar2;
  }
  else if (uVar2 < (ulong)(long)iVar6) {
    move_183 = move_183 + fVar7;
  }
  else if ((long)uVar2 < (long)(iVar5 + -1)) {
    move_183 = move_183 + (fVar7 / (float)uVar4) * (float)(iVar5 - (int)uVar2);
  }
  else {
    move_183 = (float)((int)dst & 0xffffU);
  }
  *rslt = move_183;
  return iVar6 + uVar4 <= (uint)uVar1;
}

char MoveRuler(short int *mov_x, short int *mov_y, short int x0, short int y0, short int x1, short int y1, u_short t1, u_short t2, int t3, u_short *cnt) {
	float per;
	
  char cVar1;
  float fVar2;
  float per;
  
  cVar1 = SimpleMoveRuler(&per,t1,t2,(short)t3,100,cnt);
  fVar2 = (float)(int)(short)x0;
  *mov_x = (ushort)(int)((float)((int)(short)x1 - (int)(short)x0) * (per / 100.0) + fVar2);
  *mov_y = (ushort)(int)((float)((int)(short)y1 - (int)(short)y0) * (per / 100.0) + fVar2);
  return cVar1;
}

static void CmnWakuForWin(short int pos_x, short int pos_y, u_short siz_x, u_short siz_y, u_char u_hgh, u_char d_hgh, u_char l_wid, u_char r_wid, int pri, int alp, int rgb, int msk_sw) {
	u_char pri;
	u_char alp;
	u_char rgb;
	int i;
	int j;
	int k;
	u_char h_num[3];
	u_char h_edg[3];
	u_char v_num[3];
	u_char v_edg[3];
	short int ofs_x[2];
	short int ofs_y[2];
	short int put_x;
	short int put_y;
	short int put_w;
	short int put_h;
	short int put_u;
	short int put_v;
	
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uchar uVar8;
  uint uVar9;
  uchar alp_00;
  uint uVar10;
  uchar uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int pri_00;
  int iVar15;
  ushort uVar16;
  float fVar17;
  uchar h_num [3];
  uchar h_edg [3];
  uchar v_num [3];
  uchar v_edg [3];
  ushort ofs_x [2];
  ushort ofs_y [2];
  int local_e4;
  
  iVar5 = (int)(short)pos_x;
  iVar7 = (int)(short)pos_y;
  uVar9 = (int)(char)l_wid & 0xff;
  uVar10 = (int)(char)r_wid & 0xff;
  uVar6 = (int)(char)u_hgh & 0xff;
  uVar14 = (int)(char)d_hgh & 0xff;
  uVar13 = (int)siz_x & 0xffff;
  SetSprFile(0x1ce0000);
  sVar1 = (short)((int)siz_y & 0xffffU);
  uVar16 = (ushort)uVar6;
  if ((char)msk_sw != '\0') {
    PolySquareYW((float)(iVar5 + uVar9),(float)(iVar7 + uVar6),
                 (short)uVar13 - ((short)uVar9 + (short)uVar10),sVar1 - (uVar16 + (short)uVar14),0,
                 (float)(long)(int)(alp & 0xffU) * 0.5,1.0,1.0,((pri & 0xffU) + 1 & 0xff) << 0xc,0,0
                 ,0);
  }
  local_e4 = uVar6 + uVar14;
  pri_00 = (pri & 0xffU) << 0xc;
  fVar17 = (float)uVar10;
  ofs_y[1] = sVar1 - (short)uVar14;
  iVar15 = 0;
  h_num[2] = (uchar)(int)((float)uVar13 / (float)(uint)(ushort)sozai.w);
  if (sozai.w == 0) {
    trap(7);
  }
  v_num[0] = (uchar)(int)((float)uVar6 / (float)(uint)(ushort)sozai.h);
  h_edg[2] = (uchar)(uVar13 % (uint)(ushort)sozai.w);
  ofs_x[0] = 0;
  ofs_y[0] = 0;
  v_num[1] = (uchar)(int)((float)uVar14 / (float)(uint)(ushort)sozai.h);
  v_edg[0] = (uchar)(uVar6 % (uint)(ushort)sozai.h);
  ofs_x[1] = 0;
  v_edg[1] = (uchar)(uVar14 % (uint)(ushort)sozai.h);
  pbVar4 = v_num;
  do {
    uVar14 = 0;
    alp_00 = (uchar)(alp & 0xffU);
    if (*pbVar4 != 0xffffffff) {
      uVar6 = (uint)h_num[2];
      do {
        uVar12 = 0;
        if (uVar6 != 0xffffffff) {
          do {
            if (sozai.w == 0) {
              trap(7);
            }
            iVar3 = iVar5 + (uint)ofs_x[iVar15] + uVar12 * (ushort)sozai.w;
            iVar2 = iVar7 + (uint)ofs_y[iVar15] + uVar14 * (ushort)sozai.h;
            uVar11 = (uchar)sozai.w;
            if (uVar12 == uVar6) {
              uVar11 = h_edg[2];
            }
            uVar12 = uVar12 + 1;
            if (uVar14 == v_num[iVar15]) {
              uVar8 = v_edg[iVar15];
            }
            else {
              uVar8 = (uchar)sozai.h;
            }
            PutParts((uchar)((iVar3 * 0x10000 >> 0x10) % (int)(uint)(ushort)sozai.w),
                     (uchar)((iVar2 * 0x10000 >> 0x10) % (int)(uint)(ushort)sozai.h),uVar11,uVar8,
                     (ushort)iVar3,(ushort)iVar2,pri_00,alp_00,rgb & 0xffU);
            uVar6 = (uint)h_num[2];
          } while ((int)uVar12 < (int)(uVar6 + 1));
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)(v_num[iVar15] + 1));
    }
    iVar15 = iVar15 + 1;
    pbVar4 = v_num + iVar15;
  } while (iVar15 < 2);
  local_e4 = ((int)siz_y & 0xffffU) - local_e4;
  iVar15 = 0;
  uVar14 = (uint)((float)local_e4 / (float)(uint)(ushort)sozai.h);
  v_num[2] = (uchar)uVar14;
  if (sozai.h == 0) {
    trap(7);
  }
  v_edg[2] = (uchar)(local_e4 % (int)(uint)(ushort)sozai.h);
  h_num[0] = (uchar)(int)((float)uVar9 / (float)(uint)(ushort)sozai.w);
  ofs_x[0] = 0;
  h_num[1] = (uchar)(int)(fVar17 / (float)(uint)(ushort)sozai.w);
  h_edg[0] = (uchar)(uVar9 % (uint)(ushort)sozai.w);
  h_edg[1] = (uchar)(uVar10 % (uint)(ushort)sozai.w);
  uVar14 = uVar14 & 0xff;
  ofs_x[1] = (short)uVar13 - (short)uVar10;
  ofs_y[0] = uVar16;
  ofs_y[1] = uVar16;
  do {
    uVar9 = 0;
    if (uVar14 != 0xffffffff) {
      do {
        uVar10 = 0;
        if (h_num[iVar15] != 0xffffffff) {
          while( true ) {
            if (sozai.w == 0) {
              trap(7);
            }
            iVar3 = iVar5 + (uint)ofs_x[iVar15] + uVar10 * (ushort)sozai.w;
            iVar2 = iVar7 + (uint)ofs_y[iVar15] + uVar9 * (ushort)sozai.h;
            uVar11 = (uchar)sozai.w;
            if (uVar10 == h_num[iVar15]) {
              uVar11 = h_edg[iVar15];
            }
            uVar10 = uVar10 + 1;
            uVar8 = v_edg[2];
            if (uVar9 != uVar14) {
              uVar8 = (uchar)sozai.h;
            }
            PutParts((uchar)((iVar3 * 0x10000 >> 0x10) % (int)(uint)(ushort)sozai.w),
                     (uchar)((iVar2 * 0x10000 >> 0x10) % (int)(uint)(ushort)sozai.h),uVar11,uVar8,
                     (ushort)iVar3,(ushort)iVar2,pri_00,alp_00,rgb & 0xffU);
            if ((int)(h_num[iVar15] + 1) <= (int)uVar10) break;
            uVar14 = (uint)v_num[2];
          }
          uVar14 = (uint)v_num[2];
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)(uVar14 + 1));
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 2);
  return;
}

static void PutParts(u_char u, u_char v, u_char w, u_char h, short int x, short int y, int pri, u_char alp, int rgb) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  ds.v = (int)(char)v & 0xff;
  ds.u = (int)(char)u & 0xff;
  ds.h = (int)(char)h & 0xff;
  ds.w = (int)(char)w & 0xff;
  CopySprDToSpr(&ds,&sozai);
  ds.x = (float)(int)(short)x;
  ds.y = (float)(int)(short)y;
  ds.z = 0xfffffff - pri;
  ds.b = (byte)rgb;
  ds.r = (byte)rgb;
  ds.g = (byte)rgb;
  ds.tex1 = 0x161;
  ds.test = 0x7001b;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void BehindTheMask(short int pos_x, short int pos_y, short int siz_x, short int siz_y, u_char alp, int pri, u_char top) {
	u_char i;
	u_char j;
	
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong in_hi;
  
  uVar3 = (int)(char)top & 0xffU;
  if (1 < ((int)(char)top & 0xffU)) {
    uVar3 = 1;
  }
  uVar5 = 0;
  do {
    uVar4 = 0;
    if (0 < (int)(2 - uVar3)) {
      do {
        lVar1 = ((long)(int)(short)pos_x | in_hi) +
                (long)(int)(uVar5 * ((int)(short)siz_x - (uint)(ushort)mask_s.w));
        lVar2 = (long)(int)((int)(short)pos_y | (uint)((ulong)lVar1 >> 0x20)) +
                (long)(int)(uVar4 * ((int)(short)siz_y - (uint)(ushort)mask_s.h));
        in_hi = (ulong)(int)((ulong)lVar2 >> 0x20);
        PutMask((ushort)lVar1,(ushort)lVar2,alp,(char)uVar4 + (char)(uVar5 << 1),pri);
        uVar4 = uVar4 + 1 & 0xff;
      } while ((int)uVar4 < (int)(2 - uVar3));
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 2);
  return;
}

static void PutMask(short int pos_x, short int pos_y, u_char alp, u_char flp, int pri) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,&mask_s);
  ds.x = (float)(int)(short)pos_x;
  ds.y = (float)(int)(short)pos_y;
  if (flp == '\x02') {
    ds.att = ds.att | 2;
  }
  else if (flp < 3) {
    if (flp == '\x01') {
      ds.att = ds.att | 1;
    }
  }
  else if (flp == '\x03') {
    ds.att = ds.att | 3;
  }
  ds.z = 0xfffffff - pri;
  ds.tex1 = 0x161;
  ds.pri = pri;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void BehindTheMask2(short int pos_x, short int pos_y, short int siz_x, short int siz_y, u_char alp, int pri, u_char top) {
	u_char i;
	u_char j;
	
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_hi;
  
  uVar5 = (int)(char)top & 0xffU;
  if (1 < ((int)(char)top & 0xffU)) {
    uVar5 = 1;
  }
  uVar3 = 0;
  if (0 < (int)(2 - uVar5)) {
    do {
      uVar4 = 0;
      uVar1 = (ushort)in_hi;
      iVar2 = 0;
      do {
        AngleForWin(pri,(ushort)((uint)((iVar2 + (short)pos_x + -0x140) * 0x10000) >> 0x10),
                    ((pos_y | uVar1) + (short)uVar3 * (siz_y - 1)) - 0xe0,6,
                    (char)uVar4 + (char)(uVar3 << 1));
        uVar4 = uVar4 + 1 & 0xff;
        iVar2 = uVar4 * (int)(short)siz_x;
        in_hi = iVar2 >> 0x1f;
      } while (uVar4 < 2);
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < (int)(2 - uVar5));
  }
  return;
}

static void CmnLineForWin(short int win_x, short int win_y, short int ofs_x, short int ofs_y, u_short siz_x, u_short siz_y, u_char pri, u_char alp, int rgb) {
	u_char rgb;
	int i;
	int j;
	u_char h_num;
	u_char h_edg;
	u_char v_num;
	u_char v_edg;
	short int put_x;
	short int put_y;
	short int put_w;
	short int put_h;
	short int put_u;
	short int put_v;
	
  short sVar1;
  uint uVar2;
  uint uVar3;
  uchar w;
  uchar h;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uchar h_edg;
  uchar v_edg;
  
  uVar2 = (uint)(ushort)sozai.w;
  if (sozai.w == 0) {
    trap(7);
  }
  uVar7 = 0;
  uVar3 = (uint)(ushort)sozai.h;
  uVar4 = (int)((float)((int)siz_x & 0xffffU) / (float)uVar2) & 0xff;
  uVar5 = (int)((float)((int)siz_y & 0xffffU) / (float)uVar3) & 0xff;
  if (uVar5 != 0xffffffff) {
    do {
      uVar6 = 0;
      if (uVar4 != 0xffffffff) {
        do {
          if (sozai.w == 0) {
            trap(7);
          }
          sVar1 = (short)uVar6;
          w = (uchar)(((int)siz_x & 0xffffU) % uVar2);
          if (uVar6 != uVar4) {
            w = (uchar)sozai.w;
          }
          h = (uchar)(((int)siz_y & 0xffffU) % uVar3);
          if (uVar7 != uVar5) {
            h = (uchar)sozai.h;
          }
          uVar6 = uVar6 + 1;
          PutParts((uchar)((int)(short)ofs_x % (int)(uint)(ushort)sozai.w),
                   (uchar)((int)(short)ofs_y % (int)(uint)(ushort)sozai.h),w,h,
                   sVar1 * sozai.w + win_x + ofs_x,(short)uVar7 * sozai.h + win_y + ofs_y,
                   ((int)(char)pri & 0xffU) << 0xc,alp,rgb & 0xff);
        } while ((int)uVar6 < (int)(uVar4 + 1));
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar5 + 1));
  }
  return;
}

void CmnWindow(u_char win_no, short int pos_x, short int pos_y, u_char alp, u_char rgb) {
	int i;
	WIN_PTN win_ptn[41];
	signed char msk_dat_top[41];
	MSK_SIZ msk_siz[55];
	signed char lin_dat_top[41];
	PLS_LIN lin_ptn[129];
	
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  ulong *puVar11;
  uint *puVar12;
  short sVar13;
  undefined8 *puVar14;
  MSK_SIZ *pMVar15;
  WIN_PTN *pWVar16;
  undefined8 *puVar17;
  MSK_SIZ *pMVar18;
  undefined8 uVar19;
  PLS_LIN *pPVar20;
  PLS_LIN *pPVar21;
  WIN_PTN *pWVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  WIN_PTN win_ptn [41];
  char msk_dat_top [41];
  MSK_SIZ msk_siz [55];
  char lin_dat_top [41];
  PLS_LIN lin_ptn [129];
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  ushort *local_b0;
  short *local_ac;
  char *local_a8;
  PLS_LIN *local_a4;
  
  local_c0 = (int)(short)pos_x;
  local_bc = (int)(short)pos_y;
  local_b8 = (int)(char)alp & 0xff;
  local_b4 = (int)(char)rgb & 0xff;
  uVar27 = (int)(char)win_no & 0xff;
  local_a4 = lin_ptn;
  local_b0 = &win_ptn[0].pos_y;
  local_ac = &win_ptn[0].siz_x;
  local_a8 = lin_dat_top;
  puVar14 = &DAT_0034fe58;
  pWVar16 = win_ptn;
  do {
    pWVar22 = pWVar16;
    puVar17 = puVar14;
    uVar19 = puVar17[1];
    uVar23 = puVar17[2];
    uVar24 = puVar17[3];
    *(undefined8 *)pWVar22 = *puVar17;
    *(undefined8 *)&pWVar22->u_hgh = uVar19;
    *(undefined8 *)&pWVar22[1].pos_y = uVar23;
    *(undefined8 *)&pWVar22[1].l_wid = uVar24;
    puVar14 = puVar17 + 4;
    pWVar16 = (WIN_PTN *)&pWVar22[2].siz_x;
  } while (puVar17 + 4 != (undefined8 *)&UNK_00350078);
  uVar4 = puVar17[5];
  uVar5 = puVar17[6];
  uVar8 = *(uint *)(puVar17 + 7);
  uVar9 = (uint)&pWVar22[2].r_wid & 7;
  puVar10 = &pWVar22[2].r_wid + -uVar9;
  *(ulong *)puVar10 = *(ulong *)puVar10 & -1L << (uVar9 + 1) * 8 | _UNK_00350078 >> (7 - uVar9) * 8;
  *(ulong *)&pWVar22[2].siz_x = _UNK_00350078;
  puVar1 = (undefined *)((int)&pWVar22[3].siz_x + 1);
  uVar9 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar9);
  *puVar11 = *puVar11 & -1L << (uVar9 + 1) * 8 | uVar4 >> (7 - uVar9) * 8;
  *(ulong *)&pWVar22[2].pri = uVar4;
  uVar9 = (uint)&pWVar22[3].bak & 7;
  puVar10 = &pWVar22[3].bak + -uVar9;
  *(ulong *)puVar10 = *(ulong *)puVar10 & -1L << (uVar9 + 1) * 8 | uVar5 >> (7 - uVar9) * 8;
  *(ulong *)&pWVar22[3].siz_y = uVar5;
  puVar1 = (undefined *)((int)&pWVar22[4].pos_y + 1);
  uVar9 = (uint)puVar1 & 3;
  puVar12 = (uint *)(puVar1 + -uVar9);
  *puVar12 = *puVar12 & -1 << (uVar9 + 1) * 8 | uVar8 >> (3 - uVar9) * 8;
  *(uint *)(pWVar22 + 4) = uVar8;
  pWVar22[4].siz_x = *(short *)((int)puVar17 + 0x3c);
  pcVar2 = msk_dat_top + 7;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_00350098 >> (7 - uVar8) * 8;
  msk_dat_top._0_8_ = DAT_00350098;
  pcVar2 = msk_dat_top + 0xf;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003500a0 >> (7 - uVar8) * 8;
  msk_dat_top._8_8_ = DAT_003500a0;
  pcVar2 = msk_dat_top + 0x17;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003500a8 >> (7 - uVar8) * 8;
  msk_dat_top._16_8_ = DAT_003500a8;
  pcVar2 = msk_dat_top + 0x1f;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003500b0 >> (7 - uVar8) * 8;
  msk_dat_top._24_8_ = DAT_003500b0;
  pcVar2 = msk_dat_top + 0x27;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003500b8 >> (7 - uVar8) * 8;
  msk_dat_top._32_8_ = DAT_003500b8;
  msk_dat_top[40] = DAT_003500c0;
  pMVar15 = msk_siz;
  puVar14 = &DAT_003500c8;
  do {
    puVar17 = puVar14;
    pMVar18 = pMVar15;
    uVar19 = puVar17[1];
    uVar23 = puVar17[2];
    uVar24 = puVar17[3];
    *(undefined8 *)pMVar18 = *puVar17;
    *(undefined8 *)&pMVar18->win_no = uVar19;
    *(undefined8 *)&pMVar18[1].siz_y = uVar23;
    *(undefined8 *)&pMVar18[2].siz_x = uVar24;
    pMVar15 = (MSK_SIZ *)&pMVar18[3].pos_y;
    puVar14 = puVar17 + 4;
  } while (puVar17 + 4 != (undefined8 *)&UNK_003502e8);
  sVar6 = *(short *)((int)puVar17 + 0x24);
  puVar1 = (undefined *)((int)&pMVar18[3].siz_x + 1);
  uVar8 = (uint)puVar1 & 3;
  puVar12 = (uint *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1 << (uVar8 + 1) * 8 | _UNK_003502e8 >> (3 - uVar8) * 8;
  *(uint *)&pMVar18[3].pos_y = _UNK_003502e8;
  pMVar18[3].siz_y = sVar6;
  pPVar21 = local_a4;
  pcVar2 = lin_dat_top + 7;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003502f0 >> (7 - uVar8) * 8;
  lin_dat_top._0_8_ = DAT_003502f0;
  pcVar2 = lin_dat_top + 0xf;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_003502f8 >> (7 - uVar8) * 8;
  lin_dat_top._8_8_ = DAT_003502f8;
  pcVar2 = lin_dat_top + 0x17;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_00350300 >> (7 - uVar8) * 8;
  lin_dat_top._16_8_ = DAT_00350300;
  pcVar2 = lin_dat_top + 0x1f;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_00350308 >> (7 - uVar8) * 8;
  lin_dat_top._24_8_ = DAT_00350308;
  pcVar2 = lin_dat_top + 0x27;
  uVar8 = (uint)pcVar2 & 7;
  *(ulong *)(pcVar2 + -uVar8) =
       *(ulong *)(pcVar2 + -uVar8) & -1L << (uVar8 + 1) * 8 | DAT_00350310 >> (7 - uVar8) * 8;
  lin_dat_top._32_8_ = DAT_00350310;
  lin_dat_top[40] = DAT_00350318;
  puVar14 = &DAT_00350320;
  do {
    pPVar20 = pPVar21;
    puVar17 = puVar14;
    uVar23 = puVar17[1];
    uVar24 = puVar17[2];
    uVar19 = puVar17[3];
    *(undefined8 *)pPVar20 = *puVar17;
    *(undefined8 *)&pPVar20->win_no = uVar23;
    *(undefined8 *)&pPVar20[1].siz_y = uVar24;
    *(undefined8 *)&pPVar20[2].siz_x = uVar19;
    uVar4 = _UNK_00350820;
    pPVar21 = (PLS_LIN *)&pPVar20[3].pos_y;
    puVar14 = puVar17 + 4;
  } while (puVar17 + 4 != (undefined8 *)&UNK_00350820);
  uVar7 = *(ushort *)(puVar17 + 5);
  uVar8 = (uint)&pPVar20[3].field_0x9 & 7;
  puVar11 = (ulong *)(&pPVar20[3].field_0x9 + -uVar8);
  *puVar11 = *puVar11 & -1L << (uVar8 + 1) * 8 | _UNK_00350820 >> (7 - uVar8) * 8;
  uVar8 = (uint)pPVar21 & 7;
  *(ulong *)((int)pPVar21 - uVar8) =
       uVar4 << uVar8 * 8 |
       *(ulong *)((int)pPVar21 - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  pPVar20[4].pos_x = uVar7;
  sVar13 = (short)local_bc;
  sVar6 = (short)local_c0;
  BehindTheMask2(sVar6 + win_ptn[uVar27].pos_x,sVar13 + local_b0[uVar27 * 7],local_ac[uVar27 * 7],
                 win_ptn[uVar27].siz_y,(uchar)local_b8,(win_ptn[uVar27].pri - 1 & 0xff) << 0xc,
                 uVar27 == 2);
  lVar26 = (long)msk_dat_top[uVar27];
  if (lVar26 != -1) {
    bVar3 = msk_siz[msk_dat_top[uVar27]].win_no;
    while (bVar3 == uVar27) {
      iVar25 = (int)lVar26;
      lVar26 = (long)(iVar25 + 1);
      PolySquareYW((float)((short)msk_siz[iVar25].pos_x + local_c0),
                   (float)((short)msk_siz[iVar25].pos_y + local_bc),msk_siz[iVar25].siz_x,
                   msk_siz[iVar25].siz_y,0,1.0,1.0,1.0,(win_ptn[uVar27].pri - 1 & 0xff) << 0xc,0,0,0
                  );
      bVar3 = msk_siz[iVar25 + 1].win_no;
    }
  }
  CmnWakuForWin(sVar6 + win_ptn[uVar27].pos_x,sVar13 + local_b0[uVar27 * 7],local_ac[uVar27 * 7],
                win_ptn[uVar27].siz_y,win_ptn[uVar27].u_hgh,win_ptn[uVar27].d_hgh,
                win_ptn[uVar27].l_wid,win_ptn[uVar27].r_wid,(uint)win_ptn[uVar27].pri,local_b8,
                local_b4,(uint)win_ptn[uVar27].bak);
  lVar26 = (long)local_a8[uVar27];
  if (lVar26 != -1) {
    bVar3 = local_a4[local_a8[uVar27]].win_no;
    while (bVar3 == uVar27) {
      iVar25 = (int)lVar26;
      lVar26 = (long)(iVar25 + 1);
      uVar7 = win_ptn[uVar27].pos_x;
      CmnLineForWin(sVar6 + uVar7,sVar13 + local_b0[uVar27 * 7],local_a4[iVar25].pos_x - uVar7,
                    lin_ptn[iVar25].pos_y - local_b0[uVar27 * 7],lin_ptn[iVar25].siz_x,
                    lin_ptn[iVar25].siz_y,win_ptn[uVar27].pri,(uchar)local_b8,local_b4);
      bVar3 = local_a4[iVar25 + 1].win_no;
    }
  }
  return;
}

void CmnCursol(short int pos_x, short int pos_y, short int wide, short int high, float flsh, u_char alp, int pri) {
  PolySquareYW((float)(int)(short)pos_x,(float)(int)(short)pos_y,wide,high,0xe9c489,
               flsh * (float)((int)(char)alp & 0xff) * 0.0078125 * 0.5,1.0,1.0,pri,1,0,0);
  return;
}

u_short Ana2PadDirCnt(u_char chk) {
  return ana_pad.on_cnt[(int)(char)chk & 0xff];
}

void AnaPonChk() {
	int i;
	u_char dir_now;
	
  uchar uVar1;
  short *psVar2;
  int iVar3;
  long lVar4;
  ANA_PAD *pAVar5;
  
  if (pad[0].id == 'y') {
    iVar3 = 3;
    if (pad[0].an_dir[0] == 0xff) {
      psVar2 = ana_pad.on_cnt + 3;
      do {
        *psVar2 = 0;
        iVar3 = iVar3 + -1;
        psVar2 = psVar2 + -1;
      } while (-1 < iVar3);
    }
    else {
      uVar1 = ConvertRot2Dir(pad[0].an_rot[0],'\0');
      lVar4 = 0;
      pAVar5 = &ana_pad;
      do {
        if (lVar4 == (char)uVar1) {
          if (*(ushort *)pAVar5 < 10000) {
            *(ushort *)pAVar5 = *(ushort *)pAVar5 + 1;
          }
          else {
            *(ushort *)pAVar5 = 0;
          }
        }
        else {
          *(ushort *)pAVar5 = 0;
        }
        lVar4 = (long)((int)lVar4 + 1);
        pAVar5 = (ANA_PAD *)((int)pAVar5 + 2);
      } while (lVar4 < 4);
    }
  }
  return;
}

char CanYouOpenMyMind(char mode) {
	char can;
	
  return eff_filament_off == 0 &&
         (plyr_wrk.mode != 9 &&
         (ingame_wrk.mode != 8 &&
         (ingame_wrk.mode != 0xf &&
         (in_pause == '\0' &&
         ((ingame_wrk.stts & 0x80) == 0 &&
         (plyr_wrk.mode != 3 &&
         (plyr_wrk.mode != 1 &&
         (plyr_wrk.mode != 6 && (plyr_wrk.mode != 4 && (plyr_wrk.sta & 8) == 0)))))))));
}

int StopCameraMenu() {
  if (ingame_wrk.game != 1) {
    if (ingame_wrk.clear_count != 0) {
      return 0;
    }
    if ((ingame_wrk.msn_no != 4) || (poss_item[9] != 0)) {
      return (int)((cribo.clear_info & 4) == 0);
    }
  }
  return 1;
}
