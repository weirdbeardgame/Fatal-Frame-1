// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#2,  not equal)
enum { // 0x8
	T_B_MODE_01 = 624041600,
	T_B_MODE_02 = -584015740,
	T_B_MODE_03 = -584015672,
	T_B_MODE_04 = -516873972,
	T_B_MODE_05 = -516873840,
	T_B_MODE_06 = -584015340,
	T_B_MODE_07 = -1657757096,
	T_B_MODE_08 = -1657757060,
	T_B_MODE_09 = -1657757024,
	T_B_MODE_10 = -1657756988,
	T_B_MODE_11 = -1657756952,
	T_FONT_B_MODE = 1697784588,
	T_BM_COSPLAY = -1656707312,
	T_FONT_B_STRT = 1697783424,
	T_FONT_B_RSLT = 1697784452,
	T_FONT_N_SLCT = -449697984,
	T_CHECK = 1496361028,
	T_SYO_CURSOR = 1430300752,
	T_FILMZ = 1697782336,
	T_FUSUMA_01 = 624041600,
	T_FUSUMA_02 = -584015740,
	T_FUSUMA_03 = -584015672,
	T_FUSUMA_04 = -516873972,
	T_FUSUMA_05 = -516873840,
	T_FUSUMA_06 = -584015340,
	T_FUSUMA_07 = -1657757096,
	T_FUSUMA_08 = -1657757060,
	T_FUSUMA_09 = -1657757024,
	T_FUSUMA_10 = -1657756988,
	T_FUSUMA_11 = -1657756952,
	T_FONT_M_SLCT = 624042764,
	T_OPT_BG_01 = 624041600,
	T_OPT_BG_02 = -584015740,
	T_OPT_BG_03 = -584015672,
	T_OPT_BG_04 = -516873972,
	T_OPT_BG_05 = -516873840,
	T_OPT_BG_06 = -584015340,
	T_OPT_BG_07 = -1657757096,
	T_OPT_BG_08 = -1657757060,
	T_OPT_BG_09 = -1657757024,
	T_OPT_BG_10 = -1657756988,
	T_OPT_BG_11 = -1657756952,
	T_ST_BK_01 = 624041600,
	T_ST_BK_02 = -584015740,
	T_ST_BK_03 = -584015672,
	T_ST_BK_04 = -516873972,
	T_ST_BK_05 = -516873840,
	T_ST_BK_06 = -584015340,
	T_ST_BK_07 = -1657757096,
	T_ST_BK_08 = -1657757060,
	T_ST_BK_09 = -1657757024,
	T_ST_BK_10 = -1657756988,
	T_ST_BK_11 = -1657756952,
	T_ST_COM = -1657756916,
	T_ST_FLR = -584015056,
	T_ST_NUM = -1657756812,
	T_ST_ARROW = -1724865640,
	T_S_MODE_01 = 624041600,
	T_S_MODE_02 = -584015740,
	T_S_MODE_03 = -584015672,
	T_S_MODE_04 = -516873972,
	T_S_MODE_05 = -516873840,
	T_S_MODE_06 = -584015340,
	T_S_MODE_07 = -1657757096,
	T_S_MODE_08 = -1657757060,
	T_S_MODE_09 = -1657757024,
	T_S_MODE_10 = -1657756988,
	T_S_MODE_11 = -1657756952,
	T_SM_COSPLAY = -1656708340,
	T_FONT_S_MODE = 1697784605,
	T_FONT_S_MODE2 = 624043809,
	T_FONT_S_RSLT = 1697786149
};

// warning: multiple differing types with the same name (#2,  not equal)
enum {
	MS_MODE_START = 0,
	MS_MODE_INIT = 1,
	MS_MODE_FADE_INN = 2,
	MS_MODE_FILM_INN = 3,
	MS_MODE_LOOP = 4,
	MS_MODE_FILM_OUT = 5,
	MS_MODE_FADE_OUT = 6,
	MS_MODE_END = 7
};

// warning: multiple differing types with the same name (#2,  not equal)
enum {
	MS_MODE_SLCT = 0,
	MS_STORY_MODE = 1,
	MS_BATTLE_MODE = 2,
	MS_OPTION = 3,
	MS_SOUND_TEST = 4,
	MS_EXIT = 5,
	MS_MODE_NUM = 6,
	MS_MISSION_SELECT = 7,
	MS_CAMERA = 8,
	MS_PHOT = 9,
	MS_SAVE = 10,
	MS_BREAK = 11,
	MS_STORY_EXIT = 12
};

// warning: multiple differing types with the same name (#2,  not equal)
enum {
	SM_CHAPTER = 0,
	SM_DIFFCULTY = 1,
	SM_COSTUME = 2,
	SM_GAME_START = 3,
	SM_EXIT = 4,
	SM_CSR_NUM = 5
};

// warning: multiple differing types with the same name (#2,  not equal)
enum {
	BM_COSTUME = 0,
	BM_CAMERA = 1,
	BM_PHOT = 2,
	BM_SAVE = 3,
	BM_MISSION = 4,
	BM_EXIT = 5,
	BM_CSR_NUM = 6
};

// warning: multiple differing types with the same name (#2,  not equal)
enum {
	CS_NORMAL = 0,
	CS_SPECIAL1 = 1,
	CS_SPECIAL2 = 2,
	CS_SPECIAL3 = 3
};

typedef struct {
	u_long mode_tmr;
	u_char main_step;
	u_char mode_step;
	u_char chr_alp;
	u_char bak_alp;
	u_char win_alp;
	u_char flm_alp;
	u_char flm_lng;
	u_char pre_mode;
	u_char now_mode;
	u_char next_mode;
	u_char end_mode;
	u_char side;
	u_char opt_mode;
	u_char csr[3];
	u_char sm_slct[3];
	u_char bm_slct[2];
	u_char unsel_col[4];
} DSP_M_SLCT_WRK;

SPRT_DAT msl_bg_btl[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306986527700426368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306995872341205124,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307005218190041288,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307023360199041292,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307041502140899728,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307050847922594324,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307055794651177560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307060742453502588,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307065690255827616,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307070638058152644,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307075585860477672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	}
};
SPRT_DAT msl_bg_fsm[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306986527700426368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306995872341205124,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307005218190041288,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307023360199041292,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307041502140899728,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307050847922594324,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307055794651177560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307060742453502588,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307065690255827616,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307070638058152644,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307075585860477672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	}
};
SPRT_DAT msl_bg_opt[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306986527700426368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306995872341205124,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307005218190041288,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307023360199041292,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307041502140899728,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307050847922594324,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307055794651177560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307060742453502588,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307065690255827616,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307070638058152644,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307075585860477672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	}
};
SPRT_DAT msl_bg_snd[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306986527700426368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306995872341205124,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307005218190041288,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307023360199041292,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307041502140899728,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307050847922594324,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307055794651177560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307060742453502588,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307065690255827616,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307070638058152644,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307075585860477672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	}
};
SPRT_DAT msl_bg_sty[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306986527700426368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306995872341205124,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2307005218190041288,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2307023360199041292,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2307041502140899728,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2307050847922594324,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2307055794651177560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2307060742453502588,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2307065690255827616,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2307070638058152644,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2307075585860477672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 520192,
		/* .alpha = */ 128
	}
};
SPRT_DAT msel_sprt[0] = {
};
static u_char sm_csr_info[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};
int cmn_tex_load = 0;
int title_bgm_no = -1;
CLEAR_BONUS cribo = {
	/* .costume = */ 0,
	/* .clear_info = */ 0
};
static DSP_M_SLCT_WRK dsp_ms;
static int ms_load_id;

void ModeSlctInit(u_char top, u_char end) {
  ms_load_id = LoadReq(0x107,0xc80000);
  memset(&dsp_ms,0,0x28);
  dsp_ms.now_mode = top;
  dsp_ms.end_mode = end;
  dsp_ms.unsel_col[3] = 0x80;
  cmn_tex_load = 1;
  dsp_ms.unsel_col[0] = 0x14;
  dsp_ms.unsel_col[1] = 0xf;
  dsp_ms.unsel_col[2] = 10;
  return;
}

