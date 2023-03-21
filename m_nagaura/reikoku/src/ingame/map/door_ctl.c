// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#115, size not equal)
typedef struct {
	float adj_r0;
	float adj_r1;
	float adj_org;
	u_short adj_x0;
	u_short adj_x1;
	u_short adj_z0;
	u_short adj_z1;
	u_char step;
	u_char timer;
	u_char door_kind;
	u_char mtn_no;
} DOOR_CONTE;

enum DOOR_HIT_CHECK_PTN {
	DHC_CLOSE_HC = 0,
	DHC_DBL_OPEN_00 = 1,
	DHC_DBL_OPEN_01 = 2,
	DHC_NML_OPEN_02 = 3,
	DHC_NML_OPEN_03 = 4,
	DHC_NML_OPEN_04 = 5,
	DHC_NML_OPEN_05 = 6,
	DHC_NML_OPEN_06 = 7,
	DHC_NML_OPEN_07 = 8
};

enum DOOR_OPEN_CHECK_MODE {
	DOP_CHK_NONE = 0,
	DOP_CHK_LOCK = 1,
	DOP_CHK_ALL = 2,
	DOP_CHK_HIDE = 3
};

typedef struct {
	int dwrk_no;
	u_char type;
	u_char sq_no[2];
} DOJ_SQUARE;

typedef struct {
	DOJ_SQUARE dojs[2];
	int dwno_base;
	u_char mtn_no;
	u_char exc_flg;
	u_char dbl_flg;
	u_char dor_flg;
} DOJ_SQUARE_MTN;

// warning: multiple differing types with the same name (#115,  not equal)
enum {
	DOOR_OPEN_CHECK_LBATTLE = 0,
	DOOR_OPEN_CHECK_NORMAL = 1,
	DOOR_OPEN_CHECK_BLAFTER = 2
};

AREA_READ_WRK area_read_wrk = {
	/* .stat = */ 0,
	/* .rm_from = */ 0,
	/* .rm_to = */ 0,
	/* .next_area = */ 0,
	/* .room = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	},
	/* .fgst = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .rgst = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	},
	/* .load_mode = */ 0,
	/* .load_count = */ 0,
	/* .load_id = */ 0
};
DOOR_OPEN_CTRL door_open_ctrl = {
	/* .spos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .epos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .srot = */ 0.f,
	/* .erot = */ 0.f,
	/* .door_pre = */ 0.f,
	/* .stts = */ 0,
	/* .mode = */ 0,
	/* .move_flame = */ 0,
	/* .mtn_flame = */ 0,
	/* .wait_flame = */ 0,
	/* .count = */ 0,
	/* .mtn_dat_no = */ 0,
	/* .open = */ {
		/* [0] = */ 0,
		/* [1] = */ 0
	},
	/* .chk_flg = */ 0
};
DOOR_WRK door_wrk[20] = {
	/* [0] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [1] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [2] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [3] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [4] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [5] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [6] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [7] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [8] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [9] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [10] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [11] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [12] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [13] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [14] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [15] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [16] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [17] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [18] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	},
	/* [19] = */ {
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rot = */ 0.f,
		/* .nrot = */ 0.f,
		/* .open_tbl = */ NULL,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .mdl_no = */ 0,
		/* .type = */ 0,
		/* .fwrk_no = */ 0,
		/* .stts = */ 0,
		/* .use = */ 0,
		/* .dmd_no = */ 0,
		/* .hchk_mode = */ 0,
		/* .lock = */ 0
	}
};
AUTO_CLOSE_DOOR_WRK ac_door_wrk[10] = {
	/* [0] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [1] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [2] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [3] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [4] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [5] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [6] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [7] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [8] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	},
	/* [9] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .stop_cnt = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0,
		/* .reopen = */ 0
	}
};
NON_CLOSE_DOOR_WRK nc_door_wrk[50] = {
	/* [0] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [1] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [2] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [3] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [4] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [5] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [6] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [7] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [8] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [9] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [10] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [11] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [12] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [13] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [14] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [15] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [16] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [17] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [18] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [19] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [20] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [21] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [22] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [23] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [24] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [25] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [26] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [27] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [28] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [29] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [30] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [31] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [32] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [33] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [34] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [35] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [36] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [37] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [38] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [39] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [40] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [41] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [42] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [43] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [44] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [45] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [46] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [47] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [48] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	},
	/* [49] = */ {
		/* .open_tbl = */ NULL,
		/* .npos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .nrot = */ 0.f,
		/* .inert = */ 0.f,
		/* .stts = */ 0,
		/* .type = */ 0,
		/* .door_id = */ 0,
		/* .count = */ 0,
		/* .dw_no = */ 0,
		/* .dmd_no = */ 0,
		/* .opnmtn_flg = */ 0
	}
};
DOJ_SQUARE_MTN doj_square_mtn = {
	/* .dojs = */ {
		/* [0] = */ {
			/* .dwrk_no = */ 0,
			/* .type = */ 0,
			/* .sq_no = */ {
				/* [0] = */ 0,
				/* [1] = */ 0
			}
		},
		/* [1] = */ {
			/* .dwrk_no = */ 0,
			/* .type = */ 0,
			/* .sq_no = */ {
				/* [0] = */ 0,
				/* [1] = */ 0
			}
		}
	},
	/* .dwno_base = */ 0,
	/* .mtn_no = */ 0,
	/* .exc_flg = */ 0,
	/* .dbl_flg = */ 0,
	/* .dor_flg = */ 0
};
sceVu0FVECTOR tmp_area_end_door_pos = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
static char load_conte_flg;
static u_short lock_did[20];

u_char IsUseDoor(u_char use) {
  if (((use != '\x01') && (use != '\x03')) && (use != '\x04')) {
    return '\0';
  }
  return '\x01';
}

short int SearchDoorWrk(int door_id) {
	DOOR_WRK *dwp;
	int i;
	
  uchar uVar1;
  DOOR_WRK *pDVar2;
  int iVar3;
  
  iVar3 = 0;
  pDVar2 = door_wrk;
  while ((uVar1 = IsUseDoor(pDVar2->use), uVar1 == '\0' ||
         ((uint)(ushort)pDVar2->door_id != door_id))) {
    iVar3 = iVar3 + 1;
    pDVar2 = pDVar2 + 1;
    if (0x13 < iVar3) {
      return 0xffff;
    }
  }
  return (ushort)iVar3;
}

static short int SearchAcDoor(int door_id) {
	AUTO_CLOSE_DOOR_WRK *acp;
	int i;
	
  int iVar1;
  AUTO_CLOSE_DOOR_WRK *pAVar2;
  
  iVar1 = 0;
  pAVar2 = ac_door_wrk;
  do {
    if ((uint)(ushort)pAVar2->door_id == door_id) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    pAVar2 = pAVar2 + 1;
  } while (iVar1 < 10);
  return 0xffff;
}

static short int SearchNcDoor(int door_id) {
	NON_CLOSE_DOOR_WRK *ncp;
	int i;
	
  int iVar1;
  NON_CLOSE_DOOR_WRK *pNVar2;
  
  iVar1 = 0;
  pNVar2 = nc_door_wrk;
  do {
    if ((uint)(ushort)pNVar2->door_id == door_id) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    pNVar2 = pNVar2 + 1;
  } while (iVar1 < 0x32);
  return 0xffff;
}

void ClearDoorAttrFlg() {
  memset(door_keep,0,0xe10);
  return;
}

void InitDoorAttrFlg() {
	int addr_map;
	int *addr_si0;
	int *addr_si1;
	u_short *addr_us;
	int i;
	u_short dat_num;
	int k;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  DOOR_TYPE_DAT *pDVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  
  memset(door_keep,0,0xe10);
  iVar5 = 0;
  do {
    if (floor_exist[ingame_wrk.msn_no][iVar5] != '\0') {
      iVar7 = 0;
      iVar3 = *(int *)(*(int *)(iVar5 * 4 + 0x7f8000) + 0x7f8028);
      iVar2 = *(int *)(iVar3 + 0x7f8008);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x7f8000) + 0x7f8004);
      uVar8 = (uint)*(ushort *)(iVar3 + 0x7f8000);
      puVar6 = (ushort *)(iVar3 + 0x7f8002);
      if (uVar8 != 0) {
        iVar3 = 0;
        do {
          iVar7 = iVar7 + 1;
          iVar3 = *(int *)(*(int *)(iVar3 + iVar2 + 0x7f8000) + 0x7f8000);
          pDVar4 = GetDoorTypeDatP((uint)*(ushort *)(iVar3 + 0x7f800c));
          door_keep[*puVar6].attr = pDVar4->attribute;
          pDVar4 = GetDoorTypeDatP((uint)*(ushort *)(iVar3 + 0x7f800c));
          door_keep[*puVar6].room_id = pDVar4->room_id;
          door_keep[*puVar6].mdl_no = *(short *)(iVar3 + 0x7f800e);
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          if ((door_keep[uVar1].attr & 0x4000U) == 0) {
            door_keep[uVar1].stts = '\x01';
          }
          else {
            door_keep[uVar1].stts = '\x05';
          }
          iVar3 = iVar7 * 4;
        } while (iVar7 < (int)uVar8);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return;
}

void DoorPassRoom(u_char room_id) {
	int *addr_si0;
	u_char *addr_uc0;
	int i;
	u_char dr_num;
	
  ushort uVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar3 = GetDataRoom('\n',room_id);
  if ((long)(char)uVar3 != 0xff) {
    iVar2 = *(int *)((char)uVar3 * 4 +
                    *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8004) + 0x7f8000);
    puVar5 = (ushort *)(iVar2 + 0x7f8002);
    for (uVar4 = (uint)*(byte *)(iVar2 + 0x7f8000); uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*puVar5 < 300) {
        uVar1 = door_keep[*puVar5].attr;
        if (((uVar1 & 1) == 0) && ((uVar1 & 0x8000) == 0)) {
          door_keep[*puVar5].attr = uVar1 | 1;
          DoorPassSetSttsMap(*puVar5);
        }
      }
      puVar5 = puVar5 + 2;
    }
  }
  return;
}

void DoorRDoorSetRotOK(u_short door_id) {
	DOOR_WRK *dwp;
	int i;
	
  uchar uVar1;
  DOOR_TYPE_DAT *pDVar2;
  DOOR_WRK *pDVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (int)door_id & 0xffff;
  if (uVar5 < 300) {
    iVar4 = 0;
    pDVar3 = door_wrk;
    do {
      uVar1 = IsUseDoor(pDVar3->use);
      if (((uVar1 != '\0') && ((ushort)pDVar3->door_id == uVar5)) &&
         (pDVar2 = GetDoorTypeDatP((uint)(ushort)pDVar3->type), pDVar2->room_id != 0xff)) {
        door_keep[uVar5].attr = door_keep[uVar5].attr | 2;
        return;
      }
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 1;
    } while (iVar4 < 0x14);
  }
  return;
}

void DoorPassSetSttsMap(u_short door_id) {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (int)door_id & 0xffff;
  if (uVar2 < 300) {
    uVar1 = door_keep[uVar2].attr;
    if (((uVar1 & 0x8000) == 0) && ((uVar1 & 1) != 0)) {
      if ((uVar1 & 0x2000) != 0) {
        door_keep[uVar2].stts_map = '\x01';
        return;
      }
      door_keep[uVar2].stts_map = '\x03';
    }
  }
  return;
}

void DoorPassSetHide(u_short door_id) {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (int)door_id & 0xffff;
  if (uVar2 < 300) {
    uVar1 = door_keep[uVar2].attr;
    if ((uVar1 & 0x8000) != 0) {
      door_keep[uVar2].stts_map = '\x02';
      door_keep[uVar2].attr = uVar1 | 1;
    }
  }
  return;
}

void DoorPassSetTouch(u_short door_id) {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (int)door_id & 0xffff;
  if (uVar2 < 300) {
    uVar1 = door_keep[uVar2].attr;
    if (((uVar1 & 0x8000) == 0) && ((uVar1 & 1) != 0)) {
      if ((uVar1 & 0x2000) != 0) {
        door_keep[uVar2].stts_map = '\x01';
        return;
      }
      door_keep[uVar2].stts_map = '\x03';
    }
  }
  return;
}

void DoorAcInit() {
	int i;
	
  int iVar1;
  uchar *puVar2;
  
  memset(door_wrk,0,0x500);
  memset(ac_door_wrk,0,0x280);
  puVar2 = &ac_door_wrk[9].stts;
  iVar1 = 9;
  do {
    *puVar2 = '\0';
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -0x40;
  } while (-1 < iVar1);
  return;
}

void DoorCtrlInit() {
	int i;
	int j;
	int *addr;
	u_short *addr_us;
	u_short ncd_num;
	
  short sVar1;
  ushort uVar2;
  int iVar3;
  uchar *puVar4;
  DOOR_WRK *pDVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  
  memset(nc_door_wrk,0,0xc80);
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar6 = iVar6 + 1;
    sVar1 = *(short *)((int)ac_door_wrk[0].npos + iVar3 + 0x1c);
    iVar7 = 0x13;
    pDVar5 = door_wrk;
    do {
      if (sVar1 == pDVar5->door_id) {
        if (*(char *)((int)ac_door_wrk[0].npos + iVar3 + 0x18) == '\0') {
          pDVar5->door_id = -1;
          goto LAB_001be364;
        }
      }
      else {
        pDVar5->door_id = -1;
LAB_001be364:
        pDVar5->stts = '\0';
        pDVar5->use = '\x05';
      }
      iVar7 = iVar7 + -1;
      pDVar5 = pDVar5 + 1;
    } while (-1 < iVar7);
    iVar3 = iVar6 * 0x40;
    if (9 < iVar6) {
      iVar3 = 0x31;
      puVar4 = &nc_door_wrk[0x31].stts;
      do {
        *puVar4 = '\0';
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -0x40;
      } while (-1 < iVar3);
      iVar6 = 0;
      iVar3 = *(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8000) + 0x7f8008);
      uVar9 = (uint)*(ushort *)(iVar3 + 0x7f8000);
      puVar8 = (ushort *)(iVar3 + 0x7f8002);
      if (uVar9 != 0) {
        do {
          uVar2 = *puVar8;
          nc_door_wrk[iVar6].type = 2;
          iVar3 = iVar6 + 1;
          nc_door_wrk[iVar6].stts = door_keep[uVar2].stts;
          uVar2 = *puVar8;
          nc_door_wrk[iVar6].count = 0;
          puVar8 = puVar8 + 1;
          nc_door_wrk[iVar6].door_id = uVar2;
          iVar6 = iVar3;
        } while (iVar3 < (int)uVar9);
      }
      InitDoorOpenCtrl();
      return;
    }
  } while( true );
}

static void InitDoorOpenCtrl() {
  room_wrk.disp_no[1] = 0xff;
  door_open_ctrl.chk_flg = '\0';
  door_open_ctrl.stts = '\0';
  door_open_ctrl.mode = '\0';
  door_open_ctrl.count = 0;
  door_open_ctrl.move_flame = 0;
  door_open_ctrl.open[0] = '\0';
  door_open_ctrl.open[1] = '\0';
  return;
}

void InitAreaReadWrk() {
  memset(&area_read_wrk,0,0x15);
  return;
}

