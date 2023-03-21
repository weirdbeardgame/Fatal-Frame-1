// STATUS: NOT STARTED

sceVu0FVECTOR clip_volume = {
	/* [0] = */ 1920.f,
	/* [1] = */ 896.f,
	/* [2] = */ 256.f,
	/* [3] = */ 16777000.f
};
static sceVu0FVECTOR clip_volumev = {
	/* [0] = */ 320.f,
	/* [1] = */ 112.f,
	/* [2] = */ 0.100000001f,
	/* [3] = */ 16777000.f
};
SgCAMERA *nowcamera = NULL;

void SetViewScreenClipMatrix(SgCAMERA *camera, float scrz) {
	float az;
	float cz;
	float gsx;
	float gsy;
	float gsxv;
	float gsyv;
	float rscrz;
	float zmin;
	float zmax;
	float farz;
	float nearz;
	sceVu0FMATRIX mt;
	
  Matrix4x4 *m0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float mt [4] [4];
  
  m0 = &camera->vs;
  fVar5 = camera->nearz;
  fVar3 = fVar5 / scrz;
  fVar7 = camera->farz;
  fVar6 = fVar7 * fVar5;
  fVar10 = 1.0;
  fVar11 = clip_volumev[1] * fVar3;
  fVar8 = clip_volume[0] * fVar3;
  mt[2][2] = (fVar6 * (-camera->zmin + camera->zmax)) / (-fVar5 + fVar7);
  mt[3][2] = (-camera->zmax * fVar5 + camera->zmin * fVar7) / (-fVar5 + fVar7);
  fVar9 = clip_volume[1] * fVar3;
  fVar3 = clip_volumev[0] * fVar3;
  sceVu0UnitMatrix(m0);
  fVar4 = fVar5 + fVar5;
  (camera->vs).matrix[1].y = scrz;
  (camera->vs).matrix[0].x = scrz;
  (camera->vs).matrix[3].z = fVar10;
  (camera->vs).matrix[2].w = fVar10;
  (camera->vs).matrix[2].z = 0.0;
  (camera->vs).matrix[3].w = 0.0;
  sceVu0UnitMatrix((Matrix4x4 *)mt);
  mt[0][0] = camera->ax;
  mt[1][1] = camera->ay;
  mt[3][0] = camera->cx;
  mt[3][1] = camera->cy;
  sceVu0MulMatrix(m0,(Matrix4x4 *)mt,m0);
  sceVu0UnitMatrix(&camera->vc);
  fVar1 = camera->ax;
  fVar2 = camera->ay;
  (camera->vc).matrix[2].w = fVar10;
  (camera->vc).matrix[3].w = 0.0;
  fVar6 = (fVar6 * -2.0) / (fVar7 - fVar5);
  fVar5 = (fVar7 + fVar5) / (fVar7 - fVar5);
  (camera->vc).matrix[3].z = fVar6;
  (camera->vc).matrix[2].z = fVar5;
  (camera->vc).matrix[0].x = (fVar4 * fVar1) / (fVar8 + fVar8);
  (camera->vc).matrix[1].y = (fVar4 * fVar2) / (fVar9 + fVar9);
  sceVu0UnitMatrix(&camera->vcv);
  fVar2 = camera->ax;
  fVar1 = camera->ay;
  (camera->vcv).matrix[2].z = fVar5;
  (camera->vcv).matrix[3].z = fVar6;
  (camera->vcv).matrix[2].w = fVar10;
  (camera->vcv).matrix[3].w = 0.0;
  (camera->vcv).matrix[0].x = (fVar4 * fVar2) / (fVar3 + fVar3);
  (camera->vcv).matrix[1].y = (fVar4 * fVar1) / (fVar11 + fVar11);
  return;
}

