// STATUS: NOT STARTED

typedef struct {
	u_long tex_now;
	u_long tex_bak;
	int load_id;
	short int gage_hp;
	u_char alp_now;
	u_char itm_lst_strt;
	u_char flm_alp[5];
	u_char hp_max_chk;
	u_char flm_dff_chk;
	u_char itm_eve_chk;
	u_char itm_csr_now;
	u_char itm_loading;
	u_char itm_can_dsp;
	u_char itm_dsp_flg;
	u_char i_mode;
	u_char msg_end;
	u_char btn_flsh_cnt;
	u_char set_sub_tmp;
	u_char set_sub_flr;
	u_char set_sub_bak;
	u_char set_spe_tmp;
	u_char set_spe_flr;
	u_char set_spe_bak;
	u_char cam_flr_tmr;
	u_char tape_flsh;
} ITM_EFF_WRK;

typedef struct {
	u_char chr[4];
	u_int num;
} PKZ_HEAD;

typedef struct {
	u_char open_page;
	u_char knd_bak;
	u_char no_bak;
} MSG_DSP;

typedef struct {
	u_char knd_char;
	short int char_no;
} YWDBG;

ITEM_USE_DAT item_use_dat[70] = {
	/* [0] = */ {
		/* .type = */ 2,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [1] = */ {
		/* .type = */ 2,
		/* .value0 = */ 1,
		/* .value1 = */ 0
	},
	/* [2] = */ {
		/* .type = */ 2,
		/* .value0 = */ 2,
		/* .value1 = */ 0
	},
	/* [3] = */ {
		/* .type = */ 2,
		/* .value0 = */ 3,
		/* .value1 = */ 0
	},
	/* [4] = */ {
		/* .type = */ 2,
		/* .value0 = */ 4,
		/* .value1 = */ 0
	},
	/* [5] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [6] = */ {
		/* .type = */ 3,
		/* .value0 = */ 0,
		/* .value1 = */ 200
	},
	/* [7] = */ {
		/* .type = */ 3,
		/* .value0 = */ 1,
		/* .value1 = */ 500
	},
	/* [8] = */ {
		/* .type = */ 0,
		/* .value0 = */ 1,
		/* .value1 = */ 500
	},
	/* [9] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [10] = */ {
		/* .type = */ 0,
		/* .value0 = */ 56,
		/* .value1 = */ 0
	},
	/* [11] = */ {
		/* .type = */ 0,
		/* .value0 = */ 87,
		/* .value1 = */ 0
	},
	/* [12] = */ {
		/* .type = */ 0,
		/* .value0 = */ 129,
		/* .value1 = */ 0
	},
	/* [13] = */ {
		/* .type = */ 0,
		/* .value0 = */ 84,
		/* .value1 = */ 0
	},
	/* [14] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [15] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [16] = */ {
		/* .type = */ 0,
		/* .value0 = */ 71,
		/* .value1 = */ 0
	},
	/* [17] = */ {
		/* .type = */ 0,
		/* .value0 = */ 61,
		/* .value1 = */ 0
	},
	/* [18] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [19] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [20] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [21] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [22] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [23] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [24] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [25] = */ {
		/* .type = */ 0,
		/* .value0 = */ 144,
		/* .value1 = */ 0
	},
	/* [26] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [27] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [28] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [29] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [30] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [31] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [32] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [33] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [34] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [35] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [36] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [37] = */ {
		/* .type = */ 0,
		/* .value0 = */ 112,
		/* .value1 = */ 0
	},
	/* [38] = */ {
		/* .type = */ 0,
		/* .value0 = */ 80,
		/* .value1 = */ 0
	},
	/* [39] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [40] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [41] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [42] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [43] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [44] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [45] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [46] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [47] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [48] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [49] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [50] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [51] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [52] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [53] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [54] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [55] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [56] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [57] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [58] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [59] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [60] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [61] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [62] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [63] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [64] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [65] = */ {
		/* .type = */ 5,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [66] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [67] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [68] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	},
	/* [69] = */ {
		/* .type = */ 0,
		/* .value0 = */ 0,
		/* .value1 = */ 0
	}
};
short int item_sort[70] = {
	/* [0] = */ 6,
	/* [1] = */ 66,
	/* [2] = */ 7,
	/* [3] = */ 8,
	/* [4] = */ 41,
	/* [5] = */ 42,
	/* [6] = */ 43,
	/* [7] = */ 44,
	/* [8] = */ 10,
	/* [9] = */ 16,
	/* [10] = */ 37,
	/* [11] = */ 11,
	/* [12] = */ 25,
	/* [13] = */ 12,
	/* [14] = */ 26,
	/* [15] = */ 34,
	/* [16] = */ 39,
	/* [17] = */ 48,
	/* [18] = */ 13,
	/* [19] = */ 24,
	/* [20] = */ 46,
	/* [21] = */ 47,
	/* [22] = */ 23,
	/* [23] = */ 15,
	/* [24] = */ 14,
	/* [25] = */ 40,
	/* [26] = */ 27,
	/* [27] = */ 49,
	/* [28] = */ 56,
	/* [29] = */ 57,
	/* [30] = */ 58,
	/* [31] = */ 59,
	/* [32] = */ 17,
	/* [33] = */ 18,
	/* [34] = */ 60,
	/* [35] = */ 61,
	/* [36] = */ 19,
	/* [37] = */ 62,
	/* [38] = */ 63,
	/* [39] = */ 64,
	/* [40] = */ 20,
	/* [41] = */ 65,
	/* [42] = */ 28,
	/* [43] = */ 29,
	/* [44] = */ 38,
	/* [45] = */ 45,
	/* [46] = */ 21,
	/* [47] = */ 22,
	/* [48] = */ 30,
	/* [49] = */ 31,
	/* [50] = */ 32,
	/* [51] = */ 33,
	/* [52] = */ 36,
	/* [53] = */ 35,
	/* [54] = */ 50,
	/* [55] = */ 51,
	/* [56] = */ 52,
	/* [57] = */ 53,
	/* [58] = */ 54,
	/* [59] = */ 55,
	/* [60] = */ 0,
	/* [61] = */ 67,
	/* [62] = */ 68,
	/* [63] = */ 69,
	/* [64] = */ 9,
	/* [65] = */ 5,
	/* [66] = */ 4,
	/* [67] = */ 3,
	/* [68] = */ 2,
	/* [69] = */ 1
};
short int file2item[0] = {
};
char file2phot[0] = {
};
char pht_waku_put[0] = {
};
static u_short char_tex[7] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0
};
static u_short top_char[7] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0
};
static u_short end_char[7] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0
};
FOR_YW2D yw2d = {
	/* .io_x = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f,
		/* [4] = */ 0.f,
		/* [5] = */ 0.f,
		/* [6] = */ 0.f
	},
	/* .io_y = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f,
		/* [4] = */ 0.f,
		/* [5] = */ 0.f,
		/* [6] = */ 0.f
	},
	/* .io_a = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f,
		/* [4] = */ 0.f,
		/* [5] = */ 0.f,
		/* [6] = */ 0.f
	},
	/* .pos_x = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		}
	},
	/* .pos_y = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		}
	},
	/* .inn_mode_cnt = */ 0,
	/* .out_mode_cnt = */ 0,
	/* .znz_tmr = */ {
		/* [0] = */ 0
	},
	/* .menu_cnt = */ 0,
	/* .menu_io_cnt = */ 0,
	/* .menu_io_flg = */ 0,
	/* .map_flg = */ 0,
	/* .pad_lock = */ 0
};
INGAME_MENU_WRK ig_menu_wrk = {
	/* .mode = */ 0,
	/* .csr = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .csr_bak = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .item_num = */ 0,
	/* .use_item = */ 0,
	/* .file_num = */ 0
};
MENU_ITEM_WRK menu_item_wrk[200] = {
	/* [0] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [1] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [2] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [3] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [4] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [5] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [6] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [7] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [8] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [9] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [10] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [11] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [12] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [13] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [14] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [15] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [16] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [17] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [18] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [19] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [20] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [21] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [22] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [23] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [24] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [25] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [26] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [27] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [28] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [29] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [30] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [31] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [32] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [33] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [34] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [35] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [36] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [37] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [38] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [39] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [40] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [41] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [42] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [43] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [44] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [45] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [46] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [47] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [48] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [49] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [50] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [51] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [52] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [53] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [54] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [55] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [56] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [57] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [58] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [59] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [60] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [61] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [62] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [63] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [64] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [65] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [66] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [67] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [68] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [69] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [70] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [71] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [72] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [73] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [74] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [75] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [76] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [77] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [78] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [79] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [80] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [81] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [82] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [83] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [84] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [85] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [86] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [87] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [88] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [89] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [90] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [91] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [92] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [93] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [94] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [95] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [96] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [97] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [98] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [99] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [100] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [101] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [102] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [103] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [104] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [105] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [106] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [107] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [108] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [109] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [110] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [111] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [112] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [113] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [114] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [115] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [116] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [117] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [118] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [119] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [120] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [121] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [122] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [123] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [124] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [125] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [126] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [127] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [128] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [129] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [130] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [131] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [132] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [133] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [134] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [135] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [136] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [137] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [138] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [139] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [140] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [141] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [142] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [143] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [144] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [145] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [146] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [147] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [148] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [149] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [150] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [151] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [152] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [153] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [154] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [155] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [156] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [157] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [158] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [159] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [160] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [161] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [162] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [163] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [164] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [165] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [166] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [167] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [168] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [169] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [170] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [171] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [172] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [173] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [174] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [175] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [176] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [177] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [178] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [179] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [180] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [181] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [182] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [183] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [184] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [185] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [186] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [187] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [188] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [189] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [190] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [191] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [192] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [193] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [194] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [195] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [196] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [197] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [198] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	},
	/* [199] = */ {
		/* .item_no = */ 0,
		/* .item_num = */ 0
	}
};
static FLSH_CORE flsh[2];
static ITM_EFF_WRK iew;
static MSG_DSP msg;
static YWDBG ywdbg;
static FLSH_CORE dbg_flsh;

void NewgameItemInit() {
  memset(poss_item,0,200);
  memset(poss_file,0,200);
  memset(flm_exp_flg,0,5);
  memset(item_dsp_wrk,0,0x400);
  memset(&iew,0,0x30);
  memset(&msg,0,3);
  return;
}

void NewgameItemInit2() {
  if (ingame_wrk.clear_count == 0) {
    memset(poss_item,0,200);
    memset(flm_exp_flg,0,5);
  }
  else {
    MissionSelectItemInit();
  }
  memset(item_dsp_wrk,0,0x400);
  memset(&iew,0,0x30);
  memset(&msg,0,3);
  return;
}

