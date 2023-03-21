// STATUS: NOT STARTED


static _sceFsIobSemaMK() {
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  
  if (_fs_iob_semid == &_heap_size) {
    local_2c = 0;
    local_3c = 1;
    local_38 = 1;
    _fs_iob_semid = (undefined *)CreateSema(auStack_40);
    _fs_fsq_semid = (undefined *)CreateSema(auStack_40);
  }
  return;
}

static new_iob() {
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  puVar1 = _fs_iob_semid;
  puVar3 = &_iob;
  iVar2 = DAT_00405e44;
  while( true ) {
    if (iVar2 == 0) {
      *(undefined4 *)(puVar3 + 4) = 0x10000000;
      SignalSema(puVar1);
      return puVar3;
    }
    if ((undefined *)0x40603f < puVar3 + 0x10) break;
    iVar2 = *(int *)(puVar3 + 0x14);
    puVar3 = puVar3 + 0x10;
  }
  SignalSema(_fs_iob_semid);
  return (undefined *)0x0;
}

static get_iob() {
  undefined *puVar1;
  
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  if (param_1 < 0x20) {
    puVar1 = &_iob + (int)param_1 * 0x10;
    SignalSema(_fs_iob_semid);
  }
  else {
    SignalSema(_fs_iob_semid);
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

static _sceFs_Rcv_Intr() {
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  size_t __n;
  undefined *puVar13;
  ulong uVar14;
  undefined local_30 [4];
  undefined local_2c [4];
  undefined local_28 [4];
  undefined local_24 [4];
  undefined local_20 [4];
  undefined local_1c [12];
  
  puVar13 = local_30 + 3;
  uVar3 = (uint)puVar13 & 3;
  *(uint *)(puVar13 + -uVar3) =
       *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 | uRam20405a00 >> (3 - uVar3) * 8;
  local_30 = (undefined  [4])uRam20405a00;
  puVar13 = local_2c + 3;
  uVar3 = (uint)puVar13 & 3;
  *(uint *)(puVar13 + -uVar3) =
       *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 | uRam20405a04 >> (3 - uVar3) * 8;
  local_2c = (undefined  [4])uRam20405a04;
  puVar13 = local_28 + 3;
  uVar3 = (uint)puVar13 & 3;
  *(uint *)(puVar13 + -uVar3) =
       *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)pvRam20405a08 >> (3 - uVar3) * 8;
  local_28 = (undefined  [4])pvRam20405a08;
  puVar13 = local_24 + 3;
  uVar3 = (uint)puVar13 & 3;
  *(uint *)(puVar13 + -uVar3) =
       *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 | uRam20405a0c >> (3 - uVar3) * 8;
  local_24 = (undefined  [4])uRam20405a0c;
  memcpy(pvRam20405a08,(void *)0x20405a10,(long)(int)uRam20405a0c);
  uVar12 = uRam20405a30;
  uVar11 = uRam20405a28;
  iVar10 = iRam20405a1c;
  puVar8 = puRam20405a14;
  switch(local_2c) {
  case (undefined  [4])0x2:
    if ((0 < (int)puRam20405a14) && (0 < (int)puRam20405a14)) {
      puVar13 = (undefined *)0x20405a24;
      iVar7 = 0;
      do {
        iVar9 = iVar7 + 1;
        *(undefined *)(iVar10 + iVar7) = *puVar13;
        puVar13 = (undefined *)(iVar7 + 0x20405a25);
        iVar7 = iVar9;
      } while (iVar9 < (int)puRam20405a14);
    }
    iVar10 = iRam20405a20;
    if ((0 < (int)uRam20405a18) && (0 < (int)uRam20405a18)) {
      puVar13 = (undefined *)0x20405a64;
      iVar7 = 0;
      do {
        iVar9 = iVar7 + 1;
        *(undefined *)(iVar10 + iVar7) = *puVar13;
        puVar13 = (undefined *)(iVar7 + 0x20405a65);
        iVar7 = iVar9;
      } while (iVar9 < (int)uRam20405a18);
    }
    break;
  case (undefined  [4])0xb:
    puVar13 = local_20 + 3;
    uVar3 = (uint)puVar13 & 3;
    *(uint *)(puVar13 + -uVar3) =
         *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 |
         (uint)puRam20405a14 >> (3 - uVar3) * 8;
    local_20 = (undefined  [4])puRam20405a14;
    puVar6 = (ulong *)0x20405a18;
    if (((uint)puRam20405a14 & 7) == 0) {
      do {
        uVar11 = puVar6[1];
        uVar12 = puVar6[2];
        uVar14 = puVar6[3];
        *puVar8 = *puVar6;
        puVar8[1] = uVar11;
        puVar8[2] = uVar12;
        puVar8[3] = uVar14;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar6 != (ulong *)0x20405b58);
    }
    else {
      do {
        uVar11 = *puVar6;
        uVar12 = puVar6[1];
        uVar14 = puVar6[2];
        uVar1 = puVar6[3];
        uVar3 = (int)puVar8 + 7U & 7;
        puVar2 = (ulong *)(((int)puVar8 + 7U) - uVar3);
        *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
        uVar3 = (uint)puVar8 & 7;
        *(ulong *)((int)puVar8 - uVar3) =
             uVar11 << uVar3 * 8 |
             *(ulong *)((int)puVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar8 + 0xfU & 7;
        puVar2 = (ulong *)(((int)puVar8 + 0xfU) - uVar3);
        *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar8 + 1) & 7;
        puVar2 = (ulong *)((int)(puVar8 + 1) - uVar3);
        *puVar2 = uVar12 << uVar3 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar8 + 0x17U & 7;
        puVar2 = (ulong *)(((int)puVar8 + 0x17U) - uVar3);
        *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar8 + 2) & 7;
        puVar2 = (ulong *)((int)(puVar8 + 2) - uVar3);
        *puVar2 = uVar14 << uVar3 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        uVar3 = (int)puVar8 + 0x1fU & 7;
        puVar2 = (ulong *)(((int)puVar8 + 0x1fU) - uVar3);
        *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | uVar1 >> (7 - uVar3) * 8;
        uVar3 = (uint)(puVar8 + 3) & 7;
        puVar2 = (ulong *)((int)(puVar8 + 3) - uVar3);
        *puVar2 = uVar1 << uVar3 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar6 != (ulong *)0x20405b58);
    }
    uVar3 = *(uint *)puVar6;
    uVar4 = (int)puVar8 + 3U & 3;
    puVar5 = (uint *)(((int)puVar8 + 3U) - uVar4);
    *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | uVar3 >> (3 - uVar4) * 8;
    uVar4 = (uint)puVar8 & 3;
    *(uint *)((int)puVar8 - uVar4) =
         *(uint *)((int)puVar8 - uVar4) & 0xffffffffU >> (4 - uVar4) * 8 | uVar3 << uVar4 * 8;
    break;
  case (undefined  [4])0xc:
    puVar13 = local_20 + 3;
    uVar3 = (uint)puVar13 & 3;
    *(uint *)(puVar13 + -uVar3) =
         *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 |
         (uint)puRam20405a14 >> (3 - uVar3) * 8;
    local_20 = (undefined  [4])puRam20405a14;
    uVar14 = CONCAT44(iRam20405a1c,uRam20405a18);
    uVar1 = CONCAT44(uRam20405a24,iRam20405a20);
    uVar3 = (int)puRam20405a14 + 7U & 7;
    puVar6 = (ulong *)(((int)puRam20405a14 + 7U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
    uVar3 = (uint)puVar8 & 7;
    *(ulong *)((int)puVar8 - uVar3) =
         uVar14 << uVar3 * 8 |
         *(ulong *)((int)puVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0xfU & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0xfU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar1 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 1) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 1) - uVar3);
    *puVar6 = uVar1 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0x17U & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x17U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 2) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 2) - uVar3);
    *puVar6 = uVar11 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0x1fU & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x1fU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 3) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 3) - uVar3);
    *puVar6 = uVar12 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar1 = uRam20405a50;
    uVar14 = uRam20405a48;
    uVar12 = uRam20405a40;
    uVar11 = uRam20405a38;
    uVar3 = (int)puVar8 + 0x27U & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x27U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uRam20405a38 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 4) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 4) - uVar3);
    *puVar6 = uVar11 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0x2fU & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x2fU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 5) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 5) - uVar3);
    *puVar6 = uVar12 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0x37U & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x37U) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 6) & 7;
    puVar6 = (ulong *)((int)(puVar8 + 6) - uVar3);
    *puVar6 = uVar14 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    uVar3 = (int)puVar8 + 0x3fU & 7;
    puVar6 = (ulong *)(((int)puVar8 + 0x3fU) - uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar1 >> (7 - uVar3) * 8;
    uVar3 = (uint)(puVar8 + 7) & 7;
    puVar8 = (ulong *)((int)(puVar8 + 7) - uVar3);
    *puVar8 = uVar1 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    break;
  case (undefined  [4])0x17:
  case (undefined  [4])0x19:
  case (undefined  [4])0x1a:
    puVar13 = local_20 + 3;
    uVar3 = (uint)puVar13 & 3;
    *(uint *)(puVar13 + -uVar3) =
         *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 |
         (uint)puRam20405a14 >> (3 - uVar3) * 8;
    local_20 = (undefined  [4])puRam20405a14;
    puVar13 = local_1c + 3;
    uVar3 = (uint)puVar13 & 3;
    *(uint *)(puVar13 + -uVar3) =
         *(uint *)(puVar13 + -uVar3) & -1 << (uVar3 + 1) * 8 | uRam20405a18 >> (3 - uVar3) * 8;
    local_1c._0_4_ = uRam20405a18;
    __n = (size_t)(int)uRam20405a18;
    if (0x400 < __n) {
      __n = 0x400;
      local_1c._0_4_ = 0x400;
    }
    memcpy(puRam20405a14,(void *)0x20405a1c,__n);
  }
  if ((int)local_30 < 0) {
    if (_sceFs_q._0_4_ == -(int)local_30) {
      _sceFs_q._0_4_ = -1;
    }
    else {
      iVar10 = 1;
      do {
        if (0x1f < iVar10) {
          return;
        }
        iVar7 = iVar10 * 4;
        iVar10 = iVar10 + 1;
      } while (*(int *)(_sceFs_q + iVar7) != -(int)local_30);
      *(int *)(_sceFs_q + iVar7) = -1;
    }
  }
  else {
    iSignalSema();
  }
  return;
}