void SgSetRefCamera(SgCAMERA *camera) {
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX clip_screen;
	float scrz;
	
  Vector4 *pVVar1;
  Matrix4x4 *m2;
  float fVar2;
  float tmpmat [4] [4];
  float clip_screen [4] [4];
  
  pVVar1 = &camera->yd;
  m2 = &camera->wv;
  nowcamera = camera;
  fVar2 = tanf(camera->fov * 0.5);
  fVar2 = clip_volumev[1] / fVar2;
  sceVu0SubVector(&camera->zd,&camera->i,camera);
  sceVu0SubVector(0x303af0,camera,&camera->i);
  (camera->yd).x = 0.0;
  (camera->yd).z = 0.0;
  (camera->yd).w = 0.0;
  (camera->yd).y = -1.0;
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  sceVu0RotMatrixZ(-camera->roll,tmpmat,tmpmat);
  sceVu0ApplyMatrix(pVVar1,(Matrix4x4 *)tmpmat,pVVar1);
  SetViewScreenClipMatrix(camera,fVar2 + fVar2);
  sceVu0CameraMatrix(m2,camera,&camera->zd,pVVar1);
  sceVu0MulMatrix(&camera->ws,&camera->vs,m2);
  sceVu0MulMatrix(&camera->wc,&camera->vc,m2);
  sceVu0MulMatrix(&camera->wcv,&camera->vcv,m2);
  SgSetWsMtx((float (*) [4])&camera->ws);
  SgSetClipMtx((float (*) [4])&camera->wc);
  SgSetClipVMtx((float (*) [4])&camera->wcv);
  return;
}

void SetViewScreenClipMatrixOrtho(SgCAMERA *camera, float scrz) {
	float az;
	float cz;
	float zmin;
	float zmax;
	float farz;
	float nearz;
	sceVu0FMATRIX mt;
	
  float fVar1;
  Matrix4x4 *m0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float mt [4] [4];
  
  fVar1 = clip_volumev[0];
  fVar3 = clip_volume[0];
  m0 = &camera->vs;
  fVar5 = camera->farz;
  fVar7 = camera->nearz;
  mt[3][2] = (-camera->zmax * fVar7 + camera->zmin * fVar5) / (-fVar7 + fVar5);
  mt[2][2] = (fVar5 * fVar7 * (-camera->zmin + camera->zmax)) / (-fVar7 + fVar5);
  fVar4 = clip_volume[1];
  fVar8 = clip_volumev[1];
  sceVu0UnitMatrix(m0);
  sceVu0UnitMatrix((Matrix4x4 *)mt);
  mt[0][0] = camera->ax;
  mt[1][1] = camera->ay;
  mt[3][0] = camera->cx;
  mt[3][1] = camera->cy;
  sceVu0MulMatrix(m0,(Matrix4x4 *)mt,m0);
  sceVu0UnitMatrix(&camera->vc);
  fVar2 = camera->ay;
  fVar6 = (fVar5 + fVar7) / (fVar5 - fVar7);
  fVar5 = -2.0 / (fVar5 - fVar7);
  (camera->vc).matrix[0].x = camera->ax / fVar3;
  (camera->vc).matrix[3].z = fVar6;
  (camera->vc).matrix[2].z = fVar5;
  (camera->vc).matrix[1].y = fVar2 / fVar4;
  sceVu0UnitMatrix(&camera->vcv);
  fVar4 = camera->ax;
  fVar3 = camera->ay;
  (camera->vcv).matrix[3].z = fVar6;
  (camera->vcv).matrix[2].z = fVar5;
  (camera->vcv).matrix[0].x = fVar4 / fVar1;
  (camera->vcv).matrix[1].y = fVar3 / fVar8;
  return;
}

void SgSetRefCameraOrtho(SgCAMERA *camera) {
	sceVu0FMATRIX tmpmat;
	sceVu0FMATRIX clip_screen;
	float scrz;
	
  Vector4 *pVVar1;
  Matrix4x4 *m2;
  float fVar2;
  float tmpmat [4] [4];
  float clip_screen [4] [4];
  
  pVVar1 = &camera->yd;
  m2 = &camera->wv;
  nowcamera = camera;
  fVar2 = tanf(camera->fov * 0.5);
  fVar2 = clip_volumev[1] / fVar2;
  sceVu0SubVector(&camera->zd,&camera->i,camera);
  sceVu0SubVector(0x303af0,camera,&camera->i);
  (camera->yd).x = 0.0;
  (camera->yd).z = 0.0;
  (camera->yd).w = 0.0;
  (camera->yd).y = -1.0;
  sceVu0UnitMatrix((Matrix4x4 *)tmpmat);
  sceVu0RotMatrixZ(-camera->roll,tmpmat,tmpmat);
  sceVu0ApplyMatrix(pVVar1,(Matrix4x4 *)tmpmat,pVVar1);
  SetViewScreenClipMatrixOrtho(camera,fVar2 + fVar2);
  sceVu0CameraMatrix(m2,camera,&camera->zd,pVVar1);
  sceVu0MulMatrix(&camera->ws,&camera->vs,m2);
  sceVu0MulMatrix(&camera->wc,&camera->vc,m2);
  sceVu0MulMatrix(&camera->wcv,&camera->vcv,m2);
  SgSetWsMtx((float (*) [4])&camera->ws);
  SgSetClipMtx((float (*) [4])&camera->wc);
  SgSetClipVMtx((float (*) [4])&camera->wcv);
  return;
}

