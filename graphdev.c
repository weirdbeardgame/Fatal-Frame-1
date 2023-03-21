// STATUS: NOT STARTED


sceGsResetGraph() {
  undefined8 uVar1;
  ushort *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (ushort *)sceGsGetGParam();
    REG_GS_CSR = 0x200;
    *puVar2 = param_2;
    uVar1 = REG_GS_CSR;
    puVar2[1] = param_3;
    puVar2[3] = (ushort)((ulong)uVar1 >> 0x10) & 0xff;
    GsPutIMR(0xff00);
    puVar2[2] = (ushort)(param_4 != 0);
    if (*(int *)(puVar2 + 4) != 0) {
      DisableIntc(2);
      RemoveIntcHandler(2,*(undefined4 *)(puVar2 + 6));
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
    }
    SetGsCrt(param_2 & 1,param_3 & 0xff,param_4 & 1);
    return;
  }
  if (param_1 == 1) {
    REG_GS_CSR = 0x100;
  }
  return;
}

sceGsGetGParam() {
  return gp_6;
}

sceGsResetPath() {
  undefined8 uVar1;
  undefined4 in_vc12;
  
  REG_VIF1_FBRST = 1;
  REG_VIF1_ERR = 2;
  SYNC(0);
  uVar1 = _cfc2(in_vc12);
  _ctc2((uint)uVar1 | 0x200);
  SYNC(0x10);
  REG_VIF1_FIFO = (int)init_vif_regs_3._0_8_;
  DAT_10005004 = (int)((ulong)init_vif_regs_3._0_8_ >> 0x20);
  DAT_10005008 = init_vif_regs_3._8_4_;
  DAT_1000500c = init_vif_regs_3._12_4_;
  REG_VIF1_FIFO = init_vif_regs_3._16_4_;
  DAT_10005004 = init_vif_regs_3._20_4_;
  DAT_10005008 = init_vif_regs_3._24_4_;
  DAT_1000500c = init_vif_regs_3._28_4_;
  REG_GIF_CTRL = 1;
  return;
}

sceGsPutDispEnv() {
  int iVar1;
  
  iVar1 = sceGsGetGParam();
  if (*(short *)(iVar1 + 6) == 1) {
    REG_GS_PMODE = *param_1;
    REG_GS_DISPFB1 = param_1[2];
    REG_GS_DISPLAY1 = param_1[3];
    REG_GS_EXTDATA = param_1[4];
  }
  else {
    REG_GS_PMODE = *param_1;
    REG_GS_SMODE2 = param_1[1];
    REG_GS_DISPFB2 = param_1[2];
    REG_GS_DISPLAY2 = param_1[3];
    REG_GS_BGCOLOR = param_1[4];
  }
  return;
}

