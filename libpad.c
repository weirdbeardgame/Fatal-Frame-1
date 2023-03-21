// STATUS: NOT STARTED


static _send_to_iop() {
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint *local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  
  iVar4 = param_2 * 0x1c + param_1 * 0x70;
  local_170 = *(uint **)(&DAT_004071d4 + iVar4);
  lVar3 = sceSifDmaStat(*(undefined4 *)(&DAT_004071dc + iVar4));
  puVar2 = &DAT_00350000;
  if (lVar3 < 0) {
    uVar1 = *local_170;
    local_16c = *(int *)(&DAT_004071d8 + iVar4);
    *local_170 = uVar1 + 1;
    local_16c = local_16c + (uVar1 + 1 & 1) * 0x20;
    SyncDCache(local_170,local_170 + 8);
    local_168 = 0x20;
    local_164 = 0;
    lVar3 = sceSifSetDma(&local_170,1);
    if ((lVar3 == 0) && (isWarning != 0)) {
      printf("libpad: sceSifSetDma faild\n");
    }
    iVar4 = param_2 * 0x1c + param_1 * 0x70;
    puVar2 = &PadInfo + iVar4;
    *(int *)(&DAT_004071dc + iVar4) = (int)lVar3;
  }
  else if (isWarning != 0) {
    puVar2 = (undefined *)printf("libpad: sceSifSetDma faild\n");
  }
  return puVar2;
}

