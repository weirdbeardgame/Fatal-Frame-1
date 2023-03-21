// STATUS: NOT STARTED

typedef struct {
	sceVu0FVECTOR st;
	sceVu0FVECTOR vp;
	sceVu0FVECTOR clip;
} SNODE;

typedef struct {
	SNODE node0[10];
	SNODE node1[10];
	SNODE *in;
	SNODE *out;
	int nodes;
} FlipNode;

typedef struct {
	int s;
	int e;
} BoundLine;

SgCAMERA scamera = {
	/* .p = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 120.f,
		/* [2] = */ 55.f,
		/* [3] = */ 0.f
	},
	/* .i = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 120.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .roll = */ 0.f,
	/* .fov = */ 1.04719746f,
	/* .nearz = */ 0.100000001f,
	/* .farz = */ 32768.f,
	/* .ax = */ 1.f,
	/* .ay = */ 1.f,
	/* .cx = */ 2048.f,
	/* .cy = */ 2048.f,
	/* .zmin = */ 0.f,
	/* .zmax = */ 16777000.f,
	/* .pad = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	},
	/* .vs = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .vc = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .vcv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .ws = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wc = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .wcv = */ {
		/* [0] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .zd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .yd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
static int write_flg = 0;
static sceVu0FMATRIX *LWSMtx = 0x70000090;
static sceVu0FMATRIX *LCMtx = 0x700000d0;
static sceVu0FMATRIX *LIPMatrix = 0x70000140;
static sceVu0IVECTOR *shadow_col = 0x70000180;
static u_int *common_vector = NULL;
static int shadow_dbg_flg = 0;
static int shadow_apgnum = -1;
static sceVu0FVECTOR ndirection;
static sceVu0FVECTOR spos;
static sceVu0FMATRIX InverseMatrix;
static sceVu0FMATRIX IPMatrix;
static sceVu0FMATRIX CullingMatrix;
static int write_counter;
static sceVu0FVECTOR wbbox[8];

void ShadowDbgOn() {
  shadow_dbg_flg = 1;
  return;
}

void ShadowDbgOff() {
  shadow_dbg_flg = 0;
  return;
}

void ShadowInit() {
  shadowtex.addr = 0xa0000;
  shadowtex.scale = DAT_00355aa0;
  shadowtex.max_height = 0x100;
  shadowtex.max_width = 0x100;
  return;
}

void SetShadowTexSize(u_int width, u_int height) {
  shadowtex.max_height = height;
  shadowtex.max_width = width;
  return;
}

void SetShadowTexAddr(u_int addr) {
  shadowtex.addr = addr;
  return;
}

void SetShadowFundamentScale(float size) {
  shadowtex.fund_scale = size;
  return;
}

void SetShadowAssignGroup(int gnum) {
  shadow_apgnum = gnum;
  return;
}

void TransShadowClut() {
	static qword shadow_pal[71] = {
		/* [0] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [2] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [3] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [4] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [5] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [6] = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* [7] = */ {
			/* [0] = */ 0,
			/* [1] = */ 16777216,
			/* [2] = */ 33554432,
			/* [3] = */ 50331648
		},
		/* [8] = */ {
			/* [0] = */ 67108864,
			/* [1] = */ 83886080,
			/* [2] = */ 100663296,
			/* [3] = */ 117440512
		},
		/* [9] = */ {
			/* [0] = */ 134217728,
			/* [1] = */ 150994944,
			/* [2] = */ 167772160,
			/* [3] = */ 184549376
		},
		/* [10] = */ {
			/* [0] = */ 201326592,
			/* [1] = */ 218103808,
			/* [2] = */ 234881024,
			/* [3] = */ 251658240
		},
		/* [11] = */ {
			/* [0] = */ 268435456,
			/* [1] = */ 285212672,
			/* [2] = */ 301989888,
			/* [3] = */ 318767104
		},
		/* [12] = */ {
			/* [0] = */ 335544320,
			/* [1] = */ 352321536,
			/* [2] = */ 369098752,
			/* [3] = */ 385875968
		},
		/* [13] = */ {
			/* [0] = */ 402653184,
			/* [1] = */ 419430400,
			/* [2] = */ 436207616,
			/* [3] = */ 452984832
		},
		/* [14] = */ {
			/* [0] = */ 469762048,
			/* [1] = */ 486539264,
			/* [2] = */ 503316480,
			/* [3] = */ 520093696
		},
		/* [15] = */ {
			/* [0] = */ 536870912,
			/* [1] = */ 553648128,
			/* [2] = */ 570425344,
			/* [3] = */ 587202560
		},
		/* [16] = */ {
			/* [0] = */ 603979776,
			/* [1] = */ 620756992,
			/* [2] = */ 637534208,
			/* [3] = */ 654311424
		},
		/* [17] = */ {
			/* [0] = */ 671088640,
			/* [1] = */ 687865856,
			/* [2] = */ 704643072,
			/* [3] = */ 721420288
		},
		/* [18] = */ {
			/* [0] = */ 738197504,
			/* [1] = */ 754974720,
			/* [2] = */ 771751936,
			/* [3] = */ 788529152
		},
		/* [19] = */ {
			/* [0] = */ 805306368,
			/* [1] = */ 822083584,
			/* [2] = */ 838860800,
			/* [3] = */ 855638016
		},
		/* [20] = */ {
			/* [0] = */ 872415232,
			/* [1] = */ 889192448,
			/* [2] = */ 905969664,
			/* [3] = */ 922746880
		},
		/* [21] = */ {
			/* [0] = */ 939524096,
			/* [1] = */ 956301312,
			/* [2] = */ 973078528,
			/* [3] = */ 989855744
		},
		/* [22] = */ {
			/* [0] = */ 1006632960,
			/* [1] = */ 1023410176,
			/* [2] = */ 1040187392,
			/* [3] = */ 1056964608
		},
		/* [23] = */ {
			/* [0] = */ 1073741824,
			/* [1] = */ 1090519040,
			/* [2] = */ 1107296256,
			/* [3] = */ 1124073472
		},
		/* [24] = */ {
			/* [0] = */ 1140850688,
			/* [1] = */ 1157627904,
			/* [2] = */ 1174405120,
			/* [3] = */ 1191182336
		},
		/* [25] = */ {
			/* [0] = */ 1207959552,
			/* [1] = */ 1224736768,
			/* [2] = */ 1241513984,
			/* [3] = */ 1258291200
		},
		/* [26] = */ {
			/* [0] = */ 1275068416,
			/* [1] = */ 1291845632,
			/* [2] = */ 1308622848,
			/* [3] = */ 1325400064
		},
		/* [27] = */ {
			/* [0] = */ 1342177280,
			/* [1] = */ 1358954496,
			/* [2] = */ 1375731712,
			/* [3] = */ 1392508928
		},
		/* [28] = */ {
			/* [0] = */ 1409286144,
			/* [1] = */ 1426063360,
			/* [2] = */ 1442840576,
			/* [3] = */ 1459617792
		},
		/* [29] = */ {
			/* [0] = */ 1476395008,
			/* [1] = */ 1493172224,
			/* [2] = */ 1509949440,
			/* [3] = */ 1526726656
		},
		/* [30] = */ {
			/* [0] = */ 1543503872,
			/* [1] = */ 1560281088,
			/* [2] = */ 1577058304,
			/* [3] = */ 1593835520
		},
		/* [31] = */ {
			/* [0] = */ 1610612736,
			/* [1] = */ 1627389952,
			/* [2] = */ 1644167168,
			/* [3] = */ 1660944384
		},
		/* [32] = */ {
			/* [0] = */ 1677721600,
			/* [1] = */ 1694498816,
			/* [2] = */ 1711276032,
			/* [3] = */ 1728053248
		},
		/* [33] = */ {
			/* [0] = */ 1744830464,
			/* [1] = */ 1761607680,
			/* [2] = */ 1778384896,
			/* [3] = */ 1795162112
		},
		/* [34] = */ {
			/* [0] = */ 1811939328,
			/* [1] = */ 1828716544,
			/* [2] = */ 1845493760,
			/* [3] = */ 1862270976
		},
		/* [35] = */ {
			/* [0] = */ 1879048192,
			/* [1] = */ 1895825408,
			/* [2] = */ 1912602624,
			/* [3] = */ 1929379840
		},
		/* [36] = */ {
			/* [0] = */ 1946157056,
			/* [1] = */ 1962934272,
			/* [2] = */ 1979711488,
			/* [3] = */ 1996488704
		},
		/* [37] = */ {
			/* [0] = */ 2013265920,
			/* [1] = */ 2030043136,
			/* [2] = */ 2046820352,
			/* [3] = */ 2063597568
		},
		/* [38] = */ {
			/* [0] = */ 2080374784,
			/* [1] = */ 2097152000,
			/* [2] = */ 2113929216,
			/* [3] = */ 2130706432
		},
		/* [39] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [40] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [41] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [42] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [43] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [44] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [45] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [46] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [47] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [48] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [49] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [50] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [51] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [52] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [53] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [54] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [55] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [56] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [57] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [58] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [59] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [60] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [61] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [62] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [63] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [64] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [65] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [66] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [67] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [68] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [69] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		},
		/* [70] = */ {
			/* [0] = */ -2147483648,
			/* [1] = */ -2147483648,
			/* [2] = */ -2147483648,
			/* [3] = */ -2147483648
		}
	};
	
  shadow_pal_132 = 0;
  DAT_00303fb0 = (long)(int)(shadowtex.addr >> 6) << 0x20 | 0x1000000000000;
  DAT_00303f9c = 0x50000046;
  DAT_00303fa0 = 0x4000000000000001;
  DAT_00303fa8 = 0xeeee;
  DAT_00303fb8 = 0x50;
  DAT_00303fc8 = 0x51;
  DAT_00303fd0 = 0x1000000010;
  DAT_00303fd8 = 0x52;
  DAT_00303fe8 = 0x53;
  DAT_00303ff0 = 0x800000000008040;
  DAT_00303f94 = 0;
  DAT_00303f98 = 0;
  DAT_00303fc0 = 0;
  DAT_00303fe0 = 0;
  AppendDmaTag((uint)&shadow_pal_132,0x47);
  return;
}

