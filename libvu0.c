// STATUS: NOT STARTED


sceVu0ApplyMatrix() {
  Vector4 VVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  auVar2 = _lqc2((undefined  [16])param_2->matrix[0]);
  auVar3 = _lqc2((undefined  [16])param_2->matrix[1]);
  auVar4 = _lqc2((undefined  [16])param_2->matrix[2]);
  auVar5 = _lqc2((undefined  [16])param_2->matrix[3]);
  auVar6 = _lqc2((undefined  [16])*param_3);
  _vmulabc(auVar2,auVar6);
  _vmaddabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar2 = _vmaddbc(auVar5,auVar6);
  VVar1 = (Vector4)_sqc2(auVar2);
  *param_1 = VVar1;
  return;
}

sceVu0MulMatrix() {
  Vector4 VVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  auVar3 = _lqc2((undefined  [16])m1->matrix[0]);
  auVar4 = _lqc2((undefined  [16])m1->matrix[1]);
  auVar5 = _lqc2((undefined  [16])m1->matrix[2]);
  auVar6 = _lqc2((undefined  [16])m1->matrix[3]);
  iVar2 = 4;
  do {
    auVar7 = _lqc2((undefined  [16])m2->matrix[0]);
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    _vmaddabc(auVar5,auVar7);
    auVar7 = _vmaddbc(auVar6,auVar7);
    VVar1 = (Vector4)_sqc2(auVar7);
    m0->matrix[0] = VVar1;
    iVar2 = iVar2 + -1;
    m2 = (Matrix4x4 *)((int)m2 + 0x10);
    m0 = (Matrix4x4 *)((int)m0 + 0x10);
  } while (iVar2 != 0);
  return;
}

sceVu0OuterProduct() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  _vopmula(auVar1,auVar2);
  auVar1 = _vopmsub(auVar2,auVar1);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0InnerProduct() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*param_1);
  auVar2 = _lqc2(*param_2);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  auVar1 = _qmfc2(SUB164(auVar1,0));
  return SUB164(auVar1,0);
}

sceVu0Normalize() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _vmul(auVar1,auVar1);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _vaddbc(auVar2,auVar2);
  _vsqrt(auVar2);
  uVar3 = _vwaitq();
  auVar2 = _vaddq(in_vf0,uVar3);
  _vdiv(in_vf0,0,auVar2,0);
  _vsub(in_vf0,in_vf0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0TransposeMatrix() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar2 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar3 = _pextuw(param_2[1],*param_2);
  auVar4 = _pextlw(SUB168(param_2[3],0),SUB168(param_2[2],0));
  auVar5 = _pextuw(param_2[3],param_2[2]);
  auVar1 = _pcpyld(auVar4,auVar2);
  auVar2 = _pcpyud(auVar2,auVar4);
  auVar4 = _pcpyld(auVar5,auVar3);
  auVar3 = _pcpyud(auVar3,auVar5);
  *param_1 = SUB164(auVar1,0);
  param_1[1] = SUB164(auVar1 >> 0x20,0);
  param_1[2] = SUB164(auVar1 >> 0x40,0);
  param_1[3] = SUB164(auVar1 >> 0x60,0);
  param_1[4] = SUB164(auVar2,0);
  param_1[5] = SUB164(auVar2 >> 0x20,0);
  param_1[6] = SUB164(auVar2 >> 0x40,0);
  param_1[7] = SUB164(auVar2 >> 0x60,0);
  param_1[8] = SUB164(auVar4,0);
  param_1[9] = SUB164(auVar4 >> 0x20,0);
  param_1[10] = SUB164(auVar4 >> 0x40,0);
  param_1[0xb] = SUB164(auVar4 >> 0x60,0);
  param_1[0xc] = SUB164(auVar3,0);
  param_1[0xd] = SUB164(auVar3 >> 0x20,0);
  param_1[0xe] = SUB164(auVar3 >> 0x40,0);
  param_1[0xf] = SUB164(auVar3 >> 0x60,0);
  return;
}