void MissionSelectItemInit() {
	int i;
	int j;
	int save_item[10];
	int check_num;
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int save_item [10];
  
  uVar1 = (int)save_item + 7U & 7;
  puVar2 = (ulong *)(((int)save_item + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034fbc0 >> (7 - uVar1) * 8;
  uVar1 = (int)save_item + 0xfU & 7;
  puVar2 = (ulong *)(((int)save_item + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034fbc8 >> (7 - uVar1) * 8;
  save_item._8_8_ = DAT_0034fbc8;
  uVar1 = (int)save_item + 0x17U & 7;
  puVar2 = (ulong *)(((int)save_item + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034fbd0 >> (7 - uVar1) * 8;
  save_item._16_8_ = DAT_0034fbd0;
  uVar1 = (int)save_item + 0x1fU & 7;
  puVar2 = (ulong *)(((int)save_item + 0x1fU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034fbd8 >> (7 - uVar1) * 8;
  save_item._24_8_ = DAT_0034fbd8;
  uVar1 = (int)save_item + 0x27U & 7;
  puVar2 = (ulong *)(((int)save_item + 0x27U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034fbe0 >> (7 - uVar1) * 8;
  save_item._32_8_ = DAT_0034fbe0;
  save_item[0] = (int)DAT_0034fbc0;
  iVar4 = 0;
  do {
    iVar3 = 0;
    if (iVar4 != save_item[0]) {
      for (iVar3 = 1; (iVar3 < 10 && (iVar4 != save_item[iVar3])); iVar3 = iVar3 + 1) {
      }
    }
    iVar5 = iVar4 + 1;
    if (iVar3 == 10) {
      poss_item[iVar4] = 0;
    }
    iVar4 = iVar5;
  } while (iVar5 < 200);
  return;
}

void MenuItemInit() {
  memset(item_dsp_wrk,0,0x400);
  memset(&iew,0,0x30);
  memset(&msg,0,3);
  FileDateInit();
  return;
}

void LoadgameMenuItemInit() {
  memset(item_dsp_wrk,0,0x400);
  memset(&iew,0,0x30);
  memset(&msg,0,3);
  return;
}

void StartItemModeInit() {
  yw2d.pad_lock = 1;
  ig_menu_wrk.csr[1] = '\0';
  iew.itm_can_dsp = 0xff;
  iew.tex_now = 0;
  iew.load_id = -1;
  iew.tape_flsh = '\0';
  ig_menu_wrk.csr[2] = '\0';
  iew.itm_lst_strt = '\0';
  iew.itm_dsp_flg = '\0';
  iew.tex_bak = 0;
  iew.alp_now = '\0';
  iew.i_mode = '\0';
  iew.msg_end = '\0';
  iew.btn_flsh_cnt = '\0';
  iew.cam_flr_tmr = '\0';
  tape_play = '\0';
  return;
}

void ItemInitAtMenuOpen() {
  iew.set_spe_bak = cam_custom_wrk.set_spe;
  iew.gage_hp = plyr_wrk.hp;
  iew.set_sub_bak = cam_custom_wrk.set_sub;
  iew.set_sub_flr = '\0';
  iew.set_spe_flr = '\0';
  return;
}

void FilmPossessionExp() {
	int i;
	
  uchar uVar1;
  ITEM_USE_DAT *pIVar2;
  int iVar3;
  
  pIVar2 = item_use_dat;
  iVar3 = 0;
  uVar1 = item_use_dat[0].type;
  while( true ) {
    pIVar2 = pIVar2 + 1;
    if ((uVar1 == '\x02') && (poss_item[iVar3] != 0)) {
      flm_exp_flg[iVar3] = '\x01';
    }
    iVar3 = iVar3 + 1;
    if (4 < iVar3) break;
    uVar1 = pIVar2->type;
  }
  return;
}

void IngameMenuItem() {
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  IngameMenuItemDisp();
  if (ig_menu_wrk.item_num == '\0') {
    if ((yw2d.pad_lock == 0) && (*key_now[4] == 1)) {
      SeStartFix(3,0,0x1000,0x1000,1);
      yw2d.out_mode_cnt = 0xb;
    }
  }
  else if (yw2d.pad_lock == 0) {
    if (*key_now[4] == 1) {
      iVar3 = IsLoadEndAll();
      if (iVar3 != 0) {
        yw2d.out_mode_cnt = 0xb;
        SeStartFix(3,0,0x1000,0x1000,1);
        return;
      }
    }
    else {
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        ig_menu_wrk.mode = '\b';
        ig_menu_wrk.csr[2] = '\0';
        iew.itm_eve_chk = '\0';
        SttsRenew();
        if ((item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].type != '\0') &&
           ((iew._24_7_ & 0xffff0000000000) == 0)) {
          SeStartFix(1,0,0x1000,0x1000,1);
          return;
        }
        SeStartFix(2,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[0] == 1) ||
         ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
           (sVar1 = Ana2PadDirCnt('\0'), sVar1 == 1)) ||
          ((uVar2 = Ana2PadDirCnt('\0'), 0x19 < uVar2 &&
           (sVar1 = Ana2PadDirCnt('\0'), (int)sVar1 % 5 == 1)))))) {
        if (ig_menu_wrk.csr[1] == '\0') {
          ig_menu_wrk.csr[1] = ig_menu_wrk.item_num + 0xff;
          if (ig_menu_wrk.item_num < 6) {
            iew.itm_lst_strt = '\0';
          }
          else {
            iew.itm_lst_strt = ig_menu_wrk.item_num + 0xfa;
          }
        }
        else {
          if (ig_menu_wrk.csr[1] == iew.itm_lst_strt) {
            iew.itm_lst_strt = iew.itm_lst_strt + 0xff;
          }
          ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[1] == 1) ||
         (((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
          ((sVar1 = Ana2PadDirCnt('\x02'), sVar1 == 1 ||
           ((uVar2 = Ana2PadDirCnt('\x02'), 0x19 < uVar2 &&
            (sVar1 = Ana2PadDirCnt('\x02'), (int)sVar1 % 5 == 1)))))))) {
        if ((int)(uint)ig_menu_wrk.csr[1] < (int)(ig_menu_wrk.item_num - 1)) {
          if ((uint)ig_menu_wrk.csr[1] == iew.itm_lst_strt + 5) {
            iew.itm_lst_strt = iew.itm_lst_strt + '\x01';
          }
          ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
        }
        else {
          ig_menu_wrk.csr[1] = '\0';
          iew.itm_lst_strt = '\0';
        }
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
    }
  }
  return;
}

void IngameMenuItemUseSlct() {
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  MENU_ITEM_WRK *pMVar5;
  
  IngameMenuItemDisp();
  if (tape_play == '\0') {
    pMVar5 = menu_item_wrk + ig_menu_wrk.csr[1];
    if ((item_use_dat[(ushort)pMVar5->item_no].type == '\0') ||
       (((ig_menu_wrk.mode == '\t' && (iew.msg_end != '\0')) ||
        ((CONCAT17(iew.itm_eve_chk,iew._24_7_) & 0xffffff0000000000) != 0)))) {
      if ((int)(ig_menu_wrk.item_num - 1) < (int)(uint)ig_menu_wrk.csr[1]) {
        if (yw2d.pad_lock == 0) {
          if ((*key_now[0] == 1) || (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) {
            if (ig_menu_wrk.csr[1] == '\0') {
              ig_menu_wrk.csr[1] = ig_menu_wrk.item_num + 0xff;
              if (ig_menu_wrk.item_num < 6) {
                iew.itm_lst_strt = '\0';
              }
              else {
                iew.itm_lst_strt = ig_menu_wrk.item_num + 0xfa;
              }
            }
            else {
              if (ig_menu_wrk.csr[1] == iew.itm_lst_strt) {
                iew.itm_lst_strt = iew.itm_lst_strt + 0xff;
              }
              ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
            }
            ig_menu_wrk.mode = '\x01';
            SeStartFix(0,0,0x1000,0x1000,1);
            return;
          }
          if ((*key_now[1] == 1) || (sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1)) {
            if ((int)(uint)ig_menu_wrk.csr[1] < (int)(ig_menu_wrk.item_num - 1)) {
              if ((uint)ig_menu_wrk.csr[1] == iew.itm_lst_strt + 5) {
                iew.itm_lst_strt = iew.itm_lst_strt + '\x01';
              }
              ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
            }
            else {
              ig_menu_wrk.csr[1] = '\0';
              iew.itm_lst_strt = '\0';
            }
            ig_menu_wrk.mode = '\x01';
            SeStartFix(0,0,0x1000,0x1000,1);
            return;
          }
        }
      }
      else if (yw2d.pad_lock == 0) {
        if (*key_now[4] == 1) {
          ig_menu_wrk.mode = '\x01';
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
        if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
          ig_menu_wrk.mode = '\x01';
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
        if ((*key_now[0] == 1) ||
           ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
             (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) ||
            ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
             (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))))) {
          if (ig_menu_wrk.csr[1] == '\0') {
            ig_menu_wrk.csr[1] = ig_menu_wrk.item_num + 0xff;
            if (ig_menu_wrk.item_num < 6) {
              iew.itm_lst_strt = '\0';
            }
            else {
              iew.itm_lst_strt = ig_menu_wrk.item_num + 0xfa;
            }
          }
          else {
            if (ig_menu_wrk.csr[1] == iew.itm_lst_strt) {
              iew.itm_lst_strt = iew.itm_lst_strt + 0xff;
            }
            ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
          }
          ig_menu_wrk.mode = '\x01';
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
        if ((*key_now[1] == 1) ||
           (((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)) ||
            ((sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1 ||
             ((uVar3 = Ana2PadDirCnt('\x02'), 0x19 < uVar3 &&
              (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 == 1)))))))) {
          if ((int)(uint)ig_menu_wrk.csr[1] < (int)(ig_menu_wrk.item_num - 1)) {
            if ((uint)ig_menu_wrk.csr[1] == iew.itm_lst_strt + 5) {
              iew.itm_lst_strt = iew.itm_lst_strt + '\x01';
            }
            ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
          }
          else {
            ig_menu_wrk.csr[1] = '\0';
            iew.itm_lst_strt = '\0';
          }
          ig_menu_wrk.mode = '\x01';
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
      }
    }
    else if (((ig_menu_wrk.mode != '\t') || (iew.msg_end != '\0')) && (yw2d.pad_lock == 0)) {
      if (*key_now[4] == 1) {
        ig_menu_wrk.mode = '\x01';
        SeStartFix(3,0,0x1000,0x1000,1);
        return;
      }
      if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
        if (ig_menu_wrk.csr[2] == '\0') {
          if (item_use_dat[(ushort)pMVar5->item_no].type == '\x01') {
            iVar4 = IngameMenuItemEventOpenJudge(*(uchar *)&pMVar5->item_no);
            if (iVar4 == 0) {
              iew.itm_eve_chk = '\x01';
            }
            else {
              iew.itm_eve_chk = '\0';
            }
          }
          else {
            ItemUse(*(uchar *)&pMVar5->item_no);
            ig_menu_wrk.mode = '\t';
            ig_menu_wrk.use_item = *(uchar *)&menu_item_wrk[ig_menu_wrk.csr[1]].item_no;
            RstMessageYW();
          }
        }
        else {
          ig_menu_wrk.mode = '\x01';
        }
        if (ig_menu_wrk.csr[2] != '\0') {
          SeStartFix(3,0,0x1000,0x1000,1);
          return;
        }
        if (iew.itm_eve_chk != '\0') {
          SeStartFix(2,0,0x1000,0x1000,1);
          return;
        }
      }
      else {
        if ((*key_now[3] == 1) || (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) {
          ig_menu_wrk.csr[2] = '\x01' - ig_menu_wrk.csr[2];
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
        if ((*key_now[2] == 1) || (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) {
          ig_menu_wrk.csr[2] = '\x01' - ig_menu_wrk.csr[2];
          SeStartFix(0,0,0x1000,0x1000,1);
          return;
        }
      }
    }
  }
  else {
    iVar4 = play_tape_timer + -1;
    if ((play_tape_timer == 0) || (play_tape_timer = iVar4, iVar4 == 0)) {
      bVar1 = IsEndAdpcmTape();
      if (bVar1 == 0) {
        if (*key_now[5] == 1) {
          AdpcmStopTape(5);
          ig_menu_wrk.mode = '\x01';
          tape_play = '\0';
          SeStartFix(1,0,0x1000,0x1000,1);
          return;
        }
      }
      else {
        ig_menu_wrk.mode = '\x01';
        tape_play = '\0';
      }
    }
  }
  return;
}

void IngameMenuItemDisp() {
  ItemCntInit();
  ItemModeInOut();
  DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x02');
  PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
  GetItemNum();
  if (ig_menu_wrk.item_num == '\0') {
    DrawMessageBox(0x64000,170.0,210.0,300.0,60.0,(byte)(int)yw2d.io_a[4]);
    PutStringYW(0x19,6,0xc3,0xe4,0x808080,(byte)(int)yw2d.io_a[4],0x1000,0);
  }
  else {
    ItemList((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
    ItemInTheLenz2D((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
    MessageWindow((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
  }
  DispCaption(0x13,(byte)(int)yw2d.io_a[4]);
  ItemModeInOut2();
  ItemCntRenew();
  return;
}

static void ItemUse(u_char item_no) {
	int adpcm_no;
	
  int adpcm_no;
  uint item_no_00;
  
  item_no_00 = (int)(char)item_no & 0xff;
  switch(item_use_dat[item_no_00].type) {
  case '\x02':
    plyr_wrk.film_no = item_use_dat[item_no_00].value0;
    SeStartFix(5,0,0x1000,0x1000,1);
    return;
  case '\x03':
    plyr_wrk.hp = plyr_wrk.hp + item_use_dat[item_no_00].value1;
    if (500 < (ushort)plyr_wrk.hp) {
      plyr_wrk.hp = 500;
    }
    if (item_use_dat[item_no_00].value0 != '\0') {
      plyr_wrk.cond_tm = 0;
      plyr_wrk.cond = 0;
    }
    poss_item[item_no_00] = poss_item[item_no_00] - 1;
    SeStartFix(6,0,0x1000,0x1000,1);
    return;
  case '\x05':
    adpcm_no = CheckTape(item_no_00);
    if (adpcm_no != -1) {
      PlayTape(adpcm_no);
      return;
    }
  }
  return;
}

static int IngameMenuItemEventOpenJudge(u_char item_no) {
  byte bVar1;
  uchar uVar2;
  int iVar3;
  
  bVar1 = item_use_dat[(int)(char)item_no & 0xffU].type;
  ev_wrk.use_item = (byte)((int)(char)item_no & 0xffU);
  if ((bVar1 == 1) && (uVar2 = EventOpenCtrl(), uVar2 != '\0')) {
    iVar3 = 1;
    ingame_wrk.mode = 7;
    ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    ev_wrk.mode = bVar1;
  }
  else {
    ev_wrk.use_item = 0xff;
    iVar3 = 0;
  }
  return iVar3;
}

static void ItemModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    yw2d.io_a[2] = 128.0;
    yw2d.io_a[1] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[3] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    yw2d.io_a[4] = yw2d.io_a[1];
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x01');
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.out_mode_cnt == 0) {
    iVar1 = 0;
    do {
      XYAdefaultYW((uchar)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
  }
  else {
    yw2d.io_a[1] = (float)(((ushort)yw2d.out_mode_cnt - 1) * 0x80) / 10.0;
    yw2d.io_a[2] = 128.0;
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[3] = (1.0 - (float)((ushort)yw2d.out_mode_cnt - 1) / 10.0) * 128.0;
    yw2d.io_a[4] = yw2d.io_a[1];
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x01');
    yw2d.pad_lock = 1;
    if (yw2d.out_mode_cnt == 1) {
      ig_menu_wrk.mode = '\a';
      IngameMenuModeSlctDispInit();
      yw2d.pad_lock = 0;
      yw2d.menu_io_flg = 0;
    }
  }
  return;
}

static void ItemModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x02');
    return;
  }
  if (yw2d.out_mode_cnt != 0) {
    DspPlayData((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],yw2d.io_a[3],'\x02');
    return;
  }
  return;
}

void PlayerStatusYW(u_char alpha) {
	u_char bak_alp;
	u_char tmp_alp;
	u_char flr_alp;
	
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  ushort alpha_00;
  byte blnd;
  uint uVar4;
  float fVar5;
  float fVar6;
  float alp;
  
  uVar4 = (int)(char)alpha & 0xff;
  alp = (float)uVar4;
  fVar5 = 1.0;
  fVar6 = alp;
  PutSpriteYW(0xd1,0xd1,0.0,0.0,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0xd2,0xd2,0.0,0.0,0.0,0x808080,alp,fVar5,fVar5,0,0xff,1,0,0);
  if ((ingame_wrk.game == 0) && (ingame_wrk.msn_no == 0)) {
    PutSpriteYW(0xef,0xef,0.0,0.0,0.0,0x808080,alp,fVar5,fVar5,0,0xff,1,0,0);
  }
  else {
    PutSpriteYW(0xd3,0xd3,0.0,0.0,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  }
  GageAnime(0,0,(byte)uVar4);
  fVar5 = 1.0;
  alpha_00 = (ushort)uVar4;
  FilmAnime(0,0,alpha_00);
  PutSpriteYW(0xf0,0xf0,0.0,0.0,0.0,0x808080,alp,DAT_00355ea8,DAT_00355ea8,0,0xff,1,0,0);
  PutStringYW(0x2d,0,0x1c5,0x3b,0x808080,(byte)uVar4,0x5000,0);
  PutNumberYW(3,(uint)poss_item[5],0x1cf,0x37,fVar5,fVar5,0x808080,alpha_00,0x5000,2,1);
  PutNumberYW(3,(int)cam_custom_wrk.point,0x1eb,0x1c,fVar5,fVar5,0x808080,alpha_00,0x5000,7,0);
  uVar1 = iew.set_sub_bak;
  if (iew.set_sub_bak != cam_custom_wrk.set_sub) {
    if (iew.set_sub_flr == '\0') {
      iew.set_sub_bak = cam_custom_wrk.set_sub;
      iew.set_sub_flr = '\x1e';
      iew.set_sub_tmp = uVar1;
    }
    goto LAB_001cfc20;
  }
  uVar3 = (uint)iew.set_sub_flr;
  if (iew.set_sub_flr < 0x15) {
    if (iew.set_sub_flr == '\0') {
      if (iew.set_sub_bak != 0xff) {
        PutSpriteYW(iew.set_sub_bak + 0xda,iew.set_sub_bak + 0xda,0.0,0.0,0.0,0x808080,fVar6,fVar5,
                    fVar5,0,0xff,1,0,0);
      }
      goto LAB_001cfc20;
    }
    uVar3 = (uint)iew.set_sub_flr;
    iew.set_sub_flr = iew.set_sub_flr + 0xff;
    uVar3 = (uint)((float)(uVar4 * uVar3) / 20.0);
    if (iew.set_sub_bak == 0xff) goto LAB_001cfc20;
    PutSpriteYW(iew.set_sub_bak + 0xda,iew.set_sub_bak + 0xda,0.0,0.0,0.0,0x808080,fVar6,fVar5,fVar5
                ,0,0xff,1,0,0);
    blnd = 1;
  }
  else {
    iew.set_sub_flr = iew.set_sub_flr + 0xff;
    uVar2 = (int)((float)(uVar4 * (uVar3 - 10)) / 10.0) & 0xff;
    uVar3 = uVar4 - uVar2;
    if (iew.set_sub_tmp != 0xff) {
      PutSpriteYW(iew.set_sub_tmp + 0xda,iew.set_sub_tmp + 0xda,0.0,0.0,0.0,0x808080,(float)uVar2,
                  fVar5,fVar5,0,0xff,1,0,0);
    }
    if (iew.set_sub_bak == 0xff) goto LAB_001cfc20;
    blnd = 0;
  }
  PutSpriteYW(iew.set_sub_bak + 0xda,iew.set_sub_bak + 0xda,0.0,0.0,0.0,0x808080,
              (float)(uVar3 & 0xff),fVar5,fVar5,0,0xff,1,blnd,0);
LAB_001cfc20:
  uVar1 = iew.set_spe_bak;
  if (iew.set_spe_bak == cam_custom_wrk.set_spe) {
    uVar3 = (uint)iew.set_spe_flr;
    if (iew.set_spe_flr < 0x15) {
      if (iew.set_spe_flr == '\0') {
        if (iew.set_spe_bak != 0xff) {
          PutSpriteYW(iew.set_spe_bak + 0xdf,iew.set_spe_bak + 0xdf,0.0,0.0,0.0,0x808080,alp,1.0,1.0
                      ,0,0xff,1,0,0);
          return;
        }
      }
      else {
        uVar3 = (uint)iew.set_spe_flr;
        iew.set_spe_flr = iew.set_spe_flr + 0xff;
        if (iew.set_spe_bak != 0xff) {
          fVar6 = 1.0;
          PutSpriteYW(iew.set_spe_bak + 0xdf,iew.set_spe_bak + 0xdf,0.0,0.0,0.0,0x808080,alp,1.0,1.0
                      ,0,0xff,1,0,0);
          PutSpriteYW(iew.set_spe_bak + 0xdf,iew.set_spe_bak + 0xdf,0.0,0.0,0.0,0x808080,
                      (float)((int)((float)(uVar4 * uVar3) / 20.0) & 0xff),fVar6,fVar6,0,0xff,1,1,0)
          ;
          return;
        }
      }
    }
    else {
      iew.set_spe_flr = iew.set_spe_flr + 0xff;
      uVar3 = (int)((float)(uVar4 * (uVar3 - 10)) / 10.0) & 0xff;
      if (iew.set_spe_tmp != 0xff) {
        PutSpriteYW(iew.set_spe_tmp + 0xdf,iew.set_spe_tmp + 0xdf,0.0,0.0,0.0,0x808080,(float)uVar3,
                    1.0,1.0,0,0xff,1,0,0);
      }
      if (iew.set_spe_bak != 0xff) {
        PutSpriteYW(iew.set_spe_bak + 0xdf,iew.set_spe_bak + 0xdf,0.0,0.0,0.0,0x808080,
                    (float)(uVar4 - uVar3 & 0xff),1.0,1.0,0,0xff,1,0,0);
        return;
      }
    }
  }
  else if (iew.set_spe_flr == '\0') {
    iew.set_spe_bak = cam_custom_wrk.set_spe;
    iew.set_spe_flr = '\x1e';
    iew.set_spe_tmp = uVar1;
  }
  return;
}

static void GageAnime(short int pos_x, short int pos_y, u_char alpha) {
  if ((short)iew.gage_hp + 2 < (int)(uint)(ushort)plyr_wrk.hp) {
    iew.gage_hp = iew.gage_hp + 2;
  }
  else {
    iew.gage_hp = plyr_wrk.hp;
  }
  PutStsBar(0xe5,0x808080,alpha,(float)(uint)(ushort)plyr_wrk.hp / 500.0);
  PutStsBar(0xe8,0x808080,alpha,(float)(int)(short)iew.gage_hp / 500.0);
  return;
}

static void PutStsBar(u_char char_label, int rgb, u_char alp, float scl_x) {
	int i;
	DISP_SPRT ds;
	
  int iVar1;
  SPRT_DAT *d;
  int iVar2;
  float fVar3;
  DISP_SPRT ds;
  
  iVar1 = ((int)(char)char_label & 0xffU) * 0x20;
  d = (SPRT_DAT *)(&spr_dat + iVar1);
  fVar3 = 1.0;
  iVar2 = 2;
  do {
    CopySprDToSpr(&ds,d);
    d = d + 1;
    ds.csx = (float)*(int *)(&DAT_00329880 + iVar1);
    iVar2 = iVar2 + -1;
    ds.csy = (float)*(int *)(&DAT_00329884 + iVar1);
    ds.tex1 = 0x161;
    ds.scw = scl_x;
    ds.sch = fVar3;
    ds.alpha = alp;
    DispSprD(&ds);
  } while (-1 < iVar2);
  return;
}

static void FilmAnime(short int pos_x, short int pos_y, short int alpha) {
	int i;
	
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  float rot;
  float pos_x_00;
  float pos_y_00;
  
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  uVar4 = (uint)plyr_wrk.film_no;
  puVar2 = iew.flm_alp;
  uVar3 = 0;
  do {
    if (uVar3 == uVar4) {
      iVar1 = *puVar2 + 8;
      if (iVar1 < (short)alpha) {
        *puVar2 = (byte)iVar1;
      }
      else {
        *puVar2 = (byte)alpha;
      }
    }
    else {
      iVar1 = *puVar2 - 8;
      if (iVar1 < 1) {
        *puVar2 = 0;
      }
      else {
        *puVar2 = (byte)iVar1;
      }
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)uVar3 < 5);
  rot = 0.0;
  PutSpriteYW(0xd4,0xd4,pos_x_00,pos_y_00,0.0,0x808080,(float)(uint)iew.flm_alp[0],1.0,1.0,0,0xff,1,
              0,0);
  PutSpriteYW(0xd5,0xd5,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)iew.flm_alp[1],1.0,1.0,0,0xff,1,
              0,0);
  PutSpriteYW(0xd6,0xd6,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)iew.flm_alp[2],1.0,1.0,0,0xff,1,
              0,0);
  PutSpriteYW(0xd7,0xd7,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)iew.flm_alp[3],1.0,1.0,0,0xff,1,
              0,0);
  PutSpriteYW(0xd8,0xd8,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)iew.flm_alp[4],1.0,1.0,0,0xff,1,
              0,0);
  PutStringYW(0x2d,0,0x15b,0x3b,0x808080,(byte)alpha,0x5000,0);
  PutNumberYW(3,(uint)poss_item[plyr_wrk.film_no],0x166,0x37,1.0,1.0,0x808080,alpha,0x5000,2,1);
  return;
}

static void ItemList(short int pos_x, short int pos_y, short int alpha) {
	int i;
	float top_bar;
	float mdl_bar;
	float dwn_bar;
	
  short sVar1;
  byte alp;
  int iVar2;
  ushort in_hi;
  float rot;
  float unaff_f20;
  float alp_00;
  float pos_x_00;
  float in_f25;
  float fVar3;
  float unaff_f26;
  
  alp = (byte)alpha;
  fVar3 = (float)(int)(short)pos_y;
  pos_x_00 = (float)(int)(short)pos_x;
  alp_00 = (float)(int)(short)alpha;
  CmnWindow(3,pos_x,pos_y,alp,0x80);
  rot = 0.0;
  PutSpriteYW(0x117,0x117,pos_x_00,unaff_f20 + fVar3,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x119,0x119,pos_x_00,in_f25 + fVar3,rot,0x808080,alp_00,1.0,DAT_00355eac,0,0xff,1,0,0)
  ;
  PutSpriteYW(0x118,0x118,pos_x_00,unaff_f26 + fVar3,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  SideBar(ig_menu_wrk.item_num,'\x06',0xd6,iew.itm_lst_strt,0x11c,alp,0,0);
  ItmTrFlsh(pos_x,pos_y,alpha);
  iVar2 = ig_menu_wrk.item_num - 1;
  if (iVar2 < (int)(uint)ig_menu_wrk.csr[1]) {
    ig_menu_wrk.csr[1] = (uchar)iVar2;
  }
  else if (5 < (int)((uint)ig_menu_wrk.item_num - (uint)iew.itm_lst_strt)) goto LAB_001d0594;
  if (iew.itm_lst_strt != '\0') {
    iew.itm_lst_strt = iew.itm_lst_strt + 0xff;
  }
LAB_001d0594:
  iVar2 = 0;
  if (menu_item_wrk[iew.itm_lst_strt].item_no != 0xff) {
    do {
      in_hi = (ushort)(iVar2 * 0x22 >> 0x1f);
      sVar1 = (short)(iVar2 * 0x22);
      PutStringYW(0x18,*(byte *)&menu_item_wrk[iVar2 + (uint)iew.itm_lst_strt].item_no,pos_x + 0x34,
                  sVar1 + pos_y + 0x72,0x808080,alp,0xf000,0);
      PutNumberYW(0,(uint)(ushort)menu_item_wrk[iVar2 + (uint)iew.itm_lst_strt].item_num,
                  pos_x + 0x112,sVar1 + pos_y + 0x73,1.0,1.0,0x808080,alpha,0xf000,2,0);
      iVar2 = iVar2 + 1;
      if (5 < iVar2) break;
    } while (menu_item_wrk[iVar2 + (uint)iew.itm_lst_strt].item_no != 0xff);
  }
  FlashStarYW(flsh,'`','@','Z','\0');
  CmnCursol(pos_x + 0x2c,
            (pos_y + 0x6b | in_hi) + ((ushort)ig_menu_wrk.csr[1] - (ushort)iew.itm_lst_strt) * 0x22,
            0x112,0x24,(float)(uint)flsh[0].alpha,alp,0x14000);
  return;
}

static void CameUp(u_char alp) {
  bool bVar1;
  float fVar2;
  
  if (iew.itm_csr_now == '\t') {
    if ((uint)iew.alp_now == ((int)(char)alp & 0xffU)) {
      bVar1 = 0x77 < iew.cam_flr_tmr;
      iew.cam_flr_tmr = iew.cam_flr_tmr + '\x01';
      if (bVar1) {
        iew.cam_flr_tmr = '\0';
      }
    }
    else {
      iew.cam_flr_tmr = '\0';
    }
  }
  else {
    iew.cam_flr_tmr = '\0';
  }
  fVar2 = SgSinf(((float)(uint)iew.cam_flr_tmr * DAT_00355eb0) / 120.0);
  PutSpriteYW(0x11f,0x11f,0.0,0.0,0.0,0x808080,
              (float)((int)((float)((int)(char)alp & 0xffU) * fVar2) & 0xff),1.0,1.0,0,0xff,1,1,0);
  return;
}

static void PlaySM(u_char alp) {
  bool bVar1;
  float fVar2;
  float alp_00;
  float pos_x;
  
  if (tape_play == '\0') {
    return;
  }
  bVar1 = 0x59 < iew.tape_flsh;
  iew.tape_flsh = iew.tape_flsh + '\x01';
  if (bVar1) {
    iew.tape_flsh = '\0';
  }
  alp_00 = (float)((int)(char)alp & 0xff);
  pos_x = 100.0;
  fVar2 = SgSinf(((float)(uint)iew.tape_flsh * DAT_00355eb4) / 90.0);
  fVar2 = alp_00 * fVar2;
  SetSprFile(0x1e2f700);
  PutSpriteYW(0xf1,0xf1,pos_x,180.0,0.0,(int)&DAT_00303030,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0xf1,0xf1,pos_x,180.0,0.0,0x606060,(float)(((int)fVar2 & 0xffU) >> 1),1.0,1.0,0,0xff,1
              ,1,0);
  return;
}

static void ItemInTheLenz2D(short int pos_x, short int pos_y, short int alpha) {
  int iVar1;
  uint uVar2;
  uint uVar3;
  float pos_y_00;
  float alp;
  float pos_x_00;
  
  uVar3 = (uint)(short)alpha;
  if (ig_menu_wrk.item_num == '\0') {
    alp = (float)uVar3;
    pos_y_00 = (float)(int)(short)pos_y;
    goto LAB_001d0c38;
  }
  iew.itm_csr_now = *(uchar *)&menu_item_wrk[ig_menu_wrk.csr[1]].item_no;
  if (iew.itm_csr_now == iew.itm_can_dsp) {
    if ((iew.alp_now == uVar3) && (iew.itm_dsp_flg != '\0')) {
      iew.tex_bak = iew.tex_now;
      iew.tex_now = VramItem2D(iew.i_mode,'\x01');
      iew.i_mode = '\x01' - iew.i_mode;
      iew.itm_dsp_flg = '\0';
      iew.alp_now = '\0';
    }
LAB_001d0b1c:
    if (iew.load_id != -1) goto LAB_001d0b2c;
  }
  else {
    if (iew.load_id == -1) {
      iew.itm_loading = iew.itm_csr_now;
      iew.load_id = LoadItem2D('\x04',iew.itm_csr_now);
      iew.itm_dsp_flg = '\x01';
      goto LAB_001d0b1c;
    }
LAB_001d0b2c:
    iVar1 = IsLoadEnd(iew.load_id);
    if (iVar1 != 0) {
      iew.load_id = -1;
      iew.itm_can_dsp = iew.itm_loading;
    }
  }
  alp = (float)uVar3;
  iVar1 = (uint)iew.alp_now + ((int)(alp / 30.0) & 0xffffU);
  iew.alp_now = (uchar)alpha;
  if (iVar1 < (int)uVar3) {
    iew.alp_now = (uchar)iVar1;
  }
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  uVar2 = (uint)iew.alp_now;
  DspItem2D(iew.tex_now,pos_x_00,pos_y_00,0x808080,(float)(uint)iew.alp_now,1.0,1.0,'2');
  DspItem2D(iew.tex_bak,pos_x_00,pos_y_00,0x808080,(float)(uVar3 - uVar2 & 0xffff),1.0,1.0,'2');
  PlaySM((uchar)alpha);
LAB_001d0c38:
  PutSpriteYW(0x114,0x116,(float)(int)(short)pos_x,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  return;
}

int LoadItem2D(u_char get_type, u_char get_no) {
	int load_id;
	
  int file_no;
  int in_a2_lo;
  uint uVar1;
  
  uVar1 = (int)(char)get_no & 0xff;
  if ((get_type == 0xff) || (uVar1 == 0xff)) {
    in_a2_lo = 0;
  }
  else {
    switch(get_type) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x04':
      file_no = uVar1 + 0x88;
      break;
    case '\x03':
      file_no = uVar1 + 0xcf;
      break;
    default:
      goto switchD_001d0ce8_caseD_5;
    }
    in_a2_lo = LoadReq(file_no,0x1d573b0);
  }
switchD_001d0ce8_caseD_5:
  return in_a2_lo;
}

u_long VramItem2D(u_char mode, u_char type) {
	u_int offset;
	SPRITE_DATA dmy;
	
  uint uVar1;
  ulong uVar2;
  uint unaff_s0_lo;
  SPRITE_DATA dmy;
  
  if (type == '\0') {
LAB_001d0d7c:
    unaff_s0_lo = 0x2440;
    uVar1 = 0x2300;
  }
  else if (type == '\x01') {
    unaff_s0_lo = 0x1b80;
    uVar1 = 0x1a40;
  }
  else {
    if (type != '\x02') {
      if (type != '\x03') goto LAB_001d0d8c;
      goto LAB_001d0d7c;
    }
    unaff_s0_lo = 0x3080;
    uVar1 = 0x2f40;
  }
  if (mode == '\0') {
    unaff_s0_lo = uVar1;
  }
LAB_001d0d8c:
  MakeTim2SendPacket(0x1d573b0,unaff_s0_lo);
  uVar2 = GetTex0RegTM(0x1d573b0,unaff_s0_lo);
  return uVar2;
}

char DspItem2D(u_long tex_addr, float pos_x, float pos_y, int rgb, float alp, float scl_x, float scl_y, char pri) {
	float scl_px;
	float scl_py;
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  if (tex_addr != 0) {
    CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0032bc50);
    ds.x = ds.x + pos_x;
    ds.y = ds.y + pos_y;
    ds.alpha = (byte)(int)alp;
    ds.r = (byte)((uint)rgb >> 0x10);
    ds.g = (byte)((uint)rgb >> 8);
    ds.b = (byte)rgb;
    ds.csx = ds.x + (float)(ds.w >> 1);
    ds.pri = ((int)pri & 0xffU) * 0x1000;
    ds.csy = ds.y + (float)(ds.h >> 1);
    ds.z = ((int)pri & 0xffU) * -0x1000 + 0xfffffff;
    ds.tex1 = 0x161;
    ds.scw = scl_x;
    ds.sch = scl_y;
    ds.tex0 = tex_addr;
    DispSprD(&ds);
  }
  return tex_addr == 0;
}

void PkTm2(u_long tex_addr, short int pos_x, short int pos_y, short int w, short int h, u_char alp, int pri) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  if (tex_addr != 0) {
    CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0032bc50);
    ds.x = (float)(int)(short)pos_x;
    ds.y = (float)(int)(short)pos_y;
    ds.z = 0xfffffff - pri;
    ds.w = (int)(short)w - 2;
    ds.h = (int)(short)h - 2;
    ds.v = 1;
    ds.tex1 = 0x161;
    ds.u = 1;
    ds.tex0 = tex_addr;
    ds.pri = pri;
    ds.alpha = alp;
    DispSprD(&ds);
  }
  return;
}

static void MessageWindow(short int pos_x, short int pos_y, short int alpha) {
	float btn_alp;
	
  byte alp;
  byte msg_knd;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar5 = (int)(short)pos_y;
  iVar4 = (int)(short)pos_x;
  alp = (byte)alpha;
  DrawMessageBox(0x19000,(float)(iVar4 + 0x1a),(float)(iVar5 + 0x154),588.0,80.0,alp);
  if (ig_menu_wrk.item_num == '\0') {
    return;
  }
  if (ig_menu_wrk.mode == '\x01') {
    bVar1 = *(byte *)&menu_item_wrk[ig_menu_wrk.csr[1]].item_no;
    uVar3 = (ushort)((uint)((iVar4 + 0x30) * 0x10000) >> 0x10);
    uVar2 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
    msg_knd = 0x16;
    iVar4 = 0x14000;
    goto LAB_001d11e0;
  }
  if (ig_menu_wrk.mode != '\b') {
    if (ig_menu_wrk.mode != '\t') {
      return;
    }
    iew.msg_end = PutMessageYW('\x17',ig_menu_wrk.use_item,0x30,0x164,0x808080,0x80,0xf000);
    fVar6 = SgSinf(((float)(uint)iew.btn_flsh_cnt * DAT_00355eb8) / 60.0);
    if (tape_play != '\0') {
      return;
    }
    DrawButtonTex(0xf000,3,552.0,380.0,(uchar)(int)((fVar6 + 1.0) * 128.0 * 0.5));
    return;
  }
  if (item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].type == '\0') {
LAB_001d11b0:
    uVar3 = (ushort)((uint)((iVar4 + 0x30) * 0x10000) >> 0x10);
    uVar2 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
    bVar1 = 2;
  }
  else if (iew.hp_max_chk == '\0') {
    if (iew.flm_dff_chk == '\0') {
      if (iew.itm_eve_chk == '\0') {
        if (item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].type == '\x02') {
          uVar3 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
          bVar1 = 3;
        }
        else {
          uVar3 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
          bVar1 = 0;
        }
        uVar2 = (ushort)((uint)((iVar4 + 0x30) * 0x10000) >> 0x10);
        PutStringYW(0x19,bVar1,uVar2,uVar3,0x808080,alp,0xf000,0);
        PutStringYW(0x19,1,uVar2,pos_y + 0x17e,0x808080,alp,0xf000,0);
        YesNoCrslOKR(0x14000,(float)((uint)ig_menu_wrk.csr[2] * 0x84 + 0xb2),378.0,0x808080,128.0,
                     2.0);
        return;
      }
      goto LAB_001d11b0;
    }
    uVar3 = (ushort)((uint)((iVar4 + 0x30) * 0x10000) >> 0x10);
    uVar2 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
    bVar1 = 5;
  }
  else {
    uVar3 = (ushort)((uint)((iVar4 + 0x30) * 0x10000) >> 0x10);
    uVar2 = (ushort)((uint)((iVar5 + 0x164) * 0x10000) >> 0x10);
    bVar1 = 4;
  }
  msg_knd = 0x19;
  iVar4 = 0xf000;
LAB_001d11e0:
  PutStringYW(msg_knd,bVar1,uVar3,uVar2,0x808080,alp,iVar4,0);
  return;
}

static void ItemCntInit() {
  return;
}

static void ItemCntRenew() {
  bool bVar1;
  
  bVar1 = 0x3b < iew.btn_flsh_cnt;
  iew.btn_flsh_cnt = iew.btn_flsh_cnt + '\x01';
  if (bVar1) {
    iew.btn_flsh_cnt = '\0';
  }
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void GetItemNum() {
	int i;
	int chk;
	
  byte bVar1;
  MENU_ITEM_WRK *pMVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  
  ig_menu_wrk.item_num = '\0';
  pMVar2 = menu_item_wrk + 0x45;
  iVar4 = 0x45;
  do {
    pMVar2->item_no = 0xff;
    iVar4 = iVar4 + -1;
    pMVar2 = pMVar2 + -1;
  } while (-1 < iVar4);
  puVar5 = item_sort;
  iVar4 = 0x45;
  do {
    iVar4 = iVar4 + -1;
    if (poss_item[(short)*puVar5] != 0) {
      bVar1 = poss_item[(short)*puVar5];
      uVar3 = (uint)ig_menu_wrk.item_num;
      menu_item_wrk[ig_menu_wrk.item_num].item_no = *puVar5;
      ig_menu_wrk.item_num = ig_menu_wrk.item_num + '\x01';
      menu_item_wrk[uVar3].item_num = (ushort)bVar1;
    }
    puVar5 = puVar5 + 1;
  } while (-1 < iVar4);
  return;
}

void PutSpriteYW(u_short top_label, u_short end_label, float pos_x, float pos_y, float rot, int rgb, float alp, float scl_x, float scl_y, u_char scl_mode, int pri, u_char by, u_char blnd, u_char z_sw) {
	int i;
	float rot_px;
	float rot_py;
	float scl_px;
	float scl_py;
	DISP_SPRT ds;
	
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  DISP_SPRT ds;
  
  uVar4 = (long)top_label & 0xffff;
  if (uVar4 <= ((long)end_label & 0xffffU)) {
    iVar2 = (int)uVar4;
    iVar3 = iVar2;
    do {
      CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + iVar3 * 0x20));
      ds.x = ds.x + pos_x;
      ds.y = ds.y + pos_y;
      if (blnd == 0) {
        iVar3 = 0x44;
      }
      else {
        iVar3 = 0x48;
      }
      ds.alphar = (ulong)iVar3;
      ds.alpha = (byte)(int)alp;
      ds.crx = ds.x + (float)(ds.w >> 1);
      ds.r = (byte)((uint)rgb >> 0x10);
      ds.cry = ds.y + (float)(ds.h >> 1);
      if (scl_mode == 0) {
        ds.csx = ds.x + (float)(ds.w >> 1);
        ds.csy = ds.y + (float)(ds.h >> 1);
      }
      else {
        iVar3 = iVar2 * 0x20;
        ds.csy = (float)*(int *)(&DAT_00329884 + iVar3);
        ds.csx = (float)*(int *)(&DAT_00329880 + iVar3);
      }
      sVar1 = *(short *)(&flip_table + (int)uVar4 * 2);
      if (sVar1 == 1) {
        ds.att = ds.att | 1;
      }
      if (sVar1 == 2) {
        ds.att = ds.att | 2;
      }
      if (sVar1 == 3) {
        ds.att = ds.att | 3;
      }
      if (pri != 0xff) {
        ds.z = 0xfffffff - pri;
        ds.pri = pri;
      }
      ds.tex1 = ((long)(char)by & 0xffU) << 5 | 0x141;
      if (z_sw != 0) {
        ds.zbuf = 0x10100008c;
      }
      iVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)iVar3;
      ds.scw = scl_x;
      ds.sch = scl_y;
      ds.rot = rot;
      ds.g = (byte)((uint)rgb >> 8);
      ds.b = (byte)rgb;
      DispSprD(&ds);
    } while ((long)uVar4 <= (long)((long)end_label & 0xffffU));
  }
  return;
}

static void WipeChange(u_char before_label, u_char after_label, float move_y) {
	DISP_SPRT ds;
	
  uint uVar1;
  float fVar2;
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)(char)before_label & 0xffU) * 0x20));
  ds.y = ds.y + move_y;
  if ((int)ds.h < 0) {
    fVar2 = (float)(ds.h & 1 | ds.h >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)ds.h;
  }
  ds.h = fptoui(fVar2 - move_y);
  ds.tex1 = 0x161;
  DispSprD(&ds);
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)(char)after_label & 0xffU) * 0x20));
  uVar1 = ds.v + ds.h;
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)uVar1;
  }
  ds.v = fptoui(fVar2 - move_y);
  ds.h = fptoui(move_y);
  ds.tex1 = 0x161;
  DispSprD(&ds);
  return;
}

