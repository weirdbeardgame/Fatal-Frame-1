// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#162,  not equal)
enum { // 0x8
	T_TITLE_00 = 624042752,
	T_TITLE_01 = -584014588,
	T_TITLE_02 = -584014520,
	T_TITLE_03 = -516872820,
	T_TITLE_04 = -516872688,
	T_TITLE_05 = -584014188,
	T_TITLE_06 = -1657755944,
	T_TITLE_07 = -1657755908,
	T_TITLE_08 = -1657755872,
	T_TITLE_09 = -1657755836,
	T_TITLE_10 = -1657755800,
	T_TITLE_FONT = 624043916,
	T_TAIKEN = -584013424
};

// warning: multiple differing types with the same name (#162,  not equal)
enum {
	TFONT_LOAD = 0,
	TFONT_EASY = 1,
	TFONT_HARD = 2,
	TFONT_GAME1 = 3,
	TFONT_GAME2 = 4,
	TFONT_GAME3 = 5,
	TFONT_START = 6,
	TFONT_ALBUM = 7,
	TFONT_NEW = 8,
	TFONT_OPTION = 9,
	TFONT_NORMAL = 10,
	TFONT_SANKAKU_L = 11,
	TFONT_SANKAKU_R = 12,
	TFONT_KAKKO_L = 13,
	TFONT_KAKKO_R = 14,
	TFONT_NIGHT_MARE = 15,
	TFONT_DIFFICULTY = 16,
	TFONT_PRESS_START_BUTTON = 17,
	TFONT_TAIKEN = 18,
	TFONT_BAN = 19
};

// warning: multiple differing types with the same name (#162,  not equal)
enum {
	TITLE_SUBMODE_LOAD_INIT = 0,
	TITLE_SUBMODE_LOAD_SYSTEM_INIT = 1,
	TITLE_SUBMODE_LOAD_SYSTEM_SYNC = 2,
	TITLE_SUBMODE_LOAD_GAMEDATA_INIT = 3,
	TITLE_SUBMODE_LOAD_GAMEDATA_SYNC = 4,
	TITLE_SUBMODE_LOAD_ALBUM_INIT = 5,
	TITLE_SUBMODE_LOAD_ALBUM_SYNC = 6,
	TITLE_SUBMODE_LOAD_END = 7
};

typedef struct {
	u_short timer;
	u_char mode;
} TTL_DSP_WRK;

struct OUT_DITHER_STR {
	float cnt;
	float alp;
	float spd;
	u_char alpmx;
	u_char colmx;
	u_short type;
};

// warning: multiple differing types with the same name (#162,  not equal)
enum {
	SLCT_STORY_MODE = 0,
	SLCT_BATTLE_MODE = 1,
	SLCT_OPTION = 2,
	SLCT_MAP_DATA_EDIT = 3,
	SLCT_SOUND_TEST = 4,
	SLCT_SCENE_TEST = 5,
	SLCT_MOTION_TEST = 6,
	SLCT_2D_TEST = 7,
	SLCT_ROOM_SIZE_CHECK = 8,
	SLCT_NUM = 9
};

SPRT_DAT title_sprt[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2307144857374827264,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2307154202015606020,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307163547864442184,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307181689873442188,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307199831815300624,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307209177596995220,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307214124325578456,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307219072127903484,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307224019930228512,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307228967732553540,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307233915534878568,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 40960,
		/* .alpha = */ 128
	}
};
SPRT_DAT font_sprt[20] = {
	/* [0] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 206,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 128,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 257,
		/* .y = */ 357,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 256,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 257,
		/* .y = */ 357,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 384,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 196,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 384,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 303,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 384,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 48,
		/* .x = */ 306,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 0,
		/* .v = */ 48,
		/* .w = */ 144,
		/* .h = */ 48,
		/* .x = */ 299,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 144,
		/* .v = */ 48,
		/* .w = */ 144,
		/* .h = */ 48,
		/* .x = */ 244,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 288,
		/* .v = */ 48,
		/* .w = */ 144,
		/* .h = */ 48,
		/* .x = */ 217,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 0,
		/* .v = */ 96,
		/* .w = */ 160,
		/* .h = */ 48,
		/* .x = */ 240,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 160,
		/* .v = */ 96,
		/* .w = */ 160,
		/* .h = */ 48,
		/* .x = */ 241,
		/* .y = */ 357,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [11] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 360,
		/* .v = */ 96,
		/* .w = */ 40,
		/* .h = */ 48,
		/* .x = */ 218,
		/* .y = */ 358,
		/* .pri = */ 36864,
		/* .alpha = */ 128
	},
	/* [12] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 360,
		/* .v = */ 96,
		/* .w = */ 40,
		/* .h = */ 48,
		/* .x = */ 385,
		/* .y = */ 358,
		/* .pri = */ 36864,
		/* .alpha = */ 128
	},
	/* [13] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 320,
		/* .v = */ 96,
		/* .w = */ 40,
		/* .h = */ 48,
		/* .x = */ 234,
		/* .y = */ 358,
		/* .pri = */ 28672,
		/* .alpha = */ 128
	},
	/* [14] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 320,
		/* .v = */ 96,
		/* .w = */ 40,
		/* .h = */ 48,
		/* .x = */ 368,
		/* .y = */ 358,
		/* .pri = */ 28672,
		/* .alpha = */ 128
	},
	/* [15] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 0,
		/* .v = */ 144,
		/* .w = */ 240,
		/* .h = */ 48,
		/* .x = */ 200,
		/* .y = */ 321,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [16] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 240,
		/* .v = */ 144,
		/* .w = */ 240,
		/* .h = */ 48,
		/* .x = */ 200,
		/* .y = */ 287,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [17] = */ {
		/* .tex0 = */ 2307304836316669836,
		/* .u = */ 0,
		/* .v = */ 192,
		/* .w = */ 458,
		/* .h = */ 64,
		/* .x = */ 91,
		/* .y = */ 315,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [18] = */ {
		/* .tex0 = */ 2307314180957448592,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 126,
		/* .h = */ 48,
		/* .x = */ 33,
		/* .y = */ 23,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	},
	/* [19] = */ {
		/* .tex0 = */ 2307314180957448592,
		/* .u = */ 1,
		/* .v = */ 51,
		/* .w = */ 10,
		/* .h = */ 48,
		/* .x = */ 159,
		/* .y = */ 23,
		/* .pri = */ 20480,
		/* .alpha = */ 128
	}
};
int opening_movie_type = 0;
TITLE_WRK title_wrk = {
	/* .load_id = */ 0,
	/* .mode = */ 0,
	/* .sub_mode = */ 0,
	/* .next_mode = */ 0,
	/* .csr = */ 0,
	/* .load_side = */ 0
};
static TTL_DSP_WRK ttl_dsp;
static OUT_DITHER_STR out_dither;