void GetShadowTexture() {
	sceGsStoreImage spi;
	
  sceGsStoreImage spi;
  
                    /* end of inlined section */
  return;
}

void DispShadowSprite() {
	dword *base;
	sceVu0IVECTOR urp;
	sceVu0IVECTOR dlp;
	float *v0;
	float *v0;
	
  float (*pafVar1) [4];
  int iVar2;
  int urp [4];
  int dlp [4];
  
  GetShadowTexture();
  iVar2 = sbuffer_p;
  pafVar1 = objwork;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  objwork[sbuffer_p + 2][0] = 0.0;
  pafVar1[iVar2 + 2][1] = 8.96831e-44;
  pafVar1[iVar2 + 2][3] = 1.793662e-43;
  pafVar1[iVar2 + 2][2] = 0.0;
  *(undefined8 *)pafVar1[iVar2 + 1] = 0x3003400000008001;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  *(undefined8 *)(pafVar1[iVar2 + 1] + 2) = 0x441;
  *(undefined8 *)pafVar1[iVar2 + 5] = 0x702b400000008001;
  pafVar1[iVar2 + 3][0] = 4.589533e-41;
  pafVar1[iVar2 + 3][1] = 4.356357e-41;
  pafVar1[iVar2 + 3][3] = 0.0;
  pafVar1[iVar2 + 3][2] = 3.363116e-40;
  pafVar1[iVar2 + 4][0] = 4.881003e-41;
  pafVar1[iVar2 + 4][1] = 4.504334e-41;
  pafVar1[iVar2 + 4][3] = 0.0;
  pafVar1[iVar2 + 4][2] = 3.363116e-40;
  *(undefined8 *)(pafVar1[iVar2 + 5] + 2) = 0x4124126;
  *(ulong *)pafVar1[iVar2 + 6] =
       (long)(int)(shadowtex.addr >> 6) | 0x2000000000000000U |
       (ulong)shadowtex.height_p << 0x1e | 0x200000 |
       (ulong)((long)(int)(shadowtex.width >> 6) << 0x20) >> 0x12 | (ulong)shadowtex.width_p << 0x1a
       | 0x400000000;
  pafVar1[iVar2 + 7][0] = 0.0;
  pafVar1[iVar2 + 8][3] = 1.793662e-43;
  pafVar1[iVar2 + 7][1] = 0.0;
  pafVar1[iVar2 + 7][2] = 1.0;
  pafVar1[iVar2 + 7][3] = 0.0;
  pafVar1[iVar2 + 8][0] = 1.793662e-43;
  pafVar1[iVar2 + 8][1] = 1.793662e-43;
  pafVar1[iVar2 + 8][2] = 1.793662e-43;
                    /* inlined from libsg.h */
  pafVar1[iVar2 + 9][0] = 4.591775e-41;
  pafVar1[iVar2 + 9][1] = 4.358599e-41;
  pafVar1[iVar2 + 9][2] = 3.363116e-40;
  pafVar1[iVar2 + 9][3] = 0.0;
                    /* end of inlined section */
  pafVar1[iVar2 + 10][0] = 1.0;
  pafVar1[iVar2 + 0xb][3] = 1.793662e-43;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pafVar1[iVar2 + 10][2] = 1.0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pafVar1[iVar2 + 10][1] = 1.0;
  pafVar1[iVar2 + 10][3] = 0.0;
  pafVar1[iVar2 + 0xb][0] = 1.793662e-43;
  pafVar1[iVar2 + 0xb][1] = 1.793662e-43;
  pafVar1[iVar2 + 0xb][2] = 1.793662e-43;
                    /* inlined from libsg.h */
  pafVar1[iVar2 + 0xc][0] = 4.878761e-41;
  pafVar1[iVar2 + 0xc][1] = 4.502092e-41;
  pafVar1[iVar2 + 0xc][2] = 3.363116e-40;
  pafVar1[iVar2 + 0xc][3] = 0.0;
                    /* end of inlined section */
  AppendDmaBufferFromEndAddress((int (*) [4])pafVar1[iVar2 + 0xd]);
  return;
}

void GetInverseMatrix(float *inv[4], float *org[4]) {
	int i;
	sceVu0FVECTOR tmpv;
	sceVu0FMATRIX rot;
	sceVu0FMATRIX scale;
	sceVu0FMATRIX trans;
	
  float *pfVar1;
  Vector4 *pVVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float tmpv [4];
  float rot [4] [4];
  float scale [4] [4];
  float trans [4] [4];
  
  iVar3 = 2;
  sceVu0UnitMatrix((Matrix4x4 *)(Vector4 *)rot);
  sceVu0UnitMatrix((Matrix4x4 *)trans);
  sceVu0ScaleVector(-1.0,(Vector4 *)trans[3],(Vector4 *)org[3]);
  pfVar1 = rot + 2;
  pfVar4 = rot + 1;
  pVVar2 = (Vector4 *)rot;
  do {
    iVar3 = iVar3 + -1;
    fVar5 = (*(float (*) [4])((int)org + 0x10))[0];
    ((Vector4 *)&pVVar2->x)->x = *(float *)org;
    pVVar2 = pVVar2 + 1;
    fVar6 = (*(float (*) [4])((int)org + 0x20))[0];
    *pfVar4 = fVar5;
    org = (float (*) [4])((int)org + 4);
    *pfVar1 = fVar6;
    pfVar4 = pfVar4 + 4;
    pfVar1 = pfVar1 + 4;
  } while (-1 < iVar3);
  sceVu0UnitMatrix((Matrix4x4 *)scale);
  iVar3 = 2;
  pfVar4 = (float *)scale;
  pVVar2 = (Vector4 *)rot;
  do {
    fVar5 = (float)sceVu0InnerProduct(pVVar2,pVVar2);
    pVVar2 = pVVar2 + 1;
    iVar3 = iVar3 + -1;
    fVar5 = SgRSqrtf(fVar5);
    *pfVar4 = fVar5;
    pfVar4 = pfVar4 + 5;
  } while (-1 < iVar3);
  _MulMatrix(inv,(float (*) [4])(Vector4 *)rot,scale);
  _MulMatrix(inv,inv,(float (*) [4])(Matrix4x4 *)trans);
  return;
}

void SetVU1HeaderShadow() {
	sceVu0FVECTOR *svec;
	sceVu0FVECTOR *dvec;
	int i;
	float *v0;
	float *v1;
	
  float (*pafVar1) [4];
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pfVar3 = (float *)&DAT_70000000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  iVar2 = 0x19;
                    /* inlined from libsg.h */
  pafVar1 = objwork[sbuffer_p];
  do {
    fVar4 = pfVar3[1];
    fVar5 = pfVar3[2];
    fVar6 = pfVar3[3];
    (*pafVar1)[0] = *pfVar3;
    (*pafVar1)[1] = fVar4;
    (*pafVar1)[2] = fVar5;
    (*pafVar1)[3] = fVar6;
                    /* end of inlined section */
    pafVar1 = pafVar1[1];
    pfVar3 = pfVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  AppendDmaBuffer(0x1a);
  FlushModel(0);
  return;
}

static void _CalcWeightedVertexSM(float *dp, float *v) {
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v);
  _vmulabc(in_vf4,auVar1);
  _vmaddabc(in_vf5,auVar1);
  _vmaddabc(in_vf6,auVar1);
  _vmaddbc(in_vf7,in_vf0);
  _vsubbc(in_vf0,auVar1);
  auVar2 = _vmove(auVar1);
  auVar1 = _lqc2(*(undefined (*) [16])(v + 4));
  _vmulabc(in_vf8,auVar1);
  _vmaddabc(in_vf9,auVar1);
  _vmaddabc(in_vf10,auVar1);
  auVar1 = _vmaddbc(in_vf11,in_vf0);
  _vmulabc(auVar2,auVar2);
  _vmaddbc(auVar1,auVar1);
  auVar1 = _vmove(in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])dp = auVar1;
  return;
}

static void _CalcWeightedVertexBufferSM(float *dp, float *v) {
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v);
  _vmulabc(in_vf4,auVar1);
  _vmaddabc(in_vf5,auVar1);
  _vmaddabc(in_vf6,auVar1);
  _vmaddbc(in_vf7,in_vf0);
  _vsubbc(in_vf0,auVar1);
  auVar2 = _vmove(auVar1);
  auVar1 = _lqc2(*(undefined (*) [16])(v + 4));
  _vmulabc(in_vf8,auVar1);
  _vmaddabc(in_vf9,auVar1);
  _vmaddabc(in_vf10,auVar1);
  auVar1 = _vmaddbc(in_vf11,in_vf0);
  _vmulabc(auVar2,auVar2);
  _vmaddbc(auVar1,auVar1);
  auVar1 = _vmove(in_vf0);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])dp = auVar1;
  return;
}

static void _CalcVertexSM(float *dp, float *v) {
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v);
  _vmulabc(in_vf4,auVar1);
  _vmaddabc(in_vf5,auVar1);
  _vmaddabc(in_vf6,auVar1);
  auVar1 = _vmaddbc(in_vf7,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])dp = auVar1;
  return;
}