void DoorDataInit() {
	int i;
	int j;
	int *addr_si;
	u_char *addr_uc;
	u_short *dr_tbl;
	u_char dr_all;
	u_char dr_num;
	u_short dr_id;
	u_short dr_no;
	u_char no_use_fw;
	u_char no_use_dw;
	u_char room_id;
	
  byte bVar1;
  ushort uVar2;
  uchar room_id_00;
  uchar uVar3;
  short *psVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint dw_no;
  int iVar10;
  uint fwrk_no;
  uchar *addr_uc;
  uchar dr_num;
  short dr_no;
  uchar room_id;
  
  GetDoorTypeDatP(0);
  if (room_wrk.room_no != 0xff) {
    iVar9 = *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8004);
    room_id_00 = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
    uVar3 = GetDataRoom('\n',room_id_00);
    if ((long)(char)uVar3 != 0xff) {
      iVar9 = *(int *)((char)uVar3 * 4 + iVar9 + 0x7f8000);
      fwrk_no = 0;
      dw_no = 0;
      iVar10 = 0;
      SetUpRoomCoordinate((int)(char)room_id_00,&room_wrk.pos[0].x);
      addr_uc = (uchar *)(iVar9 + 0x7f8002);
      bVar1 = *(byte *)(iVar9 + 0x7f8000);
      if (bVar1 != 0) {
        do {
          uVar2 = *(ushort *)addr_uc;
          psVar4 = GetDoorDoorNumP();
          addr_uc = addr_uc + 4;
          uVar8 = (uint)*(byte *)psVar4;
          puVar6 = (ushort *)(psVar4 + 1);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else if (*puVar6 == uVar2) {
            _dr_no = 0;
          }
          else {
            for (uVar7 = 1; puVar6 = puVar6 + 1, (int)uVar7 < (int)uVar8; uVar7 = uVar7 + 1) {
              if (*puVar6 == uVar2) {
                _dr_no = uVar7 & 0xffff;
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          if (uVar8 <= _dr_no) {
            return;
          }
          iVar9 = dw_no << 6;
          do {
            iVar5 = FurnIsWrkUse(furn_wrk + fwrk_no);
            if (iVar5 == 0) break;
            fwrk_no = fwrk_no + 1 & 0xff;
          } while (fwrk_no < 0xfb);
          do {
            if (*(char *)((int)door_wrk[0].npos + iVar9 + 0x26) == '\x05') break;
            dw_no = dw_no + 1 & 0xff;
            iVar9 = dw_no << 6;
          } while (dw_no < 0xfb);
          SetDoorWrk(dw_no,(uint *)(*(int *)(*(int *)(_dr_no * 4 +
                                                     *(int *)(*(int *)(map_wrk.dat_adr + 0x28) +
                                                             0x7f8008) + 0x7f8000) + 0x7f8000) +
                                   0x7f8000),(uint)uVar2,fwrk_no);
          *(undefined *)((int)door_wrk[0].npos + iVar9 + 0x26) = 1;
          DoorSetFurnWrk(dw_no,fwrk_no,'\x01',room_id_00);
        } while (iVar10 < (int)(uint)bVar1);
      }
    }
  }
  return;
}

static void SetDoorSttsData(int dw_no, int door_id, u_char type) {
	int i;
	
  ushort uVar1;
  AUTO_CLOSE_DOOR_WRK *pAVar2;
  int iVar3;
  short *psVar4;
  
  uVar1 = door_keep[door_id].attr;
  door_wrk[dw_no].stts = door_keep[door_id].stts;
  if ((uVar1 & 0x2000) == 0) {
    door_wrk[dw_no].lock = '\0';
  }
  else {
    door_wrk[dw_no].lock = '\x01';
  }
  psVar4 = &nc_door_wrk[0].door_id;
  iVar3 = 0;
  door_wrk[dw_no].mdl_no = door_keep[door_id].mdl_no;
  do {
    if ((uint)(ushort)*psVar4 == door_id) {
      SetNcDwrk(iVar3,dw_no,door_wrk[dw_no].stts);
      return;
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 0x20;
  } while (iVar3 < 0x32);
  iVar3 = 0;
  pAVar2 = ac_door_wrk;
  while ((pAVar2->stts == '\0' || ((uint)(ushort)pAVar2->door_id != door_id))) {
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 1;
    if (9 < iVar3) {
      return;
    }
  }
  SetAcDwrk(iVar3,dw_no,door_wrk[dw_no].stts);
  return;
}

static void SetDoorSttsEve(int door_id, u_char stts) {
	DOOR_STTS_KEEP *dskp;
	
  if (door_id < 300) {
    door_keep[door_id].stts = stts;
    if (stts == '\x05') {
      door_keep[door_id].attr = door_keep[door_id].attr | 0x4000;
      return;
    }
    if (stts == '\x01') {
      door_keep[door_id].attr = door_keep[door_id].attr & 0xbfff;
    }
  }
  return;
}

static void SetDoorLockEve(int door_id, u_char lock) {
	DOOR_STTS_KEEP *dskp;
	
  if (door_id < 300) {
    if (lock == '\0') {
      door_keep[door_id].attr = door_keep[door_id].attr & 0xdfff;
    }
    else if (lock == '\x01') {
      door_keep[door_id].attr = door_keep[door_id].attr | 0x2000;
      return;
    }
  }
  return;
}

void DoorSetAllLocked() {
	DOOR_STTS_KEEP *dskp;
	DOOR_WRK *dwp;
	int i;
	
  DOOR_WRK *pDVar1;
  int iVar2;
  DOOR_STTS_KEEP *pDVar3;
  
  iVar2 = 299;
  pDVar3 = door_keep;
  do {
    iVar2 = iVar2 + -1;
    pDVar3->attr = pDVar3->attr | 0x2000;
    pDVar3 = pDVar3 + 1;
  } while (-1 < iVar2);
  pDVar1 = door_wrk;
  iVar2 = 0x13;
  do {
    pDVar1->lock = '\x01';
    iVar2 = iVar2 + -1;
    pDVar1 = pDVar1 + 1;
  } while (-1 < iVar2);
  return;
}

int IsInDoorSpuare() {
	DOJ_SQUARE_MTN dsm;
	
  uint uVar1;
  int iVar2;
  DOJ_SQUARE_MTN dsm;
  
  DoorInitDSM(&dsm);
  DoorOpenCheckSquareArea(&dsm,'\x01','\x01');
  if (dsm.dojs[0].type == 0xff) {
    uVar1 = 0;
  }
  else {
    iVar2 = CheckRotDoorOpenStatus(dsm.dojs[0].dwrk_no,dsm.dojs[0].type);
    uVar1 = (uint)(iVar2 != 0);
  }
  return uVar1;
}

u_char GetRoomIdBeyondDoor2() {
  uchar uVar1;
  
  uVar1 = GetRoomIdBeyondDoor(door_wrk[doj_square_mtn.dwno_base].door_id,room_wrk.disp_no[0]);
  return uVar1;
}

u_char GetRoomIdBeyondDoor(u_short door_id, u_char now_room_id) {
	u_char *addr_uc;
	int i;
	u_char next_room_id;
	u_char dr_num;
	
  short sVar1;
  byte bVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  
  pbVar3 = GetDoorRoomConectDataP(now_room_id);
  bVar2 = 0xff;
  if (pbVar3 == (byte *)0x0) {
    bVar2 = 0xff;
  }
  else {
    iVar5 = 0;
    psVar4 = (short *)(pbVar3 + 2);
    if (*pbVar3 != 0) {
      sVar1 = *psVar4;
      while (sVar1 != door_id) {
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 2;
        if ((int)(uint)*pbVar3 <= iVar5) {
          return 0xff;
        }
        sVar1 = *psVar4;
      }
      bVar2 = *(byte *)(psVar4 + 1);
    }
  }
  return bVar2;
}

u_char IsAllConnectDoorClose() {
	DOOR_WRK *dwp;
	NON_CLOSE_DOOR_WRK *ncp;
	int i;
	int j;
	u_char dscv_flg;
	
  short *psVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  NON_CLOSE_DOOR_WRK *pNVar5;
  DOOR_WRK *pDVar6;
  int iVar7;
  
  iVar7 = 0;
  pDVar6 = door_wrk;
  do {
    uVar3 = IsUseDoor(pDVar6->use);
    if (((uVar3 != '\0') && (pDVar6->use != '\x05')) && (bVar2 = false, pDVar6->stts != '\x01')) {
      pNVar5 = nc_door_wrk;
      iVar4 = 0x31;
      do {
        psVar1 = &pNVar5->door_id;
        iVar4 = iVar4 + -1;
        pNVar5 = pNVar5 + 1;
        if (*psVar1 == pDVar6->door_id) {
          bVar2 = true;
        }
      } while (-1 < iVar4);
      if (!bVar2) {
        return '\0';
      }
    }
    iVar7 = iVar7 + 1;
    pDVar6 = pDVar6 + 1;
    if (0x13 < iVar7) {
      return '\x01';
    }
  } while( true );
}

void LockAllDoorInNowRoom() {
	NON_CLOSE_DOOR_WRK *ncp;
	AUTO_CLOSE_DOOR_WRK *acp;
	u_char *addr_uc;
	int i;
	int j;
	int k;
	u_short tmp_did;
	u_char now_room_id;
	u_char next_room_id;
	u_char dr_num;
	u_char nuke;
	u_char lock_did_num;
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  uchar room_id;
  byte *pbVar6;
  ushort *puVar7;
  AUTO_CLOSE_DOOR_WRK *pAVar8;
  int iVar9;
  int iVar10;
  NON_CLOSE_DOOR_WRK *pNVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  
  uVar15 = 0;
  memset(lock_did,0xff,0x28);
  room_id = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  if (((long)(char)room_id != 0xff) &&
     (pbVar6 = GetDoorRoomConectDataP(room_id), pbVar6 != (byte *)0x0)) {
    bVar1 = *pbVar6;
    iVar10 = 0;
    puVar14 = (ushort *)(pbVar6 + 2);
    if (bVar1 != 0) {
      uVar2 = *puVar14;
      do {
        puVar7 = puVar14 + 1;
        puVar14 = puVar14 + 2;
        if ((((ulong)*(byte *)puVar7 != 0xff) && ((ulong)*(byte *)puVar7 != (long)(char)room_id)) &&
           ((door_keep[uVar2].attr & 0x2000U) == 0)) {
          door_keep[uVar2].attr = door_keep[uVar2].attr | 0x2000;
          puVar7 = (ushort *)(lock_did + uVar15);
          uVar15 = uVar15 + 1 & 0xff;
          *puVar7 = uVar2;
          iVar12 = 0;
          iVar13 = 0;
          do {
            iVar12 = iVar12 + 1;
            if ((*(char *)((int)door_wrk[0].npos + iVar13 + 0x26) != '\x05') &&
               (uVar3 = *(ushort *)((int)door_wrk[0].npos + iVar13 + 0x1c), uVar3 == uVar2)) {
              bVar5 = false;
              if (nc_door_wrk[0].door_id == uVar3) {
                bVar5 = true;
              }
              else {
                pNVar11 = nc_door_wrk;
                for (iVar9 = 1; iVar9 < 0x32; iVar9 = iVar9 + 1) {
                  if (pNVar11[1].door_id == *(short *)((int)door_wrk[0].npos + iVar13 + 0x1c)) {
                    bVar5 = true;
                    break;
                  }
                  pNVar11 = pNVar11 + 1;
                }
              }
              if (!bVar5) {
                pAVar8 = ac_door_wrk;
                sVar4 = *(short *)((int)door_wrk[0].npos + iVar13 + 0x1c);
                iVar9 = 9;
                do {
                  if (pAVar8->door_id == sVar4) {
                    pAVar8->stts = '\x01';
                  }
                  iVar9 = iVar9 + -1;
                  pAVar8 = pAVar8 + 1;
                } while (-1 < iVar9);
                *(undefined *)((int)door_wrk[0].npos + iVar13 + 0x25) = 1;
                *(undefined *)((int)door_wrk[0].npos + iVar13 + 0x29) = 1;
              }
            }
            iVar13 = iVar12 * 0x40;
          } while (iVar12 < 0x14);
        }
        iVar10 = iVar10 + 1;
        if ((int)(uint)bVar1 <= iVar10) break;
        uVar2 = *puVar14;
      } while( true );
    }
    iVar10 = 0x13;
    do {
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  return;
}

void UnlockAllDoorInNowRoom() {
	DOOR_WRK *dwp;
	int i;
	int j;
	
  ushort uVar1;
  DOOR_WRK *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    uVar1 = *(ushort *)((int)lock_did + iVar4);
    if (uVar1 != 0xffff) {
      pDVar2 = door_wrk;
      iVar3 = 0x13;
      door_keep[uVar1].attr = door_keep[uVar1].attr & 0xdfff;
      do {
        iVar3 = iVar3 + -1;
        if ((pDVar2->use != '\x05') && (pDVar2->door_id == *(short *)((int)lock_did + iVar4))) {
          pDVar2->lock = '\0';
        }
        pDVar2 = pDVar2 + 1;
      } while (-1 < iVar3);
      *(undefined2 *)((int)lock_did + iVar4) = 0xffff;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar5 * 2;
  } while (iVar5 < 0x14);
  return;
}

u_char IsDoorLoad(u_char type) {
  DOOR_TYPE_DAT *pDVar1;
  
  pDVar1 = GetDoorTypeDatP((int)(char)type & 0xff);
  return (pDVar1->attribute & 0x10U) != 0;
}

int GetRoomDoorID(u_char room_id, u_short *door_id, u_char msn_no) {
	u_int *addr_cmn;
	u_int *adr_door_data_top;
	u_int *adr_drrm_top;
	u_int *adr_drdt_top;
	u_char *adr_rmnum;
	u_short *adr_drnum;
	u_char *adr_dr_tmp;
	u_int *adr_dd_tmp;
	u_short *adr_dtmp;
	u_char *adr_rtmp;
	u_char *adr_tmp_uc0;
	int ret;
	int i;
	int j;
	int k;
	u_short all_door_num;
	u_char dr_room_num;
	u_short door_num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar *puVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = 0;
  if (room_id < 0x3c) {
    iVar14 = ((int)(char)msn_no & 0xffU) * 4;
    iVar12 = 0;
    iVar5 = iVar14;
    do {
      if (floor_exist[iVar5] != '\0') {
        iVar5 = GetFloorTopAddr((uchar)iVar12);
        iVar5 = *(int *)(iVar5 + 0x28);
        iVar8 = 0;
        iVar1 = *(int *)(iVar5 + 0x7f8008);
        iVar2 = *(int *)(*(int *)(iVar5 + 0x7f8000) + 0x7f8000);
        iVar3 = *(int *)(*(int *)(iVar5 + 0x7f8000) + 0x7f8004);
        piVar4 = (int *)(*(int *)(iVar5 + 0x7f8004) + 0x7f8000);
        uVar10 = (uint)*(byte *)(iVar2 + 0x7f8000);
        uVar11 = (uint)*(ushort *)(iVar3 + 0x7f8000);
        puVar6 = (uchar *)(iVar2 + 0x7f8001);
        if (uVar10 != 0) {
          do {
            if (*puVar6 == room_id) {
              iVar5 = 0;
              uVar10 = (uint)*(byte *)(*piVar4 + 0x7f8000);
              psVar7 = (short *)(*piVar4 + 0x7f8002);
              if (uVar10 == 0) {
                return 0;
              }
              do {
                iVar12 = 0;
                psVar9 = (short *)(iVar3 + 0x7f8002);
                if (uVar11 != 0) {
                  do {
                    if (*psVar7 == *psVar9) {
                      iVar13 = iVar13 + 1;
                      *door_id = (ushort)*(byte *)(*(int *)(*(int *)(iVar12 * 4 + iVar1 + 0x7f8000)
                                                           + 0x7f8000) + 0x7f800e);
                      door_id = (short *)((ushort *)door_id + 1);
                    }
                    iVar12 = iVar12 + 1;
                    psVar9 = psVar9 + 1;
                  } while (iVar12 < (int)uVar11);
                }
                iVar5 = iVar5 + 1;
                psVar7 = psVar7 + 2;
              } while (iVar5 < (int)uVar10);
              return iVar13;
            }
            iVar8 = iVar8 + 1;
            piVar4 = piVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar8 < (int)uVar10);
        }
      }
      iVar12 = iVar12 + 1;
      iVar5 = iVar12 + iVar14;
    } while (iVar12 < 4);
  }
  return 0;
}

static void SetDoorWrk(int dw_no, u_int *addr, int dr_id, int fwrk_no) {
	DOOR_WRK *dwp;
	
  uchar type;
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  DOOR_TYPE_DAT *pDVar5;
  
  door_wrk[dw_no].rot = (float)*addr;
  RotLimitChk(&door_wrk[dw_no].rot);
  uVar2 = *(ushort *)(addr + 1);
  uVar3 = *(ushort *)(addr + 2);
  sVar4 = *(short *)(addr + 3);
  door_wrk[dw_no].pos[0] = (float)(uint)uVar2;
  sVar1 = *(short *)((int)addr + 6);
  door_wrk[dw_no].type = sVar4;
  door_wrk[dw_no].npos[0] = (float)(uint)uVar2;
  type = *(uchar *)&door_wrk[dw_no].type;
  door_wrk[dw_no].npos[2] = (float)(uint)uVar3;
  door_wrk[dw_no].npos[1] = (float)(int)sVar1;
  door_wrk[dw_no].fwrk_no = (uchar)fwrk_no;
  door_wrk[dw_no].pos[1] = (float)(int)sVar1;
  door_wrk[dw_no].pos[2] = (float)(uint)uVar3;
  door_wrk[dw_no].door_id = (short)dr_id;
  SetDoorSttsData(dw_no,dr_id,type);
  pDVar5 = GetDoorTypeDatP((uint)(ushort)door_wrk[dw_no].type);
  if (pDVar5->room_id != door_keep[(ushort)door_wrk[dw_no].door_id].room_id) {
    door_wrk[dw_no].rot = door_wrk[dw_no].rot + DAT_00355d9c;
  }
  RotLimitChk(&door_wrk[dw_no].rot);
  door_wrk[dw_no].nrot = door_wrk[dw_no].rot;
  return;
}

static void DoorSetFurnWrk(int dwrk_no, int fwrk_no, u_char use, u_char room_id) {
  short sVar1;
  FURN_WRK *furn;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((dwrk_no < 0x14) && (fwrk_no < 0x3c)) {
    fVar2 = door_wrk[dwrk_no].rot + DAT_00355da0;
    furn = furn_wrk + fwrk_no;
    furn_wrk[fwrk_no].rotate[0] = 0.0;
    furn_wrk[fwrk_no].rot = fVar2;
    RotLimitChk(&furn_wrk[fwrk_no].rot);
    sVar1 = door_wrk[dwrk_no].mdl_no;
    fVar3 = door_wrk[dwrk_no].pos[1];
    fVar2 = door_wrk[dwrk_no].pos[2];
    fVar4 = furn_wrk[fwrk_no].rot;
    furn_wrk[fwrk_no].pos[0] = door_wrk[dwrk_no].pos[0];
    furn_wrk[fwrk_no].rotate[1] = fVar4;
    furn_wrk[fwrk_no].pos[1] = fVar3;
    furn_wrk[fwrk_no].pos[2] = fVar2;
    furn_wrk[fwrk_no].use = use;
    furn_wrk[fwrk_no].room_id = room_id;
    furn->furn_no = sVar1 + 1000;
    furn_wrk[fwrk_no].rotate[2] = 0.0;
    furn_wrk[fwrk_no].fno_bk = -1;
    ChoudoPreRender(furn);
    if ((door_keep[(ushort)door_wrk[dwrk_no].door_id].attr & 0x200U) != 0) {
      sVar1 = door_wrk[dwrk_no].mdl_no;
      furn->furn_no = -1;
      furn_wrk[fwrk_no].fno_bk = sVar1 + 1000;
    }
  }
  return;
}

void DoorCtrlMain() {
  DoorCtrlOpen();
  DoorCtrlAutoClose();
  DoorCtrlNoClose();
  return;
}

u_char IsDoorOpenCtrlMode() {
  return door_open_ctrl.stts & 1;
}

static void DoorCtrlOpen() {
	DOJ_SQUARE_MTN *dsmtnp;
	DOOR_MTN_DAT *dmotionp;
	AUTO_CLOSE_DOOR_WRK *acp;
	NON_CLOSE_DOOR_WRK *ncp;
	float tmp_rot;
	int i;
	int j;
	static int load_id;
	static u_char req_flg;
	u_short tmp_rot_door_id;
	
  float *pfVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  DOOR_MTN_DAT *pDVar6;
  uchar *puVar7;
  short sVar8;
  NON_CLOSE_DOOR_WRK *pNVar9;
  AUTO_CLOSE_DOOR_WRK *pAVar10;
  int iVar11;
  uint uVar12;
  DOOR_MTN_DAT *unaff_s4_lo;
  DOJ_SQUARE_MTN *pDVar13;
  float fVar14;
  float fVar15;
  float tmp_rot;
  
  pDVar13 = &doj_square_mtn;
  if ((door_open_ctrl.stts & 1) == 0) {
    return;
  }
  if ((plyr_wrk.sta & 8) == 0) {
    door_open_ctrl.stts = door_open_ctrl.stts ^ 1;
  }
  switch(door_open_ctrl.mode) {
  case '\0':
    door_open_ctrl.mtn_dat_no = doj_square_mtn.mtn_no;
    door_open_ctrl.spos[0] = plyr_wrk.move_box.spd.z;
    door_open_ctrl.spos[1] = plyr_wrk.move_box.spd.w;
    door_open_ctrl.spos[2] = plyr_wrk.move_box.rot.x;
    GetDoorTypeDatP((uint)doj_square_mtn.mtn_no);
    unaff_s4_lo = GetDoorMtnDat(door_open_ctrl.mtn_dat_no);
    tmp_rot = door_wrk[doj_square_mtn.dwno_base].rot;
    RotLimitChk(&tmp_rot);
    if ((doj_square_mtn.dbl_flg == '\0') && (doj_square_mtn.exc_flg != '\0')) {
      tmp_rot = tmp_rot + DAT_00355da4;
      RotLimitChk(&tmp_rot);
    }
    fVar14 = SgCosf(tmp_rot);
    fVar15 = SgSinf(tmp_rot);
    door_open_ctrl.epos[1] = plyr_wrk.move_box.spd.w;
    door_open_ctrl.epos[0] =
         unaff_s4_lo->sx * fVar14 + unaff_s4_lo->sy * fVar15 +
         door_wrk[doj_square_mtn.dwno_base].pos[0];
    fVar14 = SgCosf(tmp_rot);
    fVar15 = SgSinf(tmp_rot);
    door_open_ctrl.door_pre = tmp_rot;
    door_open_ctrl.srot = plyr_wrk.move_box.trot.w - tmp_rot;
    door_open_ctrl.epos[2] =
         (unaff_s4_lo->sy * fVar14 - unaff_s4_lo->sx * fVar15) +
         door_wrk[doj_square_mtn.dwno_base].pos[2];
    RotLimitChk(&door_open_ctrl.srot);
    door_open_ctrl.erot = 0.0;
    RotLimitChk(&door_open_ctrl.erot);
    door_open_ctrl.spos[0] = door_open_ctrl.epos[0];
    door_open_ctrl.spos[1] = door_open_ctrl.epos[1];
    door_open_ctrl.spos[2] = door_open_ctrl.epos[2];
    door_open_ctrl.srot = door_open_ctrl.erot;
    SetDoorOpenCameraNo();
    door_open_ctrl.mode = '\x02';
    OneRoomLoadReq();
  case '\x02':
    door_open_ctrl.move_flame = 0x28;
    door_open_ctrl.wait_flame = 5;
    iVar4 = 1;
    SetPlyrAnime(unaff_s4_lo->anm_no,'\x05');
    puVar7 = door_open_ctrl.open + 1;
    door_open_ctrl.mode = '\b';
    do {
      *puVar7 = '\0';
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + -1;
    } while (-1 < iVar4);
    SetPlyrAnime(unaff_s4_lo->anm_no,(uchar)door_open_ctrl.move_flame);
switchD_001bf2ec_caseD_8:
    if ((ushort)door_open_ctrl.count < (ushort)door_open_ctrl.move_flame) {
      plyr_wrk.move_box.spd.z =
           door_open_ctrl.spos[0] +
           ((door_open_ctrl.epos[0] - door_open_ctrl.spos[0]) *
           (float)(uint)(ushort)door_open_ctrl.count) /
           (float)(uint)(ushort)door_open_ctrl.move_flame;
      plyr_wrk.move_box.spd.w =
           door_open_ctrl.spos[1] +
           ((door_open_ctrl.epos[1] - door_open_ctrl.spos[1]) *
           (float)(uint)(ushort)door_open_ctrl.count) /
           (float)(uint)(ushort)door_open_ctrl.move_flame;
      plyr_wrk.move_box.rot.x =
           door_open_ctrl.spos[2] +
           ((door_open_ctrl.epos[2] - door_open_ctrl.spos[2]) *
           (float)(uint)(ushort)door_open_ctrl.count) /
           (float)(uint)(ushort)door_open_ctrl.move_flame;
      plyr_wrk.move_box.trot.w =
           door_open_ctrl.srot + door_open_ctrl.door_pre +
           ((door_open_ctrl.erot - door_open_ctrl.srot) * (float)(uint)(ushort)door_open_ctrl.count)
           / (float)(uint)(ushort)door_open_ctrl.move_flame;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
    }
    iVar4 = RoomMdlLoadWait();
    if (iVar4 == 0) {
      iVar4 = 0;
      do {
        if ((pDVar13->dojs[0].dwrk_no != -1) && (door_open_ctrl.open[iVar4] == '\x01')) {
          ani_mdl[0].mot.reso = 0;
        }
        iVar4 = iVar4 + 1;
        pDVar13 = (DOJ_SQUARE_MTN *)(pDVar13->dojs + 1);
      } while (iVar4 < 2);
    }
    else {
      door_open_ctrl.mode = '\t';
      load_id_213 = 0xffffffff;
      load_id_213 = SDoorLoadReqAndSet(-1,door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id);
      load_id_213 = SFootLoadReqAndSet(load_id_213,door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id)
      ;
      load_id_213 = SSrundLoadReqAndSet(load_id_213,door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id
                                       );
      load_id_213 = SEventLoadReqAndSet(load_id_213,door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id
                                       );
      if (load_id_213 == -1) {
        req_flg_214 = '\0';
        FGTransInit();
      }
      else {
        req_flg_214 = '\x01';
      }
LAB_001bf6f4:
      if (req_flg_214 == '\x01') {
        iVar4 = IsLoadEnd(load_id_213);
        if (iVar4 != 0) {
          req_flg_214 = '\0';
          FGTransInit();
        }
      }
      else if (req_flg_214 == '\0') {
        SeFGhostTransCtrl();
      }
      if ((ushort)door_open_ctrl.wait_flame <= (ushort)door_open_ctrl.count) {
        uVar12 = 0;
        pDVar6 = GetDoorMtnDat(door_open_ctrl.mtn_dat_no);
        iVar4 = 0;
        do {
          iVar5 = *(int *)(doj_square_mtn.dojs[0].sq_no + iVar4 + -5);
          if ((iVar5 != -1) && (door_open_ctrl.open[uVar12] == 1)) {
            if (ani_mdl[0].mot.reso == 0) {
              ani_mdl[0].mot.reso = (uint)door_open_ctrl.open[uVar12];
            }
            plyr_wrk.sta = plyr_wrk.sta | 0x2000;
            if ((doj_square_mtn.exc_flg == '\0') || (doj_square_mtn.dbl_flg != '\0')) {
              if ((doj_square_mtn.exc_flg == uVar12) ||
                 (iVar5 = MotionIsDouble(door_open_ctrl.mtn_dat_no), iVar5 == 0)) {
                uVar3 = pDVar6->dmd_no1;
              }
              else {
                uVar3 = pDVar6->dmd_no2;
              }
              door_wrk[*(int *)(doj_square_mtn.dojs[0].sq_no + iVar4 + -5)].dmd_no = uVar3;
            }
            else {
              if (uVar12 == 0) {
                uVar3 = pDVar6->dmd_no1;
                iVar5 = doj_square_mtn.dojs[0].dwrk_no;
              }
              else {
                uVar3 = pDVar6->dmd_no2;
              }
              door_wrk[iVar5].dmd_no = uVar3;
            }
            puVar7 = doj_square_mtn.dojs[0].sq_no + iVar4 + -5;
            iVar5 = *(int *)puVar7;
            pNVar9 = nc_door_wrk;
            iVar11 = 0;
            do {
              if ((pNVar9->door_id == door_wrk[iVar5].door_id) && (pNVar9->stts != '\0')) {
                sVar8 = *(short *)puVar7;
                uVar3 = door_wrk[iVar5].dmd_no;
                pfVar1 = *(float **)(&dtbl_tbl + (uint)door_wrk[iVar5].dmd_no * 4);
                pNVar9->type = door_wrk[iVar5].type;
                pNVar9->open_tbl = pfVar1;
                pNVar9->dw_no = sVar8;
                pNVar9->dmd_no = uVar3;
                pNVar9->npos[0] = 0.0;
                pNVar9->npos[1] = 0.0;
                pNVar9->npos[2] = 0.0;
                pNVar9->nrot = 0.0;
                pNVar9->stts = '\x02';
                pNVar9->opnmtn_flg = '\0';
                door_wrk[iVar5].stts = '\x02';
                SeDoorOpen(iVar5);
                bVar2 = iVar11 < 0x32;
                break;
              }
              iVar11 = iVar11 + 1;
              bVar2 = iVar11 < 0x32;
              pNVar9 = pNVar9 + 1;
            } while (bVar2);
            if (!bVar2) {
              iVar5 = 0;
              pAVar10 = ac_door_wrk;
              do {
                iVar5 = iVar5 + 1;
                if (pAVar10->stts == '\0') {
                  pAVar10->npos[0] = 0.0;
                  puVar7 = doj_square_mtn.dojs[0].sq_no + iVar4 + -5;
                  iVar4 = *(int *)puVar7;
                  pAVar10->dw_no = *(short *)puVar7;
                  uVar3 = door_wrk[iVar4].dmd_no;
                  sVar8 = door_wrk[iVar4].type;
                  pfVar1 = *(float **)(&dtbl_tbl + (uint)door_wrk[iVar4].dmd_no * 4);
                  pAVar10->door_id = door_wrk[iVar4].door_id;
                  pAVar10->open_tbl = pfVar1;
                  pAVar10->type = sVar8;
                  pAVar10->dmd_no = uVar3;
                  pAVar10->npos[1] = 0.0;
                  pAVar10->npos[2] = 0.0;
                  pAVar10->nrot = 0.0;
                  pAVar10->stts = '\x02';
                  pAVar10->opnmtn_flg = '\0';
                  door_wrk[iVar4].stts = '\x02';
                  SeDoorOpen(iVar4);
                  break;
                }
                pAVar10 = pAVar10 + 1;
              } while (iVar5 < 10);
            }
            door_open_ctrl.open[uVar12] = '\x02';
          }
          uVar12 = uVar12 + 1;
          iVar4 = uVar12 * 8;
        } while ((int)uVar12 < 2);
      }
      if ((ushort)door_open_ctrl.count < 30000) {
        door_open_ctrl.count = door_open_ctrl.count + 1;
      }
      if (((plyr_wrk.sta & 0x20) != 0) && (req_flg_214 == '\0')) {
        SetPlyrPosAfterDOpen();
        pDVar6 = GetDoorMtnDat(door_open_ctrl.mtn_dat_no);
        SetPlyrAnime(pDVar6->anm_last_no,'\0');
        door_open_ctrl.mode = '\x05';
        if (doj_square_mtn.mtn_no - 0x11 < 2) {
          plyr_wrk.dop.dov[3]._0_2_ = 0xffff;
          DoorSttsChange(door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id,'\x01');
        }
      }
    }
    break;
  case '\x05':
    if (((plyr_wrk.sta & 0x20) == 0) || (uVar3 = IsEndFgTrans(), uVar3 == '\0')) {
      SeFGhostTransCtrl();
      return;
    }
    if (doj_square_mtn.mtn_no == '\x10') {
      plyr_wrk.dop.dov[3]._0_2_ = 0xffff;
      DoorSttsChange(door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id,'\x01');
      if (ingame_wrk.msn_no == 2) {
        sVar8 = door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id;
        if ((((sVar8 != 0x1a) && (sVar8 != 0x2f)) && (sVar8 != 0x22)) && (sVar8 != 0x31)) {
          if ((sVar8 != 0x1d) || (plyr_wrk.dop._13_1_ != '\x04')) goto LAB_001bfb20;
          sVar8 = 0x1d;
        }
        DoorKeyLockOnly(sVar8);
      }
LAB_001bfb20:
      iVar4 = IsRotType(*(uchar *)&door_wrk[doj_square_mtn.dojs[0].dwrk_no].type);
      if (iVar4 != 0) {
        ChoudoPreRenderDual(furn_wrk + door_wrk[doj_square_mtn.dojs[0].dwrk_no].fwrk_no);
      }
    }
    door_open_ctrl.mode = '\x06';
    break;
  case '\x06':
    door_open_ctrl.mode = '\a';
    break;
  case '\a':
    plyr_wrk.sta = plyr_wrk.sta & 0xffffdff7;
    door_open_ctrl.stts = door_open_ctrl.stts ^ 1;
    break;
  case '\b':
    goto switchD_001bf2ec_caseD_8;
  case '\t':
    goto LAB_001bf6f4;
  }
  return;
}

void SetPlyrPosAfterDOpen() {
	PLYR_WRK *pwp;
	MOVE_BOX *mbp;
	
  plyr_wrk.move_box.rot.x = plyr_wrk.soulp.x;
  plyr_wrk.move_box.spd.z = plyr_wrk.cp_old.z;
  plyr_wrk.move_box.spd.w =
       GetPointHeight((short)(int)plyr_wrk.cp_old.z,(short)(int)plyr_wrk.soulp.x);
  return;
}

static void SetNcDwrk(int nc_dwrk_pos, int dwrk_pos, u_char stts) {
	NON_CLOSE_DOOR_WRK *ncp;
	DOOR_WRK *dwp;
	DOOR_TYPE_DAT *dtdp;
	
  uchar uVar1;
  ushort uVar2;
  DOOR_TYPE_DAT *pDVar3;
  
  uVar2 = door_wrk[dwrk_pos].type;
  uVar1 = door_wrk[dwrk_pos].dmd_no;
  nc_door_wrk[nc_dwrk_pos].type = uVar2;
  nc_door_wrk[nc_dwrk_pos].dw_no = (short)dwrk_pos;
  nc_door_wrk[nc_dwrk_pos].dmd_no = uVar1;
  door_wrk[dwrk_pos].stts = stts;
  nc_door_wrk[nc_dwrk_pos].stts = stts;
  pDVar3 = GetDoorTypeDatP((uint)uVar2);
  switch(stts) {
  case '\x03':
  case '\x04':
  case '\x05':
    nc_door_wrk[nc_dwrk_pos].count = 0;
    break;
  case '\x06':
    nc_door_wrk[nc_dwrk_pos].count = pDVar3->open_wait;
  }
  return;
}

static void SetAcDwrk(int ac_dwrk_pos, int dwrk_pos, u_char stts) {
	AUTO_CLOSE_DOOR_WRK *acp;
	DOOR_WRK *dwp;
	DOOR_TYPE_DAT *dtdp;
	
  uchar uVar1;
  ushort uVar2;
  short sVar3;
  DOOR_TYPE_DAT *pDVar4;
  
  uVar2 = door_wrk[dwrk_pos].type;
  sVar3 = door_wrk[dwrk_pos].door_id;
  ac_door_wrk[ac_dwrk_pos].type = uVar2;
  uVar1 = door_wrk[dwrk_pos].dmd_no;
  ac_door_wrk[ac_dwrk_pos].door_id = sVar3;
  ac_door_wrk[ac_dwrk_pos].dw_no = (short)dwrk_pos;
  ac_door_wrk[ac_dwrk_pos].dmd_no = uVar1;
  door_wrk[dwrk_pos].stts = stts;
  ac_door_wrk[ac_dwrk_pos].stts = stts;
  pDVar4 = GetDoorTypeDatP((uint)uVar2);
  switch(stts) {
  case '\x03':
  case '\x04':
  case '\x05':
    ac_door_wrk[ac_dwrk_pos].count = 0;
    break;
  case '\x06':
    ac_door_wrk[ac_dwrk_pos].count = pDVar4->open_wait;
  }
  return;
}

static void DoorCtrlAutoClose() {
	DOOR_TYPE_DAT *dtdp;
	DOOR_WRK *dwp;
	AUTO_CLOSE_DOOR_WRK *acp;
	int i;
	int j;
	int k;
	u_short del_id;
	
  byte bVar1;
  bool bVar2;
  short sVar3;
  uchar uVar4;
  ushort uVar5;
  short sVar6;
  DOOR_TYPE_DAT *pDVar7;
  int iVar8;
  int iVar9;
  AUTO_CLOSE_DOOR_WRK *pAVar10;
  float *pfVar11;
  short *psVar12;
  int iVar13;
  AUTO_CLOSE_DOOR_WRK *pAVar14;
  DOOR_WRK *pDVar15;
  float fVar16;
  float fVar17;
  short del_id;
  
  pAVar14 = ac_door_wrk;
  iVar13 = 0;
  while (pAVar14->stts == '\0') {
LAB_001c0750:
    iVar13 = iVar13 + 1;
    pAVar14 = pAVar14 + 1;
    if (9 < iVar13) {
      return;
    }
  }
  sVar3 = -1;
  pDVar7 = GetDoorTypeDatP((uint)(ushort)pAVar14->type);
  switch(pAVar14->stts) {
  case '\x01':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      iVar8 = IsRotType(*(uchar *)&pAVar14->type);
      if (iVar8 == 0) {
        fVar16 = DoorOpenCtrlRot(0.0,(float)(int)(short)pDVar7->move_max,
                                 (float)(int)(short)pDVar7->open_wait);
        pAVar14->nrot = fVar16;
        goto LAB_001c0400;
      }
      pAVar14->inert = 0.0;
      pAVar14->count = 0;
      fVar16 = DoorOpenCtrlRot(pAVar14->inert,(float)(int)(short)pDVar7->move_max,
                               (float)(int)(short)pDVar7->open_wait);
      pAVar14->nrot = fVar16;
      ChangeRotDoorFace(pAVar14->door_id);
      sVar6 = pAVar14->door_id;
    }
    else {
      uVar5 = DoorOpenCtrlSlide(0,pDVar7->move_max,pDVar7->open_wait);
      pAVar14->npos[0] = (float)(int)(short)uVar5;
LAB_001c0400:
      sVar6 = pAVar14->door_id;
    }
    DoorSttsChange(sVar6,pAVar14->stts);
    sVar6 = pAVar14->door_id;
    if (sVar6 != -1) {
      sVar3 = sVar6;
    }
    goto LAB_001c04c4;
  case '\x02':
    if (pAVar14->opnmtn_flg == '\0') {
      if (pAVar14->open_tbl[1] == DAT_00355db8) {
        iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
        pfVar11 = pAVar14->open_tbl;
        if (iVar8 == 0) {
          fVar16 = *pfVar11 + (*pfVar11 - pfVar11[-1]) * 0.5;
          goto LAB_001c0100;
        }
        pAVar14->npos[0] = *pfVar11 + (*pfVar11 - pfVar11[-1]) * 0.5;
      }
      else {
        iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
        pfVar11 = pAVar14->open_tbl;
        if (iVar8 == 0) {
          fVar16 = (*pfVar11 + pfVar11[1]) * 0.5;
LAB_001c0100:
          pAVar14->nrot = fVar16;
        }
        else {
          pAVar14->npos[0] = (*pfVar11 + pfVar11[1]) * 0.5;
        }
      }
      pfVar11 = pfVar11 + 1;
      pAVar14->opnmtn_flg = '\x01';
      pAVar14->open_tbl = pfVar11;
    }
    else {
      pAVar14->opnmtn_flg = '\0';
      iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
      pfVar11 = pAVar14->open_tbl;
      if (iVar8 == 0) {
        pAVar14->nrot = *pfVar11;
      }
      else {
        pAVar14->npos[0] = *pfVar11;
      }
    }
    if (*pfVar11 == DAT_00355dbc) {
      pAVar14->stts = '\b';
      fVar16 = pfVar11[-2];
      fVar17 = pfVar11[-1];
      pAVar14->count = 0;
      sVar6 = pAVar14->door_id;
      pAVar14->inert = (fVar17 - fVar16) * 0.5;
      goto LAB_001c04c4;
    }
    break;
  case '\x03':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      fVar16 = DoorOpenCtrlRot((float)(uint)(ushort)pAVar14->count,
                               (float)(int)(short)pDVar7->move_max,
                               (float)(int)(short)pDVar7->open_wait);
      pAVar14->nrot = fVar16;
    }
    else {
      uVar5 = DoorOpenCtrlSlide(pAVar14->count,pDVar7->move_max,pDVar7->open_wait);
      pAVar14->npos[0] = (float)(int)(short)uVar5;
    }
    uVar5 = pAVar14->count + 1;
    pAVar14->count = uVar5;
    if ((long)(short)pDVar7->open_wait < (long)(ulong)uVar5) {
      pAVar14->count = 0;
      pAVar14->stts = '\x04';
    }
    break;
  case '\x04':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      pAVar14->nrot = ((float)(int)(short)pDVar7->move_max * DAT_00355dc0) / 180.0;
    }
    else {
      pAVar14->npos[0] = (float)(int)(short)pDVar7->move_max;
    }
    uVar5 = pAVar14->count + 1;
    pAVar14->count = uVar5;
    if ((long)(short)pDVar7->close_wait < (long)(ulong)uVar5) {
      uVar5 = pDVar7->open_wait;
      pAVar14->stts = '\x06';
      pAVar14->count = uVar5;
    }
    break;
  case '\x05':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      pAVar14->nrot = ((float)(int)(short)pDVar7->move_max * DAT_00355dc4) / 180.0;
    }
    else {
      pAVar14->npos[0] = (float)(int)(short)pDVar7->move_max;
    }
    DoorSttsChange(pAVar14->door_id,pAVar14->stts);
    sVar6 = pAVar14->door_id;
    goto LAB_001c04c4;
  case '\x06':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      fVar16 = DoorOpenCtrlRot((float)(uint)(ushort)pAVar14->count,
                               (float)(int)(short)pDVar7->move_max,
                               (float)(int)(short)pDVar7->open_wait);
      pAVar14->nrot = fVar16;
    }
    else {
      uVar5 = DoorOpenCtrlSlide(pAVar14->count,pDVar7->move_max,pDVar7->open_wait);
      pAVar14->npos[0] = (float)(int)(short)uVar5;
    }
    sVar6 = pAVar14->count + -1;
    pAVar14->count = sVar6;
    if (sVar6 == 0) {
      sVar6 = pAVar14->door_id;
      pAVar14->stts = '\x01';
      goto LAB_001c04c4;
    }
    break;
  case '\a':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      fVar16 = pAVar14->nrot + pAVar14->inert;
      pAVar14->nrot = fVar16;
      if (fVar16 < 0.0) {
        pAVar14->inert = 0.0;
        pAVar14->stts = '\x01';
        pAVar14->nrot = 0.0;
        pAVar14->count = 0;
      }
    }
    else {
      fVar16 = pAVar14->npos[0] + pAVar14->inert;
      pAVar14->npos[0] = fVar16;
      if (fVar16 < 0.0) {
        pAVar14->inert = 0.0;
        pAVar14->stts = '\x01';
        pAVar14->npos[0] = 0.0;
        pAVar14->count = 0;
      }
    }
    break;
  case '\b':
    iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
    if (iVar8 == 0) {
      iVar8 = IsRotType(*(uchar *)&pAVar14->type);
      if (iVar8 == 0) {
        fVar16 = pAVar14->nrot + pAVar14->inert;
        pAVar14->nrot = fVar16;
        uVar5 = pDVar7->move_max;
        if ((short)uVar5 < 0) {
          bVar2 = fVar16 < ((float)(int)(short)uVar5 * DAT_00355db4) / 180.0;
          goto LAB_001bff00;
        }
        uVar4 = '\x04';
        if (fVar16 <= ((float)(int)(short)uVar5 * DAT_00355db0) / 180.0) {
          sVar6 = pAVar14->door_id;
          goto LAB_001c04c4;
        }
        goto LAB_001bff0c;
      }
      fVar16 = pAVar14->nrot + pAVar14->inert;
      pAVar14->nrot = fVar16;
      uVar5 = pDVar7->move_max;
      if (-1 < (short)uVar5) {
        uVar4 = '\x01';
        if (fVar16 <= ((float)(int)(short)uVar5 * DAT_00355da8) / 180.0) {
          sVar6 = pAVar14->door_id;
          goto LAB_001c04c4;
        }
        goto LAB_001bff0c;
      }
      uVar4 = '\x01';
      if (((float)(int)(short)uVar5 * DAT_00355dac) / 180.0 <= fVar16) break;
      pAVar14->count = 0;
    }
    else {
      fVar16 = pAVar14->npos[0] + pAVar14->inert;
      pAVar14->npos[0] = fVar16;
      uVar5 = pDVar7->move_max;
      if ((short)uVar5 < 0) {
        bVar2 = fVar16 < (float)(int)(short)uVar5;
LAB_001bff00:
        if (!bVar2) {
          sVar6 = pAVar14->door_id;
          goto LAB_001c04c4;
        }
        uVar4 = '\x04';
      }
      else {
        uVar4 = '\x04';
        if (fVar16 <= (float)(int)(short)uVar5) {
          sVar6 = pAVar14->door_id;
          goto LAB_001c04c4;
        }
      }
LAB_001bff0c:
      pAVar14->count = 0;
    }
    pAVar14->stts = uVar4;
    pAVar14->inert = 0.0;
    break;
  case '\t':
    if (pAVar14->opnmtn_flg == '\0') {
      pAVar14->opnmtn_flg = '\x01';
    }
    else {
      pAVar14->opnmtn_flg = '\0';
      iVar8 = IsFusumaType(*(uchar *)&pAVar14->type);
      pfVar11 = pAVar14->open_tbl;
      if (iVar8 == 0) {
        pAVar14->nrot = *pfVar11;
      }
      else {
        pAVar14->npos[0] = *pfVar11;
      }
      pAVar14->open_tbl = pfVar11 + 1;
    }
    if (*pAVar14->open_tbl == DAT_00355dc8) {
      pAVar14->stts = '\x01';
      DoorSttsChange(pAVar14->door_id,'\x01');
      sVar6 = pAVar14->door_id;
      if (sVar6 != -1) {
        sVar3 = sVar6;
      }
      goto LAB_001c04c4;
    }
  }
  sVar6 = pAVar14->door_id;
