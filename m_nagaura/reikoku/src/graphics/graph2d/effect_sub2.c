// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#49,  not equal)
enum {
	TM_SM_CHAPTER = 0,
	TM_SM_DIFFICULTY = 1,
	TM_SM_GAME_START = 2,
	TM_SM_EXIT = 3,
	TM_SM_DAI = 4,
	TM_SM_ONE = 5,
	TM_SM_TWO = 6,
	TM_SM_THREE = 7,
	TM_SM_SAI = 8,
	TM_SM_SYU = 9,
	TM_SM_YA = 10,
	TM_SM_JO = 11,
	TM_SM_SYO = 12,
	TM_SM_COSTUME = 13,
	TM_SM_CONTINUE = 14,
	TM_SM_NORMAL = 15,
	TM_SM_HARD = 16,
	TM_SM_NIGHTMARE = 17,
	TM_SM_SPECIAL = 18,
	TM_SM_CUSTOM = 19,
	TM_SM_KAKKO_L = 20,
	TM_SM_KAKKO_R = 21,
	TM_SM_PLAY_S = 22,
	TM_SM_PLAY_M = 23,
	TM_SM_STOP = 24,
	TM_SM_FW = 25,
	TM_SMR_S = 26,
	TM_SMR_A = 27,
	TM_SMR_B = 28,
	TM_SMR_C = 29,
	TM_SMR_D = 30,
	TM_SMR_E = 31,
	TM_SMR_PLAY_RESULT = 32,
	TM_SMR_RANK = 33,
	TM_SMR_MISSION_CLEAR1 = 34,
	TM_SMR_MISSION_CLEAR2 = 35,
	TM_SMR_SPACE = 36,
	TM_SMR_MISSION = 37,
	TM_SMR_FAILED = 38,
	TM_SMR_MSN_0 = 39,
	TM_SMR_MSN_1 = 40,
	TM_SMR_MSN_2 = 41,
	TM_SMR_MSN_3 = 42,
	TM_SMR_MSN_4 = 43,
	TM_SMR_MSN_5 = 44,
	TM_SMR_MSN_6 = 45,
	TM_SMR_MSN_7 = 46,
	TM_SMR_MSN_8 = 47,
	TM_SMR_MSN_9 = 48,
	TM_SMR_MSN_10 = 49,
	TM_SMR_MSN_11 = 50
};

struct BTL_ANM_LOAD {
	u_long tex_keep;
	short int tm2_id;
	short int mode;
	short int load_id;
	short int pad;
};

// warning: multiple differing types with the same name (#49,  not equal)
enum {
	BANM_NORM = 0,
	BANM_LOAD = 1,
	BANM_AFTLOAD = 2,
	BANM_TEXDISP = 3
};

// warning: multiple differing types with the same name (#49,  not equal)
enum { // 0x8
	T_BTL_RES_BG00 = 624040512,
	T_BTL_RES_BG01 = -584016828,
	T_BTL_RES_BG02 = -584016760,
	T_BTL_RES_BG03 = -516875060,
	T_BTL_RES_BG04 = -516874928,
	T_BTL_RES_BG05 = -584016428,
	T_BTL_RES_BG06 = -1657758184,
	T_BTL_RES_BG07 = -1657758148,
	T_BTL_RES_BG08 = -1657758112,
	T_BTL_RES_BG09 = -1657758076,
	T_BTL_RES_BG10 = -1657758040
};

// warning: multiple differing types with the same name (#49,  not equal)
enum { // 0x8
	T_S_MODE_BG00 = 624040512,
	T_S_MODE_BG01 = -584016828,
	T_S_MODE_BG02 = -584016760,
	T_S_MODE_BG03 = -516875060,
	T_S_MODE_BG04 = -516874928,
	T_S_MODE_BG05 = -584016428,
	T_S_MODE_BG06 = -1657758184,
	T_S_MODE_BG07 = -1657758148,
	T_S_MODE_BG08 = -1657758112,
	T_S_MODE_BG09 = -1657758076,
	T_S_MODE_BG10 = -1657758040
};

