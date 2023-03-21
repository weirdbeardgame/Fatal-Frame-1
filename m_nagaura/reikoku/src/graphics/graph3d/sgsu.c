// STATUS: NOT STARTED

static int write_flg = 0;
static int write_counter = 0;
static int dbg_flg = 0;
static int debug_sign = 0;
static int o0 = 0;
static int o1 = 0;
SgCOORDUNIT *lcp = NULL;
PHEAD *lphead = NULL;
u_int nextprim = 0;
u_int *vuvnprim = NULL;
int blocksm = 0;
int write_coord = 0;

void _AddColor(float *v) {
  undefined auVar1 [16];
  undefined in_vf18 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v);
  auVar1 = _vadd(in_vf18,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v = auVar1;
  return;
}

void SgSuDebugOn() {
  dbg_flg = 1;
  return;
}

void SgSuDebugOff() {
  dbg_flg = 0;
  return;
}

void SetDebugSign(int num) {
  debug_sign = num;
  return;
}

void PutDebugSign() {
	static int frame = 0;
	qword *pedraw_buf;
	
  float (*pafVar1) [4];
  int iVar2;
  
  iVar2 = sbuffer_p;
  pafVar1 = objwork;
  if (debug_sign != 0) {
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
    *(undefined8 *)objwork[sbuffer_p + 1] = 0x2027400000008002;
    *(undefined8 *)(pafVar1[iVar2 + 1] + 2) = 0x41;
    pafVar1[iVar2 + 3][1] = 4.591775e-41;
    pafVar1[iVar2 + 4][3] = 1.793662e-43;
    pafVar1[iVar2 + 5][0] = 5.30924e-41;
    pafVar1[iVar2 + 5][1] = 4.842887e-41;
    pafVar1[iVar2 + 5][2] = 5.605194e-40;
    pafVar1[iVar2 + 5][3] = 0.0;
    pafVar1[iVar2 + 2][0] = 1.793662e-43;
    pafVar1[iVar2 + 2][1] = 1.793662e-43;
    pafVar1[iVar2 + 2][2] = 1.793662e-43;
    pafVar1[iVar2 + 2][3] = 1.793662e-43;
    pafVar1[iVar2 + 3][0] = 4.591775e-41;
    pafVar1[iVar2 + 3][2] = 5.605194e-40;
    pafVar1[iVar2 + 3][3] = 0.0;
    pafVar1[iVar2 + 4][0] = 1.793662e-43;
    pafVar1[iVar2 + 4][1] = 1.793662e-43;
    pafVar1[iVar2 + 4][2] = 1.793662e-43;
    AppendDmaBufferFromEndAddress((int (*) [4])pafVar1[iVar2 + 6]);
    frame_168 = frame_168 + 1;
    if (0x13 < frame_168) {
      frame_168 = 0;
      debug_sign = 0;
    }
  }
  return;
}

void SgSetVNBuffer(sceVu0FVECTOR *vnarray, int size) {
  vertex_buffer = vnarray;
  vnbuf_size = size / 2;
  normal_buffer = vnarray[size / 2];
  return;
}

int CheckCoordCache(int cn) {
	int i;
	
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  
  if ((((ccahe.cache_on != -1) && (ccahe.edge_check == edge_check)) &&
      (ccahe.Point.num == SgPointGroupNum)) && (ccahe.Spot.num == SgSpotGroupNum)) {
    if (SgPointGroupNum != 0) {
      piVar4 = ccahe.Point.lnum;
      iVar5 = 0;
      piVar2 = SgPointGroup[0].lnum;
      do {
        iVar5 = iVar5 + 1;
        if (*piVar4 != *piVar2) goto LAB_00173a84;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < 3);
    }
    if (SgSpotGroupNum != 0) {
      piVar4 = SgSpotGroup[0].lnum;
      piVar2 = ccahe.Spot.lnum;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (*piVar2 != *piVar4) goto LAB_00173a84;
        piVar4 = piVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar5 < 3);
    }
    iVar5 = 0;
    pfVar3 = &lcp[cn].lwmtx.matrix[0].w;
    pfVar1 = &lcp[ccahe.cn0].lwmtx.matrix[0].w;
    while (((((Vector4 *)(pfVar3 + -3))->x == ((Vector4 *)(pfVar1 + -3))->x &&
            (pfVar3[-2] == pfVar1[-2])) &&
           ((pfVar3[-1] == pfVar1[-1] && (iVar5 = iVar5 + 1, *pfVar3 == *pfVar1))))) {
      pfVar1 = pfVar1 + 4;
      pfVar3 = pfVar3 + 4;
      if (3 < iVar5) {
        return 1;
      }
    }
  }
LAB_00173a84:
  ccahe.cache_on = 1;
  ccahe.edge_check = edge_check;
  ccahe.cn0 = cn;
  if (SgPointGroupNum != 0) {
    ccahe.Point.lnum[0] = SgPointGroup[0].lnum[0];
    ccahe.Point.lnum[1] = SgPointGroup[0].lnum[1];
    ccahe.Point.lnum[2] = SgPointGroup[0].lnum[2];
  }
  if (SgSpotGroupNum != 0) {
    ccahe.Spot.lnum[2] = SgSpotGroup[0].lnum[2];
    ccahe.Spot.lnum[0] = SgSpotGroup[0].lnum[0];
    ccahe.Spot.lnum[1] = SgSpotGroup[0].lnum[1];
  }
  return 0;
}

