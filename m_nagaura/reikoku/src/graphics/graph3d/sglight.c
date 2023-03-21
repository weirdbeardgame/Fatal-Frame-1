// STATUS: NOT STARTED

static int stack_num = 0;
static int dbg_flg = 0;
static int write_counter;
static SgLIGHT *stack_light[9];
static sceVu0FVECTOR stack_eye[3];
static int stack_light_num[9];

void SgPreRenderDbgOn() {
  dbg_flg = 1;
  return;
}

void SgPreRenderDbgOff() {
  dbg_flg = 0;
  return;
}

void QueSetMatrix(float *m[4], int que, float *v) {
	sceVu0FVECTOR tmpv;
	
  float *pfVar1;
  float tmpv [4];
  
  _NormalizeVector(tmpv,v);
  pfVar1 = *m + que;
  *pfVar1 = tmpv[0];
  pfVar1[8] = tmpv[2];
  pfVar1[4] = tmpv[1];
  return;
}

void QueSetMatrixNonNormalized(float *m[4], int que, float *v) {
  float *pfVar1;
  
  pfVar1 = *m + que;
  *pfVar1 = *v;
  pfVar1[4] = v[1];
  pfVar1[8] = v[2];
  return;
}

void SgSetAmbient(float *ambient) {
                    /* inlined from libsg.h */
  TAmbient[0] = *ambient;
  TAmbient[1] = ambient[1];
  TAmbient[2] = ambient[2];
  TAmbient[3] = ambient[3];
  return;
}

void SgSetDefaultLight(float *eye, SgLIGHT *p0, SgLIGHT *p1, SgLIGHT *p2) {
	sceVu0FVECTOR nl;
	sceVu0FVECTOR tmpv;
	SgLIGHT *po[3];
	int i;
	float *v1;
	float *v1;
	
  SgLIGHT *pSVar1;
  float afVar2 [4];
  undefined8 uVar3;
  float (*pafVar4) [4];
  float (*pafVar5) [4];
  float (*pafVar6) [4];
  float (*pafVar7) [4];
  float fVar8;
  float fVar9;
  int iVar10;
  SgLIGHT **ppSVar11;
  undefined in_vf0 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  float nl [4];
  float tmpv [4];
  SgLIGHT *po [3];
  
                    /* end of inlined section */
  _NormalizeVector(ieye,eye);
                    /* inlined from libsg.h */
  auVar13 = _qmtc2(0xbf800000);
  auVar12 = _lqc2((undefined  [16])ieye);
  auVar12 = _vmulbc(auVar12,auVar13);
  ieye = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
  ppSVar11 = po;
  pafVar7 = DColorMtx;
  pafVar4 = SColorMtx;
  pafVar6 = SLightMtx;
  pafVar5 = DLightMtx;
  iVar10 = 2;
  do {
                    /* inlined from libsg.h */
    afVar2 = (float  [4])_sqc2(in_vf0);
    *pafVar5 = afVar2;
    afVar2 = (float  [4])_sqc2(in_vf0);
    *pafVar6 = afVar2;
    afVar2 = (float  [4])_sqc2(in_vf0);
    *pafVar7 = afVar2;
    afVar2 = (float  [4])_sqc2(in_vf0);
    *pafVar4 = afVar2;
                    /* end of inlined section */
    pafVar4 = pafVar4[1];
    pafVar7 = pafVar7[1];
    pafVar6 = pafVar6[1];
    iVar10 = iVar10 + -1;
    pafVar5 = pafVar5[1];
  } while (-1 < iVar10);
  po[0] = p0;
  po[1] = p1;
  po[2] = p2;
  pafVar5 = SColorMtx;
  pafVar4 = DColorMtx;
  iVar10 = 0;
  do {
    if (*ppSVar11 == (SgLIGHT *)0x0) {
                    /* inlined from libsg.h */
      afVar2 = (float  [4])_sqc2(in_vf0);
      *pafVar4 = afVar2;
      afVar2 = (float  [4])_sqc2(in_vf0);
      *pafVar5 = afVar2;
                    /* end of inlined section */
    }
    else {
      _NormalizeVector(nl,(*ppSVar11)->direction);
                    /* inlined from libsg.h */
      pSVar1 = *ppSVar11;
      uVar3 = *(undefined8 *)pSVar1->diffuse;
      fVar8 = pSVar1->diffuse[2];
      fVar9 = pSVar1->diffuse[3];
      (*pafVar4)[0] = (float)uVar3;
      (*pafVar4)[1] = (float)((ulong)uVar3 >> 0x20);
      (*pafVar4)[2] = fVar8;
      (*pafVar4)[3] = fVar9;
      uVar3 = *(undefined8 *)pSVar1->specular;
      fVar8 = pSVar1->specular[2];
      fVar9 = pSVar1->specular[3];
      (*pafVar5)[0] = (float)uVar3;
      (*pafVar5)[1] = (float)((ulong)uVar3 >> 0x20);
      (*pafVar5)[2] = fVar8;
      (*pafVar5)[3] = fVar9;
                    /* end of inlined section */
      QueSetMatrix(DLightMtx,iVar10,nl);
                    /* inlined from libsg.h */
      auVar12 = _lqc2((undefined  [16])ieye);
      auVar13 = _lqc2((undefined  [16])nl);
      auVar12 = _vadd(auVar12,auVar13);
      tmpv = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
      _NormalizeVector(tmpv,tmpv);
      QueSetMatrix(SLightMtx,iVar10,tmpv);
    }
    iVar10 = iVar10 + 1;
    pafVar5 = pafVar5[1];
    pafVar4 = pafVar4[1];
    ppSVar11 = ppSVar11 + 1;
  } while (iVar10 < 3);
  DColorMtx[0][3] = 1.0;
  return;
}

static void _SetColorMtx(float *dc[4], float *sc[4], float *am, float *v) {
  undefined4 in_vi0;
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  auVar3 = _lqc2(*(undefined (*) [16])v);
  auVar2 = _lqc2(*(undefined (*) [16])am);
  auVar3 = _vmul(auVar3,auVar2);
  auVar5 = _vmulbc(auVar3,auVar2);
  auVar3 = _lqc2(*(undefined (*) [16])(v + 0xc));
  auVar2 = _lqc2((undefined  [16])*dc);
  auVar3 = _vmulbc(auVar3,auVar2);
  _vadd(auVar5,auVar3);
  auVar4 = _lqc2(*(undefined (*) [16])(v + 4));
  _vmove(auVar2);
  auVar2 = _lqc2((undefined  [16])*dc);
  auVar3 = _lqc2((undefined  [16])dc[1]);
  auVar5 = _lqc2((undefined  [16])dc[2]);
  auVar6 = _vmul(auVar2,auVar4);
  auVar3 = _vmul(auVar3,auVar4);
  auVar5 = _vmul(auVar5,auVar4);
  auVar6 = _vmulbc(auVar6,auVar2);
  _vmulbc(auVar3,auVar2);
  auVar8 = _vmulbc(auVar5,auVar2);
  auVar7 = _vmove(auVar4);
  auVar4 = _lqc2(*(undefined (*) [16])(v + 8));
  auVar2 = _lqc2((undefined  [16])*sc);
  auVar3 = _lqc2((undefined  [16])sc[1]);
  auVar5 = _lqc2((undefined  [16])sc[2]);
  auVar2 = _vmul(auVar2,auVar4);
  auVar3 = _vmul(auVar3,auVar4);
  auVar5 = _vmul(auVar5,auVar4);
  _vmulbc(auVar2,auVar3);
  auVar2 = _vmulbc(auVar3,auVar3);
  auVar5 = _vmulbc(auVar5,auVar2);
  auVar2 = _vmove(auVar4);
  auVar3 = _vmove(auVar7);
  auVar4 = _vmove(auVar5);
  uVar1 = _viaddi(in_vi0,0xf);
  uVar1 = _viaddi(uVar1,0xb);
  _vsqi(auVar6,uVar1);
  _vsqi(auVar7,uVar1);
  _vsqi(auVar8,uVar1);
  _vsqi(auVar2,uVar1);
  _vsqi(auVar3,uVar1);
  _vsqi(auVar5,uVar1);
  _vsqi(auVar4,uVar1);
  return;
}

void _ReadDLightMtx(float *tmp[4]) {
  float afVar1 [4];
  undefined in_vf20 [16];
  undefined in_vf21 [16];
  undefined in_vf22 [16];
  
  afVar1 = (float  [4])_sqc2(in_vf20);
  *tmp = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf21);
  tmp[1] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf22);
  tmp[2] = afVar1;
  return;
}

static void _ReadSLightMtx(float *tmp[4]) {
  float afVar1 [4];
  undefined in_vf23 [16];
  undefined in_vf24 [16];
  undefined in_vf25 [16];
  
  afVar1 = (float  [4])_sqc2(in_vf23);
  *tmp = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf24);
  tmp[1] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf25);
  tmp[2] = afVar1;
  return;
}

void _ReadDColor(float *tmp[4]) {
  float afVar1 [4];
  undefined in_vf26 [16];
  undefined in_vf27 [16];
  undefined in_vf28 [16];
  
  afVar1 = (float  [4])_sqc2(in_vf26);
  *tmp = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf27);
  tmp[1] = afVar1;
  afVar1 = (float  [4])_sqc2(in_vf28);
  tmp[2] = afVar1;
  return;
}

static int Tim2CalcBufWidth(int psm, int w) {
  int iVar1;
  
  switch(psm) {
  case 0:
  case 1:
  case 2:
  case 10:
  case 0x1b:
  case 0x24:
  case 0x2c:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x3a:
    iVar1 = w + 0x7e;
    if (-1 < w + 0x3f) {
      iVar1 = w + 0x3f;
    }
    break;
  default:
    return 0;
  case 0x13:
  case 0x14:
    iVar1 = w + 0x7e;
    if (-1 < w + 0x3f) {
      iVar1 = w + 0x3f;
    }
    return (iVar1 >> 6) + (iVar1 >> 6 & 1U);
  }
  return iVar1 >> 6;
}

int GetDecay() {
	u_int tmp;
	
  undefined8 uVar1;
  undefined4 in_vi13;
  
  uVar1 = _cfc2(in_vi13);
  return (int)uVar1;
}

static void SetDecay(u_int decay) {
	int count;
	u_int decay;
	
  int iVar1;
  
  iVar1 = 0;
  if (decay != 0) {
    do {
      decay = decay >> 1;
      iVar1 = iVar1 + 1;
    } while (decay != 0);
  }
  _ctc2(iVar1);
  return;
}

float SetMaxColor255(float *dcol, float *col) {
	float div;
	
  float fVar1;
  float fVar2;
  
  fVar1 = *col;
  fVar2 = col[1];
  if (fVar2 < fVar1) {
    fVar2 = col[2];
    if (fVar1 <= fVar2) goto LAB_00175f30;
  }
  else {
    fVar1 = col[2];
    if (fVar1 < fVar2) goto LAB_00175f30;
  }
  fVar2 = fVar1;
LAB_00175f30:
  fVar2 = fVar2 / 255.0;
  if (fVar2 == 0.0) {
    fVar2 = 1.0;
  }
  sceVu0DivVectorXYZ(fVar2,dcol);
  return fVar2;
}

void SetBWLight(float *col) {
	float bwcolor;
	
  float fVar1;
  
  if (loadbw_flg != 0) {
    fVar1 = (*col + col[1] + col[2]) / 3.0;
    *col = fVar1;
    col[2] = fVar1;
    col[1] = fVar1;
  }
  return;
}

void SetMaterialPointer() {
  SgLightParallelp = (SgVULightParallel *)&DAT_70000300;
  SgLightSpotp = (SgVULightSpot *)&DAT_70000370;
  SgLightPointp = (SgVULightPoint *)&DAT_700003f0;
  return;
}

void ClearMaterialCache(HeaderSection *hs) {
	int i;
	
  ushort uVar1;
  SgMaterial *pSVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = hs->materials;
  if (uVar1 != 0) {
    pSVar2 = hs->matp;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      pSVar2[iVar3].vifcode[0] = 0xffffffff;
      iVar3 = iVar4;
    } while (iVar4 < (int)(uint)uVar1);
  }
  return;
}