FALL_TABLE fall_table[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
short int fallen_effect_switch = 0;
short int gus_effect_switch = 0;
short int hole_effect_switch = 0;
short int line_effect_switch[4] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0
};
static u_char r_temp = 33;
static u_char g_temp = 48;
static u_char b_temp = 47;
static u_char rate_temp = 7;
SPRT_SDAT btl_strt[11] = {
	/* [0] = */ {
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 108,
		/* .h = */ 146,
		/* .x = */ 80,
		/* .y = */ 116,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [1] = */ {
		/* .u = */ 109,
		/* .v = */ 1,
		/* .w = */ 108,
		/* .h = */ 146,
		/* .x = */ 178,
		/* .y = */ 116,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [2] = */ {
		/* .u = */ 217,
		/* .v = */ 1,
		/* .w = */ 108,
		/* .h = */ 146,
		/* .x = */ 266,
		/* .y = */ 116,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [3] = */ {
		/* .u = */ 325,
		/* .v = */ 1,
		/* .w = */ 108,
		/* .h = */ 146,
		/* .x = */ 364,
		/* .y = */ 116,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [4] = */ {
		/* .u = */ 1,
		/* .v = */ 147,
		/* .w = */ 108,
		/* .h = */ 146,
		/* .x = */ 472,
		/* .y = */ 116,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [5] = */ {
		/* .u = */ 109,
		/* .v = */ 147,
		/* .w = */ 192,
		/* .h = */ 256,
		/* .x = */ -95,
		/* .y = */ 66,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [6] = */ {
		/* .u = */ 301,
		/* .v = */ 147,
		/* .w = */ 192,
		/* .h = */ 256,
		/* .x = */ 565,
		/* .y = */ 66,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [7] = */ {
		/* .u = */ 1,
		/* .v = */ 405,
		/* .w = */ 255,
		/* .h = */ 70,
		/* .x = */ 356,
		/* .y = */ 156,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [8] = */ {
		/* .u = */ 1,
		/* .v = */ 405,
		/* .w = */ 255,
		/* .h = */ 70,
		/* .x = */ 43,
		/* .y = */ 156,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [9] = */ {
		/* .u = */ 1,
		/* .v = */ 405,
		/* .w = */ 255,
		/* .h = */ 70,
		/* .x = */ 200,
		/* .y = */ 6,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [10] = */ {
		/* .u = */ 1,
		/* .v = */ 405,
		/* .w = */ 255,
		/* .h = */ 70,
		/* .x = */ 200,
		/* .y = */ 306,
		/* .pri = */ 25,
		/* .alp = */ 128
	}
};
SPRT_SDAT btl_rslt[23] = {
	/* [0] = */ {
		/* .u = */ 19,
		/* .v = */ 10,
		/* .w = */ 32,
		/* .h = */ 35,
		/* .x = */ 380,
		/* .y = */ 59,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [1] = */ {
		/* .u = */ 51,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [2] = */ {
		/* .u = */ 81,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [3] = */ {
		/* .u = */ 112,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [4] = */ {
		/* .u = */ 142,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [5] = */ {
		/* .u = */ 172,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [6] = */ {
		/* .u = */ 202,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [7] = */ {
		/* .u = */ 233,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [8] = */ {
		/* .u = */ 264,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [9] = */ {
		/* .u = */ 296,
		/* .v = */ 1,
		/* .w = */ 32,
		/* .h = */ 44,
		/* .x = */ 380,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [10] = */ {
		/* .u = */ 1,
		/* .v = */ 45,
		/* .w = */ 120,
		/* .h = */ 46,
		/* .x = */ 138,
		/* .y = */ 372,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [11] = */ {
		/* .u = */ 121,
		/* .v = */ 45,
		/* .w = */ 120,
		/* .h = */ 46,
		/* .x = */ 258,
		/* .y = */ 372,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [12] = */ {
		/* .u = */ 241,
		/* .v = */ 45,
		/* .w = */ 120,
		/* .h = */ 46,
		/* .x = */ 378,
		/* .y = */ 372,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [13] = */ {
		/* .u = */ 1,
		/* .v = */ 91,
		/* .w = */ 261,
		/* .h = */ 44,
		/* .x = */ 383,
		/* .y = */ 20,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [14] = */ {
		/* .u = */ 1,
		/* .v = */ 135,
		/* .w = */ 256,
		/* .h = */ 60,
		/* .x = */ 188,
		/* .y = */ 100,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [15] = */ {
		/* .u = */ 1,
		/* .v = */ 196,
		/* .w = */ 510,
		/* .h = */ 62,
		/* .x = */ -540,
		/* .y = */ 80,
		/* .pri = */ 25,
		/* .alp = */ 129
	},
	/* [16] = */ {
		/* .u = */ 1,
		/* .v = */ 196,
		/* .w = */ 510,
		/* .h = */ 62,
		/* .x = */ 718,
		/* .y = */ 80,
		/* .pri = */ 25,
		/* .alp = */ 129
	},
	/* [17] = */ {
		/* .u = */ 497,
		/* .v = */ 131,
		/* .w = */ 14,
		/* .h = */ 64,
		/* .x = */ 568,
		/* .y = */ 70,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [18] = */ {
		/* .u = */ 1,
		/* .v = */ 259,
		/* .w = */ 458,
		/* .h = */ 42,
		/* .x = */ -505,
		/* .y = */ 145,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [19] = */ {
		/* .u = */ 1,
		/* .v = */ 259,
		/* .w = */ 458,
		/* .h = */ 42,
		/* .x = */ 753,
		/* .y = */ 145,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [20] = */ {
		/* .u = */ 380,
		/* .v = */ 1,
		/* .w = */ 116,
		/* .h = */ 34,
		/* .x = */ 504,
		/* .y = */ 176,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [21] = */ {
		/* .u = */ 257,
		/* .v = */ 187,
		/* .w = */ 200,
		/* .h = */ 8,
		/* .x = */ 220,
		/* .y = */ 200,
		/* .pri = */ 25,
		/* .alp = */ 128
	},
	/* [22] = */ {
		/* .u = */ 1,
		/* .v = */ 91,
		/* .w = */ 261,
		/* .h = */ 44,
		/* .x = */ 163,
		/* .y = */ 50,
		/* .pri = */ 25,
		/* .alp = */ 128
	}
};
SPRT_SDAT msg_strt = {
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 0,
	/* .h = */ 0,
	/* .x = */ 19,
	/* .y = */ 322,
	/* .pri = */ 25,
	/* .alp = */ 128
};
SPRT_SDAT btl_msel[0] = {
};
SPRT_SDAT btl_msel2[0] = {
};
ANM2D_DAT_TABLE anm2d_dat[0][12] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
ANM2D_WRK_TABLE wrk_table[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
ANM_WRK anm_wrk = CCC_TYPE_LOOKUP_FAILED;
static short int anm_no_keep = -1;
static short int anm_load_id = 0;
static u_char anm_init = 0;
static u_char clear_end = 0;
static u_char clear_end2 = 0;
static u_char clear_end3 = 0;
int clear_anime_timer = 0;
SPRT_DAT clear_all[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306836994119047744,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306846338759826500,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2306855684608662664,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2306873826617662668,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2306891968559521104,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2306901314341215700,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2306906261069798936,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2306911208872123964,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2306916156674448992,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2306921104476774020,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2306926052279099048,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	}
};
SPRT_DAT story_end[11] = {
	/* [0] = */ {
		/* .tex0 = */ 2306836994119047744,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [1] = */ {
		/* .tex0 = */ 2306846338759826500,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 0,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [2] = */ {
		/* .tex0 = */ 2306855684608662664,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 128,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [3] = */ {
		/* .tex0 = */ 2306873826617662668,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [4] = */ {
		/* .tex0 = */ 2306891968559521104,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 128,
		/* .x = */ 256,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [5] = */ {
		/* .tex0 = */ 2306901314341215700,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 512,
		/* .y = */ 256,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [6] = */ {
		/* .tex0 = */ 2306906261069798936,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [7] = */ {
		/* .tex0 = */ 2306911208872123964,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 128,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [8] = */ {
		/* .tex0 = */ 2306916156674448992,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 256,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [9] = */ {
		/* .tex0 = */ 2306921104476774020,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 384,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	},
	/* [10] = */ {
		/* .tex0 = */ 2306926052279099048,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 512,
		/* .y = */ 384,
		/* .pri = */ 122880,
		/* .alpha = */ 128
	}
};
static sceVu0FVECTOR leaves[600];
static sceVu0FVECTOR leavesaim[600];
static sceVu0FVECTOR accel[600];
static sceVu0FVECTOR rots[600];
static sceVu0FVECTOR hole_gus[200];
static sceVu0FVECTOR line_gus[4][80];
LEAVES_TABLE fall_wrk = CCC_TYPE_LOOKUP_FAILED;
LEAVES_TABLE gus_wrk = CCC_TYPE_LOOKUP_FAILED;
LEAVES_TABLE hole_wrk = CCC_TYPE_LOOKUP_FAILED;
LEAVES_TABLE line_wrk[4] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
BTL_ANM_LOAD banm = CCC_TYPE_LOOKUP_FAILED;
enum T_LOAD_MODE {
	BANM_NORM = 0,
	BANM_LOAD = 1,
	BANM_AFTLOAD = 2,
	BANM_TEXDISP = 3
} = BANM_NORM;

void InitEffectSub2() {
  fallen_effect_switch = 0;
  gus_effect_switch = 0;
  memset(&fall_wrk,0,0x17b0);
  memset(&gus_wrk,0,0x17b0);
  memset(&hole_wrk,0,0x17b0);
  InitCallAnm();
  return;
}

void CallFallenEffect(float *mpos, int area, int fall_num, int fall_mode) {
  fallen_effect_switch = 1;
  if (fall_wrk.init_flg == 0) {
    FallObjInitAll(mpos,area,fall_num,fall_mode,0x5dc);
    fall_wrk.init_flg = 1;
  }
  FallObjDropSet();
  return;
}

void StopFallenEffect() {
  fallen_effect_switch = 0;
  fall_wrk.init_flg = 0;
  return;
}

void FallObjInit(float *mpos, int leaf_no, int area, int fall_num, int fall_mode) {
	int tmp;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float fVar4;
  undefined in_vf0 [16];
  undefined auVar5 [16];
  undefined4 in_vuR;
  
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar5,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar4 = *mpos + (float)(int)((float)area * SUB164(auVar5,0));
  }
  else {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar4 = *mpos - (float)(int)((float)area * SUB164(auVar5,0));
  }
  leaves[leaf_no][0] = fVar4;
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar5,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    fVar4 = mpos[2] + (float)(int)((float)area * SUB164(auVar5,0));
  }
  else {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    fVar4 = mpos[2] - (float)(int)((float)area * SUB164(auVar5,0));
  }
  leaves[leaf_no][2] = fVar4;
  fVar4 = mpos[1];
  iVar3 = (int)(short)fall_wrk.dist;
  leaves[leaf_no][3] = 1.0;
  leaves[leaf_no][1] = fVar4 - (float)iVar3;
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar5,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    leavesaim[leaf_no][0] =
         (float)(int)(*(float *)(&DAT_00270e3c + fall_mode * 0x40) * SUB164(auVar5,0));
  }
  else {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    leavesaim[leaf_no][0] =
         (float)-(int)(*(float *)(&DAT_00270e3c + fall_mode * 0x40) * SUB164(auVar5,0));
  }
  iVar3 = fall_mode * 0x40;
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar5,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    leavesaim[leaf_no][2] = (float)(int)(*(float *)(&DAT_00270e3c + iVar3) * SUB164(auVar5,0));
  }
  else {
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    leavesaim[leaf_no][2] = (float)-(int)(*(float *)(&DAT_00270e3c + iVar3) * SUB164(auVar5,0));
  }
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  fVar4 = *(float *)(&DAT_00270e34 + iVar3);
  uVar1 = *(ushort *)(&DAT_00270e66 + iVar3);
  fall_wrk.rgba[leaf_no][0] = *(ushort *)(&DAT_00270e64 + iVar3);
  uVar2 = *(ushort *)(&DAT_00270e68 + iVar3);
  fall_wrk.rgba[leaf_no][1] = uVar1;
  uVar1 = *(ushort *)(&DAT_00270e6a + iVar3);
  fall_wrk.rgba[leaf_no][2] = uVar2;
  rots[leaf_no][2] = 0.0;
  accel[leaf_no][2] = 0.0;
  accel[leaf_no][0] = 0.0;
  fall_wrk.rgba[leaf_no][3] = uVar1;
  fall_wrk.at_ground[leaf_no] = 0;
  accel[leaf_no][1] = (float)(int)((fVar4 - 1.0) + (float)(int)(SUB164(auVar5,0) * 3.0));
  rots[leaf_no][0] = 0.0;
  rots[leaf_no][1] = 0.0;
  return;
}

void FallObjInitAll(float *mpos, int area, int fall_num, int fall_mode, int height) {
	int i;
	
  int iVar1;
  int iVar2;
  
  fall_wrk.dist = (ushort)height;
  iVar1 = (fall_mode << 0x10) >> 10;
  fall_wrk.area_keep = (ushort)(area / 2);
  fall_wrk.mode_keep = (ushort)fall_mode;
  fall_wrk.fall_count = 0;
  fall_wrk.fall_rate =
       ((float)(int)(short)fall_wrk.dist / *(float *)(&DAT_00270e34 + iVar1) +
       (float)*(int *)(&DAT_00270e60 + iVar1)) / (float)fall_num;
  iVar1 = 0;
  fall_wrk.pos_p = mpos;
  fall_wrk.fnum_keep = fall_num;
  if (0 < fall_num) {
    do {
      iVar2 = iVar1 + 1;
      FallObjInit((float *)fall_wrk.pos_p,iVar1,area,fall_num,fall_mode);
      iVar1 = iVar2;
    } while (iVar2 < fall_num);
  }
  return;
}

void FallObjDropSet() {
	int i;
	float r;
	
  bool bVar1;
  int iVar2;
  undefined in_vf0 [16];
  undefined auVar3 [16];
  undefined4 in_vuR;
  
  iVar2 = 0;
  if (0 < fall_wrk.fnum_keep) {
    do {
                    /* inlined from effect.h */
      auVar3 = _vrnext(in_vuR);
      auVar3 = _vsubbc(auVar3,in_vf0);
      auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      bVar1 = iVar2 + 1 < fall_wrk.fnum_keep;
      leaves[iVar2][1] =
           leaves[iVar2][1] +
           ((float)(int)((float)(int)(short)fall_wrk.dist * SUB164(auVar3,0)) -
           (float)*(int *)(&DAT_00270e60 + (short)fall_wrk.mode_keep * 0x40) *
           *(float *)(&DAT_00270e34 + (short)fall_wrk.mode_keep * 0x40));
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  fall_wrk.fall_count = fall_wrk.fnum_keep;
  fall_wrk.rate_remain = fall_wrk.fall_rate;
  return;
}

void FallenObjects() {
	static int now_status = 0;
	int i;
	
  ushort uVar1;
  void *mpos;
  int fall_num;
  ushort *puVar2;
  short *psVar3;
  int fall_mode;
  float (*leaf) [4];
  int leaf_no;
  float (*axel) [4];
  int iVar4;
  float (*aim) [4];
  float (*rotation) [4];
  
  if (fallen_effect_switch != 0) {
    if (fall_wrk.fall_count < fall_wrk.fnum_keep) {
      for (fall_wrk.rate_remain = fall_wrk.rate_remain + 1.0;
          fall_wrk.fall_rate <= fall_wrk.rate_remain;
          fall_wrk.rate_remain = fall_wrk.rate_remain - fall_wrk.fall_rate) {
        fall_wrk.fall_count = fall_wrk.fall_count + 1;
      }
    }
    leaf_no = 0;
    if (0 < fall_wrk.fnum_keep) {
      leaf = leaves;
      rotation = rots;
      aim = leavesaim;
      axel = accel;
      iVar4 = 0;
      do {
        uVar1 = fall_wrk.mode_keep;
        if (fall_wrk.fall_count < leaf_no) {
          return;
        }
        if (plyr_wrk.move_box.spd.w - 20.0 <= (*leaf)[1]) {
          puVar2 = fall_wrk.at_ground + leaf_no;
          uVar1 = *puVar2;
          psVar3 = (short *)((int)fall_wrk.rgba + iVar4 + 6);
          *puVar2 = uVar1 + 1;
          if (0 < *psVar3) {
            *psVar3 = (short)(int)((float)(int)*(short *)(&DAT_00270e6a +
                                                         (short)fall_wrk.mode_keep * 0x40) -
                                  ((float)(int)(short)(uVar1 + 1) /
                                  (float)*(int *)(&DAT_00270e60 + (short)fall_wrk.mode_keep * 0x40))
                                  * (float)(int)*(short *)(&DAT_00270e6a +
                                                          (short)fall_wrk.mode_keep * 0x40));
          }
          uVar1 = fall_wrk.area_keep;
          fall_num = fall_wrk.fnum_keep;
          mpos = fall_wrk.pos_p;
          fall_mode = (int)(short)fall_wrk.mode_keep;
          if ((long)*(int *)(&DAT_00270e60 + fall_mode * 0x40) < (long)(short)*puVar2) {
            (*leaf)[1] = fall_wrk.mpos_keep[1];
            FallObjInit((float *)mpos,leaf_no,(int)(short)uVar1,fall_num,fall_mode);
          }
        }
        else {
          (*leaf)[1] = (*leaf)[1] + (*axel)[1];
          FallObjTrans((float *)leaf,(float *)axel,(float *)aim,(int)(short)uVar1);
          FallObjRot((float *)rotation,(float *)axel,(float *)aim,(int)(short)fall_wrk.mode_keep);
        }
        puVar2 = (ushort *)((int)fall_wrk.rgba + iVar4);
        leaf_no = leaf_no + 1;
        aim = aim[1];
        FallObjLight((float *)leaf,puVar2,(int)(short)fall_wrk.mode_keep);
        axel = axel[1];
        FallObjDraw((float *)leaf,(float *)rotation,puVar2,(int)(short)fall_wrk.mode_keep);
        leaf = leaf[1];
        rotation = rotation[1];
        iVar4 = iVar4 + 8;
      } while (leaf_no < fall_wrk.fnum_keep);
    }
  }
  return;
}

void FallObjTrans(float *leaf, float *axel, float *aim, int fall_mode) {
	int tmp;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  int iVar1;
  float fVar2;
  undefined in_vf0 [16];
  undefined auVar3 [16];
  undefined4 in_vuR;
  
  fVar2 = *axel;
  if (fVar2 < *aim) {
    fVar2 = fVar2 + *(float *)(&fall_table + fall_mode * 0x40);
    *axel = fVar2;
    if (*aim * 0.5 <= fVar2) {
      fVar2 = *aim - fVar2;
    }
    *leaf = *leaf + fVar2;
    if (*axel < *aim) goto LAB_00120e44;
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    if ((int)(SUB164(auVar3,0) * 10.0) + 1 < 6) goto LAB_00120dd0;
LAB_00120e08:
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    *aim = (float)-(int)(*(float *)(&DAT_00270e3c + fall_mode * 0x40) * SUB164(auVar3,0));
  }
  else {
    fVar2 = fVar2 - *(float *)(&fall_table + fall_mode * 0x40);
    *axel = fVar2;
    if (fVar2 <= *aim * 0.5) {
      fVar2 = *aim - fVar2;
    }
    *leaf = *leaf + fVar2;
    if (*aim < *axel) goto LAB_00120e44;
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    if (5 < (int)(SUB164(auVar3,0) * 10.0) + 1) goto LAB_00120e08;
LAB_00120dd0:
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    *aim = (float)(int)(*(float *)(&DAT_00270e3c + fall_mode * 0x40) * SUB164(auVar3,0));
  }
  *axel = 0.0;
LAB_00120e44:
  iVar1 = fall_mode * 0x40;
                    /* inlined from effect.h */
  auVar3 = _vrnext(in_vuR);
  auVar3 = _vsubbc(auVar3,in_vf0);
  auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar3,0) * 10.0) + 1 < 6) {
    fVar2 = leaf[1] + 1.0;
  }
  else {
    fVar2 = leaf[1] - 1.0;
  }
  leaf[1] = fVar2;
  fVar2 = axel[2];
  if (fVar2 < aim[2]) {
    fVar2 = fVar2 + *(float *)(&DAT_00270e38 + iVar1);
    axel[2] = fVar2;
    if (fVar2 < aim[2] * 0.5) {
      fVar2 = leaf[2] + fVar2;
    }
    else {
      fVar2 = leaf[2] + (aim[2] - fVar2);
    }
    leaf[2] = fVar2;
    if (axel[2] < aim[2]) {
      return;
    }
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
    fVar2 = SUB164(auVar3,0);
                    /* end of inlined section */
  }
  else {
    fVar2 = fVar2 - *(float *)(&DAT_00270e38 + iVar1);
    axel[2] = fVar2;
    if (aim[2] * 0.5 < fVar2) {
      fVar2 = leaf[2] + fVar2;
    }
    else {
      fVar2 = leaf[2] + (aim[2] - fVar2);
    }
    leaf[2] = fVar2;
    if (aim[2] < axel[2]) {
      return;
    }
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
    fVar2 = SUB164(auVar3,0);
                    /* end of inlined section */
  }
  if ((int)(fVar2 * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    aim[2] = (float)(int)(*(float *)(&DAT_00270e3c + iVar1) * SUB164(auVar3,0));
  }
  else {
                    /* inlined from effect.h */
    auVar3 = _vrnext(in_vuR);
    auVar3 = _vsubbc(auVar3,in_vf0);
    auVar3 = _qmfc2(SUB164(auVar3,0));
                    /* end of inlined section */
    aim[2] = (float)-(int)(*(float *)(&DAT_00270e3c + iVar1) * SUB164(auVar3,0));
  }
  axel[2] = 0.0;
  return;
}

void FallObjRot(float *rotation, float *axel, float *aim, int fall_mode) {
  float fVar1;
  float fVar2;
  
  if (fall_mode == 0) {
    Get2PosRot((float *)&camera,&camera.i.x,rotation,rotation + 1);
    return;
  }
  if (1 < fall_mode - 1U) {
    return;
  }
  fVar2 = *axel;
  fVar1 = *aim;
  if ((fVar1 <= fVar2) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
    if ((fVar2 < fVar1) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
      rotation[1] = (*(float *)(&DAT_00270e54 + fall_mode * 0x40) * DAT_003551f4) / 180.0;
      goto LAB_001211b0;
    }
    if (fVar1 * 0.5 < fVar2) {
      fVar2 = fVar2 * DAT_003551ec;
    }
    else {
      fVar2 = (fVar1 - fVar2) * DAT_003551f0;
    }
  }
  else if (fVar2 < fVar1 * 0.5) {
    fVar2 = fVar2 * DAT_003551e4;
  }
  else {
    fVar2 = (fVar1 - fVar2) * DAT_003551e8;
  }
  rotation[2] = fVar2 / (fVar1 * 0.5);
LAB_001211b0:
  fVar2 = axel[2];
  fVar1 = aim[2];
  if ((fVar1 <= fVar2) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
    if ((fVar2 < fVar1) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
      rotation[1] = (*(float *)(&DAT_00270e54 + fall_mode * 0x40) * DAT_00355208) / 180.0;
      return;
    }
    if (fVar2 <= fVar1 * 0.5) {
      fVar2 = (fVar1 - fVar2) * DAT_00355204;
    }
    else {
      fVar2 = fVar2 * DAT_00355200;
    }
  }
  else if (fVar2 < fVar1 * 0.5) {
    fVar2 = fVar2 * DAT_003551f8;
  }
  else {
    fVar2 = (fVar1 - fVar2) * DAT_003551fc;
  }
  *rotation = fVar2 / (fVar1 * 0.5);
  return;
}

void FallObjWind(float *leaf, int fall_mode) {
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fall_mode * 0x40;
  iVar3 = *(int *)(&DAT_00270e40 + iVar1);
  iVar2 = *(int *)(&DAT_00270e44 + iVar1);
  leaf[2] = leaf[2] + (float)*(int *)(&DAT_00270e48 + iVar1);
  *leaf = *leaf + (float)iVar3;
  leaf[1] = leaf[1] + (float)iVar2;
  return;
}

void FallObjLight(float *leaf, short int *rgba, int fall_mode) {
	float tes1;
	float tes2;
	
  int iVar1;
  float tes1;
  float tes2;
  
  tes2 = 0.0;
  tes1 = 0.0;
  iVar1 = GetCornHitCheck2(leaf,1200.0,&tes1,(float *)((uint)&tes1 | 4));
  if (iVar1 == 0) {
    iVar1 = fall_mode * 0x40;
    *rgba = (ushort)(((int)((uint)*(ushort *)(&DAT_00270e64 + iVar1) << 0x10) >> 0x10) -
                     ((int)((uint)*(ushort *)(&DAT_00270e64 + iVar1) << 0x10) >> 0x1f) >> 1);
    rgba[1] = (ushort)(((int)((uint)*(ushort *)(&DAT_00270e66 + iVar1) << 0x10) >> 0x10) -
                       ((int)((uint)*(ushort *)(&DAT_00270e66 + iVar1) << 0x10) >> 0x1f) >> 1);
    rgba[2] = (ushort)(((int)((uint)*(ushort *)(&DAT_00270e68 + iVar1) << 0x10) >> 0x10) -
                       ((int)((uint)*(ushort *)(&DAT_00270e68 + iVar1) << 0x10) >> 0x1f) >> 1);
  }
  else {
    iVar1 = fall_mode * 0x40;
    *rgba = *(ushort *)(&DAT_00270e64 + iVar1);
    rgba[1] = *(ushort *)(&DAT_00270e66 + iVar1);
    rgba[2] = *(ushort *)(&DAT_00270e68 + iVar1);
  }
  return;
}

void FallObjDraw(float *mpos, float *rotation, short int *rgba, int fall_mode) {
	int i;
	int w;
	int th;
	int tw;
	int bak;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	u_char mr;
	u_char mg;
	u_char mb;
	u_long tex0;
	
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  Q_WORDDATA *pQVar7;
  int (*paiVar8) [4];
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int (*paiVar14) [4];
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float wlm [4] [4];
  float slm [4] [4];
  int ivec [4] [4];
  float wpos [4];
  float ppos [4] [4];
  
  wpos[2] = mpos[2];
  wpos[0] = *mpos;
  wpos[1] = mpos[1];
  ppos[0]._0_8_ = DAT_0034a750;
  ppos[0]._8_8_ = DAT_0034a758;
  ppos[1]._0_8_ = DAT_0034a760;
  ppos[1]._8_8_ = DAT_0034a768;
  ppos[2]._0_8_ = DAT_0034a770;
  ppos[2]._8_8_ = DAT_0034a778;
  ppos[3]._0_8_ = DAT_0034a780;
  ppos[3]._8_8_ = DAT_0034a788;
  if (monochrome_mode == 0) {
    uVar17 = (uint)*(byte *)rgba;
    uVar18 = (uint)*(byte *)(rgba + 1);
    uVar16 = (uint)*(byte *)(rgba + 2);
  }
  else {
    uVar16 = ((int)(short)*rgba + (int)(short)rgba[1] + (int)(short)rgba[2]) / 3 & 0xff;
    uVar17 = uVar16;
    uVar18 = uVar16;
  }
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(*rotation,wlm,wlm);
  sceVu0RotMatrixY(rotation[1],wlm,wlm);
  sceVu0RotMatrixZ(rotation[2],wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar14 = ivec;
  sceVu0RotTransPersN(paiVar14,(Matrix4x4 *)slm,ppos,4,0);
  bVar3 = false;
  iVar12 = 3;
  paiVar8 = paiVar14;
  do {
    iVar12 = iVar12 + -1;
    piVar4 = *paiVar8;
    if (0x8000 < (*paiVar8)[0] - 0x4000U) {
      bVar3 = true;
    }
    if (0x8000 < (*paiVar8)[1] - 0x4000U) {
      bVar3 = true;
    }
    paiVar8 = paiVar8[1];
    if (0xffff00 < piVar4[2] - 0xffU) {
      bVar3 = true;
    }
  } while (-1 < iVar12);
  iVar12 = 4;
  if (!bVar3) {
    if (fall_mode == 0) {
      iVar12 = monochrome_mode + 0x3a;
    }
    else if (fall_mode == 1) {
      iVar12 = monochrome_mode + 0x30;
    }
    else if (fall_mode == 2) {
      iVar12 = monochrome_mode + 0x14;
    }
    iVar12 = iVar12 * 0x20;
    uVar1 = *(ushort *)(&DAT_0026be4e + iVar12);
    uVar2 = *(ushort *)(&DAT_0026be4c + iVar12);
    uVar15 = *(ulong *)(&effdat + iVar12);
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    iVar12 = ndpkt;
    pQVar6 = pbuf + ndpkt;
    pQVar6->ui32[0] = 0;
    pQVar6->ui32[1] = 0;
    pQVar6->ui32[2] = 0;
    pQVar6->ui32[3] = 0;
    pQVar5[ndpkt + 1].ul64[0] = 0x1000000000000006;
    pQVar5[ndpkt + 1].ul64[1] = 0xe;
    pQVar5[ndpkt + 2].ul64[0] = 0;
    pQVar5[ndpkt + 2].ul64[1] = 0x3f;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 3].ul64[0] = uVar15;
    pQVar5[ndpkt + 4].ul64[0] = 0x161;
    pQVar5[ndpkt + 4].ul64[1] = 0x14;
    pQVar5[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar5[ndpkt + 5].ul64[1] = 0x4e;
    pQVar5[ndpkt + 6].ul64[0] = 0x44;
    pQVar5[ndpkt + 6].ul64[1] = 0x42;
    iVar9 = ndpkt + 8;
    pQVar5[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar5[ndpkt + 7].ul64[1] = 0x47;
    ndpkt = ndpkt + 9;
    pQVar5[iVar9].ul64[1] = 0x431;
    pQVar5[iVar9].ul64[0] = 0x30aa400000008004;
    uVar13 = 0;
    do {
      uVar10 = 0;
      if ((uVar13 & 1) != 0) {
        uVar10 = (uint)uVar2 << 4;
      }
      pQVar6 = pQVar5 + ndpkt;
      pQVar6->ui32[0] = uVar17;
      pQVar6->ui32[1] = uVar18;
      pQVar6->ui32[2] = uVar16;
      pQVar7 = pQVar5 + ndpkt + 1;
      uVar11 = 0;
      if ((int)uVar13 / 2 != 0) {
        uVar11 = (uint)uVar1 << 4;
      }
      iVar9 = ndpkt + 3;
      pQVar6->ui32[3] = (int)(short)rgba[3];
      pQVar7->ui32[0] = uVar10;
      pQVar6 = pQVar5 + ndpkt + 2;
      pQVar7->ui32[1] = uVar11;
      uVar10 = 0x8000;
      pQVar7->ui32[3] = 0;
      if (1 < (int)uVar13) {
        uVar10 = 0;
      }
      pQVar7->ui32[2] = 0;
      uVar13 = uVar13 + 1;
      pQVar6->ui32[0] = (*paiVar14)[0];
      pQVar6->ui32[1] = (*paiVar14)[1];
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      pQVar6->ui32[2] = piVar4[2];
      ndpkt = iVar9;
      pQVar6->ui32[3] = uVar10;
    } while ((int)uVar13 < 4);
    pbuf[iVar12].ui32[0] = (iVar9 - (iVar12 + -0x70000000)) - 1;
  }
  return;
}

void GusObjDebug() {
  if (*key_now[14] != 0) {
    if (*key_now[10] == 0) {
      if (r_temp != 0xff) {
        r_temp = r_temp + '\x01';
      }
    }
    else if (r_temp != '\0') {
      r_temp = r_temp + 0xff;
    }
  }
  if (*key_now[15] != 0) {
    if (*key_now[10] == 0) {
      if (g_temp != 0xff) {
        g_temp = g_temp + '\x01';
      }
    }
    else if (g_temp != '\0') {
      g_temp = g_temp + 0xff;
    }
  }
  if (*key_now[5] != 0) {
    if (*key_now[10] == 0) {
      if (b_temp != 0xff) {
        b_temp = b_temp + '\x01';
        return;
      }
    }
    else if (b_temp != '\0') {
      b_temp = b_temp + 0xff;
    }
  }
  return;
}

void CallGusEffect(float *mpos, int area, int height) {
  gus_effect_switch = 1;
  if (gus_wrk.init_flg != 0) {
    GusObjMove(mpos);
    return;
  }
  GusObjInitAll(mpos,area,height);
  gus_wrk.init_flg = 1;
  return;
}

void StopGusEffect() {
  gus_effect_switch = 0;
  return;
}

void GusObjMove(float *mpos) {
  gus_wrk.mpos_keep[0] = *mpos;
  gus_wrk.pos_p = mpos;
  gus_wrk.mpos_keep[2] = mpos[2];
  return;
}

void GusObjInit(float *mpos, int leaf_no, int area) {
	int tmp;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  float fVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined4 in_vuR;
  
  gus_wrk.mpos_keep[0] = *mpos;
  gus_wrk.mpos_keep[1] = mpos[1];
  gus_wrk.mpos_keep[2] = mpos[2];
  gus_wrk.mpos_keep[3] = mpos[3];
                    /* inlined from effect.h */
  auVar2 = _vrnext(in_vuR);
  auVar2 = _vsubbc(auVar2,in_vf0);
  auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar2,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar2 = _vrnext(in_vuR);
    auVar2 = _vsubbc(auVar2,in_vf0);
    auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
    leaves[leaf_no][0] = (float)(int)((float)(int)(short)gus_wrk.area_keep * SUB164(auVar2,0));
  }
  else {
                    /* inlined from effect.h */
    auVar2 = _vrnext(in_vuR);
    auVar2 = _vsubbc(auVar2,in_vf0);
    auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
    leaves[leaf_no][0] = (float)-(int)((float)(int)(short)gus_wrk.area_keep * SUB164(auVar2,0));
  }
                    /* inlined from effect.h */
  auVar2 = _vrnext(in_vuR);
  auVar2 = _vsubbc(auVar2,in_vf0);
  auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar2,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar2 = _vrnext(in_vuR);
    auVar2 = _vsubbc(auVar2,in_vf0);
    auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
    leaves[leaf_no][2] = (float)(int)((float)(int)(short)gus_wrk.area_keep * SUB164(auVar2,0));
  }
  else {
                    /* inlined from effect.h */
    auVar2 = _vrnext(in_vuR);
    auVar2 = _vsubbc(auVar2,in_vf0);
    auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
    leaves[leaf_no][2] = (float)-(int)((float)(int)(short)gus_wrk.area_keep * SUB164(auVar2,0));
  }
  fVar1 = mpos[1];
  gus_wrk.rgba[leaf_no][0] = 0x80;
  leaves[leaf_no][3] = 1.0;
  leaves[leaf_no][1] = fVar1;
  gus_wrk.rgba[leaf_no][1] = 0x80;
  accel[leaf_no][2] = 0.0;
  gus_wrk.rgba[leaf_no][2] = 0x80;
  rots[leaf_no][2] = 0.0;
  accel[leaf_no][1] = 0.0;
  accel[leaf_no][0] = 0.0;
  gus_wrk.rgba[leaf_no][3] = 0x40;
  rots[leaf_no][0] = 0.0;
  rots[leaf_no][1] = 0.0;
                    /* inlined from effect.h */
  auVar2 = _vrnext(in_vuR);
  auVar2 = _vsubbc(auVar2,in_vf0);
  auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
  gus_wrk.at_ground[leaf_no] = (ushort)(int)(SUB164(auVar2,0) + SUB164(auVar2,0));
  return;
}

void GusObjInit3(float *mpos, int leaf_no, int area, int fall_mode) {
	float r;
	
  ushort uVar1;
  int iVar2;
  float fVar3;
  undefined in_vf0 [16];
  undefined auVar4 [16];
  undefined4 in_vuR;
  
  if (area == 0) {
    trap(7);
  }
  leaves[leaf_no][0] = (float)(-area / 2 + (leaf_no * 0xfa) % area);
  leaves[leaf_no][2] = (float)(((leaf_no * 0xfa) / area) * 0xfa + -area / 2);
  fVar3 = mpos[1];
  leaves[leaf_no][3] = 1.0;
  leaves[leaf_no][1] = fVar3;
                    /* inlined from effect.h */
  auVar4 = _vrnext(in_vuR);
  auVar4 = _vsubbc(auVar4,in_vf0);
  auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
  fVar3 = *(float *)(&DAT_00270e34 + fall_mode * 0x40);
  iVar2 = dptoli((long)((double)SUB164(auVar4,0) * 3.0));
  iVar2 = dptoli((long)(((double)fVar3 - 1.0) + (double)(long)iVar2));
  gus_wrk.rgba[leaf_no][0] = 0x80;
  gus_wrk.rgba[leaf_no][1] = 0x80;
  accel[leaf_no][1] = (float)iVar2;
  accel[leaf_no][2] = 0.0;
  uVar1 = *(ushort *)(&DAT_00270e6a + fall_mode * 0x40);
  rots[leaf_no][2] = 0.0;
  accel[leaf_no][0] = 0.0;
  gus_wrk.rgba[leaf_no][2] = 0x80;
  gus_wrk.rgba[leaf_no][3] = uVar1;
  gus_wrk.at_ground[leaf_no] = 0;
  rots[leaf_no][0] = 0.0;
  rots[leaf_no][1] = 0.0;
  return;
}

void GusObjInitAll(float *mpos, int area, int height) {
	int i;
	
  int leaf_no;
  int iVar1;
  
  gus_wrk.dist = (ushort)height;
  gus_wrk.mpos_keep[0] = *mpos;
  gus_wrk.area_keep = (ushort)(area / 2);
  gus_wrk.mpos_keep[1] = mpos[1];
  gus_wrk.mpos_keep[2] = mpos[2];
  gus_wrk.fall_count = 0;
  gus_wrk.fnum_keep = (int)((float)(int)(short)gus_wrk.dist / 7.0);
  gus_wrk.mpos_keep[3] = mpos[3];
  gus_wrk.fall_rate = 7.0;
  leaf_no = 0;
  gus_wrk.pos_p = mpos;
  if (0 < gus_wrk.fnum_keep) {
    do {
      iVar1 = leaf_no + 1;
      GusObjInit((float *)gus_wrk.pos_p,leaf_no,area);
      leaf_no = iVar1;
    } while (iVar1 < gus_wrk.fnum_keep);
  }
  gus_wrk.init_flg = 1;
  return;
}

void GusObjects() {
	int i;
	
  int iVar1;
  int iVar2;
  
  if (gus_effect_switch != 0) {
    if (gus_wrk.fall_count < gus_wrk.fnum_keep) {
      for (gus_wrk.rate_remain = gus_wrk.rate_remain + 1.0; gus_wrk.fall_rate <= gus_wrk.rate_remain
          ; gus_wrk.rate_remain = gus_wrk.rate_remain - gus_wrk.fall_rate) {
        gus_wrk.fall_count = gus_wrk.fall_count + 1;
      }
    }
    iVar2 = 0;
    if (0 < gus_wrk.fnum_keep) {
      do {
        if ((iVar2 <= gus_wrk.fall_count) && (iVar1 = GusObjTrans(iVar2), iVar1 != 0)) {
          GusObjInit((float *)gus_wrk.pos_p,iVar2,(int)(short)gus_wrk.area_keep);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < gus_wrk.fnum_keep);
    }
    iVar2 = 0;
    if (0 < gus_wrk.fnum_keep) {
      do {
        if (iVar2 <= gus_wrk.fall_count) {
          GusAlpha(iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < gus_wrk.fnum_keep);
    }
    GusObjDraw(gus_wrk.fnum_keep,500,0);
    return;
  }
  return;
}

int GusObjTrans(int leaf_no) {
	int ret_num;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = gus_wrk.mpos_keep[1];
  fVar3 = leaves[leaf_no][1] - 1.0;
  bVar1 = fVar3 < gus_wrk.mpos_keep[1] - (float)(int)(short)gus_wrk.dist;
  leaves[leaf_no][1] = fVar3;
  if (bVar1) {
    leaves[leaf_no][1] = fVar2;
  }
  return (uint)bVar1;
}

void GusAlpha(int leaf_no) {
  ushort *puVar1;
  ushort *puVar2;
  
  puVar2 = gus_wrk.at_ground + leaf_no;
  if ((short)*puVar2 < 1) {
    puVar1 = gus_wrk.rgba[leaf_no] + 3;
    if (0x41 < (short)*puVar1) {
      *puVar1 = *puVar1 - 1;
      return;
    }
    *puVar2 = 1;
    return;
  }
  puVar1 = gus_wrk.rgba[leaf_no] + 3;
  if ((short)*puVar1 < 0xbf) {
    *puVar1 = *puVar1 + 1;
    return;
  }
  *puVar2 = 0;
  return;
}

void GusObjDraw(int leaf_num, int area, int fall_mode) {
	int i;
	int w;
	int k;
	int th;
	int tw;
	int bak;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm2;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	u_char mr;
	u_char mg;
	u_char mb;
	u_long tex0;
	
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  Q_WORDDATA *pQVar7;
  uint uVar8;
  uint uVar9;
  Q_WORDDATA *pQVar10;
  int (*paiVar11) [4];
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int (*paiVar16) [4];
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  float wlm [4] [4];
  float slm [4] [4];
  float wlm2 [4] [4];
  int ivec [4] [4];
  float wpos [4];
  float ppos [4] [4];
  int th;
  int tw;
  uchar mg;
  
  uVar3 = DAT_0026bf40;
  uVar8 = (uint)DAT_0026bf4e;
  uVar9 = (uint)DAT_0026bf4c;
  ppos[0]._0_8_ = DAT_0034a790;
  ppos[0]._8_8_ = DAT_0034a798;
  ppos[1]._0_8_ = DAT_0034a7a0;
  ppos[1]._8_8_ = DAT_0034a7a8;
  ppos[2]._0_8_ = DAT_0034a7b0;
  ppos[2]._8_8_ = DAT_0034a7b8;
  ppos[3]._0_8_ = DAT_0034a7c0;
  ppos[3]._8_8_ = DAT_0034a7c8;
  if (monochrome_mode == 0) {
    uVar21 = (uint)r_temp;
    _mg = (uint)g_temp;
    uVar20 = (uint)b_temp;
  }
  else {
    uVar20 = ((uint)r_temp + (uint)g_temp + (uint)b_temp) / 3 & 0xff;
    uVar21 = uVar20;
    _mg = uVar20;
  }
  Reserve2DPacket(0x1000);
  pQVar5 = pbuf;
  iVar4 = ndpkt;
  pQVar7 = pbuf + ndpkt;
  pQVar6 = pbuf + ndpkt + 1;
  pQVar7->ui32[0] = 0;
  pQVar7->ui32[1] = 0;
  pQVar7->ui32[2] = 0;
  pQVar7->ui32[3] = 0;
  pQVar6->ul64[1] = 0xe;
  pQVar6->ul64[0] = 0x1000000000008006;
  pQVar5[ndpkt + 2].ul64[0] = 0;
  pQVar5[ndpkt + 2].ul64[1] = 0x3f;
  pQVar5[ndpkt + 3].ul64[0] = uVar3;
  pQVar5[ndpkt + 3].ul64[1] = 6;
  pQVar5[ndpkt + 4].ul64[1] = 0x14;
  pQVar5[ndpkt + 4].ul64[0] = 0x161;
  pQVar5[ndpkt + 5].ul64[1] = 0x4e;
  pQVar5[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar5[ndpkt + 6].ul64[1] = 0x42;
  pQVar5[ndpkt + 6].ul64[0] = 0x44;
  pQVar5[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar5[ndpkt + 7].ul64[1] = 0x47;
  ndpkt = ndpkt + 8;
  Get2PosRot((float *)&camera,&camera.i.x,(float *)rots,rots + 1);
  iVar19 = 0;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(rots[0][0],wlm,wlm);
  sceVu0RotMatrixY(rots[0][1],wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)&gus_wrk);
  if (0 < gus_wrk.fnum_keep) {
    do {
      if (iVar19 <= gus_wrk.fall_count) {
        sceVu0TransMatrix((Matrix4x4 *)wlm2,(Matrix4x4 *)wlm,(Vector4 *)leaves[iVar19]);
        sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm2);
        paiVar16 = ivec;
        sceVu0RotTransPersN(paiVar16,(Matrix4x4 *)slm,ppos,4,0);
        pQVar5 = pbuf;
        bVar1 = false;
        iVar17 = 3;
        paiVar11 = paiVar16;
        do {
          iVar17 = iVar17 + -1;
          piVar2 = *paiVar11;
          if (0x8000 < (*paiVar11)[0] - 0x4000U) {
            bVar1 = true;
          }
          if (0x8000 < (*paiVar11)[1] - 0x4000U) {
            bVar1 = true;
          }
          paiVar11 = paiVar11[1];
          if (0xffff00 < piVar2[2] - 0xffU) {
            bVar1 = true;
          }
        } while (-1 < iVar17);
        if (!bVar1) {
          pQVar6 = pbuf + ndpkt;
          ndpkt = ndpkt + 1;
          pQVar6->ul64[1] = 0x431;
          pQVar6->ul64[0] = 0x30aa400000008004;
          uVar18 = 0;
          do {
            uVar14 = uVar18 & 1;
            bVar1 = 1 < (int)uVar18;
            pQVar6 = pQVar5 + ndpkt;
            pQVar6->ui32[0] = uVar21;
            iVar17 = (int)uVar18 / 2;
            pQVar6->ui32[2] = uVar20;
            pQVar7 = pQVar5 + ndpkt + 1;
            pQVar6->ui32[1] = _mg;
            iVar13 = ndpkt + 2;
            ndpkt = ndpkt + 3;
            pQVar10 = pQVar5 + iVar13;
            uVar12 = 0x8000;
            uVar18 = uVar18 + 1;
            uVar15 = uVar8 << 4;
            if (iVar17 == 0) {
              uVar15 = 0;
            }
            if (bVar1) {
              uVar12 = 0;
            }
            pQVar6->iv[3] = (int)((uint)gus_wrk.rgba[iVar19][3] << 0x10) >> 0x13;
            pQVar7->ui32[0] = uVar14 * uVar9 * 0x10;
            pQVar7->ui32[1] = uVar15;
            pQVar7->ui32[3] = 0;
            pQVar7->ui32[2] = 0;
            pQVar10->ui32[0] = (*paiVar16)[0];
            pQVar10->ui32[1] = (*paiVar16)[1];
            piVar2 = *paiVar16;
            paiVar16 = paiVar16[1];
            pQVar10->ui32[2] = piVar2[2];
            pQVar10->ui32[3] = uVar12;
          } while ((int)uVar18 < 4);
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < gus_wrk.fnum_keep);
  }
  pbuf[iVar4].ui32[0] = (ndpkt - (iVar4 + -0x70000000)) - 1;
  return;
}

void CallHoleGusEffect(float *mpos) {
	int i;
	
  int leaf_no;
  
  hole_effect_switch = 1;
  if (hole_wrk.init_flg == 0) {
    leaf_no = 0;
    HoleGusInitAll(mpos);
    if (0 < hole_wrk.fnum_keep) {
      do {
        HoleGusSetPos(leaf_no);
        leaf_no = leaf_no + 1;
      } while (leaf_no < hole_wrk.fnum_keep);
    }
    hole_wrk.init_flg = 1;
  }
  return;
}

void StopHoleGusEffect() {
  hole_effect_switch = 0;
  hole_wrk.init_flg = 0;
  return;
}

void HoleGusInit(float *mpos, int leaf_no) {
	int tmp;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  float fVar1;
  float fVar2;
  ushort uVar3;
  undefined in_vf0 [16];
  undefined auVar4 [16];
  undefined4 in_vuR;
  
  fVar2 = hole_wrk.mpos_keep[2];
  fVar1 = hole_wrk.mpos_keep[1];
  hole_gus[leaf_no][0] = hole_wrk.mpos_keep[0];
  hole_gus[leaf_no][3] = 1.0;
  hole_gus[leaf_no][1] = fVar1;
  hole_gus[leaf_no][2] = fVar2;
                    /* inlined from effect.h */
  auVar4 = _vrnext(in_vuR);
  auVar4 = _vsubbc(auVar4,in_vf0);
  auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar4,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    hole_wrk.rgba[leaf_no][0] = (ushort)(int)(SUB164(auVar4,0) * 20.0);
  }
  else {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    hole_wrk.rgba[leaf_no][0] = -(short)(int)(SUB164(auVar4,0) * 20.0);
  }
                    /* inlined from effect.h */
  auVar4 = _vrnext(in_vuR);
  auVar4 = _vsubbc(auVar4,in_vf0);
  auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar4,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    hole_wrk.rgba[leaf_no][1] = (ushort)(int)(SUB164(auVar4,0) * 20.0);
  }
  else {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    hole_wrk.rgba[leaf_no][1] = -(short)(int)(SUB164(auVar4,0) * 20.0);
  }
                    /* inlined from effect.h */
  auVar4 = _vrnext(in_vuR);
  auVar4 = _vsubbc(auVar4,in_vf0);
  auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
  if ((int)(SUB164(auVar4,0) * 10.0) + 1 < 6) {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    uVar3 = hole_wrk.rgba[leaf_no][2] + (short)(int)(SUB164(auVar4,0) + SUB164(auVar4,0));
  }
  else {
                    /* inlined from effect.h */
    auVar4 = _vrnext(in_vuR);
    auVar4 = _vsubbc(auVar4,in_vf0);
    auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
    uVar3 = hole_wrk.rgba[leaf_no][2] - (short)(int)(SUB164(auVar4,0) + SUB164(auVar4,0));
  }
  hole_wrk.rgba[leaf_no][2] = uVar3;
  hole_wrk.rgba[leaf_no][3] = 0x140;
  hole_wrk.at_ground[leaf_no] = 0;
  return;
}

void HoleGusInitAll(float *mpos) {
	int i;
	
  int leaf_no;
  
  hole_wrk.mpos_keep[0] = *mpos;
  leaf_no = 0;
  hole_wrk.area_keep = 300;
  hole_wrk.fnum_keep = 100;
  hole_wrk.mpos_keep[1] = mpos[1];
  hole_wrk.dist = 500;
  hole_wrk.fall_count = 0;
  hole_wrk.mpos_keep[2] = mpos[2];
  hole_wrk.mpos_keep[3] = mpos[3];
  hole_wrk.fall_rate = 7.0;
  hole_wrk.rate_remain = 0.0;
  do {
    HoleGusInit(mpos,leaf_no);
    leaf_no = leaf_no + 1;
  } while (leaf_no < hole_wrk.fnum_keep);
  return;
}

void HoleGusSetPos(int leaf_no) {
	float r;
	
  int iVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined4 in_vuR;
  
                    /* inlined from effect.h */
  auVar2 = _vrnext(in_vuR);
  auVar2 = _vsubbc(auVar2,in_vf0);
  auVar2 = _qmfc2(SUB164(auVar2,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  iVar1 = (int)(SUB164(auVar2,0) * 240.0) + 0x50;
  hole_wrk.rgba[leaf_no][3] = (ushort)iVar1;
  iVar1 = (0x140 - (iVar1 * 0x10000 >> 0x10)) / 3;
  hole_gus[leaf_no][2] = hole_gus[leaf_no][2] + (float)(iVar1 * 10);
  hole_wrk.at_ground[leaf_no] = hole_wrk.at_ground[leaf_no] + (short)iVar1 * 2;
  return;
}

void HoleGusObjects() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (hole_effect_switch != 0) {
    if (0 < hole_wrk.fnum_keep) {
      do {
        HoleGusTransX(iVar2);
        HoleGusTransY(iVar2);
        HoleGusTransZ(iVar2);
        iVar1 = HoleGusAlpha(iVar2);
        if (iVar1 != 0) {
          HoleGusInit(hole_wrk.mpos_keep,iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < hole_wrk.fnum_keep);
    }
    iVar2 = hole_wrk.fnum_keep;
    if (0 < hole_wrk.fnum_keep) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = 0;
    if (0 < hole_wrk.fnum_keep) {
      do {
        HoleGusDraw(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < hole_wrk.fnum_keep);
    }
  }
  return;
}

int HoleGusTransX(int leaf_no) {
  ushort uVar1;
  long lVar2;
  
  uVar1 = hole_wrk.rgba[leaf_no][0];
  lVar2 = (long)((short)uVar1 + 7);
  if (-1 < (long)(short)uVar1) {
    lVar2 = (long)(short)uVar1;
  }
  hole_gus[leaf_no][0] = hole_gus[leaf_no][0] + (float)((int)lVar2 >> 3);
  return 0;
}

int HoleGusTransZ(int leaf_no) {
	int ret_num;
	
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  float fVar4;
  
  puVar3 = hole_wrk.at_ground + leaf_no;
  uVar1 = *puVar3;
  iVar2 = (short)uVar1 + 7;
  if (-1 < (short)uVar1) {
    iVar2 = (int)(short)uVar1;
  }
  fVar4 = (float)(10 - (iVar2 >> 3));
  if (2.0 < fVar4) {
    *puVar3 = *puVar3 + 2;
    fVar4 = hole_gus[leaf_no][2] + fVar4;
  }
  else {
    fVar4 = hole_gus[leaf_no][2] + 2.0;
  }
  hole_gus[leaf_no][2] = fVar4;
  return (uint)(hole_wrk.mpos_keep[2] + (float)(int)(short)hole_wrk.dist < hole_gus[leaf_no][2]);
}

int HoleGusTransY(int leaf_no) {
  ushort uVar1;
  long lVar2;
  
  uVar1 = hole_wrk.rgba[leaf_no][1];
  lVar2 = (long)((short)uVar1 + 7);
  if (-1 < (long)(short)uVar1) {
    lVar2 = (long)(short)uVar1;
  }
  hole_gus[leaf_no][1] = hole_gus[leaf_no][1] + (float)((int)lVar2 >> 3);
  return 0;
}

int HoleGusAlpha(int leaf_no) {
	int ret_num;
	
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = hole_wrk.rgba[leaf_no] + 3;
  uVar1 = *puVar2;
  if ((0x51 < (short)*puVar2) && (*puVar2 = uVar1 - 3, (short)(uVar1 - 3) < 0x52)) {
    iVar3 = 1;
    *puVar2 = 0x50;
  }
  return iVar3;
}

void HoleGusDraw(int leaf_no) {
	int i;
	int w;
	int th;
	int tw;
	int bak;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm2;
	sceVu0IVECTOR ivec[4];
	float tmp_x;
	float tmp_y;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	u_long tex0;
	
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int (*paiVar10) [4];
  int iVar11;
  Q_WORDDATA *pQVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int (*paiVar16) [4];
  float wlm [4] [4];
  float slm [4] [4];
  float wlm2 [4] [4];
  int ivec [4] [4];
  float wpos [4];
  float ppos [4] [4];
  float tmp_x;
  float tmp_y;
  
  tmp_y = 0.0;
  ppos[0]._0_8_ = DAT_0034a7d0;
  ppos[0]._8_8_ = DAT_0034a7d8;
  ppos[1]._0_8_ = DAT_0034a7e0;
  ppos[1]._8_8_ = DAT_0034a7e8;
  ppos[2]._0_8_ = DAT_0034a7f0;
  ppos[2]._8_8_ = DAT_0034a7f8;
  ppos[3]._0_8_ = DAT_0034a800;
  ppos[3]._8_8_ = DAT_0034a808;
  tmp_x = 0.0;
  Get2PosRot((float *)&camera,&camera.i.x,&tmp_x,&tmp_y);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(tmp_x,wlm,wlm);
  sceVu0RotMatrixY(tmp_y,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)hole_gus[leaf_no]);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar16 = ivec;
  sceVu0RotTransPersN(paiVar16,(Matrix4x4 *)slm,ppos,4,0);
  uVar4 = DAT_0026bf40;
  bVar2 = false;
  iVar14 = 3;
  paiVar10 = paiVar16;
  do {
    iVar14 = iVar14 + -1;
    piVar3 = *paiVar10;
    if (0x8000 < (*paiVar10)[0] - 0x4000U) {
      bVar2 = true;
    }
    if (0x8000 < (*paiVar10)[1] - 0x4000U) {
      bVar2 = true;
    }
    paiVar10 = paiVar10[1];
    if (0xffff00 < piVar3[2] - 0xffU) {
      bVar2 = true;
    }
  } while (-1 < iVar14);
  if (!bVar2) {
    uVar7 = (uint)DAT_0026bf4e;
    uVar9 = (uint)DAT_0026bf4c;
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    iVar14 = ndpkt;
    pQVar6 = pbuf + ndpkt;
    pQVar6->ui32[0] = 0;
    pQVar6->ui32[1] = 0;
    pQVar6->ui32[2] = 0;
    pQVar6->ui32[3] = 0;
    pQVar5[ndpkt + 1].ul64[1] = 0xe;
    pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008006;
    pQVar5[ndpkt + 2].ul64[1] = 0x3f;
    pQVar5[ndpkt + 2].ul64[0] = 0;
    pQVar5[ndpkt + 3].ul64[0] = uVar4;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[0] = 0x161;
    pQVar5[ndpkt + 4].ul64[1] = 0x14;
    pQVar5[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar5[ndpkt + 5].ul64[1] = 0x4e;
    pQVar5[ndpkt + 6].ul64[0] = 0x44;
    pQVar5[ndpkt + 6].ul64[1] = 0x42;
    iVar11 = ndpkt + 8;
    pQVar5[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar5[ndpkt + 7].ul64[1] = 0x47;
    pQVar5[iVar11].ul64[1] = 0x431;
    ndpkt = ndpkt + 9;
    pQVar5[iVar11].ul64[0] = 0x30aa400000008004;
    uVar15 = 0;
    do {
      pQVar6 = pQVar5 + ndpkt;
      pQVar6->ui32[1] = 0x5d;
      pQVar6->ui32[0] = 0x65;
      pQVar6->ui32[2] = 0x5e;
      uVar1 = hole_wrk.rgba[leaf_no][3];
      uVar13 = 0;
      if ((int)uVar15 / 2 != 0) {
        uVar13 = uVar7 << 4;
      }
      lVar8 = (long)((short)uVar1 + 7);
      if (-1 < (long)(short)uVar1) {
        lVar8 = (long)(short)uVar1;
      }
      pQVar12 = pQVar5 + ndpkt + 1;
      iVar11 = ndpkt + 3;
      pQVar6->iv[3] = (int)lVar8 >> 3;
      pQVar12->ui32[0] = (uVar15 & 1) * uVar9 * 0x10;
      pQVar12->ui32[1] = uVar13;
      pQVar6 = pQVar5 + ndpkt + 2;
      pQVar12->ui32[3] = 0;
      pQVar12->ui32[2] = 0;
      uVar13 = 0x8000;
      if (1 < (int)uVar15) {
        uVar13 = 0;
      }
      uVar15 = uVar15 + 1;
      pQVar6->ui32[0] = (*paiVar16)[0];
      pQVar6->ui32[1] = (*paiVar16)[1];
      piVar3 = *paiVar16;
      paiVar16 = paiVar16[1];
      pQVar6->ui32[2] = piVar3[2];
      ndpkt = iVar11;
      pQVar6->ui32[3] = uVar13;
    } while ((int)uVar15 < 4);
    pbuf[iVar14].ui32[0] = (iVar11 - (iVar14 + -0x70000000)) - 1;
  }
  return;
}

void CallLineGusEffect(float *mpos1, float *mpos2, int dir, int line_num) {
	int i;
	
  int leaf_no;
  int iVar1;
  
  line_effect_switch[line_num] = 1;
  if (line_wrk[line_num].init_flg == 0) {
    LineGusInitAll(mpos1,mpos2,dir,line_num);
    leaf_no = 0;
    if (0 < line_wrk[line_num].fnum_keep) {
      do {
        iVar1 = leaf_no + 1;
        LineGusSetPos(leaf_no,dir,line_num);
        leaf_no = iVar1;
      } while (iVar1 < line_wrk[line_num].fnum_keep);
    }
    line_wrk[line_num].init_flg = 1;
  }
  return;
}

void StopLineGusEffect(int line_num) {
  line_effect_switch[line_num] = 0;
  line_wrk[line_num].init_flg = 0;
  return;
}

void LineGusInit(float *mpos, int leaf_no, int line_num) {
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  ushort uVar1;
  float (*pafVar2) [4];
  float fVar3;
  float fVar4;
  undefined in_vf0 [16];
  undefined auVar5 [16];
  undefined4 in_vuR;
  
  uVar1 = line_wrk[line_num].mode_keep;
  if (uVar1 - 1 < 2) {
    fVar4 = line_wrk[line_num].mpos_keep[1];
    fVar3 = line_wrk[line_num].mpos_keep[2];
    pafVar2 = line_gus[line_num][leaf_no];
                    /* end of inlined section */
    (*pafVar2)[0] = line_wrk[line_num].mpos_keep[0];
LAB_00123324:
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
    (*pafVar2)[1] =
         fVar4 + (float)(int)((float)(int)(short)line_wrk[line_num].offs[1] * SUB164(auVar5,0));
  }
  else {
    if (1 < uVar1 - 3) {
      if (1 < uVar1 - 5) goto LAB_001233a0;
      fVar3 = line_wrk[line_num].mpos_keep[2];
      fVar4 = line_wrk[line_num].mpos_keep[1];
      pafVar2 = line_gus[line_num][leaf_no];
      goto LAB_00123324;
    }
    fVar4 = line_wrk[line_num].mpos_keep[0];
    fVar3 = line_wrk[line_num].mpos_keep[2];
    pafVar2 = line_gus[line_num][leaf_no];
    line_gus[line_num][leaf_no][1] = line_wrk[line_num].mpos_keep[1];
                    /* inlined from effect.h */
    auVar5 = _vrnext(in_vuR);
    auVar5 = _vsubbc(auVar5,in_vf0);
    auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
                    /* end of inlined section */
    (*pafVar2)[0] =
         fVar4 + (float)(int)((float)(int)(short)line_wrk[line_num].offs[0] * SUB164(auVar5,0));
  }
                    /* inlined from effect.h */
  auVar5 = _vrnext(in_vuR);
  auVar5 = _vsubbc(auVar5,in_vf0);
  auVar5 = _qmfc2(SUB164(auVar5,0));
                    /* end of inlined section */
  (*pafVar2)[2] =
       fVar3 + (float)(int)((float)(int)(short)line_wrk[line_num].offs[2] * SUB164(auVar5,0));
LAB_001233a0:
  line_wrk[line_num].rgba[leaf_no][3] = 0xf0;
  line_gus[line_num][leaf_no][3] = 1.0;
  line_wrk[line_num].at_ground[leaf_no] = 0;
  return;
}

void LineGusInitAll(float *mpos1, float *mpos2, int dir, int line_num) {
	int i;
	
  int leaf_no;
  int iVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  line_wrk[line_num].mpos_keep[3] = mpos1[3];
  fVar5 = *mpos1;
  fVar3 = *mpos2;
  if (fVar3 < fVar5) {
    fVar4 = fVar5 - fVar3;
    line_wrk[line_num].mpos_keep[0] = fVar3;
  }
  else {
    fVar4 = fVar3 - fVar5;
    line_wrk[line_num].mpos_keep[0] = fVar5;
  }
  line_wrk[line_num].offs[0] = (ushort)(int)fVar4;
  fVar5 = mpos1[1];
  fVar3 = mpos2[1];
  if (fVar3 < fVar5) {
    uVar2 = (ushort)(int)(fVar5 - fVar3);
    line_wrk[line_num].mpos_keep[1] = fVar3;
  }
  else {
    uVar2 = (ushort)(int)(fVar3 - fVar5);
    line_wrk[line_num].mpos_keep[1] = fVar5;
  }
  line_wrk[line_num].offs[1] = uVar2;
  fVar5 = mpos2[2];
  fVar3 = mpos1[2];
  if (fVar5 < fVar3) {
    uVar2 = (ushort)(int)(fVar3 - fVar5);
    line_wrk[line_num].mpos_keep[2] = fVar5;
  }
  else {
    uVar2 = (ushort)(int)(fVar5 - fVar3);
    line_wrk[line_num].mpos_keep[2] = fVar3;
  }
  line_wrk[line_num].offs[2] = uVar2;
  line_wrk[line_num].area_keep = 300;
  line_wrk[line_num].dist = 0x32;
  line_wrk[line_num].fnum_keep = 100;
  line_wrk[line_num].fall_rate = 7.0;
  line_wrk[line_num].mode_keep = (ushort)dir;
  line_wrk[line_num].fall_count = 0;
  line_wrk[line_num].rate_remain = 0.0;
  leaf_no = 0;
  do {
    iVar1 = leaf_no + 1;
    LineGusInit(mpos1,leaf_no,line_num);
    leaf_no = iVar1;
  } while (iVar1 < line_wrk[line_num].fnum_keep);
  return;
}

void LineGusSetPos(int leaf_no, int dir, int line_num) {
	float tmp;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  ushort uVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined in_vf0 [16];
  undefined auVar6 [16];
  undefined4 in_vuR;
  
  fVar4 = line_wrk[line_num].mpos_keep[1];
  fVar3 = line_wrk[line_num].mpos_keep[2];
                    /* inlined from effect.h */
  auVar6 = _vrnext(in_vuR);
  auVar6 = _vsubbc(auVar6,in_vf0);
  auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
  fVar5 = line_wrk[line_num].mpos_keep[0] +
          (float)(int)((float)(int)(short)line_wrk[line_num].offs[0] * SUB164(auVar6,0));
  line_gus[line_num][leaf_no][0] = fVar5;
                    /* inlined from effect.h */
  auVar6 = _vrnext(in_vuR);
  auVar6 = _vsubbc(auVar6,in_vf0);
  auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
  line_gus[line_num][leaf_no][1] =
       fVar4 + (float)(int)((float)(int)(short)line_wrk[line_num].offs[1] * SUB164(auVar6,0));
                    /* inlined from effect.h */
  auVar6 = _vrnext(in_vuR);
  auVar6 = _vsubbc(auVar6,in_vf0);
  auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
  uVar1 = line_wrk[line_num].mode_keep;
  line_gus[line_num][leaf_no][2] =
       fVar3 + (float)(int)((float)(int)(short)line_wrk[line_num].offs[2] * SUB164(auVar6,0));
  if (uVar1 == 1) {
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
    fVar3 = fVar5 + (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][0] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar3 - fVar5) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][1] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][1] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][1] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 - (short)(int)SUB164(auVar6,0);
    }
    *puVar2 = uVar1;
  }
  if (line_wrk[line_num].mode_keep == 2) {
    fVar4 = line_gus[line_num][leaf_no][0];
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar3 = fVar4 - (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][0] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar4 - fVar3) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][1] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][1] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][1] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 - (short)(int)SUB164(auVar6,0);
    }
    *puVar2 = uVar1;
  }
  if (line_wrk[line_num].mode_keep == 3) {
    fVar4 = line_gus[line_num][leaf_no][1];
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar3 = fVar4 + (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][1] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar3 - fVar4) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][0] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 - (short)(int)SUB164(auVar6,0);
    }
    *puVar2 = uVar1;
  }
  if (line_wrk[line_num].mode_keep == 4) {
    fVar4 = line_gus[line_num][leaf_no][1];
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar3 = fVar4 - (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][1] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar4 - fVar3) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][0] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 2;
      uVar1 = *puVar2 - (short)(int)SUB164(auVar6,0);
    }
    *puVar2 = uVar1;
  }
  if (line_wrk[line_num].mode_keep == 5) {
    fVar4 = line_gus[line_num][leaf_no][2];
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar3 = fVar4 - (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][2] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar4 - fVar3) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][0] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 1;
      uVar1 = *puVar2 + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 1;
      uVar1 = *puVar2 - (short)(int)SUB164(auVar6,0);
    }
    *puVar2 = uVar1;
  }
  if (line_wrk[line_num].mode_keep == 6) {
    fVar4 = line_gus[line_num][leaf_no][2];
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    uVar1 = line_wrk[line_num].dist;
                    /* inlined from effect.h */
                    /* end of inlined section */
    fVar3 = fVar4 - (float)(int)((float)(int)(short)uVar1 * SUB164(auVar6,0));
    line_gus[line_num][leaf_no][2] = fVar3;
    line_wrk[line_num].rgba[leaf_no][3] =
         (ushort)(int)(((fVar4 - fVar3) / (float)(int)(short)uVar1) * 240.0);
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] + (short)(int)SUB164(auVar6,0);
    }
    else {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      uVar1 = line_wrk[line_num].rgba[leaf_no][0] - (short)(int)SUB164(auVar6,0);
    }
    line_wrk[line_num].rgba[leaf_no][0] = uVar1;
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    if ((float)((int)(SUB164(auVar6,0) * 10.0) + 1) <= 5.0) {
                    /* inlined from effect.h */
      auVar6 = _vrnext(in_vuR);
      auVar6 = _vsubbc(auVar6,in_vf0);
      auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
      puVar2 = line_wrk[line_num].rgba[leaf_no] + 1;
      *puVar2 = *puVar2 + (short)(int)SUB164(auVar6,0);
      return;
    }
                    /* inlined from effect.h */
    auVar6 = _vrnext(in_vuR);
    auVar6 = _vsubbc(auVar6,in_vf0);
    auVar6 = _qmfc2(SUB164(auVar6,0));
                    /* end of inlined section */
    puVar2 = line_wrk[line_num].rgba[leaf_no] + 1;
    *puVar2 = *puVar2 - (short)(int)SUB164(auVar6,0);
  }
  return;
}

void LineGusObjects(int line_num) {
	int i;
	
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (line_effect_switch[line_num] != 0) {
    if (0 < line_wrk[line_num].fnum_keep) {
      uVar1 = line_wrk[line_num].mode_keep;
      while( true ) {
        uVar3 = (uint)uVar1;
        if (uVar3 - 1 < 2) {
          LineGusTransX(iVar4,(int)(short)uVar1,line_num);
          uVar3 = (uint)line_wrk[line_num].mode_keep;
        }
        if (uVar3 - 3 < 2) {
          LineGusTransY(iVar4,(int)(short)uVar3,line_num);
          uVar3 = (uint)line_wrk[line_num].mode_keep;
        }
        if (uVar3 - 5 < 2) {
          LineGusTransZ(iVar4,(int)(short)uVar3,line_num);
        }
        iVar2 = LineGusAlpha(iVar4,line_num);
        if (iVar2 != 0) {
          LineGusInit(line_wrk[line_num].mpos_keep,iVar4,line_num);
        }
        iVar4 = iVar4 + 1;
        if (line_wrk[line_num].fnum_keep <= iVar4) break;
        uVar1 = line_wrk[line_num].mode_keep;
      }
    }
    iVar4 = 0;
    if (0 < line_wrk[line_num].fnum_keep) {
      do {
        LineGusDraw(iVar4,line_num);
        iVar4 = iVar4 + 1;
      } while (iVar4 < line_wrk[line_num].fnum_keep);
    }
  }
  return;
}

int LineGusTransX(int leaf_no, int dir, int line_num) {
	int ret_num;
	
  ushort uVar1;
  int iVar2;
  float (*pafVar3) [4];
  ushort *puVar4;
  float fVar5;
  
  if (line_wrk[line_num].mode_keep == 1) {
    puVar4 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar4;
    iVar2 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar2 = (int)(short)uVar1;
    }
    fVar5 = (float)(5 - (iVar2 >> 3));
    if (1.0 < fVar5) {
      *puVar4 = *puVar4 + 5;
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = (*pafVar3)[0] + fVar5;
    }
    else {
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = (*pafVar3)[0] + 1.0;
    }
  }
  else {
    puVar4 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar4;
    iVar2 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar2 = (int)(short)uVar1;
    }
    fVar5 = (float)(5 - (iVar2 >> 3));
    if (1.0 < fVar5) {
      *puVar4 = *puVar4 + 5;
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = (*pafVar3)[0] - fVar5;
    }
    else {
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = (*pafVar3)[0] - 1.0;
    }
  }
  (*pafVar3)[0] = fVar5;
  return (uint)(line_wrk[line_num].mpos_keep[0] + (float)(int)(short)line_wrk[line_num].dist <
               line_gus[line_num][leaf_no][0]);
}

int LineGusTransZ(int leaf_no, int dir, int line_num) {
	int ret_num;
	
  ushort uVar1;
  int iVar2;
  float (*pafVar3) [4];
  ushort *puVar4;
  float fVar5;
  
  if (line_wrk[line_num].mode_keep == 5) {
    puVar4 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar4;
    iVar2 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar2 = (int)(short)uVar1;
    }
    fVar5 = (float)(5 - (iVar2 >> 3));
    if (1.0 < fVar5) {
      *puVar4 = *puVar4 + 5;
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = line_gus[line_num][leaf_no][2] + fVar5;
    }
    else {
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = line_gus[line_num][leaf_no][2] + 1.0;
    }
  }
  else {
    puVar4 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar4;
    iVar2 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar2 = (int)(short)uVar1;
    }
    fVar5 = (float)(5 - (iVar2 >> 3));
    if (1.0 < fVar5) {
      *puVar4 = *puVar4 + 5;
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = line_gus[line_num][leaf_no][2] - fVar5;
    }
    else {
      pafVar3 = line_gus[line_num][leaf_no];
      fVar5 = line_gus[line_num][leaf_no][2] - 1.0;
    }
  }
  (*pafVar3)[2] = fVar5;
  return (uint)(line_wrk[line_num].mpos_keep[2] + (float)(int)(short)line_wrk[line_num].dist <
               line_gus[line_num][leaf_no][2]);
}

int LineGusTransY(int leaf_no, int dir, int line_num) {
	int ret_num;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float (*pafVar4) [4];
  ushort *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (line_wrk[line_num].mode_keep == 3) {
    puVar5 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar5;
    iVar3 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar3 = (int)(short)uVar1;
    }
    fVar6 = (float)(5 - (iVar3 >> 3));
    if (1.0 < fVar6) {
      *puVar5 = *puVar5 + 5;
      pafVar4 = line_gus[line_num][leaf_no];
      fVar6 = line_gus[line_num][leaf_no][1] + fVar6;
    }
    else {
      pafVar4 = line_gus[line_num][leaf_no];
      fVar6 = line_gus[line_num][leaf_no][1] + 1.0;
    }
  }
  else {
    puVar5 = line_wrk[line_num].at_ground + leaf_no;
    uVar1 = *puVar5;
    iVar3 = (short)uVar1 + 7;
    if (-1 < (short)uVar1) {
      iVar3 = (int)(short)uVar1;
    }
    fVar6 = (float)(5 - (iVar3 >> 3));
    if (1.0 < fVar6) {
      *puVar5 = *puVar5 + 5;
      pafVar4 = line_gus[line_num][leaf_no];
      fVar6 = line_gus[line_num][leaf_no][1] - fVar6;
    }
    else {
      pafVar4 = line_gus[line_num][leaf_no];
      fVar6 = line_gus[line_num][leaf_no][1] - 1.0;
    }
  }
  (*pafVar4)[1] = fVar6;
  uVar1 = line_wrk[line_num].dist;
  fVar6 = line_wrk[line_num].mpos_keep[1];
  fVar8 = line_gus[line_num][leaf_no][1];
  fVar7 = line_gus[line_num][leaf_no][0];
  uVar2 = line_wrk[line_num].rgba[leaf_no][0];
  line_gus[line_num][leaf_no][2] =
       line_gus[line_num][leaf_no][2] + (float)(int)(short)line_wrk[line_num].rgba[leaf_no][2];
  line_gus[line_num][leaf_no][0] = fVar7 + (float)(int)(short)uVar2;
  return (uint)(fVar6 + (float)(int)(short)uVar1 < fVar8);
}

int LineGusAlpha(int leaf_no, int line_num) {
	int ret_num;
	
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  
  puVar3 = line_wrk[line_num].rgba[leaf_no] + 3;
  uVar1 = *puVar3;
  if ((short)*puVar3 < 0xc) {
    bVar2 = (short)*puVar3 < 0xb;
  }
  else {
    *puVar3 = uVar1 - 3;
    bVar2 = (short)(uVar1 - 3) < 0xc;
  }
  if (bVar2) {
    *puVar3 = 8;
  }
  return (uint)bVar2;
}

void LineGusDraw(int leaf_no, int line_num) {
	int i;
	int w;
	int th;
	int tw;
	int bak;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FMATRIX wlm2;
	sceVu0IVECTOR ivec[4];
	float tmp_x;
	float tmp_y;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	u_long tex0;
	
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int (*paiVar10) [4];
  Q_WORDDATA *pQVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int (*paiVar15) [4];
  float wlm [4] [4];
  float slm [4] [4];
  float wlm2 [4] [4];
  int ivec [4] [4];
  float wpos [4];
  float ppos [4] [4];
  float tmp_x;
  float tmp_y;
  
  tmp_y = 0.0;
  ppos[0]._0_8_ = DAT_0034a7d0;
  ppos[0]._8_8_ = DAT_0034a7d8;
  ppos[1]._0_8_ = DAT_0034a7e0;
  ppos[1]._8_8_ = DAT_0034a7e8;
  ppos[2]._0_8_ = DAT_0034a7f0;
  ppos[2]._8_8_ = DAT_0034a7f8;
  ppos[3]._0_8_ = DAT_0034a800;
  ppos[3]._8_8_ = DAT_0034a808;
  tmp_x = 0.0;
  Get2PosRot((float *)&camera,&camera.i.x,&tmp_x,&tmp_y);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(tmp_x,wlm,wlm);
  sceVu0RotMatrixY(tmp_y,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)line_gus[line_num][leaf_no]);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar15 = ivec;
  sceVu0RotTransPersN(paiVar15,(Matrix4x4 *)slm,ppos,4,0);
  uVar4 = DAT_0026bf40;
  bVar2 = false;
  iVar13 = 3;
  paiVar10 = paiVar15;
  do {
    iVar13 = iVar13 + -1;
    piVar3 = *paiVar10;
    if (0x8000 < (*paiVar10)[0] - 0x4000U) {
      bVar2 = true;
    }
    if (0x8000 < (*paiVar10)[1] - 0x4000U) {
      bVar2 = true;
    }
    paiVar10 = paiVar10[1];
    if (0xffff00 < piVar3[2] - 0xffU) {
      bVar2 = true;
    }
  } while (-1 < iVar13);
  if (!bVar2) {
    uVar7 = (uint)DAT_0026bf4e;
    uVar9 = (uint)DAT_0026bf4c;
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    iVar13 = ndpkt;
    pQVar6 = pbuf + ndpkt;
    pQVar6->ui32[0] = 0;
    pQVar6->ui32[1] = 0;
    pQVar6->ui32[2] = 0;
    pQVar6->ui32[3] = 0;
    pQVar5[ndpkt + 1].ul64[1] = 0xe;
    pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008006;
    pQVar5[ndpkt + 2].ul64[1] = 0x3f;
    pQVar5[ndpkt + 2].ul64[0] = 0;
    pQVar5[ndpkt + 3].ul64[0] = uVar4;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 4].ul64[0] = 0x161;
    pQVar5[ndpkt + 4].ul64[1] = 0x14;
    pQVar5[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar5[ndpkt + 5].ul64[1] = 0x4e;
    pQVar5[ndpkt + 6].ul64[0] = 0x44;
    pQVar5[ndpkt + 6].ul64[1] = 0x42;
    pQVar5[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar5[ndpkt + 7].ul64[1] = 0x47;
    pQVar5[ndpkt + 8].ul64[1] = 0x431;
    pQVar5[ndpkt + 8].ul64[0] = 0x30aa400000008004;
    ndpkt = ndpkt + 9;
    uVar14 = 0;
    do {
      pQVar6 = pQVar5 + ndpkt;
      pQVar6->ui32[0] = 0x51;
      pQVar6->ui32[1] = 0x49;
      pQVar6->ui32[2] = 0x4a;
      uVar1 = line_wrk[line_num].rgba[leaf_no][3];
      uVar12 = 0;
      if ((int)uVar14 / 2 != 0) {
        uVar12 = uVar7 << 4;
      }
      iVar8 = (short)uVar1 + 7;
      if (-1 < (short)uVar1) {
        iVar8 = (int)(short)uVar1;
      }
      pQVar11 = pQVar5 + ndpkt + 1;
      pQVar6->iv[3] = iVar8 >> 3;
      iVar8 = ndpkt + 3;
      pQVar11->ui32[1] = uVar12;
      pQVar11->ui32[0] = (uVar14 & 1) * uVar9 * 0x10;
      pQVar11->ui32[3] = 0;
      pQVar6 = pQVar5 + ndpkt + 2;
      pQVar11->ui32[2] = 0;
      uVar12 = 0x8000;
      if (1 < (int)uVar14) {
        uVar12 = 0;
      }
      uVar14 = uVar14 + 1;
      pQVar6->ui32[0] = (*paiVar15)[0];
      pQVar6->ui32[1] = (*paiVar15)[1];
      piVar3 = *paiVar15;
      paiVar15 = paiVar15[1];
      pQVar6->ui32[2] = piVar3[2];
      ndpkt = iVar8;
      pQVar6->ui32[3] = uVar12;
    } while ((int)uVar14 < 4);
    pbuf[iVar13].ui32[0] = (iVar8 - (iVar13 + -0x70000000)) - 1;
  }
  return;
}

void InitCallAnm() {
  banm.tm2_id = 0xffff;
  anm_no_keep = 0xffff;
  anm_load_id = 0;
  anm_init = '\0';
  clear_end = '\0';
  clear_end2 = '\0';
  clear_end3 = '\0';
  banm.tex_keep = 0xffffffffffffffff;
  banm.mode = 0;
  banm.load_id = 0;
  return;
}

int CallReadyGo() {
	short int ret_num;
	
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if ((ingame_wrk.stts & 0x20) != 0) {
    DrawScreen(0x7f000,0x1a40,0x80,0x80,0x80,0x80);
  }
  iVar4 = iVar3;
  switch(anm_init) {
  case '\0':
    plyr_wrk.sta = plyr_wrk.sta | 2;
    AdpcmPreBtlmodeFadeOut(0);
    anm_init = '\x01';
    break;
  case '\x01':
    bVar1 = IsEndAdpcmBtlmode();
    if (bVar1 != 0) {
      anm_init = '\x02';
    }
    break;
  case '\x02':
    iVar2 = BtlAnmInit(0);
    iVar4 = 0;
    if (iVar2 != 0) {
      AdpcmPreBtlmodePreload(0x60e);
      anm_init = '\x03';
      iVar4 = iVar3;
    }
    break;
  case '\x03':
    bVar1 = IsPreLoadEndAdpcmBtlmode();
    if (bVar1 != 0) {
      anm_init = '\x04';
    }
    break;
  case '\x04':
    AdpcmBtlmodePreLoadEndPlay();
    anm_init = '\x05';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    CaptureScreen(0x1a40);
  case '\x05':
    iVar3 = BtlAnmMain();
    if (iVar3 != 0) {
      plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      anm_init = '\0';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      iVar4 = 1;
    }
  }
  return iVar4;
}

void ResultDisp() {
	u_long clear_time;
	
  ulong uVar1;
  ulong n;
  
  PutStringYW(0x2e,0xd,0x76,0xa3,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0xe,0xda,0xa3,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0xf,0x76,0xcb,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0x10,0xcb,0xcb,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0x11,0x76,0xf3,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0x12,0xda,0xf3,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0x13,0x76,0x12f,0x808080,0x80,0x23000,0);
  PutStringYW(0x2e,0x11,0x76,0x14d,0x808080,0x80,0x23000,0);
  n = (ulong)(int)((uint)*(ushort *)(&stage_dat + (uint)btl_wrk.stage_no * 0xc0) -
                  (uint)(ushort)btl_wrk.time);
  uVar1 = __udivdi3(n,0xe10);
  PutNumberYW(3,(int)uVar1,0x1ad,0xa3,1.0,1.0,0x808080,0x80,0x23000,1,1);
  PutStringYW(0x2e,0xb,0x1ba,0xa3,0x808080,0x80,0x23000,0);
  uVar1 = __udivdi3(n,0x3c);
  uVar1 = __umoddi3(uVar1,0x3c);
  PutNumberYW(3,(int)uVar1,0x1c8,0xa3,1.0,1.0,0x808080,0x80,0x23000,2,1);
  PutStringYW(0x2e,0xb,0x1e7,0xa3,0x808080,0x80,0x23000,0);
  uVar1 = __udivdi3(n * 100,0x3c);
  uVar1 = __umoddi3(uVar1,100);
  PutNumberYW(3,(int)uVar1,499,0xa3,1.0,1.0,0x808080,0x80,0x23000,2,1);
  PutNumberYW(3,(int)msn_high_score,0x1ac,0xcb,1.0,1.0,0x808080,0x80,0x23000,4,0);
  PutStringYW(0x2e,0xc,0x1ed,0xcb,0x808080,0x80,0x23000,0);
  PutNumberYW(3,(int)msn_total_score,0x16c,0xf3,1.0,1.0,0x808080,0x80,0x23000,8,0);
  PutStringYW(0x2e,0xc,0x1ed,0xf3,0x808080,0x80,0x23000,0);
  PutNumberYW(3,(int)msn_bonus,0x16c,0x12f,1.0,1.0,0x808080,0x80,0x23000,8,0);
  PutStringYW(0x2e,0xc,0x1ed,0x12f,0x808080,0x80,0x23000,0);
  PutNumberYW(3,(int)msn_bonus + (int)msn_total_score,0x16c,0x14d,1.0,1.0,0x808080,0x80,0x23000,8,0)
  ;
  PutStringYW(0x2e,0xc,0x1ed,0x14d,0x808080,0x80,0x23000,0);
  return;
}

int CallMissionClear() {
	static u_char now_pos = 0;
	u_char alpha_res[3];
	int ret_num;
	STR_DAT sd;
	DISP_STR dsr;
	
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar alpha_res [3];
  STR_DAT sd;
  DISP_STR dsr;
  
  alpha_res[0] = DAT_00356418;
  alpha_res[1] = DAT_00356419;
  alpha_res[2] = DAT_0035641a;
  iVar5 = 0;
  iVar6 = iVar5;
  switch(anm_init) {
  case '\0':
    plyr_wrk.sta = plyr_wrk.sta | 2;
    btl_wrk.mode = 3;
    if (plyr_wrk.mode == 1) {
      FinderEndSet();
      plyr_wrk.mode = 3;
    }
    AdpcmPreBtlmodeFadeOut(0);
    SeFadeFlameAll(0x1e,0);
    anm_init = '\x01';
    break;
  case '\x01':
    bVar2 = IsEndAdpcmBtlmode();
    if (bVar2 != 0) {
      anm_init = '\x02';
    }
    break;
  case '\x02':
    iVar5 = BtlAnmInit(2);
    if (iVar5 != 0) {
      anm_init = '\x03';
      clear_anime_timer = 0xb4;
      AdpcmBtlmodePlay(0x60c);
      iVar6 = 0;
    }
    break;
  case '\x03':
    if (clear_anime_timer != 0) {
      clear_anime_timer = clear_anime_timer + -1;
    }
    iVar6 = BtlAnmMain();
    if ((iVar6 != 0) || (iVar6 = 0, clear_anime_timer == 0)) {
      clear_anime_timer = 0;
      anm_init = '\x04';
      iVar6 = iVar5;
    }
    break;
  case '\x04':
    iVar5 = BtlAnmInit(4);
    if (iVar5 != 0) {
      anm_init = '\x05';
      ChangeMonochrome(1);
      iVar6 = 0;
    }
    break;
  case '\x05':
    ResultDisp();
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,60.0,1.0,1.0,0x24000,0,0,0);
    iVar6 = BtlAnmMain();
    if (iVar6 != 0) {
      anm_init = '\x06';
      AdpcmPreBtlmodeFadeOut(0);
      return 0;
    }
    if ((*key_now[3] == 1) ||
       ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
         (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
        ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
         (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = now_pos_265 == 2;
      now_pos_265 = now_pos_265 + 1;
      if (bVar1) {
        now_pos_265 = 0;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (((*key_now[2] == 1) ||
        ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))) ||
       (sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1)) {
LAB_00125770:
      bVar1 = now_pos_265 == 0;
      now_pos_265 = now_pos_265 - 1;
      if (bVar1) {
        now_pos_265 = 2;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      uVar7 = (uint)now_pos_265;
    }
    else {
      uVar4 = Ana2PadDirCnt('\x03');
      uVar7 = (uint)now_pos_265;
      if (0x19 < uVar4) {
        sVar3 = Ana2PadDirCnt('\x03');
        uVar7 = (uint)now_pos_265;
        if ((int)sVar3 % 5 == 1) goto LAB_00125770;
      }
    }
    alpha_res[uVar7] = 'P';
    DispSprt2(btl_rslt + 10,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[0]);
    DispSprt2(btl_rslt + 0xb,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[1]);
    DispSprt2(btl_rslt + 0xc,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[2]);
    iVar6 = 0;
    if (btl_clear_disp == 2) {
      sd.alpha = 0x80;
      sd.pri = 0x1000;
      sd.r = 0x80;
      sd.g = 0x80;
      sd.b = 0x80;
      sd.str = (char *)GetIngameMSGAddr('\x06',0x2b);
      sd.pos_y = 0x140;
      sd.pos_x = 0x58;
      sd.type = 0;
      CopyStrDToStr(&dsr,&sd);
      SetMessageV2(&dsr);
      DrawMessageBox(0xa000,64.0,302.0,512.0,60.0,0x80);
      iVar6 = 0;
    }
    break;
  case '\x06':
    bVar2 = IsEndAdpcmBtlmode();
    if (bVar2 != 0) {
      plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      anm_init = '\0';
      uVar7 = (uint)now_pos_265;
      AdpcmMapCtrlInit();
      iVar6 = uVar7 + 1;
    }
  }
  return iVar6;
}

int CallMissionFailed() {
	static u_char now_pos = 0;
	u_char alpha_res[3];
	int ret_num;
	
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uchar alpha_res [3];
  
  alpha_res[0] = DAT_00356418;
  alpha_res[1] = DAT_00356419;
  alpha_res[2] = DAT_0035641a;
  iVar5 = 0;
  iVar6 = iVar5;
  switch(anm_init) {
  case '\0':
    plyr_wrk.sta = plyr_wrk.sta | 2;
    btl_wrk.mode = 2;
    if ((plyr_wrk.mode == 1) || (plyr_wrk.mode == 6)) {
      FinderEndSet();
      plyr_wrk.mode = 3;
    }
    AdpcmPreBtlmodeFadeOut(0);
    SeFadeFlameAll(0x1e,0);
    anm_init = '\x01';
    break;
  case '\x01':
    bVar2 = IsEndAdpcmBtlmode();
    if (bVar2 != 0) {
      anm_init = '\x02';
    }
    break;
  case '\x02':
    iVar5 = BtlAnmInit(1);
    if (iVar5 != 0) {
      anm_init = '\x03';
      clear_anime_timer = 0xb4;
      AdpcmBtlmodePlay(0x60d);
      iVar6 = 0;
    }
    break;
  case '\x03':
    if (clear_anime_timer != 0) {
      clear_anime_timer = clear_anime_timer + -1;
    }
    iVar6 = BtlAnmMain();
    if ((iVar6 != 0) || (iVar6 = 0, clear_anime_timer == 0)) {
      clear_anime_timer = 0;
      anm_init = '\x04';
      iVar6 = iVar5;
    }
    break;
  case '\x04':
    iVar5 = BtlAnmInit(4);
    if (iVar5 != 0) {
      anm_init = '\x05';
      ChangeMonochrome(1);
      iVar6 = 0;
    }
    break;
  case '\x05':
    ResultDisp();
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,60.0,1.0,1.0,0x24000,0,0,0);
    iVar6 = BtlAnmMain();
    if (iVar6 != 0) {
      anm_init = '\x06';
      AdpcmPreBtlmodeFadeOut(0);
      return 0;
    }
    if ((*key_now[3] == 1) ||
       ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
         (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
        ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
         (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = now_pos_269 == 2;
      now_pos_269 = now_pos_269 + 1;
      if (bVar1) {
        now_pos_269 = 0;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (((*key_now[2] == 1) ||
        ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))) ||
       (sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1)) {
LAB_00125c10:
      bVar1 = now_pos_269 == 0;
      now_pos_269 = now_pos_269 - 1;
      if (bVar1) {
        now_pos_269 = 2;
      }
      SeStartFix(0,0,0x1000,0x1000,0);
      uVar7 = (uint)now_pos_269;
    }
    else {
      uVar4 = Ana2PadDirCnt('\x03');
      uVar7 = (uint)now_pos_269;
      if (0x19 < uVar4) {
        sVar3 = Ana2PadDirCnt('\x03');
        uVar7 = (uint)now_pos_269;
        if ((int)sVar3 % 5 == 1) goto LAB_00125c10;
      }
    }
    alpha_res[uVar7] = 'd';
    DispSprt2(btl_rslt + 10,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[0]);
    DispSprt2(btl_rslt + 0xb,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[1]);
    DispSprt2(btl_rslt + 0xc,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[2]);
    iVar6 = 0;
    break;
  case '\x06':
    bVar2 = IsEndAdpcmBtlmode();
    if (bVar2 != 0) {
      plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      anm_init = '\0';
      uVar7 = (uint)now_pos_269;
      AdpcmMapCtrlInit();
      iVar6 = uVar7 + 1;
    }
  }
  return iVar6;
}

int CallMissionAllClear() {
	static u_char now_pos = 0;
	u_char alpha_res[3];
	int ret_num;
	STR_DAT sd;
	SPRT_DAT ssd;
	DISP_STR dsr;
	DISP_SPRT ds;
	int i;
	
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SPRT_DAT *pSVar7;
  int iVar8;
  uchar alpha_res [3];
  STR_DAT sd;
  SPRT_DAT ssd;
  DISP_STR dsr;
  DISP_SPRT ds;
  
  alpha_res[0] = DAT_00356418;
  alpha_res[1] = DAT_00356419;
  alpha_res[2] = DAT_0035641a;
  iVar5 = 0;
  iVar4 = iVar5;
  iVar8 = clear_anime_timer;
  switch(anm_init) {
  case '\0':
    plyr_wrk.sta = plyr_wrk.sta | 2;
    btl_wrk.mode = 3;
    if (plyr_wrk.mode == 1) {
      FinderEndSet();
      plyr_wrk.mode = 3;
    }
    AdpcmPreBtlmodeFadeOut(0);
    SeFadeFlameAll(0x1e,0);
    anm_init = '\x01';
    iVar8 = clear_anime_timer;
    break;
  case '\x01':
    bVar1 = IsEndAdpcmBtlmode();
    iVar8 = clear_anime_timer;
    if (bVar1 != 0) {
      anm_init = '\x02';
    }
    break;
  case '\x02':
    iVar5 = BtlAnmInit(2);
    iVar8 = clear_anime_timer;
    if (iVar5 != 0) {
      anm_init = '\x03';
      clear_anime_timer = 0xb4;
      AdpcmBtlmodePlay(0x60c);
      iVar4 = 0;
      iVar8 = clear_anime_timer;
    }
    break;
  case '\x03':
    if (clear_anime_timer != 0) {
      clear_anime_timer = clear_anime_timer + -1;
    }
    iVar4 = BtlAnmMain();
    if ((iVar4 != 0) || (iVar4 = 0, iVar8 = clear_anime_timer, clear_anime_timer == 0)) {
      clear_anime_timer = 0;
      anm_init = '\x04';
      iVar4 = iVar5;
      iVar8 = clear_anime_timer;
    }
    break;
  case '\x04':
    iVar5 = BtlAnmInit(4);
    iVar8 = clear_anime_timer;
    if (iVar5 != 0) {
      anm_init = '\x05';
      ChangeMonochrome(1);
      iVar4 = 0;
      iVar8 = clear_anime_timer;
    }
    break;
  case '\x05':
    ResultDisp();
    PolySquareYW(0.0,0.0,0x280,0x1c0,0,60.0,1.0,1.0,0x24000,0,0,0);
    iVar5 = BtlAnmMain();
    iVar8 = clear_anime_timer;
    if (iVar5 != 0) {
      anm_init = '\a';
    }
    break;
  case '\x06':
    bVar1 = IsEndAdpcmBtlmode();
    iVar4 = 0;
    iVar8 = clear_anime_timer;
    if (bVar1 != 0) {
      AdpcmMapCtrlInit();
      plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      clear_end = '\0';
      clear_end2 = '\0';
      clear_end3 = '\0';
      anm_init = '\0';
      iVar4 = now_pos_273 + 1;
      iVar8 = clear_anime_timer;
    }
    break;
  case '\a':
    iVar5 = BtlAnmInit(3);
    iVar8 = clear_anime_timer;
    if (iVar5 != 0) {
      anm_init = '\b';
      clear_anime_timer = 0x78;
      iVar8 = clear_anime_timer;
    }
    break;
  case '\b':
    iVar8 = 10;
    SetSprFile(0x1f108b0);
    pSVar7 = clear_all;
    ssd.tex0 = clear_all[0].tex0;
    while( true ) {
      ssd._8_8_ = *(undefined8 *)&pSVar7->u;
      ssd._16_8_ = *(undefined8 *)&pSVar7->x;
      iVar8 = iVar8 + -1;
      ssd._24_8_ = *(undefined8 *)&pSVar7->pri;
      pSVar7 = pSVar7 + 1;
      CopySprDToSpr(&ds,&ssd);
      DispSprD(&ds);
      if (iVar8 < 0) break;
      ssd.tex0 = pSVar7->tex0;
    }
    iVar8 = BtlAnmMain();
    if (iVar8 != 0) {
      anm_init = '\x06';
      AdpcmPreBtlmodeFadeOut(0);
      return 0;
    }
    if ((*key_now[3] == 1) ||
       ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
         (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) ||
        ((uVar3 = Ana2PadDirCnt('\x01'), 0x19 < uVar3 &&
         (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 == 1)))))) {
      now_pos_273 = now_pos_273 == 0;
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (((*key_now[2] == 1) ||
        ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))) ||
       (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) {
LAB_001260a0:
      now_pos_273 = now_pos_273 == 0;
      SeStartFix(0,0,0x1000,0x1000,0);
      uVar6 = (uint)now_pos_273;
    }
    else {
      uVar3 = Ana2PadDirCnt('\x03');
      uVar6 = (uint)now_pos_273;
      if (0x19 < uVar3) {
        sVar2 = Ana2PadDirCnt('\x03');
        uVar6 = (uint)now_pos_273;
        if ((int)sVar2 % 5 == 1) goto LAB_001260a0;
      }
    }
    alpha_res[uVar6] = 'd';
    DispSprt2(btl_rslt + 0xb,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[0]);
    DispSprt2(btl_rslt + 0xc,0x1e90000,1,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alpha_res[1]);
    iVar8 = clear_anime_timer + -1;
    if ((clear_anime_timer == 0) && (iVar8 = clear_anime_timer, btl_clear_disp != 0)) {
      sd.alpha = 0x80;
      sd.pri = 0x1000;
      sd.r = 0x80;
      sd.g = 0x80;
      sd.b = 0x80;
      sd.str = (char *)GetIngameMSGAddr('\x06',0x2a);
      sd.pos_y = 0x11c;
      sd.pos_x = 0x58;
      sd.type = 0;
      CopyStrDToStr(&dsr,&sd);
      SetMessageV2(&dsr);
      DrawMessageBox(0xa000,64.0,262.0,512.0,88.0,0x80);
      iVar4 = 0;
      iVar8 = clear_anime_timer;
    }
  }
  clear_anime_timer = iVar8;
  return iVar4;
}

int CallStoryClear() {
	short int ret_num;
	static u_long clear_time = 0;
	static u_int t_point = 0;
	SPRT_DAT ssd;
	DISP_SPRT ds;
	DISP_STR dsr;
	STR_DAT sd;
	int i;
	
  short vol;
  ulong uVar1;
  SPRT_DAT *pSVar2;
  int iVar3;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  DISP_STR dsr;
  STR_DAT sd;
  
  iVar3 = 10;
  pSVar2 = story_end;
  ssd.tex0 = story_end[0].tex0;
  while( true ) {
    ssd._8_8_ = *(undefined8 *)&pSVar2->u;
    ssd._16_8_ = *(undefined8 *)&pSVar2->x;
    iVar3 = iVar3 + -1;
    ssd._24_8_ = *(undefined8 *)&pSVar2->pri;
    pSVar2 = pSVar2 + 1;
    CopySprDToSpr(&ds,&ssd);
    ds.tex1 = 0x161;
    DispSprD(&ds);
    if (iVar3 < 0) break;
    ssd.tex0 = pSVar2->tex0;
  }
  if (anm_init == '\0') {
    iVar3 = BtlAnmInit(5);
    if (iVar3 == 0) {
      return 0;
    }
    AdpcmMapCtrlInit();
    vol = GetAdpcmVol(0x60b);
    EAdpcmCmdPlay(0,1,0x60b,0,vol,0x280,0xfff,0);
    anm_init = '\x01';
    clear_time_277 = time_wrk.one_game;
    t_point_278 = ingame_wrk.total_point;
  }
  if ((first_clear_flg == 0) && ((cribo.clear_info & 2) == 0)) {
    SetSquareS(0x18000,-320.0,-224.0,320.0,224.0,'\0','\0','\0','\x01');
  }
  if (clear_disp == 0) {
    iVar3 = BtlAnmMain();
    if (iVar3 == 0) {
      PutStringYW(0x2e,0xd,0x76,0x7b,0x808080,0x80,0x18000,0);
      PutStringYW(0x2e,0xe,0xda,0x7b,0x808080,0x80,0x18000,0);
      uVar1 = __udivdi3(clear_time_277,0x34bc0);
      PutNumberYW(3,(int)uVar1,0x19d,0x7b,1.0,1.0,0x808080,0x80,0x18000,2,1);
      PutStringYW(0x2e,0xb,0x1ba,0x7b,0x808080,0x80,0x18000,0);
      uVar1 = __udivdi3(clear_time_277,0xe10);
      uVar1 = __umoddi3(uVar1,0x3c);
      PutNumberYW(3,(int)uVar1,0x1c8,0x7b,1.0,1.0,0x808080,0x80,0x18000,2,1);
      PutStringYW(0x2e,0xb,0x1e7,0x7b,0x808080,0x80,0x18000,0);
      uVar1 = __udivdi3(clear_time_277,0x3c);
      uVar1 = __umoddi3(uVar1,0x3c);
      PutNumberYW(3,(int)uVar1,499,0x7b,1.0,1.0,0x808080,0x80,0x18000,2,1);
      PutStringYW(0x2e,0x11,0x76,0xa3,0x808080,0x80,0x18000,0);
      PutStringYW(0x2e,0x12,0xda,0xa3,0x808080,0x80,0x18000,0);
      PutNumberYW(3,t_point_278,0x16c,0xa3,1.0,1.0,0x808080,0x80,0x18000,8,0);
      PutStringYW(0x2e,0xc,0x1ed,0xa3,0x808080,0x80,0x18000,0);
      return 0;
    }
    if (clear_disp_mode != 0) {
      clear_disp = 1;
      return 0;
    }
  }
  else {
    sd.alpha = 0x80;
    sd.pri = 0x1000;
    sd.r = 0x80;
    sd.g = 0x80;
    sd.b = 0x80;
    if (clear_disp_mode == 1) {
      sd.str = (char *)GetIngameMSGAddr('\x06',0x29);
      sd.pos_y = 0xaa;
      sd.pos_x = 0x58;
      sd.type = 0;
      CopyStrDToStr(&dsr,&sd);
      SetMessageV2(&dsr);
      DrawMessageBox(0xa000,64.0,152.0,512.0,128.0,0x80);
    }
    if (clear_disp_mode == 2) {
      sd.str = (char *)GetIngameMSGAddr('\x06',0x2c);
      sd.pos_y = 0xb6;
      sd.pos_x = 0x58;
      sd.type = 0;
      CopyStrDToStr(&dsr,&sd);
      SetMessageV2(&dsr);
      DrawMessageBox(0xa000,64.0,152.0,512.0,128.0,0x80);
    }
    if (clear_disp_mode == 3) {
      sd.str = (char *)GetIngameMSGAddr('\x06',0x2d);
      sd.pos_y = 0xcd;
      sd.pos_x = 0x6e;
      sd.type = 0;
      CopyStrDToStr(&dsr,&sd);
      SetMessageV2(&dsr);
      DrawMessageBox(0xa000,64.0,172.0,512.0,88.0,0x80);
    }
    if (*key_now[5] != 1) {
      return 0;
    }
    clear_disp_mode = 0;
  }
  anm_init = '\0';
  banm.load_id = 0xffff;
  banm.mode = 0;
  banm.tm2_id = 0xffff;
  banm.tex_keep = 0;
  return 1;
}

int BtlAnmInit(int anm_no) {
	int i;
	int j;
	int story_rank;
	
  undefined uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong *puVar7;
  uint *puVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  long lVar21;
  undefined2 *puVar22;
  int iVar23;
  
  iVar20 = 0;
  iVar15 = 0;
  anm_no_keep = (ushort)anm_no;
  anm_wrk.start_point = &wrk_table;
  if (-1 < anm_no) {
    iVar10 = 1;
    do {
      if (iVar20 != 0) {
        iVar20 = iVar10;
      }
      anm_wrk.start_num = (ushort)iVar20;
      iVar15 = iVar15 + 1;
      iVar10 = (&DAT_002735bc)[iVar20 * 0x44];
      while (iVar10 != 0) {
        iVar20 = iVar20 + 1;
        iVar10 = (&DAT_002735bc)[iVar20 * 0x44];
      }
      iVar10 = iVar20 + 1;
    } while (iVar15 <= anm_no);
  }
  anm_wrk.end_num = (ushort)iVar20;
  if (anm_load_id != 0) goto LAB_00126938;
  switch(anm_no) {
  default:
    iVar20 = 0x40;
    break;
  case 1:
  case 2:
    iVar20 = 0x41;
    break;
  case 3:
    LoadReq(0x40,0x1e90000);
    iVar20 = 0x42;
    uVar16 = 0x1f108b0;
    goto LAB_00126928;
  case 4:
    iVar20 = 0x105;
    break;
  case 5:
    LoadReq(0x41,0x1e90000);
    iVar20 = 0x69;
    uVar16 = 0x14b0000;
    goto LAB_00126928;
  }
  uVar16 = 0x1e90000;
LAB_00126928:
  LoadReq(iVar20,uVar16);
  anm_load_id = 1;
LAB_00126938:
  iVar20 = IsLoadEndAll();
  if (iVar20 == 0) {
    iVar20 = 0;
  }
  else {
    if (anm_no == 3) {
      SetSprFile(0x1e90000);
      SetSprFile(0x1f108b0);
    }
    else if (anm_no == 5) {
      SetSprFile(0x1e90000);
      SetSprFile(0x14b0000);
    }
    else {
      SetSprFile(0x1e90000);
    }
    uVar9 = anm_wrk.end_num;
    lVar21 = (long)(short)anm_wrk.start_num;
    anm_load_id = 0;
    if (lVar21 < (short)anm_wrk.end_num) {
      do {
        iVar15 = (int)lVar21;
        iVar20 = iVar15 * 0x110;
        uVar16 = *(uint *)(&DAT_00271408 + *(int *)(&wrk_table + iVar20) * 0xf0);
        (&DAT_002736b4)[iVar15 * 0x44] = &anm2d_dat + *(int *)(&wrk_table + iVar20) * 0xf0;
        if ((uVar16 & 0x200) == 0) {
          if ((uVar16 & 0x400) == 0) {
            if ((uVar16 & 0x800) == 0) {
              uVar6 = (&DAT_002735bc)[iVar15 * 0x44];
              uVar2 = uVar6 + 7 & 7;
              uVar11 = uVar6 & 7;
              uVar14 = (*(long *)((uVar6 + 7) - uVar2) << (7 - uVar2) * 8 |
                       (long)(int)(&wrk_table + iVar20) & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                       -1L << (8 - uVar11) * 8 | *(ulong *)(uVar6 - uVar11) >> uVar11 * 8;
              uVar2 = uVar6 + 0xb & 3;
              uVar11 = uVar6 + 8 & 3;
              uVar16 = (*(int *)((uVar6 + 0xb) - uVar2) << (3 - uVar2) * 8 |
                       uVar16 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar11) * 8 |
                       *(uint *)((uVar6 + 8) - uVar11) >> uVar11 * 8;
              uVar3 = *(undefined2 *)(uVar6 + 0xc);
              uVar2 = iVar20 + 0x2735c7U & 7;
              puVar7 = (ulong *)((iVar20 + 0x2735c7U) - uVar2);
              *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
              (&DAT_002735c0)[iVar15 * 0x22] = uVar14;
              uVar2 = iVar20 + 0x2735cbU & 3;
              puVar8 = (uint *)((iVar20 + 0x2735cbU) - uVar2);
              *puVar8 = *puVar8 & -1 << (uVar2 + 1) * 8 | uVar16 >> (3 - uVar2) * 8;
              (&DAT_002735c8)[iVar15 * 0x44] = uVar16;
              (&DAT_002735cc)[iVar15 * 0x88] = uVar3;
            }
            else {
              iVar20 = 0;
              if (((0xb891f < time_wrk.one_game) && (iVar20 = 1, 0xd2eff < time_wrk.one_game)) &&
                 (iVar20 = 2, 0x107abf < time_wrk.one_game)) {
                iVar20 = 5;
                if (time_wrk.one_game < 0x171240) {
                  iVar20 = 3;
                }
                else if (time_wrk.one_game < 0x20f580) {
                  iVar20 = 4;
                }
              }
              uVar11 = iVar20 * 0xe + (&DAT_002735bc)[iVar15 * 0x44];
              uVar16 = uVar11 + 7 & 7;
              uVar2 = uVar11 & 7;
              uVar14 = (*(long *)((uVar11 + 7) - uVar16) << (7 - uVar16) * 8 |
                       (long)(int)(&DAT_002735bc)[iVar15 * 0x44] &
                       0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                       *(ulong *)(uVar11 - uVar2) >> uVar2 * 8;
              uVar16 = uVar11 + 0xb & 3;
              uVar2 = uVar11 + 8 & 3;
              uVar2 = (*(int *)((uVar11 + 0xb) - uVar16) << (3 - uVar16) * 8 |
                      0xffffffffU >> (uVar16 + 1) * 8 & 0x2735b8) & -1 << (4 - uVar2) * 8 |
                      *(uint *)((uVar11 + 8) - uVar2) >> uVar2 * 8;
              uVar3 = *(undefined2 *)(uVar11 + 0xc);
              uVar16 = iVar15 * 0x110 + 0x2735c7;
              uVar11 = uVar16 & 7;
              puVar7 = (ulong *)(uVar16 - uVar11);
              *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar14 >> (7 - uVar11) * 8;
              (&DAT_002735c0)[iVar15 * 0x22] = uVar14;
              uVar16 = iVar15 * 0x110 + 0x2735cb;
              uVar11 = uVar16 & 3;
              puVar8 = (uint *)(uVar16 - uVar11);
              *puVar8 = *puVar8 & -1 << (uVar11 + 1) * 8 | uVar2 >> (3 - uVar11) * 8;
              (&DAT_002735c8)[iVar15 * 0x44] = uVar2;
              (&DAT_002735cc)[iVar15 * 0x88] = uVar3;
            }
          }
          else {
            uVar11 = ((btl_wrk.stage_no + 1) / 10) * 0xe + (&DAT_002735bc)[iVar15 * 0x44];
            uVar16 = uVar11 + 7 & 7;
            uVar2 = uVar11 & 7;
            uVar14 = (*(long *)((uVar11 + 7) - uVar16) << (7 - uVar16) * 8 |
                     0xffffffffffffffffU >> (uVar16 + 1) * 8 & 10) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)(uVar11 - uVar2) >> uVar2 * 8;
            uVar16 = uVar11 + 0xb & 3;
            uVar2 = uVar11 + 8 & 3;
            uVar16 = (*(int *)((uVar11 + 0xb) - uVar16) << (3 - uVar16) * 8 |
                     (&DAT_002735bc)[iVar15 * 0x44] & 0xffffffffU >> (uVar16 + 1) * 8) &
                     -1 << (4 - uVar2) * 8 | *(uint *)((uVar11 + 8) - uVar2) >> uVar2 * 8;
            uVar3 = *(undefined2 *)(uVar11 + 0xc);
            uVar2 = iVar20 + 0x2735c7U & 7;
            puVar7 = (ulong *)((iVar20 + 0x2735c7U) - uVar2);
            *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
            (&DAT_002735c0)[iVar15 * 0x22] = uVar14;
            uVar2 = iVar20 + 0x2735cbU & 3;
            puVar8 = (uint *)((iVar20 + 0x2735cbU) - uVar2);
            *puVar8 = *puVar8 & -1 << (uVar2 + 1) * 8 | uVar16 >> (3 - uVar2) * 8;
            (&DAT_002735c8)[iVar15 * 0x44] = uVar16;
            (&DAT_002735cc)[iVar15 * 0x88] = uVar3;
          }
        }
        else {
          uVar11 = ((btl_wrk.stage_no + 1) % 10) * 0xe + (&DAT_002735bc)[iVar15 * 0x44];
          uVar16 = uVar11 + 7 & 7;
          uVar2 = uVar11 & 7;
          uVar14 = (*(long *)((uVar11 + 7) - uVar16) << (7 - uVar16) * 8 |
                   (long)(int)(&wrk_table + iVar20) & 0xffffffffffffffffU >> (uVar16 + 1) * 8) &
                   -1L << (8 - uVar2) * 8 | *(ulong *)(uVar11 - uVar2) >> uVar2 * 8;
          uVar16 = uVar11 + 0xb & 3;
          uVar2 = uVar11 + 8 & 3;
          uVar16 = (*(int *)((uVar11 + 0xb) - uVar16) << (3 - uVar16) * 8 |
                   0xffffffffU >> (uVar16 + 1) * 8 & 10) & -1 << (4 - uVar2) * 8 |
                   *(uint *)((uVar11 + 8) - uVar2) >> uVar2 * 8;
          uVar3 = *(undefined2 *)(uVar11 + 0xc);
          uVar2 = iVar20 + 0x2735c7U & 7;
          puVar7 = (ulong *)((iVar20 + 0x2735c7U) - uVar2);
          *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
          (&DAT_002735c0)[iVar15 * 0x22] = uVar14;
          uVar2 = iVar20 + 0x2735cbU & 3;
          puVar8 = (uint *)((iVar20 + 0x2735cbU) - uVar2);
          *puVar8 = *puVar8 & -1 << (uVar2 + 1) * 8 | uVar16 >> (3 - uVar2) * 8;
          (&DAT_002735c8)[iVar15 * 0x44] = uVar16;
          (&DAT_002735cc)[iVar15 * 0x88] = uVar3;
          *(short *)(&DAT_002735c8 + iVar15 * 0x44) =
               *(short *)(&DAT_002735c8 + iVar15 * 0x44) + 0x14;
        }
        iVar20 = iVar15 * 0x110;
        lVar21 = (long)(iVar15 + 1);
        iVar23 = 6;
        iVar10 = *(int *)(&wrk_table + iVar20) * 0xf0;
        iVar13 = (uint)*(ushort *)((int)&DAT_002735c0 + iVar20 + 4) << 0x10;
        iVar12 = (uint)*(ushort *)((int)&DAT_002735c0 + iVar20 + 6) << 0x10;
        sVar19 = *(short *)(&DAT_002735c8 + iVar15 * 0x44) +
                 (short)((iVar13 >> 0x10) - (iVar13 >> 0x1f) >> 1);
        uVar1 = (&DAT_00271402)[iVar10];
        puVar17 = &DAT_0027367a + iVar15 * 0x88;
        uVar3 = *(undefined2 *)(&DAT_00271404 + iVar10);
        sVar18 = *(short *)((int)&DAT_002735c8 + iVar20 + 2) +
                 (short)((iVar12 >> 0x10) - (iVar12 >> 0x1f) >> 1);
        uVar4 = *(undefined2 *)(&DAT_002713fc + iVar10);
        puVar22 = &DAT_002735ce + iVar15 * 0x88;
        uVar5 = *(undefined2 *)(&DAT_002713fe + iVar10);
        (&DAT_00273634)[iVar15 * 0x44] = (float)(int)*(short *)(&DAT_00271400 + iVar10);
        *(undefined *)((int)&DAT_002735cc + iVar20 + 1) = uVar1;
        (&DAT_002736c4)[iVar15 * 0x88] = uVar3;
        (&DAT_00273674)[iVar15 * 0x88] = uVar4;
        (&DAT_00273676)[iVar15 * 0x88] = uVar5;
        (&DAT_00273630)[iVar15 * 0x88] = sVar19;
        (&DAT_00273632)[iVar15 * 0x88] = sVar18;
        (&DAT_00273670)[iVar15 * 0x88] = sVar19;
        (&DAT_00273672)[iVar15 * 0x88] = sVar18;
        do {
          *puVar22 = 0x7fff;
          iVar23 = iVar23 + -1;
          puVar17[-0x21] = 0x7fff;
          puVar22 = puVar22 + 7;
          *puVar17 = 0x7fff;
          puVar17 = puVar17 + 4;
        } while (-1 < iVar23);
      } while (lVar21 < (int)(short)uVar9);
    }
    iVar20 = 1;
  }
  return iVar20;
}

int BtlAnmMain() {
	int i;
	
  uint uVar1;
  int iVar2;
  void *pvVar3;
  SPRT_SDAT *ssd_p;
  ANM2D_WRK_TABLE *w_table;
  void **ppvVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = (long)(short)anm_wrk.start_num;
  if (lVar6 < (short)anm_wrk.end_num) {
    do {
      iVar5 = (int)lVar6;
      if ((*(uint *)((&DAT_002736b4)[iVar5 * 0x44] + 0x10) & 0x80000) != 0) {
        return 1;
      }
      if (((*(uint *)((&DAT_002736b4)[iVar5 * 0x44] + 0x10) & 0x100000) != 0) && (*key_now[5] == 1))
      {
        SeStartFix(1,0,0x1000,0x1000,0);
        return 1;
      }
      iVar2 = iVar5 * 0x110;
      ppvVar4 = (void **)(&DAT_002736b4 + iVar5 * 0x44);
      if ((*(uint *)((int)*ppvVar4 + 0x10) & 0x8000) == 0) {
        uVar1 = *(uint *)((int)*ppvVar4 + 0x10);
      }
      else {
        BtlDataDirectSet((ANM2D_WRK_TABLE *)(&wrk_table + iVar2));
        uVar1 = *(uint *)((int)*ppvVar4 + 0x10);
      }
      if ((uVar1 & 0x48000) == 0) {
        w_table = (ANM2D_WRK_TABLE *)(&wrk_table + iVar2);
        ssd_p = (SPRT_SDAT *)(&DAT_002735c0 + iVar5 * 0x22);
        BtlTblTransX(w_table,(ANM2D_DAT_TABLE *)(&anm2d_dat + iVar5 * 0xf0),ssd_p);
        BtlTblTransY(w_table,(ANM2D_DAT_TABLE *)(&anm2d_dat + iVar5 * 0xf0),ssd_p);
        BtlTblRotate(w_table,ssd_p,*ppvVar4);
        BtlTblScale(w_table,ssd_p,*ppvVar4);
        TblAlphaChg(w_table,ssd_p,*ppvVar4);
        ZanzouEffect(w_table,ssd_p,*ppvVar4);
        pvVar3 = BtlTblIncl((ANM2D_DAT_TABLE *)(&anm2d_dat + w_table->anm_index * 0xf0),*ppvVar4,
                            &DAT_002736c4 + iVar5 * 0x88);
        uVar1 = *(uint *)((int)pvVar3 + 0x10);
        *ppvVar4 = pvVar3;
        if ((uVar1 & 0x10000) == 0) {
          if ((uVar1 & 0x10) == 0) {
            BtlReadyDisp(w_table);
          }
          else {
            DrawMessageBox(0x2000,(float)(int)*(short *)(&DAT_002735c8 + iVar5 * 0x44),
                           (float)(int)*(short *)((int)&DAT_002735c8 + iVar2 + 2),592.0,96.0,
                           *(byte *)((int)&DAT_002735cc + iVar2 + 1));
          }
        }
      }
      lVar6 = (long)(iVar5 + 1);
    } while (lVar6 < (short)anm_wrk.end_num);
  }
  return 0;
}

void* BtlTblIncl(ANM2D_DAT_TABLE *b_table, void *p_table, short int *count_keep) {
	int i;
	
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)((int)p_table + 0x10) & 0x20000) == 0) {
    if ((short)*count_keep < 1) {
      if (p_table != (void *)0x0) {
        if ((*(uint *)((int)p_table + 0x10) & 0x2000) == 0) {
          b_table = (ANM2D_DAT_TABLE *)((int)p_table + 0x14);
        }
        else {
          if ((b_table->attribute & 0x1000) == 0) {
            puVar2 = &b_table->attribute;
            do {
              puVar2 = puVar2 + 5;
              iVar3 = iVar3 + 1;
            } while ((*puVar2 & 0x1000) == 0);
          }
          b_table = b_table + iVar3;
        }
      }
      uVar1 = b_table->counter;
    }
    else {
      uVar1 = *count_keep - 1;
      b_table = (ANM2D_DAT_TABLE *)p_table;
    }
    *count_keep = uVar1;
    return b_table;
  }
  return p_table;
}

void BtlDataDirectSet(ANM2D_WRK_TABLE *w_table) {
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  
  psVar4 = (short *)w_table->table_p;
  uVar1 = w_table->sdat[0].x;
  sVar2 = *psVar4;
  uVar3 = w_table->sdat[0].y;
  w_table->table_p = psVar4 + 10;
  w_table->sdat[0].x = uVar1 + sVar2;
  w_table->sdat[0].y = uVar3 + psVar4[1];
  w_table->counter = psVar4[0x10];
  return;
}

void BtlTblTransX(ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table, SPRT_SDAT *ssd_p) {
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = (ushort *)w_table->table_p;
  if ((w_table->counter == puVar1[6]) && ((*(uint *)(puVar1 + 8) & 1) == 0)) {
    w_table->x_speed = *puVar1;
  }
  if (puVar1 != (ushort *)0x0) {
    if ((*(uint *)(puVar1 + 8) & 0x4000) != 0) {
      return;
    }
    if ((*(uint *)(puVar1 + 8) & 1) != 0) {
      uVar2 = w_table->x_speed + *puVar1;
      w_table->x_speed = uVar2;
      ssd_p->x = ssd_p->x + ((short)uVar2 >> 4);
      return;
    }
    uVar2 = w_table->x_speed + *puVar1;
    w_table->x_speed = uVar2;
    if ((short)*puVar1 < 1) {
      while ((short)uVar2 < -0xf) {
        ssd_p->x = ssd_p->x - 1;
        uVar2 = w_table->x_speed + 0x10;
        w_table->x_speed = uVar2;
      }
    }
    else if (0xf < (short)uVar2) {
      do {
        ssd_p->x = ssd_p->x + 1;
        uVar2 = w_table->x_speed - 0x10;
        w_table->x_speed = uVar2;
      } while (0xf < (short)uVar2);
      return;
    }
  }
  return;
}

void BtlTblTransY(ANM2D_WRK_TABLE *w_table, ANM2D_DAT_TABLE *b_table, SPRT_SDAT *ssd_p) {
  void *pvVar1;
  ushort uVar2;
  
  pvVar1 = w_table->table_p;
  if ((w_table->counter == *(ushort *)((int)pvVar1 + 0xc)) &&
     ((*(uint *)((int)pvVar1 + 0x10) & 2) == 0)) {
    w_table->y_speed = *(ushort *)((int)pvVar1 + 2);
  }
  if (pvVar1 != (void *)0x0) {
    if ((*(uint *)((int)pvVar1 + 0x10) & 0x4000) != 0) {
      return;
    }
    if ((*(uint *)((int)pvVar1 + 0x10) & 2) != 0) {
      uVar2 = w_table->y_speed + *(short *)((int)pvVar1 + 2);
      w_table->y_speed = uVar2;
      ssd_p->y = ssd_p->y + ((short)uVar2 >> 4);
      return;
    }
    uVar2 = w_table->y_speed + *(short *)((int)pvVar1 + 2);
    w_table->y_speed = uVar2;
    if (*(short *)((int)pvVar1 + 2) < 1) {
      while ((short)uVar2 < -0xf) {
        ssd_p->y = ssd_p->y - 1;
        uVar2 = w_table->y_speed + 0x10;
        w_table->y_speed = uVar2;
      }
    }
    else if (0xf < (short)uVar2) {
      do {
        ssd_p->y = ssd_p->y + 1;
        uVar2 = w_table->y_speed - 0x10;
        w_table->y_speed = uVar2;
      } while (0xf < (short)uVar2);
      return;
    }
  }
  return;
}

void BtlTblRotate(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (uint)w_table->sdat[0].w << 0x10;
  uVar1 = w_table->counter;
  iVar5 = (uint)w_table->sdat[0].h << 0x10;
  w_table->srot[0].cx = ssd_p->x + (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
  w_table->srot[0].cy = ssd_p->y + (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
  uVar2 = *(ushort *)((int)p_table + 0xc);
  sVar3 = *(short *)((int)p_table + 0xc);
  if (uVar2 == uVar1) {
    w_table->rot_off =
         (ushort)(int)((float)(int)*(short *)((int)p_table + 8) - w_table->srot[0].rot);
    sVar3 = *(short *)((int)p_table + 0xc);
    if (*(ushort *)((int)p_table + 0xc) == uVar2) {
      return;
    }
  }
  if (sVar3 == 0) {
    trap(7);
  }
  w_table->srot[0].rot =
       (float)((int)*(short *)((int)p_table + 8) -
              ((int)(short)w_table->rot_off * (int)(short)uVar1) / (int)sVar3);
  return;
}

void BtlTblScale(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table) {
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  
  pvVar4 = w_table->table_p;
  uVar2 = w_table->counter;
  if (w_table->counter == *(ushort *)((int)pvVar4 + 0xc)) {
    if ((*(uint *)((int)pvVar4 + 0x10) & 4) == 0) {
      uVar3 = w_table->sscl[0].sh;
      w_table->xscal_off = *(short *)((int)p_table + 4) - w_table->sscl[0].sw;
      w_table->yscal_off = *(short *)((int)p_table + 6) - uVar3;
    }
    else {
      w_table->xscal_off = 0;
      w_table->yscal_off = 0;
    }
  }
  iVar7 = (uint)w_table->sdat[0].w << 0x10;
  uVar5 = *(uint *)((int)pvVar4 + 0x10);
  iVar8 = (uint)w_table->sdat[0].h << 0x10;
  w_table->sscl[0].cx = ssd_p->x + (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
  w_table->sscl[0].cy = ssd_p->y + (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1);
  if ((uVar5 & 0x4000) == 0) {
    if ((uVar5 & 4) != 0) {
      uVar6 = w_table->xscal_off + *(short *)((int)pvVar4 + 4);
      uVar2 = w_table->sscl[0].sw;
      w_table->xscal_off = uVar6;
      uVar3 = w_table->sscl[0].sw;
      w_table->yscal_off = w_table->yscal_off + *(short *)((int)pvVar4 + 6);
      if ((int)(short)uVar2 + ((int)((uint)uVar6 << 0x10) >> 0x14) < 1) {
        w_table->sscl[0].sw = 0;
      }
      else {
        w_table->sscl[0].sw = uVar3 + ((short)uVar6 >> 4);
      }
      if (0 < (int)(short)w_table->sscl[0].sh + ((int)((uint)w_table->yscal_off << 0x10) >> 0x14)) {
        w_table->sscl[0].sh = w_table->sscl[0].sh + ((short)w_table->yscal_off >> 4);
        return;
      }
      w_table->sscl[0].sh = 0;
      return;
    }
    sVar1 = *(short *)((int)p_table + 0xc);
    iVar7 = (int)(short)uVar2;
    if ((long)sVar1 != (long)iVar7) {
      if ((long)sVar1 == 0) {
        trap(7);
      }
      uVar2 = w_table->yscal_off;
      w_table->sscl[0].sw =
           *(short *)((int)p_table + 4) - (short)(((short)w_table->xscal_off * iVar7) / (int)sVar1);
      w_table->sscl[0].sh =
           *(short *)((int)p_table + 6) -
           (short)(((short)uVar2 * iVar7) / (int)*(short *)((int)p_table + 0xc));
    }
  }
  return;
}

void TblAlphaChg(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table) {
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)p_table + 0xc);
  sVar2 = *(short *)((int)p_table + 0xc);
  if (uVar1 == w_table->counter) {
    w_table->alpha_off = *(short *)((int)p_table + 10) - (ushort)ssd_p->alp;
    sVar2 = *(short *)((int)p_table + 0xc);
    if (*(ushort *)((int)p_table + 0xc) == uVar1) {
      return;
    }
  }
  if (sVar2 == 0) {
    trap(7);
  }
  ssd_p->alp = *(char *)((int)p_table + 10) -
               (char)(((int)(short)w_table->alpha_off * (int)(short)w_table->counter) / (int)sVar2);
  return;
}

void ZanzouEffect(ANM2D_WRK_TABLE *w_table, SPRT_SDAT *ssd_p, void *p_table) {
	int i;
	
  undefined *puVar1;
  ushort *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulong *puVar7;
  uint *puVar8;
  ushort *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong unaff_s4;
  
  if ((*(uint *)((int)p_table + 0x10) & 8) != 0) {
    uVar11 = 7;
    uVar12 = 6;
    do {
      if (w_table->sdat[uVar12].u != 0x7fff) {
        if (((((uVar11 == 1) || (w_table->sscl[uVar11].cx != w_table->sscl[0].cx)) ||
             (w_table->sscl[uVar11].cy != w_table->sscl[0].cy)) ||
            ((w_table->sscl[uVar11].sw != w_table->sscl[0].sw ||
             (w_table->sscl[uVar11].sh != w_table->sscl[0].sh)))) ||
           ((w_table->srot[uVar11].rot != w_table->srot[0].rot ||
            ((w_table->sdat[uVar11].x != w_table->sdat[0].x ||
             (w_table->sdat[uVar11].y != w_table->sdat[0].y)))))) {
          puVar9 = &w_table->sdat[uVar12 - 1].h;
          uVar4 = (int)puVar9 + 0xfU & 7;
          uVar5 = (uint)(puVar9 + 4) & 7;
          uVar10 = (*(long *)(((int)puVar9 + 0xfU) - uVar4) << (7 - uVar4) * 8 |
                   (long)(int)(uVar11 * 8) & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                   -1L << (8 - uVar5) * 8 | *(ulong *)((int)(puVar9 + 4) - uVar5) >> uVar5 * 8;
          uVar4 = (int)puVar9 + 0x13U & 3;
          uVar5 = (uint)(puVar9 + 8) & 3;
          uVar4 = (*(int *)(((int)puVar9 + 0x13U) - uVar4) << (3 - uVar4) * 8 |
                  uVar11 & 0xffffffffU >> (uVar4 + 1) * 8) & -1 << (4 - uVar5) * 8 |
                  *(uint *)((int)(puVar9 + 8) - uVar5) >> uVar5 * 8;
          uVar6 = puVar9[10];
          puVar1 = (undefined *)((int)&w_table->sdat[uVar11].h + 1);
          uVar5 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar5);
          *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
          uVar5 = (uint)(w_table->sdat + uVar11) & 7;
          puVar7 = (ulong *)((int)(w_table->sdat + uVar11) - uVar5);
          *puVar7 = uVar10 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
          puVar1 = (undefined *)((int)&w_table->sdat[uVar11].y + 1);
          uVar5 = (uint)puVar1 & 3;
          puVar8 = (uint *)(puVar1 + -uVar5);
          *puVar8 = *puVar8 & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
          puVar2 = &w_table->sdat[uVar11].x;
          uVar5 = (uint)puVar2 & 3;
          puVar8 = (uint *)((int)puVar2 - uVar5);
          *puVar8 = *puVar8 & 0xffffffffU >> (4 - uVar5) * 8 | uVar4 << uVar5 * 8;
          *(undefined2 *)&w_table->sdat[uVar11].pri = uVar6;
          puVar1 = (undefined *)((int)&w_table->srot[uVar12].rot + 3);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)(w_table->srot + uVar12) & 7;
          uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   (long)(int)puVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                   -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)(w_table->srot + uVar12) - uVar5) >> uVar5 * 8;
          puVar1 = (undefined *)((int)&w_table->srot[uVar11].rot + 3);
          uVar4 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
          uVar4 = (uint)(w_table->srot + uVar11) & 7;
          puVar7 = (ulong *)((int)(w_table->srot + uVar11) - uVar4);
          *puVar7 = uVar10 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          puVar1 = (undefined *)((int)&w_table->sscl[uVar12].sh + 1);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)(w_table->sscl + uVar12) & 7;
          unaff_s4 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                     unaff_s4 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                     *(ulong *)((int)(w_table->sscl + uVar12) - uVar5) >> uVar5 * 8;
          puVar1 = (undefined *)((int)&w_table->sscl[uVar11].sh + 1);
          uVar4 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | unaff_s4 >> (7 - uVar4) * 8;
          uVar4 = (uint)(w_table->sscl + uVar11) & 7;
          puVar7 = (ulong *)((int)(w_table->sscl + uVar11) - uVar4);
          *puVar7 = unaff_s4 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          w_table->sdat[uVar11].alp = w_table->sdat[uVar11].alp >> 1;
        }
        else {
          w_table->sdat[uVar11].u = 0x7fff;
        }
      }
      bVar3 = 0 < (int)uVar12;
      uVar11 = uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar3);
  }
  return;
}

void BtlReadyDisp(ANM2D_WRK_TABLE *w_table) {
	int i;
	
  ushort uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  SetSprFile(0x1e90000);
  psVar2 = (short *)w_table->table_p;
  uVar3 = *(uint *)(psVar2 + 8);
  if ((uVar3 & 0x10000) == 0) {
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0x20) == 0) {
        if ((uVar3 & 0x100) == 0) {
          if ((uVar3 & 0x40) == 0) {
            if ((uVar3 & 0x80) == 0) {
              DispSprt2(w_table->sdat,0x1e90000,w_table->sp_no,w_table->srot,w_table->sscl,'d');
              if ((*(uint *)((int)w_table->table_p + 0x10) & 8) != 0) {
                uVar1 = w_table->sdat[2].u;
                iVar4 = 2;
                while (uVar1 != 0x7fff) {
                  iVar5 = iVar4 + 1;
                  DispSprt2(w_table->sdat + iVar4,0x1e90000,w_table->sp_no,w_table->srot + iVar4,
                            w_table->sscl + iVar4,'d');
                  if (7 < iVar5) {
                    return;
                  }
                  iVar4 = iVar5;
                  uVar1 = w_table->sdat[iVar5].u;
                }
              }
            }
            else {
              DispSprt3(w_table->sdat,0x1e90000,w_table->sp_no,w_table->srot,w_table->sscl,'d');
            }
          }
          else {
            SimpleMaskDraw(w_table->sdat[0].alp);
          }
        }
        else {
          SetLine(0x19000,(float)(*psVar2 + -0x140),(float)(psVar2[1] + -0xe0),
                  (float)(psVar2[2] + -0x140),(float)(psVar2[3] + -0xe0),0x8a,'v','`',
                  *(uchar *)(psVar2 + 5));
        }
      }
      else {
        PutStringYW(0x2e,0x14,w_table->sdat[0].x,w_table->sdat[0].y,0x808080,0x80,0x1000,0);
      }
    }
    else {
      DrawMessageBox(0x1e000,(float)(int)(short)w_table->sdat[0].x,
                     (float)(int)(short)w_table->sdat[0].y,592.0,96.0,w_table->sdat[0].alp);
    }
  }
  return;
}

void SimpleMaskDraw(u_char alpha) {
  SetSquareS(0xf000,-320.0,-224.0,320.0,224.0,'\0','\0','\0',alpha);
  return;
}

void DispSprt2(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = GetTex0Reg(addr,sp_no,0);
  sd.u = ssd->u;
  sd.v = ssd->v;
  sd.pri = (uint)ssd->pri << 0xc;
  sd.w = ssd->w;
  sd.h = ssd->h;
  sd.x = (int)(short)ssd->x;
  sd.y = (int)(short)ssd->y;
  sd.alpha = (uchar)(((uint)ssd->alp * ((int)(char)alp_rate & 0xffU)) / 100);
  CopySprDToSpr(&ds,&sd);
  ds.alphar = 0x48;
  if (srot != (SPRT_SROT *)0x0) {
    if (srot->cx == 0x7fff) {
      ds.att = ds.att | (int)(short)srot->cy;
    }
    else {
      ds.crx = (float)(int)(short)srot->cx;
      ds.rot = srot->rot;
      ds.cry = (float)(int)(short)srot->cy;
    }
  }
  if (sscl != (SPRT_SSCL *)0x0) {
    ds.scw = (float)(int)(short)sscl->sw / 100.0;
    ds.sch = (float)(int)(short)sscl->sh / 100.0;
    ds.csx = (float)(int)(short)sscl->cx;
    ds.csy = (float)(int)(short)sscl->cy;
  }
  ds.tex1 = 0x161;
  DispSprD(&ds);
  return;
}

void DispSprt3(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = GetTex0Reg(addr,sp_no,0);
  sd.u = ssd->u;
  sd.v = ssd->v;
  sd.pri = (uint)ssd->pri << 0xc;
  sd.w = ssd->w;
  sd.h = ssd->h;
  sd.alpha = ssd->alp;
  sd.x = (int)(short)ssd->x;
  sd.y = (int)(short)ssd->y;
  CopySprDToSpr(&ds,&sd);
  ds.alphar = 0x48;
  ds.test = 0x5002d;
  if (srot != (SPRT_SROT *)0x0) {
    if (srot->cx == 0x7fff) {
      ds.att = ds.att | (int)(short)srot->cy;
    }
    else {
      ds.crx = (float)(int)(short)srot->cx;
      ds.rot = srot->rot;
      ds.cry = (float)(int)(short)srot->cy;
    }
  }
  if (sscl != (SPRT_SSCL *)0x0) {
    ds.scw = (float)(int)(short)sscl->sw / 100.0;
    ds.sch = (float)(int)(short)sscl->sh / 100.0;
    ds.csx = (float)(int)(short)sscl->cx;
    ds.csy = (float)(int)(short)sscl->cy;
  }
  ds.tex1 = 0x161;
  DispSprD(&ds);
  return;
}

void DispSprtTemp(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = GetTex0Reg(addr,sp_no,0);
  sd.u = ssd->u;
  sd.v = ssd->v;
  sd.pri = (uint)ssd->pri << 0xc;
  sd.w = ssd->w;
  sd.h = ssd->h;
  sd.x = (int)(short)ssd->x;
  sd.y = (int)(short)ssd->y;
  if (((int)(char)alp_rate & 0xffU) == 0xff) {
    ds.alphar = 0x48;
  }
  else {
    sd.alpha = (uchar)(((uint)ssd->alp * ((int)(char)alp_rate & 0xffU)) / 100);
  }
  CopySprDToSpr(&ds,&sd);
  if (srot != (SPRT_SROT *)0x0) {
    if (srot->cx == 0x7fff) {
      ds.att = ds.att | (int)(short)srot->cy;
    }
    else {
      ds.crx = (float)(int)(short)srot->cx;
      ds.rot = srot->rot;
      ds.cry = (float)(int)(short)srot->cy;
    }
  }
  if (sscl != (SPRT_SSCL *)0x0) {
    ds.scw = (float)(int)(short)sscl->sw / 100.0;
    ds.sch = (float)(int)(short)sscl->sh / 100.0;
    ds.csx = (float)(int)(short)sscl->cx;
    ds.csy = (float)(int)(short)sscl->cy;
  }
  DispSprD(&ds);
  return;
}

void TestPk2Data_2dg(long int sendtexaddr) {
	static int ttest_count = 0;
	SPRT_SDAT ssd;
	
  SPRT_SDAT ssd;
  
  if (*key_now[8] == 1) {
    ttest_count_327 = ttest_count_327 + 1;
  }
  if (*key_now[9] == 1) {
    ttest_count_327 = ttest_count_327 + -1;
  }
  SimpleDispSprtDatCopy(btl_strt,&ssd);
  ssd.alp = 0x80;
  ssd.v = 1;
  ssd.u = 1;
  ssd.w = 0x2a8;
  ssd.h = 0x200;
  ssd.x = 0;
  ssd.y = 0;
  ssd.pri = '\0';
  SimpleDispSprt(&ssd,(uint)sendtexaddr,ttest_count_327,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  return;
}