void SetVU1Header() {
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
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
  pfVar3 = (float *)&DAT_70000000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  iVar2 = 0xc;
                    /* inlined from libsg.h */
  pafVar1 = objwork[sbuffer_p];
  do {
                    /* end of inlined section */
    fVar4 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = pfVar3[3];
    fVar8 = pfVar3[4];
    fVar9 = pfVar3[5];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[7];
    pfVar3 = pfVar3 + 8;
    (*pafVar1)[0] = fVar4;
    (*pafVar1)[1] = fVar5;
    (*pafVar1)[2] = fVar6;
    (*pafVar1)[3] = fVar7;
    pafVar1[1][0] = fVar8;
    pafVar1[1][1] = fVar9;
    pafVar1[1][2] = fVar10;
    pafVar1[1][3] = fVar11;
    pafVar1 = pafVar1[2];
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
                    /* end of inlined section */
  AppendDmaBuffer(0x2f);
  FlushModel(0);
  return;
}

void CalcVertexBuffer(u_int *prim) {
	int i;
	int j;
	sceVu0FVECTOR *vpd;
	sceVu0FVECTOR *vps;
	VERTEXLIST *vli;
	float *m0[4];
	float *m0[4];
	float *dp;
	float *v;
	float *m0[4];
	float *m0[4];
	float *dp;
	float *v;
	
  short sVar1;
  uint uVar2;
  float afVar3 [4];
  _SgCOORDUNIT *p_Var4;
  PHEAD *pPVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint *puVar9;
  float (*pafVar10) [4];
  float (*pafVar11) [4];
  float (*pafVar12) [4];
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  
  pPVar5 = lphead;
  p_Var4 = lcp;
  pafVar11 = normal_buffer;
  if (prim[3] != 0) {
    puVar9 = lphead->pWeightedList;
    iVar8 = 0;
    if (puVar9 != (uint *)0x0) {
      uVar2 = *puVar9;
      pafVar12 = lphead->pWeightedVertex;
      if (0 < (int)uVar2) {
        iVar6 = 0;
        pafVar10 = vertex_buffer;
        do {
                    /* inlined from sgsu.h */
                    /* end of inlined section */
          sVar1 = *(short *)((int)puVar9 + iVar6 + 4);
                    /* inlined from sgsu.h */
          auVar13 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[0]);
          auVar14 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[1]);
          auVar15 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[2]);
          auVar16 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[3]);
                    /* end of inlined section */
          sVar1 = *(short *)((int)puVar9 + iVar6 + 6);
                    /* inlined from sgsu.h */
          auVar17 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[0]);
          auVar18 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[1]);
          auVar19 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[2]);
          auVar20 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[3]);
                    /* end of inlined section */
          puVar7 = (ushort *)((int)puVar9 + iVar6 + 8);
          iVar6 = 0;
          if (*puVar7 != 0) {
            do {
                    /* inlined from sgsu.h */
              auVar21 = _lqc2((undefined  [16])*pafVar12);
              _vmulabc(auVar13,auVar21);
              _vmaddabc(auVar14,auVar21);
              _vmaddabc(auVar15,auVar21);
              _vmaddbc(auVar16,in_vf0);
              auVar23 = _lqc2((undefined  [16])pafVar12[1]);
              _vmove(in_vf0);
              auVar22 = _vsubbc(in_vf0,auVar21);
              _vmulabc(auVar17,auVar23);
              _vmaddabc(auVar18,auVar23);
              _vmaddabc(auVar19,auVar23);
              auVar23 = _vmaddbc(auVar20,in_vf0);
              _vmulabc(auVar22,auVar21);
              auVar21 = _vmaddbc(auVar23,auVar22);
              afVar3 = (float  [4])_sqc2(auVar21);
              *pafVar10 = afVar3;
                    /* end of inlined section */
              iVar6 = iVar6 + 1;
              pafVar10 = pafVar10[1];
              pafVar12 = pafVar12[2];
            } while (iVar6 < (int)(uint)*puVar7);
          }
          iVar8 = iVar8 + 1;
          iVar6 = iVar8 * 8;
        } while (iVar8 < (int)uVar2);
      }
      p_Var4 = lcp;
      pafVar12 = pPVar5->pWeightedNormal;
      puVar9 = puVar9 + uVar2 * 2 + 1;
      uVar2 = *puVar9;
      iVar8 = 0;
      if (0 < (int)uVar2) {
        iVar6 = 0;
        do {
                    /* end of inlined section */
          sVar1 = *(short *)((int)puVar9 + iVar6 + 4);
                    /* inlined from sgsu.h */
          auVar13 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[0]);
          auVar14 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[1]);
          auVar15 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[2]);
          auVar16 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[3]);
                    /* end of inlined section */
          sVar1 = *(short *)((int)puVar9 + iVar6 + 6);
                    /* inlined from sgsu.h */
          auVar17 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[0]);
          auVar18 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[1]);
          auVar19 = _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[2]);
          _lqc2((undefined  [16])p_Var4[sVar1].workm.matrix[3]);
                    /* end of inlined section */
          puVar7 = (ushort *)((int)puVar9 + iVar6 + 8);
          iVar6 = 0;
          if (*puVar7 != 0) {
            do {
                    /* inlined from sgsu.h */
              auVar20 = _lqc2((undefined  [16])*pafVar12);
              _vmulabc(auVar13,auVar20);
              _vmaddabc(auVar14,auVar20);
              _vmaddbc(auVar15,auVar20);
              auVar21 = _vsubbc(in_vf0,auVar20);
              auVar22 = _lqc2((undefined  [16])pafVar12[1]);
              _vmove(in_vf0);
              auVar20 = _vmulbc(auVar20,auVar16);
              auVar21 = _vmulbc(auVar21,auVar16);
              _vmulabc(auVar17,auVar22);
              _vmaddabc(auVar18,auVar22);
              auVar22 = _vmaddbc(auVar19,auVar22);
              _vmulabc(auVar21,auVar20);
              auVar20 = _vmaddbc(auVar22,auVar21);
              afVar3 = (float  [4])_sqc2(auVar20);
              *pafVar11 = afVar3;
                    /* end of inlined section */
              iVar6 = iVar6 + 1;
              pafVar11 = pafVar11[1];
              pafVar12 = pafVar12[2];
            } while (iVar6 < (int)(uint)*puVar7);
          }
          iVar8 = iVar8 + 1;
          iVar6 = iVar8 * 8;
        } while (iVar8 < (int)uVar2);
      }
    }
  }
  return;
}

