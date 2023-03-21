// STATUS: NOT STARTED


_sceSDC() {
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

SyncDCache() {
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  _sceSDC(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 != 0) {
    EIntr();
    return;
  }
  return;
}

iSyncDCache() {
  _sceSDC(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  return;
}

_sceIDC() {
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x16,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

InvalidDCache() {
  uint uVar1;
  
  uVar1 = Status & 0x10000;
  if (uVar1 != 0) {
    DIntr();
  }
  _sceIDC(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  if (uVar1 != 0) {
    EIntr();
    return;
  }
  return;
}

iInvalidDCache() {
  _sceIDC(param_1 & 0xffffffffffffffc0,param_2 & 0xffffffffffffffc0);
  return;
}
