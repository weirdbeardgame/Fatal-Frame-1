// STATUS: NOT STARTED

u_int *tm2_end_pkt = NULL;
static Q_WORDDATA fnt_pkt[512];
static Q_WORDDATA g2d_end_pkt[2];
static Q_WORDDATA g2d_top_pkt[2];

u_int* MakeTim2Direct2(u_int *pkt_addr, u_int *tim2_addr, int tbp) {
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int psm;
	u_int tbw;
	u_int qwc;
	u_int nloop;
	sceGsTex0 sgtx0;
	Q_WORDDATA *qw;
	
  ushort uVar1;
  Q_WORDDATA *pQVar2;
  uint uVar3;
  uint *in_t0_lo;
  ulong uVar4;
  uint uVar5;
  
  if (*(char *)((int)tim2_addr + 5) == '\0') {
    in_t0_lo = tim2_addr + 4;
  }
  else if (*(char *)((int)tim2_addr + 5) == '\x01') {
    in_t0_lo = tim2_addr + 0x20;
  }
  uVar4 = *(ulong *)(in_t0_lo + 6);
  uVar1 = *(ushort *)(in_t0_lo + 3);
  uVar5 = in_t0_lo[2] >> 4;
  if (tbp < 0) {
    tbp = (uint)uVar4 & 0x3fff;
  }
  pQVar2 = SetImageTransParam2((Q_WORDDATA *)(pkt_addr + 4),tbp,(uint)(uVar4 >> 0xe) & 0x3f,
                               (uint)(uVar4 >> 0x14) & 0x3f,*(short *)(in_t0_lo + 5),
                               *(short *)((int)in_t0_lo + 0x16));
  pQVar2->ul64[1] = 0xe;
  pQVar2->ul64[0] = (long)(int)uVar5 | 0x1800000000008000;
  uVar3 = ((int)(pQVar2 + 1) - (int)pkt_addr >> 4) - 1;
  pQVar2[1].ui32[0] = uVar5 | 0x30000000;
  *(uint *)((int)pQVar2 + 0x14) = (int)in_t0_lo + (uint)uVar1;
  *(uint *)((int)pQVar2 + 0x1c) = uVar5 | 0x50000000;
  *(undefined4 *)((int)pQVar2 + 0x18) = 0;
  pkt_addr[3] = uVar3 | 0x50000000;
  *pkt_addr = uVar3 | 0x10000000;
  pkt_addr[1] = 0;
  pkt_addr[2] = 0;
  return pQVar2[2].ui32;
}

u_int* MakeClutDirect2(u_int *pkt_addr, u_int *tim2_addr, int cbp) {
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int qwc;
	u_int nloop;
	sceGsTex0 sgtx0;
	Q_WORDDATA *qw;
	
  ushort uVar1;
  uint uVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  uint *in_t0_lo;
  uint uVar5;
  
  if (*(char *)((int)tim2_addr + 5) == '\0') {
    in_t0_lo = tim2_addr + 4;
  }
  else if (*(char *)((int)tim2_addr + 5) == '\x01') {
    in_t0_lo = tim2_addr + 0x20;
  }
  uVar2 = in_t0_lo[2];
  uVar1 = *(ushort *)(in_t0_lo + 3);
  uVar5 = in_t0_lo[1] >> 4;
  if (cbp < 0) {
    cbp = (uint)((ulong)*(undefined8 *)(in_t0_lo + 6) >> 0x25) & 0x3fff;
  }
  if (*(short *)((int)in_t0_lo + 0xe) == 0x10) {
    pQVar3 = SetImageTransParam2((Q_WORDDATA *)(pkt_addr + 4),cbp,1,0,8,2);
  }
  else {
    pQVar3 = SetImageTransParam2((Q_WORDDATA *)(pkt_addr + 4),cbp,1,0,0x10,
                                 *(ushort *)((int)in_t0_lo + 0xe) >> 4);
  }
  pQVar3->ul64[1] = 0xe;
  pQVar3->ul64[0] = (long)(int)uVar5 | 0x1800000000008000;
  uVar4 = ((int)(pQVar3 + 1) - (int)pkt_addr >> 4) - 1;
  *(uint *)((int)pQVar3 + 0x14) = (int)in_t0_lo + uVar1 + uVar2;
  pQVar3[1].ui32[0] = uVar5 | 0x30000000;
  *(uint *)((int)pQVar3 + 0x1c) = uVar5 | 0x50000000;
  *(undefined4 *)((int)pQVar3 + 0x18) = 0;
  pkt_addr[3] = uVar4 | 0x50000000;
  *pkt_addr = uVar4 | 0x10000000;
  pkt_addr[1] = 0;
  pkt_addr[2] = 0;
  return pQVar3[2].ui32;
}