u_int* SetVUVNData(u_int *prim) {
	int i;
	VUVN_PRIM *vh;
	sceVu0FVECTOR *vp;
	sceVu0FVECTOR tmpvec;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float (*pafVar4) [4];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float **ppfVar12;
  float tmpvec [4];
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar4 = objwork[sbuffer_p];
                    /* end of inlined section */
  fVar5 = (float)prim[5];
  fVar6 = (float)prim[6];
  fVar7 = (float)prim[7];
  fVar8 = (float)prim[8];
  fVar9 = (float)prim[9];
  fVar10 = (float)prim[10];
  fVar11 = (float)prim[0xb];
  (*pafVar4)[0] = (float)prim[4];
  (*pafVar4)[1] = fVar5;
  (*pafVar4)[2] = fVar6;
  (*pafVar4)[3] = fVar7;
  pafVar4[1][0] = fVar8;
  pafVar4[1][1] = fVar9;
  pafVar4[1][2] = fVar10;
  pafVar4[1][3] = fVar11;
  lVar3 = (long)*(short *)(prim + 2);
  pafVar4 = pafVar4[2];
  ppfVar12 = (float **)(prim + 0xc);
  if (0 < lVar3) {
    do {
      pfVar1 = *ppfVar12;
      pfVar2 = ppfVar12[1];
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      (*pafVar4)[0] = *pfVar1;
      (*pafVar4)[1] = fVar5;
      (*pafVar4)[2] = fVar6;
      (*pafVar4)[3] = fVar7;
      pafVar4[1][0] = fVar8;
      pafVar4[1][1] = fVar9;
      pafVar4[1][2] = fVar10;
      pafVar4[1][3] = fVar11;
      lVar3 = (long)((int)lVar3 + -1);
      pafVar4 = pafVar4[2];
      ppfVar12 = ppfVar12 + 2;
    } while (lVar3 != 0);
  }
  return (uint *)pafVar4;
}