static void PlusZanzo(u_short top_label, u_short end_label, float pos_x, float pos_y, int rgb, float alp, u_char num, u_char dry, u_char znz_no) {
	int i;
	u_short znz_same;
	
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  float pos_x_00;
  
  uVar2 = (int)(char)znz_no & 0xff;
  uVar6 = (long)(char)num & 0xff;
  iVar5 = (int)uVar6;
  if (yw2d.znz_tmr[uVar2] == 0) {
    iVar4 = 0;
    if (iVar5 != -1) {
      do {
        iVar3 = iVar4 + 1;
        yw2d.pos_x[uVar2][iVar4] = pos_x;
        yw2d.pos_y[uVar2][iVar4] = pos_y;
        iVar4 = iVar3;
      } while (iVar3 < iVar5 + 1);
    }
  }
  uVar7 = iVar5 + 1;
  if (((int)(char)dry & 0xffU) == 0) {
    trap(7);
  }
  if ((uint)(ushort)yw2d.znz_tmr[uVar2] % ((int)(char)dry & 0xffU) == 0) {
    uVar1 = uVar6;
    if (uVar6 != 0) {
      do {
        iVar4 = (int)uVar1;
        uVar1 = (ulong)(iVar4 + -1);
        yw2d.pos_x[uVar2][iVar4] = yw2d.io_a[uVar2 * 2 + iVar4 + 6];
        yw2d.pos_y[uVar2][iVar4] = yw2d.pos_x[uVar2][iVar4 + 1];
      } while (0 < (long)uVar1);
    }
    yw2d.pos_x[uVar2][0] = pos_x;
    yw2d.pos_y[uVar2][0] = pos_y;
  }
  iVar4 = 1;
  uVar1 = 0;
  if (1 < uVar7) {
    iVar3 = 4;
    do {
      pos_x_00 = *(float *)((int)yw2d.pos_x[uVar2] + iVar3);
      if ((pos_x_00 == yw2d.pos_x[uVar2][0]) &&
         (*(float *)((int)yw2d.pos_y[uVar2] + iVar3) == yw2d.pos_y[uVar2][0])) {
        uVar1 = (long)((int)uVar1 + 1) & 0xffff;
      }
      else {
        PutSpriteYW(top_label,end_label,pos_x_00,*(float *)((int)yw2d.pos_y[uVar2] + iVar3),0.0,rgb,
                    (alp * (float)(iVar5 - (iVar4 + -1))) / (float)uVar7,1.0,1.0,0,0xff,1,0,0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (iVar4 < (int)uVar7);
  }
  if ((uVar1 == uVar6) && (yw2d.znz_tmr[uVar2] != 0)) {
    yw2d.znz_tmr[uVar2] = 0;
  }
  else {
    yw2d.znz_tmr[uVar2] = yw2d.znz_tmr[uVar2] + 1;
  }
  return;
}

void FlashStarYW(FLSH_CORE *flsh, u_char flsh_max, u_char flsh_min, u_char flsh_flm, u_char mode) {
	float alpha;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = (int)(char)flsh_flm & 0xff;
  uVar1 = (int)(char)mode & 0xff;
  if (uVar1 == 0) {
    if (flsh->flsh_tmr == '\0') {
      flsh->flsh_tmr = (char)uVar2 + 0xff;
    }
    else {
      flsh->flsh_tmr = flsh->flsh_tmr + 0xff;
    }
    if (uVar2 == 0) {
      trap(7);
    }
    uVar1 = (uint)flsh->flsh_tmr;
    fVar3 = DAT_00355ebc;
  }
  else {
    if (uVar1 == 0xff) {
      fVar3 = (float)((int)(char)flsh_max & 0xffU);
      flsh->flsh_tmr = '\0';
      goto LAB_001d1cd0;
    }
    uVar1 = flsh->flsh_tmr + uVar1;
    fVar3 = DAT_00355ec0;
    if (uVar2 == 0) {
      trap(7);
    }
  }
  fVar4 = SgCosf(((float)(uVar1 % uVar2) * fVar3) / (float)(uVar2 - 1));
  fVar3 = (float)(((int)(char)flsh_max & 0xffU) - ((int)(char)flsh_min & 0xffU));
  fVar3 = (fVar4 * fVar3 + fVar3) * 0.5 + (float)((int)(char)flsh_min & 0xffU);
LAB_001d1cd0:
  flsh->alpha = (uchar)(int)fVar3;
  return;
}

void CLRtoRGB(int *rgb, u_char r, u_char g, u_char b) {
  *rgb = ((int)(char)r & 0xffU) * 0x10000 + ((int)(char)g & 0xffU) * 0x100 + ((int)(char)b & 0xffU);
  return;
}

void RGBtoCLR(int rgb, u_char *r, u_char *g, u_char *b) {
  *r = (uchar)((uint)rgb >> 0x10);
  *g = (uchar)((uint)rgb >> 8);
  *b = (uchar)rgb;
  return;
}

void PutStringYW(u_char msg_knd, u_char msg_no, short int pos_x, short int pos_y, int rgb, u_char alpha, int pri, u_char type) {
	DISP_STR ds;
	STR_DAT sd;
	int cnt_ofs;
	
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  byte msg_no_00;
  int iVar5;
  int iVar6;
  DISP_STR ds;
  STR_DAT sd;
  
  iVar6 = (int)(short)pos_x;
  iVar5 = (int)(short)pos_y;
  ds.alpha = (int)(char)alpha & 0xff;
  puVar1 = (undefined *)((int)&sd.pos_x + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | DAT_0034fc28 >> (7 - uVar3) * 8;
  sd._0_8_ = DAT_0034fc28;
  puVar1 = (undefined *)((int)&sd.type + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | DAT_0034fc30 >> (7 - uVar3) * 8;
  sd._8_8_ = DAT_0034fc30;
  puVar1 = (undefined *)((int)&sd.g + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | DAT_0034fc38 >> (7 - uVar3) * 8;
  sd._16_8_ = DAT_0034fc38;
  puVar1 = (undefined *)((int)&sd.alpha + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | DAT_0034fc40 >> (7 - uVar3) * 8;
  sd._24_8_ = DAT_0034fc40;
  sd.pri = DAT_0034fc48;
  uVar3 = GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xffU);
  sd._0_8_ = sd._0_8_ & 0xffffffff00000000 | (ulong)uVar3;
  CopyStrDToStr(&ds,&sd);
  ds.r = (uint)rgb >> 0x10 & 0xff;
  ds.g = (rgb & 0xff00U) >> 8;
  ds.b = rgb & 0xff;
  msg_no_00 = (byte)((int)(char)msg_no & 0xffU);
  ds.pri = pri;
  if (type == 1) {
    iVar4 = ChkChrNumUS(msg_knd,msg_no_00);
    ds.pos_x = iVar6 - iVar4 / 2;
    ds.pos_y = iVar5;
  }
  else if (type < 2) {
    if (type == 0) {
      ds.pos_x = iVar6;
      ds.pos_y = iVar5;
    }
  }
  else if (type == 2) {
    iVar4 = ChkChrNumUS(msg_knd,msg_no_00);
    ds.pos_x = iVar6 - iVar4;
    ds.pos_y = iVar5;
  }
  SetMessageV2(&ds);
  return;
}

void RstMessageYW() {
  msg.no_bak = 0xff;
  msg.knd_bak = 0xff;
  return;
}

u_char PutMessageYW(u_char msg_knd, u_char msg_no, short int pos_x, short int pos_y, int rgb, u_char alpha, int pri) {
	u_char all_page;
	u_char rtrn;
	
  byte bVar1;
  
  bVar1 = ChkPageYW(msg_knd,msg_no);
  if ((msg_knd != msg.knd_bak) || (msg_no != msg.no_bak)) {
    msg.open_page = '\x01';
    msg.knd_bak = msg_knd;
    msg.no_bak = msg_no;
  }
  if ((msg.open_page < bVar1) && ((*key_now[6] == 1 || (bVar1 = 0, *key_now[5] == 1)))) {
    msg.open_page = msg.open_page + '\x01';
    bVar1 = 0;
  }
  PutPageYW(msg_knd,msg_no,msg.open_page,pos_x,pos_y,rgb,alpha,pri);
  return bVar1;
}

char ChkChrNumYW(u_char msg_knd, u_char msg_no) {
  uchar *str;
  int iVar1;
  
  str = (uchar *)GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xff);
  iVar1 = GetStrLength(str);
  return (char)iVar1;
}

int ChkChrNumUS(u_char msg_knd, u_char msg_no) {
  uchar *str;
  int iVar1;
  
  str = (uchar *)GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xff);
  iVar1 = GetStrWidth(str);
  return iVar1;
}

char ChkPageYW(u_char msg_knd, u_char msg_no) {
	u_char *chk_str;
	u_char *nxt_str;
	char page_now;
	
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  pcVar1 = (char *)GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xffU);
  pcVar2 = (char *)GetIngameMSGAddr(msg_knd,((int)(char)msg_no & 0xffU) + 1);
  iVar5 = 0;
  cVar4 = '\0';
  if (pcVar1 != pcVar2) {
    iVar3 = 0x1000000;
    cVar4 = *pcVar1;
    while( true ) {
      pcVar1 = pcVar1 + 1;
      if (cVar4 == -1) {
        iVar5 = iVar3 >> 0x18;
        iVar3 = iVar3 + 0x1000000;
      }
      cVar4 = (char)iVar5;
      if (pcVar1 == pcVar2) break;
      cVar4 = *pcVar1;
    }
  }
  return cVar4;
}

void PutPageYW(u_char msg_knd, u_char msg_no, u_char open_page, short int pos_x, short int pos_y, int rgb, u_char alpha, int pri) {
	DISP_STR ds;
	STR_DAT sd;
	u_char *chk_str;
	char page_now;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  ulong uVar6;
  DISP_STR ds;
  STR_DAT sd;
  
  ds.pos_y = (int)(short)pos_y;
  ds.pos_x = (int)(short)pos_x;
  ds.alpha = (int)(char)alpha & 0xff;
  puVar1 = (undefined *)((int)&sd.pos_x + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc28 >> (7 - uVar3) * 8;
  sd._0_8_ = DAT_0034fc28;
  puVar1 = (undefined *)((int)&sd.type + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc30 >> (7 - uVar3) * 8;
  sd._8_8_ = DAT_0034fc30;
  puVar1 = (undefined *)((int)&sd.g + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc38 >> (7 - uVar3) * 8;
  sd._16_8_ = DAT_0034fc38;
  puVar1 = (undefined *)((int)&sd.alpha + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc40 >> (7 - uVar3) * 8;
  sd._24_8_ = DAT_0034fc40;
  sd.pri = DAT_0034fc48;
  pcVar5 = (char *)GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xff);
  uVar6 = 1;
  if (((long)(char)open_page & 0xffU) == 1) {
    sd._0_8_ = sd._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar5);
  }
  else {
    do {
      cVar2 = *pcVar5;
      while (cVar2 != -1) {
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      }
      uVar6 = (ulong)(((int)uVar6 + 1) * 0x1000000 >> 0x18);
      pcVar5 = pcVar5 + 1;
    } while (uVar6 != ((long)(char)open_page & 0xffU));
    sd._0_8_ = sd._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar5);
  }
  ds.b = rgb & 0xff;
  CopyStrDToStr(&ds,&sd);
  ds.g = (rgb & 0xff00U) >> 8;
  ds.r = (uint)rgb >> 0x10 & 0xff;
  ds.pri = pri;
  SetMessageV2(&ds);
  return;
}

void PutPage2YW(u_char msg_knd, u_char msg_no, u_char open_page, short int pos_x, short int pos_y, int rgb, u_char alpha, int pri) {
	DISP_STR ds;
	STR_DAT sd;
	u_char *chk_str;
	char page_now;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  ulong uVar6;
  DISP_STR ds;
  STR_DAT sd;
  
  ds.pos_y = (int)(short)pos_y;
  ds.pos_x = (int)(short)pos_x;
  ds.alpha = (int)(char)alpha & 0xff;
  puVar1 = (undefined *)((int)&sd.pos_x + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc28 >> (7 - uVar3) * 8;
  sd._0_8_ = DAT_0034fc28;
  puVar1 = (undefined *)((int)&sd.type + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc30 >> (7 - uVar3) * 8;
  sd._8_8_ = DAT_0034fc30;
  puVar1 = (undefined *)((int)&sd.g + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc38 >> (7 - uVar3) * 8;
  sd._16_8_ = DAT_0034fc38;
  puVar1 = (undefined *)((int)&sd.alpha + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_0034fc40 >> (7 - uVar3) * 8;
  sd._24_8_ = DAT_0034fc40;
  sd.pri = DAT_0034fc48;
  pcVar5 = (char *)GetIngameMSGAddr(msg_knd,(int)(char)msg_no & 0xff);
  uVar6 = 1;
  if (((long)(char)open_page & 0xffU) == 1) {
    sd._0_8_ = sd._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar5);
  }
  else {
    do {
      cVar2 = *pcVar5;
      while (cVar2 != -1) {
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      }
      uVar6 = (ulong)(((int)uVar6 + 1) * 0x1000000 >> 0x18);
      pcVar5 = pcVar5 + 1;
    } while (uVar6 != ((long)(char)open_page & 0xffU));
    sd._0_8_ = sd._0_8_ & 0xffffffff00000000 | ZEXT48(pcVar5);
  }
  ds.b = rgb & 0xff;
  CopyStrDToStr(&ds,&sd);
  ds.g = (rgb & 0xff00U) >> 8;
  ds.r = (uint)rgb >> 0x10 & 0xff;
  ds.pri = pri;
  SetMessageV2_2(&ds);
  return;
}

void PutNumberYW(u_char font, int num, short int pos_x, short int pos_y, float sx, float sy, int rgb, short int alpha, int pri, int digit, int mode) {
	u_char mode;
	int i;
	int multi10;
	int multi10_bak;
	int disp_number;
	int disp_digit;
	
  int in_t4_lo;
  int iVar1;
  int in_t5_lo;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  iVar2 = digit;
  if (0 < digit) {
    do {
      iVar4 = iVar4 * 10;
      iVar2 = iVar2 + -1;
      in_t5_lo = iVar4;
    } while (iVar2 != 0);
  }
  iVar2 = num % iVar4;
  if (iVar4 == 0) {
    trap(7);
  }
  if (iVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = in_t4_lo;
    if (0 < digit) {
      iVar4 = iVar4 / 10;
      iVar3 = 1;
      iVar1 = digit;
      if (iVar2 / iVar4 == 0) {
        for (; iVar1 = in_t4_lo, iVar3 < digit; iVar3 = iVar3 + 1) {
          iVar4 = iVar4 / 10;
          if (iVar2 / iVar4 != 0) {
            iVar1 = digit - iVar3;
            break;
          }
        }
      }
    }
  }
  iVar4 = 0;
  if (0 < digit) {
    do {
      in_t5_lo = in_t5_lo / 10;
      if (((mode & 0xffU) != 0) || (digit - iVar1 <= iVar4)) {
        if (in_t5_lo == 0) {
          trap(7);
        }
        DigiPut01(font,(uchar)(iVar2 / in_t5_lo),(uchar)iVar4,pos_x,pos_y,sx,sy,rgb,alpha,pri);
        if (in_t5_lo == 0) {
          trap(7);
        }
        iVar2 = iVar2 - (iVar2 / in_t5_lo) * in_t5_lo;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < digit);
  }
  return;
}

static void DigiPut01(u_char font, u_char num, u_char no, short int pos_x, short int pos_y, float sx, float sy, int rgb, short int alpha, int pri) {
	DISP_SPRT ds;
	u_char r;
	u_char g;
	u_char b;
	short int rot_x;
	u_char fw[14];
	u_char fh[14];
	
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint num_00;
  int iVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT ds;
  uchar fw [14];
  uchar fh [14];
  
  iVar7 = (int)(short)pos_x;
  uVar4 = (int)(char)font & 0xff;
  iVar6 = (int)(short)pos_y;
  num_00 = (int)(char)num & 0xff;
  uVar5 = (int)(char)no & 0xff;
  puVar1 = fw + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0034fc50 >> (7 - uVar2) * 8;
  fw._0_8_ = DAT_0034fc50;
  puVar1 = fw + 0xb;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_0034fc58 >> (3 - uVar2) * 8;
  fw._8_4_ = DAT_0034fc58;
  fw[12] = DAT_0034fc5c;
  fw[13] = DAT_0034fc5d;
  puVar1 = fh + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0034fc60 >> (7 - uVar2) * 8;
  fh._0_8_ = DAT_0034fc60;
  puVar1 = fh + 0xb;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_0034fc68 >> (3 - uVar2) * 8;
  fh._8_4_ = DAT_0034fc68;
  fh[12] = DAT_0034fc6c;
  fh[13] = DAT_0034fc6d;
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
    CopySprDToSpr(&ds,(SPRT_DAT *)(&number_tex + uVar4 * 0x140 + num_00 * 0x20));
    ds.y = (float)iVar6;
    ds.x = (float)(uVar5 * fw[uVar4] + iVar7);
    goto switchD_001d26f0_caseD_e;
  case 4:
    iVar3 = 0x32bf10;
    goto LAB_001d2764;
  case 5:
    iVar3 = 0x32c3d0;
LAB_001d2764:
    CopySprDToSpr(&ds,(SPRT_DAT *)(num_00 * 0x20 + iVar3));
    ds.x = (float)((uVar5 - 1) * (uint)fw[uVar4] + iVar7);
    ds.y = (float)(iVar6 - (uint)fh[uVar4]);
    goto switchD_001d26f0_caseD_e;
  case 6:
    CopySprDToSpr(&ds,(SPRT_DAT *)(num_00 * 0x20 + 0x32e930));
    ds.x = (float)iVar7;
    ds.y = (float)(iVar6 - uVar5 * fw[uVar4]);
    if ((int)ds.w < 0) {
      fVar9 = (float)(ds.w & 1 | ds.w >> 1);
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)ds.w;
    }
    if ((int)ds.h < 0) {
      fVar8 = (float)(ds.h & 1 | ds.h >> 1);
      fVar8 = fVar8 + fVar8;
    }
    else {
      fVar8 = (float)ds.h;
    }
    ds.crx = (float)(int)(short)(int)(ds.x + (float)((int)(fVar9 * 0.5) & 0xff));
    ds.rot = -90.0;
    ds.cry = (float)(int)(short)(int)(ds.y + (float)((int)(fVar8 * 0.5) & 0xff));
    goto switchD_001d26f0_caseD_e;
  case 7:
    CopySprDToSpr(&ds,(SPRT_DAT *)(num_00 * 0x20 + 0x329a30));
    ds.x = (float)iVar7 + (float)(uVar5 * fw[uVar4]) * sx;
    if ((int)ds.w < 0) goto LAB_001d2954;
    goto LAB_001d2940;
  case 8:
    iVar3 = 0x32fed0;
    break;
  case 9:
    iVar3 = 0x32f290;
    break;
  case 10:
    iVar3 = 0x32f3d0;
    break;
  case 0xb:
    iVar3 = 0x32f650;
    break;
  case 0xc:
    iVar3 = 0x32a6b0;
    break;
  case 0xd:
    CopySprDToSpr(&ds,(SPRT_DAT *)(num_00 * 0x20 + 0x32a7f0));
    ds.x = (float)iVar7 + (float)(uVar5 * fw[uVar4]) * sx;
    if ((int)ds.w < 0) {
      fVar9 = (float)(ds.w & 1 | ds.w >> 1);
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)ds.w;
    }
    ds.csx = ds.x + fVar9 * sx * 0.5;
    ds.sch = sy;
    goto joined_r0x001d2ad8;
  default:
    goto switchD_001d26f0_caseD_e;
  }
  CopySprDToSpr(&ds,(SPRT_DAT *)(num_00 * 0x20 + iVar3));
  ds.x = (float)iVar7 + (float)(uVar5 * fw[uVar4]) * sx;
  if ((int)ds.w < 0) {
LAB_001d2954:
    fVar9 = (float)(ds.w & 1 | ds.w >> 1);
    fVar9 = fVar9 + fVar9;
    ds.sch = sy;
  }
  else {
LAB_001d2940:
    fVar9 = (float)ds.w;
    ds.sch = sy;
  }
  ds.csx = ds.x + fVar9 * sx * 0.5;
joined_r0x001d2ad8:
  if ((int)ds.h < 0) {
    fVar9 = (float)(ds.h & 1 | ds.h >> 1);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)ds.h;
  }
  ds.y = (float)iVar6;
  ds.csy = ds.y + fVar9 * ds.sch * 0.5;
  ds.scw = sx;
switchD_001d26f0_caseD_e:
  ds.g = (byte)((uint)rgb >> 8);
  ds.r = (byte)((uint)rgb >> 0x10);
  ds.b = (byte)rgb;
  ds.alpha = (byte)alpha;
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    if (uVar4 != 3) {
      if (pri != -1) {
        ds.z = 0xfffffff - pri;
        ds.pri = pri;
      }
      DispSprD(&ds);
      return;
    }
    iVar3 = 2;
    fw[0] = fw[3];
  }
  SetInteger3(pri,(float)(uVar5 * fw[0] + iVar7),(float)iVar6,iVar3,ds.r,ds.g,ds.b,ds.alpha,num_00);
  return;
}

void PolySquareYW(float pos_x, float pos_y, u_short bar_l, u_short bar_h, int rgb, float alp, float scl_x, float scl_y, int pri, u_char blnd, u_char sw_z, short int rz) {
	u_char r;
	u_char g;
	u_char b;
	SQAR_DAT sd;
	DISP_SQAR ds;
	int i;
	
  uchar *puVar1;
  int iVar2;
  SQAR_DAT sd;
  DISP_SQAR ds;
  
  memset(&sd,0,0x18);
  sd.pri = 0x1000;
  sd.alpha = 0x80;
  CopySqrDToSqr(&ds,&sd);
  ds.x[0] = (int)pos_x;
  ds.y[0] = (int)pos_y;
  ds.cry = pos_y + (float)(((int)bar_h & 0xffffU) >> 1);
  ds.x[1] = (int)((float)ds.x[0] + (float)((int)bar_l & 0xffffU) * scl_x);
  ds.y[2] = (int)((float)ds.y[0] + (float)((int)bar_h & 0xffffU) * scl_y);
  iVar2 = 0;
  ds.crx = pos_x + (float)(((int)bar_l & 0xffffU) >> 1);
  ds.rot = (float)(int)(short)rz;
  do {
    ds.r[iVar2] = (uchar)((uint)rgb >> 0x10);
    puVar1 = ds.b + iVar2;
    ds.g[iVar2] = (uchar)((uint)rgb >> 8);
    iVar2 = iVar2 + 1;
    *puVar1 = (uchar)rgb;
  } while (iVar2 < 4);
  iVar2 = 0x48;
  if (blnd == 0) {
    iVar2 = 0x44;
  }
  ds.alphar = (ulong)iVar2;
  ds.z = 0xfffffff - pri;
  ds.alpha = (uchar)(int)alp;
  if (sw_z != 0) {
    ds.zbuf = 0x10100008c;
  }
  ds.x[2] = ds.x[0];
  ds.x[3] = ds.x[1];
  ds.y[1] = ds.y[0];
  ds.y[3] = ds.y[2];
  ds.pri = pri;
  DispSqrD(&ds);
  return;
}

void YesNoCrslOKR(int pri, float pos_x, float pos_y, int rgb, float alp, float scl) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0026c540);
  ds.csx = ds.x + pos_x;
  ds.csy = ds.y + pos_y;
  ds.z = 0xfffffff - pri;
  ds.g = (byte)((uint)rgb >> 8);
  ds.b = (byte)rgb;
  ds.r = (byte)((uint)rgb >> 0x10);
  ds.sch = DAT_00355ec4;
  ds.alphar = 0x48;
  ds.alpha = (byte)(int)alp;
  ds.tex1 = 0x161;
  ds.x = ds.csx;
  ds.y = ds.csy;
  ds.scw = scl;
  ds.pri = pri;
  DispSprD(&ds);
  return;
}

void XYAdefaultYW(u_char no) {
  uint uVar1;
  
  uVar1 = (int)(char)no & 0xff;
  yw2d.io_x[uVar1] = 0.0;
  yw2d.io_y[uVar1] = 0.0;
  yw2d.io_a[uVar1] = 128.0;
  return;
}

void BgFusumaYW(int rgb, float pos_x, float alpha, int pri) {
	float scl_x;
	float scl_y;
	
  float scl_y;
  float scl_x;
  
  SetSprFile(0x1d05140);
  scl_y = DAT_00355ecc;
  scl_x = DAT_00355ec8;
  PutSpriteYW(0x18c,0x18c,-pos_x,0.0,0.0,rgb,alpha,DAT_00355ec8,DAT_00355ecc,1,0xff,1,0,0);
  PutSpriteYW(0x18d,0x18d,pos_x,0.0,0.0,rgb,alpha,scl_x,scl_y,1,0xff,1,0,0);
  return;
}

static void SttsRenew() {
  iew.hp_max_chk = '\0';
  if ((item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].type == '\x03') &&
     (plyr_wrk.hp == 500)) {
    iew.hp_max_chk = '\x01';
  }
  iew.flm_dff_chk = '\0';
  if ((item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].type == '\x02') &&
     (item_use_dat[(ushort)menu_item_wrk[ig_menu_wrk.csr[1]].item_no].value0 == plyr_wrk.film_no)) {
    iew.flm_dff_chk = '\x01';
  }
  return;
}

