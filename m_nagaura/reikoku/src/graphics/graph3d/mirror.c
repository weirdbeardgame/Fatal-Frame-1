// STATUS: NOT STARTED

typedef struct {
	sceVu0FVECTOR vp;
	sceVu0FVECTOR clip;
} MNODE;

typedef struct {
	MNODE node0[10];
	MNODE node1[10];
	MNODE *in;
	MNODE *out;
	int nodes;
} MFlipNode;

static int mxmax;
static int mxmin;
static int mymax;
static int mymin;
static float mzmax;
static float mzmin;
sceVu0FMATRIX mir_mtx = {
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
};
sceVu0FVECTOR mir_norm = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
sceVu0FVECTOR mir_center = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};
int mirror_points = 0;
sceVu0FVECTOR mirror_lpos[5] = {
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
	}
};
sceVu0FVECTOR mirror_cval[5] = {
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
	}
};

static int MirrorLineClip(float *v0, float *v1) {
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2(*(undefined (*) [16])v0);
  auVar3 = _lqc2(*(undefined (*) [16])v1);
  _vclip(auVar2,auVar2);
  _vclip(auVar3,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

static int GetClipValue() {
  undefined8 uVar1;
  undefined4 in_vc2;
  
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

int CheckMirrorModel(void *sgd_top) {
	u_int *prim;
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_v0_lo;
  
  puVar1 = *(undefined4 **)((int)sgd_top + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (int)in_v0_lo;
    }
    if (puVar1[1] == 0x40) break;
    in_v0_lo = (undefined4 *)*puVar2;
    puVar1 = puVar2;
    puVar2 = in_v0_lo;
  }
  return puVar1[2];
}

void MirrorInterPNode(MNODE *dst, MNODE *inner, MNODE *outer, ClipData *cldata) {
	float alpha;
	float ialpha;
	float *v0;
	float *v1;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined in_vf0 [16];
  undefined auVar5 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  
  fVar2 = inner->clip[cldata->xyz] - cldata->sgn * inner->clip[3];
  fVar3 = ABS(fVar2 / ((outer->clip[cldata->xyz] - cldata->sgn * outer->clip[3]) - fVar2));
  fVar4 = 1.0 - fVar3;
  dst->vp[0] = inner->vp[0] * fVar4 + outer->vp[0] * fVar3;
  dst->vp[1] = inner->vp[1] * fVar4 + outer->vp[1] * fVar3;
  fVar1 = inner->vp[2];
  fVar2 = outer->vp[2];
  dst->vp[3] = 1.0;
  dst->vp[2] = fVar1 * fVar4 + fVar2 * fVar3;
  auVar5 = _lqc2(*(undefined (*) [16])dst->vp);
  _vmulabc(in_vf25,auVar5);
  _vmaddabc(in_vf26,auVar5);
  _vmaddabc(in_vf27,auVar5);
  auVar5 = _vmaddbc(in_vf28,in_vf0);
  auVar5 = _sqc2(auVar5);
  *(undefined (*) [16])dst->clip = auVar5;
  return;
}

void SliceMirrorPolygon(MFlipNode *fn, ClipData *cldata) {
	int i;
	int clip;
	int newnodes;
	int currmask;
	int nextmask;
	MNODE *currN;
	MNODE *nextN;
	MNODE *swap;
	MNODE interN;
	MNODE *dst;
	MNODE *src;
	float *v1;
	float *v0;
	float *v0;
	MNODE *dst;
	MNODE *src;
	float *v1;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	float *v1;
	
  uint uVar1;
  MNODE *pMVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  MNODE *pMVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  MNODE *outer;
  float *v0;
  int iVar11;
  int iVar12;
  MNODE interN;
  int currmask;
  
  iVar12 = 0;
  iVar9 = 0;
  uVar1 = cldata->mask;
  if (0 < fn->nodes) {
    iVar11 = 0;
    pMVar6 = fn->in;
    do {
      outer = pMVar6 + iVar12;
      pMVar6 = pMVar6 + iVar12 + 1;
      v0 = outer->clip;
      uVar4 = MirrorLineClip(v0,pMVar6->clip);
      if ((uVar4 & (uVar1 | uVar1 << 6)) == 0) {
        iVar9 = iVar9 + 1;
        puVar5 = (undefined4 *)((int)fn->out->vp + iVar11);
        uVar3 = *(undefined8 *)outer->vp;
                    /* inlined from ../../graphics/graph3d/libsg.h */
        fVar7 = outer->vp[2];
        fVar8 = outer->vp[3];
        *puVar5 = (int)uVar3;
        puVar5[1] = (int)((ulong)uVar3 >> 0x20);
        puVar5[2] = fVar7;
        puVar5[3] = fVar8;
        uVar3 = *(undefined8 *)v0;
        fVar7 = outer->clip[2];
        fVar8 = outer->clip[3];
        puVar5[4] = (int)uVar3;
        puVar5[5] = (int)((ulong)uVar3 >> 0x20);
        puVar5[6] = fVar7;
        puVar5[7] = fVar8;
                    /* end of inlined section */
        iVar11 = iVar9 * 0x20;
LAB_0017d77c:
        iVar10 = fn->nodes;
      }
      else if ((uVar4 & uVar1 << 6) == 0) {
        if ((uVar4 & uVar1) != 0) {
          pMVar2 = fn->out;
          iVar10 = iVar9 + 1;
          puVar5 = (undefined4 *)((int)pMVar2->vp + iVar11);
          uVar3 = *(undefined8 *)outer->vp;
                    /* inlined from ../../graphics/graph3d/libsg.h */
          fVar7 = outer->vp[2];
          fVar8 = outer->vp[3];
          *puVar5 = (int)uVar3;
          puVar5[1] = (int)((ulong)uVar3 >> 0x20);
          puVar5[2] = fVar7;
          puVar5[3] = fVar8;
          uVar3 = *(undefined8 *)v0;
          fVar7 = outer->clip[2];
          fVar8 = outer->clip[3];
          puVar5[4] = (int)uVar3;
          puVar5[5] = (int)((ulong)uVar3 >> 0x20);
          puVar5[6] = fVar7;
          puVar5[7] = fVar8;
                    /* end of inlined section */
          iVar9 = iVar9 + 2;
          MirrorInterPNode(pMVar2 + iVar10,outer,pMVar6,cldata);
          iVar11 = iVar9 * 0x20;
          goto LAB_0017d77c;
        }
        iVar10 = fn->nodes;
      }
      else {
        if ((uVar4 & uVar1) == 0) {
          iVar9 = iVar9 + 1;
          MirrorInterPNode((MNODE *)((int)fn->out->vp + iVar11),pMVar6,outer,cldata);
          iVar11 = iVar9 * 0x20;
          goto LAB_0017d77c;
        }
        iVar10 = fn->nodes;
      }
      iVar12 = iVar12 + 1;
      if (iVar10 <= iVar12) goto code_r0x0017d790;
      pMVar6 = fn->in;
    } while( true );
  }
  iVar11 = 0;
                    /* inlined from ../../graphics/graph3d/libsg.h */
  pMVar6 = fn->out;
LAB_0017d7a0:
  puVar5 = (undefined4 *)((int)pMVar6->vp + iVar11);
  uVar3 = *(undefined8 *)pMVar6->vp;
  fVar7 = pMVar6->vp[2];
  fVar8 = pMVar6->vp[3];
  *puVar5 = (int)uVar3;
  puVar5[1] = (int)((ulong)uVar3 >> 0x20);
  puVar5[2] = fVar7;
  puVar5[3] = fVar8;
  uVar3 = *(undefined8 *)pMVar6->clip;
  fVar7 = pMVar6->clip[2];
  fVar8 = pMVar6->clip[3];
  puVar5[4] = (int)uVar3;
  puVar5[5] = (int)((ulong)uVar3 >> 0x20);
  puVar5[6] = fVar7;
  puVar5[7] = fVar8;
                    /* end of inlined section */
  fn->nodes = iVar9;
  fn->out = fn->in;
  fn->in = pMVar6;
  return;
code_r0x0017d790:
  pMVar6 = fn->out;
  goto LAB_0017d7a0;
}

static void CalcOuterProduct(float *out, int *p0) {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])p0);
  auVar2 = _lqc2(*(undefined (*) [16])(p0 + 0xc));
  auVar3 = _lqc2(*(undefined (*) [16])(p0 + 0x18));
  _vitof4(auVar1);
  auVar1 = _vmove(in_vf0);
  _vitof4(auVar2);
  auVar2 = _vmove(in_vf0);
  _vitof4(auVar3);
  auVar3 = _vmove(in_vf0);
  auVar1 = _vsub(auVar1,auVar2);
  auVar2 = _vsub(auVar2,auVar3);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar2 = _lqc2(*(undefined (*) [16])out);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])out = auVar1;
  return;
}