static _sceFsSemInit() {
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  
  if (_fs_semid == &_heap_size) {
    local_2c = 0;
    local_3c = 1;
    local_38 = 1;
    _fs_semid = (undefined *)CreateSema(auStack_40);
  }
  return;
}

static _sceFsWaitS() {
  _sceFsSemInit();
  WaitSema(_fs_semid);
  return 0;
}

static _sceFsSigSema() {
  SignalSema(_fs_semid);
  return;
}

sceFsInit() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_70 [4];
  
  sceSifInitRpc(0);
  DIntr();
  sceSifAddCmdHandler(0xffffffff80000011,0x227328,0x406070);
  EIntr();
  while( true ) {
    lVar3 = sceSifBindRpc(0x406040,0xffffffff80000001,0);
    if (lVar3 < 0) {
      return 0xffffffff;
    }
    iVar1 = 0x100000;
    if (DAT_00406064 != 0) break;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  _sceFsIobSemaMK();
  WaitSema(_fs_iob_semid);
  puVar4 = &_iob;
  do {
    *(undefined4 *)(puVar4 + 4) = 0;
    puVar4 = puVar4 + 0x10;
  } while (puVar4 < &_cd);
  SignalSema(_fs_iob_semid);
  local_70[0] = &_rcv_data_cmd;
  lVar3 = sceSifCallRpc(0x406040,0xff,0,local_70,4,0x4059c0,4,0);
  if (lVar3 < 0) {
    uVar2 = 0xfffeffff;
  }
  else {
    _fsversion = uRam204059c0;
    _fs_init = 1;
    uVar2 = 0;
  }
  return uVar2;
}

