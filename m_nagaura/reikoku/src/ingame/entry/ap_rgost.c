// STATUS: NOT STARTED

typedef struct {
	u_char stts;
	u_char ap_num;
	u_short ap_cnt;
} RGOST_WRK;

RGOST_DSP_WRK rg_dsp_wrk[3] = {
	/* [0] = */ {
		/* .mode = */ 0,
		/* .rg_no = */ 0,
		/* .dsp_no = */ 0,
		/* .alpha = */ 0,
		/* .alp_bak = */ 0,
		/* .se_wrk_no = */ 0,
		/* .count = */ 0,
		/* .time = */ 0,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* [1] = */ {
		/* .mode = */ 0,
		/* .rg_no = */ 0,
		/* .dsp_no = */ 0,
		/* .alpha = */ 0,
		/* .alp_bak = */ 0,
		/* .se_wrk_no = */ 0,
		/* .count = */ 0,
		/* .time = */ 0,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* [2] = */ {
		/* .mode = */ 0,
		/* .rg_no = */ 0,
		/* .dsp_no = */ 0,
		/* .alpha = */ 0,
		/* .alp_bak = */ 0,
		/* .se_wrk_no = */ 0,
		/* .count = */ 0,
		/* .time = */ 0,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};
RGOST_WRK rg_wrk[200] = {
	/* [0] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [1] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [2] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [3] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [4] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [5] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [6] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [7] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [8] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [9] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [10] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [11] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [12] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [13] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [14] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [15] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [16] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [17] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [18] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [19] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [20] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [21] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [22] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [23] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [24] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [25] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [26] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [27] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [28] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [29] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [30] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [31] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [32] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [33] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [34] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [35] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [36] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [37] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [38] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [39] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [40] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [41] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [42] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [43] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [44] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [45] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [46] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [47] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [48] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [49] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [50] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [51] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [52] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [53] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [54] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [55] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [56] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [57] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [58] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [59] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [60] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [61] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [62] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [63] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [64] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [65] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [66] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [67] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [68] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [69] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [70] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [71] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [72] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [73] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [74] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [75] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [76] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [77] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [78] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [79] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [80] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [81] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [82] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [83] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [84] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [85] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [86] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [87] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [88] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [89] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [90] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [91] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [92] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [93] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [94] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [95] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [96] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [97] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [98] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [99] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [100] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [101] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [102] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [103] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [104] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [105] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [106] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [107] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [108] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [109] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [110] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [111] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [112] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [113] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [114] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [115] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [116] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [117] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [118] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [119] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [120] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [121] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [122] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [123] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [124] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [125] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [126] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [127] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [128] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [129] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [130] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [131] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [132] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [133] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [134] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [135] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [136] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [137] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [138] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [139] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [140] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [141] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [142] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [143] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [144] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [145] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [146] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [147] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [148] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [149] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [150] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [151] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [152] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [153] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [154] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [155] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [156] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [157] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [158] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [159] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [160] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [161] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [162] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [163] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [164] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [165] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [166] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [167] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [168] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [169] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [170] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [171] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [172] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [173] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [174] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [175] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [176] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [177] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [178] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [179] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [180] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [181] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [182] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [183] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [184] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [185] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [186] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [187] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [188] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [189] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [190] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [191] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [192] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [193] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [194] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [195] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [196] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [197] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [198] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	},
	/* [199] = */ {
		/* .stts = */ 0,
		/* .ap_num = */ 0,
		/* .ap_cnt = */ 0
	}
};

void RareGhostInit() {
	int i;
	
  int iVar1;
  RGOST_DSP_WRK *pRVar2;
  
  memset(rg_wrk,0,800);
  pRVar2 = rg_dsp_wrk;
  memset(rg_dsp_wrk,0,0x60);
  iVar1 = 2;
  do {
    pRVar2->rg_no = 0xff;
    iVar1 = iVar1 + -1;
    pRVar2->se_wrk_no = 0xff;
    pRVar2 = pRVar2 + 1;
  } while (-1 < iVar1);
  return;
}

void RareGhostEntrySet() {
	int i;
	int j;
	
  uchar *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 4;
  puVar1 = area_read_wrk.rgst + 4;
  do {
    *puVar1 = 0xff;
    iVar5 = iVar5 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar5);
  iVar5 = 4;
  do {
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    if (ap_wrk.pg_req[iVar5] != 0xff) {
      iVar3 = 0;
      if (DAT_00332698 != (ap_wrk.pg_req[iVar5] | 0x80)) {
        for (iVar3 = 1; (iVar3 < 5 && ((&DAT_00332698)[iVar3] != (ap_wrk.pg_req[iVar5] | 0x80)));
            iVar3 = iVar3 + 1) {
        }
      }
      if (iVar3 == 5) {
        pbVar2 = &DAT_00332698;
        iVar3 = 0;
        do {
          if ((((*pbVar2 & 0x80) == 0) || (*pbVar2 == 0xff)) && (area_read_wrk.rgst[iVar3] == 0xff))
          {
            area_read_wrk.rgst[iVar3] = ap_wrk.pg_req[iVar5] | 0x80;
            break;
          }
          iVar4 = iVar3 + 1;
          pbVar2 = &DAT_00332699 + iVar3;
          iVar3 = iVar4;
        } while (iVar4 < 5);
      }
    }
    pbVar2 = ap_wrk.pg_req + iVar5;
    iVar5 = iVar5 + 1;
    *pbVar2 = 0xff;
    if (4 < iVar5) {
      iVar5 = 4;
      do {
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      return;
    }
  } while( true );
}

int RareGhostLoadReq() {
	int i;
	int ret;
	
  int iVar1;
  uchar *puVar2;
  uint addr;
  int iVar3;
  
  iVar1 = 0xff;
  iVar3 = 0;
  puVar2 = area_read_wrk.rgst;
  addr = 0x1c90000;
  do {
    if (*puVar2 != 0xff) {
      if ((*puVar2 & 0x80) == 0) {
        iVar1 = *puVar2 + 0x110;
      }
      else {
        iVar1 = (*puVar2 & 0xffffff7f) + 0x111;
      }
      iVar1 = LoadReq(iVar1,addr);
      (&DAT_00332698)[iVar3] = *puVar2;
    }
    iVar3 = iVar3 + 1;
    addr = addr + 0x10000;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 5);
  return iVar1;
}

int RareGhostLoadGameLoadReq() {
	int i;
	int ret;
	
  int iVar1;
  byte *pbVar2;
  uint addr;
  int iVar3;
  
  iVar1 = 0xffff;
  addr = 0x1c90000;
  pbVar2 = &DAT_00332698;
  iVar3 = 4;
  do {
    if (*pbVar2 != 0xff) {
      if ((*pbVar2 & 0x80) == 0) {
        iVar1 = *pbVar2 + 0x110;
      }
      else {
        iVar1 = (*pbVar2 & 0xffffff7f) + 0x111;
      }
      iVar1 = LoadReq(iVar1,addr);
    }
    addr = addr + 0x10000;
    iVar3 = iVar3 + -1;
    pbVar2 = pbVar2 + 1;
  } while (-1 < iVar3);
  return iVar1;
}

void RareGhostMain() {
  return;
}

void RareGhostAppearCtrl() {
	int i;
	
  char cVar1;
  int iVar2;
  uchar uVar3;
  ushort uVar4;
  short *psVar5;
  RGOST_WRK *pRVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    iVar2 = iVar7 * 0x12;
    if (((&DAT_00326221)[iVar2] & 0x80) != 0) {
      pRVar6 = rg_wrk + iVar7;
      if (pRVar6->stts == 0) {
        if ((((ingame_wrk.clear_count <= (byte)(&DAT_00326222)[iVar2]) &&
             ((ushort)ingame_wrk.ghost_cnt <= (ushort)((ushort)(byte)(&DAT_00326223)[iVar2] * 10)))
            && (ingame_wrk.rg_pht_cnt <= (byte)(&DAT_00326224)[iVar2])) &&
           (ingame_wrk.high_score <= (uint)(byte)(&DAT_00326225)[iVar2] * 100)) {
          uVar3 = '\x01';
LAB_0019b388:
          pRVar6->stts = uVar3;
        }
      }
      else if (pRVar6->stts < 3) {
        psVar5 = &rg_wrk[iVar7].ap_cnt;
        cVar1 = (&DAT_00326228)[iVar2];
        *psVar5 = *psVar5 + (ushort)(byte)(&DAT_00326226)[iVar2] * (ushort)ap_wrk.gtime +
                  (ushort)(byte)(&DAT_00326227)[iVar2] * (ushort)ap_wrk.rtime;
        if (cVar1 != '\0') {
          uVar3 = GetRoomArea((&rg_ap_dat)[iVar2]);
          *psVar5 = *psVar5 + (ushort)(byte)(&DAT_00326228)[iVar2] *
                              (ushort)ap_wrk.atime[(char)uVar3];
        }
        uVar4 = *psVar5 + (ushort)(byte)(&DAT_00326229)[iVar2] * (ushort)ap_wrk.sound +
                (ushort)(byte)(&DAT_0032622a)[iVar2] * (ushort)ap_wrk.pic_num +
                (ushort)(byte)(&DAT_0032622b)[iVar2] * (ushort)ap_wrk.raze;
        *psVar5 = uVar4;
        if ((999 < uVar4) && (pRVar6->stts == '\x02')) {
          uVar3 = '\x03';
          goto LAB_0019b388;
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (2 < iVar7) {
      return;
    }
  } while( true );
}

void RareGhostDispCtrl() {
	int i;
	int j;
	int dsp_cnt;
	
  bool bVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  RGOST_DSP_WRK *pRVar5;
  int wrk_no;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar7 = 0;
  pRVar5 = rg_dsp_wrk;
  iVar6 = 2;
  do {
    puVar3 = &pRVar5->mode;
    pRVar5 = pRVar5 + 1;
    iVar6 = iVar6 + -1;
    if (*puVar3 != '\0') {
      iVar7 = iVar7 + 1;
    }
  } while (-1 < iVar6);
  if (iVar7 < 3) {
    pbVar8 = &DAT_00332698;
    iVar6 = 0;
    do {
      if (rg_wrk[*pbVar8].stts == '\x03') {
        iVar4 = RareGhostDispStartJudge((uint)*pbVar8);
        wrk_no = 0;
        if (iVar4 != 0) {
          bVar1 = rg_dsp_wrk[0].mode != '\0';
          rg_wrk[*pbVar8].stts = '\x04';
          if (bVar1) {
            for (wrk_no = 1; wrk_no < 3; wrk_no = wrk_no + 1) {
              if (rg_dsp_wrk[wrk_no].mode == '\0') {
                bVar2 = *pbVar8;
                goto LAB_0019b4d4;
              }
            }
          }
          bVar2 = *pbVar8;
LAB_0019b4d4:
          iVar7 = iVar7 + 1;
          RareGhostDispWrkSet(wrk_no,(uint)bVar2);
          if (iVar7 == 3) break;
        }
      }
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar8 + 1;
    } while (iVar6 < 5);
  }
  if (iVar7 != 0) {
    pRVar5 = rg_dsp_wrk;
    iVar6 = 0;
    do {
      if ((pRVar5->mode - 1 < 2) && (iVar4 = RareGhostDispEndJudge(iVar6), iVar4 != 0)) {
        pRVar5->mode = '\x03';
        pRVar5->count = 0;
        pRVar5->alp_bak = pRVar5->alpha;
        pRVar5->time = *(short *)(&rg_end_dat +
                                 (uint)(byte)(&DAT_00326286)[(uint)pRVar5->rg_no * 0xe] * 6);
      }
      iVar6 = iVar6 + 1;
      pRVar5 = pRVar5 + 1;
    } while (iVar6 < 3);
    if (iVar7 != 0) {
      iVar7 = 0;
      pRVar5 = rg_dsp_wrk;
      do {
        if (pRVar5->mode != '\0') {
          SetRareGhostDispAlpha(iVar7,(uint)pRVar5->rg_no);
          SetRareGhostDispAnimation(iVar7,(uint)pRVar5->rg_no);
          RareGhostDispTimeCtrl(iVar7,(uint)pRVar5->rg_no);
        }
        iVar7 = iVar7 + 1;
        pRVar5 = pRVar5 + 1;
      } while (iVar7 < 3);
    }
  }
  return;
}

int RareGhostDispStartJudge(int rg_no) {
	int dist;
	sceVu0FVECTOR room_pos;
	sceVu0FVECTOR rg_pos;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float room_pos [4];
  float rg_pos [4];
  
  iVar1 = rg_no * 0x12;
  iVar2 = GetRoomPos((&rg_ap_dat)[iVar1],room_pos);
  uVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = rg_no * 0xe;
    rg_pos[0] = (float)(int)*(short *)(&DAT_00326288 + iVar2) + room_pos[0];
    rg_pos[1] = (float)(int)*(short *)(&DAT_0032628a + iVar2) + room_pos[1];
    rg_pos[2] = (float)(int)*(short *)(&DAT_0032628c + iVar2) + room_pos[2];
    fVar4 = GetDistV(rg_pos,&plyr_wrk.move_box.spd.z);
    uVar3 = 0;
    if (((((int)(uint)*(ushort *)(&DAT_0032622c + iVar1) <= (int)fVar4) &&
         (uVar3 = 0, (int)fVar4 <= (int)(uint)*(ushort *)(&DAT_0032622e + iVar1))) &&
        (((*(ushort *)(&DAT_00326230 + iVar1) & 0x8000) == 0 ||
         (uVar3 = 0, plyr_wrk.dop._13_1_ == (&rg_ap_dat)[iVar1])))) &&
       ((((*(ushort *)(&DAT_00326230 + rg_no * 0x12) & 0x4000) == 0 ||
         (uVar3 = 0, plyr_wrk.mode == 1)) &&
        (uVar3 = 1, (*(ushort *)(&DAT_00326230 + rg_no * 0x12) & 0x2000) != 0)))) {
      uVar3 = plyr_wrk.sta & 1;
    }
  }
  return uVar3;
}

int RareGhostDispEndJudge(int wrk_no) {
	int rg_no;
	int dist;
	
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  bVar1 = rg_dsp_wrk[wrk_no].rg_no;
  fVar4 = GetDistV(rg_dsp_wrk[wrk_no].pos,&plyr_wrk.move_box.spd.z);
  iVar2 = (uint)bVar1 * 0x12;
  uVar3 = 1;
  if (((((int)(uint)*(ushort *)(&DAT_0032622c + iVar2) <= (int)fVar4) &&
       (uVar3 = 1, (int)fVar4 <= (int)(uint)*(ushort *)(&DAT_0032622e + iVar2))) &&
      (((*(ushort *)(&DAT_00326230 + iVar2) & 0x8000) == 0 ||
       (uVar3 = 1, plyr_wrk.dop._13_1_ == (&rg_ap_dat)[iVar2])))) &&
     ((((*(ushort *)(&DAT_00326230 + (uint)bVar1 * 0x12) & 0x4000) == 0 ||
       (uVar3 = 1, plyr_wrk.mode == 1)) &&
      (uVar3 = 0, (*(ushort *)(&DAT_00326230 + (uint)bVar1 * 0x12) & 0x2000) != 0)))) {
    uVar3 = plyr_wrk.sta & 1 ^ 1;
  }
  return uVar3;
}

void RareGhostDispTimeCtrl(int wrk_no, int rg_no) {
  byte bVar1;
  uchar uVar2;
  short sVar3;
  short sVar4;
  RG_DISP_DAT_0_ *pRVar5;
  RGOST_DSP_WRK *pRVar6;
  
  pRVar6 = rg_dsp_wrk + wrk_no;
  sVar3 = rg_dsp_wrk[wrk_no].time;
  sVar4 = rg_dsp_wrk[wrk_no].count + 1;
  rg_dsp_wrk[wrk_no].count = sVar4;
  if (sVar3 != sVar4) {
    return;
  }
  bVar1 = pRVar6->mode;
  if (bVar1 == 2) {
    uVar2 = rg_dsp_wrk[wrk_no].alpha;
    rg_dsp_wrk[wrk_no].count = 0;
    rg_dsp_wrk[wrk_no].alp_bak = uVar2;
    pRVar5 = &rg_end_dat;
    bVar1 = (&DAT_00326286)[rg_no * 0xe];
    pRVar6->mode = '\x03';
  }
  else {
    if (2 < bVar1) {
      if (bVar1 == 3) {
        rg_dsp_wrk[wrk_no].count = 0;
        rg_wrk[rg_no].stts = '\x02';
        rg_wrk[rg_no].ap_cnt = 0;
        pRVar6->mode = '\0';
        return;
      }
      return;
    }
    if (bVar1 != 1) {
      return;
    }
    uVar2 = rg_dsp_wrk[wrk_no].alpha;
    pRVar6->mode = '\x02';
    rg_dsp_wrk[wrk_no].alp_bak = uVar2;
    pRVar5 = &rg_inter_dat;
    bVar1 = (&DAT_00326285)[rg_no * 0xe];
    rg_dsp_wrk[wrk_no].count = 0;
  }
  rg_dsp_wrk[wrk_no].time = *(short *)(pRVar5 + (uint)bVar1 * 6);
  return;
}

void RareGhostDispEndSet(int wrk_no) {
  byte bVar1;
  
  if (rg_dsp_wrk[wrk_no].mode - 1 < 2) {
    bVar1 = rg_dsp_wrk[wrk_no].rg_no;
    rg_dsp_wrk[wrk_no].alp_bak = rg_dsp_wrk[wrk_no].alpha;
    rg_dsp_wrk[wrk_no].mode = '\x03';
    bVar1 = (&DAT_00326286)[(uint)bVar1 * 0xe];
    rg_dsp_wrk[wrk_no].count = 0;
    rg_dsp_wrk[wrk_no].time = *(short *)(&rg_end_dat + (uint)bVar1 * 6);
  }
  return;
}

void RareGhostDispWrkSet(int wrk_no, int rg_no) {
	sceVu0FVECTOR room_pos;
	
  uchar room_no;
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  float room_pos [4];
  
  room_no = (&rg_ap_dat)[rg_no * 0x12];
  rg_dsp_wrk[wrk_no].rg_no = (uchar)rg_no;
  rg_dsp_wrk[wrk_no].mode = '\x01';
  GetRoomPos(room_no,room_pos);
  iVar5 = rg_no * 0xe;
  bVar1 = (&DAT_00326284)[iVar5];
  sVar2 = *(short *)(&DAT_0032628a + iVar5);
  sVar3 = *(short *)(&DAT_00326288 + iVar5);
  sVar4 = *(short *)(&DAT_0032628c + iVar5);
  rg_dsp_wrk[wrk_no].count = 0;
  rg_dsp_wrk[wrk_no].time = *(short *)(&rg_start_dat + (uint)bVar1 * 6);
  rg_dsp_wrk[wrk_no].pos[0] = (float)(int)sVar3 + room_pos[0];
  rg_dsp_wrk[wrk_no].pos[1] = (float)(int)sVar2 + room_pos[1];
  rg_dsp_wrk[wrk_no].pos[2] = (float)(int)sVar4 + room_pos[2];
  SetRareGhostDispAlpha(wrk_no,rg_no);
  SetRareGhostDispAnimation(wrk_no,rg_no);
  return;
}

void SetRareGhostDispAlpha(int wrk_no, int rg_no) {
	int count;
	int cnt_min;
	u_char alp_no;
	u_char stts;
	u_char alpha;
	u_char mode;
	RG_ALP_DAT *rg_alp;
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  RG_DISP_DAT_0_ *pRVar6;
  int iVar7;
  ushort *in_a2_lo;
  RG_ALP_DAT___0_ *pRVar8;
  
  bVar1 = rg_dsp_wrk[wrk_no].mode;
  uVar2 = rg_dsp_wrk[wrk_no].count;
  if (bVar1 == 2) {
    pRVar6 = &rg_inter_dat;
    pRVar8 = &rg_alp_inter;
    uVar4 = (uint)(byte)(&DAT_00326285)[rg_no * 0xe];
  }
  else if (bVar1 < 3) {
    if (bVar1 != 1) goto LAB_0019bc38;
    pRVar6 = &rg_start_dat;
    pRVar8 = &rg_alp_start;
    uVar4 = (uint)(byte)(&DAT_00326284)[rg_no * 0xe];
  }
  else {
    if (bVar1 != 3) goto LAB_0019bc38;
    pRVar6 = &rg_end_dat;
    pRVar8 = &rg_alp_end;
    uVar4 = (uint)(byte)(&DAT_00326286)[rg_no * 0xe];
  }
  in_a2_lo = *(ushort **)(pRVar8 + (uint)(byte)pRVar6[uVar4 * 6 + 2] * 4);
LAB_0019bc38:
  if (uVar2 == 0) {
    if (bVar1 == 1) {
      rg_dsp_wrk[wrk_no].alp_bak = *(uchar *)(in_a2_lo + 1);
      uVar3 = *in_a2_lo;
    }
    else {
      uVar3 = *in_a2_lo;
    }
  }
  else {
    uVar3 = *in_a2_lo;
  }
  if (uVar3 < uVar2) {
    iVar7 = 0;
    puVar5 = in_a2_lo;
    do {
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + 4;
    } while (*puVar5 < uVar2);
    in_a2_lo = (ushort *)(iVar7 + (int)in_a2_lo);
  }
  uVar3 = *in_a2_lo;
  if (uVar3 == uVar2) {
    rg_dsp_wrk[wrk_no].alp_bak = *(uchar *)(in_a2_lo + -1);
    uVar3 = *in_a2_lo;
    bVar1 = *(byte *)((int)in_a2_lo + 3);
  }
  else {
    bVar1 = *(byte *)((int)in_a2_lo + 3);
  }
  if (bVar1 == 0) {
    rg_dsp_wrk[wrk_no].alpha = *(byte *)(in_a2_lo + 1);
    return;
  }
  if (bVar1 < 3) {
    iVar7 = (uint)uVar3 - (uint)in_a2_lo[-2];
    if (iVar7 == 0) {
      trap(7);
    }
    rg_dsp_wrk[wrk_no].alpha =
         rg_dsp_wrk[wrk_no].alp_bak +
         (char)((int)(((uint)*(byte *)(in_a2_lo + 1) - (uint)rg_dsp_wrk[wrk_no].alp_bak) *
                     ((uint)uVar2 - (uint)in_a2_lo[-2])) / iVar7);
  }
  return;
}

void SetRareGhostDispAnimation(int wrk_no, int rg_no) {
  rg_dsp_wrk[wrk_no].dsp_no = '\0';
  return;
}

float SetRareGhostDispRate(int wrk_no) {
  return 0.0;
}
