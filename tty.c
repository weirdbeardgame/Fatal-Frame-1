// STATUS: NOT STARTED


static QueueInit() {
  q_3 = param_1;
  DAT_00406dc8 = &DAT_00406dd0;
  DAT_00406dc4 = 0;
  DAT_00406dcc = &DAT_00406dd0;
  return &q_3;
}

static QueuePeekWriteDone() {
  int iVar1;
  
  iVar1 = param_1[3];
  param_1[1] = param_1[1] + 1;
  param_1[3] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[3] = (int)(param_1 + 4);
  }
  return;
}

static QueuePeekReadDone() {
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[1] = param_1[1] + -1;
  param_1[2] = iVar1 + 1;
  if (iVar1 + 1 == (int)param_1 + *param_1 + 0x10) {
    param_1[2] = (int)(param_1 + 4);
  }
  return;
}

static sceTtyHandler() {
  ushort *puVar1;
  undefined *puVar2;
  long lVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 3) {
    lVar3 = sceDeci2ExSend(*param_3,param_3[4],param_3[1] & 0xffff);
    if (-1 < lVar3) {
      param_3[4] = param_3[4] + (int)lVar3;
      param_3[1] = param_3[1] - (int)lVar3;
      return;
    }
    kprintf(0x353628);
  }
  else {
    if (param_1 < 4) {
      if (param_1 < 1) {
        return;
      }
      if (param_2 == 0) {
        puVar1 = (ushort *)param_3[5];
        iVar6 = 0xc;
        if (0xc < *puVar1) {
          iVar5 = param_3[6];
          puVar4 = puVar1;
          while( true ) {
            puVar2 = (undefined *)((int)puVar4 + iVar6);
            iVar6 = iVar6 + 1;
            **(undefined **)(iVar5 + 0xc) = *puVar2;
            QueuePeekWriteDone(param_3[6]);
            if ((int)(uint)*puVar1 <= iVar6) break;
            puVar4 = (ushort *)param_3[5];
            iVar5 = param_3[6];
          }
        }
        param_3[2] = 0;
        return;
      }
      if (0x140 < (uint)(param_3[2] + (int)param_2)) {
        kprintf(0x3535e8);
      }
      lVar3 = sceDeci2ExRecv(*param_3,param_3[5] + param_3[2],param_2 & 0xffff);
      if (lVar3 < 0) {
        kprintf(0x353610);
      }
      param_3[2] = param_3[2] + (int)lVar3;
      return;
    }
    if (param_1 != 4) {
      return;
    }
    if (param_3[1] != 0) {
      kprintf(0x353640,param_3[1]);
    }
  }
  param_3[3] = 0;
  return;
}

sceTtyWrite() {
  long lVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = -1;
  if (DAT_00406edc == 0) {
    DIntr();
    DAT_00406edc = 1;
    DAT_00406ee0 = 0x20406f00;
    pcVar3 = (char *)0x20406f0c;
    iVar5 = 0;
    do {
      param_2 = param_2 + -1;
      if (param_2 == -1) break;
      cVar2 = *param_1;
      if (*param_1 == '\n') {
        *pcVar3 = '\r';
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 1;
        if (0xff < iVar4) break;
        cVar2 = *param_1;
      }
      *pcVar3 = cVar2;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0x100);
    DAT_00406ed4 = iVar4 + 0xc;
    uRam20406f00 = (undefined2)DAT_00406ed4;
    lVar1 = sceDeci2ReqSend(tinfo,uRam20406f07);
    if (lVar1 < 0) {
      DAT_00406edc = 0;
      EIntr();
      iVar5 = -1;
    }
    else {
      while (DAT_00406edc != 0) {
        sceDeci2Poll(tinfo);
      }
      EIntr();
    }
  }
  return iVar5;
}

sceTtyRead() {
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = iVar3;
  if (0 < param_2) {
    do {
      iVar3 = iVar2 + 1;
      do {
      } while (*(int *)(DAT_00406ee8 + 4) == 0);
      *(char *)(param_1 + iVar2) = **(char **)(DAT_00406ee8 + 8);
      QueuePeekReadDone(DAT_00406ee8);
      cVar1 = *(char *)(param_1 + iVar2);
    } while (((cVar1 != '\n') && (cVar1 != '\r')) && (iVar2 = iVar3, iVar3 < param_2));
  }
  return iVar3;
}

sceTtyInit() {
  bool bVar1;
  
  FlushCache(0);
  tinfo = sceDeci2Open(0x210,0x406ed0,0x22c070);
  bVar1 = -1 < tinfo;
  if (bVar1) {
    DAT_00406edc = 0;
    DAT_00406ed4 = 0;
    DAT_00406ed8 = 0;
    DAT_00406ee4 = 0x20407040;
    DAT_00406ee0 = 0x20406f00;
    uRam20406f04 = 0x210;
    uRam20406f06 = 0x45;
    uRam20406f07 = 0x48;
    uRam20406f08 = 0;
    uRam20406f02 = 0;
    DAT_00406ee8 = QueueInit(0x100);
  }
  return bVar1;
}