static _fs_version() {
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = memcmp(&_fsversion,__ps2_klibinfo__ + 0xc,4);
  if (iVar1 != 0) {
    iVar1 = memcmp(&_fsversion,_fswildcard,4);
    if (iVar1 != 0) {
      iVar1 = memcmp(__ps2_klibinfo__ + 0xc,_fswildcard,4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

sceFsReset() {
  _fs_init = 0;
  memset(&_fsversion,0,4);
  return 0;
}

sceOpen() {
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined auStack_140 [4];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_12c;
  int local_120 [4];
  
  _sceFsWaitS(0);
  if (_fs_init == 0) {
    sceFsInit();
  }
  lVar4 = _fs_version();
  if (lVar4 == 0) {
    lVar4 = new_iob();
    if (lVar4 == 0) {
      _sceFsSigSema();
      iVar6 = -0x13;
    }
    else {
      DAT_00404d94 = *param_1;
      iVar6 = 0;
      if (DAT_00404d94 != '\0') {
        for (iVar6 = 1;
            (iVar6 < 0x400 &&
            (cVar1 = param_1[iVar6], (&DAT_00404d94)[iVar6] = cVar1, cVar1 != '\0'));
            iVar6 = iVar6 + 1) {
        }
      }
      if (iVar6 == 0x400) {
        DAT_00405193 = 0;
      }
      piVar7 = (int *)lVar4;
      iVar6 = (int)(piVar7 + -0x101790) >> 4;
      _DAT_00404d8c = param_2 & 0xfffffff;
      local_13c = 1;
      local_138 = 0;
      local_12c = 0;
      DAT_00404d90 = param_3;
      DAT_00405194 = iVar6;
      uVar5 = CreateSema(auStack_140);
      _send_data = (undefined4)uVar5;
      DAT_00404d88 = 4;
      DAT_00404d84 = local_120;
      lVar4 = sceSifCallRpc(0x406040,0,0,0x404d80,0x418,0x4059c0,4,0);
      iVar3 = iRam204059c0;
      if (lVar4 < 0) {
        DeleteSema(uVar5);
        _sceFsSigSema();
        iVar6 = -0xb;
      }
      else {
        _sceFsSigSema();
        if (iVar3 == 0) {
          DeleteSema(uVar5);
          iVar6 = -0xb;
        }
        else {
          WaitSema(uVar5);
          DeleteSema(uVar5);
          if (local_120[0] < 0) {
            WaitSema(_fs_iob_semid);
            piVar7[1] = 0;
            SignalSema(_fs_iob_semid);
            iVar6 = local_120[0];
          }
          else {
            WaitSema(_fs_iob_semid);
            puVar2 = _fs_iob_semid;
            piVar7[1] = piVar7[1] | param_2;
            *piVar7 = local_120[0];
            SignalSema(puVar2);
          }
        }
      }
    }
  }
  else {
    _sceFsSigSema();
    iVar6 = -0x10004;
  }
  return iVar6;
}

sceClose() {
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined auStack_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  int local_70 [4];
  
  lVar2 = get_iob();
  _sceFsWaitS(1);
  if (_fs_init == 0) {
    _sceFsSigSema();
    local_70[0] = -1;
  }
  else if ((lVar2 == 0) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0)) {
    _sceFsSigSema();
    local_70[0] = -9;
  }
  else {
    _DAT_00404d8c = *puVar4;
    local_8c = 1;
    DAT_00404d90 = (int)(puVar4 + -0x101790) >> 4;
    local_88 = 0;
    local_7c = 0;
    uVar3 = CreateSema(auStack_90);
    DAT_00404d84 = local_70;
    _send_data = (undefined4)uVar3;
    DAT_00404d88 = 4;
    lVar2 = sceSifCallRpc(0x406040,1,0,0x404d80,0x14,0x4059c0,4,0);
    if (lVar2 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      local_70[0] = -0xb;
    }
    else {
      puVar4[1] = 0;
      iVar1 = iRam204059c0;
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        local_70[0] = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < local_70[0]) {
          local_70[0] = 0;
        }
      }
    }
  }
  return local_70[0];
}

sceLseek() {
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_90 [4];
  
  lVar4 = get_iob();
  _sceFsWaitS(4);
  if (_fs_init == 0) {
    _sceFsSigSema();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar4 != 0) {
      puVar7 = (undefined4 *)lVar4;
      uVar1 = puVar7[1];
      if (uVar1 != 0) {
        _DAT_00404d8c = *puVar7;
        DAT_00404d98 = (int)(puVar7 + -0x101790) >> 4;
        local_ac = 1;
        local_a8 = 0;
        local_9c = 0;
        DAT_00404d90 = param_2;
        _DAT_00404d94 = param_3;
        uVar5 = CreateSema(auStack_b0);
        DAT_00404d84 = local_90;
        DAT_00404d88 = 4;
        _send_data = (int)uVar5;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(_fs_fsq_semid);
          if (_sceFs_q._0_4_ == -1) {
            _sceFs_q._0_4_ = _send_data;
            _send_data = -_send_data;
          }
          else {
            iVar6 = 1;
            do {
              iVar3 = iVar6 * 4;
              if (0x1f < iVar6) goto LAB_00227f3c;
              iVar6 = iVar6 + 1;
            } while (*(int *)(_sceFs_q + iVar3) != -1);
            *(int *)(_sceFs_q + iVar3) = _send_data;
            _send_data = -_send_data;
          }
LAB_00227f3c:
          SignalSema(_fs_fsq_semid);
        }
        lVar4 = sceSifCallRpc(0x406040,4,0,0x404d80,0x1c,0x4059c0,4,0);
        iVar6 = iRam204059c0;
        if (lVar4 < 0) {
          DeleteSema(uVar5);
          _sceFsSigSema();
          return 0xfffffff5;
        }
        _sceFsSigSema();
        if (iVar6 == 0) {
          DeleteSema(uVar5);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) != 0) {
          DeleteSema(uVar5);
          return 0;
        }
        WaitSema(uVar5);
        DeleteSema(uVar5);
        return local_90[0];
      }
    }
    _sceFsSigSema();
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}

sceRead() {
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined auStack_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0 [4];
  
  lVar4 = get_iob();
  _sceFsWaitS(2);
  if (_fs_init == 0) {
    _sceFsSigSema();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar4 != 0) {
      puVar7 = (undefined4 *)lVar4;
      uVar1 = puVar7[1];
      if (uVar1 != 0) {
        _DAT_00404d8c = *puVar7;
        local_cc = 1;
        DAT_00404d9c = (int)(puVar7 + -0x101790) >> 4;
        DAT_00404d90 = (undefined4)param_2;
        _DAT_00404d94 = (undefined4)param_3;
        local_c8 = 0;
        local_bc = 0;
        uVar5 = CreateSema(auStack_d0);
        DAT_00404d84 = local_b0;
        DAT_00404d88 = 4;
        _send_data = (int)uVar5;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(_fs_fsq_semid);
          if (_sceFs_q._0_4_ == -1) {
            _sceFs_q._0_4_ = _send_data;
            _send_data = -_send_data;
          }
          else {
            iVar6 = 1;
            do {
              iVar3 = iVar6 * 4;
              if (0x1f < iVar6) goto LAB_00228170;
              iVar6 = iVar6 + 1;
            } while (*(int *)(_sceFs_q + iVar3) != -1);
            *(int *)(_sceFs_q + iVar3) = _send_data;
            _send_data = -_send_data;
          }
LAB_00228170:
          SignalSema(_fs_fsq_semid);
        }
        if ((uVar1 & 0x20000000) == 0) {
          sceSifWriteBackDCache(param_2,param_3);
        }
        sceSifWriteBackDCache(0x405a00,0xa4);
        sceSifWriteBackDCache(0x404d80,0x20);
        lVar4 = sceSifCallRpc(0x406040,2,0,0x404d80,0x20,0x4059c0,4,0);
        iVar6 = iRam204059c0;
        if (lVar4 < 0) {
          DeleteSema(uVar5);
          _sceFsSigSema();
          return 0xfffffff5;
        }
        _sceFsSigSema();
        if (iVar6 == 0) {
          DeleteSema(uVar5);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) != 0) {
          DeleteSema(uVar5);
          return 0;
        }
        WaitSema(uVar5);
        DeleteSema(uVar5);
        return local_b0[0];
      }
    }
    _sceFsSigSema();
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}