scePadInit() {
  int iVar1;
  undefined8 uVar2;
  
  ram0x00348280 = 1;
  while( true ) {
    sceSifBindRpc(0x407180,0xffffffff80000100,0);
    iVar1 = 0x10000;
    if (DAT_004071a4 != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  while( true ) {
    sceSifBindRpc(0x4071a8,0xffffffff80000101,0);
    iVar1 = 0x10000;
    if (DAT_004071cc != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  iVar1 = scePadGetModVersion();
  if (iVar1 >> 8 == 4) {
    uVar2 = scePadInit2(param_1);
  }
  else {
    if (isWarning != 0) {
      printf("libpad: Module version mismatch ");
      printf("[libpad.a = %d.%d, padman.irx = %d.%d]\n");
    }
    uVar2 = 0;
  }
  return uVar2;
}

static scePadInit2() {
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = &DAT_00407254;
  iVar4 = 3;
  do {
    puVar1[-0x1d] = 0;
    iVar4 = iVar4 + -1;
    puVar1[-0x1b] = 0;
    puVar1[-0x1c] = 0;
    puVar1[-1] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 7;
  } while (-1 < iVar4);
  buffer = 0x10;
  DAT_004074d0 = 0;
  lVar3 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  uVar2 = DAT_004074cc;
  if (lVar3 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

scePadEnd() {
  int iVar1;
  long lVar2;
  
  buffer = 0xf;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  if (lVar2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_004074cc;
    if (DAT_004074cc == 1) {
      ram0x00348280 = 0;
    }
  }
  return iVar1;
}

scePadPortOpen() {
  undefined4 uVar1;
  long lVar2;
  void *__s;
  int iVar3;
  
  if (((uint)param_3 & 0x3f) == 0) {
    if ((&DAT_004071e0)[param_1 * 0x1c + param_2 * 7] == 1) {
      if (isWarning != 0) {
        printf("libpad: pad port is already open [%d][%d]\n");
        return 0;
      }
    }
    else {
      iVar3 = 1;
      __s = param_3;
      do {
        *(undefined4 *)((int)__s + 0x58) = 0;
        *(undefined *)((int)__s + 0x70) = 5;
        *(undefined *)((int)__s + 0x71) = 2;
        *(undefined *)((int)__s + 0x67) = 0;
        iVar3 = iVar3 + -1;
        memset(__s,0xff,0x20);
        *(undefined4 *)((int)__s + 0x60) = 0;
        __s = (void *)((int)__s + 0x80);
      } while (-1 < iVar3);
      buffer = 1;
      DAT_004074c4 = param_1;
      DAT_004074c8 = param_2;
      DAT_004074d0 = param_3;
      lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
      uVar1 = DAT_004074d4;
      if (-1 < lVar2) {
        iVar3 = param_2 * 0x1c + param_1 * 0x70;
        (&DAT_004071e0)[param_1 * 0x1c + param_2 * 7] = 1;
        *(undefined4 *)(&dma_iop_data + param_1 * 0x100 + param_2 * 0x40) = 0;
        *(undefined4 *)(&DAT_004071dc + iVar3) = 0;
        *(undefined4 *)(&DAT_004071d8 + iVar3) = uVar1;
        *(void **)(&PadInfo + iVar3) = param_3;
        *(undefined **)(&DAT_004071d4 + iVar3) = &dma_iop_data + param_1 * 0x100 + param_2 * 0x40;
        return DAT_004074cc;
      }
    }
  }
  else if (isWarning != 0) {
    printf("libpad: buffer addr is not 64 byte align. %08x\n");
    return 0;
  }
  return 0;
}

scePadPortClose() {
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((&DAT_004071e0)[param_1 * 0x1c + param_2 * 7] != 0) {
    buffer = 0xe;
    DAT_004074d0 = 1;
    DAT_004074c4 = param_1;
    DAT_004074c8 = param_2;
    lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
    if (lVar2 < 0) {
      uVar1 = 0;
    }
    else {
      (&DAT_004071e0)[param_1 * 0x1c + param_2 * 7] = 0;
      uVar1 = DAT_004074cc;
    }
  }
  return uVar1;
}

static scePadGetDmaStr() {
  int iVar1;
  
  iVar1 = *(int *)(&PadInfo + param_2 * 0x1c + param_1 * 0x70);
  SyncDCache(iVar1,iVar1 + 0x100);
  return iVar1 + (uint)(*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8)) * 0x80;
}

scePadGetFrameCount() {
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
  }
  return uVar2;
}

scePadRead() {
  void *__src;
  undefined4 uVar1;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar1 = 0;
  }
  else {
    __src = (void *)scePadGetDmaStr(param_1);
    memcpy(param_3,__src,(long)*(int *)((int)__src + 0x60));
    uVar1 = *(undefined4 *)((int)__src + 0x60);
  }
  return uVar1;
}

scePadGetState() {
  char cVar1;
  int iVar2;
  
  cVar1 = 'c';
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    cVar1 = *(char *)(iVar2 + 0x70);
    if (cVar1 == '\x06') {
      if (*(char *)(iVar2 + 0x71) == '\x02') {
        cVar1 = '\x05';
      }
      else {
        cVar1 = *(char *)(iVar2 + 0x70);
      }
    }
  }
  return cVar1;
}

scePadStateIntToStr() {
  char *pcVar1;
  
  if (param_1 < 8) {
    pcVar1 = strcpy(param_2,*(char **)(PadStateStr + (int)param_1 * 4));
    return pcVar1;
  }
  *param_2 = DAT_00353778;
  return "#";
}

static scePadSetReqState() {
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7];
  if (iVar1 != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    *(undefined *)(iVar2 + 0x71) = param_3;
  }
  return iVar1 != 0;
}

scePadGetReqState() {
  undefined uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar2 = scePadGetDmaStr(param_1);
    uVar1 = *(undefined *)(iVar2 + 0x71);
  }
  return uVar1;
}

scePadReqIntToStr() {
  char *pcVar1;
  
  if (param_1 < 4) {
    pcVar1 = strcpy(param_2,*(char **)(ReqStateStr + (int)param_1 * 4));
    return pcVar1;
  }
  *param_2 = DAT_00353778;
  return "#";
}

scePadInfoAct() {
  int iVar1;
  int iVar2;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) != '\x01') {
      return 0;
    }
    if (*(byte *)(iVar1 + 100) < 2) {
      return 0;
    }
    if (param_3 < (long)(ulong)*(byte *)(iVar1 + 0x6a)) {
      if (param_3 == -1) {
        return (ulong)*(byte *)(iVar1 + 0x6a);
      }
      iVar2 = (int)param_3;
      if (param_4 == 2) {
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x31);
      }
      if (param_4 < 3) {
        if (param_4 != 1) {
          return 0;
        }
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x30);
      }
      if (param_4 == 3) {
        return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x32);
      }
      if (param_4 != 4) {
        return 0;
      }
      return (ulong)*(byte *)(iVar1 + iVar2 * 4 + 0x33);
    }
  }
  return 0;
}

