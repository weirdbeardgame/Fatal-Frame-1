// STATUS: NOT STARTED


sceSifResetIop() {
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  sceSifStopDma();
  local_3c = sceSifGetReg(0xffffffff80000000);
  DAT_00406510 = 0;
  DAT_00406514 = param_2;
  if (*param_1 != '\0') {
    cVar2 = *param_1;
    iVar3 = DAT_00406510;
    while( true ) {
      DAT_00406510 = iVar3 + 1;
      (&DAT_00406518)[iVar3] = cVar2;
      if (param_1[DAT_00406510] == '\0') break;
      cVar2 = param_1[DAT_00406510];
      iVar3 = DAT_00406510;
    }
  }
  DAT_00406508 = 0x80000003;
  _rdata = 0x68;
  local_38 = 0x68;
  local_34 = 0x44;
  local_40 = &rdata;
  sceSifWriteBackDCache(0x406500,0x68);
  lVar1 = sceSifSetDma(&local_40,1);
  if (lVar1 != 0) {
    sceSifSetReg(4,0x10000);
    sceSifSetReg(4,0x20000);
    sceSifSetReg(0xffffffff80000002,0);
    sceSifSetReg(0xffffffff80000000,0);
  }
  return lVar1 != 0;
}

sceSifIsAliveIop() {
  ulong uVar1;
  
  uVar1 = sceSifGetReg(4);
  return (uVar1 & 0x10000) != 0;
}

sceSifSyncIop() {
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    sceSifSetReg(4,0x40000);
    sceResetttyinit();
  }
  return bVar1;
}

sceSifRebootIop() {
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  byte *pbVar6;
  ulong uVar7;
  char *pcVar8;
  char local_80 [80];
  
  pcVar4 = local_80;
  pcVar8 = "rom0:UDNL ";
  if (*param_1 == 0) {
    uVar2 = 0xb;
  }
  else {
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 != 0);
    uVar2 = (int)pbVar6 - (int)(param_1 + -0xb);
  }
  if (uVar2 < 0x51) {
    sceSifInitRpc(0);
    sceSifExitRpc();
    if (DAT_00353590 == '\0') {
      bVar1 = *param_1;
      pcVar4 = local_80;
    }
    else {
      bVar1 = *param_1;
      cVar5 = DAT_00353590;
      do {
        *pcVar4 = cVar5;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
        cVar5 = *pcVar8;
      } while (*pcVar8 != '\0');
    }
    uVar7 = (ulong)bVar1;
    if (uVar7 == 0) {
      *pcVar4 = '\0';
    }
    else {
      do {
        *pcVar4 = (char)uVar7;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
        uVar7 = (ulong)(char)*param_1;
      } while (uVar7 != 0);
      *pcVar4 = '\0';
    }
    uVar3 = sceSifResetIop(local_80,0);
  }
  else {
    printf("too long parameter \'%s\'\n");
    uVar3 = 0;
  }
  return uVar3;
}