void SetMaterialDataVU(u_int *prim) {
	static int old_tag_buf = -1;
	qword *base;
	SgMaterialC *pmatC;
	static SgMaterialC *old_pmatC = NULL;
	int i;
	int qwc;
	
  bool bVar1;
  uint uVar2;
  SgVULightSpot *pSVar3;
  SgVULightPoint *pSVar4;
  int iVar5;
  int *piVar6;
  SgVULightParallel *pSVar7;
  SgVULightParallel *pSVar8;
  int iVar9;
  int *piVar10;
  int size;
  
  if (old_tag_buf_171 != (undefined *)tagswap) {
    ClearMaterialCache((HeaderSection *)sgd_top_addr);
    old_tag_buf_171 = (undefined *)tagswap;
  }
  uVar2 = prim[2];
  if (((-1 < *(int *)(uVar2 + 0x50)) && (*(int *)(uVar2 + 0x6c) == SgPointGroupNum)) &&
     (*(int *)(uVar2 + 0x7c) == SgSpotGroupNum)) {
    if (*(int *)(uVar2 + 0x6c) != 0) {
      iVar9 = 0;
      piVar6 = (int *)(uVar2 + 0x70);
      piVar10 = SgPointGroup[0].lnum;
      do {
        iVar9 = iVar9 + 1;
        if (*piVar6 != *piVar10) goto LAB_0017611c;
        piVar10 = piVar10 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar9 < 3);
    }
    if (SgSpotGroupNum != 0) {
      iVar9 = 0;
      piVar6 = (int *)(uVar2 + 0x80);
      piVar10 = SgSpotGroup[0].lnum;
      do {
        iVar9 = iVar9 + 1;
        if (*piVar6 != *piVar10) goto LAB_0017611c;
        piVar10 = piVar10 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar9 < 3);
    }
    if (uVar2 == old_pmatC_172) {
      return;
    }
    old_pmatC_172 = uVar2;
    AppendDmaTag(*(uint *)(uVar2 + 0x54),*(int *)(uVar2 + 0x58));
    FlushModel(0);
    return;
  }
LAB_0017611c:
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pSVar7 = (SgVULightParallel *)objwork[sbuffer_p];
                    /* end of inlined section */
  iVar9 = 0;
  bVar1 = SgSpotGroupNum != 0;
  old_pmatC_172 = uVar2;
  *(uint *)(uVar2 + 0x54) = (uint)pSVar7 & 0xfffffff;
  pSVar8 = pSVar7;
  if (bVar1) {
    iVar9 = 8;
    pSVar8 = pSVar7 + 1;
    SgLightSpotp = (SgVULightSpot *)pSVar7;
  }
  size = iVar9 + 8;
  SgLightParallelp = pSVar8;
  if (SgPointGroupNum != 0) {
    SgLightParallelp = pSVar8 + 1;
    size = iVar9 + 0x10;
    SgLightPointp = (SgVULightPoint *)pSVar8;
  }
  *(int *)(uVar2 + 0x58) = size;
  SetMaterialData(prim);
  iVar9 = SgSpotGroupNum;
  pSVar3 = SgLightSpotp;
  if (SgSpotGroupNum != 0) {
    SgLightSpotp->SpotVif[2] = 0x1000404;
    pSVar3->SpotVif[3] = 0x6c070035;
    pSVar3->SpotVif[0] = 0;
    pSVar3->SpotVif[1] = 0;
    *(int *)(uVar2 + 0x80) = SgSpotGroup[0].lnum[0];
    *(int *)(uVar2 + 0x84) = SgSpotGroup[0].lnum[1];
    *(int *)(uVar2 + 0x88) = SgSpotGroup[0].lnum[2];
  }
  iVar5 = SgPointGroupNum;
  bVar1 = SgPointGroupNum != 0;
  *(int *)(uVar2 + 0x7c) = iVar9;
  pSVar4 = SgLightPointp;
  if (bVar1) {
    SgLightPointp->PointVif[2] = 0x1000404;
    pSVar4->PointVif[3] = 0x6c07003c;
    pSVar4->PointVif[0] = 0;
    pSVar4->PointVif[1] = 0;
    *(int *)(uVar2 + 0x70) = SgPointGroup[0].lnum[0];
    *(int *)(uVar2 + 0x74) = SgPointGroup[0].lnum[1];
    *(int *)(uVar2 + 0x78) = SgPointGroup[0].lnum[2];
  }
  pSVar8 = SgLightParallelp;
  *(int *)(uVar2 + 0x6c) = iVar5;
  pSVar8->ParallelVif[3] = 0x6c07002e;
  pSVar8->ParallelVif[2] = 0x1000404;
  pSVar8->ParallelVif[0] = 0;
  pSVar8->ParallelVif[1] = 0;
  AppendDmaBuffer(size);
  FlushModel(0);
  return;
}

void SetMaterialPointerCoord() {
  SgLightCoordp = (SgVULightCoord *)&DAT_700001a0;
  return;
}

void SetMaterialPointerCoordVU() {
                    /* inlined from libsg.h */
                    /* end of inlined section */
  SgLightCoordp = (SgVULightCoord *)objwork[sbuffer_p + 0x1a];
  return;
}

void SetMaterialDataPrerender() {
	float *amb;
	
  _lqc2(_DAT_70000110);
  _lqc2(_DAT_70000120);
  _lqc2(_DAT_70000130);
  _lqc2(_DAT_70000150);
  _lqc2(_DAT_70000160);
  _lqc2(_DAT_70000170);
  _lqc2(_DAT_70000180);
  _lqc2(*(undefined (*) [16])SgLightParallelp->Parallel_Ambient);
  return;
}

void SetMaterialData(u_int *prim) {
	int i;
	int j;
	SgMaterialC *pmatC;
	sceVu0FVECTOR *dvec;
	float max_color;
	float *v;
	float *v1;
	float *v;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float sc;
	float *v;
	float *v0;
	float *v0;
	float *v1;
	float sc;
	float *v;
	float *v0;
	float *v0;
	float *v1;
	float sc;
	float *v;
	float *v;
	SgPOINTGROUP *ppg;
	float *v;
	float *v0;
	float *v1;
	float sc;
	float *v;
	float *v0;
	float *v0;
	float *v1;
	float sc;
	SgSPOTGROUP *spg;
	float *v;
	float *v0;
	float *v1;
	float sc;
	float *v;
	float *v0;
	float *v0;
	float *v1;
	float sc;
	
  bool bVar1;
  int *piVar2;
  float afVar3 [4];
  SgVULightSpot *pSVar4;
  SgVULightPoint *pSVar5;
  SgVULightParallel *pSVar6;
  int iVar7;
  float (*pafVar8) [4];
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined in_vf0 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  piVar2 = (int *)prim[2];
  piVar2[0x14] = 1;
  if (*piVar2 == 0) {
    TAmbient[3] = 255.0;
    DColorMtx[0][3] = 255.0;
    fVar15 = 86.0;
  }
  else {
    TAmbient[3] = 128.0;
    fVar15 = 43.0;
    DColorMtx[0][3] = 192.0;
  }
  SColorMtx[1][3] = ((float)piVar2[0xc] + (float)piVar2[0xd] + (float)piVar2[0xe]) * fVar15;
                    /* inlined from libsg.h */
                    /* end of inlined section */
  SColorMtx[2][3] = 255.0;
                    /* inlined from libsg.h */
  auVar17 = _lqc2(CONCAT412(TAmbient[3],TAmbient._0_12_));
  auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 4));
  auVar17 = _vmul(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  auVar17 = _lqc2(auVar17);
  auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 0x10));
  auVar17 = _vadd(auVar17,auVar18);
  _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
  SetBWLight((float *)&DAT_70000620);
  pSVar6 = SgLightParallelp;
                    /* inlined from libsg.h */
  auVar18 = _qmtc2(TAmbient[3]);
  auVar17 = _lqc2(_DAT_70000620);
  auVar17 = _vmulbc(auVar17,auVar18);
  auVar17 = _sqc2(auVar17);
  *(undefined (*) [16])SgLightParallelp->Parallel_Ambient = auVar17;
                    /* end of inlined section */
  iVar9 = 0;
  bVar1 = 0 < SgInfiniteNum;
  pSVar6->Parallel_Ambient[3] = SColorMtx[2][3];
  if (bVar1) {
                    /* inlined from libsg.h */
    iVar7 = 0;
    do {
      auVar17 = _lqc2(*(undefined (*) [16])((int)DColorMtx + iVar7));
      auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 8));
      auVar17 = _vmul(auVar17,auVar18);
      _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
      SetBWLight((float *)&DAT_70000620);
                    /* inlined from libsg.h */
      auVar18 = _qmtc2(DColorMtx[0][3]);
      auVar17 = _lqc2(_DAT_70000620);
      auVar17 = _vmulbc(auVar17,auVar18);
      auVar17 = _sqc2(auVar17);
      *(undefined (*) [16])((int)SgLightParallelp->Parallel_DColor + iVar7) = auVar17;
      auVar17 = _lqc2(*(undefined (*) [16])((int)SColorMtx + iVar7));
      auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 0xc));
      auVar17 = _vmul(auVar17,auVar18);
      _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
      SetBWLight((float *)&DAT_70000620);
      pSVar6 = SgLightParallelp;
                    /* inlined from libsg.h */
      auVar18 = _qmtc2(SColorMtx[1][3]);
      auVar17 = _lqc2(_DAT_70000620);
      auVar17 = _vmulbc(auVar17,auVar18);
      auVar17 = _sqc2(auVar17);
      *(undefined (*) [16])((int)SgLightParallelp->Parallel_SColor + iVar7) = auVar17;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
      iVar7 = iVar9 * 0x10;
    } while (iVar9 < SgInfiniteNum);
  }
  iVar7 = SgPointGroupNum;
  if (iVar9 < 3) {
    fVar15 = (float)piVar2[0xb];
                    /* inlined from libsg.h */
    do {
      afVar3 = (float  [4])_sqc2(in_vf0);
      pSVar6->Parallel_DColor[iVar9] = afVar3;
      afVar3 = (float  [4])_sqc2(in_vf0);
      pSVar6->Parallel_SColor[iVar9] = afVar3;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    pSVar6->Parallel_DColor[3] = fVar15;
  }
  else {
    pSVar6->Parallel_DColor[3] = (float)piVar2[0xb];
  }
  piVar2[0x1b] = iVar7;
  pSVar6->Parallel_SColor[3] = (float)piVar2[0xb];
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar7 = iVar9 + 1;
      iVar14 = 0x20;
      pafVar8 = SgPointGroup[iVar9].DColorMtx;
      piVar12 = SgPointGroup[iVar9].lnum;
      pfVar11 = SgPointGroup[iVar9].btimes;
      piVar13 = piVar2 + 0x1c;
      iVar9 = 0;
      do {
                    /* inlined from libsg.h */
        auVar17 = _lqc2((undefined  [16])*pafVar8);
        auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 8));
        auVar17 = _vmul(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        SetBWLight((float *)&DAT_70000620);
                    /* inlined from libsg.h */
        auVar18 = _qmtc2(DColorMtx[0][3]);
        auVar17 = _lqc2(_DAT_70000620);
        auVar17 = _vmulbc(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        fVar16 = SetMaxColor255((float *)((int)SgLightPointp->PointVif + iVar14),
                                (float *)&DAT_70000620);
                    /* inlined from libsg.h */
        auVar17 = _lqc2((undefined  [16])pafVar8[3]);
        auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 0xc));
        auVar17 = _vmul(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        SetBWLight((float *)&DAT_70000620);
        pSVar5 = SgLightPointp;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
        auVar18 = _qmtc2(SColorMtx[1][3] / fVar16);
        auVar17 = _lqc2(_DAT_70000620);
        auVar17 = _vmulbc(auVar17,auVar18);
        afVar3 = (float  [4])_sqc2(auVar17);
        SgLightPointp->Point_SColor[iVar9] = afVar3;
                    /* end of inlined section */
        fVar15 = *pfVar11;
        iVar10 = iVar9 + 1;
        *piVar13 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar13 = piVar13 + 1;
        pfVar11 = pfVar11 + 1;
        pSVar5->Point_btimes[iVar9] = fVar15 * fVar16;
        iVar14 = iVar14 + 0x10;
        pafVar8 = pafVar8[1];
        iVar9 = iVar10;
      } while (iVar10 < 3);
      iVar9 = iVar7;
    } while (iVar7 < SgPointGroupNum);
  }
  if (0 < SgSpotGroupNum) {
    iVar9 = 0;
    do {
      iVar7 = iVar9 + 1;
      iVar14 = 0x20;
      pafVar8 = SgSpotGroup[iVar9].DColorMtx;
      piVar12 = SgSpotGroup[iVar9].lnum;
      pfVar11 = SgSpotGroup[iVar9].btimes;
      piVar13 = piVar2 + 0x20;
      iVar9 = 0;
      do {
                    /* inlined from libsg.h */
        auVar17 = _lqc2((undefined  [16])*pafVar8);
        auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 8));
        auVar17 = _vmul(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        SetBWLight((float *)&DAT_70000620);
                    /* inlined from libsg.h */
        auVar18 = _qmtc2(DColorMtx[0][3]);
        auVar17 = _lqc2(_DAT_70000620);
        auVar17 = _vmulbc(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        fVar16 = SetMaxColor255((float *)((int)SgLightSpotp->SpotVif + iVar14),
                                (float *)&DAT_70000620);
                    /* inlined from libsg.h */
        auVar17 = _lqc2((undefined  [16])pafVar8[3]);
        auVar18 = _lqc2(*(undefined (*) [16])(piVar2 + 0xc));
        auVar17 = _vmul(auVar17,auVar18);
        _DAT_70000620 = _sqc2(auVar17);
                    /* end of inlined section */
        SetBWLight((float *)&DAT_70000620);
        pSVar4 = SgLightSpotp;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
        auVar18 = _qmtc2(SColorMtx[1][3] / fVar16);
        auVar17 = _lqc2(_DAT_70000620);
        auVar17 = _vmulbc(auVar17,auVar18);
        afVar3 = (float  [4])_sqc2(auVar17);
        SgLightSpotp->Spot_SColor[iVar9] = afVar3;
                    /* end of inlined section */
        fVar15 = *pfVar11;
        iVar10 = iVar9 + 1;
        *piVar13 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar13 = piVar13 + 1;
        pfVar11 = pfVar11 + 1;
        pSVar4->Spot_btimes[iVar9] = fVar15 * fVar16;
        iVar14 = iVar14 + 0x10;
        pafVar8 = pafVar8[1];
        iVar9 = iVar10;
      } while (iVar10 < 3);
      iVar9 = iVar7;
    } while (iVar7 < SgSpotGroupNum);
  }
  return;
}

static void _SetDLight(float *m0[4]) {
  undefined4 in_vi0;
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar2 = _lqc2((undefined  [16])*m0);
  auVar3 = _lqc2((undefined  [16])m0[1]);
  auVar4 = _lqc2((undefined  [16])m0[2]);
  uVar1 = _viaddi(in_vi0,0xf);
  uVar1 = _viaddi(uVar1,5);
  _vsqi(auVar2,uVar1);
  _vsqi(auVar3,uVar1);
  _vsqi(auVar4,uVar1);
  return;
}

