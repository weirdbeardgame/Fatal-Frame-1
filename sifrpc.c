// STATUS: NOT STARTED


sceSifInitRpc() {
  long lVar1;
  
  DIntr();
  if (_sceSifInitCheck != 0) {
    EIntr();
    return;
  }
  _sceSifInitCheck = 1;
  EIntr();
  sceSifInitCmd();
  DIntr();
  DAT_00404d20 = 0x20;
  _data_table = 1;
  DAT_00404d14 = 0x20403d00;
  DAT_00404d04 = 0x20403500;
  DAT_00404d1c = 0x20404500;
  DAT_00404d08 = 0x20;
  DAT_00404d0c = 0;
  DAT_00404d10 = 0;
  DAT_00404d18 = 0x20;
  DAT_00404d24 = 0;
  sceSifAddCmdHandler(0xffffffff80000008,0x226570,0x404d00);
  sceSifAddCmdHandler(0xffffffff80000009,0x226830,0x404d00);
  sceSifAddCmdHandler(0xffffffff8000000a,0x226a20,0x404d00);
  sceSifAddCmdHandler(0xffffffff8000000c,0x226628,0x404d00);
  EIntr();
  lVar1 = sceSifGetReg(0xffffffff80000002);
  if (lVar1 == 0) {
    DAT_0040354c = 1;
    sceSifSendCmd(0xffffffff80000002,0x403540,0x10,0,0,0);
    do {
      lVar1 = sceSifGetSreg(0);
    } while (lVar1 == 0);
    sceSifSetReg(0xffffffff80000002,1);
    return;
  }
  return;
}

sceSifExitRpc() {
  sceSifExitCmd();
  _sceSifInitCheck = 0;
  return;
}

static _sceRpcGetPacket() {
  int iVar1;
  int iVar2;
  int iVar3;
  
  DIntr();
  iVar1 = 0;
  iVar3 = param_1[1];
  if (0 < param_1[2]) {
    do {
      if ((*(uint *)(iVar3 + 0x10) & 1) == 0) {
        *(uint *)(iVar3 + 0x10) = iVar1 << 0x10 | 5;
        iVar1 = *param_1;
        iVar2 = iVar1 + 1;
        *param_1 = iVar2;
        if (iVar2 == 1) {
          iVar2 = 1;
          *param_1 = iVar1 + 2;
        }
        *(int *)(iVar3 + 0x14) = iVar3;
        *(int *)(iVar3 + 0x18) = iVar2;
        EIntr();
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < param_1[2]);
  }
  EIntr();
  return 0;
}

static _sceRpcFreePacket() {
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}

static _sceRpcGetFPacket() {
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) % *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    trap(7);
  }
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  return *(int *)(param_1 + 0x14) + iVar1 * 0x40;
}

static _sceRpcGetFPacket2() {
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x20) <= param_2)) {
    iVar1 = _sceRpcGetFPacket();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x40;
  }
  return iVar1;
}

static _request_end() {
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x8000000a) {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if ((code *)puVar3[7] == (code *)0x0) {
      iVar2 = puVar3[2];
      goto LAB_002265f4;
    }
    (*(code *)puVar3[7])(puVar3[8]);
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
  }
  else if (uVar1 < 0x8000000b) {
    if (uVar1 == 0x80000009) {
      puVar3 = *(undefined4 **)(param_1 + 0x1c);
      puVar3[9] = *(undefined4 *)(param_1 + 0x24);
      puVar3[5] = *(undefined4 *)(param_1 + 0x28);
      puVar3[6] = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x1c);
    }
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
  }
  iVar2 = puVar3[2];
LAB_002265f4:
  if (-1 < iVar2) {
    iSignalSema();
  }
  _sceRpcFreePacket(*puVar3);
  *puVar3 = 0;
  return;
}