static void ItmTrFlsh(short int pos_x, short int pos_y, short int alpha) {
	int rgb;
	
  int rgb;
  
  if (ig_menu_wrk.item_num < 7) {
    PutSpriteYW(0x11a,0x11b,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,(int)&DAT_00404040
                ,(float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  }
  else {
    FlashStarYW(flsh + 1,0xc0,'@','<','\0');
    CLRtoRGB(&rgb,flsh[1].alpha,flsh[1].alpha,flsh[1].alpha);
    PutSpriteYW(0x11a,0x11b,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,rgb,
                (float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  }
  return;
}

u_int FromPKZ(u_int pkz_addr, u_char pk2_no) {
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(uint)(pk2_no < 0x13);
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = &switchD_001d3238::switchdataD_0034fcb0;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pk2_no) {
    case '\0':
      SetSprFile(0x1ce0000);
      return (uint)ppuVar1;
    case '\x01':
      SetSprFile(0x1d05140);
      return (uint)ppuVar1;
    case '\x02':
      SetSprFile(0x1d266c0);
      return (uint)ppuVar1;
    case '\x03':
      SetSprFile(0x1d15600);
      return (uint)ppuVar1;
    case '\x04':
      SetSprFile(0x1d15600);
      return (uint)ppuVar1;
    case '\x05':
      SetSprFile(0x1d59630);
      return (uint)ppuVar1;
    case '\a':
      SetSprFile(0x1d88100);
      return (uint)ppuVar1;
    case '\b':
      SetSprFile(0x1df2100);
      return (uint)ppuVar1;
    case '\t':
      SetSprFile(0x1e05b00);
      return (uint)ppuVar1;
    case '\n':
      SetSprFile(0x1e90000);
      return (uint)ppuVar1;
    case '\v':
      SetSprFile(0x1d573b0);
      return (uint)ppuVar1;
    case '\f':
      SetSprFile(0x1e90000);
      return (uint)ppuVar1;
    case '\r':
      SetSprFile(0x1d573b0);
      return (uint)ppuVar1;
    case '\x0e':
      SetSprFile(0x1e90000);
      return (uint)ppuVar1;
    case '\x0f':
      SetSprFile(0x1e90000);
      return (uint)ppuVar1;
    case '\x10':
      SetSprFile(0x1e90000);
      return (uint)ppuVar1;
    case '\x11':
      SetSprFile(0x1d15600);
      return (uint)ppuVar1;
    case '\x12':
      SetSprFile(0x1d28c80);
      return (uint)ppuVar1;
    }
  }
  return (uint)ppuVar1;
}

void DcdCMP2PK2(u_int cmp_addr, u_int tmp_addr) {
  SlideDecode((uchar *)cmp_addr,(uchar *)tmp_addr);
  SetSprFile(tmp_addr);
  return;
}

static void YW_DBG() {
	int i;
	u_char spd;
	
  bool bVar1;
  float x;
  short sVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  uint num;
  float x_00;
  
  if (*key_now[11] == 0) {
    if (*key_now[10] == 0) {
      yw2d.pad_lock = 0;
      num = (uint)ywdbg.knd_char;
    }
    else {
      yw2d.pad_lock = 1;
      uVar3 = *key_now[0];
      iVar4 = 1;
      if (*key_now[6] != 0) {
        iVar4 = 10;
      }
      if ((uVar3 == 1) ||
         ((((0x19 < uVar3 && ((uint)uVar3 % 5 == 1)) || (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1))
          || ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
              (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))))) {
        num = (uint)ywdbg.knd_char;
        *(int *)(&DAT_00329884 + (short)ywdbg.char_no * 0x20) =
             *(int *)(&DAT_00329884 + (short)ywdbg.char_no * 0x20) - iVar4;
      }
      else if (((*key_now[1] == 1) ||
               ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
              ((sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1 ||
               ((uVar3 = Ana2PadDirCnt('\x02'), 0x19 < uVar3 &&
                (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 == 1)))))) {
        num = (uint)ywdbg.knd_char;
        *(int *)(&DAT_00329884 + (short)ywdbg.char_no * 0x20) =
             *(int *)(&DAT_00329884 + (short)ywdbg.char_no * 0x20) + iVar4;
      }
      else if (((*key_now[2] == 1) ||
               (((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
                (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)))) ||
              ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
               (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))) {
        num = (uint)ywdbg.knd_char;
        *(int *)(&DAT_00329880 + (short)ywdbg.char_no * 0x20) =
             *(int *)(&DAT_00329880 + (short)ywdbg.char_no * 0x20) - iVar4;
      }
      else {
        if (((*key_now[3] != 1) &&
            (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
           (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
          uVar3 = Ana2PadDirCnt('\x01');
          if (uVar3 < 0x1a) {
            num = (uint)ywdbg.knd_char;
            goto LAB_001d392c;
          }
          sVar2 = Ana2PadDirCnt('\x01');
          num = (uint)ywdbg.knd_char;
          if ((int)sVar2 % 5 != 1) goto LAB_001d392c;
        }
        num = (uint)ywdbg.knd_char;
        *(int *)(&DAT_00329880 + (short)ywdbg.char_no * 0x20) =
             *(int *)(&DAT_00329880 + (short)ywdbg.char_no * 0x20) + iVar4;
      }
    }
    goto LAB_001d392c;
  }
  yw2d.pad_lock = 1;
  if ((*key_now[8] == 1) || ((0x19 < (ushort)*key_now[8] && ((uint)(ushort)*key_now[8] % 5 == 1))))
  {
    bVar1 = ywdbg.knd_char == '\0';
    ywdbg.knd_char = ywdbg.knd_char + 0xff;
    if (bVar1) {
      ywdbg.knd_char = '\x06';
    }
  }
  else {
    if ((*key_now[10] != 1) &&
       (((ushort)*key_now[10] < 0x1a || ((uint)(ushort)*key_now[10] % 5 != 1)))) {
      if ((*key_now[2] == 1) ||
         ((((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
           (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))))) {
        lVar5 = (long)(short)ywdbg.char_no;
        ywdbg.char_no = ywdbg.char_no - 1;
        if (lVar5 <= (long)(ulong)(ushort)top_char[0]) {
          ywdbg.char_no = end_char[6];
        }
        psVar6 = top_char;
        iVar4 = 0;
        do {
          if ((long)(ulong)(ushort)*psVar6 <= (long)(short)ywdbg.char_no) {
            ywdbg.knd_char = (uchar)iVar4;
          }
          iVar4 = iVar4 + 1;
          psVar6 = (short *)((ushort *)psVar6 + 1);
        } while (iVar4 < 7);
        num = (uint)ywdbg.knd_char;
        goto LAB_001d392c;
      }
      if (((*key_now[3] != 1) &&
          (((ushort)*key_now[3] < 0x1a || ((uint)(ushort)*key_now[3] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x01'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x01');
        if (uVar3 < 0x1a) {
          num = (uint)ywdbg.knd_char;
          goto LAB_001d392c;
        }
        sVar2 = Ana2PadDirCnt('\x01');
        if ((int)sVar2 % 5 != 1) {
          num = (uint)ywdbg.knd_char;
          goto LAB_001d392c;
        }
      }
      lVar5 = (long)(short)ywdbg.char_no;
      uVar3 = ywdbg.char_no + 1;
      ywdbg.char_no = top_char[0];
      if (lVar5 < (long)(ulong)(ushort)end_char[6]) {
        ywdbg.char_no = uVar3;
      }
      psVar6 = top_char;
      iVar4 = 0;
      do {
        if ((long)(ulong)(ushort)*psVar6 <= (long)(short)ywdbg.char_no) {
          ywdbg.knd_char = (uchar)iVar4;
        }
        iVar4 = iVar4 + 1;
        psVar6 = (short *)((ushort *)psVar6 + 1);
      } while (iVar4 < 7);
      num = (uint)ywdbg.knd_char;
      goto LAB_001d392c;
    }
    bVar1 = 5 < ywdbg.knd_char;
    ywdbg.knd_char = ywdbg.knd_char + '\x01';
    if (bVar1) {
      ywdbg.knd_char = '\0';
    }
  }
  num = (uint)ywdbg.knd_char;
  ywdbg.char_no = top_char[ywdbg.knd_char];
LAB_001d392c:
  x = DAT_00355ed0;
  x_00 = 500.0;
  SetInteger2(0,500.0,10.0,1,0xff,0xff,0xff,num);
  SetInteger2(0,x,10.0,1,0xff,0xff,0xff,
              (int)(short)ywdbg.char_no - (uint)(ushort)top_char[ywdbg.knd_char]);
  SetInteger2(0,x_00,30.0,1,0xff,0xff,0xff,*(int *)(&DAT_00329880 + (short)ywdbg.char_no * 0x20));
  SetInteger2(0,x,30.0,1,0xff,0xff,0xff,*(int *)(&DAT_00329884 + (short)ywdbg.char_no * 0x20));
  return;
}
