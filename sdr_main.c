// STATUS: NOT STARTED


sceSdRemoteInit() {
  int iVar1;
  long lVar2;
  
  sceSifInitRpc(0);
  do {
    lVar2 = sceSifBindRpc(0x409700,0xffffffff80000701,0);
    iVar1 = 10000;
    if (lVar2 < 0) {
      printf("error \n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  } while (DAT_00409724 == 0);
  FlushCache(0);
  return 1;
}

sceSdTransToIOP() {
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  DAT_0040958c = 0;
  transData_6 = param_1;
  DAT_00409584 = param_2;
  DAT_00409588 = param_3;
  lVar2 = sceSifSetDma(0x409580,1);
  if (param_4 == 1) {
    do {
      lVar3 = sceSifDmaStat(lVar2);
    } while (-1 < lVar3);
  }
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

sceSdCallBack() {
  ram0x00348df0 = param_1;
  return;
}

sceSdRemote() {
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_30 = param_3;
  local_10 = param_7;
  puVar4 = &DAT_004096c4;
  local_8 = param_8;
  iVar3 = 5;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  sbuff = &sbuff;
  puVar2 = &local_30;
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = *(undefined4 *)puVar2;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  bVar1 = param_1 == 0;
  uVar6 = 0;
  if (bVar1) {
    uVar6 = ram0x00348df0;
  }
  if (param_2 == 0x8110) {
    if (DAT_004096c4 == 0) {
      _sce_sdr_gDMA0CB = DAT_004096c8;
    }
    else {
      _sce_sdr_gDMA1CB = DAT_004096c8;
    }
  }
  else if (param_2 == 0x8120) {
    _sce_sdr_gIRQCB = DAT_004096c4;
  }
  else if (param_2 == 0x8160) {
    if (DAT_004096c4 == 0) {
      _sce_sdr_transIntr0Arg = DAT_004096cc;
      _sce_sdr_transIntr0Hdr = DAT_004096c8;
    }
    else {
      _sce_sdr_transIntr1Arg = DAT_004096cc;
      _sce_sdr_transIntr1Hdr = DAT_004096c8;
    }
  }
  else if (param_2 == 0x8170) {
    _sce_sdr_spu2IntrArg = DAT_004096c8;
    _sce_sdr_spu2IntrHdr = DAT_004096c4;
  }
  if (param_2 == 0x8130) {
    param_2 = DAT_004096c4 | 0x8130;
    uVar7 = 0;
    puVar4 = DAT_004096c8;
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar4 = &sbuff;
    if (param_2 == 0x8140) {
      sceSifCallRpc(0x409700,DAT_004096c4 | 0x8140,bVar1,0x4096c0,0x40,DAT_004096c8,0x40,uVar6);
      return;
    }
    uVar7 = 0x10;
    puVar5 = puVar4;
  }
  sceSifCallRpc(0x409700,param_2,bVar1,puVar4,0x40,puVar5,uVar7,uVar6);
  return;
}
