// STATUS: NOT STARTED


static memclr() {
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}

sceDmaGetChan() {
  if (param_1 < 10) {
    return *(undefined4 *)(dch + (int)param_1 * 4);
  }
  return 0;
}

sceDmaReset() {
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined auStack_50 [32];
  
  puVar4 = dch;
  uVar2 = REG_DMAC_CTRL;
  puVar6 = isclr;
  iVar5 = 9;
  do {
    if (*(int *)puVar6 != 0) {
      puVar1 = *(undefined4 **)puVar4;
      puVar1[0x20] = 0;
      *puVar1 = 0;
      puVar1[0xc] = 0;
      puVar1[4] = 0;
      puVar1[0x14] = 0;
      puVar1[0x10] = 0;
    }
    puVar4 = (undefined1 *)((int)puVar4 + 4);
    iVar5 = iVar5 + -1;
    puVar6 = (undefined1 *)((int)puVar6 + 4);
  } while (-1 < iVar5);
  REG_DMAC_STAT = 0xff1f;
  uVar3 = REG_DMAC_STAT;
  REG_DMAC_STAT = uVar3 & 0xff1f0000;
  memclr(auStack_50,0x14);
  sceDmaPutEnv(auStack_50);
  if (param_1 == 1) {
    uVar3 = REG_DMAC_CTRL;
    REG_DMAC_CTRL = uVar3 | 1;
  }
  return uVar2 & 1;
}

sceDmaDebug() {
  undefined4 uVar1;
  
  uVar1 = sceDmaDebugMode;
  sceDmaDebugMode = param_1;
  return uVar1;
}

sceDmaPutEnv() {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = REG_DMAC_CTRL;
  if (9 < *param_1) {
    return 0xffffffff;
  }
  if (9 < param_1[1]) {
    return 0xfffffffe;
  }
  if (9 < param_1[2]) {
    return 0xfffffffd;
  }
  if (6 < param_1[3]) {
    return 0xfffffffc;
  }
  uVar4 = uVar4 & 0xffffffcf | (uint)(byte)ststbl[*param_1] << 4;
  if (param_1[3] == 0) {
    uVar4 = uVar4 & 0xffffff31 | (uint)(byte)stdtbl[param_1[1]] << 6 |
            (uint)(byte)mfdtbl[param_1[2]] << 2;
  }
  else {
    uVar4 = (uVar4 & 0xffffff33 | (uint)(byte)stdtbl[param_1[1]] << 6 |
            (uint)(byte)mfdtbl[param_1[2]] << 2) & 0xfffffcff | 2 | (param_1[3] - 1) * 0x100;
  }
  REG_DMAC_CTRL = uVar4;
  REG_DMAC_PCR = CONCAT22(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6));
  REG_DMAC_SQWC = *(undefined4 *)(param_1 + 8);
  REG_DMAC_RBOR = *(undefined4 *)(param_1 + 0xc);
  REG_DMAC_RBSR = *(undefined4 *)(param_1 + 0x10);
  uVar4 = (uint)(param_1 + 7) & 7;
  uVar2 = (uint)param_1 & 7;
  uVar1 = (uint)(param_1 + 0xf) & 7;
  uVar3 = (uint)(param_1 + 8) & 7;
  sceDmaCurrentEnv._0_8_ =
       (*(long *)(param_1 + 7 + -uVar4) << (7 - uVar4) * 8 |
       0xffffffffffffffffU >> (uVar4 + 1) * 8 & 0x1000e040) & -1L << (8 - uVar2) * 8 |
       *(ulong *)(param_1 + -uVar2) >> uVar2 * 8;
  sceDmaCurrentEnv._8_8_ =
       (*(long *)(param_1 + 0xf + -uVar1) << (7 - uVar1) * 8 |
       0xffffffffffffffffU >> (uVar1 + 1) * 8 & 0x1000e000) & -1L << (8 - uVar3) * 8 |
       *(ulong *)(param_1 + 8 + -uVar3) >> uVar3 * 8;
  sceDmaCurrentEnv._16_4_ = *(undefined4 *)(param_1 + 0x10);
  return 0;
}

sceDmaGetEnv() {
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = sceDmaCurrentEnv._16_4_;
  uVar4 = sceDmaCurrentEnv._8_8_;
  uVar3 = sceDmaCurrentEnv._0_8_;
  uVar6 = (uint)param_1;
  uVar1 = uVar6 + 7 & 7;
  puVar2 = (ulong *)((uVar6 + 7) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | sceDmaCurrentEnv._0_8_ >> (7 - uVar1) * 8;
  uVar1 = uVar6 & 7;
  *(ulong *)(uVar6 - uVar1) =
       uVar3 << uVar1 * 8 | *(ulong *)(uVar6 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  uVar1 = uVar6 + 0xf & 7;
  puVar2 = (ulong *)((uVar6 + 0xf) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | uVar4 >> (7 - uVar1) * 8;
  uVar1 = uVar6 + 8 & 7;
  puVar2 = (ulong *)((uVar6 + 8) - uVar1);
  *puVar2 = uVar4 << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  *(undefined4 *)(uVar6 + 0x10) = uVar5;
  return param_1;
}

sceDmaPutStallAddr() {
  undefined4 uVar1;
  
  uVar1 = REG_DMAC_STADR;
  if (param_1 != -1) {
    REG_DMAC_STADR = (int)param_1;
  }
  return uVar1;
}

sceDmaSend() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[0xc] != 0xffffffff) {
    param_1[0xc] = param_2;
  }
  param_1[8] = 0;
  *param_1 = *param_1 & 0xfffffff3 | 0x105;
  return;
}

sceDmaSendN() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff3 | 0x101;
  return;
}

sceDmaSendI() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff3 | 0x109;
  return;
}

sceDmaRecv() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  param_1[8] = 0;
  *param_1 = *param_1 & 0xfffffff2 | 0x104;
  return;
}

sceDmaRecvN() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff2 | 0x100;
  return;
}

sceDmaRecvI() {
  int iVar1;
  
  if ((*param_1 & 0x100) != 0) {
    iVar1 = 0xffffff;
    do {
      if (iVar1 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      iVar1 = iVar1 + -1;
    } while ((*param_1 & 0x100) != 0);
  }
  if (param_1[4] != 0xffffffff) {
    param_1[4] = param_2;
  }
  param_1[8] = param_3;
  *param_1 = *param_1 & 0xfffffff2 | 0x108;
  return;
}

sceDmaSync() {
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1 >> 8 & 1;
  }
  else {
    uVar1 = *param_1;
    if (param_3 == 0) {
      param_3 = 0x1000000;
    }
    while ((uVar1 & 0x100) != 0) {
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      uVar1 = *param_1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

sceDmaWatch() {
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 1) {
    bVar2 = param_1[4] < param_2;
  }
  else {
    uVar1 = param_1[4];
    if (param_4 == 0) {
      param_4 = 0x1000000;
    }
    while (uVar1 < param_2) {
      param_4 = param_4 + -1;
      if (param_4 < 0) {
        printf("libdma: sync timeout\n");
        if ((*param_1 >> 8 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffeff;
        }
      }
      uVar1 = param_1[4];
    }
    bVar2 = false;
  }
  return bVar2;
}

sceDmaPause() {
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffeff;
  return uVar1 >> 8 & 1;
}

sceDmaRestart() {
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfffffeff;
  return uVar1 >> 8 & 1;
}