sceWrite() {
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined auStack_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0 [4];
  
  lVar4 = get_iob();
  _sceFsWaitS(3);
  if (_fs_init == 0) {
    _sceFsSigSema();
    uVar2 = 0xffffffff;
  }
  else {
    if (lVar4 != 0) {
      puVar8 = (undefined4 *)lVar4;
      uVar1 = puVar8[1];
      if (uVar1 != 0) {
        _DAT_00404d8c = *puVar8;
        local_cc = 1;
        DAT_00404da8._4_4_ = (int)(puVar8 + -0x101790) >> 4;
        uVar10 = (uint)param_2;
        local_c8 = 0;
        local_bc = 0;
        DAT_00404d90 = uVar10;
        _DAT_00404d94 = param_3;
        uVar5 = CreateSema(auStack_d0);
        DAT_00404d84 = local_b0;
        DAT_00404d88 = 4;
        _send_data = (int)uVar5;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(_fs_fsq_semid);
          if (_sceFs_q._0_4_ == -1) {
            _sceFs_q._0_4_ = _send_data;
            _send_data = -_send_data;
          }
          else {
            iVar9 = 1;
            do {
              iVar7 = iVar9 * 4;
              if (0x1f < iVar9) goto LAB_002283ec;
              iVar9 = iVar9 + 1;
            } while (*(int *)(_sceFs_q + iVar7) != -1);
            *(int *)(_sceFs_q + iVar7) = _send_data;
            _send_data = -_send_data;
          }
LAB_002283ec:
          SignalSema(_fs_fsq_semid);
        }
        if ((param_2 & 0xf) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (uVar10 & 0xfffffff0) - (uVar10 - 0x10);
        }
        if (param_3 < iVar9) {
          iVar9 = param_3;
        }
        if ((uVar1 & 0x20000000) == 0) {
          sceSifWriteBackDCache(param_2,param_3);
        }
        iVar7 = 0;
        DAT_00404d98 = iVar9;
        if (0 < iVar9) {
          do {
            puVar3 = (undefined *)((uVar10 | 0x20000000) + iVar7);
            puVar6 = (undefined *)((int)&DAT_00404d9c + iVar7);
            iVar7 = iVar7 + 1;
            *puVar6 = *puVar3;
          } while (iVar7 < iVar9);
        }
        lVar4 = sceSifCallRpc(0x406040,3,0,0x404d80,0x30,0x4059c0,4,0);
        iVar9 = iRam204059c0;
        if (lVar4 < 0) {
          DeleteSema(uVar5);
          _sceFsSigSema();
          return 0xfffffff5;
        }
        _sceFsSigSema();
        if (iVar9 == 0) {
          DeleteSema(uVar5);
          return 0xfffffff5;
        }
        if ((uVar1 & 0x8000) != 0) {
          DeleteSema(uVar5);
          return 0;
        }
        WaitSema(uVar5);
        DeleteSema(uVar5);
        return local_b0[0];
      }
    }
    _sceFsSigSema();
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}