void CalcVertexBufferShadow(u_int *prim) {
	int i;
	int j;
	VERTEXLIST *vli;
	sceVu0FVECTOR *vpd;
	sceVu0FVECTOR *vps;
	
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float (*dp) [4];
  float (*v) [4];
  
  if (prim[3] != 0) {
    puVar1 = lphead->pWeightedList;
    iVar5 = 0;
    if ((puVar1 != (uint *)0x0) &&
       (v = lphead->pWeightedVertex, dp = vertex_buffer, 0 < (int)*puVar1)) {
      do {
        iVar4 = 0;
        _SetLWMatrix0((float (*) [4])&lcp[*(short *)(puVar1 + iVar5 * 2 + 1)].workm);
        _SetLWMatrix1((float (*) [4])&lcp[*(short *)((int)puVar1 + iVar5 * 8 + 6)].workm);
        iVar3 = iVar5 + 1;
        if (*(short *)(puVar1 + iVar5 * 2 + 2) == 0) {
          uVar2 = *puVar1;
        }
        else {
          do {
            _CalcWeightedVertexSM((float *)dp,(float *)v);
            iVar4 = iVar4 + 1;
            dp = dp[1];
            v = v[2];
          } while (iVar4 < (int)(uint)*(ushort *)(puVar1 + iVar5 * 2 + 2));
          uVar2 = *puVar1;
        }
        iVar5 = iVar3;
      } while (iVar3 < (int)uVar2);
    }
  }
  return;
}

u_int* SetVUVNDataShadowModel(u_int *prim) {
	int i;
	VUVN_PRIM *vh;
	sceVu0FVECTOR *vp;
	sceVu0FVECTOR tmpvec;
	char *cn;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  char cVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  float **ppfVar9;
  float (*pafVar10) [4];
  float (*dp) [4];
  float *pfVar11;
  uint *puVar12;
  float tmpvec [4];
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar10 = objwork[sbuffer_p];
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  (*pafVar10)[1] = 6.262236e+26;
  (*pafVar10)[0] = 2.351277e-38;
  puVar12 = prim + 2;
  (*pafVar10)[2] = (float)prim[8];
  (*pafVar10)[3] = (float)prim[9];
  pafVar10[1][0] = (float)prim[10];
  fVar6 = (float)prim[0xb];
  pafVar10[1][2] = 2.351061e-38;
  pafVar10[1][1] = fVar6;
  ppfVar9 = (float **)(prim + 0xc);
  pafVar10[1][3] = (float)((int)*(short *)(prim + 2) << 0x10 | 0x6c008001);
  cVar1 = *(char *)((int)prim + 0xd);
  pafVar10 = pafVar10[2];
  if (cVar1 == '\x02') {
    if (lphead->pWeightedList == (uint *)0x0) {
      pfVar11 = *ppfVar9;
      lVar5 = 0;
      _SetLWMatrix0((float (*) [4])&lcp[*(char *)(pfVar11 + 7)].workm);
      _SetLWMatrix1((float (*) [4])&lcp[*(char *)((int)pfVar11 + 0x1d)].workm);
      dp = pafVar10;
      if (0 < *(short *)puVar12) {
        do {
          lVar5 = (long)((int)lVar5 + 1);
          pafVar10 = dp[1];
          _CalcWeightedVertexSM((float *)dp,*ppfVar9);
          ppfVar9 = ppfVar9 + 2;
          dp = pafVar10;
        } while (lVar5 < *(short *)puVar12);
      }
    }
    else {
      lVar5 = (long)*(short *)puVar12;
      if (0 < lVar5) {
        do {
                    /* inlined from libsg.h */
          puVar3 = (undefined8 *)*ppfVar9;
          uVar4 = *puVar3;
          fVar6 = *(float *)(puVar3 + 1);
          fVar7 = *(float *)((int)puVar3 + 0xc);
          (*pafVar10)[0] = (float)uVar4;
          (*pafVar10)[1] = (float)((ulong)uVar4 >> 0x20);
          (*pafVar10)[2] = fVar6;
          (*pafVar10)[3] = fVar7;
                    /* end of inlined section */
          lVar5 = (long)((int)lVar5 + -1);
          pafVar10 = pafVar10[1];
          ppfVar9 = ppfVar9 + 2;
        } while (lVar5 != 0);
      }
    }
  }
  else {
    if (cVar1 < '\x03') {
      if (cVar1 == '\0') {
        _SetLWMatrix0((float (*) [4])&DAT_70000430);
        lVar5 = (long)*(short *)puVar12;
        if (lVar5 < 1) {
          return (uint *)pafVar10;
        }
        do {
                    /* inlined from libsg.h */
          puVar3 = (undefined8 *)*ppfVar9;
          uVar4 = *puVar3;
          fVar6 = *(float *)(puVar3 + 1);
          fVar7 = *(float *)((int)puVar3 + 0xc);
          (*pafVar10)[0] = (float)uVar4;
          (*pafVar10)[1] = (float)((ulong)uVar4 >> 0x20);
          (*pafVar10)[2] = fVar6;
          (*pafVar10)[3] = fVar7;
                    /* end of inlined section */
          pafVar10 = pafVar10[1];
          ppfVar9 = ppfVar9 + 2;
          lVar5 = (long)((int)lVar5 + -1);
        } while (lVar5 != 0);
        return (uint *)pafVar10;
      }
      sVar2 = *(short *)puVar12;
    }
    else {
      if (cVar1 == '\x03') {
        lVar5 = (long)*(short *)puVar12;
        if (lphead->pWeightedList == (uint *)0x0) {
          lVar8 = 0;
          if (lVar5 < 1) {
            return (uint *)pafVar10;
          }
          pfVar11 = *ppfVar9;
          while( true ) {
            lVar8 = (long)((int)lVar8 + 1);
            _SetLWMatrix0((float (*) [4])&lcp[*(char *)(pfVar11 + 7)].workm);
            _SetLWMatrix1((float (*) [4])&lcp[*(char *)((int)pfVar11 + 0x1d)].workm);
            pfVar11 = *ppfVar9;
            ppfVar9 = ppfVar9 + 2;
            _CalcWeightedVertexSM((float *)pafVar10,pfVar11);
            if (*(short *)puVar12 <= lVar8) break;
            pfVar11 = *ppfVar9;
            pafVar10 = pafVar10[1];
          }
          return (uint *)pafVar10[1];
        }
        if (lVar5 < 1) {
          return (uint *)pafVar10;
        }
        do {
                    /* inlined from libsg.h */
          puVar3 = (undefined8 *)*ppfVar9;
          uVar4 = *puVar3;
          fVar6 = *(float *)(puVar3 + 1);
          fVar7 = *(float *)((int)puVar3 + 0xc);
          (*pafVar10)[0] = (float)uVar4;
          (*pafVar10)[1] = (float)((ulong)uVar4 >> 0x20);
          (*pafVar10)[2] = fVar6;
          (*pafVar10)[3] = fVar7;
                    /* end of inlined section */
          lVar5 = (long)((int)lVar5 + -1);
          pafVar10 = pafVar10[1];
          ppfVar9 = ppfVar9 + 2;
        } while (lVar5 != 0);
        return (uint *)pafVar10;
      }
      sVar2 = *(short *)puVar12;
    }
    lVar5 = (long)sVar2;
    if (0 < lVar5) {
      do {
                    /* inlined from libsg.h */
        puVar3 = (undefined8 *)*ppfVar9;
        uVar4 = *puVar3;
        fVar6 = *(float *)(puVar3 + 1);
        fVar7 = *(float *)((int)puVar3 + 0xc);
        (*pafVar10)[0] = (float)uVar4;
        (*pafVar10)[1] = (float)((ulong)uVar4 >> 0x20);
        (*pafVar10)[2] = fVar6;
        (*pafVar10)[3] = fVar7;
                    /* end of inlined section */
        lVar5 = (long)((int)lVar5 + -1);
        pafVar10 = pafVar10[1];
        ppfVar9 = ppfVar9 + 2;
      } while (lVar5 != 0);
    }
  }
  return (uint *)pafVar10;
}