void TitleCtrl() {
	static u_int mc_pnum1;
	static u_int mc_pnum2;
	static u_int mc_atyp1;
	static u_int mc_atyp2;
	static u_int mc_slot1;
	static u_int mc_slot2;
	static u_int mc_file1;
	static u_int mc_file2;
	static int title_cnt = 0;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  short (*pasVar8) [2];
  undefined8 *puVar9;
  undefined8 *puVar10;
  MC_ALBUM_SAVE *pMVar11;
  MC_ALBUM_SAVE *pMVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  sceCdCLOCK sVar15;
  undefined8 uVar16;
  
  switch(title_wrk.mode) {
  case 0:
    memset(&ttl_dsp,0,4);
    title_wrk.load_id = LoadReq(0x103,0xa30000);
    InitOutDither();
    MakeOutDither();
    title_wrk.mode = 1;
    break;
  case 1:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      SeStopAll();
      title_wrk.csr = '\0';
      ttl_dsp.timer = 0;
      title_cnt_128 = 0;
      goto switchD_00212ce0_caseD_3;
    }
    break;
  case 2:
    title_cnt_128 = title_cnt_128 + 1;
    SetSprFile(0xa30000);
    TitleWaitMode();
    DispOutDither();
    if ((0xac7 < title_cnt_128) && (title_wrk.mode != 0x17)) {
      title_wrk.mode = 0x1c;
      EAdpcmFadeOut(0x3c);
    }
    break;
  case 3:
switchD_00212ce0_caseD_3:
    title_wrk.mode = 4;
    EAdpcmFadeOut(0x3c);
  case 4:
    SetSprFile(0xa30000);
    TitleWaitMode();
    DispOutDither();
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x5f8);
      EAdpcmCmdPlay(0,1,0x5f8,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 2;
      ttl_dsp.timer = 0;
    }
    break;
  case 6:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      sys_wrk.load = 1;
      title_wrk.mode = 7;
      title_wrk.sub_mode = '\0';
    }
    break;
  case 7:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x608);
      EAdpcmCmdPlay(0,1,0x608,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 8;
    }
    break;
  case 8:
    if (title_wrk.sub_mode == '\0') {
      mcInit('\x01',(uint *)&DAT_00420000,'\0');
      title_wrk.sub_mode = '\a';
    }
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar5 = McAtLoadChk('\x01');
    if (cVar5 == '\x01') {
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      InitialDmaBuffer();
      if (ingame_wrk.clear_count == 0) {
        EAdpcmFadeOut(0x3c);
        LoadGameInit();
        ingame_wrk.game = 0;
        GameModeChange(0);
      }
      else {
        ModeSlctInit(0,0);
        OutGameModeChange(8);
      }
    }
    else if ('\x01' < cVar5) {
      if (cVar5 != '\x02') {
        bVar1 = (ushort)ttl_dsp.timer < 0x78;
        goto LAB_00213e98;
      }
      EAdpcmFadeOut(0x3c);
      title_wrk.mode = 0x18;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      InitialDmaBuffer();
    }
    break;
  case 9:
    SetSprFile(0xa30000);
    if (ttl_dsp.mode == '\0') {
      SetFTIM2File(0x1e30000);
      TitleSelectMode();
    }
    else {
      TitleSelectModeYW('\0',0x80);
    }
    goto LAB_002131d0;
  case 10:
    TitleSelectDifficultyYW();
    break;
  case 0xb:
    title_wrk.load_id = LoadReq(0x103,0xa30000);
    title_wrk.mode = 0xc;
    break;
  case 0xc:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      SeStopAll();
      title_wrk.csr = '\0';
      title_wrk.mode = 5;
      goto switchD_00212ce0_caseD_18;
    }
    break;
  case 0xd:
    ModeSlctLoop();
    break;
  case 0xe:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      sys_wrk.load = 1;
      mc_file2_127 = 0xff;
      mc_pnum1_120 = 0xff;
      mc_pnum2_121 = 0xff;
      mc_atyp1_122 = 0xff;
      _mc_atyp2_123 = 0xff;
      mc_slot1_124 = 0xff;
      mc_slot2_125 = 0xff;
      mc_file1_126 = 0xff;
      mcInit('\x05',(uint *)&DAT_00420000,'\0');
      title_wrk.mode = 0x19;
    }
    break;
  case 0xf:
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar5 = McAtLoadChk('\x02');
    uVar3 = mc_photo_num;
    uVar2 = mc_album_type;
    if (cVar5 == '\x01') {
      pMVar12 = album_save_dat;
      pMVar11 = &mc_album_save;
      do {
        uVar13 = *(undefined8 *)((int)pMVar11 + 8);
        sVar15 = *(sceCdCLOCK *)((int)pMVar11 + 0x10);
        uVar14 = *(undefined8 *)((int)pMVar11 + 0x18);
        *(undefined8 *)pMVar12 = *(undefined8 *)pMVar11;
        *(undefined8 *)((int)pMVar12 + 8) = uVar13;
        *(sceCdCLOCK *)((int)pMVar12 + 0x10) = sVar15;
        *(undefined8 *)((int)pMVar12 + 0x18) = uVar14;
        pMVar11 = (MC_ALBUM_SAVE *)((int)pMVar11 + 0x20);
        pMVar12 = (MC_ALBUM_SAVE *)((int)pMVar12 + 0x20);
      } while (pMVar11 != album_save_dat);
      mc_pnum1_120 = uVar3;
      puVar10 = (undefined8 *)0xe80000;
      puVar9 = (undefined8 *)0x5a0000;
      mc_file1_126 = mc_ctrl.sel_file + 1;
      mc_atyp1_122 = uVar2;
      mc_slot1_124 = mc_ctrl.port + 1;
      do {
        uVar16 = puVar9[1];
        uVar13 = puVar9[2];
        uVar14 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar16;
        puVar10[2] = uVar13;
        puVar10[3] = uVar14;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar9 != (undefined8 *)0x720000);
      mcInit('\x06',(uint *)&DAT_00420000,'\0');
      title_wrk.mode = 0x10;
    }
    else if ('\x01' < cVar5) {
      if (cVar5 == '\x02') {
LAB_00213728:
        EAdpcmFadeOut(0x3c);
        title_wrk.mode = 0x18;
      }
      else {
        if (cVar5 != '\x03') {
          bVar1 = (ushort)ttl_dsp.timer < 0x78;
          goto LAB_00213e98;
        }
        printf(&DAT_003522b0);
      }
    }
    break;
  case 0x10:
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar5 = McAtLoadChk('\x02');
    uVar3 = mc_photo_num;
    uVar2 = mc_album_type;
    if (cVar5 == '\x01') {
      pMVar11 = &mc_album_save;
      pasVar8 = (short (*) [2])(album_save_dat + 1);
      do {
        uVar13 = *(undefined8 *)((int)pMVar11 + 8);
        sVar15 = *(sceCdCLOCK *)((int)pMVar11 + 0x10);
        uVar14 = *(undefined8 *)((int)pMVar11 + 0x18);
        *(undefined8 *)pasVar8 = *(undefined8 *)pMVar11;
        *(undefined8 *)pasVar8[2] = uVar13;
        *(sceCdCLOCK *)pasVar8[4] = sVar15;
        *(undefined8 *)pasVar8[6] = uVar14;
        pMVar11 = (MC_ALBUM_SAVE *)((int)pMVar11 + 0x20);
        pasVar8 = pasVar8[8];
      } while (pMVar11 != album_save_dat);
      mc_pnum2_121 = uVar3;
      puVar10 = (undefined8 *)0x1000000;
      puVar9 = (undefined8 *)0x5a0000;
      mc_file2_127 = mc_ctrl.sel_file + 1;
      _mc_atyp2_123 = uVar2;
      mc_slot2_125 = mc_ctrl.port + 1;
      do {
        uVar16 = puVar9[1];
        uVar13 = puVar9[2];
        uVar14 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar16;
        puVar10[2] = uVar13;
        puVar10[3] = uVar14;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar9 != (undefined8 *)0x720000);
      MemAlbmInit(1,(byte)mc_pnum1_120,(byte)mc_pnum2_121,(byte)mc_atyp1_122,mc_atyp2_123,
                  (byte)mc_slot1_124,(byte)mc_slot2_125,(byte)mc_file1_126,mc_file2_127 & 0xff);
      title_wrk.load_id = LoadReq(100,0xc80000);
      title_wrk.load_id = LoadReq(0x56,0x1d15600);
      title_wrk.load_id = AlbmDesignLoad('\0',(byte)mc_atyp1_122);
      title_wrk.load_id = AlbmDesignLoad('\x01',mc_atyp2_123);
      title_wrk.mode = 0x11;
    }
    else if ('\x01' < cVar5) {
      if (cVar5 == '\x02') goto LAB_00213728;
      if (cVar5 != '\x03') {
        bVar1 = (ushort)ttl_dsp.timer < 0x78;
        goto LAB_00213e98;
      }
      mc_pnum2_121 = 0;
      _mc_atyp2_123 = 5;
      puVar10 = (undefined8 *)0x1000000;
      mc_slot2_125 = 0;
      puVar9 = (undefined8 *)0x5a0000;
      mc_file2_127 = 0;
      do {
        uVar13 = puVar9[1];
        uVar14 = puVar9[2];
        uVar16 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar13;
        puVar10[2] = uVar14;
        puVar10[3] = uVar16;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar9 != (undefined8 *)0x720000);
      MemAlbmInit(1,(byte)mc_pnum1_120,(byte)mc_pnum2_121,(byte)mc_atyp1_122,mc_atyp2_123,
                  (byte)mc_slot1_124,(byte)mc_slot2_125,(byte)mc_file1_126,mc_file2_127 & 0xff);
      NewAlbumInit(1);
      title_wrk.load_id = LoadReq(100,0xc80000);
      title_wrk.load_id = LoadReq(0x56,0x1d15600);
      title_wrk.load_id = AlbmDesignLoad('\0',(byte)mc_atyp1_122);
      title_wrk.load_id = AlbmDesignLoad('\x01',mc_atyp2_123);
      title_wrk.mode = 0x11;
    }
    break;
  case 0x11:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      title_wrk.mode = 0x12;
    }
    break;
  case 0x12:
    SetSprFile(0xc80000);
    SetSprFile(0x1d15600);
    bVar4 = SweetMemories(1,0x80);
    switch(bVar4) {
    case 1:
      puVar10 = (undefined8 *)0x5a0000;
      puVar9 = (undefined8 *)0xe80000;
      do {
        uVar13 = puVar9[1];
        uVar14 = puVar9[2];
        uVar16 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar13;
        puVar10[2] = uVar14;
        puVar10[3] = uVar16;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar9 != (undefined8 *)0x1000000);
      mcInit('\x02',(uint *)&DAT_00420000,'\0');
      title_wrk.load_side = '\0';
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(99,0x1d28c80);
      title_wrk.mode = 0x13;
      break;
    case 2:
      puVar10 = (undefined8 *)0x5a0000;
      puVar9 = (undefined8 *)0x1000000;
      do {
        uVar13 = puVar9[1];
        uVar14 = puVar9[2];
        uVar16 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar13;
        puVar10[2] = uVar14;
        puVar10[3] = uVar16;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar9 != (undefined8 *)0x1180000);
      mcInit('\x02',(uint *)&DAT_00420000,'\0');
      title_wrk.load_side = '\x01';
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(99,0x1d28c80);
      title_wrk.mode = 0x13;
      break;
    case 3:
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(99,0x1d28c80);
      title_wrk.load_side = '\0';
      goto LAB_00213970;
    case 4:
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(99,0x1d28c80);
      title_wrk.load_side = '\x01';
LAB_00213970:
      mcInit('\x05',(uint *)&DAT_00420000,'\0');
      title_wrk.mode = 0x15;
      break;
    case 5:
      EAdpcmFadeOut(0x3c);
      title_wrk.mode = 0x18;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      title_wrk.csr = '\0';
      InitialDmaBuffer();
    }
    break;
  case 0x13:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      title_wrk.mode = 0x14;
    }
    break;
  case 0x14:
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar5 = McAtAlbmChk();
    if (cVar5 == '\x01') {
      mc_pnum1_120._0_1_ = (byte)mc_photo_num;
      mc_atyp1_122._0_1_ = (byte)mc_album_type;
      if (title_wrk.load_side == '\0') {
        mc_file1_126 = mc_ctrl.sel_file + 1;
        mc_pnum1_120 = mc_photo_num;
        mc_slot1_124 = mc_ctrl.port + 1;
        mc_atyp1_122 = mc_album_type;
        MemAlbmInit2(0,(byte)mc_pnum1_120,(byte)mc_atyp1_122,(byte)mc_slot1_124,(byte)mc_file1_126);
      }
      else {
        mc_file2_127 = mc_ctrl.sel_file + 1;
        mc_pnum2_121 = mc_photo_num;
        mc_slot2_125 = mc_ctrl.port + 1;
        _mc_atyp2_123 = mc_album_type;
        MemAlbmInit2(1,(byte)mc_pnum1_120,(byte)mc_atyp1_122,(byte)mc_slot2_125,(byte)mc_file2_127);
      }
    }
    else {
      if (cVar5 < '\x02') break;
      if (cVar5 != '\x02') {
        bVar1 = (ushort)ttl_dsp.timer < 0x78;
        goto LAB_00213e98;
      }
LAB_00213e44:
      MemAlbmInit3();
    }
    AlbmDesignLoad('\0',(byte)mc_atyp1_122);
    AlbmDesignLoad('\x01',mc_atyp2_123);
    title_wrk.load_id = LoadReq(0x56,0x1d15600);
    title_wrk.mode = 0x11;
    break;
  case 0x15:
    iVar7 = IsLoadEnd(title_wrk.load_id);
    if (iVar7 != 0) {
      title_wrk.mode = 0x16;
    }
    break;
  case 0x16:
    SetSprFile(0x1d59630);
    SetSprFile(0x1d15600);
    SetSprFile(0x1d28c80);
    cVar5 = McAtLoadChk('\x02');
    if (cVar5 == '\x01') {
LAB_00213a34:
      puVar9 = (undefined8 *)0x1000000;
      if (title_wrk.load_side == '\0') {
        puVar10 = (undefined8 *)0xe80000;
        puVar9 = (undefined8 *)0x5a0000;
        do {
          uVar13 = puVar9[1];
          uVar14 = puVar9[2];
          uVar16 = puVar9[3];
          *puVar10 = *puVar9;
          puVar10[1] = uVar13;
          puVar10[2] = uVar14;
          puVar10[3] = uVar16;
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar9 != (undefined8 *)0x720000);
        pMVar12 = album_save_dat;
        pMVar11 = &mc_album_save;
        mc_file1_126 = mc_ctrl.sel_file + 1;
        mc_slot1_124 = mc_ctrl.port + 1;
        mc_pnum1_120 = mc_photo_num;
        mc_atyp1_122 = mc_album_type;
        mc_pnum1_120._0_1_ = (byte)mc_photo_num;
        mc_atyp1_122._0_1_ = (byte)mc_album_type;
        do {
          uVar13 = *(undefined8 *)((int)pMVar11 + 8);
          sVar15 = *(sceCdCLOCK *)((int)pMVar11 + 0x10);
          uVar14 = *(undefined8 *)((int)pMVar11 + 0x18);
          *(undefined8 *)pMVar12 = *(undefined8 *)pMVar11;
          *(undefined8 *)((int)pMVar12 + 8) = uVar13;
          *(sceCdCLOCK *)((int)pMVar12 + 0x10) = sVar15;
          *(undefined8 *)((int)pMVar12 + 0x18) = uVar14;
          pMVar11 = (MC_ALBUM_SAVE *)((int)pMVar11 + 0x20);
          pMVar12 = (MC_ALBUM_SAVE *)((int)pMVar12 + 0x20);
        } while (pMVar11 != album_save_dat);
        MemAlbmInit2(0,(byte)mc_pnum1_120,(byte)mc_atyp1_122,(byte)mc_slot1_124,(byte)mc_file1_126);
      }
      else {
        puVar10 = (undefined8 *)0x5a0000;
        do {
          uVar13 = puVar10[1];
          uVar14 = puVar10[2];
          uVar16 = puVar10[3];
          *puVar9 = *puVar10;
          puVar9[1] = uVar13;
          puVar9[2] = uVar14;
          puVar9[3] = uVar16;
          puVar10 = puVar10 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar10 != (undefined8 *)0x720000);
        pasVar8 = (short (*) [2])(album_save_dat + 1);
        pMVar11 = &mc_album_save;
        mc_file2_127 = mc_ctrl.sel_file + 1;
        mc_slot2_125 = mc_ctrl.port + 1;
        mc_pnum2_121 = mc_photo_num;
        _mc_atyp2_123 = mc_album_type;
        mc_pnum2_121._0_1_ = (byte)mc_photo_num;
        mc_atyp2_123 = (byte)mc_album_type;
        do {
          uVar13 = *(undefined8 *)((int)pMVar11 + 8);
          sVar15 = *(sceCdCLOCK *)((int)pMVar11 + 0x10);
          uVar14 = *(undefined8 *)((int)pMVar11 + 0x18);
          *(undefined8 *)pasVar8 = *(undefined8 *)pMVar11;
          *(undefined8 *)pasVar8[2] = uVar13;
          *(sceCdCLOCK *)pasVar8[4] = sVar15;
          *(undefined8 *)pasVar8[6] = uVar14;
          pMVar11 = (MC_ALBUM_SAVE *)((int)pMVar11 + 0x20);
          pasVar8 = pasVar8[8];
        } while (pMVar11 != album_save_dat);
        MemAlbmInit2(1,(byte)mc_pnum2_121,mc_atyp2_123,(byte)mc_slot2_125,(byte)mc_file2_127);
      }
      title_wrk.load_id = AlbmDesignLoad('\0',(byte)mc_atyp1_122);
      title_wrk.load_id = AlbmDesignLoad('\x01',mc_atyp2_123);
      title_wrk.load_id = LoadReq(0x56,0x1d15600);
      title_wrk.mode = 0x11;
    }
    else if ('\x01' < cVar5) {
      if (cVar5 == '\x02') goto LAB_00213e44;
      if (cVar5 == '\x03') goto LAB_00213a34;
    }
    break;
  case 0x17:
    title_wrk.csr = '\x01';
    title_wrk.mode = 5;
  case 5:
    SetSprFile(0xa30000);
    if (ttl_dsp.mode == '\0') {
      SetFTIM2File(0x1e30000);
      TitleStartSlct();
    }
    else {
      TitleStartSlctYW('\0',0x80);
    }