LAB_001c04c4:
  pDVar15 = door_wrk;
  iVar8 = 0;
  do {
    if ((pDVar15->door_id == sVar6) && (pDVar15->stts != '\0')) {
      iVar9 = IsFusumaType(*(uchar *)&pAVar14->type);
      fVar16 = DAT_00355dcc;
      if (iVar9 == 0) {
        fVar17 = pDVar15->rot + pAVar14->nrot;
        pDVar15->nrot = fVar17;
        furn_wrk[pDVar15->fwrk_no].rotate[0] = 0.0;
        furn_wrk[pDVar15->fwrk_no].rot = fVar17 + fVar16;
        RotLimitChk(&furn_wrk[pDVar15->fwrk_no].rot);
        furn_wrk[pDVar15->fwrk_no].rotate[1] = furn_wrk[pDVar15->fwrk_no].rot;
        furn_wrk[pDVar15->fwrk_no].rotate[2] = 0.0;
      }
      else {
        fVar16 = SgCosf(pDVar15->rot);
        pDVar15->npos[0] = pDVar15->pos[0] + pAVar14->npos[0] * fVar16;
        fVar16 = SgSinf(pDVar15->rot);
        bVar1 = pDVar15->fwrk_no;
        fVar17 = pDVar15->npos[0];
        fVar16 = pDVar15->pos[2] - pAVar14->npos[0] * fVar16;
        pDVar15->npos[2] = fVar16;
        furn_wrk[bVar1].pos[0] = fVar17;
        furn_wrk[pDVar15->fwrk_no].pos[2] = fVar16;
      }
      uVar4 = pAVar14->stts;
      if (uVar4 == '\x04') {
        iVar9 = DoorReOpenCheck(&plyr_wrk.move_box.spd.z,iVar8,pAVar14->count,
                                *(uchar *)&pAVar14->type);
        if (iVar9 == 0) {
          uVar4 = pAVar14->stts;
          pAVar14->count = pDVar7->close_wait + 1;
        }
        else {
          pAVar14->count = 0;
          if (pDVar7->dbl_did == -1) {
            uVar4 = pAVar14->stts;
          }
          else {
            pAVar10 = ac_door_wrk;
            iVar9 = 0;
            psVar12 = &ac_door_wrk[0].door_id;
            do {
              if (*psVar12 == pDVar7->dbl_did) {
                pAVar10->count = 0;
                pAVar10->stts = '\x04';
                door_wrk[(ushort)pAVar10->dw_no].stts = '\x04';
                uVar4 = pAVar14->stts;
                goto LAB_001c06c4;
              }
              iVar9 = iVar9 + 1;
              pAVar10 = pAVar10 + 1;
              psVar12 = psVar12 + 0x20;
            } while (iVar9 < 10);
            uVar4 = pAVar14->stts;
          }
        }
      }
LAB_001c06c4:
      pDVar15->stts = uVar4;
    }
    if (((sVar3 != -1) && (sVar3 == pDVar15->door_id)) && (pDVar15->stts != '\0')) {
      sVar3 = -1;
      SeDoorClose(iVar8);
      pDVar15->stts = '\x01';
      pAVar14->dw_no = -1;
      pAVar14->stts = '\0';
      pAVar14->door_id = -1;
      pAVar14->type = 0;
      pAVar14->nrot = 0.0;
      pAVar14->npos[0] = 0.0;
    }
    if (0x13 < iVar8 + 1) goto LAB_001c0750;
    sVar6 = pAVar14->door_id;
    pDVar15 = pDVar15 + 1;
    iVar8 = iVar8 + 1;
  } while( true );
}