void SetClipValue(float minx, float maxx, float miny, float maxy) {
  clip_value[0] = minx;
  clip_value[3] = maxy;
  clip_value[1] = maxx;
  clip_value[2] = miny;
  if ((((minx == -1.0) && (maxx == 1.0)) && (miny == -1.0)) && (maxy == 1.0)) {
    clip_value_check = 0;
    return;
  }
  clip_value_check = 1;
  return;
}

void printClipValue() {
  printf("clip_value_check %d\n");
  printVectorC(clip_value,"clip_value");
  return;
}

int BoundClip(float *ed, float *v) {
	int ret;
	
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2(*(undefined (*) [16])v);
  _vmulabc(in_vf4,auVar2);
  _vmaddabc(in_vf5,auVar2);
  _vmaddabc(in_vf6,auVar2);
  auVar3 = _vmaddbc(in_vf7,in_vf0);
  _vmulabc(in_vf8,auVar2);
  _vmaddabc(in_vf9,auVar2);
  _vmaddabc(in_vf10,auVar2);
  auVar2 = _vmaddbc(in_vf11,in_vf0);
  _vclip(auVar3,auVar3);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])ed = auVar2;
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

int BoundClipQ(float *ed, float *v0, float *v1) {
	int ret;
	
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined in_vf4 [16];
  undefined in_vf5 [16];
  undefined in_vf6 [16];
  undefined in_vf7 [16];
  undefined in_vf8 [16];
  undefined in_vf9 [16];
  undefined in_vf10 [16];
  undefined in_vf11 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  auVar2 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(in_vf4,auVar2);
  _vmaddabc(in_vf5,auVar2);
  _vmaddabc(in_vf6,auVar2);
  auVar3 = _vmaddbc(in_vf7,in_vf0);
  _vmulabc(in_vf8,auVar2);
  _vmaddabc(in_vf9,auVar2);
  _vmaddabc(in_vf10,auVar2);
  _vdiv(in_vf0,0,auVar3,0);
  _vclip(auVar3,auVar3);
  auVar2 = _vmaddbc(in_vf11,in_vf0);
  uVar4 = _vwaitq();
  auVar3 = _vmulq(auVar3,uVar4);
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])ed = auVar2;
  auVar2 = _sqc2(auVar3);
  *(undefined (*) [16])v0 = auVar2;
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

void printBoundingBox(u_int *prim) {
	sceVu0FVECTOR tmpvec[8];
	
  float tmpvec [8] [4];
  
  printVectorC((float *)(prim + 4),&DAT_00356dd0);
  printVectorC((float *)(prim + 0x20),&DAT_00356dd8);
  return;
}