LAB_002131d0:
    DispOutDither();
    break;
  case 0x18:
switchD_00212ce0_caseD_18:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x5f8);
      EAdpcmCmdPlay(0,1,0x5f8,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 0x17;
    }
    break;
  case 0x19:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x608);
      EAdpcmCmdPlay(0,1,0x608,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 0xf;
    }
    break;
  case 0x1a:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x5f8);
      EAdpcmCmdPlay(0,1,0x5f8,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 0xb;
    }
    break;
  case 0x1b:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      sVar6 = GetAdpcmVol(0x5f8);
      EAdpcmCmdPlay(0,1,0x5f8,0,sVar6,0x280,0xfff,0);
      title_wrk.mode = 9;
    }
    break;
  case 0x1c:
    iVar7 = IsEndAdpcmFadeOut();
    if (iVar7 != 0) {
      title_cnt_128 = 0xb4;
      title_wrk.mode = 0x1d;
    }
    break;
  case 0x1d:
    iVar7 = title_cnt_128 + -1;
    if ((title_cnt_128 == 0) || (title_cnt_128 = iVar7, iVar7 == 0)) {
      if (opening_movie_type == 0) {
        MoviePlay(0x62);
      }
      else {
        MoviePlay(99);
      }
      title_wrk.mode = 0;
      opening_movie_type = (int)(opening_movie_type == 0);
    }
  }
  bVar1 = (ushort)ttl_dsp.timer < 0x78;
