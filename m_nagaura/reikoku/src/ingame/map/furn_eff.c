// STATUS: NOT STARTED

FURN_EFCT_FIRE fefct_fire[0] = {
};
FURN_EFCT_SUNSHINE fefct_sunshine[0] = {
};
FURN_EFCT_DEFORM fefct_deform[0] = {
};

void FurnEfctSet(FURN_WRK *fwp) {
	float *pos_top;
	int fewrk_no;
	
  int iVar1;
  int fewrk_no_00;
  void *pvVar2;
  int fewrk_no;
  
  if (((((byte)(&DAT_0033773f)[(uint)(ushort)fwp->id * 0x12] < 4) &&
       ((furn_attr_flg[(ushort)fwp->id].flg & 4) == 0)) &&
      (fewrk_no_00 = FurnEfctGetFefct(), fewrk_no_00 != -1)) &&
     ((iVar1 = (uint)(ushort)fwp->id * 0x12, (&DAT_0033773f)[iVar1] == '\x02' &&
      ((byte)(&DAT_00337740)[iVar1] < 3)))) {
    iVar1 = (uint)(byte)(&DAT_00337740)[iVar1] * 0x34;
    FurnEfctSetUse(fwp,(float *)(&fefct_sunshine + iVar1),fewrk_no_00);
    FurnEfctSetPos1(fwp,(float *)(iVar1 + 0x33a08c));
    FurnEfctSetRot0(fwp,(float *)(iVar1 + 0x33a098));
    pvVar2 = SetEffects(0x1f,2);
    fefct_wrk[fewrk_no_00].addr = pvVar2;
    if (pvVar2 == (void *)0x0) {
      FurnEfctFreeFefct(fewrk_no_00);
    }
  }
  return;
}

void FurnEfctFree(FURN_WRK *fwp) {
  int iVar1;
  
  iVar1 = fwp->fewrk_no;
  if (iVar1 != 0xff) {
    if ((fefct_wrk[iVar1].use == '\x01') && (fefct_wrk[iVar1].addr != (void *)0x0)) {
      fefct_wrk[iVar1].use = '\0';
      ResetEffects(fefct_wrk[fwp->fewrk_no].addr);
    }
    fwp->fewrk_no = 0xff;
  }
  return;
}

static void FurnEfctSetUse(FURN_WRK *fwp, float *pos, int fewrk_no) {
  fwp->fewrk_no = fewrk_no;
  fefct_wrk[fewrk_no].use = '\x01';
  FurnEfctSetPos0(fwp,pos);
  return;
}

static void FurnEfctSetPos0(FURN_WRK *fwp, float *pos) {
	FURN_EFCT *fep;
	
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = fwp->fewrk_no;
  fefct_wrk[iVar1].pos0[0] = fwp->pos[0] + *pos;
  fefct_wrk[iVar1].pos0[1] = fwp->pos[1] + pos[1];
  fVar2 = fwp->pos[2];
  fVar3 = pos[2];
  fefct_wrk[iVar1].pos0[3] = 1.0;
  fefct_wrk[iVar1].pos0[2] = fVar2 + fVar3;
  return;
}

static void FurnEfctSetPos1(FURN_WRK *fwp, float *pos) {
	FURN_EFCT *fep;
	
  int iVar1;
  float fVar2;
  
  iVar1 = fwp->fewrk_no;
  fefct_wrk[iVar1].pos1[0] = *pos;
  fefct_wrk[iVar1].pos1[1] = pos[1];
  fVar2 = pos[2];
  fefct_wrk[iVar1].pos1[3] = 1.0;
  fefct_wrk[iVar1].pos1[2] = fVar2;
  return;
}

static void FurnEfctSetRot0(FURN_WRK *fwp, float *rot) {
	FURN_EFCT *fep;
	
  int iVar1;
  float fVar2;
  
  iVar1 = fwp->fewrk_no;
  fefct_wrk[iVar1].rot0[0] = fwp->rotate[0] + *rot;
  fefct_wrk[iVar1].rot0[1] = fwp->rotate[1] + rot[1];
  fVar2 = rot[2];
  fefct_wrk[iVar1].rot0[3] = 1.0;
  fefct_wrk[iVar1].rot0[2] = fVar2;
  return;
}

static int FurnEfctGetFefct() {
	FURN_EFCT *fep;
	int i;
	
  int iVar1;
  FURN_EFCT *pFVar2;
  
  iVar1 = 0;
  pFVar2 = fefct_wrk;
  do {
    if (pFVar2->use == '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    pFVar2 = pFVar2 + 1;
  } while (iVar1 < 0x3c);
  return -1;
}

static void FurnEfctFreeFefct(int num) {
  if (num < 0x3c) {
    fefct_wrk[num].use = '\0';
  }
  return;
}

void FurnHintDeformCtrl() {
	FURN_WRK *fwp;
	float sclx;
	float scly;
	u_int fsta;
	int i;
	static sceVu0FVECTOR ep[10];
	static float spd = 0.5f;
	static float rate = 1.f;
	static float trate = 1.f;
	
  int iVar1;
  int iVar2;
  FURN_WRK *fw;
  float *tv;
  uint fsta;
  
  iVar1 = EnemyUseJudge(0);
  if (iVar1 == 0) {
    tv = (float *)&ep_144;
    fw = furn_wrk;
    iVar1 = 0;
    do {
      iVar2 = GetFurnHintPos(fw,tv,&fsta);
      if (iVar2 != 0) {
        tv = tv + 4;
        SetEffects(0x1b,1);
      }
      iVar1 = iVar1 + 1;
      fw = fw + 1;
    } while ((iVar1 < 0x3c) && ((int)tv < 0x402810));
  }
  return;
}