u_int* SetVUVNDataPost(u_int *prim) {
	int i;
	VUVN_PRIM *vh;
	sceVu0FVECTOR *vp;
	sceVu0FVECTOR tmpvec;
	char *cn;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	float *m0[4];
	float *m0[4];
	float *dp;
	float *n;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	float *m0[4];
	float *m0[4];
	float *dp;
	float *n;
	sceVu0FVECTOR *vb;
	float *s0;
	float *s1;
	
  char cVar1;
  ushort uVar2;
  undefined (*pauVar3) [16];
  float afVar4 [4];
  undefined8 uVar5;
  undefined8 uVar6;
  _SgCOORDUNIT *p_Var7;
  undefined (*pauVar8) [16];
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined (**ppauVar15) [16];
  float (*pafVar16) [4];
  uint *puVar17;
  undefined in_vf0 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  float tmpvec [4];
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
  puVar17 = prim + 2;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar16 = objwork[sbuffer_p];
                    /* end of inlined section */
  uVar5 = *(undefined8 *)(prim + 4);
  fVar11 = (float)prim[6];
  fVar12 = (float)prim[7];
  uVar6 = *(undefined8 *)(prim + 8);
  fVar13 = (float)prim[10];
  fVar14 = (float)prim[0xb];
  (*pafVar16)[0] = (float)uVar5;
  (*pafVar16)[1] = (float)((ulong)uVar5 >> 0x20);
  (*pafVar16)[2] = fVar11;
  (*pafVar16)[3] = fVar12;
  pafVar16[1][0] = (float)uVar6;
  pafVar16[1][1] = (float)((ulong)uVar6 >> 0x20);
  pafVar16[1][2] = fVar13;
  pafVar16[1][3] = fVar14;
  p_Var7 = lcp;
  pafVar16 = pafVar16[2];
  ppauVar15 = (undefined (**) [16])(prim + 0xc);
  if (*(char *)((int)prim + 0xd) == '\x02') {
    if (lphead->pWeightedList == (uint *)0x0) {
      pauVar8 = *ppauVar15;
                    /* inlined from sgsu.h */
                    /* end of inlined section */
      cVar1 = pauVar8[1][0xc];
                    /* inlined from sgsu.h */
      auVar18 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[0]);
      auVar19 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[1]);
      auVar20 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[2]);
      auVar21 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[3]);
                    /* end of inlined section */
      cVar1 = pauVar8[1][0xd];
                    /* inlined from sgsu.h */
      auVar22 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[0]);
      auVar23 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[1]);
      auVar24 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[2]);
      auVar25 = _lqc2((undefined  [16])lcp[cVar1].workm.matrix[3]);
                    /* end of inlined section */
      lVar9 = (long)(short)*(ushort *)puVar17;
      if (0 < lVar9) {
        while( true ) {
                    /* inlined from sgsu.h */
          auVar26 = _lqc2(*pauVar8);
          _vmulabc(auVar18,auVar26);
          _vmaddabc(auVar19,auVar26);
          _vmaddabc(auVar20,auVar26);
          _vmaddbc(auVar21,in_vf0);
          _vsubbc(in_vf0,auVar26);
          auVar27 = _vmove(auVar26);
          auVar26 = _lqc2(pauVar8[1]);
          _vmulabc(auVar22,auVar26);
          _vmaddabc(auVar23,auVar26);
          _vmaddabc(auVar24,auVar26);
          auVar26 = _vmaddbc(auVar25,in_vf0);
          _vmulabc(auVar27,auVar27);
          _vmaddbc(auVar26,auVar26);
          auVar28 = _vmove(in_vf0);
          auVar26 = _lqc2(*ppauVar15[1]);
          _vmulabc(auVar18,auVar26);
          _vmaddabc(auVar19,auVar26);
          auVar27 = _vmaddbc(auVar20,auVar26);
          _vsubbc(in_vf0,auVar26);
          auVar26 = _lqc2(ppauVar15[1][1]);
          _vmulabc(auVar22,auVar26);
          _vmaddabc(auVar23,auVar26);
          auVar26 = _vmaddbc(auVar24,auVar26);
          _vmulabc(auVar27,auVar27);
          auVar26 = _vmaddbc(auVar26,auVar26);
          _vmulbc(auVar26,auVar21);
          auVar26 = _vmove(in_vf0);
          afVar4 = (float  [4])_sqc2(auVar28);
          *pafVar16 = afVar4;
          afVar4 = (float  [4])_sqc2(auVar26);
          pafVar16[1] = afVar4;
                    /* end of inlined section */
          pafVar16 = pafVar16[2];
          ppauVar15 = ppauVar15 + 2;
          lVar9 = (long)((int)lVar9 + -1);
          if (lVar9 == 0) break;
          pauVar8 = *ppauVar15;
        }
      }
    }
    else {
      lVar9 = (long)(short)*(ushort *)puVar17;
      if (0 < lVar9) {
        do {
          pauVar8 = *ppauVar15;
          pauVar3 = ppauVar15[1];
          uVar5 = *(undefined8 *)*pauVar8;
          fVar11 = *(float *)(*pauVar8 + 8);
          fVar12 = *(float *)(*pauVar8 + 0xc);
          uVar6 = *(undefined8 *)*pauVar3;
          fVar13 = *(float *)(*pauVar3 + 8);
          fVar14 = *(float *)(*pauVar3 + 0xc);
          (*pafVar16)[0] = (float)uVar5;
          (*pafVar16)[1] = (float)((ulong)uVar5 >> 0x20);
          (*pafVar16)[2] = fVar11;
          (*pafVar16)[3] = fVar12;
          pafVar16[1][0] = (float)uVar6;
          pafVar16[1][1] = (float)((ulong)uVar6 >> 0x20);
          pafVar16[1][2] = fVar13;
          pafVar16[1][3] = fVar14;
          lVar9 = (long)((int)lVar9 + -1);
          pafVar16 = pafVar16[2];
          ppauVar15 = ppauVar15 + 2;
        } while (lVar9 != 0);
      }
    }
  }
  else {
    iVar10 = 0;
    if (*(char *)((int)prim + 0xd) == '\x03') {
      if (lphead->pWeightedList == (uint *)0x0) {
        uVar2 = *(ushort *)puVar17;
        iVar10 = 0;
        if (0 < (int)((uint)uVar2 << 0x10)) {
          do {
            pauVar8 = *ppauVar15;
                    /* inlined from sgsu.h */
                    /* end of inlined section */
            cVar1 = pauVar8[1][0xc];
                    /* inlined from sgsu.h */
            auVar18 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[0]);
            auVar19 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[1]);
            auVar20 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[2]);
            auVar21 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[3]);
                    /* end of inlined section */
            cVar1 = pauVar8[1][0xd];
                    /* inlined from sgsu.h */
            auVar22 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[0]);
            auVar23 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[1]);
            auVar24 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[2]);
            auVar25 = _lqc2((undefined  [16])p_Var7[cVar1].workm.matrix[3]);
            auVar26 = _lqc2(*pauVar8);
            _vmulabc(auVar18,auVar26);
            _vmaddabc(auVar19,auVar26);
            _vmaddabc(auVar20,auVar26);
            _vmaddbc(auVar21,in_vf0);
            _vsubbc(in_vf0,auVar26);
            auVar27 = _vmove(auVar26);
            auVar26 = _lqc2(pauVar8[1]);
            _vmulabc(auVar22,auVar26);
            _vmaddabc(auVar23,auVar26);
            _vmaddabc(auVar24,auVar26);
            auVar25 = _vmaddbc(auVar25,in_vf0);
            _vmulabc(auVar27,auVar27);
            _vmaddbc(auVar25,auVar25);
            auVar26 = _vmove(in_vf0);
            auVar25 = _lqc2(*ppauVar15[1]);
            _vmulabc(auVar18,auVar25);
            _vmaddabc(auVar19,auVar25);
            auVar19 = _vmaddbc(auVar20,auVar25);
            _vsubbc(in_vf0,auVar25);
            auVar18 = _lqc2(ppauVar15[1][1]);
            _vmulabc(auVar22,auVar18);
            _vmaddabc(auVar23,auVar18);
            auVar18 = _vmaddbc(auVar24,auVar18);
            _vmulabc(auVar19,auVar19);
            auVar18 = _vmaddbc(auVar18,auVar18);
            _vmulbc(auVar18,auVar21);
            auVar18 = _vmove(in_vf0);
            afVar4 = (float  [4])_sqc2(auVar26);
            *pafVar16 = afVar4;
            afVar4 = (float  [4])_sqc2(auVar18);
            pafVar16[1] = afVar4;
                    /* end of inlined section */
            iVar10 = iVar10 + 1;
            pafVar16 = pafVar16[2];
            ppauVar15 = ppauVar15 + 2;
          } while (iVar10 < (int)((uint)uVar2 << 0x10) >> 0x10);
        }
      }
      else {
        lVar9 = (long)(short)*(ushort *)puVar17;
        if (0 < lVar9) {
          do {
            pauVar8 = *ppauVar15;
            pauVar3 = ppauVar15[1];
            uVar5 = *(undefined8 *)*pauVar8;
            fVar11 = *(float *)(*pauVar8 + 8);
            fVar12 = *(float *)(*pauVar8 + 0xc);
            uVar6 = *(undefined8 *)*pauVar3;
            fVar13 = *(float *)(*pauVar3 + 8);
            fVar14 = *(float *)(*pauVar3 + 0xc);
            (*pafVar16)[0] = (float)uVar5;
            (*pafVar16)[1] = (float)((ulong)uVar5 >> 0x20);
            (*pafVar16)[2] = fVar11;
            (*pafVar16)[3] = fVar12;
            pafVar16[1][0] = (float)uVar6;
            pafVar16[1][1] = (float)((ulong)uVar6 >> 0x20);
            pafVar16[1][2] = fVar13;
            pafVar16[1][3] = fVar14;
            lVar9 = (long)((int)lVar9 + -1);
            pafVar16 = pafVar16[2];
            ppauVar15 = ppauVar15 + 2;
          } while (lVar9 != 0);
        }
      }
    }
    else {
      uVar2 = *(ushort *)puVar17;
      if (0 < (short)*(ushort *)puVar17) {
        pauVar8 = *ppauVar15;
        while( true ) {
          pauVar3 = ppauVar15[1];
          uVar5 = *(undefined8 *)*pauVar8;
          fVar11 = *(float *)(*pauVar8 + 8);
          fVar12 = *(float *)(*pauVar8 + 0xc);
          uVar6 = *(undefined8 *)*pauVar3;
          fVar13 = *(float *)(*pauVar3 + 8);
          fVar14 = *(float *)(*pauVar3 + 0xc);
          (*pafVar16)[0] = (float)uVar5;
          (*pafVar16)[1] = (float)((ulong)uVar5 >> 0x20);
          (*pafVar16)[2] = fVar11;
          (*pafVar16)[3] = fVar12;
          pafVar16[1][0] = (float)uVar6;
          pafVar16[1][1] = (float)((ulong)uVar6 >> 0x20);
          pafVar16[1][2] = fVar13;
          pafVar16[1][3] = fVar14;
          iVar10 = iVar10 + 1;
          pafVar16 = pafVar16[2];
          ppauVar15 = ppauVar15 + 2;
          if ((short)uVar2 <= iVar10) break;
          pauVar8 = *ppauVar15;
        }
      }
    }
  }
  return (uint *)pafVar16;
}

