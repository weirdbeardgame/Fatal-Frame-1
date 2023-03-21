#include "ingame.h"
#include "ev_main.h"
#include "gamemain.h"
#include "glob.h"
#include "mc_main.h"

enum {
  INGAME_INIT_LOAD_START = 0,
  INGAME_INIT_LOAD_MENU = 1,
  INGAME_INIT_WAIT_MENU = 2,
  INGAME_INIT_LOAD_EFCT = 3,
  INGAME_INIT_WAIT_EFCT = 4,
  INGAME_INIT_LOAD_CAME = 5,
  INGAME_INIT_WAIT_CAME = 6,
  INGAME_INIT_LOAD_PHOTO = 7,
  INGAME_INIT_WAIT_PHOTO = 8,
  INGAME_INIT_LOAD_GOVER = 9,
  INGAME_INIT_WAIT_GOVER = 10,
  INGAME_INIT_LOAD_FNDR = 11,
  INGAME_INIT_WAIT_FNDR = 12,
  INGAME_INIT_LOAD_BHSE = 13,
  INGAME_INIT_WAIT_BHSE = 14,
  INGAME_INIT_LOAD_END = 15
};

int start_msn = 0;
int msn0_wait_timer = 0;

void InGameCtrl() {
  int iVar1;

  if (ingame_wrk.mode == 1) {
    InGameInit();
    if (ingame_wrk.game == 0) {
      if ((sys_wrk.load != 0) && ((sys_wrk.load != 1 || (mc_msn_flg != 1)))) {
        ingame_wrk.mode = 4;
        LoadStartDataInit();
        return;
      }
      ingame_wrk.mode = 5;
      if (ingame_wrk.msn_no == 0) {
        MoviePlay(0);
      }
      MissionTitleInit(ingame_wrk.msn_no);
      return;
    }
    if (ingame_wrk.game == 1) {
      ingame_wrk.mode = 5;
      MissionTitleInit(ingame_wrk.msn_no);
      return;
    }
  } else if (ingame_wrk.mode < 2) {
    if (ingame_wrk.mode != 0) {
    LAB_00187968:
      InGameMain();
      return;
    }
    iVar1 = InGameFirstLoad();
    if (iVar1 != 0) {
      if ((ingame_wrk.game == 0) && (ingame_wrk.msn_no == 0)) {
        ingame_wrk.mode = 0x18;
        msn0_wait_timer = 0x5a;
      } else {
        ingame_wrk.mode = 1;
      }
    }
  } else {
    if (ingame_wrk.mode != 0x18)
      goto LAB_00187968;
    iVar1 = msn0_wait_timer + -1;
    if ((msn0_wait_timer == 0) || (msn0_wait_timer = iVar1, iVar1 == 0)) {
      ingame_wrk.mode = 1;
    }
  }
  return;
}