static void _SetSLight(float *m0[4]) {
  undefined4 in_vi0;
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar2 = _lqc2((undefined  [16])*m0);
  auVar3 = _lqc2((undefined  [16])m0[1]);
  auVar4 = _lqc2((undefined  [16])m0[2]);
  uVar1 = _viaddi(in_vi0,0xf);
  uVar1 = _viaddi(uVar1,8);
  _vsqi(auVar2,uVar1);
  _vsqi(auVar3,uVar1);
  _vsqi(auVar4,uVar1);
  return;
}

void SetPointGroup() {
	int i;
	int gnum;
	int gcount;
	SgLIGHT *TmpLight;
	SgPOINTGROUP *TmpGroup;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  SgVULightCoord *pSVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SgLIGHT *pSVar6;
  SgLIGHT *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined in_vf0 [16];
  
  iVar2 = SgPointNum;
  pSVar1 = SgLightCoordp;
  iVar8 = 0;
  if (SgPointNum == 0) {
    SgPointGroupNum = 0;
    return;
  }
  do {
    if (SgPointNum <= iVar8) goto LAB_00176900;
    pSVar6 = SgPointLight + iVar8;
    iVar8 = iVar8 + 1;
  } while ((pSVar6->Enable != 0) || (pSVar6->SEnable != 0));
                    /* inlined from libsg.h */
  fVar3 = pSVar6->pos[1];
  fVar4 = pSVar6->pos[2];
  fVar5 = pSVar6->pos[3];
  SgLightCoordp->Point_pos[1][0] = pSVar6->pos[0];
  pSVar1->Point_pos[1][1] = fVar3;
  pSVar1->Point_pos[1][2] = fVar4;
  pSVar1->Point_pos[1][3] = fVar5;
  fVar3 = pSVar6->pos[1];
  fVar4 = pSVar6->pos[2];
  fVar5 = pSVar6->pos[3];
  pSVar1->Point_pos[2][0] = pSVar6->pos[0];
  pSVar1->Point_pos[2][1] = fVar3;
  pSVar1->Point_pos[2][2] = fVar4;
  pSVar1->Point_pos[2][3] = fVar5;
  fVar3 = DAT_00355a9c;
                    /* end of inlined section */
  pSVar1->Point_pos[1][3] = DAT_00355a9c;
  pSVar1->Point_pos[2][3] = fVar3;
LAB_00176900:
                    /* inlined from libsg.h */
  pSVar6 = SgPointLight;
  SgPointGroup[0].DColorMtx[1] = (float  [4])_sqc2(in_vf0);
  SgPointGroup[0].DColorMtx[2] = (float  [4])_sqc2(in_vf0);
  SgPointGroup[0].SColorMtx[1] = (float  [4])_sqc2(in_vf0);
  SgPointGroup[0].SColorMtx[2] = (float  [4])_sqc2(in_vf0);
                    /* end of inlined section */
  iVar8 = 0;
  SgPointGroup[0].btimes[2] = 0.0;
  iVar11 = 0;
  SgPointGroup[0].btimes[1] = 0.0;
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      pSVar1 = SgLightCoordp;
      pSVar7 = pSVar6 + iVar9;
      if ((pSVar7->Enable == 0) && (pSVar7->SEnable == 0)) {
                    /* inlined from libsg.h */
        fVar3 = pSVar7->pos[1];
        fVar4 = pSVar7->pos[2];
        fVar5 = pSVar7->pos[3];
        SgLightCoordp->Point_pos[iVar8][0] = pSVar7->pos[0];
        pSVar1->Point_pos[iVar8][1] = fVar3;
        pSVar1->Point_pos[iVar8][2] = fVar4;
        pSVar1->Point_pos[iVar8][3] = fVar5;
        fVar5 = ieye[3];
        fVar4 = ieye[2];
        fVar3 = ieye[1];
        pSVar1->Point_eyevec[0] = ieye[0];
        pSVar1->Point_eyevec[1] = fVar3;
        pSVar1->Point_eyevec[2] = fVar4;
        pSVar1->Point_eyevec[3] = fVar5;
                    /* end of inlined section */
        fVar3 = 0.0;
        if (pSVar7->intens != 0.0) {
          fVar3 = 1.0 / (pSVar7->power * pSVar7->intens *
                        (pSVar7->diffuse[0] + pSVar7->diffuse[1] + pSVar7->diffuse[2]));
        }
        pSVar1->Point_pos[iVar8][3] = fVar3;
                    /* inlined from libsg.h */
                    /* end of inlined section */
        SgPointGroup[iVar11].btimes[iVar8] = pSVar7->power;
                    /* inlined from libsg.h */
        fVar3 = pSVar7->diffuse[1];
        fVar4 = pSVar7->diffuse[2];
        fVar5 = pSVar7->diffuse[3];
        SgPointGroup[iVar11].DColorMtx[iVar8][0] = pSVar7->diffuse[0];
        SgPointGroup[iVar11].DColorMtx[iVar8][1] = fVar3;
        SgPointGroup[iVar11].DColorMtx[iVar8][2] = fVar4;
        SgPointGroup[iVar11].DColorMtx[iVar8][3] = fVar5;
        fVar3 = pSVar7->specular[1];
        fVar4 = pSVar7->specular[2];
        fVar5 = pSVar7->specular[3];
        SgPointGroup[iVar11].SColorMtx[iVar8][0] = pSVar7->specular[0];
        SgPointGroup[iVar11].SColorMtx[iVar8][1] = fVar3;
        SgPointGroup[iVar11].SColorMtx[iVar8][2] = fVar4;
        SgPointGroup[iVar11].SColorMtx[iVar8][3] = fVar5;
                    /* end of inlined section */
        iVar10 = iVar8 + 1;
        SgPointGroup[iVar11].lnum[iVar8] = iVar9;
        iVar8 = iVar10;
        if (2 < iVar10) {
          iVar11 = iVar11 + 1;
          iVar8 = 0;
          if (0 < iVar11) {
            iVar9 = iVar2 + 100;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  return;
}

void SetSpotGroup(float *wlmtx[4]) {
	int i;
	int gnum;
	int gcount;
	sceVu0FVECTOR dtmp;
	sceVu0FVECTOR stmp;
	SgLIGHT *TmpLight;
	SgSPOTGROUP *TmpGroup;
	float *v0;
	float *v1;
	float *v0;
	float *v;
	float *v;
	float *v;
	float *v;
	float *v;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *m0[4];
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  float afVar1 [4];
  undefined8 uVar2;
  float (*pafVar3) [4];
  float (*pafVar4) [4];
  float (*pafVar5) [4];
  float (*pafVar6) [4];
  float (*pafVar7) [4];
  float (*pafVar8) [4];
  SgVULightCoord *pSVar9;
  SgSPOTGROUP *pSVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float (*pafVar14) [4];
  int iVar15;
  SgLIGHT *pSVar16;
  float (*pafVar17) [4];
  int iVar18;
  int iVar19;
  int iVar20;
  int que;
  int iVar21;
  undefined in_vf0 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  float dtmp [4];
  float stmp [4];
  
  iVar15 = SgSpotNum;
  pSVar9 = SgLightCoordp;
  pSVar16 = SgSpotLight;
  if (SgSpotNum == 0) {
    SgSpotGroupNum = 0;
  }
  else {
    pSVar10 = SgSpotGroup;
    pafVar3 = SgLightCoordp->Spot_pos;
    pafVar4 = SgLightCoordp->Spot_pos;
    pafVar5 = SgLightCoordp->Spot_WDLightMtx;
    pafVar6 = SgLightCoordp->Spot_WDLightMtx;
    pafVar17 = SgLightCoordp->Spot_SLightMtx;
    pafVar7 = SgLightCoordp->Spot_SLightMtx;
    pafVar8 = SgLightCoordp->Spot_SLightMtx;
    pafVar14 = SgSpotGroup[0].DColorMtx[1];
    iVar18 = 0;
    do {
      pSVar9->Spot_intens[1] = 100.0;
      pSVar9->Spot_intens[2] = 100.0;
      pSVar9->Spot_intens_b[1] = 1.0;
      pSVar9->Spot_intens_b[2] = 1.0;
      uVar2 = *(undefined8 *)pSVar16->pos;
                    /* inlined from libsg.h */
      fVar12 = pSVar16->pos[2];
      fVar13 = pSVar16->pos[3];
      pafVar3[1][0] = (float)uVar2;
      pSVar9->Spot_pos[1][1] = (float)((ulong)uVar2 >> 0x20);
      pSVar9->Spot_pos[1][2] = fVar12;
      pSVar9->Spot_pos[1][3] = fVar13;
      uVar2 = *(undefined8 *)pSVar16->pos;
      fVar12 = pSVar16->pos[2];
      fVar13 = pSVar16->pos[3];
      pafVar4[2][0] = (float)uVar2;
      pSVar9->Spot_pos[2][1] = (float)((ulong)uVar2 >> 0x20);
      pSVar9->Spot_pos[2][2] = fVar12;
      pSVar9->Spot_pos[2][3] = fVar13;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar5[1] = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar6[2] = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      *pafVar17 = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar7[1] = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar8[2] = afVar1;
                    /* end of inlined section */
      pSVar10->btimes[0] = 1.0;
      pSVar10->btimes[1] = 1.0;
      pSVar10->btimes[2] = 1.0;
                    /* inlined from libsg.h */
      afVar1 = (float  [4])_sqc2(in_vf0);
      *pafVar14 = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar14[1] = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pafVar14[3] = afVar1;
      afVar1 = (float  [4])_sqc2(in_vf0);
      pSVar10->SColorMtx[2] = afVar1;
                    /* end of inlined section */
      pafVar14 = pafVar14[0x13];
      iVar18 = iVar18 + -1;
      pSVar10 = pSVar10 + 1;
    } while (-1 < iVar18);
    que = 0;
    iVar21 = 0;
    iVar18 = 0;
    if (0 < iVar15) {
      iVar20 = 0;
      iVar19 = 0;
      do {
        pSVar9 = SgLightCoordp;
        pSVar16 = pSVar16 + iVar18;
        if ((pSVar16->Enable == 0) && (pSVar16->SEnable == 0)) {
                    /* inlined from libsg.h */
          uVar2 = *(undefined8 *)pSVar16->pos;
          fVar12 = pSVar16->pos[2];
          fVar13 = pSVar16->pos[3];
          *(int *)((int)SgLightCoordp->Spot_pos + iVar20) = (int)uVar2;
          *(int *)((int)pSVar9->Spot_pos + iVar20 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(float *)((int)pSVar9->Spot_pos + iVar20 + 8) = fVar12;
          *(float *)((int)pSVar9->Spot_pos + iVar20 + 0xc) = fVar13;
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
          *(float *)((int)pSVar9->Spot_intens + iVar19) = pSVar16->intens;
                    /* inlined from libsg.h */
          pfVar11 = pSVar16->direction;
                    /* end of inlined section */
          *(float *)((int)pSVar9->Spot_intens_b + iVar19) = pSVar16->intens_b;
          uVar2 = *(undefined8 *)pfVar11;
                    /* inlined from libsg.h */
          fVar12 = pSVar16->direction[2];
          fVar13 = pSVar16->direction[3];
          *(int *)((int)pSVar9->Spot_WDLightMtx + iVar20) = (int)uVar2;
          *(int *)((int)pSVar9->Spot_WDLightMtx + iVar20 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(float *)((int)pSVar9->Spot_WDLightMtx + iVar20 + 8) = fVar12;
          *(float *)((int)pSVar9->Spot_WDLightMtx + iVar20 + 0xc) = fVar13;
                    /* end of inlined section */
          if (wlmtx == (float (*) [4])0x0) {
                    /* inlined from libsg.h */
            dtmp = *(float (*) [4])pfVar11;
            stmp = ieye;
          }
          else {
                    /* inlined from libsg.h */
            auVar22 = _lqc2((undefined  [16])*wlmtx);
            auVar23 = _lqc2((undefined  [16])wlmtx[1]);
            auVar24 = _lqc2((undefined  [16])wlmtx[2]);
            auVar25 = _lqc2((undefined  [16])wlmtx[3]);
            auVar26 = _lqc2(*(undefined (*) [16])pfVar11);
            _vmulabc(auVar22,auVar26);
            _vmaddabc(auVar23,auVar26);
            _vmaddabc(auVar24,auVar26);
            auVar26 = _vmaddbc(auVar25,in_vf0);
            dtmp = (float  [4])_sqc2(auVar26);
            auVar26 = _lqc2((undefined  [16])ieye);
            _vmulabc(auVar22,auVar26);
            _vmaddabc(auVar23,auVar26);
            _vmaddabc(auVar24,auVar26);
            auVar22 = _vmaddbc(auVar25,in_vf0);
            stmp = (float  [4])_sqc2(auVar22);
                    /* end of inlined section */
          }
          auVar22 = _lqc2((undefined  [16])dtmp);
          auVar23 = _lqc2((undefined  [16])stmp);
          auVar22 = _vsub(auVar22,auVar23);
          _sqc2(auVar22);
                    /* end of inlined section */
          QueSetMatrix(pSVar9->Spot_SLightMtx,que,dtmp);
                    /* inlined from libsg.h */
                    /* end of inlined section */
          *(float *)((int)SgSpotGroup[iVar21].btimes + iVar19) = pSVar16->btimes;
                    /* inlined from libsg.h */
          uVar2 = *(undefined8 *)pSVar16->diffuse;
          fVar12 = pSVar16->diffuse[2];
          fVar13 = pSVar16->diffuse[3];
          *(int *)((int)SgSpotGroup[iVar21].DColorMtx + iVar20) = (int)uVar2;
          *(int *)((int)SgSpotGroup[iVar21].DColorMtx + iVar20 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(float *)((int)SgSpotGroup[iVar21].DColorMtx + iVar20 + 8) = fVar12;
          *(float *)((int)SgSpotGroup[iVar21].DColorMtx + iVar20 + 0xc) = fVar13;
          uVar2 = *(undefined8 *)pSVar16->specular;
          fVar12 = pSVar16->specular[2];
          fVar13 = pSVar16->specular[3];
          *(int *)((int)SgSpotGroup[iVar21].SColorMtx + iVar20) = (int)uVar2;
          *(int *)((int)SgSpotGroup[iVar21].SColorMtx + iVar20 + 4) = (int)((ulong)uVar2 >> 0x20);
          *(float *)((int)SgSpotGroup[iVar21].SColorMtx + iVar20 + 8) = fVar12;
          *(float *)((int)SgSpotGroup[iVar21].SColorMtx + iVar20 + 0xc) = fVar13;
                    /* end of inlined section */
          que = que + 1;
          *(int *)((int)SgSpotGroup[iVar21].lnum + iVar19) = iVar18;
          iVar20 = iVar20 + 0x10;
          iVar19 = iVar19 + 4;
          iVar15 = SgSpotNum;
          if (2 < que) {
            iVar20 = 0;
            iVar19 = 0;
            iVar21 = iVar21 + 1;
            que = 0;
            if (0 < iVar21) {
              iVar18 = SgSpotNum + 100;
            }
          }
        }
        iVar18 = iVar18 + 1;
        pSVar16 = SgSpotLight;
      } while (iVar18 < iVar15);
    }
  }
  return;
}

void SetLightData(SgCOORDUNIT *cp0, SgCOORDUNIT *cp1) {
	int i;
	sceVu0FMATRIX tmp;
	sceVu0FMATRIX tmp2;
	sceVu0FVECTOR tmpv;
	sceVu0FVECTOR tmpv2;
	sceVu0FVECTOR scale;
	float *m0[4];
	float *m0[4];
	
  float afVar1 [4];
  SgLIGHT *pSVar2;
  SgVULightCoord *pSVar3;
  float (*pafVar4) [4];
  int iVar5;
  int iVar6;
  int iVar7;
  Matrix4x4 *pMVar8;
  Vector4 *pVVar9;
  Vector4 *pVVar10;
  float (*pafVar11) [4];
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  float tmp [4] [4];
  float tmp2 [4] [4];
  float tmpv [4];
  float tmpv2 [4];
  float scale [4];
  Matrix4x4 *local_c0;
  float *local_bc;
  float *local_b8;
  float *local_b4;
  Vector4 *local_b0;
  Vector4 *local_ac;
  
  iVar5 = SgSpotNum;
  pSVar2 = SgSpotLight;
  pafVar11 = tmp;
  pafVar4 = tmp;
  if (cp1 == (_SgCOORDUNIT *)0x0) {
    pVVar10 = (cp0->lwmtx).matrix + 2;
    pMVar8 = &cp0->lwmtx;
    pVVar9 = (cp0->lwmtx).matrix + 1;
    local_bc = tmp + 1;
    local_b4 = tmp + 2;
    pfVar14 = scale;
    pfVar13 = (float *)tmp[2];
    pfVar12 = (float *)tmp[1];
    iVar5 = 2;
    local_c0 = pMVar8;
    local_b8 = pfVar14;
    local_b0 = pVVar9;
    local_ac = pVVar10;
    do {
      tmpv[0] = pMVar8->matrix[0].x;
      iVar5 = iVar5 + -1;
      tmpv[1] = pVVar9->x;
      pMVar8 = (Matrix4x4 *)&pMVar8->matrix[0].y;
      tmpv[2] = pVVar10->x;
      pVVar10 = (Vector4 *)&pVVar10->y;
      pVVar9 = (Vector4 *)&pVVar9->y;
      fVar15 = SgRSqrtf(tmpv[0] * tmpv[0] + tmpv[1] * tmpv[1] + tmpv[2] * tmpv[2]);
      *pfVar14 = fVar15;
      pfVar14 = pfVar14 + 1;
      _NormalizeVector(tmpv,tmpv);
      *(float *)pafVar11 = tmpv[0];
      pafVar11 = (float (*) [4])((int)pafVar11 + 4);
      *pfVar12 = tmpv[1];
      pfVar12 = pfVar12 + 1;
      *pfVar13 = tmpv[2];
      pfVar13 = pfVar13 + 1;
    } while (-1 < iVar5);
                    /* inlined from libsg.h */
    auVar17 = _lqc2((undefined  [16])local_c0->matrix[0]);
    auVar18 = _lqc2((undefined  [16])local_c0->matrix[1]);
    auVar19 = _lqc2((undefined  [16])local_c0->matrix[2]);
    auVar20 = _lqc2((undefined  [16])local_c0->matrix[3]);
    _DAT_70000150 = _sqc2(auVar17);
    _DAT_70000160 = _sqc2(auVar18);
    _DAT_70000170 = _sqc2(auVar19);
    _DAT_70000180 = _sqc2(auVar20);
    auVar17 = _lqc2((undefined  [16])tmp[0]);
    auVar18 = _lqc2((undefined  [16])tmp[1]);
    auVar19 = _lqc2((undefined  [16])tmp[2]);
    auVar20 = _lqc2((undefined  [16])tmp[3]);
    _DAT_70000110 = _sqc2(auVar17);
    _DAT_70000120 = _sqc2(auVar18);
    _DAT_70000130 = _sqc2(auVar19);
    _DAT_70000140 = _sqc2(auVar20);
                    /* end of inlined section */
    _MulRotMatrix((float (*) [4])SgLightCoordp,DLightMtx,tmp);
    iVar5 = 2;
    _MulRotMatrix(SgLightCoordp->Parallel_SLight,SLightMtx,tmp);
    SetPointGroup();
    sceVu0UnitMatrix((Matrix4x4 *)tmp);
    do {
      iVar5 = iVar5 + -1;
      pVVar10 = local_c0->matrix;
      fVar15 = local_b0->x;
      local_c0 = (Matrix4x4 *)&local_c0->matrix[0].y;
      fVar16 = local_ac->x;
      local_ac = (Vector4 *)&local_ac->y;
      local_b0 = (Vector4 *)&local_b0->y;
      *(float *)pafVar4 = pVVar10->x * *local_b8;
      pafVar4 = (float (*) [4])((int)pafVar4 + 0x10);
      *local_bc = fVar15 * *local_b8;
      local_bc = local_bc + 4;
      fVar15 = *local_b8;
      local_b8 = local_b8 + 1;
      *local_b4 = fVar16 * fVar15;
      local_b4 = local_b4 + 4;
    } while (-1 < iVar5);
    SetSpotGroup(tmp);
  }
  else {
    iVar6 = 0;
    if (0 < SgSpotNum) {
      do {
        iVar7 = iVar6 + 1;
        pSVar2[iVar6].SEnable = 0;
        iVar6 = iVar7;
      } while (iVar7 < iVar5);
    }
    iVar5 = SgPointNum;
    pSVar2 = SgPointLight;
    iVar6 = 0;
    if (0 < SgPointNum) {
      do {
        iVar7 = iVar6 + 1;
        pSVar2[iVar6].SEnable = 0;
        iVar6 = iVar7;
      } while (iVar7 < iVar5);
    }
    sceVu0UnitMatrix((Matrix4x4 *)tmp);
    pSVar3 = SgLightCoordp;
                    /* inlined from libsg.h */
    auVar17 = _lqc2((undefined  [16])tmp[0]);
    auVar18 = _lqc2((undefined  [16])tmp[1]);
    auVar19 = _lqc2((undefined  [16])tmp[2]);
    auVar20 = _lqc2((undefined  [16])tmp[3]);
    _DAT_70000150 = _sqc2(auVar17);
    _DAT_70000160 = _sqc2(auVar18);
    _DAT_70000170 = _sqc2(auVar19);
    _DAT_70000180 = _sqc2(auVar20);
    auVar17 = _lqc2((undefined  [16])tmp[0]);
    auVar18 = _lqc2((undefined  [16])tmp[1]);
    auVar19 = _lqc2((undefined  [16])tmp[2]);
    auVar20 = _lqc2((undefined  [16])tmp[3]);
    _DAT_70000110 = _sqc2(auVar17);
    _DAT_70000120 = _sqc2(auVar18);
    _DAT_70000130 = _sqc2(auVar19);
    _DAT_70000140 = _sqc2(auVar20);
    auVar17 = _lqc2((undefined  [16])DLightMtx[0]);
    auVar18 = _lqc2((undefined  [16])DLightMtx[1]);
    auVar19 = _lqc2((undefined  [16])DLightMtx[2]);
    auVar20 = _lqc2((undefined  [16])DLightMtx[3]);
    afVar1 = (float  [4])_sqc2(auVar17);
    SgLightCoordp->Parallel_DLight[0] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar18);
    pSVar3->Parallel_DLight[1] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar19);
    pSVar3->Parallel_DLight[2] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar20);
    pSVar3->Parallel_SLight[0] = afVar1;
    auVar17 = _lqc2((undefined  [16])SLightMtx[0]);
    auVar18 = _lqc2((undefined  [16])SLightMtx[1]);
    auVar19 = _lqc2((undefined  [16])SLightMtx[2]);
    auVar20 = _lqc2((undefined  [16])SLightMtx[3]);
    afVar1 = (float  [4])_sqc2(auVar17);
    pSVar3->Parallel_SLight[0] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar18);
    pSVar3->Parallel_SLight[1] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar19);
    pSVar3->Parallel_SLight[2] = afVar1;
    afVar1 = (float  [4])_sqc2(auVar20);
    pSVar3->Spot_pos[0] = afVar1;
                    /* end of inlined section */
    SetPointGroup();
    SetSpotGroup((float (*) [4])0x0);
  }
  DAT_70000064 = SgSpotGroupNum;
  DAT_70000068 = SgPointGroupNum;
  return;
}

void SgSetInfiniteLights(float *eye, SgLIGHT *lights, int num) {
  SgInfiniteLight = lights;
  SgInfiniteNum = num;
  if (num == 1) {
    SgSetDefaultLight(eye,lights,(SgLIGHT *)0x0,(SgLIGHT *)0x0);
    return;
  }
  if (num < 2) {
    if (num == 0) {
      SgSetDefaultLight(eye,(SgLIGHT *)0x0,(SgLIGHT *)0x0,(SgLIGHT *)0x0);
      return;
    }
  }
  else if (num == 2) {
    SgSetDefaultLight(eye,lights,lights + 1,(SgLIGHT *)0x0);
    return;
  }
  SgSetDefaultLight(eye,lights,lights + 1,lights + 2);
  return;
}

void SgSetPointLights(SgLIGHT *lights, int num) {
	int i;
	
  SgPointLight = lights;
  SgPointNum = num;
  if (0 < num) {
    do {
      if (lights->Enable == 0) {
        lights->SEnable = 0;
      }
      num = num + -1;
      lights = lights + 1;
    } while (num != 0);
  }
  return;
}

void SgSetSpotLights(SgLIGHT *lights, int num) {
	int i;
	
  float *v;
  
  SgSpotLight = lights;
  SgSpotNum = num;
  if (0 < num) {
    v = lights->direction;
    do {
      if (v[0x1d] == 0.0) {
        _NormalizeVector(v,v);
        v[0x1e] = 0.0;
        v[0x1b] = v[0x1a];
        v[0x19] = 1.0 / (1.0 - v[0x18]);
      }
      num = num + -1;
      v = v + 0x24;
    } while (num != 0);
  }
  return;
}

void PushLight() {
	sceVu0FVECTOR eye;
	float *v0;
	
  SgLIGHT *pSVar1;
  SgLIGHT *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  float eye [4];
  
  pSVar1 = SgPointLight;
  if (stack_num < 3) {
    iVar6 = stack_num * 3 + 1;
                    /* inlined from libsg.h */
                    /* end of inlined section */
    stack_light[stack_num * 3] = SgInfiniteLight;
    pSVar2 = SgSpotLight;
    iVar5 = stack_num * 3 + 2;
    stack_light[iVar6] = pSVar1;
                    /* inlined from libsg.h */
                    /* end of inlined section */
    stack_light[iVar5] = pSVar2;
                    /* inlined from libsg.h */
    auVar8 = _qmtc2(0xbf800000);
    auVar7 = _lqc2((undefined  [16])ieye);
    auVar7 = _vmulbc(auVar7,auVar8);
    auVar7 = _sqc2(auVar7);
    eye[2] = SUB164(auVar7 >> 0x40,0);
    eye[3] = SUB164(auVar7 >> 0x60,0);
    stack_eye[stack_num][0] = SUB164(auVar7,0);
    stack_eye[stack_num][1] = SUB164(auVar7 >> 0x20,0);
    stack_eye[stack_num][2] = eye[2];
    stack_eye[stack_num][3] = eye[3];
    iVar3 = SgPointNum;
                    /* end of inlined section */
    stack_light_num[stack_num * 3] = SgInfiniteNum;
    iVar4 = SgSpotNum;
    stack_num = stack_num + 1;
    stack_light_num[iVar6] = iVar3;
    stack_light_num[iVar5] = iVar4;
  }
  return;
}

void PopLight() {
	sceVu0FVECTOR eye;
	float *v1;
	
  int iVar1;
  int iVar2;
  float eye [4];
  
  if (stack_num != 0) {
    stack_num = stack_num + -1;
    iVar2 = stack_num * 3 + 2;
    iVar1 = stack_num * 3 + 1;
    SgInfiniteLight = stack_light[stack_num * 3];
                    /* inlined from libsg.h */
                    /* end of inlined section */
    SgPointLight = stack_light[iVar1];
                    /* inlined from libsg.h */
                    /* end of inlined section */
    SgSpotLight = stack_light[iVar2];
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
    eye[2] = stack_eye[stack_num][2];
    eye[3] = stack_eye[stack_num][3];
    eye[0] = (float)*(undefined8 *)stack_eye[stack_num];
    eye[1] = (float)((ulong)*(undefined8 *)stack_eye[stack_num] >> 0x20);
                    /* end of inlined section */
    SgInfiniteNum = stack_light_num[stack_num * 3];
    SgPointNum = stack_light_num[iVar1];
    SgSpotNum = stack_light_num[iVar2];
    SgSetInfiniteLights(eye,SgInfiniteLight,SgInfiniteNum);
    SgSetPointLights(SgPointLight,SgPointNum);
    SgSetSpotLights(SgSpotLight,SgSpotNum);
  }
  return;
}

void ClearLightStack() {
  stack_num = 0;
  return;
}

static void _CalcPointA(float *grc[4], float *grm, float *len) {
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf12 [16];
  undefined in_vf13 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  
  auVar1 = _lqc2((undefined  [16])*grc);
  auVar2 = _lqc2((undefined  [16])grc[1]);
  auVar3 = _lqc2((undefined  [16])grc[2]);
  auVar1 = _vsub(auVar1,in_vf12);
  auVar2 = _vsub(auVar2,in_vf12);
  auVar3 = _vsub(auVar3,in_vf12);
  _vmulabc(in_vf4,in_vf13);
  _vmaddabc(in_vf5,in_vf13);
  auVar7 = _vmaddbc(in_vf6,in_vf13);
  auVar4 = _vmul(auVar1,auVar1);
  auVar5 = _vmul(auVar2,auVar2);
  auVar6 = _vmul(auVar3,auVar3);
  auVar1 = _vmul(auVar7,auVar1);
  auVar2 = _vmul(auVar7,auVar2);
  auVar3 = _vmul(auVar7,auVar3);
  _vaddabc(auVar4,auVar4);
  _vmaddbc(in_vf1,auVar4);
  _vaddabc(auVar5,auVar5);
  _vmaddbc(in_vf1,auVar5);
  _vaddabc(auVar6,auVar6);
  auVar4 = _vmaddbc(in_vf1,auVar6);
  _vdiv(in_vf0,0,auVar4,0);
  _vaddabc(auVar1,auVar1);
  _vmaddbc(in_vf1,auVar1);
  _vaddabc(auVar2,auVar2);
  _vmaddbc(in_vf1,auVar2);
  _vaddabc(auVar3,auVar3);
  auVar1 = _vmaddbc(in_vf1,auVar3);
  uVar8 = _vwaitq();
  _vaddq(in_vf0,uVar8);
  _vdiv(in_vf0,0,auVar4,0);
  auVar2 = _lqc2(*(undefined (*) [16])grm);
  auVar1 = _vmul(auVar1,auVar2);
  _vmaxbc(auVar1,in_vf0);
  uVar8 = _vwaitq();
  _vaddq(in_vf0,uVar8);
  _vdiv(in_vf0,0,auVar4,0);
  _lqc2(*(undefined (*) [16])(grm + 4));
  _lqc2(*(undefined (*) [16])(grm + 8));
  _lqc2(*(undefined (*) [16])(grm + 0xc));
  _lqc2(*(undefined (*) [16])(grm + 0x10));
  _lqc2(*(undefined (*) [16])(grm + 0x14));
  _lqc2(*(undefined (*) [16])(grm + 0x18));
  uVar8 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar8);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])len = auVar1;
  return;
}

