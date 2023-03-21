// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#175,  not equal)
enum {
	BONUS_RECORD = 0,
	BONUS_RANKE = 1,
	BONUS_RANKD = 2,
	BONUS_RANKC = 3,
	BONUS_RANKB = 4,
	BONUS_RANKA = 5,
	BONUS_RANKS = 6,
	BONUS_NODMG = 7,
	BONUS_DUMMY0 = 8,
	BONUS_DUMMY1 = 9
};

int rank_dat[0] = {
};
int battle_scr_effct[0] = {
};
int btlBonus[0] = {
};
static int sp_load_id = 0;
BTL_MODE_WRK btl_wrk = {
	/* .mode = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	},
	/* .stage_no = */ 0,
	/* .load_mode = */ 0,
	/* .load_count = */ 0,
	/* .load_id = */ 0,
	/* .time = */ 0,
	/* .count = */ 0
};
STAGE_WRK stage_wrk[20] = {
	/* [0] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [1] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [2] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [3] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [4] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [5] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [6] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [7] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [8] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [9] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [10] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [11] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [12] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [13] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [14] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [15] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [16] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [17] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [18] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	},
	/* [19] = */ {
		/* .rank = */ 0,
		/* .best_time = */ 0,
		/* .best_shot = */ 0
	}
};
long int msn_high_score = 0;
long int msn_total_score = 0;
long int msn_bonus = 0;
int stage_all_clear_bak = 0;
int btl_mode_bgm_init = 0;
int btl_clear_disp = 0;

void BattleModeStageInit() {
	int i;
	STAGE_DAT *sdp;
	
  int iVar1;
  undefined *puVar2;
  STAGE_DAT_0_ *pSVar3;
  int iVar4;
  int iVar5;
  
  InitCallAnm();
  btl_wrk.mode = 0;
  msn_high_score = 0;
  msn_total_score = 0;
  msn_bonus = 0;
  NewgameItemInit();
  iVar4 = (uint)btl_wrk.stage_no * 0xc0;
  pSVar3 = &stage_dat + iVar4;
  poss_item[5] = (&DAT_00344861)[(uint)btl_wrk.stage_no * 0xc0];
  plyr_wrk.film_no = (&DAT_0034485f)[(uint)btl_wrk.stage_no * 0xc0];
  poss_item[(byte)(&DAT_0034485f)[(uint)btl_wrk.stage_no * 0xc0]] =
       (&DAT_00344860)[(uint)btl_wrk.stage_no * 0xc0];
  btl_wrk.time = 1;
  if (((&DAT_00344865)[iVar4] != -1) && ((&DAT_00344868)[iVar4] != '\0')) {
    puVar2 = &DAT_00344865 + iVar4;
    iVar4 = 0;
    while( true ) {
      iVar1 = iVar4 * 0x430;
      iVar5 = iVar4 + 1;
      *(undefined *)((int)ene_wrk + iVar1 + 0x11) = puVar2[iVar4];
      *(undefined4 *)((int)ene_wrk + iVar1) = 2;
      *(undefined4 *)((int)ene_wrk + iVar1 + 0x30) = *(undefined4 *)(pSVar3 + iVar4 * 0x10 + 0x40);
      *(undefined4 *)((int)ene_wrk + iVar1 + 0x34) = *(undefined4 *)(pSVar3 + iVar4 * 0x10 + 0x44);
      *(undefined4 *)((int)ene_wrk + iVar1 + 0x38) = *(undefined4 *)(pSVar3 + iVar4 * 0x10 + 0x48);
      if (2 < iVar5) break;
      pSVar3 = &stage_dat + (uint)btl_wrk.stage_no * 0xc0;
      puVar2 = &DAT_00344865 + (uint)btl_wrk.stage_no * 0xc0;
      if (puVar2[iVar5] == -1) {
        return;
      }
      iVar1 = iVar4 + 0x19;
      iVar4 = iVar5;
      if (pSVar3[iVar1] == '\0') {
        return;
      }
    }
  }
  return;
}