void printTEX0(sceGsTex0 *tex0) {
  printf("TBP0 %x TBW %d PSM %x TW %d TH %d TCC %d\n");
  printf("TFX %d CBP %x CPSM %x CSM %d CSA %d CLD %x\n");
  return;
}

void SetVUMeshData(u_int *prim) {
	int mtype;
	u_int *read_p;
	
  uint *puVar1;
  ulong uVar2;
  float (*pafVar3) [4];
  
  uVar2 = (long)*(char *)((int)prim + 0xd) & 0xd3;
  if (uVar2 == 0x42) {
    AppendDmaTag((uint)(prim + 4),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
    pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
    (*pafVar3)[3] = 4.135903e-25;
    (*pafVar3)[0] = 6.462971e-27;
    (*pafVar3)[2] = (float)&DAT_11000000;
    (*pafVar3)[1] = 4.135903e-25;
    AppendDmaBuffer(1);
    FlushModel(0);
    return;
  }
  if (uVar2 < 0x43) {
    if (uVar2 == 0) {
      puVar1 = SetVUVNData(vuvnprim);
      puVar1[3] = 0x17000000;
      *puVar1 = 0x1400025c;
      puVar1[2] = (uint)&DAT_11000000;
      puVar1[1] = 0x17000000;
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaBuffer((uint)*(byte *)(vuvnprim + 3));
      FlushModel(0);
      return;
    }
    if (uVar2 == 2) {
      puVar1 = SetVUVNData(vuvnprim);
      puVar1[3] = 0x17000000;
      *puVar1 = 0x140000b2;
      puVar1[2] = (uint)&DAT_11000000;
      puVar1[1] = 0x17000000;
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaBuffer((uint)*(byte *)(vuvnprim + 3));
      FlushModel(0);
      return;
    }
  }
  else {
    if (uVar2 == 0x80) {
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
      (*pafVar3)[3] = 4.135903e-25;
      (*pafVar3)[0] = 6.462814e-27;
      (*pafVar3)[2] = (float)&DAT_11000000;
      (*pafVar3)[1] = 4.135903e-25;
      AppendDmaBuffer(1);
      FlushModel(0);
      return;
    }
    if (uVar2 == 0x82) {
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaTag((uint)(vuvnprim + 4),(uint)*(byte *)(vuvnprim + 3));
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
      (*pafVar3)[3] = 4.135903e-25;
      (*pafVar3)[0] = 6.462486e-27;
      (*pafVar3)[2] = (float)&DAT_11000000;
      (*pafVar3)[1] = 4.135903e-25;
      AppendDmaBuffer(1);
      FlushModel(0);
      return;
    }
  }
  printf("Illegal Packet %d\n");
  return;
}

void SetVUMeshDataPost(u_int *prim) {
	int mtype;
	u_int *read_p;
	
  uint *puVar1;
  byte bVar2;
  float (*pafVar3) [4];
  
  bVar2 = *(byte *)((int)prim + 0xd) & 0x53;
  if (bVar2 == 2) {
    puVar1 = SetVUVNDataPost(vuvnprim);
    puVar1[3] = 0x17000000;
    *puVar1 = 0x1400018f;
    puVar1[2] = (uint)&DAT_11000000;
    puVar1[1] = 0x17000000;
    AppendDmaTag((uint)(prim + 4),prim[2]);
    AppendDmaBuffer((uint)*(byte *)(vuvnprim + 3));
    FlushModel(0);
    return;
  }
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      puVar1 = SetVUVNDataPost(vuvnprim);
      puVar1[3] = 0x17000000;
      *puVar1 = 0x1400025c;
      puVar1[2] = (uint)&DAT_11000000;
      puVar1[1] = 0x17000000;
      AppendDmaTag((uint)(prim + 4),prim[2]);
      AppendDmaBuffer((uint)*(byte *)(vuvnprim + 3));
      FlushModel(0);
      return;
    }
  }
  else if (bVar2 == 0x42) {
    AppendDmaTag((uint)(prim + 4),prim[2]);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
    pafVar3 = objwork[sbuffer_p];
                    /* end of inlined section */
    (*pafVar3)[3] = 4.135903e-25;
    (*pafVar3)[0] = 6.462971e-27;
    (*pafVar3)[2] = (float)&DAT_11000000;
    (*pafVar3)[1] = 4.135903e-25;
    AppendDmaBuffer(1);
    FlushModel(0);
    return;
  }
  printf("Illegal Packet %d\n");
  return;
}

