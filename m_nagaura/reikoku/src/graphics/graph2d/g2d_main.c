// STATUS: NOT STARTED

G2D_LOAD_FLG g2d_load_flg = {
	/* .dmg = */ 0,
	/* .hint = */ 0,
	/* .pazz = */ 0,
	/* .eneface = */ 0,
	/* .enedmg = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	}
};

void gra2dInitBG() {
	int i;
	
  uchar *puVar1;
  int iVar2;
  
  g2d_load_flg.dmg = '\0';
  iVar2 = 3;
  g2d_load_flg.hint = '\0';
  puVar1 = g2d_load_flg.enedmg + 3;
  g2d_load_flg.pazz = '\0';
  g2d_load_flg.eneface = '\0';
  do {
    *puVar1 = '\0';
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  InitTIM2Files();
  InitMessage();
  InitPerformanceCounter();
  return;
}

void gra2dInitST() {
  InformationDispInit();
  PauseInit();
  SpdMenuInit();
  return;
}

static void gra2dSubO() {
  DrawAll2D();
  CallFontTexAndMesPacket();
  return;
}

static void gra2dSubG0(int fl) {
  InitEffectsEF();
  EffectControl(fl);
  return;
}

static void gra2dSubG1(int fl) {
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EFFECT_CONT *pEVar6;
  
  if (change_efbank == 0) {
    pEVar6 = efcnt_cnt;
  }
  else {
    pEVar6 = efcnt;
  }
  switch(fl) {
  default:
    return;
  case 5:
    break;
  case 7:
    SetEneDmgEffect1_Sub();
    SetEneDmgEffect2_Sub();
    RunCamStop();
    RunCamSlow();
    RunCamPush();
    tes_p20();
    EffectZSort2();
    RunCamSearch();
    RunCamView();
    tes_p21();
    EffectZSort3();
    return;
  case 8:
    tes_p3();
    if (pEVar6[9].dat.uc8[0] == 9) {
      SetFadeFrame(pEVar6 + 9);
      bVar1 = pEVar6[8].dat.uc8[0];
    }
    else {
      bVar1 = pEVar6[8].dat.uc8[0];
    }
    if (bVar1 == 8) {
      SetOverRap(pEVar6 + 8);
    }
    ScreenCtrl();
    CamSave();
    return;
  }
  if (dbg_wrk.oth_pkt_num_sw != 0) {
    if (*key_now[8] == 0) {
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 10),(float)(iVar4 * 0x10 + 0x14),1,0x80,0x80,
                   0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x40);
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 0x168),(float)(iVar4 * 0x10 + 0x14),1,0x80,
                   0x80,0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x30);
    }
    else {
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 10),(float)(iVar4 * 0x10 + 0x14),1,0x80,0x80,
                   0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x40);
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 0x168),(float)(iVar4 * 0x10 + 0x14),1,0x80,
                   0x80,0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x30);
    }
  }
  pblur();
  SetSky();
  SetPond();
  SetHaze_Pond();
  SetFirefly();
  SetCanal();
  SetSaveCameraLamp();
  if ((((sys_wrk.game_mode != 2) && (tmp_effect_off == 0)) && (ingame_wrk.mode != 0xf)) &&
     (ingame_wrk.game != 1)) {
    CheckItemEffect();
  }
  RunLeaf();
  SetHaze_Pond();
  SetFirefly();
  DrawRareEne();
  tes_p10();
  if (pEVar6[10].dat.uc8[0] == 10) {
    SetRenzFlare(pEVar6 + 10);
  }
  EffectZSort();
  if (pEVar6[0x13].dat.uc8[0] == 0x13) {
    SetSpirit(pEVar6 + 0x13);
  }
  SetMAGATOKI2();
  if (pEVar6[0x10].dat.uc8[0] == 0x10) {
    SetMAGATOKI(pEVar6 + 0x10);
    bVar1 = pEVar6[1].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[1].dat.uc8[0];
  }
  if (bVar1 == 1) {
    SetForcusDepth(pEVar6 + 1);
    bVar1 = pEVar6[0x24].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0x24].dat.uc8[0];
  }
  if (bVar1 == 0x24) {
    SetForcusDepth2(pEVar6 + 0x24);
    bVar1 = pEVar6[3].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[3].dat.uc8[0];
  }
  if (bVar1 == 3) {
    SetBlur(pEVar6 + 3);
    bVar1 = pEVar6[4].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[4].dat.uc8[0];
  }
  if (bVar1 == 4) {
    SetBlur(pEVar6 + 4);
    bVar1 = pEVar6[5].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[5].dat.uc8[0];
  }
  if (bVar1 == 5) {
    SetBlur(pEVar6 + 5);
  }
  RunBlur(pEVar6 + 3);
  if (pEVar6[6].dat.uc8[0] == 6) {
    SetDeform(pEVar6 + 6);
    bVar1 = pEVar6[0xd].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xd].dat.uc8[0];
  }
  if (bVar1 == 0xd) {
    SetContrast2(pEVar6 + 0xd);
    bVar1 = pEVar6[0xc].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xc].dat.uc8[0];
  }
  if (bVar1 == 0xc) {
    SetNega(pEVar6 + 0xc);
    bVar1 = pEVar6[0xf].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xf].dat.uc8[0];
  }
  if (bVar1 == 0xf) {
    SetContrast3(pEVar6 + 0xf);
    bVar1 = pEVar6[7].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[7].dat.uc8[0];
  }
  if (bVar1 == 7) {
    SetFocus(pEVar6 + 7);
  }
  RunFocus(pEVar6 + 7);
  if (pEVar6[2].dat.uc8[0] == 2) {
    SetDither3(pEVar6 + 2);
    bVar1 = pEVar6[0x23].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0x23].dat.uc8[0];
  }
  if (bVar1 == 0x23) {
    SetDither4(pEVar6 + 0x23);
    bVar1 = pEVar6[0xb].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xb].dat.uc8[0];
  }
  if (bVar1 == 0xb) {
    SetBlackFilter(pEVar6 + 0xb);
    bVar1 = pEVar6[0xe].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xe].dat.uc8[0];
  }
  if (bVar1 == 0xe) {
    SetContrast2(pEVar6 + 0xe);
  }
  tes_p11();
  SetRoomDirecPazzEne();
  return;
}

static void gra2dSubG2(int fl) {
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EFFECT_CONT *pEVar6;
  
  if (change_efbank == 0) {
    pEVar6 = efcnt_cnt;
  }
  else {
    pEVar6 = efcnt;
  }
  switch(fl) {
  default:
    return;
  case 5:
    break;
  case 7:
    SetEneDmgEffect1_Sub();
    SetEneDmgEffect2_Sub();
    RunCamStop();
    RunCamSlow();
    RunCamPush();
    tes_p20();
    EffectZSort2();
    RunCamSearch();
    RunCamView();
    tes_p21();
    EffectZSort3();
    return;
  case 8:
    tes_p3();
    if (pEVar6[9].dat.uc8[0] == 9) {
      SetFadeFrame(pEVar6 + 9);
      bVar1 = pEVar6[8].dat.uc8[0];
    }
    else {
      bVar1 = pEVar6[8].dat.uc8[0];
    }
    if (bVar1 == 8) {
      SetOverRap(pEVar6 + 8);
    }
    ScreenCtrl();
    CamSave();
    return;
  }
  if (dbg_wrk.oth_pkt_num_sw != 0) {
    if (*key_now[8] == 0) {
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 10),(float)(iVar4 * 0x10 + 0x14),1,0x80,0x80,
                   0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x40);
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 0x168),(float)(iVar4 * 0x10 + 0x14),1,0x80,
                   0x80,0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x30);
    }
    else {
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 10),(float)(iVar4 * 0x10 + 0x14),1,0x80,0x80,
                   0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x40);
      iVar5 = 0;
      bVar2 = true;
      do {
        iVar3 = iVar5 + 0xf;
        if (bVar2) {
          iVar3 = iVar5;
        }
        iVar4 = iVar5 + (iVar3 >> 4) * -0x10;
        iVar5 = iVar5 + 1;
        SetString2(0x10,(float)((iVar3 >> 4) * 0x50 + 0x168),(float)(iVar4 * 0x10 + 0x14),1,0x80,
                   0x80,0x80,s__2d__2d_00356380);
        bVar2 = -1 < iVar5;
      } while (iVar5 < 0x30);
    }
  }
  pblur();
  SetSky();
  SetPond();
  SetHaze_Pond();
  SetFirefly();
  SetCanal();
  SetSaveCameraLamp();
  if ((((sys_wrk.game_mode != 2) && (tmp_effect_off == 0)) && (ingame_wrk.mode != 0xf)) &&
     (ingame_wrk.game != 1)) {
    CheckItemEffect();
  }
  RunLeaf();
  SetHaze_Pond();
  SetFirefly();
  DrawRareEne();
  tes_p10();
  if (pEVar6[10].dat.uc8[0] == 10) {
    SetRenzFlare(pEVar6 + 10);
  }
  EffectZSort();
  if (pEVar6[0x13].dat.uc8[0] == 0x13) {
    SetSpirit(pEVar6 + 0x13);
  }
  SetMAGATOKI2();
  if (pEVar6[0x10].dat.uc8[0] == 0x10) {
    SetMAGATOKI(pEVar6 + 0x10);
    bVar1 = pEVar6[1].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[1].dat.uc8[0];
  }
  if (bVar1 == 1) {
    SetForcusDepth(pEVar6 + 1);
    bVar1 = pEVar6[0x24].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0x24].dat.uc8[0];
  }
  if (bVar1 == 0x24) {
    SetForcusDepth2(pEVar6 + 0x24);
    bVar1 = pEVar6[3].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[3].dat.uc8[0];
  }
  if (bVar1 == 3) {
    SetBlur(pEVar6 + 3);
    bVar1 = pEVar6[4].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[4].dat.uc8[0];
  }
  if (bVar1 == 4) {
    SetBlur(pEVar6 + 4);
    bVar1 = pEVar6[5].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[5].dat.uc8[0];
  }
  if (bVar1 == 5) {
    SetBlur(pEVar6 + 5);
  }
  RunBlur(pEVar6 + 3);
  if (pEVar6[6].dat.uc8[0] == 6) {
    SetDeform(pEVar6 + 6);
    bVar1 = pEVar6[0xd].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xd].dat.uc8[0];
  }
  if (bVar1 == 0xd) {
    SetContrast2(pEVar6 + 0xd);
    bVar1 = pEVar6[0xc].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xc].dat.uc8[0];
  }
  if (bVar1 == 0xc) {
    SetNega(pEVar6 + 0xc);
    bVar1 = pEVar6[0xf].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xf].dat.uc8[0];
  }
  if (bVar1 == 0xf) {
    SetContrast3(pEVar6 + 0xf);
    bVar1 = pEVar6[7].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[7].dat.uc8[0];
  }
  if (bVar1 == 7) {
    SetFocus(pEVar6 + 7);
  }
  RunFocus(pEVar6 + 7);
  if (pEVar6[2].dat.uc8[0] == 2) {
    SetDither3(pEVar6 + 2);
    bVar1 = pEVar6[0x23].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0x23].dat.uc8[0];
  }
  if (bVar1 == 0x23) {
    SetDither4(pEVar6 + 0x23);
    bVar1 = pEVar6[0xb].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xb].dat.uc8[0];
  }
  if (bVar1 == 0xb) {
    SetBlackFilter(pEVar6 + 0xb);
    bVar1 = pEVar6[0xe].dat.uc8[0];
  }
  else {
    bVar1 = pEVar6[0xe].dat.uc8[0];
  }
  if (bVar1 == 0xe) {
    SetContrast2(pEVar6 + 0xe);
  }
  tes_p11();
  SetRoomDirecPazzEne();
  return;
}

static void gra2dSubG3(int fl) {
  PhotoMakeSave();
  EffectControl(7);
  InformationDispMain();
  PhotoMakeSave2();
  EffectControl(8);
  PauseDisp();
  CheckHintTex();
  CallVibrate();
  gra2dSubLAST();
  SetScreenSaver();
  return;
}

static void gra2dSubLAST() {
  EffectEndSet();
  MesPassCheck();
  InitHeatHaze();
  InitMessageEF();
  return;
}

void gra2dDraw(int fl) {
  int iVar1;
  
  iVar1 = rand();
  SetVURand((float)iVar1 * 4.656613e-10);
  if (fl == 4) {
LAB_00154fe4:
    gra2dSubG1(fl);
  }
  else {
    if (4 < fl) {
      if ((fl < 0xc) && (fl < 9)) {
        if (fl == 5) {
          gra2dSubG2(5);
        }
        else if (fl == 6) {
          gra2dSubG3(6);
        }
      }
      goto LAB_00155014;
    }
    if (fl != 1) {
      if (fl < 2) {
        if (fl == 0) {
          gra2dSubO();
        }
        goto LAB_00155014;
      }
      if (fl == 2) goto LAB_00154fe4;
      if (fl != 3) goto LAB_00155014;
    }
    gra2dSubG0(fl);
  }
LAB_00155014:
  if ((*key_now[13] != 0) && (dbg_wrk.oth_perf != 0)) {
    InitPerformanceCounter();
    return;
  }
  return;
}