u_int* MakeTim2ClutDirect2(u_int *pkt_addr, u_int *tim2, int tbp, int cbp) {
  uint *puVar1;
  
  puVar1 = MakeTim2Direct2(pkt_addr,tim2,tbp);
  puVar1 = MakeClutDirect2(puVar1,tim2,cbp);
  return puVar1;
}

Q_WORDDATA* SetImageTransParam2(Q_WORDDATA *qw, int tbp, int tbw, int psm, u_short w, u_short h) {
  qw->ul64[0] = 0x1000000000008004;
  qw->ul64[1] = 0xe;
  *(undefined8 *)((int)qw + 0x18) = 0x50;
  qw[1].ul64[0] = (long)tbp << 0x20 | (long)tbw << 0x30 | (long)psm << 0x38;
  *(undefined8 *)((int)qw + 0x28) = 0x51;
  qw[2].ul64[0] = 0;
  *(undefined8 *)((int)qw + 0x38) = 0x52;
  qw[3].ul64[0] = (long)w & 0xffffU | ((long)h & 0xffffU) << 0x20;
  *(undefined8 *)((int)qw + 0x48) = 0x53;
  qw[4].ul64[0] = 0;
  return qw + 5;
}

u_int* ChainPK2Direct(u_int *pkt_addr, u_int *tm2_addr) {
	int i;
	int texnum;
	int addr;
	int *offtop;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *tm2_addr;
  puVar3 = tm2_addr + 4;
  if (0 < (int)uVar2) {
    uVar1 = *puVar3;
    while( true ) {
      puVar3 = puVar3 + 1;
      pkt_addr = MakeTim2ClutDirect2(pkt_addr,(uint *)((int)tm2_addr + uVar1),-1,-1);
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      uVar1 = *puVar3;
    }
  }
  return pkt_addr;
}

void MakeFontTexSendPacket() {
	u_int *pkt_addr;
	SPRITE_DATA dummy;
	int i;
	int texnum;
	int addr;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  SPRITE_DATA dummy;
  
  if (0 < iRam01e30000) {
    piVar2 = (int *)0x1e30010;
    iVar3 = iRam01e30000;
    iVar1 = iRam01e30010;
    while( true ) {
      piVar2 = piVar2 + 1;
      LoadTIM2Sub(&dummy,(char *)(iVar1 + 0x1e30000),0,0);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      iVar1 = *piVar2;
    }
  }
  tm2_end_pkt = ChainPK2Direct(fnt_pkt[0].ui32,(uint *)0x1e30000);
  return;
}

void CallFontTexSendPacket() {
  uint *puVar1;
  
  puVar1 = tm2_end_pkt;
  *tm2_end_pkt = 0x70000000;
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  sceGsSyncPath(0,0);
  DrawOne2D_P2(fnt_pkt);
  sceGsSyncPath(0,0);
  return;
}

void CallFontTexAndMesPacket() {
	void *mmp;
	
  uint *puVar1;
  void *pvVar2;
  
  pvVar2 = DrawAllMes_P2(0);
  puVar1 = tm2_end_pkt;
  if (pvVar2 == (void *)0x0) {
    *tm2_end_pkt = 0x70000000;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    *tm2_end_pkt = 0x20000000;
    puVar1[1] = (uint)pvVar2;
    puVar1[2] = (uint)&DAT_11000000;
    puVar1[3] = 0;
  }
  DrawOne2D_P2(fnt_pkt);
  return;
}