void AllCloseAcDoor() {
	AUTO_CLOSE_DOOR_WRK *acp;
	int i;
	
  AUTO_CLOSE_DOOR_WRK *pAVar1;
  int iVar2;
  
  pAVar1 = ac_door_wrk;
  iVar2 = 9;
  do {
    iVar2 = iVar2 + -1;
    if (pAVar1->stts != '\0') {
      pAVar1->stts = '\x01';
    }
    pAVar1 = pAVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void AllCloseConnectDoor() {
	DOOR_WRK *dwp;
	int i;
	u_char now_rid;
	
  uchar now_room_id;
  uchar uVar1;
  int iVar2;
  DOOR_WRK *pDVar3;
  int iVar4;
  
  iVar4 = 0x13;
  now_room_id = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  pDVar3 = door_wrk;
  do {
    uVar1 = pDVar3->use;
    iVar4 = iVar4 + -1;
    if (uVar1 == '\x01') {
LAB_001c083c:
      uVar1 = pDVar3->stts;
LAB_001c0840:
      if ((uVar1 != '\x01') && (uVar1 != '\x05')) {
        uVar1 = GetRoomIdBeyondDoor(pDVar3->door_id,now_room_id);
        if (((long)(char)uVar1 != 0xff) &&
           (((long)(char)uVar1 != (long)(char)now_room_id &&
            (iVar2 = IsRotType(*(uchar *)&pDVar3->type), iVar2 == 0)))) {
          DoorSttsChange(pDVar3->door_id,'\x01');
        }
      }
    }
    else {
      if (uVar1 == '\x03') {
        uVar1 = pDVar3->stts;
        goto LAB_001c0840;
      }
      if (uVar1 == '\x04') goto LAB_001c083c;
    }
    pDVar3 = pDVar3 + 1;
    if (iVar4 < 0) {
      return;
    }
  } while( true );
}

static int DoorReOpenCheck(float *pos, int dwrk_no, u_short count, u_char type) {
	DOOR_WRK *dwp;
	sceVu0FVECTOR tmp_dpos;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float tmp_dpos [4];
  
  GetDoorTypeDatP((int)(char)type & 0xff);
  fVar2 = SgCosf(door_wrk[dwrk_no].rot);
  fVar1 = door_wrk[dwrk_no].pos[0];
  fVar3 = SgSinf(door_wrk[dwrk_no].rot);
  fVar1 = GetDist(pos[2] - (door_wrk[dwrk_no].pos[2] - fVar3 * 225.0),*pos - (fVar1 + fVar2 * 225.0)
                 );
  return (uint)(fVar1 < 900.0);
}

static void DoorCtrlNoClose() {
	DOOR_TYPE_DAT *dtdp;
	DOOR_WRK *dwp;
	NON_CLOSE_DOOR_WRK *ncp;
	int i;
	u_short del_id;
	
  byte bVar1;
  float *pfVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  DOOR_TYPE_DAT *pDVar6;
  int iVar7;
  DOOR_WRK *pDVar8;
  NON_CLOSE_DOOR_WRK *pNVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  iVar10 = 0;
  GetDoorTypeDatP(0);
  pNVar9 = nc_door_wrk;
  do {
    if (pNVar9->stts != '\0') {
      switch(pNVar9->stts) {
      case '\x01':
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          pNVar9->nrot = 0.0;
        }
        else {
          pNVar9->npos[0] = 0.0;
        }
        break;
      case '\x02':
        if (pNVar9->opnmtn_flg == '\0') {
          pNVar9->opnmtn_flg = '\x01';
        }
        else {
          iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
          pfVar2 = pNVar9->open_tbl;
          if (iVar10 == 0) {
            pNVar9->nrot = *pfVar2;
          }
          else {
            pNVar9->npos[0] = *pfVar2;
          }
          pNVar9->opnmtn_flg = '\0';
          pNVar9->open_tbl = pfVar2 + 1;
        }
        pfVar2 = pNVar9->open_tbl;
        if (*pfVar2 == DAT_00355dd8) {
          pNVar9->stts = '\b';
          fVar11 = pfVar2[-2];
          fVar12 = pfVar2[-1];
          pNVar9->count = 0;
          pNVar9->inert = (fVar12 - fVar11) * 0.5;
        }
        break;
      case '\x03':
        pDVar6 = GetDoorTypeDatP((uint)(ushort)pNVar9->type);
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          fVar11 = DoorOpenCtrlRot((float)(uint)(ushort)pNVar9->count,
                                   (float)(int)(short)pDVar6->move_max,
                                   (float)(int)(short)pDVar6->open_wait);
          pNVar9->nrot = fVar11;
        }
        else {
          uVar4 = DoorOpenCtrlSlide(pNVar9->count,pDVar6->move_max,pDVar6->open_wait);
          pNVar9->npos[0] = (float)(int)(short)uVar4;
        }
        uVar4 = pNVar9->count + 1;
        pNVar9->count = uVar4;
        if ((long)(short)pDVar6->open_wait < (long)(ulong)uVar4) {
          pNVar9->count = 0;
          pNVar9->stts = '\x04';
        }
        break;
      case '\x04':
        pDVar6 = GetDoorTypeDatP((uint)(ushort)pNVar9->type);
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          pNVar9->nrot = ((float)(int)(short)pDVar6->move_max * DAT_00355de0) / 180.0;
        }
        else {
          pNVar9->npos[0] = (float)(int)(short)pDVar6->move_max;
        }
        uVar4 = pNVar9->count + 1;
        pNVar9->count = uVar4;
        if ((long)(short)pDVar6->close_wait < (long)(ulong)uVar4) {
          uVar4 = pDVar6->open_wait;
          pNVar9->stts = '\x06';
          pNVar9->count = uVar4;
        }
        break;
      case '\x05':
        pDVar6 = GetDoorTypeDatP((uint)(ushort)pNVar9->type);
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          pNVar9->nrot = ((float)(int)(short)pDVar6->move_max * DAT_00355ddc) / 180.0;
        }
        else {
          pNVar9->npos[0] = (float)(int)(short)pDVar6->move_max;
        }
        DoorSttsChange(pNVar9->door_id,pNVar9->stts);
        break;
      case '\x06':
        pDVar6 = GetDoorTypeDatP((uint)(ushort)pNVar9->type);
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          fVar11 = DoorOpenCtrlRot((float)(uint)(ushort)pNVar9->count,
                                   (float)(int)(short)pDVar6->move_max,
                                   (float)(int)(short)pDVar6->open_wait);
          pNVar9->nrot = fVar11;
        }
        else {
          uVar4 = DoorOpenCtrlSlide(pNVar9->count,pDVar6->move_max,pDVar6->open_wait);
          pNVar9->npos[0] = (float)(int)(short)uVar4;
        }
        sVar5 = pNVar9->count + -1;
        pNVar9->count = sVar5;
        if (sVar5 == 0) {
          pNVar9->stts = '\x01';
        }
        break;
      case '\a':
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          fVar11 = pNVar9->nrot + pNVar9->inert;
          pNVar9->nrot = fVar11;
          if (fVar11 < 0.0) {
            pNVar9->inert = 0.0;
            pNVar9->stts = '\x01';
            pNVar9->nrot = 0.0;
            pNVar9->count = 0;
          }
        }
        else {
          fVar11 = pNVar9->npos[0] + pNVar9->inert;
          pNVar9->npos[0] = fVar11;
          if (fVar11 < 0.0) {
            pNVar9->inert = 0.0;
            pNVar9->stts = '\x01';
            pNVar9->npos[0] = 0.0;
            pNVar9->count = 0;
          }
        }
        break;
      case '\b':
        pDVar6 = GetDoorTypeDatP((uint)(ushort)pNVar9->type);
        iVar10 = IsFusumaType(*(uchar *)&pNVar9->type);
        if (iVar10 == 0) {
          fVar11 = pNVar9->nrot + pNVar9->inert;
          pNVar9->nrot = fVar11;
          uVar4 = pDVar6->move_max;
          if ((short)uVar4 < 0) {
            bVar3 = fVar11 < ((float)(int)(short)uVar4 * DAT_00355dd4) / 180.0;
LAB_001c0b54:
            if (!bVar3) break;
          }
          else if (fVar11 <= ((float)(int)(short)uVar4 * DAT_00355dd0) / 180.0) break;
LAB_001c0b5c:
          pNVar9->count = 0;
          pNVar9->stts = '\x05';
          pNVar9->inert = 0.0;
        }
        else {
          fVar11 = pNVar9->npos[0] + pNVar9->inert;
          pNVar9->npos[0] = fVar11;
          uVar4 = pDVar6->move_max;
          if ((short)uVar4 < 0) {
            bVar3 = fVar11 < (float)(int)(short)uVar4;
            goto LAB_001c0b54;
          }
          if ((float)(int)(short)uVar4 < fVar11) goto LAB_001c0b5c;
        }
      }
      pDVar8 = door_wrk;
      iVar10 = 0x13;
      do {
        if ((pDVar8->door_id == pNVar9->door_id) && (pDVar8->stts != '\0')) {
          iVar7 = IsFusumaType(*(uchar *)&pNVar9->type);
          fVar11 = DAT_00355de4;
          if (iVar7 == 0) {
            bVar1 = pDVar8->fwrk_no;
            fVar12 = pDVar8->rot + pNVar9->nrot;
            pDVar8->nrot = fVar12;
            furn_wrk[bVar1].rotate[0] = 0.0;
            furn_wrk[bVar1].rot = fVar12 + fVar11;
            RotLimitChk(&furn_wrk[bVar1].rot);
            bVar1 = pDVar8->fwrk_no;
            furn_wrk[bVar1].rotate[1] = furn_wrk[bVar1].rot;
            furn_wrk[bVar1].rotate[2] = 0.0;
          }
          else {
            fVar11 = SgCosf(pDVar8->rot);
            pDVar8->npos[0] = pDVar8->pos[0] + pNVar9->npos[0] * fVar11;
            fVar11 = SgSinf(pDVar8->rot);
            bVar1 = pDVar8->fwrk_no;
            fVar11 = pDVar8->pos[2] - pNVar9->npos[0] * fVar11;
            furn_wrk[bVar1].pos[0] = pDVar8->npos[0];
            furn_wrk[bVar1].pos[2] = fVar11;
            pDVar8->npos[2] = fVar11;
          }
          pDVar8->stts = pNVar9->stts;
        }
        iVar10 = iVar10 + -1;
        pDVar8 = pDVar8 + 1;
      } while (-1 < iVar10);
      iVar10 = 0x14;
    }
    pNVar9 = pNVar9 + 1;
    iVar10 = iVar10 + 1;
    if (0x31 < iVar10) {
      return;
    }
  } while( true );
}

static float DoorOpenCtrlRot(float count, float move_max, float open_wait) {
  return (count * move_max * DAT_00355de8) / (open_wait * 180.0);
}

static short int DoorOpenCtrlSlide(u_short count, short int move_max, u_short open_wait) {
  if (((int)open_wait & 0xffffU) == 0) {
    trap(7);
  }
  return (ushort)((int)(((int)count & 0xffffU) * (int)(short)move_max) /
                 (int)((int)open_wait & 0xffffU));
}

void DoorOpenCheckMain() {
  if (door_open_ctrl.chk_flg != '\0') {
    DoorOpenJudge();
    DoorCheckOff();
  }
  return;
}

void DoorCheckOn(u_char mode) {
  uchar uVar1;
  int iVar2;
  
  if (ev_wrk.btl_lock != 0) {
    iVar2 = LockBattleAfterJudge();
    if (iVar2 == 0) {
      uVar1 = DoorOpenCheck('\0');
      if (uVar1 != '\0') {
        LockBattleDoorOpen();
        return;
      }
    }
    else {
      uVar1 = DoorOpenCheck('\x02');
      if (uVar1 != '\0') {
        LockBattleDoorOpen();
        return;
      }
    }
  }
  if (mode != '\0') {
    plyr_wrk.sta = plyr_wrk.sta | 8;
  }
  door_open_ctrl.chk_flg = '\x01';
  return;
}

void DoorCheckOff() {
  door_open_ctrl.chk_flg = '\0';
  return;
}

static void SetDoorOpenPlyrPos() {
  _DAT_00252e60 = door_wrk[doj_square_mtn.dojs[0].dwrk_no].door_id;
  return;
}

u_char DoorOpenJudge() {
	u_short door_id[2];
	u_char sq_no;
	
  uchar uVar1;
  uchar unaff_s2_lo;
  short door_id [2];
  
  plyr_wrk.sta = plyr_wrk.sta & 0xfffffff7;
  if ((ev_wrk.mode == 0) && (uVar1 = DoorOpenCheck('\x01'), uVar1 != '\0')) {
    AreaReadCheck();
    InitDoorOpenCtrl();
    plyr_wrk.sta = plyr_wrk.sta | 8;
    door_open_ctrl.stts = door_open_ctrl.stts | 1;
    SetDoorOpenPlyrPos();
    AllCloseConnectDoor();
    DoorCheckOff();
    if (ev_wrk.btl_lock != 0) {
      ev_wrk.btl_lock = 0;
    }
  }
  else {
    unaff_s2_lo = '\0';
  }
  return unaff_s2_lo;
}

void SetDoorOpenCameraNo() {
	int i;
	u_short door_id[2];
	
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  DOJ_SQUARE_MTN *pDVar5;
  short door_id [2];
  
  psVar3 = door_id;
  pDVar5 = &doj_square_mtn;
  iVar4 = 1;
  do {
    iVar1 = pDVar5->dojs[0].dwrk_no;
    if (iVar1 == -1) {
      *psVar3 = -1;
    }
    else {
      *psVar3 = door_wrk[iVar1].door_id;
    }
    psVar3 = psVar3 + 1;
    iVar4 = iVar4 + -1;
    pDVar5 = (DOJ_SQUARE_MTN *)(pDVar5->dojs + 1);
  } while (-1 < iVar4);
  sVar2 = CameraGetDoorCameraNo(door_id[0],door_id[1]);
  if ((long)sVar2 != 0xffff) {
    plyr_wrk.se_deadly._0_2_ = door_id[0];
    plyr_wrk.se_deadly._2_1_ = plyr_wrk.dop._13_1_;
    plyr_wrk.dop.dov[3]._0_2_ = sVar2;
    if (door_id[0] == -1) {
      plyr_wrk.se_deadly._0_2_ = door_id[1];
    }
  }
  return;
}

int AreaReadCheck() {
	u_char *addr_uc;
	int i;
	int dwrk_no;
	u_char type;
	u_char dr_num;
	
  uchar uVar1;
  byte *pbVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int unaff_s1_lo;
  uchar unaff_s3_lo;
  
  area_read_wrk.rm_from = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  iVar5 = doj_square_mtn.dojs[0].dwrk_no;
  uVar1 = doj_square_mtn.dojs[0].type;
  if ((doj_square_mtn.dojs[0].type != 0xff) ||
     (iVar5 = doj_square_mtn.dojs[1].dwrk_no, uVar1 = doj_square_mtn.dojs[1].type,
     doj_square_mtn.dojs[1].type != 0xff)) {
    unaff_s3_lo = uVar1;
    unaff_s1_lo = iVar5;
  }
  pbVar2 = GetDoorRoomConectDataP(area_read_wrk.rm_from);
  if (*pbVar2 != 0) {
    iVar5 = 1;
    psVar4 = (short *)(pbVar2 + 2);
    if (*(short *)(pbVar2 + 2) == door_wrk[unaff_s1_lo].door_id) {
      area_read_wrk.rm_to = pbVar2[4];
    }
    else {
      do {
        psVar3 = psVar4;
        psVar4 = psVar3 + 2;
        if ((int)(uint)*pbVar2 <= iVar5) goto LAB_001c1370;
        iVar5 = iVar5 + 1;
      } while (*psVar4 != door_wrk[unaff_s1_lo].door_id);
      area_read_wrk.rm_to = *(uchar *)(psVar3 + 3);
    }
  }
LAB_001c1370:
  uVar1 = IsDoorLoad(unaff_s3_lo);
  if (uVar1 != '\0') {
    area_read_wrk.stat = '\x01';
    ingame_wrk.mode = 9;
  }
  return (uint)(uVar1 != '\0');
}

static u_char DoorOpenCheck(u_char chk_stat) {
	sceVu0FVECTOR dbase1;
	sceVu0FVECTOR dbase2;
	DOJ_SQUARE tmp;
	DOJ_SQUARE_MTN *dsmp;
	DOOR_TYPE_DAT *dtdp;
	int dwn[2];
	int exc_flg;
	float dbrot1;
	float dbrot2;
	float p_rot;
	u_char is_door;
	u_char is_dbl;
	u_char is_kuguri;
	int i;
	int j;
	u_char ret_flg;
	
  ushort uVar1;
  bool bVar2;
  bool is_door;
  bool bVar3;
  DOOR_TYPE_DAT *pDVar4;
  int iVar5;
  DOOR_TYPE_DAT *pDVar6;
  short *psVar7;
  uchar stat_chk;
  int iVar8;
  int iVar9;
  byte is_dbl;
  float fVar10;
  float dbase1 [4];
  float dbase2 [4];
  DOJ_SQUARE tmp;
  int dwn [2];
  float dbrot1;
  float dbrot2;
  
  is_dbl = 0;
  DoorInitDSM(&doj_square_mtn);
  if (chk_stat == '\x01') {
    stat_chk = '\x02';
LAB_001c1408:
    DoorOpenCheckSquareArea(&doj_square_mtn,stat_chk,'\0');
  }
  else {
    if (chk_stat == '\0') {
      stat_chk = '\x03';
      goto LAB_001c1408;
    }
    if (chk_stat == '\x02') {
      bVar2 = false;
      DoorOpenCheckSquareArea(&doj_square_mtn,'\0','\0');
      iVar9 = 0;
      iVar5 = 0;
      do {
        iVar9 = iVar9 + 1;
        if (doj_square_mtn.dojs[0].sq_no[iVar5 + -1] != 0xff) {
          iVar5 = *(int *)(doj_square_mtn.dojs[0].sq_no + iVar5 + -5);
          iVar8 = 0;
          psVar7 = lock_did;
          do {
            iVar8 = iVar8 + 1;
            if ((door_wrk[iVar5].use != '\x05') && (door_wrk[iVar5].door_id == *psVar7)) {
              bVar2 = true;
              break;
            }
            psVar7 = psVar7 + 1;
          } while (iVar8 < 0x14);
        }
        iVar5 = iVar9 * 8;
      } while (iVar9 < 2);
      if (!bVar2) {
        return '\0';
      }
    }
  }
  if (doj_square_mtn.dojs[0].type == 0xff) {
    return '\0';
  }
  pDVar4 = GetDoorTypeDatP((uint)doj_square_mtn.dojs[0].type);
  iVar5 = CheckRotDoorOpenStatus(doj_square_mtn.dojs[0].dwrk_no,doj_square_mtn.dojs[0].type);
  if (iVar5 == 0) {
    return '\0';
  }
  if (iVar5 < 1) {
    uVar1 = pDVar4->attribute;
  }
  else {
    if (iVar5 == 1) {
      iVar5 = JudgePlyrRotForRotDoor(doj_square_mtn.dojs[0].dwrk_no);
      if (iVar5 != 0) {
        doj_square_mtn.dwno_base = doj_square_mtn.dojs[0].dwrk_no;
        doj_square_mtn.mtn_no = '\x10';
        doj_square_mtn.exc_flg = '\0';
        doj_square_mtn.dbl_flg = '\0';
        doj_square_mtn.dor_flg = '\0';
        return '\x01';
      }
      return '\0';
    }
    uVar1 = pDVar4->attribute;
  }
  is_door = (uVar1 & 0x1000) == 0;
  bVar2 = (uVar1 & 0x400) != 0;
  if (((((doj_square_mtn.dojs[0].sq_no[0] == '\x04') || (doj_square_mtn.dojs[0].sq_no[0] == '\b'))
       || (doj_square_mtn.dojs[0].sq_no[1] == '\x04')) || (doj_square_mtn.dojs[0].sq_no[1] == '\b'))
     && ((((doj_square_mtn.dojs[1].sq_no[0] == '\x04' || (doj_square_mtn.dojs[1].sq_no[0] == '\b'))
          || ((doj_square_mtn.dojs[1].sq_no[1] == '\x04' ||
              (doj_square_mtn.dojs[1].sq_no[1] == '\b')))) &&
         (pDVar6 = GetDoorTypeDatP((uint)doj_square_mtn.dojs[1].type),
         (pDVar6->attribute & 0x100U) != 0)))) {
    is_dbl = *(byte *)((int)&pDVar4->attribute + 1) & 1;
  }
  iVar5 = GetDoorBaseRot(&doj_square_mtn,&dbrot1,&dbrot2,is_dbl,is_door);
  for (fVar10 = plyr_wrk.move_box.trot.w; fVar10 < 0.0;
      fVar10 = (float)((double)fVar10 + DAT_0034f6a0)) {
  }
  if (dbrot1 <= dbrot2) {
    if (dbrot2 - fVar10 < 0.0) {
      return '\0';
    }
    bVar3 = 0.0 <= fVar10 - dbrot1;
LAB_001c16ac:
    if (!bVar3) {
      return '\0';
    }
  }
  else if (dbrot2 <= fVar10) {
    bVar3 = dbrot1 < fVar10;
    goto LAB_001c16ac;
  }
  doj_square_mtn.exc_flg = (uchar)iVar5;
  doj_square_mtn.dbl_flg = is_dbl;
  doj_square_mtn.dor_flg = is_door;
  if (is_dbl != 0) {
    pDVar4 = GetDoorTypeDatP((uint)doj_square_mtn.dojs[iVar5].type);
    doj_square_mtn.dwno_base = doj_square_mtn.dojs[iVar5].dwrk_no;
    if (!is_door) {
      doj_square_mtn.dwno_base = doj_square_mtn.dojs[1].dwrk_no;
      if (iVar5 != 0) {
        doj_square_mtn.dwno_base = doj_square_mtn.dojs[0].dwrk_no;
      }
      doj_square_mtn.mtn_no = '\x0f';
      return '\x01';
    }
    if ((short)pDVar4->move_max < 1) {
      doj_square_mtn.mtn_no = '\n';
      return '\x01';
    }
    if (doj_square_mtn.dojs[0].sq_no[0] == '\x01') {
      doj_square_mtn.mtn_no = '\b';
      return '\x01';
    }
    if (doj_square_mtn.dojs[1].sq_no[0] != '\x01') {
      if (doj_square_mtn.dojs[0].sq_no[0] == '\x03') {
        doj_square_mtn.mtn_no = '\t';
        return '\x01';
      }
      if (doj_square_mtn.dojs[1].sq_no[0] != '\x03') {
        return '\x01';
      }
      doj_square_mtn.mtn_no = '\t';
      return '\x01';
    }
    doj_square_mtn.mtn_no = '\b';
    return '\x01';
  }
  doj_square_mtn.dwno_base = doj_square_mtn.dojs[0].dwrk_no;
  pDVar4 = GetDoorTypeDatP((uint)(ushort)door_wrk[doj_square_mtn.dojs[0].dwrk_no].type);
  if (is_door) {
    if ((short)pDVar4->move_max < 1) {
      if (!bVar2) {
        if (iVar5 == 0) {
          doj_square_mtn.mtn_no = '\x03';
          return '\x01';
        }
        switch(doj_square_mtn.dojs[0].sq_no[0]) {
        case '\x01':
        case '\x05':
          doj_square_mtn.mtn_no = '\x04';
          return '\x01';
        case '\x02':
        case '\x06':
          doj_square_mtn.mtn_no = '\x06';
          return '\x01';
        case '\x03':
        case '\a':
          doj_square_mtn.mtn_no = '\x05';
          return '\x01';
        default:
          return '\x01';
        }
      }
      if (iVar5 == 0) {
        doj_square_mtn.mtn_no = '\x11';
        return '\x01';
      }
      doj_square_mtn.mtn_no = '\x12';
      return '\x01';
    }
    if (bVar2) {
      if (iVar5 == 0) {
        doj_square_mtn.mtn_no = '\x12';
        return '\x01';
      }
      doj_square_mtn.mtn_no = '\x11';
      return '\x01';
    }
    if (iVar5 == 0) {
      switch(doj_square_mtn.dojs[0].sq_no[0]) {
      case '\x01':
      case '\x05':
        doj_square_mtn.mtn_no = '\0';
        return '\x01';
      case '\x02':
      case '\x06':
        doj_square_mtn.mtn_no = '\x02';
        return '\x01';
      case '\x03':
      case '\a':
        doj_square_mtn.mtn_no = '\x01';
        return '\x01';
      default:
        return '\x01';
      }
    }
    doj_square_mtn.mtn_no = '\a';
    return '\x01';
  }
  if (iVar5 == 0) {
    if (doj_square_mtn.dojs[0].sq_no[0] == '\x02') {
      doj_square_mtn.mtn_no = '\f';
      return '\x01';
    }
    if (doj_square_mtn.dojs[0].sq_no[0] < 3) {
      if (doj_square_mtn.dojs[0].sq_no[0] != '\x01') {
        return '\x01';
      }
    }
    else if (doj_square_mtn.dojs[0].sq_no[0] != '\x05') {
      if (doj_square_mtn.dojs[0].sq_no[0] == '\x06') {
        doj_square_mtn.mtn_no = '\f';
        return '\x01';
      }
      return '\x01';
    }
    doj_square_mtn.mtn_no = '\v';
    return '\x01';
  }
  if (doj_square_mtn.dojs[0].sq_no[0] == '\x02') {
LAB_001c189c:
    doj_square_mtn.mtn_no = '\x0e';
  }
  else {
    if (doj_square_mtn.dojs[0].sq_no[0] < 3) {
      if (doj_square_mtn.dojs[0].sq_no[0] != '\x01') {
        return '\x01';
      }
    }
    else if (doj_square_mtn.dojs[0].sq_no[0] != '\x05') {
      if (doj_square_mtn.dojs[0].sq_no[0] != '\x06') {
        return '\x01';
      }
      goto LAB_001c189c;
    }
    doj_square_mtn.mtn_no = '\r';
  }
  return '\x01';
}