void BattleModeStageMain() {
	int ret_num;
	
  byte bVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  switch(btl_wrk.mode) {
  case 0:
    iVar6 = CallReadyGo();
    if (iVar6 != 0) {
      pad_ctrl.no_pause = '\0';
      ingame_wrk.stts = ingame_wrk.stts & 0x7f;
      btl_wrk.mode = 1;
      btl_wrk.time = *(short *)(&stage_dat + (uint)btl_wrk.stage_no * 0xc0);
      stage_all_clear_bak = CheckClearAll();
      LockAllDoorInNowRoom();
      btl_mode_bgm_init = 1;
    }
    break;
  case 1:
    if ((btl_mode_bgm_init != 0) && (bVar1 = IsEndAdpcmBtlmode(), bVar1 != 0)) {
      AdpcmBtlmodeEnd();
      AdpcmMapUse();
      btl_mode_bgm_init = 0;
    }
    if (btl_wrk.time != 0) {
      btl_wrk.time = btl_wrk.time + -1;
    }
    break;
  case 2:
    iVar6 = CallMissionFailed();
    goto joined_r0x0021df90;
  case 3:
    iVar6 = CheckClearAllFirst();
    if (iVar6 == 0) {
      iVar6 = CallMissionClear();
    }
    else {
      iVar5 = CallMissionAllClear();
      iVar6 = iVar5 + 1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
    }
joined_r0x0021df90:
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        btl_wrk.mode = 4;
      }
      else if (iVar6 == 2) {
        btl_wrk.mode = 5;
        btl_wrk.time = 4;
      }
      else if (iVar6 == 3) {
        btl_wrk.mode = 9;
      }
    }
    break;
  case 4:
    LoadStoryWrk();
    ingame_wrk.stts = ingame_wrk.stts & 0x57;
    GameModeChange(3);
    sVar4 = btl_wrk.time;
    goto LAB_0021e084;
  case 5:
    if (btl_wrk.time == 4) {
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
    }
    sVar4 = btl_wrk.time + -1;
    if (btl_wrk.time == 0) {
      InitialDmaBuffer();
      btl_wrk.mode = 6;
      sVar4 = btl_wrk.time;
    }
LAB_0021e084:
    btl_wrk.time = sVar4;
    EAdpcmFadeOut(0x3c);
    break;
  case 6:
    iVar6 = IsEndAdpcmFadeOut();
    if (iVar6 != 0) {
      mcInit('\0',(uint *)&DAT_00420000,mc_msn_flg);
      sp_load_id = LoadReq(0x48,0x1d59630);
      sp_load_id = LoadReq(0x47,0x1d15600);
      sp_load_id = LoadReq(0x68,0x1d28c80);
      btl_wrk.mode = 7;
      sVar4 = GetAdpcmVol(0x608);
      EAdpcmCmdPlay(0,1,0x608,0,sVar4,0x280,0xfff,0);
    }
    break;
  case 7:
    iVar6 = IsLoadEnd(sp_load_id);
    if (iVar6 != 0) {
      btl_wrk.mode = 8;
      LoadStoryWrk();
      furn_disp_flg = 0;
      ingame_wrk.stts = ingame_wrk.stts | 0xa8;
    }
    break;
  case 8:
    SetSprFile(0x1ce0000);
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar2 = McAtSaveChk();
    if (cVar2 != '\0') {
      SaveStoryWrk();
      btl_wrk.mode = 4;
    }
    break;
  case 9:
    LoadStoryWrk();
    GameModeChange(3);
    EAdpcmFadeOut(0x3c);
    BattleModeExit();
    break;
  case 10:
    GameModeChange(3);
    EAdpcmFadeOut(0x3c);
  }
  if (sys_wrk.game_mode == 3) {
    bVar3 = isBattleModeGame();
    if (!bVar3) {
      pad_ctrl.no_pause = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x80;
    }
  }
  else {
    pad_ctrl.no_pause = '\0';
    ingame_wrk.stts = ingame_wrk.stts & 0x7f;
  }
  BattleModeInfomationDisp();
  return;
}

void BattleModeInfomationDisp() {
  return;
}

