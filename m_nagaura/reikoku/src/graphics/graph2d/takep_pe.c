// STATUS: NOT STARTED

static int pe_callflg = 0;
sceVu0IVECTOR particle_eff_col = {
	/* [0] = */ 100,
	/* [1] = */ 100,
	/* [2] = */ 200,
	/* [3] = */ 0
};
u_char eye_light_flg = 0;
sceVu0FVECTOR l_eye_pos = {
	/* [0] = */ 23087.f,
	/* [1] = */ -687.f,
	/* [2] = */ 12135.f,
	/* [3] = */ 0.f
};
sceVu0FVECTOR r_eye_pos = {
	/* [0] = */ 23104.f,
	/* [1] = */ -687.f,
	/* [2] = */ 12103.f,
	/* [3] = */ 0.f
};
PARTICLE_EFF_OBJ dummy_pe_obj = CCC_TYPE_LOOKUP_FAILED;
static int pe_active_time;
static u_int pe_index;
static int rem_pe_ix;

void GetBetweenABVecUnitLen(float *out_a2bv, float *out_unit_a2bv, float *out_len, float *in_av, float *in_bv) {
	sceVu0FVECTOR temp;
	
  float *pfVar1;
  float fVar2;
  float temp [4];
  
  pfVar1 = temp;
  if (out_a2bv != (float *)0x0) {
    pfVar1 = out_a2bv;
  }
  sceVu0SubVector(pfVar1,in_bv,in_av);
  if (out_len != (float *)0x0) {
    fVar2 = (float)sceVu0InnerProduct(pfVar1,pfVar1);
    fVar2 = SgSqrtf(fVar2);
    *out_len = fVar2;
  }
  if (out_unit_a2bv != (float *)0x0) {
    sceVu0Normalize(out_unit_a2bv,pfVar1);
  }
  return;
}

void SetPrePEImage(PARTICLE_EFF_OBJ *obj) {
	PARTICLE_EFF_OBJ *temppep;
	PARTICLE_EFF_OBJ *prepep;
	PARTICLE_EFF_OBJ *temppointer;
	int tempalpha;
	
  PARTICLE_EFF_OBJ *pPVar1;
  ST_PEOBJ SVar2;
  PARTICLE_EFF_OBJ *pPVar3;
  PARTICLE_EFF_OBJ *pPVar4;
  PARTICLE_EFF_OBJ *pPVar5;
  PARTICLE_EFF_OBJ *pPVar6;
  int iVar7;
  
  pPVar1 = (PARTICLE_EFF_OBJ *)obj->underpe;
  SVar2 = obj->state;
  iVar7 = (int)((float)obj->alphabl * 0.75);
  pPVar3 = obj;
  pPVar4 = pPVar1;
  do {
    pPVar6 = pPVar4;
    pPVar5 = pPVar3;
    iVar7 = (int)((float)iVar7 * 0.75);
    pPVar6->alphabl = iVar7;
    pPVar3 = pPVar6;
    pPVar4 = (PARTICLE_EFF_OBJ *)pPVar6->underpe;
  } while ((PARTICLE_EFF_OBJ *)pPVar6->underpe != (PARTICLE_EFF_OBJ *)0x0);
  pPVar6->scrvec[0] = obj->scrvec[0];
  obj->underpe = pPVar6;
  iVar7 = obj->scrvec[1];
  pPVar6->underpe = pPVar1;
  pPVar6->scrvec[1] = iVar7;
  pPVar5->underpe = (void *)0x0;
  iVar7 = obj->scrvec[2];
  pPVar6->state = SVar2;
  pPVar6->scrvec[2] = iVar7;
  pPVar6->scrvec[3] = obj->scrvec[3];
  pPVar6->pe_width = obj->pe_width;
  pPVar6->alphabl = (int)((float)obj->alphabl * 0.75);
  return;
}

int InitPrePEImage(PARTICLE_EFF_OBJ *obj, int pe_num) {
	int i;
	PARTICLE_EFF_OBJ *temp;
	
  PARTICLE_EFF_OBJ *in_v1_lo;
  int iVar1;
  
  iVar1 = 2;
  do {
    obj->underpe = in_v1_lo;
    iVar1 = iVar1 + -1;
    in_v1_lo->pe_width = 0;
    pe_num = pe_num + -1;
    obj = in_v1_lo;
  } while (-1 < iVar1);
  in_v1_lo->underpe = (void *)0x0;
  return pe_num;
}

