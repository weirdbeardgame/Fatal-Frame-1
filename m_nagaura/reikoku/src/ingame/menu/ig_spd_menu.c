// STATUS: NOT STARTED

SPD_MNU spd_mnu = {
	/* .sopt = */ 0,
	/* .smap = */ 0,
	/* .slod = */ 0,
	/* .lod_ret = */ 0
};
static int smap_load_id;
static int sopt_load_id;
static int fnd_load_id;

void SpdMenuInit() {
  memset(&spd_mnu,0,4);
  fnd_load_id = -1;
  smap_load_id = -1;
  sopt_load_id = -1;
  return;
}

char SpdMenuCtrl() {
	char rtrn;
	
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (*key_now[13] == 1) {
    cVar1 = CanYouOpenMyMind('\x01');
    cVar2 = '\0';
    if ((cVar1 != '\0') && (cVar2 = '\0', spd_mnu.smap == '\0')) {
      cVar2 = '\x01';
      SeStartFix(1,0,0x1000,0x1000,0);
      SpdMapStart();
    }
  }
  return cVar2;
}

static void SpdMapStart() {
  spd_mnu.smap = '\x01';
  SpdMapInit();
  CaptureScreen(0x1a40);
  DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  StartMapModeInit();
  ingame_wrk.mode = 0xc;
  smap_load_id = -1;
  return;
}

static void SpdMapInit() {
	int i;
	
  FOR_YW2D *pFVar1;
  int iVar2;
  
  pFVar1 = &yw2d;
  iVar2 = 6;
  do {
    pFVar1->io_a[0] = 0.0;
    iVar2 = iVar2 + -1;
    pFVar1->io_y[0] = 0.0;
    pFVar1->io_x[0] = 0.0;
    pFVar1 = (FOR_YW2D *)(pFVar1->io_x + 1);
  } while (-1 < iVar2);
  yw2d.pad_lock = 1;
  yw2d.menu_io_flg = 1;
  yw2d.menu_io_cnt = 0;
  SetTargetVolSeMenuFade(0x600);
  SetTargetVolAdpcmMenuFade(0x600);
  return;
}

void SpdMapMain() {
  if (yw2d.io_x[0] == 0.0) {
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0xffff7d0);
  }
  else {
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0x7d000);
  }
  SpdMapInOut();
  if (yw2d.io_a[4] != 0.0) {
    SetSprFile(0x1ce0000);
    SetSprFile(0x1e05b00);
  }
  if (spd_mnu.smap == '\0') {
    return;
  }
  IngameMenuMap();
  return;
}

