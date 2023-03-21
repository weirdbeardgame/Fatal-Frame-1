// STATUS: NOT STARTED

int after_timer = 0;
int pazene_load_buf[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};

void PhotoCtrlInit() {
  PhotoMakeSaveInit();
  InitPazEneTexLoad();
  return;
}

void PhotoCtrl() {
	int i;
	static int load_id1;
	static int load_id2;
	static int btfl = 0;
	static int cnt = 0;
	static int fd_cnt = 0;
	static int no = -1;
	int fl;
	
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uchar pht_2d;
  uint uVar4;
  uchar pht_furn;
  int *piVar5;
  uchar *puVar6;
  int iVar7;
  int *piVar8;
  PHOTO_WRK *pPVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = MesStatusCheck();
  if ((iVar3 == 0) && (plyr_wrk.ap_timer != 0)) {
    plyr_wrk.ap_timer = plyr_wrk.ap_timer + -1;
  }
  switch(photo_wrk.mode) {
  case 1:
    eff_dith_off = 1;
    photo_wrk.mode = 2;
    load_id1_123 = -1;
    break;
  case 2:
    pht_finder_off = 1;
    photo_wrk.mode = 3;
  case 3:
    load_id1_123 = SpecialPhotoMakeJudge();
    hint_2d = 0;
    hint_3d = 0;
    hint_rea = 0;
    btfl_125 = (uint)((plyr_wrk.sta & 0x101) == 1);
    puVar6 = photo_wrk.spcl_pht_no + 1;
    iVar3 = 3;
    do {
      bVar2 = (*(uchar (*) [2])(puVar6 + -1))[0];
      if (bVar2 == 6) {
        if (btfl_125 == 0) {
          bVar2 = *puVar6;
        }
        else {
          if (photo_wrk.ene_dead == 0xff) {
            bVar2 = (*(uchar (*) [2])(puVar6 + -1))[0];
            goto LAB_00200424;
          }
          bVar2 = *puVar6;
        }
        hint_2d = 1;
        hint_2d_num = (int)bVar2;
        if (hint_2d_num - 0x96U < 0x32) {
          hint_rea = 1;
        }
        bVar2 = (*(uchar (*) [2])(puVar6 + -1))[0];
      }
LAB_00200424:
      iVar3 = iVar3 + -1;
      if ((bVar2 == 7) && (btfl_125 == 0)) {
        hint_3d = 1;
        hint_3d_num = (int)*puVar6;
      }
      puVar6 = puVar6 + 2;
    } while (-1 < iVar3);
    photo_wrk.score = PhotoScoreCount();
    if (ingame_wrk.pht_cnt < 9999999) {
      ingame_wrk.pht_cnt = ingame_wrk.pht_cnt + 1;
    }
    if (hint_3d == 0) {
      if (btfl_125 == 0) {
        SetWhiteIn2(0x10);
      }
      else {
        SetWhiteIn2(1);
      }
    }
    else {
      FurnPicExecStart();
    }
    if (load_id1_123 != -1) {
      photo_wrk.mode = 0xb;
      return;
    }
    goto LAB_002004dc;
  case 4:
    ReqSavePicture();
    photo_wrk.mode = 5;
    if ((plyr_wrk.sta & 0x100) == 0) {
      plyr_wrk.ap_timer = 0x82;
      if (btfl_125 != 0) {
        plyr_wrk.ap_timer = 5;
      }
    }
    else {
      plyr_wrk.ap_timer = 0x3c;
    }
    pfile_wrk.pic_num = pfile_wrk.pic_num + '\x01';
    AddPhotoData();
    if (hint_3d != 0) {
      SetWhiteIn2(0x10);
      return;
    }
    furn_disp_flg = 0;
    break;
  case 5:
    if (plyr_wrk.ap_timer != 0) {
      return;
    }
    if (btfl_125 == 0) {
      if ((hint_2d == 0) && (hint_3d == 0)) {
        photo_wrk.mode = 8;
        ingame_wrk.stts = ingame_wrk.stts | 8;
        ingame_wrk.mode = 0x11;
        pht_finder_off = 0;
      }
      else {
        if (hint_rea == 0) {
          SeStartFix(10,0,0x1000,0x1000,0);
        }
        else {
          SeStartFix(7,0,0x1000,0x7a0,0);
        }
        photo_wrk.mode = 6;
        plyr_wrk.ap_timer = 100;
      }
    }
    else {
      pht_finder_off = 0;
      photo_wrk.mode = 8;
    }
    goto LAB_002006b0;
  case 6:
    if (plyr_wrk.ap_timer != 0) {
      return;
    }
    if ((hint_3d == 0) && (hint_rea == 0)) {
      plyr_wrk.ap_timer = 100;
      photo_wrk.mode = 7;
      return;
    }
    goto LAB_002006a4;
  case 7:
    if (plyr_wrk.ap_timer != 0) {
      return;
    }
LAB_002006a4:
    photo_wrk.mode = 8;
    pht_finder_off = 0;
LAB_002006b0:
    if (-1 < (int)no_128) {
      *(undefined *)((int)ene_wrk + (int)no_128 * 0x430 + 0x358) = 0;
    }
    break;
  case 8:
    FurnPicExecEnd();
    cnt_126 = 1;
    if (btfl_125 == 0) {
      cnt_126 = 0x14;
    }
    photo_wrk.mode = 9;
    SendManMdlTex();
    eff_dith_off = 0;
    break;
  case 9:
    if (cnt_126 == 1) {
      load_id2_124 = -1;
      if (((hint_2d != 0) && (hint_2d_num < 100)) &&
         (*(uint *)(&pazene_load_tbl + hint_2d_num * 4) != 0xffffffff)) {
        piVar5 = pazene_load_buf;
        iVar11 = 0;
        iVar3 = -1;
        uVar4 = pazene_load_buf[0];
        while( true ) {
          if (((uVar4 & 0x80) != 0) &&
             ((uVar4 & 0x7f) == *(uint *)(&pazene_load_tbl + hint_2d_num * 4))) {
            iVar3 = iVar11;
          }
          iVar11 = iVar11 + 1;
          piVar5 = (int *)((uint *)piVar5 + 1);
          if ((1 < iVar11) || (iVar3 != -1)) break;
          uVar4 = *piVar5;
        }
        if (iVar3 == -1) {
          piVar8 = pazene_load_buf;
          iVar7 = 0;
          piVar5 = piVar8;
          iVar11 = pazene_load_buf[0];
          while (piVar5 = piVar5 + 1, iVar11 != 0xff) {
            iVar10 = iVar7 + 1;
            piVar8 = (int *)((uint *)piVar8 + 1);
            iVar7 = iVar3;
            if (1 < iVar10) goto LAB_00200810;
            iVar7 = iVar10;
            iVar11 = *piVar5;
          }
          uVar4 = *(uint *)(&pazene_load_tbl + hint_2d_num * 4);
          (&DAT_00332698)[iVar7] = (&pazene_load_tbl)[hint_2d_num * 4] | 0x80;
          *piVar8 = uVar4 | 0x80;
LAB_00200810:
          if (iVar7 != -1) {
            load_id2_124 = LoadReq(*(int *)(&pazz_textbl + (pazene_load_buf[iVar7] & 0x7fU) * 4),
                                   iVar7 * 0x10000 + 0x1c90000);
          }
        }
      }
      ingame_wrk.stts = ingame_wrk.stts & 0xf7;
      ingame_wrk.mode = 6;
      if ((0x7f < (ushort)photo_wrk.rare[0].no) && (photo_wrk.rare[0].score != 0)) {
        PuzzleGhostPhotoReq();
        InfoDispPause();
        photo_wrk.mode = 10;
        ingame_wrk.stts = ingame_wrk.stts | 8;
        ingame_wrk.mode = 0x11;
        after_timer = 0x104;
        SetDebugMenuSwitch(1);
        return;
      }
      pPVar9 = &photo_wrk;
      iVar3 = 0;
      do {
        if (pPVar9->furn[0].no != -1) {
          uVar1 = pPVar9->furn[0].no;
          if (pPVar9->furn[0].type == 0x20) {
            pht_furn = 0xff;
            pht_2d = (&DAT_0033773d)[(uint)uVar1 * 0x12];
          }
          else {
            if ((uVar1 == 0xffff) || (pPVar9->furn[0].type != 0x40)) goto LAB_00200974;
            pht_furn = *(uchar *)&pPVar9->furn[0].no;
            pht_2d = 0xff;
          }
          iVar11 = PhotoEventOpenJudge(pht_2d,pht_furn);
          if (iVar11 != 0) break;
        }
LAB_00200974:
        iVar3 = iVar3 + 1;
        pPVar9 = (PHOTO_WRK *)&pPVar9->plyr;
      } while (iVar3 < 5);
    }
    if (cnt_126 == 0) {
      if (load_id2_124 == -1) {
        photo_wrk.mode = 0;
      }
      else {
        iVar3 = IsLoadEnd(load_id2_124);
        if (iVar3 != 0) {
          photo_wrk.mode = 0;
        }
      }
    }
    else {
      cnt_126 = cnt_126 + -1;
    }
    break;
  case 10:
    iVar3 = after_timer + -1;
    if (after_timer == 0) {
      iVar11 = 0;
      SetDebugMenuSwitch(0);
      photo_wrk.mode = 0;
      ingame_wrk.mode = 6;
      ingame_wrk.stts = ingame_wrk.stts & 0xf7;
      FinderEndSet();
      InfoDispRestart();
      uVar4 = (uint)(ushort)photo_wrk.rare[0].no;
      piVar5 = pazene_load_buf;
      do {
        if (uVar4 == *piVar5) {
          *piVar5 = 0xff;
          (&DAT_00332698)[iVar11] = 0xff;
        }
        iVar11 = iVar11 + 1;
        piVar5 = (int *)((uint *)piVar5 + 1);
        iVar3 = after_timer;
      } while (iVar11 < 2);
    }
    after_timer = iVar3;
    SetAmuletFire();
    if (after_timer == 0xdc) {
      CallAmuletFire();
      return;
    }
    break;
  case 0xb:
    iVar3 = IsLoadEnd(load_id1_123);
    if (iVar3 == 0) {
      return;
    }
LAB_002004dc:
    FModeScreenEffect();
    photo_wrk.mode = 4;
  }
  return;
}

void InitPazEneTexLoad() {
	int i;
	
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = pazene_load_buf;
  do {
    pbVar1 = &DAT_00332698 + iVar2;
    iVar2 = iVar2 + 1;
    *piVar3 = (uint)*pbVar1;
    piVar3 = (int *)((uint *)piVar3 + 1);
  } while (iVar2 < 2);
  return;
}