void MakeTim2Direct3(u_int *tim2_addr, int tbp, int offset) {
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int psm;
	u_int tbw;
	u_int qwc;
	u_int nloop;
	sceGsTex0 sgtx0;
	int qwtop;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Q_WORDDATA *pQVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  Q_WORDDATA *pQVar8;
  uint *in_t4_lo;
  uint uVar9;
  
  pQVar8 = pbuf;
  lVar6 = (long)tbp;
  if (*(char *)((int)tim2_addr + 5) == '\0') {
    in_t4_lo = tim2_addr + 4;
  }
  else if (*(char *)((int)tim2_addr + 5) == '\x01') {
    in_t4_lo = tim2_addr + 0x20;
  }
  uVar9 = in_t4_lo[2] >> 4;
  if (in_t4_lo[2] != 0) {
    uVar7 = *(ulong *)(in_t4_lo + 6);
    uVar1 = *(ushort *)(in_t4_lo + 3);
    if (lVar6 < 0) {
      lVar6 = (long)(int)(((uint)uVar7 & 0x3fff) + offset);
    }
    pQVar4 = pbuf + ndpkt + 1;
    pQVar4->ul64[0] = 0x1000000000008004;
    pQVar4->ul64[1] = 0xe;
    pQVar8[ndpkt + 2].ul64[1] = 0x50;
    pQVar8[ndpkt + 2].ul64[0] =
         lVar6 << 0x20 | (long)(int)((uint)(uVar7 >> 0xe) & 0x3f) << 0x30 |
         (long)(int)((uint)(uVar7 >> 0x14) & 0x3f) << 0x38;
    pQVar8[ndpkt + 3].ul64[1] = 0x51;
    pQVar8[ndpkt + 3].ul64[0] = 0;
    uVar2 = *(ushort *)((int)in_t4_lo + 0x16);
    uVar3 = *(ushort *)(in_t4_lo + 5);
    pQVar8[ndpkt + 4].ul64[1] = 0x52;
    pQVar8[ndpkt + 4].ul64[0] = (ulong)uVar3 | (ulong)uVar2 << 0x20;
    pQVar8[ndpkt + 5].ul64[1] = 0x53;
    pQVar8[ndpkt + 5].ul64[0] = 0;
    pQVar8[ndpkt + 6].ul64[0] = (long)(int)uVar9 | 0x1800000000008000;
    pQVar8[ndpkt + 6].ul64[1] = 0xe;
    pQVar4 = pQVar8 + ndpkt + 7;
    pQVar4->ui32[0] = uVar9 | 0x30000000;
    uVar5 = ((ndpkt + 7) - ndpkt) - 1;
    pQVar4->ui32[3] = uVar9 | 0x50000000;
    pQVar4->ui32[1] = (int)in_t4_lo + (uint)uVar1;
    pQVar4->ui32[2] = 0;
    pQVar8 = pQVar8 + ndpkt;
    ndpkt = ndpkt + 8;
    pQVar8->ui32[3] = uVar5 | 0x50000000;
    pQVar8->ui32[0] = uVar5 | 0x10000000;
    pQVar8->ui32[1] = 0;
    pQVar8->ui32[2] = 0;
  }
  return;
}

