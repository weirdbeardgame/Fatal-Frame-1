// STATUS: NOT STARTED


static topThread() {
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  do {
    while( true ) {
      while( true ) {
        WaitSema(topSema);
        iVar2 = (*param_1 & 0x1ff) * 2;
        *param_1 = (*param_1 & 0x1ff) + 1;
        puVar3 = (undefined *)((int)param_1 + iVar2 + 9);
        bVar1 = *(byte *)((int)param_1 + iVar2 + 8);
        if (bVar1 != 1) break;
        RotateThreadReadyQueue(*puVar3);
      }
      if (1 < bVar1) break;
      if (bVar1 == 0) {
        WakeupThread(*puVar3);
      }
      else {
LAB_0022bb50:
        kprintf(0x3535c0);
      }
    }
    if (bVar1 != 2) goto LAB_0022bb50;
    SuspendThread(*(undefined *)((int)param_1 + iVar2 + 9));
  } while( true );
}

InitThread() {
  long lVar1;
  undefined8 uVar2;
  undefined auStack_80 [4];
  code *local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  
  if (topId < 1) {
    local_48 = 0;
    local_4c = 0xff;
    lVar1 = CreateSema(auStack_50);
    topSema = (undefined4)lVar1;
    if (-1 < lVar1) {
      local_7c = topThread;
      local_78 = &stack_6;
      local_74 = 0x400;
      local_70 = 0x35d070;
      local_6c = 0;
      lVar1 = CreateThread(auStack_80);
      topId = (int)lVar1;
      if (-1 < lVar1) {
        topArg = 0;
        DAT_0040697c = 0;
        StartThread(lVar1,0x406978);
        uVar2 = GetThreadId();
        ChangeThreadPriority(uVar2,1);
        return topId;
      }
      DeleteSema(topSema);
    }
  }
  return -1;
}

iWakeupThread() {
  undefined4 uVar1;
  ulong in_v0;
  int iVar2;
  
  uVar1 = topSema;
  syscall(0);
  if (in_v0 == param_1) {
    if ((in_v0 < 0x100) && (topId != 0)) {
      iVar2 = (DAT_0040697c & 0x1ff) * 2;
      DAT_0040697c = (DAT_0040697c & 0x1ff) + 1;
      (&DAT_00406980)[iVar2] = 0;
      *(char *)(iVar2 + 0x406981) = (char)in_v0;
      iSignalSema(uVar1);
    }
  }
  else {
    _iWakeupThread();
  }
  return;
}

iRotateThreadReadyQueue() {
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = topSema;
  if ((param_1 < 0x80) && (topId != 0)) {
    iVar2 = (DAT_0040697c & 0x1ff) * 2;
    DAT_0040697c = (DAT_0040697c & 0x1ff) + 1;
    (&DAT_00406980)[iVar2] = 1;
    *(char *)(iVar2 + 0x406981) = (char)param_1;
    iSignalSema(uVar1);
  }
  else {
    param_1 = 0xffffffff;
  }
  return param_1;
}

iSuspendThread() {
  undefined4 uVar1;
  ulong in_v0;
  int iVar2;
  
  uVar1 = topSema;
  syscall(0);
  if (in_v0 == param_1) {
    if ((in_v0 < 0x100) && (topId != 0)) {
      iVar2 = (DAT_0040697c & 0x1ff) * 2;
      DAT_0040697c = (DAT_0040697c & 0x1ff) + 1;
      (&DAT_00406980)[iVar2] = 2;
      *(char *)(iVar2 + 0x406981) = (char)in_v0;
      iSignalSema(uVar1);
    }
  }
  else {
    _iSuspendThread();
  }
  return;
}