static void SpdMapInOut() {
	int i;
	u_char count;
	float fade_in;
	float fade_out;
	
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = fnd_load_id;
  if (yw2d.menu_io_flg == 1) {
    if ((ushort)yw2d.menu_io_cnt < 10) {
      yw2d.io_a[0] = 0.0;
      yw2d.io_a[6] = 128.0;
      yw2d.io_a[5] = 0.0;
      yw2d.io_x[0] = 0.0;
      yw2d.io_a[1] = ((float)(uint)(byte)yw2d.menu_io_cnt / 10.0) * 128.0;
      yw2d.io_a[4] = yw2d.io_a[1];
    }
    else if ((ushort)yw2d.menu_io_cnt < 0x14) {
      if (yw2d.menu_io_cnt == 10) {
        yw2d.map_flg = yw2d.menu_io_flg;
      }
      yw2d.io_a[0] = 0.0;
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[1] = 128.0;
      yw2d.io_x[0] = 0.0;
      yw2d.io_a[5] = (float)(((byte)yw2d.menu_io_cnt - 10 & 0xff) << 7) / 10.0;
      yw2d.io_a[6] = yw2d.io_a[5];
    }
    if ((smap_load_id != -1) && (iVar2 = IsLoadEnd(smap_load_id), iVar2 != 0)) {
      smap_load_id = -1;
    }
    yw2d.pad_lock = 1;
    if ((ushort)yw2d.menu_io_cnt < 0x14) {
      yw2d.menu_io_cnt = yw2d.menu_io_cnt + 1;
    }
    else {
      yw2d.menu_io_flg = 0;
      yw2d.menu_io_cnt = 0x14;
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.menu_io_flg == 2) {
    if ((ushort)yw2d.menu_io_cnt < 0xb) {
      if (yw2d.menu_io_cnt == 0) {
        pfVar3 = yw2d.io_a + 6;
        iVar1 = 6;
        do {
          *pfVar3 = 0.0;
          iVar1 = iVar1 + -1;
          pfVar3 = pfVar3 + -1;
        } while (-1 < iVar1);
      }
      else {
        if (yw2d.menu_io_cnt == 10) {
          yw2d.map_flg = 0;
        }
        yw2d.io_a[0] = 0.0;
        yw2d.io_a[6] = 128.0;
        yw2d.io_a[5] = 0.0;
        yw2d.io_x[0] = 0.0;
        yw2d.io_a[1] = ((float)(uint)(byte)yw2d.menu_io_cnt / 10.0) * 128.0;
        yw2d.io_a[4] = yw2d.io_a[1];
      }
    }
    else {
      yw2d.io_a[0] = 0.0;
      yw2d.io_a[4] = 128.0;
      yw2d.io_a[1] = 128.0;
      yw2d.io_x[0] = 0.0;
      yw2d.io_a[5] = (float)(((byte)yw2d.menu_io_cnt - 10 & 0xff) << 7) / 10.0;
      yw2d.io_a[6] = yw2d.io_a[5];
    }
    if ((iVar2 != -1) && (iVar2 = IsLoadEnd(iVar2), iVar2 != 0)) {
      fnd_load_id = -1;
    }
    yw2d.pad_lock = 1;
    if (yw2d.menu_io_cnt == 0) {
      yw2d.menu_io_flg = 0;
      yw2d.pad_lock = 0;
      SendManMdlTex();
      spd_mnu.smap = '\0';
      ingame_wrk.mode = 6;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetTargetVolSeMenuFade(0xfff);
      SetTargetVolAdpcmMenuFade(0xfff);
      return;
    }
    yw2d.menu_io_cnt = yw2d.menu_io_cnt + -1;
  }
  return;
}

void SpdOptStart() {
  spd_mnu.sopt = '\x01';
  SpdOptInit();
  sopt_load_id = LoadReq(0x55,0x1e90000);
  ingame_wrk.mode = 0xd;
  return;
}

static void SpdOptInit() {
	int i;
	
  FOR_YW2D *pFVar1;
  int iVar2;
  
  pFVar1 = &yw2d;
  iVar2 = 6;
  do {
    pFVar1->io_a[0] = 0.0;
    iVar2 = iVar2 + -1;
    pFVar1->io_y[0] = 0.0;
    pFVar1->io_x[0] = 0.0;
    pFVar1 = (FOR_YW2D *)(pFVar1->io_x + 1);
  } while (-1 < iVar2);
  yw2d.pad_lock = 1;
  yw2d.menu_io_flg = 1;
  yw2d.menu_io_cnt = 0;
  return;
}

void SpdOptMain() {
  if (yw2d.io_x[0] == 0.0) {
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0x6e000);
  }
  else {
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
    BgFusumaYW(0x606060,yw2d.io_x[0],yw2d.io_a[0],0x6e000);
  }
  SpdOptInOut();
  if (yw2d.io_a[4] != 0.0) {
    SetSprFile(0x1ce0000);
    SetSprFile(0x1e90000);
  }
  if (spd_mnu.sopt == '\0') {
    return;
  }
  IngameMenuOption();
  return;
}

static void SpdOptInOut() {
	int i;
	u_char count;
	
  int iVar1;
  float *pfVar2;
  
  if ((sopt_load_id != -1) && (iVar1 = IsLoadEnd(sopt_load_id), iVar1 != 0)) {
    sopt_load_id = -1;
    StartOptionModeInit('\0');
  }
  if ((fnd_load_id != -1) && (iVar1 = IsLoadEnd(fnd_load_id), iVar1 != 0)) {
    fnd_load_id = -1;
  }
  if (yw2d.menu_io_flg == 1) {
    if (sopt_load_id == -1) {
      if ((ushort)yw2d.menu_io_cnt < 0xb) {
        yw2d.io_x[0] = 0.0;
        yw2d.io_a[0] = ((float)(uint)(byte)yw2d.menu_io_cnt * 128.0) / 10.0;
        yw2d.io_a[1] = yw2d.io_a[0];
        yw2d.io_a[4] = yw2d.io_a[0];
      }
      yw2d.pad_lock = yw2d.menu_io_flg;
      if ((ushort)yw2d.menu_io_cnt < 10) {
        yw2d.menu_io_cnt = yw2d.menu_io_cnt + 1;
      }
      else {
        yw2d.menu_io_flg = 0;
        yw2d.menu_io_cnt = 10;
        yw2d.pad_lock = 0;
      }
    }
  }
  else if ((yw2d.menu_io_flg == 2) && (fnd_load_id == -1)) {
    pfVar2 = yw2d.io_a + 6;
    if (yw2d.menu_io_cnt == 0) {
      iVar1 = 6;
      do {
        *pfVar2 = 0.0;
        iVar1 = iVar1 + -1;
        pfVar2 = pfVar2 + -1;
      } while (-1 < iVar1);
    }
    else {
      yw2d.io_x[0] = 0.0;
      yw2d.io_a[0] = ((float)(uint)(byte)yw2d.menu_io_cnt * 128.0) / 10.0;
      yw2d.io_a[1] = yw2d.io_a[0];
      yw2d.io_a[4] = yw2d.io_a[0];
    }
    yw2d.pad_lock = 1;
    if (yw2d.menu_io_cnt == 0) {
      yw2d.menu_io_flg = 0;
      SendManMdlTex();
      ingame_wrk.mode = 6;
      pause_wrk.mode = 1;
      spd_mnu.sopt = '\0';
    }
    else {
      yw2d.menu_io_cnt = yw2d.menu_io_cnt + -1;
    }
  }
  return;
}