LAB_00213e98:
  ttl_dsp.timer = ttl_dsp.timer + 1;
  if (!bVar1) {
    ttl_dsp.timer = 0;
  }
  return;
}

static int AlbmDesignLoad(u_char side, u_char type) {
	u_int addr;
	int load_id;
	
  int iVar1;
  uint in_a2_lo;
  
  if (side == '\0') {
    in_a2_lo = 0x1d88100;
  }
  else if (side == '\x01') {
    in_a2_lo = 0x1dc8570;
  }
  switch(type) {
  case '\0':
    iVar1 = LoadReq(0x5d,in_a2_lo);
    break;
  case '\x01':
    iVar1 = LoadReq(0x5e,in_a2_lo);
    break;
  case '\x02':
    iVar1 = LoadReq(0x5f,in_a2_lo);
    break;
  case '\x03':
    iVar1 = LoadReq(0x60,in_a2_lo);
    break;
  case '\x04':
    iVar1 = LoadReq(0x61,in_a2_lo);
    break;
  case '\x05':
    iVar1 = LoadReq(0x62,in_a2_lo);
    break;
  default:
    iVar1 = -1;
  }
  return iVar1;
}

void TitleWaitMode() {
	int i;
	float alp;
	DISP_SPRT ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT ds;
  
  d = title_sprt;
  iVar1 = 10;
  do {
    CopySprDToSpr(&ds,d);
    d = d + 1;
    iVar1 = iVar1 + -1;
    DispSprD(&ds);
  } while (-1 < iVar1);
  if (title_wrk.mode != 3) {
    fVar2 = SgSinf(((float)((uint)(ushort)ttl_dsp.timer % 0x78) / 120.0) * DAT_00356284);
    CopySprDToSpr(&ds,font_sprt + 0x11);
    ds.alphar = 0x48;
    ds.tex1 = 0x161;
    ds.alpha = (byte)(int)((fVar2 + 1.0) * 64.0);
    DispSprD(&ds);
    ttl_dsp.mode = '\0';
    if ((*key_now[5] == 1) || (*key_now[12] == 1)) {
      ttl_dsp.mode = '\x01';
      title_wrk.mode = 0x17;
      title_wrk.csr = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
  }
  return;
}

void TitleStartSlct() {
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *csr0;
	
  byte bVar1;
  short sVar2;
  ushort uVar3;
  float y;
  
  SetASCIIString(70.0,110.0,"ZERO HOUR");
  y = 230.0;
  SetASCIIString(160.0,190.0,"NEW GAME");
  SetASCIIString(160.0,y,"LOAD GAME");
  SetASCIIString(160.0,270.0,s_ALBUM_003576a8);
  SetASCIIString(y,350.0,s_MISSION_003576b0);
  SetInteger2(0,350.0,350.0,0,0x80,0x80,0x80,(uint)ingame_wrk.msn_no);
  SetASCIIString(120.0,(float)((uint)title_wrk.csr * 0x28 + 0xbe),&DAT_003576b8);
  if ((*key_now[3] == 1) ||
     ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
       (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) ||
      ((uVar3 = Ana2PadDirCnt('\x01'), 0x19 < uVar3 &&
       (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 == 1)))))) {
    bVar1 = ingame_wrk.msn_no + 1;
  }
  else if (((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            ((sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1 &&
             ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
              (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))))) ||
          (bVar1 = ingame_wrk.msn_no - 1, ingame_wrk.msn_no == 0)) goto LAB_00214364;
  ingame_wrk.msn_no = bVar1;