static _request_rdata() {
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = _sceRpcGetFPacket(param_2);
  iVar2 = (int)uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  *(undefined4 *)(iVar2 + 0x20) = 0x8000000c;
  isceSifSendCmd(0xffffffff80000008,uVar3,0x40,*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

sceSifGetOtherData() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined auStack_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  
  lVar3 = _sceRpcGetPacket(0x404d00);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(undefined4 *)(iVar5 + 0x24) = param_3;
    *(undefined4 *)(iVar5 + 0x28) = param_4;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_5 & 1) == 0) {
      local_88 = 0;
      local_8c = 1;
      lVar4 = CreateSema(auStack_90);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        _sceRpcFreePacket(lVar3);
        uVar2 = 0xfffffffd;
      }
      else {
        lVar4 = sceSifSendCmd(0xffffffff8000000c,lVar3,0x40,0,0,0);
        if (lVar4 == 0) {
          _sceRpcFreePacket(lVar3);
          DeleteSema(param_1[2]);
          uVar2 = 0xfffffffe;
        }
        else {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar4 = sceSifSendCmd(0xffffffff8000000c,lVar3,0x40,0,0,0);
      uVar2 = 0;
      if (lVar4 == 0) {
        _sceRpcFreePacket(lVar3);
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}

static _search_svdata() {
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      else {
        iVar1 = *piVar2;
        while( true ) {
          if (iVar1 == param_1) {
            return piVar2;
          }
          piVar2 = (int *)piVar2[0xe];
          if (piVar2 == (int *)0x0) break;
          iVar1 = *piVar2;
        }
        iVar3 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 == 0) break;
      piVar2 = *(int **)(iVar3 + 8);
    }
  }
  return (int *)0x0;
}

static _request_bind() {
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = _sceRpcGetFPacket(param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar5 = (int)uVar2;
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar5 + 0x14) = uVar1;
  *(undefined4 *)(iVar5 + 0x20) = 0x80000009;
  lVar3 = _search_svdata(*(undefined4 *)(param_1 + 0x20),param_2);
  if (lVar3 == 0) {
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined4 *)(iVar5 + 0x28) = 0;
    *(undefined4 *)(iVar5 + 0x2c) = 0;
  }
  else {
    iVar4 = (int)lVar3;
    *(int *)(iVar5 + 0x24) = iVar4;
    *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar4 + 0x14);
  }
  isceSifSendCmd(0xffffffff80000008,uVar2,0x40,0,0,0);
  return;
}

