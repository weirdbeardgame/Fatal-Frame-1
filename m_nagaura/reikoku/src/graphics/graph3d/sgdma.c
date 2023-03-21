// STATUS: NOT STARTED

static u_int send_dma_flg = 1;
static int DummyFlushData[0] = {
};
static u_int *previous_tri2_prim;
static u_int *push_tri2_prim;

void SetBlackWhiteCLUT() {
  loadbw_flg = 1;
  return;
}

void ClearBlackWhiteCLUT() {
  loadbw_flg = 0;
  return;
}

void SendDmaON() {
  send_dma_flg = 1;
  return;
}

void SendDmaOFF() {
  send_dma_flg = 0;
  return;
}

void ClearDMATrans() {
  uint uVar1;
  
  printf("Dma Trans Error %x\n");
  REG_DMAC_ENABLEW = 0x10000;
  uVar1 = REG_DMAC_1_VIF1_CHCR;
  REG_DMAC_1_VIF1_CHCR = uVar1 & 0xfffffeff;
  REG_DMAC_ENABLEW = 0;
  sceDevVif1Reset();
  printf(s_wait_00356d58);
  return;
}

void CheckDMATrans() {
  uint uVar1;
  
  uVar1 = REG_VIF1_STAT;
  if ((uVar1 & 0x3400) != 0) {
    ClearDMATrans();
    return;
  }
  return;
}

void CheckDmaSync() {
  int iVar1;
  long lVar2;
  
  while (lVar2 = sceDmaSync(dvif1,1,0), lVar2 != 0) {
    CheckDMATrans();
  }
  iVar1 = REG_VIF1_STAT;
  if (iVar1 != 0) {
    ClearDMATrans();
    return;
  }
  return;
}

static void FlushBuffer() {
	int i;
	
  SgSourceChainTag *pSVar1;
  int iVar2;
  
  dvif1 = (sceDmaChan *)sceDmaGetChan(1);
  pSVar1 = cachetag;
  *(undefined4 *)(cachetag + vu1tag_num) = 1;
  iVar2 = vu1tag_num;
  *(int_0_ **)&pSVar1[vu1tag_num].field_0x4 = &DummyFlushData;
  pSVar1[iVar2].pad[0] = 0;
  pSVar1[iVar2].pad[1] = 0;
  CheckDMATrans();
  sceDmaSync(dvif1,0,0);
  dvif1->chcr = (tD_CHCR)((uint)dvif1->chcr | 0x40);
  FlushCache(0);
  if (send_dma_flg != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + -1;
      sceDmaSync(dvif1,0,0);
      sceDmaSend(dvif1,(uint)cachetag & 0xfffffff);
    } while (-1 < iVar2);
  }
  tagswap = 1 - tagswap;
  vu1tag_num = 0;
  sbuffer_p = 0;
  cachetag = cachetagdbuf[tagswap];
  objwork = objworkdbuf[tagswap];
  return;
}

void FlushModel(int signal) {
  if (signal == 1) {
    PutDebugSign();
    FlushBuffer();
    return;
  }
  if ((model_buffer_size + -0x400 <= sbuffer_p) || (model_tag_size + -10 <= vu1tag_num)) {
    if ((model_buffer_size <= sbuffer_p) || (model_buffer_size + -10 <= vu1tag_num)) {
      printf("Serious Buffer Over %d %d\n");
      InitialDmaBuffer();
      SetDebugSign(1);
      return;
    }
    printf("Buffer Over %d %d\n");
    FlushBuffer();
  }
  return;
}

void AppendDmaTag(u_int addr, int size) {
	SgSourceChainTag *ptag;
	
  SgSourceChainTag *pSVar1;
  
  pSVar1 = cachetag + vu1tag_num;
  *(uint *)pSVar1 = size | 0x30000000;
  *(uint *)&pSVar1->field_0x4 = addr;
  pSVar1->pad[1] = 0;
  pSVar1->pad[0] = 0;
  vu1tag_num = vu1tag_num + 1;
  return;
}

void AppendDmaBuffer(int size) {
	SgSourceChainTag *ptag;
	
  float (*pafVar1) [4];
  SgSourceChainTag *pSVar2;
  
  pafVar1 = objwork;
  pSVar2 = cachetag + vu1tag_num;
  *(uint *)pSVar2 = size | 0x30000000;
  pSVar2->pad[1] = 0;
  pSVar2->pad[0] = 0;
  *(uint *)&pSVar2->field_0x4 = (uint)pafVar1[sbuffer_p] & 0xfffffff;
  sbuffer_p = sbuffer_p + size;
  vu1tag_num = vu1tag_num + 1;
  return;
}