void ShadowModelMesh(u_int *prim) {
	int mtype;
	u_int *read_p;
	
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float (*pafVar4) [4];
  
  puVar1 = vuvnprim;
  bVar3 = *(byte *)((int)prim + 0xd) & 0xd3;
  if (bVar3 == 2) {
    puVar2 = SetVUVNDataShadowModel(vuvnprim);
    puVar2[3] = 0x17000000;
    *puVar2 = 0x14000477;
    puVar2[2] = (uint)&DAT_11000000;
    puVar2[1] = 0x17000000;
    AppendDmaTag((uint)(prim + 4),prim[2]);
    AppendDmaBuffer(*(short *)(puVar1 + 2) + 3);
    FlushModel(0);
    return;
  }
  if (bVar3 < 3) {
    if ((*(byte *)((int)prim + 0xd) & 0xd3) == 0) {
      puVar2 = SetVUVNDataShadowModel(vuvnprim);
      puVar2[3] = 0x17000000;
      *puVar2 = 0x140004a8;
      puVar2[2] = (uint)&DAT_11000000;
      puVar2[1] = 0x17000000;
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaBuffer(*(short *)(puVar1 + 2) + 3);
      FlushModel(0);
      return;
    }
  }
  else {
    if (bVar3 == 0x80) {
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pafVar4 = objwork[sbuffer_p];
                    /* end of inlined section */
      (*pafVar4)[3] = 4.135903e-25;
      (*pafVar4)[0] = 6.463267e-27;
      (*pafVar4)[2] = (float)&DAT_11000000;
      (*pafVar4)[1] = 4.135903e-25;
      AppendDmaBuffer(1);
      FlushModel(0);
      return;
    }
    if (bVar3 == 0x82) {
      AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
      AppendDmaTag((uint)(prim + 4),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pafVar4 = objwork[sbuffer_p];
                    /* end of inlined section */
      (*pafVar4)[3] = 4.135903e-25;
      (*pafVar4)[0] = 6.463229e-27;
      (*pafVar4)[2] = (float)&DAT_11000000;
      (*pafVar4)[1] = 4.135903e-25;
      AppendDmaBuffer(1);
      FlushModel(0);
      return;
    }
  }
  return;
}

void DrawShadowModelPrim(u_int *prim) {
	u_int *read_p;
	float *m0[4];
	
  uint *puVar1;
  float afVar2 [4];
  _SgCOORDUNIT *p_Var3;
  uint **ppuVar4;
  float (*pafVar5) [4];
  uint **ppuVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  if (prim != (uint *)0x0) {
    ppuVar4 = (uint **)*prim;
    p_Var3 = lcp;
    while (ppuVar6 = ppuVar4, lcp = p_Var3, ppuVar6 != (uint **)0x0) {
      puVar1 = ((uint **)prim)[1];
      if (puVar1 == (uint *)0x1) {
        ShadowModelMesh(prim);
        ppuVar6 = (uint **)*prim;
        ppuVar4 = (uint **)vuvnprim;
      }
      else {
        ppuVar4 = (uint **)prim;
        if (puVar1 != (uint *)0x0) {
          ppuVar4 = (uint **)vuvnprim;
          if (puVar1 == (uint *)0x3) {
            if (((uint **)prim)[3] != (uint *)0x0) {
              CalcVertexBufferShadow(prim);
                    /* inlined from libsg.h */
              pafVar5 = objwork[sbuffer_p];
                    /* end of inlined section */
              (*pafVar5)[0] = 0.0;
              (*pafVar5)[1] = 0.0;
              (*pafVar5)[2] = 2.351277e-38;
              (*pafVar5)[3] = 6.383134e+26;
                    /* inlined from libsg.h */
              auVar7 = _lqc2((undefined  [16])SgWSMtx.matrix[0]);
              auVar8 = _lqc2((undefined  [16])SgWSMtx.matrix[1]);
              auVar9 = _lqc2((undefined  [16])SgWSMtx.matrix[2]);
              auVar10 = _lqc2((undefined  [16])SgWSMtx.matrix[3]);
              afVar2 = (float  [4])_sqc2(auVar7);
              pafVar5[1] = afVar2;
              afVar2 = (float  [4])_sqc2(auVar8);
              pafVar5[2] = afVar2;
              afVar2 = (float  [4])_sqc2(auVar9);
              pafVar5[3] = afVar2;
              afVar2 = (float  [4])_sqc2(auVar10);
              pafVar5[4] = afVar2;
                    /* end of inlined section */
              goto LAB_0017b71c;
            }
          }
          else if (puVar1 == (uint *)&o_fx_int) {
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
            pafVar5 = objwork[sbuffer_p];
                    /* end of inlined section */
            (*pafVar5)[0] = 0.0;
            (*pafVar5)[1] = 0.0;
            (*pafVar5)[2] = 2.351277e-38;
            (*pafVar5)[3] = 6.383134e+26;
            _MulMatrix(pafVar5[1],(float (*) [4])&SgWSMtx,
                       (float (*) [4])&p_Var3[(int)((uint **)prim)[2]].lwmtx);
LAB_0017b71c:
            AppendDmaBuffer(5);
            ppuVar6 = (uint **)*prim;
            ppuVar4 = (uint **)vuvnprim;
          }
        }
      }
      vuvnprim = (uint *)ppuVar4;
      prim = (uint *)ppuVar6;
      p_Var3 = lcp;
      ppuVar4 = (uint **)*ppuVar6;
    }
  }
  return;
}

void SetUpShadowModel() {
	u_int *datap;
	float *m0[4];
	float *m0[4];
	float *v0;
	float *v0;
	
  float afVar1 [4];
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float (*pafVar5) [4];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  LoadSgProg(3);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar5 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar5)[2] = 2.351277e-38;
  (*pafVar5)[3] = 7.01177e+26;
  (*pafVar5)[0] = (float)&DAT_11000000;
  (*pafVar5)[1] = 0.0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  *(undefined8 *)pafVar5[4] = 0x2022400000008000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pafVar5[4][2] = 9.10844e-44;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  *(undefined8 *)pafVar5[5] = 0x302a400000008000;
  pafVar5[5][2] = 1.460153e-42;
  pafVar5[4][3] = 0.0;
  pafVar5[5][3] = 0.0;
                    /* inlined from libsg.h */
  auVar6 = _lqc2((undefined  [16])SgWSMtx.matrix[0]);
  auVar7 = _lqc2((undefined  [16])SgWSMtx.matrix[1]);
  auVar8 = _lqc2((undefined  [16])SgWSMtx.matrix[2]);
  auVar9 = _lqc2((undefined  [16])SgWSMtx.matrix[3]);
  afVar1 = (float  [4])_sqc2(auVar6);
  pafVar5[9] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  pafVar5[10] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  pafVar5[0xb] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar9);
  pafVar5[0xc] = afVar1;
  auVar6 = _lqc2((undefined  [16])SgCMtx[0]);
  auVar7 = _lqc2((undefined  [16])SgCMtx[1]);
  auVar8 = _lqc2((undefined  [16])SgCMtx[2]);
  auVar9 = _lqc2((undefined  [16])SgCMtx[3]);
  afVar1 = (float  [4])_sqc2(auVar6);
  pafVar5[0xd] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar7);
  pafVar5[0xe] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar8);
  pafVar5[0xf] = afVar1;
  afVar1 = (float  [4])_sqc2(auVar9);
  pafVar5[0x10] = afVar1;
  fVar4 = vf12reg[0][3];
  fVar3 = vf12reg[0][2];
  uVar2 = vf12reg[0]._0_8_;
  pafVar5[1][0] = (float)vf12reg[0]._0_8_;
  pafVar5[1][1] = (float)((ulong)uVar2 >> 0x20);
  pafVar5[1][2] = fVar3;
  pafVar5[1][3] = fVar4;
  fVar4 = vf12reg[1][3];
  fVar3 = vf12reg[1][2];
  uVar2 = vf12reg[1]._0_8_;
  pafVar5[2][0] = (float)vf12reg[1]._0_8_;
  pafVar5[2][1] = (float)((ulong)uVar2 >> 0x20);
  pafVar5[2][2] = fVar3;
  pafVar5[2][3] = fVar4;
                    /* end of inlined section */
  pafVar5[0x11][0] = 0.0;
  pafVar5[0x11][3] = 1.793662e-43;
  pafVar5[0x11][1] = 0.0;
  pafVar5[0x11][2] = 0.0;
  AppendDmaBuffer(0x12);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar5 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar5)[0] = 4.656613e-10;
  pafVar5[1][0] = 1.0;
  pafVar5[1][3] = 0.0;
  (*pafVar5)[1] = 0.0;
  (*pafVar5)[2] = 0.0;
  (*pafVar5)[3] = 1.0;
  pafVar5[1][1] = 0.0;
  pafVar5[1][2] = 0.0;
  AppendDmaBuffer(2);
  return;
}

