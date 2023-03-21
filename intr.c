// STATUS: NOT STARTED


DisableIntc() {
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _DisableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

EnableIntc() {
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _EnableIntc(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

DisableDmac() {
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _DisableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

EnableDmac() {
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  uVar1 = _EnableDmac(param_1);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return uVar1;
}

iEnableIntc() {
  _iEnableIntc();
  SYNC(0);
  return;
}

iDisableIntc() {
  _iDisableIntc();
  SYNC(0);
  return;
}

iEnableDmac() {
  _iEnableDmac();
  SYNC(0);
  return;
}

iDisableDmac() {
  _iDisableDmac();
  SYNC(0);
  return;
}

static setup() {
  syscall(0);
  return;
}

static Copy() {
  syscall(0);
  return;
}

static kCopy() {
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3 >> 2);
  }
  return 0;
}

static GetEntryAddress() {
  syscall(0);
  return;
}

InitAlarm() {
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = REG_RCNT3_MODE;
  if ((uVar4 & 0x100) == 0) {
    uVar4 = 2;
    puVar3 = (undefined4 *)(SysEntry + 0x10);
    setup(SysEntry._0_4_,SysEntry._4_4_);
    Copy(0xffffffff80076000,0x3479b8,0x740);
    Copy(0x82000,0x3480f8,0x28);
    FlushCache(0);
    FlushCache(2);
    setup(SysEntry._8_4_,SysEntry._12_4_);
    uVar1 = SysEntry._16_4_;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar2 = GetEntryAddress(uVar1);
      uVar1 = *puVar3;
      puVar3 = puVar3 + 2;
      setup(uVar1,uVar2);
      if (7 < uVar4) break;
      uVar1 = *puVar3;
    }
  }
  return;
}