sceGsSetDefDrawEnv() {
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = (int)param_3;
  uVar5 = (ulong)(int)param_2;
  iVar3 = (int)param_4;
  uVar6 = (ulong)(int)param_5;
  param_1[1] = 0x4c;
  *param_1 = ((long)(iVar4 + 0x3f >> 6) & 0x3fU) << 0x10 | (uVar5 & 0xf) << 0x18;
  param_1[3] = 0x4e;
  if (uVar6 == 0) {
    sVar1 = sceGszbufaddr(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18 | 0x100000000;
  }
  else {
    sVar1 = sceGszbufaddr(uVar5,iVar4,iVar3);
    uVar2 = (long)sVar1 | ((long)(int)param_6 & 0xfU) << 0x18;
  }
  param_1[2] = uVar2;
  param_1[5] = 0x18;
  param_1[4] = (0x800 - (long)(param_3 >> 1)) * 0x10 | 0x800 - (long)(param_4 >> 1) << 0x24;
  param_1[7] = 0x40;
  param_1[6] = (long)(iVar4 + -1) << 0x10 | (long)(iVar3 + -1) << 0x30;
  param_1[9] = 0x1a;
  param_1[8] = param_1[8] | 1;
  param_1[0xb] = 0x46;
  param_1[10] = param_1[10] | 1;
  param_1[0xd] = 0x45;
  if ((uVar5 & 2) == 0) {
    uVar5 = param_1[0xc] & 0xfffffffffffffffe;
  }
  else {
    uVar5 = param_1[0xc] | 1;
  }
  param_1[0xc] = uVar5;
  param_1[0xf] = 0x47;
  if (uVar6 == 0) {
    uVar5 = 0x30000;
  }
  else {
    uVar5 = (uVar6 & 3) << 0x11 | 0x10000;
  }
  param_1[0xe] = uVar5;
  SYNC(0);
  return 8;
}

sceGsPutDrawEnv() {
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar3 = 0;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = ((uint)*param_1 & 0x7fff) + 1;
      if (((uint)param_1 & 0x70000000) == 0x70000000) {
        uVar2 = (uint)param_1 & 0xfffffff | 0x80000000;
      }
      else {
        uVar2 = (uint)param_1 & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = uVar2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  printf("sceGsPutDrawEnv: DMA Ch.2 does not terminate\r\n");
  return 0xffffffff;
}

sceGsSetDefDBuff() {
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (ulong *)sceGsGetGParam();
  iVar6 = (param_3 << 0x10) >> 0x10;
  iVar7 = (param_4 << 0x10) >> 0x10;
  sceGsSetDefDispEnv(param_1,param_2,iVar6,iVar7,0,0);
  iVar5 = (int)param_1;
  sceGsSetDefDispEnv(iVar5 + 0x28,param_2,iVar6,iVar7,0,0);
  sceGsSetDefDrawEnv(iVar5 + 0x60,param_2,iVar6,iVar7,param_5,param_6);
  sceGsSetDefDrawEnv(iVar5 + 0x150,param_2,iVar6,iVar7,param_5,param_6);
  if (param_7 != 0) {
    iVar4 = 0x800 - ((param_4 << 0x10) >> 0x11);
    iVar3 = 0x800 - ((param_3 << 0x10) >> 0x11);
    sceGsSetDefClear(iVar5 + 0xe0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
    sceGsSetDefClear(iVar5 + 0x1d0,param_5,iVar3,iVar4,iVar6,iVar7,0,0);
  }
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x140) = 0;
  *(undefined4 *)(iVar5 + 0x144) = 0;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  uVar2 = 8;
  if (param_7 != 0) {
    uVar2 = 0xe;
  }
  *(ulong *)(iVar5 + 0x50) =
       *(ulong *)(iVar5 + 0x50) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x140) =
       *(ulong *)(iVar5 + 0x140) & 0xfffffffffff8000 | uVar2 | 0x1000000000008000;
  *(ulong *)(iVar5 + 0x58) = *(ulong *)(iVar5 + 0x58) & 0xfffffffffffffff0 | 0xe;
  *(ulong *)(iVar5 + 0x148) = *(ulong *)(iVar5 + 0x148) & 0xfffffffffffffff0 | 0xe;
  iVar6 = sceGszbufaddr(param_2,iVar6,iVar7);
  if (((*puVar1 & 0xffff0000ffff) == 0x100000001) || (*(short *)puVar1 == 0)) {
    *(ulong *)(iVar5 + 0x60) =
         *(ulong *)(iVar5 + 0x60) & 0xfffffffffffffe00 | (long)(iVar6 >> 1) & 0x1ffU;
    *(ulong *)(iVar5 + 0x38) =
         *(ulong *)(iVar5 + 0x38) & 0xfffffffffffffe00 | (long)(int)(short)(iVar6 >> 1) & 0x1ffU;
  }
  return;
}

sceGsSwapDBuff() {
  sceGsPutDispEnv((param_2 & 1) * 0x28 + param_1);
  if ((param_2 & 1) == 0) {
    sceGsPutDrawEnv(param_1 + 0x50);
  }
  else {
    sceGsPutDrawEnv(param_1 + 0x140);
  }
  return;
}

sceGsSyncV() {
  ulong uVar1;
  short *psVar2;
  uint uVar3;
  long lVar4;
  
  psVar2 = (short *)sceGsGetGParam();
  if (*(int *)(psVar2 + 4) == 0) {
    VSync();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar1 = REG_GS_CSR;
      uVar3 = (uint)(uVar1 >> 0xd) & 1;
    }
  }
  else {
    lVar4 = VSync2();
    uVar3 = 1;
    if (*psVar2 == 1) {
      uVar3 = (uint)(lVar4 >> 0xd) & 1;
    }
  }
  return uVar3;
}

