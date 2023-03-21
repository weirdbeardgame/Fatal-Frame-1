// STATUS: NOT STARTED


int main() {
  int iVar1;
  
  __main();
  InitSystem();
  do {
    InitGameFirst();
    do {
      do {
        iVar1 = PlayMpegEvent();
      } while (iVar1 != 0);
      EiMain();
      GameMain();
      CheckDMATrans();
      sceGsSyncPath(0,0);
      vfunc();
      DrawAll2DMes_P2();
      FlushModel(1);
      ClearTextureCache();
      SeCtrlMain();
      iVar1 = SoftResetChk();
    } while (iVar1 == 0);
  } while( true );
}

void InitGameFirst() {
  int in_v0_lo;
  
  sys_wrk.reset = 0;
  gra3dInitFirst();
  dbg_flg = in_v0_lo;
  gra2dInitBG();
  MovieInitWrk();
  outgame_wrk.mode_next = '\x04';
  realtime_scene_flg = 0;
  sys_wrk.game_mode = 0;
  outgame_wrk.mode = 0;
  memset(&ingame_wrk,0,0x1c);
  sys_wrk.sreset_ng = 0;
  opening_movie_type = 0;
  return;
}

void CallSoftReset() {
	int lcount;
	
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  SeStopAll();
  InitSe();
  SetIopCmdSm(1,0,0,0);
  EAdpcmCmdStop(0,0,0);
  sys_wrk.reset = 0;
  SetSysBackColor(0,0,0);
  scene_bg_color = 0;
  while( true ) {
    EiMain();
    uVar1 = EAGetRetStat();
    if (uVar1 == 1) break;
    uVar1 = EAGetRetStat();
    iVar2 = iVar2 + 1;
    if (uVar1 == 2) break;
    if (0x1e < iVar2) {
      iVar2 = 0;
      EAdpcmCmdStop(0,0,0);
    }
    vfunc();
  }
  EAdpcmCmdInit(1);
  return;
}

int SoftResetChk() {
  bool bVar1;
  
  sys_wrk.sreset_count = 0;
  bVar1 = sys_wrk.reset == 1;
  if (bVar1) {
    sys_wrk.sreset_count = 0;
    CallSoftReset();
  }
  return (uint)bVar1;
}