int SetPEObjPos(PARTICLE_EFF_OBJ *obj) {
	sceVu0FVECTOR c2sv_move;
	
  float *pfVar1;
  float c2sv_move [4];
  
  pfVar1 = obj->c2ov_move;
  obj->nowz = obj->nowz + obj->steplen;
  sceVu0AddVector((Vector4 *)pfVar1,(Vector4 *)pfVar1,(Vector4 *)obj->c2ov_step);
  sceVu0ScaleVector((obj->ka * obj->nowz + obj->kb) * obj->nowz + obj->c2slen,(Vector4 *)c2sv_move,
                    (Vector4 *)obj->c2sv_unit);
  SgSqrtf(c2sv_move[0] * c2sv_move[0] + c2sv_move[1] * c2sv_move[1] + c2sv_move[2] * c2sv_move[2]);
  sceVu0AddVector((Vector4 *)obj->pos,(Vector4 *)c2sv_move,(Vector4 *)pfVar1);
  obj->pos[3] = 1.0;
  return 1;
}

void MakeRandomVec(float *output, int m) {
  int iVar1;
  
  iVar1 = rand();
  if (iVar1 < 0x40000000) {
    iVar1 = rand();
    iVar1 = -iVar1;
    if (m == 0) {
      trap(7);
    }
  }
  else {
    iVar1 = rand();
    if (m == 0) {
      trap(7);
    }
  }
  *output = (float)(iVar1 % m);
  iVar1 = rand();
  if (iVar1 < 0x40000000) {
    iVar1 = rand();
    iVar1 = -iVar1;
    if (m == 0) {
      trap(7);
    }
  }
  else {
    iVar1 = rand();
    if (m == 0) {
      trap(7);
    }
  }
  output[1] = (float)(iVar1 % m);
  iVar1 = rand();
  if (iVar1 < 0x40000000) {
    iVar1 = rand();
    iVar1 = -iVar1;
    if (m == 0) {
      trap(7);
    }
  }
  else {
    iVar1 = rand();
    if (m == 0) {
      trap(7);
    }
  }
  output[2] = (float)(iVar1 % m);
  return;
}

void InitPEObj(PARTICLE_EFF_OBJ *obj, float *ov, float *sv, float *tempgv) {
	int temptime;
	float randrate;
	float tempkk;
	float hhh;
	float o2slen;
	sceVu0FVECTOR o2sv_unit;
	sceVu0FVECTOR o2gv_unit;
	sceVu0FVECTOR o2gv;
	sceVu0FVECTOR o2sv;
	sceVu0FVECTOR cv;
	sceVu0FVECTOR o2cv;
	sceVu0FVECTOR c2sv;
	sceVu0FVECTOR gv;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float o2sv_unit [4];
  float o2gv_unit [4];
  float o2gv [4];
  float o2sv [4];
  float cv [4];
  float o2cv [4];
  float c2sv [4];
  float gv [4];
  float o2slen;
  
  MakeRandomVec(o2sv_unit,100);
  sceVu0AddVector((Vector4 *)gv,(Vector4 *)tempgv,(Vector4 *)o2sv_unit);
  fVar4 = 30.0;
  GetBetweenABVecUnitLen(o2gv,(float *)(Vector4 *)o2gv_unit,(float *)0x0,ov,(float *)(Vector4 *)gv);
  GetBetweenABVecUnitLen(o2sv,o2sv_unit,&o2slen,ov,sv);
  fVar3 = (float)sceVu0InnerProduct((Vector4 *)o2gv_unit,o2sv_unit);
  sceVu0ScaleVector(fVar3 * o2slen,(Vector4 *)o2cv,(Vector4 *)o2gv_unit);
  fVar3 = (float)sceVu0InnerProduct((Vector4 *)o2cv,(Vector4 *)o2cv);
  fVar3 = SgSqrtf(fVar3);
  obj->c2olen = fVar3;
  sceVu0AddVector((Vector4 *)cv,(Vector4 *)ov,(Vector4 *)o2cv);
  sceVu0CopyVector((Vector4 *)obj->c2ov_move,(Vector4 *)cv);
  GetBetweenABVecUnitLen(c2sv,obj->c2sv_unit,&obj->c2slen,(float *)(Vector4 *)cv,sv);
  fVar5 = obj->c2olen * DAT_00356290;
  iVar1 = rand();
  fVar3 = obj->c2olen;
  fVar5 = -fVar5 + -(fVar3 * 0.5 * (float)iVar1 * 4.656613e-10);
  fVar4 = (((obj->c2slen * fVar3 + fVar5 * (fVar4 - obj->c2slen)) / fVar5) / fVar3) /
          (fVar3 - fVar5);
  obj->ka = fVar4;
  obj->kb = -(fVar4 * (fVar5 + fVar3));
  iVar1 = rand();
  fVar4 = obj->c2olen;
  iVar1 = iVar1 % 0x28 + 0x28;
  obj->m_time = iVar1;
  if (fVar4 < 1000.0) {
    iVar2 = (int)((float)iVar1 * 0.5);
    obj->m_time = iVar2;
    if (100.0 < fVar4) {
      obj->m_time = iVar2 + (int)(((float)(iVar1 - iVar2) * fVar4) / 1000.0);
    }
  }
  obj->steplen = fVar4 / (float)obj->m_time;
  sceVu0ScaleVector(-1.0 / (float)obj->m_time,(Vector4 *)obj->c2ov_step,(Vector4 *)o2cv);
  obj->time = 0;
  obj->state = ST_WAIT2;
  obj->alphabl = 0;
  obj->pe_width = 0;
  obj->nowz = 0.0;
  return;
}