sceGsSyncPath() {
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *fmt;
  uint uVar4;
  ulong uVar5;
  undefined4 in_vc13;
  
  uVar4 = 0;
  if (param_1 == 0) {
    uVar3 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar3 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: DMA Ch.1 does not terminate\r\n";
        goto LAB_00230ac4;
      }
      uVar3 = REG_DMAC_1_VIF1_CHCR;
    }
    uVar3 = REG_DMAC_2_GIF_CHCR;
    while ((uVar3 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: DMA Ch.2 does not terminate\r\n";
        goto LAB_00230ac4;
      }
      uVar3 = REG_DMAC_2_GIF_CHCR;
    }
    uVar3 = REG_VIF1_STAT;
    while ((uVar3 & 0x1f000003) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: VIF1 does not terminate\r\n";
        goto LAB_00230ac4;
      }
      uVar3 = REG_VIF1_STAT;
    }
    uVar5 = _cfc2(in_vc13);
    while ((uVar5 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: VU1 does not terminate\r\n";
        goto LAB_00230ac4;
      }
      uVar5 = _cfc2(in_vc13);
    }
    uVar3 = REG_GIF_STAT;
    while ((uVar3 & 0xc00) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        fmt = "sceGsSyncPath: GIF does not terminate\r\n";
LAB_00230ac4:
        printf(fmt);
        printf("\t<D1_CHCR=%08x:");
        printf("D1_TADR=%08x:");
        printf("D1_MADR=%08x:");
        printf("D1_QWC=%08x>\r\n");
        printf("\t<D2_CHCR=%08x:");
        printf("D2_TADR=%08x:");
        printf("D2_MADR=%08x:");
        printf("D2_QWC=%08x>\r\n");
        printf("\t<VIF1_STAT=%08x:");
        printf("GIF_STAT=%08x>\r\n");
        return 0xffffffff;
      }
      uVar3 = REG_GIF_STAT;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = REG_DMAC_1_VIF1_CHCR;
    uVar2 = REG_DMAC_2_GIF_CHCR;
    uVar4 = REG_VIF1_STAT;
    uVar3 = (uint)((uVar3 & 0x100) != 0);
    if ((uVar2 & 0x100) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((uVar4 & 0x1f000003) != 0) {
      uVar3 = uVar3 | 4;
    }
    uVar5 = _cfc2(in_vc13);
    uVar4 = REG_GIF_STAT;
    if ((uVar5 & 0x100) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar4 & 0xc00) != 0) {
      uVar3 = uVar3 | 0x10;
    }
  }
  return uVar3;
}

sceGsSetDefLoadImage() {
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_7;
  iVar3 = (int)param_8;
  uVar2 = 0;
  switch(param_4) {
  case 0:
  case 0x30:
    uVar2 = (ulong)(iVar4 * iVar3 >> 2);
    break;
  case 1:
  case 0x31:
    uVar2 = (ulong)(iVar4 * iVar3 * 3 >> 4);
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar2 = (ulong)(iVar4 * iVar3 >> 3);
    break;
  case 0x13:
  case 0x1b:
    uVar2 = (ulong)(iVar4 * iVar3 >> 4);
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar2 = (ulong)(iVar4 * iVar3 >> 5);
  }
  if ((long)uVar2 < 0x8000) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    param_1[10] = param_1[10] & 0xf3ffffffffff8000 | uVar2 & 0x7fff | 0x800000000008000;
    *param_1 = *param_1 & 0xfffffffffff8000 | 0x1000000000000004;
    param_1[1] = param_1[1] & 0xfffffffffffffff0 | 0xe;
    param_1[2] = ((long)(int)param_2 << 0x30) >> 0x10 | (long)(int)param_3 << 0x30 |
                 (long)(int)param_4 << 0x38;
    param_1[3] = 0x50;
    param_1[4] = ((long)(int)param_5 << 0x30) >> 0x10 | (long)(int)param_6 << 0x30;
    param_1[5] = 0x51;
    param_1[6] = (long)param_7 | ((long)iVar3 << 0x30) >> 0x10;
    param_1[7] = 0x52;
    param_1[9] = 0x53;
    param_1[8] = 0;
    SYNC(0);
    uVar1 = 6;
  }
  else {
    printf("sceGsSetDefLoadImage: too big size\r\n");
    uVar1 = 0;
  }
  return uVar1;
}