int ClipCheck(sceVu0FVECTOR *vec) {
  undefined8 uVar1;
  undefined4 in_vc2;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar2 = _lqc2((undefined  [16])*vec);
  auVar3 = _lqc2((undefined  [16])vec[1]);
  auVar4 = _lqc2((undefined  [16])vec[2]);
  auVar5 = _lqc2((undefined  [16])vec[3]);
  _vclip(auVar2,auVar2);
  _vclip(auVar3,auVar3);
  _vclip(auVar4,auVar4);
  _vclip(auVar5,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(in_vc2);
  return (int)uVar1;
}

int CheckBoundingBox(u_int *prim) {
	sceVu0FVECTOR *pvec;
	sceVu0FVECTOR *tmpvec;
	int i;
	int clip1;
	int xmax_flg;
	int xmin_flg;
	int ymin_flg;
	int ymax_flg;
	float *lw[4];
	float *m0[4];
	float *v1;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  _SgCOORDUNIT *p_Var5;
  uint uVar6;
  uint uVar7;
  undefined (*pauVar8) [16];
  float *ed;
  undefined (*pauVar9) [16];
  float *pfVar10;
  int iVar11;
  undefined (*pauVar12) [16];
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  
  p_Var5 = lcp;
  pauVar12 = (undefined (*) [16])&DAT_70000620;
  lcp[prim[2]].camin = 0;
  uVar7 = prim[2];
  auVar13 = _lqc2((undefined  [16])SgCMVtx[0]);
  auVar14 = _lqc2((undefined  [16])SgCMVtx[1]);
  auVar15 = _lqc2((undefined  [16])SgCMVtx[2]);
  auVar16 = _lqc2((undefined  [16])SgCMVtx[3]);
  auVar17 = _lqc2((undefined  [16])p_Var5[uVar7].lwmtx.matrix[0]);
  auVar18 = _lqc2((undefined  [16])p_Var5[uVar7].lwmtx.matrix[1]);
  auVar19 = _lqc2((undefined  [16])p_Var5[uVar7].lwmtx.matrix[2]);
  auVar20 = _lqc2((undefined  [16])p_Var5[uVar7].lwmtx.matrix[3]);
  _vmulabc(auVar13,auVar17);
  _vmaddabc(auVar14,auVar17);
  _vmaddabc(auVar15,auVar17);
  _vmaddbc(auVar16,auVar17);
  _vmulabc(auVar13,auVar18);
  _vmaddabc(auVar14,auVar18);
  _vmaddabc(auVar15,auVar18);
  _vmaddbc(auVar16,auVar18);
  _vmulabc(auVar13,auVar19);
  _vmaddabc(auVar14,auVar19);
  _vmaddabc(auVar15,auVar19);
  _vmaddbc(auVar16,auVar19);
  _vmulabc(auVar13,auVar20);
  _vmaddabc(auVar14,auVar20);
  _vmaddabc(auVar15,auVar20);
  _vmaddbc(auVar16,auVar20);
  auVar13 = _lqc2((undefined  [16])SgCMtx[0]);
  auVar14 = _lqc2((undefined  [16])SgCMtx[1]);
  auVar15 = _lqc2((undefined  [16])SgCMtx[2]);
  auVar16 = _lqc2((undefined  [16])SgCMtx[3]);
  _vmulabc(auVar13,auVar17);
  _vmaddabc(auVar14,auVar17);
  _vmaddabc(auVar15,auVar17);
  _vmaddbc(auVar16,auVar17);
  _vmulabc(auVar13,auVar18);
  _vmaddabc(auVar14,auVar18);
  _vmaddabc(auVar15,auVar18);
  _vmaddbc(auVar16,auVar18);
  _vmulabc(auVar13,auVar19);
  _vmaddabc(auVar14,auVar19);
  _vmaddabc(auVar15,auVar19);
  _vmaddbc(auVar16,auVar19);
  _vmulabc(auVar13,auVar20);
  _vmaddabc(auVar14,auVar20);
  _vmaddabc(auVar15,auVar20);
  _vmaddbc(auVar16,auVar20);
  pauVar9 = (undefined (*) [16])(prim + 4);
  if (clip_value_check == 0) {
    uVar7 = 0x3f;
    pfVar10 = (float *)&DAT_700006a0;
    iVar11 = 7;
    pauVar8 = pauVar9;
    do {
      uVar6 = BoundClip(pfVar10,(float *)pauVar8);
      pfVar10 = pfVar10 + 4;
      uVar7 = uVar7 & uVar6;
      iVar11 = iVar11 + -1;
      pauVar8 = pauVar8[1];
    } while (-1 < iVar11);
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    uVar7 = 0x3f;
    ed = (float *)&DAT_700006a0;
    iVar11 = 7;
    pauVar8 = pauVar9;
    pfVar10 = (float *)&DAT_70000620;
    do {
      uVar6 = BoundClipQ(ed,pfVar10,(float *)pauVar8);
      ed = ed + 4;
      uVar7 = uVar7 & uVar6;
      iVar11 = iVar11 + -1;
      pauVar8 = pauVar8[1];
      pfVar10 = pfVar10 + 4;
    } while (-1 < iVar11);
    if (uVar7 != 0) {
      return 0;
    }
    bVar3 = 1;
    bVar2 = 1;
    bVar1 = 1;
    bVar4 = 1;
    iVar11 = 7;
    pauVar8 = pauVar12;
    do {
      if (clip_value[0] < *(float *)*pauVar8) {
        bVar4 = 0;
      }
      if (*(float *)*pauVar8 < clip_value[1]) {
        bVar1 = 0;
      }
      if (clip_value[2] < *(float *)((int)*pauVar8 + 4)) {
        bVar2 = 0;
      }
      if (*(float *)((int)*pauVar8 + 4) < clip_value[3]) {
        bVar3 = 0;
      }
      iVar11 = iVar11 + -1;
      pauVar8 = pauVar8[1];
    } while (-1 < iVar11);
    if ((bool)(bVar4 | bVar3 | bVar2 | bVar1)) {
      return 0;
    }
  }
  p_Var5 = lcp;
  if (wscissor_flg == 0) {
    uVar7 = prim[2];
  }
  else {
    uVar7 = prim[2];
                    /* inlined from libsg.h */
    auVar13 = _lqc2((undefined  [16])lcp[uVar7].lwmtx.matrix[0]);
    auVar14 = _lqc2((undefined  [16])lcp[uVar7].lwmtx.matrix[1]);
    auVar15 = _lqc2((undefined  [16])lcp[uVar7].lwmtx.matrix[2]);
    auVar16 = _lqc2((undefined  [16])lcp[uVar7].lwmtx.matrix[3]);
                    /* end of inlined section */
    iVar11 = 7;
    do {
                    /* inlined from libsg.h */
      auVar17 = _lqc2(*pauVar9);
      _vmulabc(auVar13,auVar17);
      _vmaddabc(auVar14,auVar17);
      _vmaddabc(auVar15,auVar17);
      auVar17 = _vmaddbc(auVar16,in_vf0);
      auVar17 = _sqc2(auVar17);
      *pauVar12 = auVar17;
                    /* end of inlined section */
      pauVar12 = pauVar12[1];
      iVar11 = iVar11 + -1;
      pauVar9 = pauVar9[1];
    } while (-1 < iVar11);
    if (((wscissor_upper[1] != 0.0) && (wscissor_upper[1] < DAT_70000624)) &&
       (wscissor_upper[1] < DAT_70000694)) {
      return 0;
    }
    if (((wscissor_lower[1] != 0.0) && (DAT_70000624 < wscissor_lower[1])) &&
       (DAT_70000694 < wscissor_lower[1])) {
      return 0;
    }
  }
  p_Var5[uVar7].camin = 1;
  uVar7 = ClipCheck((float (*) [4])&DAT_700006a0);
  uVar6 = ClipCheck((float (*) [4])&DAT_700006e0);
  edge_check = (int)(((uVar7 | uVar6) & 0xffffff) != 0);
  return 1;
}

int CheckBoundingBoxEdge(u_int *prim) {
	sceVu0FVECTOR *pvec;
	int clip;
	sceVu0FVECTOR *tmpvec;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	float *v0;
	float *v1;
	
  uint uVar1;
  uint uVar2;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf4_00 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf5_00 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf6_00 [16];
  undefined extraout_vf7 [16];
  undefined extraout_vf7_00 [16];
  undefined auVar3 [16];
  
  _SetMulMatrix(SgCMtx,(float (*) [4])&lcp[prim[2]].lwmtx);
                    /* inlined from libsg.h */
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 4));
  _vmulabc(extraout_vf4,auVar3);
  _vmaddabc(extraout_vf5,auVar3);
  _vmaddabc(extraout_vf6,auVar3);
  auVar3 = _vmaddbc(extraout_vf7,in_vf0);
  _DAT_70000620 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 8));
  _vmulabc(extraout_vf4,auVar3);
  _vmaddabc(extraout_vf5,auVar3);
  _vmaddabc(extraout_vf6,auVar3);
  auVar3 = _vmaddbc(extraout_vf7,in_vf0);
  _DAT_70000630 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0xc));
  _vmulabc(extraout_vf4,auVar3);
  _vmaddabc(extraout_vf5,auVar3);
  _vmaddabc(extraout_vf6,auVar3);
  auVar3 = _vmaddbc(extraout_vf7,in_vf0);
  _DAT_70000640 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0x10));
  _vmulabc(extraout_vf4,auVar3);
  _vmaddabc(extraout_vf5,auVar3);
  _vmaddabc(extraout_vf6,auVar3);
  auVar3 = _vmaddbc(extraout_vf7,in_vf0);
  _DAT_70000650 = _sqc2(auVar3);
                    /* end of inlined section */
  uVar1 = ClipCheck((float (*) [4])&DAT_70000620);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0x14));
  _vmulabc(extraout_vf4_00,auVar3);
  _vmaddabc(extraout_vf5_00,auVar3);
  _vmaddabc(extraout_vf6_00,auVar3);
  auVar3 = _vmaddbc(extraout_vf7_00,in_vf0);
  _DAT_70000660 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0x18));
  _vmulabc(extraout_vf4_00,auVar3);
  _vmaddabc(extraout_vf5_00,auVar3);
  _vmaddabc(extraout_vf6_00,auVar3);
  auVar3 = _vmaddbc(extraout_vf7_00,in_vf0);
  _DAT_70000670 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0x1c));
  _vmulabc(extraout_vf4_00,auVar3);
  _vmaddabc(extraout_vf5_00,auVar3);
  _vmaddabc(extraout_vf6_00,auVar3);
  auVar3 = _vmaddbc(extraout_vf7_00,in_vf0);
  _DAT_70000680 = _sqc2(auVar3);
  auVar3 = _lqc2(*(undefined (*) [16])(prim + 0x20));
  _vmulabc(extraout_vf4_00,auVar3);
  _vmaddabc(extraout_vf5_00,auVar3);
  _vmaddabc(extraout_vf6_00,auVar3);
  auVar3 = _vmaddbc(extraout_vf7_00,in_vf0);
  _DAT_70000690 = _sqc2(auVar3);
                    /* end of inlined section */
  uVar2 = ClipCheck((float (*) [4])&DAT_70000660);
  return (int)(((uVar1 | uVar2) & 0xffffff) != 0);
}