static void _CalcPointB(float *len) {
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined in_vf14 [16];
  undefined in_vf15 [16];
  undefined in_vf16 [16];
  undefined in_vf17 [16];
  undefined in_vf18 [16];
  undefined in_vf20 [16];
  undefined in_vf21 [16];
  undefined in_vf22 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar2 = _lqc2(*(undefined (*) [16])len);
  auVar2 = _vmul(auVar2,in_vf17);
  auVar1 = _vminibc(auVar2,in_vf0);
  auVar2 = _vmul(auVar1,auVar1);
  _vmulabc(in_vf20,auVar1);
  _vmaddabc(in_vf21,auVar1);
  _vmaddabc(in_vf22,auVar1);
  auVar2 = _vmul(auVar2,auVar2);
  auVar2 = _vmul(auVar2,auVar2);
  _vmaddabc(in_vf14,auVar2);
  _vmaddabc(in_vf15,auVar2);
  _vmaddabc(in_vf16,auVar2);
  _vmadd(in_vf18,in_vf1);
  return;
}

void CalcPointLight() {
	sceVu0FVECTOR len;
	static float max_len = 0.f;
	
  float len [4];
  
  if (0 < SgPointGroupNum) {
    _CalcPointA(SgLightCoordp->Point_pos,SgLightPointp->Point_btimes,len);
    if (len[0] < SgLightCoordp->Point_pos[3]) {
      len[0] = 0.0;
    }
    if (len[1] < SgLightCoordp->Point_pos[1][3]) {
      len[1] = 0.0;
    }
    if (len[2] < SgLightCoordp->Point_pos[2][3]) {
      len[2] = 0.0;
    }
    _CalcPointB(len);
  }
  return;
}