sceGsSetDefStoreImage() {
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = 0x6008000;
  *(undefined8 *)(param_1 + 0x1a) = 0x53;
  param_1[2] = 0x13000000;
  param_1[3] = 0x50000006;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffff8000 | 0x1000000000008005;
  *(ulong *)(param_1 + 6) = *(ulong *)(param_1 + 6) & 0xfffffffffffffff0 | 0xe;
  *(long *)(param_1 + 8) =
       (long)(param_3 << 0x10) | (long)param_2 | ((long)(int)param_4 << 0x30) >> 0x18;
  *(undefined8 *)(param_1 + 10) = 0x50;
  *(long *)(param_1 + 0xc) = (long)(param_6 << 0x10) | (long)param_5;
  *(undefined8 *)(param_1 + 0xe) = 0x51;
  *(long *)(param_1 + 0x10) = (long)param_7 | ((long)(int)param_8 << 0x30) >> 0x10;
  *(undefined8 *)(param_1 + 0x12) = 0x52;
  *(undefined8 *)(param_1 + 0x16) = 0x61;
  *(undefined8 *)(param_1 + 0x18) = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  SYNC(0);
  return 7;
}

sceGsExecLoadImage() {
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = REG_DMAC_2_GIF_CHCR;
  uVar3 = 0;
  while ((uVar2 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) goto LAB_002310a4;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  REG_DMAC_2_GIF_QWC = 6;
  if ((param_1 & 0x70000000) == 0x70000000) {
    uVar2 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    uVar2 = param_1 & 0xfffffff;
  }
  REG_DMAC_2_GIF_MADR = uVar2;
  REG_DMAC_2_GIF_CHCR = 0x101;
  uVar2 = REG_DMAC_2_GIF_CHCR;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
      REG_DMAC_2_GIF_QWC = (uint)*(undefined8 *)(param_1 + 0x50) & 0x7fff;
      if ((param_2 & 0x70000000) == 0x70000000) {
        param_2 = param_2 & 0xfffffff | 0x80000000;
      }
      else {
        param_2 = param_2 & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = param_2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
LAB_002310a4:
  printf("sceGsExecLoadImage: DMA Ch.2 does not terminate\r\n");
  return 0xffffffff;
}

sceGsExecStoreImage() {
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char *fmt;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar6 = 0;
  uVar14 = 0;
  uVar19 = 0;
  uVar5 = 0;
  uVar18 = 0;
  uVar7 = (uint)*(undefined8 *)(param_1 + 0x40);
  uVar17 = uVar7 & 0xfff;
  uVar16 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfff;
  uVar12 = 0;
  switch((uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x18) & 0x3f) {
  case 0:
  case 0x30:
    uVar14 = uVar17 * uVar16 * 4;
    uVar5 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar14 != 0) {
      uVar12 = uVar16 + 3 & 0x1ffc;
      iVar6 = (int)(uVar17 * uVar12) >> 2;
LAB_002312c0:
      iVar6 = ((iVar6 - uVar19) - uVar5) + -1;
      goto switchD_00231184_caseD_3;
    }
    break;
  case 1:
  case 0x31:
    uVar14 = uVar17 * uVar16 * 3;
    uVar5 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar14 != 0) {
      uVar12 = uVar16 + 0xf & 0x1ff0;
      iVar6 = ((((int)(uVar17 * uVar12 * 3) >> 4) - uVar19) - uVar5) + -1;
      goto switchD_00231184_caseD_3;
    }
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar14 = uVar17 * uVar16 * 2;
    uVar5 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar14 != 0) {
      uVar12 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar12) >> 3;
      goto LAB_002312c0;
    }
    break;
  default:
    goto switchD_00231184_caseD_3;
  case 0x13:
  case 0x1b:
    uVar5 = (int)(uVar17 * uVar16) >> 4;
    uVar14 = uVar17 * uVar16 & 0xf;
    uVar19 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar14 != 0) {
      uVar12 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar12) >> 4;
      goto LAB_002312c0;
    }
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar5 = (int)(uVar17 * uVar16) >> 5;
    uVar14 = (int)(uVar17 * uVar16) >> 1 & 0xf;
    uVar19 = uVar5 & 0xfffffff8;
    uVar5 = uVar5 & 7;
    if (uVar14 != 0) {
      uVar12 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar12) >> 5;
      goto LAB_002312c0;
    }
  }
  iVar6 = 0;
  uVar12 = uVar16;
