// STATUS: NOT STARTED

static SUNSHINE sunshine[0] = {
};
static sceVu0FVECTOR ef_pazzene_p = {
	/* [0] = */ 25720.f,
	/* [1] = */ -180.f,
	/* [2] = */ 7558.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos11 = {
	/* [0] = */ 25220.f,
	/* [1] = */ -80.f,
	/* [2] = */ 12710.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos12 = {
	/* [0] = */ 25290.f,
	/* [1] = */ -80.f,
	/* [2] = */ 12880.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos13 = {
	/* [0] = */ 25530.f,
	/* [1] = */ -80.f,
	/* [2] = */ 12750.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos14 = {
	/* [0] = */ 25520.f,
	/* [1] = */ -80.f,
	/* [2] = */ 12900.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos21 = {
	/* [0] = */ 25220.f,
	/* [1] = */ -40.f,
	/* [2] = */ 12710.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos22 = {
	/* [0] = */ 25290.f,
	/* [1] = */ -40.f,
	/* [2] = */ 12880.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos23 = {
	/* [0] = */ 25530.f,
	/* [1] = */ -40.f,
	/* [2] = */ 12750.f,
	/* [3] = */ 1.f
};
static sceVu0FVECTOR ef_smoke_pos24 = {
	/* [0] = */ 25520.f,
	/* [1] = */ -40.f,
	/* [2] = */ 12900.f,
	/* [3] = */ 1.f
};
static int room_old;
static u_char ef_pazz_ene_flow;
static int ef_rdfire3_cnt;
BURN_FIRE burn_fire[10] = {
	/* [0] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [1] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [2] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [3] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [4] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [5] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [6] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [7] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [8] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	},
	/* [9] = */ {
		/* .ligdiff = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ligpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .fpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .ebuf = */ NULL,
		/* .ligpow = */ 0.f,
		/* .wavew = */ 0.f,
		/* .rate = */ 0.f,
		/* .szw = */ 0.f,
		/* .szh = */ 0.f,
		/* .sw = */ 0.f,
		/* .sh = */ 0.f,
		/* .furn_id = */ 0,
		/* .lignum = */ 0,
		/* .usefl = */ 0,
		/* .sta = */ 0
	}
};
EFFRDR_RSV blood_drop_rsv[16] = {
	/* [0] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [1] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [2] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [3] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [4] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [5] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [6] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [7] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [8] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [9] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [10] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [11] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [12] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [13] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [14] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [15] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	}
};
EFFRDR_RSV pfire_rsv[4] = {
	/* [0] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [1] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [2] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	},
	/* [3] = */ {
		/* .adr = */ NULL,
		/* .furn_id = */ 0,
		/* .dummy = */ 0
	}
};
static int ef_rdfire3_call[6];
static FURN_ACT_WRK *ef_rdfire3[6];
static void *ef_smoke_addr[4];

void InitEffectRdr() {
	int i;
	
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  room_old = -1;
  ef_pazz_ene_flow = '\0';
  memset(burn_fire,0,0x3c0);
  ef_rdfire3_cnt = -1;
  iVar3 = 6;
  puVar2 = &DAT_00297cf0;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -0x14;
  } while (-1 < iVar3);
  iVar3 = 0xf;
  puVar1 = &blood_drop_rsv[0xf].furn_id;
  do {
    *puVar1 = 0xffff;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -4;
  } while (-1 < iVar3);
  iVar3 = 3;
  puVar1 = &pfire_rsv[3].furn_id;
  do {
    *puVar1 = 0xffff;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -4;
  } while (-1 < iVar3);
  return;
}

void InitEffectRdrEF() {
  return;
}

void* GetBurnFireWork() {
  uchar uVar1;
  BURN_FIRE *pBVar2;
  
  pBVar2 = burn_fire;
  uVar1 = burn_fire[0].usefl;
  while( true ) {
    if (uVar1 == '\0') {
      pBVar2->usefl = '\x01';
      return pBVar2;
    }
    if (0x29814f < (int)(pBVar2 + 1)) break;
    uVar1 = pBVar2[1].usefl;
    pBVar2 = pBVar2 + 1;
  }
  return (void *)0x0;
}

void* SearchBurnFireFurnID(u_short furn_id) {
  uchar uVar1;
  BURN_FIRE *pBVar2;
  
  pBVar2 = burn_fire;
  uVar1 = burn_fire[0].usefl;
  while ((uVar1 != '\x01' || (pBVar2->furn_id != furn_id))) {
    if (0x29814f < (int)(pBVar2 + 1)) {
      return (void *)0x0;
    }
    uVar1 = pBVar2[1].usefl;
    pBVar2 = pBVar2 + 1;
  }
  return pBVar2;
}

void SetRDLongFire2(float *pos, u_char sta, float szw, float szh, float sw, float sh, float r, float g, float b, float room, u_short furn_id) {
	EFFECT_CONT *ecw;
	void *ret;
	float *v0;
	float *v1;
	
  undefined8 uVar1;
  char cVar2;
  float (*diffuse) [4];
  void *pvVar3;
  float fVar4;
  float fVar5;
  
  diffuse = (float (*) [4])GetBurnFireWork();
  if (diffuse != (float (*) [4])0x0) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
    uVar1 = *(undefined8 *)pos;
    fVar4 = pos[2];
    fVar5 = pos[3];
    diffuse[2][0] = (float)uVar1;
    diffuse[2][1] = (float)((ulong)uVar1 >> 0x20);
    diffuse[2][2] = fVar4;
    diffuse[2][3] = fVar5;
                    /* end of inlined section */
    pvVar3 = SetEffects(0x17,2);
    diffuse[3][0] = (float)pvVar3;
    *(short *)diffuse[5] = furn_id;
    (*diffuse)[0] = r;
    (*diffuse)[1] = g;
    (*diffuse)[2] = b;
    (*diffuse)[3] = 1.0;
    diffuse[4][0] = szw;
    diffuse[4][1] = szh;
    diffuse[4][2] = sw;
    diffuse[4][3] = sh;
    *(uchar *)(diffuse[5] + 1) = sta;
    if ((sta & 1) != 0) {
      cVar2 = AddNewPointLight(diffuse[1],diffuse,diffuse[3] + 1,(uchar)(int)room);
      *(char *)((int)diffuse[5] + 2) = cVar2;
    }
    *(float (**) [4])((int)diffuse[3][0] + 0x24) = diffuse;
  }
  return;
}

void SetRDLongFire(float *pos, float r, float g, float b, float room, u_short furn_id) {
  SetRDLongFire2(pos,'\x03',1.0,1.0,1.0,1.0,r,g,b,room,furn_id);
  return;
}

void ResetRDLongFire(u_short furn_id) {
	void *ret;
	
  void *pvVar1;
  
  pvVar1 = SearchBurnFireFurnID(furn_id);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((int)pvVar1 + 0x54) & 1) != 0) {
      DeletePointLight(*(char *)((int)pvVar1 + 0x52));
    }
    ResetEffects(*(void **)((int)pvVar1 + 0x30));
    *(undefined *)((int)pvVar1 + 0x53) = 0;
  }
  return;
}

void SubRDFire(EFFECT_CONT *ec) {
	static int rnbk = 0;
	u_char mr;
	u_char mg;
	u_char mb;
	u_char mrh;
	u_char mgh;
	u_char mbh;
	int bak;
	int i;
	int n;
	int rn;
	int tw;
	int th;
	int w;
	int wpat;
	u_int vv[24];
	u_int clpz2;
	float bsw;
	float bsh;
	float sw;
	float sh;
	float fire1;
	float fire2;
	float fire4;
	float fire5;
	float fire6;
	float fire7;
	float arate;
	float wscw;
	float wsch;
	float ligpow;
	float msc;
	float msch;
	float f;
	float f1;
	float f2;
	float rot_x;
	float rot_y;
	u_long tx0;
	sceVu0FMATRIX wlm;
	sceVu0FMATRIX slm;
	sceVu0IVECTOR ipos;
	sceVu0IVECTOR ivec[48];
	sceVu0FVECTOR vtw[48];
	sceVu0FVECTOR vpos;
	sceVu0FVECTOR wcpos;
	BURN_FIRE *bf;
	DRAW_ENV de;
	float *v1;
	float r;
	
  short furn_id;
  ushort uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  Q_WORDDATA *pQVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Q_WORDDATA *pQVar10;
  float (*pafVar11) [4];
  int (*paiVar12) [4];
  Q_WORDDATA *pQVar13;
  uint *puVar14;
  Q_WORDDATA *pQVar15;
  Q_WORDDATA *pQVar16;
  Q_WORDDATA *pQVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float in_f27;
  float fVar31;
  float fVar32;
  undefined in_vf0 [16];
  undefined auVar33 [16];
  undefined4 in_vuR;
  uint vv [24];
  float wlm [4] [4];
  float slm [4] [4];
  int ipos [4];
  int ivec [48] [4];
  float vtw [48] [4];
  float vpos [4];
  float wcpos [4];
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  uchar mr;
  uchar mg;
  uchar mrh;
  uchar mgh;
  uchar mbh;
  int tw;
  uint clpz2;
  ulong tx0;
  int (*local_100) [4];
  
  iVar9 = monochrome_mode;
  puVar14 = vv;
  puVar18 = vv;
  clpz2 = 0xffffff;
  wcpos._0_8_ = DAT_0034bc80;
  wcpos._8_8_ = DAT_0034bc88;
  if ((ec->dat).uc8[1] == 0) {
    pvVar2 = ec->pnt[5];
    fVar25 = *(float *)((int)pvVar2 + 0x40) * 25.0;
    fVar24 = *(float *)((int)pvVar2 + 0x4c);
    fVar26 = *(float *)((int)pvVar2 + 0x44) * 25.0;
    fVar30 = fVar24 * 60.0;
    if (monochrome_mode == 0) {
      _mr = (uint)(ec->dat).uc8[2];
      _mg = (uint)(ec->dat).uc8[3];
      uVar22 = (uint)(ec->dat).uc8[4];
    }
    else {
      uVar22 = ((uint)(ec->dat).uc8[2] + (uint)(ec->dat).uc8[3] + (uint)(ec->dat).uc8[4]) / 3 & 0xff
      ;
      _mr = uVar22;
      _mg = uVar22;
    }
    uVar8 = ec->flow;
    fVar28 = (ec->dat).fl32[2];
    _mrh = (uint)(ec->dat).uc8[5];
    _mgh = (uint)(ec->dat).uc8[6];
    _mbh = (uint)(ec->dat).uc8[7];
    fVar32 = (ec->dat).fl32[3];
    uVar21 = ec->cnt;
    fVar29 = ec->fw[1];
    fVar27 = ec->fw[2];
    fVar31 = ec->fw[0];
    if (uVar8 == 1) {
      fVar25 = *(float *)((int)pvVar2 + 0x38) - fVar24 * DAT_0035565c;
      fVar29 = fVar29 + *(float *)((int)pvVar2 + 0x48) * 18.0;
      fVar27 = fVar27 + fVar24 * 74.0;
      if (fVar25 <= fVar24 * DAT_00355658) {
        fVar25 = fVar24 * DAT_00355658;
      }
      *(float *)((int)pvVar2 + 0x38) = fVar25;
      if (*(char *)((int)pvVar2 + 0x54) != '\0') {
        VibrateRequest1(0,1);
      }
      in_f27 = (fVar27 * 150.0) / DAT_00355668;
      iVar9 = monochrome_mode;
      if (5 < (int)uVar21) {
        ec->flow = 2;
        iVar9 = monochrome_mode;
      }
    }
    else if (uVar8 == 0) {
      in_f27 = 0.0;
      *(float *)((int)pvVar2 + 0x38) = fVar24 * 0.5;
      *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
      uVar21 = 0;
      fVar29 = 1.0;
      fVar27 = fVar29;
      if (plyr_wrk.dop._13_1_ == '\x0e') {
        SeStartPosEventFlame(0xe,0,(float *)ec->pnt[0],0,0x1000,0x1000);
      }
      else if (plyr_wrk.dop._13_1_ == '\x1d') {
        SeStartPosSrundFlame(0x1d,(float *)ec->pnt[0],0,0x1000,0x1000);
      }
      else {
        SeStartPut(0x11,(float *)ec->pnt[0],0,0x1000,0x1000,0xff);
      }
      ec->flow = 1;
      iVar9 = monochrome_mode;
    }
    else if (uVar8 == 2) {
      fVar23 = *(float *)((int)pvVar2 + 0x38) - fVar24 * DAT_00355664;
      if (fVar23 <= fVar24 * DAT_00355660) {
        fVar23 = fVar24 * DAT_00355660;
      }
      fVar29 = fVar29 - *(float *)((int)pvVar2 + 0x48) * 8.0;
      *(float *)((int)pvVar2 + 0x38) = fVar23;
      if (fVar29 <= fVar25) {
        fVar29 = fVar25;
      }
      fVar27 = fVar27 - fVar24 * 16.0;
      if (fVar27 <= fVar26) {
        fVar27 = fVar26;
      }
      in_f27 = (fVar27 * 144.0) / DAT_0035566c + 6.0;
      if ((fVar27 <= fVar26) && (fVar29 <= fVar25)) {
        furn_id = *(short *)((int)pvVar2 + 0x50);
        ec->flow = 0xff;
        FSpeFinishFlgOff(furn_id);
        iVar9 = monochrome_mode;
      }
    }
    else if (uVar8 == 0xff) {
      in_f27 = 6.0;
      *(undefined4 *)((int)pvVar2 + 0x38) = DAT_00355670;
      fVar27 = fVar26;
      fVar29 = fVar25;
    }
    if (stop_effects == 0) {
      uVar21 = uVar21 + 1;
    }
                    /* inlined from ../../graphics/graph3d/libsg.h */
    puVar3 = (undefined8 *)ec->pnt[0];
                    /* end of inlined section */
    iVar9 = ((((int)uVar21 / 3) % 7) * 2 + iVar9 + 0x20) * 0x20;
    tx0 = *(ulong *)(&effdat + iVar9);
    uVar1 = *(ushort *)(&DAT_0026be4e + iVar9);
    tw = (uint)*(ushort *)(&DAT_0026be4c + iVar9) << 4;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    vpos[2] = *(float *)(puVar3 + 1);
    vpos[3] = *(float *)((int)puVar3 + 0xc);
    vpos[0] = (float)*puVar3;
    vpos[1] = (float)((ulong)*puVar3 >> 0x20);
                    /* end of inlined section */
    iVar19 = 0;
    Get2PosRot((float *)&camera,&camera.i.x,&rot_x,&rot_y);
    sceVu0UnitMatrix((Matrix4x4 *)wlm);
    wlm[0][0] = fVar29 * fVar28;
    wlm[1][1] = fVar27 * fVar28;
    wlm[2][2] = wlm[0][0];
    sceVu0RotMatrixX(DAT_00355674,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0RotMatrixY(rot_y,(Matrix4x4 *)wlm,(Matrix4x4 *)wlm);
    sceVu0TransMatrix((Matrix4x4 *)wlm,(Matrix4x4 *)wlm,(Vector4 *)vpos);
    sceVu0MulMatrix((Matrix4x4 *)slm,&SgWSMtx,(Matrix4x4 *)wlm);
    sceVu0ApplyMatrix((Vector4 *)((int)pvVar2 + 0x10),(Matrix4x4 *)wlm,(Vector4 *)wcpos);
    fVar24 = DAT_00355678;
    local_100 = ivec;
    iVar9 = 0;
    pafVar11 = vtw[1];
    do {
      iVar20 = iVar9 / 0x18;
      iVar7 = 0x17 - iVar19;
      pafVar11[-1][0] = -2.0;
      (*pafVar11)[0] = 2.0;
      iVar19 = iVar19 + 1;
      (*pafVar11)[2] = 0.0;
      iVar9 = iVar9 + (uint)uVar1 * 0x10;
      pafVar11[-1][2] = 0.0;
      (*pafVar11)[3] = 1.0;
      pafVar11[-1][3] = 1.0;
      fVar25 = ((float)iVar7 * 8.0) / 24.0;
      pafVar11[-1][1] = fVar25;
      (*pafVar11)[1] = fVar25;
      pafVar11 = pafVar11[2];
      *puVar14 = iVar20;
      puVar14 = (uint *)((int *)puVar14 + 1);
    } while (iVar19 < 0x18);
    iVar9 = 0;
    fVar25 = 180.0;
    pafVar11 = vtw[1];
    do {
      fVar26 = (float)iVar9;
      iVar9 = iVar9 + 1;
      fVar28 = SgSinf(((*(float *)((int)pvVar2 + 0x3c) + fVar26 * fVar30) * fVar24) / fVar25);
      fVar26 = fVar28 * *(float *)((int)pvVar2 + 0x38) * (11.5 - ABS(11.5 - fVar26));
      (*pafVar11)[0] = (*pafVar11)[0] + fVar26;
      pafVar11[-1][0] = pafVar11[-1][0] + fVar26;
      pafVar11 = pafVar11[2];
    } while (iVar9 < 0x18);
    *(float *)((int)pvVar2 + 0x3c) = *(float *)((int)pvVar2 + 0x3c) + fVar30;
    sceVu0RotTransPersN(local_100,(Matrix4x4 *)slm,vtw,0x30,0);
    bVar5 = false;
    uVar8 = (*local_100)[0];
    paiVar12 = local_100;
    while( true ) {
      if ((uVar8 < 0x1c00) || (0xe400 < uVar8)) {
        bVar5 = true;
        uVar8 = (*paiVar12)[1];
      }
      else {
        uVar8 = (*paiVar12)[1];
      }
      if ((uVar8 < 0x1c00) || (0xe400 < uVar8)) {
        bVar5 = true;
        uVar8 = (*paiVar12)[2];
      }
      else {
        uVar8 = (*paiVar12)[2];
      }
      if ((uVar8 < 0xff) || (clpz2 < uVar8)) {
        bVar5 = true;
      }
      paiVar12 = paiVar12[1];
      if ((int)vtw <= (int)paiVar12) break;
      uVar8 = (*paiVar12)[0];
    }
    if (bVar5) {
      ec->fw[2] = fVar27;
    }
    else {
      ipos[2] = ec->z;
      ipos[0] = (ivec[0][0] + ivec[47][0]) / 2;
      iVar19 = (ivec[47][0] - ivec[0][0]) / 2;
      ipos[3] = 0;
      ipos[1] = (int)((float)(ivec[0][1] - ivec[47][1]) * DAT_0035567c + (float)ivec[47][1]);
      iVar9 = (ivec[47][1] - ivec[0][1]) / 2;
      if (iVar9 < iVar19) {
        iVar9 = iVar19;
      }
      if (stop_effects == 0) {
                    /* inlined from effect.h */
        auVar33 = _vrnext(in_vuR);
        auVar33 = _vsubbc(auVar33,in_vf0);
        auVar33 = _qmfc2(SUB164(auVar33,0));
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        rnbk_141 = (int)(SUB164(auVar33,0) * 8.0);
      }
      iVar19 = rnbk_141;
      fVar32 = (float)iVar9 * 0.0625 * fVar32;
      fVar24 = (float)(rnbk_141 / 2 + 5);
      iVar9 = monochrome_mode + 0x16;
      iVar20 = 0x17;
      *(float *)((int)pvVar2 + 0x34) = (fVar24 + fVar24 + in_f27) * fVar31;
      SetEffSQITex(iVar9,ipos,3,fVar32,fVar32,(uchar)_mrh,(uchar)_mgh,(uchar)_mbh,
                   (uchar)(int)(fVar24 * fVar31));
      SetEffSQITex(monochrome_mode + 0x16,ipos,3,fVar32 * 0.5,fVar32 * 0.5,(uchar)_mrh,(uchar)_mgh,
                   (uchar)_mbh,(uchar)(int)((float)(iVar19 + 2) * fVar31));
      Reserve2DPacket(0x1000);
      pQVar6 = pbuf;
      iVar9 = ndpkt;
      pQVar16 = pbuf + ndpkt;
      pQVar16->ui32[0] = 0;
      pQVar16->ui32[1] = 0;
      pQVar16->ui32[2] = 0;
      pQVar16->ui32[3] = 0;
      pQVar6[ndpkt + 1].ul64[0] = 0x1000000000008006;
      pQVar6[ndpkt + 1].ul64[1] = 0xe;
      pQVar6[ndpkt + 2].ul64[0] = 0;
      pQVar6[ndpkt + 2].ul64[1] = 0x3f;
      pQVar6[ndpkt + 3].ul64[0] = tx0;
      pQVar6[ndpkt + 3].ul64[1] = 6;
      pQVar6[ndpkt + 4].ul64[0] = 0x161;
      pQVar6[ndpkt + 4].ul64[1] = 0x14;
      pQVar6[ndpkt + 5].ul64[0] = 0x10100008c;
      pQVar6[ndpkt + 5].ul64[1] = 0x4e;
      pQVar6[ndpkt + 6].ul64[0] = 0x48;
      pQVar6[ndpkt + 6].ul64[1] = 0x42;
      iVar19 = ndpkt + 8;
      pQVar6[ndpkt + 7].ul64[1] = 0x47;
      pQVar6[ndpkt + 7].ul64[0] = 0x5000d;
      pQVar6[iVar19].ul64[1] = 0x431431;
      ndpkt = ndpkt + 9;
      pQVar6[iVar19].ul64[0] = 0x60ae400000008018;
      uVar8 = fptoui(fVar31 * 96.0);
      local_100 = local_100[1];
      do {
        iVar20 = iVar20 + -1;
        pQVar16 = pQVar6 + ndpkt;
        pQVar16->ui32[3] = uVar8;
        pQVar10 = pQVar6 + ndpkt + 1;
        iVar19 = ndpkt + 6;
        pQVar16->ui32[0] = _mr;
        pQVar13 = pQVar6 + ndpkt + 2;
        pQVar16->ui32[2] = uVar22;
        pQVar17 = pQVar6 + ndpkt + 5;
        pQVar16->ui32[1] = _mg;
        pQVar10->ui32[0] = 0;
        pQVar16 = pQVar6 + ndpkt + 3;
        pQVar15 = pQVar6 + ndpkt + 4;
        uVar4 = *puVar18;
        pQVar10->ui32[3] = 0;
        pQVar10->ui32[1] = uVar4;
        pQVar10->ui32[2] = 0;
        pQVar13->ui32[0] = local_100[-1][0];
        pQVar13->ui32[1] = local_100[-1][1];
        uVar4 = local_100[-1][2];
        pQVar13->ui32[3] = 0;
        pQVar13->ui32[2] = uVar4;
        pQVar16->ui32[3] = uVar8;
        pQVar16->ui32[0] = _mr;
        pQVar16->ui32[2] = uVar22;
        pQVar16->ui32[1] = _mg;
        pQVar15->iv[0] = tw;
        uVar4 = *puVar18;
        pQVar15->ui32[3] = 0;
        puVar18 = puVar18 + 1;
        pQVar15->ui32[1] = uVar4;
        pQVar15->ui32[2] = 0;
        pQVar17->ui32[0] = (*local_100)[0];
        pQVar17->ui32[1] = (*local_100)[1];
        uVar4 = (*local_100)[2];
        pQVar17->ui32[3] = 0;
        local_100 = local_100[2];
        pQVar17->ui32[2] = uVar4;
        ndpkt = iVar19;
      } while (-1 < iVar20);
      pbuf[iVar9].ui32[0] = (iVar19 - (iVar9 + -0x70000000)) - 1;
      ec->fw[2] = fVar27;
    }
    ec->cnt = uVar21;
    ec->fw[1] = fVar29;
  }
  else {
    ResetEffects(ec);
  }
  return;
}

void SetRDFire3(FURN_ACT_WRK *f1, FURN_ACT_WRK *f2, FURN_ACT_WRK *f3, FURN_ACT_WRK *f4, FURN_ACT_WRK *f5, FURN_ACT_WRK *f6) {
	int i;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = ef_rdfire3_call + 5;
  iVar1 = 5;
  ef_rdfire3_cnt = 0;
  ef_rdfire3[0] = f1;
  ef_rdfire3[1] = f2;
  ef_rdfire3[2] = f3;
  ef_rdfire3[3] = f4;
  ef_rdfire3[4] = f5;
  ef_rdfire3[5] = f6;
  do {
    *piVar2 = -1;
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar1);
  return;
}

void ResetRDFire3() {
	int i;
	
  FURN_ACT_WRK *pFVar1;
  FURN_ACT_WRK **ppFVar2;
  int iVar3;
  
  iVar3 = 5;
  ppFVar2 = ef_rdfire3;
  pFVar1 = ef_rdfire3[0];
  while( true ) {
    iVar3 = iVar3 + -1;
    ppFVar2 = ppFVar2 + 1;
    ResetRDLongFire(pFVar1->furn_id);
    if (iVar3 < 0) break;
    pFVar1 = *ppFVar2;
  }
  ef_rdfire3_cnt = -1;
  return;
}

void SubRDFire3() {
	int i;
	int time[6];
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  int time [6];
  
  uVar1 = (int)time + 7U & 7;
  puVar2 = (ulong *)(((int)time + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034bcc0 >> (7 - uVar1) * 8;
  time._0_8_ = DAT_0034bcc0;
  uVar1 = (int)time + 0xfU & 7;
  puVar2 = (ulong *)(((int)time + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034bcc8 >> (7 - uVar1) * 8;
  time._8_8_ = DAT_0034bcc8;
  uVar1 = (int)time + 0x17U & 7;
  puVar2 = (ulong *)(((int)time + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_0034bcd0 >> (7 - uVar1) * 8;
  time._16_8_ = DAT_0034bcd0;
  iVar3 = 0;
  if (-1 < ef_rdfire3_cnt) {
    do {
      if ((time[iVar3] < ef_rdfire3_cnt) && (ef_rdfire3_call[iVar3] == -1)) {
        SetRDLongFire2(ef_rdfire3[iVar3]->pos,'\0',1.0,1.0,DAT_00355680,DAT_00355684,100.0,80.0,40.0
                       ,0.0,ef_rdfire3[iVar3]->furn_id);
        ef_rdfire3_call[iVar3] = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (ef_rdfire3_call[5] == 1) {
      ef_rdfire3_cnt = -1;
    }
    else {
      ef_rdfire3_cnt = ef_rdfire3_cnt + 1;
    }
  }
  return;
}

void SetRDPazzEne(float *pos) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
  ef_pazzene_p[0] = *pos;
  ef_pazzene_p[1] = pos[1];
  ef_pazzene_p[2] = pos[2];
  ef_pazzene_p[3] = pos[3];
                    /* end of inlined section */
  ef_pazz_ene_flow = '\x03';
  return;
}

void ResetRDPazzEne() {
  ef_pazz_ene_flow = '\x05';
  return;
}

void SetRoomDirecPazzEne() {
	static u_char alp;
	sceVu0FVECTOR bpos;
	
  int iVar1;
  uint uVar2;
  float bpos [4];
  
  bpos[0] = (float)ef_pazzene_p._0_8_;
  bpos[1] = (float)((ulong)ef_pazzene_p._0_8_ >> 0x20);
  switch(ef_pazz_ene_flow) {
  case '\x01':
    iVar1 = LoadReq(DAT_002f5d6c,0x1cb0000);
    g2d_load_flg.pazz = (uchar)iVar1;
    ef_pazz_ene_flow = '\x02';
  case '\x02':
    iVar1 = IsLoadEnd((uint)g2d_load_flg.pazz);
    if (iVar1 != 0) {
      ef_pazz_ene_flow = '\x03';
    }
    break;
  case '\x03':
    alp_160 = 0;
    ef_pazz_ene_flow = '\x04';
  case '\x04':
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    uVar2 = alp_160 + 4;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    if (0x40 < uVar2) {
      uVar2 = 0x40;
    }
    alp_160 = (byte)uVar2;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    bpos[2] = ef_pazzene_p[2];
    bpos[3] = ef_pazzene_p[3];
                    /* end of inlined section */
    DrawRareEne_Sub(2,2,bpos,0x88,0,uVar2 & 0xff);
    break;
  case '\x05':
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    uVar2 = alp_160 - 4;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    alp_160 = (byte)uVar2;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    bpos[2] = ef_pazzene_p[2];
    bpos[3] = ef_pazzene_p[3];
                    /* end of inlined section */
    DrawRareEne_Sub(2,2,bpos,0x88,0,uVar2 & 0xff);
    if (alp_160 == 0) {
      ef_pazz_ene_flow = '\x06';
    }
    break;
  case '\x06':
    ef_pazz_ene_flow = '\0';
  }
  return;
}

void SetRDSmoke() {
  ef_smoke_addr[0] = SetEffects(0x1a,2);
  ef_smoke_addr[1] = SetEffects(0x1a,2);
  ef_smoke_addr[2] = SetEffects(0x1a,2);
  ef_smoke_addr[3] = SetEffects(0x1a,2);
  return;
}

void ResetRDSmoke() {
  ResetEffects(ef_smoke_addr[0]);
  ResetEffects(ef_smoke_addr[1]);
  ResetEffects(ef_smoke_addr[2]);
  ResetEffects(ef_smoke_addr[3]);
  return;
}

void SetRoomDirecSmoke() {
	int room_id;
	
  if (plyr_wrk.dop._13_1_ == 3) {
    if (room_old != 3) {
      SetRDSmoke();
    }
  }
  else if (room_old == 3) {
    ResetRDSmoke();
  }
  room_old = (uint)plyr_wrk.dop._13_1_;
  return;
}

void SetRDSunshine(int n) {
  void *pvVar1;
  
  if (*(int *)(&DAT_00297b10 + n * 0x50) == 0) {
    pvVar1 = SetEffects(0x1f,2);
    *(void **)(&DAT_00297b10 + n * 0x50) = pvVar1;
  }
  return;
}

void ResetRDSunshine(int n) {
  ResetEffects(*(void **)(&DAT_00297b10 + n * 0x50));
  *(undefined4 *)(&DAT_00297b10 + n * 0x50) = 0;
  return;
}

short int GetRDBloodDropWork() {
	int i;
	
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = &blood_drop_rsv[0].furn_id;
  do {
    if (*puVar2 == 0xffff) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 0x10);
  return 0xffff;
}

short int SearchRDBloodDropWork(u_short furn_id) {
	int i;
	
  int iVar1;
  EFFRDR_RSV *pEVar2;
  
  pEVar2 = blood_drop_rsv;
  iVar1 = 0;
  do {
    if ((long)(short)pEVar2->furn_id == ((long)furn_id & 0xffffU)) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    pEVar2 = pEVar2 + 1;
  } while (iVar1 < 0x10);
  return 0xffff;
}

void SetRDBloodDrop(float *pos, int sta, u_short furn_id) {
	int ret;
	
  ushort uVar1;
  void *pvVar2;
  
  uVar1 = GetRDBloodDropWork();
  if (-1 < (short)uVar1) {
    pvVar2 = SetEffects(0x1e,2);
    blood_drop_rsv[(short)uVar1].adr = pvVar2;
    blood_drop_rsv[(short)uVar1].furn_id = furn_id;
  }
  return;
}

void ResetRDBloodDrop(u_short furn_id) {
  ushort uVar1;
  
  uVar1 = SearchRDBloodDropWork(furn_id);
  if (-1 < (short)uVar1) {
    ResetEffects(blood_drop_rsv[(short)uVar1].adr);
    blood_drop_rsv[(short)uVar1].furn_id = 0xffff;
  }
  return;
}

short int GetRDPFireWork() {
	int i;
	
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = &pfire_rsv[0].furn_id;
  do {
    if (*puVar2 == 0xffff) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 4);
  return 0xffff;
}

short int SearchRDPFireWork(u_short furn_id) {
	int i;
	
  int iVar1;
  EFFRDR_RSV *pEVar2;
  
  pEVar2 = pfire_rsv;
  iVar1 = 0;
  do {
    if ((long)(short)pEVar2->furn_id == ((long)furn_id & 0xffffU)) {
      return (ushort)iVar1;
    }
    iVar1 = iVar1 + 1;
    pEVar2 = pEVar2 + 1;
  } while (iVar1 < 4);
  return 0xffff;
}

void SetRDPFire(float *pos, u_short furn_id) {
  ushort uVar1;
  void *pvVar2;
  
  uVar1 = GetRDPFireWork();
  if (-1 < (short)uVar1) {
    pvVar2 = SetEffects(0x19,2);
    pfire_rsv[(short)uVar1].furn_id = furn_id;
    pfire_rsv[(short)uVar1].adr = pvVar2;
  }
  return;
}

void SetRDPFire2(float *pos, u_short furn_id) {
	EFFECT_CONT *ecw;
	
  ushort uVar1;
  
  uVar1 = SearchRDPFireWork(furn_id);
  if (-1 < (short)uVar1) {
    *(undefined *)((int)pfire_rsv[(short)uVar1].adr + 3) = 0x12;
  }
  return;
}

void ResetRDPFire(u_short furn_id) {
	HEAT_HAZE *hh;
	EFFECT_CONT *ec;
	
  void *p;
  ushort uVar1;
  
  uVar1 = SearchRDPFireWork(furn_id);
  if (-1 < (short)uVar1) {
    p = pfire_rsv[(short)uVar1].adr;
    *(undefined2 *)(*(int *)((int)p + 0x14) + 0x3208) = 0;
    ResetEffects(p);
    pfire_rsv[(short)uVar1].furn_id = 0xffff;
  }
  return;
}