void ModeSlctLoop() {
  ModeSlctCtrl(dsp_ms.now_mode);
  dsp_ms.mode_tmr = dsp_ms.mode_tmr + 1;
  return;
}

void ModeSlctCtrl(u_char mode) {
	int adpcm_no;
	
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  
  if ((ms_load_id != -1) && (iVar4 = IsLoadEnd(ms_load_id), iVar4 != 0)) {
    ms_load_id = -1;
  }
  bVar1 = dsp_ms.flm_alp;
  switch(dsp_ms.main_step) {
  case 0:
    if (cmn_tex_load == 0) {
      ms_load_id = LoadReq(0x107,0xc80000);
    }
    iVar4 = -1;
    MsLoadCtrl(mode);
    dsp_ms.main_step = 1;
    if ((dsp_ms.now_mode == 2) || (dsp_ms.now_mode == 7)) {
      iVar4 = 0x5fc;
      SeStopAll();
    }
    else if ((dsp_ms.now_mode == 0) || (dsp_ms.now_mode == 1)) {
      iVar4 = 0x60b;
    }
    else if ((dsp_ms.now_mode == 4) || (dsp_ms.now_mode == 3)) {
      title_bgm_no = -1;
    }
    bVar1 = dsp_ms.flm_alp;
    if (iVar4 != -1) {
      if (title_bgm_no == iVar4) goto LAB_001008bc;
      sVar3 = GetAdpcmVol(iVar4);
      EAdpcmCmdPlay(0,1,iVar4,0,sVar3,0x280,0xfff,0);
      title_bgm_no = iVar4;
      bVar1 = dsp_ms.flm_alp;
    }
    break;
  case 1:
    if (ms_load_id == -1) {
      if (cmn_tex_load == 0) {
        cmn_tex_load = 1;
      }
      dsp_ms.bak_alp = 0;
      dsp_ms.chr_alp = 0;
      dsp_ms.csr[1] = 0;
      if (mode == 3) {
        StartOptionModeInit('\x01');
        dsp_ms.csr[2] = 0;
        dsp_ms.opt_mode = 7;
      }
      else if (mode == 1) {
        dsp_ms.sm_slct[2] = cribo.costume;
        dsp_ms.sm_slct[1] = ingame_wrk.difficult;
        dsp_ms.sm_slct[0] = 0;
        SetCsrInfoStoryMode();
      }
      else if (mode == 2) {
        dsp_ms.bm_slct[0] = cribo.costume;
      }
      dsp_ms.main_step = 2;
      SeSetMVol(opt_wrk.bgm_vol);
      SeSetSteMono(opt_wrk.sound_mode);
    }
    goto LAB_001008bc;
  case 2:
    if (dsp_ms.bak_alp + 8 < 0x80) {
      dsp_ms.chr_alp = (byte)(dsp_ms.bak_alp + 8);
      if (dsp_ms.flm_alp != 0x80) {
        dsp_ms.flm_alp = dsp_ms.chr_alp;
      }
      dsp_ms.bak_alp = dsp_ms.chr_alp;
      if (dsp_ms.win_alp != 0x80) {
        dsp_ms.win_alp = dsp_ms.chr_alp;
      }
      goto LAB_001008bc;
    }
    dsp_ms.main_step = 3;
    dsp_ms.chr_alp = 0x80;
    dsp_ms.flm_alp = 0x80;
    dsp_ms.win_alp = 0x80;
    dsp_ms.bak_alp = 0x80;
    dsp_ms.flm_lng = 0;
    bVar1 = dsp_ms.flm_alp;
    break;
  case 3:
    if (dsp_ms.flm_lng + 0x14 < 100) {
      dsp_ms.flm_lng = (byte)(dsp_ms.flm_lng + 0x14);
      goto LAB_001008bc;
    }
    if (dsp_ms.now_mode == 3) {
      iVar4 = IsEndAdpcmFadeOut();
      if (iVar4 == 0) goto LAB_001008bc;
      sVar3 = GetAdpcmVol(0x608);
      EAdpcmCmdPlay(0,1,0x608,0,sVar3,0x280,0xfff,0);
    }
    dsp_ms.main_step = 4;
    dsp_ms.flm_lng = 100;
    bVar1 = dsp_ms.flm_alp;
    break;
  case 4:
    bVar2 = ModeSlctPad(mode);
    bVar1 = dsp_ms.flm_alp;
    if (bVar2 != 0) {
      dsp_ms.main_step = 5;
    }
    break;
  case 5:
    if ((int)(dsp_ms.flm_lng - 0x14) < 1) {
      dsp_ms.flm_lng = 0;
      dsp_ms.main_step = 6;
    }
    else {
      dsp_ms.flm_lng = (byte)(dsp_ms.flm_lng - 0x14);
    }
    break;
  case 6:
    if ((int)(dsp_ms.chr_alp - 8) < 1) {
      dsp_ms.chr_alp = 0;
      dsp_ms.win_alp = 0;
      dsp_ms.bak_alp = 0;
      if (((dsp_ms.next_mode == 5) || (dsp_ms.next_mode == 0xb)) || (dsp_ms.next_mode == 0xc)) {
        dsp_ms.flm_alp = 0;
      }
      dsp_ms.main_step = 7;
      bVar1 = dsp_ms.flm_alp;
    }
    else {
      dsp_ms.chr_alp = (byte)(dsp_ms.chr_alp - 8);
      dsp_ms.bak_alp = dsp_ms.chr_alp;
      dsp_ms.win_alp = dsp_ms.chr_alp;
      bVar1 = dsp_ms.chr_alp;
      if ((((dsp_ms.next_mode != 5) && (bVar1 = dsp_ms.chr_alp, dsp_ms.next_mode != 0xb)) &&
          ((bVar1 = dsp_ms.chr_alp, dsp_ms.next_mode != 8 &&
           ((bVar1 = dsp_ms.chr_alp, dsp_ms.next_mode != 9 &&
            (bVar1 = dsp_ms.chr_alp, dsp_ms.next_mode != 10)))))) &&
         (bVar1 = dsp_ms.chr_alp, dsp_ms.next_mode != 0xc)) goto LAB_001008bc;
    }
    break;
  case 7:
    dsp_ms.main_step = 0;
    if (dsp_ms.now_mode == 4) {
      SeSetMVol(opt_wrk.bgm_vol);
    }
    if (dsp_ms.next_mode == 5) {
      outgame_wrk.mode = 4;
      EAdpcmFadeOut(0x3c);
      if (title_wrk.mode != 0x1b) {
        title_wrk.mode = 0x1a;
      }
LAB_0010089c:
      title_bgm_no = -1;
      bVar1 = dsp_ms.flm_alp;
    }
    else {
      bVar1 = dsp_ms.flm_alp;
      if (dsp_ms.next_mode == 0xb) {
        outgame_wrk.mode = 4;
      }
      else {
        if (dsp_ms.next_mode == 0xc) {
          ingame_wrk.game = 0;
          GameModeChange(0);
          goto LAB_0010089c;
        }
        dsp_ms.now_mode = dsp_ms.next_mode;
        if (dsp_ms.next_mode == 4) {
          SoundTestForModeSlectInit();
          bVar1 = dsp_ms.flm_alp;
        }
      }
    }
  }
  dsp_ms.flm_alp = bVar1;
LAB_001008bc:
  if ((2 < dsp_ms.now_mode - 8) && (cmn_tex_load != 0)) {
    ModeSlctDspBak(dsp_ms.bak_alp,mode);
    ModeSlctDspFlm(dsp_ms.flm_lng,dsp_ms.flm_alp,mode);
    ModeSlctDspChr(dsp_ms.chr_alp,mode);
    if (dsp_ms.now_mode != 3) {
      ModeSlctDspWin(dsp_ms.win_alp);
    }
    ModeSlctDspMsg(dsp_ms.win_alp,mode);
    return;
  }
  return;
}