switchD_00231184_caseD_3:
  if (uVar14 != 0) {
    *(ulong *)(param_1 + 0x40 | 0x20000000) = (long)(int)(uVar7 & 0xfff) | (ulong)uVar12 << 0x20;
  }
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) goto LAB_00231498;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = GsGetIMR();
  uVar10 = GsPutIMR(uVar9 | 0x200);
  REG_GS_CSR = 2;
  REG_DMAC_1_VIF1_QWC = 7;
  if ((param_1 & 0x70000000) == 0x70000000) {
    param_1 = param_1 & 0xfffffff | 0x80000000;
  }
  else {
    param_1 = param_1 & 0xfffffff;
  }
  REG_DMAC_1_VIF1_MADR = param_1;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
LAB_00231498:
      printf("sceGsExecStoreImage: DMA Ch.1 does not terminate\r\n");
      return 0xffffffff;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar9 = REG_GS_CSR;
  while ((uVar9 & 2) == 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
      printf("sceGsExecStoreImage: GS does not terminate\r\n");
      REG_VIF1_FIFO = (int)init_mp3_3._0_8_;
      DAT_10005004 = (int)((ulong)init_mp3_3._0_8_ >> 0x20);
      DAT_10005008 = init_mp3_3._8_4_;
      DAT_1000500c = init_mp3_3._12_4_;
      return 0xffffffff;
    }
    uVar9 = REG_GS_CSR;
  }
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  if (uVar19 != 0) {
    REG_DMAC_1_VIF1_QWC = uVar19;
    if ((param_2 & 0x70000000) == 0x70000000) {
      uVar7 = param_2 & 0xfffffff | 0x80000000;
    }
    else {
      uVar7 = param_2 & 0xfffffff;
    }
    REG_DMAC_1_VIF1_MADR = uVar7;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar18;
      uVar18 = uVar18 + 1;
      if (bVar1) {
        fmt = "sceGsExecStoreImage: DMA Ch.1 (GS->MEM) does not terminate\r\n";
        goto LAB_002314f0;
      }
      uVar7 = REG_DMAC_1_VIF1_CHCR;
    }
  }
  iVar13 = 0;
  if (uVar5 != 0) {
    puVar15 = (undefined4 *)(uVar19 * 0x10 + param_2);
    do {
      uVar7 = REG_VIF1_STAT;
      while ((uVar7 & 0x1f000000) == 0) {
        bVar1 = 0x1000000 < uVar18;
        uVar18 = uVar18 + 1;
        if (bVar1) goto LAB_002314e8;
        uVar7 = REG_VIF1_STAT;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005008;
      uVar4 = DAT_1000500c;
      iVar13 = iVar13 + 1;
      *puVar15 = (int)uVar2;
      puVar15[1] = (int)((ulong)uVar2 >> 0x20);
      puVar15[2] = uVar3;
      puVar15[3] = uVar4;
      puVar15 = puVar15 + 4;
    } while (iVar13 < (int)uVar5);
  }
  if (uVar14 != 0) {
    uVar7 = REG_VIF1_STAT;
    while ((uVar7 & 0x1f000000) == 0) {
      bVar1 = 0x1000000 < uVar18;
      uVar18 = uVar18 + 1;
      if (bVar1) {
LAB_002314e8:
        fmt = "sceGsExecStoreImage: Enough data does not reach VIF1\n";
LAB_002314f0:
        printf(fmt);
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        REG_GIF_CTRL = 1;
        REG_VIF1_FBRST = 1;
        return 0xffffffff;
      }
      uVar7 = REG_VIF1_STAT;
    }
    iVar13 = 0;
    uVar2 = REG_VIF1_FIFO;
    uStack_88 = DAT_10005008;
    uStack_84 = DAT_1000500c;
    local_90 = (int)uVar2;
    uStack_8c = (int)((ulong)uVar2 >> 0x20);
    if (uVar14 != 0) {
      do {
        puVar8 = (undefined *)((int)&local_90 + iVar13);
        puVar11 = (undefined *)((uVar19 + uVar5) * 0x10 + param_2 + iVar13);
        iVar13 = iVar13 + 1;
        *puVar11 = *puVar8;
      } while (iVar13 < (int)uVar14);
    }
    iVar13 = 0;
    if (0 < iVar6) {
      do {
        uVar14 = REG_VIF1_STAT;
        while ((uVar14 & 0x1f000000) == 0) {
          bVar1 = 0x1000000 < uVar18;
          uVar18 = uVar18 + 1;
          if (bVar1) goto LAB_002314e8;
          uVar14 = REG_VIF1_STAT;
        }
        uVar2 = REG_VIF1_FIFO;
        uStack_88 = DAT_10005008;
        uStack_84 = DAT_1000500c;
        iVar13 = iVar13 + 1;
        local_90 = (undefined4)uVar2;
        uStack_8c = (undefined4)((ulong)uVar2 >> 0x20);
      } while (iVar13 < iVar6);
    }
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  GsPutIMR(uVar10);
  REG_GS_CSR = 2;
  REG_VIF1_FIFO = (int)init_mp3_3._0_8_;
  DAT_10005004 = (int)((ulong)init_mp3_3._0_8_ >> 0x20);
  DAT_10005008 = init_mp3_3._8_4_;
  DAT_1000500c = init_mp3_3._12_4_;
  return 0;
}

sceGsSyncVCallback() {
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = sceGsGetGParam();
  uVar1 = *(undefined4 *)(iVar2 + 8);
  *(int *)(iVar2 + 8) = (int)param_1;
  uVar3 = AddIntcHandler(2,param_1,0xffffffffffffffff);
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  EnableIntc(2);
  return uVar1;
}

sceGsPutIMR() {
  undefined8 uVar1;
  
  uVar1 = GsGetIMR();
  GsPutIMR(param_1);
  return uVar1;
}

sceGsSetHalfOffset() {
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)param_3 -
          ((ulong)(long)(int)(((ushort)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x30) & 0x7ff) + 1
                             ) >> 1);
  if (param_4 == 0) {
    uVar1 = lVar2 << 0x24;
  }
  else {
    uVar1 = lVar2 * 0x10 + 8 << 0x20;
  }
  *(ulong *)(param_1 + 0x20) =
       ((long)param_2 -
       ((ulong)(long)(int)(((uint)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x10) & 0x7ff) + 1) >>
       1)) * 0x10 | uVar1;
  return;
}