void CalcSpotLight() {
	float *cdata[4];
	float *mdata;
	
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf12 [16];
  undefined in_vf13 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined in_vf18 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 uVar11;
  
  if (0 < SgSpotGroupNum) {
    auVar1 = _lqc2((undefined  [16])SgLightCoordp->Spot_pos[0]);
    auVar2 = _lqc2((undefined  [16])SgLightCoordp->Spot_pos[1]);
    auVar3 = _lqc2((undefined  [16])SgLightCoordp->Spot_pos[2]);
    auVar1 = _vsub(auVar1,in_vf12);
    auVar2 = _vsub(auVar2,in_vf12);
    auVar3 = _vsub(auVar3,in_vf12);
    _vmulabc(in_vf4,in_vf13);
    _vmaddabc(in_vf5,in_vf13);
    auVar10 = _vmaddbc(in_vf6,in_vf13);
    auVar7 = _vmul(auVar1,auVar1);
    auVar8 = _vmul(auVar2,auVar2);
    auVar9 = _vmul(auVar3,auVar3);
    auVar4 = _lqc2((undefined  [16])SgLightCoordp->Spot_WDLightMtx[0]);
    auVar5 = _lqc2((undefined  [16])SgLightCoordp->Spot_WDLightMtx[1]);
    auVar6 = _lqc2((undefined  [16])SgLightCoordp->Spot_WDLightMtx[2]);
    auVar4 = _vmul(auVar4,auVar1);
    auVar5 = _vmul(auVar5,auVar2);
    auVar6 = _vmul(auVar6,auVar3);
    _vaddabc(auVar7,auVar7);
    _vmaddbc(in_vf1,auVar7);
    _vaddabc(auVar8,auVar8);
    _vmaddbc(in_vf1,auVar8);
    _vaddabc(auVar9,auVar9);
    auVar7 = _vmaddbc(in_vf1,auVar9);
    _vdiv(in_vf0,0,auVar7,0);
    _vaddabc(auVar4,auVar4);
    _vmaddbc(in_vf1,auVar4);
    _vaddabc(auVar5,auVar5);
    _vmaddbc(in_vf1,auVar5);
    _vaddabc(auVar6,auVar6);
    auVar4 = _vmaddbc(in_vf1,auVar6);
    uVar11 = _vwaitq();
    auVar5 = _vaddq(in_vf0,uVar11);
    _vdiv(in_vf0,0,auVar5,0);
    auVar1 = _vmul(auVar10,auVar1);
    auVar2 = _vmul(auVar10,auVar2);
    auVar3 = _vmul(auVar10,auVar3);
    auVar4 = _vmaxbc(auVar4,in_vf0);
    uVar11 = _vwaitq();
    auVar5 = _vaddq(in_vf0,uVar11);
    _vdiv(in_vf0,0,auVar5,0);
    _vaddabc(auVar1,auVar1);
    _vmaddbc(in_vf1,auVar1);
    _vaddabc(auVar2,auVar2);
    _vmaddbc(in_vf1,auVar2);
    _vaddabc(auVar3,auVar3);
    auVar1 = _vmaddbc(in_vf1,auVar3);
    auVar3 = _vmaxbc(auVar1,in_vf0);
    uVar11 = _vwaitq();
    auVar2 = _vaddq(in_vf0,uVar11);
    auVar1 = _vmul(auVar4,auVar4);
    auVar4 = _lqc2(*(undefined (*) [16])SgLightCoordp->Spot_intens);
    auVar5 = _lqc2(*(undefined (*) [16])SgLightCoordp->Spot_intens_b);
    _vmula(auVar1,auVar2);
    auVar1 = _vmsub(auVar4,in_vf1);
    auVar1 = _vmaxbc(auVar1,in_vf0);
    auVar1 = _vmul(auVar1,auVar5);
    auVar4 = _lqc2(*(undefined (*) [16])SgLightSpotp->Spot_btimes);
    auVar2 = _vmul(auVar3,auVar2);
    auVar2 = _vmul(auVar2,auVar4);
    auVar2 = _vminibc(auVar2,in_vf0);
    auVar3 = _vmul(auVar2,auVar2);
    auVar3 = _vmul(auVar3,auVar3);
    auVar3 = _vmul(auVar3,auVar3);
    auVar4 = _vmul(auVar2,auVar1);
    auVar5 = _vmul(auVar3,auVar1);
    auVar1 = _lqc2((undefined  [16])SgLightSpotp->Spot_DColor[0]);
    auVar2 = _lqc2((undefined  [16])SgLightSpotp->Spot_DColor[1]);
    auVar3 = _lqc2((undefined  [16])SgLightSpotp->Spot_DColor[2]);
    _vmulabc(in_vf18,in_vf1);
    _vmaddabc(auVar1,auVar4);
    _vmaddabc(auVar2,auVar4);
    _vmaddabc(auVar3,auVar4);
    auVar1 = _lqc2((undefined  [16])SgLightSpotp->Spot_SColor[0]);
    auVar2 = _lqc2((undefined  [16])SgLightSpotp->Spot_SColor[1]);
    auVar3 = _lqc2((undefined  [16])SgLightSpotp->Spot_SColor[2]);
    _vmaddabc(auVar1,auVar5);
    _vmaddabc(auVar2,auVar5);
    _vmaddbc(auVar3,auVar5);
  }
  return;
}