void CalcScreenMirror(float *vp0, float *vp1, float *vp2, float sgn) {
	int i;
	int allclip;
	qword screen_xyz[20];
	qword *pbase;
	MFlipNode *fn;
	sceVu0FVECTOR out;
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	sceVu0FVECTOR v2;
	static ClipData cldata[6] = {
		/* [0] = */ {
			/* .mask = */ 16,
			/* .xyz = */ 2,
			/* .sgn = */ 1.f
		},
		/* [1] = */ {
			/* .mask = */ 32,
			/* .xyz = */ 2,
			/* .sgn = */ -1.f
		},
		/* [2] = */ {
			/* .mask = */ 1,
			/* .xyz = */ 0,
			/* .sgn = */ 1.f
		},
		/* [3] = */ {
			/* .mask = */ 2,
			/* .xyz = */ 0,
			/* .sgn = */ -1.f
		},
		/* [4] = */ {
			/* .mask = */ 4,
			/* .xyz = */ 1,
			/* .sgn = */ 1.f
		},
		/* [5] = */ {
			/* .mask = */ 8,
			/* .xyz = */ 1,
			/* .sgn = */ -1.f
		}
	};
	MNODE *nm;
	MNODE *nm;
	MNODE *nm;
	MNODE *nm;
	float *v0;
	float *v0;
	float *v0;
	float *v0;
	int *base;
	int *base;
	float *vp;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined (*pauVar4) [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int (*paiVar8) [4];
  int (*paiVar9) [4];
  int iVar10;
  int iVar11;
  int iVar12;
  ClipData *cldata;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf4_00 [16];
  undefined extraout_vf4_01 [16];
  undefined extraout_vf4_02 [16];
  undefined extraout_vf4_03 [16];
  undefined extraout_vf4_04 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf5_00 [16];
  undefined extraout_vf5_01 [16];
  undefined extraout_vf5_02 [16];
  undefined extraout_vf5_03 [16];
  undefined extraout_vf5_04 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf6_00 [16];
  undefined extraout_vf6_01 [16];
  undefined extraout_vf6_02 [16];
  undefined extraout_vf6_03 [16];
  undefined extraout_vf6_04 [16];
  undefined extraout_vf7 [16];
  undefined extraout_vf7_00 [16];
  undefined extraout_vf7_01 [16];
  undefined extraout_vf7_02 [16];
  undefined auVar18 [16];
  undefined extraout_vf7_03 [16];
  undefined extraout_vf7_04 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf8_00 [16];
  undefined extraout_vf8_01 [16];
  undefined extraout_vf8_02 [16];
  undefined auVar19 [16];
  undefined extraout_vf8_03 [16];
  undefined extraout_vf8_04 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf9_00 [16];
  undefined extraout_vf9_01 [16];
  undefined extraout_vf9_02 [16];
  undefined auVar20 [16];
  undefined extraout_vf9_03 [16];
  undefined extraout_vf9_04 [16];
  undefined extraout_vf10 [16];
  undefined extraout_vf10_00 [16];
  undefined extraout_vf10_01 [16];
  undefined extraout_vf10_02 [16];
  undefined auVar21 [16];
  undefined extraout_vf10_03 [16];
  undefined extraout_vf10_04 [16];
  undefined extraout_vf11 [16];
  undefined extraout_vf11_00 [16];
  undefined extraout_vf11_01 [16];
  undefined extraout_vf11_02 [16];
  undefined auVar22 [16];
  undefined extraout_vf11_03 [16];
  undefined extraout_vf11_04 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined4 uVar29;
  int screen_xyz [20] [4];
  float out [4];
  float v0 [4];
  float v1 [4];
  float v2 [4];
  
  paiVar8 = screen_xyz;
  paiVar9 = screen_xyz;
  DAT_70000944 = &DAT_70000800;
  DAT_70000940 = (undefined (*) [16])&DAT_700006c0;
  auVar25 = _lqc2(CONCAT412(0x3f800000,*(undefined (*) [12])vp0));
  _vmulabc(in_vf25,auVar25);
  _vmaddabc(in_vf26,auVar25);
  _vmaddabc(in_vf27,auVar25);
  auVar23 = _vmaddbc(in_vf28,in_vf0);
  _DAT_700006c0 = _sqc2(auVar25);
  _DAT_700006d0 = _sqc2(auVar23);
  auVar25 = _lqc2(CONCAT412(0x3f800000,*(undefined (*) [12])vp1));
  _vmulabc(in_vf25,auVar25);
  _vmaddabc(in_vf26,auVar25);
  _vmaddabc(in_vf27,auVar25);
  auVar23 = _vmaddbc(in_vf28,in_vf0);
  _DAT_700006e0 = _sqc2(auVar25);
  _DAT_700006f0 = _sqc2(auVar23);
  auVar25 = _lqc2(CONCAT412(0x3f800000,*(undefined (*) [12])vp2));
  _vmulabc(in_vf25,auVar25);
  _vmaddabc(in_vf26,auVar25);
  _vmaddabc(in_vf27,auVar25);
  auVar23 = _vmaddbc(in_vf28,in_vf0);
  _DAT_70000700 = _sqc2(auVar25);
  _DAT_70000710 = _sqc2(auVar23);
  auVar25 = _lqc2(CONCAT412(0x3f800000,*(undefined (*) [12])vp0));
  _vmulabc(in_vf25,auVar25);
  _vmaddabc(in_vf26,auVar25);
  _vmaddabc(in_vf27,auVar25);
  auVar23 = _vmaddbc(in_vf28,in_vf0);
  _DAT_70000720 = _sqc2(auVar25);
  _DAT_70000730 = _sqc2(auVar23);
  DAT_70000948 = 3;
  auVar23 = _lqc2(_DAT_700006d0);
  _vclip(auVar23,auVar23);
  uVar1 = GetClipValue();
  auVar23 = _lqc2(DAT_70000940[3]);
  _vclip(auVar23,auVar23);
  uVar2 = GetClipValue();
  auVar23 = _lqc2(DAT_70000940[5]);
  _vclip(auVar23,auVar23);
  uVar3 = GetClipValue();
  uVar1 = uVar1 & 0x3f | uVar2 & 0x3f | uVar3 & 0x3f;
  auVar23 = extraout_vf4;
  auVar25 = extraout_vf5;
  auVar28 = extraout_vf6;
  auVar18 = extraout_vf7;
  auVar19 = extraout_vf8;
  auVar20 = extraout_vf9;
  auVar21 = extraout_vf10;
  auVar22 = extraout_vf11;
  if ((uVar1 & 0x30) != 0) {
    if ((uVar1 & cldata_156._0_4_) != 0) {
      SliceMirrorPolygon((MFlipNode *)&DAT_700006c0,(ClipData *)cldata_156);
      auVar23 = extraout_vf4_00;
      auVar25 = extraout_vf5_00;
      auVar28 = extraout_vf6_00;
      auVar18 = extraout_vf7_00;
      auVar19 = extraout_vf8_00;
      auVar20 = extraout_vf9_00;
      auVar21 = extraout_vf10_00;
      auVar22 = extraout_vf11_00;
    }
    if ((uVar1 & cldata_156._12_4_) != 0) {
      SliceMirrorPolygon((MFlipNode *)&DAT_700006c0,(ClipData *)(cldata_156 + 0xc));
      auVar23 = extraout_vf4_01;
      auVar25 = extraout_vf5_01;
      auVar28 = extraout_vf6_01;
      auVar18 = extraout_vf7_01;
      auVar19 = extraout_vf8_01;
      auVar20 = extraout_vf9_01;
      auVar21 = extraout_vf10_01;
      auVar22 = extraout_vf11_01;
    }
    iVar12 = 0;
    if (0 < DAT_70000948) {
      do {
        auVar23 = _lqc2(DAT_70000940[iVar12 * 2 + 1]);
        _vclip(auVar23,auVar23);
        iVar12 = iVar12 + 1;
        uVar2 = GetClipValue();
        uVar1 = uVar1 | uVar2 & 0x3f;
        auVar23 = extraout_vf4_02;
        auVar25 = extraout_vf5_02;
        auVar28 = extraout_vf6_02;
        auVar18 = extraout_vf7_02;
        auVar19 = extraout_vf8_02;
        auVar20 = extraout_vf9_02;
        auVar21 = extraout_vf10_02;
        auVar22 = extraout_vf11_02;
      } while (iVar12 < DAT_70000948);
    }
  }
  cldata = (ClipData *)(cldata_156 + 0x18);
  uVar2 = cldata_156._24_4_;
  while( true ) {
    if ((uVar1 & uVar2) != 0) {
      SliceMirrorPolygon((MFlipNode *)&DAT_700006c0,cldata);
      auVar23 = extraout_vf4_03;
      auVar25 = extraout_vf5_03;
      auVar28 = extraout_vf6_03;
      auVar18 = extraout_vf7_03;
      auVar19 = extraout_vf8_03;
      auVar20 = extraout_vf9_03;
      auVar21 = extraout_vf10_03;
      auVar22 = extraout_vf11_03;
    }
    cldata = cldata + 1;
    if (0x304527 < (int)cldata) break;
    uVar2 = cldata->mask;
  }
  if (2 < DAT_70000948) {
    iVar12 = 2;
    pauVar4 = DAT_70000940;
    do {
      auVar24 = _lqc2(*pauVar4);
      _vmulabc(auVar19,auVar24);
      _vmaddabc(auVar20,auVar24);
      _vmaddabc(auVar21,auVar24);
      auVar26 = _vmaddbc(auVar22,in_vf0);
      _vdiv(in_vf0,0,auVar26,0);
      _vmulabc(auVar23,auVar24);
      _vmaddabc(auVar25,auVar24);
      _vmaddabc(auVar28,auVar24);
      auVar24 = _vmaddbc(auVar18,auVar24);
      uVar29 = _vwaitq();
      auVar26 = _vmulq(auVar26,uVar29);
      auVar27 = _vftoi4(auVar26);
      auVar24 = _sqc2(auVar24);
      ((undefined (*) [16])paiVar8)[1] = auVar24;
      auVar24 = _sqc2(auVar27);
      *paiVar8 = (int  [4])auVar24;
      auVar24 = _sqc2(auVar26);
      ((undefined (*) [16])paiVar8)[2] = auVar24;
      paiVar8 = (int (*) [4])((undefined (*) [16])paiVar8)[3];
      pauVar4 = pauVar4[2];
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    out[2] = sgn;
    CalcOuterProduct(out,(int *)screen_xyz);
    if (0.0 <= out[2]) {
      mzmax = DAT_00355ab0;
    }
    else {
      iVar13 = 0;
      fVar14 = mzmin;
      fVar17 = mzmax;
      iVar12 = mxmax;
      iVar10 = mxmin;
      iVar11 = mymax;
      iVar6 = mymin;
      if (0 < DAT_70000948) {
        do {
          pauVar4 = DAT_70000940[iVar13 * 2];
          auVar23 = _lqc2(*pauVar4);
          _vmulabc(extraout_vf8_04,auVar23);
          _vmaddabc(extraout_vf9_04,auVar23);
          _vmaddabc(extraout_vf10_04,auVar23);
          auVar25 = _vmaddbc(extraout_vf11_04,in_vf0);
          _vdiv(in_vf0,0,auVar25,0);
          _vmulabc(extraout_vf4_04,auVar23);
          _vmaddabc(extraout_vf5_04,auVar23);
          _vmaddabc(extraout_vf6_04,auVar23);
          auVar23 = _vmaddbc(extraout_vf7_04,auVar23);
          uVar29 = _vwaitq();
          auVar25 = _vmulq(auVar25,uVar29);
          auVar28 = _vftoi4(auVar25);
          auVar23 = _sqc2(auVar23);
          ((undefined (*) [16])paiVar9)[1] = auVar23;
          auVar23 = _sqc2(auVar28);
          *paiVar9 = (int  [4])auVar23;
          auVar23 = _sqc2(auVar25);
          ((undefined (*) [16])paiVar9)[2] = auVar23;
          iVar7 = *(int *)*(undefined (*) [16])paiVar9;
          iVar5 = iVar7;
          if (iVar12 < iVar7) {
            iVar5 = *(int *)*(undefined (*) [16])paiVar9;
            iVar12 = iVar7;
            mxmax = iVar7;
          }
          if (iVar5 < iVar10) {
            iVar7 = *(int *)(*(undefined (*) [16])paiVar9 + 4);
            mxmin = iVar5;
          }
          else {
            iVar7 = *(int *)(*(undefined (*) [16])paiVar9 + 4);
            iVar5 = iVar10;
          }
          if (iVar11 < iVar7) {
            iVar11 = iVar7;
            mymax = iVar7;
          }
          if (iVar7 < iVar6) {
            fVar15 = *(float *)(((undefined (*) [16])paiVar9)[1] + 8);
            mymin = iVar7;
          }
          else {
            fVar15 = *(float *)(((undefined (*) [16])paiVar9)[1] + 8);
            iVar7 = iVar6;
          }
          fVar16 = fVar15;
          if (fVar15 < fVar17) {
            fVar16 = *(float *)(((undefined (*) [16])paiVar9)[1] + 8);
            fVar17 = fVar15;
            mzmax = fVar15;
          }
          if (fVar14 < fVar16) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
            mir_center[2] = *(float *)((int)*pauVar4 + 8);
            mir_center[3] = *(float *)((int)*pauVar4 + 0xc);
            mir_center[0] = (float)*(undefined8 *)*pauVar4;
            mir_center[1] = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
            fVar14 = fVar16;
            mzmin = fVar16;
          }
                    /* end of inlined section */
          iVar13 = iVar13 + 1;
          paiVar9 = (int (*) [4])((undefined (*) [16])paiVar9)[3];
          iVar10 = iVar5;
          iVar6 = iVar7;
        } while (iVar13 < DAT_70000948);
      }
    }
  }
  return;
}

void AppendLocalMPos(float *vp) {
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  float afVar1 [4];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined in_vf0 [16];
  undefined auVar5 [16];
  undefined in_vf25 [16];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  
  if (mirror_points < 5) {
                    /* inlined from ../../graphics/graph3d/libsg.h */
    fVar2 = vp[1];
    fVar3 = vp[2];
    fVar4 = vp[3];
    mirror_lpos[mirror_points][0] = *vp;
    mirror_lpos[mirror_points][1] = fVar2;
    mirror_lpos[mirror_points][2] = fVar3;
    mirror_lpos[mirror_points][3] = fVar4;
                    /* end of inlined section */
    auVar5 = _lqc2(*(undefined (*) [16])vp);
    _vmulabc(in_vf25,auVar5);
    _vmaddabc(in_vf26,auVar5);
    _vmaddabc(in_vf27,auVar5);
    auVar5 = _vmaddbc(in_vf28,in_vf0);
    afVar1 = (float  [4])_sqc2(auVar5);
    mirror_cval[mirror_points] = afVar1;
    mirror_points = mirror_points + 1;
  }
  return;
}

int MakeMirrorEnvironment(u_int *prim) {
	int i;
	int j;
	int loops;
	int gloops;
	int mtype;
	int disp_flg;
	sceVu0FVECTOR cp;
	float sgn;
	float *vp;
	sceVu0FVECTOR vertex;
	
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float cp [4];
  float vertex [4];
  
  mymin = 0xa800;
  mzmax = DAT_00355ab4;
  mzmin = 0.0;
  mxmin = 0xa800;
  mxmax = 0;
  mymax = 0;
  lVar10 = (long)*(char *)((int)prim + 0xe);
  iVar9 = 0;
  if (*(short *)((int)prim + 0x16) != 0) {
    puVar2 = prim + *(short *)((int)prim + 0x16);
    bVar1 = true;
    vertex[3] = 1.0;
    if (*(char *)((int)prim + 0xd) == '\x12') {
      lVar8 = 0;
      pfVar7 = (float *)(vuvnprim + 0xe);
      if (0 < lVar10) {
        do {
          fVar11 = 1.0;
          puVar2 = GetNextUnpackAddr(puVar2);
          iVar9 = 0;
          vertex[0] = *pfVar7;
          iVar3 = *(byte *)((int)puVar2 + 2) - 2;
          puVar2 = puVar2 + 7;
          vertex[1] = pfVar7[1];
          vertex[2] = pfVar7[2];
          AppendLocalMPos(vertex);
          vertex[0] = pfVar7[6];
          vertex[1] = pfVar7[7];
          vertex[2] = pfVar7[8];
          pfVar7 = pfVar7 + 0xc;
          AppendLocalMPos(vertex);
          lVar8 = (long)((int)lVar8 + 1);
          if (0 < iVar3) {
            do {
              if (*puVar2 != 1) {
                vertex[0] = *pfVar7;
                vertex[1] = pfVar7[1];
                vertex[2] = pfVar7[2];
                AppendLocalMPos(vertex);
                CalcScreenMirror(pfVar7 + -0xc,pfVar7 + -6,pfVar7,fVar11);
                if (DAT_00355ab8 < mzmax) {
                  bVar1 = false;
                }
              }
              iVar9 = iVar9 + 1;
              puVar2 = puVar2 + 3;
              pfVar7 = pfVar7 + 6;
              fVar11 = -fVar11;
            } while (iVar9 < iVar3);
          }
        } while (lVar8 < lVar10);
      }
    }
    else if (*(char *)((int)prim + 0xd) == '2') {
      lVar8 = 0;
      pfVar7 = (float *)(vuvnprim + *(short *)((int)vuvnprim + 10) * 3 + 0xe);
      if (0 < lVar10) {
        do {
          fVar11 = 1.0;
          puVar2 = GetNextUnpackAddr(puVar2);
          iVar9 = 0;
          vertex[0] = *pfVar7;
          iVar3 = *(byte *)((int)puVar2 + 2) - 2;
          puVar2 = puVar2 + 7;
          vertex[1] = pfVar7[1];
          vertex[2] = pfVar7[2];
          AppendLocalMPos(vertex);
          vertex[0] = pfVar7[3];
          vertex[1] = pfVar7[4];
          vertex[2] = pfVar7[5];
          pfVar7 = pfVar7 + 6;
          AppendLocalMPos(vertex);
          lVar8 = (long)((int)lVar8 + 1);
          if (0 < iVar3) {
            do {
              if (*puVar2 != 1) {
                vertex[0] = *pfVar7;
                vertex[1] = pfVar7[1];
                vertex[2] = pfVar7[2];
                AppendLocalMPos(vertex);
                CalcScreenMirror(pfVar7 + -6,pfVar7 + -3,pfVar7,fVar11);
                if (DAT_00355abc < mzmax) {
                  bVar1 = false;
                }
              }
              iVar9 = iVar9 + 1;
              puVar2 = puVar2 + 3;
              pfVar7 = pfVar7 + 3;
              fVar11 = -fVar11;
            } while (iVar9 < iVar3);
          }
        } while (lVar8 < lVar10);
      }
    }
    iVar9 = 0;
    if (bVar1) {
      iVar3 = mxmax + 0x10;
      iVar9 = mxmax + 0x1f;
      if (-1 < iVar3) {
        iVar9 = iVar3;
      }
      iVar4 = mxmin + -0x10;
      iVar5 = mymax + 0x10;
      iVar6 = mymin + -0x10;
      mxmax = iVar3;
      if (0x280 < (iVar9 >> 4) + -0x6c0) {
        mxmax = 0x9400;
      }
      iVar9 = mxmin + -1;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      mxmin = iVar4;
      if ((iVar9 >> 4) + -0x6c0 < 0) {
        mxmin = 0x6c00;
      }
      iVar9 = mymax + 0x1f;
      if (-1 < iVar5) {
        iVar9 = iVar5;
      }
      mymax = iVar5;
      if (0xe0 < (iVar9 >> 4) + -0x790) {
        mymax = 0x8700;
      }
      iVar3 = mymin + -1;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      iVar9 = 1;
      mymin = iVar6;
      if ((iVar3 >> 4) + -0x790 < 0) {
        mymin = 0x7900;
        iVar9 = 1;
      }
    }
  }
  return iVar9;
}

void MirrorPrim(u_int *prim) {
	float *m1[4];
	
  uint *puVar1;
  uint **ppuVar2;
  int iVar3;
  uint **ppuVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  if (prim != (uint *)0x0) {
    ppuVar2 = (uint **)*prim;
    while (ppuVar4 = ppuVar2, ppuVar4 != (uint **)0x0) {
      switch(((uint **)prim)[1]) {
      case (uint *)0x0:
        vuvnprim = prim;
        break;
      case (uint *)0x1:
        SetVUMeshDataP(prim);
        ppuVar4 = (uint **)*prim;
        break;
      case (uint *)0x2:
        SetMaterialDataVU(prim);
        ppuVar4 = (uint **)*prim;
        break;
      case (uint *)0x3:
        puVar1 = ((uint **)prim)[2];
                    /* inlined from ../../graphics/graph3d/libsg.h */
        auVar5 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[0]);
        auVar6 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[1]);
        auVar7 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[2]);
        auVar8 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[3]);
        _DAT_70000430 = _sqc2(auVar5);
        _DAT_70000440 = _sqc2(auVar6);
        _DAT_70000450 = _sqc2(auVar7);
        _DAT_70000460 = _sqc2(auVar8);
                    /* end of inlined section */
        _MulMatrix((float (*) [4])&DAT_70000090,(float (*) [4])&SgWSMtx,(float (*) [4])&DAT_70000430
                  );
        ppuVar4 = (uint **)*prim;
        break;
      case (uint *)0x4:
        iVar3 = BoundingBoxCalcP(prim);
        if (iVar3 == 0) {
          return;
        }
        ppuVar4 = (uint **)*prim;
        break;
      case (uint *)0x5:
        GsImageProcess(prim);
        ppuVar4 = (uint **)*prim;
        break;
      case (uint *)0xa:
        LoadTRI2Files(prim);
        ppuVar4 = (uint **)*prim;
      }
      prim = (uint *)ppuVar4;
      ppuVar2 = (uint **)*ppuVar4;
    }
  }
  return;
}