void AppendDmaTagCall(u_int next_tag_addr) {
	SgSourceChainTag *ptag;
	
  SgSourceChainTag *pSVar1;
  
  pSVar1 = cachetag + vu1tag_num;
  *(undefined4 *)pSVar1 = 0x20000000;
  *(uint *)&pSVar1->field_0x4 = next_tag_addr & 0xfffffff;
  pSVar1->pad[0] = 0;
  pSVar1->pad[1] = 0;
  vu1tag_num = vu1tag_num + 1;
  return;
}

void AppendDmaTagNextRet(void *tag_addr) {
  SgSourceChainTag *pSVar1;
  
  pSVar1 = cachetag;
  *(undefined4 *)tag_addr = 0x20000000;
  *(uint *)((int)tag_addr + 4) = (uint)(pSVar1 + vu1tag_num) & 0xfffffff;
  return;
}

void AppendDmaBufferFromEndAddress(qword *end_adr) {
	int size;
	int tmp;
	SgSourceChainTag *ptag;
	
  int iVar1;
  float (*pafVar2) [4];
  uint uVar3;
  SgSourceChainTag *pSVar4;
  
  iVar1 = vu1tag_num;
  pSVar4 = cachetag;
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar2 = objwork[sbuffer_p];
                    /* end of inlined section */
  uVar3 = (uint)((int)end_adr - (int)pafVar2) >> 4;
  (*pafVar2)[0] = 0.0;
  (*pafVar2)[2] = (float)&DAT_11000000;
  (*pafVar2)[3] = (float)(uVar3 - 1 | 0x50000000);
  pSVar4 = pSVar4 + iVar1;
  (*pafVar2)[1] = 0.0;
  *(uint *)pSVar4 = uVar3 | 0x30000000;
  sbuffer_p = sbuffer_p + uVar3;
  *(uint *)&pSVar4->field_0x4 = (uint)pafVar2 & 0xfffffff;
  pSVar4->pad[0] = 0;
  vu1tag_num = vu1tag_num + 1;
  pSVar4->pad[1] = 0;
  FlushModel(0);
  return;
}

void ClearTextureCache() {
  previous_tri2_prim = (uint *)0x0;
  return;
}

void PushTextureCache() {
  push_tri2_prim = previous_tri2_prim;
  return;
}

void PopTextureCahche() {
  previous_tri2_prim = push_tri2_prim;
  return;
}

void SgSetPacketBuffer(void *packet_buffer, int packet_size, void *tag_buffer, int tag_num) {
  objworkdbuf[1] = (float (*) [4])((int)packet_buffer + packet_size * 0x10);
  cachetagdbuf[1] = (SgSourceChainTag *)((int)tag_buffer + tag_num * 0x10);
  model_buffer_size = packet_size;
  model_tag_size = tag_num;
  cachetagdbuf[0] = (SgSourceChainTag *)tag_buffer;
  objworkdbuf[0] = (float (*) [4])packet_buffer;
  InitialDmaBuffer();
  return;
}

void SetDmaScratch() {
  return;
}

void SetDmaBSS() {
  return;
}

void InitialDmaBuffer() {
  cachetag = cachetagdbuf[0];
  objwork = objworkdbuf[0];
  vu1tag_num = 0;
  tagswap = 0;
  sbuffer_p = 0;
  ClearTextureCache();
  return;
}

void GsImageProcess(u_int *prim) {
  AppendDmaTag((uint)(prim + 4),prim[2]);
  return;
}

void SgTEXTransEnable() {
  loadtri2_flg = 1;
  return;
}

void SgTEXTransDisenable() {
  loadtri2_flg = 0;
  return;
}