void SetPEObjSprSize(PARTICLE_EFF_OBJ *obj) {
	float farpoint;
	
  float fVar1;
  
  fVar1 = obj->c2olen * DAT_00356294;
  obj->pe_width = (int)((((obj->nowz + fVar1) - obj->c2olen) / fVar1) * 800.0);
  return;
}

void SetPEObjAlphaBl(PARTICLE_EFF_OBJ *obj) {
  if (obj->time != 0) {
    if (obj->m_time == 0) {
      trap(7);
    }
    obj->alphabl = (obj->time << 5) / obj->m_time + 0x10;
    return;
  }
  obj->alphabl = 0;
  return;
}

int CtrlPEObj(PARTICLE_EFF_OBJ *obj) {
	ST_PEOBJ state;
	
  ST_PEOBJ SVar1;
  
  switch(obj->state) {
  case ST_WAIT1:
    SVar1 = ST_GO_AROUND;
    break;
  case ST_GO_AROUND:
    SVar1 = ST_WAIT2;
    obj->time = 0;
    break;
  case ST_WAIT2:
    if (obj->time != 0) {
      obj->time = obj->time + -1;
      return 0;
    }
    obj->state = ST_GO_CAMERA;
    obj->time = obj->m_time;
    return 0;
  case ST_GO_CAMERA:
    if (obj->time != 0) {
      SetPrePEImage(obj);
      SetPEObjPos(obj);
      SetPEObjSprSize(obj);
      SetPEObjAlphaBl(obj);
      obj->time = obj->time + -1;
      return 1;
    }
    obj->state = ST_FINISH_PE;
    SetPrePEImage(obj);
    return 0;
  case ST_FINISH_PE:
    SetPrePEImage(obj);
    return 0;
  default:
    goto LAB_0021652c;
  }
  obj->state = SVar1;
LAB_0021652c:
  return 0;
}

void SortRegisterPEObj(PARTICLE_EFF_OBJ *obj) {
	PARTICLE_EFF_OBJ *temppe;
	int flg;
	
  bool bVar1;
  PARTICLE_EFF_OBJ *pPVar2;
  PARTICLE_EFF_OBJ *pPVar3;
  PARTICLE_EFF_OBJ *pPVar4;
  
  bVar1 = true;
  pPVar4 = &dummy_pe_obj;
  if (dummy_pe_obj.nextpe != (void *)0x0) {
    pPVar3 = (PARTICLE_EFF_OBJ *)dummy_pe_obj.nextpe;
    pPVar2 = obj;
    if (*(int *)((int)dummy_pe_obj.nextpe + 0x18) <= obj->scrvec[2]) {
      do {
        pPVar4 = pPVar3;
        pPVar3 = (PARTICLE_EFF_OBJ *)pPVar4->nextpe;
        if (pPVar3 == (PARTICLE_EFF_OBJ *)0x0) goto LAB_0021659c;
      } while (pPVar3->scrvec[2] <= obj->scrvec[2]);
      pPVar4->nextpe = obj;
      pPVar2 = (PARTICLE_EFF_OBJ *)dummy_pe_obj.nextpe;
    }
    dummy_pe_obj.nextpe = pPVar2;
    bVar1 = false;
    obj->nextpe = pPVar3;
  }
LAB_0021659c:
  if (bVar1) {
    pPVar4->nextpe = obj;
    obj->nextpe = (void *)0x0;
  }
  return;
}