scePadInfoComb() {
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = scePadGetDmaStr(param_1);
    uVar2 = 0;
    if (((*(char *)(iVar1 + 0x72) == '\x01') && (uVar2 = 0, 1 < *(byte *)(iVar1 + 100))) &&
       (uVar2 = (ulong)*(byte *)(iVar1 + 0x6b), param_3 != -1)) {
      if (param_3 < (long)uVar2) {
        iVar3 = (int)param_3;
        if (param_4 == 0) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x41);
        }
        else if (param_4 < 1) {
          uVar2 = 0;
          if (param_4 == -1) {
            uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x40);
          }
        }
        else if (param_4 == 1) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x42);
        }
        else {
          uVar2 = 0;
          if (param_4 == 2) {
            uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x43);
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

scePadInfoMode() {
  int iVar1;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) != '\x01') {
      return 0;
    }
    if (*(char *)(iVar1 + 0x71) == '\x02') {
      return 0;
    }
    if (param_3 == 2) {
      if (*(char *)(iVar1 + 100) == '\x01') {
        return 0;
      }
      param_4 = (uint)*(byte *)(iVar1 + 0x69);
LAB_0022e17c:
      return (uint)*(ushort *)(iVar1 + param_4 * 2 + 0x50);
    }
    if (param_3 < 3) {
      if (param_3 != 1) {
        return 0;
      }
      if (*(byte *)(iVar1 + 0x65) != 0xf3) {
        return (uint)(*(byte *)(iVar1 + 0x65) >> 4);
      }
    }
    else {
      if (param_3 == 3) {
        if (*(char *)(iVar1 + 100) == '\x01') {
          return 0;
        }
        return (uint)*(byte *)(iVar1 + 0x69);
      }
      if (param_3 != 4) {
        return 0;
      }
      if (*(char *)(iVar1 + 100) != '\x01') {
        if (param_4 == 0xffffffff) {
          return (uint)*(byte *)(iVar1 + 0x68);
        }
        if ((int)param_4 < (int)(uint)*(byte *)(iVar1 + 0x68)) goto LAB_0022e17c;
      }
    }
  }
  return 0;
}

scePadSetMainMode() {
  int iVar1;
  long lVar2;
  
  buffer = 6;
  DAT_004074c4 = (undefined4)param_1;
  DAT_004074c8 = (undefined4)param_2;
  DAT_004074cc = param_3;
  DAT_004074d0 = param_4;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  if (lVar2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_004074d4;
    if (DAT_004074d4 == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar1 = DAT_004074d4;
    }
  }
  return iVar1;
}

scePadSetActDirect() {
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar1 = scePadGetDmaStr();
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x72) == '\x01') {
    iVar5 = 0;
    iVar1 = *(int *)(&DAT_004071d4 + (int)param_2 * 0x1c + (int)param_1 * 0x70);
    do {
      puVar2 = (undefined *)(param_3 + iVar5);
      puVar4 = (undefined *)(iVar1 + 0xc + iVar5);
      iVar5 = iVar5 + 1;
      *puVar4 = *puVar2;
    } while (iVar5 < 6);
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 8) = 6;
    _send_to_iop(param_1,param_2);
    uVar3 = 1;
  }
  return uVar3;
}