int PreMirrorPrim(SgCAMERA *camera, u_int *prim) {
	sceVu0FMATRIX tmpmat;
	int mir_flag;
	float *m1[4];
	
  undefined *puVar1;
  uint uVar2;
  uint **ppuVar3;
  int in_v0_lo;
  int iVar4;
  float (*ans) [4];
  Matrix4x4 *m0;
  uint **ppuVar5;
  int unaff_s3_lo;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float tmpmat [4] [4];
  
  if (prim != (uint *)0x0) {
    ppuVar3 = (uint **)*prim;
    in_v0_lo = unaff_s3_lo;
    while (ppuVar5 = ppuVar3, ppuVar5 != (uint **)0x0) {
      puVar1 = (undefined *)((uint **)prim)[1];
      if (puVar1 == (undefined *)0x1) {
        mirror_points = 0;
        _MulMatrix(tmpmat,(float (*) [4])&camera->wv,(float (*) [4])&DAT_70000430);
                    /* inlined from ../../graphics/graph3d/libsg.h */
        _lqc2((undefined  [16])tmpmat[0]);
        _lqc2((undefined  [16])tmpmat[1]);
        _lqc2((undefined  [16])tmpmat[2]);
        _lqc2((undefined  [16])tmpmat[3]);
                    /* end of inlined section */
        _lqc2(_DAT_700000d0);
        _lqc2(_DAT_700000e0);
        _lqc2(_DAT_700000f0);
        _lqc2(_DAT_70000100);
        _SetRotTransPersMatrix((float (*) [4])&DAT_70000090);
        iVar4 = MakeMirrorEnvironment(prim);
        return iVar4;
      }
      ppuVar3 = (uint **)prim;
      if (puVar1 != (undefined *)0x0) {
        if (puVar1 == (undefined *)0x3) {
          uVar2 = (uint)((uint **)prim)[2];
                    /* inlined from ../../graphics/graph3d/libsg.h */
          auVar6 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[0]);
          auVar7 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[1]);
          auVar8 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[2]);
          auVar9 = _lqc2((undefined  [16])lcp[uVar2].lwmtx.matrix[3]);
          _DAT_70000430 = _sqc2(auVar6);
          _DAT_70000440 = _sqc2(auVar7);
          _DAT_70000450 = _sqc2(auVar8);
          _DAT_70000460 = _sqc2(auVar9);
                    /* end of inlined section */
          ans = (float (*) [4])&DAT_70000090;
          m0 = &SgWSMtx;
        }
        else {
          ppuVar3 = (uint **)vuvnprim;
          if (puVar1 != &o_fx_int) goto LAB_0017e350;
          in_v0_lo = CheckBoundingBox(prim);
          ans = (float (*) [4])&DAT_700000d0;
          m0 = (Matrix4x4 *)SgCMVtx;
        }
        _MulMatrix(ans,(float (*) [4])m0,(float (*) [4])&DAT_70000430);
        ppuVar5 = (uint **)*prim;
        ppuVar3 = (uint **)vuvnprim;
      }