void MakeClutDirect3(u_int *tim2_addr, int cbp, int offset) {
	TIM2_PICTUREHEADER *tph;
	u_int *img_addr;
	u_int qwc;
	u_int nloop;
	sceGsTex0 sgtx0;
	int qwtop;
	
  ushort uVar1;
  uint uVar2;
  int iVar3;
  Q_WORDDATA *pQVar4;
  Q_WORDDATA *pQVar5;
  uint uVar6;
  uint *in_a3_lo;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  pQVar5 = pbuf;
  iVar3 = ndpkt;
  lVar8 = (long)cbp;
  if (*(char *)((int)tim2_addr + 5) == '\0') {
    in_a3_lo = tim2_addr + 4;
  }
  else if (*(char *)((int)tim2_addr + 5) == '\x01') {
    in_a3_lo = tim2_addr + 0x20;
  }
  uVar9 = in_a3_lo[1] >> 4;
  if (in_a3_lo[1] != 0) {
    uVar1 = *(ushort *)(in_a3_lo + 3);
    uVar2 = in_a3_lo[2];
    if (lVar8 < 0) {
      lVar8 = (long)(int)(((uint)((ulong)*(undefined8 *)(in_a3_lo + 6) >> 0x25) & 0x3fff) + offset);
    }
    iVar7 = ndpkt + 4;
    pQVar4 = pbuf + ndpkt + 1;
    pQVar4->ul64[1] = 0xe;
    pQVar4->ul64[0] = 0x1000000000008004;
    pQVar5[ndpkt + 2].ul64[1] = 0x50;
    pQVar5[ndpkt + 2].ul64[0] = lVar8 << 0x20 | 0x1000000000000;
    pQVar5[ndpkt + 3].ul64[1] = 0x51;
    pQVar5[ndpkt + 3].ul64[0] = 0;
    ndpkt = iVar7;
    if (*(ushort *)((int)in_a3_lo + 0xe) == 0x10) {
      pQVar5[iVar7].ul64[0] = 0x200000008;
    }
    else {
      pQVar5[iVar7].ul64[0] = (ulong)(*(ushort *)((int)in_a3_lo + 0xe) >> 4) << 0x20 | 0x10;
    }
    pQVar5 = pbuf;
    pbuf->ul64[ndpkt * 2 + 1] = 0x52;
    pQVar5[ndpkt + 1].ul64[1] = 0x53;
    pQVar5[ndpkt + 1].ul64[0] = 0;
    pQVar5[ndpkt + 2].ul64[0] = (long)(int)uVar9 | 0x1800000000008000;
    pQVar5[ndpkt + 2].ul64[1] = 0xe;
    pQVar4 = pQVar5 + ndpkt + 3;
    pQVar4->ui32[3] = uVar9 | 0x50000000;
    uVar6 = ((ndpkt + 3) - iVar3) - 1;
    pQVar4->ui32[0] = uVar9 | 0x30000000;
    pQVar4->ui32[1] = (int)in_a3_lo + uVar1 + uVar2;
    ndpkt = ndpkt + 4;
    pQVar4->ui32[2] = 0;
    pQVar5 = pQVar5 + iVar3;
    pQVar5->ui32[3] = uVar6 | 0x50000000;
    pQVar5->ui32[0] = uVar6 | 0x10000000;
    pQVar5->ui32[1] = 0;
    pQVar5->ui32[2] = 0;
  }
  return;
}

void MakeTim2ClutDirect3(u_int tm2_addr, int tbp, int cbp, int offset) {
	int i;
	int texnum;
	int *offtop;
	
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  Reserve2DPacket_Load();
  pQVar1 = pbuf + ndpkt;
  ndpkt = ndpkt + 1;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[0] = 0x10000000;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  iVar5 = *(int *)tm2_addr;
  piVar4 = (int *)(tm2_addr + 0x10);
  if (0 < iVar5) {
    iVar3 = *piVar4;
    while( true ) {
      iVar5 = iVar5 + -1;
      MakeTim2Direct3((uint *)(tm2_addr + iVar3),-1,offset);
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      MakeClutDirect3((uint *)(tm2_addr + iVar3),-1,offset);
      if (iVar5 == 0) break;
      iVar3 = *piVar4;
    }
  }
  pQVar1 = pbuf + ndpkt;
  pQVar2 = pbuf + ndpkt + 1;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[0] = 0x20000000;
  pQVar1->ui32[1] = (uint)pQVar2 & 0xfffffff;
  pQVar1->ui32[2] = 0;
  ndpkt = ndpkt + 1;
  return;
}

