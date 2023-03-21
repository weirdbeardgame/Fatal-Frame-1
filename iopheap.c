// STATUS: NOT STARTED


sceSifInitIopHeap() {
  int iVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = sceSifBindRpc(0x4060c0,0xffffffff80000003,0);
    if (lVar2 < 0) {
      return 0xffffffff;
    }
    if (DAT_004060e4 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  _bind = (undefined *)0x0;
  return 0;
}

sceSifAllocIopHeap() {
  long lVar1;
  
  if ((-1 < (int)_bind) &&
     (_aih_data = param_1, lVar1 = sceSifCallRpc(0x4060c0,1,0,0x406140,4,0x406100,4,0), -1 < lVar1))
  {
    return rdata;
  }
  return 0;
}

sceSifFreeIopHeap() {
  undefined4 uVar1;
  long lVar2;
  
  if ((int)_bind < 0) {
    uVar1 = 0;
  }
  else {
    _fih_data = param_1;
    lVar2 = sceSifCallRpc(0x4060c0,2,0,0x406180,4,0x406100,4,0);
    uVar1 = rdata;
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

sceSifLoadIopHeap() {
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  if ((int)_bind < 0) {
    uVar2 = 0;
  }
  else {
    DAT_004061c4 = *param_1;
    iVar4 = 0;
    if (DAT_004061c4 != '\0') {
      for (iVar4 = 1;
          (iVar4 < 0xfc && (cVar1 = param_1[iVar4], (&DAT_004061c4)[iVar4] = cVar1, cVar1 != '\0'));
          iVar4 = iVar4 + 1) {
      }
    }
    if (iVar4 == 0xfc) {
      iVar4 = 0xfb;
    }
    DAT_004062bf = 0;
    _lih_data = param_2;
    lVar3 = sceSifCallRpc(0x4060c0,3,0,0x4061c0,iVar4 + 5,0x406100,4,0);
    uVar2 = rdata;
    if (lVar3 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
