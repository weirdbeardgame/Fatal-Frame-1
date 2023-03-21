// STATUS: NOT STARTED


sceSdRemoteCallbackInit() {
  undefined8 uVar1;
  long lVar2;
  undefined auStack_50 [4];
  code *local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  
  _sce_sdr_gDMA0CB = 0;
  _sce_sdr_gDMA1CB = 0;
  _sce_sdr_gIRQCB = 0;
  _sce_sdr_transIntr0Hdr = 0;
  _sce_sdr_transIntr1Hdr = 0;
  _sce_sdr_spu2IntrHdr = 0;
  _sce_sdr_transIntr0Arg = 0;
  _sce_sdr_transIntr1Arg = 0;
  _sce_sdr_spu2IntrArg = 0;
  sceSdRemote(1,0xe620);
  local_4c = _sdrCBThread;
  local_48 = &stack_3;
  local_44 = 0x1000;
  local_40 = 0x35d070;
  local_3c = param_1;
  uVar1 = CreateThread(auStack_50);
  local_30 = (undefined4)uVar1;
  lVar2 = StartThread(uVar1,0);
  if (lVar2 < 0) {
    printf("Can\'t start thread for streaming.\n");
    local_30 = 0xffffffff;
  }
  return local_30;
}

static _sdrCBThread() {
  undefined8 uVar1;
  undefined auStack_80 [32];
  undefined auStack_60 [80];
  
  sceSifInitRpc(0);
  uVar1 = GetThreadId();
  sceSifSetRpcQueue(auStack_80,uVar1);
  sceSifRegisterRpc(auStack_60,0xffffffff80000704,0x239e28,0x40a840,0,0,auStack_80);
  sceSifRpcLoop(auStack_80);
  return;
}

static _sdrCB() {
  code *pcVar1;
  
  switch(*param_2) {
  case 1:
    pcVar1 = _sce_sdr_gDMA0CB;
    goto LAB_00239e7c;
  case 2:
    pcVar1 = _sce_sdr_gDMA1CB;
    goto LAB_00239e7c;
  case 3:
    pcVar1 = _sce_sdr_gIRQCB;
LAB_00239e7c:
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    break;
  case 0xb:
    if (_sce_sdr_transIntr0Hdr != (code *)0x0) {
      (*_sce_sdr_transIntr0Hdr)(0,_sce_sdr_transIntr0Arg);
    }
    break;
  case 0xc:
    if (_sce_sdr_transIntr1Hdr != (code *)0x0) {
      (*_sce_sdr_transIntr1Hdr)(1,_sce_sdr_transIntr1Arg);
    }
    break;
  case 0xd:
    if (_sce_sdr_spu2IntrHdr != (code *)0x0) {
      (*_sce_sdr_spu2IntrHdr)(param_2[1],_sce_sdr_spu2IntrArg);
    }
  }
  return 0;
}
