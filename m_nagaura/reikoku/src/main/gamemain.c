// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#4,  not equal)
enum {
	GAME_INIT_LOAD_START = 0,
	GAME_INIT_LOAD_MSG_DAT = 1,
	GAME_INIT_WAIT_MSG_DAT = 2,
	GAME_INIT_LOAD_FONT_TEX = 3,
	GAME_INIT_WAIT_FONT_TEX = 4,
	GAME_INIT_LOAD_SE_STAT = 5,
	GAME_INIT_WAIT_SE_STAT = 6,
	GAME_INIT_LOAD_END = 7
};

int init_load_id = 0;
int init_load_adr = 0;
int init_load_size = 0;

void GameMain() {
  char cVar1;
  int iVar2;
  
  if (sys_wrk.game_mode == 1) {
    cVar1 = mcStartCheckMain();
    if (cVar1 != '\0') {
      sys_wrk.game_mode = 2;
      mcEnd();
      return;
    }
  }
  else if (sys_wrk.game_mode < 2) {
    if ((sys_wrk.game_mode == 0) && (iVar2 = GameInit(), iVar2 != 0)) {
      if (mc_start_flg == '\x01') {
        sys_wrk.game_mode = mc_start_flg;
        mcInit('\a',(uint *)0x0,'\0');
        mc_start_flg = '\0';
      }
      else {
        sys_wrk.game_mode = 2;
      }
    }
  }
  else {
    if (sys_wrk.game_mode == 2) {
      OutGameCtrl();
      return;
    }
    if (sys_wrk.game_mode == 3) {
      InGameCtrl();
      return;
    }
  }
  return;
}

int GameInit() {
  int iVar1;
  
  iVar1 = GameInitLoad();
  if (iVar1 != 0) {
    gra3dInit();
  }
  return (uint)(iVar1 != 0);
}

int GameInitLoad() {
  int iVar1;
  
  switch(sys_wrk.load_mode) {
  case 0:
    sys_wrk.load_mode = 1;
  case 1:
    init_load_id = LoadReq(0x14,0x84a000);
    sys_wrk.load_mode = 2;
    break;
  case 2:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    sys_wrk.load_mode = 3;
  case 3:
    init_load_id = LoadReq(0x44,0x1e30000);
    init_load_id = LoadReq(0x43,0x1e90000);
    sys_wrk.load_mode = 4;
    break;
  case 4:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    MakeFontTexSendPacket();
    SetETIM2File(0x1e90000);
    sys_wrk.load_mode = 5;
  case 5:
    init_load_id = SeFileLoadAndSet(0x546,0);
    init_load_id = SeFileLoadAndSet(0x547,1);
    sys_wrk.load_mode = 6;
    break;
  case 6:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 != 0) {
      sys_wrk.load_mode = 0;
      return 1;
    }
    break;
  case 7:
    sys_wrk.load_mode = 0;
    return 1;
  }
  return 0;
}

void GameModeChange(u_char mode) {
  if (mode == 1) {
    sys_wrk.game_mode = 2;
    if (ingame_wrk.game == 1) {
      title_wrk.mode = 0xb;
      outgame_wrk.mode = 6;
      BattleModeNext();
    }
    else {
      title_wrk.mode = 0xb;
      outgame_wrk.mode = 3;
    }
    SetReverbVolume(0x2fff);
    return;
  }
  if (mode < 2) {
    if (mode == 0) {
      MovieInitWrk();
      sys_wrk.game_mode = 3;
      ingame_wrk.mode = 0;
    }
  }
  else {
    if (mode == 2) {
      sys_wrk.game_mode = 2;
      if (ingame_wrk.game != 1) {
        title_wrk.mode = 0xb;
      }
      SetReverbVolume(0x2fff);
      return;
    }
    if (mode == 3) {
      title_wrk.mode = 0xb;
      sys_wrk.game_mode = 2;
      SetReverbVolume(0x2fff);
      return;
    }
  }
  return;
}