sceSifBindRpc() {
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined auStack_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  
  param_1[4] = 0;
  param_1[9] = 0;
  lVar3 = _sceRpcGetPacket(0x404d00);
  uVar2 = 0xffffffff;
  if (lVar3 != 0) {
    iVar5 = (int)lVar3;
    iVar1 = *(int *)(iVar5 + 0x18);
    *param_1 = iVar5;
    param_1[1] = iVar1;
    *(undefined4 *)(iVar5 + 0x20) = param_2;
    *(int *)(iVar5 + 0x14) = iVar5;
    *(int **)(iVar5 + 0x1c) = param_1;
    if ((param_3 & 1) == 0) {
      local_68 = 0;
      local_6c = 1;
      lVar4 = CreateSema(auStack_70);
      param_1[2] = (int)lVar4;
      if (lVar4 < 0) {
        _sceRpcFreePacket(lVar3);
        uVar2 = 0xfffffffd;
      }
      else {
        lVar4 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
        if (lVar4 == 0) {
          _sceRpcFreePacket(lVar3);
          DeleteSema(param_1[2]);
          uVar2 = 0xfffffffe;
        }
        else {
          WaitSema(param_1[2]);
          DeleteSema(param_1[2]);
          uVar2 = 0;
        }
      }
    }
    else {
      param_1[2] = -1;
      lVar4 = sceSifSendCmd(0xffffffff80000009,lVar3,0x40,0,0,0);
      uVar2 = 0;
      if (lVar4 == 0) {
        _sceRpcFreePacket(lVar3);
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}

static _request_call() {
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  piVar2 = *(int **)(iVar1 + 0x40);
  if (piVar2[3] == 0) {
    piVar2[3] = iVar1;
  }
  else {
    *(int *)(piVar2[4] + 0x3c) = iVar1;
  }
  piVar2[4] = iVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
  if ((-1 < *piVar2) && (piVar2[1] == 0)) {
    iWakeupThread();
    return;
  }
  return;
}

sceSifCallRpc() {
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  
  lVar2 = _sceRpcGetPacket(0x404d00);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  iVar4 = (int)lVar2;
  iVar1 = *(int *)(iVar4 + 0x18);
  param_1[8] = param_9;
  *param_1 = iVar4;
  param_1[1] = iVar1;
  param_1[7] = (int)param_8;
  *(undefined4 *)(iVar4 + 0x20) = param_2;
  *(int *)(iVar4 + 0x24) = (int)param_5;
  *(int *)(iVar4 + 0x28) = (int)param_6;
  *(int *)(iVar4 + 0x2c) = (int)param_7;
  *(int *)(iVar4 + 0x14) = iVar4;
  iVar1 = param_1[9];
  *(int **)(iVar4 + 0x1c) = param_1;
  *(int *)(iVar4 + 0x34) = iVar1;
  if ((param_3 & 2) == 0) {
    if (param_4 == param_6) {
      if (param_7 <= param_5) {
        param_7 = param_5;
      }
      sceSifWriteBackDCache(param_4,param_7);
    }
    else {
      if (0 < param_5) {
        sceSifWriteBackDCache(param_4,param_5);
      }
      if (0 < param_7) {
        sceSifWriteBackDCache(param_6,param_7);
      }
    }
  }
  if ((param_3 & 1) == 0) {
    local_b8 = 0;
    local_bc = 1;
    lVar3 = CreateSema(auStack_c0);
    param_1[2] = (int)lVar3;
    if (lVar3 < 0) {
      _sceRpcFreePacket(lVar2);
      return 0xfffffffd;
    }
    *(undefined4 *)(iVar4 + 0x30) = 1;
    lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      WaitSema(param_1[2]);
      DeleteSema(param_1[2]);
      return 0;
    }
    DeleteSema(param_1[2]);
  }
  else {
    if (param_8 == 0) {
      *(undefined4 *)(iVar4 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x30) = 1;
    }
    param_1[2] = -1;
    lVar3 = sceSifSendCmd(0xffffffff8000000a,lVar2,0x40,param_4,param_1[5],param_5);
    if (lVar3 != 0) {
      return 0;
    }
  }
  _sceRpcFreePacket(lVar2);
  return 0xfffffffe;
}

sceSifCheckStatRpc() {
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (param_1[1] == *(int *)(iVar1 + 0x18))) &&
     ((*(uint *)(iVar1 + 0x10) & 1) != 0)) {
    return 1;
  }
  return 0;
}

sceSifSetRpcQueue() {
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DIntr();
  *param_1 = param_2;
  param_1[1] = 0;
  puVar2 = DAT_00404d28;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = puVar2[5];
    if (puVar2[5] == 0) {
      puVar2[5] = param_1;
      puVar3 = DAT_00404d28;
    }
    else {
      do {
        iVar4 = iVar1;
        iVar1 = *(int *)(iVar4 + 0x14);
      } while (iVar1 != 0);
      *(undefined4 **)(iVar4 + 0x14) = param_1;
      puVar3 = DAT_00404d28;
    }
  }
  DAT_00404d28 = puVar3;
  EIntr();
  return;
}

sceSifRegisterRpc() {
  int iVar1;
  int iVar2;
  
  DIntr();
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *param_1 = param_2;
  iVar2 = *(int *)(param_7 + 8);
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[0x10] = param_7;
  if (iVar2 == 0) {
    *(undefined4 **)(param_7 + 8) = param_1;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x38) == 0) {
      *(undefined4 **)(iVar2 + 0x38) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 0x38);
      } while (iVar1 != 0);
      *(undefined4 **)(iVar2 + 0x38) = param_1;
    }
  }
  EIntr();
  return;
}