sceIoctl() {
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_90 [4];
  
  uVar11 = param_2;
  lVar5 = get_iob();
  _sceFsWaitS(5);
  ip0_48 = param_3;
  if (_fs_init == 0) {
    sceFsInit();
  }
  if ((lVar5 == 0) || (puVar14 = (undefined4 *)lVar5, puVar14[1] == 0)) {
    _sceFsSigSema();
    return 0xfffffff7;
  }
  DAT_00405194 = 0;
  DAT_00405198 = 0;
  if (param_2 == 2) {
    *(undefined4 *)param_3 = uRam20405a10;
  }
  else if ((long)param_2 < 3) {
    if (param_2 != 1) {
      _DAT_00404d8c = *puVar14;
LAB_002286c0:
      DAT_00404d90 = (undefined4)param_2;
      if (param_3 == (undefined8 *)0x0) {
        DAT_0040519c = 0;
      }
      else {
        puVar10 = (undefined8 *)&DAT_00404d94;
        uVar8 = 0x400;
        DAT_0040519c = 0x400;
        if ((((uint)param_3 | 0x404d94) & 7) == 0) {
          puVar4 = param_3 + 0x80;
          do {
            uVar6 = param_3[1];
            uVar12 = param_3[2];
            uVar13 = param_3[3];
            *puVar10 = *param_3;
            puVar10[1] = uVar6;
            puVar10[2] = uVar12;
            puVar10[3] = uVar13;
            param_3 = param_3 + 4;
            puVar10 = puVar10 + 4;
          } while (param_3 != puVar4);
        }
        else {
          puVar4 = param_3 + 0x80;
          do {
            uVar1 = (int)param_3 + 7U & 7;
            uVar2 = (uint)param_3 & 7;
            uVar8 = (*(long *)(((int)param_3 + 7U) - uVar1) << (7 - uVar1) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)param_3 - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0xfU & 7;
            uVar2 = (uint)(param_3 + 1) & 7;
            uVar11 = (*(long *)(((int)param_3 + 0xfU) - uVar1) << (7 - uVar1) * 8 |
                     uVar11 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)(param_3 + 1) - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0x17U & 7;
            uVar2 = (uint)(param_3 + 2) & 7;
            param_4 = (*(long *)(((int)param_3 + 0x17U) - uVar1) << (7 - uVar1) * 8 |
                      param_4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((int)(param_3 + 2) - uVar2) >> uVar2 * 8;
            uVar1 = (int)param_3 + 0x1fU & 7;
            uVar2 = (uint)(param_3 + 3) & 7;
            param_5 = (*(long *)(((int)param_3 + 0x1fU) - uVar1) << (7 - uVar1) * 8 |
                      param_5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((int)(param_3 + 3) - uVar2) >> uVar2 * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar10 + 7) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar10 + 7) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
            uVar1 = (uint)puVar10 & 7;
            *(ulong *)((int)puVar10 - uVar1) =
                 uVar8 << uVar1 * 8 |
                 *(ulong *)((int)puVar10 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar10 + 0xf) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar10 + 0xf) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | uVar11 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar10 + 1) & 7;
            puVar3 = (ulong *)((int)(puVar10 + 1) - uVar1);
            *puVar3 = uVar11 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar10 + 0x17) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar10 + 0x17) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | param_4 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar10 + 2) & 7;
            puVar3 = (ulong *)((int)(puVar10 + 2) - uVar1);
            *puVar3 = param_4 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            uVar1 = (uint)(undefined1 *)((int)puVar10 + 0x1f) & 7;
            puVar3 = (ulong *)((undefined1 *)((int)puVar10 + 0x1f) + -uVar1);
            *puVar3 = *puVar3 & -1L << (uVar1 + 1) * 8 | param_5 >> (7 - uVar1) * 8;
            uVar1 = (uint)(puVar10 + 3) & 7;
            puVar3 = (ulong *)((int)(puVar10 + 3) - uVar1);
            *puVar3 = param_5 << uVar1 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
            param_3 = param_3 + 4;
            puVar10 = puVar10 + 4;
          } while (param_3 != puVar4);
        }
      }
      local_a8 = 0;
      local_ac = 1;
      local_9c = 0;
      uVar6 = CreateSema(auStack_b0);
      DAT_00404d88 = 4;
      _send_data = (undefined4)uVar6;
      DAT_00404d84 = local_90;
      sceSifWriteBackDCache(0x404d80,0x420);
      lVar5 = sceSifCallRpc(0x406040,5,0,0x404d80,0x420,0x4059c0,4,0);
      iVar9 = iRam204059c0;
      if (lVar5 < 0) {
        DeleteSema(uVar6);
        _sceFsSigSema();
        return 0xfffffff5;
      }
      _sceFsSigSema();
      if (iVar9 == 0) {
        DeleteSema(uVar6);
        return 0xfffffff5;
      }
      WaitSema(uVar6);
      DeleteSema(uVar6);
      return local_90[0];
    }
    WaitSema(_fs_fsq_semid);
    iVar9 = 0;
    if (_sceFs_q._0_4_ == -1) {
      puVar7 = _sceFs_q;
      iVar9 = 1;
      while ((puVar7 = (undefined1 *)((int)puVar7 + 4), iVar9 < 0x20 && (*(int *)puVar7 == -1))) {
        iVar9 = iVar9 + 1;
      }
    }
    if (iVar9 == 0x20) {
      *(undefined4 *)ip0_48 = 0;
    }
    else {
      *(undefined4 *)ip0_48 = 1;
    }
    SignalSema(_fs_fsq_semid);
  }
  else {
    if (param_2 != 3) {
      _DAT_00404d8c = *puVar14;
      goto LAB_002286c0;
    }
    *param_3 = CONCAT44(uRam20405a14,uRam20405a10);
  }
  _sceFsSigSema();
  return 0;
}

sceIoctl2() {
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  lVar2 = get_iob();
  _sceFsWaitS(0x1a);
  if (_fs_init == 0) {
    sceFsInit();
  }
  if (lVar2 != 0) {
    if (((undefined4 *)lVar2)[1] != 0) {
      if ((0x400 < param_4) || (0x400 < param_6)) {
        return 0xffffffea;
      }
      if (param_3 != 0) {
        memcpy(&DAT_00404d94,(void *)param_3,param_4);
      }
      _DAT_00404d8c = *(undefined4 *)lVar2;
      DAT_0040519c = (undefined4)param_4;
      local_bc = 1;
      local_b8 = 0;
      local_ac = 0;
      DAT_00404d90 = param_2;
      uVar3 = CreateSema(auStack_c0);
      DAT_00404d84 = local_a0;
      DAT_00405198 = (undefined4)param_6;
      DAT_00404d88 = 4;
      _send_data = (undefined4)uVar3;
      DAT_00405194 = param_5;
      sceSifWriteBackDCache(0x404d80,0x420);
      lVar2 = sceSifCallRpc(0x406040,0x1a,0,0x404d80,0x420,0x4059c0,4,0);
      iVar1 = iRam204059c0;
      if (lVar2 < 0) {
        DeleteSema(uVar3);
        _sceFsSigSema();
        return 0xfffffff5;
      }
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        return 0xfffffff5;
      }
      WaitSema(uVar3);
      DeleteSema(uVar3);
      return local_a0[0];
    }
  }
  _sceFsSigSema();
  return 0xfffffff7;
}

