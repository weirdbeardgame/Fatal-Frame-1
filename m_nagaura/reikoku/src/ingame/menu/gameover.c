// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#131,  not equal)
enum {
	GAME_OVER_TO_ALBUM = 0,
	GAME_OVER_QUIT_GAME = 1
};

typedef struct {
	float menu_alp;
	float logo_alp;
	u_char type;
	u_char csr;
	u_char mode;
	u_char fade;
} GO_WRK;

static GO_WRK go_wrk;
static FLSH_CORE flsh;
static int gov_load_id;

void StartGameOver() {
  int iVar1;
  
  ingame_wrk.mode = 0x14;
  ingame_wrk.stts = ingame_wrk.stts | 0x80;
  GameOverInit();
  InitGameOver();
  SetGameOverON();
  iVar1 = ZeroGhostBattleJudge();
  if ((iVar1 == 0) && (ap_wrk.zh_mode == 0)) {
    AdpcmPlayGameOver(0x5fb,0x3fff,0);
  }
  else {
    go_wrk.type = 1;
  }
  SeFadeFlameAll(0x3c,0);
  return;
}

void ReturnGameOver() {
  ingame_wrk.mode = 0x14;
  GameOverInit();
  InitGameOver();
  return;
}

static void GameOverInit() {
  memset(&go_wrk,0,0xc);
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  return;
}

void GameOverMenuMain() {
	u_char alp_add;
	
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  if (go_wrk.type == 2) {
    MoviePlay(0x5f);
    AdpcmSceneStop();
    go_wrk.type = 3;
  }
  else if (go_wrk.type < 3) {
    if (go_wrk.type == 1) {
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      AdpcmMapNoUse();
      go_wrk.type = 2;
    }
  }
  else if (go_wrk.type == 3) {
    AdpcmPlayGameOver(0x5fb,0x3fff,0);
    InitGameOver();
    SetGameOverON();
    go_wrk.type = 4;
  }
  else if (go_wrk.type == 4) {
    SetSysBackColor(0,0,0);
    go_wrk.type = 0;
  }
  if (go_wrk.type == 0) {
    if (go_wrk.mode == '\0') {
      go_wrk.fade = '\x01';
      iVar3 = SetGameOver();
      if (iVar3 == 0xff) {
        go_wrk.mode = '\x01';
        go_wrk.fade = '\x02';
      }
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      SeStartFix(1,0,0x1000,0x1000,0);
      go_wrk.fade = '\x03';
    }
    else if (((*key_now[0] == 1) ||
             ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
               (sVar1 = Ana2PadDirCnt('\0'), sVar1 == 1)) ||
              ((uVar2 = Ana2PadDirCnt('\0'), 0x19 < uVar2 &&
               (sVar1 = Ana2PadDirCnt('\0'), (int)sVar1 % 5 == 1)))))) ||
            ((*key_now[1] == 1 ||
             (((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
              ((sVar1 = Ana2PadDirCnt('\x02'), sVar1 == 1 ||
               ((uVar2 = Ana2PadDirCnt('\x02'), 0x19 < uVar2 &&
                (sVar1 = Ana2PadDirCnt('\x02'), (int)sVar1 % 5 == 1)))))))))) {
      SeStartFix(0,0,0x1000,0x1000,0);
      go_wrk.csr = '\x01' - go_wrk.csr;
    }
    if (go_wrk.fade == '\x02') {
      go_wrk.menu_alp = go_wrk.menu_alp + 6.0;
      if (128.0 <= go_wrk.menu_alp) {
        go_wrk.menu_alp = 128.0;
      }
    }
    else if (go_wrk.fade < 3) {
      if (go_wrk.fade == '\x01') {
        go_wrk.logo_alp = go_wrk.logo_alp + 6.0;
        if (128.0 <= go_wrk.logo_alp) {
          go_wrk.logo_alp = 128.0;
        }
        go_wrk.menu_alp = 0.0;
      }
    }
    else if (go_wrk.fade == '\x03') {
      go_wrk.logo_alp = 0.0;
      go_wrk.menu_alp = go_wrk.menu_alp - 6.0;
      if (go_wrk.menu_alp <= 0.0) {
        go_wrk.menu_alp = 0.0;
        if (go_wrk.csr == '\0') {
          AlbumModeInGameOverInit();
        }
        else if (go_wrk.csr == '\x01') {
          GameModeChange(1);
          ingame_wrk.stts = ingame_wrk.stts & 0x7f;
          AdpcmStopGameOver(0);
        }
      }
    }
    if (go_wrk.menu_alp != 0.0) {
      GameOverMenuDisp((uchar)(int)go_wrk.menu_alp);
    }
  }
  return;
}

static void GameOverMenuDisp(u_char alp) {
	int i;
	
  char cVar1;
  int iVar2;
  int iVar3;
  
  CmnWindow(0x15,0,0,(byte)((int)(char)alp & 0xffU),0x80);
  iVar2 = 0;
  PutSpriteYW(0x216,0x217,0.0,0.0,0.0,0x808080,(float)((int)(char)alp & 0xffU),1.0,1.0,0,0xff,1,0,0)
  ;
  iVar3 = 0xcc0000;
  FlashStarYW(&flsh,'`','@','Z','\0');
  CmnCursol(0xa9,(ushort)go_wrk.csr * 0x1d + 0xca,0x12e,0x1e,(float)(uint)flsh.alpha,
            (byte)(int)go_wrk.menu_alp,0x23000);
  do {
    cVar1 = (char)iVar2;
    iVar2 = iVar2 + 1;
    PutStringYW(6,cVar1 + 0xb,0x140,(ushort)((uint)iVar3 >> 0x10),0x808080,
                (byte)(int)go_wrk.menu_alp,0x1e000,1);
    iVar3 = iVar3 + 0x1d0000;
  } while (iVar2 < 2);
  return;
}