sceGsSetDefDispEnv() {
  int iVar1;
  short sVar2;
  short *psVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = (int)param_3;
  iVar12 = (int)param_4;
  iVar13 = (int)param_5;
  iVar11 = (int)param_6;
  psVar3 = (short *)sceGsGetGParam();
  *param_1 = 0x66;
  sVar2 = *psVar3;
  if (*psVar3 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
    if (psVar3[2] == 0) {
      uVar4 = 1;
    }
  }
  param_1[1] = uVar4;
  param_1[2] = ((long)(int)param_2 & 0xfU) << 0xf | ((long)(iVar10 + 0x3f >> 6) & 0x3fU) << 9;
  if (psVar3[1] == 2) {
    if (sVar2 != 1) {
      iVar1 = (iVar10 + 0x9ff) / iVar10;
      iVar11 = iVar11 + 0x19;
      if (iVar10 == 0) {
        trap(7);
      }
      uVar8 = (long)(iVar13 * iVar1) + 0x27c;
LAB_00231ac0:
      uVar8 = (long)(iVar1 + -1) << 0x17 | (long)(iVar1 * iVar10 + -1) << 0x20 |
              uVar8 & 0xfff | (long)(iVar12 + -1) << 0x2c | ((long)iVar11 & 0xfffU) << 0xc;
      param_1[3] = uVar8;
      goto LAB_00231af0;
    }
    iVar1 = (iVar10 + 0x9ff) / iVar10;
    if (iVar10 == 0) {
      trap(7);
    }
    uVar8 = ((long)(iVar11 + 0x32) & 0xfffU) << 0xc;
    uVar9 = (long)(iVar1 + -1) << 0x17;
    uVar7 = (long)(iVar13 * iVar1) + 0x27cU & 0xfff;
    uVar6 = (long)(iVar1 * iVar10 + -1) << 0x20;
    if (psVar3[2] == 0) {
LAB_00231a6c:
      lVar5 = (long)(iVar12 + -1);
      uVar9 = uVar9 | uVar6;
    }
    else {
      uVar9 = uVar9 | uVar6;
      lVar5 = (long)(iVar12 * 2 + -1);
    }
  }
  else {
    if (psVar3[1] != 3) {
      iVar11 = printf("sceGsDefDispEnv:Not support displaymode for %d!!\n");
      uVar8 = (ulong)iVar11;
      goto LAB_00231af0;
    }
    if (sVar2 != 1) {
      iVar1 = (iVar10 + 0x9ff) / iVar10;
      iVar11 = iVar11 + 0x24;
      if (iVar10 == 0) {
        trap(7);
      }
      uVar8 = (long)(iVar13 * iVar1) + 0x290;
      goto LAB_00231ac0;
    }
    iVar1 = (iVar10 + 0x9ff) / iVar10;
    if (iVar10 == 0) {
      trap(7);
    }
    uVar8 = ((long)(iVar11 + 0x48) & 0xfffU) << 0xc;
    uVar9 = (long)(iVar1 + -1) << 0x17;
    uVar7 = (long)(iVar13 * iVar1) + 0x290U & 0xfff;
    uVar6 = (long)(iVar1 * iVar10 + -1) << 0x20;
    if (psVar3[2] == 0) goto LAB_00231a6c;
    uVar9 = uVar9 | uVar6;
    lVar5 = (long)(iVar12 * 2 + -1);
  }
  uVar8 = uVar9 | uVar7 | lVar5 << 0x2c | uVar8;
  param_1[3] = uVar8;
LAB_00231af0:
  param_1[4] = 0;
  return uVar8;
}