LAB_0017e350:
      vuvnprim = (uint *)ppuVar3;
      prim = (uint *)ppuVar5;
      ppuVar3 = (uint **)*ppuVar5;
    }
  }
  return in_v0_lo;
}

void MirrorBufferFlush(int tlen) {
  float (*pafVar1) [4];
  
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
  pafVar1 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar1)[3] = (float)(tlen | 0x50000000);
  (*pafVar1)[0] = (float)&DAT_11000000;
  (*pafVar1)[1] = 0.0;
  (*pafVar1)[2] = 0.0;
  AppendDmaBuffer(tlen + 1);
  FlushModel(0);
  return;
}

void CalcMirrorMatrix(SgCAMERA *camera) {
	sceVu0FMATRIX quat;
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX newws;
	sceVu0FMATRIX newwc;
	sceVu0FMATRIX newwcv;
	sceVu0FVECTOR centerpos;
	sceVu0FVECTOR norm;
	sceVu0FVECTOR milpos[3];
	sceVu0FVECTOR tmpvec;
	sceVu0FVECTOR vaxis;
	sceVu0FVECTOR qvert;
	sceVu0FVECTOR eye;
	float qrot;
	float *v0;
	float *v1;
	
  float fVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  float quat [4] [4];
  float tmpmat [4] [4];
  float newws [4] [4];
  float newwc [4] [4];
  float newwcv [4] [4];
  float centerpos [4];
  float norm [4];
  float milpos [3] [4];
  float tmpvec [4];
  float vaxis [4];
  float qvert [4];
  float eye [4];
  
                    /* inlined from ../../graphics/graph3d/libsg.h */
  auVar4 = _lqc2((undefined  [16])camera->i);
  auVar5 = _lqc2((undefined  [16])camera->p);
  auVar4 = _vsub(auVar4,auVar5);
  eye = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  _NormalizeVector(eye,eye);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  auVar4 = _lqc2((undefined  [16])mirror_lpos[0]);
  auVar5 = _lqc2((undefined  [16])mirror_lpos[1]);
  auVar4 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2((undefined  [16])mirror_lpos[2]);
  auVar4 = _vadd(auVar4,auVar5);
  auVar4 = _sqc2(auVar4);
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2((undefined  [16])mirror_lpos[3]);
  auVar4 = _vadd(auVar4,auVar5);
  centerpos = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  sceVu0ScaleVector(0.25,(Vector4 *)centerpos,(Vector4 *)centerpos);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  auVar4 = _lqc2(_DAT_70000430);
  auVar5 = _lqc2(_DAT_70000440);
  auVar2 = _lqc2(_DAT_70000450);
  auVar3 = _lqc2(_DAT_70000460);
  auVar6 = _lqc2((undefined  [16])centerpos);
  _vmulabc(auVar4,auVar6);
  _vmaddabc(auVar5,auVar6);
  _vmaddabc(auVar2,auVar6);
  auVar4 = _vmaddbc(auVar3,in_vf0);
  centerpos = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  auVar4 = _lqc2((undefined  [16])mirror_lpos[0]);
  auVar5 = _lqc2((undefined  [16])mirror_lpos[1]);
  auVar2 = _lqc2((undefined  [16])mirror_lpos[2]);
  auVar4 = _vsub(auVar5,auVar4);
  auVar5 = _vsub(auVar2,auVar5);
  _vopmula(auVar4,auVar5);
  auVar4 = _vopmsub(auVar5,auVar4);
  norm = (float  [4])_sqc2(auVar4);
  _ApplyRotMatrix(norm,norm);
  _NormalizeVector(norm,norm);
  eye = (float  [4])CONCAT412(0x3f800000,ZEXT412(0xbf800000) << 0x40);
  if (norm[0] == 0.0) {
    if ((norm[1] == 0.0) && (norm[2] == -1.0)) {
      vaxis[2] = 0.0;
      vaxis[3] = 1.0;
      vaxis[0] = 0.0;
      vaxis[1] = 1.0;
      goto LAB_0017e574;
    }
  }
  _GetNormalVectorFromVector(vaxis,eye,norm);
LAB_0017e574:
  _NormalizeVector(vaxis,vaxis);
  fVar1 = (float)sceVu0InnerProduct(tmpvec,norm);
  fVar1 = SgACosf(fVar1);
  GetMatrixRotateAxis(quat,vaxis,fVar1);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  auVar4 = _lqc2((undefined  [16])quat[0]);
  auVar5 = _lqc2((undefined  [16])quat[1]);
  auVar2 = _lqc2((undefined  [16])quat[2]);
  auVar3 = _lqc2(CONCAT412(quat[3][3],CONCAT48(quat[3][2],CONCAT44(quat[3][1],quat[3][0]))));
  auVar6 = _lqc2((undefined  [16])norm);
  _vmulabc(auVar4,auVar6);
  _vmaddabc(auVar5,auVar6);
  _vmaddabc(auVar2,auVar6);
  auVar4 = _vmaddbc(auVar3,in_vf0);
  tmpvec = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  tmpvec[2] = SUB164((undefined  [16])tmpvec >> 0x40,0);
  if (0.0 < tmpvec[2] * eye[2]) {
    fVar1 = -fVar1;
  }
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  tmpmat[2][2] = -1.0;
  GetMatrixRotateAxis(quat,vaxis,fVar1);
  _MulMatrix((float (*) [4])(Matrix4x4 *)tmpmat,(float (*) [4])(Matrix4x4 *)tmpmat,quat);
  GetMatrixRotateAxis(quat,vaxis,-fVar1);
  _MulMatrix((float (*) [4])(Matrix4x4 *)tmpmat,quat,(float (*) [4])(Matrix4x4 *)tmpmat);
  sceVu0UnitMatrix((Matrix4x4 *)quat);
  quat[3][0] = -centerpos[0];
  quat[3][1] = -centerpos[1];
  quat[3][2] = -centerpos[2];
  sceVu0MulMatrix((Matrix4x4 *)tmpmat,(Matrix4x4 *)tmpmat,(Matrix4x4 *)quat);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  quat[3][0] = SUB164((undefined  [16])centerpos,0);
  quat[3][1] = SUB164((undefined  [16])centerpos >> 0x20,0);
  quat[3][2] = centerpos[2];
  quat[3][3] = centerpos[3];
                    /* end of inlined section */
  sceVu0MulMatrix((Matrix4x4 *)tmpmat,(Matrix4x4 *)quat,(Matrix4x4 *)tmpmat);
                    /* inlined from ../../graphics/graph3d/libsg.h */
  mir_center[0] = SUB164((undefined  [16])centerpos,0);
  mir_center[1] = SUB164((undefined  [16])centerpos >> 0x20,0);
  mir_center[2] = centerpos[2];
  mir_center[3] = centerpos[3];
  mir_norm[0] = SUB164((undefined  [16])norm,0);
  mir_norm[1] = SUB164((undefined  [16])norm >> 0x20,0);
  mir_norm[2] = norm[2];
  mir_norm[3] = norm[3];
  auVar4 = _lqc2((undefined  [16])tmpmat[0]);
  auVar5 = _lqc2((undefined  [16])tmpmat[1]);
  auVar2 = _lqc2(CONCAT412(tmpmat[2][3],CONCAT48(tmpmat[2][2],tmpmat[2]._0_8_)));
  auVar3 = _lqc2((undefined  [16])tmpmat[3]);
  mir_mtx[0] = (float  [4])_sqc2(auVar4);
  mir_mtx[1] = (float  [4])_sqc2(auVar5);
  mir_mtx[2] = (float  [4])_sqc2(auVar2);
  mir_mtx[3] = (float  [4])_sqc2(auVar3);
  return;
}