int CheckClearAllS() {
	int i;
	
  bool bVar1;
  uint uVar2;
  STAGE_WRK *pSVar3;
  int iVar4;
  
  if (stage_wrk[0].rank < 6) {
    uVar2 = 1;
  }
  else {
    pSVar3 = stage_wrk;
    iVar4 = 1;
    while( true ) {
      bVar1 = iVar4 < 0x14;
      uVar2 = (uint)bVar1;
      pSVar3 = pSVar3 + 1;
      if (uVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (pSVar3->rank < 6) {
        return bVar1 ^ 1;
      }
    }
  }
  return uVar2 ^ 1;
}

void BattleModeClear() {
	int i;
	int best_shot;
	int best_time;
	int rank;
	int no_dmg;
	
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  btl_clear_disp = 0;
  uVar7 = 0;
  iVar6 = 0;
  iVar3 = EnemyUseJudge(0);
  if (iVar3 == 0) {
    uVar5 = (uint)btl_wrk.stage_no;
    iVar3 = (uint)*(ushort *)(&stage_dat + uVar5 * 0xc0) - (uint)(ushort)btl_wrk.time;
    bVar1 = iVar3 < (int)(uint)(ushort)stage_wrk[uVar5].best_time;
    if (bVar1) {
      stage_wrk[uVar5].best_time = (short)iVar3;
    }
    lVar2 = msn_high_score;
    if (stage_wrk[uVar5].best_shot < msn_high_score) {
      stage_wrk[uVar5].best_shot = msn_high_score;
      lVar4 = (long)_rank_dat;
      stage_wrk[uVar5].rank = '\x06';
      iVar6 = 1;
      iVar3 = 0;
      if (lVar2 < lVar4) {
        stage_wrk[uVar5].rank = '\x01';
      }
      else {
        do {
          iVar3 = iVar3 + 1;
          if (4 < iVar3) goto LAB_0021e3dc;
        } while (*(int *)(&rank_dat + iVar3 * 4) <= lVar2);
        stage_wrk[btl_wrk.stage_no].rank = (char)iVar3 + '\x01';
      }
LAB_0021e3dc:
      uVar7 = (uint)stage_wrk[btl_wrk.stage_no].rank;
    }
    msn_bonus = (long)(int)(_btlBonus * (uint)bVar1 + *(int *)(&btlBonus + (uVar7 + 1) * 4) * iVar6
                           + DAT_003446f4 * (uint)(plyr_wrk.hp == 500));
    cam_custom_wrk.point = msn_bonus + cam_custom_wrk.point;
    if (0x98967e < cam_custom_wrk.point) {
      cam_custom_wrk.point = 9999999;
    }
    iVar3 = CheckClearAllFirst();
    if (iVar3 == 0) {
      CallMissionClear();
    }
    else {
      if (cam_custom_wrk.func_spe[0] == '\0') {
        cam_custom_wrk.func_spe[0] = '\x01';
        btl_clear_disp = 1;
      }
      CallMissionAllClear();
    }
    if (((cam_custom_wrk.func_spe[1] == '\0') && (iVar3 = CheckClearAllS(), iVar3 != 0)) &&
       (cam_custom_wrk.func_spe[1] = '\x01', btl_clear_disp == 0)) {
      btl_clear_disp = 2;
    }
    btl_wrk.mode = 3;
  }
  return;
}

void BattleModeScoreRecord(long int score) {
  if (msn_high_score < score) {
    msn_high_score = score;
  }
  msn_total_score = msn_total_score + score;
  return;
}

int isBattleModeGame() {
  return btl_wrk.mode == 1;
}

int CheckClearAllFirst() {
  int iVar1;
  uint uVar2;
  
  iVar1 = CheckClearAll();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)(stage_all_clear_bak == 0);
  }
  return uVar2;
}

int CheckClearAll() {
	int i;
	int ret;
	
  STAGE_WRK *pSVar1;
  int iVar2;
  
  if (stage_wrk[0].rank != '\0') {
    iVar2 = 1;
    do {
      if (0x13 < iVar2) {
        return 1;
      }
      pSVar1 = stage_wrk + iVar2;
      iVar2 = iVar2 + 1;
    } while (pSVar1->rank != '\0');
  }
  return 0;
}

void SetBattleEnd() {
  btl_wrk.mode = 10;
  return;
}