scePadSetActAlign() {
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  
  buffer = 8;
  DAT_004074c4 = (undefined4)param_1;
  iVar4 = 0;
  DAT_004074c8 = (undefined4)param_2;
  do {
    puVar1 = (undefined *)(param_3 + iVar4);
    puVar3 = (undefined *)((int)&DAT_004074cc + iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar1;
  } while (iVar4 < 6);
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  if (lVar2 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_004074d4;
    if (DAT_004074d4 == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar4 = DAT_004074d4;
    }
  }
  return iVar4;
}

static scePadGetButtonMask() {
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    iVar1 = scePadGetDmaStr(param_1);
    if (*(char *)(iVar1 + 0x72) == '\x01') {
      iVar2 = 0;
      if ((1 < *(byte *)(iVar1 + 100)) && (iVar2 = 0, 1 < *(byte *)(iVar1 + 0x66))) {
        iVar2 = (uint)*(byte *)(iVar1 + 0x79) + (uint)*(byte *)(iVar1 + 0x7c) * 0x1000000 +
                (uint)*(byte *)(iVar1 + 0x7b) * 0x10000 + (uint)*(byte *)(iVar1 + 0x7a) * 0x100;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

static scePadSetButtonInfo() {
  int iVar1;
  long lVar2;
  
  buffer = 10;
  DAT_004074c4 = (undefined4)param_1;
  DAT_004074c8 = (undefined4)param_2;
  DAT_004074cc = param_3;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  if (lVar2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_004074d0;
    if (DAT_004074d0 == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar1 = DAT_004074d0;
    }
  }
  return iVar1;
}

scePadInfoPressMode() {
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] != 0) {
    lVar2 = scePadGetButtonMask(param_1);
    bVar1 = lVar2 == 0x3ffff;
  }
  return bVar1;
}

scePadEnterPressMode() {
  undefined8 uVar1;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = scePadSetButtonInfo(param_1,param_2,0xfff);
  }
  return uVar1;
}

scePadExitPressMode() {
  undefined8 uVar1;
  
  if ((&DAT_004071e0)[(int)param_1 * 0x1c + param_2 * 7] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = scePadSetButtonInfo(param_1,param_2,0);
  }
  return uVar1;
}

static scePadSetVrefParam() {
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  DAT_004074c4 = (undefined4)param_1;
  buffer = 0xb;
  _DAT_004074c8 = param_2 & 0xffffffff;
  uVar1 = param_3 + 7 & 7;
  uVar2 = param_3 & 7;
  uVar4 = (*(long *)((param_3 + 7) - uVar1) << (7 - uVar1) * 8 |
          0xffffffffffffffffU >> (uVar1 + 1) * 8 & 0x400000) & -1L << (8 - uVar2) * 8 |
          *(ulong *)(param_3 - uVar2) >> uVar2 * 8;
  uVar1 = param_3 + 0xb & 3;
  uVar2 = param_3 + 8 & 3;
  _DAT_004074c8 = uVar4 << 0x20 | _DAT_004074c8;
  _DAT_004074d0 =
       CONCAT44((*(int *)((param_3 + 0xb) - uVar1) << (3 - uVar1) * 8 |
                0xffffffffU >> (uVar1 + 1) * 8 & 0xb) & -1 << (4 - uVar2) * 8 |
                *(uint *)((param_3 + 8) - uVar2) >> uVar2 * 8,(int)(uVar4 >> 0x20));
  lVar5 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  if (lVar5 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_004074dc;
    if (DAT_004074dc == 1) {
      scePadSetReqState(param_1,param_2,2);
      iVar3 = DAT_004074dc;
    }
  }
  return iVar3;
}

static scePadGetPortMax() {
  undefined4 uVar1;
  long lVar2;
  
  buffer = 0xc;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  uVar1 = DAT_004074cc;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

scePadGetSlotMax() {
  undefined4 uVar1;
  long lVar2;
  
  buffer = 0xd;
  DAT_004074c4 = param_1;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  uVar1 = DAT_004074cc;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

static scePadGetModVersion() {
  undefined4 uVar1;
  long lVar2;
  
  buffer = 0x12;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  uVar1 = DAT_004074cc;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

scePadSetWarningLevel() {
  undefined4 uVar1;
  long lVar2;
  
  buffer = 0x14;
  DAT_004074c4 = param_1;
  lVar2 = sceSifCallRpc(0x407180,1,0,0x4074c0,0x80,0x4074c0,0x80,0);
  uVar1 = DAT_004074c8;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}