Q_WORDDATA* ParticleEffectInTakingPicture(Q_WORDDATA *qd, u_int b_num) {
  return qd + 1;
}

Q_WORDDATA* SetPESpritePacket(Q_WORDDATA *qd, int *col, int *centervec, int pe_width, int albl) {
  int iVar1;
  ushort uVar2;
  
  qd->ui32[0] = 0;
  qd->ui32[1] = 0;
  qd->ui32[2] = 0;
  qd->ui32[3] = 0;
  qd[1].iv[0] = *col;
  *(int *)((int)qd + 0x14) = col[1];
  iVar1 = col[2];
  *(int *)((int)qd + 0x1c) = albl;
  *(int *)((int)qd + 0x18) = iVar1;
  qd[2].ui32[0] = *centervec - pe_width;
  *(int *)((int)qd + 0x24) = centervec[1] - (pe_width >> 1);
  iVar1 = centervec[2];
  *(undefined4 *)((int)qd + 0x2c) = 0;
  *(int *)((int)qd + 0x28) = iVar1;
  qd[3].ui32[0] = (uint)DAT_0026c40c << 4;
  uVar2 = DAT_0026c40e;
  *(undefined4 *)((int)qd + 0x38) = 0;
  *(undefined4 *)((int)qd + 0x3c) = 0;
  *(uint *)((int)qd + 0x34) = (uint)uVar2 << 4;
  qd[4].iv[0] = *col;
  *(int *)((int)qd + 0x44) = col[1];
  iVar1 = col[2];
  *(int *)((int)qd + 0x4c) = albl;
  *(int *)((int)qd + 0x48) = iVar1;
  qd[5].ui32[0] = *centervec + pe_width;
  *(int *)((int)qd + 0x54) = centervec[1] + (pe_width >> 1);
  iVar1 = centervec[2];
  *(undefined4 *)((int)qd + 0x5c) = 0;
  *(int *)((int)qd + 0x58) = iVar1;
  return qd + 6;
}

void SetCenterGravOfFVECTOR(float *input, sceVu0FVECTOR *vec, u_int num) {
	int i;
	
  uint uVar1;
  float fVar2;
  
  uVar1 = 0;
  *input = 0.0;
  input[1] = 0.0;
  input[2] = 0.0;
  if (num != 0) {
    do {
      uVar1 = uVar1 + 1;
      sceVu0AddVector((Vector4 *)input,(Vector4 *)input,(Vector4 *)vec);
      vec = (float (*) [4])((Vector4 *)vec + 1);
    } while (uVar1 < num);
  }
  if ((int)num < 0) {
    fVar2 = (float)(num & 1 | num >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)num;
  }
  sceVu0ScaleVector(1.0 / fVar2,(Vector4 *)input,(Vector4 *)input);
  return;
}

void GetA2BLoadVector(float *out_v, float *fr_v, float *to_v, float rate) {
	sceVu0FVECTOR temp;
	
  float temp [4];
  
  sceVu0SubVector(temp,to_v,fr_v);
  sceVu0ScaleVector(rate,(Vector4 *)temp,(Vector4 *)temp);
  sceVu0AddVector((Vector4 *)out_v,(Vector4 *)fr_v,(Vector4 *)temp);
  return;
}

void CallParticleEffect(u_char ene_id) {
  return;
}

void StopParticleEffect() {
  pe_callflg = 0;
  return;
}

void SetParticleEffect() {
	int n;
	u_int start_pktaddr;
	u_int end_pktaddr;
	sceVu0FMATRIX mat;
	
  int iVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  int iVar5;
  Q_WORDDATA *pQVar6;
  float mat [4] [4];
  
  if (pe_callflg != 0) {
    Reserve2DPacket(0x1000);
    pQVar3 = pbuf;
    iVar1 = ndpkt;
    pQVar2 = pbuf + ndpkt;
    pQVar2->ui32[0] = 0;
    pQVar2->ui32[1] = 0;
    pQVar2->ui32[2] = 0;
    pQVar2->ui32[3] = 0;
    pQVar6 = pQVar3 + ndpkt + 1;
    pQVar6->ul64[0] = 0x3000000000000001;
    pQVar6->ul64[1] = 0xe76;
    pQVar3[ndpkt + 2].ul64[0] = DAT_0026c400;
    iVar5 = ndpkt + 4;
    pQVar2 = pQVar3 + ndpkt + 3;
    pQVar2->ui32[0] = 0x161;
    pQVar2->ui32[1] = 0;
    pQVar2->ui32[2] = 0;
    pQVar2->ui32[3] = 0;
    ndpkt = ndpkt + 5;
    pQVar3[iVar5].ul64[1] = 0x42;
    pQVar3[iVar5].ul64[0] = 0x44;
    pQVar3 = ParticleEffectInTakingPicture(pQVar3 + ndpkt,pe_index);
    uVar4 = (uint)((int)pQVar3 - (int)pQVar6) >> 4;
    pbuf[iVar1].ui32[0] = uVar4 + 0x70000000;
    ndpkt = iVar1 + uVar4 + 1;
    pe_active_time = pe_active_time + -1;
    if (pe_active_time == 0) {
      pe_callflg = 0;
    }
  }
  return;
}