LAB_00214364:
  if ((*key_now[5] == 1) || (*key_now[12] == 1)) {
    if (title_wrk.csr == '\0') {
      NewGameInit();
      title_wrk.csr = '\0';
      title_wrk.mode = 9;
    }
    else {
      title_wrk.load_id = LoadReq(0x4c,0x1d05140);
      title_wrk.load_id = LoadReq(0x46,0x1ce0000);
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(0x68,0x1d28c80);
      title_wrk.mode = 6;
      EAdpcmFadeOut(0x3c);
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    return;
  }
  if (*key_now[4] == 1) {
    title_wrk.mode = 2;
    ttl_dsp.timer = 0;
    SeStartFix(3,0,0x1000,0x1000,0);
    return;
  }
  if (((*key_now[0] != 1) &&
      ((((ushort)*key_now[0] < 0x1a || ((uint)(ushort)*key_now[0] % 5 != 1)) &&
       (sVar2 = Ana2PadDirCnt('\0'), sVar2 != 1)))) &&
     ((uVar3 = Ana2PadDirCnt('\0'), uVar3 < 0x1a ||
      (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 != 1)))) {
    if ((*key_now[1] != 1) &&
       ((((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)) &&
        ((sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1 &&
         ((uVar3 = Ana2PadDirCnt('\x02'), uVar3 < 0x1a ||
          (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 != 1)))))))) {
      return;
    }
    title_wrk.csr = '\x01';
    SeStartFix(0,0,0x1000,0x1000,0);
    return;
  }
  title_wrk.csr = '\0';
  SeStartFix(0,0,0x1000,0x1000,0);
  return;
}