int InGameFirstLoad() {
  int iVar1;

  switch (sys_wrk.load_mode) {
  case 0:
    ingame_wrk.stts = 0;
    sys_wrk.load_mode = 1;
    if (((sys_wrk.load == 0) && (ingame_wrk.game != 1)) &&
        (ingame_wrk.clear_count == 0)) {
      ingame_wrk.high_score = 0;
      ingame_wrk.ghost_cnt = 0;
      ingame_wrk.rg_pht_cnt = 0;
      ingame_wrk.pht_cnt = 0;
    }
    InitSeGhost();
  case 1:
    init_load_id = LoadReq(0x4f, 0x1e05b00);
    init_load_id = LoadReq(0x67, 0x1e2f700);
    init_load_id = LoadReq(0x46, 0x1ce0000);
    init_load_id = LoadReq(0x4c, 0x1d05140);
    init_load_id = LoadReq(0x4d, 0x1d266c0);
    init_load_id = LoadReq(0x4e, 0x1d15600);
    init_load_id = LoadReq(0x183, 0x1f1c000);
    sys_wrk.load_mode = 2;
    break;
  case 2:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    sys_wrk.load_mode = 3;
  case 3:
    init_load_id = LoadReq(0x185, 0x1fc8000);
    init_load_id = LoadReq(0x43, 0x1e90000);
    sys_wrk.load_mode = 4;
    break;
  case 4:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    SetETIM2File(0x1e90000);
    sys_wrk.load_mode = 5;
  case 5:
    init_load_id = LoadReq(0x161, 0x1fa8000);
    sys_wrk.load_mode = 6;
    break;
  case 6:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    sys_wrk.load_mode = 7;
  case 7:
    init_load_id = LoadReq(0x45, 0x1e85000);
    sys_wrk.load_mode = 8;
    break;
  case 8:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    sys_wrk.load_mode = 0xb;
  case 0xb:
    init_load_id = LoadReq(0x4a, 0x1d88100);
    init_load_id = LoadReq(0x4b, 0x1df2100);
    sys_wrk.load_mode = 0xc;
    break;
  case 0xc:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 == 0) {
      return 0;
    }
    sys_wrk.load_mode = 0xd;
  case 0xd:
    init_load_id = SeFileLoadAndSet(0x547, 1);
    sys_wrk.load_mode = 0xe;
    break;
  case 0xe:
    iVar1 = IsLoadEnd(init_load_id);
    if (iVar1 != 0) {
      sys_wrk.load_mode = 0;
      return 1;
    }
    break;
  case 0xf:
    sys_wrk.load_mode = 0;
    return 1;
  }
  return 0;
}

void InGameInit() {
  int next_msn_chk;

  bool bVar1;

  bVar1 = false;
  if (((sys_wrk.load == 1) && (mc_msn_flg == '\x01')) ||
      (ev_wrk.next_msn == 1)) {
    InitModelLoad();
    bVar1 = true;
    InitPlyr2(plyr_wrk.film_no);
    memset(event_stts, 0, 0xfa);
    InitFindStatus();
    MapAreaInit();
    EntryInit();
    MapItemInit();
    RareGhostInit();
    PuzzleGhostInit();
    DataLoadWrkInit();
    MovieInitWrk();
    motInitAniMdlBuf();
    ev_wrk.next_msn = 0;
    if (ingame_wrk.msn_no == 0) {
      EventWrkInit();
      time_wrk.one_game = 0;
      MissionSelectItemInit();
    }
  } else if (sys_wrk.load == 0) {
    InitModelLoad();
    InitPlyr();
    EventWrkInit();
    if (ingame_wrk.clear_count == 0) {
      NewgameItemInit();
      TimeCtrlInit();
    } else {
      MissionSelectItemInit();
    }
    InitFindStatus();
    MapAreaInit();
    EntryInit();
    MapItemInit();
    RareGhostInit();
    PuzzleGhostInit();
    DataLoadWrkInit();
    MovieInitWrk();
    motInitAniMdlBuf();
    time_wrk.one_game = 0;
  } else {
    InitModelLoad();
    InitPlyrAfterLoad();
    MovieInitWrk();
    motInitAniMdlBuf();
    SettleGhostInit();
  }
  plyr_vib_time = '\0';
  disp3d_furn_req = 1;
  disp3d_room_req = 1;
  gra3dInitFirst();
  InitSeMenuFade();
  InitEffects();
  InitEffectSub2();
  InitLoadStartLock();
  InitFurnDispFlg();
  InitFlyWrk();
  InitSceneWork();
  if (bVar1) {
    LoadgameMenuInit();
  } else if ((sys_wrk.load == 0) && (ingame_wrk.clear_count == 0)) {
    NewgameMenuInit();
  } else {
    LoadgameMenuInit();
  }
  gra2dInitST();
  if ((ingame_wrk.game == 0) && (ingame_wrk.clear_count != 0)) {
    poss_item[9] = 1;
  }
  SetRealTime();
  SeSetMVol(opt_wrk.bgm_vol);
  SeSetSteMono(opt_wrk.sound_mode);
  return;
}

