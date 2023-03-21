// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	SPEV00_NUMBER_0 = 0,
	SPEV01_NUMBER_1 = 1,
	SPEV02_OFUDA_0T = 2,
	SPEV03_OFUDA_0S = 3,
	SPEV04_KAMON_CRUSH0 = 4,
	SPEV05_OFUDA_1T = 5,
	SPEV06_OFUDA_1S = 6,
	SPEV07_OFUDA_2T = 7,
	SPEV08_OFUDA_2S = 8,
	SPEV09_KAMON_CRUSH1 = 9,
	SPEV10_NUMBER_2 = 10,
	SPEV11_KAMON_BLACK_B = 11,
	SPEV12_KAMON_BLACK_A = 12,
	SPEV13_BUTSUZO = 13,
	SPEV14_OFUDA_3T = 14,
	SPEV15_OFUDA_3S = 15,
	SPEV16_NUMBER3 = 16,
	SPEV17_KAMON_BLUE_B = 17,
	SPEV18_KAMON_BLUE_A = 18,
	SPEV19_KAMON_YELLOW_B = 19,
	SPEV20_KAMON_YELLOW_A = 20,
	SPEV21_LIGHTSOUT = 21,
	SPEV22_OFUDA_4T = 22,
	SPEV23_OFUDA_4S = 23,
	SPEV24_NUMBER_4 = 24,
	SPEV25_OFUDA_5T = 25,
	SPEV26_OFUDA_5S = 26,
	SPEV27_NUMBER_5 = 27,
	SPEV28_KAGOME = 28,
	SPEV29_MEN_KI = 29,
	SPEV30_MEN_DO = 30,
	SPEV31_MEN_AI = 31,
	SPEV32_MEN_RAKU = 32,
	SPEV33_MEN_CLOSE = 33,
	SPEV34_MEN_OPEN = 34,
	SPEV35_KAMON_PURPLE_B = 35,
	SPEV36_KAMON_PURPLE_A = 36,
	SPEV37_OFUDA_6T = 37,
	SPEV38_OFUDA_6S = 38,
	SPEV39_BUTSUZO_B = 39,
	SPEV40_KAMON_GREEN_B = 40,
	SPEV41_KAMON_GREEN_A = 41,
	SPEV42_BONJI_0 = 42,
	SPEV43_BONJI_1 = 43,
	SPEV44_BONJI_2 = 44,
	SPEV45_BONJI_3 = 45,
	SPEV46_NUMBER_6 = 46,
	SPEV47_NUMBER_7 = 47,
	SPEV48_NUMBER_8 = 48,
	SPEV49_KAKEJIKU = 49,
	SPEV50_NUMBER_9 = 50,
	SPEV51_NUMBER_10 = 51,
	SPEV52_NUMBER_11 = 52,
	SPEV53_NUMBER_12 = 53,
	SPEV54_MEN_OPEN1 = 54,
	SPEV55_MEN_OPEN2 = 55,
	SPEV56_MEN_OPEN3 = 56,
	SPEV57_BONJI_B = 57,
	SPEV58_IDO_INTO = 58,
	SPEV59_IDO_OUT = 59,
	SPEV60_BONJI_0A = 60,
	SPEV61_BONJI_1A = 61,
	SPEV62_BONJI_2A = 62,
	SPEV63_BONJI_3A = 63,
	SPEV64_USE_MIRROR = 64,
	SPEV65_USE_KEY = 65,
	SPEV66_USE_LIGHTER = 66,
	SPEV67_USE_BUTSUZO = 67,
	SPEV68_USE_KAKEJIKU = 68,
	SPEV69_USE_KINKO = 69,
	SPEV70_USE_KAGOME = 70,
	SPEV71_USE_MEKAKUSHI = 71,
	SPEV72_USE_TOUSHU = 72,
	SPEV73_USE_NAWA0 = 73,
	SPEV74_USE_NAWA1 = 74,
	SPEV75_USE_NAWA2 = 75,
	SPEV76_USE_NAWA3 = 76,
	SPEV77_USE_KANZASHI = 77,
	SPEV78_USE_IKARI = 78,
	SPEV79_IDO_INTO = 79,
	SPEV80_IDO_OUT = 80,
	SPEV81_OMN_MOVE = 81,
	SPEV82_USE_NAWAFLS = 82,
	SPEV82_USE_NAWAFLS0 = 82,
	SPEV83_USE_NAWAFLS1 = 83,
	SPEV84_USE_NAWAFLS2 = 84,
	SPEV85_USE_NAWAFLS3 = 85,
	SPEV86_ROT_DOOR_KI = 86,
	SPEV87_ROT_DOOR_DO = 87,
	SPEV88_ROT_DOOR_AI = 88,
	SPEV89_ROT_DOOR_RAKU = 89,
	SPEV90_ROT_DOOR_KAKE = 90
};

typedef struct {
	u_char no;
	u_char ret;
	u_char mode;
	u_char time;
	u_char count;
	u_char csr[3];
} SPECIAL_EVENT_WRK;

typedef struct {
	u_char move_num;
	u_char empty_no;
	u_char start[5];
	u_char line[10];
} STAR_PZL_DAT;

typedef struct {
	u_char pzl_no;
	u_char mode;
	u_char menu_mode;
	u_char menu_csr[2];
	u_char time;
	u_char count;
	u_char empty;
	u_char slct_no;
	u_char bak_no[10];
	u_char stone[5];
	u_char line[5][5];
} STAR_PZL_WRK;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	STAR_PZL_MODE_DEADWAIT = 0,
	STAR_PZL_MODE_READY = 1,
	STAR_PZL_MODE_SELOAD = 2,
	STAR_PZL_MODE_IN = 3,
	STAR_PZL_MODE_START = 4,
	STAR_PZL_MODE_SLCT = 5,
	STAR_PZL_MODE_MSG0 = 6,
	STAR_PZL_MODE_MSG = 7,
	STAR_PZL_MODE_MSG2 = 8,
	STAR_PZL_MODE_MSG3 = 9,
	STAR_PZL_MODE_MOVE = 10,
	STAR_PZL_MODE_MENU = 11,
	STAR_PZL_MODE_RESL = 12,
	STAR_PZL_MODE_END = 13,
	STAR_PZL_MODE_OUT = 14,
	STAR_PZL_MODE_BEFBAD = 15,
	STAR_PZL_MODE_BAD = 16,
	STAR_PZL_MODE_READYGOOD = 17,
	STAR_PZL_MODE_READYGOOD2 = 18,
	STAR_PZL_MODE_GOOD = 19,
	STAR_PZL_MODE_GOUT = 20
};

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	STAR_PZL_MENU_BACK = 0,
	STAR_PZL_MENU_RESET = 1,
	STAR_PZL_MENU_EXIT = 2,
	STAR_PZL_MENU_SLCT = 3,
	STAR_PZL_MENU_Y_N0 = 4,
	STAR_PZL_MENU_Y_N1 = 5
};

typedef struct {
	u_char dial_num;
	u_char lock_door;
	u_char dial_no[5];
} DIAL_KEY_DAT;

typedef struct {
	u_char door_no;
	u_char mode;
	u_char time;
	u_char count;
	u_char slct_no;
	u_char push;
	u_char btn[10];
	u_char push_no[5];
} DIAL_KEY_WRK;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	DIAL_KEY_MODE_DEADWAIT = 0,
	DIAL_KEY_MODE_READY = 1,
	DIAL_KEY_MODE_SELOAD = 2,
	DIAL_KEY_MODE_IN = 3,
	DIAL_KEY_MODE_MSG0 = 4,
	DIAL_KEY_MODE_MSG01 = 5,
	DIAL_KEY_MODE_MSG02 = 6,
	DIAL_KEY_MODE_MSG03 = 7,
	DIAL_KEY_MODE_SLCT = 8,
	DIAL_KEY_MODE_PUSH = 9,
	DIAL_KEY_MODE_GOOD = 10,
	DIAL_KEY_MODE_BAD = 11,
	DIAL_KEY_MODE_GOUT = 12,
	DIAL_KEY_MODE_BOUT = 13,
	DIAL_KEY_MODE_OUT = 14,
	DIAL_KEY_MODE_EXIT = 15,
	DIAL_KEY_MODE_GEXT = 16,
	DIAL_KEY_MODE_END = 17
};

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	GST_DOOR_MODE_READY = 0,
	GST_DOOR_MODE_IN = 1,
	GST_DOOR_MODE_MSG = 2,
	GST_DOOR_MODE_SLCT = 3,
	GST_DOOR_MODE_OUT = 4,
	GST_DOOR_MODE_EXIT = 5
};

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	DOLL_PZL_MODE_DEADWAIT = 0,
	DOLL_PZL_MODE_READY = 1,
	DOLL_PZL_MODE_SELOAD = 2,
	DOLL_PZL_MODE_BIN = 3,
	DOLL_PZL_MODE_ADPFADE = 4,
	DOLL_PZL_MODE_PRELOAD = 5,
	DOLL_PZL_MODE_IN = 6,
	DOLL_PZL_MODE_IN2 = 7,
	DOLL_PZL_MODE_IN3 = 8,
	DOLL_PZL_MODE_IN4 = 9,
	DOLL_PZL_MODE_SLCT = 10,
	DOLL_PZL_MODE_Y_N = 11,
	DOLL_PZL_MODE_Y_N2 = 12,
	DOLL_PZL_MODE_RESL = 13,
	DOLL_PZL_MODE_END = 14,
	DOLL_PZL_MODE_OUT = 15,
	DOLL_PZL_MODE_BAD = 16,
	DOLL_PZL_MODE_BAD2 = 17,
	DOLL_PZL_MODE_BAD3 = 18,
	DOLL_PZL_MODE_BAD4 = 19,
	DOLL_PZL_MODE_BAD5 = 20,
	DOLL_PZL_MODE_GOOD = 21,
	DOLL_PZL_MODE_GOOD2 = 22,
	DOLL_PZL_MODE_GOOD3 = 23,
	DOLL_PZL_MODE_GOUT = 24
};

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	DOLL_ROT_NOMAL = 0,
	DOLL_ROT_LEFT = 1,
	DOLL_ROT_BACK = 2,
	DOLL_ROT_RIGHT = 3,
	DOLL_ROT_NUM = 4
};

typedef struct {
	u_char answer;
	u_char order[9];
	u_char unfade_doll[3];
	u_char pad;
} EV_DOLL_DAT;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	BTZ_PZL_MODE_DEADWAIT = 0,
	BTZ_PZL_MODE_READY = 1,
	BTZ_PZL_MODE_SELOAD = 2,
	BTZ_PZL_MODE_IN = 3,
	BTZ_PZL_MODE_BDSLCT = 4,
	BTZ_PZL_MODE_SLCT = 5,
	BTZ_PZL_MODE_SLCTYES = 6,
	BTZ_PZL_MODE_SLCTNO = 7,
	BTZ_PZL_MODE_PUT = 8,
	BTZ_PZL_MODE_CONFLICT = 9,
	BTZ_PZL_MODE_Y_N = 10,
	BTZ_PZL_MODE_RESL = 11,
	BTZ_PZL_MODE_BAD = 12,
	BTZ_PZL_MODE_GOOD = 13,
	BTZ_PZL_MODE_GOUT = 14,
	BTZ_PZL_MODE_OUT = 15,
	BTZ_PZL_MODE_END = 16
};

typedef struct {
	short int use_flg;
	short int set_place;
} EV_BTZ_DAT;

typedef struct {
	short int t_counter;
	short int bld_apr[10];
	short int bld_end[10];
	short int pad;
} EV_BLD_DAT;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	CDL_PZL_MODE_DEADWAIT = 0,
	CDL_PZL_MODE_READY = 1,
	CDL_PZL_MODE_SELOAD = 2,
	CDL_PZL_MODE_IN = 3,
	CDL_PZL_MODE_SLCT = 4,
	CDL_PZL_MODE_FIRE = 5,
	CDL_PZL_SIDE_FIRE = 6,
	CDL_PZL_MODE_RESET = 7,
	CDL_PZL_MODE_GOOD = 8,
	CDL_PZL_MODE_GOOD2 = 9,
	CDL_PZL_MODE_GOOD3 = 10,
	CDL_PZL_MODE_GOUT = 11,
	CDL_PZL_MODE_OUT = 12,
	CDL_PZL_MODE_END = 13
};

typedef struct {
	short int cdl_flg[3][6];
	short int flame_alpha[6];
	short int flame_shape[6];
	short int stflame_alpha[6];
	short int stflame_shape[6];
	short int flame_time[6];
	short int stflame_time[6];
} EV_CDL_DAT;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	OMN_PZL_MODE_UNREADY = 0,
	OMN_PZL_MODE_READY = 1,
	OMN_PZL_MODE_SELOAD = 2,
	OMN_PZL_MODE_IN = 3,
	OMN_PZL_MODE_NONE = 4,
	OMN_PZL_MODE_EXISTIN = 5,
	OMN_PZL_MODE_EXIST = 6,
	OMN_PZL_MODE_EXISTGO = 7,
	OMN_PZL_MODE_EXISTGET = 8,
	OMN_PZL_MODE_EXISTOUT = 9,
	OMN_PZL_MODE_GETWAIT = 10,
	OMN_PZL_MODE_NISUSE = 11,
	OMN_PZL_MODE_NISUNUSE = 12,
	OMN_PZL_MODE_NISDISUSE = 13,
	OMN_PZL_MODE_BEFFADE = 14,
	OMN_PZL_MODE_CFADE = 15,
	OMN_PZL_MODE_AFTFADE = 16,
	OMN_PZL_MODE_UNHAVE = 17,
	OMN_PZL_MODE_HAVEUSEIN = 18,
	OMN_PZL_MODE_HAVEUSE = 19,
	OMN_PZL_MODE_HAVEUNUSE = 20,
	OMN_PZL_MODE_USEIN = 21,
	OMN_PZL_MODE_USE = 22,
	OMN_PZL_MODE_SIMENOK = 23,
	OMN_PZL_MODE_UNSIMEN = 24,
	OMN_PZL_MODE_OPEN = 25,
	OMN_PZL_MODE_OUT = 26,
	OMN_PZL_MODE_GETOUT = 27,
	OMN_PZL_MODE_GETOUT2 = 28,
	OMN_PZL_MODE_PUTOUT = 29,
	OMN_PZL_MODE_GETEND = 30,
	OMN_PZL_MODE_END = 31,
	OMN_PZL_MODE_MSGEND = 32,
	OMN_PZL_MODE_TIMECNT = 33
};

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	ZSI_PZL_MODE_DEADWAIT = 0,
	ZSI_PZL_MODE_READY = 1,
	ZSI_PZL_MODE_IN = 2,
	ZSI_PZL_MODE_SELOAD = 3,
	ZSI_PZL_MODE_MSG1 = 4,
	ZSI_PZL_MODE_MSG2 = 5,
	ZSI_PZL_MODE_SLCT = 6,
	ZSI_PZL_MODE_PUSH = 7,
	ZSI_PZL_MODE_GOOD = 8,
	ZSI_PZL_MODE_BAD = 9,
	ZSI_PZL_MODE_OUT = 10,
	ZSI_PZL_MODE_GOUT = 11,
	ZSI_PZL_MODE_END = 12
};

typedef struct {
	u_char answer;
	u_char ansflg;
} ZUSHI_WRK;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	IDO_PZL_MODE_MSGYES = 0,
	IDO_PZL_MODE_MSGNO = 1,
	IDO_PZL_MODE_READY = 2,
	IDO_PZL_MODE_IN = 3,
	IDO_PZL_MODE_OUT = 4,
	IDO_PZL_MODE_END = 5
};

typedef struct {
	u_char answer;
	u_char ansflg;
} IDO_WRK;

// warning: multiple differing types with the same name (#109,  not equal)
enum {
	ITM_PZL_MODE_READY = 0,
	ITM_PZL_MODE_IN = 1,
	ITM_PZL_MODE_MSG = 2,
	ITM_PZL_MODE_MSG2 = 3,
	ITM_PZL_MODE_MSG3 = 4,
	ITM_PZL_MODE_YES = 5,
	ITM_PZL_MODE_NO = 6,
	ITM_PZL_MODE_OMN = 7,
	ITM_PZL_MODE_OUT = 8,
	ITM_PZL_MODE_NOOUT = 9,
	ITM_PZL_MODE_END = 10,
	ITM_PZL_MODE_NOEND = 11
};

void (*SpecialEventInitTbl[0])(/* parameters unknown */) = {
};
void (*SpecialEventMainTbl[0])(/* parameters unknown */) = {
};
SPRT_SDAT spev00_sp_bak[0] = {
};
SPRT_SDAT spev00_sp_bff[0] = {
};
SPRT_SDAT spev00_sp_bft[0] = {
};
SPRT_SDAT spev00_sp_stn[0] = {
};
short int spev00_stn_pos[0][2] = {
};
SPRT_SDAT spev00_sp_lin[0] = {
};
SPRT_SROT spev00_lin_rot[0] = {
};
SPRT_SSCL spev00_lin_scl[0] = {
};
SPRT_SDAT spev00_sp_num[0] = {
};
SPRT_SDAT spev00_sp_sta[0] = {
};
short int spev00_sta_pos[0][2] = {
};
SPRT_SDAT spev00_sp_lia[0] = {
};
SPRT_SROT spev00_lia_rot[0] = {
};
SPRT_SSCL spev00_lia_scl[0] = {
};
SPRT_SDAT spev00_sp_hln[0] = {
};
SPRT_SDAT spev00_sp_csr[0] = {
};
SPRT_SSCL spev00_csr_scl[0] = {
};
SPRT_SDAT spev00_sp_cpf[0] = {
};
SPRT_SDAT spev00_sp_cpf2[0] = {
};
short int spev00_cbt_pos[0][3] = {
};
SPRT_SDAT spev00_sp_cap[0] = {
};
SPRT_SDAT spev01_sp_bak[0] = {
};
SPRT_SDAT spev01_sp_gl3[0] = {
};
SPRT_SDAT spev01_sp_gl5[0] = {
};
SPRT_SDAT spev01_sp_btn[0] = {
};
SPRT_SDAT spev01_sp_btp[0] = {
};
SPRT_SDAT spev01_sp_btf[0] = {
};
SPRT_SDAT spev01_sp_num[0] = {
};
short int spev01_nm3_pos[0][2] = {
};
short int spev01_nm4_pos[0][2] = {
};
short int spev01_nm5_pos[0][2] = {
};
SPRT_SDAT spev01_sp_cpf[0] = {
};
short int spev01_cbt_pos[0][2] = {
};
SPRT_SDAT spev01_sp_cap[0] = {
};
SPRT_SDAT spev02_sp_bak[0] = {
};
SPRT_SDAT spev02_sp_of1[0] = {
};
SPRT_SDAT spev02_sp_of3[0] = {
};
SPRT_SDAT spev03_sp_bak[0] = {
};
SPRT_SDAT spev03_sp_dol[0] = {
};
SPRT_SSCL spev03_dol_scl[0] = {
};
SPRT_SROT spev03_dol_left = {
	/* .cx = */ 32767,
	/* .cy = */ 2,
	/* .rot = */ 0.f
};
SPRT_SDAT spev03_sp_dla[0] = {
};
SPRT_SSCL spev03_dla_scl[0] = {
};
SPRT_SDAT spev03_sp_cap[0] = {
};
SPRT_SDAT spev04_sp_bk0[0] = {
};
SPRT_SDAT spev04_sp_bk1[0] = {
};
SPRT_SDAT spev04_sp_bk2[0] = {
};
SPRT_SDAT spev04_sp_bk3[0] = {
};
SPRT_SDAT spev04_sp_bd1[0] = {
};
SPRT_SDAT spev04_sp_bzf[0] = {
};
SPRT_SDAT spev04_sp_bld[0] = {
};
SPRT_SDAT spev04_sp_cap[0] = {
};
short int spev04_cbt_pos[0][2] = {
};
SPRT_SDAT spev04_sp_slf[0] = {
};
SPRT_SDAT spev04_sp_sel[0] = {
};
SPRT_SSCL spev04_bd1_scl[0] = {
};
SPRT_SSCL spev04_bz2_scl[0] = {
};
SPRT_SSCL spev04_sel_scl[0] = {
};
SPRT_SDAT spev04_sp_bd2[0] = {
};
SPRT_SDAT spev04_sp_cpt[0] = {
};
SPRT_SDAT spev20_sp_bak[0] = {
};
SPRT_SDAT spev20_sp_cdl[0] = {
};
SPRT_SDAT spev20_sp_cla[0] = {
};
SPRT_SDAT spev20_sp_cpf[0] = {
};
SPRT_SDAT spev20_sp_cfa[0] = {
};
SPRT_SDAT spev20_sp_cdl0[0] = {
};
SPRT_SDAT spev20_sp_cdl1[0] = {
};
SPRT_SDAT spev20_sp_cdl2[0] = {
};
SPRT_SDAT spev20_sp_cdl3[0] = {
};
SPRT_SDAT spev20_sp_cdl5[0] = {
};
SPRT_SDAT spev20_sp_cdl4[0] = {
};
SPRT_SDAT pzl_men_bg[0] = {
};
SPRT_SDAT spev21_sp_menz[0] = {
};
SPRT_SDAT spev21_sp_bak[0] = {
};
SPRT_SDAT spev21_sp_zft[0] = {
};
SPRT_SDAT spev21_sp_zfl[0] = {
};
SPRT_SDAT spev21_sp_zbt[0] = {
};
SPRT_SDAT spev21_sp_cpf[0] = {
};
SPRT_SDAT spev21_sp_cap[0] = {
};
STR_DAT spev_str = {
	/* .str = */ NULL,
	/* .pos_x = */ 0,
	/* .pos_y = */ 0,
	/* .type = */ 0,
	/* .r = */ 255,
	/* .g = */ 255,
	/* .b = */ 255,
	/* .alpha = */ 128,
	/* .pri = */ 2
};
SQAR_DAT spev_sq0 = {
	/* .w = */ 640,
	/* .h = */ 448,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 20480,
	/* .r = */ 0,
	/* .g = */ 0,
	/* .b = */ 0,
	/* .alpha = */ 40
};
static int pzl_load_id = 0;
static int button_time = 0;
static int spev_alp_cnt = 0;
STAR_PZL_DAT star_pzl_dat[0] = {
};
DIAL_KEY_DAT dkey_dat[0] = {
};
u_char pghost_no_dat[0] = {
};
EV_DOLL_DAT evdl_dat[0] = {
};
EV_BTZ_DAT evbtz_dat[5] = {
	/* [0] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	},
	/* [1] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	},
	/* [2] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	},
	/* [3] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	},
	/* [4] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	}
};
EV_BTZ_DAT evbtz_ans[5] = {
	/* [0] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 2
	},
	/* [1] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 0
	},
	/* [2] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 5
	},
	/* [3] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 6
	},
	/* [4] = */ {
		/* .use_flg = */ 0,
		/* .set_place = */ 8
	}
};
EV_BLD_DAT evbld_dat = {
	/* .t_counter = */ 0,
	/* .bld_apr = */ {
		/* [0] = */ 60,
		/* [1] = */ 60,
		/* [2] = */ 60,
		/* [3] = */ 60,
		/* [4] = */ 60,
		/* [5] = */ 60,
		/* [6] = */ 60,
		/* [7] = */ 360,
		/* [8] = */ 360,
		/* [9] = */ 360
	},
	/* .bld_end = */ {
		/* [0] = */ 360,
		/* [1] = */ 360,
		/* [2] = */ 360,
		/* [3] = */ 360,
		/* [4] = */ 360,
		/* [5] = */ 360,
		/* [6] = */ 360,
		/* [7] = */ 760,
		/* [8] = */ 760,
		/* [9] = */ 760
	},
	/* .pad = */ 0
};
SPRT_SSCL spev04_sel_scl2[0] = {
};
EV_CDL_DAT evcdl_dat = {
	/* .cdl_flg = */ {
		/* [0] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 1,
			/* [1] = */ 0,
			/* [2] = */ 1,
			/* [3] = */ 0,
			/* [4] = */ 1,
			/* [5] = */ 0
		},
		/* [2] = */ {
			/* [0] = */ 0,
			/* [1] = */ 1,
			/* [2] = */ 0,
			/* [3] = */ 1,
			/* [4] = */ 0,
			/* [5] = */ 1
		}
	},
	/* .flame_alpha = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .flame_shape = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .stflame_alpha = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .stflame_shape = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .flame_time = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .stflame_time = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	}
};
static short int spev20_cbt_pos[0][2] = {
};
static short int spev20_sp_flm[0][6] = {
};
static short int spev20_sp_sflm[0][6] = {
};
static short int id_table[0][2] = {
};
static short int dmodel_table[0][2] = {
};
static short int doorid_table[0][2] = {
};
short int yoro_door = 26;
short int ika_door = 17;
short int kana_door = 34;
short int tano_door = 19;
static u_char open_close = 0;
static short int go_flg = 0;
static short int go_flg_s = 0;
static short int choudo_no = 0;
static char alpha_keep = 0;
static char first_meet = 0;
static u_char omen_no = 0;
static u_char stts_no = 0;
static u_char omen_msgno = 0;
static u_char omen_itemno = 0;
ZUSHI_WRK zushi_dat[4] = {
	/* [0] = */ {
		/* .answer = */ 2,
		/* .ansflg = */ 0
	},
	/* [1] = */ {
		/* .answer = */ 1,
		/* .ansflg = */ 0
	},
	/* [2] = */ {
		/* .answer = */ 0,
		/* .ansflg = */ 0
	},
	/* [3] = */ {
		/* .answer = */ 3,
		/* .ansflg = */ 0
	}
};
static short int camera_table[0] = {
};
SPECIAL_EVENT_WRK spev_wrk = {
	/* .no = */ 0,
	/* .ret = */ 0,
	/* .mode = */ 0,
	/* .time = */ 0,
	/* .count = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	}
};
STAR_PZL_WRK star_pzl_wrk = {
	/* .pzl_no = */ 0,
	/* .mode = */ 0,
	/* .menu_mode = */ 0,
	/* .menu_csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .time = */ 0,
	/* .count = */ 0,
	/* .empty = */ 0,
	/* .slct_no = */ 0,
	/* .bak_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0
	},
	/* .stone = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	},
	/* .line = */ {
		/* [0] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0
		},
		/* [2] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0
		},
		/* [3] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0
		},
		/* [4] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0
		}
	}
};
DIAL_KEY_WRK dkey_wrk = {
	/* .door_no = */ 0,
	/* .mode = */ 0,
	/* .time = */ 0,
	/* .count = */ 0,
	/* .slct_no = */ 0,
	/* .push = */ 0,
	/* .btn = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0
	},
	/* .push_no = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	}
};
static char order_keep[5];
static char order_no;
static u_char butsuzo_alpha[3];
static u_char zushi_alpha[3];

void SpecialEventInit(u_char spev_no) {
  memset(&spev_wrk,0,8);
  spev_wrk.no = (uchar)((int)(char)spev_no & 0xffU);
  (**(code **)(&SpecialEventInitTbl + ((int)(char)spev_no & 0xffU) * 4))();
  return;
}

void SpecialEventMain() {
  (*(code *)(&SpecialEventMainTbl)[spev_wrk.no])();
  if (spev_wrk.ret != '\0') {
    ingame_wrk.mode = 6;
    ev_wrk.evt_no = 0xff;
    ev_wrk.mode = 0;
  }
  return;
}

int GetSpecialEventMessageAddr(short int msg_no) {
  int iVar1;
  
  iVar1 = Get4Byte((uchar *)0x7f0010);
  iVar1 = Get4Byte((uchar *)(iVar1 + (short)msg_no * 4 + 0x7f0000));
  return iVar1 + 0x7f0000;
}

void SimpleDispSprt(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
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

void SimpleDispAlphaSprt(SPRT_SDAT *ssd, u_int addr, int sp_no, u_char alp_rate, u_char alp_type) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  int iVar1;
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
  if (alp_type == '\0') {
    iVar1 = 0x44;
  }
  else {
    iVar1 = 0x48;
  }
  ds.alphar = (ulong)iVar1;
  sd.alpha = (uchar)(((uint)ssd->alp * ((int)(char)alp_rate & 0xffU)) / 100);
  CopySprDToSpr(&ds,&sd);
  DispSprD(&ds);
  return;
}

void SimpleDispSprtRGB(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate, u_char rr, u_char gg, int bb) {
	u_char bb;
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
  ds.b = (byte)bb;
  ds.r = rr;
  ds.g = gg;
  DispSprD(&ds);
  return;
}

void SimpleDispSprtLNR(SPRT_SDAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate, int lnr) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  int iVar1;
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
  iVar1 = 0x161;
  if (lnr == 0) {
    iVar1 = 0x141;
  }
  ds.tex1 = (ulong)iVar1;
  DispSprD(&ds);
  return;
}

void SimpleDispSprtDatCopy(SPRT_SDAT *org, SPRT_SDAT *cpy) {
  cpy->u = org->u;
  cpy->v = org->v;
  cpy->w = org->w;
  cpy->h = org->h;
  cpy->x = org->x;
  cpy->y = org->y;
  cpy->pri = org->pri;
  cpy->alp = org->alp;
  return;
}

void TestPk2Data(long int sendtexaddr) {
	static int ttest_count = 0;
	SPRT_SDAT ssd;
	
  SPRT_SDAT ssd;
  
  if (*key_now[8] == 1) {
    ttest_count_141 = ttest_count_141 + 1;
  }
  if (*key_now[9] == 1) {
    ttest_count_141 = ttest_count_141 + -1;
  }
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev20_sp_cdl1,&ssd);
  ssd.v = 1;
  ssd.u = 1;
  ssd.w = 0x2a8;
  ssd.h = 0x200;
  ssd.x = 0;
  ssd.y = 0;
  ssd.pri = '\0';
  SimpleDispSprt(&ssd,(uint)sendtexaddr,ttest_count_141,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  return;
}

int ButtonMarkNext(int x_off, int y_off, int se_flg) {
  uchar alp;
  float fVar2;
  uint uVar1;
  
  fVar2 = SgCosf(((float)spev_alp_cnt * 6.0 * DAT_00355d04) / 180.0);
  uVar1 = (int)((fVar2 + 1.0) * 64.0) & 0xff;
  alp = (uchar)uVar1;
  if (uVar1 == 0) {
    alp = '\x01';
  }
  DrawButtonTex(0x1000,3,(float)(x_off + 0x226),(float)(y_off + 0x182),alp);
  spev_alp_cnt = spev_alp_cnt + 1;
  if (0xfffffff0 < (uint)spev_alp_cnt) {
    spev_alp_cnt = 0;
  }
  if (((*key_now[5] == 1) && (button_time == 0)) && (button_time = 0x14, se_flg == 1)) {
    SeStartFix(1,0,0x1000,0x1000,0);
  }
  return button_time;
}

int ButtonMarkWait() {
  if (0 < button_time) {
    button_time = button_time + -1;
  }
  return button_time;
}

void ButtonMarkTimeClear() {
  if (0 < button_time) {
    button_time = 0;
  }
  return;
}

int CsrInclease(u_char *csr_idx, u_char alpha_max, u_char inclease) {
	int ret_num;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = ((int)(char)alpha_max & 0xffU) - ((int)(char)inclease & 0xffU);
  if ((int)(uint)*csr_idx < iVar2) {
    uVar1 = ((int)(char)inclease & 0xffU) + (uint)*csr_idx;
    *csr_idx = (uchar)uVar1;
    if ((int)(uVar1 & 0xff) < iVar2) {
      return 0;
    }
    *csr_idx = (uchar)((int)(char)alpha_max & 0xffU);
  }
  return 1;
}

int CsrDeclease(u_char *csr_idx, u_char alpha_min, int inclease) {
	int ret_num;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = ((int)(char)alpha_min & 0xffU) + inclease;
  if (iVar2 < (int)(uint)*csr_idx) {
    uVar1 = (uint)*csr_idx - inclease;
    *csr_idx = (uchar)uVar1;
    if (iVar2 < (int)(uVar1 & 0xff)) {
      return 0;
    }
    *csr_idx = (uchar)((int)(char)alpha_min & 0xffU);
  }
  return 1;
}

int CsrBlink(u_char *csr_idx, u_char alpha_max, u_char alpha_min, u_char inclease, u_char *blink) {
	int ret_num;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (int)(char)inclease & 0xff;
  iVar4 = 0;
  if (*blink == '\0') {
    iVar2 = ((int)(char)alpha_max & 0xffU) - uVar1;
    uVar1 = uVar1 + *csr_idx;
    if ((int)(uint)*csr_idx < iVar2) {
      *csr_idx = (uchar)uVar1;
      if (iVar2 <= (int)(uVar1 & 0xff)) {
        *csr_idx = (uchar)((int)(char)alpha_max & 0xffU);
      }
    }
    else {
      *blink = '\x01';
    }
  }
  else {
    uVar3 = ((int)(char)alpha_min & 0xffU) + uVar1;
    uVar1 = *csr_idx - uVar1;
    if (uVar3 < *csr_idx) {
      *csr_idx = (uchar)uVar1;
      if (uVar3 < (uVar1 & 0xff)) {
        return 0;
      }
      *csr_idx = (uchar)((int)(char)alpha_min & 0xffU);
    }
    else {
      *blink = '\0';
    }
    iVar4 = 1;
  }
  return iVar4;
}

void CsrClear(u_char *csr_idx) {
  *csr_idx = '\0';
  return;
}

void CsrClearAll() {
  spev_wrk.csr[0] = '\0';
  spev_wrk.csr[1] = '\0';
  spev_wrk.csr[2] = '\0';
  return;
}

void SpevStrInit() {
  spev_str.alpha = 0x80;
  spev_str.r = 0x80;
  spev_str.g = 0x80;
  spev_str.b = 0x80;
  return;
}

void SpevWrkInit() {
  spev_wrk.csr[0] = '\0';
  spev_wrk.csr[1] = '\0';
  spev_wrk.csr[2] = '\0';
  spev_wrk.count = '\0';
  spev_wrk.time = '\0';
  return;
}

void SpevSelectYesNoCsr(float pos_x, float pos_y, int pri, float alp) {
  YesNoCrslOKR((pri & 0xffU) << 0xc,pos_x,pos_y,0x808080,128.0,2.0);
  return;
}

int DeadlySeStopWait() {
	static u_char dead_time = 0;
	
  if (_DAT_00252e80 == -1) {
    if (dead_time_178 != 0) {
      dead_time_178 = dead_time_178 - 1;
    }
  }
  else {
    dead_time_178 = 0x3c;
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
  }
  return (int)dead_time_178;
}

void DummyProg() {
  spev_wrk.ret = '\x01';
  return;
}

void StarPuzzleInit(int pzl_no) {
  int file_no;
  
  if (_DAT_00252e80 != -1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
    star_pzl_wrk.mode = '\0';
    goto LAB_001a03f0;
  }
  if (pzl_no == 4) {
    file_no = 0x31;
LAB_001a03b4:
    LoadReq(file_no,0x1e90000);
  }
  else {
    if (pzl_no == 9) {
      file_no = 0x30;
      goto LAB_001a03b4;
    }
    if (pzl_no == 0xc) {
      file_no = 0x2b;
      goto LAB_001a03b4;
    }
    if (pzl_no == 0x12) {
      file_no = 0x2c;
      goto LAB_001a03b4;
    }
    if (pzl_no == 0x14) {
      file_no = 0x2e;
      goto LAB_001a03b4;
    }
    if (pzl_no == 0x24) {
      file_no = 0x2d;
      goto LAB_001a03b4;
    }
    if (pzl_no == 0x29) {
      LoadReq(0x2f,0x1e90000);
    }
  }
  star_pzl_wrk.time = '(';
  star_pzl_wrk.mode = '\x01';
LAB_001a03f0:
  if (pzl_no == 0xc) {
    star_pzl_wrk.pzl_no = '\0';
  }
  else if (pzl_no == 0x12) {
    star_pzl_wrk.pzl_no = '\x01';
  }
  else if (pzl_no == 0x14) {
    star_pzl_wrk.pzl_no = '\x02';
  }
  else if (pzl_no == 0x24) {
    star_pzl_wrk.pzl_no = '\x03';
  }
  else if (pzl_no == 0x29) {
    star_pzl_wrk.pzl_no = '\x04';
  }
  else if ((pzl_no == 9) || (star_pzl_wrk.pzl_no = '\x05', pzl_no == 4)) {
    star_pzl_wrk.pzl_no = '\x06';
  }
  StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void StarPuzzleDataSet(int pzl_no) {
	int i;
	int j;
	u_char line_dat[10][2];
	u_char stone_odr[5];
	
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  uchar (*pauVar8) [2];
  int iVar9;
  uchar line_dat [10] [2];
  uchar stone_odr [5];
  
  pauVar8 = line_dat;
  star_pzl_wrk.count = (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11];
  puVar5 = line_dat[3] + 1;
  uVar4 = (uint)puVar5 & 7;
  *(ulong *)(puVar5 + -uVar4) =
       *(ulong *)(puVar5 + -uVar4) & -1L << (uVar4 + 1) * 8 | DAT_0034ed10 >> (7 - uVar4) * 8;
  line_dat._0_8_ = DAT_0034ed10;
  puVar5 = line_dat[7] + 1;
  uVar4 = (uint)puVar5 & 7;
  *(ulong *)(puVar5 + -uVar4) =
       *(ulong *)(puVar5 + -uVar4) & -1L << (uVar4 + 1) * 8 | DAT_0034ed18 >> (7 - uVar4) * 8;
  line_dat._8_8_ = DAT_0034ed18;
  puVar5 = line_dat[9] + 1;
  uVar4 = (uint)puVar5 & 3;
  *(uint *)(puVar5 + -uVar4) =
       *(uint *)(puVar5 + -uVar4) & -1 << (uVar4 + 1) * 8 | DAT_0034ed20 >> (3 - uVar4) * 8;
  line_dat._16_4_ = DAT_0034ed20;
  puVar5 = stone_odr + 3;
  uVar4 = (uint)puVar5 & 3;
  *(uint *)(puVar5 + -uVar4) =
       *(uint *)(puVar5 + -uVar4) & -1 << (uVar4 + 1) * 8 | DAT_00357038 >> (3 - uVar4) * 8;
  stone_odr._0_4_ = DAT_00357038;
  stone_odr[4] = DAT_0035703c;
  iVar9 = 0;
  do {
    iVar6 = iVar9 + (uint)star_pzl_wrk.pzl_no * 0x11;
    if ((&DAT_0032818a)[iVar6] == (&DAT_00328189)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      star_pzl_wrk.empty = (uchar)iVar9;
    }
    puVar5 = star_pzl_wrk.stone + iVar9;
    iVar9 = iVar9 + 1;
    *puVar5 = (&DAT_0032818a)[iVar6];
  } while (iVar9 < 5);
  memset(star_pzl_wrk.line,0xff,0x19);
  iVar9 = 0;
  do {
    if ((&DAT_0032818f)[iVar9 + (uint)star_pzl_wrk.pzl_no * 0x11] != '\0') {
      bVar2 = *(byte *)pauVar8;
      bVar3 = *(byte *)((int)pauVar8 + 1);
      star_pzl_wrk.line[bVar2][bVar3] = (uchar)iVar9;
      star_pzl_wrk.line[bVar3][bVar2] = (uchar)iVar9;
    }
    iVar9 = iVar9 + 1;
    pauVar8 = (uchar (*) [2])((int)pauVar8 + 2);
  } while (iVar9 < 10);
  bVar1 = star_pzl_wrk.empty == '\0';
  iVar9 = 0;
  puVar5 = stone_odr;
  do {
    if (bVar1 == (bool)*puVar5) {
      iVar7 = 1;
      iVar6 = iVar9 + 1;
      do {
        star_pzl_wrk.slct_no = stone_odr[iVar6 % 5];
        iVar7 = iVar7 + 1;
        if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
          return;
        }
        iVar6 = iVar9 + iVar7;
      } while (iVar7 < 6);
      star_pzl_wrk.slct_no = bVar1;
      return;
    }
    iVar9 = iVar9 + 1;
    puVar5 = stone_odr + iVar9;
  } while (iVar9 < 5);
  star_pzl_wrk.slct_no = bVar1;
  return;
}

int StarPuzzleMain(int pzl_no) {
	int i;
	int j;
	int tmp0;
	u_char stone_odr[5];
	
  uchar *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uchar stone_odr [5];
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = stone_odr;
  puVar9 = stone_odr;
  puVar1 = stone_odr + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  stone_odr._0_4_ = DAT_00357038;
  stone_odr[4] = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      if (pzl_no == 4) {
        iVar10 = 0x31;
LAB_001a07e8:
        LoadReq(iVar10,0x1e90000);
      }
      else {
        if (pzl_no == 9) {
          iVar10 = 0x30;
          goto LAB_001a07e8;
        }
        if (pzl_no == 0xc) {
          iVar10 = 0x2b;
          goto LAB_001a07e8;
        }
        if (pzl_no == 0x12) {
          iVar10 = 0x2c;
          goto LAB_001a07e8;
        }
        if (pzl_no == 0x14) {
          iVar10 = 0x2e;
          goto LAB_001a07e8;
        }
        if (pzl_no == 0x24) {
          iVar10 = 0x2d;
          goto LAB_001a07e8;
        }
        if (pzl_no == 0x29) {
          LoadReq(0x2f,0x1e90000);
        }
      }
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        iGpffff9fb0 = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(iGpffff9fb0);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        iGpffff9fb0 = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = stone_odr + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = stone_odr + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (iGpffff9fb0 == -1) {
      iGpffff9fb0 = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(iGpffff9fb0);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        uGpffffa031 = 1;
        iGpffff9fb0 = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return 0;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = stone_odr[iVar12 % 5];
    if (star_pzl_wrk.line[stone_odr[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = stone_odr[iVar10 % 5];
    if (star_pzl_wrk.line[stone_odr[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

int StarPuzzleClearJudge() {
	int i;
	
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = star_pzl_wrk.stone;
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    if (*puVar1 != uVar2) {
      return 0;
    }
    puVar1 = star_pzl_wrk.stone + uVar2 + 1;
    uVar2 = uVar3;
  } while ((int)uVar3 < 5);
  return 1;
}

void StarPuzzleDisp() {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	u_char stone_odr[5];
	
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  SPRT_SDAT *pSVar4;
  int iVar5;
  uint uVar6;
  SPRT_SSCL *pSVar7;
  uchar alp_rate;
  SPRT_SROT *pSVar8;
  ushort *puVar9;
  uchar *puVar10;
  ushort *puVar11;
  ulong in_hi;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  uchar stone_odr [5];
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034ed88 >> (7 - uVar6) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034ed90 >> (7 - uVar6) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar6 = (uint)&menu_sq0.alpha & 7;
  puVar10 = &menu_sq0.alpha + -uVar6;
  *(ulong *)puVar10 = *(ulong *)puVar10 & -1L << (uVar6 + 1) * 8 | DAT_0034ed98 >> (7 - uVar6) * 8;
  menu_sq0._16_8_ = DAT_0034ed98;
  puVar10 = stone_odr + 3;
  uVar6 = (uint)puVar10 & 3;
  *(uint *)(puVar10 + -uVar6) =
       *(uint *)(puVar10 + -uVar6) & -1 << (uVar6 + 1) * 8 | DAT_00357038 >> (3 - uVar6) * 8;
  stone_odr._0_4_ = DAT_00357038;
  stone_odr[4] = DAT_0035703c;
  if (star_pzl_wrk.mode == '\x03') {
    iVar5 = (0x28 - (uint)star_pzl_wrk.time) * 100;
    in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar5 >> 0x1f);
    alp_rate = (uchar)(iVar5 / 0x28);
  }
  else {
    alp_rate = 'd';
    if (star_pzl_wrk.mode == '\x0e') {
      in_hi = (ulong)(int)(((uint)star_pzl_wrk.time * 100) % 0x28);
      alp_rate = (uchar)(((uint)star_pzl_wrk.time * 100) / 0x28);
    }
  }
  iVar5 = 0;
  pSVar4 = (SPRT_SDAT *)&spev00_sp_bak;
  do {
    SimpleDispSprt(pSVar4,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    iVar5 = iVar5 + 1;
    pSVar4 = pSVar4 + 1;
  } while (iVar5 < 0xb);
  if (star_pzl_wrk.mode == '\v') {
    alp_rate = star_pzl_wrk.time * '\x05';
  }
  else if (star_pzl_wrk.mode == '\x0e') {
    alp_rate = '\0';
  }
  pSVar7 = (SPRT_SSCL *)&spev00_lin_scl;
  uVar6 = 0;
  pSVar8 = (SPRT_SROT *)&spev00_lin_rot;
  do {
    if ((((star_pzl_wrk.mode != '\x10') && (star_pzl_wrk.mode != '\x13')) &&
        (star_pzl_wrk.mode != '\x12')) &&
       (((star_pzl_wrk.mode != '\x0e' && (star_pzl_wrk.mode != '\x14')) &&
        (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] == uVar6)))) {
      lVar3 = (in_hi | 0x3269c8) + (long)(int)(uVar6 * 0xe);
      in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
      SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
      if (star_pzl_wrk.mode == '\x05') {
        iVar5 = (uint)ssd.alp * (0x1e - (uint)star_pzl_wrk.time);
        in_hi = (ulong)(iVar5 % 0x1e);
        ssd.alp = (uchar)(iVar5 / 0x1e);
      }
      SimpleDispSprt(&ssd,0x1e90000,0xe,pSVar8,pSVar7,alp_rate);
    }
    uVar6 = uVar6 + 1;
    pSVar7 = pSVar7 + 1;
    pSVar8 = pSVar8 + 1;
  } while ((int)uVar6 < 10);
  pSVar7 = (SPRT_SSCL *)&spev00_lia_scl;
  pSVar8 = (SPRT_SROT *)&spev00_lia_rot;
  iVar5 = 0;
  do {
    if (((star_pzl_wrk.mode != '\x14') && (star_pzl_wrk.mode != '\x10')) &&
       (star_pzl_wrk.mode != '\x0e')) {
      in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar5 * 0xe >> 0x1f);
      if ((&DAT_0032818f)[iVar5 + (uint)star_pzl_wrk.pzl_no * 0x11] != '\0') {
        SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_lia + iVar5 * 0xe),0x1e90000,0xe,pSVar8,pSVar7,
                       alp_rate);
      }
    }
    iVar5 = iVar5 + 1;
    pSVar7 = pSVar7 + 1;
    pSVar8 = pSVar8 + 1;
  } while (iVar5 < 10);
  uVar6 = 0;
  puVar9 = (ushort *)&spev00_stn_pos;
  puVar11 = (ushort *)&spev00_sta_pos;
  puVar10 = star_pzl_wrk.stone;
  do {
    if (star_pzl_wrk.mode - 0x12 < 3) {
      lVar3 = (in_hi | 0x326968) + (long)(int)(uVar6 * 0xe);
      in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
      SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
      ssd.x = *puVar9;
      ssd.y = puVar9[1];
      SimpleDispSprt(&ssd,0x1e90000,0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
      if (star_pzl_wrk.mode == '\x13') {
        lVar3 = (in_hi | 0x326b68) + (long)(int)((uint)star_pzl_wrk.empty * 0xe);
        in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
        SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
        if (spev_wrk.csr[2] == '\0') {
          iVar5 = CsrBlink(spev_wrk.csr + 1,0x80,'\0','\x02',spev_wrk.csr);
          spev_wrk.csr[2] = (uchar)iVar5;
        }
        ssd.x = *(ushort *)(&spev00_sta_pos + (uint)star_pzl_wrk.empty * 4);
        ssd.y = (&DAT_00326bb2)[(uint)star_pzl_wrk.empty * 2];
        iVar5 = 0xe;
        ssd.alp = spev_wrk.csr[1];
        goto LAB_001a198c;
      }
    }
    else {
      if (uVar6 != star_pzl_wrk.slct_no) {
        if (uVar6 != star_pzl_wrk.empty) {
          lVar3 = (in_hi | 0x326968) + (long)(int)((uint)*puVar10 * 0xe);
          in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
          SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
          ssd.x = *puVar9;
          ssd.y = puVar9[1];
          SimpleDispSprt(&ssd,0x1e90000,0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
        }
        goto LAB_001a19f4;
      }
      if ((star_pzl_wrk.mode != '\x03') && (star_pzl_wrk.mode != '\x0e')) {
        lVar3 = (in_hi | 0x326b68) + (long)(int)((uint)*puVar10 * 0xe);
        in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
        SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
        if (star_pzl_wrk.mode == '\x04') {
          iVar5 = (uint)ssd.alp * (0x28 - (uint)star_pzl_wrk.time);
          ssd.alp = (uchar)(iVar5 / 0x28);
          iVar5 = iVar5 % 0x28;
LAB_001a17b8:
          in_hi = (ulong)iVar5;
        }
        else if (star_pzl_wrk.mode == '\x05') {
          iVar5 = (uint)ssd.alp * (0x1e - (uint)star_pzl_wrk.time);
          ssd.alp = (uchar)(iVar5 / 0x1e);
          iVar5 = iVar5 % 0x1e;
          goto LAB_001a17b8;
        }
        if (star_pzl_wrk.mode == '\n') {
          iVar5 = ((int)*(short *)(&spev00_sta_pos + (uint)star_pzl_wrk.empty * 4) -
                  (int)*(short *)(&spev00_sta_pos + (uint)star_pzl_wrk.slct_no * 4)) *
                  (uint)star_pzl_wrk.time;
          in_hi = (ulong)(iVar5 % 0x1e);
          ssd.x = *(short *)(&spev00_sta_pos + (uint)star_pzl_wrk.slct_no * 4) +
                  (short)(iVar5 / 0x1e);
          ssd.y = (&DAT_00326bb2)[(uint)star_pzl_wrk.slct_no * 2] +
                  (short)((int)(((int)(short)(&DAT_00326bb2)[(uint)star_pzl_wrk.empty * 2] -
                                (int)(short)(&DAT_00326bb2)[(uint)star_pzl_wrk.slct_no * 2]) *
                               (uint)star_pzl_wrk.time) / 0x1e);
        }
        else {
          ssd.x = *puVar11;
          ssd.y = puVar11[1];
        }
        SimpleDispSprt(&ssd,0x1e90000,0xe,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
      }
      lVar3 = (in_hi | 0x326968) + (long)(int)((uint)*puVar10 * 0xe);
      in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
      SimpleDispSprtDatCopy((SPRT_SDAT *)lVar3,&ssd);
      if (star_pzl_wrk.mode == '\n') {
        iVar5 = ((int)*(short *)(&spev00_stn_pos + (uint)star_pzl_wrk.empty * 4) -
                (int)*(short *)(&spev00_stn_pos + (uint)star_pzl_wrk.slct_no * 4)) *
                (uint)star_pzl_wrk.time;
        in_hi = (ulong)(iVar5 % 0x1e);
        ssd.x = *(short *)(&spev00_stn_pos + (uint)star_pzl_wrk.slct_no * 4) + (short)(iVar5 / 0x1e)
        ;
        ssd.y = (&DAT_003269b2)[(uint)star_pzl_wrk.slct_no * 2] +
                (short)((int)(((int)(short)(&DAT_003269b2)[(uint)star_pzl_wrk.empty * 2] -
                              (int)(short)(&DAT_003269b2)[(uint)star_pzl_wrk.slct_no * 2]) *
                             (uint)star_pzl_wrk.time) / 0x1e);
      }
      else {
        ssd.x = *puVar9;
        ssd.y = puVar9[1];
      }
      iVar5 = 0xd;
LAB_001a198c:
      SimpleDispSprt(&ssd,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    }
LAB_001a19f4:
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 2;
    puVar11 = puVar11 + 2;
    puVar10 = puVar10 + 1;
  } while ((int)uVar6 < 5);
  if ((star_pzl_wrk.mode != '\x10') &&
     (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff)) {
    SimpleDispSprt((SPRT_SDAT *)((uint)star_pzl_wrk.empty * 0xe + 0x326c54),0x1e90000,0xe,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    SimpleDispSprt((SPRT_SDAT *)((uint)star_pzl_wrk.slct_no * 0xe + 0x326c54),0x1e90000,0xe,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_hln + (uint)star_pzl_wrk.empty * 0xe),0x1e90000,0x10,
                 (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_hln + (uint)star_pzl_wrk.slct_no * 0xe),0x1e90000,0x10,
                 (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  if (star_pzl_wrk.mode == '\n') {
    SimpleDispSprtDatCopy((SPRT_SDAT *)((uint)star_pzl_wrk.count * 0xe + 0x326aea),&ssd);
    ssd.alp = (uchar)((int)((uint)ssd.alp * (0x1e - (uint)star_pzl_wrk.time)) / 0x1e);
    SimpleDispSprt(&ssd,0x1e90000,0xf,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev00_sp_num + (uint)star_pzl_wrk.count * 0xe),&ssd);
    ssd.alp = (uchar)(((uint)ssd.alp * (uint)star_pzl_wrk.time) / 0x1e);
    SimpleDispSprt(&ssd,0x1e90000,0xf,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  else {
    SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_num + (uint)star_pzl_wrk.count * 0xe),0x1e90000,0xf,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  if (star_pzl_wrk.mode == '\f') {
    alp_rate = (uchar)((int)((0xf - (uint)star_pzl_wrk.time) * 100) / 0xf);
  }
  if (star_pzl_wrk.mode != '\x03') {
    if ((((star_pzl_wrk.mode != '\x12') && (star_pzl_wrk.mode != '\x13')) &&
        (star_pzl_wrk.mode != '\x14')) && (star_pzl_wrk.mode != '\x0e')) {
      pSVar4 = (SPRT_SDAT *)&spev00_sp_bff;
      uVar6 = 0;
      do {
        if (star_pzl_wrk.stone[star_pzl_wrk.slct_no] == uVar6) {
          if (star_pzl_wrk.mode == '\x04') {
            SimpleDispSprtDatCopy(pSVar4,&ssd);
            ssd.alp = (uchar)((int)((uint)ssd.alp * (0x28 - (uint)star_pzl_wrk.time)) / 0x28);
            SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
          }
          else {
            SimpleDispSprt(pSVar4,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
          }
        }
        uVar6 = uVar6 + 1;
        pSVar4 = pSVar4 + 1;
      } while ((int)uVar6 < 5);
    }
    if ((star_pzl_wrk.mode != '\x03') && (star_pzl_wrk.mode != '\x0e')) {
      pSVar4 = (SPRT_SDAT *)&spev00_sp_bft;
      iVar5 = 4;
      do {
        if (star_pzl_wrk.mode == '\x04') {
          SimpleDispSprtDatCopy(pSVar4,&ssd);
          ssd.alp = (uchar)((int)((uint)ssd.alp * (0x28 - (uint)star_pzl_wrk.time)) / 0x28);
          SimpleDispSprt(&ssd,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
        }
        else {
          SimpleDispSprt(pSVar4,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
        }
        pSVar4 = pSVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  if (star_pzl_wrk.mode == '\v') {
    CopySqrDToSqr(&dsq,&spev_sq0);
    DispSqrD(&dsq);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,142.0,131.0,346.0,145.0,0x7f);
    if (star_pzl_wrk.menu_mode == '\x03') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0);
      spev_str.pos_x = 0xe7;
      spev_str.pos_y = 0x9d;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',1);
      spev_str.pos_x = 0xdb;
      spev_str.pos_y = 0xbf;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',2);
      spev_str.pos_x = 0xf3;
      spev_str.pos_y = 0xe1;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      pSVar4 = (SPRT_SDAT *)&spev00_sp_csr;
      do {
        SimpleDispSprtDatCopy(pSVar4,&ssd);
        ssd.y = ssd.y + (ushort)star_pzl_wrk.menu_csr[0] * 0x22;
        if ((int)pSVar4 < 0x326da4) {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
        }
        else {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)&spev00_csr_scl,'d');
        }
        pSVar4 = pSVar4 + 1;
      } while ((int)pSVar4 < 0x326db2);
    }
    else if (star_pzl_wrk.menu_mode == '\x01') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',3);
      spev_str.pos_x = 0xab;
      spev_str.pos_y = 0xa6;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',5);
      spev_str.pos_y = 0xd7;
      spev_str.pos_x = 0xdb;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',6);
      spev_str.pos_y = 0xd7;
      spev_str.pos_x = 0x15f;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      pSVar4 = (SPRT_SDAT *)&DAT_00326db2;
      do {
        SimpleDispSprtDatCopy(pSVar4,&ssd);
        ssd.x = ssd.x + (ushort)star_pzl_wrk.menu_csr[1] * 0x8d;
        if ((int)pSVar4 < 0x326dce) {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
        }
        else {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,
                         (SPRT_SSCL *)((uint)star_pzl_wrk.menu_csr[1] * 8 + 0x326de8),'d');
        }
        pSVar4 = pSVar4 + 1;
      } while ((int)pSVar4 < 0x326ddc);
    }
    else if (star_pzl_wrk.menu_mode == '\x02') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',4);
      spev_str.pos_x = 0xcf;
      spev_str.pos_y = 0xa6;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',5);
      spev_str.pos_y = 0xd7;
      spev_str.pos_x = 0xdb;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',6);
      spev_str.pos_y = 0xd7;
      spev_str.pos_x = 0x15f;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      pSVar4 = (SPRT_SDAT *)&DAT_00326db2;
      do {
        SimpleDispSprtDatCopy(pSVar4,&ssd);
        ssd.x = ssd.x + (ushort)star_pzl_wrk.menu_csr[1] * 0x8d;
        if ((int)pSVar4 < 0x326dce) {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
        }
        else {
          SimpleDispSprt(&ssd,0x1e90000,0x11,(SPRT_SROT *)0x0,
                         (SPRT_SSCL *)((uint)star_pzl_wrk.menu_csr[1] * 8 + 0x326de8),'d');
        }
        pSVar4 = pSVar4 + 1;
      } while ((int)pSVar4 < 0x326ddc);
    }
  }
  if (star_pzl_wrk.mode == '\x13') {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    if (star_pzl_wrk.pzl_no == '\0') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',7);
      spev_str.pos_x = 0xad;
LAB_001a2314:
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    else {
      if (star_pzl_wrk.pzl_no == '\x01') {
        iVar5 = 8;
LAB_001a2304:
        spev_str.str = (char *)GetIngameMSGAddr('\a',iVar5);
        spev_str.pos_x = 0xbb;
        goto LAB_001a2314;
      }
      if (star_pzl_wrk.pzl_no == '\x02') {
        spev_str.str = (char *)GetIngameMSGAddr('\a',9);
        spev_str.pos_x = 0xa3;
        goto LAB_001a2314;
      }
      if (star_pzl_wrk.pzl_no == '\x03') {
        iVar5 = 10;
        goto LAB_001a2304;
      }
      spev_str.str = (char *)GetIngameMSGAddr('\a',0xb);
      spev_str.pos_x = 0xbb;
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',6);
    spev_str.pos_y = 0x15e;
    spev_str.pos_x = 0xfd;
  }
  else {
    if (star_pzl_wrk.mode != '\x06') {
      if (star_pzl_wrk.mode == '\x10') {
        CopySqrDToSqr(&dsq,&menu_sq0);
        DispSqrD(&dsq);
        DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x30);
        spev_str.pos_x = 0x32;
        spev_str.pos_y = 0x159;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
      }
      goto LAB_001a24c8;
    }
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0xe);
    spev_str.pos_y = 0x159;
    spev_str.pos_x = 0x32;
  }
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
LAB_001a24c8:
  if (star_pzl_wrk.mode == '\x0f') {
    alp_rate = (uchar)(((uint)star_pzl_wrk.time * 100) / 0xf);
  }
  else if (star_pzl_wrk.mode == '\x10') {
    alp_rate = '\0';
  }
  SimpleDispSprt((SPRT_SDAT *)&spev00_sp_cpf,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                 alp_rate);
  SimpleDispSprt((SPRT_SDAT *)&DAT_00326e14,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                 alp_rate);
  if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
    SimpleDispSprt((SPRT_SDAT *)&DAT_00326e06,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
  }
  else {
    SimpleDispSprt((SPRT_SDAT *)&DAT_00326e22,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
  }
  if (star_pzl_wrk.count == '\0') {
    SimpleDispSprt((SPRT_SDAT *)&DAT_00326ea0,0x1e90000,0x14,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
    SimpleDispSprt((SPRT_SDAT *)&spev00_sp_cpf2,0x1e90000,0x14,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
    SimpleDispSprt((SPRT_SDAT *)&DAT_00326e3e,0x1e90000,0x14,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
  }
  else {
    SimpleDispSprt((SPRT_SDAT *)&DAT_00326ea0,0x1e90000,0x14,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
    SimpleDispSprt((SPRT_SDAT *)&spev00_sp_cpf2,0x1e90000,0x14,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                   alp_rate);
    SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_cpf2 + (uint)star_pzl_wrk.count * 0xe),0x1e90000,0x14,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  SimpleDispSprt((SPRT_SDAT *)&spev00_sp_cap,0x1e90000,0x13,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,
                 alp_rate);
  DrawButtonTex(0xa000,3,(float)(int)_spev00_cbt_pos,(float)(int)DAT_00326eb2,alp_rate);
  DrawButtonTex(0xa000,1,(float)(int)DAT_00326eb6,(float)(int)DAT_00326eb8,alp_rate);
  DrawButtonTex(0xa000,2,(float)(int)DAT_00326ebc,(float)(int)DAT_00326ebe,alp_rate);
  return;
}

int StarPuzzleMSGMain(int pzl_no) {
	u_char stone_odr[5];
	
  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  uchar stone_odr [5];
  
  puVar1 = stone_odr + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  stone_odr._0_4_ = DAT_00357038;
  stone_odr[4] = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      if (pzl_no == 4) {
        iVar4 = 0x31;
LAB_001a2840:
        LoadReq(iVar4,0x1e90000);
      }
      else {
        if (pzl_no == 9) {
          iVar4 = 0x30;
          goto LAB_001a2840;
        }
        if (pzl_no == 0xc) {
          iVar4 = 0x2b;
          goto LAB_001a2840;
        }
        if (pzl_no == 0x12) {
          iVar4 = 0x2c;
          goto LAB_001a2840;
        }
        if (pzl_no == 0x14) {
          iVar4 = 0x2e;
          goto LAB_001a2840;
        }
        if (pzl_no == 0x24) {
          iVar4 = 0x2d;
          goto LAB_001a2840;
        }
        if (pzl_no == 0x29) {
          LoadReq(0x2f,0x1e90000);
        }
      }
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    uGpffffa031 = 1;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return 0;
}

void StarPuzzleMSGDisp() {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  int sp_no;
  uint uVar4;
  SPRT_SDAT *ssd_00;
  ushort *puVar5;
  uchar alp_rate;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar4);
  *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | DAT_0034ed88 >> (7 - uVar4) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar4);
  *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | DAT_0034ed90 >> (7 - uVar4) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar4 = (uint)&menu_sq0.alpha & 7;
  puVar3 = &menu_sq0.alpha + -uVar4;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar4 + 1) * 8 | DAT_0034ed98 >> (7 - uVar4) * 8;
  menu_sq0._16_8_ = DAT_0034ed98;
  if (star_pzl_wrk.mode == '\x03') {
    alp_rate = (uchar)((int)((0x28 - (uint)star_pzl_wrk.time) * 100) / 0x28);
  }
  else {
    alp_rate = 'd';
    if (star_pzl_wrk.mode == '\x0e') {
      alp_rate = (uchar)(((uint)star_pzl_wrk.time * 100) / 0x28);
    }
  }
  sp_no = 0;
  ssd_00 = (SPRT_SDAT *)&spev00_sp_bak;
  do {
    SimpleDispSprt(ssd_00,0x1e90000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    sp_no = sp_no + 1;
    ssd_00 = ssd_00 + 1;
  } while (sp_no < 0xb);
  if (1 < star_pzl_wrk.pzl_no - 5) {
    puVar5 = (ushort *)&spev00_stn_pos;
    uVar4 = 0;
    do {
      if (uVar4 != star_pzl_wrk.empty) {
        SimpleDispSprtDatCopy
                  ((SPRT_SDAT *)(&spev00_sp_stn + (uint)star_pzl_wrk.stone[uVar4] * 0xe),&ssd);
        ssd.x = *puVar5;
        ssd.y = puVar5[1];
        SimpleDispSprt(&ssd,0x1e90000,0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 2;
    } while ((int)uVar4 < 5);
    if ((star_pzl_wrk.mode != '\x10') &&
       (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff)) {
      SimpleDispSprt((SPRT_SDAT *)((uint)star_pzl_wrk.slct_no * 0xe + 0x326c54),0x1e90000,0xe,
                     (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    }
    SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_hln + (uint)star_pzl_wrk.empty * 0xe),0x1e90000,0x10,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    SimpleDispSprt((SPRT_SDAT *)(&spev00_sp_hln + (uint)star_pzl_wrk.slct_no * 0xe),0x1e90000,0x10,
                   (SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  if (star_pzl_wrk.mode == '\x06') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',5);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  if (star_pzl_wrk.mode == '\a') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0xf);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  if (star_pzl_wrk.mode == '\b') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0xc);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  if (star_pzl_wrk.mode == '\t') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0xd);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  return;
}

void DialKeyDoorInit(int door_no) {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(door_no);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    iGpffff9fb0 = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(&gp0xffffa035);
  CsrClear(&gp0xffffa036);
  CsrClear(&gp0xffffa037);
  SetBlackOut();
  SpevStrInit();
  return;
}

void DialKeyDoorDataSet(int door_no) {
  dkey_wrk.door_no = (uchar)door_no;
  dkey_wrk.mode = '\x01';
  dkey_wrk.time = '(';
  dkey_wrk.count = '\0';
  dkey_wrk.slct_no = '\0';
  memset(dkey_wrk.btn,0,10);
  memset(dkey_wrk.push_no,0xff,5);
  return;
}

int DialKeyDoorMain() {
	int i;
	
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  DIAL_KEY_WRK *pDVar7;
  uchar *puVar8;
  uint uVar9;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar9 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar9,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if (((*key_now[2] != 1) &&
              (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1 &&
              ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
               (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1))))))
          break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar9 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar8 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar9] != *puVar8) break;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 1;
          } while ((int)uVar9 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar9 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar9 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  pDVar7 = &dkey_wrk;
  if (((1 < dkey_wrk.mode) && (pDVar7 = (DIAL_KEY_WRK *)0x10, dkey_wrk.mode != '\x10')) &&
     (pDVar7 = (DIAL_KEY_WRK *)0xf, dkey_wrk.mode != '\x0f')) {
    iVar6 = 0x11;
    pDVar7 = (DIAL_KEY_WRK *)0x11;
    if (dkey_wrk.mode != '\x11') {
      DialKeyDoorDisp();
      return iVar6;
    }
  }
  return (int)pDVar7;
}

void DialKeyDoorDisp() {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	SPRT_SSCL sscl;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	int msg_index;
	
  undefined *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  SPRT_SDAT *pSVar7;
  SPRT_SDAT *ssd_00;
  uchar *puVar8;
  ushort *puVar9;
  uchar alp_rate;
  ulong in_hi;
  SPRT_SDAT ssd;
  SPRT_SSCL sscl;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&sscl.sh + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00357040 >> (7 - uVar6) * 8;
  sscl = DAT_00357040;
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034ee28 >> (7 - uVar6) * 8;
  menu_sq0._0_8_ = DAT_0034ee28;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_0034ee30 >> (7 - uVar6) * 8;
  menu_sq0._8_8_ = DAT_0034ee30;
  uVar6 = (uint)&menu_sq0.alpha & 7;
  puVar8 = &menu_sq0.alpha + -uVar6;
  *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar6 + 1) * 8 | DAT_0034ee38 >> (7 - uVar6) * 8;
  menu_sq0._16_8_ = DAT_0034ee38;
  SetSprFile(0x1e90000);
  if (dkey_wrk.mode == '\x03') {
    in_hi = in_hi & 0xffffffff00000000;
    alp_rate = (uchar)((int)((0x28 - (uint)dkey_wrk.time) * 100) / 0x28);
  }
  else if ((dkey_wrk.mode == '\x0e') || (alp_rate = 'd', dkey_wrk.mode == '\f')) {
    in_hi = 0;
    alp_rate = (uchar)(((uint)dkey_wrk.time * 100) / 0x28);
  }
  iVar5 = 0;
  pSVar7 = (SPRT_SDAT *)&spev01_sp_bak;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    iVar5 = iVar5 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar5 < 0xb);
  pSVar7 = (SPRT_SDAT *)&spev01_sp_btp;
  in_hi = in_hi & 0xffffffff00000000;
  sscl._0_4_ = CONCAT22(*(short *)(&DAT_00327052 + (uint)dkey_wrk.slct_no * 0xe) +
                        *(short *)(iVar5 * 0xe + 0x32704e) + 0x14,
                        *(short *)(&DAT_00327050 + (uint)dkey_wrk.slct_no * 0xe) +
                        *(short *)(iVar5 * 0xe + 0x32704c) + 0x18);
  sscl = (SPRT_SSCL)((ulong)sscl & 0xffffffff00000000 | (ulong)sscl._0_4_);
  uVar6 = 0;
  SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev01_sp_btf + (uint)dkey_wrk.slct_no * 0xe),&ssd);
  ssd.alp = spev_wrk.csr[2];
  SimpleDispSprt(&ssd,0x1e90000,0x10,(SPRT_SROT *)0x0,&sscl,alp_rate);
  ssd_00 = (SPRT_SDAT *)&spev01_sp_btn;
  do {
    if ((dkey_wrk.slct_no == uVar6) && (dkey_wrk.mode == '\t')) {
      SimpleDispSprt(pSVar7,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    }
    else {
      SimpleDispSprt(ssd_00,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    }
    uVar6 = uVar6 + 1;
    ssd_00 = ssd_00 + 1;
    pSVar7 = pSVar7 + 1;
  } while ((int)uVar6 < 10);
  if (((byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7] != 0) &&
     (dkey_wrk.slct_no != dkey_wrk.push_no[0])) {
    iVar5 = 1;
    do {
      puVar8 = dkey_wrk.push_no + iVar5;
      if ((int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7] <= iVar5) break;
      iVar5 = iVar5 + 1;
    } while (dkey_wrk.slct_no != *puVar8);
  }
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev01_sp_cpf,&ssd);
  ssd.alp = spev_wrk.csr[1];
  SimpleDispSprt(&ssd,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  if (dkey_wrk.count == '\0') {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_0032723e,&ssd);
    ssd.alp = spev_wrk.csr[1];
    ssd.h = (ushort)(((int)((uint)DAT_00327244 << 0x10) >> 0x10) -
                     ((int)((uint)DAT_00327244 << 0x10) >> 0x1f) >> 1);
    SimpleDispSprt(&ssd,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  else {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_0032724c,&ssd);
    ssd.y = DAT_00327248;
    ssd.alp = spev_wrk.csr[1];
    SimpleDispSprt(&ssd,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  }
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_0032723e,&ssd);
  ssd.alp = spev_wrk.csr[1];
  ssd.h = (ushort)(((int)((uint)DAT_00327244 << 0x10) >> 0x10) -
                   ((int)((uint)DAT_00327244 << 0x10) >> 0x1f) >> 1);
  ssd.y = DAT_00327248 + ssd.h;
  ssd.v = DAT_00327240 + ssd.h;
  SimpleDispSprt(&ssd,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev01_sp_cap,&ssd);
  ssd.alp = spev_wrk.csr[1];
  SimpleDispSprt(&ssd,0x1e90000,0x13,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
  DrawButtonTex(0xa000,3,(float)(int)_spev01_cbt_pos,(float)(int)DAT_00327262,spev_wrk.csr[1]);
  DrawButtonTex(0xa000,1,(float)(int)DAT_00327264,(float)(int)DAT_00327266,spev_wrk.csr[1]);
  if (dkey_wrk.mode == '\n') {
    alp_rate = 0x96;
  }
  else if (dkey_wrk.mode == '\v') {
    in_hi = (ulong)(int)(((uint)dkey_wrk.time * 100) % 0x28);
    alp_rate = (uchar)(((uint)dkey_wrk.time * 100) / 0x28);
  }
  iVar5 = 0;
  if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
    puVar9 = (ushort *)&spev01_nm4_pos;
    puVar8 = dkey_wrk.push_no;
    do {
      if (*puVar8 != 0xff) {
        lVar4 = (in_hi | 0x327168) + (long)(int)((uint)*puVar8 * 0xe);
        in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
        SimpleDispSprtDatCopy((SPRT_SDAT *)lVar4,&ssd);
        ssd.x = *puVar9;
        ssd.y = puVar9[1];
        if ((iVar5 == dkey_wrk.count - 1) && (dkey_wrk.mode == '\t')) {
          iVar3 = (uint)ssd.alp * (0x28 - (uint)dkey_wrk.time);
          in_hi = (ulong)(iVar3 % 0x28);
          ssd.alp = (uchar)(iVar3 / 0x28);
        }
        SimpleDispSprt(&ssd,0x1e90000,0xf,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
      }
      iVar5 = iVar5 + 1;
      puVar9 = puVar9 + 2;
      puVar8 = puVar8 + 1;
    } while (iVar5 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
  }
  if ((dkey_wrk.mode - 6 < 2) || (dkey_wrk.mode == '\r')) {
    if (dkey_wrk.mode == '\x06') {
      iVar5 = 0x2c;
    }
    else if (dkey_wrk.mode == '\a') {
      switch(dkey_wrk.door_no) {
      default:
        iVar5 = 0x23;
        break;
      case '\x02':
        iVar5 = 0x25;
        break;
      case '\x03':
        iVar5 = 0x26;
        break;
      case '\x05':
        iVar5 = 0x27;
        break;
      case '\x06':
        iVar5 = 0x28;
        break;
      case '\a':
        iVar5 = 0x29;
      }
    }
    else {
      if (dkey_wrk.mode != '\r') goto LAB_001a3fac;
      iVar5 = 0x24;
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',iVar5);
  }
  else {
    if (dkey_wrk.mode != '\x04') {
      if (dkey_wrk.mode != '\x05') {
        return;
      }
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x2b);
      spev_str.pos_x = 0x28;
      spev_str.pos_y = 0x159;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      CopySqrDToSqr(&dsq,&menu_sq0);
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,100.0,0x7f);
      return;
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x2a);
  }
LAB_001a3fac:
  spev_str.pos_y = 0x159;
  spev_str.pos_x = 0x28;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  CopySqrDToSqr(&dsq,&menu_sq0);
  DispSqrD(&dsq);
  DrawMessageBox(0x2000,19.0,328.0,592.0,100.0,0x7f);
  return;
}

void DialKeyMSGDoorInit() {
  FileLoadB(0x32,0x1e90000);
  dkey_wrk.time = '(';
  dkey_wrk.mode = '\x01';
  SetBlackOut();
  return;
}

int DialKeyMSGDoorMain(int msg_no) {
  uchar uVar1;
  int iVar2;
  DIAL_KEY_WRK *pDVar3;
  
  uVar1 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\x01':
    uVar1 = dkey_wrk.time + 0xff;
    if ((dkey_wrk.time != '\0') || (iVar2 = IsLoadEndAll(), uVar1 = dkey_wrk.time, iVar2 == 0))
    break;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    dkey_wrk.mode = '\x03';
    goto LAB_001a4228;
  case '\x03':
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\b';
      break;
    }
    goto LAB_001a4248;
  case '\b':
    if ((*key_now[4] == 1) || (*key_now[5] == 1)) {
      dkey_wrk.mode = '\x0e';
      dkey_wrk.time = '(';
      uVar1 = dkey_wrk.time;
    }
    break;
  case '\x0e':
    uVar1 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time != '\0') break;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    dkey_wrk.mode = '\x0f';
LAB_001a4228:
    dkey_wrk.time = '(';
    SetBlackIn();
    uVar1 = dkey_wrk.time;
    break;
  case '\x0f':
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x11';
      break;
    }
LAB_001a4248:
    uVar1 = dkey_wrk.time + 0xff;
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar1;
  pDVar3 = &dkey_wrk;
  if ((dkey_wrk.mode != '\x01') && (pDVar3 = (DIAL_KEY_WRK *)0xf, dkey_wrk.mode != '\x0f')) {
    iVar2 = 0x11;
    pDVar3 = (DIAL_KEY_WRK *)0x11;
    if (dkey_wrk.mode != '\x11') {
      DialKeyMSGDoorDisp(msg_no);
      return iVar2;
    }
  }
  return (int)pDVar3;
}

void DialKeyMSGDoorDisp(int msg_no) {
	int i;
	u_char alp_rate;
	SPRT_SDAT ssd;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int sp_no;
  uchar alp_rate;
  SPRT_SDAT *pSVar5;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034eea8 >> (7 - uVar2) * 8;
  menu_sq0._0_8_ = DAT_0034eea8;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034eeb0 >> (7 - uVar2) * 8;
  menu_sq0._8_8_ = DAT_0034eeb0;
  uVar2 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034eeb8 >> (7 - uVar2) * 8;
  menu_sq0._16_8_ = DAT_0034eeb8;
  SetSprFile(0x1e90000);
  if (dkey_wrk.mode == '\x03') {
    alp_rate = (uchar)((int)((0x28 - (uint)dkey_wrk.time) * 100) / 0x28);
  }
  else if ((dkey_wrk.mode == '\x0e') || (alp_rate = 'd', dkey_wrk.mode == '\f')) {
    alp_rate = (uchar)(((uint)dkey_wrk.time * 100) / 0x28);
  }
  sp_no = 0;
  pSVar5 = (SPRT_SDAT *)&spev01_sp_bak;
  do {
    SimpleDispSprt(pSVar5,0x1e90000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    sp_no = sp_no + 1;
    pSVar5 = pSVar5 + 1;
  } while (sp_no < 0xb);
  pSVar5 = (SPRT_SDAT *)&spev01_sp_btn;
  do {
    SimpleDispSprt(pSVar5,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    pSVar5 = pSVar5 + 1;
  } while ((int)pSVar5 < 0x327044);
  pSVar5 = (SPRT_SDAT *)&spev01_sp_gl3;
  do {
    SimpleDispSprt(pSVar5,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,alp_rate);
    pSVar5 = pSVar5 + 1;
  } while ((int)pSVar5 < 0x326f94);
  if (dkey_wrk.mode == '\b') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',msg_no);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  return;
}

void GhostDoorInit(int door_no) {
	int i;
	
  int iVar1;
  
  uGpffffa033 = 0x28;
  uGpffffa032 = 0;
  cGpffffa034 = '\0';
  iVar1 = 0;
  if ((uint)ev_wrk.gst_door[0] == door_no) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      cGpffffa034 = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if ((uint)ev_wrk.gst_door[iVar1] == door_no) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(door_no);
  }
  iVar1 = 0x33;
  if (door_no == 5) {
    if (cGpffffa034 != '\0') {
      LoadReq(0x35,0x1e90000);
      goto LAB_001a45cc;
    }
    iVar1 = 0x34;
  }
  LoadReq(iVar1,0x1e90000);
LAB_001a45cc:
  SpevStrInit();
  SetBlackOut();
  return;
}

void GhostDoorSet(int door_no) {
	int i;
	
  byte bVar1;
  byte *pbVar2;
  EVENT_WRK *pEVar3;
  int iVar4;
  int iVar5;
  
  pbVar2 = ev_wrk.gst_door;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    if ((uint)*pbVar2 == door_no) {
      return;
    }
    pbVar2 = ev_wrk.gst_door + iVar5 + 1;
    iVar5 = iVar4;
  } while (iVar4 < 2);
  pEVar3 = &ev_wrk;
  bVar1 = (byte)door_no;
  if (ev_wrk.gst_door[0] == 0xff) {
LAB_001a4678:
    ev_wrk.gst_door[0] = bVar1;
    pEVar3->spev_tmp[0] = (&pghost_no_dat)[door_no];
  }
  else {
    for (iVar5 = 1; iVar5 < 2; iVar5 = iVar5 + 1) {
      if (ev_wrk.gst_door[iVar5] == 0xff) {
        ev_wrk.gst_door[iVar5] = (byte)door_no;
        pEVar3 = (EVENT_WRK *)(ev_wrk.pht_ev + iVar5 + -0xc);
        bVar1 = ev_wrk.gst_door[0];
        goto LAB_001a4678;
      }
    }
  }
  return;
}

void GhostDoorMain(int door_no) {
	int i;
	
  int iVar1;
  byte *pbVar2;
  
  switch(cGpffffa032) {
  case '\0':
    if (cGpffffa033 == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      cGpffffa032 = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      cGpffffa033 = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (cGpffffa033 == '\0') {
      cGpffffa032 = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    cGpffffa032 = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      cGpffffa032 = '\x04';
      cGpffffa033 = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (cGpffffa033 == '\0') {
      cGpffffa032 = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (cGpffffa033 == '\0') {
      if (cGpffffa034 != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if ((uint)*pbVar2 == door_no) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      uGpffffa031 = 1;
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  cGpffffa033 = cGpffffa033 + -1;
switchD_001a46c0_caseD_6:
  if ((cGpffffa032 != '\0') && (cGpffffa032 != '\x05')) {
    GhostDoorDisp(door_no);
    return;
  }
  return;
}

void GhostDoorDisp(int door_no) {
	int i;
	SPRT_SDAT ssd;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  SPRT_SDAT *pSVar6;
  SPRT_SDAT ssd;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034eed8 >> (7 - uVar2) * 8;
  menu_sq0._0_8_ = DAT_0034eed8;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034eee0 >> (7 - uVar2) * 8;
  menu_sq0._8_8_ = DAT_0034eee0;
  uVar2 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034eee8 >> (7 - uVar2) * 8;
  menu_sq0._16_8_ = DAT_0034eee8;
  SetSprFile(0x1e90000);
  if (door_no == 5) {
    iVar5 = 0;
    pSVar6 = (SPRT_SDAT *)&spev02_sp_bak;
    do {
      SimpleDispSprt(pSVar6,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
      iVar5 = iVar5 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar5 < 0xb);
  }
  else {
    iVar5 = 0;
    pSVar6 = (SPRT_SDAT *)&spev02_sp_bak;
    do {
      SimpleDispSprt(pSVar6,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
      iVar5 = iVar5 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar5 < 0xb);
    if (spev_wrk.count != '\0') {
      SimpleDispSprt((SPRT_SDAT *)&spev02_sp_of1,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d'
                    );
    }
  }
  if (spev_wrk.mode - 2 < 2) {
    if (spev_wrk.count == '\0') {
      if (door_no == 0) {
        iVar5 = 0x2d;
      }
      else {
        iVar5 = 0x2f;
      }
    }
    else {
      iVar5 = 0x2e;
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',iVar5);
    spev_str.pos_y = 0x15e;
    spev_str.pos_x = 0x32;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
  }
  return;
}

void DollPzlInit() {
  bool bVar1;
  
  AdpcmPrePuzzleFadeOut(0x28);
  uGpffff9fb0 = 0xffffffff;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x36,0x1e90000);
    uGpffffa033 = 0x28;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    uGpffffa033 = 0x3c;
  }
  uGpffffa032 = bVar1;
  SeStopAndBackup();
  uGpffffa036 = 0;
  uGpffffa035 = 4;
  uGpffffa034 = 0;
  SpevStrInit();
  SetBlackOut();
  return;
}

void DollPzlMain() {
	int no;
	int i;
	static int blink_dir = 1;
	
  bool bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  
  bVar2 = bGpffffa034;
  uVar8 = (uint)bGpffffa034;
  switch(bGpffffa032) {
  case 0:
    LoadReq(0x36,0x1e90000);
    bGpffffa032 = 1;
    bGpffffa033 = 0x28;
    break;
  case 1:
    if (bGpffffa033 != 0) goto LAB_001a5860;
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) break;
    SetSprFile(0x1e90000);
    bGpffffa032 = 2;
    uVar8 = 0x54c;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    goto LAB_001a5890;
  case 2:
    if (bGpffffa033 == 0) {
      iVar6 = IsLoadEnd(iGpffff9fb0);
      if (iVar6 != 0) {
        iGpffff9fb0 = -1;
        bGpffffa032 = 4;
        SetBlackIn();
      }
      break;
    }
    goto LAB_001a5860;
  case 4:
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 != 0) {
      AdpcmPreLoadPuzzle(0x610);
      bGpffffa032 = 5;
    }
    break;
  case 5:
    bVar3 = IsPreLoadEndAdpcmPuzzle();
    if (bVar3 != 0) {
      bGpffffa032 = 6;
      bGpffffa033 = 0x3c;
      AdpcmPuzzlePreLoadEndPlay();
    }
    break;
  case 6:
    if (bGpffffa033 == 0) {
      iVar6 = 0;
      pcVar7 = &DAT_00328269 + (uint)bGpffffa034 * 0xe;
      do {
        if (*pcVar7 != -1) {
          bGpffffa035 = (byte)iVar6;
        }
        iVar6 = iVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (iVar6 < 9);
      bGpffffa032 = 7;
      bGpffffa033 = 0x3c;
      break;
    }
    goto LAB_001a5860;
  case 7:
    if (bGpffffa033 == 0) {
      bGpffffa032 = 8;
      bGpffffa033 = 0x14;
      break;
    }
    goto LAB_001a5860;
  case 8:
    if (bGpffffa033 == 0) {
      bVar3 = IsEndAdpcmPuzzle();
      if (bVar3 != 0) {
        bGpffffa033 = 0x14;
        bGpffffa032 = 10;
      }
      break;
    }
    goto LAB_001a5860;
  case 9:
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      bGpffffa033 = 0;
    }
    if (bGpffffa033 == 0) {
      bGpffffa033 = 0x14;
      bGpffffa032 = 10;
    }
    break;
  case 10:
    if (bGpffffa033 != 0) {
      bGpffffa033 = bGpffffa033 - 1;
    }
    if (*key_now[4] == 1) {
      bGpffffa032 = 0xf;
      bGpffffa033 = 0x28;
      SetBlackOut();
      iVar6 = 3;
    }
    else if (*key_now[5] == 1) {
      bGpffffa032 = 0xb;
      iVar6 = 1;
    }
    else {
      uVar9 = (uint)bGpffffa034;
      if (((*key_now[0] == 1) ||
          (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1)))) ||
         ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
          (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))) {
        if (bGpffffa035 < 3) break;
        if (*(char *)((uint)bGpffffa035 + uVar9 * 0xe + 0x328266) != -1) {
          bGpffffa033 = 0x14;
          uGpffffa036 = 0;
          bGpffffa035 = bGpffffa035 - 3;
        }
        iVar6 = 0;
      }
      else if (((*key_now[1] == 1) ||
               ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
              ((sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))))) {
        if (5 < bGpffffa035) break;
        if (*(char *)((uint)bGpffffa035 + uVar9 * 0xe + 0x32826c) != -1) {
          bGpffffa033 = 0x14;
          uGpffffa036 = 0;
          bGpffffa035 = bGpffffa035 + 3;
        }
        iVar6 = 0;
      }
      else if (((*key_now[2] == 1) ||
               (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))) {
        if ((uint)bGpffffa035 % 3 == 0) break;
        if ((&evdl_dat)[(uint)bGpffffa035 + uVar8 * 0xe] != -1) {
          bGpffffa033 = 0x14;
          uGpffffa036 = 0;
          bGpffffa035 = bGpffffa035 - 1;
        }
        iVar6 = 0;
      }
      else {
        if (((((*key_now[3] != 1) &&
              (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 != 1)) &&
            ((uVar5 = Ana2PadDirCnt('\x01'), uVar5 < 0x1a ||
             (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 != 1)))) || ((uint)bGpffffa035 % 3 == 2)
           ) break;
        if ((&DAT_0032826a)[(uint)bGpffffa035 + uVar8 * 0xe] != -1) {
          bGpffffa033 = 0x14;
          uGpffffa036 = 0;
          bGpffffa035 = bGpffffa035 + 1;
        }
        iVar6 = 0;
      }
    }
    goto LAB_001a5384;
  case 0xb:
    if (*key_now[4] == 1) {
      bGpffffa032 = 10;
      iVar6 = 3;
    }
    else {
      if (*key_now[5] == 1) {
        SeStartFix(0x23,0,0x1000,0x1000,0);
        if (bGpffffa035 == (&evdl_dat)[uVar8 * 0xe]) {
          bGpffffa033 = 0xb4;
          bGpffffa032 = 0x15;
          iVar6 = 0x668;
        }
        else {
          bGpffffa033 = 0x82;
          bGpffffa032 = 0x10;
          iVar6 = 0x669;
        }
        goto LAB_001a5588;
      }
      if (*key_now[2] == 1) goto LAB_001a523c;
      if (((ushort)*key_now[2] < 0x1a) || (bVar3 = 0xc, (uint)(ushort)*key_now[2] % 5 != 1)) {
        sVar4 = Ana2PadDirCnt('\x03');
        bVar3 = 0xc;
        if (sVar4 != 1) {
          uVar5 = Ana2PadDirCnt('\x03');
          if (0x19 < uVar5) {
            sVar4 = Ana2PadDirCnt('\x03');
            bVar3 = 0xc;
            if ((int)sVar4 % 5 == 1) goto LAB_001a537c;
          }
          if (*key_now[3] == 1) {
LAB_001a523c:
            bVar3 = 0xc;
          }
          else if (((ushort)*key_now[3] < 0x1a) || (bVar3 = 0xc, (uint)(ushort)*key_now[3] % 5 != 1)
                  ) {
            sVar4 = Ana2PadDirCnt('\x01');
            bVar3 = 0xc;
            if (sVar4 != 1) {
              uVar5 = Ana2PadDirCnt('\x01');
              if ((uVar5 < 0x1a) || (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 != 1)) break;
              goto LAB_001a523c;
            }
          }
        }
      }
LAB_001a537c:
      bGpffffa032 = bVar3;
      iVar6 = 0;
    }
    goto LAB_001a5384;
  case 0xc:
    if (*key_now[4] == 1) {
      bGpffffa032 = 10;
      iVar6 = 3;
    }
    else {
      if (*key_now[5] != 1) {
        if (*key_now[2] == 1) goto LAB_001a5378;
        if (((ushort)*key_now[2] < 0x1a) || (bVar3 = 0xb, (uint)(ushort)*key_now[2] % 5 != 1)) {
          sVar4 = Ana2PadDirCnt('\x03');
          bVar3 = 0xb;
          if (sVar4 != 1) {
            uVar5 = Ana2PadDirCnt('\x03');
            if (0x19 < uVar5) {
              sVar4 = Ana2PadDirCnt('\x03');
              bVar3 = 0xb;
              if ((int)sVar4 % 5 == 1) goto LAB_001a537c;
            }
            if (*key_now[3] == 1) {
LAB_001a5378:
              bVar3 = 0xb;
            }
            else if (((ushort)*key_now[3] < 0x1a) ||
                    (bVar3 = 0xb, (uint)(ushort)*key_now[3] % 5 != 1)) {
              sVar4 = Ana2PadDirCnt('\x01');
              bVar3 = 0xb;
              if (sVar4 != 1) {
                uVar5 = Ana2PadDirCnt('\x01');
                if ((uVar5 < 0x1a) || (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 != 1)) break;
                goto LAB_001a5378;
              }
            }
          }
        }
        goto LAB_001a537c;
      }
      bGpffffa032 = 10;
      iVar6 = 3;
    }
LAB_001a5384:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    break;
  case 0xd:
    if (bGpffffa033 == 0) {
      if (bGpffffa034 < 5) {
        bGpffffa034 = bGpffffa034 + 1;
      }
      else {
        bGpffffa034 = 4;
      }
      bGpffffa032 = 6;
      bGpffffa033 = 0x3c;
      AdpcmPuzzlePreLoadEndPlay();
      SetBlackIn();
      break;
    }
    goto LAB_001a5860;
  case 0xe:
    if (iGpffff9fb0 != -1) {
      iVar6 = IsLoadEnd(iGpffff9fb0);
      if (iVar6 != 0) {
        uGpffffa031 = 1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SetBlackIn();
        iGpffff9fb0 = -1;
        AdpcmPuzzleEnd();
        SeRevival(0x1e);
        SendManMdlTex();
      }
      break;
    }
    uVar8 = 0x549;
LAB_001a5890:
    iGpffff9fb0 = SeFileLoadAndSet(uVar8,2);
    break;
  case 0xf:
    goto joined_r0x001a5858;
  case 0x10:
    if (2 < bGpffffa033) {
      bGpffffa033 = bGpffffa033 - 2;
    }
    bVar3 = IsEndAdpcmPuzzle();
    if ((bVar3 == 0) || (2 < bGpffffa033)) break;
    goto LAB_001a5664;
  case 0x11:
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
LAB_001a5548:
      bGpffffa032 = 0x14;
      AdpcmPuzzlePlay(0x667);
      break;
    }
    if (bGpffffa033 < 3) {
      bGpffffa033 = 0x82;
      bGpffffa032 = 0x12;
      break;
    }
    goto LAB_001a54c0;
  case 0x12:
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) goto LAB_001a5548;
    if (bGpffffa033 < 3) {
      if ((&DAT_00328274)[uVar8 * 0xe] == -1) {
        bGpffffa033 = 10;
        bGpffffa032 = 0x13;
        break;
      }
      bGpffffa033 = 0x82;
      goto LAB_001a5580;
    }
LAB_001a54c0:
    bGpffffa033 = bGpffffa033 - 2;
    break;
  case 0x13:
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) goto LAB_001a5548;
    bVar1 = bGpffffa033 < 0xe4;
    bGpffffa033 = bGpffffa033 + 2;
    if (bVar1) break;
    bGpffffa033 = 0xe6;
LAB_001a5580:
    bGpffffa032 = 0x14;
    iVar6 = 0x667;
LAB_001a5588:
    AdpcmPuzzlePlay(iVar6);
    break;
  case 0x14:
    if ((0xe5 < bGpffffa033) || (bVar3 = bGpffffa033 + 2, iGpffff9fd8 < 1)) {
      bVar3 = bGpffffa033;
      if (bGpffffa033 < 0x40) {
        if (-1 < iGpffff9fd8) goto LAB_001a55fc;
        iVar6 = 1;
LAB_001a560c:
        iGpffff9fd8 = iVar6;
      }
      else if (iGpffff9fd8 < 0) {
        bVar3 = bGpffffa033 - 2;
      }
      else {
LAB_001a55fc:
        if ((0xe5 < bGpffffa033) && (iVar6 = -1, 0 < iGpffff9fd8)) goto LAB_001a560c;
      }
    }
    bGpffffa033 = bVar3;
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 == 0) break;
    if (*key_now[5] == 1) {
      bGpffffa033 = 0;
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    if (bGpffffa033 != 0) break;
    iGpffff9fd8 = 1;
LAB_001a5664:
    bGpffffa032 = 0xd;
    bGpffffa033 = 0x28;
    SetBlackOut();
    AdpcmPreLoadPuzzle(0x610);
    break;
  case 0x15:
    if (5 < bGpffffa033) {
      bGpffffa033 = bGpffffa033 - 5;
    }
    bVar3 = IsEndAdpcmPuzzle();
    if (bVar3 != 0) {
      bGpffffa032 = 0x18;
      SetBlackOut();
      bGpffffa033 = 0x28;
      event_stts[ev_wrk.evt_no] = '\x01';
    }
  case 0x16:
    if (5 < bGpffffa033) {
      bGpffffa033 = bGpffffa033 - 5;
    }
    bVar3 = IsEndAdpcmPuzzle();
    if ((bVar3 != 0) && (*key_now[5] == 1)) {
      bGpffffa032 = 0x17;
    }
    break;
  case 0x17:
    if ((0xe5 < bGpffffa033) || (bVar3 = bGpffffa033 + 5, iGpffff9fd8 < 1)) {
      bVar3 = bGpffffa033;
      if (bGpffffa033 < 0x40) {
        if (-1 < iGpffff9fd8) goto LAB_001a5780;
        iVar6 = 1;
LAB_001a5794:
        iGpffff9fd8 = iVar6;
      }
      else if (iGpffff9fd8 < 0) {
        bVar3 = bGpffffa033 - 5;
      }
      else {
LAB_001a5780:
        if ((0xe5 < bGpffffa033) && (iVar6 = -1, 0 < iGpffff9fd8)) goto LAB_001a5794;
      }
    }
    bGpffffa033 = bVar3;
    if (*key_now[5] == 1) {
      bGpffffa033 = 0;
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      bGpffffa033 = 0;
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    if (bGpffffa033 == 0) {
      event_stts[ev_wrk.evt_no] = '\x01';
      bGpffffa032 = 0x18;
      bGpffffa033 = 0x28;
      iGpffff9fd8 = 1;
      SetBlackOut();
    }
    break;
  case 0x18:
joined_r0x001a5858:
    if (bGpffffa033 == 0) {
      bGpffffa032 = 0xe;
      break;
    }
LAB_001a5860:
    bGpffffa033 = bGpffffa033 - 1;
  }
  if (((1 < bGpffffa032) && (bGpffffa032 != 3)) && (bGpffffa032 != 0xe)) {
    SpecialEventDisp003((uint)bVar2);
    return;
  }
  return;
}

int CursorManagerEvent003() {
	static int blink_dir = 1;
	
  uchar uVar1;
  
  if (3 < spev_wrk.mode - 6) {
    if (spev_wrk.mode == '\n') {
      uVar1 = spev_wrk.csr[1] + '\x05';
      if (0x7c < spev_wrk.csr[1]) {
        spev_wrk.csr[1] = 0x82;
        uVar1 = spev_wrk.csr[1];
      }
      goto LAB_001a5a70;
    }
    if ((spev_wrk.mode - 0x15 & 0xff) < 3) {
      if ((0xe5 < spev_wrk.csr[1]) || (uVar1 = spev_wrk.csr[1] + '\x05', blink_dir_246 < 1)) {
        if (spev_wrk.csr[1] < 0x40) {
          if (blink_dir_246 < 0) {
            blink_dir_246 = 1;
            uVar1 = spev_wrk.csr[1];
            goto LAB_001a5a70;
          }
        }
        else if (blink_dir_246 < 0) {
          uVar1 = spev_wrk.csr[1] + 0xfb;
          goto LAB_001a5a70;
        }
        uVar1 = spev_wrk.csr[1];
        if ((0xe5 < spev_wrk.csr[1]) && (0 < blink_dir_246)) {
          blink_dir_246 = -1;
        }
      }
      goto LAB_001a5a70;
    }
    if (spev_wrk.mode == '\x10') {
      uVar1 = spev_wrk.csr[1] + 0xfe;
      if (2 < spev_wrk.csr[1]) goto LAB_001a5a70;
    }
    else if ((((3 < (byte)(spev_wrk.mode - 0x11)) && (spev_wrk.mode != '\r')) &&
             (spev_wrk.mode != '\x0f')) &&
            ((spev_wrk.mode != '\x18' && (uVar1 = spev_wrk.csr[1], spev_wrk.mode != '\x0e'))))
    goto LAB_001a5a70;
  }
  spev_wrk.csr[1] = '\0';
  uVar1 = spev_wrk.csr[1];
LAB_001a5a70:
  spev_wrk.csr[1] = uVar1;
  return (int)spev_wrk.csr[1];
}

void SpecialEventDisp003(int no) {
	int i;
	static int next_count = 0;
	u_char ssd_tmp_col;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  byte bVar2;
  ulong *puVar3;
  uchar *puVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  uint bb;
  uint uVar8;
  uint uVar9;
  SPRT_SROT *pSVar10;
  SPRT_SSCL *pSVar11;
  uchar rr;
  SPRT_SDAT *ssd_00;
  char *pcVar12;
  int iVar13;
  SPRT_SSCL *pSVar14;
  SPRT_SSCL *pSVar15;
  byte *pbVar16;
  float pos_x;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar9);
  *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | DAT_0034ef58 >> (7 - uVar9) * 8;
  menu_sq0._0_8_ = DAT_0034ef58;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar9);
  *puVar3 = *puVar3 & -1L << (uVar9 + 1) * 8 | DAT_0034ef60 >> (7 - uVar9) * 8;
  menu_sq0._8_8_ = DAT_0034ef60;
  uVar9 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar9;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar9 + 1) * 8 | DAT_0034ef68 >> (7 - uVar9) * 8;
  menu_sq0._16_8_ = DAT_0034ef68;
  iVar13 = 0;
  SetSprFile(0x1e90000);
  ssd_00 = (SPRT_SDAT *)&spev03_sp_bak;
  do {
    SimpleDispSprt(ssd_00,0x1e90000,iVar13,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar13 = iVar13 + 1;
    ssd_00 = ssd_00 + 1;
  } while (iVar13 < 0xb);
  SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev03_sp_dla + (uint)spev_wrk.csr[0] * 0xe),&ssd_csr);
  iVar13 = CursorManagerEvent003();
  ssd_csr.alp = (uchar)iVar13;
  cVar6 = (&DAT_00328269)[(uint)spev_wrk.csr[0] + no * 0xe];
  if ((cVar6 == '\x01') || (cVar6 == '\x03')) {
    ssd_csr.u = 1;
    ssd_csr.v = 0x101;
  }
  else if (cVar6 == '\x02') {
    ssd_csr.v = 1;
    ssd_csr.u = 0xc4;
  }
  pSVar14 = (SPRT_SSCL *)&spev03_dla_scl;
  pSVar15 = (SPRT_SSCL *)&spev03_dol_scl;
  uVar9 = 0;
  pbVar16 = &evdl_dat + no * 0xe;
  pcVar12 = &DAT_00328269 + no * 0xe;
  iVar13 = 0;
  do {
    if (*pcVar12 != -1) {
      SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev03_sp_dol + iVar13),&ssd);
      cVar6 = *pcVar12;
      if ((cVar6 == '\x01') || (cVar6 == '\x03')) {
        uVar7 = 0x127;
LAB_001a5c30:
        ssd.u = uVar7;
      }
      else {
        uVar7 = 0x94;
        if (cVar6 == '\x02') goto LAB_001a5c30;
      }
      uVar8 = (uint)spev_wrk.mode;
      bb = 0x80;
      if (((uVar8 == 0x10) && (bb = (uint)spev_wrk.time, bb < 0xb)) &&
         (bVar5 = bb < 0xb, bb = 0x80, bVar5)) {
        bb = 10;
      }
      if (uVar8 == 0xd) {
        bb = 10;
      }
      if ((uVar8 - 0x15 < 2) && (*pbVar16 != uVar9)) {
        if (spev_wrk.time == '\0') {
          ssd.alp = '\0';
        }
        else {
          ssd.alp = spev_wrk.time;
        }
      }
      if (uVar8 - 0x17 < 2) {
        bVar2 = *pbVar16;
LAB_001a5cb8:
        if (bVar2 != uVar9) {
          ssd.alp = '\0';
        }
      }
      else if (uVar8 == 0xe) {
        bVar2 = *pbVar16;
        goto LAB_001a5cb8;
      }
      rr = (uchar)bb;
      if ((int)uVar9 < 6) {
        if (spev_wrk.csr[0] == uVar9) {
          if ((uVar9 & 0xff) < 6) {
            pSVar11 = pSVar14;
            if (*pcVar12 == '\x01') {
              pSVar10 = &spev03_dol_left;
            }
            else {
              pSVar10 = (SPRT_SROT *)0x0;
            }
          }
          else {
            if (*pcVar12 != '\x01') {
              SimpleDispSprt(&ssd_csr,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
              cVar6 = *pcVar12;
              goto LAB_001a5d5c;
            }
            pSVar10 = &spev03_dol_left;
            pSVar11 = (SPRT_SSCL *)0x0;
          }
          SimpleDispSprt(&ssd_csr,0x1e90000,0xc,pSVar10,pSVar11,'d');
          cVar6 = *pcVar12;
        }
        else {
          cVar6 = *pcVar12;
        }
LAB_001a5d5c:
        pSVar11 = pSVar15;
        if (cVar6 == '\x01') {
          pSVar10 = &spev03_dol_left;
        }
        else {
          pSVar10 = (SPRT_SROT *)0x0;
        }
      }
      else {
        if (spev_wrk.csr[0] == uVar9) {
          if ((uVar9 & 0xff) < 6) {
            pSVar11 = pSVar14;
            if (*pcVar12 == '\x01') {
              pSVar10 = &spev03_dol_left;
            }
            else {
              pSVar10 = (SPRT_SROT *)0x0;
            }
          }
          else {
            if (*pcVar12 != '\x01') {
              SimpleDispSprt(&ssd_csr,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
              cVar6 = *pcVar12;
              goto LAB_001a5e2c;
            }
            pSVar10 = &spev03_dol_left;
            pSVar11 = (SPRT_SSCL *)0x0;
          }
          SimpleDispSprt(&ssd_csr,0x1e90000,0xc,pSVar10,pSVar11,'d');
          cVar6 = *pcVar12;
        }
        else {
          cVar6 = *pcVar12;
        }
LAB_001a5e2c:
        if (cVar6 != '\x01') {
          SimpleDispSprtRGB(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',rr,rr,bb);
          goto LAB_001a5e88;
        }
        pSVar10 = &spev03_dol_left;
        pSVar11 = (SPRT_SSCL *)0x0;
      }
      SimpleDispSprtRGB(&ssd,0x1e90000,0xb,pSVar10,pSVar11,'d',rr,rr,bb);
    }
LAB_001a5e88:
    uVar9 = uVar9 + 1;
    pSVar15 = pSVar15 + 1;
    pSVar14 = pSVar14 + 1;
    iVar13 = iVar13 + 0xe;
    pcVar12 = pcVar12 + 1;
  } while ((int)uVar9 < 9);
  uVar9 = (uint)spev_wrk.mode;
  if (uVar9 == 6) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x1b);
    spev_str.pos_x = 0x78;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar9 = (uint)spev_wrk.mode;
  }
  if (uVar9 == 7) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x1b);
    spev_str.pos_x = 0x78;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar9 = (uint)spev_wrk.mode;
  }
  if (uVar9 == 8) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x1b);
    spev_str.pos_x = 0x78;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar9 = (uint)spev_wrk.mode;
  }
  if (uVar9 - 0xb < 2) {
    CopySqrDToSqr(&dsq,&spev_sq0);
    DispSqrD(&dsq);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x12);
    spev_str.pos_y = 0x159;
    spev_str.pos_x = 0xc3;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 0x140;
    spev_str.pos_y = 0x177;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.pos_x = 0xdc;
    spev_str.pos_y = 0x177;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (spev_wrk.mode == '\v') {
      pos_x = 200.0;
    }
    else {
      pos_x = 290.0;
    }
    YesNoCrslOKR(0x2000,pos_x,370.0,0x808080,100.0,1.5);
  }
  else {
    if (uVar9 != 0x17) goto LAB_001a6214;
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x14);
    spev_str.pos_x = 0xaa;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  if (spev_wrk.mode == '\x17') {
    ButtonMarkNext(0,0,1);
  }
LAB_001a6214:
  next_count_250 = next_count_250 + 1;
  if (0x50 < next_count_250) {
    next_count_250 = 0;
  }
  SimpleDispSprt((SPRT_SDAT *)&spev03_sp_cap,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  DrawButtonTex(0xa000,3,(float)(_spev04_cbt_pos + -6),(float)(int)DAT_00327792,0x80);
  DrawButtonTex(0xa000,1,(float)(DAT_00327794 + -6),(float)(int)DAT_00327796,0x80);
  return;
}

void ButsuzoPzlInit() {
	int i;
	
  bool bVar1;
  char *pcVar2;
  int iVar3;
  EV_BTZ_DAT *pEVar4;
  
  iVar3 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x37,0x1e90000);
    pzl_load_id = iVar3;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.csr[0] = '\0';
  spev_wrk.csr[1] = '\0';
  pEVar4 = evbtz_dat;
  spev_wrk.csr[2] = '\0';
  iVar3 = 0;
  spev_wrk.count = '\0';
  spev_wrk.mode = bVar1;
  do {
    pcVar2 = order_keep + iVar3;
    pEVar4->use_flg = 0;
    pEVar4->set_place = 0xffff;
    iVar3 = iVar3 + 1;
    *pcVar2 = -1;
    pEVar4 = pEVar4 + 1;
  } while (iVar3 < 5);
  order_no = '\0';
  evbld_dat.t_counter = 0;
  SpevStrInit();
  SetBlackOut();
  return;
}

void ButsuzoPzlMain() {
	int i;
	static int t_counter = 0;
	
  bool bVar1;
  char cVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  ushort uVar6;
  char *pcVar7;
  int iVar8;
  EV_BTZ_DAT *pEVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar4 = spev_wrk.csr[1];
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x37,0x1e90000);
    SeFileLoadAndSet(0x54e,2);
    pzl_load_id = -1;
    spev_wrk.mode = '\x01';
    spev_wrk.time = '(';
    break;
  case '\x01':
    if (spev_wrk.time != '\0') goto LAB_001a70f4;
    iVar8 = IsLoadEndAll();
    if (iVar8 == 0) break;
    SetSprFile(0x1e90000);
    spev_wrk.mode = '\x02';
    uVar11 = 0x54e;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    goto LAB_001a7124;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar8 = IsLoadEnd(pzl_load_id);
      if (iVar8 == 0) break;
      spev_wrk.mode = '\x03';
      spev_wrk.time = '(';
LAB_001a716c:
      pzl_load_id = -1;
      SetBlackIn();
      break;
    }
    goto LAB_001a70f4;
  case '\x03':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      break;
    }
    goto LAB_001a70f4;
  case '\x04':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    if (*key_now[4] == 1) {
      if (order_no == '\0') {
        spev_wrk.mode = '\x0f';
        spev_wrk.time = '<';
        SetBlackOut();
      }
      else {
        order_no = order_no + -1;
        cVar2 = order_keep[order_no];
        order_keep[order_no] = -1;
        evbtz_dat[cVar2].use_flg = 0;
        evbtz_dat[cVar2].set_place = 0xffff;
      }
      iVar8 = 3;
    }
    else if (*key_now[5] == 1) {
      if (evbtz_dat[spev_wrk.csr[0]].set_place == 0xffff) {
        spev_wrk.csr[1] = '\b';
      }
      else {
        spev_wrk.csr[1] = *(char *)&evbtz_dat[spev_wrk.csr[0]].set_place << 1;
      }
      spev_wrk.time = '\x14';
      spev_wrk.mode = '\x05';
      iVar8 = 0x21;
    }
    else if ((*key_now[3] == 1) ||
            ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
              (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 1)) ||
             ((uVar6 = Ana2PadDirCnt('\x01'), 0x19 < uVar6 &&
              (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 == 1)))))) {
      iVar12 = 1;
      iVar8 = spev_wrk.csr[0] + 1;
      do {
        if (evbtz_dat[iVar8 % 5].use_flg == 0) {
          spev_wrk.csr[0] = (uchar)(iVar8 % 5);
          spev_wrk.time = '\x14';
          iVar8 = 0;
          goto LAB_001a6fb8;
        }
        bVar1 = iVar12 == 6;
        iVar12 = iVar12 + 1;
        if (bVar1) {
          spev_wrk.mode = '\x05';
        }
        iVar8 = (uint)spev_wrk.csr[0] + iVar12;
      } while (iVar12 < 6);
      iVar8 = 0;
    }
    else {
      if ((((*key_now[2] != 1) &&
           (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
          (sVar5 = Ana2PadDirCnt('\x03'), sVar5 != 1)) &&
         ((uVar6 = Ana2PadDirCnt('\x03'), uVar6 < 0x1a ||
          (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 != 1)))) break;
      iVar12 = 1;
      pEVar9 = evbtz_dat + spev_wrk.csr[0];
      iVar8 = spev_wrk.csr[0] + 4;
      do {
        pEVar9 = pEVar9 + -1;
        if ((int)((uint)spev_wrk.csr[0] - iVar12) < 0) {
          if (evbtz_dat[iVar8].use_flg == 0) {
            spev_wrk.csr[0] = (uchar)iVar8;
            spev_wrk.time = '\x14';
            break;
          }
        }
        else if (pEVar9->use_flg == 0) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[0] = (uchar)((int)((uint)spev_wrk.csr[0] - iVar12) % 5);
          break;
        }
        iVar12 = iVar12 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar12 < 6);
      iVar8 = 0;
      if (iVar12 == 6) {
        spev_wrk.mode = '\x05';
      }
    }
    goto LAB_001a6fb8;
  case '\x05':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    if (*key_now[4] == 1) {
      uVar11 = (uint)spev_wrk.csr[0];
      evbtz_dat[spev_wrk.csr[0]].use_flg = 0;
      evbtz_dat[uVar11].set_place = 0xffff;
      spev_wrk.mode = '\x04';
      break;
    }
    if (*key_now[5] != 1) {
      if (((*key_now[0] == 1) ||
          (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar5 = Ana2PadDirCnt('\0'), sVar5 == 1)))) ||
         ((uVar6 = Ana2PadDirCnt('\0'), 0x19 < uVar6 &&
          (sVar5 = Ana2PadDirCnt('\0'), (int)sVar5 % 5 == 1)))) {
        uVar11 = spev_wrk.csr[1] + 2;
        if (uVar11 % 6 == 0) {
          uVar11 = (uint)spev_wrk.csr[0];
          uVar10 = spev_wrk.csr[1] - 4;
          goto LAB_001a6c88;
        }
        spev_wrk.csr[1] = (uchar)uVar11;
        evbtz_dat[spev_wrk.csr[0]].set_place = (ushort)((uVar11 & 0xff) >> 1);
      }
      else {
        if (((*key_now[1] == 1) ||
            ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
           ((sVar5 = Ana2PadDirCnt('\x02'), sVar5 == 1 ||
            ((uVar6 = Ana2PadDirCnt('\x02'), 0x19 < uVar6 &&
             (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 == 1)))))) {
          if ((uint)spev_wrk.csr[1] % 6 == 0) {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] + 4;
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 2;
          }
        }
        else if (((*key_now[2] == 1) ||
                 (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                  (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)))) ||
                ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
                 (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))) {
          if (spev_wrk.csr[1] < 5) {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] + 0xc;
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 6;
          }
        }
        else {
          if (((*key_now[3] != 1) &&
              (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
             ((sVar5 = Ana2PadDirCnt('\x01'), sVar5 != 1 &&
              ((uVar6 = Ana2PadDirCnt('\x01'), uVar6 < 0x1a ||
               (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 != 1)))))) break;
          if (spev_wrk.csr[1] < 0xb) {
            uVar10 = spev_wrk.csr[1] + 6;
            uVar11 = (uint)spev_wrk.csr[0];
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 0xc;
          }
        }
LAB_001a6c88:
        evbtz_dat[uVar11].set_place = (ushort)((uVar10 & 0xff) >> 1);
        spev_wrk.csr[1] = (uchar)uVar10;
      }
      spev_wrk.time = '\x14';
      break;
    }
    uVar11 = 0;
    if ((long)(short)evbtz_dat[0].set_place == (long)(int)(uint)(spev_wrk.csr[1] >> 1)) {
      if (spev_wrk.csr[0] == '\0') {
        uVar11 = 1;
        goto LAB_001a68a0;
      }
    }
    else {
      uVar11 = 1;
LAB_001a68a0:
      while ((int)uVar11 < 5) {
        if ((long)(short)evbtz_dat[uVar11].set_place == (long)(int)(uint)(spev_wrk.csr[1] >> 1)) {
          if (uVar11 != spev_wrk.csr[0]) break;
          uVar11 = uVar11 + 1;
        }
        else {
          uVar11 = uVar11 + 1;
        }
      }
    }
    if (uVar11 != 5) {
      evbtz_dat[spev_wrk.csr[0]].set_place = 0xffff;
      spev_wrk.mode = '\t';
      spev_wrk.time = '<';
      break;
    }
    uVar11 = (uint)spev_wrk.csr[0];
    evbtz_dat[spev_wrk.csr[0]].use_flg = 1;
    evbtz_dat[uVar11].set_place = (ushort)(uVar4 >> 1);
    uVar6 = evbtz_dat[0].use_flg;
    iVar8 = (int)order_no;
    order_no = order_no + '\x01';
    order_keep[iVar8] = spev_wrk.csr[0];
    spev_wrk.mode = '\b';
    spev_wrk.time = '(';
    iVar12 = 0;
    if (uVar6 == 0) {
      spev_wrk.csr[0] = '\0';
    }
    else {
      for (iVar12 = 1; iVar12 < 5; iVar12 = iVar12 + 1) {
        if (evbtz_dat[iVar12].use_flg == 0) {
          spev_wrk.csr[0] = (uchar)iVar12;
          break;
        }
      }
    }
    iVar8 = 0x22;
    if (iVar12 == 5) {
      spev_wrk.mode = '\n';
    }
LAB_001a6fb8:
    SeStartFix(iVar8,0,0x1000,0x1000,0);
    break;
  case '\x06':
  case '\a':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\x05';
      spev_wrk.time = '\x14';
    }
    if (((((*key_now[3] == 1) ||
          ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 1)) ||
           ((uVar6 = Ana2PadDirCnt('\x01'), 0x19 < uVar6 &&
            (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 == 1)))))) || (*key_now[2] == 1)) ||
        (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
         ((sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1 ||
          ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
           (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))))))) &&
       (bVar1 = spev_wrk.mode == '\x06', spev_wrk.mode = '\x06', bVar1)) {
      spev_wrk.mode = '\a';
    }
    if (spev_wrk.time == '\0') {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x05';
      if (bVar1) {
        uVar11 = (uint)spev_wrk.csr[0];
        bVar3 = spev_wrk.csr[1] >> 1;
        evbtz_dat[spev_wrk.csr[0]].use_flg = 1;
        evbtz_dat[uVar11].set_place = (ushort)bVar3;
        uVar6 = evbtz_dat[0].use_flg;
        order_keep[order_no] = spev_wrk.csr[0];
        order_no = order_no + '\x01';
        spev_wrk.mode = '\b';
        spev_wrk.time = '(';
        iVar8 = 0;
        if (uVar6 == 0) {
          spev_wrk.csr[0] = '\0';
        }
        else {
          for (iVar8 = 1; iVar8 < 5; iVar8 = iVar8 + 1) {
            if (evbtz_dat[iVar8].use_flg == 0) {
              spev_wrk.csr[0] = (uchar)iVar8;
              break;
            }
          }
        }
        if (iVar8 == 5) {
          spev_wrk.mode = '\n';
        }
      }
      else {
        spev_wrk.time = '\x14';
      }
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      break;
    }
    goto LAB_001a70f4;
  case '\t':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      iVar8 = 0;
      if (evbtz_dat[0].set_place == evbtz_ans[0].set_place) {
        for (iVar8 = 1; (iVar8 < 5 && (evbtz_dat[iVar8].set_place == evbtz_ans[iVar8].set_place));
            iVar8 = iVar8 + 1) {
        }
      }
      spev_wrk.mode = '\f';
      if (iVar8 != 5) {
        spev_wrk.time = 'P';
        break;
      }
      spev_wrk.time = 'P';
      spev_wrk.mode = '\r';
      iVar8 = 0x23;
      goto LAB_001a6fb8;
    }
    goto LAB_001a70f4;
  case '\f':
    iVar8 = ButtonMarkNext(-0xb4,8,1);
    if (iVar8 != 0) {
      spev_wrk.time = '\0';
    }
    if ((spev_wrk.time == '\0') && (iVar8 = ButtonMarkWait(), iVar8 == 0)) {
      spev_wrk.time = '\x14';
      pEVar9 = evbtz_dat;
      spev_wrk.csr[0] = '\0';
      iVar8 = 0;
      spev_wrk.csr[1] = '\0';
      spev_wrk.count = '\0';
      order_no = '\0';
      do {
        pcVar7 = order_keep + iVar8;
        pEVar9->use_flg = 0;
        pEVar9->set_place = 0xffff;
        iVar8 = iVar8 + 1;
        *pcVar7 = -1;
        pEVar9 = pEVar9 + 1;
      } while (iVar8 < 5);
      spev_wrk.mode = '\x04';
    }
    break;
  case '\r':
    iVar8 = ButtonMarkNext(-0xb4,0,1);
    if (iVar8 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\x0f';
      spev_wrk.time = '<';
      SetBlackOut();
    }
    break;
  case '\x0f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      break;
    }
LAB_001a70f4:
    spev_wrk.time = spev_wrk.time + 0xff;
    break;
  case '\x10':
    if (pzl_load_id != -1) {
      iVar8 = IsLoadEnd(pzl_load_id);
      if (iVar8 == 0) break;
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a716c;
    }
    uVar11 = 0x549;
LAB_001a7124:
    pzl_load_id = SeFileLoadAndSet(uVar11,2);
  }
  evbld_dat.t_counter = evbld_dat.t_counter + 1;
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\x10')) {
    SpecialEventDisp004();
    return;
  }
  return;
}

u_char BldAlpRetern(short int time_cnt, short int bld_appear, short int bld_end, short int bld_alp) {
	int tmp_alp;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(short)time_cnt;
  iVar2 = (int)(short)bld_appear;
  iVar1 = (int)(short)bld_end;
  iVar4 = (int)(short)bld_alp;
  iVar3 = 0;
  if (((iVar2 < iVar5) && (iVar3 = iVar4, iVar5 < iVar1)) && (iVar1 != 0)) {
    if (iVar1 - iVar2 == 0) {
      trap(7);
    }
    iVar3 = ((iVar4 << 0xc) / (iVar1 - iVar2)) * (iVar5 - iVar2);
    iVar1 = iVar3 + 0xfff;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = iVar1 >> 0xc;
  }
  return (uchar)iVar3;
}

void SpecialEventDisp004() {
	int i;
	int msg_no;
	static u_char blink_flg = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd2;
	SPRT_SDAT ssd3;
	SPRT_SDAT ssd4;
	DISP_SQAR dsq;
	DISP_STR ds;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  uchar *puVar5;
  int iVar6;
  SPRT_SDAT *pSVar7;
  ushort *puVar8;
  SPRT_SSCL *sscl;
  int iVar9;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd2;
  SPRT_SDAT ssd3;
  SPRT_SDAT ssd4;
  DISP_SQAR dsq;
  DISP_STR ds;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034efb8 >> (7 - uVar3) * 8;
  menu_sq0._0_8_ = DAT_0034efb8;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034efc0 >> (7 - uVar3) * 8;
  menu_sq0._8_8_ = DAT_0034efc0;
  uVar3 = (uint)&menu_sq0.alpha & 7;
  puVar5 = &menu_sq0.alpha + -uVar3;
  *(ulong *)puVar5 = *(ulong *)puVar5 & -1L << (uVar3 + 1) * 8 | DAT_0034efc8 >> (7 - uVar3) * 8;
  menu_sq0._16_8_ = DAT_0034efc8;
  iVar9 = 0;
  SetSprFile(0x1e90000);
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bk0;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,iVar9,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar9 = iVar9 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar9 < 3);
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bk1;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,3,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar7 = pSVar7 + 1;
  } while ((int)pSVar7 < 0x3275c2);
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bk2;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,4,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar7 = pSVar7 + 1;
  } while ((int)pSVar7 < 0x3275f2);
  iVar9 = 0;
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bk3;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,iVar9 + 5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar9 = iVar9 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar9 < 3);
  puVar8 = &evbtz_dat[0].set_place;
  sscl = (SPRT_SSCL *)&spev04_bd1_scl;
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bd1;
  iVar9 = 4;
  do {
    if (((EV_BTZ_DAT *)(puVar8 + -1))->use_flg == 0) {
      SimpleDispSprt(pSVar7,0x1e90000,8,(SPRT_SROT *)0x0,sscl,'d');
    }
    else {
      SimpleDispSprtDatCopy(pSVar7,&ssd);
      uVar2 = *puVar8;
      iVar6 = (short)uVar2 * 8;
      ssd.y = *(short *)(&DAT_003279c2 + iVar6) - 0x12e;
      ssd.x = *(short *)(&spev04_bz2_scl + iVar6) - 0x2e;
      if ((int)(short)uVar2 % 3 == 0) {
        ssd.pri = '#';
      }
      else {
        ssd.pri = '_';
        if (((short)uVar2 + 2) % 3 == 0) {
          ssd.pri = 'A';
        }
      }
      SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,
                     (SPRT_SSCL *)(&spev04_bz2_scl + (short)*puVar8 * 8),'d');
    }
    puVar8 = puVar8 + 2;
    sscl = sscl + 1;
    iVar9 = iVar9 + -1;
    pSVar7 = pSVar7 + 1;
  } while (-1 < iVar9);
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_0032770c,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[6],evbld_dat.bld_end[6],
                         (ushort)DAT_00327719);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_003276fe,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[5],evbld_dat.bld_end[5],
                         (ushort)DAT_0032770b);
  SimpleDispSprt(&ssd,0x1e90000,8,&spev03_dol_left,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_003276f0,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[4],evbld_dat.bld_end[4],
                         (ushort)DAT_003276fd);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_003276e2,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[3],evbld_dat.bld_end[3],
                         (ushort)DAT_003276ef);
  SimpleDispSprt(&ssd,0x1e90000,8,&spev03_dol_left,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_003276d4,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[2],evbld_dat.bld_end[2],
                         (ushort)DAT_003276e1);
  SimpleDispSprt(&ssd,0x1e90000,8,&spev03_dol_left,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_003276c6,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[1],evbld_dat.bld_end[1],
                         (ushort)DAT_003276d3);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_bld,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[0],evbld_dat.bld_end[0],
                         (ushort)DAT_003276c5);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_0032771a,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[7],evbld_dat.bld_end[7],
                         (ushort)DAT_00327727);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327728,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[8],evbld_dat.bld_end[8],
                         (ushort)DAT_00327735);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327736,&ssd);
  ssd.alp = BldAlpRetern(evbld_dat.t_counter,evbld_dat.bld_apr[9],evbld_dat.bld_end[9],
                         (ushort)DAT_00327743);
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  if (spev_wrk.mode == '\x05') {
    CsrBlink(spev_wrk.csr + 2,0x80,'\0','\x03',&blink_flg_264);
    SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev04_sp_sel + (uint)spev_wrk.csr[1] * 0xe),&ssd);
    SimpleDispSprtDatCopy((SPRT_SDAT *)((uint)spev_wrk.csr[1] * 0xe + 0x3278a6),&ssd2);
    SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev04_sp_slf + (uint)spev_wrk.csr[1] * 0xe),&ssd3);
    ssd3.alp = spev_wrk.csr[2];
    SimpleDispSprtDatCopy((SPRT_SDAT *)((uint)spev_wrk.csr[1] * 0xe + 0x3277a6),&ssd4);
    ssd4.alp = spev_wrk.csr[2];
    if (spev_wrk.csr[1] < 0xc) {
      SimpleDispSprt(&ssd3,0x1e90000,8,(SPRT_SROT *)0x0,
                     (SPRT_SSCL *)(&spev04_sel_scl2 + (uint)(spev_wrk.csr[1] >> 1) * 8),'d');
      SimpleDispSprt(&ssd4,0x1e90000,8,(SPRT_SROT *)0x0,
                     (SPRT_SSCL *)(&spev04_sel_scl2 + (uint)(spev_wrk.csr[1] >> 1) * 8),'d');
    }
    else {
      SimpleDispSprt(&ssd3,0x1e90000,8,&spev03_dol_left,
                     (SPRT_SSCL *)(&spev04_sel_scl2 + (uint)(spev_wrk.csr[1] >> 1) * 8),'d');
      SimpleDispSprt(&ssd4,0x1e90000,8,&spev03_dol_left,
                     (SPRT_SSCL *)(&spev04_sel_scl2 + (uint)(spev_wrk.csr[1] >> 1) * 8),'d');
    }
  }
  if (evbtz_dat[spev_wrk.csr[0]].use_flg == 1) goto LAB_001a795c;
  SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev04_sp_bzf + (uint)spev_wrk.csr[0] * 0xe),&ssd);
  if (spev_wrk.mode == '\x03') {
LAB_001a7938:
    ssd.alp = '\0';
  }
  else if (spev_wrk.mode == '\x04') {
    ssd.alp = (uchar)((int)((0x14 - (uint)spev_wrk.time) * (uint)ssd.alp) / 0x14);
  }
  else if (spev_wrk.mode != '\x05') goto LAB_001a7938;
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
LAB_001a795c:
  SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev04_sp_bd1 + (uint)spev_wrk.csr[0] * 0xe),&ssd);
  ssd.pri = '\x14';
  ssd.x = 0x1d0;
  ssd.y = 0x1c;
  SimpleDispSprt(&ssd,0x1e90000,8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  pSVar7 = (SPRT_SDAT *)&spev04_sp_bd2;
  do {
    SimpleDispSprt(pSVar7,0x1e90000,9,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar7 = pSVar7 + 1;
  } while ((int)pSVar7 < 0x327a7a);
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cpt,&ssd);
  ssd.w = ssd.w - 0x18;
  ssd.u = ssd.u + 0xc;
  ssd.x = ssd.x + 0xc;
  SimpleDispSprt(&ssd,0x1e90000,10,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cap,&ssd);
  ssd.x = 0x1d6;
  ssd.y = 0x157;
  SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  if (spev_wrk.mode == '\x05') {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cap,&ssd);
    ssd.v = ssd.v + 0x1b;
    ssd.y = 0x170;
    ssd.w = ssd.w + 0x50;
    ssd.x = 0x1d6;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  }
  else {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cap,&ssd);
    ssd.v = ssd.v + 100;
    ssd.y = 0x16b;
    ssd.w = ssd.w + 0x50;
    ssd.x = 0x1d6;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  }
  if (order_no == '\0') {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cap,&ssd);
    ssd.v = ssd.v + 0x36;
    ssd.x = 0x1d6;
    ssd.w = ssd.w + 0x50;
    ssd.y = 0x189;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  }
  else {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&spev04_sp_cap,&ssd);
    ssd.v = ssd.v + 0x50;
    ssd.x = 0x1d6;
    ssd.w = ssd.w + 0x50;
    ssd.y = 0x18b;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  }
  DrawButtonTex(0xa000,3,(float)(int)_spev04_cbt_pos,(float)(int)DAT_00327792,'d');
  DrawButtonTex(0xa000,1,(float)(int)DAT_00327794,(float)(int)DAT_00327796,'d');
  CopySqrDToSqr(&dsq,&menu_sq0);
  DispSqrD(&dsq);
  DrawMessageBox(0x2000,7.0,DAT_00355d08,428.0,96.0,0x7f);
  if (spev_wrk.mode == '\x04') {
    if (spev_wrk.csr[0] == '\0') {
      iVar9 = 0x37;
    }
    else if (spev_wrk.csr[0] == '\x01') {
      iVar9 = 0x39;
    }
    else {
      iVar9 = 0x3a;
      if ((spev_wrk.csr[0] != '\x02') && (iVar9 = 0x36, spev_wrk.csr[0] == '\x03')) {
        iVar9 = 0x38;
      }
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',iVar9);
    spev_str.pos_y = 0x15e;
  }
  else if (spev_wrk.mode == '\x05') {
    if (spev_wrk.csr[0] == '\0') {
      iVar9 = 0x37;
    }
    else if (spev_wrk.csr[0] == '\x01') {
      iVar9 = 0x39;
    }
    else {
      iVar9 = 0x3a;
      if ((spev_wrk.csr[0] != '\x02') && (iVar9 = 0x36, spev_wrk.csr[0] == '\x03')) {
        iVar9 = 0x38;
      }
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',iVar9);
    spev_str.pos_y = 0x15e;
  }
  else {
    if ((byte)(spev_wrk.mode - 6) < 2) {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x35);
      spev_str.pos_x = 100;
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
      spev_str.pos_x = 0x82;
      spev_str.pos_y = 0x172;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
      spev_str.pos_x = 0xdc;
      spev_str.pos_y = 0x172;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      if (spev_wrk.mode == '\x06') {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x83);
        spev_str.pos_x = 0x6e;
      }
      else {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x83);
        spev_str.pos_x = 200;
      }
      spev_str.pos_y = 0x172;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      return;
    }
    if (spev_wrk.mode == '\t') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x32);
      spev_str.pos_y = 0x15e;
    }
    else {
      if (spev_wrk.mode != '\f') {
        if (spev_wrk.mode != '\r') {
          return;
        }
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x31);
        spev_str.pos_x = 0x1e;
        spev_str.pos_y = 0x15e;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
        return;
      }
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x30);
      spev_str.pos_y = 0x15b;
    }
  }
  spev_str.pos_x = 0x1e;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  return;
}

void ButsuzoMSGInit() {
  LoadReq(0x37,0x1e90000);
  pzl_load_id = -1;
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  butsuzo_alpha[1] = '\0';
  SetBlackOut();
  return;
}

void ButsuzoMSGMain() {
  byte bVar1;
  int iVar2;
  uint file_no;
  
  switch(spev_wrk.mode) {
  case '\x01':
    if (spev_wrk.time != '\0') break;
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) goto switchD_001a7fa0_caseD_4;
    SetSprFile(0x1e90000);
    spev_wrk.mode = '\x02';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    SetBlackIn();
    file_no = 0x5e9;
    iVar2 = 0x15;
    goto LAB_001a8100;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar2 = IsLoadEnd(pzl_load_id);
      if (iVar2 != 0) {
        spev_wrk.time = '(';
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        SeStartFix(0x5d,0,0x1000,0x1000,0);
      }
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\b';
      spev_wrk.time = '\x01';
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  default:
    goto switchD_001a7fa0_caseD_4;
  case '\b':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = '<';
      SetBlackOut();
    }
    goto switchD_001a7fa0_caseD_4;
  case '\x0f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  case '\x10':
    iVar2 = 2;
    if (pzl_load_id != -1) {
      iVar2 = IsLoadEnd(pzl_load_id);
      if (iVar2 != 0) {
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        pzl_load_id = -1;
        event_stts[ev_wrk.evt_no] = '\x01';
        spev_wrk.ret = '\x01';
        SetBlackIn();
      }
      goto switchD_001a7fa0_caseD_4;
    }
    file_no = 0x549;
LAB_001a8100:
    pzl_load_id = SeFileLoadAndSet(file_no,iVar2);
    goto switchD_001a7fa0_caseD_4;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a7fa0_caseD_4:
  if (spev_wrk.mode == '\b') {
    bVar1 = butsuzo_alpha[1] + 6;
    if ((-1 < (char)butsuzo_alpha[1]) && (butsuzo_alpha[1] = bVar1, (int)((uint)bVar1 << 0x18) < 0))
    {
      butsuzo_alpha[1] = 0x80;
    }
  }
  else if ((6 < butsuzo_alpha[1]) && (butsuzo_alpha[1] = butsuzo_alpha[1] - 6, butsuzo_alpha[1] < 7)
          ) {
    butsuzo_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ButsuzoMSGDisp();
    return;
  }
  return;
}

void ButsuzoMSGDisp() {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  SPRT_SDAT *pSVar6;
  SPRT_SSCL *sscl;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ef58 >> (7 - uVar2) * 8;
  menu_sq0._0_8_ = DAT_0034ef58;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ef60 >> (7 - uVar2) * 8;
  menu_sq0._8_8_ = DAT_0034ef60;
  uVar2 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034ef68 >> (7 - uVar2) * 8;
  menu_sq0._16_8_ = DAT_0034ef68;
  iVar5 = 0;
  SetSprFile(0x1e90000);
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bk0;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,iVar5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar5 = iVar5 + 1;
    pSVar6 = pSVar6 + 1;
  } while (iVar5 < 3);
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bk1;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,3,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar6 = pSVar6 + 1;
  } while ((int)pSVar6 < 0x3275c2);
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bk2;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,4,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar6 = pSVar6 + 1;
  } while ((int)pSVar6 < 0x3275f2);
  iVar5 = 0;
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bk3;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,iVar5 + 5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar5 = iVar5 + 1;
    pSVar6 = pSVar6 + 1;
  } while (iVar5 < 3);
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bd2;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,9,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    pSVar6 = pSVar6 + 1;
  } while ((int)pSVar6 < 0x327a7a);
  sscl = (SPRT_SSCL *)&spev04_bd1_scl;
  pSVar6 = (SPRT_SDAT *)&spev04_sp_bd1;
  iVar5 = 4;
  do {
    SimpleDispSprt(pSVar6,0x1e90000,8,(SPRT_SROT *)0x0,sscl,'d');
    sscl = sscl + 1;
    iVar5 = iVar5 + -1;
    pSVar6 = pSVar6 + 1;
  } while (-1 < iVar5);
  DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,butsuzo_alpha[1]);
  spev_str.str = (char *)GetIngameMSGAddr('\a',0x57);
  spev_str.pos_x = 0x32;
  spev_str.pos_y = 0x15e;
  spev_str.alpha = (int)butsuzo_alpha[1];
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  return;
}

void LightsOutInit() {
	int i;
	
  bool bVar1;
  ushort uVar2;
  EV_CDL_DAT *pEVar3;
  int iVar4;
  
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x38,0x1e90000);
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.count = '\0';
  spev_wrk.mode = bVar1;
  CsrClearAll();
  iVar4 = 5;
  pEVar3 = &evcdl_dat;
  do {
    uVar2 = pEVar3->cdl_flg[1][0];
    iVar4 = iVar4 + -1;
    pEVar3->flame_time[0] = 0;
    pEVar3->cdl_flg[0] = uVar2;
    pEVar3->flame_alpha[0] = 0;
    pEVar3->stflame_alpha[0] = 0;
    pEVar3->stflame_time[0] = 0;
    pEVar3->stflame_shape[0] = 0;
    pEVar3 = (EV_CDL_DAT *)(pEVar3->cdl_flg + 1);
  } while (-1 < iVar4);
  SetBlackOut();
  return;
}

void LightsOutMain() {
	int no;
	int i;
	
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  EV_CDL_DAT *pEVar7;
  ushort *puVar8;
  uint file_no;
  EV_CDL_DAT *pEVar9;
  short *psVar10;
  
  bVar3 = spev_wrk.csr[0];
  uVar2 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x38,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar6 = IsLoadEndAll();
      if (iVar6 == 0) goto switchD_001a8540_caseD_e;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      file_no = 0x54f;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      goto LAB_001a8be0;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar6 = IsLoadEnd(pzl_load_id);
      if (iVar6 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        spev_wrk.time = '\x1e';
        SetBlackIn();
      }
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar6 = CsrInclease(spev_wrk.csr + 1,'T','\x04');
      if (iVar6 != 0) {
        spev_wrk.time = '(';
        spev_wrk.mode = '\x04';
      }
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x04':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    CsrInclease(spev_wrk.csr + 1,'T','\x04');
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\f';
      spev_wrk.time = '(';
      SetBlackOut();
      goto switchD_001a8540_caseD_e;
    }
    if (*key_now[7] == 1) {
      iVar6 = 5;
      pEVar7 = &evcdl_dat;
      do {
        iVar6 = iVar6 + -1;
        pEVar7->cdl_flg[0] = pEVar7->cdl_flg[1][0];
        pEVar7 = (EV_CDL_DAT *)(pEVar7->cdl_flg + 1);
      } while (-1 < iVar6);
      spev_wrk.time = '\x14';
      spev_wrk.mode = '\a';
      iVar6 = 3;
    }
    else if (*key_now[5] == 1) {
      if (evcdl_dat.flame_alpha[spev_wrk.csr[0] - 0x12] != 0) goto switchD_001a8540_caseD_e;
      evcdl_dat.flame_alpha[spev_wrk.csr[0] - 0x12] = 1;
      iVar6 = 0x21;
      spev_wrk.mode = '\x05';
      spev_wrk.time = '\x1e';
    }
    else if ((*key_now[3] == 1) ||
            ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
              (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
             ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
              (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))))) {
      spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
      if (spev_wrk.csr[0] == '\x06') {
        spev_wrk.csr[0] = '\0';
      }
      CsrClear(spev_wrk.csr + 1);
      iVar6 = 0;
    }
    else {
      if ((((*key_now[2] != 1) &&
           (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
          (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
         ((uVar5 = Ana2PadDirCnt('\x03'), uVar5 < 0x1a ||
          (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 != 1)))) goto switchD_001a8540_caseD_e;
      bVar1 = spev_wrk.csr[0] == '\0';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
      if (bVar1) {
        spev_wrk.csr[0] = '\x05';
      }
      CsrClear(spev_wrk.csr + 1);
      iVar6 = 0;
    }
LAB_001a8a9c:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    goto switchD_001a8540_caseD_e;
  case '\x05':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      CsrInclease(spev_wrk.csr + 1,'T','\x04');
      goto switchD_001a8540_caseD_e;
    }
    if (spev_wrk.csr[0] == '\0') {
      puVar8 = evcdl_dat.cdl_flg + 1;
      if (evcdl_dat.cdl_flg[0][1] == 0) {
LAB_001a8910:
        *puVar8 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
      }
      else {
        evcdl_dat.cdl_flg[0][1] = 0;
      }
    }
    else if (spev_wrk.csr[0] == '\x05') {
      puVar8 = evcdl_dat.cdl_flg + 4;
      if (evcdl_dat.cdl_flg[0][4] == 0) goto LAB_001a8910;
      evcdl_dat.cdl_flg[0][4] = 0;
    }
    else {
      puVar8 = evcdl_dat.cdl_flg + spev_wrk.csr[0] + 1;
      if (*puVar8 == 0) {
        *puVar8 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
        bVar3 = spev_wrk.csr[0];
      }
      else {
        *puVar8 = 0;
      }
      psVar10 = (short *)((int)evcdl_dat.cdl_flg[-1] + (uint)bVar3 * 2 + 10);
      if (*psVar10 == 0) {
        *psVar10 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
      }
      else {
        *psVar10 = 0;
      }
    }
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\x06';
    goto switchD_001a8540_caseD_e;
  case '\x06':
    if (spev_wrk.time != '\0') {
      CsrInclease(spev_wrk.csr + 1,'T','\x04');
      spev_wrk.time = spev_wrk.time + 0xff;
      goto switchD_001a8540_caseD_e;
    }
    iVar6 = 0;
    if (evcdl_dat.cdl_flg[0][0] == evcdl_dat.cdl_flg[2][0]) {
      iVar6 = 1;
      pEVar7 = &evcdl_dat;
      while ((pEVar9 = (EV_CDL_DAT *)(pEVar7->cdl_flg + 1), iVar6 < 6 &&
             (pEVar9->cdl_flg[0] == pEVar7->cdl_flg[2][1]))) {
        iVar6 = iVar6 + 1;
        pEVar7 = pEVar9;
      }
    }
    if (iVar6 == 6) {
      spev_wrk.time = '\b';
      spev_wrk.mode = '\b';
      goto switchD_001a8540_caseD_e;
    }
LAB_001a8a64:
    spev_wrk.time = '(';
    spev_wrk.mode = '\x04';
    goto switchD_001a8540_caseD_e;
  case '\a':
    if (spev_wrk.time == '\0') goto LAB_001a8a64;
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '<';
      spev_wrk.mode = '\t';
      iVar6 = 0x22;
      goto LAB_001a8a9c;
    }
    break;
  case '\t':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 0xff;
      pzl_load_id = SeStartFix(0x23,0,0x1000,0x1000,0);
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\n':
    iVar6 = ButtonMarkNext(0,0,0);
    if (iVar6 != 0) {
      if (spev_wrk.time != '\0') {
        spev_wrk.time = spev_wrk.time + 0xff;
      }
      bVar3 = IsEndSe(pzl_load_id);
      if ((bVar3 != 0) || (spev_wrk.time == '\0')) {
        pzl_load_id = -1;
        ButtonMarkTimeClear();
        event_stts[ev_wrk.evt_no] = '\x01';
        spev_wrk.mode = '\v';
        spev_wrk.time = '(';
        SetBlackOut();
      }
    }
    goto switchD_001a8540_caseD_e;
  case '\v':
    if (spev_wrk.time == '\0') {
      ReqDramaCamera('\x01',0xd,0);
      spev_wrk.mode = '\r';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\r';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\r':
    if (pzl_load_id != -1) {
      iVar6 = IsLoadEnd(pzl_load_id);
      if (iVar6 != 0) {
        SendManMdlTex();
        spev_wrk.ret = '\x01';
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SetBlackIn();
      }
      goto switchD_001a8540_caseD_e;
    }
    file_no = 0x549;
LAB_001a8be0:
    pzl_load_id = SeFileLoadAndSet(file_no,2);
  default:
    goto switchD_001a8540_caseD_e;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a8540_caseD_e:
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\r')) {
    SpecialEventDisp014((uint)uVar2);
    return;
  }
  return;
}

void SpecialEventDisp014(int no) {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ushort uVar2;
  short sVar3;
  ulong *puVar4;
  uchar *puVar5;
  uchar uVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  SPRT_SDAT *pSVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  iVar13 = 0;
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar10 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar10);
  *puVar4 = *puVar4 & -1L << (uVar10 + 1) * 8 | DAT_0034f048 >> (7 - uVar10) * 8;
  menu_sq0._0_8_ = DAT_0034f048;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar10 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar10);
  *puVar4 = *puVar4 & -1L << (uVar10 + 1) * 8 | DAT_0034f050 >> (7 - uVar10) * 8;
  menu_sq0._8_8_ = DAT_0034f050;
  uVar10 = (uint)&menu_sq0.alpha & 7;
  puVar5 = &menu_sq0.alpha + -uVar10;
  *(ulong *)puVar5 = *(ulong *)puVar5 & -1L << (uVar10 + 1) * 8 | DAT_0034f058 >> (7 - uVar10) * 8;
  menu_sq0._16_8_ = DAT_0034f058;
  iVar9 = 0;
  SetSprFile(0x1e90000);
  puVar12 = evcdl_dat.flame_time;
  do {
    iVar7 = rand();
    if (iVar7 % 10 == 6) {
      iVar7 = iVar9 << 1;
    }
    else {
      *puVar12 = *puVar12 + 1;
      iVar7 = iVar13;
    }
    if (*puVar12 == 5) {
      *puVar12 = 0;
      psVar8 = (short *)((int)evcdl_dat.flame_shape + iVar7);
      sVar3 = *psVar8;
      *psVar8 = sVar3 + 1;
      if (6 < (short)(sVar3 + 1)) {
        *psVar8 = 0;
      }
    }
    uVar6 = spev_wrk.mode;
    iVar9 = iVar9 + 1;
    puVar12 = puVar12 + 1;
    iVar13 = iVar13 + 2;
  } while (iVar9 < 6);
  puVar12 = evcdl_dat.flame_alpha;
  iVar9 = 5;
  do {
    uVar2 = ((EV_CDL_DAT *)(puVar12 + -0x12))->cdl_flg[0];
    if ((short)uVar2 < 1) {
      if (uVar6 == '\b') {
        iVar13 = (int)(short)*puVar12;
        goto LAB_001a8dec;
      }
      if (uVar6 == '\t') {
        iVar13 = (int)(short)*puVar12;
        goto LAB_001a8dec;
      }
      if (uVar6 == '\n') {
        iVar13 = (int)(short)*puVar12;
        goto LAB_001a8dec;
      }
      if (uVar6 == '\v') {
        iVar13 = (int)(short)*puVar12;
        goto LAB_001a8dec;
      }
      if (uVar2 == 0) {
        if ((short)*puVar12 + -10 < 0) {
          *puVar12 = 0;
        }
        else {
          *puVar12 = *puVar12 - 10;
        }
      }
    }
    else {
      iVar13 = (int)(short)*puVar12;
LAB_001a8dec:
      if (iVar13 + 10 < 0x81) {
        *puVar12 = *puVar12 + 10;
      }
      else {
        *puVar12 = 0x80;
      }
    }
    iVar9 = iVar9 + -1;
    puVar12 = puVar12 + 1;
  } while (-1 < iVar9);
  if (((byte)(uVar6 - 9) < 3) && (evcdl_dat.stflame_shape[0] != 0xffff)) {
    puVar14 = evcdl_dat.stflame_shape;
    puVar12 = evcdl_dat.stflame_time;
    do {
      *puVar12 = *puVar12 + 1;
      if ((short)puVar12[-0x12] + 10 < 0x81) {
        puVar12[-0x12] = puVar12[-0x12] + 10;
      }
      else {
        puVar12[-0x12] = 0x80;
      }
      if (*puVar12 == 5) {
        *puVar12 = 0;
        uVar2 = *puVar14;
        *puVar14 = uVar2 + 1;
        if (0xe < (short)(uVar2 + 1)) {
          evcdl_dat.stflame_shape[0] = 0xffff;
          break;
        }
      }
      puVar14 = puVar14 + 1;
      puVar12 = puVar12 + 1;
    } while ((int)puVar14 < 0x3283bc);
  }
  else {
    iVar9 = 5;
    puVar12 = evcdl_dat.stflame_alpha;
    do {
      if ((short)*puVar12 + -10 < 1) {
        *puVar12 = 0;
      }
      else {
        *puVar12 = *puVar12 - 10;
      }
      iVar9 = iVar9 + -1;
      puVar12 = puVar12 + 1;
    } while (-1 < iVar9);
  }
  iVar9 = 0;
  pSVar11 = (SPRT_SDAT *)&spev20_sp_bak;
  do {
    SimpleDispSprt(pSVar11,0x1e90000,iVar9,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar9 = iVar9 + 1;
    pSVar11 = pSVar11 + 1;
  } while (iVar9 < 0xb);
  pSVar11 = (SPRT_SDAT *)&spev20_sp_cla;
  puVar12 = evcdl_dat.flame_alpha;
  iVar9 = 5;
  do {
    SimpleDispSprtDatCopy(pSVar11,&ssd);
    pSVar11 = pSVar11 + 1;
    ssd.alp = *(uchar *)puVar12;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    iVar9 = iVar9 + -1;
    puVar12 = puVar12 + 1;
  } while (-1 < iVar9);
  uVar10 = 0;
  pSVar11 = (SPRT_SDAT *)&spev20_sp_cfa;
  do {
    if (spev_wrk.csr[0] == uVar10) {
      SimpleDispSprtDatCopy(pSVar11,&ssd);
      ssd.alp = spev_wrk.csr[1];
      SimpleDispSprt(&ssd,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    }
    uVar10 = uVar10 + 1;
    pSVar11 = pSVar11 + 1;
  } while ((int)uVar10 < 6);
  pSVar11 = (SPRT_SDAT *)&spev20_sp_cdl;
  do {
    SimpleDispSprtDatCopy(pSVar11,&ssd);
    pSVar11 = pSVar11 + 1;
    SimpleDispSprt(&ssd,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  } while ((int)pSVar11 < 0x327b84);
  if (evcdl_dat.stflame_shape[0] != 0xffff) {
    puVar14 = (ushort *)&spev20_sp_sflm;
    puVar12 = evcdl_dat.stflame_shape;
    iVar9 = 5;
    do {
      iVar9 = iVar9 + -1;
      SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev20_sp_cdl4 + (short)*puVar12 * 0xe),&ssd);
      ssd.alp = *(uchar *)(puVar12 + -6);
      ssd.x = *puVar14;
      ssd.y = puVar14[1];
      SimpleDispSprt(&ssd,0x1e90000,0xe,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
      puVar14 = puVar14 + 6;
      puVar12 = puVar12 + 1;
    } while (-1 < iVar9);
  }
  puVar14 = evcdl_dat.flame_shape;
  puVar12 = (ushort *)&spev20_sp_flm;
  iVar9 = 5;
  do {
    iVar9 = iVar9 + -1;
    SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev20_sp_cdl3 + (short)*puVar14 * 0xe),&ssd);
    ssd.alp = *(uchar *)(puVar14 + -6);
    ssd.x = *puVar12;
    ssd.y = puVar12[1];
    SimpleDispSprt(&ssd,0x1e90000,0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    puVar12 = puVar12 + 6;
    puVar14 = puVar14 + 1;
  } while (-1 < iVar9);
  if (spev_wrk.mode == '\n') {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x3b);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  SimpleDispSprt((SPRT_SDAT *)&spev20_sp_cpf,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  SimpleDispSprt((SPRT_SDAT *)&spev20_sp_cdl5,0x1e90000,0xf,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  DrawButtonTex(0xa000,3,(float)(int)_spev20_cbt_pos,(float)(int)DAT_003283da,'d');
  DrawButtonTex(0xa000,2,(float)(int)DAT_003283dc,(float)(int)DAT_003283de,'d');
  DrawButtonTex(0xa000,1,(float)(int)DAT_003283e0,(float)(int)DAT_003283e2,'d');
  return;
}

void FaceDoorInit(int face_no) {
  if ((ev_wrk.face_stts[1] & 1) == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
    door_keep[47].attr = door_keep[47].attr | 2;
    door_keep[26].attr = door_keep[26].attr & 0xfffd;
    door_keep[34].attr = door_keep[34].attr | 2;
    door_keep[49].attr = door_keep[49].attr & 0xfffd;
  }
  SpevStrInit();
  SpevWrkInit();
  go_flg = 0;
  if (((((face_no != 0) || (plyr_wrk.dop._13_1_ == door_keep[47].room_id)) &&
       ((face_no != 1 || (plyr_wrk.dop._13_1_ == door_keep[26].room_id)))) &&
      ((face_no != 2 || (plyr_wrk.dop._13_1_ == door_keep[34].room_id)))) &&
     ((face_no != 3 || (plyr_wrk.dop._13_1_ == door_keep[49].room_id)))) {
    spev_wrk.mode = '\0';
    spev_wrk.time = '(';
    SetBlackOut();
    return;
  }
  spev_wrk.mode = '\x04';
  spev_wrk.time = '(';
  return;
}

void FaceDoorMain(int face_no) {
	short int omen_no;
	short int have_omen;
	short int door_avail;
	
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = false;
  iVar7 = 0;
  if (face_no == 0) {
    iVar7 = 0x29;
    uVar5 = door_keep[47].attr;
LAB_001a94d4:
    bVar1 = (uVar5 & 2) != 0;
    if (bVar1) {
      spev_wrk.csr[1] = 0x80;
    }
  }
  else {
    if (face_no == 1) {
      iVar7 = 0x2a;
      uVar5 = door_keep[26].attr;
      goto LAB_001a94d4;
    }
    if (face_no == 2) {
      iVar7 = 0x2b;
      uVar5 = door_keep[34].attr;
      goto LAB_001a94d4;
    }
    if (face_no == 3) {
      iVar7 = 0x2c;
      uVar5 = door_keep[49].attr;
      goto LAB_001a94d4;
    }
  }
  bVar2 = poss_item[iVar7] != 0;
  uVar3 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    if (face_no == 0) {
      iVar7 = 0x3b;
LAB_001a9588:
      LoadReq(iVar7,0x1e90000);
    }
    else {
      if (face_no == 1) {
        iVar7 = 0x3c;
        goto LAB_001a9588;
      }
      if (face_no == 2) {
        iVar7 = 0x3d;
        goto LAB_001a9588;
      }
      if (face_no == 3) {
        LoadReq(0x3e,0x1e90000);
      }
    }
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x01':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') && (iVar7 = IsLoadEndAll(), uVar3 = spev_wrk.time, iVar7 != 0)) {
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x02':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') &&
       (iVar7 = IsLoadEnd(pzl_load_id), uVar3 = spev_wrk.time, iVar7 != 0)) {
      pzl_load_id = -1;
      SetBlackIn();
      spev_wrk.mode = '\x03';
      spev_wrk.time = '\x1e';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (bVar1) {
        spev_wrk.mode = '\x05';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
      else if (bVar2) {
        spev_wrk.mode = '\x12';
        uVar3 = bVar2;
      }
      else {
        spev_wrk.mode = '\x12';
        if (poss_item[46] == 0) {
          spev_wrk.mode = '\x11';
        }
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
    }
    else {
      uVar3 = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    iVar7 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar7);
    iVar7 = SetMessage();
    uVar3 = spev_wrk.time;
    if (iVar7 != 0) break;
    goto LAB_001aa2e0;
  case '\x05':
    iVar7 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar7 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\a';
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    spev_wrk.csr[1] = 0x80;
    iVar6 = ButtonMarkWait();
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[5] == 1) {
        spev_wrk.time = '\0';
      }
      else if (*key_now[4] == 1) {
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(3,0,0x1000,0x1000,0);
        SetBlackOut();
      }
      else if (((((*key_now[3] == 1) ||
                 (((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                    (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
                   ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
                    (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) || (*key_now[1] == 1))))
                || ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
               (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
              ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\b';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\t';
        }
        else {
          spev_wrk.mode = '\a';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      else if ((((*key_now[2] == 1) ||
                (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                 (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
               ((((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
                  (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)) || (*key_now[0] == 1)) ||
                ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\t';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\a';
        }
        else {
          spev_wrk.mode = '\b';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      uVar3 = spev_wrk.time;
      if (spev_wrk.time == '\0') {
        if (spev_wrk.mode == '\a') {
          go_flg = 1;
          iVar7 = 1;
        }
        else {
          if (spev_wrk.mode == '\b') {
            iVar6 = NisUseCheck(face_no);
            if (iVar6 == 0) {
              poss_item[iVar7] = 1;
            }
            else {
              poss_item[46] = 1;
              NisUseUnSet(face_no);
              spev_wrk.csr[2] = '\x01';
            }
            FaceDoorOkSet(face_no);
            SeStartFix(1,0,0x1000,0x1000,0);
            spev_wrk.mode = '\x1b';
            spev_wrk.time = '(';
            SetBlackOut();
            uVar3 = spev_wrk.time;
            break;
          }
          iVar7 = 3;
        }
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(iVar7,0,0x1000,0x1000,0);
        SetBlackOut();
        uVar3 = spev_wrk.time;
      }
    }
    break;
  case '\n':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\v':
  case '\f':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,0);
        if (bVar2) {
          spev_wrk.mode = '\x13';
          uVar3 = bVar2;
        }
        else {
          spev_wrk.time = '\x01';
          spev_wrk.mode = '\x11';
          uVar3 = spev_wrk.time;
        }
        break;
      }
      if ((((*key_now[3] == 1) ||
           (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
          (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
         (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
          ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
           ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
        bVar1 = spev_wrk.mode == '\v';
        spev_wrk.mode = '\v';
        if (bVar1) {
          spev_wrk.mode = '\f';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    if (spev_wrk.mode == '\v') {
      spev_wrk.mode = '\x0e';
      spev_wrk.time = '\x1e';
      spev_wrk.csr[0] = 0x80;
      poss_item[46] = 0;
      spev_wrk.csr[1] = '\0';
      NisUseSet(face_no);
      iVar7 = 0x5d;
    }
    else if (bVar2) {
      spev_wrk.mode = '\x13';
      iVar7 = 3;
      spev_wrk.time = bVar2;
    }
    else {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x11';
      iVar7 = 3;
    }
    goto LAB_001aa2a0;
  case '\r':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x11';
      if (bVar2) {
        spev_wrk.mode = '\x13';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0e':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = 0x8c;
      pzl_load_id = SeStartFixFlame(10,0x3c,0xc00,0xb60,0);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0f':
    if (spev_wrk.csr[0] != '\0') {
      spev_wrk.csr[1] = spev_wrk.csr[1] + '\x01';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
    }
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.csr[0] = '\0';
    }
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      spev_wrk.time = '\x01';
      SeFadeFlame(pzl_load_id,0x14,0);
      pzl_load_id = -1;
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x10':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    FaceDoorOkSet(face_no);
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x11':
    iVar7 = ButtonMarkNext(0,0,1);
    if (iVar7 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x12':
    iVar7 = ButtonMarkNext(0,0,1);
    if (iVar7 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x13';
      if (poss_item[46] != 0) {
        spev_wrk.mode = '\v';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
             (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    bVar1 = spev_wrk.mode == '\x13';
    spev_wrk.mode = '\x1a';
    if (bVar1) {
      spev_wrk.mode = '\x15';
    }
LAB_001aa0c8:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar3 = spev_wrk.time;
    break;
  case '\x15':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '(';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.mode = '\x16';
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      SetBlackIn();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x16':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      poss_item[iVar7] = 0;
      FaceDoorOkSet(face_no);
      go_flg = 1;
      SetBlackOut();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1a':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      if (go_flg == 1) {
        if ((face_no == 0) && (iVar7 = DoorKeyUnlockOnly(0x2f), iVar7 != 0)) {
          DoorOpenShiftForce(0x2f);
        }
        if ((face_no == 1) && (iVar7 = DoorKeyUnlockOnly(0x1a), iVar7 != 0)) {
          DoorOpenShiftForce(0x1a);
        }
        if ((face_no == 2) && (iVar7 = DoorKeyUnlockOnly(0x22), iVar7 != 0)) {
          DoorOpenShiftForce(0x22);
        }
        if ((face_no == 3) && (iVar7 = DoorKeyUnlockOnly(0x31), iVar7 != 0)) {
          DoorOpenShiftForce(0x31);
        }
        go_flg = 0;
      }
      spev_wrk.mode = '\x1f';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1b':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1e';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = '\0';
    SetBlackIn();
    iVar7 = 0x5d;
LAB_001aa2a0:
    SeStartFix(iVar7,0,0x1000,0x1000,0);
    uVar3 = spev_wrk.time;
    break;
  case '\x1e':
    iVar7 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar7 == 0) break;
    ButtonMarkTimeClear();
LAB_001aa2e0:
    spev_wrk.ret = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = spev_wrk.time;
  }
  spev_wrk.time = uVar3;
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    FaceDoorDisp(face_no);
    return;
  }
  return;
}

void FaceDoorOkSet(int face_no) {
  short sVar1;
  
  if (face_no == 0) {
    door_keep[47].attr = door_keep[47].attr ^ 2;
    sVar1 = _dmodel_table;
    if ((door_keep[47].attr & 2U) != 0) {
      sVar1 = DAT_00328492;
    }
    DoorChangeModel(0x2f,sVar1);
    return;
  }
  if (face_no == 1) {
    door_keep[26].attr = door_keep[26].attr ^ 2;
    sVar1 = DAT_00328494;
    if ((door_keep[26].attr & 2U) != 0) {
      sVar1 = DAT_00328496;
    }
    DoorChangeModel(0x1a,sVar1);
    return;
  }
  if (face_no == 2) {
    door_keep[34].attr = door_keep[34].attr ^ 2;
    sVar1 = DAT_00328498;
    if ((door_keep[34].attr & 2U) != 0) {
      sVar1 = DAT_0032849a;
    }
    DoorChangeModel(0x22,sVar1);
    return;
  }
  if (face_no != 3) {
    return;
  }
  door_keep[49].attr = door_keep[49].attr ^ 2;
  sVar1 = DAT_0032849c;
  if ((door_keep[49].attr & 2U) != 0) {
    sVar1 = DAT_0032849e;
  }
  DoorChangeModel(0x31,sVar1);
  return;
}

void FaceDoorAimSet(int face_no) {
  if (face_no == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] ^ 0x10;
    return;
  }
  if (face_no == 1) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] ^ 0x20;
    return;
  }
  if (face_no == 2) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] ^ 0x40;
    return;
  }
  if (face_no == 3) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] ^ 0x80;
  }
  return;
}

int NisUseCheck(int face_no) {
	int ret_num;
	
  uint uVar1;
  
  uVar1 = 0;
  if ((face_no == 0) && ((ev_wrk.face_stts[1] & 2) != 0)) {
    uVar1 = 1;
  }
  else if ((face_no == 1) && ((ev_wrk.face_stts[1] & 4) != 0)) {
    uVar1 = 1;
  }
  else if ((face_no == 2) && ((ev_wrk.face_stts[1] & 8) != 0)) {
    uVar1 = 1;
  }
  else if (face_no == 3) {
    uVar1 = (uint)((ev_wrk.face_stts[1] & 0x10) != 0);
  }
  return uVar1;
}

void NisUseSet(int face_no) {
  if (face_no == 0) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] | 2;
    return;
  }
  if (face_no == 1) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] | 4;
    return;
  }
  if (face_no == 2) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] | 8;
    return;
  }
  if (face_no == 3) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] | 0x10;
  }
  return;
}

void NisUseUnSet(int face_no) {
  if (face_no == 0) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xfd;
    return;
  }
  if (face_no == 1) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xfb;
    return;
  }
  if (face_no == 2) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xf7;
    return;
  }
  if (face_no == 3) {
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xef;
  }
  return;
}

void FaceDoorDisp(int face_no) {
	int i;
	int omen_no;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	int lng1;
	int lng2;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  SPRT_SDAT *ssd_00;
  long unaff_s8;
  float pos_x;
  float fVar9;
  float scl;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  spev_str.alpha = 0x80;
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_0034ed88 >> (7 - uVar7) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar7);
  *puVar2 = *puVar2 & -1L << (uVar7 + 1) * 8 | DAT_0034ed90 >> (7 - uVar7) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar7 = (uint)&menu_sq0.alpha & 7;
  puVar3 = &menu_sq0.alpha + -uVar7;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar7 + 1) * 8 | DAT_0034ed98 >> (7 - uVar7) * 8;
  menu_sq0._16_8_ = DAT_0034ed98;
  SetSprFile(0x1e90000);
  SetSprFile(0x1ed8f10);
  if ((spev_wrk.mode != '\x04') && (spev_wrk.mode != '\x1e')) {
    iVar8 = 0;
    ssd_00 = (SPRT_SDAT *)&pzl_men_bg;
    do {
      SimpleDispSprt(ssd_00,0x1e90000,iVar8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
      iVar8 = iVar8 + 1;
      ssd_00 = ssd_00 + 1;
    } while (iVar8 < 0xb);
  }
  SimpleDispSprtDatCopy((SPRT_SDAT *)&spev21_sp_menz,&ssd);
  ssd.alp = spev_wrk.csr[0];
  SimpleDispSprt(&ssd,0x1ed8f10,0,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  if (face_no == 0) {
    SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f3e,&ssd);
    ssd.alp = spev_wrk.csr[1];
    iVar8 = 1;
LAB_001aa844:
    spev_wrk.csr[1] = ssd.alp;
    SimpleDispSprt(&ssd,0x1ed8f10,iVar8,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  }
  else {
    if (face_no == 1) {
      SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f4c,&ssd);
      ssd.alp = spev_wrk.csr[1];
      iVar8 = 2;
      goto LAB_001aa844;
    }
    if (face_no == 2) {
      SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f5a,&ssd);
      ssd.alp = spev_wrk.csr[1];
      iVar8 = 3;
      goto LAB_001aa844;
    }
    if (face_no == 3) {
      SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f68,&ssd);
      ssd.alp = spev_wrk.csr[1];
      SimpleDispSprt(&ssd,0x1ed8f10,4,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    }
  }
  if (face_no == 0) {
    unaff_s8 = 0x40;
    bVar4 = ev_wrk.face_stts[1] & 2;
LAB_001aa8fc:
    if ((bVar4 != 0) && (spev_wrk.mode != '\x10')) {
      unaff_s8 = 0x4e;
    }
  }
  else {
    if (face_no == 1) {
      unaff_s8 = 0x41;
      bVar4 = ev_wrk.face_stts[1] & 4;
      goto LAB_001aa8fc;
    }
    if (face_no == 2) {
      unaff_s8 = 0x42;
      bVar4 = ev_wrk.face_stts[1] & 8;
      goto LAB_001aa8fc;
    }
    if (face_no == 3) {
      unaff_s8 = 0x43;
      bVar4 = ev_wrk.face_stts[1] & 0x10;
      goto LAB_001aa8fc;
    }
  }
  uVar7 = (uint)spev_wrk.mode;
  iVar8 = (int)unaff_s8;
  if (uVar7 == 5) {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
    iVar5 = GetStrWidth((uchar *)spev_str.str);
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',iVar8);
    iVar6 = GetStrWidth((uchar *)spev_str.str);
    spev_str.pos_y = 0x15e;
    iVar5 = (iVar6 + iVar5 + 0xc) / 2;
    spev_str.pos_x = 0x140 - iVar5;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if ((((unaff_s8 == 0x4e) || (face_no == 0)) || (face_no == 1)) || (face_no == 2)) {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
LAB_001aaa30:
      spev_str.pos_x = (iVar6 - iVar5) + 0x14c;
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    else if (face_no == 3) {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
      goto LAB_001aaa30;
    }
    uVar7 = (uint)spev_wrk.mode;
  }
  if (uVar7 - 7 < 3) {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x3c);
    spev_str.pos_y = 0x154;
    spev_str.pos_x = 0xfa;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x3d);
    spev_str.pos_x = 0xbe;
    spev_str.pos_y = 0x16d;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x4d);
    spev_str.pos_x = 0x122;
    spev_str.pos_y = 0x186;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar7 = (uint)spev_wrk.mode;
    if (uVar7 == 7) {
      pos_x = 220.0;
      fVar9 = DAT_00355d0c;
      scl = DAT_00355d10;
    }
    else if (uVar7 == 8) {
      pos_x = 140.0;
      fVar9 = 362.0;
      scl = 6.0;
    }
    else {
      if (uVar7 != 9) goto LAB_001aabfc;
      pos_x = 270.0;
      fVar9 = DAT_00355d14;
      scl = DAT_00355d18;
    }
    YesNoCrslOKR(0x2000,pos_x,fVar9,0x808080,100.0,scl);
    uVar7 = (uint)spev_wrk.mode;
  }
LAB_001aabfc:
  if (uVar7 - 0xb < 2) {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x3e);
    spev_str.pos_y = 0x15e;
    spev_str.pos_x = 0x32;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.pos_x = 0x4b;
    spev_str.pos_y = 0x175;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 0xb4;
    spev_str.pos_y = 0x175;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (spev_wrk.mode == '\v') {
      fVar9 = 50.0;
    }
    else {
LAB_001ab15c:
      fVar9 = 150.0;
    }
LAB_001ab164:
    YesNoCrslOKR(0x2000,fVar9,370.0,0x808080,100.0,1.5);
  }
  else {
    if (uVar7 == 0xd) {
      CopySqrDToSqr(&dsq,&menu_sq0);
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x4a);
      spev_str.pos_x = 0x32;
      spev_str.pos_y = 0x15e;
    }
    else if (uVar7 == 0x10) {
      CopySqrDToSqr(&dsq,&menu_sq0);
      iVar5 = 0x177;
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x46);
      spev_str.pos_y = 0x15e;
      spev_str.pos_x = 0x32;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      spev_str.str = (char *)GetIngameMSGAddr('\a',iVar8);
      spev_str.pos_x = 0xa1;
      spev_str.pos_y = 0x177;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      if (face_no == 0) {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x47);
        spev_str.pos_x = 0xfa;
        spev_str.pos_y = iVar5;
      }
      else if (face_no == 1) {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x47);
        spev_str.pos_x = 0xfa;
        spev_str.pos_y = iVar5;
      }
      else if (face_no == 2) {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x47);
        spev_str.pos_x = 0xda;
        spev_str.pos_y = iVar5;
      }
      else {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x47);
        spev_str.pos_x = 0xfa;
        spev_str.pos_y = iVar5;
      }
    }
    else if (uVar7 == 0x11) {
      CopySqrDToSqr(&dsq,&menu_sq0);
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x3f);
      spev_str.pos_x = 0x32;
      spev_str.pos_y = 0x15e;
    }
    else if (uVar7 == 0x12) {
      CopySqrDToSqr(&dsq,&menu_sq0);
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
      spev_str.str = (char *)GetIngameMSGAddr('\a',0xc);
      spev_str.pos_x = 0x32;
      spev_str.pos_y = 0x15e;
    }
    else {
      if (uVar7 - 0x13 < 2) {
        CopySqrDToSqr(&dsq,&menu_sq0);
        DispSqrD(&dsq);
        DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
        spev_str.str = (char *)GetIngameMSGAddr('\a',iVar8);
        spev_str.pos_x = 0x32;
        spev_str.pos_y = 0x15e;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
        if (face_no == 0) {
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x4c);
          spev_str.pos_x = 0x8d;
LAB_001ab080:
          spev_str.pos_y = 0x15e;
          CopyStrDToStr(&ds,&spev_str);
          SetMessageV2(&ds);
        }
        else {
          if (face_no == 1) {
            spev_str.str = (char *)GetIngameMSGAddr('\a',0x4c);
            spev_str.pos_x = 0x8a;
            goto LAB_001ab080;
          }
          if (face_no == 2) {
            spev_str.str = (char *)GetIngameMSGAddr('\a',0x4c);
            spev_str.pos_x = 0x66;
            goto LAB_001ab080;
          }
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x4c);
          spev_str.pos_x = 0x8a;
          spev_str.pos_y = 0x15e;
          CopyStrDToStr(&ds,&spev_str);
          SetMessageV2(&ds);
        }
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
        spev_str.pos_x = 0x4b;
        spev_str.pos_y = 0x175;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
        spev_str.pos_x = 0xb4;
        spev_str.pos_y = 0x175;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
        if (spev_wrk.mode != '\x13') goto LAB_001ab15c;
        fVar9 = 50.0;
        goto LAB_001ab164;
      }
      if (uVar7 != 0x16) {
        if (uVar7 != 0x1e) goto LAB_001ab4c4;
        if (spev_wrk.csr[2] == '\x01') {
          CopySqrDToSqr(&dsq,&menu_sq0);
          DispSqrD(&dsq);
          DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x4e);
          spev_str.pos_x = 0x32;
          spev_str.pos_y = 0x15e;
          CopyStrDToStr(&ds,&spev_str);
          SetMessageV2(&ds);
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
          spev_str.pos_x = 0xbe;
          spev_str.pos_y = 0x15e;
        }
        else {
          CopySqrDToSqr(&dsq,&menu_sq0);
          iVar5 = 0x15e;
          DispSqrD(&dsq);
          DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
          spev_str.str = (char *)GetIngameMSGAddr('\a',iVar8);
          spev_str.pos_x = 0x32;
          spev_str.pos_y = 0x15e;
          CopyStrDToStr(&ds,&spev_str);
          SetMessageV2(&ds);
          if (face_no == 0) {
            spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
            spev_str.pos_x = 0x8c;
            spev_str.pos_y = iVar5;
          }
          else if (face_no == 1) {
            spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
            spev_str.pos_x = 0x8c;
            spev_str.pos_y = iVar5;
          }
          else {
            if (face_no != 2) {
              if (face_no == 3) {
                spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
                spev_str.pos_x = 0x8c;
                spev_str.pos_y = 0x15e;
                CopyStrDToStr(&ds,&spev_str);
                SetMessageV2(&ds);
              }
              goto LAB_001ab4c4;
            }
            spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
            spev_str.pos_x = 0x69;
            spev_str.pos_y = iVar5;
          }
        }
        goto LAB_001ab470;
      }
      CopySqrDToSqr(&dsq,&menu_sq0);
      DispSqrD(&dsq);
      DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
      spev_str.str = (char *)GetIngameMSGAddr('\a',iVar8);
      spev_str.pos_x = 0x32;
      spev_str.pos_y = 0x159;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
      if (face_no == 0) {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x45);
        spev_str.pos_x = 0x8a;
LAB_001ab268:
        spev_str.pos_y = 0x159;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
      }
      else {
        if (face_no == 1) {
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x45);
          spev_str.pos_x = 0x8a;
          goto LAB_001ab268;
        }
        if (face_no == 2) {
          spev_str.str = (char *)GetIngameMSGAddr('\a',0x45);
          spev_str.pos_x = 0x6c;
          goto LAB_001ab268;
        }
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x45);
        spev_str.pos_x = 0x8a;
        spev_str.pos_y = 0x159;
        CopyStrDToStr(&ds,&spev_str);
        SetMessageV2(&ds);
      }
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x50);
      spev_str.pos_x = 0x32;
      spev_str.pos_y = 0x171;
    }
LAB_001ab470:
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
LAB_001ab4c4:
  next_count_309 = next_count_309 + 1;
  if (0x50 < next_count_309) {
    next_count_309 = 0;
  }
  return;
}

void SurpriseDoorInit() {
  int iVar1;
  
  iVar1 = SimenCheck();
  if (iVar1 == 0) {
    spev_str.alpha = 0x80;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = 0x80;
    open_close = '\0';
    spev_wrk.csr[0] = '\0';
    spev_wrk.count = '\0';
    spev_wrk.mode = '\0';
    SetBlackOut();
  }
  else {
    open_close = '\x01';
    spev_wrk.mode = '\x04';
    spev_wrk.time = '(';
  }
  go_flg_s = 0;
  spev_wrk.csr[1] = 0x80;
  spev_wrk.csr[0] = 0x80;
  return;
}

void SurpriseDoorMain() {
  int iVar1;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3d,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 != 0) {
        SetSprFile(0x1e90000);
        SetSprFile(0x1ed8f10);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        pzl_load_id = SeFileLoadAndSet(0x5ec,0x15);
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEnd(pzl_load_id);
      if (iVar1 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        spev_wrk.time = '\x1e';
        SetBlackIn();
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
      }
      else {
        spev_wrk.time = '\x01';
        spev_wrk.mode = '\x18';
        spev_wrk.csr[1] = 0x80;
        SeStartFix(0x5d,0,0x1000,0x1000,0);
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x04':
    spev_wrk.ret = '\x01';
    iVar1 = DoorKeyUnlockOnly(0x1d);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x1d);
    }
  default:
    goto switchD_001ab5b8_caseD_5;
  case '\x17':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      go_flg_s = 1;
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001ab5b8_caseD_5;
  case '\x18':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001ab5b8_caseD_5;
  case '\x1a':
    if (spev_wrk.time == '\0') {
      if (go_flg_s == 1) {
        iVar1 = DoorKeyUnlockOnly(0x1d);
        if (iVar1 != 0) {
          DoorOpenShiftForce(0x1d);
        }
        go_flg_s = 0;
      }
      spev_wrk.mode = '\x1f';
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    goto switchD_001ab5b8_caseD_5;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ab5b8_caseD_5:
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    SurpriseDoorDisp((uint)open_close);
    return;
  }
  return;
}

void SurpriseDoorDisp(int face_no) {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int sp_no;
  SPRT_SDAT *ssd_00;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ed88 >> (7 - uVar2) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ed90 >> (7 - uVar2) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar2 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034ed98 >> (7 - uVar2) * 8;
  menu_sq0._16_8_ = DAT_0034ed98;
  sp_no = 0;
  SetSprFile(0x1e90000);
  SetSprFile(0x1ed8f10);
  spev_str.alpha = 0x80;
  ssd_00 = (SPRT_SDAT *)&pzl_men_bg;
  do {
    SimpleDispSprt(ssd_00,0x1e90000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    sp_no = sp_no + 1;
    ssd_00 = ssd_00 + 1;
  } while (sp_no < 0xb);
  SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f76,&ssd);
  ssd.alp = spev_wrk.csr[1];
  SimpleDispSprt(&ssd,0x1ed8f10,5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  if (spev_wrk.mode == '\x17') {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x31);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else if (spev_wrk.mode == '\x18') {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,0x7f);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x4b);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  return;
}

void SimenPillarInit(int event_no) {
  int iVar1;
  
  iVar1 = SimenCheck();
  open_close = (uchar)iVar1;
  alpha_keep = '\0';
  if ((ev_wrk.face_stts[0] & 1) == 0) {
    ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xf0 | 0x11;
  }
  SpevWrkInit();
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.csr[1] = 0x80;
  spev_wrk.mode = '\x04';
  spev_wrk.time = '\x14';
  return;
}

void SimenPillarMain(int event_no) {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < spev_wrk.mode) {
    SimenPillarDisp();
  }
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x3d,0x1e90000);
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    goto LAB_001ac334;
  case '\x01':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) {
      return;
    }
    SetSprFile(0x1e90000);
    SetSprFile(0x1ed8f10);
    spev_wrk.mode = '\x03';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    spev_wrk.time = '\x1e';
    SetBlackIn();
    iVar6 = 0x5d;
    goto LAB_001ac274;
  case '\x03':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x18';
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
      }
      spev_wrk.time = '\x01';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = IsLoadEnd(pzl_load_id);
    if (iVar6 == 0) {
      return;
    }
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    pzl_load_id = -1;
    if (event_no == 0x22) {
      choudo_no = 0x7e;
      stts_no = '\x02';
      omen_msgno = '@';
      omen_itemno = ')';
      omen_no = '\0';
      ReqDramaCamera('\x01',0x17,0);
    }
    else {
      if (event_no == 0x36) {
        stts_no = '\x04';
        omen_itemno = '*';
        omen_msgno = 'A';
        choudo_no = 0x7d;
        omen_no = '\x01';
        sVar3 = 0x18;
      }
      else {
        if (event_no != 0x37) {
          if (event_no == 0x38) {
            omen_msgno = 'C';
            choudo_no = 0x7c;
            omen_no = '\x03';
            stts_no = '\x10';
            omen_itemno = ',';
            ReqDramaCamera('\x01',0x16,0);
          }
          goto LAB_001abd50;
        }
        stts_no = '\b';
        omen_itemno = '+';
        omen_msgno = 'B';
        choudo_no = 0x7f;
        omen_no = '\x02';
        sVar3 = 0x15;
      }
      ReqDramaCamera('\x01',sVar3,0);
    }
LAB_001abd50:
    spev_wrk.mode = '\a';
    if ((ev_wrk.face_stts[0] & stts_no) == 0) {
      spev_wrk.mode = '\x13';
      if (poss_item[omen_itemno] == 0) {
        spev_wrk.mode = '\x11';
        uVar2 = '\x01';
      }
      else {
        uVar2 = '\x01';
      }
    }
    else {
      uVar2 = '\x01';
    }
    break;
  case '\x06':
  case '\b':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if (((((*key_now[3] == 1) ||
               (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
              (((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)) || (*key_now[2] == 1)))) ||
             ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))) ||
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
             ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
              (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x06';
      if (bVar1) {
        spev_wrk.mode = '\b';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\b') {
      uVar5 = SimenCheck();
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & ~stts_no;
      poss_item[omen_itemno] = 1;
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        iVar6 = SimenCheck();
        open_close = (uchar)iVar6;
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1b';
LAB_001ac248:
      spev_wrk.time = '(';
      SetBlackOut();
      return;
    }
    goto LAB_001ac264;
  case '\a':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if ((spev_wrk.time == '\0') && (iVar6 = ButtonMarkWait(), uVar2 = spev_wrk.time, iVar6 == 0)) {
      spev_wrk.mode = '\b';
      uVar2 = '\x01';
    }
    break;
  case '\x11':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = ' ';
      uVar2 = '\n';
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if (((*key_now[3] == 1) ||
             ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
              ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) ||
            ((*key_now[2] == 1 ||
             (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
              ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
               ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\x13') {
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] | stts_no;
      poss_item[omen_itemno] = 0;
      uVar5 = SimenCheck();
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1d';
      goto LAB_001ac248;
    }
LAB_001ac264:
    spev_wrk.mode = ' ';
    iVar6 = 3;
    spev_wrk.time = '\n';
LAB_001ac274:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x17':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
      SetFurnAttrEve(choudo_no,0x4000,0);
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x18':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    ButtonMarkTimeClear();
    SetFurnAttrEve(choudo_no,0x4000,1);
    spev_wrk.mode = '\x1a';
LAB_001ac334:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar2 = spev_wrk.time;
    break;
  case '\x1a':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x1f';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1b':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,1);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = '\x1e';
    goto LAB_001ac3e0;
  case '\x1d':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,0);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = ' ';
LAB_001ac3e0:
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar2 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = ' ';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1f':
    if (event_no == 0x22) {
      ReqDramaCamera('\0',0x17,0);
    }
    if (event_no == 0x36) {
      ReqDramaCamera('\0',0x18,0);
    }
    if (event_no == 0x37) {
      ReqDramaCamera('\0',0x15,0);
    }
    if (event_no == 0x38) {
      ReqDramaCamera('\0',0x16,0);
    }
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case ' ':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) goto switchD_001abb68_caseD_21;
    if (event_no == 0x22) {
      ReqDramaCamera('\0',0x17,0);
    }
    if (event_no == 0x36) {
      ReqDramaCamera('\0',0x18,0);
    }
    if (event_no == 0x37) {
      ReqDramaCamera('\0',0x15,0);
    }
    if (event_no == 0x38) {
      ReqDramaCamera('\0',0x16,0);
    }
    ButtonMarkTimeClear();
    goto LAB_001ac56c;
  case '!':
switchD_001abb68_caseD_21:
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
LAB_001ac56c:
    spev_wrk.ret = '\x01';
    uVar2 = spev_wrk.time;
  }
  spev_wrk.time = uVar2;
  return;
}

int SimenCheck() {
	int i;
	
  char cVar1;
  
  cVar1 = (ev_wrk.face_stts[0] & 2) != 0;
  if ((ev_wrk.face_stts[0] & 4) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((ev_wrk.face_stts[0] & 8) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((ev_wrk.face_stts[0] & 0x10) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return (uint)(cVar1 == '\x04');
}

void SimenPillarDisp() {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  int sp_no;
  SPRT_SDAT *ssd_00;
  float fVar6;
  float fVar7;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_0034ed88 >> (7 - uVar5) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_0034ed90 >> (7 - uVar5) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar5 = (uint)&menu_sq0.alpha & 7;
  puVar3 = &menu_sq0.alpha + -uVar5;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar5 + 1) * 8 | DAT_0034ed98 >> (7 - uVar5) * 8;
  uVar5 = (uint)spev_wrk.mode;
  spev_str.alpha = 0x80;
  menu_sq0._16_8_ = DAT_0034ed98 & 0xffffffffffffff | (ulong)(byte)alpha_keep << 0x38;
  if ((((uVar5 == 3) || (uVar5 == 0x17)) || (uVar5 == 0x18)) || (uVar5 == 0x1a)) {
    sp_no = 0;
    SetSprFile(0x1e90000);
    ssd_00 = (SPRT_SDAT *)&pzl_men_bg;
    do {
      SimpleDispSprt(ssd_00,0x1e90000,sp_no,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
      sp_no = sp_no + 1;
      ssd_00 = ssd_00 + 1;
    } while (sp_no < 0xb);
    SimpleDispSprtDatCopy((SPRT_SDAT *)&DAT_00327f76,&ssd);
    ssd.alp = spev_wrk.csr[1];
    SimpleDispSprt(&ssd,0x1ed8f10,5,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
    uVar5 = (uint)spev_wrk.mode;
  }
  if ((('v' < alpha_keep) || (bVar4 = alpha_keep + '\t', uVar5 == 0x20)) &&
     ((bVar4 = alpha_keep, 0 < (int)((uint)(byte)alpha_keep << 0x18) &&
      ((uVar5 == 0x20 && (bVar4 = alpha_keep - 9U, (int)((uint)(byte)(alpha_keep - 9U) << 0x18) < 1)
       ))))) {
    alpha_keep = '\0';
    bVar4 = alpha_keep;
  }
  alpha_keep = bVar4;
  if (uVar5 == 7) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)omen_msgno);
    spev_str.pos_x = 0x82;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (omen_no == '\0') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
      spev_str.pos_x = 0xda;
    }
    else if (omen_no == '\x01') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
      spev_str.pos_x = 0xda;
    }
    else if (omen_no == '\x02') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
      spev_str.pos_x = 0xb9;
    }
    else {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x51);
      spev_str.pos_x = 0xda;
    }
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar5 = (uint)spev_wrk.mode;
  }
  if ((uVar5 == 6) || (uVar5 == 8)) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)omen_msgno);
    spev_str.pos_x = 0x82;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (omen_no == '\0') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x52);
      spev_str.pos_x = 0xda;
LAB_001ac900:
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    else {
      if (omen_no == '\x01') {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x52);
        spev_str.pos_x = 0xda;
        goto LAB_001ac900;
      }
      if (omen_no == '\x02') {
        spev_str.str = (char *)GetIngameMSGAddr('\a',0x52);
        spev_str.pos_x = 0xb9;
        goto LAB_001ac900;
      }
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x52);
      spev_str.pos_x = 0xda;
      spev_str.pos_y = 0x15e;
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.pos_x = 0xd7;
    spev_str.pos_y = 0x17a;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 0x140;
    spev_str.pos_y = 0x17a;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (spev_wrk.mode == '\b') {
      fVar7 = 190.0;
      fVar6 = DAT_00355d1c;
    }
    else {
      fVar7 = 290.0;
      fVar6 = DAT_00355d20;
    }
    YesNoCrslOKR(0x2000,fVar7,fVar6,0x808080,100.0,1.5);
    uVar5 = (uint)spev_wrk.mode;
  }
  if (uVar5 == 0x11) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x53);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar5 = (uint)spev_wrk.mode;
  }
  if (1 < uVar5 - 0x13) goto LAB_001acc84;
  DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
  spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)omen_msgno);
  spev_str.pos_x = 0x82;
  spev_str.pos_y = 0x15e;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  if (omen_no == '\0') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x54);
    spev_str.pos_x = 0xda;
LAB_001acb60:
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else {
    if (omen_no == '\x01') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x54);
      spev_str.pos_x = 0xda;
      goto LAB_001acb60;
    }
    if (omen_no == '\x02') {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x54);
      spev_str.pos_x = 0xbb;
      goto LAB_001acb60;
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x54);
    spev_str.pos_x = 0xda;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
  spev_str.pos_x = 0xd7;
  spev_str.pos_y = 0x17a;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
  spev_str.pos_x = 0x140;
  spev_str.pos_y = 0x17a;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  if (spev_wrk.mode == '\x13') {
    fVar7 = 190.0;
    fVar6 = DAT_00355d24;
  }
  else {
    fVar7 = 290.0;
    fVar6 = DAT_00355d28;
  }
  YesNoCrslOKR(0x2000,fVar7,fVar6,0x808080,100.0,1.5);
  uVar5 = (uint)spev_wrk.mode;
LAB_001acc84:
  if (uVar5 == 0x17) {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x56);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar5 = (uint)spev_wrk.mode;
  }
  if (uVar5 == 0x1e) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)omen_msgno);
    spev_str.pos_x = 0x82;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (((omen_no == '\0') || (omen_no == '\x01')) || (omen_no != '\x02')) {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
      spev_str.pos_x = 0xda;
    }
    else {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x4f);
      spev_str.pos_x = 0xbc;
    }
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else if (uVar5 == 0x18) {
    CopySqrDToSqr(&dsq,&menu_sq0);
    DispSqrD(&dsq);
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x55);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else if (uVar5 == 0x20) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,alpha_keep);
  }
  return;
}

void IkariMenInit() {
  return;
}

void IkariMenComeOn() {
  ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xfb;
  SetFurnAttrEve(0x7d,0x4000,1);
  DoorChangeModel(0x1a,DAT_00328496);
  if (door_keep[26].room_id != DAT_0032847e) {
    ChangeRotDoorFace2Room(0x1a,(uchar)DAT_0032847e);
  }
  door_keep[26].attr = door_keep[26].attr | 2;
  event_stts[ev_wrk.evt_no] = '\x01';
  poss_item[42] = 0;
  uGpffffa031 = 1;
  return;
}

void HanyouKaitenInit(int event_no) {
  return;
}

void HanyouKaitenMain(int event_no) {
  int iVar1;
  
  switch(event_no) {
  case 0x56:
    if (plyr_wrk.dop._13_1_ == door_keep[47].room_id) {
      iVar1 = DoorKeyUnlockOnly(0x2f);
      if (iVar1 != 0) {
        DoorOpenShiftForce(0x2f);
      }
    }
    else {
LAB_001ad0e0:
      iVar1 = GetIngameMSGAddr('\a',0x48);
      SetMessageAddr(iVar1);
      iVar1 = SetMessage();
      if (iVar1 != 0) {
        return;
      }
    }
    break;
  case 0x57:
    if (plyr_wrk.dop._13_1_ != door_keep[26].room_id) goto LAB_001ad0e0;
    iVar1 = DoorKeyUnlockOnly(0x1a);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x1a);
    }
    break;
  case 0x58:
    if (plyr_wrk.dop._13_1_ != door_keep[34].room_id) goto LAB_001ad0e0;
    iVar1 = DoorKeyUnlockOnly(0x22);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x22);
    }
    break;
  case 0x59:
    if (plyr_wrk.dop._13_1_ != door_keep[49].room_id) goto LAB_001ad0e0;
    iVar1 = DoorKeyUnlockOnly(0x31);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x31);
    }
    break;
  case 0x5a:
    if (plyr_wrk.dop._13_1_ != door_keep[54].room_id) goto LAB_001ad0e0;
    iVar1 = DoorKeyUnlockOnly(0x36);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x36);
    }
    break;
  default:
    goto switchD_001acfc0_caseD_5;
  }
  uGpffffa031 = 1;
switchD_001acfc0_caseD_5:
  return;
}

void ZushiBonjiInit(int bonji_no) {
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x3a,0x1e90000);
    pzl_load_id = iVar2;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SetBlackOut();
  spev_wrk.csr[0] = '\0';
  zushi_alpha[0] = '\0';
  zushi_alpha[1] = '\0';
  if (bonji_no == 0x2a) {
    spev_wrk.csr[1] = '\0';
  }
  else if (bonji_no == 0x2b) {
    spev_wrk.csr[1] = '\x01';
  }
  else {
    spev_wrk.csr[1] = '\x03';
    if (bonji_no == 0x2c) {
      spev_wrk.csr[1] = '\x02';
    }
  }
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void ZushiBonjiMain(int bonji_no) {
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3a,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto switchD_001ad240_caseD_d;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x03';
      uVar6 = 0x550;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001ad690:
      pzl_load_id = SeFileLoadAndSet(uVar6,2);
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEnd(pzl_load_id);
      if (iVar5 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x02';
        spev_wrk.time = '(';
        SetBlackIn();
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x04':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x06';
    }
    goto switchD_001ad240_caseD_d;
  case '\x05':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 == 0) goto switchD_001ad240_caseD_d;
    ButtonMarkTimeClear();
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\b';
    iVar5 = 0x22;
    goto LAB_001ad568;
  case '\x06':
    iVar5 = ButtonMarkWait();
    if (iVar5 != 0) goto switchD_001ad240_caseD_d;
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
      goto switchD_001ad240_caseD_d;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[3] == 1) ||
         ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = 2 < spev_wrk.csr[0];
        spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        if (bVar1) {
          spev_wrk.csr[0] = '\0';
          zushi_alpha[0] = '\0';
          goto switchD_001ad240_caseD_d;
        }
      }
      else {
        if ((((*key_now[2] != 1) &&
             (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
            (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) goto switchD_001ad240_caseD_d;
        bVar1 = spev_wrk.csr[0] == '\0';
        spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        if (bVar1) {
          spev_wrk.csr[0] = '\x03';
        }
      }
      zushi_alpha[0] = '\0';
      goto switchD_001ad240_caseD_d;
    }
    spev_wrk.time = '(';
    spev_wrk.mode = '\a';
    iVar5 = 0x21;
LAB_001ad568:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    goto switchD_001ad240_caseD_d;
  case '\a':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.csr[0] == zushi_dat[spev_wrk.csr[1]].answer) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\x05';
      }
      else {
        spev_wrk.time = '(';
        spev_wrk.mode = '\t';
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      uVar6 = (uint)spev_wrk.csr[1];
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\v';
      spev_wrk.time = 'F';
      zushi_dat[uVar6].ansflg = '\x01';
      SetWhiteOut();
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\t':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '\x01';
      spev_wrk.csr[0] = '\0';
    }
    goto switchD_001ad240_caseD_d;
  case '\n':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetBlackIn();
        goto switchD_001ad240_caseD_d;
      }
LAB_001ad68c:
      uVar6 = 0x549;
      goto LAB_001ad690;
    }
    break;
  case '\v':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetWhiteIn();
        goto switchD_001ad240_caseD_d;
      }
      goto LAB_001ad68c;
    }
    break;
  case '\f':
    SendManMdlTex();
    ButtonMarkTimeClear();
    spev_str.alpha = 0x80;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.ret = '\x01';
  default:
    goto switchD_001ad240_caseD_d;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ad240_caseD_d:
  if (((spev_wrk.mode == '\x06') && (-1 < (char)zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] + 3, (int)((uint)zushi_alpha[0] << 0x18) < 0)) {
    zushi_alpha[0] = 0x80;
  }
  if (spev_wrk.mode == '\a') {
    zushi_alpha[0] = '\0';
  }
  if (((spev_wrk.mode == '\t') && (3 < zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] - 3, zushi_alpha[0] < 4)) {
    zushi_alpha[0] = '\0';
  }
  if (((byte)(spev_wrk.mode - 4) < 2) || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\f')) {
    ZushiBonjiDisp(bonji_no);
  }
  return;
}

void ZushiBonjiDisp(int bonji_no) {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  SPRT_SDAT *pSVar8;
  SPRT_SDAT *ssd_00;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar4);
  *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | DAT_0034ed88 >> (7 - uVar4) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar4);
  *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | DAT_0034ed90 >> (7 - uVar4) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar4 = (uint)&menu_sq0.alpha & 7;
  puVar3 = &menu_sq0.alpha + -uVar4;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar4 + 1) * 8 | DAT_0034ed98 >> (7 - uVar4) * 8;
  menu_sq0._16_8_ = DAT_0034ed98 & 0xffffffffffffff | (ulong)zushi_alpha[1] << 0x38;
  SetSprFile(0x1e90000);
  pSVar8 = (SPRT_SDAT *)&spev21_sp_bak;
  iVar7 = 0;
  do {
    iVar5 = iVar7 + 1;
    SimpleDispSprtLNR(pSVar8,0x1e90000,iVar7,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    pSVar8 = pSVar8 + 1;
    iVar7 = iVar5;
  } while (iVar5 < 0xb);
  if ((((spev_wrk.mode == '\a') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\b')) ||
     (spev_wrk.mode == '\v')) {
    uVar4 = (uint)spev_wrk.csr[0];
    pSVar8 = (SPRT_SDAT *)&spev21_sp_zbt;
    uVar6 = 0;
    do {
      if (uVar6 == uVar4) {
        SimpleDispSprtLNR(pSVar8,0x1e90000,uVar6 + 0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',1);
        uVar4 = (uint)spev_wrk.csr[0];
      }
      uVar6 = uVar6 + 1;
      pSVar8 = pSVar8 + 1;
    } while ((int)uVar6 < 4);
    uVar6 = 0;
  }
  else {
    uVar4 = (uint)spev_wrk.csr[0];
    uVar6 = 0;
  }
  while( true ) {
    if (uVar6 == uVar4) {
      SimpleDispSprtDatCopy((SPRT_SDAT *)(&spev21_sp_zfl + uVar6 * 0xe),&ssd);
      ssd.alp = zushi_alpha[0];
      SimpleDispSprtLNR(&ssd,0x1e90000,0xc,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    }
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) break;
    uVar4 = (uint)spev_wrk.csr[0];
  }
  uVar4 = 0;
  pSVar8 = (SPRT_SDAT *)&DAT_00328060;
  ssd_00 = (SPRT_SDAT *)&spev21_sp_zft;
  do {
    if ((((spev_wrk.mode == '\a') || (spev_wrk.mode == '\x05')) ||
        ((spev_wrk.mode == '\b' || (spev_wrk.mode == '\v')))) && (uVar4 == spev_wrk.csr[0])) {
      SimpleDispSprtLNR(pSVar8,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    }
    else {
      SimpleDispSprtLNR(ssd_00,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    }
    uVar4 = uVar4 + 1;
    ssd_00 = ssd_00 + 1;
    pSVar8 = pSVar8 + 1;
  } while ((int)uVar4 < 4);
  CopySqrDToSqr(&dsq,&menu_sq0);
  DispSqrD(&dsq);
  DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,zushi_alpha[1]);
  if (spev_wrk.mode == '\x04') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x59);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)zushi_alpha[1];
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  if (spev_wrk.mode == '\x05') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x5e);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)zushi_alpha[1];
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  if (spev_wrk.mode == '\t') {
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x5a);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)zushi_alpha[1];
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  iVar7 = 0;
  pSVar8 = (SPRT_SDAT *)&spev21_sp_cpf;
  do {
    SimpleDispSprtLNR(pSVar8,0x1e90000,0x11,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    iVar7 = iVar7 + -1;
    pSVar8 = pSVar8 + 1;
  } while (-1 < iVar7);
  SimpleDispSprtLNR((SPRT_SDAT *)&spev21_sp_cap,0x1e90000,0x12,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d'
                    ,0);
  DrawButtonTex(0xa000,3,(float)(int)DAT_0032812e,(float)(int)DAT_00328130,'d');
  DrawButtonTex(0xa000,1,(float)(int)DAT_0032813c,(float)(int)DAT_0032813e,'d');
  return;
}

void ZushiBonjiMSGInit() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void ZushiBonjiMSGMain() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      uVar1 = '\x04';
LAB_001addd4:
      spev_wrk.mode = uVar1;
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ade4c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar1 = '\x05';
    if (spev_wrk.time != '\0') break;
    goto LAB_001addd4;
  case '\x05':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ade4c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if (spev_wrk.mode - 4 < 2) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiMSGDisp();
    return;
  }
  return;
}

void ZushiBonjiMSGDisp() {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  SPRT_SDAT *pSVar5;
  SPRT_SDAT *pSVar6;
  int iVar7;
  int iVar8;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ed88 >> (7 - uVar2) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034ed90 >> (7 - uVar2) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar2 = (uint)&menu_sq0.alpha & 7;
  puVar4 = &menu_sq0.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0034ed98 >> (7 - uVar2) * 8;
  menu_sq0._16_8_ = DAT_0034ed98 & 0xffffffffffffff | (ulong)zushi_alpha[1] << 0x38;
  SetSprFile(0x1e90000);
  pSVar5 = (SPRT_SDAT *)&spev21_sp_bak;
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    SimpleDispSprtLNR(pSVar5,0x1e90000,iVar7,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    pSVar5 = pSVar5 + 1;
    iVar7 = iVar8;
  } while (iVar8 < 0xb);
  pSVar5 = (SPRT_SDAT *)&spev21_sp_zft;
  do {
    pSVar6 = pSVar5 + 1;
    SimpleDispSprtLNR(pSVar5,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    pSVar5 = pSVar6;
  } while ((int)pSVar6 < 0x328060);
  CopySqrDToSqr(&dsq,&menu_sq0);
  DispSqrD(&dsq);
  DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,zushi_alpha[1]);
  if (spev_wrk.mode == '\x04') {
    iVar7 = 0x58;
  }
  else {
    iVar7 = 0x5d;
  }
  spev_str.str = (char *)GetIngameMSGAddr('\a',iVar7);
  spev_str.pos_y = 0x15e;
  spev_str.pos_x = 0x32;
  spev_str.alpha = (int)zushi_alpha[1];
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  return;
}

void ZushiBonjiAfterInit(int bonji_no) {
  LoadReq(0x3a,0x1e90000);
  uGpffffa032 = 1;
  uGpffffa033 = 0x28;
  SetBlackOut();
  uGpffffa036 = uGpffffa018;
  if (((bonji_no != 0x3c) && (uGpffffa036 = uGpffffa01a, bonji_no != 0x3d)) &&
     (uGpffffa036 = uGpffffa01e, bonji_no == 0x3e)) {
    uGpffffa036 = uGpffffa01c;
  }
  uGpffffa034 = 0;
  return;
}

void ZushiBonjiAfterMain(int bonji_no) {
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = cGpffffa033;
  switch(cGpffffa032) {
  case '\x01':
    cVar1 = cGpffffa033 + -1;
    if (cGpffffa033 == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        cGpffffa032 = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        cGpffffa033 = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    cGpffffa033 = cVar1;
    if (cGpffffa033 == '\0') {
      cGpffffa032 = '\x04';
      cGpffffa033 = '\x01';
    }
    else {
LAB_001ae27c:
      cGpffffa033 = cGpffffa033 + -1;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      cGpffffa033 = '\0';
    }
    if (cGpffffa033 == '\0') {
      cGpffffa032 = '\n';
      cGpffffa033 = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (cGpffffa033 == '\0') {
      cGpffffa032 = '\f';
      break;
    }
    goto LAB_001ae27c;
  case '\f':
    uGpffffa031 = 1;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if ((cGpffffa032 == '\x04') || (cGpffffa032 == '\t')) {
    bVar2 = bGpffffaa31 + 6;
    if ((-1 < (char)bGpffffaa31) && (bGpffffaa31 = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      bGpffffaa31 = 0x80;
    }
  }
  else if ((6 < bGpffffaa31) && (bGpffffaa31 = bGpffffaa31 - 6, bGpffffaa31 < 7)) {
    bGpffffaa31 = 0;
  }
  if (cGpffffa032 != '\x01') {
    ZushiBonjiAfterDisp(bonji_no);
    return;
  }
  return;
}

void ZushiBonjiAfterDisp(int bonji_no) {
	int i;
	static int next_count = 0;
	SPRT_SDAT ssd;
	SPRT_SDAT ssd_csr;
	DISP_STR ds;
	DISP_SQAR dsq;
	SQAR_DAT menu_sq0;
	
  undefined *puVar1;
  ulong *puVar2;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  SPRT_SDAT *pSVar6;
  int iVar7;
  SPRT_SDAT *ssd_00;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd_csr;
  DISP_STR ds;
  DISP_SQAR dsq;
  SQAR_DAT menu_sq0;
  
  puVar1 = (undefined *)((int)&menu_sq0.h + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_0034ed88 >> (7 - uVar5) * 8;
  menu_sq0._0_8_ = DAT_0034ed88;
  puVar1 = (undefined *)((int)&menu_sq0.y + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | DAT_0034ed90 >> (7 - uVar5) * 8;
  menu_sq0._8_8_ = DAT_0034ed90;
  uVar5 = (uint)&menu_sq0.alpha & 7;
  puVar3 = &menu_sq0.alpha + -uVar5;
  *(ulong *)puVar3 = *(ulong *)puVar3 & -1L << (uVar5 + 1) * 8 | DAT_0034ed98 >> (7 - uVar5) * 8;
  menu_sq0._16_8_ = DAT_0034ed98 & 0xffffffffffffff | (ulong)zushi_alpha[1] << 0x38;
  SetSprFile(0x1e90000);
  pSVar6 = (SPRT_SDAT *)&spev21_sp_bak;
  iVar7 = 0;
  do {
    iVar4 = iVar7 + 1;
    SimpleDispSprtLNR(pSVar6,0x1e90000,iVar7,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    pSVar6 = pSVar6 + 1;
    iVar7 = iVar4;
  } while (iVar4 < 0xb);
  pSVar6 = (SPRT_SDAT *)&DAT_00328060;
  ssd_00 = (SPRT_SDAT *)&spev21_sp_zbt;
  uVar5 = 0;
  iVar7 = 0;
  do {
    if (uVar5 == spev_wrk.csr[1]) {
      SimpleDispSprtLNR(ssd_00,0x1e90000,uVar5 + 0xd,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
      SimpleDispSprtLNR(pSVar6,0x1e90000,0xb,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d',0);
    }
    else {
      SimpleDispSprtLNR((SPRT_SDAT *)(&spev21_sp_zft + iVar7),0x1e90000,0xb,(SPRT_SROT *)0x0,
                        (SPRT_SSCL *)0x0,'d',0);
    }
    uVar5 = uVar5 + 1;
    pSVar6 = pSVar6 + 1;
    ssd_00 = ssd_00 + 1;
    iVar7 = iVar7 + 0xe;
  } while ((int)uVar5 < 4);
  CopySqrDToSqr(&dsq,&menu_sq0);
  DispSqrD(&dsq);
  DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,zushi_alpha[1]);
  if (bonji_no == 0x3c) {
    iVar7 = 0x61;
  }
  else if (bonji_no == 0x3d) {
    iVar7 = 0x62;
  }
  else if (bonji_no == 0x3e) {
    iVar7 = 99;
  }
  else {
    iVar7 = 100;
  }
  spev_str.str = (char *)GetIngameMSGAddr('\a',iVar7);
  spev_str.pos_x = 0x32;
  spev_str.pos_y = 0x15e;
  spev_str.alpha = (int)zushi_alpha[1];
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  return;
}

void KakejikuDoorInit() {
  uGpffffa032 = 1;
  return;
}

void KakejikuDoorMain() {
  char cVar1;
  int iVar2;
  
  cVar1 = cGpffffa032;
  if (cGpffffa032 == '\x01') {
    iVar2 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar2);
    iVar2 = SetMessage();
    if (iVar2 == 0) {
      cGpffffa031 = cVar1;
    }
  }
  return;
}

void IdoFirstIntoInit() {
  uGpffffa032 = 2;
  uGpffffa033 = 0x3c;
  PlayerWarpReq2('\x01');
  uGpffffa034 = 0;
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  SpevStrInit();
  return;
}

void IdoFirstIntoMain() {
  bool bVar1;
  int iVar2;
  
  if (bGpffffa032 == 3) {
    iVar2 = PlayerWarpCtrl();
    if (iVar2 != 0) {
      cGpffffa033 = '\0';
    }
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 5;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      return;
    }
  }
  else if (bGpffffa032 < 4) {
    if ((bGpffffa032 == 2) && (bVar1 = cGpffffa033 == '\0', cGpffffa033 = cGpffffa033 + -1, bVar1))
    {
      bGpffffa032 = 3;
      cGpffffa033 = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
    }
  }
  else if (bGpffffa032 == 5) {
    uGpffffa031 = 1;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
  }
  return;
}

void IdoIntoInit() {
  uGpffffa032 = 0;
  uGpffffa035 = 0;
  SpevStrInit();
  return;
}

void IdoIntoMain() {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  
  switch(bGpffffa032) {
  case 0:
    if (*key_now[5] == 1) {
      SeStartFix(1,0,0x1000,0x1000,0);
      bGpffffa032 = 2;
      cGpffffa033 = '<';
      SetBlackOut();
      PlayerWarpReq('\x01');
      uGpffffa034 = 0;
      break;
    }
    if (*key_now[4] == 1) {
      bGpffffa032 = 4;
      cGpffffa033 = '\x14';
      iVar4 = 3;
    }
    else {
      if (((*key_now[3] != 1) &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)))) &&
         (((uVar3 = Ana2PadDirCnt('\x01'), uVar3 < 0x1a ||
           (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 != 1)) &&
          ((*key_now[2] != 1 &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            ((sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1 &&
             ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
              (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))))))))) break;
      bGpffffa032 = 1;
      iVar4 = 0;
    }
    goto LAB_001aea60;
  case 1:
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      bGpffffa032 = 4;
      cGpffffa033 = '\x14';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[3] != 1) &&
           (((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 != 1)))))) && (*key_now[2] != 1)) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))))) break;
      bGpffffa032 = 0;
      iVar4 = 0;
    }
LAB_001aea60:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    break;
  case 2:
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 3;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      cGpffffa033 = '(';
      SetBlackIn();
      break;
    }
    goto LAB_001aeb08;
  case 3:
    iVar4 = PlayerWarpCtrl();
    if (iVar4 != 0) {
      cGpffffa033 = '\0';
    }
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 5;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
    }
    break;
  case 4:
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 5;
      break;
    }
LAB_001aeb08:
    cGpffffa033 = cGpffffa033 + -1;
    break;
  case 5:
    uGpffffa031 = 1;
  }
  if (bGpffffa032 < 2) {
    bVar5 = bGpffffa035 + 8;
    if ((bGpffffa035 < 0x78) && (bGpffffa035 = bVar5, 0x77 < bVar5)) {
      bGpffffa035 = 0x80;
    }
  }
  else {
    bVar1 = bGpffffa035 < 9;
    bGpffffa035 = bGpffffa035 - 8;
    if ((bVar1) || (bGpffffa035 < 9)) {
      bGpffffa035 = 0;
    }
  }
  IdoInOutDisp(1);
  return;
}

void IdoFirstOutInit() {
  uGpffffa032 = 2;
  uGpffffa033 = 0x3c;
  PlayerWarpReq2('\0');
  uGpffffa034 = 0;
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  SpevStrInit();
  return;
}

void IdoFirstOutMain() {
  bool bVar1;
  int iVar2;
  
  if (bGpffffa032 != 3) {
    if (3 < bGpffffa032) {
      if (bGpffffa032 != 5) {
        return;
      }
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      uGpffffa031 = 1;
      return;
    }
    if (bGpffffa032 != 2) {
      return;
    }
    bVar1 = cGpffffa033 == '\0';
    cGpffffa033 = cGpffffa033 + -1;
    if (bVar1) {
      bGpffffa032 = 3;
      cGpffffa033 = 0x28;
      return;
    }
  }
  iVar2 = PlayerWarpCtrl();
  if (iVar2 != 0) {
    cGpffffa033 = '\0';
  }
  if (cGpffffa033 != '\0') {
    return;
  }
  bGpffffa032 = 5;
  ingame_wrk.stts = ingame_wrk.stts & 0xdf;
  SetBlackIn();
  return;
}

void IdoOutInit() {
  uGpffffa032 = 0;
  SpevStrInit();
  return;
}

void IdoOutMain() {
  bool bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  
  cVar2 = cGpffffa033;
  switch(bGpffffa032) {
  case 0:
    if (*key_now[5] == 1) {
      SeStartFix(1,0,0x1000,0x1000,0);
      bGpffffa032 = 2;
      cGpffffa033 = '<';
      SetBlackOut();
      PlayerWarpReq('\0');
      uGpffffa034 = 0;
      cVar2 = cGpffffa033;
      break;
    }
    if (*key_now[4] == 1) {
      bGpffffa032 = 4;
      cGpffffa033 = '\x14';
      iVar5 = 3;
    }
    else {
      if (((*key_now[3] != 1) &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 != 1)))) &&
         (((uVar4 = Ana2PadDirCnt('\x01'), uVar4 < 0x1a ||
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 != 1)) &&
          ((*key_now[2] != 1 &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1 &&
             ((uVar4 = Ana2PadDirCnt('\x03'), cVar2 = cGpffffa033, uVar4 < 0x1a ||
              (sVar3 = Ana2PadDirCnt('\x03'), cVar2 = cGpffffa033, (int)sVar3 % 5 != 1))))))))))))
      break;
      bGpffffa032 = 1;
      iVar5 = 0;
    }
    goto LAB_001aefe0;
  case 1:
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      bGpffffa032 = 4;
      cGpffffa033 = '\x14';
      iVar5 = 3;
    }
    else {
      if ((((*key_now[3] != 1) &&
           (((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
             (sVar3 = Ana2PadDirCnt('\x01'), sVar3 != 1)) &&
            ((uVar4 = Ana2PadDirCnt('\x01'), uVar4 < 0x1a ||
             (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 != 1)))))) && (*key_now[2] != 1)) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1 &&
           ((uVar4 = Ana2PadDirCnt('\x03'), cVar2 = cGpffffa033, uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), cVar2 = cGpffffa033, (int)sVar3 % 5 != 1)))))))) break;
      bGpffffa032 = 0;
      iVar5 = 0;
    }
LAB_001aefe0:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    cVar2 = cGpffffa033;
    break;
  case 2:
    bVar1 = cGpffffa033 == '\0';
    cGpffffa033 = cGpffffa033 + -1;
    if (bVar1) {
      bGpffffa032 = 3;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      cGpffffa033 = '(';
      cVar2 = cGpffffa033;
      break;
    }
  case 3:
    iVar5 = PlayerWarpCtrl();
    if (iVar5 != 0) {
      cGpffffa033 = '\0';
    }
    cVar2 = cGpffffa033;
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 5;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      cVar2 = cGpffffa033;
    }
    break;
  case 4:
    cVar2 = cGpffffa033 + -1;
    if (cGpffffa033 == '\0') {
      bGpffffa032 = 5;
      cVar2 = cGpffffa033;
    }
    break;
  case 5:
    uGpffffa031 = 1;
  }
  cGpffffa033 = cVar2;
  if (bGpffffa032 < 2) {
    bVar6 = bGpffffa035 + 8;
    if ((bGpffffa035 < 0x78) && (bGpffffa035 = bVar6, 0x77 < bVar6)) {
      bGpffffa035 = 0x80;
    }
  }
  else {
    bVar1 = bGpffffa035 < 9;
    bGpffffa035 = bGpffffa035 - 8;
    if ((bVar1) || (bGpffffa035 < 9)) {
      bGpffffa035 = 0;
    }
  }
  IdoInOutDisp(0);
  return;
}

void IdoInOutDisp(int inout) {
	DISP_STR ds;
	
  int iVar1;
  DISP_STR ds;
  
  if ((spev_wrk.mode < 3) || (spev_wrk.mode == '\x04')) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.csr[0]);
    if (inout == 1) {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x5f);
      spev_str.pos_x = 0xc3;
      spev_str.pos_y = 0x159;
      spev_str.alpha = (int)spev_wrk.csr[0];
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    else {
      spev_str.str = (char *)GetIngameMSGAddr('\a',0x60);
      iVar1 = GetStrWidth((uchar *)spev_str.str);
      spev_str.pos_x = 0x140 - iVar1 / 2;
      spev_str.pos_y = 0x159;
      spev_str.alpha = (int)spev_wrk.csr[0];
      CopyStrDToStr(&ds,&spev_str);
      SetMessageV2(&ds);
    }
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.alpha = (int)spev_wrk.csr[0];
    spev_str.pos_x = 0xd7;
    spev_str.pos_y = 0x175;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 0x13b;
    spev_str.pos_y = 0x175;
    spev_str.alpha = (int)spev_wrk.csr[0];
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (spev_wrk.mode == '\0') {
      YesNoCrslOKR(0x2000,192.0,370.0,0x808080,100.0,1.5);
    }
    else if (spev_wrk.mode == '\x01') {
      YesNoCrslOKR(0x2000,290.0,370.0,0x808080,100.0,1.5);
    }
  }
  return;
}

void ItemEventInit(int event_no) {
  uint file_no;
  
  spev_wrk.csr[0] = DAT_003284d2;
  switch(event_no) {
  default:
    spev_wrk.csr[1] = 'e';
    spev_wrk.csr[2] = 'f';
    spev_wrk.csr[0] = camera_table;
    break;
  case 0x41:
    spev_wrk.csr[1] = 'g';
    spev_wrk.csr[2] = 'h';
    spev_wrk.csr[0] = DAT_003284ba;
    break;
  case 0x42:
    spev_wrk.csr[1] = 'i';
    spev_wrk.csr[2] = 'j';
    spev_wrk.csr[0] = DAT_003284bc;
    break;
  case 0x43:
    spev_wrk.csr[1] = 'k';
    spev_wrk.csr[2] = 'l';
    spev_wrk.csr[0] = DAT_003284be;
    break;
  case 0x44:
    spev_wrk.csr[1] = 'm';
    spev_wrk.csr[2] = 'n';
    spev_wrk.csr[0] = DAT_003284c0;
    break;
  case 0x45:
    spev_wrk.csr[1] = 'o';
    spev_wrk.csr[2] = 'p';
    spev_wrk.csr[0] = DAT_003284c2;
    break;
  case 0x46:
    spev_wrk.csr[1] = 'q';
    spev_wrk.csr[2] = 'r';
    spev_wrk.csr[0] = DAT_003284c4;
    break;
  case 0x47:
    spev_wrk.csr[1] = 's';
    spev_wrk.csr[2] = 't';
    spev_wrk.csr[0] = DAT_003284c6;
    break;
  case 0x48:
    spev_wrk.csr[1] = 'u';
    spev_wrk.csr[2] = 'v';
    spev_wrk.csr[0] = DAT_003284c8;
    break;
  case 0x49:
    spev_wrk.csr[1] = 'w';
    spev_wrk.csr[2] = 'x';
    spev_wrk.csr[0] = DAT_003284ca;
    break;
  case 0x4a:
    spev_wrk.csr[1] = 'y';
    spev_wrk.csr[2] = 'z';
    spev_wrk.csr[0] = DAT_003284cc;
    break;
  case 0x4b:
    spev_wrk.csr[1] = '{';
    spev_wrk.csr[2] = '|';
    spev_wrk.csr[0] = DAT_003284ce;
    break;
  case 0x4c:
    spev_wrk.csr[1] = '}';
    spev_wrk.csr[2] = '~';
    spev_wrk.csr[0] = DAT_003284d0;
    break;
  case 0x4d:
    spev_wrk.csr[1] = '\x7f';
    spev_wrk.csr[2] = 0x80;
    break;
  case 0x4e:
    spev_wrk.csr[1] = 0x81;
    spev_wrk.csr[2] = 0x82;
    break;
  case 0x52:
    spev_wrk.csr[1] = 'w';
    spev_wrk.csr[2] = 'x';
    spev_wrk.csr[0] = DAT_003284d6;
    break;
  case 0x53:
    spev_wrk.csr[1] = 'y';
    spev_wrk.csr[2] = 'z';
    spev_wrk.csr[0] = DAT_003284d8;
    break;
  case 0x54:
    spev_wrk.csr[1] = '{';
    spev_wrk.csr[2] = '|';
    spev_wrk.csr[0] = DAT_003284da;
    break;
  case 0x55:
    spev_wrk.csr[1] = '}';
    spev_wrk.csr[2] = '~';
    spev_wrk.csr[0] = DAT_003284dc;
  }
  file_no = 0x5f4;
  if (event_no == 0x4e) {
    file_no = 0x5ea;
  }
  pzl_load_id = SeFileLoadAndSet(file_no,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void ItemEventMain(int event_no) {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      switch(event_no) {
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
        iVar4 = 0x5d;
        break;
      default:
        iVar4 = 1;
        break;
      case 0x4e:
        spev_wrk.mode = '\a';
        spev_wrk.count = '(';
        SetBlackOut();
        uVar1 = spev_wrk.count;
        goto LAB_001afa78;
      }
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
LAB_001afa78:
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void ItemEventDisp() {
	DISP_STR ds;
	
  DISP_STR ds;
  
  if (spev_wrk.mode == '\x02') {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)spev_wrk.csr[1]);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else if (((byte)(spev_wrk.mode - 5) < 2) || (spev_wrk.mode == '\b')) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    ButtonMarkNext(0,0,0);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)spev_wrk.csr[2]);
    spev_str.pos_y = 0x15e;
    spev_str.pos_x = 0x32;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.pos_x = 100;
    spev_str.alpha = (int)spev_wrk.time;
    spev_str.pos_y = 0x17c;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 200;
    spev_str.pos_y = 0x17c;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    if (spev_wrk.mode == '\x05') {
      YesNoCrslOKR(0x2000,77.0,DAT_00355d2c,0x808080,100.0,1.5);
    }
    else if (spev_wrk.mode == '\x06') {
      YesNoCrslOKR(0x2000,170.0,DAT_00355d30,0x808080,100.0,1.5);
    }
  }
  return;
}

void NawakakeFalseMain(int event_no) {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  NawakakeFalseDisp();
  uVar1 = spev_wrk.mode;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEndAll();
    uVar1 = '\x02';
    if (iVar4 != 0) break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x05';
    }
    break;
  case '\x03':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x04';
    }
    break;
  case '\x04':
    iVar4 = ButtonMarkNext(0,0,0);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\b';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\x03';
      if (event_no != 0x53) {
        uVar1 = spev_wrk.mode;
        if (event_no < 0x54) {
          iVar4 = 0x5d;
          if (event_no != 0x52) break;
          goto LAB_001afe1c;
        }
        if ((event_no != 0x54) && (event_no != 0x55)) break;
      }
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((*key_now[2] != 1) &&
          ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
           (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
         (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
           (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) &&
          ((*key_now[3] != 1 &&
           ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
            ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
             ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
              (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001afe1c;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) &&
            ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001afe1c:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.mode;
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\n':
    goto LAB_001b0164;
  case '\v':
LAB_001b0164:
    spev_wrk.ret = '\x01';
    spev_str.alpha = 0x80;
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.mode;
  }
  spev_wrk.mode = uVar1;
  if (spev_wrk.mode - 2 < 5) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void NawakakeFalseDisp() {
	DISP_STR ds;
	
  uint uVar1;
  float pos_y;
  float pos_x;
  DISP_STR ds;
  
  uVar1 = (uint)spev_wrk.mode;
  if (uVar1 == 2) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)spev_wrk.csr[1]);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  else {
    if (1 < uVar1 - 5) goto LAB_001b03f0;
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    spev_str.str = (char *)GetIngameMSGAddr('\a',(uint)spev_wrk.csr[2]);
    spev_str.pos_y = 0x15e;
    spev_str.pos_x = 0x32;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x10);
    spev_str.pos_x = 100;
    spev_str.alpha = (int)spev_wrk.time;
    spev_str.pos_y = 0x17c;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x11);
    spev_str.pos_x = 200;
    spev_str.pos_y = 0x17c;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar1 = (uint)spev_wrk.mode;
    if (uVar1 == 5) {
      pos_x = 77.0;
      pos_y = DAT_00355d34;
    }
    else {
      if (uVar1 != 6) goto LAB_001b03f0;
      pos_x = 170.0;
      pos_y = DAT_00355d38;
    }
    YesNoCrslOKR(0x2000,pos_x,pos_y,0x808080,100.0,1.5);
  }
  uVar1 = (uint)spev_wrk.mode;
LAB_001b03f0:
  if (uVar1 == 3) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x19);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
    uVar1 = (uint)spev_wrk.mode;
  }
  if ((uVar1 == 4) || (uVar1 == 8)) {
    DrawMessageBox(0x2000,19.0,328.0,592.0,96.0,spev_wrk.time);
    spev_str.str = (char *)GetIngameMSGAddr('\a',0x1a);
    spev_str.pos_x = 0x32;
    spev_str.pos_y = 0x15e;
    spev_str.alpha = (int)spev_wrk.time;
    CopyStrDToStr(&ds,&spev_str);
    SetMessageV2(&ds);
  }
  return;
}

void SpecialEventInit000() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(0);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain000() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit001() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(1);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain001() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit002() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 0) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 0) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(0);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain002() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 0) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(0);
    return;
  }
  return;
}

void SpecialEventInit003() {
  GhostDoorSet(0);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain003() {
  return;
}

void SpecialEventInit004() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x31,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x06';
  StarPuzzleDataSet(6);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain004() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x31,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit005() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 1) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 1) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(1);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain005() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 1) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(1);
    return;
  }
  return;
}

void SpecialEventInit006() {
  GhostDoorSet(1);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain006() {
  return;
}

void SpecialEventInit007() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 2) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 2) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(2);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain007() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 2) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(2);
    return;
  }
  return;
}

void SpecialEventInit008() {
  GhostDoorSet(2);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain008() {
  return;
}

void SpecialEventInit009() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x30,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x06';
  StarPuzzleDataSet(6);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain009() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x30,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit010() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(2);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain010() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit011() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2b,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\0';
  StarPuzzleDataSet(0);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain011() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2b,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit012() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2b,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\0';
  StarPuzzleDataSet(0);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain012() {
  undefined *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined auStack_60 [4];
  undefined uStack_5c;
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = auStack_60;
  puVar9 = auStack_60;
  puVar1 = auStack_60 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  auStack_60 = (undefined  [4])DAT_00357038;
  uStack_5c = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2b,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        pzl_load_id = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        pzl_load_id = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (pzl_load_id == -1) {
      pzl_load_id = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        spev_wrk.ret = '\x01';
        pzl_load_id = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = auStack_60[iVar12 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = auStack_60[iVar10 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

void SpecialEventInit013() {
  bool bVar1;
  char *pcVar2;
  int iVar3;
  EV_BTZ_DAT *pEVar4;
  
  iVar3 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x37,0x1e90000);
    pzl_load_id = iVar3;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.csr[0] = '\0';
  spev_wrk.csr[1] = '\0';
  pEVar4 = evbtz_dat;
  spev_wrk.csr[2] = '\0';
  iVar3 = 0;
  spev_wrk.count = '\0';
  spev_wrk.mode = bVar1;
  do {
    pcVar2 = order_keep + iVar3;
    pEVar4->use_flg = 0;
    pEVar4->set_place = 0xffff;
    iVar3 = iVar3 + 1;
    *pcVar2 = -1;
    pEVar4 = pEVar4 + 1;
  } while (iVar3 < 5);
  order_no = '\0';
  evbld_dat.t_counter = 0;
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain013() {
  bool bVar1;
  char cVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  ushort uVar6;
  char *pcVar7;
  int iVar8;
  EV_BTZ_DAT *pEVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar4 = spev_wrk.csr[1];
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x37,0x1e90000);
    SeFileLoadAndSet(0x54e,2);
    pzl_load_id = -1;
    spev_wrk.mode = '\x01';
    spev_wrk.time = '(';
    break;
  case '\x01':
    if (spev_wrk.time != '\0') goto LAB_001a70f4;
    iVar8 = IsLoadEndAll();
    if (iVar8 == 0) break;
    SetSprFile(0x1e90000);
    spev_wrk.mode = '\x02';
    uVar11 = 0x54e;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    goto LAB_001a7124;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar8 = IsLoadEnd(pzl_load_id);
      if (iVar8 == 0) break;
      spev_wrk.mode = '\x03';
      spev_wrk.time = '(';
LAB_001a716c:
      pzl_load_id = -1;
      SetBlackIn();
      break;
    }
    goto LAB_001a70f4;
  case '\x03':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      break;
    }
    goto LAB_001a70f4;
  case '\x04':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    if (*key_now[4] == 1) {
      if (order_no == '\0') {
        spev_wrk.mode = '\x0f';
        spev_wrk.time = '<';
        SetBlackOut();
      }
      else {
        order_no = order_no + -1;
        cVar2 = order_keep[order_no];
        order_keep[order_no] = -1;
        evbtz_dat[cVar2].use_flg = 0;
        evbtz_dat[cVar2].set_place = 0xffff;
      }
      iVar8 = 3;
    }
    else if (*key_now[5] == 1) {
      if (evbtz_dat[spev_wrk.csr[0]].set_place == 0xffff) {
        spev_wrk.csr[1] = '\b';
      }
      else {
        spev_wrk.csr[1] = *(char *)&evbtz_dat[spev_wrk.csr[0]].set_place << 1;
      }
      spev_wrk.time = '\x14';
      spev_wrk.mode = '\x05';
      iVar8 = 0x21;
    }
    else if ((*key_now[3] == 1) ||
            ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
              (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 1)) ||
             ((uVar6 = Ana2PadDirCnt('\x01'), 0x19 < uVar6 &&
              (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 == 1)))))) {
      iVar12 = 1;
      iVar8 = spev_wrk.csr[0] + 1;
      do {
        if (evbtz_dat[iVar8 % 5].use_flg == 0) {
          spev_wrk.csr[0] = (uchar)(iVar8 % 5);
          spev_wrk.time = '\x14';
          iVar8 = 0;
          goto LAB_001a6fb8;
        }
        bVar1 = iVar12 == 6;
        iVar12 = iVar12 + 1;
        if (bVar1) {
          spev_wrk.mode = '\x05';
        }
        iVar8 = (uint)spev_wrk.csr[0] + iVar12;
      } while (iVar12 < 6);
      iVar8 = 0;
    }
    else {
      if ((((*key_now[2] != 1) &&
           (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
          (sVar5 = Ana2PadDirCnt('\x03'), sVar5 != 1)) &&
         ((uVar6 = Ana2PadDirCnt('\x03'), uVar6 < 0x1a ||
          (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 != 1)))) break;
      iVar12 = 1;
      pEVar9 = evbtz_dat + spev_wrk.csr[0];
      iVar8 = spev_wrk.csr[0] + 4;
      do {
        pEVar9 = pEVar9 + -1;
        if ((int)((uint)spev_wrk.csr[0] - iVar12) < 0) {
          if (evbtz_dat[iVar8].use_flg == 0) {
            spev_wrk.csr[0] = (uchar)iVar8;
            spev_wrk.time = '\x14';
            break;
          }
        }
        else if (pEVar9->use_flg == 0) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[0] = (uchar)((int)((uint)spev_wrk.csr[0] - iVar12) % 5);
          break;
        }
        iVar12 = iVar12 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar12 < 6);
      iVar8 = 0;
      if (iVar12 == 6) {
        spev_wrk.mode = '\x05';
      }
    }
    goto LAB_001a6fb8;
  case '\x05':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    if (*key_now[4] == 1) {
      uVar11 = (uint)spev_wrk.csr[0];
      evbtz_dat[spev_wrk.csr[0]].use_flg = 0;
      evbtz_dat[uVar11].set_place = 0xffff;
      spev_wrk.mode = '\x04';
      break;
    }
    if (*key_now[5] != 1) {
      if (((*key_now[0] == 1) ||
          (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar5 = Ana2PadDirCnt('\0'), sVar5 == 1)))) ||
         ((uVar6 = Ana2PadDirCnt('\0'), 0x19 < uVar6 &&
          (sVar5 = Ana2PadDirCnt('\0'), (int)sVar5 % 5 == 1)))) {
        uVar11 = spev_wrk.csr[1] + 2;
        if (uVar11 % 6 == 0) {
          uVar11 = (uint)spev_wrk.csr[0];
          uVar10 = spev_wrk.csr[1] - 4;
          goto LAB_001a6c88;
        }
        spev_wrk.csr[1] = (uchar)uVar11;
        evbtz_dat[spev_wrk.csr[0]].set_place = (ushort)((uVar11 & 0xff) >> 1);
      }
      else {
        if (((*key_now[1] == 1) ||
            ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
           ((sVar5 = Ana2PadDirCnt('\x02'), sVar5 == 1 ||
            ((uVar6 = Ana2PadDirCnt('\x02'), 0x19 < uVar6 &&
             (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 == 1)))))) {
          if ((uint)spev_wrk.csr[1] % 6 == 0) {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] + 4;
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 2;
          }
        }
        else if (((*key_now[2] == 1) ||
                 (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                  (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)))) ||
                ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
                 (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))) {
          if (spev_wrk.csr[1] < 5) {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] + 0xc;
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 6;
          }
        }
        else {
          if (((*key_now[3] != 1) &&
              (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
             ((sVar5 = Ana2PadDirCnt('\x01'), sVar5 != 1 &&
              ((uVar6 = Ana2PadDirCnt('\x01'), uVar6 < 0x1a ||
               (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 != 1)))))) break;
          if (spev_wrk.csr[1] < 0xb) {
            uVar10 = spev_wrk.csr[1] + 6;
            uVar11 = (uint)spev_wrk.csr[0];
          }
          else {
            uVar11 = (uint)spev_wrk.csr[0];
            uVar10 = spev_wrk.csr[1] - 0xc;
          }
        }
LAB_001a6c88:
        evbtz_dat[uVar11].set_place = (ushort)((uVar10 & 0xff) >> 1);
        spev_wrk.csr[1] = (uchar)uVar10;
      }
      spev_wrk.time = '\x14';
      break;
    }
    uVar11 = 0;
    if ((long)(short)evbtz_dat[0].set_place == (long)(int)(uint)(spev_wrk.csr[1] >> 1)) {
      if (spev_wrk.csr[0] == '\0') {
        uVar11 = 1;
        goto LAB_001a68a0;
      }
    }
    else {
      uVar11 = 1;
LAB_001a68a0:
      while ((int)uVar11 < 5) {
        if ((long)(short)evbtz_dat[uVar11].set_place == (long)(int)(uint)(spev_wrk.csr[1] >> 1)) {
          if (uVar11 != spev_wrk.csr[0]) break;
          uVar11 = uVar11 + 1;
        }
        else {
          uVar11 = uVar11 + 1;
        }
      }
    }
    if (uVar11 != 5) {
      evbtz_dat[spev_wrk.csr[0]].set_place = 0xffff;
      spev_wrk.mode = '\t';
      spev_wrk.time = '<';
      break;
    }
    uVar11 = (uint)spev_wrk.csr[0];
    evbtz_dat[spev_wrk.csr[0]].use_flg = 1;
    evbtz_dat[uVar11].set_place = (ushort)(uVar4 >> 1);
    uVar6 = evbtz_dat[0].use_flg;
    iVar8 = (int)order_no;
    order_no = order_no + '\x01';
    order_keep[iVar8] = spev_wrk.csr[0];
    spev_wrk.mode = '\b';
    spev_wrk.time = '(';
    iVar12 = 0;
    if (uVar6 == 0) {
      spev_wrk.csr[0] = '\0';
    }
    else {
      for (iVar12 = 1; iVar12 < 5; iVar12 = iVar12 + 1) {
        if (evbtz_dat[iVar12].use_flg == 0) {
          spev_wrk.csr[0] = (uchar)iVar12;
          break;
        }
      }
    }
    iVar8 = 0x22;
    if (iVar12 == 5) {
      spev_wrk.mode = '\n';
    }
LAB_001a6fb8:
    SeStartFix(iVar8,0,0x1000,0x1000,0);
    break;
  case '\x06':
  case '\a':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\x05';
      spev_wrk.time = '\x14';
    }
    if (((((*key_now[3] == 1) ||
          ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar5 = Ana2PadDirCnt('\x01'), sVar5 == 1)) ||
           ((uVar6 = Ana2PadDirCnt('\x01'), 0x19 < uVar6 &&
            (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 == 1)))))) || (*key_now[2] == 1)) ||
        (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
         ((sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1 ||
          ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
           (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))))))) &&
       (bVar1 = spev_wrk.mode == '\x06', spev_wrk.mode = '\x06', bVar1)) {
      spev_wrk.mode = '\a';
    }
    if (spev_wrk.time == '\0') {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x05';
      if (bVar1) {
        uVar11 = (uint)spev_wrk.csr[0];
        bVar3 = spev_wrk.csr[1] >> 1;
        evbtz_dat[spev_wrk.csr[0]].use_flg = 1;
        evbtz_dat[uVar11].set_place = (ushort)bVar3;
        uVar6 = evbtz_dat[0].use_flg;
        order_keep[order_no] = spev_wrk.csr[0];
        order_no = order_no + '\x01';
        spev_wrk.mode = '\b';
        spev_wrk.time = '(';
        iVar8 = 0;
        if (uVar6 == 0) {
          spev_wrk.csr[0] = '\0';
        }
        else {
          for (iVar8 = 1; iVar8 < 5; iVar8 = iVar8 + 1) {
            if (evbtz_dat[iVar8].use_flg == 0) {
              spev_wrk.csr[0] = (uchar)iVar8;
              break;
            }
          }
        }
        if (iVar8 == 5) {
          spev_wrk.mode = '\n';
        }
      }
      else {
        spev_wrk.time = '\x14';
      }
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      break;
    }
    goto LAB_001a70f4;
  case '\t':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      iVar8 = 0;
      if (evbtz_dat[0].set_place == evbtz_ans[0].set_place) {
        for (iVar8 = 1; (iVar8 < 5 && (evbtz_dat[iVar8].set_place == evbtz_ans[iVar8].set_place));
            iVar8 = iVar8 + 1) {
        }
      }
      spev_wrk.mode = '\f';
      if (iVar8 != 5) {
        spev_wrk.time = 'P';
        break;
      }
      spev_wrk.time = 'P';
      spev_wrk.mode = '\r';
      iVar8 = 0x23;
      goto LAB_001a6fb8;
    }
    goto LAB_001a70f4;
  case '\f':
    iVar8 = ButtonMarkNext(-0xb4,8,1);
    if (iVar8 != 0) {
      spev_wrk.time = '\0';
    }
    if ((spev_wrk.time == '\0') && (iVar8 = ButtonMarkWait(), iVar8 == 0)) {
      spev_wrk.time = '\x14';
      pEVar9 = evbtz_dat;
      spev_wrk.csr[0] = '\0';
      iVar8 = 0;
      spev_wrk.csr[1] = '\0';
      spev_wrk.count = '\0';
      order_no = '\0';
      do {
        pcVar7 = order_keep + iVar8;
        pEVar9->use_flg = 0;
        pEVar9->set_place = 0xffff;
        iVar8 = iVar8 + 1;
        *pcVar7 = -1;
        pEVar9 = pEVar9 + 1;
      } while (iVar8 < 5);
      spev_wrk.mode = '\x04';
    }
    break;
  case '\r':
    iVar8 = ButtonMarkNext(-0xb4,0,1);
    if (iVar8 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\x0f';
      spev_wrk.time = '<';
      SetBlackOut();
    }
    break;
  case '\x0f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      break;
    }
LAB_001a70f4:
    spev_wrk.time = spev_wrk.time + 0xff;
    break;
  case '\x10':
    if (pzl_load_id != -1) {
      iVar8 = IsLoadEnd(pzl_load_id);
      if (iVar8 == 0) break;
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a716c;
    }
    uVar11 = 0x549;
LAB_001a7124:
    pzl_load_id = SeFileLoadAndSet(uVar11,2);
  }
  evbld_dat.t_counter = evbld_dat.t_counter + 1;
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\x10')) {
    SpecialEventDisp004();
    return;
  }
  return;
}

void SpecialEventInit014() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 3) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 3) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(3);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain014() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 3) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(3);
    return;
  }
  return;
}

void SpecialEventInit015() {
  GhostDoorSet(3);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain015() {
  return;
}

void SpecialEventInit016() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(3);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain016() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit017() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2c,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x01';
  StarPuzzleDataSet(1);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain017() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2c,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit018() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2c,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x01';
  StarPuzzleDataSet(1);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain018() {
  undefined *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined auStack_60 [4];
  undefined uStack_5c;
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = auStack_60;
  puVar9 = auStack_60;
  puVar1 = auStack_60 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  auStack_60 = (undefined  [4])DAT_00357038;
  uStack_5c = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2c,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        pzl_load_id = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        pzl_load_id = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (pzl_load_id == -1) {
      pzl_load_id = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        spev_wrk.ret = '\x01';
        pzl_load_id = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = auStack_60[iVar12 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = auStack_60[iVar10 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

void SpecialEventInit019() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2e,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x02';
  StarPuzzleDataSet(2);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain019() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2e,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit020() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2e,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x02';
  StarPuzzleDataSet(2);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain020() {
  undefined *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined auStack_60 [4];
  undefined uStack_5c;
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = auStack_60;
  puVar9 = auStack_60;
  puVar1 = auStack_60 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  auStack_60 = (undefined  [4])DAT_00357038;
  uStack_5c = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2e,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        pzl_load_id = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        pzl_load_id = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (pzl_load_id == -1) {
      pzl_load_id = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        spev_wrk.ret = '\x01';
        pzl_load_id = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = auStack_60[iVar12 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = auStack_60[iVar10 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

void SpecialEventInit021() {
  bool bVar1;
  ushort uVar2;
  EV_CDL_DAT *pEVar3;
  int iVar4;
  
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x38,0x1e90000);
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.count = '\0';
  spev_wrk.mode = bVar1;
  CsrClearAll();
  iVar4 = 5;
  pEVar3 = &evcdl_dat;
  do {
    uVar2 = pEVar3->cdl_flg[1][0];
    iVar4 = iVar4 + -1;
    pEVar3->flame_time[0] = 0;
    pEVar3->cdl_flg[0] = uVar2;
    pEVar3->flame_alpha[0] = 0;
    pEVar3->stflame_alpha[0] = 0;
    pEVar3->stflame_time[0] = 0;
    pEVar3->stflame_shape[0] = 0;
    pEVar3 = (EV_CDL_DAT *)(pEVar3->cdl_flg + 1);
  } while (-1 < iVar4);
  SetBlackOut();
  return;
}

void SpecialEventMain021() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  EV_CDL_DAT *pEVar7;
  ushort *puVar8;
  uint file_no;
  EV_CDL_DAT *pEVar9;
  short *psVar10;
  
  bVar3 = spev_wrk.csr[0];
  uVar2 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x38,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar6 = IsLoadEndAll();
      if (iVar6 == 0) goto switchD_001a8540_caseD_e;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      file_no = 0x54f;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      goto LAB_001a8be0;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar6 = IsLoadEnd(pzl_load_id);
      if (iVar6 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        spev_wrk.time = '\x1e';
        SetBlackIn();
      }
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar6 = CsrInclease(spev_wrk.csr + 1,'T','\x04');
      if (iVar6 != 0) {
        spev_wrk.time = '(';
        spev_wrk.mode = '\x04';
      }
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\x04':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    CsrInclease(spev_wrk.csr + 1,'T','\x04');
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\f';
      spev_wrk.time = '(';
      SetBlackOut();
      goto switchD_001a8540_caseD_e;
    }
    if (*key_now[7] == 1) {
      iVar6 = 5;
      pEVar7 = &evcdl_dat;
      do {
        iVar6 = iVar6 + -1;
        pEVar7->cdl_flg[0] = pEVar7->cdl_flg[1][0];
        pEVar7 = (EV_CDL_DAT *)(pEVar7->cdl_flg + 1);
      } while (-1 < iVar6);
      spev_wrk.time = '\x14';
      spev_wrk.mode = '\a';
      iVar6 = 3;
    }
    else if (*key_now[5] == 1) {
      if (evcdl_dat.flame_alpha[spev_wrk.csr[0] - 0x12] != 0) goto switchD_001a8540_caseD_e;
      evcdl_dat.flame_alpha[spev_wrk.csr[0] - 0x12] = 1;
      iVar6 = 0x21;
      spev_wrk.mode = '\x05';
      spev_wrk.time = '\x1e';
    }
    else if ((*key_now[3] == 1) ||
            ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
              (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
             ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
              (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))))) {
      spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
      if (spev_wrk.csr[0] == '\x06') {
        spev_wrk.csr[0] = '\0';
      }
      CsrClear(spev_wrk.csr + 1);
      iVar6 = 0;
    }
    else {
      if ((((*key_now[2] != 1) &&
           (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
          (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
         ((uVar5 = Ana2PadDirCnt('\x03'), uVar5 < 0x1a ||
          (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 != 1)))) goto switchD_001a8540_caseD_e;
      bVar1 = spev_wrk.csr[0] == '\0';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
      if (bVar1) {
        spev_wrk.csr[0] = '\x05';
      }
      CsrClear(spev_wrk.csr + 1);
      iVar6 = 0;
    }
LAB_001a8a9c:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    goto switchD_001a8540_caseD_e;
  case '\x05':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      CsrInclease(spev_wrk.csr + 1,'T','\x04');
      goto switchD_001a8540_caseD_e;
    }
    if (spev_wrk.csr[0] == '\0') {
      puVar8 = evcdl_dat.cdl_flg + 1;
      if (evcdl_dat.cdl_flg[0][1] == 0) {
LAB_001a8910:
        *puVar8 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
      }
      else {
        evcdl_dat.cdl_flg[0][1] = 0;
      }
    }
    else if (spev_wrk.csr[0] == '\x05') {
      puVar8 = evcdl_dat.cdl_flg + 4;
      if (evcdl_dat.cdl_flg[0][4] == 0) goto LAB_001a8910;
      evcdl_dat.cdl_flg[0][4] = 0;
    }
    else {
      puVar8 = evcdl_dat.cdl_flg + spev_wrk.csr[0] + 1;
      if (*puVar8 == 0) {
        *puVar8 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
        bVar3 = spev_wrk.csr[0];
      }
      else {
        *puVar8 = 0;
      }
      psVar10 = (short *)((int)evcdl_dat.cdl_flg[-1] + (uint)bVar3 * 2 + 10);
      if (*psVar10 == 0) {
        *psVar10 = 1;
        SeStartFix(0x21,0,0x1000,0x1000,0);
      }
      else {
        *psVar10 = 0;
      }
    }
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\x06';
    goto switchD_001a8540_caseD_e;
  case '\x06':
    if (spev_wrk.time != '\0') {
      CsrInclease(spev_wrk.csr + 1,'T','\x04');
      spev_wrk.time = spev_wrk.time + 0xff;
      goto switchD_001a8540_caseD_e;
    }
    iVar6 = 0;
    if (evcdl_dat.cdl_flg[0][0] == evcdl_dat.cdl_flg[2][0]) {
      iVar6 = 1;
      pEVar7 = &evcdl_dat;
      while ((pEVar9 = (EV_CDL_DAT *)(pEVar7->cdl_flg + 1), iVar6 < 6 &&
             (pEVar9->cdl_flg[0] == pEVar7->cdl_flg[2][1]))) {
        iVar6 = iVar6 + 1;
        pEVar7 = pEVar9;
      }
    }
    if (iVar6 == 6) {
      spev_wrk.time = '\b';
      spev_wrk.mode = '\b';
      goto switchD_001a8540_caseD_e;
    }
LAB_001a8a64:
    spev_wrk.time = '(';
    spev_wrk.mode = '\x04';
    goto switchD_001a8540_caseD_e;
  case '\a':
    if (spev_wrk.time == '\0') goto LAB_001a8a64;
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '<';
      spev_wrk.mode = '\t';
      iVar6 = 0x22;
      goto LAB_001a8a9c;
    }
    break;
  case '\t':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 0xff;
      pzl_load_id = SeStartFix(0x23,0,0x1000,0x1000,0);
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\n':
    iVar6 = ButtonMarkNext(0,0,0);
    if (iVar6 != 0) {
      if (spev_wrk.time != '\0') {
        spev_wrk.time = spev_wrk.time + 0xff;
      }
      bVar3 = IsEndSe(pzl_load_id);
      if ((bVar3 != 0) || (spev_wrk.time == '\0')) {
        pzl_load_id = -1;
        ButtonMarkTimeClear();
        event_stts[ev_wrk.evt_no] = '\x01';
        spev_wrk.mode = '\v';
        spev_wrk.time = '(';
        SetBlackOut();
      }
    }
    goto switchD_001a8540_caseD_e;
  case '\v':
    if (spev_wrk.time == '\0') {
      ReqDramaCamera('\x01',0xd,0);
      spev_wrk.mode = '\r';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\r';
      goto switchD_001a8540_caseD_e;
    }
    break;
  case '\r':
    if (pzl_load_id != -1) {
      iVar6 = IsLoadEnd(pzl_load_id);
      if (iVar6 != 0) {
        SendManMdlTex();
        spev_wrk.ret = '\x01';
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SetBlackIn();
      }
      goto switchD_001a8540_caseD_e;
    }
    file_no = 0x549;
LAB_001a8be0:
    pzl_load_id = SeFileLoadAndSet(file_no,2);
  default:
    goto switchD_001a8540_caseD_e;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a8540_caseD_e:
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\r')) {
    SpecialEventDisp014((uint)uVar2);
    return;
  }
  return;
}

void SpecialEventInit022() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 4) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 4) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(4);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain022() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 4) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(4);
    return;
  }
  return;
}

void SpecialEventInit023() {
  GhostDoorSet(4);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain023() {
  return;
}

void SpecialEventInit024() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(4);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain024() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit025() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 5) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 5) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(5);
  }
  if (spev_wrk.count == '\0') {
    LoadReq(0x34,0x1e90000);
  }
  else {
    LoadReq(0x35,0x1e90000);
  }
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain025() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 5) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(5);
    return;
  }
  return;
}

void SpecialEventInit026() {
  GhostDoorSet(5);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain026() {
  return;
}

void SpecialEventInit027() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(5);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain027() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit028() {
  bool bVar1;
  
  AdpcmPrePuzzleFadeOut(0x28);
  pzl_load_id = -1;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x36,0x1e90000);
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SeStopAndBackup();
  spev_wrk.csr[1] = '\0';
  spev_wrk.csr[0] = '\x04';
  spev_wrk.count = '\0';
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain028() {
  bool bVar1;
  uchar uVar2;
  uchar uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = spev_wrk.count;
  uVar9 = (uint)spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x36,0x1e90000);
    spev_wrk.mode = '\x01';
    spev_wrk.time = '(';
    break;
  case '\x01':
    if (spev_wrk.time != '\0') goto LAB_001a5860;
    iVar7 = IsLoadEndAll();
    if (iVar7 == 0) break;
    SetSprFile(0x1e90000);
    spev_wrk.mode = '\x02';
    uVar9 = 0x54c;
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    goto LAB_001a5890;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar7 = IsLoadEnd(pzl_load_id);
      if (iVar7 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x04';
        SetBlackIn();
      }
      break;
    }
    goto LAB_001a5860;
  case '\x04':
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 != 0) {
      AdpcmPreLoadPuzzle(0x610);
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    bVar4 = IsPreLoadEndAdpcmPuzzle();
    if (bVar4 != 0) {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '<';
      AdpcmPuzzlePreLoadEndPlay();
    }
    break;
  case '\x06':
    if (spev_wrk.time == '\0') {
      iVar7 = 0;
      pcVar8 = &DAT_00328269 + (uint)spev_wrk.count * 0xe;
      do {
        if (*pcVar8 != -1) {
          spev_wrk.csr[0] = (uchar)iVar7;
        }
        iVar7 = iVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar7 < 9);
      spev_wrk.mode = '\a';
      spev_wrk.time = '<';
      break;
    }
    goto LAB_001a5860;
  case '\a':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\b';
      spev_wrk.time = '\x14';
      break;
    }
    goto LAB_001a5860;
  case '\b':
    if (spev_wrk.time == '\0') {
      bVar4 = IsEndAdpcmPuzzle();
      if (bVar4 != 0) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\n';
      }
      break;
    }
    goto LAB_001a5860;
  case '\t':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x14';
      spev_wrk.mode = '\n';
    }
    break;
  case '\n':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = '(';
      SetBlackOut();
      iVar7 = 3;
    }
    else if (*key_now[5] == 1) {
      spev_wrk.mode = '\v';
      iVar7 = 1;
    }
    else {
      uVar10 = (uint)spev_wrk.count;
      if (((*key_now[0] == 1) ||
          (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar5 = Ana2PadDirCnt('\0'), sVar5 == 1)))) ||
         ((uVar6 = Ana2PadDirCnt('\0'), 0x19 < uVar6 &&
          (sVar5 = Ana2PadDirCnt('\0'), (int)sVar5 % 5 == 1)))) {
        if (spev_wrk.csr[0] < 3) break;
        if (*(char *)((uint)spev_wrk.csr[0] + uVar10 * 0xe + 0x328266) != -1) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[1] = '\0';
          spev_wrk.csr[0] = spev_wrk.csr[0] + 0xfd;
        }
        iVar7 = 0;
      }
      else if (((*key_now[1] == 1) ||
               ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
              ((sVar5 = Ana2PadDirCnt('\x02'), sVar5 == 1 ||
               ((uVar6 = Ana2PadDirCnt('\x02'), 0x19 < uVar6 &&
                (sVar5 = Ana2PadDirCnt('\x02'), (int)sVar5 % 5 == 1)))))) {
        if (5 < spev_wrk.csr[0]) break;
        if (*(char *)((uint)spev_wrk.csr[0] + uVar10 * 0xe + 0x32826c) != -1) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[1] = '\0';
          spev_wrk.csr[0] = spev_wrk.csr[0] + '\x03';
        }
        iVar7 = 0;
      }
      else if (((*key_now[2] == 1) ||
               (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                (sVar5 = Ana2PadDirCnt('\x03'), sVar5 == 1)))) ||
              ((uVar6 = Ana2PadDirCnt('\x03'), 0x19 < uVar6 &&
               (sVar5 = Ana2PadDirCnt('\x03'), (int)sVar5 % 5 == 1)))) {
        if ((uint)spev_wrk.csr[0] % 3 == 0) break;
        if ((&evdl_dat)[(uint)spev_wrk.csr[0] + uVar9 * 0xe] != -1) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[1] = '\0';
          spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        }
        iVar7 = 0;
      }
      else {
        if (((((*key_now[3] != 1) &&
              (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
             (sVar5 = Ana2PadDirCnt('\x01'), sVar5 != 1)) &&
            ((uVar6 = Ana2PadDirCnt('\x01'), uVar6 < 0x1a ||
             (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 != 1)))) ||
           ((uint)spev_wrk.csr[0] % 3 == 2)) break;
        if ((&DAT_0032826a)[(uint)spev_wrk.csr[0] + uVar9 * 0xe] != -1) {
          spev_wrk.time = '\x14';
          spev_wrk.csr[1] = '\0';
          spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        }
        iVar7 = 0;
      }
    }
    goto LAB_001a5384;
  case '\v':
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      iVar7 = 3;
    }
    else {
      if (*key_now[5] == 1) {
        SeStartFix(0x23,0,0x1000,0x1000,0);
        if (spev_wrk.csr[0] == (&evdl_dat)[uVar9 * 0xe]) {
          spev_wrk.time = 0xb4;
          spev_wrk.mode = '\x15';
          iVar7 = 0x668;
        }
        else {
          spev_wrk.time = 0x82;
          spev_wrk.mode = '\x10';
          iVar7 = 0x669;
        }
        goto LAB_001a5588;
      }
      if (*key_now[2] == 1) goto LAB_001a523c;
      if (((ushort)*key_now[2] < 0x1a) || (uVar3 = '\f', (uint)(ushort)*key_now[2] % 5 != 1)) {
        sVar5 = Ana2PadDirCnt('\x03');
        uVar3 = '\f';
        if (sVar5 != 1) {
          uVar6 = Ana2PadDirCnt('\x03');
          if (0x19 < uVar6) {
            sVar5 = Ana2PadDirCnt('\x03');
            uVar3 = '\f';
            if ((int)sVar5 % 5 == 1) goto LAB_001a537c;
          }
          if (*key_now[3] == 1) {
LAB_001a523c:
            uVar3 = '\f';
          }
          else if (((ushort)*key_now[3] < 0x1a) ||
                  (uVar3 = '\f', (uint)(ushort)*key_now[3] % 5 != 1)) {
            sVar5 = Ana2PadDirCnt('\x01');
            uVar3 = '\f';
            if (sVar5 != 1) {
              uVar6 = Ana2PadDirCnt('\x01');
              if ((uVar6 < 0x1a) || (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 != 1)) break;
              goto LAB_001a523c;
            }
          }
        }
      }
LAB_001a537c:
      spev_wrk.mode = uVar3;
      iVar7 = 0;
    }
    goto LAB_001a5384;
  case '\f':
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      iVar7 = 3;
    }
    else {
      if (*key_now[5] != 1) {
        if (*key_now[2] == 1) goto LAB_001a5378;
        if (((ushort)*key_now[2] < 0x1a) || (uVar3 = '\v', (uint)(ushort)*key_now[2] % 5 != 1)) {
          sVar5 = Ana2PadDirCnt('\x03');
          uVar3 = '\v';
          if (sVar5 != 1) {
            uVar6 = Ana2PadDirCnt('\x03');
            if (0x19 < uVar6) {
              sVar5 = Ana2PadDirCnt('\x03');
              uVar3 = '\v';
              if ((int)sVar5 % 5 == 1) goto LAB_001a537c;
            }
            if (*key_now[3] == 1) {
LAB_001a5378:
              uVar3 = '\v';
            }
            else if (((ushort)*key_now[3] < 0x1a) ||
                    (uVar3 = '\v', (uint)(ushort)*key_now[3] % 5 != 1)) {
              sVar5 = Ana2PadDirCnt('\x01');
              uVar3 = '\v';
              if (sVar5 != 1) {
                uVar6 = Ana2PadDirCnt('\x01');
                if ((uVar6 < 0x1a) || (sVar5 = Ana2PadDirCnt('\x01'), (int)sVar5 % 5 != 1)) break;
                goto LAB_001a5378;
              }
            }
          }
        }
        goto LAB_001a537c;
      }
      spev_wrk.mode = '\n';
      iVar7 = 3;
    }
LAB_001a5384:
    SeStartFix(iVar7,0,0x1000,0x1000,0);
    break;
  case '\r':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count < 5) {
        spev_wrk.count = spev_wrk.count + '\x01';
      }
      else {
        spev_wrk.count = '\x04';
      }
      spev_wrk.mode = '\x06';
      spev_wrk.time = '<';
      AdpcmPuzzlePreLoadEndPlay();
      SetBlackIn();
      break;
    }
    goto LAB_001a5860;
  case '\x0e':
    if (pzl_load_id != -1) {
      iVar7 = IsLoadEnd(pzl_load_id);
      if (iVar7 != 0) {
        spev_wrk.ret = '\x01';
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SetBlackIn();
        pzl_load_id = -1;
        AdpcmPuzzleEnd();
        SeRevival(0x1e);
        SendManMdlTex();
      }
      break;
    }
    uVar9 = 0x549;
LAB_001a5890:
    pzl_load_id = SeFileLoadAndSet(uVar9,2);
    break;
  case '\x0f':
    goto joined_r0x001a5858;
  case '\x10':
    if (2 < spev_wrk.time) {
      spev_wrk.time = spev_wrk.time + 0xfe;
    }
    bVar4 = IsEndAdpcmPuzzle();
    if ((bVar4 == 0) || (2 < spev_wrk.time)) break;
    goto LAB_001a5664;
  case '\x11':
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
LAB_001a5548:
      spev_wrk.mode = '\x14';
      AdpcmPuzzlePlay(0x667);
      break;
    }
    if (spev_wrk.time < 3) {
      spev_wrk.time = 0x82;
      spev_wrk.mode = '\x12';
      break;
    }
    goto LAB_001a54c0;
  case '\x12':
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) goto LAB_001a5548;
    if (spev_wrk.time < 3) {
      if ((&DAT_00328274)[uVar9 * 0xe] == -1) {
        spev_wrk.time = '\n';
        spev_wrk.mode = '\x13';
        break;
      }
      spev_wrk.time = 0x82;
      goto LAB_001a5580;
    }
LAB_001a54c0:
    spev_wrk.time = spev_wrk.time + 0xfe;
    break;
  case '\x13':
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 == 0) break;
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) goto LAB_001a5548;
    bVar1 = spev_wrk.time < 0xe4;
    spev_wrk.time = spev_wrk.time + '\x02';
    if (bVar1) break;
    spev_wrk.time = 0xe6;
LAB_001a5580:
    spev_wrk.mode = '\x14';
    iVar7 = 0x667;
LAB_001a5588:
    AdpcmPuzzlePlay(iVar7);
    break;
  case '\x14':
    if ((0xe5 < spev_wrk.time) || (uVar3 = spev_wrk.time + '\x02', blink_dir_242 < 1)) {
      uVar3 = spev_wrk.time;
      if (spev_wrk.time < 0x40) {
        if (-1 < blink_dir_242) goto LAB_001a55fc;
        iVar7 = 1;
LAB_001a560c:
        blink_dir_242 = iVar7;
      }
      else if (blink_dir_242 < 0) {
        uVar3 = spev_wrk.time + 0xfe;
      }
      else {
LAB_001a55fc:
        if ((0xe5 < spev_wrk.time) && (iVar7 = -1, 0 < blink_dir_242)) goto LAB_001a560c;
      }
    }
    spev_wrk.time = uVar3;
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 == 0) break;
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') break;
    blink_dir_242 = 1;
LAB_001a5664:
    spev_wrk.mode = '\r';
    spev_wrk.time = '(';
    SetBlackOut();
    AdpcmPreLoadPuzzle(0x610);
    break;
  case '\x15':
    if (5 < spev_wrk.time) {
      spev_wrk.time = spev_wrk.time + 0xfb;
    }
    bVar4 = IsEndAdpcmPuzzle();
    if (bVar4 != 0) {
      spev_wrk.mode = '\x18';
      SetBlackOut();
      spev_wrk.time = '(';
      event_stts[ev_wrk.evt_no] = '\x01';
    }
  case '\x16':
    if (5 < spev_wrk.time) {
      spev_wrk.time = spev_wrk.time + 0xfb;
    }
    bVar4 = IsEndAdpcmPuzzle();
    if ((bVar4 != 0) && (*key_now[5] == 1)) {
      spev_wrk.mode = '\x17';
    }
    break;
  case '\x17':
    if ((0xe5 < spev_wrk.time) || (uVar3 = spev_wrk.time + '\x05', blink_dir_242 < 1)) {
      uVar3 = spev_wrk.time;
      if (spev_wrk.time < 0x40) {
        if (-1 < blink_dir_242) goto LAB_001a5780;
        iVar7 = 1;
LAB_001a5794:
        blink_dir_242 = iVar7;
      }
      else if (blink_dir_242 < 0) {
        uVar3 = spev_wrk.time + 0xfb;
      }
      else {
LAB_001a5780:
        if ((0xe5 < spev_wrk.time) && (iVar7 = -1, 0 < blink_dir_242)) goto LAB_001a5794;
      }
    }
    spev_wrk.time = uVar3;
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time == '\0') {
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\x18';
      spev_wrk.time = '(';
      blink_dir_242 = 1;
      SetBlackOut();
    }
    break;
  case '\x18':
joined_r0x001a5858:
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0e';
      break;
    }
LAB_001a5860:
    spev_wrk.time = spev_wrk.time + 0xff;
  }
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x03')) && (spev_wrk.mode != '\x0e')) {
    SpecialEventDisp003((uint)uVar2);
    return;
  }
  return;
}

void SpecialEventInit029() {
  if ((ev_wrk.face_stts[1] & 1) == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
    door_keep[47].attr = door_keep[47].attr | 2;
    door_keep[26].attr = door_keep[26].attr & 0xfffd;
    door_keep[34].attr = door_keep[34].attr | 2;
    door_keep[49].attr = door_keep[49].attr & 0xfffd;
  }
  SpevStrInit();
  SpevWrkInit();
  go_flg = 0;
  if (plyr_wrk.dop._13_1_ == door_keep[47].room_id) {
    spev_wrk.mode = '\0';
    spev_wrk.time = '(';
    SetBlackOut();
    return;
  }
  spev_wrk.mode = '\x04';
  spev_wrk.time = '(';
  return;
}

void SpecialEventMain029() {
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  
  bVar1 = (door_keep[47].attr & 2U) != 0;
  if (bVar1) {
    spev_wrk.csr[1] = 0x80;
  }
  bVar2 = poss_item[41] != 0;
  uVar3 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      LoadReq(0x3b,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x01':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') && (iVar6 = IsLoadEndAll(), uVar3 = spev_wrk.time, iVar6 != 0)) {
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x02':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') &&
       (iVar6 = IsLoadEnd(pzl_load_id), uVar3 = spev_wrk.time, iVar6 != 0)) {
      pzl_load_id = -1;
      SetBlackIn();
      spev_wrk.mode = '\x03';
      spev_wrk.time = '\x1e';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (bVar1) {
        spev_wrk.mode = '\x05';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
      else if (bVar2) {
        spev_wrk.mode = '\x12';
        uVar3 = bVar2;
      }
      else {
        spev_wrk.mode = '\x12';
        if (poss_item[46] == 0) {
          spev_wrk.mode = '\x11';
        }
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
    }
    else {
      uVar3 = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    iVar6 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar6);
    iVar6 = SetMessage();
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) break;
    goto LAB_001aa2e0;
  case '\x05':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\a';
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    spev_wrk.csr[1] = 0x80;
    iVar6 = ButtonMarkWait();
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[5] == 1) {
        spev_wrk.time = '\0';
      }
      else if (*key_now[4] == 1) {
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(3,0,0x1000,0x1000,0);
        SetBlackOut();
      }
      else if (((((*key_now[3] == 1) ||
                 (((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                    (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
                   ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
                    (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) || (*key_now[1] == 1))))
                || ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
               (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
              ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\b';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\t';
        }
        else {
          spev_wrk.mode = '\a';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      else if ((((*key_now[2] == 1) ||
                (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                 (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
               ((((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
                  (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)) || (*key_now[0] == 1)) ||
                ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\t';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\a';
        }
        else {
          spev_wrk.mode = '\b';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      uVar3 = spev_wrk.time;
      if (spev_wrk.time == '\0') {
        if (spev_wrk.mode == '\a') {
          go_flg = 1;
          iVar6 = 1;
        }
        else {
          if (spev_wrk.mode == '\b') {
            iVar6 = NisUseCheck(0);
            if (iVar6 == 0) {
              poss_item[41] = 1;
            }
            else {
              poss_item[46] = 1;
              NisUseUnSet(0);
              spev_wrk.csr[2] = '\x01';
            }
            FaceDoorOkSet(0);
            SeStartFix(1,0,0x1000,0x1000,0);
            spev_wrk.mode = '\x1b';
            spev_wrk.time = '(';
            SetBlackOut();
            uVar3 = spev_wrk.time;
            break;
          }
          iVar6 = 3;
        }
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        SetBlackOut();
        uVar3 = spev_wrk.time;
      }
    }
    break;
  case '\n':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\v':
  case '\f':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,0);
        if (bVar2) {
          spev_wrk.mode = '\x13';
          uVar3 = bVar2;
        }
        else {
          spev_wrk.time = '\x01';
          spev_wrk.mode = '\x11';
          uVar3 = spev_wrk.time;
        }
        break;
      }
      if ((((*key_now[3] == 1) ||
           (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
          (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
         (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
          ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
           ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
        bVar1 = spev_wrk.mode == '\v';
        spev_wrk.mode = '\v';
        if (bVar1) {
          spev_wrk.mode = '\f';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    if (spev_wrk.mode == '\v') {
      spev_wrk.mode = '\x0e';
      spev_wrk.time = '\x1e';
      spev_wrk.csr[0] = 0x80;
      poss_item[46] = 0;
      spev_wrk.csr[1] = '\0';
      NisUseSet(0);
      iVar6 = 0x5d;
    }
    else if (bVar2) {
      spev_wrk.mode = '\x13';
      iVar6 = 3;
      spev_wrk.time = bVar2;
    }
    else {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x11';
      iVar6 = 3;
    }
    goto LAB_001aa2a0;
  case '\r':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x11';
      if (bVar2) {
        spev_wrk.mode = '\x13';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0e':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = 0x8c;
      pzl_load_id = SeStartFixFlame(10,0x3c,0xc00,0xb60,0);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0f':
    if (spev_wrk.csr[0] != '\0') {
      spev_wrk.csr[1] = spev_wrk.csr[1] + '\x01';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
    }
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.csr[0] = '\0';
    }
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      spev_wrk.time = '\x01';
      SeFadeFlame(pzl_load_id,0x14,0);
      pzl_load_id = -1;
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x10':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    FaceDoorOkSet(0);
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x11':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x12':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x13';
      if (poss_item[46] != 0) {
        spev_wrk.mode = '\v';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
             (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    bVar1 = spev_wrk.mode == '\x13';
    spev_wrk.mode = '\x1a';
    if (bVar1) {
      spev_wrk.mode = '\x15';
    }
LAB_001aa0c8:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar3 = spev_wrk.time;
    break;
  case '\x15':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '(';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.mode = '\x16';
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      SetBlackIn();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x16':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      poss_item[41] = 0;
      FaceDoorOkSet(0);
      go_flg = 1;
      SetBlackOut();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1a':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      if (go_flg == 1) {
        iVar6 = DoorKeyUnlockOnly(0x2f);
        if (iVar6 != 0) {
          DoorOpenShiftForce(0x2f);
        }
        go_flg = 0;
      }
      spev_wrk.mode = '\x1f';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1b':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1e';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = '\0';
    SetBlackIn();
    iVar6 = 0x5d;
LAB_001aa2a0:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar3 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) break;
    ButtonMarkTimeClear();
LAB_001aa2e0:
    spev_wrk.ret = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = spev_wrk.time;
  }
  spev_wrk.time = uVar3;
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    FaceDoorDisp(0);
    return;
  }
  return;
}

void SpecialEventInit030() {
  if ((ev_wrk.face_stts[1] & 1) == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
    door_keep[47].attr = door_keep[47].attr | 2;
    door_keep[26].attr = door_keep[26].attr & 0xfffd;
    door_keep[34].attr = door_keep[34].attr | 2;
    door_keep[49].attr = door_keep[49].attr & 0xfffd;
  }
  SpevStrInit();
  SpevWrkInit();
  go_flg = 0;
  if (plyr_wrk.dop._13_1_ == door_keep[26].room_id) {
    spev_wrk.mode = '\0';
    spev_wrk.time = '(';
    SetBlackOut();
    return;
  }
  spev_wrk.mode = '\x04';
  spev_wrk.time = '(';
  return;
}

void SpecialEventMain030() {
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  
  bVar1 = (door_keep[26].attr & 2U) != 0;
  if (bVar1) {
    spev_wrk.csr[1] = 0x80;
  }
  bVar2 = poss_item[42] != 0;
  uVar3 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      LoadReq(0x3c,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x01':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') && (iVar6 = IsLoadEndAll(), uVar3 = spev_wrk.time, iVar6 != 0)) {
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x02':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') &&
       (iVar6 = IsLoadEnd(pzl_load_id), uVar3 = spev_wrk.time, iVar6 != 0)) {
      pzl_load_id = -1;
      SetBlackIn();
      spev_wrk.mode = '\x03';
      spev_wrk.time = '\x1e';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (bVar1) {
        spev_wrk.mode = '\x05';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
      else if (bVar2) {
        spev_wrk.mode = '\x12';
        uVar3 = bVar2;
      }
      else {
        spev_wrk.mode = '\x12';
        if (poss_item[46] == 0) {
          spev_wrk.mode = '\x11';
        }
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
    }
    else {
      uVar3 = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    iVar6 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar6);
    iVar6 = SetMessage();
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) break;
    goto LAB_001aa2e0;
  case '\x05':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\a';
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    spev_wrk.csr[1] = 0x80;
    iVar6 = ButtonMarkWait();
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[5] == 1) {
        spev_wrk.time = '\0';
      }
      else if (*key_now[4] == 1) {
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(3,0,0x1000,0x1000,0);
        SetBlackOut();
      }
      else if (((((*key_now[3] == 1) ||
                 (((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                    (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
                   ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
                    (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) || (*key_now[1] == 1))))
                || ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
               (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
              ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\b';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\t';
        }
        else {
          spev_wrk.mode = '\a';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      else if ((((*key_now[2] == 1) ||
                (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                 (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
               ((((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
                  (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)) || (*key_now[0] == 1)) ||
                ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\t';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\a';
        }
        else {
          spev_wrk.mode = '\b';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      uVar3 = spev_wrk.time;
      if (spev_wrk.time == '\0') {
        if (spev_wrk.mode == '\a') {
          go_flg = 1;
          iVar6 = 1;
        }
        else {
          if (spev_wrk.mode == '\b') {
            iVar6 = NisUseCheck(1);
            if (iVar6 == 0) {
              poss_item[42] = 1;
            }
            else {
              poss_item[46] = 1;
              NisUseUnSet(1);
              spev_wrk.csr[2] = '\x01';
            }
            FaceDoorOkSet(1);
            SeStartFix(1,0,0x1000,0x1000,0);
            spev_wrk.mode = '\x1b';
            spev_wrk.time = '(';
            SetBlackOut();
            uVar3 = spev_wrk.time;
            break;
          }
          iVar6 = 3;
        }
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        SetBlackOut();
        uVar3 = spev_wrk.time;
      }
    }
    break;
  case '\n':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\v':
  case '\f':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,0);
        if (bVar2) {
          spev_wrk.mode = '\x13';
          uVar3 = bVar2;
        }
        else {
          spev_wrk.time = '\x01';
          spev_wrk.mode = '\x11';
          uVar3 = spev_wrk.time;
        }
        break;
      }
      if ((((*key_now[3] == 1) ||
           (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
          (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
         (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
          ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
           ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
        bVar1 = spev_wrk.mode == '\v';
        spev_wrk.mode = '\v';
        if (bVar1) {
          spev_wrk.mode = '\f';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    if (spev_wrk.mode == '\v') {
      spev_wrk.mode = '\x0e';
      spev_wrk.time = '\x1e';
      spev_wrk.csr[0] = 0x80;
      poss_item[46] = 0;
      spev_wrk.csr[1] = '\0';
      NisUseSet(1);
      iVar6 = 0x5d;
    }
    else if (bVar2) {
      spev_wrk.mode = '\x13';
      iVar6 = 3;
      spev_wrk.time = bVar2;
    }
    else {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x11';
      iVar6 = 3;
    }
    goto LAB_001aa2a0;
  case '\r':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x11';
      if (bVar2) {
        spev_wrk.mode = '\x13';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0e':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = 0x8c;
      pzl_load_id = SeStartFixFlame(10,0x3c,0xc00,0xb60,0);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0f':
    if (spev_wrk.csr[0] != '\0') {
      spev_wrk.csr[1] = spev_wrk.csr[1] + '\x01';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
    }
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.csr[0] = '\0';
    }
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      spev_wrk.time = '\x01';
      SeFadeFlame(pzl_load_id,0x14,0);
      pzl_load_id = -1;
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x10':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    FaceDoorOkSet(1);
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x11':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x12':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x13';
      if (poss_item[46] != 0) {
        spev_wrk.mode = '\v';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
             (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    bVar1 = spev_wrk.mode == '\x13';
    spev_wrk.mode = '\x1a';
    if (bVar1) {
      spev_wrk.mode = '\x15';
    }
LAB_001aa0c8:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar3 = spev_wrk.time;
    break;
  case '\x15':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '(';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.mode = '\x16';
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      SetBlackIn();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x16':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      poss_item[42] = 0;
      FaceDoorOkSet(1);
      go_flg = 1;
      SetBlackOut();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1a':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      if (go_flg == 1) {
        iVar6 = DoorKeyUnlockOnly(0x1a);
        if (iVar6 != 0) {
          DoorOpenShiftForce(0x1a);
        }
        go_flg = 0;
      }
      spev_wrk.mode = '\x1f';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1b':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1e';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = '\0';
    SetBlackIn();
    iVar6 = 0x5d;
LAB_001aa2a0:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar3 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) break;
    ButtonMarkTimeClear();
LAB_001aa2e0:
    spev_wrk.ret = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = spev_wrk.time;
  }
  spev_wrk.time = uVar3;
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    FaceDoorDisp(1);
    return;
  }
  return;
}

void SpecialEventInit031() {
  if ((ev_wrk.face_stts[1] & 1) == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
    door_keep[47].attr = door_keep[47].attr | 2;
    door_keep[26].attr = door_keep[26].attr & 0xfffd;
    door_keep[34].attr = door_keep[34].attr | 2;
    door_keep[49].attr = door_keep[49].attr & 0xfffd;
  }
  SpevStrInit();
  SpevWrkInit();
  go_flg = 0;
  if (plyr_wrk.dop._13_1_ == door_keep[34].room_id) {
    spev_wrk.mode = '\0';
    spev_wrk.time = '(';
    SetBlackOut();
    return;
  }
  spev_wrk.mode = '\x04';
  spev_wrk.time = '(';
  return;
}

void SpecialEventMain031() {
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  
  bVar1 = (door_keep[34].attr & 2U) != 0;
  if (bVar1) {
    spev_wrk.csr[1] = 0x80;
  }
  bVar2 = poss_item[43] != 0;
  uVar3 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      LoadReq(0x3d,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x01':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') && (iVar6 = IsLoadEndAll(), uVar3 = spev_wrk.time, iVar6 != 0)) {
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x02':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') &&
       (iVar6 = IsLoadEnd(pzl_load_id), uVar3 = spev_wrk.time, iVar6 != 0)) {
      pzl_load_id = -1;
      SetBlackIn();
      spev_wrk.mode = '\x03';
      spev_wrk.time = '\x1e';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (bVar1) {
        spev_wrk.mode = '\x05';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
      else if (bVar2) {
        spev_wrk.mode = '\x12';
        uVar3 = bVar2;
      }
      else {
        spev_wrk.mode = '\x12';
        if (poss_item[46] == 0) {
          spev_wrk.mode = '\x11';
        }
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
    }
    else {
      uVar3 = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    iVar6 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar6);
    iVar6 = SetMessage();
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) break;
    goto LAB_001aa2e0;
  case '\x05':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\a';
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    spev_wrk.csr[1] = 0x80;
    iVar6 = ButtonMarkWait();
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[5] == 1) {
        spev_wrk.time = '\0';
      }
      else if (*key_now[4] == 1) {
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(3,0,0x1000,0x1000,0);
        SetBlackOut();
      }
      else if (((((*key_now[3] == 1) ||
                 (((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                    (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
                   ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
                    (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) || (*key_now[1] == 1))))
                || ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
               (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
              ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\b';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\t';
        }
        else {
          spev_wrk.mode = '\a';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      else if ((((*key_now[2] == 1) ||
                (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                 (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
               ((((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
                  (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)) || (*key_now[0] == 1)) ||
                ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\t';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\a';
        }
        else {
          spev_wrk.mode = '\b';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      uVar3 = spev_wrk.time;
      if (spev_wrk.time == '\0') {
        if (spev_wrk.mode == '\a') {
          go_flg = 1;
          iVar6 = 1;
        }
        else {
          if (spev_wrk.mode == '\b') {
            iVar6 = NisUseCheck(2);
            if (iVar6 == 0) {
              poss_item[43] = 1;
            }
            else {
              poss_item[46] = 1;
              NisUseUnSet(2);
              spev_wrk.csr[2] = '\x01';
            }
            FaceDoorOkSet(2);
            SeStartFix(1,0,0x1000,0x1000,0);
            spev_wrk.mode = '\x1b';
            spev_wrk.time = '(';
            SetBlackOut();
            uVar3 = spev_wrk.time;
            break;
          }
          iVar6 = 3;
        }
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        SetBlackOut();
        uVar3 = spev_wrk.time;
      }
    }
    break;
  case '\n':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\v':
  case '\f':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,0);
        if (bVar2) {
          spev_wrk.mode = '\x13';
          uVar3 = bVar2;
        }
        else {
          spev_wrk.time = '\x01';
          spev_wrk.mode = '\x11';
          uVar3 = spev_wrk.time;
        }
        break;
      }
      if ((((*key_now[3] == 1) ||
           (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
          (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
         (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
          ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
           ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
        bVar1 = spev_wrk.mode == '\v';
        spev_wrk.mode = '\v';
        if (bVar1) {
          spev_wrk.mode = '\f';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    if (spev_wrk.mode == '\v') {
      spev_wrk.mode = '\x0e';
      spev_wrk.time = '\x1e';
      spev_wrk.csr[0] = 0x80;
      poss_item[46] = 0;
      spev_wrk.csr[1] = '\0';
      NisUseSet(2);
      iVar6 = 0x5d;
    }
    else if (bVar2) {
      spev_wrk.mode = '\x13';
      iVar6 = 3;
      spev_wrk.time = bVar2;
    }
    else {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x11';
      iVar6 = 3;
    }
    goto LAB_001aa2a0;
  case '\r':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x11';
      if (bVar2) {
        spev_wrk.mode = '\x13';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0e':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = 0x8c;
      pzl_load_id = SeStartFixFlame(10,0x3c,0xc00,0xb60,0);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0f':
    if (spev_wrk.csr[0] != '\0') {
      spev_wrk.csr[1] = spev_wrk.csr[1] + '\x01';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
    }
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.csr[0] = '\0';
    }
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      spev_wrk.time = '\x01';
      SeFadeFlame(pzl_load_id,0x14,0);
      pzl_load_id = -1;
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x10':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    FaceDoorOkSet(2);
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x11':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x12':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x13';
      if (poss_item[46] != 0) {
        spev_wrk.mode = '\v';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
             (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    bVar1 = spev_wrk.mode == '\x13';
    spev_wrk.mode = '\x1a';
    if (bVar1) {
      spev_wrk.mode = '\x15';
    }
LAB_001aa0c8:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar3 = spev_wrk.time;
    break;
  case '\x15':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '(';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.mode = '\x16';
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      SetBlackIn();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x16':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      poss_item[43] = 0;
      FaceDoorOkSet(2);
      go_flg = 1;
      SetBlackOut();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1a':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      if (go_flg == 1) {
        iVar6 = DoorKeyUnlockOnly(0x22);
        if (iVar6 != 0) {
          DoorOpenShiftForce(0x22);
        }
        go_flg = 0;
      }
      spev_wrk.mode = '\x1f';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1b':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1e';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = '\0';
    SetBlackIn();
    iVar6 = 0x5d;
LAB_001aa2a0:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar3 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) break;
    ButtonMarkTimeClear();
LAB_001aa2e0:
    spev_wrk.ret = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = spev_wrk.time;
  }
  spev_wrk.time = uVar3;
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    FaceDoorDisp(2);
    return;
  }
  return;
}

void SpecialEventInit032() {
  if ((ev_wrk.face_stts[1] & 1) == 0) {
    ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
    ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
    door_keep[47].attr = door_keep[47].attr | 2;
    door_keep[26].attr = door_keep[26].attr & 0xfffd;
    door_keep[34].attr = door_keep[34].attr | 2;
    door_keep[49].attr = door_keep[49].attr & 0xfffd;
  }
  SpevStrInit();
  SpevWrkInit();
  go_flg = 0;
  if (plyr_wrk.dop._13_1_ == door_keep[49].room_id) {
    spev_wrk.mode = '\0';
    spev_wrk.time = '(';
    SetBlackOut();
    return;
  }
  spev_wrk.mode = '\x04';
  spev_wrk.time = '(';
  return;
}

void SpecialEventMain032() {
  bool bVar1;
  bool bVar2;
  uchar uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  
  bVar1 = (door_keep[49].attr & 2U) != 0;
  if (bVar1) {
    spev_wrk.csr[1] = 0x80;
  }
  bVar2 = poss_item[44] != 0;
  uVar3 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      LoadReq(0x3e,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x01':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') && (iVar6 = IsLoadEndAll(), uVar3 = spev_wrk.time, iVar6 != 0)) {
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x02';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x02':
    uVar3 = spev_wrk.time + 0xff;
    if ((spev_wrk.time == '\0') &&
       (iVar6 = IsLoadEnd(pzl_load_id), uVar3 = spev_wrk.time, iVar6 != 0)) {
      pzl_load_id = -1;
      SetBlackIn();
      spev_wrk.mode = '\x03';
      spev_wrk.time = '\x1e';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (bVar1) {
        spev_wrk.mode = '\x05';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
      else if (bVar2) {
        spev_wrk.mode = '\x12';
        uVar3 = bVar2;
      }
      else {
        spev_wrk.mode = '\x12';
        if (poss_item[46] == 0) {
          spev_wrk.mode = '\x11';
        }
        spev_wrk.time = '\x01';
        uVar3 = spev_wrk.time;
      }
    }
    else {
      uVar3 = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    iVar6 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar6);
    iVar6 = SetMessage();
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) break;
    goto LAB_001aa2e0;
  case '\x05':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\a';
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    spev_wrk.csr[1] = 0x80;
    iVar6 = ButtonMarkWait();
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[5] == 1) {
        spev_wrk.time = '\0';
      }
      else if (*key_now[4] == 1) {
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(3,0,0x1000,0x1000,0);
        SetBlackOut();
      }
      else if (((((*key_now[3] == 1) ||
                 (((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                    (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)) ||
                   ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
                    (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) || (*key_now[1] == 1))))
                || ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
               (sVar4 = Ana2PadDirCnt('\x02'), sVar4 == 1)) ||
              ((uVar5 = Ana2PadDirCnt('\x02'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x02'), (int)sVar4 % 5 == 1)))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\b';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\t';
        }
        else {
          spev_wrk.mode = '\a';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      else if ((((*key_now[2] == 1) ||
                (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                 (sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1)))) ||
               ((((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
                  (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)) || (*key_now[0] == 1)) ||
                ((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)))))) ||
              ((sVar4 = Ana2PadDirCnt('\0'), sVar4 == 1 ||
               ((uVar5 = Ana2PadDirCnt('\0'), 0x19 < uVar5 &&
                (sVar4 = Ana2PadDirCnt('\0'), (int)sVar4 % 5 == 1)))))) {
        if (spev_wrk.mode == '\a') {
          spev_wrk.mode = '\t';
        }
        else if (spev_wrk.mode == '\b') {
          spev_wrk.mode = '\a';
        }
        else {
          spev_wrk.mode = '\b';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
      uVar3 = spev_wrk.time;
      if (spev_wrk.time == '\0') {
        if (spev_wrk.mode == '\a') {
          go_flg = 1;
          iVar6 = 1;
        }
        else {
          if (spev_wrk.mode == '\b') {
            iVar6 = NisUseCheck(3);
            if (iVar6 == 0) {
              poss_item[44] = 1;
            }
            else {
              poss_item[46] = 1;
              NisUseUnSet(3);
              spev_wrk.csr[2] = '\x01';
            }
            FaceDoorOkSet(3);
            SeStartFix(1,0,0x1000,0x1000,0);
            spev_wrk.mode = '\x1b';
            spev_wrk.time = '(';
            SetBlackOut();
            uVar3 = spev_wrk.time;
            break;
          }
          iVar6 = 3;
        }
        spev_wrk.mode = '\x1a';
        spev_wrk.time = '(';
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        SetBlackOut();
        uVar3 = spev_wrk.time;
      }
    }
    break;
  case '\n':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\v':
  case '\f':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else {
      if (*key_now[4] == 1) {
        SeStartFix(3,0,0x1000,0x1000,0);
        if (bVar2) {
          spev_wrk.mode = '\x13';
          uVar3 = bVar2;
        }
        else {
          spev_wrk.time = '\x01';
          spev_wrk.mode = '\x11';
          uVar3 = spev_wrk.time;
        }
        break;
      }
      if ((((*key_now[3] == 1) ||
           (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
            (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
          (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
         (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
          ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
           ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
        bVar1 = spev_wrk.mode == '\v';
        spev_wrk.mode = '\v';
        if (bVar1) {
          spev_wrk.mode = '\f';
        }
        SeStartFix(0,0,0x1000,0x1000,0);
      }
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    if (spev_wrk.mode == '\v') {
      spev_wrk.mode = '\x0e';
      spev_wrk.time = '\x1e';
      spev_wrk.csr[0] = 0x80;
      poss_item[46] = 0;
      spev_wrk.csr[1] = '\0';
      NisUseSet(3);
      iVar6 = 0x5d;
    }
    else if (bVar2) {
      spev_wrk.mode = '\x13';
      iVar6 = 3;
      spev_wrk.time = bVar2;
    }
    else {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x11';
      iVar6 = 3;
    }
    goto LAB_001aa2a0;
  case '\r':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x11';
      if (bVar2) {
        spev_wrk.mode = '\x13';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0e':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = 0x8c;
      pzl_load_id = SeStartFixFlame(10,0x3c,0xc00,0xb60,0);
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x0f':
    if (spev_wrk.csr[0] != '\0') {
      spev_wrk.csr[1] = spev_wrk.csr[1] + '\x01';
      spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
    }
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.csr[0] = '\0';
    }
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      spev_wrk.time = '\x01';
      SeFadeFlame(pzl_load_id,0x14,0);
      pzl_load_id = -1;
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x10':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
      SeStartFix(1,0,0x1000,0x1000,0);
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    FaceDoorOkSet(3);
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x11':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    spev_wrk.mode = '\x1a';
    goto LAB_001aa0c8;
  case '\x12':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x13';
      if (poss_item[46] != 0) {
        spev_wrk.mode = '\v';
      }
      spev_wrk.time = '\x01';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
             (((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)) || (*key_now[2] == 1)))) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar4 = Ana2PadDirCnt('\x03'), sVar4 == 1 ||
              ((uVar5 = Ana2PadDirCnt('\x03'), 0x19 < uVar5 &&
               (sVar4 = Ana2PadDirCnt('\x03'), (int)sVar4 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time != '\0') break;
    bVar1 = spev_wrk.mode == '\x13';
    spev_wrk.mode = '\x1a';
    if (bVar1) {
      spev_wrk.mode = '\x15';
    }
LAB_001aa0c8:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar3 = spev_wrk.time;
    break;
  case '\x15':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '(';
      spev_wrk.csr[1] = 0x80;
      spev_wrk.mode = '\x16';
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      SetBlackIn();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x16':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar3 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      poss_item[44] = 0;
      FaceDoorOkSet(3);
      go_flg = 1;
      SetBlackOut();
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1a':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      if (go_flg == 1) {
        iVar6 = DoorKeyUnlockOnly(0x31);
        if (iVar6 != 0) {
          DoorOpenShiftForce(0x31);
        }
        go_flg = 0;
      }
      spev_wrk.mode = '\x1f';
      uVar3 = spev_wrk.time;
    }
    break;
  case '\x1b':
    uVar3 = spev_wrk.time + 0xff;
    if (spev_wrk.time != '\0') break;
    spev_wrk.mode = '\x1e';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = '\0';
    SetBlackIn();
    iVar6 = 0x5d;
LAB_001aa2a0:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar3 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar3 = spev_wrk.time;
    if (iVar6 == 0) break;
    ButtonMarkTimeClear();
LAB_001aa2e0:
    spev_wrk.ret = '\x01';
    uVar3 = spev_wrk.time;
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = spev_wrk.time;
  }
  spev_wrk.time = uVar3;
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    FaceDoorDisp(3);
    return;
  }
  return;
}

void SpecialEventInit033() {
  int iVar1;
  
  iVar1 = SimenCheck();
  if (iVar1 == 0) {
    spev_str.alpha = 0x80;
    spev_wrk.time = '(';
    spev_wrk.csr[1] = 0x80;
    open_close = '\0';
    spev_wrk.csr[0] = '\0';
    spev_wrk.count = '\0';
    spev_wrk.mode = '\0';
    SetBlackOut();
  }
  else {
    open_close = '\x01';
    spev_wrk.mode = '\x04';
    spev_wrk.time = '(';
  }
  go_flg_s = 0;
  spev_wrk.csr[1] = 0x80;
  spev_wrk.csr[0] = 0x80;
  return;
}

void SpecialEventMain033() {
  int iVar1;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3d,0x1e90000);
      LoadReq(0x3f,0x1ed8f10);
      spev_wrk.mode = '\x01';
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 != 0) {
        SetSprFile(0x1e90000);
        SetSprFile(0x1ed8f10);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        pzl_load_id = SeFileLoadAndSet(0x5ec,0x15);
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEnd(pzl_load_id);
      if (iVar1 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        spev_wrk.time = '\x1e';
        SetBlackIn();
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
        spev_wrk.csr[1] = 0x80;
        spev_wrk.time = '\x01';
      }
      else {
        spev_wrk.time = '\x01';
        spev_wrk.mode = '\x18';
        spev_wrk.csr[1] = 0x80;
        SeStartFix(0x5d,0,0x1000,0x1000,0);
      }
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x04':
    spev_wrk.ret = '\x01';
    iVar1 = DoorKeyUnlockOnly(0x1d);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x1d);
    }
  default:
    goto switchD_001ab5b8_caseD_5;
  case '\x17':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      go_flg_s = 1;
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001ab5b8_caseD_5;
  case '\x18':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001ab5b8_caseD_5;
  case '\x1a':
    if (spev_wrk.time == '\0') {
      if (go_flg_s == 1) {
        iVar1 = DoorKeyUnlockOnly(0x1d);
        if (iVar1 != 0) {
          DoorOpenShiftForce(0x1d);
        }
        go_flg_s = 0;
      }
      spev_wrk.mode = '\x1f';
      goto switchD_001ab5b8_caseD_5;
    }
    break;
  case '\x1f':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    goto switchD_001ab5b8_caseD_5;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ab5b8_caseD_5:
  if (((1 < spev_wrk.mode) && (spev_wrk.mode != '\x04')) && (spev_wrk.mode != '\x1f')) {
    SurpriseDoorDisp((uint)open_close);
    return;
  }
  return;
}

void SpecialEventInit034() {
  int iVar1;
  
  iVar1 = SimenCheck();
  open_close = (uchar)iVar1;
  alpha_keep = '\0';
  if ((ev_wrk.face_stts[0] & 1) == 0) {
    ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xf0 | 0x11;
  }
  SpevWrkInit();
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.csr[1] = 0x80;
  spev_wrk.mode = '\x04';
  spev_wrk.time = '\x14';
  return;
}

void SpecialEventMain034() {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < spev_wrk.mode) {
    SimenPillarDisp();
  }
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x3d,0x1e90000);
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    goto LAB_001ac334;
  case '\x01':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) {
      return;
    }
    SetSprFile(0x1e90000);
    SetSprFile(0x1ed8f10);
    spev_wrk.mode = '\x03';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    spev_wrk.time = '\x1e';
    SetBlackIn();
    iVar6 = 0x5d;
    goto LAB_001ac274;
  case '\x03':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x18';
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
      }
      spev_wrk.time = '\x01';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = spev_wrk.time;
    if ((iVar6 != 0) && (uVar2 = spev_wrk.time + 0xff, spev_wrk.time == '\0')) {
      pzl_load_id = -1;
      choudo_no = 0x7e;
      stts_no = '\x02';
      omen_msgno = '@';
      omen_itemno = ')';
      omen_no = '\0';
      ReqDramaCamera('\x01',0x17,0);
      spev_wrk.mode = '\a';
      if ((ev_wrk.face_stts[0] & stts_no) == 0) {
        spev_wrk.mode = '\x13';
        if (poss_item[omen_itemno] == 0) {
          spev_wrk.mode = '\x11';
          uVar2 = '\x01';
        }
        else {
          uVar2 = '\x01';
        }
      }
      else {
        uVar2 = '\x01';
      }
    }
    break;
  case '\x06':
  case '\b':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
             ((((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)) || (*key_now[2] == 1)) ||
              ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))))) ||
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
             ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
              (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x06';
      if (bVar1) {
        spev_wrk.mode = '\b';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\b') {
      uVar5 = SimenCheck();
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & ~stts_no;
      poss_item[omen_itemno] = 1;
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        iVar6 = SimenCheck();
        open_close = (uchar)iVar6;
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1b';
LAB_001ac248:
      spev_wrk.time = '(';
      SetBlackOut();
      return;
    }
    goto LAB_001ac264;
  case '\a':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if ((spev_wrk.time == '\0') && (iVar6 = ButtonMarkWait(), uVar2 = spev_wrk.time, iVar6 == 0)) {
      spev_wrk.mode = '\b';
      uVar2 = '\x01';
    }
    break;
  case '\x11':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = ' ';
      uVar2 = '\n';
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
               ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) || (*key_now[2] == 1)) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
              ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\x13') {
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] | stts_no;
      poss_item[omen_itemno] = 0;
      uVar5 = SimenCheck();
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1d';
      goto LAB_001ac248;
    }
LAB_001ac264:
    spev_wrk.mode = ' ';
    iVar6 = 3;
    spev_wrk.time = '\n';
LAB_001ac274:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x17':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
      SetFurnAttrEve(choudo_no,0x4000,0);
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x18':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    ButtonMarkTimeClear();
    SetFurnAttrEve(choudo_no,0x4000,1);
    spev_wrk.mode = '\x1a';
LAB_001ac334:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar2 = spev_wrk.time;
    break;
  case '\x1a':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x1f';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1b':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,1);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = '\x1e';
    goto LAB_001ac3e0;
  case '\x1d':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,0);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = ' ';
LAB_001ac3e0:
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar2 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = ' ';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1f':
    ReqDramaCamera('\0',0x17,0);
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case ' ':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) goto switchD_001abb68_caseD_21;
    ReqDramaCamera('\0',0x17,0);
    ButtonMarkTimeClear();
    goto LAB_001ac56c;
  case '!':
switchD_001abb68_caseD_21:
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
LAB_001ac56c:
    spev_wrk.ret = '\x01';
    uVar2 = spev_wrk.time;
  }
  spev_wrk.time = uVar2;
  return;
}

void SpecialEventInit035() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2d,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x03';
  StarPuzzleDataSet(3);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain035() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2d,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit036() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2d,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x03';
  StarPuzzleDataSet(3);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain036() {
  undefined *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined auStack_60 [4];
  undefined uStack_5c;
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = auStack_60;
  puVar9 = auStack_60;
  puVar1 = auStack_60 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  auStack_60 = (undefined  [4])DAT_00357038;
  uStack_5c = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2d,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        pzl_load_id = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        pzl_load_id = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (pzl_load_id == -1) {
      pzl_load_id = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        spev_wrk.ret = '\x01';
        pzl_load_id = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = auStack_60[iVar12 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = auStack_60[iVar10 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

void SpecialEventInit037() {
  int iVar1;
  
  spev_wrk.time = '(';
  spev_wrk.mode = '\0';
  spev_wrk.count = '\0';
  iVar1 = 0;
  if (ev_wrk.gst_door[0] == 6) {
    if (ev_wrk.spev_tmp[0] == 0xff) {
LAB_001a4580:
      spev_wrk.count = '\x01';
    }
  }
  else {
    for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
      if (ev_wrk.gst_door[iVar1] == 6) {
        if (ev_wrk.spev_tmp[iVar1] == 0xff) goto LAB_001a4580;
        break;
      }
    }
  }
  if (iVar1 == 2) {
    GhostDoorSet(6);
  }
  LoadReq(0x33,0x1e90000);
  SpevStrInit();
  SetBlackOut();
  return;
}

void SpecialEventMain037() {
  int iVar1;
  byte *pbVar2;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      iVar1 = IsLoadEndAll();
      if (iVar1 == 0) goto switchD_001a46c0_caseD_6;
      spev_wrk.mode = '\x01';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a4794:
      spev_wrk.time = '(';
      SetBlackIn();
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x02';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  case '\x02':
    spev_wrk.mode = '\x03';
    goto switchD_001a46c0_caseD_6;
  case '\x03':
    iVar1 = ButtonMarkNext(0,0,1);
    if (iVar1 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x04';
      spev_wrk.time = '(';
      SetBlackOut();
    }
    goto switchD_001a46c0_caseD_6;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      goto LAB_001a4794;
    }
    break;
  case '\x05':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.count != '\0') {
        pbVar2 = ev_wrk.gst_door;
        event_stts[ev_wrk.evt_no] = '\x01';
        iVar1 = 1;
        do {
          if (*pbVar2 == 6) {
            *pbVar2 = 0xff;
          }
          iVar1 = iVar1 + -1;
          pbVar2 = pbVar2 + 1;
        } while (-1 < iVar1);
      }
      SendManMdlTex();
      spev_wrk.ret = '\x01';
      goto switchD_001a46c0_caseD_6;
    }
    break;
  default:
    goto switchD_001a46c0_caseD_6;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a46c0_caseD_6:
  if ((spev_wrk.mode != '\0') && (spev_wrk.mode != '\x05')) {
    GhostDoorDisp(6);
    return;
  }
  return;
}

void SpecialEventInit038() {
  GhostDoorSet(6);
  event_stts[ev_wrk.evt_no] = '\x01';
  ingame_wrk.mode = 6;
  ev_wrk.evt_no = 0xff;
  ev_wrk.mode = 0;
  return;
}

void SpecialEventMain038() {
  return;
}

void SpecialEventInit039() {
  LoadReq(0x37,0x1e90000);
  pzl_load_id = -1;
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  butsuzo_alpha[1] = '\0';
  SetBlackOut();
  return;
}

void SpecialEventMain039() {
  byte bVar1;
  int iVar2;
  uint file_no;
  
  switch(spev_wrk.mode) {
  case '\x01':
    if (spev_wrk.time != '\0') break;
    iVar2 = IsLoadEndAll();
    if (iVar2 == 0) goto switchD_001a7fa0_caseD_4;
    SetSprFile(0x1e90000);
    spev_wrk.mode = '\x02';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    SetBlackIn();
    file_no = 0x5e9;
    iVar2 = 0x15;
    goto LAB_001a8100;
  case '\x02':
    if (spev_wrk.time == '\0') {
      iVar2 = IsLoadEnd(pzl_load_id);
      if (iVar2 != 0) {
        spev_wrk.time = '(';
        pzl_load_id = -1;
        spev_wrk.mode = '\x03';
        SeStartFix(0x5d,0,0x1000,0x1000,0);
      }
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\b';
      spev_wrk.time = '\x01';
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  default:
    goto switchD_001a7fa0_caseD_4;
  case '\b':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x0f';
      spev_wrk.time = '<';
      SetBlackOut();
    }
    goto switchD_001a7fa0_caseD_4;
  case '\x0f':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x10';
      goto switchD_001a7fa0_caseD_4;
    }
    break;
  case '\x10':
    iVar2 = 2;
    if (pzl_load_id != -1) {
      iVar2 = IsLoadEnd(pzl_load_id);
      if (iVar2 != 0) {
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        pzl_load_id = -1;
        event_stts[ev_wrk.evt_no] = '\x01';
        spev_wrk.ret = '\x01';
        SetBlackIn();
      }
      goto switchD_001a7fa0_caseD_4;
    }
    file_no = 0x549;
LAB_001a8100:
    pzl_load_id = SeFileLoadAndSet(file_no,iVar2);
    goto switchD_001a7fa0_caseD_4;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001a7fa0_caseD_4:
  if (spev_wrk.mode == '\b') {
    bVar1 = butsuzo_alpha[1] + 6;
    if ((-1 < (char)butsuzo_alpha[1]) && (butsuzo_alpha[1] = bVar1, (int)((uint)bVar1 << 0x18) < 0))
    {
      butsuzo_alpha[1] = 0x80;
    }
  }
  else if ((6 < butsuzo_alpha[1]) && (butsuzo_alpha[1] = butsuzo_alpha[1] - 6, butsuzo_alpha[1] < 7)
          ) {
    butsuzo_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ButsuzoMSGDisp();
    return;
  }
  return;
}

void SpecialEventInit040() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2f,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x04';
  StarPuzzleDataSet(4);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain040() {
  undefined *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  undefined auStack_40 [4];
  undefined uStack_3c;
  
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_00357038 >> (3 - uVar2) * 8;
  auStack_40 = (undefined  [4])DAT_00357038;
  uStack_3c = DAT_0035703c;
  uVar3 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2f,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar3 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a29c4;
  case '\x01':
    uVar3 = star_pzl_wrk.time + 0xff;
    if ((star_pzl_wrk.time == '\0') &&
       (iVar4 = IsLoadEndAll(), uVar3 = star_pzl_wrk.time, iVar4 != 0)) {
      SetSprFile(0x1e90000);
      star_pzl_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      star_pzl_wrk.mode = '\x03';
      SetBlackIn();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\x03':
    uVar3 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      if (star_pzl_wrk.pzl_no == '\x06') {
        star_pzl_wrk.mode = '\b';
        uVar3 = star_pzl_wrk.time;
      }
      else {
        star_pzl_wrk.mode = '\x06';
        uVar3 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x06':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\a';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\a':
  case '\t':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\x0e';
      star_pzl_wrk.time = '(';
      SetBlackOut();
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\b':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar3 = star_pzl_wrk.time;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      star_pzl_wrk.mode = '\t';
      uVar3 = star_pzl_wrk.time;
    }
    break;
  case '\r':
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar3 = star_pzl_wrk.time;
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      break;
    }
LAB_001a29c4:
    uVar3 = star_pzl_wrk.time + 0xff;
  }
  star_pzl_wrk.time = uVar3;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleMSGDisp();
  }
  return;
}

void SpecialEventInit041() {
  bool bVar1;
  
  bVar1 = _DAT_00252e80 != -1;
  if (bVar1) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    star_pzl_wrk.time = '<';
  }
  else {
    LoadReq(0x2f,0x1e90000);
    star_pzl_wrk.time = '(';
  }
  star_pzl_wrk.mode = !bVar1;
  star_pzl_wrk.pzl_no = '\x04';
  StarPuzzleDataSet(4);
  SetBlackOut();
  SpevStrInit();
  CsrClearAll();
  return;
}

void SpecialEventMain041() {
  undefined *puVar1;
  bool bVar2;
  uchar uVar3;
  uchar uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined auStack_60 [4];
  undefined uStack_5c;
  
  uVar3 = star_pzl_wrk.slct_no;
  puVar8 = auStack_60;
  puVar9 = auStack_60;
  puVar1 = auStack_60 + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357038 >> (3 - uVar5) * 8;
  auStack_60 = (undefined  [4])DAT_00357038;
  uStack_5c = DAT_0035703c;
  uVar4 = star_pzl_wrk.time;
  switch(star_pzl_wrk.mode) {
  case '\0':
    if (star_pzl_wrk.time == '\0') {
      LoadReq(0x2f,0x1e90000);
      star_pzl_wrk.mode = '\x01';
      star_pzl_wrk.time = '(';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x01':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEndAll();
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        SetSprFile(0x1e90000);
        star_pzl_wrk.mode = '\x02';
        pzl_load_id = SeFileLoadAndSet(0x54b,2);
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x02':
    if (star_pzl_wrk.time == '\0') {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        pzl_load_id = -1;
        SetSprFile(0x1e90000);
        star_pzl_wrk.time = '(';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        star_pzl_wrk.mode = '\x03';
        SetBlackIn();
        uVar4 = star_pzl_wrk.time;
      }
      break;
    }
    goto LAB_001a11bc;
  case '\x03':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x04';
      if (star_pzl_wrk.pzl_no == '\0') {
        star_pzl_wrk.mode = '\x06';
      }
      else {
        uVar4 = '(';
      }
      break;
    }
    goto LAB_001a108c;
  case '\x04':
  case '\f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x05';
      break;
    }
    goto LAB_001a1204;
  case '\x05':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    if (*key_now[4] != 1) {
      if (*key_now[7] != 1) {
        if ((*key_now[5] == 1) && (star_pzl_wrk.count != '\0')) {
          if (star_pzl_wrk.line[star_pzl_wrk.slct_no][star_pzl_wrk.empty] != 0xff) {
            uVar4 = star_pzl_wrk.stone[star_pzl_wrk.slct_no];
            star_pzl_wrk.stone[star_pzl_wrk.slct_no] = star_pzl_wrk.stone[star_pzl_wrk.empty];
            star_pzl_wrk.slct_no = star_pzl_wrk.empty;
            star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar4;
            star_pzl_wrk.time = '\x1e';
            star_pzl_wrk.empty = uVar3;
            star_pzl_wrk.mode = '\n';
            SeStartFix(0x21,0,0x1000,0x1000,0);
            uVar4 = star_pzl_wrk.time;
            break;
          }
          iVar10 = 2;
          goto LAB_001a0f7c;
        }
        if ((*key_now[3] == 1) ||
           ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar6 = Ana2PadDirCnt('\x01'), sVar6 == 1)) ||
            ((uVar7 = Ana2PadDirCnt('\x01'), 0x19 < uVar7 &&
             (sVar6 = Ana2PadDirCnt('\x01'), (int)sVar6 % 5 == 1)))))) {
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar8) {
              iVar13 = 1;
              iVar12 = iVar10 + 1;
              goto LAB_001a0bf0;
            }
            iVar12 = iVar10 + 1;
            puVar8 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar6 = Ana2PadDirCnt('\x03'), sVar6 != 1)) &&
             ((uVar7 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, uVar7 < 0x1a ||
              (sVar6 = Ana2PadDirCnt('\x03'), uVar4 = star_pzl_wrk.time, (int)sVar6 % 5 != 1))))
          break;
          iVar10 = 0;
          do {
            if (star_pzl_wrk.slct_no == *puVar9) {
              iVar10 = iVar10 + 4;
              iVar12 = 1;
              goto LAB_001a0d20;
            }
            iVar12 = iVar10 + 1;
            puVar9 = auStack_60 + iVar10 + 1;
            iVar10 = iVar12;
            bVar11 = star_pzl_wrk.slct_no;
          } while (iVar12 < 5);
        }
        goto LAB_001a0c48;
      }
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar4 = star_pzl_wrk.time;
      if (star_pzl_wrk.count == (&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) break;
      goto LAB_001a1190;
    }
    if (star_pzl_wrk.count < (byte)(&star_pzl_dat)[(uint)star_pzl_wrk.pzl_no * 0x11]) {
      SeStartFix(3,0,0x1000,0x1000,0);
      uVar3 = star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]];
      star_pzl_wrk.stone[star_pzl_wrk.bak_no[star_pzl_wrk.count]] =
           star_pzl_wrk.stone[star_pzl_wrk.empty];
      star_pzl_wrk.stone[star_pzl_wrk.empty] = uVar3;
      star_pzl_wrk.slct_no = star_pzl_wrk.empty;
      star_pzl_wrk.empty = star_pzl_wrk.bak_no[star_pzl_wrk.count];
      star_pzl_wrk.count = star_pzl_wrk.count + '\x01';
      star_pzl_wrk.time = '\x1e';
      uVar4 = star_pzl_wrk.time;
      break;
    }
    star_pzl_wrk.mode = '\x0e';
    star_pzl_wrk.time = '(';
    goto LAB_001a1124;
  case '\x06':
    iVar10 = ButtonMarkNext(0,2,1);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 != 0) {
      star_pzl_wrk.mode = '\x04';
      ButtonMarkTimeClear();
      uVar4 = star_pzl_wrk.time;
    }
    break;
  case '\n':
    uVar4 = star_pzl_wrk.time + 0xff;
    if (star_pzl_wrk.time == '\0') {
      bVar11 = star_pzl_wrk.count - 1;
      if ((star_pzl_wrk.count == '\0') ||
         (star_pzl_wrk.count = bVar11, star_pzl_wrk.bak_no[bVar11] = star_pzl_wrk.slct_no,
         star_pzl_wrk.count == '\0')) {
        iVar10 = StarPuzzleClearJudge();
        if (iVar10 == 0) {
          star_pzl_wrk.time = '\x0f';
          star_pzl_wrk.mode = '\x0f';
          uVar4 = star_pzl_wrk.time;
        }
        else {
          star_pzl_wrk.mode = '\x11';
          star_pzl_wrk.time = '<';
          SetBlackOut();
          uVar4 = star_pzl_wrk.time;
        }
      }
      else {
        star_pzl_wrk.mode = '\x05';
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\v':
    if (star_pzl_wrk.time != '\0') {
      star_pzl_wrk.time = star_pzl_wrk.time + 0xff;
    }
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.menu_mode == '\x03') {
      if (*key_now[4] != 1) {
        if (*key_now[5] != 1) {
          if (*key_now[0] == 1) {
            bVar2 = star_pzl_wrk.menu_csr[0] == '\0';
            star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + 0xff;
            if (bVar2) {
              star_pzl_wrk.menu_csr[0] = '\x02';
            }
          }
          else if ((*key_now[1] == 1) &&
                  (bVar2 = star_pzl_wrk.menu_csr[0] == '\x02',
                  star_pzl_wrk.menu_csr[0] = star_pzl_wrk.menu_csr[0] + '\x01', bVar2)) {
            star_pzl_wrk.menu_csr[0] = '\0';
          }
          break;
        }
        if (star_pzl_wrk.menu_csr[0] != '\0') {
          if (star_pzl_wrk.menu_csr[0] == '\x01') {
            star_pzl_wrk.menu_mode = '\x01';
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          else if (star_pzl_wrk.menu_csr[0] == '\x02') {
            star_pzl_wrk.menu_mode = star_pzl_wrk.menu_csr[0];
            star_pzl_wrk.menu_csr[1] = '\0';
          }
          break;
        }
      }
      goto LAB_001a119c;
    }
    if (star_pzl_wrk.menu_mode != '\x01') {
      if (star_pzl_wrk.menu_mode == '\x02') {
        if (*key_now[4] == 1) {
          star_pzl_wrk.menu_mode = '\x03';
        }
        else if (*key_now[5] == 1) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.time = '(';
            star_pzl_wrk.mode = '\x0e';
            uVar4 = star_pzl_wrk.time;
          }
          else {
            star_pzl_wrk.menu_mode = '\x03';
          }
        }
        else if ((*key_now[3] == 1) || (*key_now[2] == 1)) {
          if (star_pzl_wrk.menu_csr[1] == '\0') {
            star_pzl_wrk.menu_csr[1] = '\x01';
          }
          else {
            star_pzl_wrk.menu_csr[1] = '\0';
          }
        }
      }
      break;
    }
    if (*key_now[4] != 1) {
      if (*key_now[5] == 1) {
        if (star_pzl_wrk.menu_csr[1] == '\0') {
          StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
          star_pzl_wrk.mode = '\f';
          star_pzl_wrk.time = '\x0f';
        }
        else {
          star_pzl_wrk.menu_mode = '\x03';
        }
        iVar10 = 1;
        goto LAB_001a0f7c;
      }
      if ((*key_now[3] != 1) && (*key_now[2] != 1)) break;
      if (star_pzl_wrk.menu_csr[1] == '\0') {
        star_pzl_wrk.menu_csr[1] = '\x01';
      }
      else {
        star_pzl_wrk.menu_csr[1] = '\0';
      }
      goto LAB_001a0f78;
    }
    star_pzl_wrk.menu_mode = '\x03';
    iVar10 = 3;
    goto LAB_001a0f7c;
  case '\r':
    if (pzl_load_id == -1) {
      pzl_load_id = SeFileLoadAndSet(0x549,2);
      uVar4 = star_pzl_wrk.time;
    }
    else {
      iVar10 = IsLoadEnd(pzl_load_id);
      uVar4 = star_pzl_wrk.time;
      if (iVar10 != 0) {
        spev_wrk.ret = '\x01';
        pzl_load_id = -1;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        SendManMdlTex();
        uVar4 = star_pzl_wrk.time;
      }
    }
    break;
  case '\x0e':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\r';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a1204;
  case '\x0f':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x10';
      break;
    }
LAB_001a1204:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x10':
    iVar10 = ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (iVar10 == 0) break;
    ButtonMarkTimeClear();
    SeStartFix(3,0,0x1000,0x1000,0);
LAB_001a1190:
    StarPuzzleDataSet((uint)star_pzl_wrk.pzl_no);
LAB_001a119c:
    star_pzl_wrk.mode = '\f';
    star_pzl_wrk.time = '\x0f';
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x11':
    if (star_pzl_wrk.time == '\0') {
      SeStartFix(0x22,0,0x1000,0x1000,0);
      star_pzl_wrk.time = '2';
      star_pzl_wrk.mode = '\x12';
      SetBlackIn();
      uVar4 = star_pzl_wrk.time;
      break;
    }
    goto LAB_001a11bc;
  case '\x12':
    if (star_pzl_wrk.time == '\0') {
      star_pzl_wrk.mode = '\x13';
      uVar4 = '\x14';
      break;
    }
LAB_001a108c:
    uVar4 = star_pzl_wrk.time + 0xff;
    break;
  case '\x13':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      star_pzl_wrk.time = '\0';
    }
    ButtonMarkNext(0,0,0);
    uVar4 = star_pzl_wrk.time;
    if (star_pzl_wrk.time != '\0') break;
    ButtonMarkTimeClear();
    SeStartFix(0x23,0,0x1000,0x1000,0);
    star_pzl_wrk.mode = '\x14';
    star_pzl_wrk.time = '<';
LAB_001a1124:
    SetBlackOut();
    uVar4 = star_pzl_wrk.time;
    break;
  case '\x14':
    if (star_pzl_wrk.time == '\0') {
      SetBlackIn();
      star_pzl_wrk.mode = '\r';
      event_stts[ev_wrk.evt_no] = '\x01';
      uVar4 = star_pzl_wrk.time;
      break;
    }
LAB_001a11bc:
    uVar4 = star_pzl_wrk.time + 0xff;
  }
LAB_001a1278:
  star_pzl_wrk.time = uVar4;
  if ((1 < star_pzl_wrk.mode) && (star_pzl_wrk.mode != '\r')) {
    StarPuzzleDisp();
  }
  return;
  while (iVar12 = iVar10 + iVar13, bVar11 = star_pzl_wrk.slct_no, iVar13 < 6) {
LAB_001a0bf0:
    iVar13 = iVar13 + 1;
    bVar11 = auStack_60[iVar12 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar12 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
  goto LAB_001a0c48;
  while (iVar10 = iVar10 + -1, bVar11 = star_pzl_wrk.slct_no, iVar12 < 6) {
LAB_001a0d20:
    iVar12 = iVar12 + 1;
    bVar11 = auStack_60[iVar10 % 5];
    if (star_pzl_wrk.line[(byte)auStack_60[iVar10 % 5]][star_pzl_wrk.empty] != 0xff) break;
  }
LAB_001a0c48:
  star_pzl_wrk.slct_no = bVar11;
  star_pzl_wrk.time = '\x1e';
LAB_001a0f78:
  iVar10 = 0;
LAB_001a0f7c:
  SeStartFix(iVar10,0,0x1000,0x1000,0);
  uVar4 = star_pzl_wrk.time;
  goto LAB_001a1278;
}

void SpecialEventInit042() {
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x3a,0x1e90000);
    pzl_load_id = iVar2;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SetBlackOut();
  spev_wrk.csr[0] = '\0';
  zushi_alpha[0] = '\0';
  zushi_alpha[1] = '\0';
  spev_wrk.csr[1] = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain042() {
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3a,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto switchD_001ad240_caseD_d;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x03';
      uVar6 = 0x550;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001ad690:
      pzl_load_id = SeFileLoadAndSet(uVar6,2);
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEnd(pzl_load_id);
      if (iVar5 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x02';
        spev_wrk.time = '(';
        SetBlackIn();
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x04':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x06';
    }
    goto switchD_001ad240_caseD_d;
  case '\x05':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 == 0) goto switchD_001ad240_caseD_d;
    ButtonMarkTimeClear();
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\b';
    iVar5 = 0x22;
    goto LAB_001ad568;
  case '\x06':
    iVar5 = ButtonMarkWait();
    if (iVar5 != 0) goto switchD_001ad240_caseD_d;
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
      goto switchD_001ad240_caseD_d;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[3] == 1) ||
         ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = 2 < spev_wrk.csr[0];
        spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        if (bVar1) {
          spev_wrk.csr[0] = '\0';
          zushi_alpha[0] = '\0';
          goto switchD_001ad240_caseD_d;
        }
      }
      else {
        if ((((*key_now[2] != 1) &&
             (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
            (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) goto switchD_001ad240_caseD_d;
        bVar1 = spev_wrk.csr[0] == '\0';
        spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        if (bVar1) {
          spev_wrk.csr[0] = '\x03';
        }
      }
      zushi_alpha[0] = '\0';
      goto switchD_001ad240_caseD_d;
    }
    spev_wrk.time = '(';
    spev_wrk.mode = '\a';
    iVar5 = 0x21;
LAB_001ad568:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    goto switchD_001ad240_caseD_d;
  case '\a':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.csr[0] == zushi_dat[spev_wrk.csr[1]].answer) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\x05';
      }
      else {
        spev_wrk.time = '(';
        spev_wrk.mode = '\t';
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      uVar6 = (uint)spev_wrk.csr[1];
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\v';
      spev_wrk.time = 'F';
      zushi_dat[uVar6].ansflg = '\x01';
      SetWhiteOut();
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\t':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '\x01';
      spev_wrk.csr[0] = '\0';
    }
    goto switchD_001ad240_caseD_d;
  case '\n':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetBlackIn();
        goto switchD_001ad240_caseD_d;
      }
LAB_001ad68c:
      uVar6 = 0x549;
      goto LAB_001ad690;
    }
    break;
  case '\v':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetWhiteIn();
        goto switchD_001ad240_caseD_d;
      }
      goto LAB_001ad68c;
    }
    break;
  case '\f':
    SendManMdlTex();
    ButtonMarkTimeClear();
    spev_str.alpha = 0x80;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.ret = '\x01';
  default:
    goto switchD_001ad240_caseD_d;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ad240_caseD_d:
  if (((spev_wrk.mode == '\x06') && (-1 < (char)zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] + 3, (int)((uint)zushi_alpha[0] << 0x18) < 0)) {
    zushi_alpha[0] = 0x80;
  }
  if (spev_wrk.mode == '\a') {
    zushi_alpha[0] = '\0';
  }
  if (((spev_wrk.mode == '\t') && (3 < zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] - 3, zushi_alpha[0] < 4)) {
    zushi_alpha[0] = '\0';
  }
  if (((byte)(spev_wrk.mode - 4) < 2) || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\f')) {
    ZushiBonjiDisp(0x2a);
  }
  return;
}

void SpecialEventInit043() {
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x3a,0x1e90000);
    pzl_load_id = iVar2;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SetBlackOut();
  spev_wrk.csr[0] = '\0';
  zushi_alpha[0] = '\0';
  zushi_alpha[1] = '\0';
  spev_wrk.csr[1] = '\x01';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain043() {
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3a,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto switchD_001ad240_caseD_d;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x03';
      uVar6 = 0x550;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001ad690:
      pzl_load_id = SeFileLoadAndSet(uVar6,2);
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEnd(pzl_load_id);
      if (iVar5 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x02';
        spev_wrk.time = '(';
        SetBlackIn();
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x04':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x06';
    }
    goto switchD_001ad240_caseD_d;
  case '\x05':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 == 0) goto switchD_001ad240_caseD_d;
    ButtonMarkTimeClear();
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\b';
    iVar5 = 0x22;
    goto LAB_001ad568;
  case '\x06':
    iVar5 = ButtonMarkWait();
    if (iVar5 != 0) goto switchD_001ad240_caseD_d;
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
      goto switchD_001ad240_caseD_d;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[3] == 1) ||
         ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = 2 < spev_wrk.csr[0];
        spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        if (bVar1) {
          spev_wrk.csr[0] = '\0';
          zushi_alpha[0] = '\0';
          goto switchD_001ad240_caseD_d;
        }
      }
      else {
        if ((((*key_now[2] != 1) &&
             (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
            (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) goto switchD_001ad240_caseD_d;
        bVar1 = spev_wrk.csr[0] == '\0';
        spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        if (bVar1) {
          spev_wrk.csr[0] = '\x03';
        }
      }
      zushi_alpha[0] = '\0';
      goto switchD_001ad240_caseD_d;
    }
    spev_wrk.time = '(';
    spev_wrk.mode = '\a';
    iVar5 = 0x21;
LAB_001ad568:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    goto switchD_001ad240_caseD_d;
  case '\a':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.csr[0] == zushi_dat[spev_wrk.csr[1]].answer) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\x05';
      }
      else {
        spev_wrk.time = '(';
        spev_wrk.mode = '\t';
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      uVar6 = (uint)spev_wrk.csr[1];
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\v';
      spev_wrk.time = 'F';
      zushi_dat[uVar6].ansflg = '\x01';
      SetWhiteOut();
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\t':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '\x01';
      spev_wrk.csr[0] = '\0';
    }
    goto switchD_001ad240_caseD_d;
  case '\n':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetBlackIn();
        goto switchD_001ad240_caseD_d;
      }
LAB_001ad68c:
      uVar6 = 0x549;
      goto LAB_001ad690;
    }
    break;
  case '\v':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetWhiteIn();
        goto switchD_001ad240_caseD_d;
      }
      goto LAB_001ad68c;
    }
    break;
  case '\f':
    SendManMdlTex();
    ButtonMarkTimeClear();
    spev_str.alpha = 0x80;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.ret = '\x01';
  default:
    goto switchD_001ad240_caseD_d;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ad240_caseD_d:
  if (((spev_wrk.mode == '\x06') && (-1 < (char)zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] + 3, (int)((uint)zushi_alpha[0] << 0x18) < 0)) {
    zushi_alpha[0] = 0x80;
  }
  if (spev_wrk.mode == '\a') {
    zushi_alpha[0] = '\0';
  }
  if (((spev_wrk.mode == '\t') && (3 < zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] - 3, zushi_alpha[0] < 4)) {
    zushi_alpha[0] = '\0';
  }
  if (((byte)(spev_wrk.mode - 4) < 2) || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\f')) {
    ZushiBonjiDisp(0x2b);
  }
  return;
}

void SpecialEventInit044() {
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x3a,0x1e90000);
    pzl_load_id = iVar2;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SetBlackOut();
  spev_wrk.csr[0] = '\0';
  zushi_alpha[0] = '\0';
  zushi_alpha[1] = '\0';
  spev_wrk.csr[1] = '\x02';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain044() {
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3a,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto switchD_001ad240_caseD_d;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x03';
      uVar6 = 0x550;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001ad690:
      pzl_load_id = SeFileLoadAndSet(uVar6,2);
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEnd(pzl_load_id);
      if (iVar5 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x02';
        spev_wrk.time = '(';
        SetBlackIn();
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x04':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x06';
    }
    goto switchD_001ad240_caseD_d;
  case '\x05':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 == 0) goto switchD_001ad240_caseD_d;
    ButtonMarkTimeClear();
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\b';
    iVar5 = 0x22;
    goto LAB_001ad568;
  case '\x06':
    iVar5 = ButtonMarkWait();
    if (iVar5 != 0) goto switchD_001ad240_caseD_d;
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
      goto switchD_001ad240_caseD_d;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[3] == 1) ||
         ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = 2 < spev_wrk.csr[0];
        spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        if (bVar1) {
          spev_wrk.csr[0] = '\0';
          zushi_alpha[0] = '\0';
          goto switchD_001ad240_caseD_d;
        }
      }
      else {
        if ((((*key_now[2] != 1) &&
             (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
            (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) goto switchD_001ad240_caseD_d;
        bVar1 = spev_wrk.csr[0] == '\0';
        spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        if (bVar1) {
          spev_wrk.csr[0] = '\x03';
        }
      }
      zushi_alpha[0] = '\0';
      goto switchD_001ad240_caseD_d;
    }
    spev_wrk.time = '(';
    spev_wrk.mode = '\a';
    iVar5 = 0x21;
LAB_001ad568:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    goto switchD_001ad240_caseD_d;
  case '\a':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.csr[0] == zushi_dat[spev_wrk.csr[1]].answer) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\x05';
      }
      else {
        spev_wrk.time = '(';
        spev_wrk.mode = '\t';
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      uVar6 = (uint)spev_wrk.csr[1];
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\v';
      spev_wrk.time = 'F';
      zushi_dat[uVar6].ansflg = '\x01';
      SetWhiteOut();
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\t':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '\x01';
      spev_wrk.csr[0] = '\0';
    }
    goto switchD_001ad240_caseD_d;
  case '\n':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetBlackIn();
        goto switchD_001ad240_caseD_d;
      }
LAB_001ad68c:
      uVar6 = 0x549;
      goto LAB_001ad690;
    }
    break;
  case '\v':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetWhiteIn();
        goto switchD_001ad240_caseD_d;
      }
      goto LAB_001ad68c;
    }
    break;
  case '\f':
    SendManMdlTex();
    ButtonMarkTimeClear();
    spev_str.alpha = 0x80;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.ret = '\x01';
  default:
    goto switchD_001ad240_caseD_d;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ad240_caseD_d:
  if (((spev_wrk.mode == '\x06') && (-1 < (char)zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] + 3, (int)((uint)zushi_alpha[0] << 0x18) < 0)) {
    zushi_alpha[0] = 0x80;
  }
  if (spev_wrk.mode == '\a') {
    zushi_alpha[0] = '\0';
  }
  if (((spev_wrk.mode == '\t') && (3 < zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] - 3, zushi_alpha[0] < 4)) {
    zushi_alpha[0] = '\0';
  }
  if (((byte)(spev_wrk.mode - 4) < 2) || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\f')) {
    ZushiBonjiDisp(0x2c);
  }
  return;
}

void SpecialEventInit045() {
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x3a,0x1e90000);
    pzl_load_id = iVar2;
    spev_wrk.time = '(';
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    spev_wrk.time = '<';
  }
  spev_wrk.mode = bVar1;
  SetBlackOut();
  spev_wrk.csr[0] = '\0';
  zushi_alpha[0] = '\0';
  zushi_alpha[1] = '\0';
  spev_wrk.csr[1] = '\x03';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain045() {
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (spev_wrk.time == '\0') {
      LoadReq(0x3a,0x1e90000);
      pzl_load_id = -1;
      spev_wrk.mode = '\x01';
      spev_wrk.time = '(';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x01':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto switchD_001ad240_caseD_d;
      SetSprFile(0x1e90000);
      spev_wrk.mode = '\x03';
      uVar6 = 0x550;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001ad690:
      pzl_load_id = SeFileLoadAndSet(uVar6,2);
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x03':
    if (spev_wrk.time == '\0') {
      iVar5 = IsLoadEnd(pzl_load_id);
      if (iVar5 != 0) {
        pzl_load_id = -1;
        spev_wrk.mode = '\x02';
        spev_wrk.time = '(';
        SetBlackIn();
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\x04':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.time = '\x01';
      spev_wrk.mode = '\x06';
    }
    goto switchD_001ad240_caseD_d;
  case '\x05':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 == 0) goto switchD_001ad240_caseD_d;
    ButtonMarkTimeClear();
    spev_wrk.time = '\x14';
    spev_wrk.mode = '\b';
    iVar5 = 0x22;
    goto LAB_001ad568;
  case '\x06':
    iVar5 = ButtonMarkWait();
    if (iVar5 != 0) goto switchD_001ad240_caseD_d;
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
      goto switchD_001ad240_caseD_d;
    }
    if (*key_now[5] != 1) {
      if ((*key_now[3] == 1) ||
         ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
          ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) {
        bVar1 = 2 < spev_wrk.csr[0];
        spev_wrk.csr[0] = spev_wrk.csr[0] + '\x01';
        if (bVar1) {
          spev_wrk.csr[0] = '\0';
          zushi_alpha[0] = '\0';
          goto switchD_001ad240_caseD_d;
        }
      }
      else {
        if ((((*key_now[2] != 1) &&
             (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
            (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) goto switchD_001ad240_caseD_d;
        bVar1 = spev_wrk.csr[0] == '\0';
        spev_wrk.csr[0] = spev_wrk.csr[0] + 0xff;
        if (bVar1) {
          spev_wrk.csr[0] = '\x03';
        }
      }
      zushi_alpha[0] = '\0';
      goto switchD_001ad240_caseD_d;
    }
    spev_wrk.time = '(';
    spev_wrk.mode = '\a';
    iVar5 = 0x21;
LAB_001ad568:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    goto switchD_001ad240_caseD_d;
  case '\a':
    if (spev_wrk.time == '\0') {
      if (spev_wrk.csr[0] == zushi_dat[spev_wrk.csr[1]].answer) {
        spev_wrk.time = '\x14';
        spev_wrk.mode = '\x05';
      }
      else {
        spev_wrk.time = '(';
        spev_wrk.mode = '\t';
      }
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\b':
    if (spev_wrk.time == '\0') {
      uVar6 = (uint)spev_wrk.csr[1];
      event_stts[ev_wrk.evt_no] = '\x01';
      spev_wrk.mode = '\v';
      spev_wrk.time = 'F';
      zushi_dat[uVar6].ansflg = '\x01';
      SetWhiteOut();
      goto switchD_001ad240_caseD_d;
    }
    break;
  case '\t':
    iVar5 = ButtonMarkNext(0,0,1);
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x06';
      spev_wrk.time = '\x01';
      spev_wrk.csr[0] = '\0';
    }
    goto switchD_001ad240_caseD_d;
  case '\n':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetBlackIn();
        goto switchD_001ad240_caseD_d;
      }
LAB_001ad68c:
      uVar6 = 0x549;
      goto LAB_001ad690;
    }
    break;
  case '\v':
    if (spev_wrk.time == '\0') {
      if (pzl_load_id != -1) {
        iVar5 = IsLoadEnd(pzl_load_id);
        if (iVar5 == 0) {
          return;
        }
        spev_wrk.mode = '\f';
        SetWhiteIn();
        goto switchD_001ad240_caseD_d;
      }
      goto LAB_001ad68c;
    }
    break;
  case '\f':
    SendManMdlTex();
    ButtonMarkTimeClear();
    spev_str.alpha = 0x80;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    spev_wrk.ret = '\x01';
  default:
    goto switchD_001ad240_caseD_d;
  }
  spev_wrk.time = spev_wrk.time + 0xff;
switchD_001ad240_caseD_d:
  if (((spev_wrk.mode == '\x06') && (-1 < (char)zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] + 3, (int)((uint)zushi_alpha[0] << 0x18) < 0)) {
    zushi_alpha[0] = 0x80;
  }
  if (spev_wrk.mode == '\a') {
    zushi_alpha[0] = '\0';
  }
  if (((spev_wrk.mode == '\t') && (3 < zushi_alpha[0])) &&
     (zushi_alpha[0] = zushi_alpha[0] - 3, zushi_alpha[0] < 4)) {
    zushi_alpha[0] = '\0';
  }
  if (((byte)(spev_wrk.mode - 4) < 2) || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if ((1 < spev_wrk.mode) && (spev_wrk.mode != '\f')) {
    ZushiBonjiDisp(0x2d);
  }
  return;
}

void SpecialEventInit046() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(6);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain046() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit047() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(7);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain047() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit048() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(8);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain048() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit049() {
  spev_wrk.mode = '\x01';
  return;
}

void SpecialEventMain049() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = spev_wrk.mode;
  if (spev_wrk.mode == '\x01') {
    iVar2 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar2);
    iVar2 = SetMessage();
    if (iVar2 == 0) {
      spev_wrk.ret = uVar1;
    }
  }
  return;
}

void SpecialEventInit050() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(9);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain050() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit051() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(10);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain051() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit052() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(0xb);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain052() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit053() {
  bool bVar1;
  int iVar2;
  
  DialKeyDoorDataSet(0xc);
  iVar2 = _DAT_00252e80;
  bVar1 = _DAT_00252e80 == -1;
  if (bVar1) {
    LoadReq(0x32,0x1e90000);
    dkey_wrk.time = '(';
    pzl_load_id = iVar2;
  }
  else {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
    dkey_wrk.time = '<';
  }
  dkey_wrk.mode = bVar1;
  CsrClear(spev_wrk.csr);
  CsrClear(spev_wrk.csr + 1);
  CsrClear(spev_wrk.csr + 2);
  SetBlackOut();
  SpevStrInit();
  return;
}

void SpecialEventMain053() {
  bool bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = dkey_wrk.time;
  switch(dkey_wrk.mode) {
  case '\0':
    if (dkey_wrk.time == '\0') {
      LoadReq(0x32,0x1e90000);
      pzl_load_id = -1;
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\x01';
      uVar2 = dkey_wrk.time;
    }
    else {
LAB_001a36ac:
      uVar2 = dkey_wrk.time + 0xff;
    }
    break;
  case '\x01':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEndAll();
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x02';
      uVar8 = 0x54d;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
LAB_001a3638:
      pzl_load_id = SeFileLoadAndSet(uVar8,2);
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x02':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.time = '(';
      pzl_load_id = -1;
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      dkey_wrk.mode = '\x03';
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x03':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.mode = '\x04';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = ButtonMarkNext(0,3,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\x06';
    }
    break;
  case '\x06':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if ((iVar6 == 0) && (iVar6 = ButtonMarkNext(0,3,1), uVar2 = dkey_wrk.time, iVar6 != 0)) {
      dkey_wrk.mode = '\a';
    }
    break;
  case '\a':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_001a35f8;
    }
    break;
  case '\b':
    iVar6 = ButtonMarkWait();
    uVar2 = dkey_wrk.time;
    if (iVar6 == 0) {
      if (*key_now[4] == 1) {
        bVar3 = dkey_wrk.count - 1;
        if (dkey_wrk.count == '\0') {
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\x0e';
          uVar2 = dkey_wrk.time;
        }
        else {
          dkey_wrk.count = bVar3;
          dkey_wrk.push_no[bVar3] = 0xff;
          SeStartFix(0x22,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else if (*key_now[5] == 1) {
        if (dkey_wrk.count < (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.push = '\0';
          dkey_wrk.push_no[dkey_wrk.count] = dkey_wrk.slct_no;
          dkey_wrk.time = '(';
          dkey_wrk.mode = '\t';
          dkey_wrk.count = dkey_wrk.count + '\x01';
          SeStartFix(0x21,0,0x1000,0x1000,0);
          uVar2 = dkey_wrk.time;
        }
      }
      else {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar4 = Ana2PadDirCnt('\x01'), sVar4 == 1)))) ||
           ((uVar5 = Ana2PadDirCnt('\x01'), 0x19 < uVar5 &&
            (sVar4 = Ana2PadDirCnt('\x01'), (int)sVar4 % 5 == 1)))) {
          bVar1 = dkey_wrk.slct_no == '\0';
          dkey_wrk.slct_no = dkey_wrk.slct_no + 0xff;
          if (bVar1) {
            dkey_wrk.slct_no = '\t';
          }
          iVar6 = 0;
        }
        else {
          if ((((*key_now[2] != 1) &&
               (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
              (sVar4 = Ana2PadDirCnt('\x03'), sVar4 != 1)) &&
             ((uVar5 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, uVar5 < 0x1a ||
              (sVar4 = Ana2PadDirCnt('\x03'), uVar2 = dkey_wrk.time, (int)sVar4 % 5 != 1)))) break;
          bVar1 = dkey_wrk.slct_no == '\t';
          dkey_wrk.slct_no = dkey_wrk.slct_no + '\x01';
          if (bVar1) {
            dkey_wrk.slct_no = '\0';
          }
          iVar6 = 0;
        }
LAB_001a3550:
        SeStartFix(iVar6,0,0x1000,0x1000,0);
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\t':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      if (dkey_wrk.count == (&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
        uVar8 = 0;
        if ((&dkey_dat)[(uint)dkey_wrk.door_no * 7] != '\0') {
          puVar7 = &DAT_00328202 + (uint)dkey_wrk.door_no * 7;
          do {
            if (dkey_wrk.push_no[uVar8] != *puVar7) break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < (int)(uint)(byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]);
        }
        if (uVar8 == (byte)(&dkey_dat)[(uint)dkey_wrk.door_no * 7]) {
          dkey_wrk.time = 0xb4;
          iVar6 = 0x23;
          dkey_wrk.mode = '\n';
          goto LAB_001a3550;
        }
        dkey_wrk.time = '(';
        dkey_wrk.mode = '\v';
        uVar2 = dkey_wrk.time;
      }
      else {
        dkey_wrk.mode = '\b';
        uVar2 = dkey_wrk.time;
      }
    }
    break;
  case '\n':
    uVar2 = dkey_wrk.time + 0xff;
    if (dkey_wrk.time == '\0') {
      dkey_wrk.time = '(';
      dkey_wrk.mode = '\f';
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\v':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    dkey_wrk.count = '\0';
    dkey_wrk.mode = '\r';
    memset(dkey_wrk.btn,0,10);
    memset(dkey_wrk.push_no,0xff,5);
    uVar2 = dkey_wrk.time;
    break;
  case '\f':
  case '\x0e':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (pzl_load_id == -1) {
      uVar8 = 0x549;
      goto LAB_001a3638;
    }
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      bVar1 = dkey_wrk.mode == '\f';
      dkey_wrk.mode = '\x0f';
      if (bVar1) {
        dkey_wrk.mode = '\x10';
      }
      dkey_wrk.time = '(';
      SendManMdlTex();
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = dkey_wrk.time;
    }
    break;
  case '\r':
    iVar6 = 0;
LAB_001a35f8:
    iVar6 = ButtonMarkNext(0,iVar6,1);
    uVar2 = dkey_wrk.time;
    if (iVar6 != 0) {
      dkey_wrk.mode = '\b';
    }
    break;
  case '\x0f':
  case '\x10':
    if (dkey_wrk.time != '\0') goto LAB_001a36ac;
    if (dkey_wrk.mode == '\x10') {
      iVar6 = GetIngameMSGAddr('\a',0x1f);
      SetMessageAddr(iVar6);
      iVar6 = SetMessage();
      uVar2 = dkey_wrk.time;
      if (iVar6 == 0) {
        bVar3 = (&DAT_00328201)[(uint)dkey_wrk.door_no * 7];
        event_stts[ev_wrk.evt_no] = '\x01';
        dkey_wrk.mode = '\x11';
        DoorKeyUnlockOnly((ushort)bVar3);
        uVar2 = dkey_wrk.time;
      }
    }
    else {
      dkey_wrk.mode = '\x11';
    }
    break;
  case '\x11':
    spev_wrk.ret = '\x01';
  }
  dkey_wrk.time = uVar2;
  if (((((dkey_wrk.mode == '\x01') || (dkey_wrk.mode == '\x03')) || (dkey_wrk.mode == '\x02')) ||
      ((dkey_wrk.mode == '\x04' || (dkey_wrk.mode == '\x05')))) ||
     ((dkey_wrk.mode == '\x06' || (dkey_wrk.mode == '\a')))) {
LAB_001a37ac:
    if ((dkey_wrk.mode != '\x0e') && (dkey_wrk.mode != '\f')) goto LAB_001a37dc;
  }
  else if (dkey_wrk.mode != '\x0e') {
    if (dkey_wrk.mode != '\f') {
      CsrInclease(spev_wrk.csr + 1,0x80,'\x03');
      goto LAB_001a37dc;
    }
    goto LAB_001a37ac;
  }
  CsrDeclease(spev_wrk.csr + 1,'\0',6);
LAB_001a37dc:
  if (dkey_wrk.mode == '\b') {
    CsrBlink(spev_wrk.csr + 2,'N','\0','\x02',spev_wrk.csr);
  }
  else if ((((dkey_wrk.mode == '\v') || (dkey_wrk.mode == '\r')) || (dkey_wrk.mode == '\x0e')) ||
          (dkey_wrk.mode == '\f')) {
    CsrDeclease(spev_wrk.csr + 2,'\0',3);
  }
  if (((1 < dkey_wrk.mode) && (dkey_wrk.mode != '\x10')) &&
     ((dkey_wrk.mode != '\x0f' && (dkey_wrk.mode != '\x11')))) {
    DialKeyDoorDisp();
    return;
  }
  return;
}

void SpecialEventInit054() {
  int iVar1;
  
  iVar1 = SimenCheck();
  open_close = (uchar)iVar1;
  alpha_keep = '\0';
  if ((ev_wrk.face_stts[0] & 1) == 0) {
    ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xf0 | 0x11;
  }
  SpevWrkInit();
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.csr[1] = 0x80;
  spev_wrk.mode = '\x04';
  spev_wrk.time = '\x14';
  return;
}

void SpecialEventMain054() {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < spev_wrk.mode) {
    SimenPillarDisp();
  }
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x3d,0x1e90000);
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    goto LAB_001ac334;
  case '\x01':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) {
      return;
    }
    SetSprFile(0x1e90000);
    SetSprFile(0x1ed8f10);
    spev_wrk.mode = '\x03';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    spev_wrk.time = '\x1e';
    SetBlackIn();
    iVar6 = 0x5d;
    goto LAB_001ac274;
  case '\x03':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x18';
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
      }
      spev_wrk.time = '\x01';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = spev_wrk.time;
    if ((iVar6 != 0) && (uVar2 = spev_wrk.time + 0xff, spev_wrk.time == '\0')) {
      pzl_load_id = -1;
      omen_msgno = 'A';
      choudo_no = 0x7d;
      omen_no = '\x01';
      stts_no = '\x04';
      omen_itemno = '*';
      ReqDramaCamera('\x01',0x18,0);
      spev_wrk.mode = '\a';
      if ((ev_wrk.face_stts[0] & stts_no) == 0) {
        spev_wrk.mode = '\x13';
        if (poss_item[omen_itemno] == 0) {
          spev_wrk.mode = '\x11';
          uVar2 = '\x01';
        }
        else {
          uVar2 = '\x01';
        }
      }
      else {
        uVar2 = '\x01';
      }
    }
    break;
  case '\x06':
  case '\b':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
             ((((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)) || (*key_now[2] == 1)) ||
              ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))))) ||
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
             ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
              (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x06';
      if (bVar1) {
        spev_wrk.mode = '\b';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\b') {
      uVar5 = SimenCheck();
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & ~stts_no;
      poss_item[omen_itemno] = 1;
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        iVar6 = SimenCheck();
        open_close = (uchar)iVar6;
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1b';
LAB_001ac248:
      spev_wrk.time = '(';
      SetBlackOut();
      return;
    }
    goto LAB_001ac264;
  case '\a':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if ((spev_wrk.time == '\0') && (iVar6 = ButtonMarkWait(), uVar2 = spev_wrk.time, iVar6 == 0)) {
      spev_wrk.mode = '\b';
      uVar2 = '\x01';
    }
    break;
  case '\x11':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = ' ';
      uVar2 = '\n';
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
               ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) || (*key_now[2] == 1)) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
              ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\x13') {
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] | stts_no;
      poss_item[omen_itemno] = 0;
      uVar5 = SimenCheck();
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1d';
      goto LAB_001ac248;
    }
LAB_001ac264:
    spev_wrk.mode = ' ';
    iVar6 = 3;
    spev_wrk.time = '\n';
LAB_001ac274:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x17':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
      SetFurnAttrEve(choudo_no,0x4000,0);
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x18':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    ButtonMarkTimeClear();
    SetFurnAttrEve(choudo_no,0x4000,1);
    spev_wrk.mode = '\x1a';
LAB_001ac334:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar2 = spev_wrk.time;
    break;
  case '\x1a':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x1f';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1b':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,1);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = '\x1e';
    goto LAB_001ac3e0;
  case '\x1d':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,0);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = ' ';
LAB_001ac3e0:
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar2 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = ' ';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1f':
    ReqDramaCamera('\0',0x18,0);
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case ' ':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) goto switchD_001abb68_caseD_21;
    ReqDramaCamera('\0',0x18,0);
    ButtonMarkTimeClear();
    goto LAB_001ac56c;
  case '!':
switchD_001abb68_caseD_21:
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
LAB_001ac56c:
    spev_wrk.ret = '\x01';
    uVar2 = spev_wrk.time;
  }
  spev_wrk.time = uVar2;
  return;
}

void SpecialEventInit055() {
  int iVar1;
  
  iVar1 = SimenCheck();
  open_close = (uchar)iVar1;
  alpha_keep = '\0';
  if ((ev_wrk.face_stts[0] & 1) == 0) {
    ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xf0 | 0x11;
  }
  SpevWrkInit();
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.csr[1] = 0x80;
  spev_wrk.mode = '\x04';
  spev_wrk.time = '\x14';
  return;
}

void SpecialEventMain055() {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < spev_wrk.mode) {
    SimenPillarDisp();
  }
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x3d,0x1e90000);
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    goto LAB_001ac334;
  case '\x01':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) {
      return;
    }
    SetSprFile(0x1e90000);
    SetSprFile(0x1ed8f10);
    spev_wrk.mode = '\x03';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    spev_wrk.time = '\x1e';
    SetBlackIn();
    iVar6 = 0x5d;
    goto LAB_001ac274;
  case '\x03':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x18';
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
      }
      spev_wrk.time = '\x01';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = spev_wrk.time;
    if ((iVar6 != 0) && (uVar2 = spev_wrk.time + 0xff, spev_wrk.time == '\0')) {
      pzl_load_id = -1;
      omen_msgno = 'B';
      choudo_no = 0x7f;
      omen_no = '\x02';
      stts_no = '\b';
      omen_itemno = '+';
      ReqDramaCamera('\x01',0x15,0);
      spev_wrk.mode = '\a';
      if ((ev_wrk.face_stts[0] & stts_no) == 0) {
        spev_wrk.mode = '\x13';
        if (poss_item[omen_itemno] == 0) {
          spev_wrk.mode = '\x11';
          uVar2 = '\x01';
        }
        else {
          uVar2 = '\x01';
        }
      }
      else {
        uVar2 = '\x01';
      }
    }
    break;
  case '\x06':
  case '\b':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
             ((((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)) || (*key_now[2] == 1)) ||
              ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))))) ||
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
             ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
              (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x06';
      if (bVar1) {
        spev_wrk.mode = '\b';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\b') {
      uVar5 = SimenCheck();
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & ~stts_no;
      poss_item[omen_itemno] = 1;
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        iVar6 = SimenCheck();
        open_close = (uchar)iVar6;
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1b';
LAB_001ac248:
      spev_wrk.time = '(';
      SetBlackOut();
      return;
    }
    goto LAB_001ac264;
  case '\a':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if ((spev_wrk.time == '\0') && (iVar6 = ButtonMarkWait(), uVar2 = spev_wrk.time, iVar6 == 0)) {
      spev_wrk.mode = '\b';
      uVar2 = '\x01';
    }
    break;
  case '\x11':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = ' ';
      uVar2 = '\n';
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
               ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) || (*key_now[2] == 1)) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
              ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\x13') {
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] | stts_no;
      poss_item[omen_itemno] = 0;
      uVar5 = SimenCheck();
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1d';
      goto LAB_001ac248;
    }
LAB_001ac264:
    spev_wrk.mode = ' ';
    iVar6 = 3;
    spev_wrk.time = '\n';
LAB_001ac274:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x17':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
      SetFurnAttrEve(choudo_no,0x4000,0);
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x18':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    ButtonMarkTimeClear();
    SetFurnAttrEve(choudo_no,0x4000,1);
    spev_wrk.mode = '\x1a';
LAB_001ac334:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar2 = spev_wrk.time;
    break;
  case '\x1a':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x1f';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1b':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,1);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = '\x1e';
    goto LAB_001ac3e0;
  case '\x1d':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,0);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = ' ';
LAB_001ac3e0:
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar2 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = ' ';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1f':
    ReqDramaCamera('\0',0x15,0);
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case ' ':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) goto switchD_001abb68_caseD_21;
    ReqDramaCamera('\0',0x15,0);
    ButtonMarkTimeClear();
    goto LAB_001ac56c;
  case '!':
switchD_001abb68_caseD_21:
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
LAB_001ac56c:
    spev_wrk.ret = '\x01';
    uVar2 = spev_wrk.time;
  }
  spev_wrk.time = uVar2;
  return;
}

void SpecialEventInit056() {
  int iVar1;
  
  iVar1 = SimenCheck();
  open_close = (uchar)iVar1;
  alpha_keep = '\0';
  if ((ev_wrk.face_stts[0] & 1) == 0) {
    ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xf0 | 0x11;
  }
  SpevWrkInit();
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.csr[1] = 0x80;
  spev_wrk.mode = '\x04';
  spev_wrk.time = '\x14';
  return;
}

void SpecialEventMain056() {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < spev_wrk.mode) {
    SimenPillarDisp();
  }
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    LoadReq(0x3d,0x1e90000);
    LoadReq(0x3f,0x1ed8f10);
    spev_wrk.mode = '\x01';
    goto LAB_001ac334;
  case '\x01':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    iVar6 = IsLoadEndAll();
    if (iVar6 == 0) {
      return;
    }
    SetSprFile(0x1e90000);
    SetSprFile(0x1ed8f10);
    spev_wrk.mode = '\x03';
    ingame_wrk.stts = ingame_wrk.stts | 0x20;
    spev_wrk.time = '\x1e';
    SetBlackIn();
    iVar6 = 0x5d;
    goto LAB_001ac274;
  case '\x03':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x18';
      if (open_close == '\x01') {
        spev_wrk.mode = '\x17';
      }
      spev_wrk.time = '\x01';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    iVar6 = IsLoadEnd(pzl_load_id);
    uVar2 = spev_wrk.time;
    if ((iVar6 != 0) && (uVar2 = spev_wrk.time + 0xff, spev_wrk.time == '\0')) {
      pzl_load_id = -1;
      omen_msgno = 'C';
      choudo_no = 0x7c;
      omen_no = '\x03';
      stts_no = '\x10';
      omen_itemno = ',';
      ReqDramaCamera('\x01',0x16,0);
      spev_wrk.mode = '\a';
      if ((ev_wrk.face_stts[0] & stts_no) == 0) {
        spev_wrk.mode = '\x13';
        if (poss_item[omen_itemno] == 0) {
          spev_wrk.mode = '\x11';
          uVar2 = '\x01';
        }
        else {
          uVar2 = '\x01';
        }
      }
      else {
        uVar2 = '\x01';
      }
    }
    break;
  case '\x06':
  case '\b':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
               (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
             ((((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)) || (*key_now[2] == 1)) ||
              ((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)))))) ||
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
             ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
              (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))) {
      bVar1 = spev_wrk.mode == '\x06';
      spev_wrk.mode = '\x06';
      if (bVar1) {
        spev_wrk.mode = '\b';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\b') {
      uVar5 = SimenCheck();
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & ~stts_no;
      poss_item[omen_itemno] = 1;
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        iVar6 = SimenCheck();
        open_close = (uchar)iVar6;
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1b';
LAB_001ac248:
      spev_wrk.time = '(';
      SetBlackOut();
      return;
    }
    goto LAB_001ac264;
  case '\a':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if ((spev_wrk.time == '\0') && (iVar6 = ButtonMarkWait(), uVar2 = spev_wrk.time, iVar6 == 0)) {
      spev_wrk.mode = '\b';
      uVar2 = '\x01';
    }
    break;
  case '\x11':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = ' ';
      uVar2 = '\n';
    }
    break;
  case '\x13':
  case '\x14':
    if (*key_now[5] == 1) {
      spev_wrk.time = '\0';
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = ' ';
      spev_wrk.time = '\n';
      SeStartFix(3,0,0x1000,0x1000,0);
    }
    else if ((((*key_now[3] == 1) ||
              ((((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
                (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)) ||
               ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
                (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))) || (*key_now[2] == 1)) ||
            (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
             ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 == 1 ||
              ((uVar4 = Ana2PadDirCnt('\x03'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 == 1)))))))) {
      bVar1 = spev_wrk.mode == '\x13';
      spev_wrk.mode = '\x13';
      if (bVar1) {
        spev_wrk.mode = '\x14';
      }
      SeStartFix(0,0,0x1000,0x1000,0);
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    if (spev_wrk.mode == '\x13') {
      ev_wrk.face_stts[0] = ev_wrk.face_stts[0] | stts_no;
      poss_item[omen_itemno] = 0;
      uVar5 = SimenCheck();
      open_close = (uchar)uVar5;
      if ((uVar5 & 0xff) == 1) {
        spev_wrk.mode = '\0';
        spev_wrk.time = '(';
        return;
      }
      spev_wrk.mode = '\x1d';
      goto LAB_001ac248;
    }
LAB_001ac264:
    spev_wrk.mode = ' ';
    iVar6 = 3;
    spev_wrk.time = '\n';
LAB_001ac274:
    SeStartFix(iVar6,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x17':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      ButtonMarkTimeClear();
      spev_wrk.mode = '\x1a';
      spev_wrk.time = '(';
      SetBlackOut();
      SetFurnAttrEve(choudo_no,0x4000,0);
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x18':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time != '\0') {
      return;
    }
    ButtonMarkTimeClear();
    SetFurnAttrEve(choudo_no,0x4000,1);
    spev_wrk.mode = '\x1a';
LAB_001ac334:
    spev_wrk.time = '(';
    SetBlackOut();
    uVar2 = spev_wrk.time;
    break;
  case '\x1a':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x1f';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1b':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,1);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = '\x1e';
    goto LAB_001ac3e0;
  case '\x1d':
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
    SetFurnAttrEve(choudo_no,0x4000,0);
    SeStartFix(0x5d,0,0x1000,0x1000,0);
    spev_wrk.mode = ' ';
LAB_001ac3e0:
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case '\x1e':
    iVar6 = ButtonMarkNext(0,0,1);
    uVar2 = spev_wrk.time;
    if (iVar6 != 0) {
      ButtonMarkTimeClear();
      spev_wrk.mode = ' ';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x1f':
    ReqDramaCamera('\0',0x16,0);
    SendManMdlTex();
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
    uVar2 = spev_wrk.time;
    break;
  case ' ':
    iVar6 = ButtonMarkNext(0,0,1);
    if (iVar6 != 0) goto switchD_001abb68_caseD_21;
    ReqDramaCamera('\0',0x16,0);
    ButtonMarkTimeClear();
    goto LAB_001ac56c;
  case '!':
switchD_001abb68_caseD_21:
    if (spev_wrk.time != '\0') {
      spev_wrk.time = spev_wrk.time + 0xff;
      return;
    }
LAB_001ac56c:
    spev_wrk.ret = '\x01';
    uVar2 = spev_wrk.time;
  }
  spev_wrk.time = uVar2;
  return;
}

void SpecialEventInit057() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain057() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      uVar1 = '\x04';
LAB_001addd4:
      spev_wrk.mode = uVar1;
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ade4c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    uVar1 = '\x05';
    if (spev_wrk.time != '\0') break;
    goto LAB_001addd4;
  case '\x05':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ade4c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if (spev_wrk.mode - 4 < 2) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiMSGDisp();
    return;
  }
  return;
}

void SpecialEventInit058() {
  spev_wrk.mode = '\x02';
  spev_wrk.time = '<';
  PlayerWarpReq2('\x01');
  spev_wrk.count = '\0';
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  SpevStrInit();
  return;
}

void SpecialEventMain058() {
  bool bVar1;
  int iVar2;
  
  if (spev_wrk.mode == '\x03') {
    iVar2 = PlayerWarpCtrl();
    if (iVar2 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      return;
    }
  }
  else if (spev_wrk.mode < 4) {
    if ((spev_wrk.mode == '\x02') &&
       (bVar1 = spev_wrk.time == '\0', spev_wrk.time = spev_wrk.time + 0xff, bVar1)) {
      spev_wrk.mode = '\x03';
      spev_wrk.time = '(';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
    }
  }
  else if (spev_wrk.mode == '\x05') {
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
  }
  return;
}

void SpecialEventInit059() {
  spev_wrk.mode = '\x02';
  spev_wrk.time = '<';
  PlayerWarpReq2('\0');
  spev_wrk.count = '\0';
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  SpevStrInit();
  return;
}

void SpecialEventMain059() {
  bool bVar1;
  int iVar2;
  
  if (spev_wrk.mode != '\x03') {
    if (3 < spev_wrk.mode) {
      if (spev_wrk.mode != '\x05') {
        return;
      }
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      spev_wrk.ret = '\x01';
      return;
    }
    if (spev_wrk.mode != '\x02') {
      return;
    }
    bVar1 = spev_wrk.time == '\0';
    spev_wrk.time = spev_wrk.time + 0xff;
    if (bVar1) {
      spev_wrk.mode = '\x03';
      spev_wrk.time = '(';
      return;
    }
  }
  iVar2 = PlayerWarpCtrl();
  if (iVar2 != 0) {
    spev_wrk.time = '\0';
  }
  if (spev_wrk.time != '\0') {
    return;
  }
  spev_wrk.mode = '\x05';
  ingame_wrk.stts = ingame_wrk.stts & 0xdf;
  SetBlackIn();
  return;
}

void SpecialEventInit060() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  spev_wrk.csr[1] = zushi_dat[0].answer;
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain060() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ae27c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ae27c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if ((spev_wrk.mode == '\x04') || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiAfterDisp(0x3c);
    return;
  }
  return;
}

void SpecialEventInit061() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  spev_wrk.csr[1] = zushi_dat[1].answer;
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain061() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ae27c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ae27c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if ((spev_wrk.mode == '\x04') || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiAfterDisp(0x3d);
    return;
  }
  return;
}

void SpecialEventInit062() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  spev_wrk.csr[1] = zushi_dat[2].answer;
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain062() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ae27c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ae27c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if ((spev_wrk.mode == '\x04') || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiAfterDisp(0x3e);
    return;
  }
  return;
}

void SpecialEventInit063() {
  LoadReq(0x3a,0x1e90000);
  spev_wrk.mode = '\x01';
  spev_wrk.time = '(';
  SetBlackOut();
  spev_wrk.csr[1] = zushi_dat[3].answer;
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain063() {
  uchar uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\x01':
    uVar1 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        SetSprFile(0x1e90000);
        spev_wrk.mode = '\x02';
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        spev_wrk.time = '(';
        SetBlackIn();
      }
      break;
    }
  case '\x02':
    spev_wrk.time = uVar1;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x01';
    }
    else {
LAB_001ae27c:
      spev_wrk.time = spev_wrk.time + 0xff;
    }
    break;
  case '\x04':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\n';
      spev_wrk.time = 'F';
      SetBlackOut();
    }
    break;
  case '\n':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\f';
      break;
    }
    goto LAB_001ae27c;
  case '\f':
    spev_wrk.ret = '\x01';
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    SetBlackIn();
  }
  if ((spev_wrk.mode == '\x04') || (spev_wrk.mode == '\t')) {
    bVar2 = zushi_alpha[1] + 6;
    if ((-1 < (char)zushi_alpha[1]) && (zushi_alpha[1] = bVar2, (int)((uint)bVar2 << 0x18) < 0)) {
      zushi_alpha[1] = 0x80;
    }
  }
  else if ((6 < zushi_alpha[1]) && (zushi_alpha[1] = zushi_alpha[1] - 6, zushi_alpha[1] < 7)) {
    zushi_alpha[1] = '\0';
  }
  if (spev_wrk.mode != '\x01') {
    ZushiBonjiAfterDisp(0x3f);
    return;
  }
  return;
}

void SpecialEventInit064() {
  spev_wrk.csr[1] = 'e';
  spev_wrk.csr[0] = camera_table;
  spev_wrk.csr[2] = 'f';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain064() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit065() {
  spev_wrk.csr[1] = 'g';
  spev_wrk.csr[0] = DAT_003284ba;
  spev_wrk.csr[2] = 'h';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain065() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit066() {
  spev_wrk.csr[1] = 'i';
  spev_wrk.csr[0] = DAT_003284bc;
  spev_wrk.csr[2] = 'j';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain066() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit067() {
  spev_wrk.csr[1] = 'k';
  spev_wrk.csr[0] = DAT_003284be;
  spev_wrk.csr[2] = 'l';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain067() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit068() {
  spev_wrk.csr[1] = 'm';
  spev_wrk.csr[0] = DAT_003284c0;
  spev_wrk.csr[2] = 'n';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain068() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit069() {
  spev_wrk.csr[1] = 'o';
  spev_wrk.csr[0] = DAT_003284c2;
  spev_wrk.csr[2] = 'p';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain069() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit070() {
  spev_wrk.csr[1] = 'q';
  spev_wrk.csr[0] = DAT_003284c4;
  spev_wrk.csr[2] = 'r';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain070() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit071() {
  spev_wrk.csr[1] = 's';
  spev_wrk.csr[0] = DAT_003284c6;
  spev_wrk.csr[2] = 't';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain071() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit072() {
  spev_wrk.csr[1] = 'u';
  spev_wrk.csr[0] = DAT_003284c8;
  spev_wrk.csr[2] = 'v';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain072() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit073() {
  spev_wrk.csr[1] = 'w';
  spev_wrk.csr[0] = DAT_003284ca;
  spev_wrk.csr[2] = 'x';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain073() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit074() {
  spev_wrk.csr[1] = 'y';
  spev_wrk.csr[0] = DAT_003284cc;
  spev_wrk.csr[2] = 'z';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain074() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit075() {
  spev_wrk.csr[1] = '{';
  spev_wrk.csr[0] = DAT_003284ce;
  spev_wrk.csr[2] = '|';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain075() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit076() {
  spev_wrk.csr[1] = '}';
  spev_wrk.csr[0] = DAT_003284d0;
  spev_wrk.csr[2] = '~';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain076() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit077() {
  spev_wrk.csr[1] = '\x7f';
  spev_wrk.csr[0] = DAT_003284d2;
  spev_wrk.csr[2] = 0x80;
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain077() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\b';
      iVar4 = 1;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit078() {
  spev_wrk.csr[1] = 0x81;
  spev_wrk.csr[0] = DAT_003284d2;
  spev_wrk.csr[2] = 0x82;
  pzl_load_id = SeFileLoadAndSet(0x5ea,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain078() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  ItemEventDisp();
  uVar1 = spev_wrk.count;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEnd(pzl_load_id);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      pzl_load_id = -1;
      spev_wrk.mode = '\x02';
    }
    break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.count;
    if (iVar4 != 0) {
      spev_wrk.mode = '\x05';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\a';
      spev_wrk.count = '(';
      SetBlackOut();
      uVar1 = spev_wrk.count;
      break;
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001af620;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[2] != 1) &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
          (((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)) && (*key_now[3] != 1)))) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.count, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001af620:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.count;
    break;
  case '\a':
    uVar1 = spev_wrk.count + 0xff;
    if (spev_wrk.count == '\0') {
      if ((ev_wrk.face_stts[1] & 1) == 0) {
        ev_wrk.face_stts[2] = ev_wrk.face_stts[2] | 5;
        ev_wrk.face_stts[1] = ev_wrk.face_stts[1] & 0xe1 | 1;
        door_keep[47].attr = door_keep[47].attr | 2;
        door_keep[26].attr = door_keep[26].attr & 0xfffd;
        door_keep[34].attr = door_keep[34].attr | 2;
        door_keep[49].attr = door_keep[49].attr & 0xfffd;
      }
      door_keep[26].attr = door_keep[26].attr | 2;
      poss_item[42] = 0;
      DoorChangeModel(0x1a,DAT_00328496);
      iVar4 = DoorKeyUnlockOnly(0x1a);
      if (iVar4 != 0) {
        DoorPassSetHide(0x2f);
        DoorPassSetHide(0x1a);
        DoorPassSetHide(0x22);
        DoorPassSetHide(0x31);
        DoorPassSetHide(0x1d);
        DoorOpenShiftForce(0x1a);
      }
      SetBlackIn();
      SeStartFix(0x5d,0,0x1000,0x1000,0);
      spev_wrk.mode = '\b';
      uVar1 = spev_wrk.count;
    }
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
    }
    break;
  case '\n':
    spev_str.alpha = 0x80;
    event_stts[ev_wrk.evt_no] = '\x01';
    goto LAB_001afa6c;
  case '\v':
    spev_str.alpha = 0x80;
LAB_001afa6c:
    spev_wrk.ret = '\x01';
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.count;
  }
  spev_wrk.count = uVar1;
  if (((spev_wrk.mode == '\x02') || (spev_wrk.mode == '\x05')) || (spev_wrk.mode == '\x06')) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit079() {
  spev_wrk.mode = '\0';
  spev_wrk.csr[0] = '\0';
  SpevStrInit();
  return;
}

void SpecialEventMain079() {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  
  switch(spev_wrk.mode) {
  case '\0':
    if (*key_now[5] == 1) {
      SeStartFix(1,0,0x1000,0x1000,0);
      spev_wrk.mode = '\x02';
      spev_wrk.time = '<';
      SetBlackOut();
      PlayerWarpReq('\x01');
      spev_wrk.count = '\0';
      break;
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      iVar4 = 3;
    }
    else {
      if (((*key_now[3] != 1) &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)))) &&
         (((uVar3 = Ana2PadDirCnt('\x01'), uVar3 < 0x1a ||
           (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 != 1)) &&
          ((*key_now[2] != 1 &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            ((sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1 &&
             ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
              (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))))))))) break;
      spev_wrk.mode = '\x01';
      iVar4 = 0;
    }
    goto LAB_001aea60;
  case '\x01':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      iVar4 = 3;
    }
    else {
      if ((((*key_now[3] != 1) &&
           (((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 != 1)))))) && (*key_now[2] != 1)) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))))) break;
      spev_wrk.mode = '\0';
      iVar4 = 0;
    }
LAB_001aea60:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    break;
  case '\x02':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x03';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      spev_wrk.time = '(';
      SetBlackIn();
      break;
    }
    goto LAB_001aeb08;
  case '\x03':
    iVar4 = PlayerWarpCtrl();
    if (iVar4 != 0) {
      spev_wrk.time = '\0';
    }
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
    }
    break;
  case '\x04':
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      break;
    }
LAB_001aeb08:
    spev_wrk.time = spev_wrk.time + 0xff;
    break;
  case '\x05':
    spev_wrk.ret = '\x01';
  }
  if (spev_wrk.mode < 2) {
    bVar5 = spev_wrk.csr[0] + 8;
    if ((spev_wrk.csr[0] < 0x78) && (spev_wrk.csr[0] = bVar5, 0x77 < bVar5)) {
      spev_wrk.csr[0] = 0x80;
    }
  }
  else {
    bVar1 = spev_wrk.csr[0] < 9;
    spev_wrk.csr[0] = spev_wrk.csr[0] - 8;
    if ((bVar1) || (spev_wrk.csr[0] < 9)) {
      spev_wrk.csr[0] = '\0';
    }
  }
  IdoInOutDisp(1);
  return;
}

void SpecialEventInit080() {
  spev_wrk.mode = '\0';
  SpevStrInit();
  return;
}

void SpecialEventMain080() {
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  
  uVar2 = spev_wrk.time;
  switch(spev_wrk.mode) {
  case '\0':
    if (*key_now[5] == 1) {
      SeStartFix(1,0,0x1000,0x1000,0);
      spev_wrk.mode = '\x02';
      spev_wrk.time = '<';
      SetBlackOut();
      PlayerWarpReq('\0');
      spev_wrk.count = '\0';
      uVar2 = spev_wrk.time;
      break;
    }
    if (*key_now[4] == 1) {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      iVar5 = 3;
    }
    else {
      if (((*key_now[3] != 1) &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           (sVar3 = Ana2PadDirCnt('\x01'), sVar3 != 1)))) &&
         (((uVar4 = Ana2PadDirCnt('\x01'), uVar4 < 0x1a ||
           (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 != 1)) &&
          ((*key_now[2] != 1 &&
           ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1 &&
             ((uVar4 = Ana2PadDirCnt('\x03'), uVar2 = spev_wrk.time, uVar4 < 0x1a ||
              (sVar3 = Ana2PadDirCnt('\x03'), uVar2 = spev_wrk.time, (int)sVar3 % 5 != 1))))))))))))
      break;
      spev_wrk.mode = '\x01';
      iVar5 = 0;
    }
    goto LAB_001aefe0;
  case '\x01':
    if ((*key_now[5] == 1) || (*key_now[4] == 1)) {
      spev_wrk.mode = '\x04';
      spev_wrk.time = '\x14';
      iVar5 = 3;
    }
    else {
      if ((((*key_now[3] != 1) &&
           (((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
             (sVar3 = Ana2PadDirCnt('\x01'), sVar3 != 1)) &&
            ((uVar4 = Ana2PadDirCnt('\x01'), uVar4 < 0x1a ||
             (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 != 1)))))) && (*key_now[2] != 1)) &&
         ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
          ((sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1 &&
           ((uVar4 = Ana2PadDirCnt('\x03'), uVar2 = spev_wrk.time, uVar4 < 0x1a ||
            (sVar3 = Ana2PadDirCnt('\x03'), uVar2 = spev_wrk.time, (int)sVar3 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\0';
      iVar5 = 0;
    }
LAB_001aefe0:
    SeStartFix(iVar5,0,0x1000,0x1000,0);
    uVar2 = spev_wrk.time;
    break;
  case '\x02':
    bVar1 = spev_wrk.time == '\0';
    spev_wrk.time = spev_wrk.time + 0xff;
    if (bVar1) {
      spev_wrk.mode = '\x03';
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      spev_wrk.time = '(';
      uVar2 = spev_wrk.time;
      break;
    }
  case '\x03':
    iVar5 = PlayerWarpCtrl();
    if (iVar5 != 0) {
      spev_wrk.time = '\0';
    }
    uVar2 = spev_wrk.time;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      SetBlackIn();
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x04':
    uVar2 = spev_wrk.time + 0xff;
    if (spev_wrk.time == '\0') {
      spev_wrk.mode = '\x05';
      uVar2 = spev_wrk.time;
    }
    break;
  case '\x05':
    spev_wrk.ret = '\x01';
  }
  spev_wrk.time = uVar2;
  if (spev_wrk.mode < 2) {
    bVar6 = spev_wrk.csr[0] + 8;
    if ((spev_wrk.csr[0] < 0x78) && (spev_wrk.csr[0] = bVar6, 0x77 < bVar6)) {
      spev_wrk.csr[0] = 0x80;
    }
  }
  else {
    bVar1 = spev_wrk.csr[0] < 9;
    spev_wrk.csr[0] = spev_wrk.csr[0] - 8;
    if ((bVar1) || (spev_wrk.csr[0] < 9)) {
      spev_wrk.csr[0] = '\0';
    }
  }
  IdoInOutDisp(0);
  return;
}

void SpecialEventInit081() {
  return;
}

void SpecialEventMain081() {
  ev_wrk.face_stts[0] = ev_wrk.face_stts[0] & 0xfb;
  SetFurnAttrEve(0x7d,0x4000,1);
  DoorChangeModel(0x1a,DAT_00328496);
  if (door_keep[26].room_id != DAT_0032847e) {
    ChangeRotDoorFace2Room(0x1a,(uchar)DAT_0032847e);
  }
  door_keep[26].attr = door_keep[26].attr | 2;
  event_stts[ev_wrk.evt_no] = '\x01';
  poss_item[42] = 0;
  spev_wrk.ret = '\x01';
  return;
}

void SpecialEventInit082() {
  spev_wrk.csr[1] = 'w';
  spev_wrk.csr[0] = DAT_003284d6;
  spev_wrk.csr[2] = 'x';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain082() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  NawakakeFalseDisp();
  uVar1 = spev_wrk.mode;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEndAll();
    uVar1 = '\x02';
    if (iVar4 != 0) break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x05';
    }
    break;
  case '\x03':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x04';
    }
    break;
  case '\x04':
    iVar4 = ButtonMarkNext(0,0,0);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\b';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\x03';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001afe1c;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((*key_now[2] != 1) &&
          (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))) &&
         ((*key_now[3] != 1 &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001afe1c:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.mode;
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\n':
    goto LAB_001b0164;
  case '\v':
LAB_001b0164:
    spev_wrk.ret = '\x01';
    spev_str.alpha = 0x80;
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.mode;
  }
  spev_wrk.mode = uVar1;
  if (spev_wrk.mode - 2 < 5) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit083() {
  spev_wrk.csr[1] = 'y';
  spev_wrk.csr[0] = DAT_003284d8;
  spev_wrk.csr[2] = 'z';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain083() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  NawakakeFalseDisp();
  uVar1 = spev_wrk.mode;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEndAll();
    uVar1 = '\x02';
    if (iVar4 != 0) break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x05';
    }
    break;
  case '\x03':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x04';
    }
    break;
  case '\x04':
    iVar4 = ButtonMarkNext(0,0,0);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\b';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\x03';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001afe1c;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((*key_now[2] != 1) &&
          (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))) &&
         ((*key_now[3] != 1 &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001afe1c:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.mode;
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\n':
    goto LAB_001b0164;
  case '\v':
LAB_001b0164:
    spev_wrk.ret = '\x01';
    spev_str.alpha = 0x80;
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.mode;
  }
  spev_wrk.mode = uVar1;
  if (spev_wrk.mode - 2 < 5) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit084() {
  spev_wrk.csr[1] = '{';
  spev_wrk.csr[0] = DAT_003284da;
  spev_wrk.csr[2] = '|';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain084() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  NawakakeFalseDisp();
  uVar1 = spev_wrk.mode;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEndAll();
    uVar1 = '\x02';
    if (iVar4 != 0) break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x05';
    }
    break;
  case '\x03':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x04';
    }
    break;
  case '\x04':
    iVar4 = ButtonMarkNext(0,0,0);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\b';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\x03';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001afe1c;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((*key_now[2] != 1) &&
          (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))) &&
         ((*key_now[3] != 1 &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001afe1c:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.mode;
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\n':
    goto LAB_001b0164;
  case '\v':
LAB_001b0164:
    spev_wrk.ret = '\x01';
    spev_str.alpha = 0x80;
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.mode;
  }
  spev_wrk.mode = uVar1;
  if (spev_wrk.mode - 2 < 5) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit085() {
  spev_wrk.csr[1] = '}';
  spev_wrk.csr[0] = DAT_003284dc;
  spev_wrk.csr[2] = '~';
  pzl_load_id = SeFileLoadAndSet(0x5f4,0x15);
  spev_wrk.mode = '\0';
  SpevStrInit();
  spev_wrk.count = '\0';
  return;
}

void SpecialEventMain085() {
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  NawakakeFalseDisp();
  uVar1 = spev_wrk.mode;
  switch(spev_wrk.mode) {
  case '\0':
    iVar4 = IsLoadEndAll();
    uVar1 = '\x02';
    if (iVar4 != 0) break;
  case '\x02':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x05';
    }
    break;
  case '\x03':
    iVar4 = ButtonMarkNext(0,0,1);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\x04';
    }
    break;
  case '\x04':
    iVar4 = ButtonMarkNext(0,0,0);
    uVar1 = spev_wrk.mode;
    if (iVar4 != 0) {
      ButtonMarkTimeClear();
      uVar1 = '\b';
    }
    break;
  case '\x05':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\x03';
      iVar4 = 0x5d;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((((*key_now[2] != 1) &&
            ((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
             (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)))) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))) && (*key_now[3] != 1)) &&
         ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
          ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
           ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))
      break;
      spev_wrk.mode = '\x06';
      iVar4 = 0;
    }
    goto LAB_001afe1c;
  case '\x06':
    if (*key_now[5] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else if (*key_now[4] == 1) {
      spev_wrk.mode = '\t';
      iVar4 = 3;
    }
    else {
      if (((*key_now[2] != 1) &&
          (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x03'), sVar2 != 1)) &&
           ((uVar3 = Ana2PadDirCnt('\x03'), uVar3 < 0x1a ||
            (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 != 1)))))) &&
         ((*key_now[3] != 1 &&
          ((((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)) &&
           ((sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1 &&
            ((uVar3 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, uVar3 < 0x1a ||
             (sVar2 = Ana2PadDirCnt('\x01'), uVar1 = spev_wrk.mode, (int)sVar2 % 5 != 1))))))))))
      break;
      spev_wrk.mode = '\x05';
      iVar4 = 0;
    }
LAB_001afe1c:
    SeStartFix(iVar4,0,0x1000,0x1000,0);
    uVar1 = spev_wrk.mode;
    break;
  case '\b':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\n';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\t':
    if (spev_wrk.time < 0xb) {
      spev_wrk.mode = '\v';
      uVar1 = spev_wrk.mode;
    }
    break;
  case '\n':
    goto LAB_001b0164;
  case '\v':
LAB_001b0164:
    spev_wrk.ret = '\x01';
    spev_str.alpha = 0x80;
    ButtonMarkTimeClear();
    uVar1 = spev_wrk.mode;
  }
  spev_wrk.mode = uVar1;
  if (spev_wrk.mode - 2 < 5) {
    if (0x6f < spev_wrk.time) {
      return;
    }
    if ((byte)(spev_wrk.time + 8) < 0x70) {
      spev_wrk.time = spev_wrk.time + 8;
      return;
    }
    uVar1 = 'x';
  }
  else {
    uVar1 = '\n';
    if (0x12 < spev_wrk.time) {
      uVar1 = '\n';
      if (0x12 < (byte)(spev_wrk.time - 8)) {
        spev_wrk.time = spev_wrk.time - 8;
        return;
      }
    }
  }
  spev_wrk.time = uVar1;
  return;
}

void SpecialEventInit086() {
  return;
}

void SpecialEventMain086() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == door_keep[47].room_id) {
    iVar1 = DoorKeyUnlockOnly(0x2f);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x2f);
    }
  }
  else {
    iVar1 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar1);
    iVar1 = SetMessage();
    if (iVar1 != 0) {
      return;
    }
  }
  spev_wrk.ret = '\x01';
  return;
}

void SpecialEventInit087() {
  return;
}

void SpecialEventMain087() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == door_keep[26].room_id) {
    iVar1 = DoorKeyUnlockOnly(0x1a);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x1a);
    }
  }
  else {
    iVar1 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar1);
    iVar1 = SetMessage();
    if (iVar1 != 0) {
      return;
    }
  }
  spev_wrk.ret = '\x01';
  return;
}

void SpecialEventInit088() {
  return;
}

void SpecialEventMain088() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == door_keep[34].room_id) {
    iVar1 = DoorKeyUnlockOnly(0x22);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x22);
    }
  }
  else {
    iVar1 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar1);
    iVar1 = SetMessage();
    if (iVar1 != 0) {
      return;
    }
  }
  spev_wrk.ret = '\x01';
  return;
}

void SpecialEventInit089() {
  return;
}

void SpecialEventMain089() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == door_keep[49].room_id) {
    iVar1 = DoorKeyUnlockOnly(0x31);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x31);
    }
  }
  else {
    iVar1 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar1);
    iVar1 = SetMessage();
    if (iVar1 != 0) {
      return;
    }
  }
  spev_wrk.ret = '\x01';
  return;
}

void SpecialEventInit090() {
  return;
}

void SpecialEventMain090() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == door_keep[54].room_id) {
    iVar1 = DoorKeyUnlockOnly(0x36);
    if (iVar1 != 0) {
      DoorOpenShiftForce(0x36);
    }
  }
  else {
    iVar1 = GetIngameMSGAddr('\a',0x48);
    SetMessageAddr(iVar1);
    iVar1 = SetMessage();
    if (iVar1 != 0) {
      return;
    }
  }
  spev_wrk.ret = '\x01';
  return;
}