void SetCoordData(u_int *prim) {
	int j;
	float abs;
	SgCOORDUNIT *llp;
	float *m0[4];
	float *m1[4];
	
  _SgCOORDUNIT *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  if (prim[3] != 0) {
    iVar3 = 1;
    if (1 < blocksm + -1) {
      fVar8 = 3.0;
      iVar4 = 0xe0;
      do {
        p_Var1 = lcp;
                    /* inlined from libsg.h */
        auVar9 = _lqc2(*(undefined (*) [16])((int)&(lcp->lwmtx).matrix[0].x + iVar4));
        auVar10 = _lqc2(*(undefined (*) [16])((int)&(lcp->lwmtx).matrix[1].x + iVar4));
        auVar11 = _lqc2(*(undefined (*) [16])((int)&(lcp->lwmtx).matrix[2].x + iVar4));
        auVar12 = _lqc2(*(undefined (*) [16])((int)&(lcp->lwmtx).matrix[3].x + iVar4));
        auVar9 = _sqc2(auVar9);
        *(undefined (*) [16])((int)&(lcp->workm).matrix[0].x + iVar4) = auVar9;
        auVar9 = _sqc2(auVar10);
        *(undefined (*) [16])((int)&(p_Var1->workm).matrix[1].x + iVar4) = auVar9;
        auVar9 = _sqc2(auVar11);
        *(undefined (*) [16])((int)&(p_Var1->workm).matrix[2].x + iVar4) = auVar9;
        auVar9 = _sqc2(auVar12);
        *(undefined (*) [16])((int)&(p_Var1->workm).matrix[3].x + iVar4) = auVar9;
                    /* end of inlined section */
        iVar3 = iVar3 + 1;
        fVar5 = SgCalcLen(*(float *)((int)&(p_Var1->workm).matrix[0].x + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[1].x + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[2].x + iVar4));
        fVar6 = SgCalcLen(*(float *)((int)&(p_Var1->workm).matrix[0].y + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[1].y + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[2].y + iVar4));
        fVar7 = SgCalcLen(*(float *)((int)&(p_Var1->workm).matrix[0].z + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[1].z + iVar4),
                          *(float *)((int)&(p_Var1->workm).matrix[2].z + iVar4));
        iVar2 = blocksm + -1;
        *(float *)((int)&(p_Var1->workm).matrix[3].w + iVar4) = fVar8 / (fVar5 + fVar6 + fVar7);
        iVar4 = iVar4 + 0xe0;
      } while (iVar3 < iVar2);
    }
    SetLightData(lcp + prim[2],lcp + prim[2]);
    return;
  }
  return;
}