void SgSetFog(float min, float max, float near, float far, int r, int g, int b) {
  float (*pafVar1) [4];
  
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar1 = objwork[sbuffer_p];
                    /* end of inlined section */
  fog_value[3] = (far * near * (max - min)) / (far - near);
  fog_value[2] = (((min - max) * (far + near)) / (far - near) + min + max) * 0.5;
  fog_value[0] = min;
  *(undefined8 *)(pafVar1[2] + 2) = 0x3d;
  (*pafVar1)[2] = (float)&DAT_11000000;
  (*pafVar1)[3] = 8.589937e+09;
  *(undefined8 *)pafVar1[1] = 0x1000000000008001;
  *(undefined8 *)(pafVar1[1] + 2) = 0xe;
  *(long *)pafVar1[2] = (long)r | (long)g << 8 | (long)b << 0x10;
  fog_value[1] = max;
  (*pafVar1)[0] = 0.0;
  (*pafVar1)[1] = 0.0;
  AppendDmaBuffer(3);
  FlushModel(0);
  return;
}

void SgSetWScissorBox(float ax, float ay, float az, float bx, float by, float bz) {
  if ((((ax == 0.0) && (ay == 0.0)) && (az == 0.0)) && (((bx == 0.0 && (by == 0.0)) && (bz == 0.0)))
     ) {
    wscissor_flg = 0;
    return;
  }
  wscissor_upper[0] = ax;
  wscissor_upper[2] = az;
  wscissor_lower[0] = bx;
  wscissor_lower[2] = bz;
  wscissor_upper[1] = ay;
  wscissor_flg = 1;
  wscissor_lower[1] = by;
  return;
}