void DrawShadowModel(void *sgd_top, int pnum) {
	u_int *pk;
	u_int i;
	
  uint *prim;
  uint **ppuVar1;
  uint uVar2;
  
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  blocksm = *(int *)((int)sgd_top + 0x14);
  lphead = *(PHEAD **)((int)sgd_top + 0x10);
  SetUpShadowModel();
  if (pnum < 0) {
    uVar2 = 1;
    SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
    ppuVar1 = (uint **)((int)sgd_top + 0x1c);
    if (1 < (uint)blocksm) {
      prim = *ppuVar1;
      while( true ) {
        uVar2 = uVar2 + 1;
        ppuVar1 = ppuVar1 + 1;
        DrawShadowModelPrim(prim);
        if ((uint)blocksm <= uVar2) break;
        prim = *ppuVar1;
      }
    }
    return;
  }
  if (pnum != 0) {
    DrawShadowModelPrim(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
    return;
  }
  SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
  return;
}

void ShadowMeshDataVU(u_int *prim) {
	int mtype;
	u_int *datap;
	
  byte bVar1;
  float (*pafVar2) [4];
  
  bVar1 = *(byte *)((int)prim + 0xd) & 0x53;
  if ((bVar1 != 0x12) && ((bVar1 < 0x13 || (bVar1 != 0x32)))) {
    return;
  }
  AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
  AppendDmaTag((uint)(prim + 8),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* end of inlined section */
  pafVar2 = objwork[sbuffer_p];
  if (edge_check == 0) {
    (*pafVar2)[3] = 4.135903e-25;
    (*pafVar2)[0] = 6.462999e-27;
    (*pafVar2)[2] = (float)&DAT_11000000;
    (*pafVar2)[1] = 4.135903e-25;
  }
  else {
    (*pafVar2)[3] = 4.135903e-25;
    (*pafVar2)[0] = 2.585049e-26;
    (*pafVar2)[1] = (float)&DAT_11000000;
    (*pafVar2)[2] = 4.135903e-25;
  }
  AppendDmaBuffer(1);
  FlushModel(0);
  return;
}

int ClipCheckShadow(sceVu0FVECTOR *vec, float *cul) {
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  auVar6 = _lqc2(*(undefined (*) [16])cul);
  auVar2 = _lqc2((undefined  [16])*vec);
  auVar3 = _lqc2((undefined  [16])vec[1]);
  auVar4 = _lqc2((undefined  [16])vec[2]);
  auVar5 = _lqc2((undefined  [16])vec[3]);
  _vclip(auVar2,auVar6);
  _vclip(auVar3,auVar6);
  _vclip(auVar4,auVar6);
  _vclip(auVar5,auVar6);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

int ShadowBoundClip(float *v0, float *v1) {
	int ret;
	
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined auVar2 [16];
  
  auVar2 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(in_vf4,auVar2);
  _vmaddabc(in_vf5,auVar2);
  _vmaddabc(in_vf6,auVar2);
  auVar2 = _vmaddbc(in_vf7,in_vf0);
  _vclip(auVar2,auVar2);
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])v0 = auVar2;
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

int AppendShadowClipCheck(sceVu0FVECTOR *sts, BoundLine *bl) {
	float bmin;
	float bmax;
	float smin;
	float smax;
	float tmp;
	float tmp2;
	int i;
	int s;
	int e;
	static sceVu0FVECTOR shadowtex[4] = {
		/* [0] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ 0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ 0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		},
		/* [3] = */ {
			/* [0] = */ 0.5f,
			/* [1] = */ 0.5f,
			/* [2] = */ 0.f,
			/* [3] = */ 1.f
		}
	};
	sceVu0FVECTOR kei;
	
  BoundLine *pBVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float kei [4];
  
  fVar4 = sts[bl->s][0];
  fVar7 = sts[bl->e][0];
  if (fVar7 == fVar4) {
    kei[0] = 0.0;
  }
  else {
    kei[0] = (sts[bl->e][1] - sts[bl->s][1]) / (fVar7 - fVar4);
  }
  iVar3 = 1;
  if (kei[0] != 0.0) {
    kei[3] = 0.0;
    kei[1] = -1.0;
    kei[2] = 0.0;
    pBVar1 = bl + 1;
    fVar7 = (float)sceVu0InnerProduct(sts[bl->s],kei);
    iVar3 = 2;
    puVar2 = &DAT_00304410;
    fVar4 = (float)sceVu0InnerProduct(0x304400,kei);
    fVar8 = fVar4;
    fVar9 = fVar7;
    do {
      fVar5 = (float)sceVu0InnerProduct(sts[pBVar1->s],kei);
      fVar6 = (float)sceVu0InnerProduct(puVar2,kei);
      if (fVar9 < fVar5) {
        fVar9 = fVar5;
      }
      if (fVar5 < fVar7) {
        fVar7 = fVar5;
      }
      if (fVar8 < fVar6) {
        fVar8 = fVar6;
      }
      if (fVar6 < fVar4) {
        fVar4 = fVar6;
      }
      puVar2 = puVar2 + 0x10;
      iVar3 = iVar3 + -1;
      pBVar1 = pBVar1 + 1;
    } while (-1 < iVar3);
    iVar3 = 0;
    if ((fVar7 <= fVar8) && (fVar4 <= fVar9)) {
      iVar3 = 1;
    }
  }
  return iVar3;
}

int CheckBoundingBoxShadowTrace(float *lwmtx[4], sceVu0FVECTOR *tmpv, float *dir) {
	int i;
	int clip;
	sceVu0FMATRIX tmpmat;
	static sceVu0FMATRIX clipmtx = {
		/* [0] = */ {
			/* [0] = */ 1.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [1] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 1.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* [2] = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 1.f,
			/* [3] = */ 0.f
		},
		/* [3] = */ {
			/* [0] = */ -0.5f,
			/* [1] = */ -0.5f,
			/* [2] = */ -0.5f,
			/* [3] = */ 0.5f
		}
	};
	static BoundLine boundline[12] = {
		/* [0] = */ {
			/* .s = */ 0,
			/* .e = */ 1
		},
		/* [1] = */ {
			/* .s = */ 4,
			/* .e = */ 5
		},
		/* [2] = */ {
			/* .s = */ 2,
			/* .e = */ 3
		},
		/* [3] = */ {
			/* .s = */ 6,
			/* .e = */ 7
		},
		/* [4] = */ {
			/* .s = */ 0,
			/* .e = */ 4
		},
		/* [5] = */ {
			/* .s = */ 1,
			/* .e = */ 5
		},
		/* [6] = */ {
			/* .s = */ 2,
			/* .e = */ 6
		},
		/* [7] = */ {
			/* .s = */ 3,
			/* .e = */ 7
		},
		/* [8] = */ {
			/* .s = */ 1,
			/* .e = */ 3
		},
		/* [9] = */ {
			/* .s = */ 5,
			/* .e = */ 7
		},
		/* [10] = */ {
			/* .s = */ 4,
			/* .e = */ 6
		},
		/* [11] = */ {
			/* .s = */ 0,
			/* .e = */ 2
		}
	};
	int clip0;
	int clip1;
	int cliparray[8];
	char text[256];
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *v0;
  int iVar9;
  float tmpmat [4] [4];
  int cliparray [8];
  char text [256];
  
  _SetMulMatrix(CullingMatrix,lwmtx);
  uVar1 = ShadowBoundClip((float *)&DAT_700007a0,(float *)tmpv);
  uVar2 = ShadowBoundClip((float *)&DAT_700007b0,(float *)tmpv[1]);
  uVar3 = ShadowBoundClip((float *)&DAT_700007c0,(float *)tmpv[2]);
  uVar4 = ShadowBoundClip((float *)&DAT_700007d0,(float *)tmpv[3]);
  uVar5 = ShadowBoundClip((float *)&DAT_700007e0,(float *)tmpv[4]);
  uVar6 = ShadowBoundClip((float *)&DAT_700007f0,(float *)tmpv[5]);
  uVar7 = ShadowBoundClip((float *)&DAT_70000800,(float *)tmpv[6]);
  uVar8 = ShadowBoundClip((float *)&DAT_70000810,(float *)tmpv[7]);
  iVar9 = 0;
  if ((uVar1 & 0x2a & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8) == 0) {
    _MulMatrix(tmpmat,IPMatrix,lwmtx);
    uVar1 = 0x2f;
    _SetMulMatrix((float (*) [4])clipmtx_194,tmpmat);
    uVar2 = 0;
    iVar9 = 0;
    v0 = (float *)&DAT_700007a0;
    do {
      uVar3 = ShadowBoundClip(v0,(float *)tmpv);
      uVar3 = uVar3 & 0xf;
      iVar9 = iVar9 + 1;
      if (uVar3 == 0) goto LAB_0017be70;
      uVar2 = uVar2 | uVar3;
      uVar1 = uVar1 & uVar3;
      tmpv = tmpv[1];
      v0 = v0 + 4;
    } while (iVar9 < 8);
    iVar9 = 0;
    if (uVar1 == 0) {
      if (uVar2 == 0xf) {
LAB_0017be70:
        iVar9 = 1;
      }
      else {
        iVar9 = AppendShadowClipCheck((float (*) [4])&DAT_700007a0,(BoundLine *)boundline_195);
        if ((iVar9 != 0) &&
           (iVar9 = AppendShadowClipCheck
                              ((float (*) [4])&DAT_700007a0,(BoundLine *)(boundline_195 + 0x20)),
           iVar9 != 0)) {
          return 1;
        }
        iVar9 = 0;
      }
    }
  }
  return iVar9;
}

int CheckBoundingBoxShadow(u_int *prim) {
  int iVar1;
  
  iVar1 = CheckBoundingBoxShadowTrace
                    ((float (*) [4])&lcp[prim[2]].lwmtx,(float (*) [4])(prim + 4),ndirection);
  if (iVar1 != 0) {
    edge_check = lcp[prim[2]].edge_check;
  }
  return (uint)(iVar1 != 0);
}

void AssignShadowPrim(u_int *prim) {
	int i;
	int cn;
	sceVu0FVECTOR tmpvec;
	float *m1[4];
	
  uint *puVar1;
  float fVar2;
  float (*paafVar3) [4] [4];
  float (*paafVar4) [4] [4];
  uint **ppuVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint **ppuVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  float tmpvec [4];
  
  if (prim != (uint *)0x0) {
    ppuVar5 = (uint **)*prim;
    while (ppuVar9 = ppuVar5, ppuVar9 != (uint **)0x0) {
      puVar1 = ((uint **)prim)[1];
      ppuVar5 = (uint **)vuvnprim;
      if (puVar1 != (uint *)0x3) {
        if (puVar1 < &o_fx_int) {
          ppuVar5 = (uint **)prim;
          if ((puVar1 != (uint *)0x0) && (ppuVar5 = (uint **)vuvnprim, puVar1 == (uint *)0x1)) {
            ShadowMeshDataVU(prim);
            ppuVar9 = (uint **)*prim;
            ppuVar5 = (uint **)vuvnprim;
          }
        }
        else if (puVar1 == (uint *)&o_fx_int) {
          iVar6 = CheckBoundingBoxShadow(prim);
          if (iVar6 == 0) {
            return;
          }
          puVar1 = ((uint **)prim)[2];
          if (ccahe.cache_on == 1) {
            if (ccahe.edge_check == edge_check) {
              iVar6 = 0;
              pfVar8 = &lcp[(int)puVar1].lwmtx.matrix[0].w;
              ccahe.cache_on = 1;
              pfVar7 = &lcp[ccahe.cn0].lwmtx.matrix[0].w;
              do {
                if (((Vector4 *)(pfVar8 + -3))->x != ((Vector4 *)(pfVar7 + -3))->x) {
                  ccahe.cache_on = -1;
                  break;
                }
                if (pfVar8[-2] != pfVar7[-2]) {
                  ccahe.cache_on = -1;
                  break;
                }
                if (pfVar8[-1] != pfVar7[-1]) {
                  ccahe.cache_on = -1;
                  break;
                }
                if (*pfVar8 != *pfVar7) {
                  ccahe.cache_on = -1;
                  break;
                }
                iVar6 = iVar6 + 1;
                pfVar7 = pfVar7 + 4;
                pfVar8 = pfVar8 + 4;
              } while (iVar6 < 4);
            }
            if (ccahe.cache_on != 1) goto LAB_0017c0cc;
          }
          else {
LAB_0017c0cc:
                    /* end of inlined section */
            ccahe.cache_on = 1;
            ccahe.edge_check = edge_check;
                    /* inlined from libsg.h */
            auVar10 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[0]);
            auVar11 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[1]);
            auVar12 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[2]);
            auVar13 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[3]);
            _DAT_70000430 = _sqc2(auVar10);
            _DAT_70000440 = _sqc2(auVar11);
            _DAT_70000450 = _sqc2(auVar12);
            _DAT_70000460 = _sqc2(auVar13);
            ccahe.cn0 = (int)puVar1;
                    /* end of inlined section */
            GetInverseMatrix((float (*) [4])LIPMatrix,(float (*) [4])&DAT_70000430);
            _ApplyMatrixXYZ(tmpvec,(float (*) [4])LIPMatrix,ndirection);
            _MulMatrix((float (*) [4])LIPMatrix,IPMatrix,(float (*) [4])&DAT_70000430);
            _MulMatrix((float (*) [4])LWSMtx,(float (*) [4])&SgWSMtx,(float (*) [4])&DAT_70000430);
            _MulMatrix((float (*) [4])LCMtx,SgCMtx,(float (*) [4])&DAT_70000430);
            paafVar4 = LIPMatrix;
            paafVar3 = LWSMtx;
            fVar2 = DAT_00355aa4;
            (*LIPMatrix)[3] = -tmpvec[0];
            (*paafVar4)[1][3] = -tmpvec[1];
            (*paafVar4)[3][3] = 0.0;
            (*paafVar4)[2][3] = -tmpvec[2];
            (*paafVar3)[3][2] = (*paafVar3)[3][2] + fVar2;
            SetVU1HeaderShadow();
          }
          ppuVar9 = (uint **)*prim;
          ppuVar5 = (uint **)vuvnprim;
        }
      }
      vuvnprim = (uint *)ppuVar5;
      prim = (uint *)ppuVar9;
      ppuVar5 = (uint **)*ppuVar9;
    }
  }
  return;
}