sceSifRemoveRpc() {
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  DIntr();
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == param_1) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0x38);
  }
  else if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x38);
    if (*(int *)(iVar3 + 0x38) == param_1) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      do {
        iVar3 = iVar1;
        if (iVar3 == 0) goto LAB_00226eb8;
        iVar1 = *(int *)(iVar3 + 0x38);
      } while (*(int *)(iVar3 + 0x38) != param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    *(undefined4 *)(iVar3 + 0x38) = uVar2;
  }
LAB_00226eb8:
  EIntr();
  return iVar3;
}

sceSifRemoveRpcQueue() {
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  DIntr();
  iVar4 = DAT_00404d28;
  if (DAT_00404d28 == param_1) {
    iVar1 = *(int *)(DAT_00404d28 + 0x14);
  }
  else {
    iVar1 = DAT_00404d28;
    if (DAT_00404d28 != 0) {
      iVar2 = *(int *)(DAT_00404d28 + 0x14);
      if (*(int *)(DAT_00404d28 + 0x14) == param_1) {
        uVar3 = *(undefined4 *)(param_1 + 0x14);
      }
      else {
        do {
          iVar4 = iVar2;
          if (iVar4 == 0) goto LAB_00226f50;
          iVar2 = *(int *)(iVar4 + 0x14);
        } while (*(int *)(iVar4 + 0x14) != param_1);
        uVar3 = *(undefined4 *)(param_1 + 0x14);
      }
      *(undefined4 *)(iVar4 + 0x14) = uVar3;
      iVar1 = DAT_00404d28;
    }
  }
LAB_00226f50:
  DAT_00404d28 = iVar1;
  EIntr();
  return iVar4;
}

sceSifGetNextRequest() {
  int iVar1;
  undefined4 uVar2;
  
  DIntr();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  EIntr();
  return iVar1;
}

sceSifExecRequest() {
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_80 [8];
  
  iVar5 = 0;
  lVar2 = (**(code **)(param_1 + 4))
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  if (lVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    sceSifWriteBackDCache(*(undefined4 *)(param_1 + 8));
  }
  if (0 < iVar5) {
    sceSifWriteBackDCache(lVar2,iVar5);
  }
  DIntr();
  if ((*(uint *)(param_1 + 0x34) & 4) == 0) {
    uVar3 = _sceRpcGetFPacket(0x404d00,*(uint *)(param_1 + 0x34) >> 0x10);
  }
  else {
    uVar3 = _sceRpcGetFPacket2(0x404d00);
  }
  EIntr();
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar6 = (int)uVar3;
  *(undefined4 *)(iVar6 + 0x20) = 0x8000000a;
  *(undefined4 *)(iVar6 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
    if (0 < iVar5) {
      local_80[1] = *(undefined4 *)(param_1 + 0x28);
      local_80[0] = (int)lVar2;
      local_80[3] = 0;
      local_80[2] = iVar5;
    }
    uVar7 = (uint)(0 < iVar5);
    iVar5 = *(int *)(param_1 + 0x20);
    local_80[uVar7 * 4] = iVar6;
    local_80[uVar7 * 4 + 1] = iVar5;
    local_80[uVar7 * 4 + 2] = 0x40;
    local_80[uVar7 * 4 + 3] = 0;
    while (lVar2 = sceSifSetDma(local_80,uVar7 + 1), lVar2 == 0) {
      iVar5 = 0x100000;
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  else {
    do {
      lVar4 = sceSifSendCmd(0xffffffff80000008,uVar3,0x40,lVar2,*(undefined4 *)(param_1 + 0x28),
                            iVar5);
    } while (lVar4 == 0);
  }
  return;
}

sceSifRpcLoop() {
  long lVar1;
  
  do {
    while (lVar1 = sceSifGetNextRequest(param_1), lVar1 == 0) {
      SleepThread();
    }
    sceSifExecRequest(lVar1);
  } while( true );
}