static int GetDoorBaseRot(DOJ_SQUARE_MTN *dsmp, float *dbrot1, float *dbrot2, u_char is_dbl, u_char is_door) {
	sceVu0FVECTOR dbase1;
	sceVu0FVECTOR dbase2;
	int dwn[2];
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float dbase1 [4];
  float dbase2 [4];
  int dwn [2];
  
  iVar2 = dsmp->dojs[1].dwrk_no;
  iVar1 = dsmp->dojs[0].dwrk_no;
  if (is_door == '\0') {
    if (is_dbl == '\0') goto LAB_001c1a68;
    fVar3 = SgCosf(door_wrk[iVar1].rot);
    dbase1[0] = door_wrk[iVar1].pos[0] + fVar3 * 450.0;
    fVar3 = SgSinf(door_wrk[iVar1].rot);
    dbase1[2] = door_wrk[iVar1].pos[2] - fVar3 * 450.0;
    fVar3 = SgCosf(door_wrk[iVar2].rot);
    dbase2[0] = door_wrk[iVar2].pos[0] + fVar3 * 450.0;
    fVar3 = SgSinf(door_wrk[iVar2].rot);
  }
  else {
    if (is_dbl != '\0') {
      dbase1[2] = door_wrk[iVar1].pos[2];
      dbase2[2] = door_wrk[iVar2].pos[2];
      dbase1[0] = door_wrk[iVar1].pos[0];
      dbase2[0] = door_wrk[iVar2].pos[0];
      goto LAB_001c1ae8;
    }
LAB_001c1a68:
    dbase1[0] = door_wrk[iVar1].pos[0];
    dbase1[2] = door_wrk[iVar1].pos[2];
    fVar3 = SgCosf(door_wrk[iVar1].rot);
    dbase2[0] = door_wrk[iVar1].pos[0] + fVar3 * 450.0;
    fVar3 = SgSinf(door_wrk[iVar1].rot);
    iVar2 = iVar1;
  }
  dbase2[2] = door_wrk[iVar2].pos[2] - fVar3 * 450.0;
LAB_001c1ae8:
  area_wrk._1296_4_ = (dbase1[0] + dbase2[0]) - plyr_wrk.move_box.spd.z;
  area_wrk._1304_4_ = (dbase1[2] + dbase2[2]) - plyr_wrk.move_box.rot.x;
  area_wrk.room._0_4_ = plyr_wrk.move_box.spd.w;
  area_wrk._1308_4_ = 0x3f800000;
  fVar3 = SgAtan2f(dbase1[0] - plyr_wrk.move_box.spd.z,dbase1[2] - plyr_wrk.move_box.rot.x);
  *dbrot1 = fVar3;
  fVar3 = SgAtan2f(dbase2[0] - plyr_wrk.move_box.spd.z,dbase2[2] - plyr_wrk.move_box.rot.x);
  *dbrot2 = fVar3;
  fVar3 = *dbrot1;
  if (fVar3 < 0.0) {
    do {
      fVar3 = (float)((double)fVar3 + DAT_0034f6f0);
      *dbrot1 = fVar3;
    } while (fVar3 < 0.0);
    fVar3 = *dbrot2;
  }
  else {
    fVar3 = *dbrot2;
  }
  while (fVar3 < 0.0) {
    fVar3 = (float)((double)fVar3 + DAT_0034f6f8);
    *dbrot2 = fVar3;
  }
  fVar4 = *dbrot1;
  if (fVar3 - fVar4 <= DAT_00355dec) {
    if (fVar4 - fVar3 <= 0.0) {
      return 0;
    }
    if (DAT_00355dec <= fVar4 - fVar3) {
      return 0;
    }
    *dbrot1 = fVar3;
  }
  else {
    *dbrot1 = fVar3;
  }
  *dbrot2 = fVar4;
  return 1;
}

static void DoorOpenCheckSquareArea(DOJ_SQUARE_MTN *dsmp, u_char stat_chk, u_char hs_chk) {
	int *ddp;
	int *dhp;
	int *dsp;
	u_char *rdp;
	u_char *stp;
	int i;
	int j;
	int dwrk_pos;
	u_short pos_x;
	u_short pos_y;
	u_char dr_num;
	u_char ds_num;
	
  byte bVar1;
  bool bVar2;
  uchar uVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  uchar *puVar8;
  int dwrk_pos;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short pos_x;
  short pos_y;
  uchar dr_num;
  
  iVar13 = (int)plyr_wrk.move_box.spd.z;
  iVar12 = (int)plyr_wrk.move_box.rot.x;
  uVar3 = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  pbVar4 = GetDoorRoomConectDataP(uVar3);
  iVar11 = 0;
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    psVar7 = (short *)(pbVar4 + 2);
    if (bVar1 != 0) {
      do {
        piVar5 = GetDoorDataTopP(*psVar7);
        if (piVar5 == (int *)0x0) {
          return;
        }
        if (door_wrk[0].door_id == *psVar7) {
          dwrk_pos = 0;
          bVar2 = true;
LAB_001c1da4:
          if ((bVar2) && (uVar3 = DoorOpenSttsPermissionCheck(dwrk_pos,stat_chk), uVar3 != '\0')) {
            iVar6 = *piVar5;
            uVar10 = (uint)*(byte *)(*(int *)(iVar6 + 0x7f8000) + 0x7f8010);
            puVar8 = (uchar *)(*(int *)(iVar6 + 0x7f8000) + 0x7f8011);
            uVar9 = 0;
            if (hs_chk == '\0') {
              do {
                puVar8 = puVar8 + 1;
                uVar9 = uVar9 - 1;
              } while (-1 < (int)uVar9);
              uVar9 = 1;
            }
            if (uVar9 < uVar10) {
              while( true ) {
                uVar3 = PosInAreaJudgeSub((int *)(*(int *)(uVar9 * 4 + iVar6 + 0x7f8004) + 0x7f8000)
                                          ,(short)iVar12,(short)iVar13,*puVar8);
                if (uVar3 != '\0') {
                  DoorSetDSM(dsmp,dwrk_pos,*(uchar *)&door_wrk[dwrk_pos].type,(uchar)uVar9);
                }
                uVar9 = uVar9 + 1;
                puVar8 = puVar8 + 1;
                if ((int)uVar10 <= (int)uVar9) break;
                iVar6 = *piVar5;
              }
            }
          }
        }
        else {
          for (dwrk_pos = 1; bVar2 = dwrk_pos < 0x14, bVar2; dwrk_pos = dwrk_pos + 1) {
            if (door_wrk[dwrk_pos].door_id == *psVar7) goto LAB_001c1da4;
          }
        }
        iVar11 = iVar11 + 1;
        psVar7 = psVar7 + 2;
      } while (iVar11 < (int)(uint)bVar1);
    }
  }
  return;
}

static u_char DoorOpenSttsPermissionCheck(int dwrk_pos, u_char stat_chk) {
  uint uVar1;
  
  if (stat_chk == '\x01') {
    if (door_wrk[dwrk_pos].lock != '\0') {
      return '\0';
    }
    uVar1 = (uint)(ushort)door_wrk[dwrk_pos].door_id;
  }
  else {
    if (stat_chk < 2) {
      if (stat_chk == '\0') {
        return '\x01';
      }
      return '\0';
    }
    if (stat_chk == '\x02') {
      if (door_wrk[dwrk_pos].lock != '\0') {
        return '\0';
      }
      if (door_wrk[dwrk_pos].stts != '\x01') {
        return '\0';
      }
      uVar1 = (uint)(ushort)door_wrk[dwrk_pos].door_id;
    }
    else {
      if (stat_chk != '\x03') {
        return '\0';
      }
      if (door_wrk[dwrk_pos].stts != '\x01') {
        return '\0';
      }
      uVar1 = (uint)(ushort)door_wrk[dwrk_pos].door_id;
    }
  }
  if (((door_keep[uVar1].attr & 0x8000U) != 0) && ((door_keep[uVar1].attr & 1U) == 0)) {
    return '\0';
  }
  return '\x01';
}

static void DoorInitDSM(DOJ_SQUARE_MTN *dsmp) {
  dsmp->mtn_no = 0xff;
  dsmp->dojs[1].dwrk_no = -1;
  dsmp->dojs[0].type = 0xff;
  dsmp->dojs[0].dwrk_no = -1;
  dsmp->dojs[0].sq_no[0] = 0xff;
  dsmp->dojs[0].sq_no[1] = 0xff;
  dsmp->dojs[1].type = 0xff;
  dsmp->dojs[1].sq_no[0] = 0xff;
  dsmp->dojs[1].sq_no[1] = 0xff;
  return;
}

static void DoorSetDSM(DOJ_SQUARE_MTN *dsmp, int dwrk_no, u_char type, u_char sq_no) {
  uchar uVar1;
  
  if (dsmp != (DOJ_SQUARE_MTN *)0x0) {
    if (dsmp->dojs[0].type == 0xff) {
      dsmp->dojs[0].sq_no[0] = sq_no;
      dsmp->dojs[0].type = type;
      dsmp->dojs[0].dwrk_no = dwrk_no;
      return;
    }
    if (dsmp->dojs[0].sq_no[1] == 0xff) {
      if (dsmp->dojs[0].dwrk_no == dwrk_no) {
        dsmp->dojs[0].sq_no[1] = sq_no;
        return;
      }
      uVar1 = dsmp->dojs[1].type;
    }
    else {
      uVar1 = dsmp->dojs[1].type;
    }
    if (uVar1 == 0xff) {
      if (dsmp->dojs[0].dwrk_no != dwrk_no) {
        dsmp->dojs[1].sq_no[0] = sq_no;
        dsmp->dojs[1].type = type;
        dsmp->dojs[1].dwrk_no = dwrk_no;
        return;
      }
      uVar1 = dsmp->dojs[1].sq_no[1];
    }
    else {
      uVar1 = dsmp->dojs[1].sq_no[1];
    }
    if ((uVar1 == 0xff) && (dsmp->dojs[1].dwrk_no == dwrk_no)) {
      dsmp->dojs[1].sq_no[1] = sq_no;
    }
  }
  return;
}

static u_char DoorGetOpenSquareNo(DOJ_SQUARE_MTN *dsmp) {
  if ((dsmp == (DOJ_SQUARE_MTN *)0x0) || (dsmp->dojs[0].type == 0xff)) {
    return '\0';
  }
  if (dsmp->dojs[1].type != 0xff) {
    return dsmp->dojs[0].sq_no[0];
  }
  if (dsmp->dojs[0].sq_no[1] == 0xff) {
    return dsmp->dojs[0].sq_no[0];
  }
  return dsmp->dojs[0].sq_no[1];
}

int DoorKeyLock(u_short door_id) {
  int iVar1;
  
  iVar1 = DoorLockChange(door_id,'\x01');
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DoorSttsChange(door_id,'\x01');
  }
  return iVar1;
}

int DoorKeyLockOnly(u_short door_id) {
  int iVar1;
  
  iVar1 = DoorLockChange(door_id,'\x01');
  return iVar1;
}

int DoorKeyUnlock(u_short door_id) {
  int iVar1;
  
  iVar1 = DoorLockChange(door_id,'\0');
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DoorSttsChange(door_id,'\x01');
  }
  return iVar1;
}

int DoorKeyUnlockOnly(u_short door_id) {
  int iVar1;
  
  iVar1 = DoorLockChange(door_id,'\0');
  return iVar1;
}