void AssignShadowPreProcess(u_int *prim) {
  uint **ppuVar1;
  uint **ppuVar2;
  
  pGroupPacket = (uint *)0x0;
  if ((prim != (uint *)0x0) && ((uint **)*prim != (uint **)0x0)) {
    pGroupPacket = (uint *)0x0;
    ppuVar2 = (uint **)*prim;
    do {
      if (((uint **)prim)[1] == (uint *)0xe) {
        pGroupPacket = prim;
      }
      ppuVar1 = (uint **)*ppuVar2;
      prim = (uint *)ppuVar2;
      ppuVar2 = ppuVar1;
    } while (ppuVar1 != (uint **)0x0);
  }
  return;
}

void AssignShadow(void *sgd_top, int except_num) {
	u_int *pk;
	u_int i;
	u_int groups;
	ModelGroup *mgp;
	
  int iVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  uint **ppuVar5;
  
  ccahe.cache_on = -1;
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  blocksm = *(int *)((int)sgd_top + 0x14);
  if (except_num == -1) {
    if (shadow_apgnum < 0) {
      uVar3 = 1;
      ppuVar5 = (uint **)((int)sgd_top + 0x1c);
      if (1 < blocksm - 1U) {
        iVar1 = 0xe0;
        do {
          if (*(int *)((int)&((Vector4 *)(&lcp->workm + 1))->x + iVar1 + 0x1c) != 0) {
            AssignShadowPrim(*ppuVar5);
          }
          uVar3 = uVar3 + 1;
          ppuVar5 = ppuVar5 + 1;
          iVar1 = iVar1 + 0xe0;
        } while (uVar3 < blocksm - 1U);
      }
    }
    else {
      AssignShadowPreProcess(*(uint **)((int)sgd_top + 0x18));
      puVar4 = pGroupPacket + 4;
      if (pGroupPacket != (uint *)0x0) {
        if (pGroupPacket[2] < (uint)shadow_apgnum) {
          shadow_apgnum = pGroupPacket[2];
        }
        uVar3 = 0;
        if (shadow_apgnum != 0) {
          do {
            uVar3 = uVar3 + 1;
            puVar4 = (uint *)((int)puVar4 + (*(short *)((int)puVar4 + 2) + 2) * 2);
          } while (uVar3 < (uint)shadow_apgnum);
        }
        uVar3 = 0;
        sVar2 = *(short *)((int)puVar4 + 2);
        if (*(short *)((int)puVar4 + 2) != 0) {
          iVar1 = 0;
          do {
            iVar1 = (int)*(short *)((int)puVar4 + iVar1 + 4);
            if (lcp[iVar1].camin != 0) {
              AssignShadowPrim(*(uint **)((int)sgd_top + iVar1 * 4 + 0x18));
              sVar2 = *(short *)((int)puVar4 + 2);
            }
            uVar3 = uVar3 + 1;
            iVar1 = uVar3 * 2;
          } while (uVar3 < (uint)(int)sVar2);
        }
      }
    }
  }
  else {
    uVar3 = 1;
    ppuVar5 = (uint **)((int)sgd_top + 0x1c);
    if (1 < blocksm - 1U) {
      iVar1 = 0xe0;
      do {
        if ((*(int *)((int)&((Vector4 *)(&lcp->workm + 1))->x + iVar1 + 0x1c) != 0) &&
           (uVar3 != except_num)) {
          AssignShadowPrim(*ppuVar5);
        }
        uVar3 = uVar3 + 1;
        ppuVar5 = ppuVar5 + 1;
        iVar1 = iVar1 + 0xe0;
      } while (uVar3 < blocksm - 1U);
    }
  }
  return;
}

void SetUpShadow(ShadowHandle *shandle) {
	u_int *datap;
	dword *base;
	static sceDmaTag tag[2][3];
	static sceDmaTag *tp;
	float *v0;
	float *v1;
	
  undefined8 uVar1;
  int (*paiVar2) [4];
  float (*pafVar3) [4];
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  DAT_70000008 = 0x1000404;
  DAT_7000000c = 0x6c190000;
  DAT_70000000 = 0;
  DAT_70000004 = 0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000048 = DAT_00355aa8;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  _DAT_70000050 = 0x303a400000008000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  _DAT_70000060 = 0x303ac00000008000;
  DAT_70000068 = 0x412;
  DAT_70000040 = 0;
  DAT_70000044 = 0;
  DAT_7000004c = 0;
  DAT_70000058 = 0x412;
  DAT_7000005c = 0;
  DAT_7000006c = 0;
  DAT_70000010 = (undefined4)vf12reg[0]._0_8_;
  DAT_70000014 = (undefined4)((ulong)vf12reg[0]._0_8_ >> 0x20);
                    /* inlined from libsg.h */
  DAT_70000018 = vf12reg[0][2];
  DAT_7000001c = vf12reg[0][3];
  DAT_70000020 = (undefined4)vf12reg[1]._0_8_;
  DAT_70000024 = (undefined4)((ulong)vf12reg[1]._0_8_ >> 0x20);
  DAT_70000028 = vf12reg[1][2];
  DAT_7000002c = vf12reg[1][3];
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000034 = 0x230;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000030 = 0x60;
  DAT_70000190 = (undefined4)fog_value._0_8_;
  DAT_70000194 = (undefined4)((ulong)fog_value._0_8_ >> 0x20);
                    /* inlined from libsg.h */
  DAT_70000198 = fog_value[2];
  DAT_7000019c = fog_value[3];
                    /* end of inlined section */
  LoadSgProg(3);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
  *(undefined8 *)pafVar3[1] = 0x3000000000008001;
  *(undefined8 *)(pafVar3[1] + 2) = 0xeee;
  uVar4 = shandle->shadow_tex0;
  (*pafVar3)[3] = 8.589939e+09;
  *(undefined8 *)(pafVar3[4] + 2) = 0x47;
  *(ulong *)pafVar3[2] = uVar4;
  *(undefined8 *)(pafVar3[2] + 2) = 6;
  *(undefined8 *)pafVar3[3] = 5;
  *(undefined8 *)(pafVar3[3] + 2) = 8;
  *(undefined8 *)pafVar3[4] = 0x5801b;
  (*pafVar3)[0] = 0.0;
  (*pafVar3)[1] = 0.0;
  (*pafVar3)[2] = 0.0;
  AppendDmaBuffer(5);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar3)[0] = 4.656613e-10;
  pafVar3[1][0] = 1.0;
  pafVar3[1][3] = 0.0;
  (*pafVar3)[1] = 0.0;
  (*pafVar3)[2] = 0.0;
  (*pafVar3)[3] = 1.0;
  pafVar3[1][1] = 0.0;
  pafVar3[1][2] = 0.0;
  AppendDmaBuffer(2);
  FlushModel(0);
  paiVar2 = shadow_col;
                    /* inlined from libsg.h */
  uVar1 = *(undefined8 *)shandle->color;
  iVar5 = shandle->color[2];
  iVar6 = shandle->color[3];
  (*shadow_col)[0] = (int)uVar1;
  (*paiVar2)[1] = (int)((ulong)uVar1 >> 0x20);
  (*paiVar2)[2] = iVar5;
  (*paiVar2)[3] = iVar6;
  return;
}

void ClearShadowFrame() {
	dword *base;
	
  uint uVar1;
  float (*pafVar2) [4];
  int iVar3;
  
  iVar3 = sbuffer_p;
                    /* inlined from libsg.h */
  pafVar2 = objwork;
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  objwork[sbuffer_p + 2][0] = 0.0;
  pafVar2[iVar3 + 2][1] = 0.0;
  pafVar2[iVar3 + 2][2] = 0.0;
  pafVar2[iVar3 + 2][3] = 0.0;
  *(undefined8 *)pafVar2[iVar3 + 1] = 0x3003400000008001;
  uVar1 = shadowtex.width;
  *(undefined8 *)(pafVar2[iVar3 + 1] + 2) = 0x441;
  pafVar2[iVar3 + 3][0] = (float)((0x800 - (uVar1 >> 1)) * 0x10);
  uVar1 = shadowtex.height;
  pafVar2[iVar3 + 3][2] = 3.363116e-40;
  pafVar2[iVar3 + 3][3] = 0.0;
  pafVar2[iVar3 + 3][1] = (float)((0x800 - (uVar1 >> 1)) * 0x10);
  pafVar2[iVar3 + 4][0] = (float)(((shadowtex.width >> 1) + 0x800) * 0x10);
  uVar1 = shadowtex.height;
  pafVar2[iVar3 + 4][2] = 3.363116e-40;
  pafVar2[iVar3 + 4][3] = 0.0;
  pafVar2[iVar3 + 4][1] = (float)(((uVar1 >> 1) + 0x800) * 0x10);
  AppendDmaBufferFromEndAddress((int (*) [4])pafVar2[iVar3 + 5]);
  return;
}