sceGszbufaddr() {
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  puVar1 = (ulong *)sceGsGetGParam();
  iVar2 = param_2 + 0x3f;
  iVar3 = param_2 + 0x7e;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if ((param_1 & 2) == 0) {
    iVar2 = iVar4 + 0x3e;
    if (-1 < iVar4 + 0x1f) {
      iVar2 = iVar4 + 0x1f;
    }
    iVar2 = iVar2 >> 5;
  }
  else {
    iVar2 = iVar4 + 0x7e;
    if (-1 < iVar4 + 0x3f) {
      iVar2 = iVar4 + 0x3f;
    }
    iVar2 = iVar2 >> 6;
  }
  iVar2 = (iVar3 >> 6) * iVar2;
  if ((*puVar1 & 0xffff0000ffff) == 1) {
    iVar2 = iVar2 * 0x10000;
  }
  else {
    iVar2 = iVar2 * 0x20000;
  }
  return iVar2 >> 0x10;
}

sceGsSetDefClear() {
  param_1[2] = 6;
  param_1[5] = 1;
  param_1[4] = param_7 & 0xff | 0x3f80000000000000 | (ulong)param_9 << 0x10 | (param_8 & 0xff) << 8
               | (ulong)param_10 << 0x18;
  param_1[6] = (long)((int)param_3 << 4) | (long)((int)param_4 << 4) << 0x10 |
               (ulong)param_11 << 0x20;
  param_1[9] = 5;
  param_1[8] = (long)(((int)param_3 + (int)param_5) * 0x10) |
               (long)(((int)param_4 + (int)param_6) * 0x10) << 0x10 | (ulong)param_11 << 0x20;
  param_1[0xb] = 0x47;
  param_1[1] = 0x47;
  *param_1 = 0x30000;
  param_1[3] = 0;
  param_1[7] = 5;
  if ((long)(int)param_2 == 0) {
    param_1[10] = 0x30000;
  }
  else {
    param_1[10] = ((long)(int)param_2 & 3U) << 0x11 | 0x10000;
  }
  SYNC(0);
  return 6;
}