sceVu0InversMatrix() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  auVar5 = _lqc2(param_2[3]);
  auVar6 = _vmove(auVar5);
  auVar5 = _vsub(auVar5,auVar5);
  auVar8 = _vmove(auVar5);
  auVar5 = _qmfc2(SUB164(auVar5,0));
  auVar1 = _pextlw(SUB168(param_2[1],0),SUB168(*param_2,0));
  auVar2 = _pextuw(param_2[1],*param_2);
  auVar3 = _pextlw(SUB168(auVar5,0),SUB168(param_2[2],0));
  auVar4 = _pextuw(auVar5,param_2[2]);
  auVar5 = _pcpyld(auVar3,auVar1);
  auVar1 = _pcpyud(auVar1,auVar3);
  auVar2 = _pcpyld(auVar4,auVar2);
  auVar3 = _qmtc2(SUB164(auVar5,0));
  auVar4 = _qmtc2(SUB164(auVar1,0));
  auVar7 = _qmtc2(SUB164(auVar2,0));
  _vmulabc(auVar3,auVar6);
  _vmaddabc(auVar4,auVar6);
  auVar3 = _vmaddbc(auVar7,auVar6);
  auVar3 = _vsub(auVar8,auVar3);
  *param_1 = SUB164(auVar5,0);
  param_1[1] = SUB164(auVar5 >> 0x20,0);
  param_1[2] = SUB164(auVar5 >> 0x40,0);
  param_1[3] = SUB164(auVar5 >> 0x60,0);
  param_1[4] = SUB164(auVar1,0);
  param_1[5] = SUB164(auVar1 >> 0x20,0);
  param_1[6] = SUB164(auVar1 >> 0x40,0);
  param_1[7] = SUB164(auVar1 >> 0x60,0);
  param_1[8] = SUB164(auVar2,0);
  param_1[9] = SUB164(auVar2 >> 0x20,0);
  param_1[10] = SUB164(auVar2 >> 0x40,0);
  param_1[0xb] = SUB164(auVar2 >> 0x60,0);
  auVar5 = _sqc2(auVar3);
  *(undefined (*) [16])(param_1 + 0xc) = auVar5;
  return;
}

sceVu0DivVector() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  _vdiv(in_vf0,0,auVar2,0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

sceVu0DivVectorXYZ() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  _vdiv(in_vf0,0,auVar2,0);
  uVar3 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar3);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