void CallEyeLight(sceVu0FVECTOR *lpos, sceVu0FVECTOR *rpos) {
  l_eye_pos[3] = 1.0;
  eye_light_flg = '\x01';
  r_eye_pos[3] = 1.0;
  return;
}

void StopEyeLight() {
  eye_light_flg = '\0';
  return;
}

void EyeLightCtrl() {
	int i;
	int n;
	int w;
	u_int start_pktaddr;
	u_int end_pktaddr;
	sceVu0FMATRIX mat;
	sceVu0IVECTOR scr[2];
	sceVu0IVECTOR col;
	sceVu0FVECTOR vec;
	Q_WORDDATA *qd;
	
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  Q_WORDDATA *pQVar4;
  uint uVar5;
  int (*paiVar6) [4];
  Q_WORDDATA *pQVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float mat [4] [4];
  int scr [2] [4];
  int col [4];
  float vec [4];
  
  memset(col,0,0x10);
  col[0] = 200;
  if (eye_light_flg != '\0') {
    sceVu0RotTransPers(scr,0x303860,0x343090,1);
    iVar8 = 1;
    sceVu0RotTransPers(scr[1],0x303860,0x3430a0,1);
    bVar1 = false;
    paiVar6 = scr;
    do {
      iVar8 = iVar8 + -1;
      piVar2 = *paiVar6;
      if (0x8000 < (*paiVar6)[0] - 0x4000U) {
        bVar1 = true;
      }
      if (0x8000 < (*paiVar6)[1] - 0x4000U) {
        bVar1 = true;
      }
      paiVar6 = paiVar6[1];
      if (0xffff00 < piVar2[2] - 0xffU) {
        bVar1 = true;
      }
    } while (-1 < iVar8);
    if (!bVar1) {
      fVar10 = 300.0;
      Reserve2DPacket(0x1000);
      iVar8 = ndpkt;
      pQVar4 = pbuf + ndpkt;
      pQVar7 = pbuf + ndpkt + 1;
      pQVar4->ui32[0] = 0;
      pQVar4->ui32[1] = 0;
      pQVar4->ui32[2] = 0;
      pQVar4->ui32[3] = 0;
      iVar9 = 1;
      ndpkt = ndpkt + 1;
      pQVar7->ul64[0] = 0x3000000000000001;
      pQVar7->ul64[1] = 0xe76;
      uVar3 = DAT_0026c400;
      pQVar7[2].ui32[0] = 0x161;
      *(undefined4 *)((int)pQVar7 + 0x24) = 0;
      *(undefined4 *)((int)pQVar7 + 0x28) = 0;
      *(undefined4 *)((int)pQVar7 + 0x2c) = 0;
      pQVar7[1].ul64[0] = uVar3;
      pQVar4 = pQVar7 + 5;
      pQVar7[3].ul64[0] = 0x44;
      *(undefined8 *)((int)pQVar7 + 0x38) = 0x42;
      pQVar7[4].ul64[0] = 0x60ab400000008002;
      *(undefined8 *)((int)pQVar7 + 0x48) = 0x513513;
      paiVar6 = scr;
      do {
        iVar9 = iVar9 + -1;
        pQVar4 = SetPESpritePacket(pQVar4,col,(int *)paiVar6,
                                   (int)(((float)(*paiVar6)[2] * fVar10) / 4000.0),0x50);
        paiVar6 = paiVar6[1];
      } while (-1 < iVar9);
      uVar5 = (uint)((int)pQVar4 - (int)pQVar7) >> 4;
      ndpkt = iVar8 + uVar5 + 1;
      pbuf[iVar8].ui32[0] = uVar5 + 0x70000000;
    }
  }
  return;
}
