// STATUS: NOT STARTED


void GetSquare(sceVu0FVECTOR *v0, sceVu0FVECTOR *v1) {
  Vector4 VVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2((undefined  [16])*v0);
  auVar3 = _lqc2((undefined  [16])*v0);
  auVar2 = _vmul(auVar2,auVar3);
  VVar1 = (Vector4)_sqc2(auVar2);
  *v1 = VVar1;
  return;
}

float GetDist(float x, float z) {
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	
  float v0 [4];
  float v1 [4];
  
  v0[0] = ABS(x);
  v0[2] = ABS(z);
  v0[1] = 0.0;
  v0[3] = 0.0;
  GetSquare((Vector4 *)v0,(Vector4 *)v1);
  return SQRT(v1[0] + v1[2]);
}

float GetDistV(float *p0, float *p1) {
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	
  Vector4 v0;
  Vector4 v1;
  
  v0.y = 0.0;
  v0.w = 0.0;
  v0.z = ABS(p0[2] - p1[2]);
  v0.x = ABS(*p0 - *p1);
  GetSquare(&v0,&v1);
  return SQRT(v1.x + v1.z);
}

float GetDistV2(float *p0, float *p1) {
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	
  float v0 [4];
  float v1 [4];
  
  v0[0] = ABS(*p0 - *p1);
  v0[2] = ABS(p0[2] - p1[2]);
  GetSquare((Vector4 *)v0,(Vector4 *)v1);
  v0[0] = SQRT(v1[0] + v1[2]);
  v0[2] = ABS(p0[1] - p1[1]);
  GetSquare((Vector4 *)v0,(Vector4 *)v1);
  return SQRT(v1[0] + v1[2]);
}

void RotFvector(float *rot, float *tv) {
	sceVu0FMATRIX work;
	sceVu0FMATRIX rot_matrix;
	
  float fVar1;
  Matrix4x4 work;
  Matrix4x4 rot_matrix;
  
  sceVu0UnitMatrix(&work);
  if (rot[2] == 0.0) {
    fVar1 = *rot;
  }
  else {
    sceVu0RotMatrixZ(&rot_matrix,&work);
    sceVu0ApplyMatrix((Vector4 *)tv,&rot_matrix,(Vector4 *)tv);
    fVar1 = *rot;
  }
  if (fVar1 == 0.0) {
    fVar1 = rot[1];
  }
  else {
    sceVu0RotMatrixX(&rot_matrix,&work);
    sceVu0ApplyMatrix((Vector4 *)tv,&rot_matrix,(Vector4 *)tv);
    fVar1 = rot[1];
  }
  if (fVar1 != 0.0) {
    sceVu0RotMatrixY(&rot_matrix,&work);
    sceVu0ApplyMatrix((Vector4 *)tv,&rot_matrix,(Vector4 *)tv);
  }
  return;
}