void SgSortUnitPrim(u_int *prim) {
  uint **ppuVar1;
  int iVar2;
  uint **ppuVar3;
  
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar3 = ppuVar1, ppuVar3 != (uint **)0x0) {
      switch(((uint **)prim)[1]) {
      case (uint *)0x0:
        vuvnprim = prim;
        break;
      case (uint *)0x1:
        SetVUMeshData(prim);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x2:
        SetMaterialDataVU(prim);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x4:
        iVar2 = CheckBoundingBox(prim);
        if (iVar2 == 0) {
          return;
        }
        write_coord = write_coord + 1;
        SetMaterialPointerCoordVU();
        iVar2 = CheckCoordCache((int)((uint **)prim)[2]);
        if (iVar2 == 0) {
          SetLightData(lcp + (int)((uint **)prim)[2],(_SgCOORDUNIT *)0x0);
          SetVU1Header();
          ppuVar3 = (uint **)*prim;
        }
        else {
          ppuVar3 = (uint **)*prim;
        }
        break;
      case (uint *)0x5:
        GsImageProcess(prim);
        ppuVar3 = (uint **)*prim;
      }
      prim = (uint *)ppuVar3;
      ppuVar1 = (uint **)*ppuVar3;
    }
  }
  return;
}

void SgSortUnitPrimPost(u_int *prim) {
  uint **ppuVar1;
  uint **ppuVar2;
  
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar2 = ppuVar1, ppuVar2 != (uint **)0x0) {
      switch(((uint **)prim)[1]) {
      case (uint *)0x0:
        vuvnprim = prim;
        break;
      case (uint *)0x1:
        SetVUMeshDataPost(prim);
        ppuVar2 = (uint **)*prim;
        break;
      case (uint *)0x2:
        SetMaterialDataVU(prim);
        ppuVar2 = (uint **)*prim;
        break;
      case (uint *)0x3:
        SetMaterialPointerCoordVU();
        SetCoordData(prim);
        ccahe.cache_on = -1;
        SetVU1Header();
        CalcVertexBuffer(prim);
        write_coord = write_coord + 1;
        goto LAB_00174928;
      case (uint *)0x5:
        GsImageProcess(prim);
LAB_00174928:
        ppuVar2 = (uint **)*prim;
      }
      prim = (uint *)ppuVar2;
      ppuVar1 = (uint **)*ppuVar2;
    }
  }
  return;
}

void SgSortPreProcess(u_int *prim) {
	static u_int *old_pointer = NULL;
	static sceDmaTag tag[2][3];
	static sceDmaTag *tp;
	static qword base[3];
	static qword base3[6];
	static qword *base2;
	
  uint *puVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  
  if (prim != (uint *)0x0) {
    ppuVar2 = (uint **)*prim;
    while (ppuVar3 = ppuVar2, ppuVar3 != (uint **)0x0) {
      puVar1 = ((uint **)prim)[1];
      if (puVar1 == (uint *)0xa) {
LAB_001749e0:
        LoadTRI2Files(prim);
        ppuVar3 = (uint **)*prim;
      }
      else if (puVar1 < (uint *)0xb) {
        if (puVar1 == (uint *)0x5) {
          GsImageProcess(prim);
          ppuVar3 = (uint **)*prim;
        }
      }
      else if ((puVar1 == (uint *)0xd) && (loadbw_flg != 0)) goto LAB_001749e0;
      prim = (uint *)ppuVar3;
      ppuVar2 = (uint **)*ppuVar3;
    }
  }
  return;
}

void AppendVUProgTag(u_int *prog) {
  ushort uVar1;
  
  if (((*(long *)prog << 4) >> 0x20 & 7U) != 7) {
    uVar1 = *(ushort *)prog;
    while( true ) {
      AppendDmaTag((uint)((int)prog + 0x10),(uint)uVar1);
      prog = (uint *)((int)prog + ((uint)*(ushort *)prog * 2 + 2) * 8);
      FlushModel(0);
      if (((*(long *)prog << 4) >> 0x20 & 7U) == 7) break;
      uVar1 = *(ushort *)prog;
    }
  }
  return;
}

void LoadSgProg(int load_prog) {
	static u_int pk[4] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 96,
		/* [3] = */ 464
	};
	static SgSourceChainTag starttag;
	
  if (vu_prog_num == load_prog) {
    return;
  }
  if (load_prog == 1) {
    AppendVUProgTag((uint *)&_dma_1);
  }
  else if (load_prog < 2) {
    if (load_prog == 0) {
      AppendVUProgTag((uint *)&_dma_1);
    }
  }
  else if (load_prog == 2) {
    AppendVUProgTag((uint *)&_dma_1);
  }
  else if (load_prog == 3) {
    AppendVUProgTag((uint *)&_dma_1);
  }
  AppendDmaTag((uint)pk_223,1);
  vu_prog_num = load_prog;
  FlushModel(0);
  return;
}