sceVu0InterVector() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _lqc2(*param_4);
  auVar3 = _qmtc2(param_1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vmulabc(auVar1,auVar3);
  auVar1 = _vmaddbc(auVar2,auVar4);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

sceVu0AddVector() {
  Vector4 VVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2((undefined  [16])*param_2);
  auVar3 = _lqc2((undefined  [16])*param_3);
  auVar2 = _vadd(auVar2,auVar3);
  VVar1 = (Vector4)_sqc2(auVar2);
  *param_1 = VVar1;
  return;
}

sceVu0SubVector() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vsub(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0MulVector() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(*param_3);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0ScaleVector() {
  Vector4 VVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2((undefined  [16])*param_3);
  auVar3 = _qmtc2(param_1);
  auVar2 = _vmulbc(auVar2,auVar3);
  VVar1 = (Vector4)_sqc2(auVar2);
  *param_2 = VVar1;
  return;
}

sceVu0TransMatrix() {
  Vector4 VVar1;
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
  float fVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  
  auVar13 = _lqc2((undefined  [16])*tv);
  auVar14 = _lqc2((undefined  [16])m1->matrix[3]);
  fVar2 = m1->matrix[0].y;
  fVar3 = m1->matrix[0].z;
  fVar4 = m1->matrix[0].w;
  fVar5 = m1->matrix[1].x;
  fVar6 = m1->matrix[1].y;
  fVar7 = m1->matrix[1].z;
  fVar8 = m1->matrix[1].w;
  fVar9 = m1->matrix[2].x;
  fVar10 = m1->matrix[2].y;
  fVar11 = m1->matrix[2].z;
  fVar12 = m1->matrix[2].w;
  auVar13 = _vadd(auVar14,auVar13);
  m0->matrix[0].x = m1->matrix[0].x;
  m0->matrix[0].y = fVar2;
  m0->matrix[0].z = fVar3;
  m0->matrix[0].w = fVar4;
  m0->matrix[1].x = fVar5;
  m0->matrix[1].y = fVar6;
  m0->matrix[1].z = fVar7;
  m0->matrix[1].w = fVar8;
  m0->matrix[2].x = fVar9;
  m0->matrix[2].y = fVar10;
  m0->matrix[2].z = fVar11;
  m0->matrix[2].w = fVar12;
  VVar1 = (Vector4)_sqc2(auVar13);
  m0->matrix[3] = VVar1;
  return;
}

sceVu0CopyVector() {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2->y;
  fVar2 = param_2->z;
  fVar3 = param_2->w;
  param_1->x = param_2->x;
  param_1->y = fVar1;
  param_1->z = fVar2;
  param_1->w = fVar3;
  return;
}

sceVu0CopyMatrix() {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  uVar12 = param_2[0xc];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  return;
}

sceVu0FTOI4Vector() {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar1 = _vftoi4(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0FTOI0Vector() {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0ITOF4Vector() {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar1 = _vitof4(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0ITOF0Vector() {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*param_2);
  auVar1 = _vitof0(auVar1);
  auVar1 = _sqc2(auVar1);
  *param_1 = auVar1;
  return;
}

sceVu0UnitMatrix() {
  Vector4 VVar1;
  undefined in_vf0 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar2 = _vadd(auVar2,in_vf0);
  auVar3 = _vmr32(auVar2);
  auVar4 = _vmr32(auVar3);
  auVar5 = _vmr32(auVar4);
  VVar1 = (Vector4)_sqc2(auVar2);
  param_1->matrix[3] = VVar1;
  VVar1 = (Vector4)_sqc2(auVar3);
  param_1->matrix[2] = VVar1;
  VVar1 = (Vector4)_sqc2(auVar4);
  param_1->matrix[1] = VVar1;
  VVar1 = (Vector4)_sqc2(auVar5);
  param_1->matrix[0] = VVar1;
  return;
}

static _sceVu0ecossin() {
  long in_a3;
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined in_vf6 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  
  auVar2 = _lqc2(_S5432);
  auVar3 = _vmr32(in_vf6);
  auVar1 = _vaddbc(in_vf0,auVar3);
  auVar3 = _vmul(auVar3,auVar3);
  auVar1 = _vmulbc(auVar1,in_vf0);
  auVar4 = _vmulbc(auVar2,auVar3);
  auVar2 = _vsub(in_vf0,in_vf0);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar4 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar4);
  auVar3 = _vmulbc(auVar4,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar1,auVar3);
  auVar1 = _vaddbc(auVar2,auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vsubbc(in_vf0,auVar1);
  _vsqrt(auVar1);
  uVar5 = _vwaitq();
  auVar1 = _vaddq(in_vf0,uVar5);
  if (in_a3 == 0) {
    _vaddbc(auVar2,auVar1);
  }
  else {
    _vsubbc(auVar2,auVar1);
  }
  return;
}

sceVu0RotMatrixZ() {
  int iVar1;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar2 [16];
  undefined extraout_vf5 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar5 = _vmove(in_vf0);
  auVar6 = _vsub(auVar5,auVar5);
  auVar4 = _vmr32(auVar6);
  auVar5 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar5);
  auVar3 = _vaddbc(extraout_vf5,auVar5);
  _vsubbc(extraout_vf5,auVar5);
  auVar5 = _vaddbc(extraout_vf5,auVar5);
  iVar1 = 4;
  do {
    auVar2 = _lqc2(*(undefined (*) [16])param_3);
    _vmulabc(auVar3,auVar2);
    _vmaddabc(auVar5,auVar2);
    _vmaddabc(auVar4,auVar2);
    auVar2 = _vmaddbc(auVar6,auVar2);
    auVar2 = _sqc2(auVar2);
    *(undefined (*) [16])param_2 = auVar2;
    iVar1 = iVar1 + -1;
    param_3 = (long)(int)((undefined (*) [16])param_3)[1];
    param_2 = (long)(int)((undefined (*) [16])param_2)[1];
  } while (iVar1 != 0);
  return;
}

sceVu0RotMatrixX() {
  int iVar1;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined extraout_vf5 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar4 = _vaddbc(extraout_vf5,in_vf0);
  auVar6 = _vaddbc(extraout_vf5,in_vf0);
  auVar2 = _vsub(extraout_vf4,extraout_vf4);
  _vaddbc(extraout_vf5,auVar2);
  auVar5 = _vaddbc(extraout_vf5,auVar2);
  _vsubbc(extraout_vf5,auVar2);
  auVar2 = _vaddbc(extraout_vf5,auVar2);
  iVar1 = 4;
  do {
    auVar3 = _lqc2(*(undefined (*) [16])param_3);
    _vmulabc(auVar4,auVar3);
    _vmaddabc(auVar5,auVar3);
    _vmaddabc(auVar2,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    auVar3 = _sqc2(auVar3);
    *(undefined (*) [16])param_2 = auVar3;
    iVar1 = iVar1 + -1;
    param_3 = (long)(int)((undefined (*) [16])param_3)[1];
    param_2 = (long)(int)((undefined (*) [16])param_2)[1];
  } while (iVar1 != 0);
  return;
}

sceVu0RotMatrixY() {
  int iVar1;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined extraout_vf5 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  if (param_1 < 0.0) {
    param_1 = param_1 + 1.570796;
  }
  else {
    param_1 = 1.570796 - param_1;
  }
  _qmtc2(param_1);
  _sceVu0ecossin();
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  _vmove(extraout_vf5);
  auVar5 = _vaddbc(extraout_vf5,in_vf0);
  auVar6 = _vaddbc(extraout_vf5,in_vf0);
  auVar2 = _vsub(extraout_vf4,extraout_vf4);
  _vsubbc(extraout_vf5,auVar2);
  auVar4 = _vaddbc(extraout_vf5,auVar2);
  _vaddbc(extraout_vf5,auVar2);
  auVar2 = _vaddbc(extraout_vf5,auVar2);
  iVar1 = 4;
  do {
    auVar3 = _lqc2(*(undefined (*) [16])param_3);
    _vmulabc(auVar4,auVar3);
    _vmaddabc(auVar5,auVar3);
    _vmaddabc(auVar2,auVar3);
    auVar3 = _vmaddbc(auVar6,auVar3);
    auVar3 = _sqc2(auVar3);
    *(undefined (*) [16])param_2 = auVar3;
    iVar1 = iVar1 + -1;
    param_3 = (long)(int)((undefined (*) [16])param_3)[1];
    param_2 = (long)(int)((undefined (*) [16])param_2)[1];
  } while (iVar1 != 0);
  return;
}

sceVu0RotMatrix() {
  sceVu0RotMatrixZ(param_3[2]);
  sceVu0RotMatrixY(param_3[1],param_1,param_1);
  sceVu0RotMatrixX(*param_3,param_1,param_1);
  return;
}

sceVu0ClampVector() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar3 = _lqc2(*param_4);
  auVar1 = _qmtc2(param_1);
  auVar2 = _qmtc2(param_2);
  auVar1 = _vmaxbc(auVar3,auVar1);
  auVar1 = _vminibc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_3 = auVar1;
  return;
}

sceVu0CameraMatrix() {
  undefined auStack_b0 [32];
  undefined auStack_90 [32];
  undefined auStack_70 [16];
  
  sceVu0UnitMatrix((Matrix4x4 *)auStack_b0);
  sceVu0OuterProduct(auStack_70,param_4,param_3);
  sceVu0Normalize(auStack_b0,auStack_70);
  sceVu0Normalize(auStack_90,param_3);
  sceVu0OuterProduct(auStack_b0 + 0x10,auStack_90,auStack_b0);
  sceVu0TransMatrix((Matrix4x4 *)auStack_b0,(Matrix4x4 *)auStack_b0,param_2);
  sceVu0InversMatrix(param_1,auStack_b0);
  return;
}

sceVu0NormalLightMatrix() {
  int iVar1;
  Vector4 VStack_60;
  
  sceVu0ScaleVector(-1.0,&VStack_60,param_2);
  sceVu0Normalize(param_1,&VStack_60);
  sceVu0ScaleVector(-1.0,&VStack_60,param_3);
  iVar1 = (int)param_1;
  sceVu0Normalize(iVar1 + 0x10,&VStack_60);
  sceVu0ScaleVector(-1.0,&VStack_60,param_4);
  sceVu0Normalize(iVar1 + 0x20,&VStack_60);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  sceVu0TransposeMatrix(param_1,param_1);
  return;
}

sceVu0LightColorMatrix() {
  sceVu0CopyVector(param_1,param_2);
  sceVu0CopyVector(param_1 + 1,param_3);
  sceVu0CopyVector(param_1 + 2,param_4);
  sceVu0CopyVector(param_1 + 3,param_5);
  return;
}

sceVu0ViewScreenMatrix() {
  float param_9;
  Matrix4x4 local_a0;
  
  local_a0.matrix[2].z = (param_9 * param_8 * (-param_6 + param_7)) / (-param_8 + param_9);
  local_a0.matrix[3].z = (-param_7 * param_8 + param_6 * param_9) / (-param_8 + param_9);
  sceVu0UnitMatrix(param_9_00);
  param_9_00->matrix[1].y = param_1;
  param_9_00->matrix[0].x = param_1;
  param_9_00->matrix[2].z = 0.0;
  param_9_00->matrix[3].w = 0.0;
  param_9_00->matrix[2].w = 1.0;
  param_9_00->matrix[3].z = 1.0;
  sceVu0UnitMatrix(&local_a0);
  local_a0.matrix[0].x = param_2;
  local_a0.matrix[1].y = param_3;
  local_a0.matrix[3].x = param_4;
  local_a0.matrix[3].y = param_5;
  sceVu0MulMatrix(param_9_00,&local_a0,param_9_00);
  return;
}

sceVu0DropShadowMatrix() {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_6 != 0) {
    fVar1 = *param_5;
    fVar4 = param_5[1];
    fVar3 = param_5[2];
    param_4[3] = param_1;
    param_4[7] = param_2;
    param_4[0xb] = param_3;
    param_4[0xc] = -fVar1;
    param_4[0xd] = -fVar4;
    param_4[0xe] = -fVar3;
    fVar2 = 1.0 - (param_1 * fVar1 + param_2 * fVar4 + param_3 * fVar3);
    param_4[4] = param_2 * fVar1;
    param_4[1] = param_1 * fVar4;
    param_4[8] = param_3 * fVar1;
    param_4[9] = param_3 * fVar4;
    param_4[0xf] = fVar2 - 1.0;
    *param_4 = param_1 * fVar1 + fVar2;
    param_4[5] = param_2 * fVar4 + fVar2;
    param_4[10] = param_3 * fVar3 + fVar2;
    param_4[2] = param_1 * fVar3;
    param_4[6] = param_2 * fVar3;
    return;
  }
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  param_4[3] = 0.0;
  param_4[7] = 0.0;
  param_4[0xb] = 0.0;
  fVar2 = param_1 * fVar3 + param_2 * fVar4 + param_3 * fVar5;
  fVar1 = -1.0 / fVar2;
  param_4[0xf] = fVar1 * -fVar2;
  *param_4 = fVar1 * (param_1 * fVar3 - fVar2);
  param_4[4] = fVar1 * param_2 * fVar3;
  param_4[8] = fVar1 * param_3 * fVar3;
  param_4[0xc] = fVar1 * -fVar3;
  param_4[1] = fVar1 * param_1 * fVar4;
  param_4[5] = fVar1 * (param_2 * fVar4 - fVar2);
  param_4[9] = fVar1 * param_3 * fVar4;
  param_4[0xd] = fVar1 * -fVar4;
  param_4[2] = fVar1 * param_1 * fVar5;
  param_4[6] = fVar1 * param_2 * fVar5;
  param_4[10] = fVar1 * (param_3 * fVar5 - fVar2);
  param_4[0xe] = fVar1 * -fVar5;
  return;
}

sceVu0RotTransPersN() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  do {
    auVar5 = _lqc2(*param_3);
    _vmulabc(auVar1,auVar5);
    _vmaddabc(auVar2,auVar5);
    _vmaddabc(auVar3,auVar5);
    auVar5 = _vmaddbc(auVar4,auVar5);
    _vdiv(in_vf0,0,auVar5,0);
    uVar7 = _vwaitq();
    auVar5 = _vmulq(auVar5,uVar7);
    auVar6 = _vftoi4(auVar5);
    if (param_5 != 0) {
      auVar6 = _vftoi0(auVar5);
    }
    auVar5 = _sqc2(auVar6);
    *param_1 = auVar5;
    param_4 = param_4 + -1;
    param_3 = param_3[1];
    param_1 = param_1[1];
  } while (param_4 != 0);
  return;
}

sceVu0RotTransPers() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  
  auVar1 = _lqc2(*param_2);
  auVar2 = _lqc2(param_2[1]);
  auVar3 = _lqc2(param_2[2]);
  auVar4 = _lqc2(param_2[3]);
  auVar5 = _lqc2(*param_3);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  _vdiv(in_vf0,0,auVar1,0);
  uVar6 = _vwaitq();
  auVar1 = _vmulq(auVar1,uVar6);
  auVar2 = _vftoi4(auVar1);
  if (param_4 != 0) {
    auVar2 = _vftoi0(auVar1);
  }
  auVar1 = _sqc2(auVar2);
  *param_1 = auVar1;
  return;
}

sceVu0CopyVectorXYZ() {
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

sceVu0InterVectorXYZ() {
  undefined in_vf0 [16];
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _lqc2(*param_4);
  auVar3 = _qmtc2(param_1);
  _vmove(auVar1);
  auVar4 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vsub(auVar4,auVar3);
  _vmulabc(auVar1,auVar3);
  auVar1 = _vmaddbc(auVar2,auVar4);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

sceVu0ScaleVectorXYZ() {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*param_3);
  auVar2 = _qmtc2(param_1);
  auVar1 = _vmulbc(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *param_2 = auVar1;
  return;
}

sceVu0ClipScreen() {
  ulong uVar1;
  undefined4 uVar2;
  undefined in_vf0 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar3 = _vsub(in_vf0,in_vf0);
  auVar5 = _lqc2(*param_1);
  auVar4 = _qmtc2(0x45800000);
  uVar2 = _ctc2(0);
  _vsub(auVar5,auVar3);
  _vsub(auVar4,auVar5);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(uVar2);
  return uVar1 & 0xc0;
}

sceVu0ClipScreen3() {
  ulong uVar1;
  undefined4 uVar2;
  undefined in_vf0 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  auVar3 = _vsub(in_vf0,in_vf0);
  auVar4 = _lqc2(*param_1);
  auVar6 = _lqc2(*param_2);
  auVar7 = _lqc2(*param_3);
  auVar5 = _qmtc2(0x45800000);
  uVar2 = _ctc2(0);
  _vsub(auVar4,auVar3);
  _vsub(auVar5,auVar4);
  _vsub(auVar6,auVar3);
  _vsub(auVar5,auVar6);
  _vsub(auVar7,auVar3);
  _vsub(auVar5,auVar7);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  uVar1 = _cfc2(uVar2);
  return uVar1 & 0xc0;
}

sceVu0ClipAll() {
  ulong uVar1;
  undefined4 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  auVar7 = _lqc2(*param_4);
  auVar3 = _lqc2(*param_3);
  auVar4 = _lqc2(param_3[1]);
  auVar5 = _lqc2(param_3[2]);
  auVar6 = _lqc2(param_3[3]);
  auVar8 = _lqc2(*param_1);
  auVar9 = _lqc2(*param_2);
  _lqc2(*param_1);
  _lqc2(*param_2);
  do {
    _vmulabc(auVar3,auVar7);
    _vmaddabc(auVar4,auVar7);
    _vmaddabc(auVar5,auVar7);
    auVar7 = _vmaddbc(auVar6,auVar7);
    auVar10 = _vmulbc(auVar8,auVar7);
    auVar11 = _vmulbc(auVar9,auVar7);
    _vnop();
    _vnop();
    uVar2 = _ctc2(0);
    _vsub(auVar7,auVar10);
    _vsub(auVar11,auVar7);
    _vmove(auVar8);
    _vmove(auVar9);
    _vnop();
    param_4 = param_4[1];
    auVar7 = _lqc2(*param_4);
    param_5 = param_5 + -1;
    uVar1 = _cfc2(uVar2);
    if ((uVar1 & 0xc0) == 0) {
      return 0;
    }
  } while (param_5 != 0);
  return 1;
}

sceVpu0Reset() {
  undefined8 uVar1;
  undefined4 in_vc12;
  
  REG_VIF0_MARK = 0;
  REG_VIF0_ERR = 0;
  REG_VIF0_FBRST = 1;
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 2);
  SYNC(0x10);
  REG_VIF0_FIFO = (int)init_vif_regs_126._0_8_;
  DAT_10004004 = (int)((ulong)init_vif_regs_126._0_8_ >> 0x20);
  DAT_10004008 = init_vif_regs_126._8_4_;
  DAT_1000400c = init_vif_regs_126._12_4_;
  REG_VIF0_FIFO = init_vif_regs_126._16_4_;
  DAT_10004004 = init_vif_regs_126._20_4_;
  DAT_10004008 = init_vif_regs_126._24_4_;
  DAT_1000400c = init_vif_regs_126._28_4_;
  return;
}
