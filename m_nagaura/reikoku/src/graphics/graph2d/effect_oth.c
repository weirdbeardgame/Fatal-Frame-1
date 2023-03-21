// STATUS: NOT STARTED

typedef struct {
	u_int u1;
	u_int u2;
	u_int v1;
	u_int v2;
	u_int x1;
	u_int x2;
	u_int y1;
	u_int y2;
	u_int zz;
	float alp;
	u_int dummy[2];
} HAZE_WORK;

typedef struct {
	sceVu0FVECTOR oposp;
	sceVu0FVECTOR oposc;
	float scr;
	float mov;
	float lng;
	float dummy;
} HAZE_NUMS;

typedef struct {
	sceVu0FVECTOR pos;
	int flow;
	float rot;
	float cnt;
	int dummy;
} NEW_ITEM;

typedef struct {
	sceVu0FVECTOR fpos[8];
	sceVu0IVECTOR ipos[8];
	u_char clip[8];
	u_char alp[8];
	U32DATA ts[8];
	U32DATA tt[8];
	U32DATA tq[8];
} EFF_SUNSHINE;

typedef struct {
	float alp;
	float cnt;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR pos;
	sceVu0FVECTOR vel;
	sceVu0FVECTOR opos;
} EFF_DUST;

typedef struct {
	float v;
	float oy;
	float t;
	u_short dist;
	short int mode;
} RIPPLE2_M;

typedef struct {
	RIPPLE2_M rip2m[275];
	float texsc;
	float time;
	int sufno;
	int dummy;
} RIPPLE2;

typedef struct {
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR vt[275];
	sceVu0IVECTOR vtiw[275];
	sceVu0IVECTOR col[275];
	u_int tx[275];
	u_int ty[275];
	short int clip[275];
	short int fg[275];
	int pnumw;
	int vnumw;
	int pnumh;
	int vnumh;
	float tsw;
	float tsh;
	sceVu0FMATRIX slm;
} RIP_WORK1;

typedef struct {
	sceVu0FVECTOR vt[15];
	sceVu0IVECTOR vtiw[15];
	sceVu0FVECTOR bpos;
	u_int tx[15];
	u_int ty[15];
	short int clip[15];
	short int fg[15];
	int pnumw;
	int vnumw;
	int pnumh;
	int vnumh;
	float tsw;
	float tsh;
	sceVu0FMATRIX slm;
} RIP_WORK2;

int stop_lf = 0;
u_char prgb = 64;
u_char pa = 12;
float wind1 = 0.300000012f;
float wind2 = 0.00200000009f;
float ppos1 = 0.300000012f;
float pvel1 = 0.00400000019f;
float pvel2 = 0.00499999989f;
float pvel3 = 0.00499999989f;
float psize = 4000.f;
sceVu0FVECTOR canal_bpos[3] = {
	/* [0] = */ {
		/* [0] = */ 27850.f,
		/* [1] = */ 250.f,
		/* [2] = */ 27360.f,
		/* [3] = */ 1.f
	},
	/* [1] = */ {
		/* [0] = */ 27850.f,
		/* [1] = */ 250.f,
		/* [2] = */ 29300.f,
		/* [3] = */ 1.f
	},
	/* [2] = */ {
		/* [0] = */ 27850.f,
		/* [1] = */ 250.f,
		/* [2] = */ 31350.f,
		/* [3] = */ 1.f
	}
};
float canal_size[3][2] = {
	/* [0] = */ {
		/* [0] = */ 3400.f,
		/* [1] = */ 1200.f
	},
	/* [1] = */ {
		/* [0] = */ 3400.f,
		/* [1] = */ 1500.f
	},
	/* [2] = */ {
		/* [0] = */ 3400.f,
		/* [1] = */ 1600.f
	}
};
static float ini_yvel = 200.f;
static float grav = 250.f;
static float ydec = 0.850000024f;
static float ldec = 2000.f;
static float lvel = 20.f;
float texsc[3] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f
};
float canaltm[3] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f
};
float ligscl = 2.f;
float cana1 = 22.5f;
float cana2 = 15.f;
float cana3 = 1.60000002f;
float cana4 = 12.f;
int setlight = 1;
int setpoly = 0;
static SPRT_DAT eneface[0] = {
};
static RIPPLE_SUB rs[48];
static EFF_LEAF eff_leaf[6];
static int init_pond;
static int init_hhaze;
static int init_newitem;
static int init_torch;
static int init_smoke;
static int init_haze_pond;
int cont_facespr_tbl[3] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0
};
int cont_facespr_otbl[3] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0
};
static void *amulet_fire_ret;
static int amulet_fire_flow;
static int amulet_fire_cnt;
static HEAT_HAZE ene_particle[3];
static HEAT_HAZE amu_particle[1];
static HEAT_HAZE torch_particle[5];
static HEAT_HAZE smoke_particle[4];
static NEW_ITEM ni[24];
static RIPPLE2 rip[8];
FACESPIRIT_ST facespirit[3] = {
	/* [0] = */ {
		/* .opos = */ {
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
			},
			/* [4] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [5] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [6] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [7] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [8] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [9] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [10] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [11] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [12] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [13] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [14] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [15] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [16] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [17] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [18] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [19] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [20] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [21] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [22] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [23] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .tbl = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0,
			/* [8] = */ 0,
			/* [9] = */ 0,
			/* [10] = */ 0,
			/* [11] = */ 0,
			/* [12] = */ 0,
			/* [13] = */ 0,
			/* [14] = */ 0,
			/* [15] = */ 0,
			/* [16] = */ 0,
			/* [17] = */ 0,
			/* [18] = */ 0,
			/* [19] = */ 0,
			/* [20] = */ 0,
			/* [21] = */ 0,
			/* [22] = */ 0,
			/* [23] = */ 0
		}
	},
	/* [1] = */ {
		/* .opos = */ {
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
			},
			/* [4] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [5] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [6] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [7] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [8] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [9] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [10] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [11] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [12] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [13] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [14] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [15] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [16] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [17] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [18] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [19] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [20] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [21] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [22] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [23] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .tbl = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0,
			/* [8] = */ 0,
			/* [9] = */ 0,
			/* [10] = */ 0,
			/* [11] = */ 0,
			/* [12] = */ 0,
			/* [13] = */ 0,
			/* [14] = */ 0,
			/* [15] = */ 0,
			/* [16] = */ 0,
			/* [17] = */ 0,
			/* [18] = */ 0,
			/* [19] = */ 0,
			/* [20] = */ 0,
			/* [21] = */ 0,
			/* [22] = */ 0,
			/* [23] = */ 0
		}
	},
	/* [2] = */ {
		/* .opos = */ {
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
			},
			/* [4] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [5] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [6] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [7] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [8] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [9] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [10] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [11] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [12] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [13] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [14] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [15] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [16] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [17] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [18] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [19] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [20] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [21] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [22] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [23] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .tbl = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0,
			/* [8] = */ 0,
			/* [9] = */ 0,
			/* [10] = */ 0,
			/* [11] = */ 0,
			/* [12] = */ 0,
			/* [13] = */ 0,
			/* [14] = */ 0,
			/* [15] = */ 0,
			/* [16] = */ 0,
			/* [17] = */ 0,
			/* [18] = */ 0,
			/* [19] = */ 0,
			/* [20] = */ 0,
			/* [21] = */ 0,
			/* [22] = */ 0,
			/* [23] = */ 0
		}
	}
};

void InitEffectOth() {
	int i;
	
  int *piVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  HEAT_HAZE *pHVar5;
  
  piVar1 = cont_facespr_otbl;
  piVar3 = cont_facespr_tbl;
  iVar4 = 2;
  do {
    *piVar3 = -1;
    iVar4 = iVar4 + -1;
    *piVar1 = -1;
    piVar3 = piVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar4);
  iVar4 = 0x2f;
  puVar2 = &rs[0x2f].alp;
  do {
    *puVar2 = '\0';
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -0x30;
  } while (-1 < iVar4);
  pHVar5 = torch_particle;
  init_torch = 1;
  init_pond = 1;
  init_hhaze = 1;
  init_newitem = 1;
  do {
    pHVar5->flag = 0;
    pHVar5->cnt = 0;
    pHVar5 = pHVar5 + 1;
  } while ((int)pHVar5 < 0x3a3ce0);
  init_smoke = 1;
  amulet_fire_cnt = -1;
  init_haze_pond = 0;
  amulet_fire_ret = (void *)0x0;
  amulet_fire_flow = -1;
  return;
}

void InitEffectOthEF() {
	int i;
	
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_0029751c) {
    iVar2 = 0;
    do {
      uVar1 = *(undefined4 *)((int)cont_facespr_tbl + iVar2);
      *(undefined4 *)((int)cont_facespr_tbl + iVar2) = 0xffffffff;
      *(undefined4 *)((int)cont_facespr_otbl + iVar2) = uVar1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 4;
    } while (iVar3 < DAT_0029751c);
  }
  return;
}

int SearchEmptyRippleBuf() {
	int i;
	int fl;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  
  iVar3 = -1;
  iVar2 = 0;
  puVar4 = &rs[0].alp;
  uVar1 = rs[0].alp;
  while( true ) {
    if (uVar1 == '\0') {
      iVar3 = iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 0x30;
    if ((0x2f < iVar2) || (iVar3 != -1)) break;
    uVar1 = *puVar4;
  }
  return iVar3;
}

void* CallRipple(void *pos, void *rot, float scale, int num, int time) {
  void *pvVar1;
  
  pvVar1 = SetEffects(0x16,8);
  return pvVar1;
}

void SetRipple(EFFECT_CONT *ec) {
	int n;
	int init;
	sceVu0FVECTOR vt;
	float r;
	float *v1;
	float *v0;
	float *v0;
	float *v1;
	
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uchar uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined in_vf0 [16];
  undefined auVar10 [16];
  undefined4 in_vuR;
  float vt [4];
  
  memset(vt,0,0x10);
  bVar5 = false;
  vt[3] = 1.0;
  if (stop_effects == 0) {
    uVar2 = ec->cnt;
    if (uVar2 == 0) {
      bVar5 = true;
      if ((ec->dat).uc8[2] == 2) {
                    /* inlined from effect.h */
        auVar10 = _vrnext(in_vuR);
        auVar10 = _vsubbc(auVar10,in_vf0);
        auVar10 = _qmfc2(SUB164(auVar10,0));
                    /* end of inlined section */
        (ec->dat).uc8[3] = (char)(int)(SUB164(auVar10,0) * 24.0) + 4;
      }
      if ((ec->dat).uc8[1] != 0) {
        (ec->dat).uc8[7] = (ec->dat).uc8[7] - 1;
      }
    }
    if (((ec->dat).uc8[2] == 0) || (bVar1 = (ec->dat).uc8[3], bVar1 == 0)) {
      ec->cnt = 1;
    }
    else {
      if (bVar1 == 0) {
        trap(7);
      }
      ec->cnt = (int)(uVar2 + 1) % (int)(uint)bVar1;
    }
  }
  if (bVar5) {
    iVar7 = SearchEmptyRippleBuf();
    fVar8 = DAT_003553b4;
    rs[iVar7].alp = ' ';
    rs[iVar7].scl = fVar8;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    puVar3 = (undefined8 *)ec->pnt[0];
    uVar4 = *puVar3;
    fVar8 = *(float *)(puVar3 + 1);
    fVar9 = *(float *)((int)puVar3 + 0xc);
    rs[iVar7].pos[0] = (float)uVar4;
    rs[iVar7].pos[1] = (float)((ulong)uVar4 >> 0x20);
    rs[iVar7].pos[2] = fVar8;
    rs[iVar7].pos[3] = fVar9;
    fVar8 = DAT_003553b8;
                    /* end of inlined section */
    if ((ec->dat).uc8[0] == 0x15) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      rs[iVar7].b = 0x80;
      rs[iVar7].mscl = fVar8;
      rs[iVar7].r = 0x80;
      rs[iVar7].g = 0x80;
      rs[iVar7].spd = 1.0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      rs[iVar7].rot[0] = (float)vt._0_8_;
      rs[iVar7].rot[1] = (float)((ulong)vt._0_8_ >> 0x20);
      rs[iVar7].rot[2] = vt[2];
      rs[iVar7].rot[3] = vt[3];
                    /* end of inlined section */
      if ((ec->dat).uc8[2] == 0) {
        rs[iVar7].rot[3] = 0.0;
      }
      else {
        rs[iVar7].rot[3] = 1.0;
      }
    }
    else {
      if (monochrome_mode == 0) {
        rs[iVar7].r = (ec->dat).uc8[4];
        rs[iVar7].g = (ec->dat).uc8[5];
        rs[iVar7].b = (ec->dat).uc8[6];
      }
      else {
        uVar6 = (uchar)(((uint)(ec->dat).uc8[4] + (uint)(ec->dat).uc8[5] + (uint)(ec->dat).uc8[6]) /
                       3);
        rs[iVar7].r = uVar6;
        rs[iVar7].b = uVar6;
        rs[iVar7].g = uVar6;
      }
                    /* inlined from ../../graphics/graph3d/libsg.h */
      puVar3 = (undefined8 *)ec->pnt[1];
                    /* end of inlined section */
      rs[iVar7].spd = (float)(ec->dat).ui32[2];
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      rs[iVar7].mscl = (float)(ec->dat).ui32[3];
      uVar4 = *puVar3;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      fVar8 = *(float *)(puVar3 + 1);
      fVar9 = *(float *)((int)puVar3 + 0xc);
      rs[iVar7].rot[0] = (float)uVar4;
      rs[iVar7].rot[1] = (float)((ulong)uVar4 >> 0x20);
      rs[iVar7].rot[2] = fVar8;
      rs[iVar7].rot[3] = fVar9;
                    /* end of inlined section */
      if ((ec->dat).uc8[2] == 0) {
        rs[iVar7].rot[3] = 0.0;
      }
      else {
        rs[iVar7].rot[3] = 1.0;
      }
    }
    bVar1 = (ec->dat).uc8[1];
  }
  else {
    bVar1 = (ec->dat).uc8[1];
  }
  if ((bVar1 != 0) || (((ec->dat).ul64[0] & 0xff00000000000800) == 0x800)) {
    ResetEffects(ec);
  }
  return;
}

void RunRipple2() {
	int i;
	int j;
	int n;
	int bak;
	u_int clip[48];
	u_int clpy2;
	u_int clpz2;
	float add;
	float q;
	sceVu0IVECTOR vtiw[48][4];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR vtw[4];
	
  uchar uVar1;
  bool bVar2;
  int (*paiVar3) [4];
  float fVar4;
  Q_WORDDATA *pQVar5;
  Q_WORDDATA *pQVar6;
  uint *puVar7;
  int iVar8;
  RIPPLE_SUB *pRVar9;
  ulong uVar10;
  Q_WORDDATA *pQVar11;
  Q_WORDDATA *pQVar12;
  uint uVar13;
  int iVar14;
  int (*paiVar15) [4];
  uchar *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint clip [48];
  int vtiw [48] [4] [4];
  float wlm [4] [4];
  float slm [4] [4];
  float vtw [4] [4];
  
  fVar4 = DAT_003553bc;
  puVar16 = &rs[0].alp;
  iVar17 = 0;
  iVar20 = 0x2f;
  vtw[0]._0_8_ = DAT_0034b6a0;
  vtw[0]._8_8_ = DAT_0034b6a8;
  vtw[1]._0_8_ = DAT_0034b6b0;
  vtw[1]._8_8_ = DAT_0034b6b8;
  vtw[2]._0_8_ = DAT_0034b6c0;
  vtw[2]._8_8_ = DAT_0034b6c8;
  vtw[3]._0_8_ = DAT_0034b6d0;
  vtw[3]._8_8_ = DAT_0034b6d8;
  do {
    uVar1 = *puVar16;
    puVar16 = puVar16 + 0x30;
    iVar20 = iVar20 + -1;
    if (uVar1 != '\0') {
      iVar17 = iVar17 + 1;
    }
  } while (-1 < iVar20);
  if (iVar17 != 0) {
    fVar24 = 32.0;
    iVar20 = 0;
    iVar8 = 0;
    iVar17 = 0;
    do {
      if (*(char *)((int)rs[0].rot + iVar17 + 0x1f) != '\0') {
        sceVu0UnitMatrix((Matrix4x4 *)wlm);
        if (*(float *)((int)rs[0].rot + iVar17 + 0xc) == 1.0) {
          fVar22 = *(float *)((int)rs[0].rot + iVar17 + 0x14);
        }
        else {
          fVar22 = *(float *)((int)rs[0].rot + iVar17 + 0x10);
        }
        wlm[0][0] = fVar22 * 25.0;
        wlm[1][1] = 25.0;
        wlm[2][2] = wlm[0][0];
        sceVu0RotMatrixX(rs[iVar20].rot[0],(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
        sceVu0RotMatrixY(rs[iVar20].rot[1],(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
        sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)(rs + iVar20));
        sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
        paiVar15 = (int (*) [4])vtiw[iVar20];
        sceVu0RotTransPersN(paiVar15,(Matrix4x4 *)slm,vtw,4,1);
        puVar7 = clip + iVar20;
        iVar17 = 3;
        *puVar7 = 0;
        do {
          uVar18 = (*(int (*) [4])*paiVar15)[0];
          if (uVar18 < 0x300) {
            uVar18 = *puVar7;
LAB_00136ab4:
            *puVar7 = uVar18 + 1;
            uVar18 = (*(int (*) [4])*paiVar15)[1];
          }
          else {
            if (0xfd00 < uVar18) {
              uVar18 = *puVar7;
              goto LAB_00136ab4;
            }
            uVar18 = (*(int (*) [4])*paiVar15)[1];
          }
          if (uVar18 < 0x300) {
            uVar18 = *puVar7;
LAB_00136adc:
            *puVar7 = uVar18 + 1;
            uVar18 = (*(int (*) [4])*paiVar15)[2];
          }
          else {
            if (0xfd00 < uVar18) {
              uVar18 = *puVar7;
              goto LAB_00136adc;
            }
            uVar18 = (*(int (*) [4])*paiVar15)[2];
          }
          if ((uVar18 == 0) || (0xfffffff < uVar18)) {
            *puVar7 = *puVar7 + 1;
          }
          iVar17 = iVar17 + -1;
          paiVar15 = paiVar15[1];
        } while (-1 < iVar17);
        if (clip[iVar20] == 0) {
          iVar8 = iVar8 + 1;
        }
        else if (stop_effects == 0) {
          fVar23 = rs[iVar20].scl;
          fVar21 = rs[iVar20].mscl;
          fVar22 = fVar23 + fVar4 * rs[iVar20].spd;
          if (fVar22 < fVar21) {
            rs[iVar20].scl = fVar22;
            rs[iVar20].alp = (uchar)(int)(fVar24 - (fVar23 * fVar24) / fVar21);
          }
          else {
            rs[iVar20].scl = fVar21;
            rs[iVar20].alp = '\0';
          }
        }
      }
      iVar20 = iVar20 + 1;
      iVar17 = iVar20 * 0x30;
    } while (iVar20 < 0x30);
    if (iVar8 != 0) {
      iVar19 = 0;
      Reserve2DPacket(0x1000);
      pQVar5 = pbuf;
      iVar20 = ndpkt;
      pQVar12 = pbuf + ndpkt;
      pQVar12->ui32[0] = 0;
      pQVar12->ui32[1] = 0;
      pQVar12->ui32[2] = 0;
      pQVar12->ui32[3] = 0;
      pQVar5[ndpkt + 1].ul64[1] = 0xe;
      pQVar5[ndpkt + 1].ul64[0] = 0x1000000000008005;
      pQVar5[ndpkt + 2].ul64[0] = 0;
      pQVar5[ndpkt + 2].ul64[1] = 0x3f;
      pQVar5[ndpkt + 3].ul64[1] = 0x14;
      pQVar5[ndpkt + 3].ul64[0] = 0x161;
      pQVar5[ndpkt + 4].ul64[0] = 0x10100008c;
      pQVar5[ndpkt + 4].ul64[1] = 0x4e;
      pQVar5[ndpkt + 5].ul64[1] = 0x42;
      pQVar5[ndpkt + 5].ul64[0] = 0x44;
      iVar17 = monochrome_mode;
      pQVar5[ndpkt + 6].ul64[0] = 0x5000d;
      pQVar5[ndpkt + 6].ul64[1] = 0x47;
      iVar14 = ndpkt + 7;
      iVar8 = 0;
      pQVar12 = pQVar5;
      ndpkt = iVar14;
      do {
        if (*(int *)((int)clip + iVar8) == 0) {
          if (rs[iVar19].alp != '\0') {
            pQVar12[iVar14].ul64[1] = 0xe;
            ndpkt = iVar14 + 1;
            pQVar12[iVar14].ul64[0] = 0x1000000000008001;
            if (1.0 < rs[iVar19].rot[3]) {
              uVar10 = *(ulong *)(&effdat + (iVar17 + 0x2e) * 0x20);
            }
            else if (0.0 < rs[iVar19].rot[3]) {
              uVar10 = *(ulong *)(&effdat + (iVar17 + 4) * 0x20);
            }
            else {
              uVar10 = *(ulong *)(&effdat + (iVar17 + 2) * 0x20);
            }
            pQVar12[ndpkt].ul64[0] = uVar10;
            iVar8 = ndpkt + 1;
            pQVar5->ul64[ndpkt * 2 + 1] = 6;
            pQVar5[iVar8].ul64[1] = 0x412;
            ndpkt = ndpkt + 2;
            pQVar5[iVar8].ul64[0] = 0x302e400000008004;
            pQVar6 = pbuf;
            fVar22 = DAT_003553c4;
            fVar24 = DAT_003553c0;
            uVar18 = 0;
            paiVar15 = (int (*) [4])vtiw[iVar19];
            do {
              fVar21 = 1.0 / (float)(*(int (*) [4])*paiVar15)[3];
              fVar23 = fVar22;
              if ((uVar18 & 1) != 0) {
                fVar23 = fVar24;
              }
              pQVar6[ndpkt].fl32[0] = fVar21 * fVar23;
              fVar23 = fVar22;
              if ((int)uVar18 / 2 != 0) {
                fVar23 = fVar24;
              }
              pQVar6->fl32[ndpkt * 4 + 1] = fVar21 * fVar23;
              bVar2 = 1 < (int)uVar18;
              uVar13 = 0x8000;
              uVar18 = uVar18 + 1;
              pQVar6->fl32[ndpkt * 4 + 2] = fVar21;
              pQVar12 = pQVar6 + ndpkt + 1;
              pQVar6->ui32[ndpkt * 4 + 3] = 0;
              if (bVar2) {
                uVar13 = 0;
              }
              pQVar11 = pQVar6 + ndpkt + 2;
              *(uint *)pQVar12 = (uint)rs[iVar19].r;
              pQVar12->ui32[1] = (uint)rs[iVar19].g;
              *(uint *)(pQVar12->ul64 + 1) = (uint)rs[iVar19].b;
              pQVar12->ui32[3] = (uint)rs[iVar19].alp;
              iVar14 = ndpkt + 3;
              pQVar11->iv[0] = (*(int (*) [4])*paiVar15)[0];
              pQVar11->ui32[1] = (*(int (*) [4])*paiVar15)[1];
              paiVar3 = (int (*) [4])*paiVar15;
              paiVar15 = paiVar15[1];
              pQVar11->ui32[2] = (*paiVar3)[2] << 4;
              ndpkt = iVar14;
              pQVar11->ui32[3] = uVar13;
              pQVar12 = pbuf;
            } while ((int)uVar18 < 4);
          }
        }
        iVar19 = iVar19 + 1;
        iVar8 = iVar19 * 4;
      } while (iVar19 < 0x30);
      bVar2 = stop_effects == 0;
      pQVar12[iVar20].ui32[0] = (iVar14 - (iVar20 + -0x70000000)) - 1;
      if (bVar2) {
        fVar24 = rs[0].spd;
        pRVar9 = rs;
        while( true ) {
          fVar23 = pRVar9->scl;
          fVar22 = pRVar9->mscl;
          fVar24 = fVar23 + fVar4 * fVar24;
          if (fVar24 < fVar22) {
            pRVar9->scl = fVar24;
            pRVar9->alp = (uchar)(int)(32.0 - (fVar23 * 32.0) / fVar22);
          }
          else {
            pRVar9->scl = fVar22;
            pRVar9->alp = '\0';
          }
          if (0x385b8f < (int)(pRVar9 + 1)) break;
          fVar24 = pRVar9[1].spd;
          pRVar9 = pRVar9 + 1;
        }
      }
    }
  }
  return;
}

void SetEffSQTex(int n, float *v, int tp, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	int i;
	int tw;
	int th;
	float xx[2];
	float yy[2];
	u_long tx0;
	
  ushort uVar1;
  ushort uVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  Q_WORDDATA *pQVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  float xx [2];
  float yy [2];
  
  uVar9 = (int)(char)r & 0xff;
  uVar14 = (int)(char)g & 0xff;
  uVar13 = (int)(char)b & 0xff;
  xx[1] = *v + w;
  yy[1] = v[1] + h * 0.5;
  xx[0] = *v - w;
  yy[0] = v[1] - h * 0.5;
  if (monochrome_mode != 0) {
    uVar9 = (uVar9 + uVar14 + uVar13) / 3 & 0xff;
    uVar13 = uVar9;
    uVar14 = uVar9;
  }
  iVar4 = n * 0x20;
  uVar1 = *(ushort *)(&DAT_0026be4e + iVar4);
  uVar2 = *(ushort *)(&DAT_0026be4c + iVar4);
  uVar12 = *(ulong *)(&effdat + iVar4);
  Reserve2DPacket(0x1000);
  pQVar3 = pbuf;
  pQVar10 = pbuf + ndpkt;
  pQVar5 = pbuf + ndpkt + 1;
  pQVar10->ui32[0] = 0;
  pQVar10->ui32[1] = 0;
  pQVar10->ui32[2] = 0;
  pQVar10->ui32[3] = 0;
  pQVar10->ui32[0] = (uint)&DAT_70000014;
  pQVar5->ul64[0] = 0x1000000000008006;
  pQVar5->ul64[1] = 0xe;
  pQVar3[ndpkt + 2].ul64[1] = 0x3f;
  pQVar3[ndpkt + 2].ul64[0] = 0;
  pQVar3[ndpkt + 3].ul64[0] = uVar12;
  pQVar3[ndpkt + 3].ul64[1] = 6;
  pQVar3[ndpkt + 4].ul64[0] = 0x161;
  pQVar3[ndpkt + 4].ul64[1] = 0x14;
  pQVar3[ndpkt + 5].ul64[0] = (long)tp << 0x20 | 0x100008c;
  pQVar3[ndpkt + 5].ul64[1] = 0x4e;
  pQVar3[ndpkt + 6].ul64[0] = 0x44;
  pQVar3[ndpkt + 6].ul64[1] = 0x42;
  iVar4 = ndpkt + 8;
  pQVar3[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar3[ndpkt + 7].ul64[1] = 0x47;
  ndpkt = ndpkt + 9;
  pQVar3[iVar4].ul64[1] = 0x431;
  pQVar3[iVar4].ul64[0] = 0x30aa400000008004;
  uVar11 = 0;
  do {
    iVar4 = (int)uVar11 / 2;
    pQVar5 = pQVar3 + ndpkt;
    pQVar5->ui32[3] = (int)(char)a & 0xff;
    pQVar5->ui32[0] = uVar9;
    pQVar5->ui32[1] = uVar14;
    pQVar5->ui32[2] = uVar13;
    pQVar5 = pQVar3 + ndpkt + 1;
    uVar7 = 8;
    if (iVar4 != 0) {
      uVar7 = (uint)uVar1 * 0x10 - 8;
    }
    iVar6 = (int)uVar11 % 2;
    uVar8 = 8;
    if ((uVar11 & 1) != 0) {
      uVar8 = (uint)uVar2 * 0x10 - 8;
    }
    pQVar5->ui32[1] = uVar7;
    pQVar5->ui32[0] = uVar8;
    pQVar5->ui32[3] = 0;
    pQVar5->ui32[2] = 0;
    pQVar5 = pQVar3 + ndpkt + 2;
    ndpkt = ndpkt + 3;
    uVar7 = 0x8000;
    if (1 < (int)uVar11) {
      uVar7 = 0;
    }
    uVar11 = uVar11 + 1;
    pQVar5->ui32[0] = (int)(xx[iVar6] * 16.0);
    pQVar5->ui32[1] = (int)(yy[iVar4] * 16.0);
    pQVar5->ui32[2] = (int)(v[2] * 16.0);
    pQVar5->ui32[3] = uVar7;
  } while ((int)uVar11 < 4);
  return;
}

void SetEffSQITex(int n, int *v, int tp, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	int i;
	int tw;
	int th;
	int xx[2];
	int yy[2];
	u_long tx0;
	int tp1;
	int tp2;
	int tp3;
	
  ushort uVar1;
  ushort uVar2;
  Q_WORDDATA *pQVar3;
  Q_WORDDATA *pQVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  Q_WORDDATA *pQVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int xx [2];
  int yy [2];
  uchar gg;
  
  uVar6 = (ulong)tp;
  iVar15 = (int)(h * 0.5 * 16.0);
  uVar10 = (int)(char)r & 0xff;
  _gg = (int)(char)g & 0xff;
  uVar14 = (int)(char)b & 0xff;
  xx[1] = *v + (int)(w * 16.0);
  xx[0] = *v - (int)(w * 16.0);
  yy[1] = v[1] + iVar15;
  yy[0] = v[1] - iVar15;
  if (monochrome_mode != 0) {
    uVar10 = (uVar10 + _gg + uVar14) / 3 & 0xff;
    uVar14 = uVar10;
    _gg = uVar10;
  }
  iVar15 = n * 0x20;
  uVar1 = *(ushort *)(&DAT_0026be4e + iVar15);
  uVar2 = *(ushort *)(&DAT_0026be4c + iVar15);
  lVar11 = 1;
  if ((uVar6 & 2) != 0) {
    lVar11 = 2;
  }
  lVar12 = 2;
  if ((uVar6 & 4) == 0) {
    lVar12 = 1;
  }
  uVar13 = *(ulong *)(&effdat + iVar15);
  Reserve2DPacket(0x1000);
  pQVar3 = pbuf;
  pQVar8 = pbuf + ndpkt;
  pQVar4 = pbuf + ndpkt + 1;
  pQVar8->ui32[0] = 0;
  pQVar8->ui32[1] = 0;
  pQVar8->ui32[2] = 0;
  pQVar8->ui32[3] = 0;
  pQVar8->ui32[0] = (uint)&DAT_70000014;
  pQVar4->ul64[1] = 0xe;
  pQVar4->ul64[0] = 0x1000000000008006;
  pQVar3[ndpkt + 2].ul64[1] = 0x3f;
  pQVar3[ndpkt + 2].ul64[0] = 0;
  pQVar3[ndpkt + 3].ul64[0] = uVar13;
  pQVar3[ndpkt + 3].ul64[1] = 6;
  pQVar3[ndpkt + 4].ul64[1] = 0x14;
  pQVar3[ndpkt + 4].ul64[0] = 0x161;
  pQVar3[ndpkt + 5].ul64[1] = 0x4e;
  pQVar3[ndpkt + 5].ul64[0] = (uVar6 & 1) << 0x20 | 0x100008c;
  pQVar3[ndpkt + 6].ul64[1] = 0x42;
  pQVar3[ndpkt + 6].ul64[0] = lVar11 << 2 | lVar12 << 6;
  pQVar3[ndpkt + 7].ul64[1] = 0x47;
  pQVar3[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar3[ndpkt + 8].ul64[0] = 0x30aa400000008004;
  pQVar3[ndpkt + 8].ul64[1] = 0x431;
  ndpkt = ndpkt + 9;
  uVar9 = 0;
  do {
    iVar15 = (int)uVar9 / 2;
    pQVar4 = pQVar3 + ndpkt;
    pQVar4->ui32[3] = (int)(char)a & 0xff;
    pQVar4->ui32[0] = uVar10;
    pQVar8 = pQVar3 + ndpkt + 1;
    pQVar4->ui32[2] = uVar14;
    pQVar4->ui32[1] = _gg;
    uVar7 = 8;
    if ((uVar9 & 1) != 0) {
      uVar7 = (uint)uVar2 * 0x10 - 8;
    }
    uVar5 = 8;
    if (iVar15 != 0) {
      uVar5 = (uint)uVar1 * 0x10 - 8;
    }
    pQVar8->ui32[0] = uVar7;
    pQVar8->ui32[1] = uVar5;
    pQVar8->ui32[3] = 0;
    pQVar8->ui32[2] = 0;
    pQVar4 = pQVar3 + ndpkt + 2;
    pQVar4->ui32[0] = xx[(int)uVar9 % 2];
    uVar7 = 0x8000;
    ndpkt = ndpkt + 3;
    if (1 < (int)uVar9) {
      uVar7 = 0;
    }
    uVar9 = uVar9 + 1;
    pQVar4->ui32[1] = yy[iVar15];
    pQVar4->ui32[2] = v[2];
    pQVar4->ui32[3] = uVar7;
  } while ((int)uVar9 < 4);
  return;
}

void* CallFire(void *pos, u_char r, u_char g, u_char b, float scale) {
	static float rate = 1.f;
	
  void *pvVar1;
  
  pvVar1 = SetEffects(0x19,2);
  return pvVar1;
}

void* CallFire2(void *pos, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2) {
  void *pvVar1;
  
  pvVar1 = SetEffects(0x17,2);
  return pvVar1;
}

void* CallFire3(void *pos, int type, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2) {
  void *pvVar1;
  
  pvVar1 = SetEffects(0x17,2);
  return pvVar1;
}

void SubFire1(EFFECT_CONT *ec) {
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ipos;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR vpos;
	sceVu0FVECTOR vtw[4];
	sceVu0FVECTOR wpos[4];
	static int pat = 0;
	static int rnbk = 0;
	static float scw = 1.f;
	static float sch = 1.f;
	u_long tx0;
	float msc;
	float msch;
	float f;
	float rot_x;
	float rot_y;
	int i;
	int n;
	int rn;
	int tw;
	int th;
	int w;
	int wpat;
	u_char mr;
	u_char mg;
	u_char mb;
	u_char mrh;
	u_char mgh;
	u_char mbh;
	float arate;
	float wscw;
	float wsch;
	DRAW_ENV de;
	float *v1;
	float r;
	
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  int *piVar4;
  Q_WORDDATA *pQVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  Q_WORDDATA *pQVar9;
  Q_WORDDATA *pQVar10;
  uint uVar11;
  uint uVar12;
  Q_WORDDATA *pQVar13;
  int (*paiVar14) [4];
  float (*pafVar15) [4];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined in_vf0 [16];
  undefined auVar25 [16];
  undefined4 in_vuR;
  float wlm [4] [4];
  float slm [4] [4];
  int ipos [4];
  int ivec [4] [4];
  float vpos [4];
  float vtw [4] [4];
  float wpos [4] [4];
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  ulong tx0;
  int tw;
  int th;
  uchar mr;
  uchar mg;
  uchar mb;
  uchar mrh;
  uchar mgh;
  uchar mbh;
  int (*local_e0) [4];
  
  wpos[0]._0_8_ = DAT_0034b6e0;
  wpos[0]._8_8_ = DAT_0034b6e8;
  wpos[1]._0_8_ = DAT_0034b6f0;
  wpos[1]._8_8_ = DAT_0034b6f8;
  wpos[2]._0_8_ = DAT_0034b700;
  wpos[2]._8_8_ = DAT_0034b708;
  wpos[3]._0_8_ = DAT_0034b710;
  wpos[3]._8_8_ = DAT_0034b718;
  if (monochrome_mode == 0) {
    _mr = (uint)(ec->dat).uc8[2];
    _mg = (uint)(ec->dat).uc8[3];
    _mb = (uint)(ec->dat).uc8[4];
  }
  else {
    _mr = ((uint)(ec->dat).uc8[2] + (uint)(ec->dat).uc8[3] + (uint)(ec->dat).uc8[4]) / 3;
    _mg = _mr;
    _mb = _mr;
  }
  fVar22 = (ec->dat).fl32[2];
  _mrh = (uint)(ec->dat).uc8[5];
  _mgh = (uint)(ec->dat).uc8[6];
  _mbh = (uint)(ec->dat).uc8[7];
  fVar24 = (ec->dat).fl32[3];
  fVar21 = sch_157;
  fVar20 = scw_156;
  uVar19 = pat_154;
  if ((ec->dat).uc8[1] == 0) {
    fVar21 = ec->fw[2];
    fVar20 = ec->fw[1];
    uVar19 = ec->cnt;
  }
  uVar7 = ec->flow;
  fVar23 = ec->fw[0];
  if (uVar7 == 1) {
    fVar20 = fVar20 + 9.0;
    fVar21 = fVar21 + 12.0;
    if ((int)uVar19 < 6) goto LAB_00137b00;
    uVar7 = 2;
  }
  else {
    if (uVar7 == 0) {
      ec->flow = 1;
      uVar19 = 0;
      fVar21 = 1.0;
      fVar20 = fVar21;
      goto LAB_00137b00;
    }
    if (uVar7 != 2) {
      if (uVar7 == 3) {
        fVar21 = 25.0;
        fVar20 = fVar21;
      }
      goto LAB_00137b00;
    }
    fVar21 = fVar21 - 4.0;
    if (fVar21 <= 25.0) {
      fVar21 = 25.0;
    }
    fVar20 = fVar20 - 4.0;
    if (fVar20 <= 25.0) {
      fVar20 = 25.0;
    }
    if ((25.0 < fVar21) || (uVar7 = 3, 25.0 < fVar20)) goto LAB_00137b00;
  }
  ec->flow = uVar7;
LAB_00137b00:
  if (stop_effects == 0) {
    uVar19 = uVar19 + 1;
  }
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar2 = (undefined8 *)ec->pnt[0];
                    /* end of inlined section */
  iVar8 = ((((int)uVar19 / 3) % 7) * 2 + monochrome_mode + 0x20) * 0x20;
  tx0 = *(ulong *)(&effdat + iVar8);
  th = (uint)*(ushort *)(&DAT_0026be4e + iVar8) << 4;
  tw = (uint)*(ushort *)(&DAT_0026be4c + iVar8) << 4;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  vpos[2] = *(float *)(puVar2 + 1);
  vpos[3] = *(float *)((int)puVar2 + 0xc);
  vpos[0] = (float)*puVar2;
  vpos[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  bVar3 = false;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = fVar20 * fVar22;
  wlm[1][1] = fVar21 * fVar22;
  iVar8 = 3;
  wlm[2][2] = wlm[0][0];
  sceVu0RotMatrixX(DAT_003553c8,wlm,wlm);
  sceVu0RotMatrixY(rot_y,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)vpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar14 = ivec;
  pafVar15 = wpos;
  local_e0 = paiVar14;
  do {
    sceVu0RotTransPers(paiVar14,(Matrix4x4 *)slm,pafVar15,0);
    pafVar15 = pafVar15[1];
    iVar8 = iVar8 + -1;
    piVar4 = *paiVar14;
    if (0x8000 < (*paiVar14)[0] - 0x4000U) {
      bVar3 = true;
    }
    if (0x8000 < (*paiVar14)[1] - 0x4000U) {
      bVar3 = true;
    }
    paiVar14 = paiVar14[1];
    if (0xfffff00 < piVar4[2] - 0xffU) {
      bVar3 = true;
    }
  } while (-1 < iVar8);
  if (bVar3) {
    bVar1 = (ec->dat).uc8[1];
  }
  else {
    iVar6 = (ivec[3][0] - ivec[0][0]) / 2;
    iVar8 = (ivec[3][1] - ivec[0][1]) / 2;
    if (iVar8 < iVar6) {
      iVar8 = iVar6;
    }
    ipos[2] = ec->z;
    ipos[0] = (ivec[0][0] + ivec[3][0]) / 2;
    ipos[1] = (int)((float)(ivec[0][1] - ivec[3][1]) * DAT_003553cc + (float)ivec[3][1]);
    ipos[3] = 0;
    if (stop_effects == 0) {
                    /* inlined from effect.h */
      auVar25 = _vrnext(in_vuR);
      auVar25 = _vsubbc(auVar25,in_vf0);
      auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      rnbk_155 = (int)(SUB164(auVar25,0) * 8.0);
    }
    iVar6 = rnbk_155;
    fVar24 = (float)iVar8 * 0.0625 * fVar24;
    uVar18 = tw - 8;
    uVar17 = th - 8;
    uVar16 = 0;
    SetEffSQITex(monochrome_mode + 0x16,ipos,3,fVar24,fVar24,(uchar)_mrh,(uchar)_mgh,(uchar)_mbh,
                 (uchar)(int)((float)(rnbk_155 / 2 + 5) * fVar23));
    SetEffSQITex(monochrome_mode + 0x16,ipos,3,fVar24 * 0.5,fVar24 * 0.5,(uchar)_mrh,(uchar)_mgh,
                 (uchar)_mbh,(uchar)(int)((float)(iVar6 + 2) * fVar23));
    Reserve2DPacket(0x1000);
    pQVar5 = pbuf;
    pQVar13 = pbuf + ndpkt;
    pQVar9 = pbuf + ndpkt + 1;
    pQVar13->ui32[0] = 0;
    pQVar13->ui32[1] = 0;
    pQVar13->ui32[2] = 0;
    pQVar13->ui32[3] = 0;
    pQVar13->ui32[0] = (uint)&DAT_70000014;
    pQVar9->ul64[1] = 0xe;
    pQVar9->ul64[0] = 0x1000000000008006;
    pQVar5[ndpkt + 2].ul64[1] = 0x3f;
    pQVar5[ndpkt + 2].ul64[0] = 0;
    pQVar5[ndpkt + 3].ul64[1] = 6;
    pQVar5[ndpkt + 3].ul64[0] = tx0;
    pQVar5[ndpkt + 4].ul64[1] = 0x14;
    pQVar5[ndpkt + 4].ul64[0] = 0x161;
    pQVar5[ndpkt + 5].ul64[1] = 0x4e;
    pQVar5[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar5[ndpkt + 6].ul64[1] = 0x42;
    pQVar5[ndpkt + 6].ul64[0] = 0x48;
    iVar8 = ndpkt + 8;
    pQVar5[ndpkt + 7].ul64[1] = 0x47;
    pQVar5[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar5[iVar8].ul64[0] = 0x30ae400000008004;
    ndpkt = ndpkt + 9;
    pQVar5[iVar8].ul64[1] = 0x431;
    uVar7 = fptoui(fVar23 * 96.0);
    paiVar14 = local_e0;
    do {
      pQVar9 = pQVar5 + ndpkt;
      pQVar9->ui32[3] = uVar7;
      uVar12 = 8;
      if ((int)uVar16 / 2 != 0) {
        uVar12 = uVar17;
      }
      pQVar9->ui32[0] = _mr;
      pQVar13 = pQVar5 + ndpkt + 1;
      uVar11 = 8;
      if ((uVar16 & 1) != 0) {
        uVar11 = uVar18;
      }
      pQVar9->ui32[1] = _mg;
      pQVar10 = pQVar5 + ndpkt + 2;
      ndpkt = ndpkt + 3;
      pQVar9->ui32[2] = _mb;
      pQVar13->ui32[0] = uVar11;
      pQVar13->ui32[1] = uVar12;
      uVar12 = 0x8000;
      pQVar13->ui32[3] = 0;
      if (1 < (int)uVar16) {
        uVar12 = 0;
      }
      pQVar13->ui32[2] = 0;
      uVar16 = uVar16 + 1;
      pQVar10->ui32[0] = (*paiVar14)[0];
      piVar4 = *paiVar14;
      paiVar14 = paiVar14[1];
      pQVar10->ui32[1] = piVar4[1];
      uVar11 = ec->z;
      pQVar10->ui32[3] = uVar12;
      pQVar10->ui32[2] = uVar11;
    } while ((int)uVar16 < 4);
    bVar1 = (ec->dat).uc8[1];
  }
  if (bVar1 == 0) {
    ec->fw[2] = fVar21;
    ec->cnt = uVar19;
    ec->fw[1] = fVar20;
  }
  else {
    pat_154 = uVar19;
    scw_156 = fVar20;
    sch_157 = fVar21;
    ResetEffects(ec);
  }
  return;
}

void SetFire(EFFECT_CONT *ec) {
	static float alp = 1.f;
	
  ec->fw[0] = 1.0;
  if (ec->flow == 3) {
    SubFire1(ec);
    return;
  }
  SubRDFire(ec);
  return;
}

void SetFire2(EFFECT_CONT *ec) {
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Q_WORDDATA *pQVar8;
  Q_WORDDATA *pQVar9;
  uint uVar10;
  uint uVar11;
  Q_WORDDATA *pQVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined in_vf0 [16];
  undefined auVar23 [16];
  undefined4 in_vuR;
  Matrix4x4 MStack_2a0;
  Matrix4x4 MStack_260;
  int iStack_220;
  int iStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  uint auStack_210 [12];
  int iStack_1e0;
  int iStack_1dc;
  Vector4 aVStack_1d0 [5];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  ulong uStack_108;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint *puStack_e0;
  
  uStack_180 = DAT_0034b6e0;
  uStack_178 = DAT_0034b6e8;
  uStack_170 = DAT_0034b6f0;
  uStack_168 = DAT_0034b6f8;
  uStack_160 = DAT_0034b700;
  uStack_158 = DAT_0034b708;
  uStack_150 = DAT_0034b710;
  uStack_148 = DAT_0034b718;
  uStack_140 = DAT_0034b720;
  uStack_138 = DAT_0034b728;
  uStack_130 = DAT_0034b730;
  uStack_128 = DAT_0034b738;
  uStack_120 = DAT_0034b740;
  uStack_118 = DAT_0034b748;
  if (monochrome_mode == 0) {
    uStack_f8 = (uint)(ec->dat).uc8[2];
    uStack_f4 = (uint)(ec->dat).uc8[3];
    uStack_f0 = (uint)(ec->dat).uc8[4];
  }
  else {
    uStack_f8 = ((uint)(ec->dat).uc8[2] + (uint)(ec->dat).uc8[3] + (uint)(ec->dat).uc8[4]) / 3;
    uStack_f4 = uStack_f8;
    uStack_f0 = uStack_f8;
  }
  MStack_2a0.matrix[1].y = (ec->dat).fl32[2];
  uStack_ec = (uint)(ec->dat).uc8[5];
  uStack_e8 = (uint)(ec->dat).uc8[6];
  uStack_e4 = (uint)(ec->dat).uc8[7];
  fVar22 = (ec->dat).fl32[3];
  fVar20 = sch_157;
  fVar19 = scw_156;
  uVar18 = pat_154;
  if ((ec->dat).uc8[1] == 0) {
    fVar20 = ec->fw[2];
    fVar19 = ec->fw[1];
    uVar18 = ec->cnt;
  }
  uVar6 = ec->flow;
  fVar21 = ec->fw[0];
  if (uVar6 == 1) {
    fVar19 = fVar19 + 9.0;
    fVar20 = fVar20 + 12.0;
    if ((int)uVar18 < 6) goto LAB_00137b00;
    uVar6 = 2;
  }
  else {
    if (uVar6 == 0) {
      ec->flow = 1;
      uVar18 = 0;
      fVar20 = 1.0;
      fVar19 = fVar20;
      goto LAB_00137b00;
    }
    if (uVar6 != 2) {
      if (uVar6 == 3) {
        fVar20 = 25.0;
        fVar19 = fVar20;
      }
      goto LAB_00137b00;
    }
    fVar20 = fVar20 - 4.0;
    if (fVar20 <= 25.0) {
      fVar20 = 25.0;
    }
    fVar19 = fVar19 - 4.0;
    if (fVar19 <= 25.0) {
      fVar19 = 25.0;
    }
    if ((25.0 < fVar20) || (uVar6 = 3, 25.0 < fVar19)) goto LAB_00137b00;
  }
  ec->flow = uVar6;
LAB_00137b00:
  if (stop_effects == 0) {
    uVar18 = uVar18 + 1;
  }
  puVar14 = (undefined8 *)ec->pnt[0];
  iVar7 = ((((int)uVar18 / 3) % 7) * 2 + monochrome_mode + 0x20) * 0x20;
  uStack_108 = *(ulong *)(&effdat + iVar7);
  iStack_fc = (uint)*(ushort *)(&DAT_0026be4e + iVar7) << 4;
  iStack_100 = (uint)*(ushort *)(&DAT_0026be4c + iVar7) << 4;
  aVStack_1d0[0].z = *(float *)(puVar14 + 1);
  aVStack_1d0[0].w = *(float *)((int)puVar14 + 0xc);
  aVStack_1d0[0].x = (float)*puVar14;
  aVStack_1d0[0].y = (float)((ulong)*puVar14 >> 0x20);
  Get2PosRot((float *)&camera,&camera.i.x,&fStack_110,&fStack_10c);
  bVar3 = false;
  sceVu0UnitMatrix(&MStack_2a0);
  MStack_2a0.matrix[0].x = fVar19 * MStack_2a0.matrix[1].y;
  MStack_2a0.matrix[1].y = fVar20 * MStack_2a0.matrix[1].y;
  iVar7 = 3;
  MStack_2a0.matrix[2].z = MStack_2a0.matrix[0].x;
  sceVu0RotMatrixX(DAT_003553c8,&MStack_2a0,&MStack_2a0);
  sceVu0RotMatrixY(fStack_10c,&MStack_2a0,&MStack_2a0);
  sceVu0TransMatrix(&MStack_2a0,&MStack_2a0,aVStack_1d0);
  sceVu0MulMatrix(&MStack_260,&SgWSMtx,&MStack_2a0);
  puVar13 = auStack_210;
  puVar14 = &uStack_180;
  puStack_e0 = puVar13;
  do {
    sceVu0RotTransPers(puVar13,&MStack_260,puVar14,0);
    puVar14 = puVar14 + 2;
    iVar7 = iVar7 + -1;
    puVar1 = puVar13 + 2;
    if (0x8000 < *puVar13 - 0x4000) {
      bVar3 = true;
    }
    if (0x8000 < puVar13[1] - 0x4000) {
      bVar3 = true;
    }
    puVar13 = puVar13 + 4;
    if (0xfffff00 < *puVar1 - 0xff) {
      bVar3 = true;
    }
  } while (-1 < iVar7);
  if (bVar3) {
    bVar2 = (ec->dat).uc8[1];
  }
  else {
    iVar5 = (int)(iStack_1e0 - auStack_210[0]) / 2;
    iVar7 = (int)(iStack_1dc - auStack_210[1]) / 2;
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    uStack_218 = ec->z;
    iStack_220 = (int)(auStack_210[0] + iStack_1e0) / 2;
    iStack_21c = (int)((float)(auStack_210[1] - iStack_1dc) * DAT_003553cc + (float)iStack_1dc);
    uStack_214 = 0;
    if (stop_effects == 0) {
      auVar23 = _vrnext(in_vuR);
      auVar23 = _vsubbc(auVar23,in_vf0);
      auVar23 = _qmfc2(SUB164(auVar23,0));
      rnbk_155 = (int)(SUB164(auVar23,0) * 8.0);
    }
    iVar5 = rnbk_155;
    fVar22 = (float)iVar7 * 0.0625 * fVar22;
    uVar17 = iStack_100 - 8;
    uVar16 = iStack_fc - 8;
    uVar15 = 0;
    SetEffSQITex(monochrome_mode + 0x16,&iStack_220,3,fVar22,fVar22,(uchar)uStack_ec,
                 (uchar)uStack_e8,(uchar)uStack_e4,(uchar)(int)((float)(rnbk_155 / 2 + 5) * fVar21))
    ;
    SetEffSQITex(monochrome_mode + 0x16,&iStack_220,3,fVar22 * 0.5,fVar22 * 0.5,(uchar)uStack_ec,
                 (uchar)uStack_e8,(uchar)uStack_e4,(uchar)(int)((float)(iVar5 + 2) * fVar21));
    Reserve2DPacket(0x1000);
    pQVar4 = pbuf;
    pQVar12 = pbuf + ndpkt;
    pQVar8 = pbuf + ndpkt + 1;
    pQVar12->ui32[0] = 0;
    pQVar12->ui32[1] = 0;
    pQVar12->ui32[2] = 0;
    pQVar12->ui32[3] = 0;
    pQVar12->ui32[0] = (uint)&DAT_70000014;
    pQVar8->ul64[1] = 0xe;
    pQVar8->ul64[0] = 0x1000000000008006;
    pQVar4[ndpkt + 2].ul64[1] = 0x3f;
    pQVar4[ndpkt + 2].ul64[0] = 0;
    pQVar4[ndpkt + 3].ul64[1] = 6;
    pQVar4[ndpkt + 3].ul64[0] = uStack_108;
    pQVar4[ndpkt + 4].ul64[1] = 0x14;
    pQVar4[ndpkt + 4].ul64[0] = 0x161;
    pQVar4[ndpkt + 5].ul64[1] = 0x4e;
    pQVar4[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar4[ndpkt + 6].ul64[1] = 0x42;
    pQVar4[ndpkt + 6].ul64[0] = 0x48;
    iVar7 = ndpkt + 8;
    pQVar4[ndpkt + 7].ul64[1] = 0x47;
    pQVar4[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar4[iVar7].ul64[0] = 0x30ae400000008004;
    ndpkt = ndpkt + 9;
    pQVar4[iVar7].ul64[1] = 0x431;
    uVar6 = fptoui(fVar21 * 96.0);
    puVar13 = puStack_e0;
    do {
      pQVar8 = pQVar4 + ndpkt;
      pQVar8->ui32[3] = uVar6;
      uVar11 = 8;
      if ((int)uVar15 / 2 != 0) {
        uVar11 = uVar16;
      }
      pQVar8->ui32[0] = uStack_f8;
      pQVar12 = pQVar4 + ndpkt + 1;
      uVar10 = 8;
      if ((uVar15 & 1) != 0) {
        uVar10 = uVar17;
      }
      pQVar8->ui32[1] = uStack_f4;
      pQVar9 = pQVar4 + ndpkt + 2;
      ndpkt = ndpkt + 3;
      pQVar8->ui32[2] = uStack_f0;
      pQVar12->ui32[0] = uVar10;
      pQVar12->ui32[1] = uVar11;
      uVar11 = 0x8000;
      pQVar12->ui32[3] = 0;
      if (1 < (int)uVar15) {
        uVar11 = 0;
      }
      pQVar12->ui32[2] = 0;
      uVar15 = uVar15 + 1;
      pQVar9->ui32[0] = *puVar13;
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 4;
      pQVar9->ui32[1] = *puVar1;
      uVar10 = ec->z;
      pQVar9->ui32[3] = uVar11;
      pQVar9->ui32[2] = uVar10;
    } while ((int)uVar15 < 4);
    bVar2 = (ec->dat).uc8[1];
  }
  if (bVar2 == 0) {
    ec->fw[2] = fVar20;
    ec->cnt = uVar18;
    ec->fw[1] = fVar19;
  }
  else {
    pat_154 = uVar18;
    scw_156 = fVar19;
    sch_157 = fVar20;
    ResetEffects(ec);
  }
  return;
}

void SetHalo(EFFECT_CONT *ec) {
  SubHalo((float *)ec->pnt[0],(uint)(ec->dat).uc8[2],(uint)(ec->dat).uc8[6],ec->z,(ec->dat).uc8[3],
          (ec->dat).uc8[4],(ec->dat).uc8[5],'d',(ec->dat).fl32[2]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SubHalo(float *p, int type, int textp, u_int z, u_char r, u_char g, u_char b, u_char alp, float sc) {
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ipos;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR vpos;
	sceVu0FVECTOR vtw[4];
	sceVu0FVECTOR wpos[4];
	static int rnbk = 0;
	static float scw = 25.f;
	static float sch = 25.f;
	float f;
	float rot_x;
	float rot_y;
	int i;
	int rn;
	int w;
	int n;
	float r;
	float r;
	
  bool bVar1;
  int *piVar2;
  int iVar3;
  int (*paiVar4) [4];
  float (*pafVar5) [4];
  int iVar6;
  float fVar7;
  float w;
  undefined in_vf0 [16];
  undefined auVar8 [16];
  undefined4 in_vuR;
  float wlm [4] [4];
  float slm [4] [4];
  int ipos [4];
  int ivec [4] [4];
  float vpos [4];
  float vtw [4] [4];
  float wpos [4] [4];
  float rot_x;
  float rot_y;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  
  local_c0 = (int)(char)r & 0xff;
  local_bc = (int)(char)g & 0xff;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
  wpos[0]._0_8_ = DAT_0034b750;
  wpos[0]._8_8_ = DAT_0034b758;
  wpos[1]._0_8_ = DAT_0034b760;
  wpos[1]._8_8_ = DAT_0034b768;
  wpos[2]._0_8_ = DAT_0034b770;
  wpos[2]._8_8_ = DAT_0034b778;
  wpos[3]._0_8_ = DAT_0034b780;
  wpos[3]._8_8_ = DAT_0034b788;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  vpos[2] = p[2];
  vpos[3] = p[3];
  vpos[0] = (float)*(undefined8 *)p;
  vpos[1] = (float)((ulong)*(undefined8 *)p >> 0x20);
                    /* end of inlined section */
  local_c8 = type;
  local_c4 = textp;
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  bVar1 = false;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = scw_172 * sc;
  wlm[1][1] = sch_173 * sc;
  iVar6 = 3;
  wlm[2][2] = wlm[0][0];
  sceVu0RotMatrixX(rot_x,wlm,wlm);
  sceVu0RotMatrixY(rot_y,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)vpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  pafVar5 = wpos;
  paiVar4 = ivec;
  do {
    sceVu0RotTransPers(paiVar4,(Matrix4x4 *)slm,pafVar5,0);
    pafVar5 = pafVar5[1];
    iVar6 = iVar6 + -1;
    piVar2 = *paiVar4;
    if (0x5000 < (*paiVar4)[0] - 0x5800U) {
      bVar1 = true;
    }
    if (0x1c00 < (*paiVar4)[1] - 0x7200U) {
      bVar1 = true;
    }
    paiVar4 = paiVar4[1];
    if (0xffff00 < piVar2[2] - 0xffU) {
      bVar1 = true;
    }
  } while (-1 < iVar6);
  if (!bVar1) {
    iVar3 = (ivec[3][0] - ivec[0][0]) / 2;
    iVar6 = (ivec[3][1] - ivec[0][1]) / 2;
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    ipos[0] = (ivec[0][0] + ivec[3][0]) / 2;
    ipos[1] = (ivec[0][1] + ivec[3][1]) / 2;
    ipos[2] = (ivec[0][2] + ivec[3][2]) / 2;
    w = (float)iVar6 * 0.0625;
    ipos[3] = 0;
    if (stop_effects == 0) {
      if (local_c8 == 0) {
                    /* inlined from effect.h */
        auVar8 = _vrnext(in_vuR);
        auVar8 = _vsubbc(auVar8,in_vf0);
        auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        fVar7 = SUB164(auVar8,0) * 9.0;
      }
      else {
                    /* inlined from effect.h */
        auVar8 = _vrnext(in_vuR);
        auVar8 = _vsubbc(auVar8,in_vf0);
        auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        fVar7 = SUB164(auVar8,0) * 6.0 + 3.0;
      }
      rnbk_171 = (int)fVar7;
    }
    iVar6 = rnbk_171;
    iVar3 = local_c4 * 2;
    SetEffSQITex(iVar3 + monochrome_mode + 0x16,ipos,1,w + w,w + w,(uchar)local_c0,(uchar)local_bc,b
                 ,(uchar)((int)((rnbk_171 / 2 + 7) * ((int)(char)alp & 0xffU)) / 100));
    SetEffSQITex(iVar3 + monochrome_mode + 0x16,ipos,1,w,w,(uchar)local_c0,(uchar)local_bc,b,
                 (uchar)((int)((iVar6 + 3) * ((int)(char)alp & 0xffU)) / 100));
  }
  return;
}

void InitHeatHaze() {
	int i;
	
  ushort uVar1;
  HEAT_HAZE *pHVar2;
  int iVar3;
  
  pHVar2 = ene_particle;
  uVar1 = ene_particle[0].flag;
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      pHVar2->flag = 0;
    }
    else {
      pHVar2->flag = uVar1 & 0x7f;
    }
    if (0x39107f < (int)(pHVar2 + 1)) break;
    uVar1 = pHVar2[1].flag;
    pHVar2 = pHVar2 + 1;
  }
  iVar3 = 0;
  pHVar2 = amu_particle;
  do {
    if ((pHVar2->flag & 0x80) == 0) {
      pHVar2->flag = 0;
    }
    else {
      pHVar2->flag = pHVar2->flag & 0x7f;
    }
    iVar3 = iVar3 + -1;
    pHVar2 = pHVar2 + 1;
  } while (-1 < iVar3);
  pHVar2 = torch_particle;
  uVar1 = torch_particle[0].flag;
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      pHVar2->flag = 0;
    }
    else {
      pHVar2->flag = uVar1 & 0x7f;
    }
    if (0x3a3cdf < (int)(pHVar2 + 1)) break;
    uVar1 = pHVar2[1].flag;
    pHVar2 = pHVar2 + 1;
  }
  pHVar2 = smoke_particle;
  uVar1 = smoke_particle[0].flag;
  while( true ) {
    if ((uVar1 & 0x80) == 0) {
      pHVar2->flag = 0;
    }
    else {
      pHVar2->flag = uVar1 & 0x7f;
    }
    if (0x3b051f < (int)(pHVar2 + 1)) break;
    uVar1 = pHVar2[1].flag;
    pHVar2 = pHVar2 + 1;
  }
  return;
}

int draw_distortion_particles(sceVu0FMATRIX *local_screen, sceVu0FMATRIX *local_clip, int fr, int t_particles, void *particles, int size_of_particle, float psize, float distortion_amount, int type) {
	int i;
	int n;
	int num;
	u_long *d;
	u_long areg;
	u_long treg;
	float y_correction;
	float rr;
	float gg;
	float bb;
	sceVu0FVECTOR warp_add;
	sceVu0FVECTOR screen_size;
	sceVu0FVECTOR particle_size;
	sceVu0FVECTOR *p;
	int dtex;
	sceVu0FVECTOR ones;
	sceVu0FVECTOR st_add;
	sceVu0FVECTOR st_scale;
	unsigned int clip_flags;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  undefined (*pauVar11) [16];
  int iVar12;
  int iVar13;
  int iVar14;
  Q_WORDDATA *pQVar15;
  long lVar16;
  ulong unaff_s5;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined4 uVar42;
  float warp_add [4];
  float screen_size [4];
  float particle_size [4];
  float ones [4];
  float st_add [4];
  float st_scale [4];
  ulong treg;
  
  memset(warp_add,0,0x10);
  uVar8 = DAT_0034b7c8;
  uVar7 = DAT_0034b7c0;
  uVar6 = DAT_0034b7b8;
  uVar5 = DAT_0034b7b0;
  uVar4 = DAT_0034b7a8;
  uVar3 = DAT_0034b7a0;
  uVar2 = DAT_0034b798;
  uVar1 = DAT_0034b790;
  warp_add[0] = distortion_amount + 0.0;
  switch(type + -8) {
  default:
    lVar16 = 0;
    break;
  case 1:
  case 2:
  case 3:
    lVar16 = 1;
  }
  if (((lVar16 != 0) && (type < 0xe)) && (7 < type)) {
    LocalCopyLtoL((int)(((sys_wrk.count & 1) * 0x23 << 0x26) >> 0x20),0x1a40);
  }
  if (type == 9) {
    treg = 0x30003;
  }
  else {
    if (type < 10) {
      if (type != 8) goto LAB_00138798;
    }
    else if (0xd < type) goto LAB_00138798;
    treg = 0x50003;
  }
LAB_00138798:
  switch(type + -8) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    unaff_s5 = 0x48;
    break;
  case 5:
    unaff_s5 = 0x44;
  }
  Reserve2DPacket(0x1000);
  pQVar15 = pbuf + ndpkt;
  pQVar15[1].ul64[0] = 0x1000000000008006;
  pQVar15->ul64[0] = 0x70000000;
  *(undefined8 *)((int)pQVar15 + 0x18) = 0xe;
  *(undefined8 *)((int)pQVar15 + 0x28) = 0x3f;
  pQVar15[3].ul64[0] = 0x228029a40;
  pQVar15[4].ul64[0] = 0x161;
  iVar9 = 0x10;
  *(undefined8 *)((int)pQVar15 + 0x48) = 0x14;
  *(undefined8 *)((int)pQVar15 + 0x38) = 6;
  *(undefined8 *)((int)pQVar15 + 0x58) = 0x47;
  pQVar15[6].ul64[0] = 0x10100008c;
  *(undefined8 *)((int)pQVar15 + 0x68) = 0x4e;
  pQVar15[7].ul64[0] = unaff_s5;
  *(undefined8 *)((int)pQVar15 + 0x78) = 0x42;
  pQVar15->ul64[1] = 0;
  pQVar15[2].ul64[0] = 0;
  pQVar15[5].ul64[0] = treg;
  auVar23 = _lqc2((undefined  [16])(*param_1)[0]);
  auVar24 = _lqc2((undefined  [16])(*param_1)[1]);
  auVar25 = _lqc2((undefined  [16])(*param_1)[2]);
  auVar26 = _lqc2((undefined  [16])(*param_1)[3]);
  auVar38 = _lqc2((undefined  [16])(*param_2)[0]);
  auVar39 = _lqc2((undefined  [16])(*param_2)[1]);
  auVar40 = _lqc2((undefined  [16])(*param_2)[2]);
  auVar41 = _lqc2((undefined  [16])(*param_2)[3]);
  auVar22 = _lqc2(ZEXT816(CONCAT44(psize * 0.5,psize)));
  auVar21 = _lqc2(CONCAT124(warp_add._4_12_,warp_add[0]));
  auVar34 = _lqc2(CONCAT88(uVar6,uVar5));
  auVar35 = _lqc2(CONCAT88(uVar8,uVar7));
  auVar30 = _lqc2(CONCAT88(uVar4,uVar3));
  auVar33 = _lqc2(CONCAT88(uVar2,uVar1));
  iVar14 = 0;
  iVar13 = 0;
  if (t_particles < 1) {
    iVar12 = 0x11;
    iVar9 = 0xf;
  }
  else {
    iVar12 = 0x11;
    do {
      if (0.0 < *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 0xc)) {
        iVar13 = iVar13 + 1;
        fVar19 = *(float *)*(undefined (*) [16])((int)particles + 0x10);
        fVar18 = *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 4);
        fVar20 = *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 8);
        if (monochrome_mode != 0) {
          fVar17 = (fVar19 + fVar18 + fVar20) / 3.0;
          *(float *)*(undefined (*) [16])((int)particles + 0x10) = fVar17;
          *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 8) = fVar17;
          *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 4) = fVar17;
        }
                    /* WARNING: Load size is inaccurate */
        auVar27 = _lqc2(*particles);
        auVar31 = _lqc2(*(undefined (*) [16])((int)particles + 0x10));
        _vmulabc(auVar38,auVar27);
        _vmaddabc(auVar39,auVar27);
        _vmaddabc(auVar40,auVar27);
        auVar28 = _vmaddbc(auVar41,auVar27);
        _vclip(auVar28,auVar28);
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        uVar10 = _cfc2(in_vc2);
        if ((uVar10 & 0x3f) == 0) {
          _vmulabc(auVar23,auVar27);
          _vmaddabc(auVar24,auVar27);
          _vmaddabc(auVar25,auVar27);
          auVar27 = _vmaddbc(auVar26,auVar27);
          _vdiv(in_vf0,0,auVar27,0);
          uVar42 = _vwaitq();
          auVar29 = _vmulq(auVar27,uVar42);
          auVar27 = _vmulq(auVar22,uVar42);
          auVar28 = _vadd(auVar29,auVar34);
          auVar36 = _vadd(auVar28,auVar21);
          auVar28 = _vsub(auVar36,auVar27);
          auVar28 = _vsub(auVar28,auVar30);
          _vmax(auVar28,in_vf0);
          auVar27 = _vadd(auVar36,auVar27);
          auVar27 = _vadd(auVar27,auVar30);
          _vmini(auVar27,auVar33);
          pQVar15->ul64[iVar9] = (lVar16 << 4 | 0x4dU) << 0x2f | 0xe000400000008001;
          pQVar15->ul64[iVar12] = 0x42424242421421;
          pauVar11 = (undefined (*) [16])(pQVar15->ul64 + iVar12 + 1);
          auVar27 = _vftoi0(auVar31);
          auVar27 = _sqc2(auVar27);
          *pauVar11 = auVar27;
          auVar27 = _vmove(auVar30);
          auVar27 = _sqc2(auVar27);
          pauVar11[3] = auVar27;
          auVar31 = _vmove(auVar30);
          auVar27 = _vmul(auVar31,auVar35);
          _vmove(auVar27);
          auVar28 = _vmove(in_vf0);
          auVar36 = _vmove(in_vf0);
          _vmove(auVar31);
          auVar31 = _vmove(in_vf0);
          auVar32 = _vmove(in_vf0);
          auVar27 = _vmove(auVar30);
          auVar37 = _vmul(auVar27,auVar35);
          auVar27 = _sqc2(auVar37);
          pauVar11[1] = auVar27;
          auVar27 = _vftoi4(auVar29);
          auVar27 = _sqc2(auVar27);
          pauVar11[2] = auVar27;
          auVar27 = _vsub(auVar37,auVar36);
          auVar27 = _sqc2(auVar27);
          pauVar11[4] = auVar27;
          auVar27 = _vsub(auVar29,auVar32);
          auVar27 = _vftoi4(auVar27);
          auVar27 = _sqc2(auVar27);
          pauVar11[5] = auVar27;
          auVar27 = _vadd(auVar37,auVar28);
          auVar27 = _sqc2(auVar27);
          pauVar11[6] = auVar27;
          auVar27 = _vadd(auVar29,auVar31);
          auVar27 = _vftoi4(auVar27);
          auVar27 = _sqc2(auVar27);
          pauVar11[7] = auVar27;
          auVar27 = _vadd(auVar37,auVar36);
          auVar27 = _sqc2(auVar27);
          pauVar11[8] = auVar27;
          auVar27 = _vadd(auVar29,auVar32);
          auVar27 = _vftoi4(auVar27);
          auVar27 = _sqc2(auVar27);
          pauVar11[9] = auVar27;
          auVar27 = _vsub(auVar37,auVar28);
          auVar27 = _sqc2(auVar27);
          pauVar11[10] = auVar27;
          auVar27 = _vsub(auVar29,auVar31);
          auVar27 = _vftoi4(auVar27);
          auVar27 = _sqc2(auVar27);
          pauVar11[0xb] = auVar27;
          auVar27 = _vsub(auVar37,auVar36);
          auVar27 = _sqc2(auVar27);
          pauVar11[0xc] = auVar27;
          auVar27 = _vsub(auVar29,auVar32);
          auVar27 = _vftoi4(auVar27);
          auVar27 = _sqc2(auVar27);
          pauVar11[0xd] = auVar27;
          iVar9 = iVar12 + 0x1d;
          iVar12 = iVar12 + 0x1e;
          *(float *)*(undefined (*) [16])((int)particles + 0x10) = fVar19;
        }
        else {
          *(float *)*(undefined (*) [16])((int)particles + 0x10) = fVar19;
        }
        *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 4) = fVar18;
        *(float *)(*(undefined (*) [16])((int)particles + 0x10) + 8) = fVar20;
      }
      iVar14 = iVar14 + 1;
      particles = (undefined *)particles + size_of_particle;
    } while (iVar14 < t_particles);
    iVar9 = iVar9 + -1;
  }
  *(long *)pQVar15 = (long)(iVar9 / 2 + 0x70000000);
  ndpkt = ndpkt + iVar12 / 2;
  return iVar13;
}

void add_particle(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a) {
	float oolife;
	PARTICLE *p;
	
  ushort uVar1;
  PARTICLE *v;
  float fVar2;
  
  fVar2 = 1.0;
  v = hh->particles + hh->head;
  set_vect(v->position,*pos,pos[1],pos[2],1.0);
  set_vect(v->velocity,*vel,vel[1],vel[2],0.0);
  uVar1 = hh->blife;
  set_vect(v->color,r,g,b,a);
  v->alp_step = -(a * (fVar2 / (float)(int)(short)uVar1));
  v->lifetime = (int)(short)hh->blife;
  hh->head = (hh->head + 1) % 200;
  return;
}

void update_particles(PARTICLE *prt) {
	int i;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = 199;
  do {
    iVar1 = prt->lifetime;
    iVar2 = iVar2 + -1;
    if (iVar1 == 0) {
      prt->color[3] = 0.0;
    }
    else {
      fVar6 = prt->position[0];
      fVar8 = prt->position[1];
      fVar5 = prt->color[3];
      fVar4 = prt->velocity[0];
      fVar3 = prt->velocity[1];
      fVar7 = prt->alp_step;
      prt->position[2] = prt->position[2] + prt->velocity[2];
      prt->velocity[2] = prt->velocity[2] + 0.0;
      prt->position[0] = fVar6 + fVar4;
      prt->position[1] = fVar8 + fVar3;
      prt->color[3] = fVar5 + fVar7;
      prt->lifetime = iVar1 + -1;
    }
    prt = prt + 1;
  } while (-1 < iVar2);
  return;
}

void add_particle2(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a) {
	PARTICLE *p;
	
  PARTICLE *v;
  
  v = hh->particles + hh->head;
  set_vect(v->position,*pos,pos[1],pos[2],1.0);
  set_vect(v->velocity,*vel,vel[1],vel[2],0.0);
  set_vect(v->color,r,g,b,0.0);
  v->alp_step = a;
  v->lifetime = (int)(short)hh->blife;
  hh->head = (hh->head + 1) % 200;
  return;
}

void update_particles2(HEAT_HAZE *hh, float lng, float arate) {
	int i;
	float a;
	float f;
	float f2;
	float center;
	
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = DAT_003553d0;
  if (lng <= 800.0) {
    if (lng < 500.0) {
      arate = 0.0;
      iVar3 = (int)(short)hh->blife;
    }
    else {
      arate = ((lng - 500.0) / 300.0) * arate;
      iVar3 = (int)(short)hh->blife;
    }
  }
  else {
    iVar3 = (int)(short)hh->blife;
  }
  iVar4 = 199;
  do {
    iVar1 = hh->particles[0].lifetime;
    iVar4 = iVar4 + -1;
    if (iVar1 == 0) {
      hh->particles[0].color[3] = 0.0;
    }
    else {
      fVar7 = hh->particles[0].position[1];
      fVar8 = hh->particles[0].position[2];
      fVar9 = (float)(iVar3 - iVar1) / (float)iVar3;
      fVar6 = hh->particles[0].velocity[1];
      fVar5 = hh->particles[0].velocity[2];
      hh->particles[0].position[0] = hh->particles[0].position[0] + hh->particles[0].velocity[0];
      hh->particles[0].position[1] = fVar7 + fVar6;
      hh->particles[0].position[2] = fVar8 + fVar5;
      if (fVar9 <= fVar2) {
        fVar5 = (hh->particles[0].alp_step * fVar9) / fVar2;
      }
      else {
        fVar5 = (hh->particles[0].alp_step * (1.0 - fVar9)) / (1.0 - fVar2);
      }
      hh->particles[0].color[3] = fVar5 * arate;
      hh->particles[0].lifetime = iVar1 + -1;
    }
    hh = (HEAT_HAZE *)(hh->particles + 1);
  } while (-1 < iVar4);
  return;
}

void sceVu0RotCameraMatrix(float *m[4], float *p, float *zd, float *yd, float *rot) {
	sceVu0FMATRIX work;
	sceVu0FVECTOR direction;
	sceVu0FVECTOR vertical;
	sceVu0FVECTOR position;
	
  float work [4] [4];
  float direction [4];
  float vertical [4];
  float position [4];
  
  sceVu0UnitMatrix((Matrix4x4 *)work);
  sceVu0RotMatrixX(*rot,work,work);
  sceVu0RotMatrixY(rot[1],work,work);
  sceVu0RotMatrixZ(rot[2],work,work);
  sceVu0ApplyMatrix((Vector4 *)direction,(Matrix4x4 *)work,(Vector4 *)zd);
  sceVu0ApplyMatrix((Vector4 *)vertical,(Matrix4x4 *)work,(Vector4 *)yd);
  sceVu0ApplyMatrix((Vector4 *)position,(Matrix4x4 *)work,(Vector4 *)p);
  sceVu0CameraMatrix(m,(Vector4 *)position,(Vector4 *)direction,(Vector4 *)vertical);
  return;
}

void sceVu0ViewClipMatrix(float *vc[4], float scrw, float scrh, float scrz, float zmin, float zmax) {
  sceVu0UnitMatrix((Matrix4x4 *)vc);
  vc[3][3] = 0.0;
  vc[2][3] = 1.0;
  vc[1][1] = (scrz + scrz) / scrh;
  (*vc)[0] = (scrz + scrz) / scrw;
  vc[2][2] = (zmax + zmin) / (zmax - zmin);
  vc[3][2] = (zmax * -2.0 * zmin) / (zmax - zmin);
  return;
}

void* ContHeatHaze(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate) {
	static float pcnt1;
	static float pcnt2;
	int n1;
	int n2;
	int i;
	float f;
	float fw1;
	float lng;
	float escl;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR camera_p;
	sceVu0FVECTOR camera_zd;
	sceVu0FVECTOR camera_yd;
	sceVu0FVECTOR camera_rot;
	sceVu0FVECTOR obj_trans;
	sceVu0FVECTOR obj_rot;
	sceVu0FMATRIX local_clip;
	sceVu0FMATRIX view_clip;
	sceVu0FMATRIX local_world;
	sceVu0FMATRIX world_view;
	sceVu0FMATRIX view_screen;
	sceVu0FMATRIX local_screen;
	sceVu0FMATRIX work;
	sceVu0FVECTOR ppos;
	sceVu0FVECTOR pvel;
	sceVu0FVECTOR rot;
	float fx;
	float fy;
	float fz;
	float rx;
	float rz;
	float *v1;
	float *v1;
	float fx;
	float fy;
	float fz;
	float l;
	float rate;
	float *v1;
	float r;
	float fx;
	float fy;
	float fz;
	float l;
	float rate;
	float *v1;
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
	
  bool bVar1;
  int iVar2;
  HEAT_HAZE *pHVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_f24;
  undefined in_vf0 [16];
  undefined auVar12 [16];
  undefined4 in_vuR;
  float wpos [4];
  float camera_p [4];
  float camera_zd [4];
  float camera_yd [4];
  float camera_rot [4];
  float obj_trans [4];
  float obj_rot [4];
  float local_clip [4] [4];
  float view_clip [4] [4];
  float local_world [4] [4];
  float world_view [4] [4];
  float view_screen [4] [4];
  float local_screen [4] [4];
  float work [4] [4];
  float ppos [4];
  float pvel [4];
  float rot [4];
  float rx;
  float rz;
  int local_f8;
  
  local_f8 = st;
  memset(camera_p,0,0x10);
  camera_p[2] = -12.0;
  fVar11 = DAT_003553d4;
  memset(camera_rot,0,0x10);
  camera_rot[0] = DAT_003553d8;
  memset(obj_trans,0,0x10);
  memset(obj_rot,0,0x10);
  obj_rot[0] = DAT_003553dc;
  memset(ppos,0,0x10);
  ppos[3] = 1.0;
  memset(pvel,0,0x10);
  if (addr == (void *)0x0) {
    return (void *)0x0;
  }
  *(ushort *)((int)addr + 0x3208) = *(ushort *)((int)addr + 0x3208) | 0xff;
  if (ingame_wrk.mode == 10) {
    return (void *)((uint)addr | 0xff);
  }
  if (type == 0) {
    return addr;
  }
  if (init_hhaze != 0) {
    pHVar3 = ene_particle;
    pcnt1_201 = 0.0;
    pcnt2_202 = 0;
    do {
      pHVar3->flag = 0;
      pHVar3->cnt = 0;
      pHVar3 = pHVar3 + 1;
    } while ((int)pHVar3 < 0x391080);
    iVar5 = 0;
    pHVar3 = amu_particle;
    do {
      pHVar3->flag = 0;
      iVar5 = iVar5 + -1;
      pHVar3->cnt = 0;
      pHVar3 = pHVar3 + 1;
    } while (-1 < iVar5);
    init_hhaze = 0;
  }
  if (type == 9) {
    GetTrgtRot((float *)&camera,&camera.i.x,rot,3);
    sceVu0UnitMatrix((Matrix4x4 *)work);
    work[0][0] = camera.fov * 25.0;
    work[1][1] = work[0][0];
    work[2][2] = work[0][0];
    sceVu0RotMatrixX(rot[0],(Matrix4x4 *)work,(Matrix4x4 *)work);
    sceVu0RotMatrixY(rot[1],(Matrix4x4 *)work,(Matrix4x4 *)work);
    sceVu0TransMatrix((Matrix4x4 *)local_world,(Matrix4x4 *)work,(Vector4 *)pos);
    sceVu0MulMatrix((Matrix4x4 *)local_screen,&SgWSMtx,(Matrix4x4 *)local_world);
    sceVu0MulMatrix((Matrix4x4 *)local_clip,(Matrix4x4 *)SgCMtx,(Matrix4x4 *)local_world);
  }
  else if (type < 10) {
    if (type == 8) {
LAB_00139390:
      if (pos2 == (float *)0x0) {
        rz = 0.0;
        rx = 0.0;
      }
      else {
        Get2PosRot2(pos2,pos,&rx,&rz);
      }
      unaff_f24 = SgSqrtf((*pos - camera.p.x) * (*pos - camera.p.x) +
                          (pos[1] - camera.p.y) * (pos[1] - camera.p.y) +
                          (pos[2] - camera.p.z) * (pos[2] - camera.p.z));
      sceVu0UnitMatrix((Matrix4x4 *)work);
      work[0][0] = 25.0;
      work[2][2] = 25.0;
      work[1][1] = 25.0;
      sceVu0RotMatrixX(rx,(Matrix4x4 *)work,(Matrix4x4 *)work);
      sceVu0RotMatrixZ(-rz,(Matrix4x4 *)work,(Matrix4x4 *)work);
      sceVu0TransMatrix((Matrix4x4 *)local_world,(Matrix4x4 *)work,(Vector4 *)pos);
      sceVu0MulMatrix((Matrix4x4 *)local_screen,&SgWSMtx,(Matrix4x4 *)local_world);
      sceVu0MulMatrix((Matrix4x4 *)local_clip,(Matrix4x4 *)SgCMtx,(Matrix4x4 *)local_world);
    }
  }
  else if (type < 0xc) goto LAB_00139390;
  if (type == 9) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
    wpos[2] = pos[2];
    wpos[3] = pos[3];
    wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
    wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 20.0;
    SubHalo(wpos,0,0,0,'0','0',0xff,
            (uchar)(int)(((float)(int)*(short *)((int)addr + 0x320c) * 80.0) /
                        (float)(int)*(short *)((int)addr + 0x320a)),
            ((float)(int)*(short *)((int)addr + 0x320c) * 0.5) /
            (float)(int)*(short *)((int)addr + 0x320a));
    fVar10 = size / camera.fov;
    fVar8 = -1.0;
    uVar4 = (uint)sys_wrk.count;
    iVar5 = 9;
LAB_001398a0:
    iVar5 = draw_distortion_particles
                      ((float (*) [4] [4])local_screen,(float (*) [4] [4])local_clip,uVar4 & 1,200,
                       addr,0x40,fVar10,fVar8,iVar5);
    *(short *)((int)addr + 0x320c) = (short)iVar5;
  }
  else {
    iVar5 = type;
    if (9 < type) {
      if (type == 10) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        wpos[2] = pos[2];
        wpos[3] = pos[3];
        wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
        wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 10.0;
        fVar8 = SgSqrtf((*pos - camera.p.x) * (*pos - camera.p.x) +
                        (pos[1] - camera.p.y) * (pos[1] - camera.p.y) +
                        (pos[2] - camera.p.z) * (pos[2] - camera.p.z));
        if (600.0 < fVar8) {
          fVar10 = 2.0;
        }
        else if (fVar8 < 300.0) {
          fVar10 = 8.0;
        }
        else {
          fVar10 = ((600.0 - fVar8) * 6.0) / 300.0 + 2.0;
        }
        fVar8 = SgSinf(pcnt1_201);
        fVar8 = fVar8 * fVar10;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
        fVar7 = SUB164(auVar12,0);
        fVar10 = DAT_003553e4;
                    /* end of inlined section */
      }
      else {
        if (type != 0xb) goto LAB_001398b0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
        wpos[2] = pos[2];
        wpos[3] = pos[3];
        wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
        wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 10.0;
        fVar8 = SgSqrtf((*pos - camera.p.x) * (*pos - camera.p.x) +
                        (pos[1] - camera.p.y) * (pos[1] - camera.p.y) +
                        (pos[2] - camera.p.z) * (pos[2] - camera.p.z));
        if (600.0 < fVar8) {
          fVar10 = 4.0;
        }
        else if (fVar8 < 300.0) {
          fVar10 = 12.0;
        }
        else {
          fVar10 = ((600.0 - fVar8) * 8.0) / 300.0 + 4.0;
        }
        fVar8 = SgSinf(pcnt1_201);
        fVar8 = fVar8 * fVar10;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
        fVar7 = SUB164(auVar12,0);
                    /* end of inlined section */
        fVar10 = DAT_003553e8;
      }
      pcnt1_201 = pcnt1_201 + fVar7 * fVar10;
      if (DAT_003553ec < pcnt1_201) {
        pcnt1_201 = pcnt1_201 - DAT_003553f0;
      }
      uVar4 = (uint)sys_wrk.count;
      fVar10 = (size * fVar11) / camera.fov;
      goto LAB_001398a0;
    }
    if (type == 8) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      wpos[2] = pos[2];
      wpos[3] = pos[3];
      wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
      wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 10.0;
      SubHalo(wpos,1,0,0,'(','(','n','n',DAT_003553e0);
      uVar4 = (uint)sys_wrk.count;
      fVar10 = (size * fVar11) / camera.fov;
      fVar8 = -1.0;
      goto LAB_001398a0;
    }
  }
LAB_001398b0:
  fVar8 = DAT_00355404;
  if (stop_effects != 0) {
    return addr;
  }
  bVar1 = type < 8;
  if (local_f8 != 0) goto LAB_00139d0c;
  if (type == 9) {
    bVar1 = false;
    iVar5 = 0;
    fVar11 = DAT_00355408;
    fVar10 = DAT_00355400;
    do {
                    /* inlined from effect.h */
      auVar12 = _vrnext(in_vuR);
      auVar12 = _vsubbc(auVar12,in_vf0);
      auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
      ppos[1] = 0.0;
      ppos[0] = (SUB164(auVar12,0) - 0.5) * fVar10;
                    /* inlined from effect.h */
      auVar12 = _vrnext(in_vuR);
      auVar12 = _vsubbc(auVar12,in_vf0);
      auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
      ppos[2] = (SUB164(auVar12,0) - 0.5) * fVar10;
                    /* inlined from effect.h */
      auVar12 = _vrnext(in_vuR);
      auVar12 = _vsubbc(auVar12,in_vf0);
      auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
      pvel[0] = (SUB164(auVar12,0) - 0.5) * fVar8;
                    /* inlined from effect.h */
      auVar12 = _vrnext(in_vuR);
      auVar12 = _vsubbc(auVar12,in_vf0);
      auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
      pvel[1] = -(SUB164(auVar12,0) * fVar11) - fVar11;
                    /* inlined from effect.h */
      auVar12 = _vrnext(in_vuR);
      auVar12 = _vsubbc(auVar12,in_vf0);
      auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
      pvel[2] = (SUB164(auVar12,0) - 0.5) * fVar8;
      iVar5 = iVar5 + -1;
      add_particle(9,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
    } while (-1 < iVar5);
    iVar5 = *(int *)((int)addr + 0x3204);
LAB_00139d04:
    iVar2 = iVar5 + 1;
  }
  else {
    if (9 < type) {
      if (type == 10) {
        iVar5 = *(int *)((int)addr + 0x3204);
        bVar1 = false;
        if (iVar5 == 0) {
                    /* inlined from effect.h */
          auVar12 = _vrnext(in_vuR);
          auVar12 = _vsubbc(auVar12,in_vf0);
          auVar12 = _qmfc2(SUB164(auVar12,0));
          fVar10 = SUB164(auVar12,0);
                    /* end of inlined section */
                    /* inlined from effect.h */
          auVar12 = _vrnext(in_vuR);
          auVar12 = _vsubbc(auVar12,in_vf0);
          auVar12 = _qmfc2(SUB164(auVar12,0));
          fVar8 = SUB164(auVar12,0);
                    /* end of inlined section */
                    /* inlined from effect.h */
          auVar12 = _vrnext(in_vuR);
          auVar12 = _vsubbc(auVar12,in_vf0);
          auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
          fVar6 = (SUB164(auVar12,0) - 0.5) * DAT_0035540c;
                    /* inlined from effect.h */
          auVar12 = _vrnext(in_vuR);
          auVar12 = _vsubbc(auVar12,in_vf0);
          auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
          fVar9 = -(SUB164(auVar12,0) * DAT_00355410) - DAT_00355414;
                    /* inlined from effect.h */
          auVar12 = _vrnext(in_vuR);
          auVar12 = _vsubbc(auVar12,in_vf0);
          auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
          iVar5 = 10;
          fVar7 = (SUB164(auVar12,0) - 0.5) * DAT_0035540c;
LAB_00139cf4:
          pvel[1] = fVar9 * fVar11;
          pvel[0] = fVar6 * fVar11;
          ppos[2] = (fVar8 - 0.5) * 1.5 * fVar11;
          ppos[0] = (fVar10 - 0.5) * 1.5 * fVar11;
          ppos[1] = 0.0;
          bVar1 = false;
          pvel[2] = fVar7 * fVar11;
          add_particle2(iVar5,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
          iVar5 = *(int *)((int)addr + 0x3204);
        }
      }
      else {
        iVar5 = *(int *)((int)addr + 0x3204);
        if (type == 0xb) {
          bVar1 = false;
          if (iVar5 == 0) {
                    /* inlined from effect.h */
            auVar12 = _vrnext(in_vuR);
            auVar12 = _vsubbc(auVar12,in_vf0);
            auVar12 = _qmfc2(SUB164(auVar12,0));
            fVar10 = SUB164(auVar12,0);
                    /* inlined from effect.h */
            auVar12 = _vrnext(in_vuR);
            auVar12 = _vsubbc(auVar12,in_vf0);
            auVar12 = _qmfc2(SUB164(auVar12,0));
            fVar8 = SUB164(auVar12,0);
                    /* inlined from effect.h */
            auVar12 = _vrnext(in_vuR);
            auVar12 = _vsubbc(auVar12,in_vf0);
            auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
            fVar6 = (SUB164(auVar12,0) - 0.5) * DAT_00355418;
                    /* inlined from effect.h */
            auVar12 = _vrnext(in_vuR);
            auVar12 = _vsubbc(auVar12,in_vf0);
            auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
            fVar9 = -(SUB164(auVar12,0) * DAT_0035541c) - DAT_00355418;
                    /* inlined from effect.h */
            auVar12 = _vrnext(in_vuR);
            auVar12 = _vsubbc(auVar12,in_vf0);
            auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
            iVar5 = 0xb;
            fVar7 = (SUB164(auVar12,0) - 0.5) * DAT_00355418;
                    /* end of inlined section */
                    /* end of inlined section */
            goto LAB_00139cf4;
          }
        }
        else {
          bVar1 = type < 8;
        }
      }
      goto LAB_00139d04;
    }
    iVar5 = *(int *)((int)addr + 0x3204);
    if (type == 8) {
      bVar1 = false;
      if (iVar5 / 0x19 == 0) {
        iVar2 = iVar5 + 1;
        if (iVar5 != 0) goto LAB_00139d08;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
        ppos[1] = 0.0;
        ppos[0] = (SUB164(auVar12,0) - 0.5) * DAT_003553f4;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
        ppos[2] = (SUB164(auVar12,0) - 0.5) * DAT_003553f4;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
        pvel[0] = (float)((double)(SUB164(auVar12,0) - 0.5) * DAT_0034b830);
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
        pvel[1] = -(SUB164(auVar12,0) * DAT_003553f8) - DAT_003553fc;
                    /* inlined from effect.h */
        auVar12 = _vrnext(in_vuR);
        auVar12 = _vsubbc(auVar12,in_vf0);
        auVar12 = _qmfc2(SUB164(auVar12,0));
                    /* end of inlined section */
        bVar1 = false;
        pvel[2] = (float)((double)(SUB164(auVar12,0) - 0.5) * DAT_0034b830);
        add_particle(8,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
        iVar5 = *(int *)((int)addr + 0x3204);
      }
      goto LAB_00139d04;
    }
    iVar2 = iVar5 + 1;
  }
LAB_00139d08:
  *(int *)((int)addr + 0x3204) = iVar2;
LAB_00139d0c:
  if (!bVar1) {
    if (type < 10) {
      if (local_f8 != 0) {
        update_particles((PARTICLE *)addr);
        update_particles((PARTICLE *)addr);
        update_particles((PARTICLE *)addr);
        update_particles((PARTICLE *)addr);
      }
      update_particles((PARTICLE *)addr);
    }
    else if (type < 0xc) {
      if (local_f8 == 0) {
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
      }
      else {
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
        update_particles2((HEAT_HAZE *)addr,unaff_f24,arate);
      }
    }
  }
  return addr;
}

void SetPartInit(HEAT_HAZE *addr, int type, int lifetime) {
	int j;
	
  ushort uVar1;
  HEAT_HAZE *v;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 199;
  v = addr;
  do {
    iVar3 = iVar3 + -1;
    set_vect((float *)v,0.0,0.0,0.0,1.0);
    v->particles[0].color[3] = 0.0;
    v->particles[0].lifetime = 0;
    v = (HEAT_HAZE *)(v->particles + 1);
  } while (-1 < iVar3);
  addr->head = 0;
  addr->flag = 1;
  addr->cnt = 0;
  addr->disp = 0;
  if (5 < type - 8U) {
    return;
  }
  uVar2 = (ushort)lifetime;
  switch(type) {
  case 8:
    uVar1 = 100;
    uVar2 = 200;
    break;
  case 9:
    uVar1 = 200;
    goto LAB_00139f08;
  case 10:
    addr->blife = uVar2;
    addr->max = (ushort)(lifetime / 2);
    return;
  case 0xb:
    uVar1 = 0x4b;
    uVar2 = 300;
    break;
  case 0xc:
    uVar1 = (ushort)(lifetime << 1);
LAB_00139f08:
    addr->blife = uVar2;
    addr->max = uVar1;
    return;
  case 0xd:
    addr->blife = uVar2;
    iVar3 = lifetime + 7;
    if (-1 < lifetime) {
      iVar3 = lifetime;
    }
    addr->max = (ushort)(iVar3 >> 3);
    return;
  }
  addr->blife = uVar2;
  addr->max = uVar1;
  return;
}

void* GetItemPartAddr(void *addr, int type, int lifetime) {
	void *ret;
	
  void *in_v0_lo;
  
  return in_v0_lo;
}

void* GetEnePartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  ushort uVar2;
  HEAT_HAZE *addr_00;
  int iVar3;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    iVar3 = 0;
    bVar1 = false;
    uVar2 = ene_particle[0].flag;
    addr_00 = ene_particle;
    while( true ) {
      if (uVar2 == 0) {
        SetPartInit(addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      iVar3 = iVar3 + 1;
      if ((2 < iVar3) || (bVar1)) break;
      uVar2 = addr_00[1].flag;
      addr_00 = addr_00 + 1;
    }
  }
  return addr;
}

void* GetAmuPartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  ushort uVar2;
  HEAT_HAZE *addr_00;
  int iVar3;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    iVar3 = 0;
    bVar1 = false;
    uVar2 = amu_particle[0].flag;
    addr_00 = amu_particle;
    while( true ) {
      if (uVar2 == 0) {
        SetPartInit(addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      iVar3 = iVar3 + 1;
      if ((0 < iVar3) || (bVar1)) break;
      uVar2 = addr_00[1].flag;
      addr_00 = addr_00 + 1;
    }
  }
  return addr;
}

void* GetTorchPartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  ushort uVar2;
  HEAT_HAZE *addr_00;
  int iVar3;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    iVar3 = 0;
    bVar1 = false;
    uVar2 = torch_particle[0].flag;
    addr_00 = torch_particle;
    while( true ) {
      if (uVar2 == 0) {
        printf("Set Torch work no = [%d]\n");
        SetPartInit(addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      iVar3 = iVar3 + 1;
      if ((4 < iVar3) || (bVar1)) break;
      uVar2 = addr_00[1].flag;
      addr_00 = addr_00 + 1;
    }
  }
  return addr;
}

void* GetSmokePartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	float r;
	
  bool bVar1;
  ushort uVar2;
  HEAT_HAZE *addr_00;
  int iVar3;
  undefined in_vf0 [16];
  undefined auVar4 [16];
  undefined4 in_vuR;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    iVar3 = 0;
    bVar1 = false;
    addr_00 = smoke_particle;
    uVar2 = smoke_particle[0].flag;
    while( true ) {
      if (uVar2 == 0) {
        SetPartInit(addr_00,type,lifetime);
                    /* inlined from effect.h */
        auVar4 = _vrnext(in_vuR);
        auVar4 = _vsubbc(auVar4,in_vf0);
        auVar4 = _qmfc2(SUB164(auVar4,0));
                    /* end of inlined section */
        bVar1 = true;
        addr_00->cnt = (int)(SUB164(auVar4,0) * 360.0);
        addr = addr_00;
      }
      iVar3 = iVar3 + 1;
      if ((3 < iVar3) || (bVar1)) break;
      uVar2 = addr_00[1].flag;
      addr_00 = addr_00 + 1;
    }
  }
  return addr;
}

void SetNewItemEffect(NEW_ITEM *nip) {
	int flow;
	int flg;
	float rot_z;
	float cnt;
	float wait;
	float out;
	float rot_x;
	float rot_y;
	float size;
	sceVu0FVECTOR wpos;
	sceVu0FMATRIX wlm[5];
	DRAW_ENV de;
	float *v1;
	
  uchar a;
  undefined4 uVar1;
  int iVar2;
  Matrix4x4 *pMVar3;
  Matrix4x4 *m0;
  Matrix4x4 *m0_00;
  Matrix4x4 *m0_01;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_f24;
  float wpos [4];
  float wlm [5] [4] [4];
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  
  de.tex1 = DAT_0034b878;
  de.alpha = DAT_0034b880;
  de.zbuf = DAT_0034b888;
  de.test = DAT_0034b890;
  de.clamp = DAT_0034b898;
  de.prim = DAT_0034b8a0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  wpos[2] = nip->pos[2];
  wpos[3] = nip->pos[3];
  wpos[0] = (float)*(undefined8 *)nip->pos;
  wpos[1] = (float)((ulong)*(undefined8 *)nip->pos >> 0x20);
                    /* end of inlined section */
  iVar4 = nip->flow;
  fVar8 = nip->cnt;
  fVar7 = nip->rot;
  iVar2 = GetCornHitCheck(wpos,1200.0);
  if (iVar2 == 0) {
    if ((stop_effects == 0) && (fVar7 = fVar7 + DAT_00355420, DAT_00355424 < fVar7)) {
      fVar7 = fVar7 - DAT_00355428;
    }
    fVar5 = 60.0;
    fVar6 = 30.0;
  }
  else {
    if ((stop_effects == 0) && (fVar7 = fVar7 + DAT_0035542c, DAT_00355430 < fVar7)) {
      fVar7 = fVar7 - DAT_00355434;
    }
    fVar5 = 10.0;
    fVar6 = 20.0;
  }
  fVar9 = fVar8;
  if (iVar4 == 1) {
LAB_0013a3b0:
    fVar9 = fVar6;
    if (fVar8 <= fVar6) {
      fVar9 = fVar8;
    }
  }
  else if (iVar4 < 2) {
    if ((iVar4 == 0) && (fVar9 = fVar5, fVar8 <= fVar5)) {
      fVar9 = fVar8;
    }
  }
  else if (iVar4 == 2) goto LAB_0013a3b0;
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  uVar1 = DAT_00355438;
  if (iVar4 == 1) {
    unaff_f24 = fVar9 / fVar6;
    if (fVar6 <= fVar9) {
      fVar9 = 0.0;
      iVar4 = 2;
      goto LAB_0013a48c;
    }
  }
  else if (iVar4 < 2) {
    if (iVar4 != 0) goto LAB_0013a48c;
    unaff_f24 = 0.0;
    if (fVar5 <= fVar9) {
      fVar9 = 0.0;
      iVar4 = 1;
      goto LAB_0013a48c;
    }
  }
  else {
    if (iVar4 != 2) goto LAB_0013a48c;
    unaff_f24 = (fVar6 - fVar9) / fVar6;
    if (fVar6 <= fVar9) {
      fVar9 = 0.0;
      iVar4 = 0;
      goto LAB_0013a48c;
    }
  }
  if (stop_effects == 0) {
    fVar9 = fVar9 + 1.0;
  }
LAB_0013a48c:
  if (iVar2 == 0) {
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
    pMVar3 = (Matrix4x4 *)wlm[1];
    sceVu0UnitMatrix(pMVar3);
    sceVu0RotMatrixZ(fVar7,pMVar3,pMVar3);
    sceVu0RotMatrixX(rot_x,pMVar3,pMVar3);
    sceVu0RotMatrixY(rot_y,pMVar3,pMVar3);
    sceVu0TransMatrix(pMVar3,pMVar3,(Vector4 *)wpos);
    Set3DPosTexure((float (*) [4])pMVar3,&de,0x10,unaff_f24 * 120.0,unaff_f24 * 120.0,0xb4,0xb4,0xb4
                   ,'P');
    Set3DPosTexure((float (*) [4])(Matrix4x4 *)wlm,&de,0x12,54.0,54.0,0xb4,0xb4,0xb4,
                   (uchar)(int)(unaff_f24 * 48.0));
    nip->rot = fVar7;
  }
  else {
    fVar8 = 78.0;
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
    pMVar3 = (Matrix4x4 *)wlm[1];
    sceVu0UnitMatrix(pMVar3);
    sceVu0RotMatrixZ(fVar7,pMVar3,pMVar3);
    sceVu0RotMatrixX(rot_x,pMVar3,pMVar3);
    sceVu0RotMatrixY(rot_y,pMVar3,pMVar3);
    sceVu0TransMatrix(pMVar3,pMVar3,(Vector4 *)wpos);
    m0_01 = (Matrix4x4 *)wlm[2];
    sceVu0UnitMatrix(m0_01);
    sceVu0RotMatrixX(fVar7,m0_01,m0_01);
    sceVu0RotMatrixY(uVar1,m0_01,m0_01);
    sceVu0TransMatrix(m0_01,m0_01,(Vector4 *)wpos);
    m0_00 = (Matrix4x4 *)wlm[3];
    sceVu0UnitMatrix(m0_00);
    sceVu0RotMatrixY(fVar7,m0_00,m0_00);
    sceVu0RotMatrixZ(uVar1,m0_00,m0_00);
    sceVu0TransMatrix(m0_00,m0_00,(Vector4 *)wpos);
    m0 = (Matrix4x4 *)wlm[4];
    sceVu0UnitMatrix(m0);
    sceVu0RotMatrixX(uVar1,m0,m0);
    sceVu0RotMatrixZ(fVar7,m0,m0);
    sceVu0TransMatrix(m0,m0,(Vector4 *)wpos);
    Set3DPosTexure((float (*) [4])pMVar3,&de,0x10,unaff_f24 * 150.0,unaff_f24 * 150.0,0xff,0xff,0xff
                   ,'P');
    a = (uchar)(int)(unaff_f24 * 64.0);
    Set3DPosTexure((float (*) [4])m0_01,&de,0x12,fVar8,fVar8,0xf0,0xf0,0xff,a);
    Set3DPosTexure((float (*) [4])m0_00,&de,0x12,fVar8,fVar8,0xf0,0xff,0xf0,a);
    Set3DPosTexure((float (*) [4])m0,&de,0x12,fVar8,fVar8,0xff,0xf0,0xf0,a);
    nip->rot = fVar7;
  }
  nip->flow = iVar4;
  nip->cnt = fVar9;
  return;
}

void CheckItemEffect() {
	int i;
	int j;
	int n;
	int num;
	int item_heat_num[24];
	int iwn[24];
	int iwo[24];
	sceVu0FVECTOR item_heat_wpos[24];
	static int item_heat_onum[24];
	static int item_heat_use[24];
	static void *item_heat_addr[24];
	static sceVu0FVECTOR item_heat_pos[24];
	float r;
	float r;
	float *v1;
	float *v1;
	float r;
	float r;
	int w;
	sceVu0IVECTOR ivec;
	sceVu0FVECTOR fvec;
	sceVu0FMATRIX local_world;
	sceVu0FMATRIX local_screen;
	sceVu0FVECTOR itm_pos;
	float *v0;
	
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float (*pafVar15) [4];
  uint *puVar16;
  int iVar17;
  NEW_ITEM *pNVar18;
  int iVar19;
  undefined4 *puVar20;
  Vector4 *tv;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  int *piVar24;
  undefined in_vf0 [16];
  undefined auVar25 [16];
  undefined4 in_vuR;
  int item_heat_num [24];
  int iwn [24];
  int iwo [24];
  float item_heat_wpos [24] [4];
  int ivec [4];
  float fvec [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float itm_pos [4];
  int *local_f0;
  Matrix4x4 *local_ec;
  int *local_e8;
  Matrix4x4 *local_e4;
  float *local_e0;
  
  puVar16 = (uint *)item_heat_num;
  piVar24 = item_heat_num;
  if (init_newitem != 0) {
    puVar22 = &item_heat_use_228;
    puVar21 = &item_heat_addr_229;
    pNVar18 = ni;
    puVar20 = &item_heat_onum_227;
    iVar17 = 0x17;
    fVar12 = DAT_0035543c;
    do {
      *puVar20 = 0xffffffff;
      *puVar21 = 0;
      *puVar22 = 0xffffffff;
                    /* inlined from effect.h */
      auVar25 = _vrnext(in_vuR);
      auVar25 = _vsubbc(auVar25,in_vf0);
      auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
      uVar6 = fptoui(SUB164(auVar25,0) * fVar12);
      pNVar18->flow = uVar6;
      pNVar18->rot = 0.0;
                    /* inlined from effect.h */
      auVar25 = _vrnext(in_vuR);
      auVar25 = _vsubbc(auVar25,in_vf0);
      auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
      puVar22 = puVar22 + 1;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
      iVar17 = iVar17 + -1;
      pNVar18->cnt = SUB164(auVar25,0) * 10.0;
      pNVar18 = pNVar18 + 1;
    } while (-1 < iVar17);
    init_newitem = 0;
  }
  local_e0 = itm_pos;
  local_e4 = (Matrix4x4 *)local_screen;
  local_e8 = iwn;
  local_ec = (Matrix4x4 *)local_world;
  local_f0 = ivec;
  iVar17 = 0x17;
  piVar23 = iwo;
  piVar8 = local_e8;
  do {
    *piVar23 = 0;
    iVar17 = iVar17 + -1;
    *piVar8 = 0;
    piVar23 = piVar23 + 1;
    piVar8 = piVar8 + 1;
  } while (-1 < iVar17);
  iVar7 = 0;
  iVar17 = 0;
  iVar11 = 0;
  pafVar15 = item_heat_wpos;
  iVar10 = 0;
  do {
    sVar1 = *(short *)((int)item_dsp_wrk[0].pos + iVar10 + -0x10);
    iVar9 = iVar10;
    iVar19 = 0;
    while (sVar1 != -1) {
      if (*(char *)((int)item_dsp_wrk[0].pos + iVar9 + -0xe) != '\0') {
        uVar4 = *(undefined8 *)((int)item_dsp_wrk[0].pos + iVar9);
                    /* inlined from ../../graphics/graph3d/libsg.h */
        fVar12 = *(float *)((int)item_dsp_wrk[0].pos + iVar9 + 8);
        fVar13 = *(float *)((int)item_dsp_wrk[0].pos + iVar9 + 0xc);
        (*pafVar15)[0] = (float)uVar4;
        (*pafVar15)[1] = (float)((ulong)uVar4 >> 0x20);
        (*pafVar15)[2] = fVar12;
        (*pafVar15)[3] = fVar13;
                    /* end of inlined section */
        iVar17 = iVar17 + 1;
        pafVar15 = pafVar15[1];
        iVar11 = iVar17 * 4;
        *puVar16 = (uint)*(ushort *)((int)item_dsp_wrk[0].pos + iVar9 + -0x10);
        puVar16 = puVar16 + 1;
      }
      iVar9 = iVar19 * 0x20 + 0x20 + iVar10;
      sVar1 = *(short *)((int)item_dsp_wrk[iVar19 + 1].pos + iVar10 + -0x10);
      iVar19 = iVar19 + 1;
    }
    iVar7 = iVar7 + 1;
    iVar10 = iVar7 * 0x200;
  } while (iVar7 < 2);
  *(undefined4 *)((int)item_heat_num + iVar11) = 0xffffffff;
  iVar11 = 0;
  iVar17 = item_heat_onum_227;
  while (iVar17 != -1) {
    iVar17 = 0;
    if (item_heat_num[0] != -1) {
      iVar10 = 0;
      do {
        iVar17 = iVar17 + 1;
        if ((&item_heat_onum_227)[iVar11] == *(int *)((int)item_heat_num + iVar10)) {
          iwo[iVar11] = 1;
          *(undefined4 *)((int)local_e8 + iVar10) = 1;
        }
        iVar10 = iVar17 * 4;
      } while (item_heat_num[iVar17] != -1);
    }
    iVar11 = iVar11 + 1;
    iVar17 = (&item_heat_onum_227)[iVar11];
  }
  iVar11 = 0;
  iVar17 = 0;
  if (item_heat_onum_227 == -1) {
    bVar3 = true;
    iVar10 = 1;
  }
  else {
    iVar9 = 0;
    bVar3 = true;
    piVar23 = iwo;
    iVar7 = 1;
    do {
      if ((*piVar23 == 0) || (!bVar3)) {
        piVar23 = &item_heat_use_228;
        iVar9 = *(int *)((int)&item_heat_onum_227 + iVar9);
        iVar19 = 0;
        bVar5 = true;
        iVar10 = item_heat_use_228;
        while( true ) {
          iVar19 = iVar19 + 1;
          if (iVar9 == iVar10) {
            *piVar23 = -1;
            bVar5 = false;
          }
          piVar23 = piVar23 + 1;
          iVar10 = iVar7;
          if ((0x17 < iVar19) || (!bVar5)) break;
          iVar10 = *piVar23;
        }
      }
      else {
        bVar3 = iVar7 < 0x10;
        iVar10 = iVar7 + 1;
        iVar17 = iVar7;
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar11 * 4;
      piVar23 = iwo + iVar11;
      iVar7 = iVar10;
    } while ((&item_heat_onum_227)[iVar11] != -1);
  }
  iVar11 = 0;
  if (item_heat_num[0] != -1) {
    iVar7 = 0;
    do {
      if ((*(int *)((int)local_e8 + iVar7) == 0) && (bVar3)) {
        pNVar18 = ni;
        puVar21 = &item_heat_addr_229;
        puVar20 = &item_heat_pos_230;
        piVar23 = &item_heat_use_228;
        iVar19 = 0;
        bVar3 = true;
        fVar12 = DAT_00355440;
        iVar9 = item_heat_use_228;
        while( true ) {
          if (iVar9 == -1) {
            *piVar23 = *(int *)((int)item_heat_num + iVar7);
            uVar4 = *(undefined8 *)item_heat_wpos[iVar11];
                    /* inlined from ../../graphics/graph3d/libsg.h */
            fVar13 = item_heat_wpos[iVar11][2];
            fVar14 = item_heat_wpos[iVar11][3];
            *puVar20 = (int)uVar4;
            puVar20[1] = (int)((ulong)uVar4 >> 0x20);
            puVar20[2] = fVar13;
            puVar20[3] = fVar14;
                    /* end of inlined section */
            *puVar21 = 0;
            bVar3 = false;
                    /* inlined from effect.h */
            auVar25 = _vrnext(in_vuR);
            auVar25 = _vsubbc(auVar25,in_vf0);
            auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
            uVar6 = fptoui(SUB164(auVar25,0) * fVar12);
            pNVar18->flow = uVar6;
            pNVar18->rot = 0.0;
                    /* inlined from effect.h */
            auVar25 = _vrnext(in_vuR);
            auVar25 = _vsubbc(auVar25,in_vf0);
            auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
            pNVar18->cnt = SUB164(auVar25,0) * 10.0;
            iVar17 = iVar10;
            iVar10 = iVar10 + 1;
          }
          iVar19 = iVar19 + 1;
          pNVar18 = pNVar18 + 1;
          puVar21 = puVar21 + 1;
          puVar20 = puVar20 + 4;
          piVar23 = piVar23 + 1;
          if (0x17 < iVar19) {
            bVar3 = iVar17 < 0x10;
            goto LAB_0013aca8;
          }
          if (!bVar3) break;
          iVar9 = *piVar23;
        }
        bVar3 = iVar17 < 0x10;
      }
LAB_0013aca8:
      iVar11 = iVar11 + 1;
      iVar7 = iVar11 * 4;
    } while (item_heat_num[iVar11] != -1);
  }
  puVar20 = &item_heat_onum_227;
  iVar17 = 0x17;
  do {
    uVar2 = *piVar24;
    iVar17 = iVar17 + -1;
    piVar24 = piVar24 + 1;
    *puVar20 = uVar2;
    puVar20 = puVar20 + 1;
  } while (-1 < iVar17);
  memset(local_e0,0,0x10);
  itm_pos[3] = 1.0;
  piVar24 = &item_heat_use_228;
  tv = (Vector4 *)&item_heat_pos_230;
  iVar17 = 0;
  do {
    if (*piVar24 != -1) {
      sceVu0UnitMatrix(local_ec);
      local_world[2][2] = 25.0;
      local_world[1][1] = 25.0;
      local_world[0][0] = 25.0;
      sceVu0TransMatrix(local_ec,local_ec,tv);
      sceVu0MulMatrix(local_e4,&SgWSMtx,local_ec);
      sceVu0RotTransPers(local_f0,local_e4,local_e0,0);
      if (ivec[2] - 0xffU < 0xffff01 && (ivec[1] - 0x7500U < 0x1601 && ivec[0] - 0x6800U < 0x3001))
      {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        uVar4 = *(undefined8 *)tv;
        fVar12 = tv->z;
        fVar13 = tv->w;
        ni[iVar17].pos[0] = (float)uVar4;
        ni[iVar17].pos[1] = (float)((ulong)uVar4 >> 0x20);
        ni[iVar17].pos[2] = fVar12;
        ni[iVar17].pos[3] = fVar13;
                    /* end of inlined section */
        fVar12 = ni[iVar17].pos[1];
        ni[iVar17].pos[3] = 1.0;
        ni[iVar17].pos[1] = fVar12 - 50.0;
        SetNewItemEffect(ni + iVar17);
      }
    }
    iVar17 = iVar17 + 1;
    piVar24 = piVar24 + 1;
    tv = tv + 1;
  } while (iVar17 < 0x18);
  return;
}

void SetEneFire(EFFECT_CONT *ec) {
	float r;
	float g;
	float b;
	float a;
	float s;
	float t;
	float ar;
	u_int col;
	u_int ty;
	sceVu0FVECTOR pos1;
	sceVu0FVECTOR pos2;
	float *v1;
	
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  void *pvVar5;
  int type;
  float fVar6;
  float b;
  float r;
  float size;
  float arate;
  float pos1 [4];
  float pos2 [4];
  
  if ((ingame_wrk.stts & 0x20) == 0) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *ec->pnt[1];
    r = (float)(uVar1 >> 0x18);
    b = (float)(uVar1 >> 8 & 0xff);
    uVar2 = (ec->dat).iv[3];
                    /* WARNING: Load size is inaccurate */
    size = *ec->pnt[2];
    if ((int)uVar2 < 0) {
      fVar6 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar6 = fVar6 + fVar6;
      pfVar4 = (float *)ec->pnt[5];
    }
    else {
      fVar6 = (float)uVar2;
      pfVar4 = (float *)ec->pnt[5];
    }
    type = 10;
    arate = *pfVar4;
    if ((ec->dat).uc8[2] != 0) {
      type = 0xb;
    }
                    /* inlined from ../../graphics/graph3d/libsg.h */
    puVar3 = (undefined8 *)ec->pnt[0];
    pos1[2] = *(float *)(puVar3 + 1);
    pos1[3] = *(float *)((int)puVar3 + 0xc);
    pos1[0] = (float)*puVar3;
    pos1[1] = (float)((ulong)*puVar3 >> 0x20);
                    /* end of inlined section */
    puVar3 = (undefined8 *)ec->pnt[4];
    pfVar4 = pos2;
    if (puVar3 == (undefined8 *)0x0) {
      pvVar5 = GetEnePartAddr(ec->pnt[3],type,(int)fVar6);
      ec->pnt[3] = pvVar5;
      pfVar4 = (float *)0x0;
    }
    else {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      pos2[2] = *(float *)(puVar3 + 1);
      pos2[3] = *(float *)((int)puVar3 + 0xc);
      pos2[0] = (float)*puVar3;
      pos2[1] = (float)((ulong)*puVar3 >> 0x20);
                    /* end of inlined section */
      pvVar5 = GetEnePartAddr(ec->pnt[3],type,(int)fVar6);
      ec->pnt[3] = pvVar5;
    }
    pvVar5 = ContHeatHaze(pvVar5,type,pos1,pfVar4,0,r,(float)(uVar1 >> 0x10 & 0xff),b,
                          (float)(uVar1 & 0xff),size,arate);
    ec->pnt[3] = pvVar5;
    if (((ec->dat).uc8[1] & 1) != 0) {
      ResetEffects(ec);
    }
  }
  return;
}

void CallAmuletFire() {
  amulet_fire_flow = 0;
  amulet_fire_cnt = 0;
  return;
}

int SetAmuletFire() {
	static u_char alp[17];
	static int cnt;
	static int load_id;
	static float h = 0.f;
	int i;
	int c;
	int n;
	int w;
	int ret;
	float fdiv;
	float size;
	float fx;
	float fy;
	float fz;
	float l;
	float lla;
	sceVu0IVECTOR ivec[17][2];
	sceVu0FVECTOR seal[17][2];
	sceVu0FMATRIX local_world;
	sceVu0FMATRIX world_view;
	sceVu0FMATRIX world_screen;
	sceVu0FMATRIX view_screen;
	sceVu0FMATRIX local_screen;
	sceVu0FMATRIX work;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR obj_pos;
	sceVu0FVECTOR fire_pos;
	U32DATA ts[17][2];
	U32DATA tt[17][2];
	U32DATA tq[17][2];
	sceVu0FVECTOR fpos;
	
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  U32DATA UVar7;
  U32DATA *pUVar8;
  Q_WORDDATA *pQVar9;
  undefined1 *puVar10;
  float (*paafVar11) [2] [4];
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  Q_WORDDATA *pQVar14;
  Q_WORDDATA *pQVar15;
  Q_WORDDATA *pQVar16;
  uint uVar17;
  uint uVar18;
  int (*paaiVar19) [2] [4];
  int (*paaiVar20) [2] [4];
  int iVar21;
  int iVar22;
  U32DATA (*paUVar23) [2];
  U32DATA *pUVar24;
  byte *pbVar25;
  int (*paiVar26) [4];
  float (*pafVar27) [4];
  U32DATA (*paUVar28) [2];
  float fVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  int ivec [17] [2] [4];
  float seal [17] [2] [4];
  float local_world [4] [4];
  float world_view [4] [4];
  float world_screen [4] [4];
  float view_screen [4] [4];
  float local_screen [4] [4];
  float work [4] [4];
  float rot [4];
  float bpos [4];
  float obj_pos [4];
  float fire_pos [4];
  U32DATA ts [17] [2];
  U32DATA tt [17] [2];
  U32DATA tq [17] [2];
  float fpos [4];
  int n;
  int ret;
  Matrix4x4 *local_100;
  U32DATA (*local_fc) [2];
  U32DATA *local_f8;
  Matrix4x4 *local_f4;
  U32DATA (*local_f0) [2];
  U32DATA *local_ec;
  U32DATA (*local_e8) [2];
  U32DATA *local_e4;
  U32DATA *local_e0;
  U32DATA *local_dc;
  U32DATA (*local_d8) [2];
  float (*local_d4) [2] [4];
  
  paaiVar20 = ivec;
  paaiVar19 = ivec;
  n = 1;
  ret = 0;
  iVar21 = 0;
  if (dbg_wrk.eff_amufire != 0) {
    if ((amulet_fire_flow < 1) && (-2 < amulet_fire_flow)) {
      puVar10 = &DAT_00382830;
      iVar21 = 0x10;
      do {
        *puVar10 = 0x80;
        iVar21 = iVar21 + -1;
        puVar10 = puVar10 + -1;
      } while (-1 < iVar21);
    }
    local_e4 = ts + 1;
    local_e8 = ts;
    local_ec = tq + 1;
    local_f0 = tq;
    local_f4 = (Matrix4x4 *)local_world;
    local_f8 = tt + 1;
    local_fc = tt;
    local_100 = (Matrix4x4 *)local_screen;
    local_d4 = seal;
    fVar29 = SgSqrtf((camera.i.x - camera.p.x) * (camera.i.x - camera.p.x) +
                     (camera.i.y - camera.p.y) * (camera.i.y - camera.p.y) +
                     (camera.i.z - camera.p.z) * (camera.i.z - camera.p.z));
    obj_pos[0] = camera.p.x + ((camera.i.x - camera.p.x) * 200.0) / fVar29;
    obj_pos[1] = camera.p.y + ((camera.i.y - camera.p.y) * 200.0) / fVar29;
    obj_pos[2] = camera.p.z + ((camera.i.z - camera.p.z) * 200.0) / fVar29;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    obj_pos[3] = 1.0;
                    /* end of inlined section */
    fVar29 = 16.0;
    iVar21 = 0;
    paafVar11 = local_d4;
    do {
      fVar30 = (float)iVar21;
      (*paafVar11)[0] = DAT_00355444;
      (*paafVar11)[2] = 0.0;
      iVar21 = iVar21 + 1;
      (*paafVar11)[3] = 1.0;
      (*paafVar11)[1][0] = DAT_00355448;
      (*paafVar11)[1][2] = 0.0;
      (*paafVar11)[1][3] = 1.0;
      fVar30 = (fVar30 * 4.0) / 16.0 - 2.0;
      (*paafVar11)[1][1] = fVar30;
      (*paafVar11)[1] = fVar30;
      paafVar11 = paafVar11[1];
    } while (iVar21 < 0x11);
    iVar21 = 0;
    GetTrgtRot((float *)&camera,&camera.i.x,rot,3);
    fVar30 = DAT_0035544c;
    fVar36 = 1.0;
    bVar2 = false;
    sceVu0UnitMatrix(local_f4);
    fVar35 = 94.0;
    local_world[0][0] = camera.fov * 25.0;
    local_e0 = local_f8;
    local_dc = local_e4;
    local_world[1][1] = local_world[0][0];
    local_world[2][2] = local_world[0][0];
    sceVu0RotMatrixX(rot[0],local_f4,local_f4);
    local_d8 = local_fc;
    sceVu0RotMatrixY(rot[1],local_f4,local_f4);
    sceVu0TransMatrix(local_f4,local_f4,(Vector4 *)obj_pos);
    sceVu0MulMatrix(local_100,&SgWSMtx,local_f4);
    paiVar26 = ivec[1];
    pUVar24 = local_ec;
    paUVar28 = local_e8;
    paUVar23 = local_f0;
    pafVar27 = seal[1];
    do {
      sceVu0RotTransPers(paaiVar20,local_screen,local_d4,1);
      local_d4 = local_d4[1];
      sceVu0RotTransPers(paiVar26,local_screen,pafVar27,1);
      paiVar26 = paiVar26[2];
      iVar34 = *(int *)((int)paaiVar20 + 0xc);
      fVar33 = (float)iVar21;
      iVar31 = *(int *)((int)paaiVar20 + 4);
      iVar21 = iVar21 + 1;
      fVar33 = fVar33 * DAT_00355450;
      iVar22 = *(int *)((int)paaiVar20 + 8);
      iVar4 = *(int *)((int)paaiVar20 + 0x10);
      iVar5 = *(int *)((int)paaiVar20 + 0x14);
      iVar6 = *(int *)((int)paaiVar20 + 0x18);
      if (0x5000 < *(int *)paaiVar20 - 0x5800U) {
        bVar2 = true;
      }
      (*paUVar23)[0].fl32 = fVar36 / (float)iVar34;
      fVar32 = DAT_00355454;
      if (0x1c00 < iVar31 - 0x7200U) {
        bVar2 = true;
      }
      fVar33 = fVar33 / fVar29 + fVar30;
      if (0xffff00 < iVar22 - 0xffU) {
        bVar2 = true;
      }
      if (0x5000 < iVar4 - 0x5800U) {
        bVar2 = true;
      }
      (*paUVar28)[0].fl32 = (fVar36 / (float)iVar34) * fVar30 * fVar35 * 0.0078125;
      if (0x1c00 < iVar5 - 0x7200U) {
        bVar2 = true;
      }
      if (0xffff00 < iVar6 - 0xffU) {
        bVar2 = true;
      }
      paUVar28 = paUVar28[1];
      pUVar8 = *paUVar23;
      paUVar23 = paUVar23[1];
      (*local_d8)[0].fl32 = fVar33 * pUVar8->fl32;
      local_d8 = local_d8[1];
      iVar31 = *(int *)((int)paaiVar20 + 0x1c);
      paaiVar20 = (int (*) [2] [4])((int)paaiVar20 + 0x20);
      pUVar24->fl32 = fVar36 / (float)iVar31;
      local_dc->fl32 = (fVar36 / (float)iVar31) * fVar32 * fVar35 * 0.0078125;
      local_dc = local_dc + 2;
      fVar32 = pUVar24->fl32;
      pUVar24 = pUVar24 + 2;
      local_e0->fl32 = fVar33 * fVar32;
      local_e0 = local_e0 + 2;
      pafVar27 = pafVar27[2];
    } while (iVar21 < 0x11);
    if (bVar2) {
      iVar21 = 0;
    }
    else {
      iVar22 = 0;
      Reserve2DPacket(0x1000);
      pQVar9 = pbuf;
      iVar31 = ndpkt;
      iVar21 = monochrome_mode;
      pQVar14 = pbuf + ndpkt;
      pQVar14->ui32[0] = 0;
      pQVar14->ui32[1] = 0;
      pQVar14->ui32[2] = 0;
      pQVar14->ui32[3] = 0;
      pQVar14->ui32[0] = 0x70000000;
      pQVar9[ndpkt + 1].ul64[0] = 0x1000000000008006;
      pQVar9[ndpkt + 1].ul64[1] = 0xe;
      pQVar9[ndpkt + 2].ul64[1] = 0x3f;
      pQVar9[ndpkt + 2].ul64[0] = 0;
      pQVar9[ndpkt + 3].ul64[0] = *(ulong *)(&effdat + (iVar21 + 0x1c) * 0x20);
      pQVar9[ndpkt + 3].ul64[1] = 6;
      pQVar9[ndpkt + 4].ul64[0] = 0x161;
      pQVar9[ndpkt + 4].ul64[1] = 0x14;
      pQVar9[ndpkt + 5].ul64[0] = 0x10100008c;
      pQVar9[ndpkt + 5].ul64[1] = 0x4e;
      pQVar9[ndpkt + 6].ul64[0] = 0x44;
      pQVar9[ndpkt + 6].ul64[1] = 0x42;
      pQVar9[ndpkt + 7].ul64[0] = 0x3000d;
      pQVar9[ndpkt + 7].ul64[1] = 0x47;
      pQVar9[ndpkt + 8].ul64[0] = 0x602e400000008011;
      pQVar9[ndpkt + 8].ul64[1] = 0x412412;
      ndpkt = ndpkt + 9;
      pbVar25 = &alp_240;
      do {
        uVar17 = 0x8000;
        pQVar14 = pQVar9 + ndpkt;
        pQVar14->fl32[0] = (float)(*local_e8)[0];
        pQVar12 = pQVar9 + ndpkt + 1;
        pQVar13 = pQVar9 + ndpkt + 2;
        uVar18 = 0x8000;
        *(U32DATA *)(pQVar14->ui32 + 1) = (*local_fc)[0];
        if (0 < iVar22) {
          uVar18 = 0;
        }
        UVar7 = (*local_f0)[0];
        pQVar15 = pQVar9 + ndpkt + 3;
        pQVar14->ui32[3] = 0;
        *(U32DATA *)(pQVar14->ui32 + 2) = UVar7;
        pQVar14 = pQVar9 + ndpkt + 4;
        pQVar12->ui32[0] = 0x40;
        pQVar12->ui32[1] = 0x40;
        iVar21 = ndpkt + 6;
        pQVar12->ui32[2] = 0x40;
        if (0 < iVar22) {
          uVar17 = 0;
        }
        pQVar16 = pQVar9 + ndpkt + 5;
        iVar22 = iVar22 + 1;
        pQVar12->ui32[3] = (uint)*pbVar25;
        local_f0 = local_f0[1];
        local_fc = local_fc[1];
        local_e8 = local_e8[1];
        pQVar13->ui32[0] = *(uint *)paaiVar19;
        pQVar13->ui32[1] = *(uint *)((int)paaiVar19 + 4);
        pQVar13->ui32[2] = *(uint *)((int)paaiVar19 + 8) << 4;
        pQVar13->ui32[3] = uVar18;
        UVar7.fl32 = *(float *)local_e4;
        local_e4 = local_e4 + 2;
        pQVar15->ui32[0] = (uint)UVar7;
        UVar7.fl32 = *(float *)local_f8;
        local_f8 = local_f8 + 2;
        *(U32DATA *)(pQVar15->ui32 + 1) = UVar7;
        UVar7.fl32 = *(float *)local_ec;
        pQVar15->ui32[3] = 0;
        local_ec = local_ec + 2;
        ((U32DATA *)(pQVar15->ui32 + 2))->fl32 = (float)UVar7;
        pQVar14->ui32[0] = 0x40;
        pQVar14->ui32[1] = 0x40;
        pQVar14->ui32[2] = 0x40;
        bVar3 = *pbVar25;
        pbVar25 = pbVar25 + 1;
        pQVar14->ui32[3] = (uint)bVar3;
        pQVar16->ui32[0] = *(uint *)((int)paaiVar19 + 0x10);
        pQVar16->ui32[1] = *(uint *)((int)paaiVar19 + 0x14);
        puVar1 = (uint *)((int)paaiVar19 + 0x18);
        paaiVar19 = (int (*) [2] [4])((int)paaiVar19 + 0x20);
        pQVar16->ui32[2] = *puVar1 << 4;
        ndpkt = iVar21;
        pQVar16->ui32[3] = uVar17;
        iVar4 = amulet_fire_flow;
      } while (iVar22 < 0x11);
      bVar2 = amulet_fire_flow == 1;
      pbuf[iVar31].ui32[0] = (iVar21 - (iVar31 + -0x70000000)) - 1;
      iVar21 = stop_effects;
      if (bVar2) {
        iVar21 = IsLoadEnd(load_id_242);
        if (iVar21 == 0) {
          return ret;
        }
        SeStartFix(0x5d,0,0x1000,0x1000,0);
        amulet_fire_ret = (void *)0x0;
      }
      else {
        if (1 < iVar4) {
          if (iVar4 == 0xfe) {
            amulet_fire_flow = 0xff;
          }
          else {
            if (iVar4 < 0xff) {
              if (iVar4 != 2) {
                return ret;
              }
              if (stop_effects == 0) {
                cnt_241 = cnt_241 + 1;
              }
              if (cnt_241 < 0x3c) {
                n = 0;
                h_243 = -2.0;
              }
              else {
                if (alp_240 != 0) {
                  iVar31 = alp_240 - 0x10;
                  if (stop_effects == 0) {
                    if (iVar31 < 0) {
                      iVar31 = 0;
                    }
                    alp_240 = (byte)iVar31;
                  }
                  n = 0;
                  h_243 = (((128.0 - (float)(uint)alp_240) * 0.0078125 + 0.0) * 4.0) / fVar29 - 2.0;
                }
                pbVar25 = &DAT_00382821;
                iVar31 = 1;
                do {
                  if ((pbVar25[-1] == 0) && (*pbVar25 != 0)) {
                    if (iVar21 == 0) {
                      iVar22 = *pbVar25 - 0x10;
                      if (iVar22 < 0) {
                        iVar22 = 0;
                      }
                      *pbVar25 = (byte)iVar22;
                      bVar3 = *pbVar25;
                    }
                    else {
                      bVar3 = *pbVar25;
                    }
                    n = iVar31 < 0xf ^ 1;
                    h_243 = (((float)iVar31 + (128.0 - (float)(uint)bVar3) * 0.0078125) * 4.0) /
                            fVar29 - 2.0;
                  }
                  iVar31 = iVar31 + 1;
                  pbVar25 = pbVar25 + 1;
                } while (iVar31 < 0x11);
              }
              memset((Vector4 *)fpos,0,0x10);
              fpos[1] = h_243 + DAT_00355458;
              fpos[3] = 1.0;
              sceVu0ApplyMatrix((Vector4 *)fire_pos,local_f4,(Vector4 *)fpos);
              amulet_fire_ret = GetAmuPartAddr(amulet_fire_ret,9,200);
              amulet_fire_ret =
                   ContHeatHaze(amulet_fire_ret,9,(float *)(Vector4 *)fire_pos,(float *)0x0,n,128.0,
                                120.0,255.0,128.0,DAT_0035545c,1.0);
              if (DAT_00382830 != '\0') {
                return ret;
              }
              if (0 < *(short *)((int)amulet_fire_ret + 0x320c)) {
                return ret;
              }
              amulet_fire_flow = 0xfe;
              return ret;
            }
            if (iVar4 != 0xff) {
              return ret;
            }
          }
          return 1;
        }
        if (iVar4 == -1) {
          return 0;
        }
        if (iVar4 != 0) {
          return ret;
        }
        cnt_241 = 0;
        load_id_242 = SeFileLoadAndSet(0x5f5,0x15);
      }
      amulet_fire_flow = amulet_fire_flow + 1;
      iVar21 = ret;
    }
  }
  return iVar21;
}

void* ContTorch(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate, int tp2, float ar, float sr) {
	float rrate;
	float escl;
	float ysp1;
	float ysp2;
	int i;
	int j;
	float wind;
	sceVu0FMATRIX work;
	sceVu0FMATRIX local_clip;
	sceVu0FMATRIX local_world;
	sceVu0FMATRIX local_screen;
	sceVu0FVECTOR ppos;
	sceVu0FVECTOR pvel;
	sceVu0FVECTOR wpos;
	float fx;
	float fy;
	float fz;
	float rx;
	float rz;
	float *v1;
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
  uchar r_00;
  uchar g_00;
  uchar b_00;
  int iVar2;
  float fVar3;
  float fVar4;
  float a_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined in_vf0 [16];
  undefined auVar9 [16];
  undefined4 in_vuR;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float ppos [4];
  float pvel [4];
  float wpos [4];
  float rx;
  float rz;
  float local_118;
  float ysp1;
  float ysp2;
  Matrix4x4 *local_10c;
  Matrix4x4 *local_108;
  
  local_118 = a;
  memset(ppos,0,0x10);
  fVar8 = DAT_00355460;
  ppos[3] = 1.0;
  memset(pvel,0,0x10);
  fVar3 = DAT_00355464;
  ysp1 = DAT_00355468;
  ysp2 = DAT_0035546c;
  if (init_torch != 0) {
    init_torch = 0;
  }
  if (addr == (void *)0x0) {
    return (void *)0x0;
  }
  *(ushort *)((int)addr + 0x3208) = *(ushort *)((int)addr + 0x3208) | 0xff;
  if (ingame_wrk.mode == 10) {
    return (void *)((uint)addr | 0xff);
  }
  if (pos2 == (float *)0x0) {
    rz = 0.0;
    rx = 0.0;
  }
  else {
    Get2PosRot2(pos2,pos,&rx,&rz);
  }
  SgSqrtf((*pos - camera.p.x) * (*pos - camera.p.x) + (pos[1] - camera.p.y) * (pos[1] - camera.p.y)
          + (pos[2] - camera.p.z) * (pos[2] - camera.p.z));
  sceVu0UnitMatrix((Matrix4x4 *)work);
  work[0][0] = 25.0;
  work[2][2] = 25.0;
  work[1][1] = 25.0;
  sceVu0RotMatrixX(rx,work,work);
  sceVu0RotMatrixZ(-rz,work,work);
  sceVu0TransMatrix((Matrix4x4 *)local_world,(Matrix4x4 *)work,(Vector4 *)pos);
  local_10c = (Matrix4x4 *)local_screen;
  sceVu0MulMatrix(local_10c,&SgWSMtx,(Matrix4x4 *)local_world);
  local_108 = (Matrix4x4 *)local_clip;
  sceVu0MulMatrix(local_108,(Matrix4x4 *)SgCMtx,(Matrix4x4 *)local_world);
  fVar6 = DAT_003554bc;
  fVar4 = DAT_003554b0;
  fVar5 = DAT_00355490;
  fVar7 = DAT_0035548c;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  wpos[2] = pos[2];
  wpos[3] = pos[3];
  wpos[0] = (float)*(undefined8 *)pos;
  wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20);
                    /* end of inlined section */
  switch(tp2) {
  case 0:
    iVar1 = 0;
    wpos[1] = wpos[1] - 40.0;
    r_00 = 0x80;
    g_00 = '\\';
    fVar8 = ((float)(int)*(short *)((int)addr + 0x320c) * 80.0 * ar) /
            (float)(int)*(short *)((int)addr + 0x320a);
    fVar3 = ((float)(int)*(short *)((int)addr + 0x320c) * DAT_00355470 * sr) /
            (float)(int)*(short *)((int)addr + 0x320a);
    b_00 = '<';
    fVar5 = DAT_00355478;
    fVar7 = DAT_00355474;
    break;
  case 1:
    iVar1 = 0;
    wpos[1] = wpos[1] - 40.0;
    r_00 = '<';
    g_00 = '\\';
    fVar8 = ((float)(int)*(short *)((int)addr + 0x320c) * 80.0 * ar) /
            (float)(int)*(short *)((int)addr + 0x320a);
    fVar3 = ((float)(int)*(short *)((int)addr + 0x320c) * DAT_0035547c * sr) /
            (float)(int)*(short *)((int)addr + 0x320a);
    b_00 = 0x80;
    fVar5 = DAT_00355484;
    fVar7 = DAT_00355480;
    break;
  case 2:
    wpos[1] = wpos[1] - 20.0;
    SubHalo(wpos,0,0,0,'<','\\',0x80,
            (uchar)(int)(((float)(int)*(short *)((int)addr + 0x320c) * 80.0 * ar) /
                        (float)(int)*(short *)((int)addr + 0x320a)),
            ((float)(int)*(short *)((int)addr + 0x320c) * DAT_00355488 * sr) /
            (float)(int)*(short *)((int)addr + 0x320a));
    iVar1 = 0;
    wpos[1] = wpos[1] + 10.0;
    r_00 = 0xff;
    g_00 = 0xff;
    b_00 = 0xff;
    fVar8 = ((float)(int)*(short *)((int)addr + 0x320c) * 200.0 * ar) /
            (float)(int)*(short *)((int)addr + 0x320a);
    fVar3 = ((float)(int)*(short *)((int)addr + 0x320c) * DAT_00355494 * sr) /
            (float)(int)*(short *)((int)addr + 0x320a);
    break;
  case 3:
    iVar1 = 2;
    wpos[1] = wpos[1] - 40.0;
    ysp1 = DAT_003554a0;
    fVar8 = ((float)(int)*(short *)((int)addr + 0x320c) * 128.0 * ar) /
            (float)(int)*(short *)((int)addr + 0x320a);
    ysp2 = DAT_003554a4;
    fVar3 = ((float)(int)*(short *)((int)addr + 0x320c) * DAT_00355498 * sr) /
            (float)(int)*(short *)((int)addr + 0x320a);
    r_00 = 0xff;
    g_00 = 0xa0;
    b_00 = 0x80;
    fVar5 = DAT_003554a8;
    fVar7 = DAT_0035549c;
    break;
  case 4:
    wpos[1] = wpos[1] - 40.0;
    ysp1 = DAT_003554b4;
    ysp2 = DAT_003554b8;
    SubHalo(wpos,2,0,0,0xff,0xa0,0x80,
            (uchar)(int)(((float)(int)*(short *)((int)addr + 0x320c) * 128.0 * ar) /
                        (float)(int)*(short *)((int)addr + 0x320a)),
            ((float)(int)*(short *)((int)addr + 0x320c) * DAT_003554ac * sr) /
            (float)(int)*(short *)((int)addr + 0x320a));
    fVar3 = fVar6;
    fVar8 = fVar4;
  default:
    fVar3 = size * fVar3;
    fVar7 = fVar8;
    goto LAB_0013c25c;
  }
  SubHalo(wpos,iVar1,0,0,r_00,g_00,b_00,(uchar)(int)fVar8,fVar3);
  fVar3 = size * fVar5;
LAB_0013c25c:
  iVar1 = draw_distortion_particles
                    ((float (*) [4] [4])local_10c,(float (*) [4] [4])local_108,
                     (uint)sys_wrk.count & 1,200,addr,0x40,(fVar3 * sr) / camera.fov,-1.0,type);
  *(short *)((int)addr + 0x320c) = (short)iVar1;
                    /* inlined from effect.h */
  auVar9 = _vrnext(in_vuR);
  auVar9 = _vsubbc(auVar9,in_vf0);
  auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
  fVar8 = SUB164(auVar9,0) * DAT_003554c0 - DAT_003554c4;
  if ((stop_effects == 0) && (iVar1 = 0, 0 < st)) {
    do {
      fVar4 = DAT_003554d8;
      fVar5 = DAT_003554d4;
      fVar3 = DAT_003554cc;
      if (tp2 < 0) {
LAB_0013c500:
        iVar2 = *(int *)((int)addr + 0x3204);
      }
      else if (tp2 < 3) {
        iVar2 = 3;
        a_00 = local_118 * ar;
        fVar3 = DAT_003554d0;
        fVar6 = DAT_003554dc;
        do {
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          ppos[1] = 0.0;
          ppos[0] = (SUB164(auVar9,0) - 0.5) * fVar3 * fVar7;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          ppos[2] = (SUB164(auVar9,0) - 0.5) * fVar3 * fVar7;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          pvel[0] = (SUB164(auVar9,0) - 0.5) * fVar5 + fVar8;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          pvel[1] = -(SUB164(auVar9,0) * fVar4) - fVar6;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          pvel[2] = (SUB164(auVar9,0) - 0.5) * fVar5;
          iVar2 = iVar2 + -1;
          add_particle(type,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a_00);
        } while (-1 < iVar2);
        iVar2 = *(int *)((int)addr + 0x3204);
      }
      else {
        if (4 < tp2) goto LAB_0013c500;
        iVar2 = 3;
        fVar4 = local_118 * ar;
        fVar5 = DAT_003554c8;
        do {
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          ppos[1] = 0.0;
          ppos[0] = (SUB164(auVar9,0) - 0.5) * fVar5 * fVar7;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          ppos[2] = (SUB164(auVar9,0) - 0.5) * fVar5 * fVar7;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          pvel[0] = (SUB164(auVar9,0) - 0.5) * fVar3 * fVar7 + fVar8;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          pvel[1] = -(ysp1 * SUB164(auVar9,0)) - ysp2;
                    /* inlined from effect.h */
          auVar9 = _vrnext(in_vuR);
          auVar9 = _vsubbc(auVar9,in_vf0);
          auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
          iVar2 = iVar2 + -1;
          pvel[2] = (SUB164(auVar9,0) - 0.5) * fVar3 * fVar7;
          add_particle(type,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,fVar4);
        } while (-1 < iVar2);
        iVar2 = *(int *)((int)addr + 0x3204);
      }
      iVar1 = iVar1 + 1;
      *(int *)((int)addr + 0x3204) = iVar2 + 1;
      update_particles((PARTICLE *)addr);
    } while (iVar1 < st);
  }
  return addr;
}

void SetTorch(EFFECT_CONT *ec) {
	sceVu0FVECTOR pos;
	int st;
	int life;
	float tr;
	float tg;
	float tb;
	float sr;
	float ar;
	int torch_type;
	float *v1;
	
  byte bVar1;
  undefined8 *puVar2;
  float size;
  void *pvVar3;
  uint tp2;
  int st;
  float b;
  float g;
  float sr;
  float r;
  float ar;
  float pos [4];
  
  st = 1;
  g = 6.0;
  b = 32.0;
  if ((ec->dat).uc8[2] == 3) {
    if ((ec->dat).uc8[3] == 0) {
      tp2 = 3;
    }
    else {
      tp2 = 4;
      (ec->dat).uc8[3] = (ec->dat).uc8[3] - 1;
    }
  }
  else {
    tp2 = (uint)(ec->dat).uc8[2];
  }
  sr = 1.0;
                    /* WARNING: Load size is inaccurate */
  if ((float *)ec->pnt[2] != (float *)0x0) {
    sr = *ec->pnt[2];
  }
  ar = 1.0;
                    /* WARNING: Load size is inaccurate */
  if ((float *)ec->pnt[3] != (float *)0x0) {
    ar = *ec->pnt[3];
  }
  r = g;
  switch(tp2) {
  case 0:
    r = 80.0;
    g = 48.0;
    b = 16.0;
    st = 1;
    break;
  case 1:
    g = 32.0;
    st = 1;
    b = 80.0;
    r = 32.0;
    break;
  case 2:
    g = 6.0;
    st = 1;
    b = 60.0;
    r = 6.0;
    break;
  case 3:
    r = 80.0;
    g = 48.0;
    b = 16.0;
    st = 1;
    sr = DAT_003554e4;
    ar = DAT_003554e0;
    break;
  case 4:
    r = 80.0;
    st = 3;
    g = 48.0;
    b = 16.0;
    sr = 4.5;
    ar = 0.5;
  }
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar2 = (undefined8 *)ec->pnt[0];
  pos[2] = *(float *)(puVar2 + 1);
  pos[3] = *(float *)((int)puVar2 + 0xc);
  pos[0] = (float)*puVar2;
  pos[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  pvVar3 = GetTorchPartAddr(ec->pnt[1],0xc,(int)(sr * 50.0));
  size = DAT_003554e8;
  ec->pnt[1] = pvVar3;
  pvVar3 = ContTorch(pvVar3,0xc,pos,(float *)0x0,st,r,g,b,128.0,size,1.0,tp2,ar,sr);
  bVar1 = (ec->dat).uc8[1];
  ec->pnt[1] = pvVar3;
  if ((bVar1 & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void* ContSmoke(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate) {
	int i;
	float rate;
	float escl;
	float wind;
	sceVu0FMATRIX work;
	sceVu0FMATRIX local_clip;
	sceVu0FMATRIX local_world;
	sceVu0FMATRIX local_screen;
	sceVu0FVECTOR ppos;
	sceVu0FVECTOR pvel;
	sceVu0FVECTOR wpos;
	float fx;
	float fy;
	float fz;
	float rx;
	float rz;
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
	
  bool bVar1;
  int iVar2;
  ulong extraout_v0_udw;
  undefined8 extraout_v0_udw_00;
  undefined8 uVar3;
  int iVar4;
  HEAT_HAZE *pHVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float r_00;
  undefined in_vf0 [16];
  undefined auVar9 [16];
  undefined4 in_vuR;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float ppos [4];
  float pvel [4];
  float wpos [4];
  float rx;
  float rz;
  
  lVar6 = (long)(int)addr;
  memset(ppos,0,0x10);
  ppos[3] = 1.0;
  fVar8 = DAT_003554ec;
  memset(pvel,0,0x10);
  if (init_smoke != 0) {
    pHVar5 = smoke_particle;
    do {
      pHVar5->flag = 0;
      pHVar5->cnt = 0;
      pHVar5 = pHVar5 + 1;
    } while ((int)pHVar5 < 0x3b0520);
    init_smoke = 0;
  }
  if (lVar6 == 0) {
    auVar9 = ZEXT816(extraout_v0_udw) << 0x40;
  }
  else {
    *(ushort *)((int)addr + 0x3208) = *(ushort *)((int)addr + 0x3208) | 0xff;
    auVar9 = CONCAT88(extraout_v0_udw,lVar6) | (undefined  [16])0xff;
    if (ingame_wrk.mode != 10) {
      if (pos2 == (float *)0x0) {
        rz = 0.0;
        rx = 0.0;
      }
      else {
        Get2PosRot2(pos2,pos,&rx,&rz);
      }
      SgSqrtf((*pos - camera.p.x) * (*pos - camera.p.x) +
              (pos[1] - camera.p.y) * (pos[1] - camera.p.y) +
              (pos[2] - camera.p.z) * (pos[2] - camera.p.z));
      sceVu0UnitMatrix((Matrix4x4 *)work);
      work[0][0] = 25.0;
      work[2][2] = 25.0;
      work[1][1] = 25.0;
      sceVu0RotMatrixX(rx,work,work);
      sceVu0RotMatrixZ(-rz,work,work);
      sceVu0TransMatrix((Matrix4x4 *)local_world,(Matrix4x4 *)work,(Vector4 *)pos);
      sceVu0MulMatrix((Matrix4x4 *)local_screen,&SgWSMtx,(Matrix4x4 *)local_world);
      sceVu0MulMatrix((Matrix4x4 *)local_clip,(Matrix4x4 *)SgCMtx,(Matrix4x4 *)local_world);
      iVar2 = draw_distortion_particles
                        ((float (*) [4] [4])(Matrix4x4 *)local_screen,
                         (float (*) [4] [4])(Matrix4x4 *)local_clip,(uint)sys_wrk.count & 1,200,addr
                         ,0x40,(psize * DAT_003554f0) / camera.fov,-1.0,type);
      bVar1 = stop_effects == 0;
      *(short *)((int)addr + 0x320c) = (short)iVar2;
      uVar3 = extraout_v0_udw_00;
      if (bVar1) {
        if (st == 0) {
          fVar7 = SgSinf(((float)*(int *)((int)addr + 0x3204) * wind1 * DAT_003554f4) / 180.0);
          iVar2 = *(int *)((int)addr + 0x3204);
          if (iVar2 == 0) {
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            ppos[1] = 0.0;
            ppos[0] = (SUB164(auVar9,0) - 0.5) * ppos1 * fVar8;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            ppos[2] = (SUB164(auVar9,0) - 0.5) * ppos1 * fVar8;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            pvel[0] = (SUB164(auVar9,0) - 0.5) * pvel3 + fVar7 * wind2;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            pvel[1] = -(pvel1 * SUB164(auVar9,0)) - pvel2;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            uVar3 = SUB168(auVar9 >> 0x40,0);
            fVar8 = (float)(uint)prgb;
            pvel[2] = (SUB164(auVar9,0) - 0.5) * pvel3 + fVar7 * wind2;
            add_particle(type,(HEAT_HAZE *)addr,ppos,pvel,fVar8,fVar8,fVar8,(float)(uint)pa);
            iVar2 = *(int *)((int)addr + 0x3204);
          }
          *(int *)((int)addr + 0x3204) = iVar2 + 1;
          update_particles((PARTICLE *)addr);
          auVar9 = CONCAT88(uVar3,lVar6);
          goto LAB_0013ccdc;
        }
        if (st == 1) {
          iVar2 = 4;
          do {
            iVar2 = iVar2 + -1;
            update_particles((PARTICLE *)addr);
          } while (-1 < iVar2);
          auVar9 = CONCAT88(uVar3,lVar6);
          goto LAB_0013ccdc;
        }
        auVar9 = CONCAT88(extraout_v0_udw_00,lVar6);
        if (st != 0xff) goto LAB_0013ccdc;
        iVar2 = 799;
        do {
          uVar3 = SUB168(auVar9 >> 0x40,0);
          fVar7 = SgSinf(((float)*(int *)((int)addr + 0x3204) * wind1 * DAT_003554f8) / 180.0);
          iVar4 = *(int *)((int)addr + 0x3204);
          if (iVar4 == 0) {
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            ppos[1] = 0.0;
            ppos[0] = (SUB164(auVar9,0) - 0.5) * ppos1 * fVar8;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            ppos[2] = (SUB164(auVar9,0) - 0.5) * ppos1 * fVar8;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            pvel[0] = (SUB164(auVar9,0) - 0.5) * pvel3 + fVar7 * wind2;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            pvel[1] = -(pvel1 * SUB164(auVar9,0)) - pvel2;
                    /* inlined from effect.h */
            auVar9 = _vrnext(in_vuR);
            auVar9 = _vsubbc(auVar9,in_vf0);
            auVar9 = _qmfc2(SUB164(auVar9,0));
                    /* end of inlined section */
            uVar3 = SUB168(auVar9 >> 0x40,0);
            r_00 = (float)(uint)prgb;
            pvel[2] = (SUB164(auVar9,0) - 0.5) * pvel3 + fVar7 * wind2;
            add_particle(type,(HEAT_HAZE *)addr,ppos,pvel,r_00,r_00,r_00,(float)(uint)pa);
            iVar4 = *(int *)((int)addr + 0x3204);
          }
          auVar9 = CONCAT88(uVar3,(long)(iVar4 + 1));
          *(int *)((int)addr + 0x3204) = iVar4 + 1;
          iVar2 = iVar2 + -1;
          update_particles((PARTICLE *)addr);
          uVar3 = SUB168(auVar9 >> 0x40,0);
        } while (-1 < iVar2);
      }
      auVar9 = CONCAT88(uVar3,lVar6);
    }
  }
LAB_0013ccdc:
  return SUB164(auVar9,0);
}

void SetSmoke(EFFECT_CONT *ec) {
	sceVu0FVECTOR pos;
	int st;
	float r;
	float g;
	float b;
	float a;
	float s;
	float *v1;
	
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int st;
  float g;
  float a;
  float pos [4];
  
  g = 48.0;
  a = 128.0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar2 = (undefined8 *)ec->pnt[0];
  pos[2] = *(float *)(puVar2 + 1);
  pos[3] = *(float *)((int)puVar2 + 0xc);
  pos[0] = (float)*puVar2;
  pos[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  st = 0xff;
  if (ec->pnt[1] != (void *)0x0) {
    st = 0;
  }
  pvVar3 = GetSmokePartAddr(ec->pnt[1],0xd,0x640);
  ec->pnt[1] = pvVar3;
  pvVar3 = ContSmoke(pvVar3,0xd,pos,(float *)0x0,st,80.0,g,16.0,a,1600.0,1.0);
  bVar1 = (ec->dat).uc8[1];
  ec->pnt[1] = pvVar3;
  if ((bVar1 & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void SetSunshine(EFFECT_CONT *ec) {
	int nsun;
	int i;
	int j;
	int k;
	int n;
	float rot_x;
	float rot_y;
	float power;
	float ww;
	float hh;
	float fx;
	float fy;
	float fz;
	float l;
	float add;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR base_pos;
	sceVu0FVECTOR mpos[6];
	EFF_SUNSHINE eff_ray[6];
	Q_WORDDATA pbh[1024];
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  U32DATA UVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  EFF_SUNSHINE *pEVar10;
  uchar *puVar11;
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  undefined8 uVar14;
  ulong uVar15;
  float (*pafVar16) [4];
  Q_WORDDATA *pQVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  Q_WORDDATA *pQVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float wlm [4] [4];
  float slm [4] [4];
  float wpos [4];
  float base_pos [4];
  float mpos [6] [4];
  EFF_SUNSHINE eff_ray [6];
  Q_WORDDATA pbh [1024];
  
  pafVar16 = mpos;
  puVar4 = (undefined8 *)ec->pnt[0];
  bVar1 = (ec->dat).uc8[2];
  puVar9 = &DAT_0034b900;
  puVar5 = (undefined8 *)ec->pnt[2];
  uVar8 = ec->max;
  mpos[2][0] = (ec->dat).fl32[2];
  mpos[1][1] = (ec->dat).fl32[3];
  bVar2 = (ec->dat).uc8[3];
  bVar3 = (ec->dat).uc8[4];
  uVar7 = ec->cnt;
  base_pos._0_8_ = DAT_0034b8f0;
  base_pos._8_8_ = DAT_0034b8f8;
  do {
    uVar14 = puVar9[1];
    uVar22 = puVar9[2];
    uVar23 = puVar9[3];
    *(undefined8 *)*pafVar16 = *puVar9;
    *(undefined8 *)(*pafVar16 + 2) = uVar14;
    *(undefined8 *)pafVar16[1] = uVar22;
    *(undefined8 *)(pafVar16[1] + 2) = uVar23;
    fVar31 = eff_ray[0].fpos[0][2];
    fVar30 = eff_ray[0].fpos[0][1];
    fVar32 = eff_ray[0].fpos[0][0];
    puVar9 = puVar9 + 4;
    pafVar16 = pafVar16[2];
  } while (puVar9 != &DAT_0034b960);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  mpos[0][0] = (float)*puVar4;
  mpos[0][1] = (float)((ulong)*puVar4 >> 0x20);
  mpos[0][2] = *(float *)(puVar4 + 1);
  mpos[0][3] = *(float *)((int)puVar4 + 0xc);
  uVar14 = *puVar5;
  uVar18 = (undefined4)((ulong)uVar14 >> 0x20);
                    /* end of inlined section */
  if ((int)uVar8 < 0) {
    fVar34 = (float)(uVar8 & 1 | uVar8 >> 1);
    fVar34 = fVar34 + fVar34;
  }
  else {
    fVar34 = (float)uVar8;
  }
  mpos[1][0] = -mpos[2][0];
  iVar29 = 0;
  fVar33 = (float)uVar7 / 2000.0;
  mpos[3][0] = mpos[2][0];
  mpos[5][1] = mpos[1][1];
  mpos[2][1] = mpos[1][1];
  mpos[3][1] = -mpos[1][1];
  pafVar16 = mpos;
  mpos[4][1] = -mpos[1][1];
  pEVar10 = eff_ray;
  mpos[5][0] = mpos[1][0];
  mpos[4][0] = mpos[1][0];
  do {
    uVar22 = *(undefined8 *)*pafVar16;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar19 = (*pafVar16)[2];
    fVar20 = (*pafVar16)[3];
    pEVar10->fpos[0] = (float)uVar22;
    pEVar10->fpos[1] = (float)((ulong)uVar22 >> 0x20);
    pEVar10->fpos[2] = fVar19;
    pEVar10->fpos[3] = fVar20;
                    /* end of inlined section */
    iVar29 = iVar29 + 1;
    pafVar16 = pafVar16[1];
    pEVar10 = pEVar10 + 1;
  } while (iVar29 < 6);
  iVar29 = 1;
  do {
    iVar24 = 1;
    pEVar10 = eff_ray + iVar29;
    fVar32 = pEVar10->fpos[0] - fVar32;
    fVar30 = eff_ray[iVar29].fpos[1] - fVar30;
    fVar31 = eff_ray[iVar29].fpos[2] - fVar31;
    fVar30 = SgSqrtf(fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31);
    eff_ray[iVar29].ts[0].fl32 = (float)(iVar29 + -1);
    eff_ray[iVar29].tt[0].fl32 = 1.0 - fVar33;
    fVar32 = pEVar10->fpos[0];
    eff_ray[iVar29].alp[0] = (uchar)((int)(0x200 - ((int)((fVar30 * 512.0) / fVar34) & 0xffU)) / 1);
    eff_ray[iVar29].fpos[7][0] =
         eff_ray[0].fpos[0][0] + ((fVar32 - eff_ray[0].fpos[0][0]) * fVar34) / fVar30;
    eff_ray[iVar29].fpos[7][1] =
         eff_ray[0].fpos[0][1] +
         ((eff_ray[iVar29].fpos[1] - eff_ray[0].fpos[0][1]) * fVar34) / fVar30;
    fVar32 = eff_ray[iVar29].fpos[2];
    eff_ray[iVar29].fpos[7][3] = 1.0;
    eff_ray[iVar29].fpos[7][2] =
         eff_ray[0].fpos[0][2] + ((fVar32 - eff_ray[0].fpos[0][2]) * fVar34) / fVar30;
    eff_ray[iVar29].ts[7].fl32 = (float)(iVar29 + -1);
    eff_ray[iVar29].tt[7].fl32 = 2.0 - fVar33;
    eff_ray[iVar29].alp[7] = '\0';
    iVar27 = iVar29 + 1;
    fVar32 = (float)DAT_003565c4;
    do {
      fVar19 = (float)iVar24;
      fVar30 = eff_ray[iVar29].fpos[0];
      puVar11 = eff_ray[iVar29].alp + iVar24;
      eff_ray[iVar29].fpos[iVar24][0] =
           ((eff_ray[iVar29].fpos[7][0] - fVar30) * fVar19) / fVar32 + fVar30;
      fVar30 = eff_ray[iVar29].fpos[1];
      eff_ray[iVar29].fpos[iVar24][1] =
           ((eff_ray[iVar29].fpos[7][1] - fVar30) * fVar19) / fVar32 + fVar30;
      fVar31 = eff_ray[iVar29].fpos[2];
      fVar30 = eff_ray[iVar29].fpos[7][2];
      eff_ray[iVar29].fpos[iVar24][3] = 1.0;
      eff_ray[iVar29].fpos[iVar24][2] = ((fVar30 - fVar31) * fVar19) / fVar32 + fVar31;
      eff_ray[iVar29].ts[iVar24].fl32 =
           ((eff_ray[iVar29].ts[7].fl32 - eff_ray[iVar29].ts[0].fl32) * fVar19) / fVar32 +
           eff_ray[iVar29].ts[0].fl32;
      eff_ray[iVar29].tt[iVar24].fl32 =
           ((eff_ray[iVar29].tt[7].fl32 - eff_ray[iVar29].tt[0].fl32) * fVar19) / fVar32 +
           eff_ray[iVar29].tt[0].fl32;
      iVar25 = ((uint)eff_ray[iVar29].alp[7] - (uint)eff_ray[iVar29].alp[0]) * iVar24;
      iVar24 = iVar24 + 1;
      *puVar11 = eff_ray[iVar29].alp[0] + (char)(iVar25 / 7);
    } while (iVar24 < 7);
    fVar32 = eff_ray[0].fpos[0][0];
    fVar30 = eff_ray[0].fpos[0][1];
    fVar31 = eff_ray[0].fpos[0][2];
    iVar29 = iVar27;
  } while (iVar27 < 6);
  uVar8 = ec->cnt;
  iVar29 = 0;
  uVar7 = uVar8 + 1;
  if (1999 < (int)(uVar8 + 2)) {
    uVar7 = 0;
  }
  ec->cnt = uVar7;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0RotMatrixX((int)uVar14,wlm,wlm);
  sceVu0RotMatrixY(uVar18,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)base_pos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  sceVu0RotTransPers(eff_ray[0].ipos,(Matrix4x4 *)slm,eff_ray,0);
  eff_ray[0].clip[0] =
       eff_ray[0].ipos[0][2] - 0xffU < 0xfffff01 &&
       (eff_ray[0].ipos[0][1] - 0x4000U < 0x8001 && eff_ray[0].ipos[0][0] - 0x4000U < 0x8001);
  do {
    eff_ray[0].clip[iVar29] = '\0';
    iVar29 = iVar29 + 1;
  } while (iVar29 < 8);
  iVar29 = 1;
  do {
    iVar27 = iVar29 + 1;
    iVar24 = 0;
    do {
      sceVu0RotTransPers(eff_ray[iVar29].ipos[iVar24],(Matrix4x4 *)slm,eff_ray[iVar29].fpos[iVar24],
                         1);
      fVar32 = 1.0 / (float)eff_ray[iVar29].ipos[iVar24][3];
      iVar25 = iVar24 + 1;
      eff_ray[iVar29].tq[iVar24].fl32 = fVar32;
      eff_ray[iVar29].ts[iVar24].fl32 = eff_ray[iVar29].ts[iVar24].fl32 * fVar32;
      eff_ray[iVar29].tt[iVar24].fl32 =
           eff_ray[iVar29].tt[iVar24].fl32 * eff_ray[iVar29].tq[iVar24].fl32;
      eff_ray[iVar29].clip[iVar24] =
           eff_ray[iVar29].ipos[iVar24][2] - 0xffU < 0xfffff01 &&
           (eff_ray[iVar29].ipos[iVar24][1] - 0x300U < 0xfa01 &&
           eff_ray[iVar29].ipos[iVar24][0] - 0x300U < 0xfa01);
      iVar24 = iVar25;
    } while (iVar25 < 8);
    iVar29 = iVar27;
  } while (iVar27 < 6);
  Reserve2DPacket(0x1000);
  pQVar12 = pbuf;
  iVar24 = ndpkt;
  iVar29 = monochrome_mode;
  pQVar21 = pbuf + ndpkt;
  pQVar21->ui32[0] = 0;
  pQVar21->ui32[1] = 0;
  pQVar21->ui32[2] = 0;
  pQVar21->ui32[3] = 0;
  pQVar12[ndpkt + 1].ul64[1] = 0xe;
  pQVar12[ndpkt + 1].ul64[0] = 0x1000000000008007;
  pQVar12[ndpkt + 2].ul64[1] = 0x3f;
  pQVar12[ndpkt + 2].ul64[0] = 0;
  uVar15 = *(ulong *)(&effdat + (iVar29 + 0x1e) * 0x20);
  pQVar12[ndpkt + 3].ul64[1] = 6;
  pQVar12[ndpkt + 3].ul64[0] = uVar15;
  pQVar12[ndpkt + 4].ul64[0] = 0x161;
  pQVar12[ndpkt + 4].ul64[1] = 0x14;
  pQVar12[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar12[ndpkt + 5].ul64[1] = 0x4e;
  pQVar12[ndpkt + 6].ul64[0] = 0x48;
  pQVar12[ndpkt + 6].ul64[1] = 0x42;
  pQVar12[ndpkt + 7].ul64[1] = 0x47;
  pQVar12[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar12[ndpkt + 8].ul64[0] = 0;
  pQVar12[ndpkt + 8].ul64[1] = 8;
  iVar29 = ndpkt + 9;
  if (eff_ray[0].clip[0] != '\0') {
    pQVar12[ndpkt + 9].ul64[0] = 0x2020400000008001;
    pQVar12[ndpkt + 9].ul64[1] = 0x41;
    pQVar21 = pQVar12 + ndpkt + 10;
    pQVar21->ui32[3] = 0x80;
    pQVar21->ui32[2] = 0xff;
    pQVar21->ui32[0] = 0xff;
    pQVar12 = pQVar12 + ndpkt + 0xb;
    pQVar21->ui32[1] = 0xff;
    pQVar12->iv[0] = eff_ray[0].ipos[0][0];
    pQVar12->iv[1] = eff_ray[0].ipos[0][1];
    pQVar12->ui32[3] = 0;
    pQVar12->iv[2] = eff_ray[0].ipos[0][2];
    iVar29 = ndpkt + 0xc;
  }
  ndpkt = iVar29;
  pQVar12 = pbuf;
  iVar27 = ndpkt + 1;
  pQVar21 = pbuf + ndpkt;
  pQVar21->ul64[1] = 0x412412;
  pQVar21->ul64[0] = 0x602e400000008020;
  pQVar21 = pQVar12;
  iVar29 = 1;
  do {
    iVar28 = iVar29 + 1;
    iVar25 = 0;
    do {
      if (iVar25 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)((int)eff_ray[iVar29].ipos[7] + iVar25 + 0xf) +
                (uint)*(byte *)((int)eff_ray[iVar28].ipos[7] + iVar25 + 0xf) +
                (uint)eff_ray[iVar29].clip[iVar25];
      }
      pQVar13 = pQVar21 + iVar27;
      pQVar13->ui32[0] = (uint)eff_ray[iVar29].ts[iVar25];
      uVar7 = 0x8000;
      pQVar17 = pQVar21 + iVar27 + 1;
      if (2 < uVar8) {
        uVar7 = 0;
      }
      *(U32DATA *)(pQVar13->ui32 + 1) = eff_ray[iVar29].tt[iVar25];
      UVar6 = eff_ray[iVar29].tq[iVar25];
      pQVar13->ui32[3] = 0;
      *(U32DATA *)(pQVar13->ui32 + 2) = UVar6;
      pQVar17->ui32[0] = (uint)bVar1;
      pQVar17->ui32[1] = (uint)bVar2;
      pQVar21 = pQVar21 + iVar27 + 2;
      pQVar17->ui32[2] = (uint)bVar3;
      pQVar17->ui32[3] = (uint)eff_ray[iVar29].alp[iVar25];
      ndpkt = iVar27 + 3;
      pQVar21->ui32[0] = eff_ray[iVar29].ipos[iVar25][0];
      pQVar21->ui32[1] = eff_ray[iVar29].ipos[iVar25][1];
      pQVar21->ui32[2] = eff_ray[iVar29].ipos[iVar25][2] << 4;
      pQVar21->ui32[3] = uVar7;
      if (iVar25 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)((int)eff_ray[iVar28].ipos[7] + iVar25 + 0xf) +
                (uint)eff_ray[iVar29].clip[iVar25] + (uint)eff_ray[iVar28].clip[iVar25];
      }
      pQVar21 = pQVar12 + ndpkt;
      pQVar21->ui32[0] = (uint)eff_ray[iVar28].ts[iVar25];
      pQVar13 = pQVar12 + ndpkt + 1;
      uVar7 = 0x8000;
      if (2 < uVar8) {
        uVar7 = 0;
      }
      iVar26 = iVar25 + 1;
      *(U32DATA *)(pQVar21->ui32 + 1) = eff_ray[iVar28].tt[iVar25];
      UVar6 = eff_ray[iVar28].tq[iVar25];
      pQVar21->ui32[3] = 0;
      *(U32DATA *)(pQVar21->ui32 + 2) = UVar6;
      pQVar13->ui32[0] = (uint)bVar1;
      pQVar21 = pQVar12 + ndpkt + 2;
      pQVar13->ui32[1] = (uint)bVar2;
      pQVar13->ui32[2] = (uint)bVar3;
      pQVar13->ui32[3] = (uint)eff_ray[iVar28].alp[iVar25];
      iVar27 = ndpkt + 3;
      pQVar21->ui32[0] = eff_ray[iVar28].ipos[iVar25][0];
      pQVar21->ui32[1] = eff_ray[iVar28].ipos[iVar25][1];
      pQVar21->ui32[2] = eff_ray[iVar28].ipos[iVar25][2] << 4;
      ndpkt = iVar27;
      pQVar21->ui32[3] = uVar7;
      pQVar21 = pbuf;
      iVar25 = iVar26;
    } while (iVar26 < 8);
    iVar29 = iVar28;
  } while (iVar28 < 5);
  pbuf[iVar24].ui32[0] = (iVar27 - (iVar24 + -0x70000000)) - 1;
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects(ec);
  }
  return;
}

void SetDust(EFFECT_CONT *ec) {
	static float malp = 80.f;
	static float mala = 2.29999995f;
	static float mphs = 0.300000012f;
	static float mang = 20.f;
	static float mscl = 0.100000001f;
	static u_char mr = 64;
	static u_char mg = 54;
	static u_char mb = 48;
	static float mv1x = 100.f;
	static float mv1y = 45.f;
	static float grv1x = 8.f;
	static float grv1y = 4.f;
	static float mv2x = 180.f;
	static float mv2y = 20.f;
	static float grv2x = 10.f;
	static float grv2y = 5.f;
	static EFF_DUST eff_dust[64];
	float f;
	float ss;
	float cc;
	float fw1;
	float fw2;
	float rot_x;
	float rot_y;
	int c;
	int i;
	int j;
	int k;
	int n;
	int w;
	int th;
	int tw;
	int so[64];
	u_long tx0;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	float r;
	float r;
	float r;
	float r;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  Q_WORDDATA *pQVar10;
  Matrix4x4 *m0;
  undefined4 *puVar11;
  int iVar12;
  Q_WORDDATA *pQVar13;
  uint uVar14;
  Q_WORDDATA *pQVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  float *pfVar23;
  int iVar24;
  float (*pafVar25) [4];
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined in_vf0 [16];
  undefined auVar35 [16];
  undefined4 in_vuR;
  int so [64];
  float wlm [4] [4];
  float slm [4] [4];
  float bpos [4];
  float wpos [4];
  float ppos [4] [4];
  float rot_x;
  float rot_y;
  EFFECT_CONT *local_148;
  undefined8 *local_144;
  Vector4 *local_140;
  int local_13c;
  Matrix4x4 *local_138;
  Matrix4x4 *local_134;
  Vector4 *local_130;
  float (*local_12c) [4];
  int local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_100;
  undefined4 uStack_fc;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
  
  fVar30 = mv2y_275;
  fVar29 = mv2x_274;
  fVar33 = mv1y_271;
  fVar32 = mv1x_270;
  fVar34 = mang_265;
  uVar9 = malp_262;
  ppos[0]._0_8_ = DAT_0034b960;
  ppos[0]._8_8_ = DAT_0034b968;
  ppos[1]._0_8_ = DAT_0034b970;
  ppos[1]._8_8_ = DAT_0034b978;
  ppos[2]._0_8_ = DAT_0034b980;
  ppos[2]._8_8_ = DAT_0034b988;
  ppos[3]._0_8_ = DAT_0034b990;
  ppos[3]._8_8_ = DAT_0034b998;
  if ((ec->dat).uc8[2] != 0) {
    iVar28 = 0;
    fVar31 = 0.0;
    puVar11 = &eff_dust_278;
    do {
      *puVar11 = uVar9;
      puVar11[1] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
                    /* inlined from effect.h */
      auVar35 = _vrnext(in_vuR);
      auVar35 = _vsubbc(auVar35,in_vf0);
      auVar35 = _qmfc2(SUB164(auVar35,0));
                    /* end of inlined section */
      puVar11[0x18] = SUB164(auVar35,0) * 60.0 + fVar32;
                    /* inlined from effect.h */
      auVar35 = _vrnext(in_vuR);
      auVar35 = _vsubbc(auVar35,in_vf0);
      auVar35 = _qmfc2(SUB164(auVar35,0));
                    /* end of inlined section */
      iVar28 = iVar28 + 1;
      fVar31 = fVar31 + fVar34;
      puVar11[0x19] = SUB164(auVar35,0) * 10.0 + fVar33;
      puVar11 = puVar11 + 0x20;
    } while (fVar31 < 360.0);
    fVar32 = 0.0;
    puVar11 = &eff_dust_278 + iVar28 * 0x20;
    do {
      *puVar11 = uVar9;
      puVar11[1] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
                    /* inlined from effect.h */
      auVar35 = _vrnext(in_vuR);
      auVar35 = _vsubbc(auVar35,in_vf0);
      auVar35 = _qmfc2(SUB164(auVar35,0));
                    /* end of inlined section */
      puVar11[0x18] = SUB164(auVar35,0) * 40.0 + fVar29;
                    /* inlined from effect.h */
      auVar35 = _vrnext(in_vuR);
      auVar35 = _vsubbc(auVar35,in_vf0);
      auVar35 = _qmfc2(SUB164(auVar35,0));
                    /* end of inlined section */
      fVar32 = fVar32 + fVar34;
      puVar11[0x19] = SUB164(auVar35,0) * 10.0 + fVar30;
      puVar11 = puVar11 + 0x20;
    } while (fVar32 < 360.0);
    (ec->dat).uc8[2] = 0;
  }
  fVar34 = DAT_003554fc;
  local_144 = (undefined8 *)bpos;
  local_148 = ec;
  if (eff_dust_278 <= 0.0) {
    ResetEffects(ec);
  }
  else {
                    /* inlined from ../../graphics/graph3d/libsg.h */
    puVar4 = (undefined8 *)ec->pnt[0];
    bpos[2] = *(float *)(puVar4 + 1);
    bpos[3] = *(float *)((int)puVar4 + 0xc);
    bpos[0] = (float)*puVar4;
    bpos[1] = (float)((ulong)*puVar4 >> 0x20);
                    /* end of inlined section */
    Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
    local_130 = (Vector4 *)wpos;
    local_134 = (Matrix4x4 *)slm;
    local_12c = ppos;
    fVar33 = 0.0;
    iVar28 = 0;
    fVar32 = DAT_00355500;
    local_138 = (Matrix4x4 *)wlm;
    do {
      pafVar25 = local_12c;
      fVar29 = (float)(&DAT_00382844)[iVar28 * 0x20];
      fVar30 = grv1x_272 * fVar29;
      fVar31 = -(float)(&DAT_003828a4)[iVar28 * 0x20] * fVar29 + grv1y_273 * fVar29 * fVar29;
      (&DAT_00382894)[iVar28 * 0x20] = fVar31;
      (&DAT_00382890)[iVar28 * 0x20] =
           (float)(&DAT_003828a0)[iVar28 * 0x20] * fVar29 - fVar30 * fVar29;
      fVar29 = mphs_264;
      fVar30 = mala_263;
      if ((float)(&DAT_003828b4)[iVar28 * 0x20] < fVar31) {
        fVar29 = mphs_264 * fVar34;
        fVar30 = mala_263 * fVar34;
      }
      fVar30 = (&eff_dust_278)[iVar28 * 0x20] - fVar30;
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      (&eff_dust_278)[iVar28 * 0x20] = fVar30;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      (&DAT_00382844)[iVar28 * 0x20] = (float)(&DAT_00382844)[iVar28 * 0x20] + fVar29;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      (&DAT_003828b0)[iVar28 * 0x20] = (int)*(undefined8 *)(&DAT_00382890 + iVar28 * 0x20);
      (&DAT_003828b4)[iVar28 * 0x20] =
           (int)((ulong)*(undefined8 *)(&DAT_00382890 + iVar28 * 0x20) >> 0x20);
      (&DAT_003828b8)[iVar28 * 0x20] = (&DAT_00382898)[iVar28 * 0x20];
      (&DAT_003828bc)[iVar28 * 0x20] = (&DAT_0038289c)[iVar28 * 0x20];
      wpos[2] = *(float *)(local_144 + 1);
      wpos[3] = *(float *)((int)local_144 + 0xc);
      wpos[0] = (float)*local_144;
      wpos[1] = (float)((ulong)*local_144 >> 0x20);
                    /* end of inlined section */
      local_128 = iVar28 + 1;
      fVar30 = (fVar33 * DAT_00355504) / 180.0;
      bVar7 = false;
      iVar24 = 3;
      fVar29 = SgSinf(fVar30);
      fVar30 = SgCosf(fVar30);
      wpos[1] = wpos[1] + (float)(&DAT_00382894)[iVar28 * 0x20] * fVar32;
      wpos[2] = wpos[2] + ((float)(&DAT_00382890)[iVar28 * 0x20] * fVar29 +
                          (float)(&DAT_00382898)[iVar28 * 0x20] * fVar30) * fVar32;
      wpos[0] = wpos[0] + ((float)(&DAT_00382890)[iVar28 * 0x20] * fVar30 -
                          (float)(&DAT_00382898)[iVar28 * 0x20] * fVar29) * fVar32;
      sceVu0UnitMatrix((Matrix4x4 *)wlm);
      wlm[0][0] = (float)(&DAT_00382890)[iVar28 * 0x20] * mscl_266 * fVar32;
      wlm[1][1] = wlm[0][0];
      wlm[2][2] = wlm[0][0];
      sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
      sceVu0MulMatrix(local_134,&SgWSMtx,(Matrix4x4 *)wlm);
      piVar22 = &DAT_00382850 + iVar28 * 0x20;
      do {
        sceVu0RotTransPers(piVar22,local_134,pafVar25,0);
        m0 = local_138;
        fVar29 = DAT_00355508;
        pafVar25 = pafVar25[1];
        iVar24 = iVar24 + -1;
        if (0x8000 < *piVar22 - 0x4000U) {
          bVar7 = true;
        }
        if (0x8000 < piVar22[1] - 0x4000U) {
          bVar7 = true;
        }
        if (0xffff00 < piVar22[2] - 0xffU) {
          bVar7 = true;
        }
        piVar22 = piVar22 + 4;
      } while (-1 < iVar24);
      fVar33 = fVar33 + mang_265;
      if (!bVar7) {
        iVar28 = local_128;
      }
    } while (fVar33 < 360.0);
    fVar34 = mang_265 * 0.5;
    if (fVar34 < fVar34 + 360.0) {
      local_140 = local_130;
      fVar32 = DAT_0035550c;
      do {
        pafVar25 = local_12c;
        fVar33 = (float)(&DAT_00382844)[iVar28 * 0x20];
        fVar30 = grv2x_276 * fVar33;
        fVar31 = -(float)(&DAT_003828a4)[iVar28 * 0x20] * fVar33 + grv2y_277 * fVar33 * fVar33;
        (&DAT_00382894)[iVar28 * 0x20] = fVar31;
        (&DAT_00382890)[iVar28 * 0x20] =
             (float)(&DAT_003828a0)[iVar28 * 0x20] * fVar33 - fVar30 * fVar33;
        fVar33 = mphs_264;
        fVar30 = mala_263;
        if ((float)(&DAT_003828b4)[iVar28 * 0x20] < fVar31) {
          fVar33 = mphs_264 * fVar29;
          fVar30 = mala_263 * fVar29;
        }
        fVar30 = (&eff_dust_278)[iVar28 * 0x20] - fVar30;
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
        (&eff_dust_278)[iVar28 * 0x20] = fVar30;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
        (&DAT_00382844)[iVar28 * 0x20] = (float)(&DAT_00382844)[iVar28 * 0x20] + fVar33;
                    /* inlined from ../../graphics/graph3d/libsg.h */
        (&DAT_003828b0)[iVar28 * 0x20] = (int)*(undefined8 *)(&DAT_00382890 + iVar28 * 0x20);
        (&DAT_003828b4)[iVar28 * 0x20] =
             (int)((ulong)*(undefined8 *)(&DAT_00382890 + iVar28 * 0x20) >> 0x20);
        (&DAT_003828b8)[iVar28 * 0x20] = (&DAT_00382898)[iVar28 * 0x20];
        (&DAT_003828bc)[iVar28 * 0x20] = (&DAT_0038289c)[iVar28 * 0x20];
        uVar8 = *local_144;
        fVar33 = *(float *)(local_144 + 1);
        fVar30 = *(float *)((int)local_144 + 0xc);
        local_140->x = (float)uVar8;
        local_140->y = (float)((ulong)uVar8 >> 0x20);
        local_140->z = fVar33;
        local_140->w = fVar30;
                    /* end of inlined section */
        local_128 = iVar28 + 1;
        fVar30 = (fVar34 * DAT_00355510) / 180.0;
        bVar7 = false;
        iVar24 = 3;
        fVar33 = SgSinf(fVar30);
        fVar30 = SgCosf(fVar30);
        wpos[1] = wpos[1] + (float)(&DAT_00382894)[iVar28 * 0x20] * fVar32;
        wpos[2] = wpos[2] + ((float)(&DAT_00382890)[iVar28 * 0x20] * fVar33 +
                            (float)(&DAT_00382898)[iVar28 * 0x20] * fVar30) * fVar32;
        wpos[0] = wpos[0] + ((float)(&DAT_00382890)[iVar28 * 0x20] * fVar30 -
                            (float)(&DAT_00382898)[iVar28 * 0x20] * fVar33) * fVar32;
        sceVu0UnitMatrix(m0);
        wlm[0][0] = (((float)(&DAT_00382890)[iVar28 * 0x20] * mscl_266) / 1.5) * fVar32;
        wlm[1][1] = wlm[0][0];
        wlm[2][2] = wlm[0][0];
        sceVu0RotMatrixX(rot_x,m0,m0);
        sceVu0RotMatrixY(rot_y,m0,m0);
        sceVu0TransMatrix(m0,m0,local_140);
        sceVu0MulMatrix(local_134,&SgWSMtx,m0);
        piVar22 = &DAT_00382850 + iVar28 * 0x20;
        do {
          sceVu0RotTransPers(piVar22,local_134,pafVar25,0);
          pafVar25 = pafVar25[1];
          iVar24 = iVar24 + -1;
          if (0x8000 < *piVar22 - 0x4000U) {
            bVar7 = true;
          }
          if (0x8000 < piVar22[1] - 0x4000U) {
            bVar7 = true;
          }
          if (0xffff00 < piVar22[2] - 0xffU) {
            bVar7 = true;
          }
          piVar22 = piVar22 + 4;
        } while (-1 < iVar24);
        fVar34 = fVar34 + mang_265;
        if (!bVar7) {
          iVar28 = local_128;
        }
      } while (fVar34 < mang_265 * 0.5 + 360.0);
    }
    if (iVar28 != 0) {
      iVar24 = 0;
      if (0 < iVar28) {
        do {
          so[iVar24] = iVar24;
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar28);
      }
      if (0 < iVar28 + -1) {
        iVar24 = 1;
        iVar27 = 0;
        do {
          iVar26 = iVar24;
          if (iVar26 < iVar28) {
            iVar12 = iVar26 << 2;
            iVar24 = iVar26;
            do {
              iVar5 = so[iVar27];
              iVar6 = *(int *)((int)so + iVar12);
              iVar24 = iVar24 + 1;
              if ((int)(&DAT_00382858)[iVar6 * 0x20] < (int)(&DAT_00382858)[iVar5 * 0x20]) {
                *(int *)((int)so + iVar12) = iVar5;
                so[iVar27] = iVar6;
              }
              iVar12 = iVar24 * 4;
            } while (iVar24 < iVar28);
          }
          iVar24 = iVar26 + 1;
          iVar27 = iVar26;
        } while (iVar26 < iVar28 + -1);
      }
      iVar24 = (monochrome_mode + 6) * 0x20;
      uVar2 = *(ushort *)(&DAT_0026be4e + iVar24);
      uVar3 = *(ushort *)(&DAT_0026be4c + iVar24);
      uVar21 = *(ulong *)(&effdat + iVar24);
      Reserve2DPacket(0x1000);
      pQVar10 = pbuf;
      iVar24 = ndpkt;
      local_13c = ndpkt * 0x10;
      pQVar15 = pbuf + ndpkt;
      pQVar13 = pbuf + ndpkt + 1;
      pQVar15->ui32[0] = 0;
      pQVar15->ui32[1] = 0;
      pQVar15->ui32[2] = 0;
      pQVar15->ui32[3] = 0;
      pQVar13->ul64[1] = 0xe;
      pQVar13->ul64[0] = 0x1000000000008006;
      pQVar10[ndpkt + 2].ul64[0] = 0;
      pQVar10[ndpkt + 2].ul64[1] = 0x3f;
      pQVar10[ndpkt + 3].ul64[0] = uVar21;
      pQVar10[ndpkt + 3].ul64[1] = 6;
      pQVar10[ndpkt + 4].ul64[1] = 0x14;
      pQVar10[ndpkt + 4].ul64[0] = 0x161;
      pQVar10[ndpkt + 5].ul64[1] = 0x4e;
      pQVar10[ndpkt + 5].ul64[0] = 0x10100008c;
      pQVar10[ndpkt + 6].ul64[1] = 0x42;
      pQVar10[ndpkt + 6].ul64[0] = 0x44;
      pQVar10[ndpkt + 7].ul64[0] = 0x5000d;
      pQVar10[ndpkt + 7].ul64[1] = 0x47;
      ndpkt = ndpkt + 8;
      iVar27 = 0;
      if (0 < iVar28) {
        lVar19 = (long)(int)((uint)uVar3 * 0x10 + -8);
        lVar18 = (long)(int)((uint)uVar2 * 0x10 + -8);
        do {
          pQVar10 = pbuf;
          iVar26 = so[iVar27];
          pQVar13 = pbuf + ndpkt;
          pQVar13->ul64[1] = 0x431;
          pQVar13->ul64[0] = 0x30ae400000008004;
          ndpkt = ndpkt + 1;
          iVar27 = iVar27 + 1;
          uVar21 = 0;
          lVar20 = 8;
          local_f0 = 0x8000;
          uStack_ec = 0;
          lVar17 = 1;
          pfVar23 = &eff_dust_278 + iVar26 * 0x20;
          do {
            iVar12 = ndpkt;
            pQVar13 = pQVar10 + ndpkt;
            *(uint *)pQVar13 = (uint)mr_267;
            pQVar13->ui32[1] = (uint)mg_268;
            *(uint *)(pQVar13->ul64 + 1) = (uint)mb_269;
            local_120 = (undefined4)lVar17;
            uStack_11c = (undefined4)((ulong)lVar17 >> 0x20);
            local_110 = (undefined4)lVar18;
            uStack_10c = (undefined4)((ulong)lVar18 >> 0x20);
            local_100 = (undefined4)lVar19;
            uStack_fc = (undefined4)((ulong)lVar19 >> 0x20);
            local_e0 = (undefined4)lVar20;
            uStack_dc = (undefined4)((ulong)lVar20 >> 0x20);
            uVar14 = fptoui((&eff_dust_278)[iVar26 * 0x20]);
            pQVar13->ui32[3] = uVar14;
            lVar20 = CONCAT44(uStack_dc,local_e0);
            lVar19 = CONCAT44(uStack_fc,local_100);
            lVar18 = CONCAT44(uStack_10c,local_110);
            pQVar13 = pQVar10 + iVar12 + 1;
            lVar17 = 8;
            if ((uVar21 & 1) != 0) {
              lVar17 = lVar19;
            }
            lVar16 = lVar20;
            if ((int)uVar21 / 2 != 0) {
              lVar16 = lVar18;
            }
            pQVar13->ui32[0] = (uint)lVar17;
            pQVar13->ui32[1] = (uint)lVar16;
            pQVar13->ui32[3] = 0;
            pQVar15 = pQVar10 + iVar12 + 2;
            pQVar13->ui32[2] = 0;
            ndpkt = iVar12 + 3;
            lVar17 = CONCAT44(uStack_11c,local_120);
            pQVar15->ui32[0] = (uint)pfVar23[4];
            bVar7 = lVar17 < (long)uVar21;
            uVar21 = (ulong)((int)uVar21 + 1);
            uVar14 = local_f0;
            if (bVar7) {
              uVar14 = 0;
            }
            pQVar15->ui32[1] = (uint)pfVar23[5];
            pfVar1 = pfVar23 + 6;
            pfVar23 = pfVar23 + 4;
            pQVar15->ui32[2] = (uint)*pfVar1;
            pQVar15->ui32[3] = uVar14;
          } while ((long)uVar21 < 4);
        } while (iVar27 < iVar28);
      }
      *(int *)(local_13c + (int)pbuf) = (ndpkt - (iVar24 + -0x70000000)) + -1;
    }
    if ((local_148->dat).uc8[1] != 0) {
      ResetEffects(local_148);
    }
  }
  return;
}

void SetWaterdrop(EFFECT_CONT *ec) {
	u_char r;
	u_char g;
	u_char b;
	int c;
	int i;
	int w;
	int th;
	int tw;
	int so[64];
	int uv[6][2];
	u_int wdbwait;
	u_int wdnwait;
	float wdadd;
	float wdcnt;
	float wddely;
	float rot_x;
	float rot_y;
	float pos_y;
	float grv1;
	u_long tx0;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR wpos;
	static sceVu0FVECTOR dummy_rot = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	};
	static sceVu0FVECTOR wwpos[24];
	static int wwcnt = 0;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR ppos[4];
	float *v1;
	float r;
	float r;
	float *v0;
	float r;
	float *v0;
	float r;
	float r;
	float *v0;
	float r;
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  bool bVar5;
  int *piVar6;
  float fVar7;
  Q_WORDDATA *pQVar8;
  uint uVar9;
  Q_WORDDATA *pQVar10;
  float *pfVar11;
  uint uVar12;
  Q_WORDDATA *pQVar13;
  int iVar14;
  int (*paiVar15) [4];
  float (*pafVar16) [4];
  ulong uVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined in_vf0 [16];
  undefined auVar22 [16];
  undefined4 in_vuR;
  int so [64];
  int uv [6] [2];
  float wlm [4] [4];
  float slm [4] [4];
  float wpos [4];
  int ivec [4] [4];
  float ppos [4] [4];
  float rot_x;
  float rot_y;
  uchar r;
  uchar g;
  uchar b;
  uint wdnwait;
  int (*local_c8) [4];
  
  fVar7 = DAT_00355518;
  fVar21 = (ec->dat).fl32[2];
  uVar19 = ec->max;
  ppos[0]._0_8_ = DAT_0034b9a0;
  ppos[1]._0_8_ = DAT_0034b9b0;
  ppos[1]._8_8_ = DAT_0034b9b8;
  ppos[2]._0_8_ = DAT_0034b9c0;
  ppos[2]._8_8_ = DAT_0034b9c8;
  ppos[3]._0_8_ = DAT_0034b9d0;
  ppos[3]._8_8_ = DAT_0034b9d8;
  ppos[0]._8_8_ = DAT_0034b9a8;
  uVar9 = ec->cnt;
  fVar20 = (ec->dat).fl32[3];
  if ((ec->dat).uc8[7] == 0) {
    _r = (uint)(ec->dat).uc8[2];
    _g = (uint)(ec->dat).uc8[3];
    _b = (uint)(ec->dat).uc8[4];
  }
  else {
    _g = 0;
    _r = 0x80;
    _b = 0;
  }
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar4 = (undefined8 *)ec->pnt[0];
  wpos[2] = *(float *)(puVar4 + 1);
  wpos[3] = *(float *)((int)puVar4 + 0xc);
  wpos[0] = (float)*puVar4;
                    /* end of inlined section */
  wpos[1] = (float)((ulong)*puVar4 >> 0x20) + DAT_00355514 * fVar20 * fVar20;
  if (stop_effects == 0) {
    if (fVar21 < wpos[1]) {
      wdnwait = uVar9 - 1;
      if (uVar9 == 0) {
        fVar20 = 0.0;
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        uVar9 = fptoui(SUB164(auVar22,0) * 100.0);
        wdnwait = uVar9 + (uVar19 - 0x32);
        if ((ec->dat).uc8[5] == 4) {
                    /* inlined from effect.h */
          auVar22 = _vrnext(in_vuR);
          auVar22 = _vsubbc(auVar22,in_vf0);
          auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
          (ec->dat).uc8[7] = SUB164(auVar22,0) * 100.0 < 10.0;
        }
      }
      uVar19 = ec->flow;
      ec->cnt = wdnwait;
      (ec->dat).ui32[3] = (uint)fVar20;
      if (uVar19 == 0) {
        return;
      }
      if ((ec->dat).uc8[5] == 1) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        iVar18 = wwcnt_284 * 0x10;
        *(float *)(&wwpos_283 + iVar18) = wpos[0];
        *(float *)(&DAT_00384844 + iVar18) = wpos[1];
        *(float *)(&DAT_00384848 + iVar18) = wpos[2];
        *(float *)(&DAT_0038484c + iVar18) = wpos[3];
                    /* end of inlined section */
        *(float *)(&DAT_00384844 + iVar18) = fVar21;
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        fptoui(SUB164(auVar22,0) * 16.0);
        SetEffects(0x16,8);
        if (plyr_wrk.dop._13_1_ == 0x17) {
          SeStartPosEventFlame(0x17,0,(float *)(&wwpos_283 + wwcnt_284 * 0x10),0,0x1000,0x1000);
        }
        uVar19 = 0;
        iVar14 = wwcnt_284 + 1;
        iVar18 = wwcnt_284 + 0x10;
        if (-1 < iVar14) {
          iVar18 = iVar14;
        }
        wwcnt_284 = iVar14 + (iVar18 >> 4) * -0x10;
        ec->flow = 0;
      }
      if (uVar19 == 0) {
        return;
      }
      if ((ec->dat).uc8[5] == 2) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        iVar18 = wwcnt_284 * 0x10;
        pfVar11 = (float *)(&wwpos_283 + iVar18);
        *pfVar11 = wpos[0];
        *(float *)(&DAT_00384844 + iVar18) = wpos[1];
        *(float *)(&DAT_00384848 + iVar18) = wpos[2];
        *(float *)(&DAT_0038484c + iVar18) = wpos[3];
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        *(float *)(&DAT_00384844 + iVar18) = fVar21;
        *pfVar11 = *pfVar11 + (SUB164(auVar22,0) * 128.0 - 64.0);
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        *(float *)(&DAT_00384848 + iVar18) =
             *(float *)(&DAT_00384848 + iVar18) + (SUB164(auVar22,0) * 128.0 - 64.0);
        SetEffects(0x16,8);
        if ((plyr_wrk.dop._13_1_ == 1) || (plyr_wrk.dop._13_1_ == 0x1a)) {
          SeStartPosEventFlame
                    (plyr_wrk.dop._13_1_,0,(float *)(&wwpos_283 + wwcnt_284 * 0x10),0,0x1000,0x1000)
          ;
        }
        uVar19 = 0;
        wwcnt_284 = (wwcnt_284 + 1) % 0x18;
        ec->flow = 0;
      }
      if (uVar19 == 0) {
        return;
      }
      if ((ec->dat).uc8[5] != 4) {
        return;
      }
                    /* inlined from ../../graphics/graph3d/libsg.h */
      iVar18 = wwcnt_284 * 0x10;
      *(float *)(&wwpos_283 + iVar18) = wpos[0];
      *(float *)(&DAT_00384844 + iVar18) = wpos[1];
      *(float *)(&DAT_00384848 + iVar18) = wpos[2];
      *(float *)(&DAT_0038484c + iVar18) = wpos[3];
                    /* end of inlined section */
      *(float *)(&DAT_00384844 + iVar18) = fVar21;
      if ((ec->dat).uc8[7] == 0) {
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        fptoui(SUB164(auVar22,0) * 16.0);
        SetEffects(0x16,8);
      }
      else {
        SetEffects(0x16,8);
      }
      if (plyr_wrk.dop._13_1_ == 0x17) {
        SeStartPosEventFlame(0x17,0,(float *)(&wwpos_283 + wwcnt_284 * 0x10),0,0x1000,0x1000);
      }
      wwcnt_284 = (wwcnt_284 + 1) % 0x18;
      ec->flow = 0;
      return;
    }
    ec->flow = 1;
    fVar20 = fVar20 + fVar7;
  }
  wdnwait = uVar9;
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  bVar5 = false;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  wlm[0][0] = 8.0;
  iVar18 = 3;
  wlm[2][2] = 8.0;
  wlm[1][1] = 8.0;
  sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  paiVar15 = ivec;
  pafVar16 = ppos;
  local_c8 = paiVar15;
  do {
    sceVu0RotTransPers(paiVar15,(Matrix4x4 *)slm,pafVar16,0);
    pafVar16 = pafVar16[1];
    iVar18 = iVar18 + -1;
    piVar6 = *paiVar15;
    if (0x8000 < (*paiVar15)[0] - 0x4000U) {
      bVar5 = true;
    }
    if (0x8000 < (*paiVar15)[1] - 0x4000U) {
      bVar5 = true;
    }
    paiVar15 = paiVar15[1];
    if (0xffff00 < piVar6[2] - 0xffU) {
      bVar5 = true;
    }
  } while (-1 < iVar18);
  if (bVar5) {
    (ec->dat).ui32[3] = (uint)fVar20;
    ec->cnt = wdnwait;
  }
  else {
    uVar19 = 0;
    iVar18 = (monochrome_mode + 0x34) * 0x20;
    uVar2 = *(ushort *)(&DAT_0026be4e + iVar18);
    uVar3 = *(ushort *)(&DAT_0026be4c + iVar18);
    uVar17 = *(ulong *)(&effdat + iVar18);
    Reserve2DPacket(0x1000);
    pQVar8 = pbuf;
    iVar18 = ndpkt;
    pQVar10 = pbuf + ndpkt;
    pQVar10->ui32[0] = 0;
    pQVar10->ui32[1] = 0;
    pQVar10->ui32[2] = 0;
    pQVar10->ui32[3] = 0;
    pQVar8[ndpkt + 1].ul64[1] = 0xe;
    pQVar8[ndpkt + 1].ul64[0] = 0x1000000000008006;
    pQVar8[ndpkt + 2].ul64[1] = 0x3f;
    pQVar8[ndpkt + 2].ul64[0] = 0;
    pQVar8[ndpkt + 3].ul64[0] = uVar17;
    pQVar8[ndpkt + 3].ul64[1] = 6;
    pQVar8[ndpkt + 4].ul64[0] = 0x161;
    pQVar8[ndpkt + 4].ul64[1] = 0x14;
    pQVar8[ndpkt + 5].ul64[0] = 0x100008c;
    pQVar8[ndpkt + 5].ul64[1] = 0x4e;
    pQVar8[ndpkt + 6].ul64[0] = 0x48;
    pQVar8[ndpkt + 6].ul64[1] = 0x42;
    iVar14 = ndpkt + 8;
    pQVar8[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar8[ndpkt + 7].ul64[1] = 0x47;
    pQVar8[iVar14].ul64[1] = 0x431;
    ndpkt = ndpkt + 9;
    pQVar8[iVar14].ul64[0] = 0x30ae400000008004;
    paiVar15 = local_c8;
    do {
      pQVar10 = pQVar8 + ndpkt;
      pQVar10->ui32[3] = 0x20;
      pQVar13 = pQVar8 + ndpkt + 1;
      iVar14 = ndpkt + 3;
      pQVar10->ui32[0] = _r;
      uVar9 = 8;
      if ((uVar19 & 1) != 0) {
        uVar9 = (uint)uVar3 * 0x10 - 8;
      }
      pQVar10->ui32[1] = _g;
      pQVar10->ui32[2] = _b;
      uVar12 = 8;
      if ((int)uVar19 / 2 == 0) {
        uVar12 = (uint)uVar2 * 0x10 - 8;
      }
      pQVar13->ui32[0] = uVar9;
      pQVar13->ui32[1] = uVar12;
      pQVar13->ui32[3] = 0;
      pQVar10 = pQVar8 + ndpkt + 2;
      pQVar13->ui32[2] = 0;
      uVar9 = 0x8000;
      if (1 < (int)uVar19) {
        uVar9 = 0;
      }
      uVar19 = uVar19 + 1;
      pQVar10->ui32[0] = (*paiVar15)[0];
      pQVar10->ui32[1] = (*paiVar15)[1];
      piVar6 = *paiVar15;
      paiVar15 = paiVar15[1];
      pQVar10->ui32[2] = piVar6[2];
      ndpkt = iVar14;
      pQVar10->ui32[3] = uVar9;
    } while ((int)uVar19 < 4);
    pbuf[iVar18].ui32[0] = (iVar14 - (iVar18 + -0x70000000)) - 1;
    bVar1 = (ec->dat).uc8[1];
    ec->cnt = wdnwait;
    (ec->dat).ui32[3] = (uint)fVar20;
    if (bVar1 != 0) {
      ResetEffects(ec);
    }
  }
  return;
}

void SetDustLeaf(float *pos, int type) {
	u_char rgb1[3];
	u_char rgb2[3];
	u_char mr;
	u_char mg;
	u_char mb;
	u_char mrr;
	u_char mrg;
	u_char mrb;
	int i;
	int num;
	int status;
	int leaf_num;
	float ang;
	float angr;
	float wvx;
	float wvy;
	float mv1x;
	float mv1y;
	float mangr;
	EFF_LEAF *lep;
	EFF_LEAF_ONE *lepo;
	float *v0;
	float *v1;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	
  byte bVar1;
  undefined8 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined in_vf0 [16];
  undefined auVar24 [16];
  undefined4 in_vuR;
  uchar rgb1 [3];
  uchar rgb2 [3];
  byte bVar2;
  byte bVar3;
  
  uVar14 = 0x1c;
  if (type == 0) {
    if (plyr_wrk.dop._13_1_ == '\x15') {
      iVar18 = 2;
      iVar17 = 2;
      iVar16 = 2;
      bVar1 = DAT_00356608;
      bVar2 = DAT_0035660a;
      bVar3 = DAT_00356609;
    }
    else {
      iVar18 = 0xc;
      iVar17 = 0xc;
      iVar16 = 8;
      bVar1 = DAT_00356610;
      bVar2 = DAT_00356612;
      bVar3 = DAT_00356611;
    }
    uVar14 = (uint)bVar1;
    uVar13 = (uint)bVar3;
    uVar12 = (uint)bVar2;
    fVar22 = 20.0;
    iVar19 = 8;
    fVar9 = 180.0;
  }
  else {
    fVar22 = 34.0;
    uVar13 = 0x18;
    fVar9 = 360.0;
    uVar12 = 0x14;
    iVar18 = 1;
    iVar17 = 1;
    iVar16 = 1;
    iVar19 = 0x10;
  }
  if (eff_leaf[0].flag == 0) {
    iVar11 = 0;
  }
  else {
    for (iVar8 = 1; (iVar11 = -1, iVar8 < 6 && (iVar11 = iVar8, eff_leaf[iVar8].flag != 0));
        iVar8 = iVar8 + 1) {
    }
  }
  if (iVar11 != -1) {
    if (plyr_wrk.sta == 0) {
      fVar23 = fGpffff84b4 * 20.0;
      fVar22 = fVar22 * fGpffff84b4;
    }
    else {
      fVar23 = 20.0;
    }
    fVar20 = -plyr_wrk.move_box.trot.w;
    iVar15 = iVar11 * 0x520 + 0x385bb0;
    fVar21 = (fVar9 * fGpffff84bc) / 180.0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    eff_leaf[iVar11].flag = 1;
    eff_leaf[iVar11].type = type;
    uVar4 = *(undefined8 *)pos;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar9 = pos[2];
    fVar10 = pos[3];
    eff_leaf[iVar11].bpos[0] = (float)uVar4;
    eff_leaf[iVar11].bpos[1] = (float)((ulong)uVar4 >> 0x20);
    eff_leaf[iVar11].bpos[2] = fVar9;
    eff_leaf[iVar11].bpos[3] = fVar10;
                    /* end of inlined section */
    iVar8 = 0;
    if (iVar19 != 0) {
      do {
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        iVar6 = iVar8 * 0x50 + iVar15;
        fVar9 = ((fVar20 - fGpffff84c0) - fVar21 * SUB164(auVar24,0)) + fVar21 * 0.5;
        *(float *)(iVar6 + 8) = fVar9;
        if (fVar9 < fGpffff84c4) {
          fVar9 = fVar9 + fGpffff84c8;
LAB_0013f210:
          *(float *)(iVar6 + 8) = fVar9;
        }
        else {
          if (fGpffff84cc < fVar9) {
            fVar9 = fVar9 - fGpffff84d0;
            goto LAB_0013f210;
          }
          *(float *)(iVar6 + 8) = fVar9;
        }
        puVar7 = (undefined4 *)(iVar8 * 0x50 + iVar15);
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        puVar7[0xc] = SUB164(auVar24,0) * 10.0 + fVar22;
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        *puVar7 = 0;
        puVar7[0xd] = SUB164(auVar24,0) * 15.0 + fVar23;
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        puVar7[0x10] = SUB164(auVar24,0) * fGpffff84d4 - fGpffff84d8;
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        puVar7[0x11] = SUB164(auVar24,0) * fGpffff84d4 - fGpffff84d8;
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        *(char *)(puVar7 + 1) = (char)(int)((float)iVar18 * SUB164(auVar24,0) + (float)uVar14);
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        *(char *)((int)puVar7 + 5) = (char)(int)((float)iVar17 * SUB164(auVar24,0) + (float)uVar13);
                    /* inlined from effect.h */
        auVar24 = _vrnext(in_vuR);
        auVar24 = _vsubbc(auVar24,in_vf0);
        auVar24 = _qmfc2(SUB164(auVar24,0));
                    /* end of inlined section */
        *(char *)((int)puVar7 + 6) = (char)(int)((float)iVar16 * SUB164(auVar24,0) + (float)uVar12);
        uVar5 = 0x1c;
        if (eff_leaf[iVar11].type == 0) {
          uVar5 = 0x80;
        }
        *(undefined *)((int)puVar7 + 7) = uVar5;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar19);
    }
  }
  return;
}

void SetLeaf(float *pos) {
  byte bVar1;
  bool bVar4;
  undefined8 uVar5;
  undefined uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined in_vf0 [16];
  undefined auVar21 [16];
  undefined4 in_vuR;
  byte bVar2;
  byte bVar3;
  
  if (plyr_wrk.dop._13_1_ == '\x15') {
    iVar16 = 2;
    iVar15 = 2;
    iVar14 = 2;
    bVar1 = DAT_00356608;
    bVar2 = DAT_0035660a;
    bVar3 = DAT_00356609;
  }
  else {
    iVar16 = 0xc;
    iVar15 = 0xc;
    iVar14 = 8;
    bVar1 = DAT_00356610;
    bVar2 = DAT_00356612;
    bVar3 = DAT_00356611;
  }
  fVar18 = 20.0;
  if (eff_leaf[0].flag == 0) {
    iVar12 = 0;
  }
  else {
    for (iVar9 = 1; (iVar12 = -1, iVar9 < 6 && (iVar12 = iVar9, eff_leaf[iVar9].flag != 0));
        iVar9 = iVar9 + 1) {
    }
  }
  if (iVar12 != -1) {
    if (plyr_wrk.sta == 0) {
      fVar20 = DAT_00355524 * 20.0;
      fVar18 = DAT_00355524 * 20.0;
    }
    else {
      fVar20 = 20.0;
    }
    fVar19 = -plyr_wrk.move_box.trot.w - DAT_00355530;
    iVar13 = iVar12 * 0x520 + 0x385bb0;
    fVar17 = (DAT_0035552c * 180.0) / 180.0;
    eff_leaf[iVar12].flag = 1;
    eff_leaf[iVar12].type = 0;
    uVar5 = *(undefined8 *)pos;
    fVar10 = pos[2];
    fVar11 = pos[3];
    eff_leaf[iVar12].bpos[0] = (float)uVar5;
    eff_leaf[iVar12].bpos[1] = (float)((ulong)uVar5 >> 0x20);
    eff_leaf[iVar12].bpos[2] = fVar10;
    eff_leaf[iVar12].bpos[3] = fVar11;
    iVar9 = 0;
    do {
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      iVar7 = iVar9 * 0x50 + iVar13;
      fVar10 = (fVar19 - fVar17 * SUB164(auVar21,0)) + fVar17 * 0.5;
      bVar4 = fVar10 < DAT_00355534;
      *(float *)(iVar7 + 8) = fVar10;
      if (bVar4) {
        fVar10 = fVar10 + DAT_00355538;
LAB_0013f210:
        *(float *)(iVar7 + 8) = fVar10;
      }
      else {
        if (DAT_0035553c < fVar10) {
          fVar10 = fVar10 - DAT_00355540;
          goto LAB_0013f210;
        }
        *(float *)(iVar7 + 8) = fVar10;
      }
      puVar8 = (undefined4 *)(iVar9 * 0x50 + iVar13);
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      puVar8[0xc] = SUB164(auVar21,0) * 10.0 + fVar18;
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      *puVar8 = 0;
      puVar8[0xd] = SUB164(auVar21,0) * 15.0 + fVar20;
      fVar11 = DAT_00355548;
      fVar10 = DAT_00355544;
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      puVar8[0x10] = SUB164(auVar21,0) * DAT_00355544 - DAT_00355548;
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      puVar8[0x11] = SUB164(auVar21,0) * fVar10 - fVar11;
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      *(char *)(puVar8 + 1) = (char)(int)((float)iVar16 * SUB164(auVar21,0) + (float)(uint)bVar1);
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      *(char *)((int)puVar8 + 5) =
           (char)(int)((float)iVar15 * SUB164(auVar21,0) + (float)(uint)bVar3);
      auVar21 = _vrnext(in_vuR);
      auVar21 = _vsubbc(auVar21,in_vf0);
      auVar21 = _qmfc2(SUB164(auVar21,0));
      *(char *)((int)puVar8 + 6) =
           (char)(int)((float)iVar14 * SUB164(auVar21,0) + (float)(uint)bVar2);
      uVar6 = 0x1c;
      if (eff_leaf[iVar12].type == 0) {
        uVar6 = 0x80;
      }
      *(undefined *)((int)puVar8 + 7) = uVar6;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
  }
  return;
}

void SetDust2(float *pos) {
  bool bVar1;
  undefined8 uVar2;
  undefined uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined in_vf0 [16];
  undefined auVar15 [16];
  undefined4 in_vuR;
  
  fVar12 = 34.0;
  if (eff_leaf[0].flag == 0) {
    iVar9 = 0;
  }
  else {
    for (iVar6 = 1; (iVar9 = -1, iVar6 < 6 && (iVar9 = iVar6, eff_leaf[iVar6].flag != 0));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar9 != -1) {
    if (plyr_wrk.sta == 0) {
      fVar14 = DAT_00355524 * 20.0;
      fVar12 = DAT_00355524 * 34.0;
    }
    else {
      fVar14 = 20.0;
    }
    fVar13 = -plyr_wrk.move_box.trot.w - DAT_00355530;
    iVar10 = iVar9 * 0x520 + 0x385bb0;
    fVar11 = (DAT_0035552c * 360.0) / 180.0;
    eff_leaf[iVar9].flag = 1;
    eff_leaf[iVar9].type = 1;
    uVar2 = *(undefined8 *)pos;
    fVar7 = pos[2];
    fVar8 = pos[3];
    eff_leaf[iVar9].bpos[0] = (float)uVar2;
    eff_leaf[iVar9].bpos[1] = (float)((ulong)uVar2 >> 0x20);
    eff_leaf[iVar9].bpos[2] = fVar7;
    eff_leaf[iVar9].bpos[3] = fVar8;
    iVar6 = 0;
    do {
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      iVar4 = iVar6 * 0x50 + iVar10;
      fVar7 = (fVar13 - fVar11 * SUB164(auVar15,0)) + fVar11 * 0.5;
      bVar1 = fVar7 < DAT_00355534;
      *(float *)(iVar4 + 8) = fVar7;
      if (bVar1) {
        fVar7 = fVar7 + DAT_00355538;
LAB_0013f210:
        *(float *)(iVar4 + 8) = fVar7;
      }
      else {
        if (DAT_0035553c < fVar7) {
          fVar7 = fVar7 - DAT_00355540;
          goto LAB_0013f210;
        }
        *(float *)(iVar4 + 8) = fVar7;
      }
      puVar5 = (undefined4 *)(iVar6 * 0x50 + iVar10);
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      puVar5[0xc] = SUB164(auVar15,0) * 10.0 + fVar12;
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      *puVar5 = 0;
      puVar5[0xd] = SUB164(auVar15,0) * 15.0 + fVar14;
      fVar8 = DAT_00355548;
      fVar7 = DAT_00355544;
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      puVar5[0x10] = SUB164(auVar15,0) * DAT_00355544 - DAT_00355548;
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      puVar5[0x11] = SUB164(auVar15,0) * fVar7 - fVar8;
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      *(char *)(puVar5 + 1) = (char)(int)(SUB164(auVar15,0) * 1.0 + 28.0);
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      *(char *)((int)puVar5 + 5) = (char)(int)(SUB164(auVar15,0) * 1.0 + 24.0);
      auVar15 = _vrnext(in_vuR);
      auVar15 = _vsubbc(auVar15,in_vf0);
      auVar15 = _qmfc2(SUB164(auVar15,0));
      *(char *)((int)puVar5 + 6) = (char)(int)(SUB164(auVar15,0) * 1.0 + 20.0);
      uVar3 = 0x1c;
      if (eff_leaf[iVar9].type == 0) {
        uVar3 = 0x80;
      }
      *(undefined *)((int)puVar5 + 7) = uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
  }
  return;
}

void RunLeafSub(EFF_LEAF *lep) {
	float f;
	float ss;
	float cc;
	float fw2;
	int c;
	int i;
	int j;
	int k;
	int w;
	int th;
	int tw;
	int so[16];
	int leaf_num;
	int disp[32];
	float grv1y;
	float mphs;
	u_char rr;
	u_char gg;
	u_char bb;
	u_long tx0;
	float rot_x;
	float rot_y;
	sceVu0IVECTOR ivec[16][5];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[2][5];
	float *v0;
	float *v1;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *piVar8;
  int (*paiVar9) [4];
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  Q_WORDDATA *pQVar13;
  uint uVar14;
  float (*pafVar15) [4];
  EFF_LEAF_ONE *pEVar16;
  Q_WORDDATA *pQVar17;
  Q_WORDDATA *pQVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  int iVar28;
  uint uVar29;
  int (*paiVar30) [4];
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulong in_hi;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int so [16];
  int disp [32];
  int ivec [16] [5] [4];
  float wlm [4] [4];
  float slm [4] [4];
  float bpos [4];
  float wpos [4];
  float ppos [2] [5] [4];
  float rot_x;
  float rot_y;
  EFF_LEAF *local_f8;
  int th;
  int leaf_num;
  int local_ec;
  int *local_e8;
  Matrix4x4 *local_e4;
  int local_e0;
  int local_dc;
  EFF_LEAF_ONE *local_d8;
  undefined8 *local_d4;
  Vector4 *local_d0;
  float (*local_cc) [5] [4];
  
  fVar38 = DAT_0035554c;
  local_f8 = lep;
  pafVar15 = (float (*) [4])ppos;
  local_cc = (float (*) [5] [4])pafVar15;
  puVar10 = &DAT_0034ba10;
  local_d8 = lep->lo;
  iVar12 = lep->type;
  local_d4 = (undefined8 *)bpos;
  do {
    uVar27 = puVar10[1];
    uVar19 = puVar10[2];
    uVar24 = puVar10[3];
    *(undefined8 *)*(float (*) [4])*pafVar15 = *puVar10;
    *(undefined8 *)(*(float (*) [4])*pafVar15 + 2) = uVar27;
    *(undefined8 *)pafVar15[1] = uVar19;
    *(undefined8 *)(pafVar15[1] + 2) = uVar24;
    puVar10 = puVar10 + 4;
    pafVar15 = pafVar15[2];
  } while (puVar10 != &DAT_0034bab0);
  leaf_num = 0xc;
  if (iVar12 == 0) {
    leaf_num = 8;
  }
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
  bpos[0] = (float)*(undefined8 *)lep->bpos;
  bpos[1] = (float)((ulong)*(undefined8 *)lep->bpos >> 0x20);
  bpos[2] = lep->bpos[2];
  bpos[3] = lep->bpos[3];
                    /* end of inlined section */
  if (leaf_num == 0) {
    local_dc = -1;
  }
  else {
    local_d0 = (Vector4 *)wpos;
    local_e4 = (Matrix4x4 *)slm;
    local_e8 = disp;
    local_dc = leaf_num + -1;
    iVar12 = 0;
    do {
      lVar5 = ((long)(int)local_d8 | in_hi) + (long)(iVar12 * 0x50);
      puVar6 = (undefined4 *)lVar5;
      uVar32 = (uint)((ulong)lVar5 >> 0x20);
      uVar35 = (ulong)(int)uVar32;
      fVar36 = (float)puVar6[3];
      fVar37 = (float)puVar6[2];
      puVar6[4] = (float)puVar6[0xc] * fVar36;
      fVar36 = -(float)puVar6[0xd] * fVar36 + fVar36 * 3.0 * fVar36;
      puVar6[5] = fVar36;
      if (0.0 < fVar36) {
        *puVar6 = 2;
      }
      else if ((float)puVar6[9] < fVar36) {
        *puVar6 = 1;
      }
      else {
        *puVar6 = 0;
      }
      fVar36 = DAT_00355554;
      if ((local_f8->type != 0) &&
         (lVar5 = (long)(int)((uint)local_d8 | uVar32) + (long)(iVar12 * 0x50),
         uVar35 = (ulong)(int)((ulong)lVar5 >> 0x20), 0 < *(int *)lVar5)) {
        fVar36 = fVar38 * DAT_00355550;
      }
      if ((stop_effects == 0) && (stop_lf == 0)) {
        lVar5 = ((long)(int)local_d8 | uVar35) + (long)(iVar12 * 0x50);
        iVar34 = (int)lVar5;
        uVar35 = (ulong)(int)((ulong)lVar5 >> 0x20);
        *(float *)(iVar34 + 0xc) = *(float *)(iVar34 + 0xc) + fVar36;
                    /* inlined from ../../graphics/graph3d/libsg.h */
      }
      lVar5 = ((long)(int)local_d8 | uVar35) + (long)(iVar12 * 0x50);
      iVar34 = (int)lVar5;
      lVar5 = (long)(int)((uint)local_d8 | (uint)((ulong)lVar5 >> 0x20)) + (long)(iVar12 * 0x50);
      iVar11 = (int)lVar5;
      uVar19 = *(undefined8 *)(iVar11 + 0x10);
      uVar20 = *(undefined4 *)(iVar11 + 0x18);
      uVar21 = *(undefined4 *)(iVar11 + 0x1c);
      *(int *)(iVar34 + 0x20) = (int)uVar19;
      *(int *)(iVar34 + 0x24) = (int)((ulong)uVar19 >> 0x20);
      *(undefined4 *)(iVar34 + 0x28) = uVar20;
      *(undefined4 *)(iVar34 + 0x2c) = uVar21;
      uVar19 = *local_d4;
      fVar36 = *(float *)(local_d4 + 1);
      fVar22 = *(float *)((int)local_d4 + 0xc);
      local_d0->x = (float)uVar19;
      local_d0->y = (float)((ulong)uVar19 >> 0x20);
      local_d0->z = fVar36;
      local_d0->w = fVar22;
                    /* end of inlined section */
      lVar5 = (long)(int)((uint)local_d8 | (uint)((ulong)lVar5 >> 0x20)) + (long)(iVar12 * 0x50);
      iVar34 = (int)lVar5;
      iVar11 = (int)(lVar5 >> 0x3f);
      fVar36 = SgSinf(fVar37);
      fVar37 = SgCosf(fVar37);
      wpos[1] = wpos[1] + *(float *)(iVar34 + 0x14);
      wpos[2] = wpos[2] + *(float *)(iVar34 + 0x10) * fVar36 + *(float *)(iVar34 + 0x18) * fVar37;
      wpos[0] = wpos[0] + (*(float *)(iVar34 + 0x10) * fVar37 - *(float *)(iVar34 + 0x18) * fVar36);
      sceVu0UnitMatrix((Matrix4x4 *)wlm);
      wlm[0][0] = 4.0;
      wlm[2][2] = 4.0;
      wlm[1][1] = 4.0;
      if (local_f8->type == 0) {
        sceVu0RotMatrixX(*(undefined4 *)(iVar34 + 0x40),(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
        sceVu0RotMatrixY(*(undefined4 *)(iVar34 + 0x44),(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      }
      else {
        Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
        sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
        sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      }
      in_hi = CONCAT44(iVar11,iVar12 * 0x50 >> 0x1f);
      iVar34 = 0;
      bVar7 = false;
      paiVar30 = (int (*) [4])ivec[iVar12];
      sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_d0);
      sceVu0MulMatrix(local_e4,&SgWSMtx,(Matrix4x4 *)wlm);
      local_e0 = iVar12 + 1;
      do {
        iVar11 = iVar34 * 0x10;
        iVar34 = iVar34 + 1;
        lVar5 = ((long)(int)local_cc | in_hi) + (long)(local_f8->type * 0x50);
        in_hi = (ulong)(int)((ulong)lVar5 >> 0x20);
        sceVu0RotTransPers(paiVar30,local_e4,(int)lVar5 + iVar11,0);
        paiVar9 = (int (*) [4])*paiVar30;
        if (0x8000 < (*(int (*) [4])*paiVar30)[0] - 0x4000U) {
          bVar7 = true;
        }
        if (0x8000 < (*(int (*) [4])*paiVar30)[1] - 0x4000U) {
          bVar7 = true;
        }
        paiVar30 = paiVar30[1];
        if (0xffff00 < (*paiVar9)[2] - 0xffU) {
          bVar7 = true;
        }
      } while (iVar34 < 5);
      local_e8[iVar12] = (uint)!bVar7;
      iVar12 = local_e0;
    } while (local_e0 < leaf_num);
    iVar12 = local_f8->type;
  }
  iVar34 = 0;
  pEVar16 = local_d8;
  for (iVar11 = leaf_num; iVar11 != 0; iVar11 = iVar11 + -1) {
    piVar8 = &pEVar16->fl;
    pEVar16 = pEVar16 + 1;
    iVar34 = iVar34 + *piVar8;
  }
  if (iVar34 / 2 == leaf_num) {
    local_f8->flag = 0;
  }
  iVar34 = 0;
  if (leaf_num != 0) {
    do {
      so[iVar34] = iVar34;
      iVar34 = iVar34 + 1;
    } while (iVar34 < leaf_num);
  }
  iVar34 = local_dc;
  iVar11 = 0;
  if (0 < local_dc) {
    do {
      iVar28 = iVar11 + 1;
      iVar31 = iVar28;
      if (iVar28 < leaf_num) {
        do {
          iVar3 = so[iVar11];
          iVar4 = so[iVar31];
          in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar4 * 0x50 >> 0x1f);
          if (ivec[iVar4][4][2] < ivec[iVar3][4][2]) {
            so[iVar31] = iVar3;
            so[iVar11] = iVar4;
          }
          iVar31 = iVar31 + 1;
        } while (iVar31 < leaf_num);
      }
      iVar11 = iVar28;
    } while (iVar28 < iVar34);
  }
  if (iVar12 == 0) {
    iVar12 = (monochrome_mode + 0x14) * 0x20;
    uVar1 = *(ushort *)(&DAT_0026be4e + iVar12);
    uVar2 = *(ushort *)(&DAT_0026be4c + iVar12);
    uVar35 = *(ulong *)(&effdat + iVar12);
  }
  else {
    iVar12 = (monochrome_mode + 6) * 0x20;
    uVar1 = *(ushort *)(&DAT_0026be4e + iVar12);
    uVar2 = *(ushort *)(&DAT_0026be4c + iVar12);
    uVar35 = *(ulong *)(&effdat + iVar12);
  }
  th = (uint)uVar1 << 4;
  iVar11 = 0;
  Reserve2DPacket(0x1000);
  pQVar18 = pbuf;
  iVar12 = ndpkt;
  local_ec = ndpkt * 0x10;
  pQVar13 = pbuf + ndpkt;
  pQVar13->ui32[0] = 0;
  pQVar13->ui32[1] = 0;
  pQVar13->ui32[2] = 0;
  pQVar13->ui32[3] = 0;
  pQVar18[ndpkt + 1].ul64[0] = 0x1000000000008006;
  pQVar18[ndpkt + 1].ul64[1] = 0xe;
  pQVar18[ndpkt + 2].ul64[0] = 0;
  pQVar18[ndpkt + 2].ul64[1] = 0x3f;
  pQVar18[ndpkt + 3].ul64[0] = uVar35;
  pQVar18[ndpkt + 3].ul64[1] = 6;
  pQVar18[ndpkt + 4].ul64[1] = 0x14;
  pQVar18[ndpkt + 4].ul64[0] = 0x161;
  pQVar18[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar18[ndpkt + 5].ul64[1] = 0x4e;
  pQVar18[ndpkt + 6].ul64[1] = 0x42;
  pQVar18[ndpkt + 6].ul64[0] = 0x44;
  pQVar18[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar18[ndpkt + 7].ul64[1] = 0x47;
  iVar34 = ndpkt + 8;
  ndpkt = iVar34;
  if (leaf_num != 0) {
    do {
      lVar5 = ((long)(int)local_d8 | in_hi) + (long)(iVar11 * 0x50);
      uVar32 = (uint)((ulong)lVar5 >> 0x20);
      in_hi = (ulong)(int)uVar32;
      if ((*(int *)lVar5 != 2) && (iVar31 = so[iVar11], disp[iVar31] != 0)) {
        pQVar18[iVar34].ul64[1] = 0x431;
        ndpkt = iVar34 + 1;
        pQVar18[iVar34].ul64[0] = 0x30ae400000008004;
        pQVar13 = pbuf;
        if (monochrome_mode == 0) {
          lVar5 = (long)(int)((uint)local_d8 | uVar32) + (long)(iVar31 * 0x50);
          iVar34 = (int)lVar5;
          uVar32 = (uint)((ulong)lVar5 >> 0x20);
          uVar29 = (uint)*(byte *)(iVar34 + 6);
          uVar14 = (uint)*(byte *)(iVar34 + 4);
          uVar33 = (uint)*(byte *)(iVar34 + 5);
        }
        else {
          iVar34 = ((uint)local_d8 | uVar32) + iVar31 * 0x50;
          uVar14 = (uint)*(byte *)(iVar34 + 4) + (uint)*(byte *)(iVar34 + 5) +
                   (uint)*(byte *)(iVar34 + 6);
          uVar32 = uVar14 % 3;
          uVar29 = uVar14 / 3 & 0xff;
          uVar14 = uVar29;
          uVar33 = uVar29;
        }
        in_hi = CONCAT44((int)uVar32 >> 0x1f,iVar31 * 0x50 >> 0x1f);
        uVar32 = 0;
        paiVar30 = (int (*) [4])ivec[iVar31];
        do {
          pQVar18 = pQVar13 + ndpkt;
          pQVar18->ui32[0] = uVar14;
          pQVar18->ui32[1] = uVar33;
          pQVar18->ui32[2] = uVar29;
          pQVar17 = pQVar13 + ndpkt + 1;
          uVar23 = 8;
          if ((uVar32 & 1) != 0) {
            uVar23 = (uint)uVar2 * 0x10 - 8;
          }
          uVar25 = 8;
          if ((int)uVar32 / 2 != 0) {
            uVar25 = th - 8;
          }
          uVar26 = 0x8000;
          pQVar18->ui32[3] = (uint)local_d8[iVar31].a;
          if (1 < (int)uVar32) {
            uVar26 = 0;
          }
          uVar32 = uVar32 + 1;
          pQVar17->ui32[0] = uVar23;
          pQVar17->ui32[1] = uVar25;
          pQVar17->ui32[3] = 0;
          pQVar18 = pQVar13 + ndpkt + 2;
          pQVar17->ui32[2] = 0;
          iVar34 = ndpkt + 3;
          pQVar18->ui32[0] = (*(int (*) [4])*paiVar30)[0];
          pQVar18->ui32[1] = (*(int (*) [4])*paiVar30)[1];
          paiVar9 = (int (*) [4])*paiVar30;
          paiVar30 = paiVar30[1];
          pQVar18->ui32[2] = (*paiVar9)[2];
          ndpkt = iVar34;
          pQVar18->ui32[3] = uVar26;
          pQVar18 = pbuf;
        } while ((int)uVar32 < 4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < leaf_num);
  }
  pQVar18[iVar12].ui32[0] = (iVar34 - (iVar12 + -0x70000000)) - 1;
  return;
}

void RunLeaf() {
  int iVar1;
  EFF_LEAF *lep;
  
  lep = eff_leaf;
  iVar1 = eff_leaf[0].flag;
  while( true ) {
    if (iVar1 != 0) {
      RunLeafSub(lep);
    }
    lep = lep + 1;
    if (0x387a4f < (int)lep) break;
    iVar1 = lep->flag;
  }
  return;
}

void light_rgb(int *c0, float *LocalLightMatrix[4], float *LightColorMatrix[4], float *v0, float *v1, float *v2, float *c1) {
	sceVu0FVECTOR vector;
	
  undefined4 uVar1;
  float vector [4];
  
  Vu0SubOuterProduct(vector,v0,v2,v1);
  Vu0Normalize(vector,vector);
  uVar1 = 0;
  Vu0ApplyMatrix(vector,LocalLightMatrix,vector);
  sceVu0ClampVector(uVar1,0x3f800000,vector,vector);
  vector[3] = 1.0;
  Vu0ApplyMatrix(vector,LightColorMatrix,vector);
  sceVu0ClampVector(uVar1,0x3f800000,vector,vector);
  Vu0MulVector(vector,c1,vector);
  Vu0FTOI0Vector(c0,vector);
  return;
}

u_char SetCanalSub(int no, float *mpos) {
	int tagnum;
	int cnt;
	u_long reg;
	RIP_WORK1 rw1;
	RIP_WORK2 rw2;
	RIPPLE2_M *rippm;
	sceVu0FVECTOR rip_light0;
	sceVu0FVECTOR rip_light1;
	sceVu0FVECTOR rip_light2;
	sceVu0FVECTOR rip_color0;
	sceVu0FVECTOR rip_color1;
	sceVu0FVECTOR rip_color2;
	sceVu0FVECTOR rip_ambient;
	u_int clpz2;
	int i;
	int j;
	int k;
	int t;
	int m;
	int n;
	int wix;
	int wiy;
	float f;
	float l;
	float lw;
	float y;
	int v1;
	int v2;
	int v3;
	sceVu0FVECTOR wpos;
	sceVu0FMATRIX wlm;
	sceVu0IVECTOR c0;
	sceVu0FVECTOR c1;
	sceVu0FVECTOR sufcol;
	sceVu0FMATRIX NormalLightMatrix;
	sceVu0FMATRIX LightColorMatrix;
	sceVu0FMATRIX LocalLightMatrix;
	RIPPLE2 *ripp;
	float far;
	float near;
	float *v1;
	float *v1;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  Q_WORDDATA *pQVar7;
  int iVar8;
  float *pfVar9;
  Q_WORDDATA *pQVar10;
  int iVar11;
  int iVar12;
  Vector4 *pVVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  RIP_WORK1 rw1;
  RIP_WORK2 rw2;
  float rip_light0 [4];
  float rip_light1 [4];
  float rip_light2 [4];
  float rip_color0 [4];
  float rip_color1 [4];
  float rip_color2 [4];
  float rip_ambient [4];
  float wpos [4];
  float wlm [4] [4];
  int c0 [4];
  float c1 [4];
  float sufcol [4];
  float NormalLightMatrix [4] [4];
  float LightColorMatrix [4] [4];
  float LocalLightMatrix [4] [4];
  uint clpz2;
  int t;
  int local_e8;
  Vector4 *local_e4;
  int local_e0;
  float (*local_dc) [4];
  int (*local_d4) [4];
  float (*local_d0) [4];
  
  local_e8 = no * 8;
  clpz2 = 0xfffffff;
  rip_light0._0_8_ = DAT_0034bab0;
  rip_light0._8_8_ = DAT_0034bab8;
  rip_light1._0_8_ = DAT_0034b820;
  rip_light1._8_8_ = DAT_0034b828;
  rip_light2._0_8_ = DAT_0034bac0;
  rip_light2._8_8_ = DAT_0034bac8;
  rip_color0._0_8_ = DAT_0034bad0;
  rip_color0._8_8_ = DAT_0034bad8;
  rip_color1._0_8_ = DAT_0034bae0;
  rip_color1._8_8_ = DAT_0034bae8;
  rip_color2._0_8_ = DAT_0034baf0;
  rip_color2._8_8_ = DAT_0034baf8;
  memset(rip_ambient,0,0x10);
  rw1.tsh = canal_size[no][1] / 10.0;
  rw1.tsw = canal_size[no][0] / 24.0;
  rw2.tsw = canal_size[no][0] * 0.25;
  rw2.tsh = canal_size[no][1] * 0.5;
  rw1.pnumw = 0x18;
  rw1.pnumh = 10;
  rw1.vnumw = 0x19;
  rw1.vnumh = 0xb;
  rw2.pnumw = 4;
  rw2.pnumh = 2;
  rw2.vnumw = 5;
  rw2.vnumh = 3;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  rw1.bpos[2] = mpos[2];
  rw1.bpos[3] = mpos[3];
  rw1.bpos[0] = (float)*(undefined8 *)mpos;
  local_e4 = (Vector4 *)rw2.bpos;
  rw2.bpos[2] = mpos[2];
  rw2.bpos[3] = mpos[3];
  rw2.bpos[0] = (float)*(undefined8 *)mpos;
  rw2.bpos[1] = (float)((ulong)*(undefined8 *)mpos >> 0x20);
                    /* end of inlined section */
  rw1.bpos[1] = (float)((ulong)*(undefined8 *)mpos >> 0x20) + 80.0;
  sufcol[2] = 255.0;
  sufcol[0] = 255.0;
  sufcol[1] = 255.0;
  sufcol[3] = 0.0;
  fVar21 = DAT_00355558;
  if (setlight != 0) {
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    wlm[0][0] = ligscl;
    wlm[2][2] = ligscl;
    wlm[1][1] = ligscl;
    sceVu0NormalLightMatrix((Matrix4x4 *)NormalLightMatrix,rip_light0,rip_light1,rip_light2);
    sceVu0LightColorMatrix(LightColorMatrix,rip_color0,rip_color1,rip_color2,rip_ambient);
    sceVu0MulMatrix((Matrix4x4 *)LocalLightMatrix,(Matrix4x4 *)NormalLightMatrix,(Matrix4x4 *)wlm);
  }
  local_e0 = no * 4;
  t = fptoui(texsc[no] * 16.0);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)&rw1);
  local_dc = rw1.slm;
  sceVu0MulMatrix((Matrix4x4 *)local_dc,&SgWSMtx,(Matrix4x4 *)wlm);
  if (rw1.vnumw * rw1.vnumh < 1) {
    local_d0 = rw2.slm;
    local_d4 = rw2.vtiw;
    iVar17 = rw1.vnumw * rw1.vnumh;
  }
  else {
    local_d0 = rw2.slm;
    local_d4 = rw2.vtiw;
    iVar17 = 0;
    do {
      iVar11 = iVar17 / rw1.vnumw;
      if (rw1.vnumw == 0) {
        trap(7);
      }
      fVar24 = *(float *)((int)canal_size + local_e8);
      rw1.vt[iVar17][1] = 0.0;
      fVar22 = *(float *)((int)canal_size + local_e8 + 4);
      iVar16 = iVar17 + 1;
      rw1.vt[iVar17][0] = (float)(iVar17 % rw1.vnumw) * rw1.tsw - fVar24 * 0.5;
      rw1.vt[iVar17][3] = 1.0;
      rw1.vt[iVar17][2] = (float)iVar11 * rw1.tsh - fVar22 * 0.5;
      rw1.tx[iVar17] = ((iVar17 % rw1.vnumw << 8) / rw1.pnumw) * 0x10 + t;
      rw1.ty[iVar17] = (iVar11 << 7) / rw1.pnumh << 4;
      iVar17 = iVar16;
    } while (iVar16 < rw1.vnumw * rw1.vnumh);
    iVar17 = rw1.vnumw * rw1.vnumh;
  }
  iVar11 = 0;
  if (0 < iVar17) {
    do {
      if (rw1.vnumw == 0) {
        trap(7);
      }
      fVar22 = SgSinf((((float)(iVar11 % rw1.vnumw) * cana1 + (float)(iVar11 / rw1.vnumw) * cana2 +
                       *(float *)((int)canaltm + local_e0)) * DAT_0035555c) / 180.0);
      iVar17 = iVar11 + 1;
      rw1.vt[iVar11][1] = fVar22 * cana4;
      iVar11 = iVar17;
    } while (iVar17 < rw1.vnumw * rw1.vnumh);
  }
  iVar17 = stop_effects;
  if (stop_effects == 0) {
    fVar22 = *(float *)((int)canaltm + local_e0) + cana3;
    if (360.0 <= fVar22) {
      fVar22 = fVar22 - 360.0;
    }
    *(float *)((int)canaltm + local_e0) = fVar22;
  }
  fVar4 = lvel;
  fVar3 = ldec;
  fVar24 = ydec;
  fVar22 = grav;
  iVar16 = 0;
  iVar11 = 0;
  do {
    if (*(int *)((int)&rip[0].sufno + iVar11) == no + 1) {
      iVar18 = 0;
      if (0 < rw1.vnumw * rw1.vnumh) {
        iVar12 = 0;
        do {
          pfVar9 = (float *)((int)&rip[0].rip2m[0].v + iVar12 + iVar11);
          if ((float)(uint)(*(ushort *)(pfVar9 + 3) >> 2) < *(float *)((int)&rip[0].time + iVar11))
          {
            fVar20 = pfVar9[2];
            fVar23 = *pfVar9;
            fVar20 = fVar23 * fVar20 - fVar22 * fVar20 * fVar20 * 0.5;
            if (*(short *)((int)pfVar9 + 0xe) != 0) {
              fVar20 = -fVar20;
            }
            if (iVar17 == 0) {
              if ((0.0 <= fVar20) && (pfVar9[1] < 0.0)) {
                fVar23 = fVar23 * fVar24;
                pfVar9[2] = 0.0;
                *(undefined2 *)((int)pfVar9 + 0xe) = 0;
                *pfVar9 = fVar23;
              }
              if ((fVar20 <= 0.0) && (0.0 < pfVar9[1])) {
                fVar23 = fVar23 * fVar24;
                pfVar9[2] = 0.0;
                *(undefined2 *)((int)pfVar9 + 0xe) = 1;
                *pfVar9 = fVar23;
              }
            }
            fVar2 = DAT_00355560;
            if (fVar23 < DAT_00355560) {
              *pfVar9 = 0.0;
            }
            else {
              if (iVar17 == 0) {
                pfVar9[1] = fVar20;
                pfVar9[2] = pfVar9[2] + fVar2;
              }
              fVar23 = 1.0 - (float)(uint)(*(ushort *)(pfVar9 + 3) >> 2) / fVar3;
              if (fVar23 < 0.0) {
                fVar23 = 0.0;
              }
              *(float *)((int)rw1.vt + iVar12 + 4) =
                   *(float *)((int)rw1.vt + iVar12 + 4) + -fVar20 * fVar23;
            }
          }
          iVar18 = iVar18 + 1;
          iVar12 = iVar18 * 0x10;
        } while (iVar18 < rw1.vnumw * rw1.vnumh);
      }
      if (iVar17 == 0) {
        *(float *)((int)&rip[0].time + iVar11) = *(float *)((int)&rip[0].time + iVar11) + fVar4;
      }
    }
    iVar16 = iVar16 + 1;
    iVar11 = iVar16 * 0x1140;
  } while (iVar16 < 8);
  iVar17 = 0;
  if (0 < rw1.vnumw * rw1.vnumh) {
    iVar11 = 0;
    do {
      sceVu0ApplyMatrix((Vector4 *)wpos,(Matrix4x4 *)wlm,(Vector4 *)((int)rw1.vt + iVar11));
      fVar22 = Get2PLength((float *)&camera,(float *)(Vector4 *)wpos);
      if (fVar21 <= fVar22) {
        rw1.fg[iVar17] = 0;
      }
      else {
        uVar5 = 0xff;
        if (800.0 < fVar22) {
          uVar6 = fptoui(((fVar21 - fVar22) * 255.0) / (fVar21 - 800.0));
          uVar5 = (ushort)uVar6;
        }
        rw1.fg[iVar17] = uVar5;
      }
      iVar17 = iVar17 + 1;
      iVar11 = iVar17 * 0x10;
    } while (iVar17 < rw1.vnumw * rw1.vnumh);
  }
  sceVu0RotTransPersN(rw1.vtiw,local_dc,rw1.vt,rw1.vnumw * rw1.vnumh,1);
  iVar11 = rw1.pnumw + 1;
  iVar17 = rw1.vnumw * rw1.vnumh;
  if (setlight == 0) {
    fVar22 = 128.0;
  }
  else {
    fVar22 = 255.0;
  }
  if (0 < rw1.vnumw * rw1.vnumh) {
    iVar16 = 0;
    do {
      iVar18 = rw1.pnumw + 1;
      if (iVar18 == 0) {
        trap(7);
      }
      iVar12 = iVar16;
      if (iVar16 % iVar18 == rw1.pnumw) {
        if (iVar16 / iVar18 == rw1.pnumh) {
          iVar18 = iVar16 + -1;
          iVar19 = iVar16 - iVar11;
        }
        else {
          iVar18 = iVar16 + -1;
          iVar12 = iVar16 + iVar11 + -1;
          iVar19 = iVar16;
        }
      }
      else {
        iVar19 = iVar16 + 1;
        if (iVar16 / iVar18 == rw1.pnumh) {
          iVar19 = (iVar16 - iVar11) + 1;
          iVar18 = iVar16 - iVar11;
        }
        else {
          iVar12 = iVar16 + iVar11;
          iVar18 = iVar16;
        }
      }
      iVar8 = iVar16 + 1;
      if (setpoly == 0) {
        light_rgb((int *)rw1.col[iVar16],LocalLightMatrix,LightColorMatrix,(float *)rw1.vt[iVar18],
                  (float *)rw1.vt[iVar12],(float *)rw1.vt[iVar19],sufcol);
      }
      else {
        c1[0] = (float)iVar16 * (fVar22 / (float)iVar17);
        c1[3] = 0.0;
        c1[1] = c1[0];
        c1[2] = c1[0];
        light_rgb((int *)rw1.col[iVar16],LocalLightMatrix,LightColorMatrix,(float *)rw1.vt[iVar18],
                  (float *)rw1.vt[iVar12],(float *)rw1.vt[iVar19],c1);
      }
      iVar16 = iVar8;
    } while (iVar8 < rw1.vnumw * rw1.vnumh);
  }
  iVar11 = rw1.vnumh;
  iVar17 = rw1.vnumw;
  iVar16 = 0;
  if (0 < rw1.vnumw * rw1.vnumh) {
    iVar18 = 0;
    while( true ) {
      uVar6 = *(uint *)((int)rw1.vtiw + iVar18);
      rw1.clip[iVar16] = 1;
      if ((uVar6 < 0x300) || (0xfd00 < uVar6)) {
        rw1.clip[iVar16] = 0;
      }
      uVar6 = *(uint *)((int)rw1.vtiw + iVar18 + 4);
      if ((uVar6 < 0x300) || (0xfd00 < uVar6)) {
        rw1.clip[iVar16] = 0;
      }
      uVar6 = *(uint *)((int)rw1.vtiw + iVar18 + 8);
      if ((uVar6 == 0) || (clpz2 < uVar6)) {
        rw1.clip[iVar16] = 0;
      }
      iVar16 = iVar16 + 1;
      if (iVar17 * iVar11 <= iVar16) break;
      iVar18 = iVar16 * 0x10;
    }
  }
  iVar17 = 0;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_e4);
  sceVu0MulMatrix((Matrix4x4 *)local_d0,&SgWSMtx,(Matrix4x4 *)wlm);
  if (0 < rw2.vnumw * rw2.vnumh) {
    do {
      iVar12 = local_e8;
      fVar22 = rw2.tsw;
      iVar18 = rw2.pnumw;
      iVar11 = iVar17 / rw2.vnumw;
      iVar16 = iVar17 % rw2.vnumw;
      if (rw2.vnumw == 0) {
        trap(7);
      }
      pVVar13 = (Vector4 *)rw2.vt[iVar17];
      fVar24 = *(float *)((int)canal_size + local_e8);
      rw2.vt[iVar17][1] = 0.0;
      pVVar13->x = (float)iVar16 * fVar22 - fVar24 * 0.5;
      fVar22 = *(float *)((int)canal_size + iVar12 + 4);
      fVar24 = (float)iVar11 * rw2.tsh;
      rw2.vt[iVar17][3] = 1.0;
      rw2.vt[iVar17][2] = fVar24 - fVar22 * 0.5;
      rw2.tx[iVar17] = ((iVar16 << 8) / iVar18) * 0x10 - (t * 2 + -0x2000);
      rw2.ty[iVar17] = (iVar11 << 7) / rw2.pnumh << 4;
      sceVu0ApplyMatrix((Vector4 *)wpos,(Matrix4x4 *)wlm,pVVar13);
      fVar22 = Get2PLength((float *)&camera,(float *)(Vector4 *)wpos);
      if (fVar21 <= fVar22) {
        rw2.fg[iVar17] = 0;
      }
      else {
        uVar5 = 0xff;
        if (800.0 < fVar22) {
          uVar6 = fptoui(((fVar21 - fVar22) * 255.0) / (fVar21 - 800.0));
          uVar5 = (ushort)uVar6;
        }
        rw2.fg[iVar17] = uVar5;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < rw2.vnumw * rw2.vnumh);
  }
  iVar16 = 0;
  sceVu0RotTransPersN(local_d4,local_d0,&rw2,rw2.vnumw * rw2.vnumh,1);
  iVar11 = rw2.vnumh;
  iVar17 = rw2.vnumw;
  if (0 < rw2.vnumw * rw2.vnumh) {
    iVar18 = 0;
    do {
      uVar6 = *(uint *)((int)rw2.vtiw + iVar18);
      rw2.clip[iVar16] = 1;
      if ((uVar6 < 0x300) || (0xfd00 < uVar6)) {
        rw2.clip[iVar16] = 0;
      }
      uVar6 = *(uint *)((int)rw2.vtiw + iVar18 + 4);
      if ((uVar6 < 0x300) || (0xfd00 < uVar6)) {
        rw2.clip[iVar16] = 0;
      }
      uVar6 = *(uint *)((int)rw2.vtiw + iVar18 + 8);
      if ((uVar6 == 0) || (clpz2 < uVar6)) {
        rw2.clip[iVar16] = 0;
      }
      iVar16 = iVar16 + 1;
      iVar18 = iVar16 * 0x10;
    } while (iVar16 < iVar17 * iVar11);
  }
  if (stop_effects == 0) {
    fVar21 = *(float *)((int)texsc + local_e0) + DAT_00355564;
    if (256.0 < fVar21) {
      fVar21 = fVar21 - 256.0;
    }
    *(float *)((int)texsc + local_e0) = fVar21;
  }
  iVar19 = 0;
  Reserve2DPacket(0x1000);
  pQVar10 = pbuf;
  iVar11 = ndpkt;
  pQVar7 = pbuf + ndpkt;
  pQVar7->ui32[0] = 0;
  pQVar7->ui32[1] = 0;
  pQVar7->ui32[2] = 0;
  pQVar7->ui32[3] = 0;
  iVar17 = monochrome_mode;
  pQVar10[ndpkt + 1].ul64[0] = 0x1000000000008008;
  pQVar10[ndpkt + 1].ul64[1] = 0xe;
  pQVar10[ndpkt + 2].ul64[1] = 0x3f;
  pQVar10[ndpkt + 2].ul64[0] = 0;
  pQVar10[ndpkt + 3].ul64[0] = *(ulong *)(&effdat + (iVar17 + 0x36) * 0x20);
  pQVar10[ndpkt + 3].ul64[1] = 6;
  pQVar10[ndpkt + 4].ul64[0] = 0x161;
  pQVar10[ndpkt + 4].ul64[1] = 0x14;
  pQVar10[ndpkt + 5].ul64[0] = 0x100008c;
  pQVar10[ndpkt + 5].ul64[1] = 0x4e;
  pQVar10[ndpkt + 6].ul64[0] = 0x44;
  pQVar10[ndpkt + 6].ul64[1] = 0x42;
  pQVar10[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar10[ndpkt + 7].ul64[1] = 0x47;
  pQVar10[ndpkt + 8].ul64[1] = 8;
  pQVar10[ndpkt + 8].ul64[0] = 0;
  pQVar10[ndpkt + 9].ul64[0] = 0x141313;
  pQVar10[ndpkt + 9].ul64[1] = 0x3d;
  pQVar10[ndpkt + 10].ul64[0] = 0x2400400000008001;
  iVar17 = rw1.pnumh * (rw1.pnumw + 1);
  pQVar10[ndpkt + 10].ul64[1] = 0xf0;
  pQVar10[ndpkt + 0xb].ul64[1] = 0;
  iVar18 = ndpkt + 0xd;
  pQVar10[ndpkt + 0xb].ul64[0] = 0x17c;
  iVar16 = ndpkt + 0xc;
  uVar15 = 0;
  iVar12 = 0;
  ndpkt = iVar18;
  if (0 < iVar17) {
    iVar18 = 0;
    do {
      pQVar10 = pbuf;
      pQVar7 = pbuf + ndpkt;
      pQVar7->ul64[0] =
           (ulong)*(uint *)((int)rw1.tx + iVar18) | (ulong)*(uint *)((int)rw1.ty + iVar18) << 0x10;
      iVar18 = iVar19 + rw1.pnumw;
      ndpkt = ndpkt + 1;
      pQVar7->ul64[1] =
           (ulong)*(byte *)rw1.col[iVar19] | 0x3f80000000000000 |
           (ulong)*(byte *)(rw1.col[iVar19] + 2) << 0x10 |
           (ulong)*(byte *)(rw1.col[iVar19] + 1) << 8 | 0x38000000;
      pQVar10[ndpkt].ul64[0] =
           (long)rw1.vtiw[iVar19][0] | (long)(short)rw1.fg[iVar19] << 0x38 |
           (long)rw1.vtiw[iVar19][2] << 0x20 | (long)rw1.vtiw[iVar19][1] << 0x10;
      pQVar10 = pbuf;
      if (rw1.pnumw + 1 == 0) {
        trap(7);
      }
      if (iVar19 % (rw1.pnumw + 1) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)(short)rw1.clip[iVar19 + -1] + (int)(short)rw1.clip[iVar18] +
                (int)(short)rw1.clip[iVar19];
      }
      if (iVar8 < 3) {
        iVar8 = 0xc13;
      }
      else {
        iVar8 = 0x413;
      }
      iVar1 = iVar12 * 0xc;
      pbuf->ul64[ndpkt * 2 + 1] = (ulong)rw1.tx[iVar18 + 1] | (ulong)rw1.ty[iVar18 + 1] << 0x10;
      pQVar10[ndpkt + 1].ul64[0] =
           (ulong)*(byte *)rw1.col[iVar18 + 1] | 0x3f80000000000000 |
           (ulong)*(byte *)(rw1.col[iVar18 + 1] + 2) << 0x10 |
           (ulong)*(byte *)(rw1.col[iVar18 + 1] + 1) << 8 | 0x38000000;
      pQVar10[ndpkt + 1].ul64[1] =
           (long)rw1.vtiw[iVar18 + 1][0] | (long)(short)rw1.fg[iVar18 + 1] << 0x38 |
           (long)rw1.vtiw[iVar18 + 1][2] << 0x20 | (long)rw1.vtiw[iVar18 + 1][1] << 0x10;
      if (rw1.pnumw + 1 == 0) {
        trap(7);
      }
      iVar14 = iVar12 + 1;
      if (iVar19 % (rw1.pnumw + 1) == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = (int)(short)rw1.clip[iVar18] + (int)(short)rw1.clip[iVar19] +
                 (int)(short)rw1.clip[iVar18 + 1];
      }
      if (iVar18 < 3) {
        iVar18 = 0xc13;
      }
      else {
        iVar18 = 0x413;
      }
      iVar12 = iVar12 + 2;
      uVar15 = uVar15 | (long)iVar8 << (long)iVar1 | (long)iVar18 << (long)(iVar14 * 0xc);
      iVar18 = ndpkt + 2;
      if (3 < iVar12) {
        pQVar10 = pbuf + iVar16;
        pQVar10->ul64[1] = uVar15;
        pQVar10->ul64[0] = (long)(iVar12 * 3) << 0x3c | 0x400400000008001;
        uVar15 = 0;
        iVar12 = 0;
        iVar16 = ndpkt + 2;
        iVar18 = ndpkt + 3;
      }
      ndpkt = iVar18;
      iVar19 = iVar19 + 1;
      iVar18 = iVar19 * 4;
    } while (iVar19 < iVar17);
  }
  if (iVar12 < 1) {
    ndpkt = ndpkt + -1;
  }
  else {
    pQVar10 = pbuf + iVar16;
    pQVar10->ul64[1] = uVar15;
    pQVar10->ul64[0] = (long)(iVar12 * 3) << 0x3c | 0x400400000008001;
  }
  pQVar10 = pbuf;
  if (setpoly == 0) {
    pQVar7 = pbuf + ndpkt;
    pQVar7->ul64[1] = 0xf0;
    pQVar7->ul64[0] = 0x2400400000008001;
    iVar17 = rw2.pnumh * (rw2.pnumw + 1);
    pQVar10[ndpkt + 1].ul64[1] = 0;
    pQVar10[ndpkt + 1].ul64[0] = 0x17c;
    iVar18 = ndpkt + 3;
    iVar16 = ndpkt + 2;
    uVar15 = 0;
    iVar19 = 0;
    iVar12 = 0;
    ndpkt = iVar18;
    if (0 < iVar17) {
      iVar18 = 0;
      do {
        pQVar10 = pbuf;
        pQVar7 = pbuf + ndpkt;
        pQVar7->ul64[0] =
             (ulong)*(uint *)((int)rw2.tx + iVar18) | (ulong)*(uint *)((int)rw2.ty + iVar18) << 0x10
        ;
        pQVar7->ul64[1] = 0x3f80000030808080;
        iVar18 = iVar19 + rw2.pnumw;
        ndpkt = ndpkt + 1;
        pQVar10[ndpkt].ul64[0] =
             (long)rw2.vtiw[iVar19][0] | (long)(short)rw2.fg[iVar19] << 0x38 |
             (long)rw2.vtiw[iVar19][2] << 0x20 | (long)rw2.vtiw[iVar19][1] << 0x10;
        pQVar10 = pbuf;
        if (rw2.pnumw + 1 == 0) {
          trap(7);
        }
        if (iVar19 % (rw2.pnumw + 1) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)*(short *)((int)rw2.ty + iVar19 * 2 + 0x3a) + (int)(short)rw2.clip[iVar18] +
                  (int)(short)rw2.clip[iVar19];
        }
        if (iVar8 < 3) {
          iVar8 = 0xc13;
        }
        else {
          iVar8 = 0x413;
        }
        iVar1 = iVar12 * 0xc;
        pbuf->ul64[ndpkt * 2 + 1] = (ulong)rw2.tx[iVar18 + 1] | (ulong)rw2.ty[iVar18 + 1] << 0x10;
        pQVar10[ndpkt + 1].ul64[0] = 0x3f80000030808080;
        pQVar10[ndpkt + 1].ul64[1] =
             (long)rw2.vtiw[iVar18 + 1][0] | (long)(short)rw2.fg[iVar18 + 1] << 0x38 |
             (long)rw2.vtiw[iVar18 + 1][2] << 0x20 | (long)rw2.vtiw[iVar18 + 1][1] << 0x10;
        if (rw2.pnumw + 1 == 0) {
          trap(7);
        }
        iVar14 = iVar12 + 1;
        if (iVar19 % (rw2.pnumw + 1) == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)(short)rw2.clip[iVar18] + (int)(short)rw2.clip[iVar19] +
                   (int)(short)rw2.clip[iVar18 + 1];
        }
        if (iVar18 < 3) {
          iVar18 = 0xc13;
        }
        else {
          iVar18 = 0x413;
        }
        iVar12 = iVar12 + 2;
        uVar15 = uVar15 | (long)iVar8 << (long)iVar1 | (long)iVar18 << (long)(iVar14 * 0xc);
        iVar18 = ndpkt + 2;
        if (3 < iVar12) {
          pQVar10 = pbuf + iVar16;
          pQVar10->ul64[1] = uVar15;
          pQVar10->ul64[0] = (long)(iVar12 * 3) << 0x3c | 0x400400000008001;
          uVar15 = 0;
          iVar12 = 0;
          iVar16 = ndpkt + 2;
          iVar18 = ndpkt + 3;
        }
        ndpkt = iVar18;
        iVar19 = iVar19 + 1;
        iVar18 = iVar19 * 4;
      } while (iVar19 < iVar17);
    }
    if (iVar12 < 1) {
      ndpkt = ndpkt + -1;
    }
    else {
      pQVar10 = pbuf + iVar16;
      pQVar10->ul64[1] = uVar15;
      pQVar10->ul64[0] = (long)(iVar12 * 3) << 0x3c | 0x400400000008001;
    }
  }
  pbuf[iVar11].ui32[0] = (ndpkt - (iVar11 + -0x70000000)) - 1;
  return '\0';
}

void Call3DRipple(float *bpos) {
	static int m = 0;
	int i;
	int n;
	int vnumw;
	float cntw;
	float cnth;
	float tsw;
	float tsh;
	float x1;
	float x2;
	float x3;
	float z1;
	float z2;
	float z3;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = -1;
  fVar9 = *bpos;
  fVar8 = bpos[2];
  if ((((fVar9 < canal_bpos[0][0] + canal_size[0][0] * 0.5) &&
       (canal_bpos[0][0] - canal_size[0][0] * 0.5 < fVar9)) &&
      (fVar8 < canal_bpos[0][2] + canal_size[0][1] * 0.5)) &&
     (canal_bpos[0][2] - canal_size[0][1] * 0.5 < fVar8)) {
    iVar3 = 0;
  }
  if (((fVar9 < canal_bpos[1][0] + canal_size[1][0] * 0.5) &&
      (canal_bpos[1][0] - canal_size[1][0] * 0.5 < fVar9)) &&
     ((fVar8 < canal_bpos[1][2] + canal_size[1][1] * 0.5 &&
      (canal_bpos[1][2] - canal_size[1][1] * 0.5 < fVar8)))) {
    iVar3 = 1;
  }
  if (((fVar9 < canal_bpos[2][0] + canal_size[2][0] * 0.5) &&
      (canal_bpos[2][0] - canal_size[2][0] * 0.5 < fVar9)) &&
     ((fVar8 < canal_bpos[2][2] + canal_size[2][1] * 0.5 &&
      (canal_bpos[2][2] - canal_size[2][1] * 0.5 < fVar8)))) {
    iVar3 = 2;
  }
  if (iVar3 != -1) {
    iVar2 = m_309 + 1;
    iVar1 = m_309 + 8;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    fVar5 = canal_size[iVar3][1];
    iVar2 = iVar2 + (iVar1 >> 3) * -8;
    fVar10 = canal_size[iVar3][0] / 24.0;
    iVar1 = 0;
    m_309 = iVar2;
    do {
      iVar4 = iVar1 + 1;
      rip[iVar2].rip2m[iVar1].v = ini_yvel;
      rip[iVar2].rip2m[iVar1].t = 0.0;
      rip[iVar2].rip2m[iVar1].oy = 0.0;
      rip[iVar2].rip2m[iVar1].mode = 0;
      fVar7 = (fVar9 - canal_bpos[iVar3][0]) -
              ((float)(iVar1 % 0x19) * fVar10 - canal_size[iVar3][0] * 0.5);
      fVar6 = (fVar8 - canal_bpos[iVar3][2]) -
              ((float)(iVar1 / 0x19) * (fVar5 / 10.0) - canal_size[iVar3][1] * 0.5);
      fVar6 = SgSqrtf(fVar7 * fVar7 + fVar6 * fVar6);
      iVar2 = m_309;
      rip[m_309].rip2m[iVar1].dist = (short)(int)(fVar6 * 4.0);
      iVar1 = iVar4;
    } while (iVar4 < 0x113);
    rip[iVar2].sufno = iVar3 + 1;
    rip[iVar2].time = 0.0;
  }
  return;
}

void ContCanal() {
	static sceVu0FVECTOR bcp = {
		/* [0] = */ 27850.f,
		/* [1] = */ 200.f,
		/* [2] = */ 29300.f,
		/* [3] = */ 1.f
	};
	int n;
	
  int no;
  
  if (*key_now[15] == 1) {
    Call3DRipple((float *)bcp_313);
  }
  if (*key_now[7] != 0) {
    bcp_313._0_4_ = bcp_313._0_4_ + 20.0;
  }
  if (*key_now[6] != 0) {
    bcp_313._0_4_ = bcp_313._0_4_ - 20.0;
  }
  if (*key_now[4] != 0) {
    bcp_313._8_4_ = bcp_313._8_4_ + 20.0;
  }
  if (*key_now[5] != 0) {
    bcp_313._8_4_ = bcp_313._8_4_ - 20.0;
  }
  no = 0;
  if ((((bcp_313._0_4_ < canal_bpos[0][0] + canal_size[0][0] * 0.5) &&
       (canal_bpos[0][0] - canal_size[0][0] * 0.5 < bcp_313._0_4_)) &&
      (bcp_313._8_4_ < canal_bpos[0][2] + canal_size[0][1] * 0.5)) &&
     (canal_bpos[0][2] - canal_size[0][1] * 0.5 < bcp_313._8_4_)) {
    no = 1;
  }
  if (((bcp_313._0_4_ < canal_bpos[1][0] + canal_size[1][0] * 0.5) &&
      (canal_bpos[1][0] - canal_size[1][0] * 0.5 < bcp_313._0_4_)) &&
     ((bcp_313._8_4_ < canal_bpos[1][2] + canal_size[1][1] * 0.5 &&
      (canal_bpos[1][2] - canal_size[1][1] * 0.5 < bcp_313._8_4_)))) {
    no = 1;
  }
  if (((bcp_313._0_4_ < canal_bpos[2][0] + canal_size[2][0] * 0.5) &&
      (canal_bpos[2][0] - canal_size[2][0] * 0.5 < bcp_313._0_4_)) &&
     ((bcp_313._8_4_ < canal_bpos[2][2] + canal_size[2][1] * 0.5 &&
      (canal_bpos[2][2] - canal_size[2][1] * 0.5 < bcp_313._8_4_)))) {
    no = 1;
  }
  DrawPoint((float *)bcp_313,no);
  return;
}

void SetCanal() {
	int i;
	
  int no;
  float (*mpos) [4];
  
  if (plyr_wrk.dop._13_1_ == '\x17') {
    no = 0;
    mpos = canal_bpos;
    do {
      SetCanalSub(no,(float *)mpos);
      no = no + 1;
      mpos = mpos[1];
    } while (no < 3);
  }
  return;
}

void SetGlowOfAFirefly(float *p, float sc, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, u_char alp) {
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ipos;
	sceVu0IVECTOR ivec[4];
	sceVu0FVECTOR vpos;
	sceVu0FVECTOR vtw[4];
	sceVu0FVECTOR wpos[4];
	float f;
	float rot_x;
	float rot_y;
	int i;
	int w;
	int n;
	
  bool bVar1;
  int *piVar2;
  int iVar3;
  int (*paiVar4) [4];
  float (*pafVar5) [4];
  int iVar6;
  float w;
  float wlm [4] [4];
  float slm [4] [4];
  int ipos [4];
  int ivec [4] [4];
  float vpos [4];
  float vtw [4] [4];
  float wpos [4] [4];
  float rot_x;
  float rot_y;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  
                    /* end of inlined section */
  local_c8 = (int)(char)g1 & 0xff;
  local_c4 = (int)(char)b1 & 0xff;
  local_c0 = (int)(char)r2 & 0xff;
  local_bc = (int)(char)g2 & 0xff;
  local_b8 = (int)(char)b2 & 0xff;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  wpos[0]._0_8_ = DAT_0034b9a0;
  wpos[0]._8_8_ = DAT_0034b9a8;
  wpos[1]._0_8_ = DAT_0034b9b0;
  wpos[1]._8_8_ = DAT_0034b9b8;
  wpos[2]._0_8_ = DAT_0034b9c0;
  wpos[2]._8_8_ = DAT_0034b9c8;
  wpos[3]._0_8_ = DAT_0034b9d0;
  wpos[3]._8_8_ = DAT_0034b9d8;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  vpos[2] = p[2];
  vpos[3] = p[3];
  vpos[0] = (float)*(undefined8 *)p;
  vpos[1] = (float)((ulong)*(undefined8 *)p >> 0x20);
                    /* end of inlined section */
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  bVar1 = false;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  iVar6 = 3;
  wlm[0][0] = sc;
  wlm[1][1] = sc;
  wlm[2][2] = sc;
  sceVu0RotMatrixX(rot_x,wlm,wlm);
  sceVu0RotMatrixY(rot_y,wlm,wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)vpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  pafVar5 = wpos;
  paiVar4 = ivec;
  do {
    sceVu0RotTransPers(paiVar4,(Matrix4x4 *)slm,pafVar5,0);
    pafVar5 = pafVar5[1];
    iVar6 = iVar6 + -1;
    piVar2 = *paiVar4;
    if (0x5000 < (*paiVar4)[0] - 0x5800U) {
      bVar1 = true;
    }
    if (0x1c00 < (*paiVar4)[1] - 0x7200U) {
      bVar1 = true;
    }
    paiVar4 = paiVar4[1];
    if (0xffff00 < piVar2[2] - 0xffU) {
      bVar1 = true;
    }
  } while (-1 < iVar6);
  if (!bVar1) {
    iVar3 = (ivec[3][0] - ivec[0][0]) / 2;
    iVar6 = (ivec[3][1] - ivec[0][1]) / 2;
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    w = (float)iVar6 * 0.0625;
    ipos[0] = (ivec[0][0] + ivec[3][0]) / 2;
    ipos[1] = (ivec[0][1] + ivec[3][1]) / 2;
    ipos[2] = (ivec[0][2] + ivec[3][2]) / 2;
    ipos[3] = 0;
    SetEffSQITex(0x18,ipos,1,w * 7.0,w * 7.0,r1,(uchar)local_c8,(uchar)local_c4,
                 (uchar)(((int)(char)alp & 0xffU) >> 2));
    SetEffSQITex(0x18,ipos,1,w,w,(uchar)local_c0,(uchar)local_bc,(uchar)local_b8,
                 (uchar)((int)(char)alp & 0xffU));
  }
  return;
}

void SetFireflySub(FIREFLY *ffp) {
	sceVu0FVECTOR rot;
	sceVu0FVECTOR pos;
	sceVu0FMATRIX mtx;
	int cnt;
	float fw1;
	float fw2;
	float rate;
	float top;
	float under;
	float ph;
	float r;
	float r;
	float r;
	float r;
	float *v1;
	float *v0;
	float r;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined in_vf0 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined4 in_vuR;
  float rot [4];
  float pos [4];
  float mtx [4] [4];
  
  fVar6 = DAT_00355568;
  if (0 < ffp->time) goto LAB_00141e28;
  if (ffp->vel[2] != 0.0) {
                    /* inlined from effect.h */
    auVar8 = _vrnext(in_vuR);
    auVar8 = _vsubbc(auVar8,in_vf0);
    auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
    if (200.0 < ffp->npos[1]) {
                    /* inlined from effect.h */
      auVar7 = _vrnext(in_vuR);
      auVar7 = _vsubbc(auVar7,in_vf0);
      auVar7 = _qmfc2(SUB164(auVar7,0));
      fVar2 = SUB164(auVar7,0);
                    /* end of inlined section */
LAB_00141da4:
      fVar2 = fVar2 - 1.0;
    }
    else {
      if (0.0 <= ffp->npos[1]) {
                    /* inlined from effect.h */
        auVar7 = _vrnext(in_vuR);
        auVar7 = _vsubbc(auVar7,in_vf0);
        auVar7 = _qmfc2(SUB164(auVar7,0));
                    /* end of inlined section */
        fVar2 = SUB164(auVar7,0) + SUB164(auVar7,0);
        goto LAB_00141da4;
      }
                    /* inlined from effect.h */
      auVar7 = _vrnext(in_vuR);
      auVar7 = _vsubbc(auVar7,in_vf0);
      auVar7 = _qmfc2(SUB164(auVar7,0));
      fVar2 = SUB164(auVar7,0);
                    /* end of inlined section */
    }
    fVar3 = ffp->vel[0];
    fVar4 = fVar3 + ((SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0) * 0.5;
    if (fVar4 <= DAT_0035556c) {
      if (DAT_00355570 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar4 = ffp->vel[1];
      fVar5 = DAT_00355574;
    }
    else {
      fVar4 = ffp->vel[1];
      fVar5 = DAT_0035556c;
    }
    fVar2 = fVar4 + fVar2 * 0.5;
    ffp->vel[0] = fVar3;
    if ((fVar2 <= fVar5) && (DAT_00355578 <= fVar2)) {
      fVar4 = fVar2;
    }
    fVar2 = ffp->vel[0];
    ffp->vel[1] = fVar4 * fVar6;
    ffp->vel[0] = fVar2 * fVar6;
  }
  ffp->time = 0x14;
LAB_00141e28:
  GetTrgtRotType2(ffp->bpos,ffp->npos,rot,3);
  for (; rot[0] < DAT_0035557c; rot[0] = rot[0] + DAT_00355580) {
  }
  for (; DAT_00355584 <= rot[0]; rot[0] = rot[0] - DAT_00355588) {
  }
  for (; rot[1] < DAT_0035558c; rot[1] = rot[1] + DAT_00355590) {
  }
  for (; DAT_00355594 <= rot[1]; rot[1] = rot[1] - DAT_00355598) {
  }
  sceVu0UnitMatrix((Matrix4x4 *)mtx);
  sceVu0RotMatrix((Matrix4x4 *)mtx,(Matrix4x4 *)mtx,rot);
  sceVu0TransMatrix((Matrix4x4 *)mtx,(Matrix4x4 *)mtx,(Vector4 *)ffp);
  sceVu0ApplyMatrix((Vector4 *)pos,(Matrix4x4 *)mtx,(Vector4 *)ffp->vel);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  fVar2 = ffp->npos[2];
  fVar3 = ffp->npos[3];
  ffp->bpos[0] = (float)*(undefined8 *)ffp->npos;
  ffp->bpos[1] = (float)((ulong)*(undefined8 *)ffp->npos >> 0x20);
  ffp->bpos[2] = fVar2;
  ffp->bpos[3] = fVar3;
  ffp->npos[0] = (float)pos._0_8_;
  ffp->npos[1] = (float)((ulong)pos._0_8_ >> 0x20);
  ffp->npos[2] = pos[2];
  ffp->npos[3] = pos[3];
                    /* end of inlined section */
  if (ffp->vel[2] == 0.0) {
    iVar1 = ffp->life;
  }
  else {
                    /* inlined from effect.h */
    auVar8 = _vrnext(in_vuR);
    auVar8 = _vsubbc(auVar8,in_vf0);
    auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
    fVar2 = ffp->vel[2] + ((SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0) / 5.0;
    if (fVar2 < 10.0) {
      fVar2 = 8.0;
    }
    else if (12.0 < fVar2) {
      fVar2 = 12.0;
    }
    ffp->vel[2] = fVar2 * fVar6;
    iVar1 = ffp->life;
  }
  if (iVar1 < 0x344) {
    if (iVar1 < 0x41) {
      ffp->alp = iVar1;
    }
    else {
      fVar6 = SgCosf(((((float)(0x344 - iVar1) * 1080.0) / 772.0) * DAT_0035559c) / 180.0);
      iVar1 = ffp->life;
      ffp->alp = (int)((fVar6 + 1.0) * 64.0 * 0.5 + 12.0);
    }
  }
  else {
    ffp->alp = 900 - iVar1;
  }
  ffp->life = iVar1 + -1;
  ffp->time = ffp->time + -1;
  return;
}

void SetFirefly() {
	static int wait = 0;
	static int no = 0;
	static FIREFLY ff[20];
	int i;
	float rate;
	sceVu0FVECTOR fpos;
	sceVu0FVECTOR bpos;
	sceVu0FMATRIX mtx;
	FIREFLY *ffp;
	float *v0;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float *v0;
	float *v1;
	float *v0;
	
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  FIREFLY *ffp;
  Vector4 *tv;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined in_vf0 [16];
  undefined auVar8 [16];
  undefined4 in_vuR;
  float fpos [4];
  float bpos [4];
  float mtx [4] [4];
  
  iVar4 = no_327;
  fVar2 = DAT_003555a0;
  uVar1 = DAT_0034bb00;
  if (plyr_wrk.dop._13_1_ == '\x16') {
    if ((stop_effects == 0) && (wait_326 == 0)) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      iVar3 = no_327 * 0x40;
      tv = (Vector4 *)(&ff_328 + iVar3);
                    /* inlined from ../../graphics/graph3d/libsg.h */
      bpos[2] = (float)DAT_0034bb08;
      bpos[3] = (float)((ulong)DAT_0034bb08 >> 0x20);
      tv->x = (float)DAT_0034bb00;
      *(int *)(&DAT_003849c4 + iVar3) = (int)((ulong)uVar1 >> 0x20);
      *(float *)(&DAT_003849c8 + iVar3) = bpos[2];
      *(float *)(&DAT_003849cc + iVar3) = bpos[3];
      auVar8 = _vrnext(in_vuR);
      auVar8 = _vsubbc(auVar8,in_vf0);
      auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
      tv->x = tv->x + ((SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0) * DAT_003555a4;
                    /* inlined from effect.h */
      auVar8 = _vrnext(in_vuR);
      auVar8 = _vsubbc(auVar8,in_vf0);
      auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
      *(float *)(&DAT_003849c4 + iVar3) =
           *(float *)(&DAT_003849c4 + iVar3) + ((SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0) * 100.0
      ;
                    /* inlined from effect.h */
      auVar8 = _vrnext(in_vuR);
      auVar8 = _vsubbc(auVar8,in_vf0);
      auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
      *(float *)(&DAT_003849c8 + iVar3) =
           *(float *)(&DAT_003849c8 + iVar3) +
           ((SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0) * DAT_003555a8;
                    /* inlined from effect.h */
      auVar8 = _vrnext(in_vuR);
      auVar8 = _vsubbc(auVar8,in_vf0);
      auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
      if (SUB164(auVar8,0) + SUB164(auVar8,0) < 1.0) {
        *(undefined4 *)(&DAT_003849e0 + iVar3) = 0;
        *(undefined4 *)(&DAT_003849e4 + iVar3) = 0;
        *(undefined4 *)(&DAT_003849e8 + iVar3) = 0;
      }
      else {
                    /* inlined from effect.h */
        auVar8 = _vrnext(in_vuR);
        auVar8 = _vsubbc(auVar8,in_vf0);
        auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
        *(float *)(&DAT_003849e0 + iVar3) = (SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0;
                    /* inlined from effect.h */
        auVar8 = _vrnext(in_vuR);
        auVar8 = _vsubbc(auVar8,in_vf0);
        auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
        *(float *)(&DAT_003849e4 + iVar3) = (SUB164(auVar8,0) + SUB164(auVar8,0)) - 1.0;
                    /* inlined from effect.h */
        auVar8 = _vrnext(in_vuR);
        auVar8 = _vsubbc(auVar8,in_vf0);
        auVar8 = _qmfc2(SUB164(auVar8,0));
                    /* end of inlined section */
        *(float *)(&DAT_003849e8 + iVar3) = SUB164(auVar8,0) * 5.0 + 10.0;
      }
      fVar6 = *(float *)(&DAT_003849e0 + iVar3);
      fVar7 = *(float *)(&DAT_003849e4 + iVar3);
      fVar5 = *(float *)(&DAT_003849e8 + iVar3);
      *(undefined4 *)(&DAT_003849ec + iVar3) = 0x3f800000;
      *(undefined4 *)(&DAT_003849f0 + iVar3) = 0x14;
      (&DAT_003849f4)[iVar4 * 0x10] = 900;
      *(float *)(&DAT_003849e0 + iVar3) = fVar6 * fVar2;
      *(float *)(&DAT_003849e4 + iVar3) = fVar7 * fVar2;
      *(float *)(&DAT_003849e8 + iVar3) = fVar5 * fVar2;
      sceVu0UnitMatrix((Matrix4x4 *)mtx);
      sceVu0TransMatrix((Matrix4x4 *)mtx,(Matrix4x4 *)mtx,tv);
      sceVu0ApplyMatrix((Vector4 *)fpos,(Matrix4x4 *)mtx,(Vector4 *)(&DAT_003849e0 + iVar3));
                    /* inlined from ../../graphics/graph3d/libsg.h */
      *(int *)(&DAT_003849d0 + iVar3) = (int)*(undefined8 *)tv;
      *(int *)(&DAT_003849d4 + iVar3) = (int)((ulong)*(undefined8 *)tv >> 0x20);
      *(undefined4 *)(&DAT_003849d8 + iVar3) = *(undefined4 *)(&DAT_003849c8 + iVar3);
      *(undefined4 *)(&DAT_003849dc + iVar3) = *(undefined4 *)(&DAT_003849cc + iVar3);
      tv->x = (float)fpos._0_8_;
      *(int *)(&DAT_003849c4 + iVar3) = (int)((ulong)fpos._0_8_ >> 0x20);
      *(float *)(&DAT_003849c8 + iVar3) = fpos[2];
      *(float *)(&DAT_003849cc + iVar3) = fpos[3];
                    /* end of inlined section */
      no_327 = no_327 + 1;
      wait_326 = 0x2d;
      if (0x13 < no_327) {
        no_327 = 0;
      }
    }
    iVar3 = 0x13;
    ffp = (FIREFLY *)&ff_328;
    iVar4 = stop_effects;
    do {
      if (ffp->life != 0) {
        if (iVar4 == 0) {
          SetFireflySub(ffp);
        }
        SetGlowOfAFirefly(ffp->npos,7.0,0xdc,0xff,0x80,'j',0xa0,'\x10',*(uchar *)&ffp->alp);
        iVar4 = stop_effects;
      }
      iVar3 = iVar3 + -1;
      ffp = ffp + 1;
    } while (-1 < iVar3);
    if (iVar4 == 0) {
      wait_326 = wait_326 + -1;
    }
  }
  return;
}

void SetSky() {
	float fx;
	float fz;
	float l;
	sceVu0IVECTOR ivec;
	sceVu0FVECTOR cpos;
	sceVu0FVECTOR rot;
	float length;
	float height;
	float sc_speed;
	int clip;
	int clpx2;
	int clpy2;
	u_int clpz2;
	float wline;
	u_int u1;
	u_int u2;
	u_int x1;
	u_int x2;
	u_int y2;
	int hori;
	int hline;
	int c;
	sceVu0IVECTOR ivec;
	
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Q_WORDDATA *pQVar6;
  Q_WORDDATA *pQVar7;
  Q_WORDDATA *pQVar8;
  Q_WORDDATA *pQVar9;
  int iVar10;
  Q_WORDDATA *pQVar11;
  float fVar12;
  int local_e0;
  int local_dc;
  uint local_d8;
  float cpos [4];
  float rot [4];
  int ivec [4];
  
  fVar2 = DAT_003555ac;
  if (((((plyr_wrk.dop._13_1_ == '\x10') || (plyr_wrk.dop._13_1_ == '\x16')) ||
       (plyr_wrk.dop._13_1_ == '\x15')) ||
      ((plyr_wrk.dop._13_1_ == '\x18' || (plyr_wrk.dop._13_1_ == '&')))) ||
     (plyr_wrk.dop._13_1_ == '\x19')) {
    fVar12 = SgSqrtf((camera.i.x - camera.p.x) * (camera.i.x - camera.p.x) +
                     (camera.i.z - camera.p.z) * (camera.i.z - camera.p.z));
    cpos[3] = 1.0;
    cpos[1] = 400.0;
    cpos[2] = camera.p.z + ((camera.i.z - camera.p.z) * fVar2) / fVar12;
    cpos[0] = camera.p.x + ((camera.i.x - camera.p.x) * fVar2) / fVar12;
    sceVu0RotTransPers(&local_e0,0x303860,cpos,0);
    bVar1 = false;
    if ((local_e0 < 0x4000) || (0xc000 < local_e0)) {
      bVar1 = true;
    }
    if ((local_dc < 0x7800) || (0x8f00 < local_dc)) {
      bVar1 = true;
    }
    if (local_d8 < 0xf) {
      bVar1 = true;
    }
    else if (0xffffff < local_d8) {
      bVar1 = true;
    }
    if (!bVar1) {
      GetTrgtRot((float *)&camera,&camera.i.x,rot,2);
      iVar5 = local_dc + 0xf;
      if (-1 < local_dc) {
        iVar5 = local_dc;
      }
      iVar5 = (iVar5 >> 4) + -0x790;
      if (iVar5 < 0x80) {
        iVar5 = 0x80;
      }
      else if (0x160 < iVar5) {
        iVar5 = 0x160;
      }
      for (ivec[0] = (int)((rot[1] * 256.0 * 6.0) / DAT_003555b0); (float)ivec[0] < 0.0;
          ivec[0] = (int)((float)ivec[0] + 256.0)) {
      }
      for (; 256.0 <= (float)ivec[0]; ivec[0] = (int)((float)ivec[0] - 256.0)) {
      }
      ivec[1] = (int)((float)ivec[0] + DAT_003555b4);
      _ftoi4(ivec,(float *)ivec);
      iVar4 = ivec[1];
      iVar3 = ivec[0];
      Reserve2DPacket(0x1000);
      pQVar6 = pbuf;
      pQVar11 = pbuf + ndpkt;
      pQVar11->ui32[0] = 0;
      pQVar11->ui32[1] = 0;
      pQVar11->ui32[2] = 0;
      pQVar11->ui32[3] = 0;
      pQVar11->ui32[0] = 0x70000000;
      iVar10 = monochrome_mode;
      pQVar6[ndpkt + 1].ul64[1] = 0xe;
      pQVar6[ndpkt + 1].ul64[0] = 0x1000000000008007;
      pQVar6[ndpkt + 2].ul64[1] = 0x3f;
      pQVar6[ndpkt + 2].ul64[0] = 0;
      pQVar6[ndpkt + 3].ul64[0] = *(ulong *)(&effdat + (iVar10 + 0x32) * 0x20);
      pQVar6[ndpkt + 3].ul64[1] = 6;
      pQVar6[ndpkt + 4].ul64[0] = 0x161;
      pQVar6[ndpkt + 4].ul64[1] = 0x14;
      pQVar6[ndpkt + 5].ul64[0] = 0x100008c;
      pQVar6[ndpkt + 5].ul64[1] = 0x4e;
      pQVar6[ndpkt + 6].ul64[0] = 0x44;
      pQVar6[ndpkt + 6].ul64[1] = 0x42;
      pQVar6[ndpkt + 7].ul64[0] = 0x5000d;
      pQVar6[ndpkt + 7].ul64[1] = 0x47;
      pQVar6[ndpkt + 8].ul64[0] = 4;
      pQVar6[ndpkt + 8].ul64[1] = 8;
      pQVar6[ndpkt + 9].ul64[1] = 0x43431;
      pQVar6[ndpkt + 9].ul64[0] = 0x50ab400000008001;
      pQVar7 = pQVar6 + ndpkt + 10;
      pQVar7->ui32[2] = 0x40;
      pQVar7->ui32[3] = 0x80;
      pQVar7->ui32[0] = 0x40;
      pQVar8 = pQVar6 + ndpkt + 0xb;
      pQVar7->ui32[1] = 0x40;
      pQVar8->iv[0] = iVar3;
      pQVar9 = pQVar6 + ndpkt + 0xc;
      pQVar8->ui32[3] = 0;
      pQVar8->ui32[1] = 0;
      pQVar8->ui32[2] = 0;
      pQVar7 = pQVar6 + ndpkt + 0xd;
      pQVar9->ui32[3] = 0x8000;
      pQVar9->fl32[0] = 3.87431e-41;
      iVar10 = ndpkt + -0x70000000;
      pQVar9->iv[1] = local_dc;
      pQVar9->ui32[2] = 0;
      pQVar6 = pQVar6 + ndpkt + 0xe;
      ndpkt = ndpkt + 0xf;
      pQVar7->iv[0] = iVar4;
      pQVar7->ui32[1] = iVar5 * 0x10;
      pQVar7->ui32[3] = 0;
      pQVar7->ui32[2] = 0;
      pQVar6->fl32[0] = 5.30924e-41;
      pQVar6->ui32[1] = local_dc + iVar5 * -0x10;
      pQVar6->ui32[3] = 0;
      pQVar6->ui32[2] = 0;
      pQVar11->ui32[0] = (ndpkt - iVar10) - 1;
    }
  }
  return;
}

void SetPond() {
	static float wave = 0.f;
	static float texsc = 0.f;
	int i;
	int k;
	int t;
	int m;
	int n;
	int tagnum;
	int cnt;
	int pnumw;
	int vnumw;
	u_int clpz2;
	float f;
	float l;
	float tsh;
	float fcana2;
	float fcana3;
	float fcana4;
	float far;
	float near;
	u_long reg;
	TEX_WORK txw[1089];
	sceVu0FVECTOR bpos;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0FVECTOR wfv;
	sceVu0FVECTOR wpos;
	
  long lVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  Q_WORDDATA *pQVar9;
  Q_WORDDATA *pQVar10;
  ulong uVar11;
  int iVar12;
  TEX_WORK *pTVar13;
  int iVar14;
  TEX_WORK *pTVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  TEX_WORK txw [1089];
  float bpos [4];
  float wlm [4] [4];
  float slm [4] [4];
  float wfv [4];
  float wpos [4];
  int t;
  
  pTVar15 = txw;
  pTVar13 = txw;
  fVar21 = 90.0;
  bpos._0_8_ = DAT_0034bb10;
  bpos._8_8_ = DAT_0034bb18;
  if ((plyr_wrk.dop._13_1_ == '\x16') &&
     (fVar18 = DAT_003555b8, iVar6 = EnemyUseJudge(0), fVar3 = DAT_003555c0, iVar6 == 0)) {
    fVar20 = DAT_003555bc;
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)bpos);
    iVar6 = 0;
    sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
    uVar7 = fptoui(texsc_336 * 16.0);
    do {
      fVar17 = (float)(iVar6 % 0x21);
      fVar19 = (float)(iVar6 / 0x21);
      wfv[0] = fVar17 * fVar20 - fVar3;
      fVar17 = SgSinf(((fVar17 * fVar21 + fVar19 * fVar21 + wave_335) * DAT_003555c4) / 180.0);
      wfv[1] = fVar17 * 16.0;
      wfv[2] = fVar19 * fVar20 - fVar3;
      wfv[3] = 1.0;
      *(uint *)((int)pTVar15 + 0x10) = ((iVar6 % 0x21 << 9) / 0x20) * 0x10 + uVar7;
      *(int *)((int)pTVar15 + 0x14) = (iVar6 / 0x21 << 8) / 0x20 << 4;
      sceVu0ApplyMatrix((Vector4 *)wpos,(Matrix4x4 *)wlm,(Vector4 *)wfv);
      fVar17 = Get2PLength((float *)&camera,(float *)(Vector4 *)wpos);
      uVar8 = 0;
      if ((fVar17 < fVar18) && (uVar8 = 0xff, 2000.0 < fVar17)) {
        uVar8 = fptoui(((fVar18 - fVar17) * 255.0) / (fVar18 - 2000.0));
      }
      *(uint *)((int)pTVar15 + 0x18) = uVar8;
      *(short *)((int)pTVar15 + 0x1c) = (short)((0x80 - (uVar8 >> 1) & 0xffff) >> 1) + 0x40;
      sceVu0RotTransPers(pTVar15,slm,wfv,1);
      *(undefined2 *)((int)pTVar15 + 0x1e) = 1;
      if ((*(uint *)pTVar15 < 0x300) || (0xfd00 < *(uint *)pTVar15)) {
        *(undefined2 *)((int)pTVar15 + 0x1e) = 0;
        uVar8 = *(uint *)((int)pTVar15 + 4);
      }
      else {
        uVar8 = *(uint *)((int)pTVar15 + 4);
      }
      if (uVar8 < 0x300) {
        *(undefined2 *)((int)pTVar15 + 0x1e) = 0;
LAB_00142c00:
        uVar8 = *(uint *)((int)pTVar15 + 8);
      }
      else {
        if (0xfd00 < uVar8) {
          *(undefined2 *)((int)pTVar15 + 0x1e) = 0;
          goto LAB_00142c00;
        }
        uVar8 = *(uint *)((int)pTVar15 + 8);
      }
      if ((uVar8 == 0) || (0xfffffff < uVar8)) {
        *(undefined2 *)((int)pTVar15 + 0x1e) = 0;
      }
      iVar6 = iVar6 + 1;
      pTVar15 = (TEX_WORK *)((int)pTVar15 + 0x20);
    } while (iVar6 < 0x441);
    if (stop_effects == 0) {
      wave_335 = wave_335 + 1.0;
      if (360.0 <= wave_335) {
        wave_335 = wave_335 - 360.0;
      }
      if (512.0 < texsc_336 + DAT_003555c8) {
        texsc_336 = (texsc_336 + DAT_003555c8) - 512.0;
      }
      else {
        texsc_336 = texsc_336 + DAT_003555cc;
      }
    }
    iVar16 = 0;
    Reserve2DPacket(0x1000);
    pQVar10 = pbuf;
    iVar4 = ndpkt;
    pQVar9 = pbuf + ndpkt;
    pQVar9->ui32[0] = 0;
    pQVar9->ui32[1] = 0;
    pQVar9->ui32[2] = 0;
    pQVar9->ui32[3] = 0;
    iVar6 = monochrome_mode;
    pQVar10[ndpkt + 1].ul64[1] = 0xe;
    pQVar10[ndpkt + 1].ul64[0] = 0x1000000000008008;
    pQVar10[ndpkt + 2].ul64[1] = 0x3f;
    pQVar10[ndpkt + 2].ul64[0] = 0;
    uVar11 = *(ulong *)(&effdat + (iVar6 + 0x36) * 0x20);
    pQVar10[ndpkt + 3].ul64[1] = 6;
    pQVar10[ndpkt + 3].ul64[0] = uVar11;
    pQVar10[ndpkt + 4].ul64[0] = 0x161;
    pQVar10[ndpkt + 4].ul64[1] = 0x14;
    pQVar10[ndpkt + 5].ul64[1] = 0x4e;
    pQVar10[ndpkt + 5].ul64[0] = 0x100008c;
    pQVar10[ndpkt + 6].ul64[0] = 0x44;
    pQVar10[ndpkt + 6].ul64[1] = 0x42;
    pQVar10[ndpkt + 7].ul64[1] = 0x47;
    pQVar10[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar10[ndpkt + 8].ul64[1] = 8;
    pQVar10[ndpkt + 8].ul64[0] = 0;
    pQVar10[ndpkt + 9].ul64[0] = 0xa0a0a;
    pQVar10[ndpkt + 9].ul64[1] = 0x3d;
    pQVar10[ndpkt + 10].ul64[0] = 0x2400400000008001;
    pQVar10[ndpkt + 10].ul64[1] = 0xf0;
    pQVar10[ndpkt + 0xb].ul64[1] = 0;
    iVar12 = ndpkt + 0xd;
    pQVar10[ndpkt + 0xb].ul64[0] = 0x17c;
    iVar6 = ndpkt + 0xc;
    uVar11 = 0;
    iVar14 = 0;
    do {
      pQVar10[iVar12].ul64[0] =
           (ulong)*(uint *)((int)pTVar13 + 0x10) | (ulong)*(uint *)((int)pTVar13 + 0x14) << 0x10;
      pQVar10[iVar12].ul64[1] = (ulong)*(ushort *)((int)pTVar13 + 0x1c) << 0x18 | 0x3f80000000808080
      ;
      pQVar10[iVar12 + 1].ul64[0] =
           (long)pTVar13->iv[0] | (ulong)*(uint *)((int)pTVar13 + 0x18) << 0x38 |
           (long)*(int *)((int)pTVar13 + 8) << 0x20 | (long)*(int *)((int)pTVar13 + 4) << 0x10;
      if (iVar16 % 0x21 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)*(ushort *)((int)pTVar13 + -2) + (uint)*(ushort *)((int)pTVar13 + 0x41e) +
                (uint)*(ushort *)((int)pTVar13 + 0x1e);
      }
      lVar1 = 0xc13;
      if (2 < uVar7) {
        lVar1 = 0x413;
      }
      pQVar10->ul64[(iVar12 + 1) * 2 + 1] =
           (ulong)*(uint *)((int)pTVar13 + 0x430) | (ulong)*(uint *)((int)pTVar13 + 0x434) << 0x10;
      pQVar10[iVar12 + 2].ul64[0] =
           (ulong)*(ushort *)((int)pTVar13 + 0x43c) << 0x18 | 0x3f80000000808080;
      pQVar10[iVar12 + 2].ul64[1] =
           (long)*(int *)((int)pTVar13 + 0x420) | (ulong)*(uint *)((int)pTVar13 + 0x438) << 0x38 |
           (long)*(int *)((int)pTVar13 + 0x428) << 0x20 |
           (long)*(int *)((int)pTVar13 + 0x424) << 0x10;
      if (iVar16 % 0x21 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)*(ushort *)((int)pTVar13 + 0x41e) + (uint)*(ushort *)((int)pTVar13 + 0x1e) +
                (uint)*(ushort *)((int)pTVar13 + 0x43e);
      }
      lVar2 = 0xc13;
      if (2 < uVar7) {
        lVar2 = 0x413;
      }
      uVar11 = uVar11 | lVar1 << (long)(iVar14 * 0xc) | lVar2 << (long)((iVar14 + 1) * 0xc);
      iVar14 = iVar14 + 2;
      iVar16 = iVar16 + 1;
      iVar5 = iVar12 + 3;
      if (3 < iVar14) {
        pQVar10[iVar6].ul64[1] = uVar11;
        pQVar10[iVar6].ul64[0] = (long)(iVar14 * 3) << 0x3c | 0x400400000008001;
        uVar11 = 0;
        iVar14 = 0;
        iVar5 = iVar12 + 4;
        iVar6 = iVar12 + 3;
      }
      iVar12 = iVar5;
      pTVar13 = (TEX_WORK *)((int)pTVar13 + 0x20);
    } while (iVar16 < 0x420);
    if (iVar14 < 1) {
      ndpkt = iVar12 + -1;
    }
    else {
      pQVar10 = pbuf + iVar6;
      ndpkt = iVar12;
      pQVar10->ul64[1] = uVar11;
      pQVar10->ul64[0] = (long)(iVar14 * 3) << 0x3c | 0x400400000008001;
    }
    pbuf[iVar4].ui32[0] = (ndpkt - (iVar4 + -0x70000000)) - 1;
  }
  return;
}

void SetHaze_Pond_SW(int sw) {
  init_haze_pond = sw;
  return;
}

void SetHaze_Pond() {
	int i;
	int c;
	float near;
	float dist;
	float wline;
	float ang;
	float maxalp;
	float lft;
	float rht;
	float fx;
	float fz;
	float l;
	float ll;
	sceVu0IVECTOR ivec;
	sceVu0FVECTOR cpos;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR rw1;
	sceVu0FVECTOR rw2;
	HAZE_WORK hw[10];
	static HAZE_NUMS hn[10];
	float r;
	float r;
	float r;
	float r;
	float r;
	float r;
	float *v0;
	float *v0;
	float *v0;
	
  bool bVar1;
  float fVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Q_WORDDATA *pQVar7;
  undefined *puVar8;
  float *pfVar9;
  undefined8 in_v1;
  float *pfVar10;
  Q_WORDDATA *pQVar11;
  int iVar12;
  Q_WORDDATA *pQVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_f25;
  float unaff_f24;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined in_vf0 [16];
  undefined auVar22 [16];
  undefined4 in_vuR;
  int ivec [4];
  float cpos [4];
  float rot [4];
  float rw1 [4];
  float rw2 [4];
  HAZE_WORK hw [10];
  int i;
  int c;
  float *local_140;
  undefined4 local_13c [15];
  
  fVar2 = DAT_003555dc;
  fVar16 = DAT_003555d8;
  fVar15 = DAT_003555d4;
  fVar19 = DAT_003555d0;
  if ((((plyr_wrk.dop._13_1_ == '\x16') || (plyr_wrk.dop._13_1_ == '\x10')) &&
      (realtime_scene_flg == 0)) && (init_haze_pond != 0)) {
    fVar18 = 500.0;
    fVar20 = 800.0;
    fVar17 = DAT_003555e0;
    fVar21 = DAT_003555e4;
    if (init_pond != 0) {
      puVar8 = &hn_343;
      i = 0;
      do {
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
        *(float *)(puVar8 + 0x20) = SUB164(auVar22,0) * 128.0;
                    /* inlined from effect.h */
        auVar22 = _vrnext(in_vuR);
        auVar22 = _vsubbc(auVar22,in_vf0);
        auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        iVar4 = 9 - i;
        i = i + 1;
        *(float *)(puVar8 + 0x24) = SUB164(auVar22,0) * fVar16 - fVar2;
        *(float *)(puVar8 + 0x28) = (float)iVar4 * 500.0 + 800.0;
        puVar8 = puVar8 + 0x30;
        fVar17 = fVar19;
        fVar21 = fVar15;
      } while (i < 10);
    }
    local_140 = rot;
    if (DAT_00385098 < 800.0) {
      iVar4 = 0x385040;
      i = 9;
      do {
        i = i + -1;
        *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar4 + 0x24);
        *(float *)(iVar4 + 0x58) = *(float *)(iVar4 + 0x58) + 500.0;
        iVar4 = iVar4 + -0x30;
      } while (0 < i);
      DAT_00384ee8 = DAT_00384ee8 + 500.0;
                    /* inlined from effect.h */
      auVar22 = _vrnext(in_vuR);
      auVar22 = _vsubbc(auVar22,in_vf0);
      auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
      DAT_00384ee0 = SUB164(auVar22,0) * 128.0;
                    /* inlined from effect.h */
      auVar22 = _vrnext(in_vuR);
      auVar22 = _vsubbc(auVar22,in_vf0);
      auVar22 = _qmfc2(SUB164(auVar22,0));
      in_v1 = SUB168(auVar22 >> 0x40,0);
                    /* end of inlined section */
      DAT_00384ee4 = SUB164(auVar22,0) * DAT_003555e8 - DAT_003555ec;
    }
    auVar22 = CONCAT88(in_v1,0x384ef0);
    if (fVar17 <= DAT_00385098) {
      i = 0;
      do {
        iVar4 = SUB164(auVar22,0);
        i = i + 1;
        *(undefined4 *)(iVar4 + -0x10) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar4 + -0xc) = *(undefined4 *)(iVar4 + 0x24);
        *(float *)(iVar4 + -8) = *(float *)(iVar4 + -8) - 500.0;
        auVar22 = CONCAT88(SUB168(auVar22 >> 0x40,0),(long)(iVar4 + 0x30));
      } while (i < 9);
      DAT_00385098 = DAT_00385098 - 500.0;
                    /* inlined from effect.h */
      auVar22 = _vrnext(in_vuR);
      auVar22 = _vsubbc(auVar22,in_vf0);
      auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
      DAT_00385090 = SUB164(auVar22,0) * 128.0;
                    /* inlined from effect.h */
      auVar22 = _vrnext(in_vuR);
      auVar22 = _vsubbc(auVar22,in_vf0);
      auVar22 = _qmfc2(SUB164(auVar22,0));
                    /* end of inlined section */
      DAT_00385094 = SUB164(auVar22,0) * DAT_003555f0 - DAT_003555f4;
    }
    i = 0;
    fVar19 = 330.0;
    do {
      fVar15 = SgSqrtf((camera.i.x - camera.p.x) * (camera.i.x - camera.p.x) +
                       (camera.i.z - camera.p.z) * (camera.i.z - camera.p.z));
      iVar4 = i * 0x30;
      cpos[3] = 1.0;
      cpos[0] = camera.p.x + ((camera.i.x - camera.p.x) * (&DAT_00384ee8)[i * 0xc]) / fVar15;
      cpos[2] = camera.p.z + ((camera.i.z - camera.p.z) * (&DAT_00384ee8)[i * 0xc]) / fVar15;
      cpos[1] = fVar19;
      sceVu0RotTransPers(ivec,0x303860,cpos,0);
      if (init_pond != 0) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
        *(float *)(&hn_343 + iVar4) = cpos[0];
        *(float *)(&DAT_00384ec4 + iVar4) = cpos[1];
        *(float *)(&DAT_00384ec8 + iVar4) = cpos[2];
        *(float *)(&DAT_00384ecc + iVar4) = cpos[3];
        fVar2 = camera.p.w;
        fVar16 = camera.p.z;
        fVar15 = camera.p.y;
        *(float *)(&DAT_00384ed0 + iVar4) = camera.p.x;
        *(float *)(&DAT_00384ed4 + iVar4) = fVar15;
        *(float *)(&DAT_00384ed8 + iVar4) = fVar16;
        *(float *)(&DAT_00384edc + iVar4) = fVar2;
      }
                    /* end of inlined section */
      GetTrgtRot((float *)&camera,&camera.i.x,local_140,2);
      iVar5 = CamChangeCheck();
      if (iVar5 == 0) {
        GetTrgtRot((float *)(&DAT_00384ed0 + iVar4),(float *)(&hn_343 + iVar4),rw1,2);
        GetTrgtRot((float *)(&DAT_00384ed0 + iVar4),(float *)&camera,rw2,2);
        for (fVar15 = rw2[1] - rw1[1]; fVar15 < DAT_003555f8; fVar15 = fVar15 + DAT_003555fc) {
        }
        for (; DAT_00355600 <= fVar15; fVar15 = fVar15 - DAT_00355604) {
        }
        fVar16 = SgSqrtf((camera.p.x - *(float *)(&DAT_00384ed0 + i * 0x30)) *
                         (camera.p.x - *(float *)(&DAT_00384ed0 + i * 0x30)) +
                         (camera.p.z - *(float *)(&DAT_00384ed8 + i * 0x30)) *
                         (camera.p.z - *(float *)(&DAT_00384ed8 + i * 0x30)));
        fVar15 = SgCosf(fVar15);
        (&DAT_00384ee8)[i * 0xc] = (&DAT_00384ee8)[i * 0xc] - fVar16 * fVar15;
      }
                    /* inlined from ../../graphics/graph3d/libsg.h */
      iVar5 = i + 1;
      iVar4 = i * 0x30;
      *(float *)(&hn_343 + iVar4) = cpos[0];
      *(float *)(&DAT_00384ec4 + iVar4) = cpos[1];
      *(float *)(&DAT_00384ec8 + iVar4) = cpos[2];
      *(float *)(&DAT_00384ecc + iVar4) = cpos[3];
      fVar2 = camera.p.w;
      fVar16 = camera.p.z;
      fVar15 = camera.p.y;
      pfVar9 = (float *)((iVar4 >> 0x1f | 0x384ed0U) + i * 0x30);
      *pfVar9 = camera.p.x;
      pfVar9[1] = fVar15;
      pfVar9[2] = fVar16;
      pfVar9[3] = fVar2;
                    /* end of inlined section */
      fVar15 = SgSqrtf((camera.i.x - camera.p.x) * (camera.i.x - camera.p.x) +
                       (camera.i.z - camera.p.z) * (camera.i.z - camera.p.z));
      cpos[3] = 1.0;
      cpos[2] = camera.p.z + ((camera.i.z - camera.p.z) * (&DAT_00384ee8)[i * 0xc]) / fVar15;
      cpos[0] = camera.p.x + ((camera.i.x - camera.p.x) * (&DAT_00384ee8)[i * 0xc]) / fVar15;
      cpos[1] = fVar19;
      sceVu0RotTransPers(ivec,0x303860,cpos,0);
      GetTrgtRot((float *)&camera,&camera.i.x,local_140,2);
      fVar15 = (rot[1] * 128.0) / DAT_00355608 + (&DAT_00384ee0)[i * 0xc];
      if (stop_effects == 0) {
        (&DAT_00384ee0)[i * 0xc] = (&DAT_00384ee0)[i * 0xc] + (&DAT_00384ee4)[i * 0xc];
      }
      for (; fVar15 < 0.0; fVar15 = fVar15 + 128.0) {
      }
      for (; 128.0 <= fVar15; fVar15 = fVar15 - 128.0) {
      }
      hw[i].x1 = 0x6c00;
      hw[i].x2 = 0x9400;
      hw[i].y1 = ivec[1];
      hw[i].y2 = ivec[1] - 0x300;
      hw[i].zz = ivec[2];
      uVar6 = fptoui(fVar15 * 16.0);
      hw[i].u1 = uVar6;
      uVar6 = fptoui((fVar15 + 128.0) * 16.0);
      hw[i].u2 = uVar6;
      hw[i].v1 = 0;
      hw[i].v2 = 0x400;
      i = iVar5;
    } while (iVar5 < 10);
    pfVar10 = (float *)&DAT_00384f18;
    pfVar9 = &hw[1].alp;
    do {
      *pfVar9 = ((*pfVar10 - fVar20) * 128.0) / (fVar18 * 9.0);
      pfVar9 = pfVar9 + 0xc;
      pfVar10 = pfVar10 + 0xc;
    } while ((int)pfVar9 < (int)local_13c);
    hw[0].alp = ((fVar21 - DAT_00384ee8) * 128.0) / fVar18;
    GetTrgtRot((float *)&camera,&camera.i.x,local_140,2);
    if ((rot[1] < DAT_0035560c) && (DAT_00355610 < rot[1])) {
      in_f25 = 1.0;
      unaff_f24 = in_f25;
    }
    if ((DAT_00355614 <= rot[1]) || (rot[1] <= DAT_00355618)) {
      unaff_f24 = 0.0;
      in_f25 = 0.0;
    }
    if ((DAT_0035561c <= rot[1]) && (rot[1] < DAT_00355620)) {
      in_f25 = 1.0;
      unaff_f24 = (DAT_00355620 - rot[1]) / DAT_00355624;
    }
    if ((DAT_00355628 <= rot[1]) && (rot[1] < DAT_0035562c)) {
      unaff_f24 = 0.0;
      in_f25 = (DAT_0035562c - rot[1]) / DAT_00355630;
    }
    fVar19 = DAT_0035563c;
    if ((rot[1] <= DAT_00355634) && (fVar19 = DAT_00355638, DAT_00355638 < rot[1])) {
      unaff_f24 = 1.0;
      in_f25 = (DAT_00355638 - rot[1]) / DAT_00355634;
      fVar19 = DAT_0035563c;
    }
    if ((rot[1] <= fVar19) && (DAT_00355640 < rot[1])) {
      in_f25 = 0.0;
      unaff_f24 = (DAT_00355640 - rot[1]) / DAT_00355644;
    }
    if (DAT_00355648 < camera.p.z) {
      fVar19 = (DAT_0035564c - camera.p.z) / DAT_00355650;
    }
    else {
      fVar19 = 1.0;
    }
    i = 0;
    fVar15 = 1.0 - (1.0 - in_f25) * fVar19;
    fVar19 = 1.0 - (1.0 - unaff_f24) * fVar19;
    Reserve2DPacket(0x1000);
    pQVar3 = pbuf;
    iVar5 = ndpkt;
    pQVar7 = pbuf + ndpkt;
    pQVar7->ui32[0] = 0;
    pQVar7->ui32[1] = 0;
    pQVar7->ui32[2] = 0;
    pQVar7->ui32[3] = 0;
    pQVar7->ui32[0] = 0x70000000;
    iVar4 = monochrome_mode;
    pQVar3[ndpkt + 1].ul64[0] = 0x1000000000008007;
    pQVar3[ndpkt + 1].ul64[1] = 0xe;
    pQVar3[ndpkt + 2].ul64[0] = 0;
    pQVar3[ndpkt + 2].ul64[1] = 0x3f;
    pQVar3[ndpkt + 3].ul64[0] = *(ulong *)(&effdat + (iVar4 + 10) * 0x20);
    pQVar3[ndpkt + 3].ul64[1] = 6;
    pQVar3[ndpkt + 4].ul64[0] = 0x161;
    pQVar3[ndpkt + 4].ul64[1] = 0x14;
    pQVar3[ndpkt + 5].ul64[0] = 0x10100008c;
    pQVar3[ndpkt + 5].ul64[1] = 0x4e;
    pQVar3[ndpkt + 6].ul64[0] = 0x44;
    pQVar3[ndpkt + 6].ul64[1] = 0x42;
    pQVar3[ndpkt + 7].ul64[0] = 0x5000d;
    pQVar3[ndpkt + 7].ul64[1] = 0x47;
    pQVar3[ndpkt + 8].ul64[1] = 8;
    pQVar3[ndpkt + 8].ul64[0] = 0;
    pQVar3[ndpkt + 9].ul64[0] = 0x30ae400000008028;
    pQVar3[ndpkt + 9].ul64[1] = 0x431;
    ndpkt = ndpkt + 10;
    do {
      iVar4 = ndpkt;
      iVar12 = i + 1;
      pQVar7 = pQVar3 + ndpkt;
      pQVar7->ui32[0] = 0x44;
      pQVar7->ui32[1] = 0x44;
      pQVar7->ui32[2] = 0x44;
      pfVar9 = &hw[i].alp;
      puVar14 = &hw[i].zz;
      uVar6 = fptoui(*pfVar9 * fVar15);
      pQVar7->ui32[3] = uVar6;
      pQVar7 = pQVar3 + iVar4 + 1;
      pQVar7->ui32[0] = hw[i].u1;
      pQVar11 = pQVar3 + iVar4 + 2;
      ndpkt = iVar4 + 3;
      uVar6 = hw[i].v1;
      pQVar7->ui32[3] = 0;
      pQVar13 = pQVar3 + ndpkt;
      pQVar7->ui32[1] = uVar6;
      pQVar7->ui32[2] = 0;
      pQVar11->ui32[0] = hw[i].x1;
      pQVar11->ui32[1] = hw[i].y1;
      uVar6 = *puVar14;
      pQVar11->ui32[3] = 0x8000;
      pQVar11->ui32[2] = uVar6;
      pQVar13->ui32[0] = 0x44;
      pQVar13->ui32[1] = 0x44;
      pQVar13->ui32[2] = 0x44;
      uVar6 = fptoui(*pfVar9 * fVar15);
      pQVar13->ui32[3] = uVar6;
      pQVar7 = pQVar3 + iVar4 + 4;
      pQVar7->ui32[0] = hw[i].u1;
      pQVar11 = pQVar3 + iVar4 + 5;
      ndpkt = iVar4 + 6;
      uVar6 = hw[i].v2;
      pQVar13 = pQVar3 + ndpkt;
      pQVar7->ui32[3] = 0;
      pQVar7->ui32[1] = uVar6;
      pQVar7->ui32[2] = 0;
      pQVar11->ui32[0] = hw[i].x1;
      pQVar11->ui32[1] = hw[i].y2;
      uVar6 = *puVar14;
      pQVar11->ui32[3] = 0x8000;
      pQVar11->ui32[2] = uVar6;
      pQVar13->ui32[0] = 0x44;
      pQVar13->ui32[1] = 0x44;
      pQVar13->ui32[2] = 0x44;
      uVar6 = fptoui(*pfVar9 * fVar19);
      pQVar13->ui32[3] = uVar6;
      ndpkt = iVar4 + 9;
      pQVar7 = pQVar3 + iVar4 + 7;
      pQVar13 = pQVar3 + ndpkt;
      pQVar7->ui32[0] = hw[i].u2;
      pQVar11 = pQVar3 + iVar4 + 8;
      uVar6 = hw[i].v1;
      pQVar7->ui32[3] = 0;
      pQVar7->ui32[1] = uVar6;
      pQVar7->ui32[2] = 0;
      pQVar11->ui32[0] = hw[i].x2;
      pQVar11->ui32[1] = hw[i].y1;
      uVar6 = *puVar14;
      pQVar11->ui32[3] = 0;
      pQVar11->ui32[2] = uVar6;
      pQVar13->ui32[0] = 0x44;
      pQVar13->ui32[1] = 0x44;
      pQVar13->ui32[2] = 0x44;
      uVar6 = fptoui(*pfVar9 * fVar19);
      pQVar13->ui32[3] = uVar6;
      ndpkt = iVar4 + 0xc;
      pQVar7 = pQVar3 + iVar4 + 10;
      pQVar11 = pQVar3 + iVar4 + 0xb;
      pQVar7->ui32[0] = hw[i].u2;
      uVar6 = hw[i].v2;
      pQVar7->ui32[3] = 0;
      pQVar7->ui32[1] = uVar6;
      pQVar7->ui32[2] = 0;
      pQVar11->ui32[0] = hw[i].x2;
      pQVar11->ui32[1] = hw[i].y2;
      uVar6 = *puVar14;
      pQVar11->ui32[3] = 0;
      pQVar11->ui32[2] = uVar6;
      i = iVar12;
    } while (iVar12 < 10);
    bVar1 = init_pond != 0;
    pbuf[iVar5].ui32[0] = (ndpkt - (iVar5 + -0x70000000)) - 1;
    if (bVar1) {
      init_pond = 0;
    }
  }
  return;
}

void DrawNewPerticleSub(int num, sceVu0FVECTOR *pos, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, int a) {
	u_char a;
	u_int clpy2;
	u_int clpz2;
	u_char rr1;
	u_char gg1;
	u_char bb1;
	u_char rr2;
	u_char gg2;
	u_char bb2;
	int i;
	int j;
	int k;
	int n;
	int alp;
	int cl;
	int tagnum;
	int cnt;
	int clip[192];
	sceVu0IVECTOR ivec[192];
	u_long xyzf[192];
	u_long rgbaq1;
	u_long rgbaq2;
	u_long reg;
	
  uint uVar1;
  int (*paiVar2) [4];
  int (*paiVar3) [4];
  Q_WORDDATA *pQVar4;
  int iVar5;
  int (*paiVar6) [4];
  int *piVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  Q_WORDDATA *pQVar19;
  int iVar20;
  int iVar21;
  int clip [192];
  int ivec [192] [4];
  ulong xyzf [192];
  uint local_b0;
  uchar rr1;
  
  _rr1 = (int)(char)r1 & 0xff;
  uVar8 = (long)(char)r2 & 0xff;
  uVar10 = (long)(char)g1 & 0xff;
  uVar13 = (long)(char)g2 & 0xff;
  uVar11 = (long)(char)b1 & 0xff;
  uVar17 = (long)(char)b2 & 0xff;
  local_b0 = a & 0xff;
  if (monochrome_mode != 0) {
    uVar10 = (long)(int)((_rr1 + (int)uVar10 + (int)uVar11) / 3) & 0xff;
    uVar13 = (long)(int)((uint)((int)uVar8 + (int)uVar13 + (int)uVar17) / 3) & 0xff;
    _rr1 = (uint)uVar10;
    uVar17 = uVar13;
    uVar8 = uVar13;
    uVar11 = uVar10;
  }
  uVar17 = uVar8 | uVar13 << 8 | uVar17 << 0x10;
  sceVu0RotTransPersN(ivec,0x303860,pos,num * 3,1);
  iVar15 = 0;
  if (0 < num * 3) {
    do {
      piVar7 = clip + iVar15;
      *piVar7 = 1;
      uVar1 = ivec[iVar15][0];
      if (uVar1 < 0x80) {
        *piVar7 = 0;
      }
      else if (0xff80 < uVar1) {
        *piVar7 = 0;
      }
      if (((uint)ivec[iVar15][1] < 0x80) || (0xff80 < (uint)ivec[iVar15][1])) {
        clip[iVar15] = 0;
      }
      if ((ivec[iVar15][2] == 0) || (0xffffff < (uint)ivec[iVar15][2])) {
        clip[iVar15] = 0;
      }
      paiVar6 = ivec[iVar15];
      paiVar2 = ivec[iVar15];
      puVar9 = xyzf + iVar15;
      paiVar3 = ivec[iVar15];
      iVar15 = iVar15 + 1;
      *puVar9 = (long)(*paiVar6)[0] | (long)(*paiVar2)[1] << 0x10 | (long)(*paiVar3)[2] << 0x20;
    } while (iVar15 < num * 3);
  }
  Reserve2DPacket(0x1000);
  pQVar4 = pbuf;
  iVar15 = ndpkt;
  pQVar19 = pbuf + ndpkt;
  pQVar19->ui32[0] = 0;
  pQVar19->ui32[1] = 0;
  pQVar19->ui32[2] = 0;
  pQVar19->ui32[3] = 0;
  pQVar4[ndpkt + 1].ul64[1] = 0xe;
  pQVar4[ndpkt + 1].ul64[0] = 0x1000000000008003;
  pQVar4[ndpkt + 2].ul64[1] = 0x4e;
  pQVar4[ndpkt + 2].ul64[0] = 0x10100008c;
  pQVar4[ndpkt + 3].ul64[0] = 0x50003;
  pQVar4[ndpkt + 3].ul64[1] = 0x47;
  pQVar4[ndpkt + 4].ul64[1] = 0x42;
  pQVar4[ndpkt + 4].ul64[0] = 0x44;
  pQVar4[ndpkt + 5].ul64[0] = 0x2400400000008001;
  pQVar4[ndpkt + 5].ul64[1] = 0xf0;
  pQVar4[ndpkt + 6].ul64[1] = 0;
  pQVar4[ndpkt + 6].ul64[0] = 0x14c;
  iVar21 = ndpkt + 7;
  uVar8 = 0;
  iVar18 = 0;
  iVar20 = 0;
  pQVar19 = pQVar4;
  ndpkt = ndpkt + 8;
  do {
    iVar16 = 0;
    if (0 < num) {
      do {
        if (num == 0) {
          trap(7);
        }
        iVar12 = (int)(((num - iVar16) + -1) * local_b0) / num;
        if (plyr_wrk.mode != 1) {
          if (num == 0) {
            trap(7);
          }
          iVar12 = (iVar16 * iVar12) / num;
        }
        uVar14 = (long)(int)_rr1 & 0xffU | (long)iVar12 << 0x18 | uVar11 << 0x10 | uVar10 << 8;
        iVar12 = iVar16 * 3 + iVar20;
        uVar13 = uVar14;
        if (iVar20 == 0) {
          uVar13 = uVar17;
        }
        pQVar19[ndpkt].ul64[0] = uVar13;
        pQVar19[ndpkt].ul64[1] = xyzf[iVar12];
        if (iVar16 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = clip[iVar12 + -3] + clip[iVar12 + -2] + clip[iVar12];
        }
        if (iVar5 < 3) {
          iVar5 = 0xc1;
        }
        else {
          iVar5 = 0x41;
        }
        uVar13 = uVar17;
        if (iVar20 == 0) {
          uVar13 = uVar14;
        }
        pQVar4[ndpkt + 1].ul64[0] = uVar13;
        pQVar4[ndpkt + 1].ul64[1] = xyzf[iVar12 + 1];
        if (iVar16 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = clip[iVar12 + -2] + clip[iVar12] + clip[iVar12 + 1];
        }
        if (iVar12 < 3) {
          iVar12 = 0xc1;
        }
        else {
          iVar12 = 0x41;
        }
        uVar8 = uVar8 | (long)iVar5 << (long)(iVar18 << 3) |
                (long)iVar12 << (long)((iVar18 + 1) * 8);
        iVar18 = iVar18 + 2;
        iVar16 = iVar16 + 1;
        iVar12 = ndpkt + 2;
        if (7 < iVar18) {
          pQVar4[iVar21].ul64[1] = uVar8;
          pQVar4[iVar21].ul64[0] = (long)(iVar18 * 2) << 0x3c | 0x400400000008001;
          uVar8 = 0;
          iVar18 = 0;
          iVar21 = ndpkt + 2;
          iVar12 = ndpkt + 3;
        }
        ndpkt = iVar12;
        pQVar19 = pbuf;
      } while (iVar16 < num);
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 < 2);
  if (iVar18 < 1) {
    ndpkt = ndpkt + -1;
  }
  else {
    pQVar19[iVar21].ul64[1] = uVar8;
    pQVar19[iVar21].ul64[0] = (long)(iVar18 << 1) << 0x3c | 0x400400000008001;
    pQVar19 = pbuf;
  }
  pQVar19[iVar15].ui32[0] = (ndpkt - (iVar15 + -0x70000000)) - 1;
  return;
}

void SetEneFace(EFFECT_CONT *ec) {
	int alp;
	int direc;
	int i;
	int j;
	int th;
	int tw;
	int bak;
	int num;
	u_int clip[16][4];
	u_int clpz2;
	float scl;
	float dirfl;
	float rot_x;
	float rot_y;
	float stq[2];
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ivec[16][4];
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR ppos[4];
	U32DATA ts[16][4];
	U32DATA tt[16][4];
	U32DATA tq[16][4];
	
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  int (*paiVar6) [4];
  uint uVar7;
  int iVar8;
  Q_WORDDATA *pQVar9;
  int iVar10;
  Q_WORDDATA *pQVar11;
  ulong uVar12;
  uint *puVar13;
  int (*paiVar14) [4];
  U32DATA *pUVar15;
  U32DATA *pUVar16;
  U32DATA *pUVar17;
  int iVar18;
  Q_WORDDATA *pQVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint clip [16] [4];
  float stq [2];
  float wlm [4] [4];
  float slm [4] [4];
  int ivec [16] [4] [4];
  float wpos [4];
  float ppos [4] [4];
  U32DATA ts [16] [4];
  U32DATA tt [16] [4];
  U32DATA tq [16] [4];
  float rot_x;
  float rot_y;
  int num;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  U32DATA (*local_f8) [4];
  U32DATA (*local_f4) [4];
  U32DATA (*local_f0) [4];
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  U32DATA (*local_e0) [4];
  U32DATA (*local_dc) [4];
  U32DATA (*local_d8) [4];
  
  uVar7 = (int)stq + 7U & 7;
  puVar4 = (ulong *)(((int)stq + 7U) - uVar7);
  *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | (ulong)DAT_00356658 >> (7 - uVar7) * 8;
  stq = DAT_00356658;
  ppos[0]._0_8_ = DAT_0034bb20;
  ppos[0]._8_8_ = DAT_0034bb28;
  ppos[1]._0_8_ = DAT_0034bb30;
  ppos[1]._8_8_ = DAT_0034bb38;
  ppos[2]._0_8_ = DAT_0034bb40;
  ppos[2]._8_8_ = DAT_0034bb48;
  ppos[3]._0_8_ = DAT_0034bb50;
  ppos[3]._8_8_ = DAT_0034bb58;
  SetSprFile(0x1080000);
  num = (int)(ec->dat).uc8[2];
  wpos[0] = (ec->dat).fl32[1];
  wpos[1] = (ec->dat).fl32[2];
  uVar7 = ec->cnt + 2;
  wpos[2] = (ec->dat).fl32[3];
  bVar1 = (ec->dat).uc8[3];
  ec->cnt = uVar7;
  if ((int)uVar7 < 0) {
    fVar22 = (float)(uVar7 & 1 | uVar7 >> 1);
    fVar22 = fVar22 + fVar22;
  }
  else {
    fVar22 = (float)uVar7;
  }
  if (180.0 <= fVar22) {
    iVar23 = 0;
    ResetEffects(ec);
  }
  else {
    uVar7 = ec->cnt;
    if ((int)uVar7 < 0) {
      fVar22 = (float)(uVar7 & 1 | uVar7 >> 1);
      fVar22 = fVar22 + fVar22;
    }
    else {
      fVar22 = (float)uVar7;
    }
    if (fVar22 < 90.0) {
      if ((int)uVar7 < 0) {
        fVar22 = (float)(uVar7 & 1 | uVar7 >> 1);
        fVar22 = fVar22 + fVar22;
      }
      else {
        fVar22 = (float)uVar7;
      }
      iVar23 = (int)((fVar22 * 32.0) / 90.0);
    }
    else {
      if ((int)uVar7 < 0) {
        fVar22 = (float)(uVar7 & 1 | uVar7 >> 1);
        fVar22 = fVar22 + fVar22;
      }
      else {
        fVar22 = (float)uVar7;
      }
      iVar23 = (int)(((180.0 - fVar22) * 32.0) / 90.0);
    }
  }
  fVar28 = 1.0;
  fVar22 = fVar28;
  if (bVar1 != 0) {
    fVar22 = -1.0;
  }
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  fVar29 = fVar28;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  local_d8 = tq;
  local_dc = tt;
  local_e0 = ts;
  local_e4 = clip + 3;
  local_e8 = clip + 2;
  local_ec = clip + 1;
  iVar8 = (num + monochrome_mode) * 0x20;
  uVar2 = *(ushort *)(&DAT_002974dc + iVar8);
  fVar27 = (float)(uint)*(ushort *)(&DAT_002974de + iVar8);
  iVar8 = 0;
  do {
    fVar24 = (float)iVar8 * DAT_00355654 * 0.0625 + fVar29;
    fVar25 = fVar24 * 192.0;
    fVar24 = fVar24 * 175.0;
    fVar26 = fVar25 * fVar22;
    fVar25 = -fVar25 * fVar22;
    ppos[1]._0_8_ = CONCAT44(fVar24,fVar26);
    ppos[0]._0_8_ = CONCAT44(fVar24,fVar25);
    ppos[2]._0_8_ = CONCAT44(-fVar24,fVar25);
    ppos[3]._0_8_ = CONCAT44(-fVar24,fVar26);
    sceVu0RotTransPersN(ivec[iVar8],(Matrix4x4 *)slm,ppos,4,1);
    puVar13 = (uint *)clip[iVar8];
    iVar18 = iVar8 + 1;
    paiVar14 = (int (*) [4])ivec[iVar8];
    iVar20 = 0;
    pUVar17 = (U32DATA *)tt[iVar8];
    pUVar16 = (U32DATA *)ts[iVar8];
    pUVar15 = (U32DATA *)tq[iVar8];
    do {
      *puVar13 = 0;
      uVar7 = (*(int (*) [4])*paiVar14)[0];
      if (uVar7 < 0x300) {
        *puVar13 = 1;
LAB_00144a48:
        uVar7 = (*(int (*) [4])*paiVar14)[1];
      }
      else {
        if (0xfd00 < uVar7) {
          *puVar13 = 1;
          goto LAB_00144a48;
        }
        uVar7 = (*(int (*) [4])*paiVar14)[1];
      }
      if (uVar7 < 0x300) {
        *puVar13 = 1;
LAB_00144a6c:
        uVar7 = (*(int (*) [4])*paiVar14)[2];
      }
      else {
        if (0xfd00 < uVar7) {
          *puVar13 = 1;
          goto LAB_00144a6c;
        }
        uVar7 = (*(int (*) [4])*paiVar14)[2];
      }
      if ((uVar7 == 0) || (0xffffff < uVar7)) {
        *puVar13 = 1;
      }
      paiVar6 = (int (*) [4])*paiVar14;
      paiVar14 = paiVar14[1];
      iVar10 = iVar20 / 2;
      puVar13 = puVar13 + 1;
      fVar25 = fVar28 / (float)(*paiVar6)[3];
      iVar8 = iVar20 % 2;
      iVar20 = iVar20 + 1;
      pUVar15->fl32 = fVar25;
      pUVar16->fl32 = stq[iVar8] * (float)(uint)uVar2 * fVar25 * 0.00390625;
      pUVar16 = pUVar16 + 1;
      fVar25 = pUVar15->fl32;
      pUVar15 = pUVar15 + 1;
      pUVar17->fl32 = stq[iVar10] * fVar27 * fVar25 * 0.00390625;
      pUVar17 = pUVar17 + 1;
    } while (iVar20 < 4);
    iVar8 = iVar18;
    if (0xf < iVar18) {
      iVar20 = 0xf;
      Reserve2DPacket(0x1000);
      pQVar19 = pbuf;
      iVar18 = ndpkt;
      iVar8 = monochrome_mode;
      local_100 = local_e8;
      pQVar9 = pbuf + ndpkt;
      local_104 = local_e4;
      local_fc = local_ec;
      local_f8 = local_e0;
      local_f4 = local_dc;
      pQVar11 = pbuf + ndpkt + 1;
      local_f0 = local_d8;
      pQVar9->ui32[0] = 0;
      pQVar9->ui32[1] = 0;
      pQVar9->ui32[2] = 0;
      pQVar9->ui32[3] = 0;
      pQVar11->ul64[1] = 0xe;
      pQVar11->ul64[0] = 0x1000000000008006;
      pQVar19[ndpkt + 2].ul64[1] = 0x3f;
      pQVar19[ndpkt + 2].ul64[0] = 0;
      uVar12 = *(ulong *)(&eneface + (num + iVar8) * 0x20);
      pQVar19[ndpkt + 3].ul64[1] = 6;
      pQVar19[ndpkt + 3].ul64[0] = uVar12;
      pQVar19[ndpkt + 4].ul64[0] = 0x161;
      pQVar19[ndpkt + 4].ul64[1] = 0x14;
      pQVar19[ndpkt + 5].ul64[1] = 0x4e;
      pQVar19[ndpkt + 5].ul64[0] = 0x10100008c;
      pQVar19[ndpkt + 6].ul64[0] = 0x44;
      pQVar19[ndpkt + 6].ul64[1] = 0x42;
      pQVar19[ndpkt + 7].ul64[1] = 0x47;
      iVar8 = ndpkt + 8;
      pQVar19[ndpkt + 7].ul64[0] = 0x5000d;
      ndpkt = iVar8;
      do {
        if (clip[iVar20][0] + local_e4[iVar20 * 4] + local_e8[iVar20 * 4] + local_ec[iVar20 * 4] ==
            0) {
          iVar10 = iVar20 * iVar23;
          pQVar19[iVar8].ul64[1] = 0x412;
          pQVar19[iVar8].ul64[0] = 0x302a400000008004;
          pQVar9 = pbuf;
          ndpkt = iVar8 + 1;
          paiVar14 = (int (*) [4])ivec[iVar20];
          pUVar17 = (U32DATA *)local_e0[iVar20];
          iVar21 = 0;
          pUVar16 = (U32DATA *)local_d8[iVar20];
          pUVar15 = (U32DATA *)local_dc[iVar20];
          do {
            iVar8 = iVar10 + 0xf;
            if (-1 < iVar10) {
              iVar8 = iVar10;
            }
            pQVar19 = pQVar9 + ndpkt;
            pQVar19->ui32[0] = *(uint *)pUVar17;
            pQVar11 = pQVar9 + ndpkt + 1;
            bVar5 = 1 < iVar21;
            uVar7 = 0x8000;
            iVar21 = iVar21 + 1;
            pQVar19->ui32[1] = *(uint *)pUVar15;
            if (bVar5) {
              uVar7 = 0;
            }
            pUVar15 = pUVar15 + 1;
            pUVar17 = pUVar17 + 1;
            uVar3 = *(uint *)pUVar16;
            pQVar19->ui32[3] = 0;
            pUVar16 = pUVar16 + 1;
            pQVar19->ui32[2] = uVar3;
            pQVar11->ui32[0] = 0x80;
            pQVar11->ui32[1] = 0x80;
            pQVar11->ui32[2] = 0x80;
            pQVar19 = pQVar9 + ndpkt + 2;
            pQVar11->ui32[3] = iVar23 - (iVar8 >> 4);
            iVar8 = ndpkt + 3;
            pQVar19->ui32[0] = (*(int (*) [4])*paiVar14)[0];
            pQVar19->ui32[1] = (*(int (*) [4])*paiVar14)[1];
            paiVar6 = (int (*) [4])*paiVar14;
            paiVar14 = paiVar14[1];
            pQVar19->ui32[2] = (*paiVar6)[2] << 4;
            ndpkt = iVar8;
            pQVar19->ui32[3] = uVar7;
            pQVar19 = pbuf;
          } while (iVar21 < 4);
        }
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
      pQVar19[iVar18].ui32[0] = (iVar8 - (iVar18 + -0x70000000)) - 1;
      return;
    }
  } while( true );
}

void SetSpirit(EFFECT_CONT *ec) {
	static sceVu0FVECTOR bpos;
	static sceVu0FVECTOR opos[24];
	static int tbl[24];
	u_char mr;
	u_char mg;
	u_char mb;
	u_char mrh;
	u_char mgh;
	u_char mbh;
	u_char mf;
	int i;
	int n;
	int num;
	int top;
	float sc;
	float arate;
	float msc;
	float msch;
	float *v1;
	float *v0;
	
  byte bVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uchar mr;
  uchar mg;
  uchar mb;
  uchar mbh;
  uchar mf;
  
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar2 = (undefined8 *)ec->pnt[0];
  DAT_003850a8 = *(float *)(puVar2 + 1);
  DAT_003850ac = *(undefined4 *)((int)puVar2 + 0xc);
  bpos_353 = (float)*puVar2;
  DAT_003850a4 = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  if (ec->keep == 0) {
    iVar11 = 0x17;
    piVar6 = &DAT_0038528c;
    do {
      *piVar6 = iVar11;
      piVar6 = piVar6 + -1;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    ec->cnt = 0;
    ec->keep = 1;
    ec->max = 0;
  }
  uVar13 = ec->cnt;
  uVar8 = ec->max;
  uVar7 = uVar13;
  if (stop_effects == 0) {
    iVar10 = uVar8 * 0x10;
    iVar11 = uVar8 + 1;
    puVar9 = &tbl_355;
    iVar12 = 0x17;
    do {
      uVar7 = uVar8 - 1;
      *puVar9 = uVar8;
      uVar5 = DAT_003850ac;
      fVar4 = DAT_003850a8;
      fVar3 = DAT_003850a4;
      uVar8 = 0x17;
      if (-1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      iVar12 = iVar12 + -1;
      puVar9 = puVar9 + 1;
    } while (-1 < iVar12);
    iVar12 = DAT_00385234 * 0x10;
    if (((*(float *)(&opos_354 + iVar12) == bpos_353) &&
        (*(float *)(&DAT_003850b4 + iVar12) == DAT_003850a4)) &&
       (*(float *)(&DAT_003850b8 + iVar12) == DAT_003850a8)) {
      uVar13 = uVar13 - 1;
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
    }
    else {
      uVar13 = uVar13 + 1;
      if (0x18 < (int)uVar13) {
        uVar13 = 0x18;
      }
    }
                    /* inlined from ../../graphics/graph3d/libsg.h */
    *(float *)(&opos_354 + iVar10) = bpos_353;
    *(float *)(&DAT_003850b4 + iVar10) = fVar3;
    *(float *)(&DAT_003850b8 + iVar10) = fVar4;
    *(undefined4 *)(&DAT_003850bc + iVar10) = uVar5;
                    /* end of inlined section */
    uVar8 = iVar11 % 0x18;
    uVar7 = uVar13;
  }
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
    SetEffects(0x18,1);
  }
  SetEffects(0x17,1);
  bVar1 = (ec->dat).uc8[1];
  ec->cnt = uVar7;
  ec->max = uVar8;
  if ((bVar1 & 1) != 0) {
    ResetEffects(ec);
    return;
  }
  return;
}

void SetFaceSpirit(EFFECT_CONT *ec) {
	float mr;
	float mg;
	float mb;
	int i;
	int j;
	int n;
	int tw;
	int th;
	int bak;
	int num;
	int top;
	int clip[24];
	int bclip;
	u_int clpz1;
	u_int clpz2;
	float sc;
	float arate;
	float fx;
	float fy;
	float fz;
	float l;
	float rot_x;
	float rot_y;
	float tailsc[24];
	u_long tx0;
	u_long cnt;
	FACESPIRIT_ST *fs;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ivclip;
	sceVu0IVECTOR ivec[24][4];
	sceVu0IVECTOR ivecb[4];
	sceVu0FVECTOR bpos;
	sceVu0FVECTOR wpos;
	sceVu0FVECTOR zero;
	sceVu0FVECTOR ppos[4];
	float *v1;
	float *v0;
	float *v0;
	
  byte bVar1;
  undefined8 *puVar2;
  int *piVar3;
  float (*pafVar4) [4];
  Q_WORDDATA *pQVar5;
  uint uVar6;
  Q_WORDDATA *pQVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  Q_WORDDATA *pQVar13;
  float fVar14;
  int (*paiVar15) [4];
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float arg_a;
  float fVar28;
  float arg_a_00;
  int clip [24];
  float tailsc [24];
  float wlm [4] [4];
  float slm [4] [4];
  int ivclip [4];
  int ivec [24] [4] [4];
  int ivecb [4] [4];
  float bpos [4];
  float wpos [4];
  float zero [4];
  float ppos [4] [4];
  float rot_x;
  float rot_y;
  EFFECT_CONT *local_128;
  int tw;
  int th;
  int num;
  int top;
  int bclip;
  uint clpz2;
  FACESPIRIT_ST *fs;
  float *local_108;
  int local_104;
  int local_100;
  int local_fc;
  float *local_f8;
  Vector4 *local_f4;
  int *local_f0;
  float (*local_ec) [4];
  int *local_e8;
  int (*local_e4) [4];
  
  local_108 = zero;
  clpz2 = 0xff0000;
  local_128 = ec;
  memset(local_108,0,0x10);
  uVar9 = sys_wrk.count;
  clpz2 = clpz2 | 0xffff;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
  bVar1 = (local_128->dat).uc8[3];
  arg_a = (float)(uint)(local_128->dat).uc8[2];
  zero[3] = 1.0;
  ppos[0]._0_8_ = DAT_0034bb60;
  arg_a_00 = (float)(uint)(local_128->dat).uc8[4];
  ppos[0]._8_8_ = DAT_0034bb68;
  ppos[1]._0_8_ = DAT_0034bb70;
  ppos[1]._8_8_ = DAT_0034bb78;
  ppos[2]._0_8_ = DAT_0034bb80;
  ppos[2]._8_8_ = DAT_0034bb88;
  ppos[3]._0_8_ = DAT_0034bb90;
  ppos[3]._8_8_ = DAT_0034bb98;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  puVar2 = (undefined8 *)local_128->pnt[0];
  bpos[2] = *(float *)(puVar2 + 1);
  fVar14 = *(float *)((int)puVar2 + 0xc);
  bpos[0] = (float)*puVar2;
  bpos[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
                    /* WARNING: Load size is inaccurate */
  fVar28 = *local_128->pnt[1];
  if (local_128->keep == 0) {
    uVar8 = (uint)(local_128->dat).uc8[5];
    iVar20 = 0x17;
    local_128->keep = 1;
    local_128->cnt = 0;
    local_128->max = 0;
    (local_128->dat).uc8[6] = fly_wrk[uVar8].ene;
    piVar3 = facespirit[uVar8].tbl + 0x17;
    do {
      *piVar3 = iVar20;
      piVar3 = piVar3 + -1;
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
  }
  else {
    uVar8 = (uint)(local_128->dat).uc8[5];
  }
  fs = (FACESPIRIT_ST *)facespirit[0].opos[uVar8 * 0x1e];
  num = local_128->cnt;
  top = local_128->max;
  fVar28 = fVar28 * ((float)(uint)*(byte *)((int)ene_wrk +
                                           (uint)(local_128->dat).uc8[6] * 0x430 + 0x358) / 60.0);
  if ((stop_effects == 0) && (uVar9 = __umoddi3(uVar9,3), uVar9 == 0)) {
    local_f0 = fs->tbl;
    iVar21 = 0x17;
    iVar20 = top;
    piVar3 = local_f0;
    do {
      iVar10 = iVar20 + -1;
      *piVar3 = iVar20;
      iVar20 = 0x17;
      if (-1 < iVar10) {
        iVar20 = iVar10;
      }
      iVar21 = iVar21 + -1;
      piVar3 = piVar3 + 1;
    } while (-1 < iVar21);
    if (num < 3) {
      fVar25 = 3.0;
    }
    else {
      fVar26 = bpos[0] - fs->opos[fs->tbl[1]][0];
      fVar25 = bpos[2] - fs->opos[fs->tbl[1]][2];
      fVar25 = SgSqrtf(fVar26 * fVar26 + 0.0 + fVar25 * fVar25);
    }
    if (100.0 < fVar25) {
      iVar20 = 0x17;
      local_128->keep = 1;
      local_128->cnt = 0;
      local_128->max = 0;
      piVar3 = local_f0 + 0x17;
      do {
        *piVar3 = iVar20;
        piVar3 = piVar3 + -1;
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
      if (((local_128->dat).uc8[1] & 1) == 0) {
        return;
      }
      ResetEffects(local_128);
      return;
    }
    if (fVar25 < 3.0) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
      pafVar4 = fs->opos[top];
      (*pafVar4)[0] = bpos[0];
      (*pafVar4)[1] = bpos[1];
      (*pafVar4)[2] = bpos[2];
      (*pafVar4)[3] = fVar14;
                    /* end of inlined section */
    }
    else {
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
      num = num + 1;
      if (0x18 < num) {
        num = 0x18;
      }
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
      pafVar4 = fs->opos[top];
      (*pafVar4)[0] = bpos[0];
      (*pafVar4)[1] = bpos[1];
      (*pafVar4)[2] = bpos[2];
      (*pafVar4)[3] = fVar14;
                    /* end of inlined section */
      top = (top + 1) % 0x18;
    }
    local_100 = num + -1;
    iVar20 = local_100;
    while (0 < iVar20) {
      fs->opos[local_f0[iVar20]][1] = fs->opos[local_f0[iVar20 + -1]][1];
      iVar20 = iVar20 + -1;
    }
  }
  else {
    local_100 = num + -1;
  }
  iVar20 = local_100;
  local_e4 = ivecb;
  local_e8 = ivclip;
  local_ec = ppos;
  local_f4 = (Vector4 *)wpos;
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  if (-1 < iVar20) {
    local_f8 = tailsc;
    local_f0 = fs->tbl;
    local_fc = num + 1;
    do {
      iVar21 = local_f0[iVar20];
      pafVar4 = fs->opos[iVar21];
      pfVar16 = local_f8 + iVar21;
      fVar26 = (*pafVar4)[0] - camera.p.x;
      fVar25 = (*pafVar4)[1] - camera.p.y;
      fVar14 = (*pafVar4)[2] - camera.p.z;
      fVar14 = SgSqrtf(fVar26 * fVar26 + fVar25 * fVar25 + fVar14 * fVar14);
      fVar25 = fVar14 - 150.0;
      wpos[0] = camera.p.x + (((*pafVar4)[0] - camera.p.x) * fVar25) / fVar14;
      wpos[1] = camera.p.y + (((*pafVar4)[1] - camera.p.y) * fVar25) / fVar14;
      wpos[3] = 1.0;
      wpos[2] = camera.p.z + (((*pafVar4)[2] - camera.p.z) * fVar25) / fVar14;
      *pfVar16 = (float)(num - iVar20) / (float)local_fc;
      sceVu0UnitMatrix((Matrix4x4 *)wlm);
      wlm[0][0] = *pfVar16;
      wlm[1][1] = wlm[0][0];
      wlm[2][2] = wlm[0][0];
      sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
      sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_f4);
      sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
      sceVu0RotTransPersN(ivec[iVar21],(Matrix4x4 *)slm,local_ec,4,0);
      piVar3 = local_e8;
      clip[iVar21] = 0;
      sceVu0RotTransPers(piVar3,(Matrix4x4 *)slm,local_108,0);
      if (((uint)ivclip[0] < 0x4000) || (0xc000 < (uint)ivclip[0])) {
        clip[iVar21] = 1;
      }
      if (((uint)ivclip[1] < 0x4000) || (0xc000 < (uint)ivclip[1])) {
        clip[iVar21] = 1;
      }
      if ((ivclip[2] == 0) || (clpz2 < (uint)ivclip[2])) {
        clip[iVar21] = 1;
      }
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
  }
  bclip = 0;
  fVar25 = SgSqrtf((bpos[0] - camera.p.x) * (bpos[0] - camera.p.x) +
                   (bpos[1] - camera.p.y) * (bpos[1] - camera.p.y) +
                   (bpos[2] - camera.p.z) * (bpos[2] - camera.p.z));
  fVar14 = fVar25 - 150.0;
  wpos[3] = 1.0;
  wpos[2] = camera.p.z + ((bpos[2] - camera.p.z) * fVar14) / fVar25;
  wpos[0] = camera.p.x + ((bpos[0] - camera.p.x) * fVar14) / fVar25;
  wpos[1] = camera.p.y + ((bpos[1] - camera.p.y) * fVar14) / fVar25;
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,local_f4);
  sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
  sceVu0RotTransPersN(local_e4,(Matrix4x4 *)slm,local_ec,4,0);
  sceVu0RotTransPers(local_e8,(Matrix4x4 *)slm,local_108,0);
  uVar9 = DAT_0026c140;
  if (((uint)ivclip[0] < 0x4000) || (0xc000 < (uint)ivclip[0])) {
    bclip = 1;
  }
  if (((uint)ivclip[1] < 0x4000) || (0xc000 < (uint)ivclip[1])) {
    bclip = 1;
  }
  if ((ivclip[2] == 0) || (clpz2 < (uint)ivclip[2])) {
    bclip = 1;
  }
  th = (uint)DAT_0026c14e << 4;
  tw = (uint)DAT_0026c14c << 4;
  Reserve2DPacket(0x1000);
  pQVar13 = pbuf;
  iVar20 = ndpkt;
  local_104 = ndpkt * 0x10;
  pQVar5 = pbuf + ndpkt;
  pQVar5->ui32[0] = 0;
  pQVar5->ui32[1] = 0;
  pQVar5->ui32[2] = 0;
  pQVar5->ui32[3] = 0;
  pQVar13[ndpkt + 1].ul64[1] = 0xe;
  pQVar13[ndpkt + 1].ul64[0] = 0x1000000000008006;
  pQVar13[ndpkt + 2].ul64[1] = 0x3f;
  pQVar13[ndpkt + 2].ul64[0] = 0;
  pQVar13[ndpkt + 3].ul64[0] = uVar9;
  pQVar13[ndpkt + 3].ul64[1] = 6;
  pQVar13[ndpkt + 4].ul64[1] = 0x14;
  pQVar13[ndpkt + 4].ul64[0] = 0x161;
  pQVar13[ndpkt + 5].ul64[0] = 0x10100008c;
  pQVar13[ndpkt + 5].ul64[1] = 0x4e;
  pQVar13[ndpkt + 6].ul64[1] = 0x42;
  pQVar13[ndpkt + 6].ul64[0] = 0x48;
  pQVar13[ndpkt + 7].ul64[0] = 0x5000d;
  pQVar13[ndpkt + 7].ul64[1] = 0x47;
  iVar21 = ndpkt + 8;
  ndpkt = iVar21;
  if (-1 < local_100) {
    fVar14 = (float)num;
    local_f0 = fs->tbl;
    iVar10 = local_100;
    do {
      piVar3 = local_f0 + iVar10;
      fVar25 = (float)iVar10 / fVar14;
      iVar24 = iVar10 + -1;
      if (clip[*piVar3] == 0) {
        pQVar13[iVar21].ul64[0] = 0x30aa400000008004;
        ndpkt = iVar21 + 1;
        pQVar13[iVar21].ul64[1] = 0x413;
        pQVar5 = pbuf;
        fVar27 = arg_a_00 * fVar25;
        fVar26 = arg_a * fVar25;
        uVar19 = tw - 8;
        uVar17 = th - 8;
        uVar6 = fptoui(((float)(num - iVar10) / (float)(num + 1)) * 32.0 * fVar28);
        uVar8 = 0;
        do {
          pQVar13 = pQVar5 + ndpkt;
          uVar18 = 8;
          if ((uVar8 & 1) != 0) {
            uVar18 = uVar19;
          }
          uVar22 = 8;
          if ((int)uVar8 / 2 != 0) {
            uVar22 = uVar17;
          }
          pQVar13->ui32[0] = uVar18;
          pQVar13->ui32[1] = uVar22;
          pQVar7 = pQVar5 + ndpkt + 1;
          pQVar13->ui32[3] = 0;
          pQVar13->ui32[2] = 0;
          uVar18 = 0x8000;
          pQVar7->ui32[3] = uVar6;
          pQVar7->ui32[0] = (int)fVar26 & 0xff;
          pQVar7->ui32[1] = (int)((float)(uint)bVar1 * fVar25) & 0xff;
          pQVar13 = pQVar5 + ndpkt + 2;
          pQVar7->ui32[2] = (int)fVar27 & 0xff;
          if (1 < (int)uVar8) {
            uVar18 = 0;
          }
          uVar22 = uVar8 + 1;
          iVar21 = ndpkt + 3;
          pQVar13->ui32[0] = ivec[*piVar3][uVar8][0];
          pQVar13->ui32[1] = ivec[*piVar3][uVar8][1];
          pQVar13->ui32[2] = ivec[*piVar3][uVar8][2];
          ndpkt = iVar21;
          pQVar13->ui32[3] = uVar18;
          pQVar13 = pbuf;
          uVar8 = uVar22;
        } while ((int)uVar22 < 4);
      }
      iVar10 = iVar24;
    } while (-1 < iVar24);
  }
  if (bclip == 0) {
    pQVar13[iVar21].ul64[1] = 0x413;
    ndpkt = iVar21 + 1;
    pQVar13[iVar21].ul64[0] = 0x30aa400000008004;
    pQVar5 = pbuf;
    uVar23 = 0;
    uVar22 = tw - 8;
    uVar18 = th - 8;
    uVar8 = fptoui(arg_a);
    uVar6 = fptoui((float)(uint)bVar1);
    uVar17 = fptoui(arg_a_00);
    uVar19 = fptoui(fVar28 * 48.0);
    paiVar15 = local_e4;
    do {
      pQVar13 = pQVar5 + ndpkt;
      uVar11 = 8;
      if ((uVar23 & 1) != 0) {
        uVar11 = uVar22;
      }
      uVar12 = 8;
      if ((int)uVar23 / 2 != 0) {
        uVar12 = uVar18;
      }
      pQVar13->ui32[0] = uVar11;
      pQVar13->ui32[1] = uVar12;
      pQVar7 = pQVar5 + ndpkt + 1;
      pQVar13->ui32[3] = 0;
      pQVar13->ui32[2] = 0;
      uVar11 = 0x8000;
      if (1 < (int)uVar23) {
        uVar11 = 0;
      }
      pQVar7->ui32[3] = uVar19;
      pQVar7->ui32[0] = uVar8;
      pQVar7->ui32[1] = uVar6;
      pQVar13 = pQVar5 + ndpkt + 2;
      pQVar7->ui32[2] = uVar17;
      uVar23 = uVar23 + 1;
      iVar21 = ndpkt + 3;
      pQVar13->ui32[0] = (*paiVar15)[0];
      pQVar13->ui32[1] = (*paiVar15)[1];
      piVar3 = *paiVar15;
      paiVar15 = paiVar15[1];
      pQVar13->ui32[2] = piVar3[2];
      ndpkt = iVar21;
      pQVar13->ui32[3] = uVar11;
      pQVar13 = pbuf;
    } while ((int)uVar23 < 4);
  }
  *(int *)(local_104 + (int)pQVar13) = (iVar21 - (iVar20 + -0x70000000)) + -1;
  local_128->cnt = num;
  bVar1 = (local_128->dat).uc8[1];
  local_128->max = top;
  if ((bVar1 & 1) != 0) {
    ResetEffects(local_128);
  }
  return;
}

void SetSaveCameraLamp() {
	sceVu0FVECTOR bbpos[7];
	int n;
	int col;
	u_char rgb1[2][4];
	u_char rgb2[2][4];
	float rot_x;
	float rot_y;
	float direc[7];
	sceVu0FVECTOR comp;
	sceVu0FVECTOR wpos;
	sceVu0FMATRIX wlm;
	DRAW_ENV de;
	
  uchar *puVar1;
  uint uVar2;
  ulong *puVar3;
  float (*pafVar4) [4];
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  float bbpos [7] [4];
  uchar rgb1 [2] [4];
  uchar rgb2 [2] [4];
  float direc [7];
  float comp [4];
  float wpos [4];
  float wlm [4] [4];
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  
  pafVar4 = bbpos;
  puVar5 = &DAT_0034bba0;
  do {
    puVar6 = puVar5;
    puVar8 = (undefined8 *)pafVar4;
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    *puVar8 = *puVar6;
    puVar8[1] = uVar9;
    puVar8[2] = uVar10;
    puVar8[3] = uVar11;
    pafVar4 = (float (*) [4])(puVar8 + 4);
    puVar5 = puVar6 + 4;
  } while (puVar6 + 4 != (undefined8 *)&UNK_0034bc00);
  uVar9 = puVar6[5];
  puVar8[4] = _UNK_0034bc00;
  puVar8[5] = uVar9;
  puVar1 = rgb1[1] + 3;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_00356660 >> (7 - uVar2) * 8
  ;
  rgb1 = DAT_00356660;
  puVar1 = rgb2[1] + 3;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_00356668 >> (7 - uVar2) * 8
  ;
  rgb2 = DAT_00356668;
  uVar2 = (int)direc + 7U & 7;
  puVar3 = (ulong *)(((int)direc + 7U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034bc10 >> (7 - uVar2) * 8;
  direc._0_8_ = DAT_0034bc10;
  uVar2 = (int)direc + 0xfU & 7;
  puVar3 = (ulong *)(((int)direc + 0xfU) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034bc18 >> (7 - uVar2) * 8;
  direc._8_8_ = DAT_0034bc18;
  uVar2 = (int)direc + 0x17U & 7;
  puVar3 = (ulong *)(((int)direc + 0x17U) - uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034bc20 >> (7 - uVar2) * 8;
  direc._16_8_ = DAT_0034bc20;
  direc[6] = DAT_0034bc28;
  comp._0_8_ = DAT_0034bc30;
  comp._8_8_ = DAT_0034bc38;
  de.tex1 = DAT_0034bc40;
  de.alpha = DAT_0034bc48;
  de.zbuf = DAT_0034bc50;
  de.test = DAT_0034bc58;
  de.clamp = DAT_0034bc60;
  de.prim = DAT_0034bc68;
  if (plyr_wrk.dop._13_1_ == '\0') {
    iVar12 = 0;
  }
  else if (plyr_wrk.dop._13_1_ == '\x0f') {
    iVar12 = 1;
  }
  else if (plyr_wrk.dop._13_1_ == '\x15') {
    iVar12 = 2;
  }
  else if (plyr_wrk.dop._13_1_ == ')') {
    iVar12 = 3;
  }
  else if (plyr_wrk.dop._13_1_ == '\x06') {
    iVar12 = 4;
  }
  else if (plyr_wrk.dop._13_1_ == '\x0e') {
    iVar12 = 5;
  }
  else {
    if (plyr_wrk.dop._13_1_ != '\x1f') {
      return;
    }
    iVar12 = 6;
  }
  iVar7 = SavePointLightJudge();
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixY(direc[iVar12],(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)bbpos[iVar12]);
  sceVu0ApplyMatrix((Vector4 *)wpos,(Matrix4x4 *)wlm,(Vector4 *)comp);
  Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
  sceVu0UnitMatrix((Matrix4x4 *)wlm);
  sceVu0RotMatrixX(rot_x,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
  sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)wpos);
  Set3DPosTexure((float (*) [4])(Matrix4x4 *)wlm,&de,0x16,128.0,128.0,rgb1[iVar7][0],rgb1[iVar7][1],
                 rgb1[iVar7][2],rgb1[iVar7][3]);
  Set3DPosTexure((float (*) [4])(Matrix4x4 *)wlm,&de,0xe,20.0,20.0,rgb2[iVar7][0],rgb2[iVar7][1],
                 rgb2[iVar7][2],rgb2[iVar7][3]);
  return;
}
