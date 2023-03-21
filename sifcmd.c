// STATUS: NOT STARTED


static _set_sreg() {
  *(undefined4 *)(*(int *)(param_1 + 0x10) * 4 + *(int *)(param_2 + 0x1c)) =
       *(undefined4 *)(param_1 + 0x14);
  return;
}

static _change_addr() {
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x10);
  return;
}

sceSifGetSreg() {
  return *(undefined4 *)(&soft_reg + param_1 * 4);
}

sceSifSetSreg() {
  *(int *)(&soft_reg + param_1 * 4) = (int)param_2;
  return param_2;
}

sceSifGetDataTable() {
  return &_data_table;
}

sceSifInitCmd() {
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  DIntr();
  if (_cmd_init_check != 0) {
    EIntr();
    return;
  }
  _cmd_init_check = 1;
  puVar2 = &_sys_buffer;
  _data_table = 0x20403280;
  DAT_00403374 = &soft_reg;
  DAT_0040335c = 0x20403300;
  DAT_00403368 = 0x20;
  DAT_00403360 = 0;
  iVar6 = 0x1f;
  DAT_00403364 = &_sys_buffer;
  DAT_0040336c = 0;
  DAT_00403370 = 0;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar6);
  iVar6 = 0x1f;
  puVar2 = &DAT_004034fc;
  do {
    *puVar2 = 0;
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar6);
  _sys_buffer = _change_addr;
  DAT_00403388 = _set_sreg;
  DAT_0040338c = &_data_table;
  DAT_00403384 = &_data_table;
  EIntr();
  FlushCache(0);
  uVar1 = REG_DMAC_STAT;
  if ((uVar1 & 0x20) != 0) {
    REG_DMAC_STAT = 0x20;
  }
  uVar1 = REG_DMAC_5_SIF0_CHCR;
  if ((uVar1 & 0x100) == 0) {
    sceSifSetDChain();
  }
  sif0_handleid = AddDmacHandler(5,0x226098,0);
  EnableDmac(5);
  lVar3 = sceSifGetReg(0xffffffff80000000);
  DAT_00403360 = (undefined4)lVar3;
  if (lVar3 == 0) {
    do {
      uVar4 = sceSifGetReg(4);
    } while ((uVar4 & 0x20000) == 0);
    uVar5 = sceSifGetReg(2);
    DAT_00403360 = (undefined4)uVar5;
    sceSifSetReg(0xffffffff80000000,uVar5);
    sceSifSetReg(0xffffffff80000001,0x403358);
    DAT_00403350 = &_pckt_buffer;
    DAT_0040334c = 0;
    sceSifSendCmd(0xffffffff80000002,0x403340,0x14,0,0,0);
    return;
  }
  DAT_00403350 = &_pckt_buffer;
  sceSifSendCmd(0xffffffff80000000,0x403340,0x14,0,0,0);
  return;
}

sceSifExitCmd() {
  DisableDmac(5);
  RemoveDmacHandler(5,sif0_handleid);
  _cmd_init_check = 0;
  return;
}

sceSifSetCmdBuffer() {
  undefined4 uVar1;
  
  uVar1 = DAT_0040336c;
  DAT_00403370 = param_2;
  DAT_0040336c = param_1;
  return uVar1;
}

sceSifSetSysCmdBuffer() {
  undefined4 uVar1;
  
  uVar1 = DAT_00403364;
  DAT_00403368 = param_2;
  DAT_00403364 = param_1;
  return uVar1;
}

sceSifAddCmdHandler() {
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0040336c;
  if (param_1 < 0) {
    iVar2 = DAT_00403364;
  }
  puVar1 = (undefined4 *)((int)param_1 * 8 + iVar2);
  puVar1[1] = param_3;
  *puVar1 = param_2;
  return;
}

sceSifRemoveCmdHandler() {
  int iVar1;
  
  iVar1 = DAT_0040336c;
  if (param_1 < 0) {
    iVar1 = DAT_00403364;
  }
  *(undefined4 *)((int)param_1 * 8 + iVar1) = 0;
  return;
}