void LoadTRI2Files(u_int *prim) {
	int i;
	int pads;
	int tnum;
	int tri2size;
	
  ushort uVar1;
  float (*pafVar2) [4];
  uint addr;
  uint uVar3;
  
  if ((prim != previous_tri2_prim) && (loadtri2_flg != 0)) {
    uVar3 = prim[2];
    addr = (int)prim + (prim[3] & 0xfffffffc) + 0x10;
    previous_tri2_prim = prim;
    *(undefined **)(addr + 8) = &DAT_11000000;
    if (0 < (int)uVar3) {
      uVar1 = *(ushort *)(addr + 0xc);
      while( true ) {
        uVar3 = uVar3 - 1;
        AppendDmaTag(addr,uVar1 + 1);
        addr = addr + (uint)uVar1 * 0x10 + 0x10;
        FlushModel(0);
        if (uVar3 == 0) break;
        uVar1 = *(ushort *)(addr + 0xc);
      }
    }
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
    pafVar2 = objwork[sbuffer_p];
                    /* end of inlined section */
    (*pafVar2)[0] = (float)&DAT_11000000;
    pafVar2[2][2] = 8.82818e-44;
    (*pafVar2)[3] = 8.589937e+09;
    pafVar2[1][0] = 4.591915e-41;
    pafVar2[1][1] = 2.524355e-29;
    pafVar2[1][2] = 1.961818e-44;
    (*pafVar2)[1] = 0.0;
    (*pafVar2)[2] = 0.0;
    AppendDmaBuffer(3);
    FlushModel(0);
    return;
  }
  return;
}

void RebuildTRI2Files(u_int *prim) {
	u_int next_pointer;
	int tnum;
	int pads;
	int tri2size;
	int i;
	u_int maxaddr;
	u_int minaddr;
	u_int maxtbp;
	u_int *search_addr;
	u_int *start_vif_code;
	u_int *fprim;
	u_int tbp;
	u_int tbw;
	u_int psm;
	u_int tsize;
	u_int vtsize;
	qword *base;
	sceGsStoreImage spi;
	
  ushort uVar1;
  float (*pafVar2) [4];
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *addr;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  sceGsStoreImage spi;
  uint *fprim;
  
  iVar15 = 0;
  uVar14 = 0;
  uVar12 = 0xffffffffffffffff;
  uVar11 = prim[2];
  uVar13 = *prim;
  uVar7 = prim[3];
  if (2 < (int)uVar11) {
    iVar6 = 0;
    InitialDmaBuffer();
    puVar9 = (undefined4 *)((int)prim + (uVar7 & 0xfffffffc) + 0x10);
    addr = puVar9;
    if (0 < (int)uVar11) {
      do {
        uVar1 = *(ushort *)(addr + 3);
        AppendDmaTag((uint)addr,uVar1 + 1);
        FlushModel(0);
        uVar7 = uVar1 - 8;
        puVar5 = addr + 4;
        if (1 < uVar7) {
          uVar3 = addr[9];
          while( true ) {
            uVar4 = (long)(int)uVar3 & 0xffff;
            uVar10 = puVar5[0x14] & 0x7fff;
            if (uVar4 < uVar12) {
              uVar12 = uVar4;
            }
            if (uVar14 < uVar4) {
              uVar8 = uVar10;
              switch(uVar3 >> 0x18 & 0x3f) {
              case 0x13:
              case 0x14:
                uVar8 = uVar10 << (uVar3 >> 0x10 & 1);
              }
              iVar15 = (int)uVar4 + (uVar8 >> 4);
              uVar14 = uVar4;
            }
            puVar5 = puVar5 + uVar10 * 4 + 0x18;
            if (uVar7 <= (uint)((int)puVar5 - (int)addr) >> 4) break;
            uVar3 = puVar5[5];
          }
        }
        iVar6 = iVar6 + 1;
        addr = addr + (uint)uVar1 * 4 + 4;
      } while (iVar6 < (int)uVar11);
    }
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
    pafVar2 = objwork[sbuffer_p];
                    /* end of inlined section */
    (*pafVar2)[0] = (float)&DAT_11000000;
    pafVar2[2][2] = 8.82818e-44;
    (*pafVar2)[3] = 8.589937e+09;
    uVar11 = iVar15 - (int)uVar12;
    pafVar2[1][0] = 4.591915e-41;
    pafVar2[1][1] = 2.524355e-29;
    pafVar2[1][2] = 1.961818e-44;
    (*pafVar2)[1] = 0.0;
    (*pafVar2)[2] = 0.0;
    AppendDmaBuffer(3);
    FlushModel(1);
    sceGsSyncPath(0,0);
    if ((uVar11 & 0x1f) == 0) {
      uVar11 = uVar11 >> 5;
    }
    else {
      uVar11 = (uVar11 >> 5) + 1;
    }
    if (uVar13 - (int)puVar9 < uVar11 * 0x2000 + 0x180) {
      printf("Not Enough Memory %d %d\n");
    }
    else {
      uVar13 = 0;
      for (; uVar11 != 0; uVar11 = uVar11 - uVar7) {
        uVar7 = 0x3f;
        if (uVar11 < 0x40) {
          uVar7 = uVar11;
        }
        sceGsSetDefStoreImage(&spi,(short)uVar12,1,0,0,0,0x40,(int)(uVar7 << 0x15) >> 0x10);
        uVar13 = uVar13 + 1;
        FlushCache(0);
        sceGsExecStoreImage(&spi,puVar9 + 0x1c);
        sceGsSyncPath(0,0);
        uVar14 = uVar12 << 0x20;
        uVar3 = uVar7 * 0x200 + 6;
        puVar9[3] = uVar3 | 0x50000000;
        *(undefined8 *)(puVar9 + 4) = 0x4000000000000001;
        uVar12 = (ulong)(int)((int)uVar12 + uVar7 * 0x20);
        *(undefined8 *)(puVar9 + 6) = 0xeeee;
        *(ulong *)(puVar9 + 8) = uVar14 | 0x1000000000000;
        *(undefined8 *)(puVar9 + 10) = 0x50;
        *(undefined8 *)(puVar9 + 0xe) = 0x51;
        *(ulong *)(puVar9 + 0x10) = (long)(int)(uVar7 * 0x20) << 0x20 | 0x40;
        *(undefined8 *)(puVar9 + 0x12) = 0x52;
        *(undefined8 *)(puVar9 + 0x16) = 0x53;
        *(ulong *)(puVar9 + 0x18) = (long)(int)(uVar7 * 0x200) & 0xffffffffU | 0x800000000008000;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *(undefined8 *)(puVar9 + 0xc) = 0;
        *(undefined8 *)(puVar9 + 0x14) = 0;
        puVar9 = puVar9 + uVar3 * 4 + 4;
      }
      prim[2] = uVar13;
    }
  }
  return;
}

