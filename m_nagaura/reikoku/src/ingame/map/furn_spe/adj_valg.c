// STATUS: NOT STARTED

static ADJ_VALG_WRK adj_valg_wrk[15];

void InitAdjValGWrk() {
  memset(adj_valg_wrk,0,0x2d0);
  adj_valg_wrk[0].pre = adj_valg_wrk;
  adj_valg_wrk[0].next = (void *)0x0;
  return;
}

void InitAdjValGWrkOne(ADJ_VALG_WRK *avp) {
  memset(avp,0,0x30);
  return;
}

ADJ_VALG_WRK* SearchVacantAdjValGWrk() {
  float (*pafVar1) [4];
  ADJ_VALG_WRK *pAVar2;
  
  pAVar2 = adj_valg_wrk + 1;
  pafVar1 = adj_valg_wrk[1].ori;
  while ((pafVar1 != (float (*) [4])0x0 || (pAVar2->time != 0))) {
    if (0x402adf < (int)(pAVar2 + 1)) {
      return (ADJ_VALG_WRK *)0x0;
    }
    pafVar1 = pAVar2[1].ori;
    pAVar2 = pAVar2 + 1;
  }
  return pAVar2;
}

void ReleaseAdjValGWrkVec(float *ori) {
	ADJ_VALG_WRK *avp;
	
  float (*pafVar1) [4];
  ADJ_VALG_WRK *avp;
  
  if (adj_valg_wrk[0].next != (void *)0x0) {
    pafVar1 = *(float (**) [4])((int)adj_valg_wrk[0].next + 0xc);
    avp = (ADJ_VALG_WRK *)adj_valg_wrk[0].next;
    while ((float (*) [4])ori != pafVar1) {
      avp = (ADJ_VALG_WRK *)avp->next;
      if (avp == (ADJ_VALG_WRK *)0x0) {
        return;
      }
      pafVar1 = avp->ori;
    }
    ReleaseAdjValG(avp);
  }
  return;
}

void ReleaseAdjValG(ADJ_VALG_WRK *avp) {
  if (avp->next == (void *)0x0) {
    *(undefined4 *)avp->pre = 0;
    adj_valg_wrk[0].pre = avp->pre;
  }
  else {
    *(void **)((int)avp->next + 4) = avp->pre;
    *(void **)avp->pre = avp->next;
  }
  InitAdjValGWrkOne(avp);
  return;
}

void SameObjectWrkDelete(float *ori) {
	ADJ_VALG_WRK *avp;
	
  float (*pafVar1) [4];
  ADJ_VALG_WRK *avp;
  
  if (adj_valg_wrk[0].next != (void *)0x0) {
    pafVar1 = *(float (**) [4])((int)adj_valg_wrk[0].next + 0xc);
    avp = (ADJ_VALG_WRK *)adj_valg_wrk[0].next;
    while (pafVar1 != (float (*) [4])ori) {
      avp = (ADJ_VALG_WRK *)avp->next;
      if (avp == (ADJ_VALG_WRK *)0x0) {
        return;
      }
      pafVar1 = avp->ori;
    }
    ReleaseAdjValG(avp);
  }
  return;
}

void RegisterAdjValG(float *ori, float *des, u_int time) {
	sceVu0FVECTOR temp;
	ADJ_VALG_WRK *avp;
	
  ADJ_VALG_WRK *pAVar1;
  float fVar2;
  float temp [4];
  
  if ((ori != (float *)0x0) && (des != (float *)0x0)) {
    pAVar1 = SearchVacantAdjValGWrk();
    if ((pAVar1 == (ADJ_VALG_WRK *)0x0) || (time == 0)) {
      sceVu0CopyVector((Vector4 *)ori,(Vector4 *)des);
    }
    else {
      ReleaseAdjValGWrkVec(ori);
      pAVar1->next = (void *)0x0;
      pAVar1->pre = adj_valg_wrk[0].pre;
      *(ADJ_VALG_WRK **)adj_valg_wrk[0].pre = pAVar1;
      adj_valg_wrk[0].pre = pAVar1;
      sceVu0SubVector(temp,des,ori);
      if ((int)time < 0) {
        fVar2 = (float)(time & 1 | time >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)time;
      }
      sceVu0ScaleVector(1.0 / fVar2,(Vector4 *)temp,(Vector4 *)temp);
      pAVar1->ori = (float (*) [4])ori;
      sceVu0CopyVector((Vector4 *)pAVar1->des,(Vector4 *)des);
      pAVar1->time = (short)time;
      pAVar1->nowtime = 0;
      sceVu0CopyVector((Vector4 *)pAVar1->accel,(Vector4 *)temp);
    }
  }
  return;
}

void AdjustValueG() {
	ADJ_VALG_WRK *avp;
	
  short sVar1;
  Vector4 *pVVar2;
  ADJ_VALG_WRK *avp;
  
  if (adj_valg_wrk[0].next != (void *)0x0) {
    sVar1 = *(short *)((int)adj_valg_wrk[0].next + 10);
    avp = (ADJ_VALG_WRK *)adj_valg_wrk[0].next;
    while( true ) {
      pVVar2 = (Vector4 *)avp->ori;
      if (sVar1 == avp->time) {
        sceVu0CopyVector(pVVar2,(Vector4 *)avp->des);
        ReleaseAdjValG(avp);
        avp = (ADJ_VALG_WRK *)avp->next;
      }
      else {
        sceVu0AddVector(pVVar2,pVVar2,(Vector4 *)avp->accel);
        avp->nowtime = avp->nowtime + 1;
        avp = (ADJ_VALG_WRK *)avp->next;
      }
      if (avp == (ADJ_VALG_WRK *)0x0) break;
      sVar1 = avp->nowtime;
    }
  }
  return;
}