void SetUpSortUnit() {
	u_int *datap;
	
  float (*pafVar1) [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  ccahe.cache_on = -1;
  if (SgPointNum != 0) {
    SgPointGroupNum = 1;
  }
  SgSpotGroupNum = (int)(SgSpotNum != 0);
  DAT_70000004 = &DAT_11000000;
  DAT_70000008 = 0x1000404;
  DAT_7000000c = 0x6c2e0000;
  DAT_70000000 = 0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000044 = 0x20364000;
  DAT_70000054 = 0x303e4000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000074 = 0x2036c000;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  DAT_70000078 = 0x41;
  DAT_70000080 = 0x8000;
  DAT_70000084 = 0x303ec000;
  DAT_70000088 = 0x412;
  DAT_70000040 = 0;
  DAT_70000048 = 0x41;
  DAT_7000004c = 0;
  DAT_70000050 = 0;
  DAT_70000058 = 0x412;
  DAT_7000005c = 0;
  DAT_70000060 = 0x8000;
  DAT_70000070 = 0x8000;
  DAT_7000007c = 0;
  DAT_7000008c = 0;
                    /* inlined from libsg.h */
  auVar2 = _lqc2((undefined  [16])SgWSMtx.matrix[0]);
  auVar3 = _lqc2((undefined  [16])SgWSMtx.matrix[1]);
  auVar4 = _lqc2((undefined  [16])SgWSMtx.matrix[2]);
  auVar5 = _lqc2((undefined  [16])SgWSMtx.matrix[3]);
  _DAT_70000090 = _sqc2(auVar2);
  _DAT_700000a0 = _sqc2(auVar3);
  _DAT_700000b0 = _sqc2(auVar4);
  _DAT_700000c0 = _sqc2(auVar5);
  auVar2 = _lqc2((undefined  [16])SgCMtx[0]);
  auVar3 = _lqc2((undefined  [16])SgCMtx[1]);
  auVar4 = _lqc2((undefined  [16])SgCMtx[2]);
  auVar5 = _lqc2((undefined  [16])SgCMtx[3]);
  _DAT_700000d0 = _sqc2(auVar2);
  _DAT_700000e0 = _sqc2(auVar3);
  _DAT_700000f0 = _sqc2(auVar4);
  _DAT_70000100 = _sqc2(auVar5);
  DAT_70000010 = (undefined4)vf12reg[0]._0_8_;
  DAT_70000014 = (undefined4)((ulong)vf12reg[0]._0_8_ >> 0x20);
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
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar1 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar1)[0] = 4.656613e-10;
  pafVar1[1][0] = 1.0;
  pafVar1[1][3] = 0.0;
  (*pafVar1)[1] = 0.0;
  (*pafVar1)[2] = 0.0;
  (*pafVar1)[3] = 1.0;
  pafVar1[1][1] = 0.0;
  pafVar1[1][2] = 0.0;
  AppendDmaBuffer(2);
  return;
}

void SgSortUnit(void *sgd_top, int pnum) {
	int i;
	u_int *pk;
	
  uint *puVar1;
  uint **ppuVar2;
  int iVar3;
  
  wscissor_flg = 0;
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  if (((uint)lcp & 0xf) != 0) {
    printf("SgSortUnit Data broken. %x lcp %x\n");
    return;
  }
  blocksm = *(int *)((int)sgd_top + 0x14);
  lphead = *(PHEAD **)((int)sgd_top + 0x10);
  write_flg = 0;
  write_counter = 0;
  write_coord = 0;
  sgd_top_addr = sgd_top;
  ClearMaterialCache((HeaderSection *)sgd_top);
  SetUpSortUnit();
  LoadSgProg(0);
  if (pnum < 0) {
    iVar3 = 1;
    SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
    ppuVar2 = (uint **)((int)sgd_top + 0x1c);
    if (1 < blocksm + -1) {
      puVar1 = *ppuVar2;
      while( true ) {
        iVar3 = iVar3 + 1;
        ppuVar2 = ppuVar2 + 1;
        SgSortUnitPrim(puVar1);
        if (blocksm + -1 <= iVar3) break;
        puVar1 = *ppuVar2;
      }
    }
    puVar1 = *(uint **)((int)sgd_top + iVar3 * 4 + 0x18);
    if (puVar1 != (uint *)0x0) {
      SgSortUnitPrimPost(puVar1);
    }
  }
  else if (pnum == 0) {
    SgSortPreProcess(*(uint **)((int)sgd_top + 0x18));
  }
  else if (pnum == blocksm + -1) {
    SgSortUnitPrimPost(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
  }
  else {
    SgSortUnitPrim(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
  }
  return;
}

void SgSortUnitKind(void *sgd_top, int num) {
  if ((*(byte *)((int)sgd_top + 5) & 1) != 0) {
    SgSortUnitP(sgd_top,num);
    return;
  }
  SgSortUnit(sgd_top,num);
  return;
}

void _SetLWMatrix0(float *m0[4]) {
  _lqc2((undefined  [16])*m0);
  _lqc2((undefined  [16])m0[1]);
  _lqc2((undefined  [16])m0[2]);
  _lqc2((undefined  [16])m0[3]);
  return;
}

void _SetLWMatrix1(float *m0[4]) {
  _lqc2((undefined  [16])*m0);
  _lqc2((undefined  [16])m0[1]);
  _lqc2((undefined  [16])m0[2]);
  _lqc2((undefined  [16])m0[3]);
  return;
}

void _SetRotTransPersMatrix(float *m0[4]) {
  _lqc2((undefined  [16])*m0);
  _lqc2((undefined  [16])m0[1]);
  _lqc2((undefined  [16])m0[2]);
  _lqc2((undefined  [16])m0[3]);
  return;
}

void _CalcVertex(float *dp, float *v, float *n) {
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined auVar4 [16];
  
  auVar4 = _lqc2(*(undefined (*) [16])v);
  _vmulabc(in_vf4,auVar4);
  _vmaddabc(in_vf5,auVar4);
  _vmaddabc(in_vf6,auVar4);
  auVar4 = _vmaddbc(in_vf7,auVar4);
  uVar1 = *(undefined8 *)n;
  fVar2 = n[2];
  fVar3 = n[3];
  dp[4] = (float)uVar1;
  dp[5] = (float)((ulong)uVar1 >> 0x20);
  dp[6] = fVar2;
  dp[7] = fVar3;
  auVar4 = _sqc2(auVar4);
  *(undefined (*) [16])dp = auVar4;
  return;
}

void _vfito0(int *v0) {
  undefined in_vf18 [16];
  undefined auVar1 [16];
  undefined in_vf19 [16];
  
  auVar1 = _vminibc(in_vf18,in_vf19);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}