void InGameInit2() {
  int mode;

  bool bVar1;

  bVar1 = false;
  if ((ingame_wrk.mode == 5) && (bVar1 = true, ingame_wrk.game == 0)) {
    MapMissionChange(ingame_wrk.msn_no);
    bVar1 = true;
  }
  if (sys_wrk.load == 0) {
    InitMapStatus(ingame_wrk.msn_no);
  }
  InitCamera();
  Init3D();
  InitEnemy();
  if (ingame_wrk.game == 0) {
    EventInit();
    if (bVar1) {
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
    }
  } else if (ingame_wrk.game == 1) {
    BattleModeStageInit();
  }
  FindMapInit();
  MapDataInit();
  PhotoCtrlInit();
  IngameMenuInit();
  InitAreaReadWrk();
  InitFogSelection();
  ReviveWanderSoul();
  SeBackupInit();
  SeEvInit();
  AdpcmMapCtrlInit();
  AdpcmMapUse();
  SetKeyType();
  sys_wrk.load = 0;
  return;
}

void InGameMain() {
  u_char tmp_room_no;

  uchar uVar1;
  uchar uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;

  if ((ingame_wrk._0_4_ & 0x9000ff00) == 0x600) {
    MapCtrlMain();
  } else {
    if (iGpffffa084 == 1) {
      MapCtrlMain();
    }
  }
  if ((ingame_wrk.stts & 8) == 0) {
    CameraMain();
  }
  if (((ingame_wrk.stts & 0x20) == 0) || (iGpffffa084 == 1)) {
    PointLightCtrl();
    uVar2 = room_wrk.disp_no[1];
    uVar1 = ChkNextRoomIsInsite();
    if ((long)(char)uVar1 == 0xff) {
      room_wrk.disp_no[1] = uVar1;
    }
    NakasuHazeSet();
    gra3dDraw();
    gra2dDraw(5);
    room_wrk.disp_no[1] = uVar2;
  }
  AnaPonChk();
  switch (ingame_wrk._0_4_ >> 8 & 0xff) {
  case 4:
    iVar5 = LoadStartDataSet();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    if (iVar5 != 0) {
      InGameInit2();
      uVar6 = ingame_wrk._0_4_ & 0xff;
    }
    break;
  case 5:
    iVar5 = MissionTitleMain((uint)ingame_wrk.msn_no);
    uVar6 = ingame_wrk._0_4_ & 0xff;
    if (iVar5 == 0)
      break;
    InGameInit2();
    ingame_wrk._0_2_ = CONCAT11(6, ingame_wrk.game);
    ingame_wrk._0_4_ = ingame_wrk._0_4_ & 0xffff0000 | (uint)ingame_wrk._0_2_;
    iGpffff9e80 = 1;
    if (ingame_wrk.game != 1) {
      if (ingame_wrk.msn_no == 0) {
        uGpffffa689 = 0;
      } else {
        AdpcmMapNoUse();
        uGpffffa689 = 0;
      }
      goto switchD_00188120_caseD_b;
    }
    goto LAB_00188488;
  case 6:
    if (iGpffff9e80 != 0) {
      iGpffff9e80 = 0;
      TmpPadOff();
    }
    cVar3 = SpdMenuCtrl();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    if (cVar3 == '\0') {
      iVar5 = PauseMain();
      uVar6 = ingame_wrk._0_4_ & 0xff;
      if (iVar5 == 0) {
        if (uVar6 == 1) {
          bVar4 = isBattleModeGame();
          if (!bVar4) {
            BattleModeStageMain();
            uVar6 = ingame_wrk._0_4_ & 0xff;
            break;
          }
        } else {
        }
        uVar6 = ingame_wrk._0_4_ & 0xff;
        if ((ingame_wrk.stts & 0x80) == 0) {
          PlyrCtrlMain();
          PhotoCtrl();
          if ((ingame_wrk._0_4_ & 0x10000000) == 0) {
            EneCtrlMain();
            if ((ap_wrk.stts & 0x20) == 0) {
              RareGhostMain();
            }
            if (ingame_wrk.game == 0) {
              EventOpenMain();
              WanderSoulCtrl();
              iVar5 = ItemGetMain();
              if (iVar5 != 0) {
                ingame_wrk._0_2_ = CONCAT11(0xe, ingame_wrk.game);
                ingame_wrk._0_4_ =
                    ingame_wrk._0_4_ & 0xffff0000 | (uint)ingame_wrk._0_2_;
                goto switchD_00188120_caseD_b;
              }
              if ((((plyr_wrk.mode != 1) && ((plyr_wrk.sta & 1) == 0)) &&
                   (ev_wrk.mode == 0)) &&
                  (uVar2 = FindMapReqJudge(), uVar2 != '\0')) {
                plyr_wrk.mode = 4;
              }
            } else if ((ingame_wrk.game == 1) &&
                       (bVar4 = isBattleModeGame(), bVar4)) {
              BattleModeStageMain();
            }
          }
          DoorOpenCheckMain();
          if (dbg_wrk.mode_on == 0) {
            if (dbg_wrk.cam_mode == 1)
              goto switchD_00188120_caseD_b;
            uVar6 = ingame_wrk._0_4_ & 0xff;
            if ((*key_now[4] == 1) &&
                (uVar6 = ingame_wrk._0_4_ & 0xff, plyr_wrk.mode == 0)) {
              iVar5 = GetLoadStartLock();
              uVar6 = ingame_wrk._0_4_ & 0xff;
              if ((iVar5 == 0) &&
                  ((plyr_wrk.cond != 1 &&
                    (uVar6 = ingame_wrk._0_4_ & 0xff, ev_wrk.mode == 0)))) {
                IngameMenuOpenStart();
                uVar6 = ingame_wrk._0_4_ & 0xff;
              }
            }
          } else {
            uVar6 = ingame_wrk._0_4_ & 0xff;
          }
        }
      }
    }
    break;
  case 7:
    EventMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 8:
    SpecialEventMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 9:
    MapAreaMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 10:
    IngameMenuMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0xc:
    SpdMapMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0xd:
    SpdOptMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0xe:
    PlyrCtrlMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0xf:
    WanderSoulCtrl();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x10:
    SavePointMenuMain(0);
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x11:
    PhotoCtrl();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x12:
    GhostDeadMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x13:
    SettleGhostMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x14:
    GameOverMenuMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x15:
    cVar3 = AlbumModeInGameOver();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    if (cVar3 != '\0') {
      ReturnGameOver();
      uVar6 = ingame_wrk._0_4_ & 0xff;
    }
    break;
  case 0x16:
    InterMissionMain();
    uVar6 = ingame_wrk._0_4_ & 0xff;
    break;
  case 0x17:
    EndingMain();
  default:
  switchD_00188120_caseD_b:
    uVar6 = ingame_wrk._0_4_ & 0xff;
  }
  if (uVar6 == 1) {
  LAB_00188488:
    bVar4 = isBattleModeGame();
    if (!bVar4)
      goto LAB_001884c4;
  }
  if (1 < (ingame_wrk._0_4_ >> 8 & 0xff) - 4) {
    EntryMain();
  }
  ItemCtrl();
  GameTimeCtrl();
LAB_001884c4:
  gra2dDraw(6);
  AdpcmMapCtrl();
  if (dbg_wrk.mode_on == 2) {
    GameModeChange(3);
    SetTargetVolSeMenuFade(0xfff);
    SetTargetVolAdpcmMenuFade(0xfff);
    EAdpcmFadeOutGameEnd(0x1e);
    SeStopAll();
    return;
  }
  return;
}

void TmpPadOff() {
  int i;

  short *psVar1;
  short **ppsVar2;
  int iVar3;

  iVar3 = 0xf;
  ppsVar2 = key_now;
  do {
    psVar1 = *ppsVar2;
    iVar3 = iVar3 + -1;
    ppsVar2 = ppsVar2 + 1;
    *psVar1 = 0;
  } while (-1 < iVar3);
  return;
}