void SetShadowEnvironment() {
	qword *base;
	
  uint uVar1;
  float (*pafVar2) [4];
  int iVar3;
  uint uVar4;
  
  iVar3 = sbuffer_p;
                    /* inlined from libsg.h */
  pafVar2 = objwork;
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  objwork[sbuffer_p + 1][0] = 4.591915e-41;
  pafVar2[iVar3 + 1][3] = 1.961818e-44;
  pafVar2[iVar3 + 2][2] = 8.82818e-44;
  pafVar2[iVar3 + 3][2] = 9.24857e-44;
  pafVar2[iVar3 + 3][0] = 9.52883e-44;
  pafVar2[iVar3 + 3][1] = 8.96831e-44;
  pafVar2[iVar3 + 6][2] = 9.949219e-44;
  pafVar2[iVar3 + 7][2] = 8.96831e-44;
  pafVar2[iVar3 + 1][1] = -2.524355e-29;
  pafVar2[iVar3 + 1][2] = -3.697314e+28;
  pafVar2[iVar3 + 4][2] = 2.802597e-44;
  pafVar2[iVar3 + 4][0] = 1.345247e-43;
  pafVar2[iVar3 + 5][2] = 1.121039e-44;
  pafVar2[iVar3 + 6][0] = 2.783806e-40;
  pafVar2[iVar3 + 5][0] = 0.0;
  pafVar2[iVar3 + 5][1] = 0.0;
  pafVar2[iVar3 + 7][0] = (float)((shadowtex.width - 1) * 0x10000);
  uVar1 = shadowtex.height;
  pafVar2[iVar3 + 8][2] = 1.093013e-43;
  pafVar2[iVar3 + 8][1] = 1.401298e-45;
  pafVar2[iVar3 + 9][2] = 1.064987e-43;
  pafVar2[iVar3 + 7][1] = (float)((uVar1 - 1) * 0x10000);
  pafVar2[iVar3 + 8][0] = 0.0;
  uVar1 = shadowtex.addr;
  uVar4 = shadowtex.width >> 6;
  pafVar2[iVar3 + 10][2] = 3.363116e-44;
  pafVar2[iVar3 + 9][1] = 0.0;
  pafVar2[iVar3 + 9][0] = (float)(uVar1 >> 0xb | uVar4 << 0x10 | 0x2000000);
  pafVar2[iVar3 + 10][0] = (float)((0x800 - (shadowtex.width >> 1)) * 0x10);
  pafVar2[iVar3 + 10][1] = (float)((0x800 - (shadowtex.height >> 1)) * 0x10);
  AppendDmaBufferFromEndAddress((int (*) [4])pafVar2[iVar3 + 0xb]);
  ClearShadowFrame();
  iVar3 = sbuffer_p;
  pafVar2 = objwork;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  objwork[sbuffer_p + 1][0] = 4.591915e-41;
  pafVar2[iVar3 + 2][2] = 9.949219e-44;
  pafVar2[iVar3 + 3][2] = 8.96831e-44;
  pafVar2[iVar3 + 1][1] = 1.084202e-19;
  pafVar2[iVar3 + 1][2] = 3.33509e-43;
  pafVar2[iVar3 + 2][0] = 2.755443e-40;
  pafVar2[iVar3 + 3][0] = (float)((shadowtex.width - 2) * 0x10000 | 1);
  pafVar2[iVar3 + 3][1] = (float)((shadowtex.height - 2) * 0x10000 | 1);
  AppendDmaBufferFromEndAddress((int (*) [4])pafVar2[iVar3 + 4]);
  return;
}

void GetRotMatrixYZPlain(float *rmat[4], float *vec) {
	sceVu0FVECTOR cvec;
	float xzr;
	
  float fVar1;
  float x;
  float cvec [4];
  
                    /* inlined from libsg.h */
  fVar1 = *vec;
  x = vec[2];
                    /* end of inlined section */
  sceVu0UnitMatrix((Matrix4x4 *)rmat);
  if ((fVar1 != 0.0) || (x != 0.0)) {
    fVar1 = SgAtan2f(fVar1,x);
    sceVu0RotMatrixY(-fVar1,rmat,rmat);
  }
  return;
}

void GetRotMatrixZAxis(float *rmat[4], float *vec) {
	sceVu0FVECTOR cvec;
	float yzr;
	
  float fVar1;
  float cvec [4];
  
                    /* inlined from libsg.h */
  cvec[2] = vec[2];
  cvec[3] = vec[3];
  cvec[0] = (float)*(undefined8 *)vec;
  cvec[1] = (float)((ulong)*(undefined8 *)vec >> 0x20);
                    /* end of inlined section */
  sceVu0UnitMatrix((Matrix4x4 *)rmat);
  if ((cvec[0] != 0.0) || (cvec[2] != 0.0)) {
    fVar1 = SgAtan2f(cvec[0],cvec[2]);
    sceVu0RotMatrixY(-fVar1,rmat,rmat);
    sceVu0ApplyMatrix((Vector4 *)cvec,(Matrix4x4 *)rmat,(Vector4 *)cvec);
  }
  if ((cvec[1] != 0.0) || (cvec[2] != 0.0)) {
    fVar1 = SgAtan2f(cvec[1],cvec[2]);
    sceVu0RotMatrixX(fVar1,rmat,rmat);
  }
  return;
}

void CalcShadowMatrix(ShadowHandle *shandle, float *center, float ax, float ay) {
	sceVu0FMATRIX touei;
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX quat;
	sceVu0FVECTOR culplain;
	float culval[4];
	float mincal;
	int i;
	
  void **ppvVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float touei [4] [4];
  float tmpmat [4] [4];
  float quat [4] [4];
  float culplain [4];
  float culval [4];
  
  sceVu0UnitMatrix((Matrix4x4 *)touei);
  if ((int)shadowtex.width < 0) {
    fVar4 = (float)(shadowtex.width & 1 | shadowtex.width >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)shadowtex.width;
  }
  touei[0][0] = (shadowtex.scale / fVar4) * ax;
  if ((int)shadowtex.height < 0) {
    fVar4 = (float)(shadowtex.height & 1 | shadowtex.height >> 1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    fVar4 = (float)shadowtex.height;
  }
  touei[2][2] = -1.0;
  touei[1][1] = (-shadowtex.scale / fVar4) * ay;
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  tmpmat[3][2] = 0.0;
  tmpmat[3][1] = 0.5;
  tmpmat[3][0] = 0.5;
  sceVu0MulMatrix((Matrix4x4 *)touei,(Matrix4x4 *)tmpmat,(Matrix4x4 *)touei);
  GetRotMatrixZAxis((float (*) [4])(Matrix4x4 *)quat,ndirection);
  sceVu0MulMatrix((Matrix4x4 *)touei,(Matrix4x4 *)touei,(Matrix4x4 *)quat);
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  tmpmat[3][2] = -center[2];
  tmpmat[3][0] = -*center;
  tmpmat[3][1] = -center[1];
  sceVu0MulMatrix((Matrix4x4 *)touei,(Matrix4x4 *)touei,(Matrix4x4 *)tmpmat);
  culplain[0] = touei[0][2];
  culplain[1] = touei[1][2];
  culplain[2] = touei[2][2];
  culplain[3] = touei[3][2];
  fVar5 = (float)sceVu0InnerProduct(culplain,0x3fb9e0);
  fVar4 = (float)sceVu0InnerProduct(culplain,0x3fb9f0);
  fVar6 = (float)sceVu0InnerProduct(culplain,0x3fba20);
  fVar7 = (float)sceVu0InnerProduct(culplain,0x3fba30);
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  if (fVar6 < fVar4) {
    fVar4 = fVar6;
  }
  if (fVar7 < fVar4) {
    fVar4 = fVar7;
  }
  touei[3][2] = -fVar4;
  iVar3 = 0;
  sceVu0CopyMatrix(0x3fb960,touei);
  SetUpShadow(shandle);
  iVar2 = shandle->search_num;
  write_counter = 0;
  write_flg = 0;
  if (0 < iVar2) {
    ppvVar1 = shandle->search_model;
    while( true ) {
      if (ppvVar1[iVar3] != shandle->source_model) {
        AssignShadow(ppvVar1[iVar3],-1);
        iVar2 = shandle->search_num;
      }
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) break;
      ppvVar1 = shandle->search_model;
    }
  }
  return;
}

static void _ftoi0(int *out, float *in) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])in);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])out = auVar1;
  return;
}

void CalcShadowHeight(sceVu0FVECTOR *bbox) {
	int tmp;
	sceVu0FVECTOR tmpvec;
	sceVu0IVECTOR itmp;
	
  uint uVar1;
  float fVar2;
  float tmpvec [4];
  int itmp [4];
  
  sceVu0SubVector(tmpvec,bbox,bbox[7]);
  sceVu0MulVector(tmpvec,tmpvec,tmpvec);
  fVar2 = SgSqrtf(tmpvec[0] + tmpvec[1] + tmpvec[2]);
  tmpvec[0] = fVar2 / shadowtex.fund_scale + 0.5;
  _ftoi0(itmp,tmpvec);
  if (itmp[0] < 1) {
    itmp[0] = 1;
  }
  else if (itmp[0] == 3) {
    itmp[0] = 4;
  }
  else if (itmp[0] - 5U < 3) {
    itmp[0] = 8;
  }
  shadowtex.height = itmp[0] << 6;
  shadowtex.width = shadowtex.height;
  if (shadowtex.max_width < shadowtex.height) {
    shadowtex.width = shadowtex.max_width;
  }
  if (shadowtex.max_height < shadowtex.height) {
    shadowtex.height = shadowtex.max_height;
  }
  uVar1 = 2;
  shadowtex.width_p = 1;
  if (2 < shadowtex.width) {
    shadowtex.width_p = 1;
    do {
      uVar1 = uVar1 << 1;
      shadowtex.width_p = shadowtex.width_p + 1;
    } while (uVar1 < shadowtex.width);
  }
  uVar1 = 2;
  shadowtex.height_p = 1;
  if (2 < shadowtex.height) {
    shadowtex.height_p = 1;
    do {
      uVar1 = uVar1 << 1;
      shadowtex.height_p = shadowtex.height_p + 1;
    } while (uVar1 < shadowtex.height);
  }
  return;
}