static _sceSifSendCmd() {
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *local_80;
  uint local_7c [7];
  
  if (0x60 < (int)param_4 - 0x10U) {
    return 0;
  }
  iVar4 = 0;
  puVar3 = (uint *)param_3;
  if (param_7 < 1) {
    puVar3[1] = 0;
    *puVar3 = (uint)*(byte *)puVar3;
  }
  else {
    local_7c[1] = (uint)param_7;
    puVar3[1] = param_6;
    iVar4 = 1;
    *puVar3 = (uint)*(byte *)puVar3 | local_7c[1] << 8;
    local_7c[2] = 0;
    local_80 = param_5;
    local_7c[0] = param_6;
    if ((param_2 & 4) != 0) {
      sceSifWriteBackDCache();
      iVar2 = 0x10;
      goto LAB_00225f80;
    }
  }
  iVar2 = iVar4 << 4;
LAB_00225f80:
  *(uint **)((int)&local_80 + iVar2) = puVar3;
  *(undefined4 *)((int)local_7c + iVar2) = DAT_00403360;
  *(int *)((int)local_7c + iVar2 + 4) = (int)param_4;
  puVar3[2] = param_1;
  *(byte *)puVar3 = (byte)param_4;
  *(undefined4 *)((int)local_7c + iVar2 + 8) = 0x44;
  sceSifWriteBackDCache(param_3,param_4);
  if ((param_2 & 1) == 0) {
    uVar1 = sceSifSetDma(&local_80,iVar4 + 1);
  }
  else {
    uVar1 = isceSifSetDma(&local_80);
  }
  return uVar1;
}

sceSifSendCmd() {
  _sceSifSendCmd(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return;
}

isceSifSendCmd() {
  _sceSifSendCmd(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}

static _sceSifCmdIntrHdlr() {
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  code **ppcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 local_90 [2];
  uint local_88;
  
  puVar9 = local_90;
  EIntr();
  puVar8 = _data_table;
  bVar1 = *(byte *)_data_table;
  if (bVar1 != 0) {
    *(byte *)_data_table = 0;
    for (iVar7 = (int)(bVar1 + 0xf) >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar3 = *puVar8;
      uVar5 = *(undefined4 *)(puVar8 + 1);
      uVar6 = *(undefined4 *)((int)puVar8 + 0xc);
      puVar8 = puVar8 + 2;
      *puVar9 = (int)uVar3;
      puVar9[1] = (int)((ulong)uVar3 >> 0x20);
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar9 = puVar9 + 4;
    }
    isceSifSetDChain();
    if ((int)local_88 < 0) {
      if ((int)(local_88 & 0x7fffffff) < DAT_00403368) {
        ppcVar4 = (code **)((local_88 & 0x7fffffff) * 8 + DAT_00403364);
        pcVar2 = *ppcVar4;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(local_90,ppcVar4[1]);
        }
      }
    }
    else if ((int)local_88 < DAT_00403370) {
      ppcVar4 = (code **)(local_88 * 8 + DAT_0040336c);
      pcVar2 = *ppcVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(local_90,ppcVar4[1]);
      }
    }
    SYNC(0);
    EI();
  }
  return 0;
}

sceSifWriteBackDCache() {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1 & 0xffffffc0;
    uVar3 = (((param_1 + (int)param_2) - 1 & 0xffffffc0) - uVar1 >> 6) + 1;
    uVar2 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    if (uVar2 != 0) {
      do {
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        uVar2 = uVar2 - 1;
        uVar1 = uVar1 + 0x40;
      } while (0 < (int)uVar2);
    }
    if (uVar3 != 0) {
      do {
        uVar3 = uVar3 - 1;
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x40);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x80);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0xc0);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x100);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x140);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x180);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x1c0);
        SYNC(0);
        uVar1 = uVar1 + 0x200;
      } while (0 < (int)uVar3);
    }
  }
  return;
}