TextureAnimation* GetTextureAnimation(void *sgd_top) {
	u_int *prim;
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)sgd_top + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return (TextureAnimation *)0x0;
  }
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (TextureAnimation *)0x0;
    }
    if (puVar1[1] == 0xc) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  return (TextureAnimation *)(puVar1 + 2);
}

void LoadTextureAnimation(u_int *prim) {
	TextureAnimation *pta;
	int i;
	int tnum;
	int tri2size;
	
  float (*pafVar1) [4];
  uint uVar2;
  uint addr;
  
  if (*(char *)((int)prim + 10) == '\0') {
    uVar2 = (uint)*(byte *)(prim + 3);
  }
  else {
    if (*(byte *)((int)prim + 0xb) == 0) {
      uVar2 = (uint)*(byte *)(prim + 3);
    }
    else {
      uVar2 = (int)((uint)*(byte *)(prim + 3) * (uint)*(byte *)((int)prim + 0xb)) >> 4;
    }
    *(char *)(prim + 3) = *(char *)(prim + 3) + '\x01';
    if (*(byte *)(prim + 2) <= uVar2) {
      if (*(char *)((int)prim + 0xd) == '\0') {
        *(undefined *)((int)prim + 10) = 0;
      }
      uVar2 = 0;
      *(undefined *)(prim + 3) = 0;
    }
  }
  addr = (int)prim + (*(byte *)((int)prim + 9) & 0xfc) + 0x10;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    addr = addr + (uint)*(ushort *)(addr + 0xc) * 0x10 + 0x10;
  }
  *(undefined **)(addr + 8) = &DAT_11000000;
  AppendDmaTag(addr,*(ushort *)(addr + 0xc) + 1);
  FlushModel(0);
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
                    /* end of inlined section */
                    /* inlined from libsg.h */
  pafVar1 = objwork[sbuffer_p];
                    /* end of inlined section */
  (*pafVar1)[0] = (float)&DAT_11000000;
  pafVar1[2][2] = 8.82818e-44;
  (*pafVar1)[3] = 8.589937e+09;
  pafVar1[1][0] = 4.591915e-41;
  pafVar1[1][1] = 2.524355e-29;
  pafVar1[1][2] = 1.961818e-44;
  (*pafVar1)[1] = 0.0;
  (*pafVar1)[2] = 0.0;
  AppendDmaBuffer(3);
  FlushModel(0);
  return;
}