static int DoorLockChange(u_short door_id, u_char lock) {
	int i;
	
  DOOR_WRK *pDVar1;
  DOOR_WRK *pDVar2;
  int iVar3;
  uint door_id_00;
  
  door_id_00 = (int)door_id & 0xffff;
  if (lock < 2) {
    pDVar2 = door_wrk;
    if ((ushort)door_wrk[0].door_id != door_id_00) {
      iVar3 = 1;
      do {
        if (0x13 < iVar3) goto LAB_001c21f4;
        pDVar2 = door_wrk + iVar3;
        pDVar1 = door_wrk + iVar3;
        iVar3 = iVar3 + 1;
      } while ((ushort)pDVar1->door_id != door_id_00);
    }
    pDVar2->lock = lock;
LAB_001c21f4:
    SetDoorLockEve(door_id_00,lock);
    DoorPassSetSttsMap((short)door_id_00);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

int DoorSttsChange(u_short door_id, u_char stts) {
	int i;
	int dwrk_no;
	
  bool bVar1;
  short *psVar2;
  AUTO_CLOSE_DOOR_WRK *pAVar3;
  uchar *puVar4;
  int dwrk_pos;
  int iVar5;
  uint door_id_00;
  
  door_id_00 = (int)door_id & 0xffff;
  if (9 < stts) {
    return 0;
  }
  SetDoorSttsEve(door_id_00,stts);
  if ((ushort)door_wrk[0].door_id == door_id_00) {
    dwrk_pos = 0;
    bVar1 = true;
    door_wrk[0].stts = stts;
  }
  else {
    dwrk_pos = 1;
    while( true ) {
      bVar1 = dwrk_pos < 0x14;
      if (!bVar1) {
        return 1;
      }
      if ((ushort)door_wrk[dwrk_pos].door_id == door_id_00) break;
      dwrk_pos = dwrk_pos + 1;
    }
    door_wrk[dwrk_pos].stts = stts;
  }
  if (!bVar1) {
    return 1;
  }
  iVar5 = 0;
  psVar2 = &nc_door_wrk[0].door_id;
  do {
    if ((ushort)*psVar2 == door_id_00) {
      SetNcDwrk(iVar5,dwrk_pos,stts);
      return 1;
    }
    iVar5 = iVar5 + 1;
    psVar2 = psVar2 + 0x20;
  } while (iVar5 < 0x32);
  iVar5 = 0;
  pAVar3 = ac_door_wrk;
  do {
    if ((pAVar3->stts != '\0') && ((ushort)pAVar3->door_id == door_id_00)) goto LAB_001c233c;
    iVar5 = iVar5 + 1;
    pAVar3 = pAVar3 + 1;
  } while (iVar5 < 10);
  iVar5 = 0;
  puVar4 = &ac_door_wrk[0].stts;
  while (*puVar4 != '\0') {
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x40;
    if (9 < iVar5) {
      return 0;
    }
  }
LAB_001c233c:
  SetAcDwrk(iVar5,dwrk_pos,stts);
  return 1;
}

u_char DoorHitCheck(u_char *dx_max, u_char *dz_max, float *dst, float *ppos, u_char div) {
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	sceVu0FVECTOR v2;
	sceVu0FVECTOR v3;
	sceVu0FVECTOR pos;
	DOOR_TYPE_DAT *dtdp;
	int *ddp;
	int *dhp;
	int *dsp;
	u_char *rdp;
	u_char *stp;
	int i;
	int j;
	int k;
	float mv_x;
	float mv_z;
	float sa;
	float sb;
	float p_rot;
	u_char div_x;
	u_char div_z;
	u_char dr_num;
	u_short dr_type;
	
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  float fVar5;
  uchar uVar6;
  DOOR_TYPE_DAT *pDVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uchar *puVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float sb;
  float v0 [4];
  float v1 [4];
  float v2 [4];
  float v3 [4];
  float pos [4];
  DOOR_TYPE_DAT *dtdp;
  uchar *rdp;
  int i;
  uchar dr_num;
  
  uVar13 = (int)(char)div & 0xff;
  pDVar7 = GetDoorTypeDatP(0);
  uVar20 = (uint)*dz_max;
  uVar19 = (uint)*dx_max;
  uVar6 = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  pbVar8 = GetDoorRoomConectDataP(uVar6);
  fVar5 = DAT_00355df0;
  if (pbVar8 != (byte *)0x0) {
    bVar1 = *pbVar8;
    rdp = pbVar8 + 2;
    i = 0;
    if (bVar1 != 0) {
      do {
        iVar17 = 0;
        do {
          lVar15 = (long)(int)(door_wrk + iVar17);
          if (door_wrk[iVar17].door_id == *(short *)rdp) {
            piVar9 = GetDoorDataTopP(*(short *)rdp);
            if (piVar9 == (int *)0x0) {
              return 0xff;
            }
            bVar2 = door_wrk[iVar17].stts;
            if (bVar2 == 1) {
              puVar18 = (uchar *)(*(int *)(*piVar9 + 0x7f8000) + 0x7f8011);
              piVar9 = (int *)(*(int *)(*piVar9 + 0x7f8004) + 0x7f8000);
              if (uVar19 != 0) {
                uVar14 = 0;
                uVar16 = 1;
                do {
                  uVar6 = PosInAreaJudgeSub(piVar9,(short)(int)plyr_wrk.move_box.rot.x,
                                            (short)(int)(plyr_wrk.move_box.spd.z +
                                                        (*dst * (float)uVar16) / (float)uVar13),
                                            *puVar18);
                  bVar4 = (int)uVar16 < (int)uVar19;
                  if (uVar6 != '\0') {
                    uVar19 = uVar14 & 0xff;
                    break;
                  }
                  uVar14 = uVar16;
                  uVar16 = uVar16 + 1;
                } while (bVar4);
              }
              fVar21 = (float)uVar13;
              if (uVar20 == 0) {
                fVar22 = (float)uVar19;
              }
              else {
                fVar22 = (float)uVar19;
                uVar14 = 0;
                uVar16 = 1;
                do {
                  uVar6 = PosInAreaJudgeSub(piVar9,(short)(int)(plyr_wrk.move_box.rot.x +
                                                               (dst[2] * (float)uVar16) / fVar21),
                                            (short)(int)plyr_wrk.move_box.spd.z,*puVar18);
                  bVar4 = (int)uVar16 < (int)uVar20;
                  if (uVar6 != '\0') {
                    uVar20 = uVar14 & 0xff;
                    break;
                  }
                  uVar14 = uVar16;
                  uVar16 = uVar16 + 1;
                } while (bVar4);
              }
              uVar6 = PosInAreaJudgeSub(piVar9,(short)(int)(plyr_wrk.move_box.rot.x +
                                                           (dst[2] * (float)uVar20) / fVar21),
                                        (short)(int)(plyr_wrk.move_box.spd.z +
                                                    (*dst * fVar22) / fVar21),*puVar18);
              if (uVar6 != '\0') {
                uVar19 = 0;
                uVar20 = 0;
              }
            }
            else if (((bVar2 != 0) && (bVar2 < 6)) && (3 < bVar2)) {
              uVar3 = door_wrk[iVar17].type;
              if ((pDVar7[uVar3].attribute & 0x1000U) == 0) {
                lVar12 = (long)(int)v0;
                GetDoorHitVertex(door_wrk[iVar17].pos,v0,v1,v2,v3,door_wrk[iVar17].rot,
                                 pDVar7[uVar3].open_wait,uVar3);
                if (uVar19 != 0) {
                  uVar14 = 0;
                  uVar16 = 1;
                  do {
                    iVar10 = ChkInsideBox(plyr_wrk.move_box.spd.z +
                                          (*dst * (float)uVar16) / (float)uVar13,
                                          plyr_wrk.move_box.rot.x,v0[0],v0[2],v1[0],v1[2],v2[0],
                                          v2[2],(float)lVar15,(float)lVar12,v3[0],v3[2]);
                    bVar4 = (int)uVar16 < (int)uVar19;
                    if (iVar10 != 0) {
                      uVar19 = uVar14 & 0xff;
                      break;
                    }
                    uVar14 = uVar16;
                    uVar16 = uVar16 + 1;
                  } while (bVar4);
                }
                if (uVar20 != 0) {
                  uVar14 = 0;
                  uVar16 = 1;
                  do {
                    iVar10 = ChkInsideBox(plyr_wrk.move_box.spd.z,
                                          plyr_wrk.move_box.rot.x +
                                          (dst[2] * (float)uVar16) / (float)uVar13,v0[0],v0[2],v1[0]
                                          ,v1[2],v2[0],v2[2],(float)lVar15,(float)lVar12,v3[0],v3[2]
                                         );
                    bVar4 = (int)uVar16 < (int)uVar20;
                    if (iVar10 != 0) {
                      uVar20 = uVar14 & 0xff;
                      break;
                    }
                    uVar14 = uVar16;
                    uVar16 = uVar16 + 1;
                  } while (bVar4);
                }
                fVar23 = plyr_wrk.move_box.spd.z - door_wrk[iVar17].pos[0];
                fVar22 = plyr_wrk.move_box.rot.x - door_wrk[iVar17].pos[2];
                fVar21 = GetDist(fVar22,fVar23);
                if (fVar21 <= DAT_00355df4) {
                  uVar3 = pDVar7[uVar3].move_max;
                  if ((short)uVar3 < 0) {
                    fVar21 = door_wrk[iVar17].rot;
                    sb = fVar21 + ((float)(int)(short)uVar3 * fVar5) / 180.0;
                  }
                  else {
                    sb = door_wrk[iVar17].rot;
                    fVar21 = sb + ((float)(int)(short)uVar3 * fVar5) / 180.0;
                  }
                  fVar23 = SgAtanf(fVar23 / fVar22);
                  if (fVar22 < 0.0) {
                    fVar23 = fVar23 + fVar5;
                  }
                  iVar10 = ChkRotBetween(fVar21,sb,fVar23 - DAT_00355df8);
                  if (iVar10 != 0) {
                    iVar10 = 0;
                    if (ac_door_wrk[0].door_id == door_wrk[iVar17].door_id) {
                      bVar4 = true;
LAB_001c2908:
                      if (bVar4) {
                        ac_door_wrk[iVar10].count = 0;
                      }
                    }
                    else {
                      psVar11 = &ac_door_wrk[0].door_id;
                      iVar10 = 1;
                      while( true ) {
                        bVar4 = iVar10 < 10;
                        psVar11 = psVar11 + 0x20;
                        if (!bVar4) break;
                        if (*psVar11 == door_wrk[iVar17].door_id) goto LAB_001c2908;
                        iVar10 = iVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0x14);
        i = i + 1;
        rdp = rdp + 4;
      } while (i < (int)(uint)bVar1);
    }
    if ((*dx_max != uVar19) || (*dz_max != uVar20)) {
      *dx_max = (uchar)uVar19;
      *dz_max = (uchar)uVar20;
      return '\x01';
    }
  }
  return '\0';
}

u_char DoorHitCheck2(u_short pos_x, u_short pos_y, u_char room_id) {
	DOOR_TYPE_DAT *dtdp;
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	sceVu0FVECTOR v2;
	sceVu0FVECTOR v3;
	DOOR_WRK *dwp;
	int *ddp;
	int *dhp;
	int *dsp;
	u_char *rdp;
	int i;
	int j;
	u_char dr_num;
	
  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  int *piVar4;
  DOOR_TYPE_DAT *pDVar5;
  int iVar6;
  DOOR_WRK *pDVar7;
  float *pfVar8;
  DOOR_WRK *axis;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float cpx;
  float v0 [4];
  float v1 [4];
  float v2 [4];
  float v3 [4];
  int i;
  uchar dr_num;
  
  uVar11 = (int)pos_x & 0xffff;
  uVar10 = (int)pos_y & 0xffff;
  pbVar3 = GetDoorRoomConectDataP(room_id);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    i = 0;
    psVar9 = (short *)(pbVar3 + 2);
    if (bVar1 != 0) {
      do {
        iVar12 = 0;
        axis = door_wrk;
        do {
          if (axis->door_id != *psVar9) goto LAB_001c2c90;
          piVar4 = GetDoorDataTopP(*psVar9);
          if (piVar4 == (int *)0x0) {
            return '\0';
          }
          switch(axis->stts) {
          case '\x01':
            uVar2 = PosInAreaJudgeSub((int *)(*(int *)(*piVar4 + 0x7f8004) + 0x7f8000),(short)uVar11
                                      ,(short)uVar10,
                                      *(uchar *)(*(int *)(*piVar4 + 0x7f8000) + 0x7f8011));
            if (uVar2 != '\0') {
              return '\x01';
            }
            break;
          case '\x03':
          case '\x06':
          case '\a':
          case '\b':
            pDVar5 = GetDoorTypeDatP((uint)(ushort)axis->type);
            iVar6 = IsFusumaType(*(uchar *)&axis->type);
            if (iVar6 == 0) {
              pfVar8 = v0;
              pDVar7 = axis;
              GetDoorHitVertex2(axis->pos,pfVar8,v1,v2,v3,axis->nrot,pDVar5->open_wait,axis->type,
                                '\x01');
            }
            else {
              pDVar7 = (DOOR_WRK *)axis->npos;
              pfVar8 = v0;
              GetFusumaHitVertex2((float *)pDVar7,pfVar8,v1,v2,v3,axis->nrot,pDVar5->open_wait,
                                  axis->type,'\x01');
            }
            cpx = (float)uVar10;
            iVar6 = ChkInsideBox(cpx,(float)uVar11,v0[0],v0[2],v1[0],v1[2],v2[0],v2[2],(float)pDVar7
                                 ,(float)pfVar8,v3[0],v3[2]);
            if (iVar6 != 0) {
              return '\x01';
            }
            goto LAB_001c2be4;
          case '\x04':
          case '\x05':
            cpx = (float)uVar10;
LAB_001c2be4:
            pDVar5 = GetDoorTypeDatP((uint)(ushort)axis->type);
            iVar6 = IsFusumaType(*(uchar *)&axis->type);
            if (iVar6 == 0) {
              pfVar8 = v0;
              pDVar7 = axis;
              GetDoorHitVertex2(axis->pos,pfVar8,v1,v2,v3,axis->nrot,pDVar5->open_wait,axis->type,
                                '\0');
            }
            else {
              pDVar7 = (DOOR_WRK *)axis->npos;
              pfVar8 = v0;
              GetFusumaHitVertex2((float *)pDVar7,pfVar8,v1,v2,v3,axis->nrot,pDVar5->open_wait,
                                  axis->type,'\0');
            }
            iVar6 = ChkInsideBox(cpx,(float)uVar11,v0[0],v0[2],v1[0],v1[2],v2[0],v2[2],(float)pDVar7
                                 ,(float)pfVar8,v3[0],v3[2]);
            if (iVar6 != 0) {
              return '\x01';
            }
          }
LAB_001c2c90:
          iVar12 = iVar12 + 1;
          axis = axis + 1;
        } while (iVar12 < 0x14);
        psVar9 = psVar9 + 2;
        i = i + 1;
      } while (i < (int)(uint)bVar1);
    }
  }
  return '\0';
}

u_char DoorCoverCheck(u_short pos_x, short int pos_y, u_short pos_z, u_char room_id) {
	DOOR_TYPE_DAT *dtdp;
	int *dsp;
	int *ddp;
	int *dhp;
	u_char *rdp;
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	sceVu0FVECTOR v2;
	sceVu0FVECTOR v3;
	int i;
	int j;
	int k;
	u_short count;
	u_char dr_num;
	u_char dr_type;
	u_char hit_flg;
	
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  DOOR_TYPE_DAT *pDVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  DOOR_TYPE_DAT *pDVar12;
  DOOR_WRK *axis;
  float *v0_00;
  short count;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float y0;
  float x0;
  float y1;
  float x1;
  float y2;
  float x2;
  float v0 [4];
  float v1 [4];
  float v2 [4];
  float v3 [4];
  DOOR_TYPE_DAT *dtdp;
  uchar dr_num;
  
  uVar15 = (int)pos_x & 0xffff;
  uVar14 = (int)pos_z & 0xffff;
  pDVar8 = GetDoorTypeDatP(0);
  pbVar9 = GetDoorRoomConectDataP(room_id);
  if (pbVar9 != (byte *)0x0) {
    bVar1 = *pbVar9;
    iVar17 = 0;
    psVar13 = (short *)(pbVar9 + 2);
    if (bVar1 != 0) {
      do {
        iVar16 = 0;
        do {
          bVar4 = false;
          if (door_wrk[iVar16].door_id == *psVar13) {
            piVar10 = GetDoorDataTopP(*psVar13);
            if (piVar10 == (int *)0x0) {
              return 0xff;
            }
            switch(door_wrk[iVar16].stts) {
            case '\x01':
              uVar7 = PosInAreaJudgeSub((int *)(*(int *)(*piVar10 + 0x7f8004) + 0x7f8000),
                                        (short)uVar14,(short)uVar15,
                                        *(uchar *)(*(int *)(*piVar10 + 0x7f8000) + 0x7f8011));
              bVar4 = uVar7 != '\0';
              break;
            case '\x03':
            case '\x06':
              bVar2 = *(byte *)&door_wrk[iVar16].type;
              if (ac_door_wrk[0].door_id == door_wrk[iVar16].door_id) {
                bVar3 = true;
                count = ac_door_wrk[0].count;
LAB_001c2f14:
                if (!bVar3) goto LAB_001c2f1c;
LAB_001c2f84:
                uVar5 = uVar15;
                uVar6 = uVar14;
                if ((pDVar8[bVar2].attribute & 0x1000U) == 0) {
                  v0_00 = v0;
                  axis = door_wrk + iVar16;
                  GetDoorHitVertex(axis->pos,v0_00,v1,v2,v3,door_wrk[iVar16].rot,count,(ushort)bVar2
                                  );
                  fVar18 = v3[2];
                  fVar19 = v3[0];
                  y0 = v0[0];
                  x0 = v0[2];
                  y1 = v1[0];
                  x1 = v1[2];
                  y2 = v2[0];
                  x2 = v2[2];
                }
                else {
                  v0_00 = v0;
                  axis = door_wrk + iVar16;
                  GetFusumaHitVertex(axis->pos,v0_00,v1,v2,v3,door_wrk[iVar16].rot,count,
                                     (ushort)bVar2);
                  fVar18 = v3[2];
                  fVar19 = v3[0];
                  y0 = v0[0];
                  x0 = v0[2];
                  y1 = v1[0];
                  x1 = v1[2];
                  y2 = v2[0];
                  x2 = v2[2];
                }
                goto LAB_001c300c;
              }
              for (iVar11 = 1; bVar3 = iVar11 < 10, bVar3; iVar11 = iVar11 + 1) {
                if (ac_door_wrk[iVar11].door_id == door_wrk[iVar16].door_id) {
                  count = ac_door_wrk[iVar11].count;
                  goto LAB_001c2f14;
                }
              }
LAB_001c2f1c:
              if (nc_door_wrk[0].door_id == door_wrk[iVar16].door_id) {
                bVar3 = true;
                count = nc_door_wrk[0].count;
LAB_001c2f7c:
                if (bVar3) goto LAB_001c2f84;
              }
              else {
                for (iVar11 = 1; bVar3 = iVar11 < 0x32, bVar3; iVar11 = iVar11 + 1) {
                  if (nc_door_wrk[iVar11].door_id == door_wrk[iVar16].door_id) {
                    count = nc_door_wrk[iVar11].count;
                    goto LAB_001c2f7c;
                  }
                }
              }
              break;
            case '\x04':
              axis = door_wrk + iVar16;
              bVar2 = *(byte *)&door_wrk[iVar16].type;
              pDVar12 = pDVar8 + bVar2;
              v0_00 = v0;
              uVar5 = uVar14;
              uVar6 = uVar15;
              if ((pDVar12->attribute & 0x1000U) == 0) {
                GetDoorHitVertex(axis->pos,v0_00,v1,v2,v3,door_wrk[iVar16].rot,pDVar12->open_wait,
                                 (ushort)bVar2);
                fVar18 = v3[0];
                fVar19 = v3[2];
                y0 = v0[2];
                x0 = v0[0];
                y1 = v1[2];
                x1 = v1[0];
                y2 = v2[2];
                x2 = v2[0];
              }
              else {
                GetFusumaHitVertex(axis->pos,v0_00,v1,v2,v3,door_wrk[iVar16].rot,pDVar12->open_wait,
                                   (ushort)bVar2);
                fVar18 = v3[0];
                fVar19 = v3[2];
                y0 = v0[2];
                x0 = v0[0];
                y1 = v1[2];
                x1 = v1[0];
                y2 = v2[2];
                x2 = v2[0];
              }
LAB_001c300c:
              iVar11 = ChkInsideBox((float)uVar6,(float)uVar5,x0,y0,x1,y1,x2,y2,(float)axis,
                                    (float)v0_00,fVar18,fVar19);
              bVar4 = iVar11 != 0;
            }
            if (bVar4) {
              if ((door_wrk[iVar16].pos[1] - 900.0 <= (float)(int)(short)pos_y) &&
                 ((float)(int)(short)pos_y <= door_wrk[iVar16].pos[1])) {
                return '\x01';
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 0x14);
        iVar17 = iVar17 + 1;
        psVar13 = psVar13 + 2;
      } while (iVar17 < (int)(uint)bVar1);
    }
  }
  return '\0';
}

static void GetFusumaHitVertex(float *axis, float *v0, float *v1, float *v2, float *v3, float pre_rot, u_short count, u_short type) {
	sceVu0FVECTOR av0;
	sceVu0FVECTOR av1;
	sceVu0FVECTOR av2;
	sceVu0FVECTOR av3;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR add_sld;
	DOOR_TYPE_DAT *dtdp;
	int i;
	
  DOOR_TYPE_DAT *pDVar1;
  float *pfVar2;
  float *tv;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *tv_00;
  float *tv_01;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float av0 [4];
  float av1 [4];
  float av2 [4];
  float av3 [4];
  float rot [4];
  float add_sld [4];
  float *local_c0;
  
  pfVar4 = av0;
  pfVar2 = av0;
  pDVar1 = GetDoorTypeDatP((int)type & 0xffff);
  tv = av1;
  tv_00 = av2;
  tv_01 = av3;
  av3[0] = DAT_00355dfc;
  av1[0] = DAT_00355dfc;
  av1[2] = 175.0;
  av3[2] = -175.0;
  rot[1] = pre_rot;
  pfVar3 = add_sld;
  av0[0] = 0.0;
  av0[1] = 0.0;
  iVar7 = 2;
  av0[2] = 175.0;
  av1[1] = 0.0;
  av2[0] = 0.0;
  av2[1] = 0.0;
  av2[2] = -175.0;
  av3[1] = 0.0;
  rot[0] = 0.0;
  rot[2] = 0.0;
  add_sld[2] = 0.0;
  add_sld[1] = 0.0;
  if (pDVar1->open_wait == 0) {
    trap(7);
  }
  add_sld[0] = (float)((int)((int)(short)pDVar1->move_max * ((int)count & 0xffffU)) /
                      (int)(short)pDVar1->open_wait);
  pfVar5 = tv;
  pfVar6 = tv_00;
  pfVar8 = tv_01;
  local_c0 = axis;
  do {
    iVar7 = iVar7 + -1;
    *pfVar4 = *pfVar4 + *pfVar3;
    pfVar4 = pfVar4 + 1;
    *pfVar5 = *pfVar5 + *pfVar3;
    pfVar5 = pfVar5 + 1;
    *pfVar6 = *pfVar6 + *pfVar3;
    pfVar6 = pfVar6 + 1;
    fVar9 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    *pfVar8 = *pfVar8 + fVar9;
    pfVar8 = pfVar8 + 1;
  } while (-1 < iVar7);
  RotFvector(rot,av0);
  RotFvector(rot,tv);
  RotFvector(rot,tv_00);
  RotFvector(rot,tv_01);
  iVar7 = 2;
  do {
    fVar9 = *pfVar2;
    iVar7 = iVar7 + -1;
    pfVar2 = pfVar2 + 1;
    fVar11 = *tv;
    fVar10 = *tv_00;
    fVar12 = *tv_01;
    tv_00 = tv_00 + 1;
    tv_01 = tv_01 + 1;
    tv = tv + 1;
    *v0 = *local_c0 + fVar9;
    v0 = v0 + 1;
    *v1 = *local_c0 + fVar11;
    v1 = v1 + 1;
    *v2 = *local_c0 + fVar10;
    v2 = v2 + 1;
    fVar9 = *local_c0;
    local_c0 = local_c0 + 1;
    *v3 = fVar9 + fVar12;
    v3 = v3 + 1;
  } while (-1 < iVar7);
  return;
}

static void GetFusumaHitVertex2(float *axis, float *v0, float *v1, float *v2, float *v3, float pre_rot, u_short count, u_short type, u_char mv) {
	sceVu0FVECTOR av0;
	sceVu0FVECTOR av1;
	sceVu0FVECTOR av2;
	sceVu0FVECTOR av3;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR add_sld;
	int i;
	
  float *pfVar1;
  int iVar2;
  float *tv;
  float *tv_00;
  float *tv_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float av0 [4];
  float av1 [4];
  float av2 [4];
  float av3 [4];
  float rot [4];
  float add_sld [4];
  
  pfVar1 = av0;
  GetDoorTypeDatP((int)type & 0xffff);
  if (mv == '\0') {
    av0[2] = 175.0;
    av2[2] = -175.0;
    av1[2] = 175.0;
    av1[0] = DAT_00355e00;
  }
  else {
    av0[2] = 200.0;
    av2[2] = -200.0;
    av1[2] = 200.0;
    av1[0] = 600.0;
  }
  av2[0] = -50.0;
  av0[0] = -50.0;
  av0[1] = 0.0;
  av1[1] = 0.0;
  av2[1] = 0.0;
  av3[1] = 0.0;
  rot[0] = 0.0;
  rot[2] = 0.0;
  av3[0] = av1[0];
  av3[2] = av2[2];
  rot[1] = pre_rot;
  RotLimitChk(rot + 1);
  RotFvector(rot,av0);
  tv_01 = av1;
  RotFvector(rot,tv_01);
  tv_00 = av2;
  RotFvector(rot,tv_00);
  tv = av3;
  RotFvector(rot,tv);
  iVar2 = 2;
  do {
    fVar3 = *pfVar1;
    iVar2 = iVar2 + -1;
    pfVar1 = pfVar1 + 1;
    fVar5 = *tv_01;
    fVar4 = *tv_00;
    fVar6 = *tv;
    tv_00 = tv_00 + 1;
    tv = tv + 1;
    tv_01 = tv_01 + 1;
    *v0 = *axis + fVar3;
    v0 = v0 + 1;
    *v1 = *axis + fVar5;
    v1 = v1 + 1;
    *v2 = *axis + fVar4;
    v2 = v2 + 1;
    fVar3 = *axis;
    axis = axis + 1;
    *v3 = fVar3 + fVar6;
    v3 = v3 + 1;
  } while (-1 < iVar2);
  return;
}

static void GetDoorHitVertex(float *axis, float *v0, float *v1, float *v2, float *v3, float pre_rot, u_short count, u_short type) {
	sceVu0FVECTOR av0;
	sceVu0FVECTOR av1;
	sceVu0FVECTOR av2;
	sceVu0FVECTOR av3;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR add_sld;
	int i;
	
  DOOR_TYPE_DAT *pDVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *tv;
  float *tv_00;
  float *tv_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float av0 [4];
  float av1 [4];
  float av2 [4];
  float av3 [4];
  float rot [4];
  float add_sld [4];
  
  pfVar2 = av0;
  pDVar1 = GetDoorTypeDatP(0);
  pDVar1 = pDVar1 + ((int)type & 0xffff);
  av1[2] = 175.0;
  av3[0] = DAT_00355e04;
  av3[2] = -175.0;
  av0[0] = 0.0;
  av0[1] = 0.0;
  av0[2] = 175.0;
  av1[0] = DAT_00355e04;
  av1[1] = 0.0;
  av2[0] = 0.0;
  av2[1] = 0.0;
  av2[2] = -175.0;
  av3[1] = 0.0;
  rot[0] = 0.0;
  rot[2] = 0.0;
  rot[1] = pre_rot;
  if ((pDVar1->attribute & 0x1000U) == 0) {
    add_sld[0] = 0.0;
    add_sld[1] = 0.0;
    add_sld[2] = 0.0;
    RotLimitChk(rot + 1);
  }
  else {
    fVar5 = SgSinf(pre_rot);
    add_sld[1] = 0.0;
    add_sld[2] = (float)(int)(short)pDVar1->move_max * fVar5;
    fVar5 = SgCosf(pre_rot);
    add_sld[0] = (float)(int)(short)pDVar1->move_max * fVar5;
  }
  RotFvector(rot,av0);
  tv_01 = av1;
  RotFvector(rot,tv_01);
  tv_00 = av2;
  RotFvector(rot,tv_00);
  tv = av3;
  RotFvector(rot,tv);
  pfVar3 = add_sld;
  iVar4 = 2;
  do {
    fVar5 = *pfVar2;
    iVar4 = iVar4 + -1;
    pfVar2 = pfVar2 + 1;
    fVar7 = *pfVar3;
    fVar6 = *tv_01;
    fVar9 = *tv_00;
    tv_01 = tv_01 + 1;
    fVar8 = *tv;
    tv_00 = tv_00 + 1;
    tv = tv + 1;
    pfVar3 = pfVar3 + 1;
    *v0 = *axis + fVar5 + fVar7;
    v0 = v0 + 1;
    *v1 = *axis + fVar6 + fVar7;
    v1 = v1 + 1;
    *v2 = *axis + fVar9 + fVar7;
    v2 = v2 + 1;
    fVar5 = *axis;
    axis = axis + 1;
    *v3 = fVar5 + fVar8 + fVar7;
    v3 = v3 + 1;
  } while (-1 < iVar4);
  return;
}

static void GetDoorHitVertex2(float *axis, float *v0, float *v1, float *v2, float *v3, float pre_rot, u_short count, u_short type, u_char mv) {
	sceVu0FVECTOR av0;
	sceVu0FVECTOR av1;
	sceVu0FVECTOR av2;
	sceVu0FVECTOR av3;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR add_sld;
	int i;
	
  float *pfVar1;
  int iVar2;
  float *tv;
  float *tv_00;
  float *tv_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float av0 [4];
  float av1 [4];
  float av2 [4];
  float av3 [4];
  float rot [4];
  float add_sld [4];
  
  pfVar1 = av0;
  GetDoorTypeDatP(0);
  if (mv == '\0') {
    av0[2] = 175.0;
    av2[2] = -175.0;
    av1[2] = 175.0;
    av1[0] = DAT_00355e08;
  }
  else {
    av0[2] = 200.0;
    av2[2] = -200.0;
    av1[2] = 200.0;
    av1[0] = 600.0;
  }
  av0[0] = 0.0;
  av0[1] = 0.0;
  av1[1] = 0.0;
  av2[0] = 0.0;
  av2[1] = 0.0;
  av3[1] = 0.0;
  rot[0] = 0.0;
  rot[2] = 0.0;
  av3[0] = av1[0];
  av3[2] = av2[2];
  rot[1] = pre_rot;
  RotLimitChk(rot + 1);
  RotFvector(rot,av0);
  tv_01 = av1;
  RotFvector(rot,tv_01);
  tv_00 = av2;
  RotFvector(rot,tv_00);
  tv = av3;
  RotFvector(rot,tv);
  iVar2 = 2;
  do {
    fVar3 = *pfVar1;
    iVar2 = iVar2 + -1;
    pfVar1 = pfVar1 + 1;
    fVar5 = *tv_01;
    fVar4 = *tv_00;
    fVar6 = *tv;
    tv_00 = tv_00 + 1;
    tv = tv + 1;
    tv_01 = tv_01 + 1;
    *v0 = *axis + fVar3;
    v0 = v0 + 1;
    *v1 = *axis + fVar5;
    v1 = v1 + 1;
    *v2 = *axis + fVar4;
    v2 = v2 + 1;
    fVar3 = *axis;
    axis = axis + 1;
    *v3 = fVar3 + fVar6;
    v3 = v3 + 1;
  } while (-1 < iVar2);
  return;
}

static int ChkRotBetween(float sa, float sb, float rot) {
  if (sa < 0.0) {
    do {
      sa = sa + DAT_00355e0c;
    } while (sa < 0.0);
  }
  if (sb < 0.0) {
    do {
      sb = sb + DAT_00355e10;
    } while (sb < 0.0);
  }
  if (rot < 0.0) {
    do {
      rot = rot + DAT_00355e14;
    } while (rot < 0.0);
  }
  if (sa < sb) {
    if (rot <= sa) {
      return 1;
    }
  }
  else if (sa < rot) {
    return 0;
  }
  if (rot < sb) {
    return 0;
  }
  return 1;
}

void DoorDataRenewNow() {
	int i;
	
  DOOR_WRK *pDVar1;
  int iVar2;
  
  pDVar1 = door_wrk;
  iVar2 = 0x13;
  do {
    iVar2 = iVar2 + -1;
    if (pDVar1->use == '\x03') {
      pDVar1->use = '\x01';
      furn_wrk[pDVar1->fwrk_no].use = '\x01';
    }
    else if (pDVar1->use == '\x01') {
      pDVar1->use = '\x03';
      furn_wrk[pDVar1->fwrk_no].use = '\x03';
    }
    pDVar1 = pDVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void DoorFreeFurnWrk(u_char room_id) {
	int i;
	
  DOOR_WRK *pDVar1;
  int iVar2;
  
  if (room_id != 0xff) {
    pDVar1 = door_wrk;
    iVar2 = 0x13;
    do {
      if (pDVar1->use == '\x03') {
        pDVar1->use = '\x05';
        pDVar1->stts = '\0';
        FurnSetWrkNoUse(furn_wrk + pDVar1->fwrk_no,(uint)pDVar1->fwrk_no);
        pDVar1->door_id = -1;
      }
      else if (pDVar1->use == '\x04') {
        pDVar1->use = '\x01';
        furn_wrk[pDVar1->fwrk_no].use = '\x01';
      }
      iVar2 = iVar2 + -1;
      pDVar1 = pDVar1 + 1;
    } while (-1 < iVar2);
  }
  return;
}

void DoorJoint2Next() {
	int i;
	
  DOOR_WRK *pDVar1;
  int iVar2;
  
  pDVar1 = door_wrk;
  iVar2 = 0x13;
  do {
    iVar2 = iVar2 + -1;
    if (pDVar1->use == '\x04') {
      pDVar1->use = '\x03';
      furn_wrk[pDVar1->fwrk_no].use = '\x03';
    }
    pDVar1 = pDVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void DoorDataRenewNext(u_char room_id) {
	int *addr_si;
	u_char *addr_uc;
	u_short *dr_tbl;
	int i;
	int j;
	u_char no_use_dw;
	u_char no_use_fw;
	u_char dr_num;
	u_short dr_id;
	u_short dr_no;
	u_short dr_all;
	
  byte bVar1;
  byte bVar2;
  ushort door_id;
  short sVar3;
  uchar uVar4;
  ushort *puVar5;
  int iVar6;
  uint disp_room;
  uint uVar7;
  ushort *puVar8;
  DOOR_WRK *pDVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint dw_no;
  uint fwrk_no;
  uchar *addr_uc;
  uchar dr_num;
  short dr_no;
  
  disp_room = (int)(char)room_id & 0xff;
  GetDoorTypeDatP(0);
  if (disp_room != 0xff) {
    dw_no = 0;
    SetUpRoomCoordinate(disp_room,&room_wrk.pos[1].x);
    fwrk_no = 0;
    iVar13 = 0;
    uVar4 = GetDataRoom('\n',(uchar)disp_room);
    iVar10 = *(int *)((char)uVar4 * 4 +
                     *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8004) + 0x7f8000);
    bVar1 = *(byte *)(iVar10 + 0x7f8000);
    puVar8 = (ushort *)(iVar10 + 0x7f8002);
    if (bVar1 != 0) {
      do {
        door_id = *puVar8;
        puVar8 = puVar8 + 2;
        uVar4 = GetNextRIdFromRNoDId(room_wrk.room_no,door_id);
        if ((long)(int)disp_room == (long)(char)uVar4) {
          pDVar9 = door_wrk;
          iVar10 = 0x13;
          do {
            if (pDVar9->door_id == door_id) {
              bVar2 = pDVar9->fwrk_no;
              pDVar9->use = '\x04';
              furn_wrk[bVar2].use = '\x04';
              sVar3 = furn_wrk[bVar2].furn_no;
              if ((sVar3 != -1) && (sVar3 != 0)) {
                ChoudoPreRenderDual(furn_wrk + bVar2);
              }
            }
            iVar10 = iVar10 + -1;
            pDVar9 = pDVar9 + 1;
          } while (-1 < iVar10);
        }
        else {
          puVar5 = (ushort *)GetDoorDoorNumP();
          uVar7 = (uint)*puVar5;
          puVar5 = puVar5 + 1;
          if (uVar7 != 0) {
            uVar11 = 1;
            if (*puVar5 == door_id) {
              _dr_no = 0;
            }
            else {
              for (; puVar5 = puVar5 + 1, (int)uVar11 < (int)uVar7; uVar11 = uVar11 + 1) {
                if (*puVar5 == door_id) {
                  _dr_no = uVar11 & 0xffff;
                  break;
                }
              }
            }
          }
          if (uVar7 <= _dr_no) {
            return;
          }
          iVar10 = *(int *)(*(int *)(_dr_no * 4 +
                                    *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8008) + 0x7f8000
                                    ) + 0x7f8000);
          iVar12 = dw_no << 6;
          do {
            if (*(char *)((int)door_wrk[0].npos + iVar12 + 0x26) == '\x05') break;
            dw_no = dw_no + 1 & 0xff;
            iVar12 = dw_no << 6;
          } while (dw_no < 0xfb);
          do {
            iVar6 = FurnIsWrkUse(furn_wrk + fwrk_no);
            if (iVar6 == 0) break;
            fwrk_no = fwrk_no + 1 & 0xff;
          } while (fwrk_no < 0xfb);
          SetDoorWrk(dw_no,(uint *)(iVar10 + 0x7f8000),(uint)door_id,fwrk_no);
          *(undefined *)((int)door_wrk[0].npos + iVar12 + 0x26) = 3;
          DoorSetFurnWrk(dw_no,fwrk_no,'\x03',(uchar)disp_room);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)bVar1);
    }
  }
  return;
}

u_char GetNextRIdFromRNoDId(u_char room_no, u_short door_id) {
	int *addr_si;
	u_char *addr_uc;
	int i;
	u_char dr_num;
	
  int iVar1;
  uchar uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = GetRoomIdFromRoomNo('\0',room_no);
  uVar2 = GetDataRoom('\n',uVar2);
  iVar5 = 0;
  iVar1 = *(int *)((char)uVar2 * 4 +
                  *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8004) + 0x7f8000);
  uVar4 = (uint)*(byte *)(iVar1 + 0x7f8000);
  psVar3 = (short *)(iVar1 + 0x7f8002);
  if (uVar4 != 0) {
    do {
      if (door_id == *psVar3) {
        return *(uchar *)(psVar3 + 1);
      }
      iVar5 = iVar5 + 1;
      psVar3 = psVar3 + 2;
    } while (iVar5 < (int)uVar4);
  }
  return 0xff;
}

u_char NextRoomRenew() {
	int *addr;
	
  int iVar1;
  uchar room_id;
  uchar uVar2;
  ulong uVar3;
  
  room_id = ChkNextRoomIsInsite();
  uVar3 = (ulong)(char)room_id;
  if (uVar3 != 0xff) {
    if (uVar3 == room_wrk.disp_no[0]) {
      return 0xff;
    }
    if ((uVar3 != room_wrk.disp_no[1]) &&
       (uVar2 = GetDataRoom('\0',room_id), (long)(char)uVar2 != 0xff)) {
      iVar1 = *(int *)(*(int *)(*(int *)map_wrk.dat_adr + (char)uVar2 * 4 + 0x7f8004) + 0x7f8000);
      room_wrk.disp_no[1] = room_id;
      room_wrk.pos[1].x = (float)(uint)*(ushort *)(iVar1 + 0x7f8000);
      room_wrk.pos[1].y = (float)(int)*(short *)(iVar1 + 0x7f8002);
      room_wrk.pos[1].z = (float)(uint)*(ushort *)(iVar1 + 0x7f8004);
      return room_id;
    }
  }
  return 0xff;
}

u_char ChkNextRoomIsInsite() {
	sceVu0FVECTOR dp;
	sceVu0FVECTOR dv;
	short int *addr_ss;
	float drot;
	float dst_min;
	float tmp_dst;
	u_short dst_min_did;
	u_char dst_min_nrid;
	u_char *addr_uc;
	u_char next_rm_id;
	u_short dr_id;
	u_char dr_num;
	u_char i;
	u_char now_room_id;
	
  byte bVar1;
  short door_id;
  uchar uVar2;
  byte *pbVar3;
  int iVar4;
  float *pfVar5;
  short *psVar6;
  ulong uVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  uchar uVar11;
  ulong uVar13;
  float in_f21;
  float fVar14;
  float dpre_rot;
  float dp [4];
  float dv [4];
  ulong uVar12;
  
  uVar2 = GetRoomIdFromRoomNo('\0',room_wrk.room_no);
  pbVar3 = GetDoorRoomConectDataP(uVar2);
  if (pbVar3 == (byte *)0x0) {
    uVar2 = 0xff;
  }
  else {
    bVar1 = *pbVar3;
    sVar10 = -1;
    psVar6 = (short *)(pbVar3 + 2);
    uVar12 = 0xff;
    uVar11 = 0xff;
    bVar8 = 0;
    if (bVar1 != 0) {
      door_id = *psVar6;
      do {
        uVar7 = (ulong)*(byte *)(psVar6 + 1);
        psVar6 = psVar6 + 2;
        uVar13 = uVar12;
        sVar9 = sVar10;
        if (uVar7 == (long)(char)uVar2) {
LAB_001c4148:
          uVar12 = uVar13;
          fVar14 = in_f21;
          sVar10 = sVar9;
        }
        else {
          iVar4 = ChkDoorIsOpen(door_id);
          fVar14 = in_f21;
          if (iVar4 != 0) {
            pfVar5 = (float *)GetDoorDataHeader(door_id);
            if (pfVar5 != (float *)0x0) {
              dpre_rot = *pfVar5;
              dp[0] = (float)(uint)*(ushort *)(pfVar5 + 1);
              dp[2] = (float)(uint)*(ushort *)(pfVar5 + 2);
              dp[1] = (float)(int)*(short *)((int)pfVar5 + 6);
              iVar4 = ChkDoorIsInsite(dp,dpre_rot,door_id);
              fVar14 = in_f21;
              if ((((iVar4 != 0) ||
                   (iVar4 = ChkDoorIsInsite2(dp,dpre_rot,door_id), fVar14 = in_f21, iVar4 != 0)) &&
                  (in_f21 = GetDist(dp[0] - camera.p.x,dp[2] - camera.p.z), uVar13 = uVar7,
                  sVar9 = door_id, sVar10 != -1)) && (fVar14 <= in_f21)) goto LAB_001c414c;
            }
            goto LAB_001c4148;
          }
        }
LAB_001c414c:
        bVar8 = bVar8 + 1;
        uVar11 = (uchar)uVar12;
        if (bVar1 <= bVar8) break;
        door_id = *psVar6;
        in_f21 = fVar14;
      } while( true );
    }
    uVar2 = 0xff;
    if (sVar10 != -1) {
      uVar2 = uVar11;
    }
  }
  return uVar2;
}

u_char* GetDoorRoomNumP() {
	int *addr;
	
  return (uchar *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8000) + 0x7f8000) +
                  0x7f8000);
}

u_char* GetDoorRoomNumPFloor(u_char floor) {
	int *addr;
	
  int iVar1;
  
  iVar1 = GetFloorTopAddr(floor);
  return (uchar *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x28) + 0x7f8000) + 0x7f8000) + 0x7f8000);
}

static u_short* GetDoorDoorNumP() {
	int *addr;
	
  return (short *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8000) + 0x7f8004) +
                  0x7f8000);
}

u_char* GetDoorRoomConectDataP(u_char room_id) {
	u_char *addr_uc;
	int *addr_si;
	u_char room_num;
	u_char i;
	
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = GetDoorRoomNumP();
  uVar3 = 0;
  bVar1 = *pbVar2;
  if (bVar1 != 0) {
    do {
      pbVar2 = pbVar2 + 1;
      if (*pbVar2 == room_id) {
        return (uchar *)(*(int *)(uVar3 * 4 +
                                 *(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8004) + 0x7f8000) +
                        0x7f8000);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < bVar1);
  }
  return (uchar *)0x0;
}

static int* GetDoorDataTopP(u_short door_id) {
	int *addr_si;
	u_short *addr_us;
	u_char i;
	u_short door_num;
	
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = (ushort *)GetDoorDoorNumP();
  uVar3 = 0;
  uVar1 = *puVar2;
  if (uVar1 != 0) {
    do {
      puVar2 = puVar2 + 1;
      if (*puVar2 == door_id) {
        return (int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x28) + 0x7f8008) + 0x7f8000 + uVar3 * 4)
        ;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar1);
  }
  return (int *)0x0;
}

static int* GetDoorDataHeader(u_short door_id) {
	int *addr_si;
	
  int *piVar1;
  
  piVar1 = GetDoorDataTopP(door_id);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(int *)(*piVar1 + 0x7f8000) + 0x7f8000);
  }
  return piVar1;
}

int ChkDoorIsInsite(float *dpos, float dpre_rot, u_short door_id) {
	sceVu0FVECTOR vr;
	sceVu0FVECTOR vp;
	sceVu0FVECTOR r2;
	sceVu0FVECTOR tvp;
	sceVu0FVECTOR dp;
	float rot_center;
	float rot_door;
	float view_rad;
	float dist_obj;
	float cam_rot;
	int ret_val;
	int i;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float vr [4];
  float vp [4];
  float r2 [4];
  float tvp [4];
  float dp [4];
  
  iVar3 = 0;
  vp[1] = camera.p.y;
  vp[0] = camera.p.x;
  vp[2] = camera.p.z;
  fVar4 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
  fVar10 = DAT_00355e18;
  fVar5 = SgCosf(fVar4);
  vp[0] = vp[0] + fVar5 * 0.0;
  fVar6 = SgSinf(fVar4);
  fVar5 = camera.i.z;
  fVar4 = camera.i.x;
  vp[2] = vp[2] - fVar6 * -200.0;
  do {
    iVar2 = 0;
    if (iVar3 == 0) {
      dp[0] = *dpos;
      dp[1] = dpos[1];
      dp[2] = dpos[2];
    }
    else {
      fVar6 = SgCosf(dpre_rot);
      dp[1] = dpos[1];
      dp[0] = fVar6 * 450.0 + *dpos;
      fVar6 = SgSinf(dpre_rot);
      dp[2] = -(fVar6 * 450.0) + dpos[2];
    }
    fVar6 = GetDistV(dp,vp);
    if (fVar6 <= DAT_00355e1c) {
      fVar9 = ((DAT_00355e1c - fVar6) * DAT_00355e20) / DAT_00355e1c;
      fVar6 = SgAtan2f(fVar4 - vp[0],fVar5 - vp[2]);
      fVar7 = SgAtan2f(dp[0] - vp[0],dp[2] - vp[2]);
      for (; fVar6 < 0.0; fVar6 = fVar6 + DAT_00355e24) {
      }
      fVar8 = fVar6 - fVar9;
      for (; fVar7 < 0.0; fVar7 = fVar7 + fVar10) {
      }
      fVar6 = fVar6 + fVar9;
      if (fVar8 < 0.0) {
        if (fVar7 < fVar8 + fVar10) {
LAB_001c464c:
          bVar1 = fVar7 <= fVar6;
LAB_001c4654:
          if (!bVar1) goto LAB_001c4664;
        }
LAB_001c4660:
        iVar2 = 1;
      }
      else {
        if (DAT_00355e28 < fVar6) {
          if (fVar6 - DAT_00355e28 < fVar7) {
            bVar1 = fVar8 <= fVar7;
            goto LAB_001c4654;
          }
          goto LAB_001c4660;
        }
        if (fVar8 <= fVar7) goto LAB_001c464c;
      }
LAB_001c4664:
      if (iVar2 == 1) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return iVar2;
    }
  } while( true );
}

int ChkDoorIsInsite2(float *dpos, float dpre_rot, u_short door_id) {
	sceVu0FVECTOR vr1;
	sceVu0FVECTOR vr2;
	sceVu0FVECTOR vr3;
	sceVu0FVECTOR tvr1;
	sceVu0FVECTOR tvr2;
	sceVu0FVECTOR tvr3;
	sceVu0FVECTOR vp;
	sceVu0FVECTOR tvpb;
	sceVu0FVECTOR vpb;
	sceVu0FVECTOR dp1;
	sceVu0FVECTOR dp2;
	sceVu0FVECTOR prot;
	sceVu0FVECTOR drot;
	float cam_rot;
	float tmp_cos;
	float tmp_sin;
	static int count = 0;
	
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float x0;
  float y0;
  float vr1 [4];
  float vr2 [4];
  float vr3 [4];
  float tvr1 [4];
  float tvr2 [4];
  float tvr3 [4];
  float vp [4];
  float tvpb [4];
  float vpb [4];
  float dp1 [4];
  float dp2 [4];
  float prot [4];
  float drot [4];
  
  fVar2 = camera.p.z;
  fVar1 = camera.p.x;
  fVar5 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
  fVar6 = SgCosf(fVar5);
  fVar5 = SgSinf(fVar5);
  x0 = fVar6 * 0.0 + fVar5 * -200.0 + fVar1;
  y0 = (fVar6 * -200.0 - fVar5 * 0.0) + fVar2;
  fVar7 = SgCosf(dpre_rot);
  fVar7 = fVar7 * 450.0 + *dpos;
  fVar8 = SgSinf(dpre_rot);
  fVar8 = -(fVar8 * 450.0) + dpos[2];
  iVar3 = ChkLineCross(x0,y0,fVar6 * 500.0 + fVar5 * 50.0 + fVar1,
                       (fVar6 * 50.0 - fVar5 * 500.0) + fVar2,*dpos,dpos[2],fVar7,fVar8);
  iVar4 = 1;
  if (iVar3 == 0) {
    iVar3 = ChkLineCross(x0,y0,fVar6 * -500.0 + fVar5 * 50.0 + fVar1,
                         (fVar6 * 50.0 - fVar5 * -500.0) + fVar2,*dpos,dpos[2],fVar7,fVar8);
    iVar4 = 1;
    if (iVar3 == 0) {
      iVar3 = ChkLineCross(x0,y0,fVar6 * 0.0 + fVar5 * 500.0 + fVar1,
                           (fVar6 * 500.0 - fVar5 * 0.0) + fVar2,*dpos,dpos[2],fVar7,fVar8);
      iVar4 = 1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}

int TmpMapHit(u_short door_id) {
	sceVu0FVECTOR fpos;
	sceVu0FVECTOR tpos;
	u_int *addr_ui;
	
  uchar uVar1;
  int *piVar2;
  uint uVar3;
  float fpos [4];
  float tpos [4];
  
  fpos[0] = camera.p.x;
  fpos[1] = camera.p.y;
  fpos[2] = camera.p.z;
  piVar2 = GetDoorDataHeader(door_id);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    tpos[0] = (float)(int)*(short *)(piVar2 + 1);
    tpos[1] = (float)(int)*(short *)((int)piVar2 + 6);
    tpos[2] = (float)(int)*(short *)(piVar2 + 2);
    uVar1 = HitChkSegment2All2D(fpos,tpos,100.0);
    uVar3 = (uint)(uVar1 == '\0');
  }
  return uVar3;
}

static int ChkDoorIsOpen(u_short door_id) {
	int i;
	
  bool bVar1;
  int iVar2;
  NON_CLOSE_DOOR_WRK *pNVar3;
  short *psVar4;
  
  pNVar3 = nc_door_wrk;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (((pNVar3->door_id == door_id) && (pNVar3->stts != '\0')) && (pNVar3->stts != '\x01')) {
      return 1;
    }
    pNVar3 = pNVar3 + 1;
  } while (iVar2 < 0x32);
  iVar2 = 0;
  if (ac_door_wrk[0].door_id == door_id) {
    bVar1 = true;
LAB_001c4a5c:
    if (bVar1) {
      return (int)(1 < ac_door_wrk[iVar2].stts);
    }
  }
  else {
    psVar4 = &ac_door_wrk[0].door_id;
    iVar2 = 1;
    while( true ) {
      bVar1 = iVar2 < 10;
      psVar4 = psVar4 + 0x20;
      if (!bVar1) break;
      if (*psVar4 == door_id) goto LAB_001c4a5c;
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

static u_short GetDoorIdFromDoorNo(u_char door_no) {
	u_short *addr_us;
	int i;
	u_short dr_num;
	
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar2 = (ushort *)GetDoorDoorNumP();
  bVar1 = (ulong)*puVar2 != 0;
  puVar3 = puVar2 + 1;
  if (bVar1) {
    if (((long)(char)door_no & 0xffU) == 0) {
LAB_001c4adc:
      if (bVar1) {
        return *puVar3;
      }
    }
    else {
      iVar4 = 1;
      while( true ) {
        bVar1 = (long)iVar4 < (long)(ulong)*puVar2;
        puVar3 = puVar3 + 1;
        if (!bVar1) break;
        if (((long)(char)door_no & 0xffU) == (long)iVar4) goto LAB_001c4adc;
        iVar4 = iVar4 + 1;
      }
    }
  }
  return -1;
}

static int GetDoorStts(DOOR_DATA_POP **dppp, u_short door_id, u_char floor) {
	int *addr_si0;
	int *addr_si1;
	u_short *addr_us;
	int i;
	u_short dat_num;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  if (floor_exist[ingame_wrk.msn_no][(int)(char)floor & 0xffU] != '\0') {
    iVar3 = GetFloorTopAddr((uchar)((int)(char)floor & 0xffU));
    iVar5 = 0;
    iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x28) + 0x7f8000) + 0x7f8004);
    bVar2 = *(ushort *)(iVar1 + 0x7f8000) != 0;
    psVar4 = (short *)(iVar1 + 0x7f8002);
    if (bVar2) {
      if (*(short *)(iVar1 + 0x7f8002) == door_id) {
LAB_001c4ba0:
        if (bVar2) {
          *dppp = (DOOR_DATA_POP *)
                  (*(int *)(*(int *)(iVar5 * 4 +
                                    *(int *)(*(int *)(iVar3 + 0x28) + 0x7f8008) + 0x7f8000) +
                           0x7f8000) + 0x7f8000);
          return 1;
        }
      }
      else {
        iVar5 = 1;
        while( true ) {
          bVar2 = iVar5 < (int)(uint)*(ushort *)(iVar1 + 0x7f8000);
          psVar4 = psVar4 + 1;
          if (!bVar2) break;
          if (*psVar4 == door_id) goto LAB_001c4ba0;
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return 0;
}

int GetDoorSttsForMap(DOOR_STTS_MAP *dsmp, u_short door_id, u_char floor) {
	DOOR_DATA_POP *dpp;
	
  int iVar1;
  float fVar2;
  DOOR_DATA_POP *dpp;
  
  iVar1 = GetDoorStts(&dpp,(short)((int)door_id & 0xffffU),floor);
  if (iVar1 == 0) {
    dsmp->stts = '\0';
  }
  else {
    fVar2 = dpp->rot;
    dsmp->rot = fVar2;
    fVar2 = SgCosf(fVar2);
    dsmp->pos_x = (short)(int)(fVar2 * 225.0 + (float)(uint)(ushort)dpp->pos_x);
    fVar2 = SgSinf(dsmp->rot);
    dsmp->pos_z = (short)(int)(fVar2 * -225.0 + (float)(uint)(ushort)dpp->pos_z);
    dsmp->stts = door_keep[(int)door_id & 0xffffU].stts_map;
  }
  return (uint)(iVar1 != 0);
}

u_short DoorChangeModel(u_short door_id, u_short model_no) {
	DOOR_WRK *dwp;
	int i;
	u_short last_model_no;
	
  byte bVar1;
  short sVar2;
  short sVar3;
  DOOR_STTS_KEEP *pDVar4;
  int iVar5;
  DOOR_WRK *pDVar6;
  uint uVar7;
  
  uVar7 = (int)door_id & 0xffff;
  sVar3 = -1;
  if (uVar7 < 300) {
    pDVar6 = door_wrk;
    iVar5 = 0;
    pDVar4 = door_keep + uVar7;
    sVar3 = pDVar4->mdl_no;
    pDVar4->mdl_no = model_no;
    do {
      iVar5 = iVar5 + 1;
      if ((ushort)pDVar6->door_id == uVar7) {
        bVar1 = pDVar6->fwrk_no;
        sVar2 = pDVar4->mdl_no;
        pDVar6->mdl_no = sVar2;
        furn_wrk[bVar1].furn_no = sVar2 + 1000;
        ChoudoPreRender(furn_wrk + bVar1);
        return sVar3;
      }
      pDVar6 = pDVar6 + 1;
    } while (iVar5 < 0x14);
  }
  return sVar3;
}

void DoorDispOnOff(u_short door_id, u_char on_off) {
	DOOR_WRK *dwp;
	int i;
	
  ushort uVar1;
  DOOR_WRK *pDVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (int)door_id & 0xffff;
  if (uVar4 < 300) {
    if (on_off == '\0') {
      pDVar2 = door_wrk;
      iVar3 = 0;
      door_keep[uVar4].attr = door_keep[uVar4].attr | 0x200;
      do {
        iVar3 = iVar3 + 1;
        if ((ushort)pDVar2->door_id == uVar4) {
          if (furn_wrk[pDVar2->fwrk_no].furn_no != -1) {
            furn_wrk[pDVar2->fwrk_no].fno_bk = furn_wrk[pDVar2->fwrk_no].furn_no;
            furn_wrk[pDVar2->fwrk_no].furn_no = -1;
            FurnSortFurnWrk('\x01');
            return;
          }
        }
        pDVar2 = pDVar2 + 1;
      } while (iVar3 < 0x14);
    }
    else {
      if ((door_keep[uVar4].attr & 0x200U) != 0) {
        door_keep[uVar4].attr = door_keep[uVar4].attr ^ 0x200;
      }
      iVar3 = 0;
      pDVar2 = door_wrk;
      do {
        if ((ushort)pDVar2->door_id == uVar4) {
          uVar1 = furn_wrk[pDVar2->fwrk_no].fno_bk;
          if ((uVar1 != 0xffff) && (999 < uVar1)) {
            furn_wrk[pDVar2->fwrk_no].furn_no = uVar1;
            furn_wrk[pDVar2->fwrk_no].fs_flg = '\x01';
            FurnSortFurnWrk('\x01');
            return;
          }
        }
        iVar3 = iVar3 + 1;
        pDVar2 = pDVar2 + 1;
      } while (iVar3 < 0x14);
    }
  }
  return;
}

void DoorOpenShiftForce(u_short door_id) {
	DOOR_WRK *dwp;
	sceVu0FVECTOR ref;
	int i;
	
  bool bVar1;
  int iVar2;
  DOOR_WRK *pDVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float ref [4];
  
  pDVar3 = door_wrk;
  iVar2 = 0;
  do {
    bVar1 = 0x13 < iVar2;
    if (pDVar3->door_id == door_id) {
      fVar5 = SgCosf(pDVar3->rot);
      fVar4 = pDVar3->pos[0];
      fVar6 = SgSinf(pDVar3->rot);
      plyr_wrk.move_box.trot.w =
           SgAtan2f((fVar4 + fVar5 * 225.0) - plyr_wrk.move_box.spd.z,
                    (pDVar3->pos[2] - fVar6 * 225.0) - plyr_wrk.move_box.rot.x);
      break;
    }
    iVar2 = iVar2 + 1;
    if (bVar1) {
      return;
    }
    pDVar3 = pDVar3 + 1;
  } while (iVar2 < 0x14);
  DoorCheckOn('\x01');
  return;
}

char TargetDoorKindChk() {
	DOJ_SQUARE_MTN dsmp;
	int dwn[2];
	
  DOJ_SQUARE_MTN dsmp;
  int dwn [2];
  
  return doj_square_mtn.mtn_no;
}

void PlyrPosAdj(u_char mtn_no, u_char mtn_type) {
	DOJ_SQUARE_MTN *dsmtnp;
	DOOR_MTN_DAT *dmotionp;
	float tmp_rot;
	float adj_r;
	
  DOOR_MTN_DAT *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float tmp_rot;
  float adj_r;
  
  if (mtn_no != 0xff) {
    pDVar1 = GetDoorMtnDat(mtn_no);
    tmp_rot = door_wrk[doj_square_mtn.dwno_base].rot;
    RotLimitChk(&tmp_rot);
    if ((doj_square_mtn.dbl_flg == '\0') && (doj_square_mtn.exc_flg != '\0')) {
      tmp_rot = tmp_rot + DAT_00355e2c;
      RotLimitChk(&tmp_rot);
    }
    fVar3 = SgCosf(tmp_rot);
    fVar4 = SgSinf(tmp_rot);
    fVar2 = pDVar1->sx;
    fVar8 = pDVar1->sy;
    fVar5 = door_wrk[doj_square_mtn.dwno_base].pos[0];
    fVar6 = SgCosf(tmp_rot);
    fVar7 = SgSinf(tmp_rot);
    plyr_wrk.move_box.spd.z = (float)((int)(fVar2 * fVar3 + fVar8 * fVar4 + fVar5) & 0xffff);
    plyr_wrk.move_box.rot.x =
         (float)((int)((pDVar1->sy * fVar6 - pDVar1->sx * fVar7) +
                      door_wrk[doj_square_mtn.dwno_base].pos[2]) & 0xffff);
    if (mtn_type == '\0') {
      adj_r = 0.0;
      RotLimitChk((float *)((uint)&tmp_rot | 4));
      plyr_wrk.move_box.trot.w = adj_r + tmp_rot;
    }
  }
  return;
}

void DoorMoveStart(u_char mtn_no, u_char door_close_flg) {
	int i;
	int j;
	AUTO_CLOSE_DOOR_WRK *acp;
	NON_CLOSE_DOOR_WRK *ncp;
	DOOR_MTN_DAT *dmotionp;
	DOJ_SQUARE_MTN *dsmtnp;
	
  byte bVar1;
  uchar type;
  short sVar2;
  float *pfVar3;
  bool bVar4;
  DOOR_MTN_DAT *pDVar5;
  int iVar6;
  uchar uVar7;
  int se_no;
  NON_CLOSE_DOOR_WRK *pNVar8;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = 0;
  pDVar5 = GetDoorMtnDat(mtn_no);
  iVar11 = 0;
  uVar7 = doj_square_mtn.exc_flg;
  do {
    iVar10 = *(int *)(doj_square_mtn.dojs[0].sq_no + iVar11 + -5);
    if (iVar10 != -1) {
      if (door_close_flg == '\0') {
        if ((uVar7 == '\0') || (doj_square_mtn.dbl_flg != '\0')) {
          if ((doj_square_mtn.exc_flg == uVar12) || (iVar10 = MotionIsDouble(mtn_no), iVar10 == 0))
          {
            uVar7 = pDVar5->dmd_no1;
          }
          else {
            uVar7 = pDVar5->dmd_no2;
          }
          goto LAB_001c52e8;
        }
        if (uVar12 == 0) {
          uVar7 = pDVar5->dmd_no1;
          iVar10 = doj_square_mtn.dojs[0].dwrk_no << 6;
        }
        else {
          iVar10 = iVar10 << 6;
          uVar7 = pDVar5->dmd_no2;
        }
LAB_001c52ac:
        *(uchar *)((int)door_wrk[0].npos + iVar10 + 0x27) = uVar7;
      }
      else {
        if ((uVar7 != '\0') && (doj_square_mtn.dbl_flg == '\0')) {
          if (uVar12 == 0) {
            uVar7 = pDVar5->c_dmd_no1;
            iVar10 = doj_square_mtn.dojs[0].dwrk_no << 6;
          }
          else {
            iVar10 = iVar10 << 6;
            uVar7 = pDVar5->c_dmd_no2;
          }
          goto LAB_001c52ac;
        }
        if (doj_square_mtn.exc_flg == uVar12) {
          uVar7 = pDVar5->c_dmd_no1;
        }
        else {
          iVar10 = MotionIsDouble(mtn_no);
          if (iVar10 == 0) {
            uVar7 = pDVar5->c_dmd_no1;
          }
          else {
            uVar7 = pDVar5->c_dmd_no2;
          }
        }
LAB_001c52e8:
        door_wrk[*(int *)(doj_square_mtn.dojs[0].sq_no + iVar11 + -5)].dmd_no = uVar7;
      }
      iVar10 = 0;
      pNVar8 = nc_door_wrk;
      puVar9 = doj_square_mtn.dojs[0].sq_no + iVar11 + -5;
      do {
        iVar6 = *(int *)puVar9;
        if ((pNVar8->door_id == door_wrk[iVar6].door_id) && (pNVar8->stts != '\0')) {
          bVar1 = door_wrk[iVar6].dmd_no;
          sVar2 = *(short *)puVar9;
          pNVar8->type = door_wrk[iVar6].type;
          uVar7 = door_wrk[iVar6].dmd_no;
          pfVar3 = *(float **)(&dtbl_tbl + (uint)bVar1 * 4);
          type = *(uchar *)&pNVar8->type;
          pNVar8->dw_no = sVar2;
          pNVar8->opnmtn_flg = '\x01';
          pNVar8->dmd_no = uVar7;
          door_wrk[iVar6].stts = '\x02';
          pNVar8->open_tbl = pfVar3;
          pNVar8->npos[0] = 0.0;
          pNVar8->npos[1] = 0.0;
          pNVar8->npos[2] = 0.0;
          pNVar8->nrot = 0.0;
          pNVar8->stts = '\x02';
          iVar6 = IsFusumaType(type);
          se_no = 0x1c;
          if (iVar6 == 0) {
            iVar6 = *(int *)puVar9;
          }
          else {
            iVar6 = *(int *)puVar9;
            se_no = 0x1e;
          }
          SeStartPos(se_no,door_wrk[iVar6].pos,0,0x1000,0x1000,0xff);
          bVar4 = iVar10 < 0x32;
          break;
        }
        iVar10 = iVar10 + 1;
        bVar4 = iVar10 < 0x32;
        pNVar8 = pNVar8 + 1;
      } while (bVar4);
      uVar7 = doj_square_mtn.exc_flg;
      if (!bVar4) {
        puVar9 = doj_square_mtn.dojs[0].sq_no + iVar11 + -5;
        ac_door_wrk[0].dw_no = *(short *)puVar9;
        iVar11 = *(int *)puVar9;
        ac_door_wrk[0].npos[2] = 0.0;
        ac_door_wrk[0].type = door_wrk[iVar11].type;
        ac_door_wrk[0].door_id = door_wrk[iVar11].door_id;
        ac_door_wrk[0].open_tbl = *(float **)(&dtbl_tbl + (uint)door_wrk[iVar11].dmd_no * 4);
        ac_door_wrk[0].dmd_no = door_wrk[iVar11].dmd_no;
        ac_door_wrk[0].stts = '\t';
        ac_door_wrk[0].npos[1] = 0.0;
        ac_door_wrk[0].opnmtn_flg = '\x01';
        ac_door_wrk[0].npos[0] = 0.0;
        ac_door_wrk[0].nrot = 0.0;
        door_wrk[iVar11].stts = '\t';
        iVar11 = IsFusumaType((uchar)ac_door_wrk[0].type);
        iVar10 = 0x1c;
        if (iVar11 == 0) {
          iVar11 = *(int *)puVar9;
        }
        else {
          iVar11 = *(int *)puVar9;
          iVar10 = 0x1e;
        }
        SeStartPos(iVar10,door_wrk[iVar11].pos,0,0x1000,0x1000,0xff);
        uVar7 = doj_square_mtn.exc_flg;
      }
    }
    uVar12 = uVar12 + 1;
    iVar11 = uVar12 * 8;
    if (1 < (int)uVar12) {
      return;
    }
  } while( true );
}

void OneRoomLoadReq() {
	int i;
	int dr_num;
	int dwrk_no;
	int load_room;
	u_char *addr_uc;
	
  uchar room_no;
  byte *pbVar1;
  uchar *puVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  FURN_WRK *fwp;
  ulong unaff_s3;
  int unaff_s5_lo;
  
  fwp = furn_wrk;
  iVar4 = 0;
  do {
    if ((fwp->room_id != room_wrk.disp_no[0]) && ((fwp->use == '\0' || (fwp->use == '\x02')))) {
      FurnSetWrkNoUse(fwp,iVar4);
    }
    iVar4 = iVar4 + 1;
    fwp = fwp + 1;
  } while (iVar4 < 0x3c);
  DoorFreeFurnWrk('\0');
  FurnSortFurnWrk('\0');
  iVar4 = doj_square_mtn.dojs[0].dwrk_no;
  if ((doj_square_mtn.dojs[0].type == 0xff) &&
     (iVar4 = unaff_s5_lo, doj_square_mtn.dojs[1].type != 0xff)) {
    iVar4 = doj_square_mtn.dojs[1].dwrk_no;
  }
  iVar5 = 0;
  pbVar1 = GetDoorRoomConectDataP(area_read_wrk.rm_from);
  psVar3 = (short *)(pbVar1 + 2);
  if (*pbVar1 != 0) {
    do {
      iVar5 = iVar5 + 1;
      if (*psVar3 == door_wrk[iVar4].door_id) {
        unaff_s3 = (ulong)*(byte *)(psVar3 + 1);
        break;
      }
      psVar3 = psVar3 + 2;
    } while (iVar5 < (int)(uint)*pbVar1);
  }
  puVar2 = (uchar *)((int)&area_wrk.padding + 1);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    if (unaff_s3 == *puVar2) {
      return;
    }
    puVar2 = area_wrk.rgst + iVar4 + 9;
    iVar4 = iVar5;
  } while (iVar5 < 2);
  puVar2 = (uchar *)((int)&area_wrk.padding + 1);
  iVar4 = 0;
  do {
    if (plyr_wrk.dop._13_1_ != *puVar2) {
      room_no = (uchar)unaff_s3;
      RoomMdlLoadReq((uint *)0x0,(uchar)iVar4,ingame_wrk.msn_no,room_no,'\0');
      FloatGhostAppearTypeSet(ap_wrk.fgst_no,(uchar)iVar4,room_no);
      *puVar2 = room_no;
      return;
    }
    iVar5 = iVar4 + 1;
    puVar2 = area_wrk.rgst + iVar4 + 9;
    iVar4 = iVar5;
  } while (iVar5 < 2);
  return;
}

void PrintDoorID(int no) {
  return;
}