void SgReadLights(void *sgd_top, void *light_top, float *Ambient, SgLIGHT *Ilight, int imax, SgLIGHT *Plight, int pmax, SgLIGHT *Slight, int smax) {
	int num;
	int i;
	u_int *prim;
	u_int *pk;
	sceVu0FVECTOR *pvec;
	sceVu0FVECTOR interest;
	sceVu0FVECTOR tmpvec;
	SgCOORDUNIT *cp;
	float scale;
	float *v0;
	float *v0;
	float *v0;
	float *v;
	float *v1;
	float *v1;
	float *v1;
	float *v1;
	float *v0;
	float *v1;
	float *v1;
	float *v1;
	float *v0;
	float *v1;
	float *v1;
	float *v0;
	float *v1;
	
  float *pfVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  Vector4 *pVVar4;
  float *pfVar5;
  float fVar6;
  SgLIGHT *pSVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined in_vf0 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  float interest [4];
  float tmpvec [4];
  float *v0;
  _SgCOORDUNIT *cp;
  
  if ((sgd_top != (void *)0x0) || (light_top != (void *)0x0)) {
    cp = (_SgCOORDUNIT *)0x0;
    if (sgd_top != (void *)0x0) {
      cp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
    }
    if (cp == (_SgCOORDUNIT *)0x0) {
      fVar13 = 1.0;
    }
    else {
                    /* end of inlined section */
      auVar16 = _lqc2((undefined  [16])(cp->lwmtx).matrix[0]);
      auVar17 = _lqc2((undefined  [16])(cp->lwmtx).matrix[0]);
      auVar16 = _vmul(auVar16,auVar17);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _qmfc2(SUB164(auVar16,0));
      fVar13 = SgSqrtf(SUB164(auVar16,0));
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pVVar4 = (cp->lwmtx).matrix + 1;
                    /* end of inlined section */
      auVar16 = _lqc2((undefined  [16])*pVVar4);
      auVar17 = _lqc2((undefined  [16])*pVVar4);
      auVar16 = _vmul(auVar16,auVar17);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _qmfc2(SUB164(auVar16,0));
      fVar14 = SgSqrtf(SUB164(auVar16,0));
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
      pVVar4 = (cp->lwmtx).matrix + 2;
                    /* end of inlined section */
      auVar16 = _lqc2((undefined  [16])*pVVar4);
      auVar17 = _lqc2((undefined  [16])*pVVar4);
      auVar16 = _vmul(auVar16,auVar17);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _vaddbc(auVar16,auVar16);
      auVar16 = _qmfc2(SUB164(auVar16,0));
      fVar15 = SgSqrtf(SUB164(auVar16,0));
      fVar13 = (fVar13 + fVar14 + fVar15) / 3.0;
    }
    puVar12 = (undefined4 *)((int)light_top + 0x18);
    if (light_top == (void *)0x0) {
      puVar12 = (undefined4 *)((int)sgd_top + 0x18);
    }
    if (Ilight != (SgLIGHT *)0x0) {
      Ilight->num = 0;
    }
    if (Plight != (SgLIGHT *)0x0) {
      Plight->num = 0;
    }
    if (Slight != (SgLIGHT *)0x0) {
      Slight->num = 0;
    }
                    /* inlined from libsg.h */
    auVar16 = _sqc2(in_vf0);
    *(undefined (*) [16])Ambient = auVar16;
                    /* end of inlined section */
    puVar3 = (undefined4 *)*puVar12;
    for (puVar12 = *(undefined4 **)(undefined4 *)*puVar12; puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)*puVar12) {
      if (puVar3[1] == 0xb) {
        iVar11 = puVar3[2];
        iVar9 = puVar3[3];
        if (iVar11 == 1) {
          if (pmax < iVar9) {
            iVar9 = pmax;
          }
          puVar8 = (undefined8 *)(puVar3 + 4);
          if (Plight != (SgLIGHT *)0x0) {
            Plight->num = iVar9;
            iVar11 = 0;
            if (iVar9 < 1) {
LAB_00177ad0:
                    /* end of inlined section */
              puVar12 = (undefined4 *)*puVar3;
            }
            else {
              pfVar5 = Plight->diffuse;
              pSVar7 = Plight;
              do {
                uVar2 = *puVar8;
                    /* inlined from libsg.h */
                fVar14 = *(float *)(puVar8 + 1);
                fVar15 = *(float *)((int)puVar8 + 0xc);
                *pfVar5 = (float)uVar2;
                pfVar5[1] = (float)((ulong)uVar2 >> 0x20);
                pfVar5[2] = fVar14;
                pfVar5[3] = fVar15;
                uVar2 = *puVar8;
                fVar14 = *(float *)(puVar8 + 1);
                fVar15 = *(float *)((int)puVar8 + 0xc);
                pfVar5[4] = (float)uVar2;
                pfVar5[5] = (float)((ulong)uVar2 >> 0x20);
                pfVar5[6] = fVar14;
                pfVar5[7] = fVar15;
                    /* end of inlined section */
                fVar14 = *(float *)((int)puVar8 + 0xc);
                pSVar7->ambient[0] = 0.0;
                pSVar7->ambient[1] = 0.0;
                pSVar7->ambient[2] = 0.0;
                pSVar7->ambient[3] = 0.0;
                pSVar7->intens = fVar14 * fVar13;
                if (cp == (_SgCOORDUNIT *)0x0) {
                    /* inlined from libsg.h */
                  uVar2 = puVar8[2];
                  fVar14 = *(float *)(puVar8 + 3);
                  fVar15 = *(float *)((int)puVar8 + 0x1c);
                  pSVar7->pos[0] = (float)uVar2;
                  pSVar7->pos[1] = (float)((ulong)uVar2 >> 0x20);
                  pSVar7->pos[2] = fVar14;
                  pSVar7->pos[3] = fVar15;
                    /* end of inlined section */
                }
                else {
                  sceVu0ApplyMatrix((Vector4 *)pSVar7,&cp->lwmtx,(Vector4 *)(puVar8 + 2));
                }
                iVar11 = iVar11 + 1;
                fVar14 = _TransPPower(fVar13);
                puVar8 = puVar8 + 4;
                pSVar7->power = fVar14;
                pfVar5 = pfVar5 + 0x24;
                pSVar7->ambient[0] = fVar13;
                pSVar7->Enable = 0;
                pSVar7 = pSVar7 + 1;
              } while (iVar11 < iVar9);
              puVar12 = (undefined4 *)*puVar3;
            }
          }
        }
        else if (iVar11 == 0) {
          if (imax < iVar9) {
            iVar9 = imax;
          }
          puVar8 = (undefined8 *)(puVar3 + 4);
          if (Ilight != (SgLIGHT *)0x0) {
            Ilight->num = iVar9;
            iVar11 = 0;
            if (iVar9 < 1) goto LAB_00177ad0;
            pfVar5 = Ilight->diffuse;
            do {
              uVar2 = *puVar8;
                    /* inlined from libsg.h */
              fVar14 = *(float *)(puVar8 + 1);
              fVar15 = *(float *)((int)puVar8 + 0xc);
              *pfVar5 = (float)uVar2;
              pfVar5[1] = (float)((ulong)uVar2 >> 0x20);
              pfVar5[2] = fVar14;
              pfVar5[3] = fVar15;
              uVar2 = *puVar8;
              fVar14 = *(float *)(puVar8 + 1);
              fVar15 = *(float *)((int)puVar8 + 0xc);
              pfVar5[4] = (float)uVar2;
              pfVar5[5] = (float)((ulong)uVar2 >> 0x20);
              pfVar5[6] = fVar14;
              pfVar5[7] = fVar15;
                    /* end of inlined section */
              pfVar5[0xb] = 0.0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
              pfVar5[8] = 0.0;
                    /* inlined from libsg.h */
                    /* end of inlined section */
              pfVar5[9] = 0.0;
              pfVar5[10] = 0.0;
              uVar2 = puVar8[2];
                    /* inlined from libsg.h */
              fVar14 = *(float *)(puVar8 + 3);
              fVar15 = *(float *)((int)puVar8 + 0x1c);
              pfVar5[-0xc] = (float)uVar2;
              pfVar5[-0xb] = (float)((ulong)uVar2 >> 0x20);
              pfVar5[-10] = fVar14;
              pfVar5[-9] = fVar15;
                    /* end of inlined section */
              iVar11 = iVar11 + 1;
              pfVar5[0x11] = 0.0;
              puVar8 = puVar8 + 4;
              pfVar5 = pfVar5 + 0x24;
            } while (iVar11 < iVar9);
            puVar12 = (undefined4 *)*puVar3;
          }
        }
        else if (iVar11 == 2) {
          if (smax < iVar9) {
            iVar9 = smax;
          }
          puVar8 = (undefined8 *)(puVar3 + 4);
          if (Slight != (SgLIGHT *)0x0) {
            Slight->num = iVar9;
            iVar11 = 0;
            if (iVar9 < 1) goto LAB_00177ad0;
            puVar10 = (undefined8 *)(puVar3 + 8);
            fVar14 = 1.0;
            pfVar5 = Slight->diffuse;
            pSVar7 = Slight;
            do {
              uVar2 = *puVar8;
                    /* inlined from libsg.h */
              fVar15 = *(float *)(puVar8 + 1);
              fVar6 = *(float *)((int)puVar8 + 0xc);
              *pfVar5 = (float)uVar2;
              pfVar5[1] = (float)((ulong)uVar2 >> 0x20);
              pfVar5[2] = fVar15;
              pfVar5[3] = fVar6;
              uVar2 = *puVar8;
              fVar15 = *(float *)(puVar8 + 1);
              fVar6 = *(float *)((int)puVar8 + 0xc);
              pfVar5[4] = (float)uVar2;
              pfVar5[5] = (float)((ulong)uVar2 >> 0x20);
              pfVar5[6] = fVar15;
              pfVar5[7] = fVar6;
                    /* end of inlined section */
              pSVar7->ambient[0] = 0.0;
              pSVar7->ambient[1] = 0.0;
              pSVar7->ambient[2] = 0.0;
              pSVar7->ambient[3] = 0.0;
              if (cp == (_SgCOORDUNIT *)0x0) {
                uVar2 = *puVar10;
                    /* inlined from libsg.h */
                fVar15 = *(float *)(puVar10 + 1);
                fVar6 = *(float *)((int)puVar10 + 0xc);
                pSVar7->pos[0] = (float)uVar2;
                pSVar7->pos[1] = (float)((ulong)uVar2 >> 0x20);
                pSVar7->pos[2] = fVar15;
                pSVar7->pos[3] = fVar6;
                    /* end of inlined section */
                pSVar7->pos[3] = fVar14;
                sceVu0SubVector(pfVar5 + -0xc,puVar10,puVar8 + 4);
                fVar15 = *(float *)((int)puVar10 + 0xc);
              }
              else {
                    /* inlined from libsg.h */
                tmpvec[2] = *(float *)(puVar10 + 1);
                tmpvec[0] = (float)*puVar10;
                tmpvec[1] = (float)((ulong)*puVar10 >> 0x20);
                tmpvec[3] = fVar14;
                    /* end of inlined section */
                sceVu0ApplyMatrix((Vector4 *)pSVar7,&cp->lwmtx,(Vector4 *)tmpvec);
                    /* inlined from libsg.h */
                tmpvec[2] = *(float *)(puVar8 + 5);
                tmpvec[0] = (float)puVar8[4];
                tmpvec[1] = (float)((ulong)puVar8[4] >> 0x20);
                tmpvec[3] = fVar14;
                    /* end of inlined section */
                sceVu0ApplyMatrix((Vector4 *)interest,&cp->lwmtx,(Vector4 *)tmpvec);
                sceVu0SubVector(pfVar5 + -0xc,pSVar7,interest);
                fVar15 = *(float *)((int)puVar10 + 0xc);
              }
              iVar11 = iVar11 + 1;
              puVar8 = puVar8 + 6;
              pfVar5 = pfVar5 + 0x24;
              fVar15 = SgCosfd(fVar15);
              pSVar7->intens = fVar15 * fVar15;
              fVar15 = _TransSPower(fVar13);
              pSVar7->power = fVar15;
              pSVar7->ambient[0] = fVar13;
              pSVar7->Enable = 0;
              pfVar1 = (float *)((int)puVar10 + 0xc);
              puVar10 = puVar10 + 6;
              pSVar7->ambient[1] = *pfVar1;
              pSVar7 = pSVar7 + 1;
            } while (iVar11 < iVar9);
            puVar12 = (undefined4 *)*puVar3;
          }
        }
        else if ((iVar11 == 3) && (Ambient != (float *)0x0)) {
          uVar2 = *(undefined8 *)(puVar3 + 4);
                    /* inlined from libsg.h */
          fVar14 = (float)puVar3[6];
          fVar15 = (float)puVar3[7];
          *Ambient = (float)uVar2;
          Ambient[1] = (float)((ulong)uVar2 >> 0x20);
          Ambient[2] = fVar14;
          Ambient[3] = fVar15;
        }
      }
      puVar3 = puVar12;
    }
  }
  return;
}

u_int* GetNextUnpackAddr(u_int *prim) {
  for (; (*prim & 0x60000000) != 0x60000000; prim = prim + 1) {
  }
  return prim;
}