void MakeTim2ClutDirect4(u_int tm2_addr, int num, int tbp, int cbp, int offset) {
	int i;
	int texnum;
	int *offtop;
	
  int iVar1;
  Q_WORDDATA *pQVar2;
  Q_WORDDATA *pQVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  Reserve2DPacket_Load();
  pQVar2 = pbuf + ndpkt;
  ndpkt = ndpkt + 1;
  pQVar2->ui32[3] = (uint)&DAT_11000000;
  pQVar2->ui32[0] = 0x10000000;
  pQVar2->ui32[1] = 0;
  pQVar2->ui32[2] = 0;
  iVar1 = *(int *)tm2_addr;
  piVar4 = (int *)(tm2_addr + 0x10);
  if (0 < iVar1) {
    do {
      if (iVar5 == num) {
        MakeTim2Direct3((uint *)(tm2_addr + *piVar4),-1,offset);
        MakeClutDirect3((uint *)(tm2_addr + *piVar4),-1,offset);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar1);
  }
  pQVar2 = pbuf + ndpkt;
  pQVar3 = pbuf + ndpkt + 1;
  pQVar2->ui32[3] = (uint)&DAT_11000000;
  pQVar2->ui32[0] = 0x20000000;
  pQVar2->ui32[1] = (uint)pQVar3 & 0xfffffff;
  pQVar2->ui32[2] = 0;
  ndpkt = ndpkt + 1;
  return;
}

void MakeTim2SendPacket(u_int tm2_addr, int offset) {
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  
  Reserve2DPacket_Load();
  pQVar1 = pbuf + ndpkt;
  ndpkt = ndpkt + 1;
  pQVar1->ui32[0] = 0x10000000;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  MakeTim2Direct3((uint *)tm2_addr,-1,offset);
  MakeClutDirect3((uint *)tm2_addr,-1,offset);
  pQVar1 = pbuf + ndpkt;
  pQVar2 = pbuf + ndpkt + 1;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[0] = 0x20000000;
  pQVar1->ui32[1] = (uint)pQVar2 & 0xfffffff;
  pQVar1->ui32[2] = 0;
  ndpkt = ndpkt + 1;
  return;
}

void MakeTim2SendPacket_3Dpkt(u_int tm2_addr, int offset) {
  Q_WORDDATA *pQVar1;
  Q_WORDDATA *pQVar2;
  
  AppendDmaTagCall((uint)(pbuf + ndpkt));
  pQVar1 = pbuf + ndpkt;
  ndpkt = ndpkt + 1;
  pQVar1->ui32[0] = 0x10000000;
  pQVar1->ui32[3] = (uint)&DAT_11000000;
  pQVar1->ui32[1] = 0;
  pQVar1->ui32[2] = 0;
  MakeTim2Direct3((uint *)tm2_addr,-1,offset);
  MakeClutDirect3((uint *)tm2_addr,-1,offset);
  pQVar1 = pbuf;
  pQVar2 = pbuf + ndpkt;
  pQVar2->ui32[3] = (uint)&DAT_11000000;
  pQVar1 = pQVar1 + ndpkt;
  pQVar2->ui32[0] = 0x20000000;
  pQVar2->ui32[1] = 0;
  pQVar2->ui32[2] = 0;
  ndpkt = ndpkt + 1;
  AppendDmaTagNextRet(pQVar1);
  SetG2DTopPkt((uint)(pbuf + ndpkt));
  FlushModel(0);
  return;
}

void Reserve2DPacket(u_int pri) {
  int iVar1;
  
  iVar1 = ndpkt;
  draw_pri[ndpri][0] = pri;
  draw_pri[ndpri][1] = iVar1;
  ndpri = ndpri + 1;
  return;
}

void Reserve2DPacket_Load() {
  int iVar1;
  
  iVar1 = ndpkt;
  draw_pri[ndpri][0] = 0x1000;
  draw_pri[ndpri][1] = iVar1;
  ndpri = ndpri + 1;
  return;
}

void SetG2DTopPkt(u_int addr) {
  int iVar1;
  
  iVar1 = mes_swap * 0x10;
  g2d_top_pkt[mes_swap].ui32[0] = 0x20000000;
  *(uint *)((int)g2d_top_pkt + iVar1 + 4) = addr & 0xfffffff;
  *(undefined **)((int)g2d_top_pkt + iVar1 + 8) = &DAT_11000000;
  *(undefined4 *)((int)g2d_top_pkt + iVar1 + 0xc) = 0;
  return;
}

Q_WORDDATA* Get2DPacketBufferAddress() {
  return pbuf + ndpkt;
}

void Set2DPacketBufferAddress(Q_WORDDATA *addr) {
  ndpkt = ((uint)addr & 0xfffffff) - ((uint)pbuf & 0xfffffff) >> 4;
  return;
}

void DrawAll2DMes_P2() {
	int i;
	int m;
	int n;
	int s;
	void *mmp;
	int nch;
	int npk;
	int mch;
	int mpk;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  Q_WORDDATA *pQVar8;
  Q_WORDDATA *pQVar9;
  int iVar10;
  float x;
  float y;
  
  DrawPerformanceCounter();
  if (ndpri < 1) {
    ndpkt = 0;
  }
  else {
    iVar7 = 0;
    iVar6 = ndpri;
    pQVar9 = pbuf;
    if (0 < ndpri + -1) {
      do {
        iVar10 = iVar7 + 1;
        uVar2 = draw_pri[iVar7][1];
        uVar3 = draw_pri[iVar10][1];
        pQVar8 = pQVar9 + uVar2;
        uVar1 = pQVar8->us16[0];
        if (pQVar8->uc8[3] == 0x70) {
          pQVar8->uc8[3] = 0x20;
          pQVar9 = pbuf;
          pQVar8 = pbuf + uVar3;
          pbuf->ui32[uVar2 * 4 + 2] = 0;
          pQVar9->ui32[uVar2 * 4 + 1] = (uint)pQVar8 & 0xfffffff;
          if (uVar1 == 0) {
            pQVar9->ui32[uVar2 * 4 + 3] = 0;
            iVar6 = ndpri;
          }
          else {
            pQVar9->ui32[uVar2 * 4 + 3] = uVar1 | 0x50000000;
            iVar6 = ndpri;
          }
        }
        iVar7 = iVar10;
      } while (iVar10 < iVar6 + -1);
    }
    uVar2 = draw_pri[iVar6 + -1][1];
    pQVar9 = pQVar9 + uVar2;
    uVar1 = pQVar9->us16[0];
    if (pQVar9->uc8[3] == 0x70) {
      pQVar9->uc8[3] = 0x20;
      pQVar9 = pbuf;
      iVar6 = ndpkt;
      pbuf->ui32[uVar2 * 4 + 2] = 0;
      pQVar9->ui32[uVar2 * 4 + 1] = (uint)(pQVar9 + iVar6) & 0xfffffff;
      if (uVar1 == 0) {
        pQVar9->ui32[uVar2 * 4 + 3] = 0;
      }
      else {
        pQVar9->ui32[uVar2 * 4 + 3] = uVar1 | 0x50000000;
      }
    }
  }
  pvVar5 = DrawAllMes_P2((uint)(g2d_end_pkt + mes_swap));
  if (pvVar5 == (void *)0x0) {
    pQVar9 = pbuf + ndpkt;
    pQVar9->ui32[1] = (uint)(g2d_end_pkt + mes_swap) & 0xfffffff;
    pQVar9->ui32[0] = 0x20000000;
    pQVar9->ui32[3] = 0;
    pQVar9->ui32[2] = 0;
    ndpkt = ndpkt + 1;
  }
  else {
    pQVar9 = pbuf + ndpkt;
    pQVar9->fl32[1] = (float)fnt_pkt;
    ndpkt = ndpkt + 1;
    pQVar9->ui32[3] = 0;
    pQVar9->ui32[0] = 0x20000000;
    pQVar9->ui32[2] = 0;
    puVar4 = tm2_end_pkt;
    *tm2_end_pkt = 0x20000000;
    puVar4[1] = (uint)pvVar5 & 0xfffffff;
    puVar4[2] = (uint)&DAT_11000000;
    puVar4[3] = 0;
  }
  iVar6 = mes_swap * 0x10;
  pQVar9 = g2d_end_pkt + mes_swap;
  pQVar8 = g2d_top_pkt + mes_swap;
  *(undefined **)((int)g2d_end_pkt + iVar6 + 8) = &DAT_11000000;
  *(undefined4 *)((int)g2d_end_pkt + iVar6 + 0xc) = 0;
  pQVar9->ui32[0] = 0x20000000;
  *(undefined4 *)((int)g2d_end_pkt + iVar6 + 4) = 0;
  AppendDmaTagCall((uint)pQVar8);
  AppendDmaTagNextRet(g2d_end_pkt + mes_swap);
  if (0x3000 < ndpkt) {
    printf("2D-PacketBuffer Half Over\n");
  }
  mes_swap = mes_swap ^ 1;
  ndpri = 0;
  ndpkt = 0;
  mpbuf = (Q_WORDDATA *)((uint)mpbufw[mes_swap] | 0x20000000);
  pbuf = (Q_WORDDATA *)(mes_swap * 0x60000 + 0x720000U | 0x20000000);
  SetG2DTopPkt((uint)pbuf);
  if (dbg_wrk.oth_pkt_num_sw == 0) {
    return;
  }
  SetPanel2(0x20,44.0,360.0,580.0,396.0,0,'\0','\0','\0',0x80);
  y = 380.0;
  SetString2(0x10,48.0,364.0,1,0x80,0x80,0x80,"2D Chain  Num : %4d");
  x = 320.0;
  SetString2(0x10,48.0,y,1,0x80,0x80,0x80,"2D Packet Num : %4d");
  SetString2(0x10,x,364.0,1,0x80,0x80,0x80,"Mes Chain  Num : %4d");
  SetString2(0x10,x,y,1,0x80,0x80,0x80,"Mes Packet Num : %4d");
  return;
}