void _SetMulMatrixBB(float *m0[4], float *m1[4], float *lw[4]) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  auVar5 = _lqc2((undefined  [16])*lw);
  auVar6 = _lqc2((undefined  [16])lw[1]);
  auVar7 = _lqc2((undefined  [16])lw[2]);
  auVar8 = _lqc2((undefined  [16])lw[3]);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  _vmaddbc(auVar4,auVar5);
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddbc(auVar4,auVar6);
  _vmulabc(auVar1,auVar7);
  _vmaddabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddbc(auVar4,auVar7);
  _vmulabc(auVar1,auVar8);
  _vmaddabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddbc(auVar4,auVar8);
  auVar1 = _lqc2((undefined  [16])*m1);
  auVar2 = _lqc2((undefined  [16])m1[1]);
  auVar3 = _lqc2((undefined  [16])m1[2]);
  auVar4 = _lqc2((undefined  [16])m1[3]);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  _vmaddbc(auVar4,auVar5);
  _vmulabc(auVar1,auVar6);
  _vmaddabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddbc(auVar4,auVar6);
  _vmulabc(auVar1,auVar7);
  _vmaddabc(auVar2,auVar7);
  _vmaddabc(auVar3,auVar7);
  _vmaddbc(auVar4,auVar7);
  _vmulabc(auVar1,auVar8);
  _vmaddabc(auVar2,auVar8);
  _vmaddabc(auVar3,auVar8);
  _vmaddbc(auVar4,auVar8);
  return;
}
