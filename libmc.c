// STATUS: NOT STARTED


sceMcInit() {
  int iVar1;
  long lVar2;
  undefined auStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_8c;
  
  if ((int)semaidRegFunc < 0) {
    local_8c = 0;
    local_9c = 1;
    local_98 = 1;
    semaidRegFunc = (undefined *)CreateSema(auStack_a0);
  }
  sceMcSync(0,0,0);
  WaitSema(semaidRegFunc);
  sceSifInitRpc(0);
  while( true ) {
    lVar2 = sceSifBindRpc(0x407540,0xffffffff80000400,0);
    if (lVar2 < 0) {
      printf("bind error libmc \n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (DAT_00407564 != 0) break;
    iVar1 = 0x100000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar2 = sceSifCallRpc(0x407540,0xfe,0,0x4075c0,0x30,0x408b00,0xc,0);
  SignalSema(semaidRegFunc);
  if (lVar2 < 0) {
    DAT_00407564 = 0;
    iVar1 = (int)lVar2 + -100;
  }
  else if (DAT_00408b04 < 0x20a) {
    printf("libmc: too old release of mcserv.irx\n");
    DAT_00407564 = 0;
    iVar1 = -0x78;
  }
  else {
    iVar1 = retval;
    if (DAT_00408b08 < 0x20e) {
      printf("libmc: too old release of mcman.irx\n");
      DAT_00407564 = 0;
      iVar1 = -0x79;
    }
  }
  return iVar1;
}

_lmcGetClientPtr() {
  *param_1 = &retval;
  *param_2 = &mcRunCmdNo;
  DAT_00408b3c = semaidRegFunc;
  return &mcClientID;
}

sceMcChangeThreadPriority() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    DAT_004075d4 = param_1;
    lVar1 = sceSifCallRpc(0x407540,0x14,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0x14;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcGetSlotMax() {
  int iVar1;
  long lVar2;
  
  lVar2 = PollSema(semaidRegFunc);
  if (lVar2 < 0) {
    iVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    iVar1 = -100;
  }
  else {
    DAT_004075c4 = param_1;
    iVar1 = sceSifCallRpc(0x407540,0x15,0,0x4075c0,0x30,0x408b00,4,0);
    if (iVar1 == 0) {
      SignalSema(semaidRegFunc);
      iVar1 = retval;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return iVar1;
}

sceMcOpen() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    DAT_004075f8 = param_4;
    lVar1 = sceSifCallRpc(0x407540,2,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 2;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcMkdir() {
  long lVar1;
  
  lVar1 = sceMcOpen();
  if (lVar1 == 0) {
    mcRunCmdNo = 0xb;
  }
  return lVar1;
}

sceMcClose() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    sifParamOrd = param_1;
    lVar1 = sceSifCallRpc(0x407540,3,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 3;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcSeek() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    sifParamOrd = param_1;
    DAT_004075d0 = param_2;
    DAT_004075d4 = param_3;
    lVar1 = sceSifCallRpc(0x407540,4,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 4;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

static mceIntrReadFixAlign() {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = (int *)(param_1 | 0x20000000);
  if (*piVar1 == 0) {
    iVar2 = piVar1[1];
  }
  else {
    puVar4 = (undefined *)piVar1[2];
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        iVar3 = iVar2 + 0x10;
        iVar2 = iVar2 + 1;
        *puVar4 = *(undefined *)((int)piVar1 + iVar3);
        puVar4 = puVar4 + 1;
      } while (iVar2 < *piVar1);
    }
    iVar2 = piVar1[1];
  }
  if (iVar2 != 0) {
    puVar4 = (undefined *)piVar1[3];
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar2 = iVar3 + 0x50;
        iVar3 = iVar3 + 1;
        *puVar4 = *(undefined *)((int)piVar1 + iVar2);
        puVar4 = puVar4 + 1;
      } while (iVar3 < piVar1[1]);
    }
  }
  return;
}

sceMcRead() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    DAT_004075dc = &sifParamNext;
    DAT_004075d8 = (undefined4)param_2;
    DAT_004075cc = (undefined4)param_3;
    sifParamOrd = param_1;
    sceSifWriteBackDCache(param_2,param_3);
    sceSifWriteBackDCache(0x407a40,0xc0);
    lVar1 = sceSifCallRpc(0x407540,5,1,0x4075c0,0x30,0x408b00,4,0x22ef30);
    if (lVar1 == 0) {
      mcRunCmdNo = 5;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcWrite() {
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = PollSema(semaidRegFunc);
  if (lVar2 < 0) {
    lVar2 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar2 = -100;
  }
  else {
    if (param_3 < 0x11) {
      DAT_004075d8 = (undefined *)0x0;
      DAT_004075cc = 0;
      DAT_004075d4 = (uint)param_3;
    }
    else {
      DAT_004075d4 = ((uint)(param_2 + -1) & 0xfffffff0) - (int)(param_2 + -0x10);
      DAT_004075cc = (uint)param_3 - DAT_004075d4;
      DAT_004075d8 = param_2 + DAT_004075d4;
    }
    uVar3 = 0;
    puVar1 = param_2;
    sifParamOrd = param_1;
    if (DAT_004075d4 != 0) {
      do {
        uVar4 = uVar3 + 1;
        (&DAT_004075e0)[uVar3] = *puVar1;
        puVar1 = param_2 + uVar4;
        uVar3 = uVar4;
      } while (uVar4 < DAT_004075d4);
    }
    FlushCache(0);
    lVar2 = sceSifCallRpc(0x407540,6,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar2 == 0) {
      mcRunCmdNo = 6;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar2;
}

static mcHearAlarm() {
  iWakeupThread(param_3);
  SYNC(0);
  EI();
  return;
}

static mcDelayThread() {
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  SetAlarm(param_1,0x22f260,uVar1);
  SleepThread();
  return;
}

sceMcSync() {
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (mcRunCmdNo == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = sceSifCheckStatRpc(0x407540);
    if ((param_1 == 0) && (lVar1 != 0)) {
      while( true ) {
        lVar2 = sceSifCheckStatRpc(0x407540);
        lVar1 = 0;
        if (lVar2 == 0) break;
        mcDelayThread(0x3c);
      }
    }
    uVar3 = (uint)(lVar1 == 0);
    if (param_2 != 0) {
      *(int *)param_2 = mcRunCmdNo;
    }
    if (uVar3 != 0) {
      mcRunCmdNo = 0;
      if (param_3 != 0) {
        *(undefined4 *)param_3 = retval;
      }
      SignalSema(semaidRegFunc);
    }
  }
  return uVar3;
}

static mceGetInfoApdx() {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 | 0x20000000);
  if (typeAddr != (undefined4 *)0x0) {
    *typeAddr = *puVar1;
  }
  if (freeAddr != (undefined4 *)0x0) {
    *freeAddr = puVar1[1];
  }
  if (formAddr != (undefined4 *)0x0) {
    *formAddr = puVar1[0x24];
  }
  return;
}

sceMcGetInfo() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    DAT_004075dc = &sifParamNext;
    DAT_004075d4 = (uint)(param_3 != 0);
    DAT_004075d0 = (uint)(param_4 != 0);
    DAT_004075cc = (uint)(param_5 != 0);
    typeAddr = (undefined4)param_3;
    freeAddr = (undefined4)param_4;
    formAddr = (undefined4)param_5;
    DAT_004075c4 = param_1;
    DAT_004075c8 = param_2;
    sceSifWriteBackDCache(0x407a40,0xc0);
    lVar1 = sceSifCallRpc(0x407540,1,1,0x4075c0,0x30,0x408b00,4,0x22f3b0);
    if (lVar1 == 0) {
      mcRunCmdNo = 1;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcGetDir() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    DAT_00407600 = (undefined4)param_6;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    DAT_004075f8 = param_4;
    DAT_004075fc = (int)param_5;
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    if (-1 < param_5) {
      sceSifWriteBackDCache(param_6,(int)param_5 << 6);
    }
    lVar1 = sceSifCallRpc(0x407540,0xd,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0xd;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

static mceStorePwd() {
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = strlen((char *)0x20407b00);
    if (sVar1 < 0x400) {
      sVar1 = strlen((char *)0x20407b00);
    }
    else {
      sVar1 = 0x3ff;
    }
    memcpy((void *)param_1,(void *)0x20407b00,sVar1);
    *(undefined *)((int)(void *)param_1 + (int)sVar1) = 0;
  }
  return;
}

sceMcChdir() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    DAT_00407600 = &currentDir;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    sceSifWriteBackDCache(0x407b00,0x400);
    lVar1 = sceSifCallRpc(0x407540,0xc,1,0x4075f0,0x414,0x408b00,4,0x22f6e8);
    if (lVar1 == 0) {
      mcRunCmdNo = 0xc;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcFormat() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    DAT_004075c4 = param_1;
    DAT_004075c8 = param_2;
    lVar1 = sceSifCallRpc(0x407540,0x10,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0x10;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcDelete() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    DAT_004075f8 = 0;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    lVar1 = sceSifCallRpc(0x407540,0xf,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0xf;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcFlush() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    sifParamOrd = param_1;
    lVar1 = sceSifCallRpc(0x407540,10,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 10;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcSetFileInfo() {
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar4 = param_3;
  uVar5 = param_4;
  uVar6 = param_5;
  lVar3 = PollSema(semaidRegFunc);
  if (lVar3 < 0) {
    lVar3 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar3 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar3 = -0xd2;
  }
  else {
    DAT_004075f8 = (uint)param_5 & 7;
    uVar7 = (uint)param_4;
    uVar1 = uVar7 + 7 & 7;
    uVar2 = uVar7 & 7;
    buffFileInfo = (*(long *)((uVar7 + 7) - uVar1) << (7 - uVar1) * 8 |
                   uVar4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)(uVar7 - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0xf & 7;
    uVar2 = uVar7 + 8 & 7;
    DAT_00407588 = (*(long *)((uVar7 + 0xf) - uVar1) << (7 - uVar1) * 8 |
                   uVar5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 8) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x17 & 7;
    uVar2 = uVar7 + 0x10 & 7;
    DAT_00407590 = (*(long *)((uVar7 + 0x17) - uVar1) << (7 - uVar1) * 8 |
                   uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x10) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x1f & 7;
    uVar2 = uVar7 + 0x18 & 7;
    DAT_00407598 = (*(long *)((uVar7 + 0x1f) - uVar1) << (7 - uVar1) * 8 |
                   buffFileInfo & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x18) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x27 & 7;
    uVar2 = uVar7 + 0x20 & 7;
    DAT_004075a0 = (*(long *)((uVar7 + 0x27) - uVar1) << (7 - uVar1) * 8 |
                   DAT_00407588 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x20) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x2f & 7;
    uVar2 = uVar7 + 0x28 & 7;
    DAT_004075a8 = (*(long *)((uVar7 + 0x2f) - uVar1) << (7 - uVar1) * 8 |
                   DAT_00407590 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x28) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x37 & 7;
    uVar2 = uVar7 + 0x30 & 7;
    DAT_004075b0 = (*(long *)((uVar7 + 0x37) - uVar1) << (7 - uVar1) * 8 |
                   DAT_00407598 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x30) - uVar2) >> uVar2 * 8;
    uVar1 = uVar7 + 0x3f & 7;
    uVar2 = uVar7 + 0x38 & 7;
    DAT_004075b8 = (*(long *)((uVar7 + 0x3f) - uVar1) << (7 - uVar1) * 8 |
                   DAT_004075a0 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((uVar7 + 0x38) - uVar2) >> uVar2 * 8;
    DAT_00407600 = &buffFileInfo;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    FlushCache(0);
    lVar3 = sceSifCallRpc(0x407540,0xe,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar3 == 0) {
      mcRunCmdNo = 0xe;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar3;
}

sceMcRename() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if (((param_3 == 0) || (*(char *)param_3 == '\0')) || (param_4 == 0)) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    DAT_004075f8 = 0x10;
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    strncpy((char *)&DAT_004075a0,(char *)param_4,0x20);
    DAT_00407600 = &buffFileInfo;
    DAT_004075b8._7_1_ = 0;
    FlushCache(0);
    lVar1 = sceSifCallRpc(0x407540,0xe,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0x13;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcUnformat() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else {
    DAT_004075c4 = param_1;
    DAT_004075c8 = param_2;
    lVar1 = sceSifCallRpc(0x407540,0x11,1,0x4075c0,0x30,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0x11;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}

sceMcGetEntSpace() {
  long lVar1;
  
  lVar1 = PollSema(semaidRegFunc);
  if (lVar1 < 0) {
    lVar1 = -200;
  }
  else if (DAT_00407564 == 0) {
    SignalSema(semaidRegFunc);
    lVar1 = -100;
  }
  else if ((param_3 == 0) || (*(char *)param_3 == '\0')) {
    SignalSema(semaidRegFunc);
    lVar1 = -0xd2;
  }
  else {
    sifParamFname = param_1;
    DAT_004075f4 = param_2;
    strncpy(&DAT_00407604,(char *)param_3,0x3ff);
    DAT_00407a03 = 0;
    lVar1 = sceSifCallRpc(0x407540,0x12,1,0x4075f0,0x414,0x408b00,4,0);
    if (lVar1 == 0) {
      mcRunCmdNo = 0x12;
    }
    else {
      SignalSema(semaidRegFunc);
    }
  }
  return lVar1;
}