void TitleStartSlctYW(u_char pad_off, u_char alp_max) {
	int i;
	u_char mode;
	u_char adj;
	u_char dsp;
	u_char chr1;
	u_char chr2;
	u_char alp;
	u_char rgb;
	DISP_SPRT ds;
	
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  SPRT_DAT *d;
  long unaff_s3;
  long unaff_s5;
  int unaff_s6_lo;
  int unaff_s8_lo;
  DISP_SPRT ds;
  
  d = title_sprt;
  iVar7 = 10;
  do {
    CopySprDToSpr(&ds,d);
    d = d + 1;
    ds.alpha = (byte)((int)(char)alp_max & 0xffU);
    DispSprD(&ds);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  bVar4 = 0;
  do {
    if (bVar4 != 1) {
      if (bVar4 < 2) {
        if (bVar4 == 0) {
          unaff_s6_lo = 8;
          unaff_s5 = 4;
          if (title_wrk.csr == '\x01') {
LAB_00214798:
            unaff_s8_lo = 0;
            unaff_s3 = 0;
            goto LAB_00214858;
          }
          if (title_wrk.csr < 2) {
            if (title_wrk.csr == '\0') {
              unaff_s8_lo = 0;
              goto LAB_00214854;
            }
            iVar7 = 0x100;
          }
          else {
            if (title_wrk.csr == '\x02') goto LAB_00214798;
            iVar7 = 0x100;
          }
        }
        else {
          iVar7 = unaff_s6_lo << 5;
        }
      }
      else if (bVar4 == 2) {
        unaff_s6_lo = 7;
        unaff_s5 = 0xff;
        if (title_wrk.csr == '\x01') {
LAB_00214844:
          unaff_s8_lo = 0x46;
          unaff_s3 = 0;
          goto LAB_00214858;
        }
        if (title_wrk.csr < 2) {
          if (title_wrk.csr == '\0') goto LAB_00214844;
          iVar7 = 0xe0;
        }
        else {
          if (title_wrk.csr == '\x02') {
            unaff_s8_lo = 0x46;
            goto LAB_00214854;
          }
          iVar7 = 0xe0;
        }
      }
      else {
        iVar7 = unaff_s6_lo << 5;
      }
      goto LAB_00214860;
    }
    unaff_s6_lo = 0;
    unaff_s5 = 5;
    if (title_wrk.csr == '\x01') {
      unaff_s8_lo = 0x23;
LAB_00214854:
      unaff_s3 = 1;
LAB_00214858:
      iVar7 = unaff_s6_lo << 5;
    }
    else if (title_wrk.csr < 2) {
      if (title_wrk.csr == '\0') {
LAB_002147f0:
        unaff_s8_lo = 0x23;
        unaff_s3 = 0;
        goto LAB_00214858;
      }
      iVar7 = 0;
    }
    else {
      if (title_wrk.csr == '\x02') goto LAB_002147f0;
      iVar7 = 0;
    }
LAB_00214860:
    CopySprDToSpr(&ds,(SPRT_DAT *)((int)&font_sprt[0].tex0 + iVar7));
    cVar3 = (char)(((int)(char)alp_max & 0xffU) >> 1);
    ds.y = ds.y + (float)unaff_s8_lo;
    bVar2 = (char)unaff_s3 * cVar3 + cVar3;
    if (unaff_s3 != 0) {
      ds.alphar = 0x48;
    }
    ds.tex1 = 0x161;
    ds.r = bVar2;
    ds.g = bVar2;
    ds.b = bVar2;
    ds.alpha = bVar2;
    DispSprD(&ds);
    if (unaff_s5 != 0xff) {
      CopySprDToSpr(&ds,font_sprt + (int)unaff_s5);
      ds.y = ds.y + (float)unaff_s8_lo;
      if (unaff_s3 != 0) {
        ds.alphar = 0x48;
      }
      ds.tex1 = 0x161;
      ds.r = bVar2;
      ds.g = bVar2;
      ds.b = bVar2;
      ds.alpha = bVar2;
      DispSprD(&ds);
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 3);
  if (pad_off != '\0') {
    return;
  }
  if ((*key_now[5] == 1) || (*key_now[12] == 1)) {
    cribo.costume = '\0';
    cribo.clear_info = '\0';
    ingame_wrk.clear_count = 0;
    ingame_wrk.ghost_cnt = 0;
    ingame_wrk.rg_pht_cnt = 0;
    ingame_wrk.pht_cnt = 0;
    ingame_wrk.high_score = 0;
    ingame_wrk.difficult = 0;
    NewgameMenuAlbumInit();
    realtime_scene_flg = 0;
    MovieInitWrk();
    motInitMsn();
    if (title_wrk.csr == '\x01') {
      title_wrk.load_id = LoadReq(0x4c,0x1d05140);
      title_wrk.load_id = LoadReq(0x46,0x1ce0000);
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(0x68,0x1d28c80);
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      InitialDmaBuffer();
      title_wrk.mode = 6;
    }
    else {
      if (title_wrk.csr < 2) {
        if (title_wrk.csr != '\0') {
          return;
        }
        NewGameInit();
        title_wrk.csr = '\0';
        title_wrk.mode = 9;
        iVar7 = 1;
        goto LAB_00214bcc;
      }
      if (title_wrk.csr != '\x02') {
        return;
      }
      title_wrk.load_id = LoadReq(0x4c,0x1d05140);
      title_wrk.load_id = LoadReq(0x46,0x1ce0000);
      title_wrk.load_id = LoadReq(0x48,0x1d59630);
      title_wrk.load_id = LoadReq(0x47,0x1d15600);
      title_wrk.load_id = LoadReq(99,0x1d28c80);
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      InitialDmaBuffer();
      title_wrk.mode = 0xe;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    EAdpcmFadeOut(0x3c);
  }
  else {
    if (*key_now[4] == 1) {
      title_wrk.mode = 2;
      iVar7 = 3;
      ttl_dsp.timer = 0;
    }
    else {
      if ((*key_now[1] != 1) &&
         (((((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)) &&
           (sVar5 = Ana2PadDirCnt('\x02'), sVar5 != 1)) &&
          ((uVar6 = Ana2PadDirCnt('\x02'), uVar6 < 0x1a ||
           (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 != 1)))))) {
        if ((*key_now[0] != 1) &&
           ((((ushort)*key_now[0] < 0x1a || ((uint)(ushort)*key_now[0] % 5 != 1)) &&
            (sVar5 = Ana2PadDirCnt('\0'), sVar5 != 1)))) {
          uVar6 = Ana2PadDirCnt('\0');
          if (uVar6 < 0x1a) {
            return;
          }
          sVar5 = Ana2PadDirCnt('\0');
          if ((int)sVar5 % 5 != 1) {
            return;
          }
        }
        bVar1 = title_wrk.csr == '\0';
        title_wrk.csr = title_wrk.csr + 0xff;
        if (bVar1) {
          title_wrk.csr = '\x02';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
        return;
      }
      bVar1 = 1 < title_wrk.csr;
      title_wrk.csr = title_wrk.csr + '\x01';
      if (bVar1) {
        title_wrk.csr = '\0';
      }
      iVar7 = 0;
    }
LAB_00214bcc:
    SeStartFix(iVar7,0,0x1000,0x1000,0);
  }
  return;
}

void TitleLoadCtrl() {
  return;
}

void TitleSelectMode() {
	int i;
	char *mode_str[9];
	char *csr0;
	
  bool bVar1;
  char *str;
  uint uVar2;
  ulong *puVar3;
  short sVar4;
  ushort uVar5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  float y;
  char *mode_str [9];
  
  ppcVar6 = mode_str;
  iVar8 = 0x1e;
  iVar7 = 8;
  uVar2 = (int)mode_str + 7U & 7;
  puVar3 = (ulong *)(((int)mode_str + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_s_STORY_MODE_00352438 >> (7 - uVar2) * 8;
  mode_str._0_8_ = _PTR_s_STORY_MODE_00352438;
  uVar2 = (int)mode_str + 0xfU & 7;
  puVar3 = (ulong *)(((int)mode_str + 0xfU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_s_OPTION_00352440 >> (7 - uVar2) * 8;
  mode_str._8_8_ = _PTR_s_OPTION_00352440;
  uVar2 = (int)mode_str + 0x17U & 7;
  puVar3 = (ulong *)(((int)mode_str + 0x17U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_s_SOUND_TEST_00352448 >> (7 - uVar2) * 8;
  mode_str._16_8_ = _PTR_s_SOUND_TEST_00352448;
  uVar2 = (int)mode_str + 0x1fU & 7;
  puVar3 = (ulong *)(((int)mode_str + 0x1fU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _PTR_s_MOTION_TEST_00352450 >> (7 - uVar2) * 8;
  mode_str._24_8_ = _PTR_s_MOTION_TEST_00352450;
  mode_str[8] = PTR_s_LAYOUT_TEST_00352458;
  do {
    y = (float)iVar8;
    str = *ppcVar6;
    ppcVar6 = ppcVar6 + 1;
    iVar8 = iVar8 + 0x28;
    iVar7 = iVar7 + -1;
    SetASCIIString(110.0,y,str);
  } while (-1 < iVar7);
  SetASCIIString(30.0,(float)((uint)title_wrk.csr * 0x28 + 0x1e),&DAT_003576b8);
  if ((*key_now[0] == 1) ||
     ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
       (sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1)) ||
      ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
       (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
    bVar1 = title_wrk.csr == '\0';
    title_wrk.csr = title_wrk.csr + 0xff;
    if (bVar1) {
      title_wrk.csr = '\b';
    }
    iVar7 = 0;
  }
  else if ((((*key_now[1] == 1) ||
            ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
           (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
          ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
           (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
    bVar1 = 7 < title_wrk.csr;
    title_wrk.csr = title_wrk.csr + '\x01';
    if (bVar1) {
      title_wrk.csr = '\0';
    }
    iVar7 = 0;
  }
  else {
    if (*key_now[4] != 1) {
      if (*key_now[5] != 1) {
        return;
      }
      switch(title_wrk.csr) {
      case '\0':
        ingame_wrk.game = 0;
        GameModeChange(0);
        break;
      case '\x01':
        OutGameModeChange(6);
        break;
      case '\x02':
        OutGameModeChange(7);
        break;
      case '\x05':
        OutGameModeChange(0xb);
        break;
      case '\x06':
        OutGameModeChange(0xc);
        break;
      case '\a':
        OutGameModeChange(0xe);
      }
      SeStartFix(1,0,0x1000,0x1000,0);
      return;
    }
    title_wrk.mode = 3;
    iVar7 = 3;
  }
  SeStartFix(iVar7,0,0x1000,0x1000,0);
  return;
}

void TitleSelectModeYW(u_char pad_off, u_char alp_max) {
	int i;
	u_char mode;
	u_char adj;
	u_char dsp;
	u_char chr1;
	u_char chr2;
	u_char alp;
	u_char rgb;
	DISP_SPRT ds;
	
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  SPRT_DAT *d;
  long unaff_s3;
  long unaff_s5;
  DISP_SPRT ds;
  uchar adj;
  uchar chr1;
  
  d = title_sprt;
  iVar7 = 10;
  do {
    CopySprDToSpr(&ds,d);
    d = d + 1;
    ds.alpha = (byte)((int)(char)alp_max & 0xffU);
    DispSprD(&ds);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  bVar4 = 0;
  do {
    if (bVar4 == 0) {
      _chr1 = 3;
      unaff_s5 = 6;
      if (title_wrk.csr == '\x01') {
        unaff_s3 = 0;
        _adj = 0x11;
      }
      else if (title_wrk.csr < 2) {
        if (title_wrk.csr == '\0') {
          _adj = 0x11;
          unaff_s3 = 1;
        }
      }
      else if (title_wrk.csr == '\x02') {
        _adj = 0x11;
LAB_00215184:
        unaff_s3 = 0;
      }
    }
    else if (bVar4 == 1) {
      unaff_s5 = 0xff;
      _chr1 = 9;
      if (title_wrk.csr == '\x01') {
        unaff_s3 = 1;
        _adj = 0x34;
      }
      else if (title_wrk.csr < 2) {
        if (title_wrk.csr == '\0') {
LAB_00215180:
          _adj = 0x34;
          goto LAB_00215184;
        }
      }
      else if (title_wrk.csr == '\x02') goto LAB_00215180;
    }
    CopySprDToSpr(&ds,font_sprt + _chr1);
    cVar3 = (char)(((int)(char)alp_max & 0xffU) >> 1);
    ds.y = ds.y + (float)_adj;
    bVar2 = (char)unaff_s3 * cVar3 + cVar3;
    if (unaff_s3 != 0) {
      ds.alphar = 0x48;
    }
    ds.tex1 = 0x161;
    ds.r = bVar2;
    ds.g = bVar2;
    ds.b = bVar2;
    ds.alpha = bVar2;
    DispSprD(&ds);
    if (unaff_s5 != 0xff) {
      CopySprDToSpr(&ds,font_sprt + (int)unaff_s5);
      ds.y = ds.y + (float)_adj;
      if (unaff_s3 != 0) {
        ds.alphar = 0x48;
      }
      ds.tex1 = 0x161;
      ds.r = bVar2;
      ds.g = bVar2;
      ds.b = bVar2;
      ds.alpha = bVar2;
      DispSprD(&ds);
    }
    bVar4 = bVar4 + 1;
    if (1 < bVar4) {
      if (pad_off == '\0') {
        if ((*key_now[5] == 1) || (*key_now[12] == 1)) {
          if (title_wrk.csr == '\0') {
            EAdpcmFadeOut(0x3c);
            SeStartFix(1,0,0x1000,0x1000,0);
            ingame_wrk.game = 0;
            GameModeChange(0);
          }
          else if (title_wrk.csr == '\x01') {
            SeStartFix(1,0,0x1000,0x1000,0);
            ModeSlctInit(3,5);
            title_wrk.mode = 0x1b;
            OutGameModeChange(8);
            EAdpcmFadeOut(0x3c);
          }
        }
        else {
          if (*key_now[4] == 1) {
            title_wrk.mode = 0x17;
            iVar7 = 3;
          }
          else {
            if ((*key_now[1] != 1) &&
               (((((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)) &&
                 (sVar5 = Ana2PadDirCnt('\x02'), sVar5 != 1)) &&
                ((uVar6 = Ana2PadDirCnt('\x02'), uVar6 < 0x1a ||
                 (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 != 1)))))) {
              if ((*key_now[0] != 1) &&
                 ((((ushort)*key_now[0] < 0x1a || ((uint)(ushort)*key_now[0] % 5 != 1)) &&
                  (sVar5 = Ana2PadDirCnt('\0'), sVar5 != 1)))) {
                uVar6 = Ana2PadDirCnt('\0');
                if (uVar6 < 0x1a) {
                  return;
                }
                sVar5 = Ana2PadDirCnt('\0');
                if ((int)sVar5 % 5 != 1) {
                  return;
                }
              }
              bVar1 = title_wrk.csr == '\0';
              title_wrk.csr = title_wrk.csr + 0xff;
              if (bVar1) {
                title_wrk.csr = '\x01';
              }
              SeStartFix(0,0,0x1000,0x1000,0);
              return;
            }
            title_wrk.csr = title_wrk.csr == '\0';
            iVar7 = 0;
          }
          SeStartFix(iVar7,0,0x1000,0x1000,0);
        }
      }
      return;
    }
  } while( true );
}

void TitleSelectDifficultyYW() {
	int i;
	u_char chr;
	float alp;
	DISP_SPRT ds;
	
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  SPRT_DAT *d;
  float fVar6;
  DISP_SPRT ds;
  
  d = title_sprt;
  iVar4 = 10;
  do {
    CopySprDToSpr(&ds,d);
    d = d + 1;
    iVar4 = iVar4 + -1;
    DispSprD(&ds);
  } while (-1 < iVar4);
  uVar5 = 0xb;
  CopySprDToSpr(&ds,font_sprt + 0x10);
  ds.b = 0x40;
  ds.y = ds.y + 35.0;
  ds.tex1 = 0x161;
  ds.alpha = 0x40;
  ds.r = 0x40;
  ds.g = 0x40;
  DispSprD(&ds);
  fVar6 = SgSinf(((float)((uint)(ushort)ttl_dsp.timer % 0x78) / 120.0) * DAT_00356288);
  iVar4 = 0x160;
  do {
    CopySprDToSpr(&ds,(SPRT_DAT *)((int)&font_sprt[0].tex0 + iVar4));
    ds.alpha = (byte)(int)((fVar6 + 1.0) * 64.0);
    if ((uVar5 == 0xc) || (uVar5 == 0xe)) {
      ds.att = ds.att | 2;
    }
    ds.alphar = 0x48;
    ds.tex1 = 0x161;
    DispSprD(&ds);
    uVar5 = uVar5 + 1 & 0xff;
    iVar4 = uVar5 << 5;
  } while (uVar5 < 0xf);
  if (title_wrk.csr == '\x01') {
    iVar4 = 10;
  }
  else if (title_wrk.csr < 2) {
    if (title_wrk.csr != '\0') {
      iVar4 = uVar5 << 5;
      goto LAB_002156b8;
    }
    iVar4 = 1;
  }
  else {
    if (title_wrk.csr != '\x02') {
      iVar4 = uVar5 << 5;
      goto LAB_002156b8;
    }
    iVar4 = 2;
  }
  iVar4 = iVar4 << 5;
LAB_002156b8:
  CopySprDToSpr(&ds,(SPRT_DAT *)((int)&font_sprt[0].tex0 + iVar4));
  ds.alphar = 0x48;
  ds.tex1 = 0x161;
  DispSprD(&ds);
  if ((*key_now[5] == 1) || (*key_now[12] == 1)) {
    title_wrk.mode = 9;
    iVar4 = 1;
  }
  else if (*key_now[4] == 1) {
    title_wrk.mode = 9;
    iVar4 = 3;
  }
  else {
    if ((*key_now[3] != 1) &&
       (((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
         (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) &&
        ((uVar3 = Ana2PadDirCnt('\x01'), uVar3 < 0x1a ||
         (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 != 1)))))) {
      if ((*key_now[2] != 1) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) {
        uVar3 = Ana2PadDirCnt('\x03');
        if (uVar3 < 0x1a) {
          return;
        }
        sVar2 = Ana2PadDirCnt('\x03');
        if ((int)sVar2 % 5 != 1) {
          return;
        }
      }
      bVar1 = title_wrk.csr == '\0';
      title_wrk.csr = title_wrk.csr + 0xff;
      if (bVar1) {
        title_wrk.csr = '\x02';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      return;
    }
    bVar1 = 1 < title_wrk.csr;
    title_wrk.csr = title_wrk.csr + '\x01';
    if (bVar1) {
      title_wrk.csr = '\0';
    }
    iVar4 = 0;
  }
  SeStartFix(iVar4,0,0x1000,0x1000,0);
  return;
}

void NewGameInit() {
  if (ttl_dsp.mode != '\0') {
    ingame_wrk.msn_no = 0;
  }
  sys_wrk.load = 0;
  title_wrk.csr = '\0';
  cribo.costume = '\0';
  cribo.clear_info = '\0';
  mc_msn_flg = '\0';
  NewgameMenuRankInit();
  CameraCustomNewgameInit();
  NewgameMenuGlstInit();
  ClearStageWrk();
  return;
}

void LoadGameInit() {
  cribo.clear_info = cribo.clear_info & 4;
  sys_wrk.load = 1;
  ingame_wrk.mode = 6;
  title_wrk.csr = '\0';
  cribo.costume = '\0';
  LoadgameMenuRankInit();
  return;
}

void InitOutDither() {
  out_dither.cnt = 0.0;
  out_dither.spd = 8.0;
  out_dither.type = 7;
  out_dither.alp = 64.0;
  out_dither.colmx = '@';
  out_dither.alpmx = '@';
  return;
}

void MakeOutDither() {
	u_char pat[16384];
	u_int pal[256];
	int i;
	float r;
	float r;
	static sceGsLoadImage gs_limage1;
	static sceGsLoadImage gs_limage2;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined in_vf0 [16];
  undefined auVar7 [16];
  undefined4 in_vuR;
  uchar pat [16384];
  uint pal [256];
  
  iVar1 = rand();
  SetVURand((float)iVar1 * 4.656613e-10);
  iVar1 = 0;
  do {
                    /* inlined from ../graphics/graph2d/effect.h */
    auVar7 = _vrnext(in_vuR);
    auVar7 = _vsubbc(auVar7,in_vf0);
    auVar7 = _qmfc2(SUB164(auVar7,0));
                    /* end of inlined section */
    puVar4 = pat + iVar1;
    iVar1 = iVar1 + 1;
    *puVar4 = (uchar)(int)((float)(uint)out_dither.alpmx * SUB164(auVar7,0));
  } while (iVar1 < 0x4000);
  iVar1 = 0;
  uVar2 = (uint)out_dither.colmx;
  puVar6 = pal;
  do {
                    /* inlined from ../graphics/graph2d/effect.h */
    auVar7 = _vrnext(in_vuR);
    auVar7 = _vsubbc(auVar7,in_vf0);
    auVar7 = _qmfc2(SUB164(auVar7,0));
                    /* end of inlined section */
    uVar5 = iVar1 << 0x18;
    iVar1 = iVar1 + 1;
    uVar3 = (int)((float)uVar2 * SUB164(auVar7,0)) & 0xff;
    *puVar6 = uVar5 | uVar3 | uVar3 << 8 | uVar3 << 0x10;
    puVar6 = puVar6 + 1;
  } while (iVar1 < 0x100);
  sceGsSetDefLoadImage(0x402d80,0x37fc,2,0x13,0,0,0x80,0x80);
  sceGsSetDefLoadImage(0x402de0,0x383c,1,0,0,0,0x10,0x20);
  FlushCache(0);
  sceGsExecLoadImage(0x402d80,pat);
  sceGsExecLoadImage(0x402de0,pal);
  sceGsSyncPath(0,0);
  return;
}

void DispOutDither() {
	SPRITE_DATA sd2;
	DRAW_ENV de2;
	
  undefined8 *puVar1;
  SPRITE_DATA *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  SPRITE_DATA sd2;
  DRAW_ENV de2;
  
  fVar7 = DAT_0035628c;
  pSVar2 = &sd2;
  puVar1 = &DAT_00352480;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    pSVar2->g_GsTex0 = *puVar1;
    *(undefined8 *)((int)pSVar2 + 8) = uVar3;
    *(undefined8 *)((int)pSVar2 + 0x10) = uVar4;
    *(undefined8 *)((int)pSVar2 + 0x18) = uVar5;
    puVar1 = puVar1 + 4;
    pSVar2 = (SPRITE_DATA *)((int)pSVar2 + 0x20);
  } while (puVar1 != &DAT_003524e0);
  de2.tex1 = DAT_003524e0;
  de2.alpha = DAT_003524e8;
  de2.zbuf = DAT_003524f0;
  de2.test = DAT_003524f8;
  de2.clamp = DAT_00352500;
  de2.prim = DAT_00352508;
  switch(out_dither.type) {
  case 1:
    de2.alpha = 0x44;
    break;
  case 2:
    de2.alpha = 0x48;
    break;
  case 3:
    de2.alpha = 0x41;
    break;
  case 4:
    sd2.b = 0x80;
    de2.alpha = 0x41;
    sd2.r = 0x80;
    sd2.g = '\0';
    break;
  case 5:
    sd2.g = 0x80;
    de2.alpha = 0x41;
    sd2.r = 0x80;
    sd2.b = '\0';
    break;
  case 6:
    de2.alpha = 0x49;
    break;
  case 7:
    de2.alpha = 0x42;
  }
  fVar8 = 180.0;
  sd2.clamp_u = 0x28000000;
  sd2.clamp_v = 0x20000000;
  fVar6 = SgSinf((out_dither.cnt * DAT_0035628c) / 180.0);
  sd2.alpha = (uchar)(int)((fVar6 + 1.0) * out_dither.alp);
  SetTexDirectS2(-2,&sd2,&de2,0);
  sd2.clamp_v = 0x20000000;
  sd2.clamp_u = 0x2c000400;
  fVar6 = SgSinf(((out_dither.cnt + 120.0) * fVar7) / fVar8);
  sd2.alpha = (uchar)(int)((fVar6 + 1.0) * out_dither.alp);
  SetTexDirectS2(-2,&sd2,&de2,0);
  sd2.clamp_u = 0x28000000;
  sd2.clamp_v = 0x24000400;
  fVar7 = SgSinf(((out_dither.cnt + 240.0) * fVar7) / fVar8);
  sd2.alpha = (uchar)(int)((fVar7 + 1.0) * out_dither.alp);
  SetTexDirectS2(-2,&sd2,&de2,0);
  out_dither.spd = 8.0;
  out_dither.cnt = out_dither.cnt + 8.0;
  return;
}