static _sceCallCode() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  _sceFsWaitS(param_2);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar4 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&DAT_00404d8c)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040518b = 0;
    iVar4 = 0x3ff;
  }
  local_b8 = 0;
  local_bc = 1;
  local_ac = 0;
  uVar2 = CreateSema(auStack_c0);
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_a0;
  lVar3 = sceSifCallRpc(0x406040,param_2,0,0x404d80,iVar4 + 0xd,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_a0[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_a0[0];
}

sceRemove() {
  _sceCallCode(param_1,6);
  return;
}

sceMkdir() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  _sceFsWaitS(7);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d90._0_1_ = *param_1;
  }
  else {
    DAT_00404d90._0_1_ = *param_1;
  }
  iVar4 = 0;
  if ((char)DAT_00404d90 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 &&
        (cVar1 = param_1[iVar4], *(char *)((int)&DAT_00404d90 + iVar4) = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040518f = 0;
    iVar4 = 0x3ff;
  }
  local_bc = 1;
  local_b8 = 0;
  local_ac = 0;
  _DAT_00404d8c = param_2;
  uVar2 = CreateSema(auStack_c0);
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_a0;
  lVar3 = sceSifCallRpc(0x406040,7,0,0x404d80,iVar4 + 0x11,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_a0[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_a0[0];
}

sceRmdir() {
  _sceCallCode(param_1,8);
  return;
}

sceFormat() {
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  _sceFsWaitS(0xe);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar6 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 && (cVar1 = param_1[iVar6], (&DAT_00404d8c)[iVar6] = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    DAT_0040518b = 0;
  }
  if (param_2 == 0) {
    DAT_0040518c = '\0';
  }
  else {
    DAT_0040518c = *(char *)param_2;
    iVar6 = 0;
    if (DAT_0040518c != '\0') {
      for (iVar6 = 1;
          (iVar6 < 0x400 &&
          (cVar1 = ((char *)param_2)[iVar6], (&DAT_0040518c)[iVar6] = cVar1, cVar1 != '\0'));
          iVar6 = iVar6 + 1) {
      }
    }
    if (iVar6 == 0x400) {
      DAT_0040558b = 0;
    }
  }
  if (param_4 < 0x401) {
    iVar6 = 0;
    if (0 < param_4) {
      do {
        puVar2 = (undefined *)(param_3 + iVar6);
        puVar5 = &DAT_0040558c + iVar6;
        iVar6 = iVar6 + 1;
        *puVar5 = *puVar2;
      } while (iVar6 < param_4);
    }
    local_bc = 1;
    local_b8 = 0;
    local_ac = 0;
    DAT_0040598c = param_4;
    uVar3 = CreateSema(auStack_c0);
    DAT_00404d88 = 4;
    _send_data = (undefined4)uVar3;
    DAT_00404d84 = local_a0;
    sceSifWriteBackDCache(0x404d80,0xc10);
    lVar4 = sceSifCallRpc(0x406040,0xe,0,0x404d80,0xc10,0x4059c0,4,0);
    iVar6 = iRam204059c0;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      local_a0[0] = 0xfffffff5;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        local_a0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    _sceFsSigSema();
    local_a0[0] = 0xfffffff9;
  }
  return local_a0[0];
}

sceAddDrv() {
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_60 [4];
  
  _sceFsWaitS(0xf);
  if (_fs_init == 0) {
    sceFsInit();
  }
  local_7c = 1;
  local_78 = 0;
  local_6c = 0;
  _DAT_00404d8c = param_1;
  uVar2 = CreateSema(auStack_80);
  DAT_00404d84 = local_60;
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  lVar3 = sceSifCallRpc(0x406040,0xf,0,0x404d80,0x10,0x4059c0,4,0);
  iVar1 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_60[0] = 0xffffffff;
  }
  else {
    _sceFsSigSema();
    if (iVar1 == 0) {
      DeleteSema(uVar2);
      local_60[0] = 0xffffffff;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_60[0];
}

sceDelDrv() {
  _sceCallCode(param_1,0x10);
  return;
}

sceDopen() {
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = new_iob();
  if (lVar2 == 0) {
    iVar1 = -0x13;
  }
  else {
    iVar1 = _sceCallCode(param_1,9);
    piVar3 = (int *)lVar2;
    if (iVar1 < 0) {
      WaitSema(_fs_iob_semid);
      piVar3[1] = 0;
    }
    else {
      WaitSema(_fs_iob_semid);
      *piVar3 = iVar1;
      iVar1 = (int)(piVar3 + -0x101790) >> 4;
    }
    SignalSema(_fs_iob_semid);
  }
  return iVar1;
}

sceDclose() {
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined auStack_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  int local_70 [4];
  
  lVar2 = get_iob();
  _sceFsWaitS(10);
  if (_fs_init == 0) {
    _sceFsSigSema();
    local_70[0] = -1;
  }
  else if ((lVar2 == 0) || (puVar4 = (undefined4 *)lVar2, puVar4[1] == 0)) {
    _sceFsSigSema();
    local_70[0] = -9;
  }
  else {
    _DAT_00404d8c = *puVar4;
    local_8c = 1;
    local_88 = 0;
    local_7c = 0;
    uVar3 = CreateSema(auStack_90);
    DAT_00404d84 = local_70;
    _send_data = (undefined4)uVar3;
    DAT_00404d88 = 4;
    lVar2 = sceSifCallRpc(0x406040,10,0,0x404d80,0x14,0x4059c0,4,0);
    if (lVar2 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      local_70[0] = -0xb;
    }
    else {
      puVar4[1] = 0;
      iVar1 = iRam204059c0;
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        local_70[0] = -0xb;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
        if (-1 < local_70[0]) {
          local_70[0] = 0;
        }
      }
    }
  }
  return local_70[0];
}

sceDread() {
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_60 [4];
  
  lVar2 = get_iob();
  _sceFsWaitS(0xb);
  if (_fs_init == 0) {
    _sceFsSigSema();
    local_60[0] = 0xffffffff;
  }
  else if ((lVar2 == 0) || (((undefined4 *)lVar2)[1] == 0)) {
    _sceFsSigSema();
    local_60[0] = 0xfffffff7;
  }
  else {
    _DAT_00404d8c = *(undefined4 *)lVar2;
    local_7c = 1;
    local_78 = 0;
    local_6c = 0;
    DAT_00404d90 = param_2;
    uVar3 = CreateSema(auStack_80);
    DAT_00404d84 = local_60;
    _send_data = (undefined4)uVar3;
    DAT_00404d88 = 4;
    lVar2 = sceSifCallRpc(0x406040,0xb,0,0x404d80,0x20,0x4059c0,4,0);
    iVar1 = iRam204059c0;
    if (lVar2 < 0) {
      WaitSema(uVar3);
      _sceFsSigSema();
      local_60[0] = 0xfffffff5;
    }
    else {
      _sceFsSigSema();
      if (iVar1 == 0) {
        DeleteSema(uVar3);
        local_60[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  return local_60[0];
}

sceGetstat() {
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  _sceFsWaitS(0xc);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d90._0_1_ = *param_1;
  }
  else {
    DAT_00404d90._0_1_ = *param_1;
  }
  iVar2 = 0;
  cVar1 = (char)DAT_00404d90;
  while (iVar5 = iVar2, cVar1 != '\0') {
    iVar5 = iVar2 + 1;
    if (0x3ff < iVar5) break;
    cVar1 = param_1[iVar5];
    *(char *)((int)&DAT_00404d90 + iVar2 + 1) = cVar1;
    iVar2 = iVar5;
  }
  if (iVar5 == 0x400) {
    DAT_0040518f = 0;
    iVar5 = 0x3ff;
  }
  local_bc = 1;
  local_b8 = 0;
  local_ac = 0;
  _DAT_00404d8c = param_2;
  uVar3 = CreateSema(auStack_c0);
  _send_data = (undefined4)uVar3;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_a0;
  lVar4 = sceSifCallRpc(0x406040,0xc,0,0x404d80,iVar5 + 0x11,0x4059c0,4,0);
  iVar2 = iRam204059c0;
  if (lVar4 < 0) {
    DeleteSema(uVar3);
    _sceFsSigSema();
    local_a0[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar2 == 0) {
      DeleteSema(uVar3);
      local_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar3);
      DeleteSema(uVar3);
    }
  }
  return local_a0[0];
}

sceChstat() {
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined auStack_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0 [4];
  
  uVar7 = 0xd;
  uVar8 = param_2;
  uVar9 = param_3;
  _sceFsWaitS();
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404dd0 = *param_1;
  }
  else {
    DAT_00404dd0 = *param_1;
  }
  iVar4 = 0;
  bVar1 = DAT_00404dd0;
  while (iVar11 = iVar4, (ulong)bVar1 != 0) {
    iVar11 = iVar4 + 1;
    if (0x3ff < iVar11) break;
    uVar7 = (ulong)(iVar4 + 0x404d81);
    bVar1 = param_1[iVar11];
    (&DAT_00404dd1)[iVar4] = bVar1;
    iVar4 = iVar11;
  }
  if (iVar11 == 0x400) {
    DAT_004051cf = 0;
    iVar11 = 0x3ff;
  }
  uVar10 = (uint)param_2;
  uVar2 = uVar10 + 7 & 7;
  uVar3 = uVar10 & 7;
  _DAT_00404d90 =
       (*(long *)((uVar10 + 7) - uVar2) << (7 - uVar2) * 8 |
       (ulong)bVar1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)(uVar10 - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0xf & 7;
  uVar3 = uVar10 + 8 & 7;
  _DAT_00404d98 =
       (*(long *)((uVar10 + 0xf) - uVar2) << (7 - uVar2) * 8 |
       uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((uVar10 + 8) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x17 & 7;
  uVar3 = uVar10 + 0x10 & 7;
  DAT_00404da0 = (*(long *)((uVar10 + 0x17) - uVar2) << (7 - uVar2) * 8 |
                 uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x10) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x1f & 7;
  uVar3 = uVar10 + 0x18 & 7;
  DAT_00404da8 = (*(long *)((uVar10 + 0x1f) - uVar2) << (7 - uVar2) * 8 |
                 uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x18) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x27 & 7;
  uVar3 = uVar10 + 0x20 & 7;
  DAT_00404db0 = (*(long *)((uVar10 + 0x27) - uVar2) << (7 - uVar2) * 8 |
                 _DAT_00404d90 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x20) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x2f & 7;
  uVar3 = uVar10 + 0x28 & 7;
  DAT_00404db8 = (*(long *)((uVar10 + 0x2f) - uVar2) << (7 - uVar2) * 8 |
                 _DAT_00404d98 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x28) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x37 & 7;
  uVar3 = uVar10 + 0x30 & 7;
  DAT_00404dc0 = (*(long *)((uVar10 + 0x37) - uVar2) << (7 - uVar2) * 8 |
                 DAT_00404da0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x30) - uVar3) >> uVar3 * 8;
  uVar2 = uVar10 + 0x3f & 7;
  uVar3 = uVar10 + 0x38 & 7;
  DAT_00404dc8 = (*(long *)((uVar10 + 0x3f) - uVar2) << (7 - uVar2) * 8 |
                 DAT_00404da8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((uVar10 + 0x38) - uVar3) >> uVar3 * 8;
  _DAT_00404d8c = (undefined4)param_3;
  local_cc = 1;
  local_c8 = 0;
  local_bc = 0;
  uVar5 = CreateSema(auStack_d0);
  DAT_00404d88 = 4;
  _send_data = (undefined4)uVar5;
  DAT_00404d84 = local_b0;
  sceSifWriteBackDCache(0x404d80,0x450);
  lVar6 = sceSifCallRpc(0x406040,0xd,0,0x404d80,iVar11 + 0x51,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar6 < 0) {
    DeleteSema(uVar5);
    _sceFsSigSema();
    local_b0[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar5);
      local_b0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar5);
      DeleteSema(uVar5);
    }
  }
  return local_b0[0];
}

sceRename() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_90 [4];
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar4 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&DAT_00404d8c)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040518b = 0;
  }
  DAT_0040518c = *param_2;
  iVar4 = 0;
  if (DAT_0040518c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_2[iVar4], (&DAT_0040518c)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040558b = 0;
  }
  local_a8 = 0;
  local_ac = 1;
  local_9c = 0;
  uVar2 = CreateSema(auStack_b0);
  DAT_00404d88 = 4;
  _send_data = (undefined4)uVar2;
  DAT_00404d84 = local_90;
  sceSifWriteBackDCache(0x404d80,0x80c);
  lVar3 = sceSifCallRpc(0x406040,0x11,0,0x404d80,0x80c,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_90[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_90[0];
}

sceChdir() {
  _sceCallCode(param_1,0x12);
  return;
}

sceSync() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_90 [4];
  
  _sceFsWaitS(0x13);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d94 = *param_1;
  }
  else {
    DAT_00404d94 = *param_1;
  }
  iVar4 = 0;
  if (DAT_00404d94 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&DAT_00404d94)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_00405193 = 0;
  }
  local_ac = 1;
  local_a8 = 0;
  local_9c = 0;
  DAT_00404d90 = param_2;
  uVar2 = CreateSema(auStack_b0);
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_90;
  lVar3 = sceSifCallRpc(0x406040,0x13,0,0x404d80,0x414,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_90[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_90[0];
}

sceMount() {
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined auStack_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0 [4];
  
  _sceFsWaitS(0x14);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar6 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 && (cVar1 = param_1[iVar6], (&DAT_00404d8c)[iVar6] = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    DAT_0040518b = 0;
  }
  DAT_0040518c = *param_2;
  iVar6 = 0;
  if (DAT_0040518c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 && (cVar1 = param_2[iVar6], (&DAT_0040518c)[iVar6] = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    DAT_0040558b = 0;
  }
  if (param_5 < 0x401) {
    iVar6 = 0;
    if (0 < param_5) {
      do {
        puVar2 = (undefined *)(param_4 + iVar6);
        puVar5 = &DAT_0040558c + iVar6;
        iVar6 = iVar6 + 1;
        *puVar5 = *puVar2;
      } while (iVar6 < param_5);
    }
    local_cc = 1;
    local_c8 = 0;
    local_bc = 0;
    DAT_0040598c = param_3;
    DAT_00405990 = param_5;
    uVar3 = CreateSema(auStack_d0);
    DAT_00404d88 = 4;
    _send_data = (undefined4)uVar3;
    DAT_00404d84 = local_b0;
    sceSifWriteBackDCache(0x404d80,0xc14);
    lVar4 = sceSifCallRpc(0x406040,0x14,0,0x404d80,0xc14,0x4059c0,4,0);
    iVar6 = iRam204059c0;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      local_b0[0] = 0xfffffff5;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        local_b0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    _sceFsSigSema();
    local_b0[0] = 0xfffffff9;
  }
  return local_b0[0];
}

sceUmount() {
  _sceCallCode(param_1,0x15);
  return;
}

sceLseek64() {
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined8 local_90 [2];
  
  lVar3 = get_iob();
  _sceFsWaitS(0x16);
  if (_fs_init == 0) {
    _sceFsSigSema();
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if (lVar3 != 0) {
      puVar6 = (undefined4 *)lVar3;
      uVar1 = puVar6[1];
      if (uVar1 != 0) {
        _DAT_00404d8c = *puVar6;
        DAT_00404d9c = (int)(puVar6 + -0x101790) >> 4;
        local_ac = 1;
        local_a8 = 0;
        local_9c = 0;
        _DAT_00404d90 = param_2;
        DAT_00404d98 = param_3;
        uVar4 = CreateSema(auStack_b0);
        DAT_00404d84 = local_90;
        DAT_00404d88 = 8;
        _send_data = (int)uVar4;
        if ((uVar1 & 0x8000) != 0) {
          WaitSema(_fs_fsq_semid);
          if (_sceFs_q._0_4_ == -1) {
            _sceFs_q._0_4_ = _send_data;
            _send_data = -_send_data;
          }
          else {
            iVar5 = 1;
            do {
              iVar2 = iVar5 * 4;
              if (0x1f < iVar5) goto LAB_0022a08c;
              iVar5 = iVar5 + 1;
            } while (*(int *)(_sceFs_q + iVar2) != -1);
            *(int *)(_sceFs_q + iVar2) = _send_data;
            _send_data = -_send_data;
          }
LAB_0022a08c:
          SignalSema(_fs_fsq_semid);
        }
        lVar3 = sceSifCallRpc(0x406040,0x16,0,0x404d80,0x20,0x4059c0,4,0);
        iVar5 = iRam204059c0;
        if (lVar3 < 0) {
          DeleteSema(uVar4);
          _sceFsSigSema();
          return 0xfffffffffffffff5;
        }
        _sceFsSigSema();
        if (iVar5 == 0) {
          DeleteSema(uVar4);
          return 0xfffffffffffffff5;
        }
        if ((uVar1 & 0x8000) != 0) {
          DeleteSema(uVar4);
          return 0;
        }
        WaitSema(uVar4);
        DeleteSema(uVar4);
        return local_90[0];
      }
    }
    _sceFsSigSema();
    uVar4 = 0xfffffffffffffff7;
  }
  return uVar4;
}

sceDevctl() {
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined auStack_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0 [4];
  
  _sceFsWaitS(0x17);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar6 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar6 = 1;
        (iVar6 < 0x400 && (cVar1 = param_1[iVar6], (&DAT_00404d8c)[iVar6] = cVar1, cVar1 != '\0'));
        iVar6 = iVar6 + 1) {
    }
  }
  if (iVar6 == 0x400) {
    DAT_0040518b = 0;
  }
  if ((param_4 < 0x401) && (param_6 < 0x401)) {
    uVar7 = 0;
    if (param_4 != 0) {
      do {
        puVar2 = (undefined *)(param_3 + uVar7);
        puVar5 = &DAT_0040518c + uVar7;
        uVar7 = uVar7 + 1;
        *puVar5 = *puVar2;
      } while (uVar7 < param_4);
    }
    local_cc = 1;
    local_c8 = 0;
    local_bc = 0;
    _DAT_0040558c = param_2;
    DAT_00405590 = param_4;
    uVar3 = CreateSema(auStack_d0);
    DAT_00405598 = (undefined4)param_6;
    DAT_00404d88 = 4;
    _send_data = (undefined4)uVar3;
    DAT_00404d84 = local_b0;
    DAT_00405594 = param_5;
    sceSifWriteBackDCache(0x404d80,0x81c);
    lVar4 = sceSifCallRpc(0x406040,0x17,0,0x404d80,0x81c,0x4059c0,4,0);
    iVar6 = iRam204059c0;
    if (lVar4 < 0) {
      DeleteSema(uVar3);
      _sceFsSigSema();
      local_b0[0] = 0xfffffff5;
    }
    else {
      _sceFsSigSema();
      if (iVar6 == 0) {
        DeleteSema(uVar3);
        local_b0[0] = 0xfffffff5;
      }
      else {
        WaitSema(uVar3);
        DeleteSema(uVar3);
      }
    }
  }
  else {
    local_b0[0] = 0xffffffea;
  }
  return local_b0[0];
}

sceSymlink() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_90 [4];
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d8c = *param_1;
  }
  else {
    DAT_00404d8c = *param_1;
  }
  iVar4 = 0;
  if (DAT_00404d8c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&DAT_00404d8c)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040518b = 0;
  }
  DAT_0040518c = *param_2;
  iVar4 = 0;
  if (DAT_0040518c != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_2[iVar4], (&DAT_0040518c)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_0040558b = 0;
  }
  local_a8 = 0;
  local_ac = 1;
  local_9c = 0;
  uVar2 = CreateSema(auStack_b0);
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_90;
  lVar3 = sceSifCallRpc(0x406040,0x18,0,0x404d80,0x80c,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_90[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_90[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_90[0];
}

sceReadlink() {
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0 [4];
  
  _sceFsWaitS(0x11);
  if (_fs_init == 0) {
    sceFsInit();
    DAT_00404d94 = *param_1;
  }
  else {
    DAT_00404d94 = *param_1;
  }
  iVar4 = 0;
  if (DAT_00404d94 != '\0') {
    for (iVar4 = 1;
        (iVar4 < 0x400 && (cVar1 = param_1[iVar4], (&DAT_00404d94)[iVar4] = cVar1, cVar1 != '\0'));
        iVar4 = iVar4 + 1) {
    }
  }
  if (iVar4 == 0x400) {
    DAT_00405193 = 0;
  }
  if (0x3ff < param_3) {
    param_3 = 0x3ff;
  }
  DAT_00404d90 = (undefined4)param_2;
  _DAT_00404d8c = (undefined4)param_3;
  sceSifWriteBackDCache(param_2,param_3);
  local_b8 = 0;
  local_bc = 1;
  local_ac = 0;
  uVar2 = CreateSema(auStack_c0);
  _send_data = (undefined4)uVar2;
  DAT_00404d88 = 4;
  DAT_00404d84 = local_a0;
  lVar3 = sceSifCallRpc(0x406040,0x19,0,0x404d80,0x80c,0x4059c0,4,0);
  iVar4 = iRam204059c0;
  if (lVar3 < 0) {
    DeleteSema(uVar2);
    _sceFsSigSema();
    local_a0[0] = 0xfffffff5;
  }
  else {
    _sceFsSigSema();
    if (iVar4 == 0) {
      DeleteSema(uVar2);
      local_a0[0] = 0xfffffff5;
    }
    else {
      WaitSema(uVar2);
      DeleteSema(uVar2);
    }
  }
  return local_a0[0];
}