char ModeSlctPad(u_char mode) {
	u_char rtrn;
	u_char sm_slct_num[3];
	u_char bm_slct_num[1];
	int level;
	
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte bVar7;
  float fVar8;
  byte sm_slct_num [3];
  byte bm_slct_num [1];
  byte abStack_7f [15];
  
  sm_slct_num[0] = DAT_00356310;
  sm_slct_num[1] = DAT_00356311;
  sm_slct_num[2] = DAT_00356312;
  bm_slct_num[0] = 4;
  bVar7 = 0;
  switch(mode) {
  case 0:
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      dsp_ms.next_mode = 5;
      return 1;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[0] == 1) ||
         ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))))) {
        SeStartFix(0,0,0x1000,0x1000,0);
        if (dsp_ms.csr[0] == 0) {
          dsp_ms.csr[0] = 4;
          return 0;
        }
        dsp_ms.csr[0] = dsp_ms.csr[0] - 1;
        return 0;
      }
      if (((*key_now[1] != 1) &&
          (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x02');
        if (uVar3 < 0x1a) {
          return 0;
        }
        sVar2 = Ana2PadDirCnt('\x02');
        if ((int)sVar2 % 5 != 1) {
          return 0;
        }
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      if (3 < dsp_ms.csr[0]) {
        dsp_ms.csr[0] = 0;
        return 0;
      }
      dsp_ms.csr[0] = dsp_ms.csr[0] + 1;
      return 0;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    dsp_ms.next_mode = dsp_ms.csr[0] + 1;
    if ((byte)(dsp_ms.csr[0] - 2) < 2) {
      EAdpcmFadeOut(0x3c);
      return 1;
    }
    goto LAB_00101cd8;
  case 1:
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      if (dsp_ms.side == 0) {
        dsp_ms.next_mode = dsp_ms.end_mode;
        return 1;
      }
      dsp_ms.side = 0;
      bVar7 = dsp_ms.csr[1];
joined_r0x00100c3c:
      if (bVar7 != 0) {
        return 0;
      }
      if (dsp_ms.sm_slct[0] != 0) {
        return 0;
      }
      if (ingame_wrk.msn_no != 0) {
        dsp_ms.sm_slct[1] = ingame_wrk.difficult;
        return 0;
      }
      if (mc_msn_flg == '\x01') {
        return 0;
      }
      dsp_ms.sm_slct[1] = ingame_wrk.difficult;
      return 0;
    }
    if (*key_now[5] != 1) {
      if (dsp_ms.side == 0) {
        if (((*key_now[0] == 1) ||
            (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
             (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)))) ||
           ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
            (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
          SeStartFix(0,0,0x1000,0x1000,0);
          if (dsp_ms.csr[1] <= sm_csr_info[0]) {
            dsp_ms.csr[1] = 4;
            return 0;
          }
          dsp_ms.csr[1] = dsp_ms.csr[1] - 1;
          return 0;
        }
        if (((*key_now[1] != 1) &&
            (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
           (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
          uVar3 = Ana2PadDirCnt('\x02');
          if (uVar3 < 0x1a) {
            return 0;
          }
          sVar2 = Ana2PadDirCnt('\x02');
          if ((int)sVar2 % 5 != 1) {
            return 0;
          }
        }
        SeStartFix(0,0,0x1000,0x1000,0);
        if (3 < dsp_ms.csr[1]) {
          dsp_ms.csr[1] = sm_csr_info[0];
          return 0;
        }
        dsp_ms.csr[1] = dsp_ms.csr[1] + 1;
        return 0;
      }
      if (dsp_ms.side != 1) {
        return 0;
      }
      if (((*key_now[2] == 1) ||
          (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)))) ||
         ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
          (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))) {
        SeStartFix(0,0,0x1000,0x1000,0);
        if (dsp_ms.csr[1] != 2) {
          bVar7 = dsp_ms.sm_slct[dsp_ms.csr[1]];
          if (bVar7 == 0) {
            bVar7 = sm_slct_num[dsp_ms.csr[1]];
          }
          dsp_ms.sm_slct[dsp_ms.csr[1]] = bVar7 - 1;
          return 0;
        }
        if (dsp_ms.sm_slct[2] == 0) {
          dsp_ms.sm_slct[2] = sm_csr_info[1];
          return 0;
        }
        dsp_ms.sm_slct[2] = dsp_ms.sm_slct[2] - 1;
        return 0;
      }
      if (((*key_now[3] != 1) &&
          (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x01');
        if (uVar3 < 0x1a) {
          return 0;
        }
        sVar2 = Ana2PadDirCnt('\x01');
        if ((int)sVar2 % 5 != 1) {
          return 0;
        }
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      if (dsp_ms.csr[1] == 2) {
        if (sm_csr_info[1] <= dsp_ms.sm_slct[2]) {
          dsp_ms.sm_slct[2] = 0;
          return 0;
        }
        dsp_ms.sm_slct[2] = dsp_ms.sm_slct[2] + 1;
        return 0;
      }
      pbVar6 = dsp_ms.sm_slct + dsp_ms.csr[1];
      if ((int)(sm_slct_num[dsp_ms.csr[1]] - 1) <= (int)(uint)*pbVar6) {
        *pbVar6 = 0;
        return 0;
      }
      *pbVar6 = *pbVar6 + 1;
      return 0;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    switch(dsp_ms.csr[1]) {
    case 0:
      dsp_ms.side = 1 - dsp_ms.side;
      bVar7 = dsp_ms.side;
      goto joined_r0x00100c3c;
    case 1:
      if (dsp_ms.sm_slct[0] == 0) {
        if (ingame_wrk.msn_no != 0) {
          return 0;
        }
        if (mc_msn_flg != '\x01') {
          return 0;
        }
      }
      dsp_ms.side = 1 - dsp_ms.side;
      return 0;
    case 2:
      dsp_ms.side = 1 - dsp_ms.side;
      return 0;
    case 3:
      EAdpcmFadeOut(0x3c);
      dsp_ms.next_mode = 0xc;
      if (dsp_ms.sm_slct[0] == 0) {
        sys_wrk.load = 1;
        ingame_wrk.mode = 6;
      }
      else {
        ingame_wrk.msn_no = dsp_ms.sm_slct[0] - 1;
        sys_wrk.load = 0;
        mc_msn_flg = '\0';
        if (ingame_wrk.msn_no != 0) {
          cribo.clear_info = cribo.clear_info & 0xfd;
        }
      }
      title_wrk.csr = '\0';
      ingame_wrk.difficult = dsp_ms.sm_slct[1];
      cribo.costume = dsp_ms.sm_slct[2];
      if (ingame_wrk.msn_no == 0) {
        title_wrk.csr = '\0';
        cribo.clear_info = cribo.clear_info | 2;
        dsp_ms.next_mode = 0xc;
        return 1;
      }
      break;
    case 4:
      dsp_ms.next_mode = 0;
      return 1;
    default:
      return 0;
    }
    goto LAB_00101cd8;
  case 2:
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      if (dsp_ms.side != 0) {
        cribo.costume = dsp_ms.bm_slct[0];
        dsp_ms.side = 0;
        return 0;
      }
      cribo.costume = dsp_ms.bm_slct[0];
      dsp_ms.next_mode = dsp_ms.end_mode;
      return 1;
    }
    if (*key_now[5] != 1) {
      if (dsp_ms.side == 0) {
        if (((*key_now[0] == 1) ||
            (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
             (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)))) ||
           ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
            (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
          SeStartFix(0,0,0x1000,0x1000,0);
          if (dsp_ms.csr[1] != 0) {
            cribo.costume = dsp_ms.bm_slct[0];
            dsp_ms.csr[1] = dsp_ms.csr[1] - 1;
            return 0;
          }
          cribo.costume = dsp_ms.bm_slct[0];
          dsp_ms.csr[1] = 5;
          return 0;
        }
        if (((*key_now[1] != 1) &&
            (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
           (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
          uVar3 = Ana2PadDirCnt('\x02');
          if (uVar3 < 0x1a) {
            cribo.costume = dsp_ms.bm_slct[0];
            return 0;
          }
          sVar2 = Ana2PadDirCnt('\x02');
          if ((int)sVar2 % 5 != 1) {
            cribo.costume = dsp_ms.bm_slct[0];
            return 0;
          }
        }
        SeStartFix(0,0,0x1000,0x1000,0);
        if (dsp_ms.csr[1] < 5) {
          cribo.costume = dsp_ms.bm_slct[0];
          dsp_ms.csr[1] = dsp_ms.csr[1] + 1;
          return 0;
        }
        cribo.costume = dsp_ms.bm_slct[0];
        dsp_ms.csr[1] = 0;
        return 0;
      }
      if (dsp_ms.side != 1) {
        cribo.costume = dsp_ms.bm_slct[0];
        return 0;
      }
      if ((*key_now[2] == 1) ||
         ((((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))))) {
        SeStartFix(0,0,0x1000,0x1000,0);
        if (dsp_ms.csr[1] != 0) {
          bVar7 = dsp_ms.bm_slct[dsp_ms.csr[1]];
          if (bVar7 == 0) {
            bVar7 = bm_slct_num[dsp_ms.csr[1]];
          }
          dsp_ms.bm_slct[dsp_ms.csr[1]] = bVar7 - 1;
          cribo.costume = dsp_ms.bm_slct[0];
          return 0;
        }
        if (dsp_ms.bm_slct[0] != 0) {
          cribo.costume = dsp_ms.bm_slct[0] - 1;
          dsp_ms.bm_slct[0] = dsp_ms.bm_slct[0] - 1;
          return 0;
        }
        cribo.costume = sm_csr_info[1];
        dsp_ms.bm_slct[0] = sm_csr_info[1];
        return 0;
      }
      if (((*key_now[3] != 1) &&
          (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x01');
        if (uVar3 < 0x1a) {
          cribo.costume = dsp_ms.bm_slct[0];
          return 0;
        }
        sVar2 = Ana2PadDirCnt('\x01');
        if ((int)sVar2 % 5 != 1) {
          cribo.costume = dsp_ms.bm_slct[0];
          return 0;
        }
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      if (dsp_ms.csr[1] == 0) {
        if (dsp_ms.bm_slct[0] < sm_csr_info[1]) {
          cribo.costume = dsp_ms.bm_slct[0] + 1;
          dsp_ms.bm_slct[0] = dsp_ms.bm_slct[0] + 1;
          return 0;
        }
        cribo.costume = 0;
        dsp_ms.bm_slct[0] = 0;
        return 0;
      }
      pbVar6 = dsp_ms.bm_slct + dsp_ms.csr[1];
      if ((int)(uint)*pbVar6 < (int)(bm_slct_num[dsp_ms.csr[1]] - 1)) {
        *pbVar6 = *pbVar6 + 1;
        cribo.costume = dsp_ms.bm_slct[0];
        return 0;
      }
      *pbVar6 = 0;
      cribo.costume = dsp_ms.bm_slct[0];
      return 0;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    switch(dsp_ms.csr[1]) {
    case 0:
      dsp_ms.side = 1 - dsp_ms.side;
      break;
    case 1:
      dsp_ms.next_mode = 8;
      goto LAB_001012b4;
    case 2:
      dsp_ms.next_mode = 9;
      goto LAB_001012b4;
    case 3:
      dsp_ms.next_mode = 10;
LAB_001012b4:
      bVar7 = 1;
      break;
    case 4:
      dsp_ms.next_mode = 7;
      bVar7 = 1;
      btl_wrk.stage_no = '\0';
      break;
    case 5:
      bVar7 = 1;
      dsp_ms.next_mode = 0;
    }
    cribo.costume = dsp_ms.bm_slct[0];
    return bVar7;
  case 3:
    cVar1 = MenuOptionPad(dsp_ms.csr + 2,&dsp_ms.opt_mode);
    if (cVar1 != '\0') {
      SeStartFix(3,0,0x1000,0x1000,0);
      EAdpcmFadeOut(0x3c);
      dsp_ms.next_mode = dsp_ms.end_mode;
      return 1;
    }
    return 0;
  case 4:
    cVar1 = SoundTestForModeSlect();
    if (cVar1 != '\0') {
      SeStartFix(3,0,0x1000,0x1000,0);
      dsp_ms.next_mode = dsp_ms.end_mode;
      return 1;
    }
    return 0;
  default:
    goto switchD_001009c4_caseD_5;
  case 7:
    iVar4 = CheckClearStage();
    if (*key_now[4] == 1) {
      SeStartFix(3,0,0x1000,0x1000,0);
      dsp_ms.next_mode = 2;
      OutGameModeChange(8);
      return 1;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[0] == 1) ||
         ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))))) {
        if ((uint)btl_wrk.stage_no % 5 != 0) {
          SeStartFix(0,0,0x1000,0x1000,0);
          btl_wrk.stage_no = btl_wrk.stage_no + 0xff;
          return 0;
        }
        btl_wrk.stage_no = btl_wrk.stage_no + '\x04';
      }
      else {
        if ((((*key_now[1] != 1) &&
             (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
            (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) &&
           ((uVar3 = Ana2PadDirCnt('\x02'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 != 1)))) {
          if (((*key_now[2] == 1) ||
              (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
               (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)))) ||
             ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
              (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))) {
            if (btl_wrk.stage_no < 5) {
              return 0;
            }
            SeStartFix(0,0,0x1000,0x1000,0);
            btl_wrk.stage_no = btl_wrk.stage_no + 0xfb;
            return 0;
          }
          if (((*key_now[3] != 1) &&
              (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
             (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
            uVar3 = Ana2PadDirCnt('\x01');
            if (uVar3 < 0x1a) {
              return 0;
            }
            sVar2 = Ana2PadDirCnt('\x01');
            if ((int)sVar2 % 5 != 1) {
              return 0;
            }
          }
          if (0xe < btl_wrk.stage_no) {
            return 0;
          }
          if ((int)(btl_wrk.stage_no / 5) < iVar4) {
            SeStartFix(0,0,0x1000,0x1000,0);
            btl_wrk.stage_no = btl_wrk.stage_no + '\x05';
            return 0;
          }
          return 0;
        }
        if ((btl_wrk.stage_no + 1) % 5 != 0) {
          SeStartFix(0,0,0x1000,0x1000,0);
          btl_wrk.stage_no = btl_wrk.stage_no + '\x01';
          return 0;
        }
        btl_wrk.stage_no = btl_wrk.stage_no + 0xfc;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      return 0;
    }
    SeStartFix(1,0,0x1000,0x1000,0);
    ingame_wrk.game = 1;
    TitleModeEnd();
    sys_wrk.load = 0;
    SaveStoryWrk();
    GameModeChange(0);
    title_bgm_no = -1;
    if (*key_now[10] == 0) {
      if (*key_now[11] == 0) {
        if (*key_now[8] == 0) {
          if (*key_now[9] == 0) {
            *(undefined4 *)(&battle_scr_effct + (uint)btl_wrk.stage_no * 4) = 1;
            goto LAB_00101868;
          }
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 6;
    }
    *(undefined4 *)(&battle_scr_effct + (uint)btl_wrk.stage_no * 4) = uVar5;
LAB_00101868:
    if (btl_wrk.stage_no != '\x13') {
      return 0;
    }
    uRam003446d4 = 0;
    return 0;
  case 8:
    iVar4 = isCameraEnd();
    if (iVar4 == 0) {
      fVar8 = GetCamDispAlpha();
      BgFusumaYW(0x606060,0.0,fVar8,0x7d000);
      SetSprFile(0x1e90000);
      SetSprFile(0x1ce0000);
      SetSprFile(0x1d15600);
      CameraCustomMain();
      return 0;
    }
    break;
  case 9:
    iVar4 = isPhotoEnd();
    if (iVar4 == 0) {
      fVar8 = GetPhtDispAlpha();
      BgFusumaYW(0x606060,0.0,fVar8,0x7d000);
      SetSprFile(0x1d573b0);
      SetSprFile(0x1ce0000);
      SetSprFile(0x1d15600);
      IngameMenuAlbum('\x01');
      return 0;
    }
    break;
  case 10:
    cVar1 = SavePointMenuMain(3);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  dsp_ms.next_mode = 2;
  OutGameModeChange(8);
LAB_00101cd8:
  bVar7 = 1;
switchD_001009c4_caseD_5:
  return bVar7;
}

void ModeSlctDspBak(u_char alp, u_char mode) {
	int i;
	DISP_SPRT ds;
	
  SPRT_DAT *pSVar1;
  int iVar2;
  DISP_SPRT ds;
  
  if (alp != 0) {
    iVar2 = 0;
    SetSprFile(0xc80000);
    SetSprFile(0xcc0470);
    do {
      switch(mode) {
      case 0:
        pSVar1 = msl_bg_fsm;
        goto LAB_00101dd0;
      case 1:
        pSVar1 = msl_bg_sty;
        goto LAB_00101d94;
      case 2:
        pSVar1 = msl_bg_btl;
LAB_00101d94:
        CopySprDToSpr(&ds,pSVar1 + iVar2);
        ds.b = 100;
        ds.r = 100;
        ds.g = 100;
        break;
      case 3:
        pSVar1 = msl_bg_opt;
        goto LAB_00101dd0;
      case 4:
        pSVar1 = msl_bg_snd;
LAB_00101dd0:
        CopySprDToSpr(&ds,pSVar1 + iVar2);
        break;
      case 7:
        CopySprDToSpr(&ds,msl_bg_btl + iVar2);
        if (0x50 < alp) {
          alp = 0x50;
        }
      }
      ds.alpha = alp;
      DispSprD(&ds);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xb);
  }
  return;
}

void ModeSlctDspChr(u_char alp, u_char mode) {
	u_char dsp_rgb[11];
	u_char dsp_alp[11];
	float flsh;
	
  ulong u;
  float fVar1;
  byte dsp_rgb [11];
  byte dsp_alp [11];
  
  if (alp != 0) {
    u = __umoddi3(dsp_ms.mode_tmr,0x3c);
    if ((long)u < 0) {
      fVar1 = __floatdisf(u & 1 | u >> 1);
      fVar1 = fVar1 + fVar1;
    }
    else {
      fVar1 = __floatdisf(u);
    }
    fVar1 = SgSinf((fVar1 * DAT_00355080) / 60.0);
    fVar1 = ((fVar1 + 1.0) * 0.5 + 1.0) * 0.5;
    switch(mode) {
    case 0:
      DspModeSlect(alp);
      break;
    case 1:
      DspStoryMode(alp,fVar1);
      break;
    case 2:
      DspBattleMode(alp,fVar1);
      break;
    case 3:
      SetSprFile(0x1ce0000);
      SetSprFile(0xddc430);
      DspOptCtrl(dsp_ms.csr[2],dsp_ms.opt_mode,alp,0);
      break;
    case 4:
      SoundTestForModeSlectDisp(alp,fVar1);
      break;
    case 7:
      SetSprFile(0xdcb100);
      DspMissionSelect(alp);
    }
  }
  return;
}

void DspModeSlect(u_char alp) {
	int i;
	u_char dsp_rgb[5];
	u_char dsp_alp[5];
	
  byte *puVar1;
  byte *pbVar1;
  uint uVar2;
  byte alp_00;
  byte dsp_rgb [5];
  byte dsp_alp [5];
  
  pbVar1 = dsp_rgb;
  uVar2 = 0;
  puVar1 = dsp_alp;
  do {
    alp_00 = (byte)((int)(char)alp & 0xffU);
    if (uVar2 == dsp_ms.csr[0]) {
      *puVar1 = alp_00;
      *pbVar1 = 0x80;
    }
    else {
      *puVar1 = (byte)(((int)(char)alp & 0xffU) >> 1);
      *pbVar1 = 0x40;
    }
    uVar2 = uVar2 + 1;
    pbVar1 = pbVar1 + 1;
    puVar1 = puVar1 + 1;
  } while ((int)uVar2 < 6);
  PutChrOne(0x46,0,0,dsp_rgb[0],dsp_alp[0],0);
  PutChrOne(0x47,0,0,dsp_rgb[1],dsp_alp[1],0);
  PutChrOne(0x4a,0,0,dsp_rgb[2],dsp_alp[2],0);
  PutChrOne(0x48,0,0,dsp_rgb[3],dsp_alp[3],0);
  PutChrOne(0x49,0,0,dsp_rgb[4],dsp_alp[4],0);
  SetSprFile(0x1ce0000);
  DispCaption(3,alp_00);
  return;
}

void DspStoryMode(u_char alp, float flsh) {
	int i;
	u_int dsp_rgb[11];
	u_char dsp_alp[11];
	
  short sVar1;
  ushort px;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte alp_00;
  uint uVar6;
  uint dsp_rgb [11];
  byte dsp_alp [11];
  
  puVar2 = dsp_rgb;
  pbVar3 = dsp_alp;
  uVar6 = (int)(char)alp & 0xff;
  uVar4 = 0;
  do {
    alp_00 = (byte)uVar6;
    if (uVar4 == dsp_ms.csr[1]) {
      if (dsp_ms.side == 0) {
        *pbVar3 = alp_00;
        *puVar2 = 0x808080;
      }
      else {
        *pbVar3 = (byte)((uVar6 * 7) / 10);
        *puVar2 = 0x595959;
      }
    }
    else if ((int)uVar4 < (int)(uint)sm_csr_info[0]) {
      *pbVar3 = dsp_ms.unsel_col[3];
      *puVar2 = (uint)dsp_ms.unsel_col._0_3_;
    }
    else {
      *pbVar3 = (byte)(uVar6 >> 1);
      *puVar2 = (uint)&DAT_00404040;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while ((int)uVar4 < 5);
  pbVar3 = dsp_alp + 8;
  uVar4 = 0;
  puVar2 = dsp_rgb + 8;
  do {
    if ((dsp_ms.side == 0) || (uVar4 != dsp_ms.csr[1])) {
      if ((int)uVar4 < (int)(uint)sm_csr_info[0]) {
        pbVar3[-3] = dsp_ms.unsel_col[3];
        puVar2[-3] = (uint)dsp_ms.unsel_col._0_3_;
        *pbVar3 = dsp_ms.unsel_col[3];
        *puVar2 = (uint)dsp_ms.unsel_col._0_3_;
      }
      else {
        bVar5 = (byte)(uVar6 >> 1);
        pbVar3[-3] = bVar5;
        puVar2[-3] = (uint)&DAT_00404040;
        *pbVar3 = bVar5;
        *puVar2 = 0x808080;
      }
    }
    else {
      pbVar3[-3] = alp_00;
      puVar2[-3] = 0x808080;
      *pbVar3 = (byte)(int)((float)uVar6 * flsh);
      *puVar2 = 0x808080;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while ((int)uVar4 < 3);
  PutChrOneRGB(0x65,0,0,dsp_rgb[0],dsp_alp[0],0);
  PutChrOneRGB(0x66,0,0,dsp_rgb[1],dsp_alp[1],0);
  PutChrOneRGB(0x72,0,0,dsp_rgb[2],dsp_alp[2],0);
  PutChrOneRGB(0x67,0,0,dsp_rgb[3],dsp_alp[3],0);
  PutChrOneRGB(0x68,0,0,dsp_rgb[4],dsp_alp[4],0);
  PutChrOneRGB(0x7b,0x148,0x65,dsp_rgb[8],dsp_alp[8],2);
  PutChrOneRGB(0x7b,0x23a,0x65,dsp_rgb[8],dsp_alp[8],0);
  PutChrOneRGB(0x79,0x15c,100,dsp_rgb[8],dsp_alp[8],0);
  PutChrOneRGB(0x7a,0x225,100,dsp_rgb[8],dsp_alp[8],0);
  switch(dsp_ms.sm_slct[0]) {
  case 0:
    sVar1 = 0x84;
    break;
  case 1:
    sVar1 = 0x7f;
    break;
  case 2:
    sVar1 = 0x80;
    break;
  case 3:
    sVar1 = 0x81;
    break;
  case 4:
    sVar1 = 0x82;
    break;
  case 5:
    PutChrOneRGB(0x83,0,0,dsp_rgb[5],dsp_alp[5],0);
  default:
    goto switchD_001023ac_caseD_6;
  }
  PutChrOneRGB(sVar1,0,0,dsp_rgb[5],dsp_alp[5],0);
switchD_001023ac_caseD_6:
  PutChrOneRGB(0x7b,0x148,0x91,dsp_rgb[9],dsp_alp[9],2);
  PutChrOneRGB(0x7b,0x23a,0x91,dsp_rgb[9],dsp_alp[9],0);
  PutChrOneRGB(0x79,0x15c,0x90,dsp_rgb[9],dsp_alp[9],0);
  PutChrOneRGB(0x7a,0x225,0x90,dsp_rgb[9],dsp_alp[9],0);
  if (dsp_ms.sm_slct[1] == 0) {
    PutChrOneRGB(0x74,0x17e,0x8d,dsp_rgb[6],dsp_alp[6],0);
  }
  else if (dsp_ms.sm_slct[1] == 1) {
    PutChrOneRGB(0x76,0xfffb,0,dsp_rgb[6],dsp_alp[6],0);
  }
  PutChrOneRGB(0x7b,0x148,0xc0,dsp_rgb[10],dsp_alp[10],2);
  PutChrOneRGB(0x7b,0x23a,0xc0,dsp_rgb[10],dsp_alp[10],0);
  PutChrOneRGB(0x79,0x15c,0xbf,dsp_rgb[10],dsp_alp[10],0);
  PutChrOneRGB(0x7a,0x225,0xbf,dsp_rgb[10],dsp_alp[10],0);
  if (dsp_ms.sm_slct[2] == 1) {
    PutChrOneRGB(0x77,0xfff5,0,dsp_rgb[7],dsp_alp[7],0);
    sVar1 = 0x85;
LAB_00102604:
    px = 0x20f;
  }
  else {
    if (1 < dsp_ms.sm_slct[2]) {
      if (dsp_ms.sm_slct[2] != 2) {
        if (dsp_ms.sm_slct[2] == 3) {
          PutChrOneRGB(0x77,0xfff5,0,dsp_rgb[7],dsp_alp[7],0);
          PutChrOneRGB(0x87,0x20f,0xbb,dsp_rgb[7],dsp_alp[7],0);
        }
        goto LAB_00102654;
      }
      PutChrOneRGB(0x77,0xfff5,0,dsp_rgb[7],dsp_alp[7],0);
      sVar1 = 0x86;
      goto LAB_00102604;
    }
    if (dsp_ms.sm_slct[2] != 0) goto LAB_00102654;
    sVar1 = 0x74;
    px = 0x17e;
  }
  PutChrOneRGB(sVar1,px,0xbb,dsp_rgb[7],dsp_alp[7],0);
LAB_00102654:
  SetSprFile(0x1ce0000);
  DispCaption(3,alp_00);
  return;
}

void DspBattleMode(u_char alp, float flsh) {
	int i;
	u_char dsp_rgb[9];
	u_char dsp_alp[9];
	
  byte *pbVar1;
  short chr;
  byte *pbVar2;
  ushort px;
  uint uVar3;
  byte bVar4;
  byte alp_00;
  uint uVar5;
  byte dsp_rgb [9];
  byte dsp_alp [9];
  
  pbVar1 = dsp_rgb;
  uVar3 = 0;
  pbVar2 = dsp_alp;
  uVar5 = (int)(char)alp & 0xff;
  do {
    alp_00 = (byte)uVar5;
    if (uVar3 == dsp_ms.csr[1]) {
      if (dsp_ms.side == 0) {
        *pbVar2 = alp_00;
        *pbVar1 = 0x80;
      }
      else {
        *pbVar2 = (byte)((uVar5 * 7) / 10);
        *pbVar1 = 0x59;
      }
    }
    else {
      *pbVar2 = (byte)(uVar5 >> 1);
      *pbVar1 = 0x40;
    }
    uVar3 = uVar3 + 1;
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
  } while ((int)uVar3 < 6);
  pbVar2 = dsp_alp + 7;
  uVar3 = 0;
  pbVar1 = dsp_rgb + 7;
  do {
    bVar4 = (byte)(uVar5 >> 1);
    if (dsp_ms.side == 0) {
      pbVar2[-1] = bVar4;
LAB_0010278c:
      pbVar1[-1] = 0x40;
      *pbVar1 = 0x80;
      *pbVar2 = bVar4;
    }
    else {
      if (uVar3 != dsp_ms.csr[1]) {
        pbVar2[-1] = bVar4;
        goto LAB_0010278c;
      }
      pbVar2[-1] = alp_00;
      pbVar1[-1] = 0x80;
      *pbVar1 = 0x80;
      *pbVar2 = (byte)(int)((float)uVar5 * flsh);
    }
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 + 1;
    pbVar1 = pbVar1 + 1;
  } while ((int)uVar3 < 1);
  PutChrOne(10,0,0xffe7,dsp_rgb[0],dsp_alp[0],0);
  PutChrOne(0x16,0,0xffec,dsp_rgb[1],dsp_alp[1],0);
  PutChrOne(0x17,0,0xffec,dsp_rgb[1],dsp_alp[1],0);
  PutChrOne(0x19,0,0xfff1,dsp_rgb[2],dsp_alp[2],0);
  PutChrOne(0x1a,0,0xfff6,dsp_rgb[3],dsp_alp[3],0);
  PutChrOne(9,0,0xfffb,dsp_rgb[4],dsp_alp[4],0);
  PutChrOne(0x18,0,0,dsp_rgb[5],dsp_alp[5],0);
  PutChrOne(0x12,0x13a,99,dsp_rgb[7],dsp_alp[7],2);
  PutChrOne(0x12,0x248,99,dsp_rgb[7],dsp_alp[7],0);
  PutChrOne(0x10,0x150,0x62,dsp_rgb[7],dsp_alp[7],0);
  PutChrOne(0x11,0x230,0x62,dsp_rgb[7],dsp_alp[7],0);
  if (dsp_ms.bm_slct[0] == 1) {
    PutChrOne(0xe,0xfff2,0xffd2,dsp_rgb[6],dsp_alp[6],0);
    chr = 0x1b;
LAB_0010297c:
    px = 0x20c;
  }
  else {
    if (1 < dsp_ms.bm_slct[0]) {
      if (dsp_ms.bm_slct[0] != 2) {
        if (dsp_ms.bm_slct[0] == 3) {
          PutChrOne(0xe,0xfff2,0xffd2,dsp_rgb[6],dsp_alp[6],0);
          PutChrOne(0x1d,0x20c,0x5f,dsp_rgb[6],dsp_alp[6],0);
        }
        goto LAB_001029cc;
      }
      PutChrOne(0xe,0xfff2,0xffd2,dsp_rgb[6],dsp_alp[6],0);
      chr = 0x1c;
      goto LAB_0010297c;
    }
    if (dsp_ms.bm_slct[0] != 0) goto LAB_001029cc;
    chr = 0xb;
    px = 0x17b;
  }
  PutChrOne(chr,px,0x5f,dsp_rgb[6],dsp_alp[6],0);
LAB_001029cc:
  SetSprFile(0x1ce0000);
  DispCaption(3,alp_00);
  return;
}

void DspMissionSelect(u_char alp) {
	int i;
	int ene_no;
	int msn_no;
	int rank;
	int no;
	int page_base_no;
	static u_char csr_alpha = 0;
	static u_char csr_brink = 1;
	int level;
	
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  short chr;
  uchar uVar6;
  ushort uVar7;
  ushort uVar8;
  byte alp_00;
  int iVar9;
  STAGE_WRK *pSVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = 4;
  uVar7 = (short)(char)alp & 0xff;
  iVar9 = 0;
  uVar11 = (uint)btl_wrk.stage_no;
  uVar1 = uVar11 / 5;
  bVar2 = btl_wrk.stage_no < 0xf;
  bVar3 = 4 < btl_wrk.stage_no;
  uVar4 = uVar1 * 5;
  iVar5 = CheckClearStage();
  alp_00 = (byte)uVar7;
  PutChrOne(0x3a,0,0,0x80,alp_00,0);
  PutChrOne(0x3b,0,0,0x80,alp_00,0);
  do {
    PutChrOne(0x43,0,(ushort)((uint)iVar9 >> 0x10),0x80,alp_00,0);
    iVar12 = iVar12 + -1;
    iVar9 = iVar9 + 0x280000;
  } while (-1 < iVar12);
  iVar9 = 0;
  pSVar10 = stage_wrk + uVar1 * 5;
  iVar12 = 4;
  do {
    if (pSVar10->rank != '\0') {
      PutChrOne(0x44,0,(ushort)((uint)iVar9 >> 0x10),0x80,alp_00,0);
    }
    iVar9 = iVar9 + 0x280000;
    iVar12 = iVar12 + -1;
    pSVar10 = pSVar10 + 1;
  } while (-1 < iVar12);
  if (csr_brink_148 == '\0') {
    csr_alpha_147 = csr_alpha_147 - 1;
    if (csr_alpha_147 < 0x14) {
      csr_brink_148 = '\x01';
    }
  }
  else {
    csr_alpha_147 = csr_alpha_147 + 1;
    if (100 < csr_alpha_147) {
      csr_brink_148 = '\0';
    }
  }
  iVar9 = (uVar11 % 5) * 0x28;
  SetSquareS(0x25000,-240.0,(float)(iVar9 + -0x5e),196.0,(float)(iVar9 + -0x40),0x8c,0x80,'<',
             csr_alpha_147);
  if (bVar3) {
    PutChrOne(0x45,0x17,0xcb,0x80,alp_00,0);
  }
  if ((bVar2) && ((int)(uVar4 / 5) < iVar5)) {
    PutChrOne(0x45,0x24b,0xcb,0x80,alp_00,2);
  }
  iVar5 = 0;
  do {
    uVar8 = (short)iVar5 * 0x28 + 0x85;
    iVar9 = uVar4 + iVar5;
    PutStringYW(0x2e,10,0x55,uVar8,0x808080,alp_00,0x23000,0);
    PutNumberYW(3,iVar9 + 1,0xcc,uVar8,1.0,1.0,0x808080,uVar7,0x23000,2,1);
    PutNumberYW(3,(ushort)stage_wrk[iVar9].best_time / 0xe10,0x104,uVar8,1.0,1.0,0x808080,uVar7,
                0x23000,1,1);
    PutStringYW(0x2e,0xb,0x111,uVar8,0x808080,alp_00,0x23000,0);
    PutNumberYW(3,((ushort)stage_wrk[iVar9].best_time / 0x3c) % 0x3c,0x11f,uVar8,1.0,1.0,0x808080,
                uVar7,0x23000,2,1);
    PutStringYW(0x2e,0xb,0x13e,uVar8,0x808080,alp_00,0x23000,0);
    PutNumberYW(3,(((uint)(ushort)stage_wrk[iVar9].best_time * 100) / 0x3c) % 100,0x14a,uVar8,1.0,
                1.0,0x808080,uVar7,0x23000,2,1);
    PutNumberYW(3,*(int *)&stage_wrk[iVar9].best_shot,0x193,uVar8,1.0,1.0,0x808080,uVar7,0x23000,4,0
               );
    PutStringYW(0x2e,0xc,0x1d4,uVar8,0x808080,alp_00,0x23000,0);
    uVar6 = stage_wrk[iVar9].rank;
    if (uVar6 == '\x01') {
      uVar6 = '\x02';
    }
    switch(uVar6) {
    default:
      goto LAB_00102f58;
    case '\x01':
      chr = 0x41;
      break;
    case '\x02':
      chr = 0x40;
      break;
    case '\x03':
      chr = 0x3f;
      break;
    case '\x04':
      chr = 0x3e;
      break;
    case '\x05':
      chr = 0x3d;
      break;
    case '\x06':
      PutChrOne(0x3c,0,(ushort)((uint)(iVar5 * 0x280000) >> 0x10),0x80,alp_00,0);
      goto LAB_00102f58;
    }
    PutChrOne(chr,0,(ushort)((uint)(iVar5 * 0x280000) >> 0x10),0x80,alp_00,0);
LAB_00102f58:
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  iVar5 = 0;
  uVar7 = (ushort)(byte)(&DAT_00344865)[(uint)btl_wrk.stage_no * 0xc0];
  uVar6 = (&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0];
  if (uVar7 != 0xff) {
    uVar8 = 0x165;
    do {
      if ((uVar7 == 7) && (uVar6 == '\x03')) {
        PutRayName('\x02',1,'\x03',0x50,uVar8,0x808080,alp_00);
      }
      else {
        PutRayName('\x01',uVar7,uVar6,0x50,uVar8,0x808080,alp_00);
      }
      iVar5 = iVar5 + 1;
      uVar8 = uVar8 + 0x18;
      if (2 < iVar5) break;
      uVar7 = (ushort)(byte)(&DAT_00344865)[iVar5 + (uint)btl_wrk.stage_no * 0xc0];
      uVar6 = (&DAT_00344862)[(uint)btl_wrk.stage_no * 0xc0];
    } while (uVar7 != 0xff);
  }
  SetSprFile(0x1ce0000);
  DispCaption(4,alp_00);
  return;
}

void PutChrOne(u_short chr, short int px, short int py, u_char rgb, u_char alp, u_char flp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&msel_sprt + ((int)chr & 0xffffU) * 0x20));
  ds.x = ds.x + (float)(int)(short)px;
  ds.tex1 = 0x161;
  ds.y = ds.y + (float)(int)(short)py;
  if (flp == 2) {
    ds.att = ds.att | 2;
  }
  else if (flp < 3) {
    if (flp == 1) {
      ds.att = ds.att | 1;
    }
  }
  else if (flp == 3) {
    ds.att = ds.att | 3;
  }
  ds.r = rgb;
  ds.g = rgb;
  ds.b = rgb;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void PutChrOneRGB(u_short chr, short int px, short int py, u_int rgb, u_char alp, u_char flp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  ds.g = (byte)(rgb >> 8);
  ds.b = (byte)(rgb >> 0x10);
  ds.r = (byte)rgb;
  CopySprDToSpr(&ds,(SPRT_DAT *)(&msel_sprt + ((int)chr & 0xffffU) * 0x20));
  ds.x = ds.x + (float)(int)(short)px;
  ds.y = ds.y + (float)(int)(short)py;
  ds.tex1 = 0x161;
  if (flp == 2) {
    ds.att = ds.att | 2;
  }
  else if (flp < 3) {
    if (flp == 1) {
      ds.att = ds.att | 1;
    }
  }
  else if (flp == 3) {
    ds.att = ds.att | 3;
  }
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void ModeSlctDspFlm(u_char per, u_char alp, u_char mode) {
	short int mx;
	DISP_SPRT ds;
	
  short sVar1;
  short chr;
  DISP_SPRT ds;
  
  if (alp == 0) {
    return;
  }
  sVar1 = (short)(int)((float)((100 - ((int)(char)per & 0xffU)) * 0x1f9) / 100.0);
  switch(mode) {
  case 0:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    chr = 3;
    break;
  case 1:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    chr = 4;
    break;
  case 2:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    chr = 2;
    break;
  case 3:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    chr = 6;
    break;
  case 4:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    chr = 5;
    break;
  default:
    goto LAB_001034f4;
  case 7:
    FilmCutter(0,-sVar1,0,0x59,0x80,alp);
    FilmCutter(1,-sVar1,0,0x59,0x80,alp);
    PutChrOne(7,0,0,0x80,alp,0);
    goto LAB_001034f4;
  }
  FilmCutter(chr,-sVar1,0,0x59,0x80,alp);
  PutChrOne(7,0,0,0x80,alp,0);
LAB_001034f4:
  return;
}

void FilmCutter(u_short chr, short int px, short int py, short int ex, u_char rgb, u_char alp) {
	short int cut;
	DISP_SPRT ds;
	
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&msel_sprt + ((int)chr & 0xffffU) * 0x20));
  fVar4 = (float)(int)(short)px;
  fVar3 = (float)(int)(short)ex;
  uVar1 = 0;
  if (ds.x + fVar4 < fVar3) {
    uVar1 = (uint)(short)(int)(fVar3 - (ds.x + fVar4));
    iVar2 = (int)(short)(int)(fVar3 - ds.x);
    if (ds.w < uVar1) {
      fVar4 = (float)iVar2;
      uVar1 = (uint)(short)ds.w;
    }
    else {
      fVar4 = (float)iVar2;
    }
  }
  ds.x = ds.x + fVar4;
  ds.w = ds.w - uVar1;
  ds.y = ds.y + (float)(int)(short)py;
  ds.u = ds.u + uVar1;
  ds.tex1 = 0x161;
  ds.r = rgb;
  ds.g = rgb;
  ds.b = rgb;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

void ModeSlctDspWin(u_char alp) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  if (alp != 0) {
    DrawMessageBox(0x19000,24.0,340.0,DAT_00355084,84.0,alp);
  }
  return;
}

void MsLoadCtrl(u_char mode) {
  int file_no;
  uint addr;
  
  switch(mode) {
  case 0:
    ms_load_id = LoadReq(0x43,0x1e90000);
    file_no = 0x108;
    addr = 0xcc0470;
    break;
  case 1:
    ingame_wrk.game = 0;
    ms_load_id = LoadReq(0x10b,0xcc0470);
    if (ingame_wrk.difficult == 0) {
      return;
    }
    dsp_ms.sm_slct[1] = 1;
    return;
  case 2:
    ingame_wrk.game = 1;
    ms_load_id = LoadReq(0x104,0xcc0470);
    file_no = 0x105;
    addr = 0xd4a850;
    break;
  case 3:
    ms_load_id = LoadReq(0x109,0xcc0470);
    ms_load_id = LoadReq(0x55,0xddc430);
    file_no = 0x46;
    addr = 0x1ce0000;
    break;
  case 4:
    file_no = 0x10a;
    addr = 0xcc0470;
    break;
  default:
    goto switchD_001036cc_caseD_5;
  case 7:
    if (cmn_tex_load == 0) {
      ms_load_id = LoadReq(0x104,0xcc0470);
    }
    file_no = 0x106;
    addr = 0xdcb100;
    break;
  case 8:
    CameraCustomInit();
    OutGameInitCamera();
    ms_load_id = LoadReq(0x4c,0x1d05140);
    ms_load_id = LoadReq(0x4e,0x1d15600);
    ms_load_id = LoadReq(0x46,0x1ce0000);
    file_no = 0x66;
    addr = 0x1e90000;
    break;
  case 9:
    ms_load_id = LoadReq(0x4c,0x1d05140);
    ms_load_id = LoadReq(0x4e,0x1d15600);
    ms_load_id = LoadReq(0x46,0x1ce0000);
    ms_load_id = LoadReq(0x51,0x1d573b0);
    StartAlbumModeInit();
    OutGameInitPhoto();
    return;
  case 10:
    motInitMsn();
    ms_load_id = LoadReq(0x4c,0x1d05140);
    BtlModSaveInit();
    return;
  }
  ms_load_id = LoadReq(file_no,addr);
switchD_001036cc_caseD_5:
  return;
}

void TitleModeEnd() {
  dsp_ms.main_step = 0;
  dsp_ms.flm_alp = 0;
  dsp_ms.win_alp = 0;
  dsp_ms.bak_alp = 0;
  dsp_ms.chr_alp = 0;
  dsp_ms.flm_lng = 0;
  if (dsp_ms.next_mode == 5) {
    title_wrk.mode = 0x1a;
  }
  else if (dsp_ms.next_mode == 0xb) {
    outgame_wrk.mode = 4;
  }
  else {
    dsp_ms.now_mode = dsp_ms.next_mode;
  }
  cmn_tex_load = 0;
  return;
}

void ChangeModeSel(int mode) {
  dsp_ms.now_mode = (byte)mode;
  dsp_ms.next_mode = dsp_ms.now_mode;
  OutGameModeChange(8);
  return;
}

void BattleModeExit() {
  dsp_ms.now_mode = 2;
  dsp_ms.next_mode = 2;
  OutGameModeChange(8);
  return;
}

void BattleModeNext() {
  dsp_ms.now_mode = 7;
  dsp_ms.next_mode = 7;
  OutGameModeChange(8);
  return;
}

int CheckClearStage() {
	int i;
	int j;
	
  STAGE_WRK *pSVar1;
  int iVar2;
  int iVar3;
  STAGE_WRK *pSVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  pSVar4 = stage_wrk;
  while( true ) {
    if (3 < iVar3) {
      return iVar3;
    }
    iVar2 = 0;
    if (pSVar4->rank != '\0') {
      pSVar1 = stage_wrk + iVar5;
      iVar2 = 1;
      while ((pSVar1 = pSVar1 + 1, iVar2 < 5 && (pSVar1->rank != '\0'))) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar5 = iVar5 + 5;
    if (iVar2 != 5) break;
    pSVar4 = pSVar4 + 5;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

void ModeSlctDspMsg(u_char alp, u_char mode) {
  if (mode == 1) {
    PutStringYW(0x31,dsp_ms.csr[1] + 5,0x50,0x165,0x808080,alp,0x1000,0);
    return;
  }
  if (1 < mode) {
    if (mode != 2) {
      return;
    }
    PutStringYW(0x31,dsp_ms.csr[1] + 10,0x50,0x165,0x808080,alp,0x1000,0);
    return;
  }
  if (mode != 0) {
    return;
  }
  PutStringYW(0x31,dsp_ms.csr[0],0x50,0x165,0x808080,alp,0x1000,0);
  return;
}

void SetCsrInfoStoryMode() {
  int iVar1;
  
  sm_csr_info[0] = '\x02';
  sm_csr_info[1] = '\x01';
  dsp_ms.csr[1] = 2;
  if ((cribo.clear_info & 1) == 0) {
    iVar1 = CheckClearAll();
    if (iVar1 != 0) {
      dsp_ms.csr[1] = 1;
      sm_csr_info[0] = '\x01';
    }
  }
  else {
    dsp_ms.csr[1] = 0;
    sm_csr_info[0] = '\0';
    if (ingame_wrk.clear_count < 3) {
      sm_csr_info[1] = '\x02';
    }
    else {
      sm_csr_info[1] = '\x03';
    }
  }
  return;
}