void SetShadowCamera(float *center, sceVu0FVECTOR *bbox, SgCOORDUNIT *cp) {
	int i;
	float xmax;
	float ymax;
	sceVu0FVECTOR tmpvec;
	sceVu0FVECTOR *cbbox;
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX quat;
	float *m0[4];
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v1;
	
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined in_vf0 [16];
  undefined auVar7 [16];
  undefined extraout_vf4 [16];
  undefined auVar8 [16];
  undefined extraout_vf5 [16];
  undefined auVar9 [16];
  undefined extraout_vf6 [16];
  undefined auVar10 [16];
  undefined extraout_vf7 [16];
  undefined auVar11 [16];
  float tmpvec [4];
  float tmpmat [4] [4];
  float quat [4] [4];
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  auVar7 = _lqc2((undefined  [16])(cp->lwmtx).matrix[0]);
  auVar8 = _lqc2((undefined  [16])(cp->lwmtx).matrix[1]);
  auVar9 = _lqc2((undefined  [16])(cp->lwmtx).matrix[2]);
  auVar10 = _lqc2((undefined  [16])(cp->lwmtx).matrix[3]);
  auVar11 = _lqc2((undefined  [16])*bbox);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[0] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[1]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[1] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[2]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[2] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[3]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[3] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[4]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[4] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[5]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[5] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[6]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  wbbox[6] = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])bbox[7]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar7 = _vmaddbc(auVar10,in_vf0);
  wbbox[7] = (float  [4])_sqc2(auVar7);
                    /* end of inlined section */
  sceVu0AddVector((Vector4 *)center,(Vector4 *)wbbox,(Vector4 *)wbbox[7]);
  sceVu0ScaleVector(0.5,(Vector4 *)center,(Vector4 *)center);
                    /* inlined from libsg.h */
                    /* end of inlined section */
  center[3] = 1.0;
                    /* inlined from libsg.h */
  scamera.i.z = center[2];
  scamera.i.w = center[3];
  scamera.i.x = (float)*(undefined8 *)center;
  scamera.i.y = (float)((ulong)*(undefined8 *)center >> 0x20);
                    /* end of inlined section */
  sceVu0ScaleVector(DAT_00355aac,(Vector4 *)tmpvec,(Vector4 *)ndirection);
  fVar6 = 0.0;
  sceVu0AddVector(&scamera.p,&scamera.i,(Vector4 *)tmpvec);
  scamera.ax = 1.0;
  scamera.ay = 1.0;
  SgSetRefCameraOrtho(&scamera);
  fVar5 = 0.0;
  _SetMulMatrix((float (*) [4])&scamera.ws,(float (*) [4])&cp->lwmtx);
  iVar2 = 7;
  do {
                    /* inlined from libsg.h */
    auVar7 = _lqc2((undefined  [16])*bbox);
    _vmulabc(extraout_vf4,auVar7);
    _vmaddabc(extraout_vf5,auVar7);
    _vmaddabc(extraout_vf6,auVar7);
    auVar7 = _vmaddbc(extraout_vf7,in_vf0);
    auVar7 = _sqc2(auVar7);
                    /* end of inlined section */
    tmpvec[0] = SUB164(auVar7,0);
    tmpvec[1] = SUB164(auVar7 >> 0x20,0);
    fVar4 = ABS(tmpvec[0] - scamera.cx);
    fVar3 = ABS(tmpvec[1] - scamera.cy);
    tmpvec._8_8_ = SUB168(auVar7 >> 0x40,0);
    tmpvec._0_8_ = CONCAT44(fVar3,fVar4);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar6 < fVar3) {
      fVar6 = fVar3;
    }
    iVar2 = iVar2 + -1;
    bbox = bbox[1];
    fVar5 = fVar4;
  } while (-1 < iVar2);
  CalcShadowHeight(wbbox);
  if ((int)shadowtex.width < 0) {
    fVar5 = (float)(shadowtex.width & 1 | shadowtex.width >> 1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = (float)shadowtex.width;
  }
  scamera.ax = (fVar5 * 0.5) / fVar4;
  if ((int)shadowtex.height < 0) {
    fVar5 = (float)(shadowtex.height & 1 | shadowtex.height >> 1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = (float)shadowtex.height;
  }
  scamera.ay = (fVar5 * 0.5) / fVar6;
  SgSetRefCameraOrtho(&scamera);
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  if (0.0 < ndirection[0]) {
    tmpmat[0][0] = -1.0;
  }
  if (0.0 < ndirection[1]) {
    tmpmat[1][1] = -1.0;
  }
  if (0.0 < ndirection[2]) {
    tmpmat[2][2] = -1.0;
  }
                    /* inlined from libsg.h */
  auVar7 = _lqc2(CONCAT124(tmpmat[0]._4_12_,tmpmat[0][0]));
  auVar8 = _lqc2(CONCAT88(tmpmat[1]._8_8_,CONCAT44(tmpmat[1][1],tmpmat[1][0])));
  auVar9 = _lqc2(CONCAT412(tmpmat[2][3],CONCAT48(tmpmat[2][2],tmpmat[2]._0_8_)));
  auVar10 = _lqc2((undefined  [16])tmpmat[3]);
  auVar11 = _lqc2((undefined  [16])wbbox[0]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006a0 = (float  [4])_sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[1]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006b0 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[2]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006c0 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[3]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006d0 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[4]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006e0 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[5]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_700006f0 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[6]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar11 = _vmaddbc(auVar10,in_vf0);
  _DAT_70000700 = _sqc2(auVar11);
  auVar11 = _lqc2((undefined  [16])wbbox[7]);
  _vmulabc(auVar7,auVar11);
  _vmaddabc(auVar8,auVar11);
  _vmaddabc(auVar9,auVar11);
  auVar7 = _vmaddbc(auVar10,in_vf0);
  _DAT_70000710 = _sqc2(auVar7);
                    /* end of inlined section */
  pfVar1 = (float *)&DAT_700006b0;
  iVar2 = 6;
  tmpvec = _DAT_700006a0;
  do {
    if (*pfVar1 < tmpvec[0]) {
      tmpvec = (float  [4])CONCAT124(tmpvec._4_12_,*pfVar1);
    }
    if (pfVar1[1] < tmpvec[1]) {
      tmpvec._0_8_ = CONCAT44(pfVar1[1],tmpvec[0]);
    }
    if (pfVar1[2] < tmpvec[2]) {
    }
    iVar2 = iVar2 + -1;
    pfVar1 = pfVar1 + 4;
  } while (-1 < iVar2);
                    /* inlined from libsg.h */
                    /* end of inlined section */
  tmpvec = (float  [4])((undefined  [16])tmpvec & (undefined  [16])0xffffffffffffffff);
                    /* inlined from libsg.h */
  auVar8 = _qmtc2(0xbf800000);
  auVar7 = _lqc2((undefined  [16])tmpvec);
  auVar7 = _vmulbc(auVar7,auVar8);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(CONCAT124(tmpmat[0]._4_12_,tmpmat[0][0]));
  auVar9 = _lqc2(CONCAT88(tmpmat[1]._8_8_,CONCAT44(tmpmat[1][1],tmpmat[1][0])));
  auVar10 = _lqc2(CONCAT412(tmpmat[2][3],CONCAT48(tmpmat[2][2],tmpmat[2]._0_8_)));
  auVar7 = _lqc2(auVar7);
  CullingMatrix[0] = (float  [4])_sqc2(auVar8);
  CullingMatrix[1] = (float  [4])_sqc2(auVar9);
  CullingMatrix[2] = (float  [4])_sqc2(auVar10);
  CullingMatrix[3] = (float  [4])_sqc2(auVar7);
  return;
}

void DrawShadow(ShadowHandle *shandle, void (*env_func)(/* parameters unknown */)) {
	SgCOORDUNIT oldcoord;
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX quat;
	sceVu0FMATRIX touei;
	sceVu0FVECTOR tmpvec;
	sceVu0FVECTOR center;
	sceVu0FVECTOR vf2reg;
	HeaderSection *hs;
	static int count = 0;
	
  void *sgd_top;
  _SgCOORDUNIT oldcoord;
  float tmpmat [4] [4];
  float quat [4] [4];
  float touei [4] [4];
  float tmpvec [4];
  float center [4];
  float vf2reg [4];
  
                    /* end of inlined section */
  _NormalizeVector(ndirection,shandle->direction);
  sgd_top = shandle->shadow_model;
  SetShadowCamera(center,shandle->bbox,*(_SgCOORDUNIT **)((int)sgd_top + 8));
  shandle->shadow_tex0 =
       (long)(int)(shadowtex.addr >> 6) | 0x2000000000000000U |
       (ulong)((long)(int)(shadowtex.width >> 6) << 0x20) >> 0x12 | 0x400000000 |
       (ulong)shadowtex.width_p << 0x1a | 0x200000 |
       (ulong)shadowtex.height_p << 0x1e | (long)(int)(shadowtex.addr >> 6) << 0x25;
  SetShadowEnvironment();
  DrawShadowModel(sgd_top,shandle->smodel_num);
  SgSetWsMtx((float (*) [4])&shandle->camera->ws);
  SgSetClipMtx((float (*) [4])&shandle->camera->wc);
  SgSetClipVMtx((float (*) [4])&shandle->camera->wcv);
  (*(code *)env_func)();
  CalcShadowMatrix(shandle,center,scamera.ax,scamera.ay);
  return;
}