void MirrorDraw(SgCAMERA *camera, void *sgd_top, void (*render_func)(/* parameters unknown */)) {
	static sceVu0IVECTOR miccolor = {
		/* [0] = */ 128,
		/* [1] = */ 128,
		/* [2] = */ 128,
		/* [3] = */ 128
	};
	qword *pedraw_buf;
	int i;
	int num;
	u_int *pk;
	sceVu0FVECTOR clip_value;
	sceGsScissor bak_scissor;
	sceVu0FVECTOR tmpv;
	float *v0;
	float *v0;
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float (*pafVar4) [4];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  sceGsScissor sVar10;
  float minx;
  float clip_value [4];
  float tmpv [4];
  
  clip_value[1] = -1.0;
  SetClipValue(-1.0,1.0,-1.0,1.0);
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  blocksm = *(int *)((int)sgd_top + 0x14);
  sgd_top_addr = sgd_top;
  iVar5 = CheckMirrorModel(sgd_top);
  if ((iVar5 == 0) ||
     (iVar6 = PreMirrorPrim(camera,*(uint **)((int)sgd_top + iVar5 * 4 + 0x18)), iVar6 == 0)) {
    CalcMirrorMatrix(camera);
  }
  else {
    iVar6 = 0;
    clip_value[2] = 1.0;
    clip_value[0] = 1.0;
    clip_value[3] = clip_value[1];
    if (0 < mirror_points) {
      do {
        sceVu0DivVectorXYZ(ABS(mirror_cval[iVar6][3]),tmpv);
        if (tmpv[0] < clip_value[0]) {
          clip_value[0] = tmpv[0];
        }
        if (clip_value[1] < tmpv[0]) {
          clip_value[1] = tmpv[0];
        }
        if (tmpv[1] < clip_value[2]) {
          clip_value[2] = tmpv[1];
        }
        if (clip_value[3] < tmpv[1]) {
          clip_value[3] = tmpv[1];
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < mirror_points);
    }
    minx = -1.0;
    if (clip_value[0] < -1.0) {
      clip_value[0] = -1.0;
    }
    if (1.0 < clip_value[1]) {
      clip_value[1] = 1.0;
    }
    if (clip_value[2] < -1.0) {
      clip_value[2] = -1.0;
    }
    if (1.0 < clip_value[3]) {
      clip_value[3] = 1.0;
    }
    SetClipValue(clip_value[0],clip_value[1],clip_value[2],clip_value[3]);
    iVar6 = mxmin + 0xf;
    if (-1 < mxmin) {
      iVar6 = mxmin;
    }
    iVar9 = mxmax + 0xf;
    if (-1 < mxmax) {
      iVar9 = mxmax;
    }
    sVar10 = pdrawenv->scissor1;
    iVar8 = mymin + 0xf;
    if (-1 < mymin) {
      iVar8 = mymin;
    }
    iVar7 = mymax + 0xf;
    if (-1 < mymax) {
      iVar7 = mymax;
    }
    pdrawenv->scissor1 =
         (sceGsScissor)
         ((ulong)sVar10 & 0xf800f800f800f800 | (long)((iVar6 >> 4) + -0x6c0) & 0x7ffU |
          ((long)((iVar9 >> 4) + -0x6c0) & 0x7ffU) << 0x10 |
          ((long)((iVar8 >> 4) + -0x790) & 0x7ffU) << 0x20 |
         ((long)((iVar7 >> 4) + -0x790) & 0x7ffU) << 0x30);
    SetEnvironment();
    MirrorRender(camera,render_func);
    iVar6 = sbuffer_p;
    pafVar4 = objwork;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    *(undefined8 *)objwork[sbuffer_p + 1] = 0x1000000000008001;
    *(undefined8 *)(pafVar4[iVar6 + 2] + 2) = 0x47;
    *(undefined8 *)(pafVar4[iVar6 + 1] + 2) = 0xe;
    *(undefined8 *)pafVar4[iVar6 + 2] = 0x32001;
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    *(undefined8 *)pafVar4[iVar6 + 3] = 0x2027400000008002;
    *(undefined8 *)(pafVar4[iVar6 + 3] + 2) = 0x41;
    fVar3 = miccolor_184._12_4_;
    fVar2 = miccolor_184._8_4_;
    uVar1 = miccolor_184._0_8_;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    pafVar4[iVar6 + 4][0] = (float)miccolor_184._0_8_;
    pafVar4[iVar6 + 4][1] = (float)((ulong)uVar1 >> 0x20);
    pafVar4[iVar6 + 4][2] = fVar2;
    pafVar4[iVar6 + 4][3] = fVar3;
                    /* end of inlined section */
                    /* inlined from ../../graphics/graph3d/libsg.h */
                    /* end of inlined section */
    pafVar4[iVar6 + 5][0] = (float)(mxmin + -0x10);
    iVar9 = mymin;
    pafVar4[iVar6 + 5][2] = 0.0;
    pafVar4[iVar6 + 5][3] = 0.0;
    pafVar4[iVar6 + 5][1] = (float)(iVar9 + -0x10);
    fVar3 = miccolor_184._12_4_;
    fVar2 = miccolor_184._8_4_;
    uVar1 = miccolor_184._0_8_;
                    /* inlined from ../../graphics/graph3d/libsg.h */
    pafVar4[iVar6 + 6][0] = (float)miccolor_184._0_8_;
    pafVar4[iVar6 + 6][1] = (float)((ulong)uVar1 >> 0x20);
    pafVar4[iVar6 + 6][2] = fVar2;
    pafVar4[iVar6 + 6][3] = fVar3;
                    /* end of inlined section */
    pafVar4[iVar6 + 7][0] = (float)(mxmax + 0x10);
    iVar9 = mymax;
    pafVar4[iVar6 + 7][3] = 0.0;
    pafVar4[iVar6 + 7][2] = 0.0;
    pafVar4[iVar6 + 7][1] = (float)(iVar9 + 0x10);
    AppendDmaBufferFromEndAddress((int (*) [4])pafVar4[iVar6 + 8]);
    pdrawenv->scissor1 = sVar10;
    SetEnvironment();
    lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
    blocksm = *(int *)((int)sgd_top + 0x14);
    sgd_top_addr = sgd_top;
    ClearMaterialCache((HeaderSection *)sgd_top);
    SetUpSortUnit();
    SetClipValue(minx,1.0,minx,1.0);
    MirrorPrim(*(uint **)((int)sgd_top + iVar5 * 4 + 0x18));
  }
  return;
}

void MirrorRender(SgCAMERA *camera, void (*render_func)(/* parameters unknown */)) {
	sceVu0FVECTOR rreg;
	SgCAMERA mir_camera;
	
  SgCAMERA *pSVar1;
  SgCAMERA *pSVar2;
  SgCAMERA *pSVar3;
  SgCAMERA *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Matrix4x4 *m0;
  Matrix4x4 *m0_00;
  Matrix4x4 *m0_01;
  float rreg [4];
  SgCAMERA mir_camera;
  
  m0_00 = &mir_camera.ws;
  m0 = &mir_camera.wc;
  m0_01 = &mir_camera.wcv;
  pSVar3 = camera;
  pSVar1 = &mir_camera;
  do {
    pSVar4 = pSVar1;
    pSVar2 = pSVar3;
    uVar5 = *(undefined8 *)&(pSVar2->p).z;
    uVar6 = *(undefined8 *)&pSVar2->i;
    uVar7 = *(undefined8 *)&(pSVar2->i).z;
    *(undefined8 *)&pSVar4->p = *(undefined8 *)&pSVar2->p;
    *(undefined8 *)&(pSVar4->p).z = uVar5;
    *(undefined8 *)&pSVar4->i = uVar6;
    *(undefined8 *)&(pSVar4->i).z = uVar7;
    pSVar3 = (SgCAMERA *)&pSVar2->roll;
    pSVar1 = (SgCAMERA *)&pSVar4->roll;
  } while (pSVar3 != (SgCAMERA *)&camera->yd);
  uVar5 = *(undefined8 *)&pSVar2->nearz;
  *(undefined8 *)&pSVar4->roll = *(undefined8 *)pSVar3;
  *(undefined8 *)&pSVar4->nearz = uVar5;
  mir_camera.nearz = mzmax;
  SgSetRefCamera(&mir_camera);
  CalcMirrorMatrix(camera);
  sceVu0MulMatrix(m0_00,m0_00,(Matrix4x4 *)mir_mtx);
  sceVu0MulMatrix(m0,m0,(Matrix4x4 *)mir_mtx);
  sceVu0MulMatrix(m0_01,m0_01,(Matrix4x4 *)mir_mtx);
  SgSetWsMtx((float (*) [4])m0_00);
  SgSetClipMtx((float (*) [4])m0);
  SgSetClipVMtx((float (*) [4])m0_01);
  rreg[1] = 0.0;
  rreg[0] = -1.0;
  rreg[2] = 0.0;
  rreg[3] = 0.0;
  SetVF2Register(rreg);
  (*(code *)render_func)();
  rreg[1] = 0.0;
  rreg[0] = 1.0;
  rreg[2] = 0.0;
  rreg[3] = 0.0;
  SetVF2Register(rreg);
  SgSetRefCamera(camera);
  return;
}