void SetPreRenderTYPE0(int gloops, u_int *prim) {
	int i;
	int j;
	int loops;
	float *vp;
	sceVu0FVECTOR normal;
	sceVu0FVECTOR vertex;
	sceVu0FVECTOR first;
	sceVu0FVECTOR pcol;
	
  byte bVar1;
  uint *puVar2;
  undefined (*prim_00) [12];
  undefined (*pauVar3) [12];
  int iVar4;
  int iVar5;
  undefined extraout_vf7 [16];
  undefined extraout_vf7_00 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf8_00 [16];
  undefined auVar6 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf9_00 [16];
  undefined auVar7 [16];
  undefined extraout_vf10 [16];
  undefined extraout_vf10_00 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined extraout_vf18 [16];
  undefined auVar10 [16];
  undefined extraout_vf19 [16];
  float normal [4];
  float vertex [4];
  float first [4];
  float pcol [4];
  
  pauVar3 = (undefined (*) [12])(vuvnprim + 0xe);
  if (*(short *)((int)prim + 0x16) != 0) {
    iVar4 = 0;
    prim_00 = (undefined (*) [12])(prim + *(short *)((int)prim + 0x16));
    if (0 < gloops) {
      do {
        iVar5 = 0;
        puVar2 = GetNextUnpackAddr((uint *)prim_00);
        bVar1 = *(byte *)((int)puVar2 + 2);
        prim_00 = (undefined (*) [12])(puVar2 + 1);
        auVar10 = extraout_vf7;
        auVar6 = extraout_vf8;
        auVar7 = extraout_vf9;
        auVar8 = extraout_vf10;
        if (bVar1 != 0) {
          do {
            if (*(int *)*prim_00 != 1) {
              _lqc2(CONCAT412(0x3f800000,pauVar3[1]));
              auVar9 = _lqc2(CONCAT412(0x3f800000,*pauVar3));
              _vmulabc(auVar10,auVar9);
              _vmaddabc(auVar6,auVar9);
              _vmaddabc(auVar7,auVar9);
              _vmaddbc(auVar8,auVar9);
              _lqc2(ZEXT1216(*prim_00));
              CalcPointLight();
              CalcSpotLight();
              auVar10 = _vminibc(extraout_vf18,extraout_vf19);
              auVar10 = _sqc2(auVar10);
              pcol[0] = SUB164(auVar10,0);
              *(float *)*prim_00 = pcol[0];
              pcol[1] = SUB164(auVar10 >> 0x20,0);
              *(float *)(*prim_00 + 4) = pcol[1];
              pcol[2] = SUB164(auVar10 >> 0x40,0);
              *(float *)(*prim_00 + 8) = pcol[2];
              auVar10 = extraout_vf7_00;
              auVar6 = extraout_vf8_00;
              auVar7 = extraout_vf9_00;
              auVar8 = extraout_vf10_00;
            }
            iVar5 = iVar5 + 1;
            pauVar3 = pauVar3[2];
            prim_00 = prim_00[1];
          } while (iVar5 < (int)(uint)bVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < gloops);
    }
  }
  return;
}

void SetPreRenderTYPE2(int gloops, u_int *prim) {
	int i;
	int j;
	int loops;
	float *vp;
	sceVu0FVECTOR normal;
	sceVu0FVECTOR vertex;
	sceVu0FVECTOR first;
	sceVu0FVECTOR pcol;
	
  byte bVar1;
  float fVar2;
  uint *puVar3;
  float *prim_00;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined extraout_vf7 [16];
  undefined extraout_vf7_00 [16];
  undefined extraout_vf7_01 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf8_00 [16];
  undefined extraout_vf8_01 [16];
  undefined auVar13 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf9_00 [16];
  undefined extraout_vf9_01 [16];
  undefined auVar14 [16];
  undefined extraout_vf10 [16];
  undefined extraout_vf10_00 [16];
  undefined extraout_vf10_01 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined extraout_vf18 [16];
  undefined auVar17 [16];
  undefined extraout_vf19 [16];
  float normal [4];
  float vertex [4];
  float first [4];
  float pcol [4];
  
  first[0] = 0.0;
  first[1] = 0.0;
  first[2] = 0.0;
  pfVar4 = (float *)(vuvnprim + 0xe);
  if (*(short *)((int)prim + 0x16) != 0) {
    prim_00 = (float *)(prim + *(short *)((int)prim + 0x16));
    iVar6 = 0;
    if (0 < gloops) {
      do {
        iVar5 = 0;
        puVar3 = GetNextUnpackAddr((uint *)prim_00);
        bVar1 = *(byte *)((int)puVar3 + 2);
        prim_00 = (float *)(puVar3 + 1);
        auVar17 = extraout_vf7;
        auVar13 = extraout_vf8;
        auVar14 = extraout_vf9;
        auVar15 = extraout_vf10;
        if (bVar1 != 0) {
          do {
            if (*prim_00 != 1.401298e-45) {
              fVar9 = *pfVar4;
              fVar7 = pfVar4[1];
              fVar10 = pfVar4[2];
              _lqc2(CONCAT412(0x3f800000,*(undefined (*) [12])(pfVar4 + 3)));
              auVar16 = _lqc2(CONCAT412(vertex[3],CONCAT48(vertex[2],CONCAT44(vertex[1],vertex[0])))
                             );
              _vmulabc(auVar17,auVar16);
              _vmaddabc(auVar13,auVar16);
              _vmaddabc(auVar14,auVar16);
              _vmaddbc(auVar15,auVar16);
              fVar11 = *prim_00;
              fVar8 = prim_00[1];
              fVar12 = prim_00[2];
              _lqc2(CONCAT412(first[3],CONCAT48(first[2],CONCAT44(first[1],first[0]))));
              CalcPointLight();
              CalcSpotLight();
              auVar17 = _vminibc(extraout_vf18,extraout_vf19);
              auVar16 = _sqc2(auVar17);
              pcol[0] = SUB164(auVar16,0);
              auVar17 = extraout_vf7_00;
              auVar13 = extraout_vf8_00;
              auVar14 = extraout_vf9_00;
              auVar15 = extraout_vf10_00;
              if (dbg_flg != 0) {
                printf("%f %f %f\n");
                auVar17 = extraout_vf7_01;
                auVar13 = extraout_vf8_01;
                auVar14 = extraout_vf9_01;
                auVar15 = extraout_vf10_01;
              }
              fVar2 = *prim_00;
              *prim_00 = pcol[0];
              pcol[1] = SUB164(auVar16 >> 0x20,0);
              prim_00[1] = pcol[1];
              pcol[2] = SUB164(auVar16 >> 0x40,0);
              prim_00[2] = pcol[2];
              vertex[0] = fVar9;
              vertex[1] = fVar7;
              vertex[2] = fVar10;
              first[0] = fVar11;
              first[1] = fVar8;
              first[2] = fVar12;
              if (((uint)fVar2 & 0xffff) == 1) {
                *prim_00 = (float)((int)fVar2 + 1);
              }
            }
            iVar5 = iVar5 + 1;
            pfVar4 = pfVar4 + 6;
            prim_00 = prim_00 + 3;
          } while (iVar5 < (int)(uint)bVar1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < gloops);
    }
  }
  return;
}

void SetPreRenderTYPE2F(int gloops, u_int *prim) {
	int i;
	int j;
	int loops;
	float *vp;
	float *np;
	sceVu0FVECTOR normal;
	sceVu0FVECTOR vertex;
	sceVu0FVECTOR first;
	sceVu0FVECTOR pcol;
	
  byte bVar1;
  float fVar2;
  undefined auVar3 [12];
  uint *puVar4;
  float *prim_00;
  undefined (*pauVar5) [12];
  int iVar6;
  undefined (*pauVar7) [12];
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined extraout_vf7 [16];
  undefined extraout_vf7_00 [16];
  undefined extraout_vf7_01 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf8_00 [16];
  undefined extraout_vf8_01 [16];
  undefined auVar15 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf9_00 [16];
  undefined extraout_vf9_01 [16];
  undefined auVar16 [16];
  undefined extraout_vf10 [16];
  undefined extraout_vf10_00 [16];
  undefined extraout_vf10_01 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined extraout_vf18 [16];
  undefined auVar19 [16];
  undefined extraout_vf19 [16];
  float normal [4];
  float vertex [4];
  float first [4];
  float pcol [4];
  
  first[0] = 0.0;
  first[1] = 0.0;
  first[2] = 0.0;
  pauVar7 = (undefined (*) [12])(vuvnprim + 0xe);
  pauVar5 = pauVar7[*(short *)((int)vuvnprim + 10)];
  if (*(short *)((int)prim + 0x16) != 0) {
    prim_00 = (float *)(prim + *(short *)((int)prim + 0x16));
    iVar8 = 0;
    if (0 < gloops) {
      do {
        iVar6 = 0;
        puVar4 = GetNextUnpackAddr((uint *)prim_00);
        bVar1 = *(byte *)((int)puVar4 + 2);
        prim_00 = (float *)(puVar4 + 1);
        auVar3 = *pauVar7;
        pauVar7 = pauVar7[1];
        auVar19 = extraout_vf7;
        auVar15 = extraout_vf8;
        auVar16 = extraout_vf9;
        auVar17 = extraout_vf10;
        if (bVar1 != 0) {
          do {
            if (*prim_00 != 1.401298e-45) {
              fVar11 = *(float *)*pauVar5;
              fVar9 = *(float *)(*pauVar5 + 4);
              fVar12 = *(float *)(*pauVar5 + 8);
              _lqc2(CONCAT412(0x3f800000,auVar3));
              auVar18 = _lqc2(CONCAT412(vertex[3],CONCAT48(vertex[2],CONCAT44(vertex[1],vertex[0])))
                             );
              _vmulabc(auVar19,auVar18);
              _vmaddabc(auVar15,auVar18);
              _vmaddabc(auVar16,auVar18);
              _vmaddbc(auVar17,auVar18);
              fVar13 = *prim_00;
              fVar10 = prim_00[1];
              fVar14 = prim_00[2];
              _lqc2(CONCAT412(first[3],CONCAT48(first[2],CONCAT44(first[1],first[0]))));
              CalcPointLight();
              CalcSpotLight();
              auVar19 = _vminibc(extraout_vf18,extraout_vf19);
              _sqc2(auVar19);
              auVar19 = extraout_vf7_00;
              auVar15 = extraout_vf8_00;
              auVar16 = extraout_vf9_00;
              auVar17 = extraout_vf10_00;
              if (dbg_flg != 0) {
                printf("%f %f %f\n");
                auVar19 = extraout_vf7_01;
                auVar15 = extraout_vf8_01;
                auVar16 = extraout_vf9_01;
                auVar17 = extraout_vf10_01;
              }
              fVar2 = *prim_00;
              *prim_00 = pcol[0];
              prim_00[1] = pcol[1];
              prim_00[2] = pcol[2];
              vertex[0] = fVar11;
              vertex[1] = fVar9;
              vertex[2] = fVar12;
              first[0] = fVar13;
              first[1] = fVar10;
              first[2] = fVar14;
              if (((uint)fVar2 & 0xffff) == 1) {
                *prim_00 = (float)((int)fVar2 + 1);
              }
            }
            iVar6 = iVar6 + 1;
            prim_00 = prim_00 + 3;
            pauVar5 = pauVar5[1];
          } while (iVar6 < (int)(uint)bVar1);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < gloops);
    }
  }
  return;
}

void SetPreRenderMeshData(u_int *prim) {
	int gloops;
	int mtype;
	
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)((int)prim + 0xd);
  cVar2 = *(char *)((int)prim + 0xe);
  if (cVar1 == '\x12') {
    SetPreRenderTYPE2((int)cVar2,prim);
    return;
  }
  if (cVar1 < '\x13') {
    if (cVar1 != '\x10') {
      return;
    }
    SetPreRenderTYPE0((int)cVar2,prim);
    return;
  }
  if (cVar1 != '2') {
    return;
  }
  SetPreRenderTYPE2F((int)cVar2,prim);
  return;
}

static void _SetSpotPos(float *pos, float *dir) {
  _lqc2(*(undefined (*) [16])pos);
  _lqc2(*(undefined (*) [16])dir);
  return;
}

static float _SpotInnerProduct(float *bpos) {
  undefined in_vf12 [16];
  undefined in_vf13 [16];
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])bpos);
  auVar1 = _vsub(in_vf12,auVar1);
  auVar1 = _vmul(in_vf13,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _qmfc2(SUB164(auVar1,0));
  return SUB164(auVar1,0);
}

void SelectLight(u_int *prim) {
	SgLIGHT *TmpLight;
	sceVu0FVECTOR *pvec;
	sceVu0FVECTOR minvec;
	sceVu0FVECTOR maxvec;
	sceVu0FVECTOR ominvec;
	sceVu0FVECTOR omaxvec;
	sceVu0FVECTOR *tmpvec;
	sceVu0FVECTOR plain;
	sceVu0FVECTOR interest;
	float maxpower[4];
	float colscale;
	float spotdir;
	float spotvalue[8];
	int maxnum[4];
	int i;
	int j;
	int k;
	float *v;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *m0[4];
	float *v0;
	float *v1;
	float *v1;
	float *v1;
	float ret;
	float *v0;
	float ret;
	float *v1;
	float ret;
	
  uint uVar1;
  undefined auVar2 [12];
  undefined (*pauVar3) [16];
  ulong in_v1;
  ulong uVar4;
  float *pfVar5;
  undefined (*pauVar6) [16];
  int *piVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined in_a3_qw [16];
  float *pfVar12;
  long lVar13;
  SgLIGHT *pSVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined in_vf0 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  float minvec [4];
  float maxvec [4];
  float ominvec [4];
  float omaxvec [4];
  float plain [4];
  float interest [4];
  float maxpower [4];
  float spotvalue [8];
  int maxnum [4];
  
  iVar8 = SgPointNum;
  if ((SgSpotNum != 0) || (SgPointNum != 0)) {
                    /* end of inlined section */
    pauVar6 = (undefined (*) [16])(prim + 4);
                    /* inlined from libsg.h */
    auVar25 = _lqc2(*pauVar6);
    auVar26 = _lqc2(*(undefined (*) [16])(prim + 0x20));
    auVar25 = _vadd(auVar25,auVar26);
    auVar25 = _sqc2(auVar25);
    auVar26 = _qmtc2(0x3f000000);
    auVar25 = _lqc2(auVar25);
    auVar25 = _vmulbc(auVar25,auVar26);
    _DAT_700006a0 = _sqc2(auVar25);
                    /* end of inlined section */
    uVar1 = prim[2];
                    /* inlined from libsg.h */
    auVar25 = _lqc2((undefined  [16])lcp[uVar1].lwmtx.matrix[0]);
    auVar26 = _lqc2((undefined  [16])lcp[uVar1].lwmtx.matrix[1]);
    auVar23 = _lqc2((undefined  [16])lcp[uVar1].lwmtx.matrix[2]);
    auVar24 = _lqc2((undefined  [16])lcp[uVar1].lwmtx.matrix[3]);
                    /* end of inlined section */
    lVar17 = (long)(int)maxnum;
    pauVar3 = (undefined (*) [16])&DAT_70000620;
    iVar15 = 7;
    do {
                    /* inlined from libsg.h */
      auVar27 = _lqc2(*pauVar6);
      _vmulabc(auVar25,auVar27);
      _vmaddabc(auVar26,auVar27);
      _vmaddabc(auVar23,auVar27);
      auVar27 = _vmaddbc(auVar24,in_vf0);
      auVar27 = _sqc2(auVar27);
      *pauVar3 = auVar27;
                    /* end of inlined section */
      pauVar6 = pauVar6[1];
      pauVar3 = pauVar3[1];
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
                    /* inlined from libsg.h */
    uVar4 = in_v1 | 0x6a0;
    auVar27 = _lqc2(_DAT_700006a0);
    _vmulabc(auVar25,auVar27);
    _vmaddabc(auVar26,auVar27);
    _vmaddabc(auVar23,auVar27);
    auVar25 = _vmaddbc(auVar24,in_vf0);
    _DAT_700006a0 = _sqc2(auVar25);
                    /* end of inlined section */
    maxnum[0] = -1;
    iVar15 = 0;
    maxpower[0] = 0.0;
    maxpower[2] = 0.0;
    maxpower[1] = 0.0;
    maxnum[2] = -1;
    maxnum[1] = -1;
    if (0 < iVar8) {
      do {
        pSVar14 = SgPointLight + iVar15;
        iVar16 = iVar15 + 1;
        if (pSVar14->Enable == 0) {
          fVar19 = pSVar14->diffuse[0];
          fVar18 = pSVar14->diffuse[1];
          fVar21 = pSVar14->diffuse[2];
          fVar22 = pSVar14->power;
          pSVar14->SEnable = 1;
          fVar20 = _CalcLen(pSVar14->pos,(float *)&DAT_700006a0);
          iVar8 = SgPointNum;
          pfVar12 = maxpower;
          fVar20 = ((fVar19 + fVar18 + fVar21) * fVar22) / fVar20;
          lVar10 = 0;
          pSVar14->spower = fVar20;
          lVar13 = lVar17;
LAB_001783b0:
          if (fVar20 <= *pfVar12) goto LAB_0017840c;
          in_a3_qw = CONCAT88(SUB168(in_a3_qw >> 0x40,0),3);
          if (lVar10 < 3) {
            piVar7 = maxnum + 3;
            pfVar5 = maxpower + 3;
            do {
              lVar11 = (long)(SUB164(in_a3_qw,0) + -1);
              in_a3_qw = CONCAT88(SUB168(in_a3_qw >> 0x40,0),lVar11);
              iVar9 = piVar7[-1];
              *pfVar5 = pfVar5[-1];
              *piVar7 = iVar9;
              pfVar5 = pfVar5 + -1;
              piVar7 = piVar7 + -1;
            } while (lVar10 < lVar11);
            fVar20 = pSVar14->spower;
          }
          *pfVar12 = fVar20;
          *(int *)lVar13 = iVar15;
        }
LAB_0017842c:
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    pSVar14 = SgPointLight;
    SgPointGroupNum = 0;
    auVar25 = CONCAT88(uVar4,lVar17);
    iVar8 = 2;
    do {
      iVar15 = *SUB164(auVar25,0);
      in_a3_qw = CONCAT88(SUB168(in_a3_qw >> 0x40,0),(long)(iVar15 * 0x90));
      if (-1 < iVar15) {
        pSVar14[iVar15].SEnable = 0;
        SgPointGroupNum = 1;
      }
      iVar8 = iVar8 + -1;
      auVar25 = CONCAT88(SUB168(auVar25 >> 0x40,0),(long)(int)(SUB164(auVar25,0) + 1));
    } while (-1 < iVar8);
    iVar15 = 0;
    maxpower[0] = 0.0;
    maxnum[0] = -1;
    maxpower[2] = 0.0;
    maxpower[1] = 0.0;
    maxnum[2] = -1;
    maxnum[1] = -1;
    iVar8 = SgSpotNum;
    if (0 < SgSpotNum) {
      do {
        pSVar14 = SgSpotLight + iVar15;
        iVar16 = iVar15 + 1;
        if (pSVar14->Enable == 0) {
                    /* inlined from libsg.h */
                    /* end of inlined section */
          pSVar14->SEnable = 1;
                    /* inlined from libsg.h */
          pfVar12 = pSVar14->direction;
          auVar2 = *(undefined (*) [12])pfVar12;
          auVar25 = _lqc2(*(undefined (*) [16])pfVar12);
          auVar26 = _lqc2(*(undefined (*) [16])pSVar14->pos);
          auVar25 = _vmul(auVar25,auVar26);
          auVar25 = _vaddbc(auVar25,auVar25);
          auVar25 = _vaddbc(auVar25,auVar25);
          auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
          fVar18 = -SUB164(auVar25,0);
                    /* inlined from libsg.h */
          auVar25 = _lqc2(*(undefined (*) [16])pSVar14->pos);
          auVar26 = _lqc2(*(undefined (*) [16])pfVar12);
          auVar25 = _vadd(auVar25,auVar26);
          auVar25 = _sqc2(auVar25);
          auVar26 = _lqc2(CONCAT412(fVar18,*(undefined (*) [12])pfVar12));
          auVar25 = _lqc2(auVar25);
          auVar25 = _vmul(auVar26,auVar25);
          auVar25 = _vaddbc(auVar25,auVar25);
          auVar25 = _vaddbc(auVar25,auVar25);
          auVar25 = _qmfc2(SUB164(auVar25,0));
                    /* end of inlined section */
          for (iVar9 = 0; iVar9 < 8; iVar9 = iVar9 + 1) {
                    /* inlined from libsg.h */
            auVar26 = _lqc2(CONCAT412(fVar18,auVar2));
            auVar23 = _lqc2(*(undefined (*) [16])(&DAT_70000620 + iVar9 * 4));
            auVar26 = _vmul(auVar26,auVar23);
            auVar26 = _vaddbc(auVar26,auVar26);
            auVar26 = _vaddbc(auVar26,auVar26);
            in_a3_qw = _qmfc2(SUB164(auVar26,0));
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
            fVar20 = SUB164(in_a3_qw,0) + fVar18;
            spotvalue[iVar9] = fVar20;
            if (fVar20 * (SUB164(auVar25,0) + fVar18) < 0.0) break;
          }
          iVar8 = SgSpotNum;
          if (iVar9 != 8) {
            fVar19 = pSVar14->diffuse[0];
            fVar22 = pSVar14->diffuse[1];
            fVar21 = pSVar14->diffuse[2];
            fVar18 = pSVar14->power;
            fVar20 = _CalcLen(pSVar14->pos,(float *)&DAT_700006a0);
            iVar8 = SgSpotNum;
            pfVar12 = maxpower;
            fVar20 = ((fVar19 + fVar22 + fVar21) * fVar18) / fVar20;
            lVar10 = 0;
            pSVar14->spower = fVar20;
            lVar13 = lVar17;
LAB_001785f0:
            if (fVar20 <= *pfVar12) goto LAB_0017864c;
            in_a3_qw = CONCAT88(SUB168(in_a3_qw >> 0x40,0),3);
            if (lVar10 < 3) {
              piVar7 = maxnum + 3;
              pfVar5 = maxpower + 3;
              do {
                lVar11 = (long)(SUB164(in_a3_qw,0) + -1);
                in_a3_qw = CONCAT88(SUB168(in_a3_qw >> 0x40,0),lVar11);
                iVar9 = piVar7[-1];
                *pfVar5 = pfVar5[-1];
                *piVar7 = iVar9;
                pfVar5 = pfVar5 + -1;
                piVar7 = piVar7 + -1;
              } while (lVar10 < lVar11);
              fVar20 = pSVar14->spower;
            }
            *pfVar12 = fVar20;
            *(int *)lVar13 = iVar15;
          }
        }
LAB_00178670:
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    pSVar14 = SgSpotLight;
    SgSpotGroupNum = 0;
    iVar8 = 2;
    do {
      iVar15 = *(int *)lVar17;
      iVar8 = iVar8 + -1;
      if (-1 < iVar15) {
        pSVar14[iVar15].SEnable = 0;
        SgSpotGroupNum = 1;
      }
      lVar17 = (long)(int)((int *)lVar17 + 1);
    } while (-1 < iVar8);
  }
  return;
LAB_0017840c:
  lVar10 = (long)((int)lVar10 + 1);
  lVar13 = (long)(int)((int *)lVar13 + 1);
  pfVar12 = pfVar12 + 1;
  if (2 < lVar10) goto LAB_0017842c;
  goto LAB_001783b0;
LAB_0017864c:
  lVar10 = (long)((int)lVar10 + 1);
  lVar13 = (long)(int)((int *)lVar13 + 1);
  pfVar12 = pfVar12 + 1;
  if (2 < lVar10) goto LAB_00178670;
  goto LAB_001785f0;
}

void SgPreRenderPrim(u_int *prim) {
	float *m1[4];
	
  uint *puVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  if (prim != (uint *)0x0) {
    ppuVar2 = (uint **)*prim;
    while (ppuVar3 = ppuVar2, ppuVar3 != (uint **)0x0) {
      switch(((uint **)prim)[1]) {
      case (uint *)0x0:
        vuvnprim = prim;
        break;
      case (uint *)0x1:
        nextprim = (uint)ppuVar3;
        SetPreRenderMeshData(prim);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x2:
        SetMaterialData(prim);
        SetMaterialDataPrerender();
        if (dbg_flg == 0) goto LAB_001788d8;
        printf("PNum %d(%d) SNum %d(%d)\n");
        printVectorC((float *)SgLightCoordp->Spot_pos,&DAT_00356d78);
        printVectorC((float *)SgLightCoordp->Spot_pos[1],&DAT_00356d80);
        printVectorC((float *)SgLightCoordp->Spot_pos[2],&DAT_00356d88);
        printVectorC(SgLightCoordp->Spot_intens,s_intens_00356d90);
        printVectorC(SgLightCoordp->Spot_intens_b,"intens_b");
        printLMatC(SgLightCoordp->Spot_WDLightMtx,"WDLightMtx");
        printLMatC(SgLightCoordp->Spot_SLightMtx,"SLightMtx");
        printVectorC(SgLightSpotp->Spot_btimes,s_btimes_00356d98);
        printLMatC(SgLightSpotp->Spot_DColor,s_DColor_00356da0);
        printLMatC(SgLightSpotp->Spot_SColor,s_SColor_00356da8);
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x3:
        puVar1 = ((uint **)prim)[2];
                    /* inlined from libsg.h */
        auVar4 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[0]);
        auVar5 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[1]);
        auVar6 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[2]);
        auVar7 = _lqc2((undefined  [16])lcp[(int)puVar1].lwmtx.matrix[3]);
        _DAT_70000430 = _sqc2(auVar4);
        _DAT_70000440 = _sqc2(auVar5);
        _DAT_70000450 = _sqc2(auVar6);
        _DAT_70000460 = _sqc2(auVar7);
                    /* end of inlined section */
        _MulMatrix((float (*) [4])&DAT_70000090,(float (*) [4])&SgWSMtx,(float (*) [4])&DAT_70000430
                  );
        ppuVar3 = (uint **)*prim;
        break;
      case (uint *)0x4:
        SelectLight(prim);
        SetLightData(lcp + (int)((uint **)prim)[2],(_SgCOORDUNIT *)0x0);
LAB_001788d8:
        ppuVar3 = (uint **)*prim;
      }
      prim = (uint *)ppuVar3;
      ppuVar2 = (uint **)*ppuVar3;
    }
  }
  return;
}

void SgPreRender(void *sgd_top, int pnum) {
	int i;
	u_int *pk;
	
  uint *prim;
  uint **ppuVar1;
  int iVar2;
  
  Set12Register();
  blocksm = *(int *)((int)sgd_top + 0x14);
  lcp = *(_SgCOORDUNIT **)((int)sgd_top + 8);
  write_counter = 0;
  SetMaterialPointer();
  SetMaterialPointerCoord();
  if (pnum < 0) {
    iVar2 = 1;
    ppuVar1 = (uint **)((int)sgd_top + 0x1c);
    if (1 < blocksm) {
      prim = *ppuVar1;
      while( true ) {
        iVar2 = iVar2 + 1;
        ppuVar1 = ppuVar1 + 1;
        SgPreRenderPrim(prim);
        if (blocksm <= iVar2) break;
        prim = *ppuVar1;
      }
    }
  }
  else if (pnum != 0) {
    SgPreRenderPrim(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
    return;
  }
  return;
}

void ClearPreRenderMeshData(u_int *prim) {
	int i;
	int j;
	int loops;
	int gloops;
	int mtype;
	sceVu0FVECTOR first;
	
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float first [4];
  
  cVar1 = *(char *)((int)prim + 0xd);
  lVar6 = (long)*(char *)((int)prim + 0xe);
  if (*(short *)((int)prim + 0x16) == 0) {
    return;
  }
  puVar3 = prim + *(short *)((int)prim + 0x16);
  if (cVar1 != '\x12') {
    if (cVar1 < '\x13') {
      if (cVar1 != '\x10') {
        return;
      }
      lVar5 = 0;
      if (lVar6 < 1) {
        return;
      }
      do {
        puVar3 = GetNextUnpackAddr(puVar3);
        iVar4 = 0;
        bVar2 = *(byte *)((int)puVar3 + 2);
        puVar3 = puVar3 + 1;
        if (bVar2 != 0) {
          do {
            iVar4 = iVar4 + 1;
            if (*puVar3 != 1) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
            }
            puVar3 = puVar3 + 3;
          } while (iVar4 < (int)(uint)bVar2);
        }
        lVar5 = (long)((int)lVar5 + 1);
      } while (lVar5 < lVar6);
      return;
    }
    if (cVar1 != '2') {
      return;
    }
  }
  lVar5 = 0;
  if (0 < lVar6) {
    do {
      puVar3 = GetNextUnpackAddr(puVar3);
      iVar4 = 0;
      bVar2 = *(byte *)((int)puVar3 + 2);
      puVar3 = puVar3 + 1;
      if (bVar2 != 0) {
        do {
          iVar4 = iVar4 + 1;
          if (*puVar3 != 1) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
          }
          puVar3 = puVar3 + 3;
        } while (iVar4 < (int)(uint)bVar2);
      }
      lVar5 = (long)((int)lVar5 + 1);
    } while (lVar5 < lVar6);
  }
  return;
}

void SgClearPreRenderPrim(u_int *prim) {
  uint **ppuVar1;
  uint **ppuVar2;
  
  if (prim != (uint *)0x0) {
    ppuVar1 = (uint **)*prim;
    while (ppuVar2 = ppuVar1, ppuVar2 != (uint **)0x0) {
      if (((uint **)prim)[1] == (uint *)0x1) {
        ClearPreRenderMeshData(prim);
        ppuVar2 = (uint **)*prim;
      }
      prim = (uint *)ppuVar2;
      ppuVar1 = (uint **)*ppuVar2;
    }
  }
  return;
}

void SgClearPreRender(void *sgd_top, int pnum) {
	int i;
	u_int *pk;
	
  uint *prim;
  uint **ppuVar1;
  int iVar2;
  
  blocksm = *(int *)((int)sgd_top + 0x14);
  SetMaterialPointer();
  SetMaterialPointerCoord();
  if (pnum < 0) {
    iVar2 = 1;
    ppuVar1 = (uint **)((int)sgd_top + 0x1c);
    if (1 < blocksm) {
      prim = *ppuVar1;
      while( true ) {
        iVar2 = iVar2 + 1;
        ppuVar1 = ppuVar1 + 1;
        SgClearPreRenderPrim(prim);
        if (blocksm <= iVar2) break;
        prim = *ppuVar1;
      }
    }
  }
  else if (pnum != 0) {
    SgClearPreRenderPrim(*(uint **)((int)sgd_top + pnum * 4 + 0x18));
    return;
  }
  return;
}
