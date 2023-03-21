// STATUS: NOT STARTED


static kputchar() {
  uint uVar1;
  
  do {
    uVar1 = REG_SIO_ISR;
  } while ((uVar1 & 0x8000) != 0);
  REG_SIO_TXFIFO = (char)param_1;
  return param_1;
}

static deci2Putchar() {
  int iVar1;
  
  iVar1 = count;
  if (0x7d < count) {
    count = 0;
    DAT_0040325f = 0;
    kputs(0x4031e0);
    iVar1 = count;
  }
  if (param_1 != 10) {
    count = iVar1 + 1;
    (&linebuf)[iVar1] = (char)param_1;
    return;
  }
  count = 0;
  (&linebuf)[iVar1] = (char)param_1;
  (&DAT_004031e1)[iVar1] = 0;
  kputs();
  return;
}

static serialPutchar() {
  if (param_1 == 10) {
    kputchar(0xd);
    kputchar(10);
    return;
  }
  kputchar();
  return;
}

static ftoi() {
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = ((param_1 << 1) >> 0x35) - 0x433;
  if (lVar3 < -0x35) {
    return 0;
  }
  if (0xc < lVar3) {
    return 9999;
  }
  uVar2 = param_1 & 0xfffffffffffff | 0x10000000000000;
  if (lVar3 < 0) {
    uVar2 = uVar2 >> (long)(-2 - (int)lVar3);
    if ((uVar2 & 3) == 3) {
      iVar1 = (int)(uVar2 >> 2) + 1;
    }
    else {
      iVar1 = (int)(uVar2 >> 2);
    }
  }
  else {
    iVar1 = (int)(uVar2 << (long)(int)lVar3);
  }
  return iVar1;
}

static printfloat() {
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = dpcmp((long)param_1,0);
  if (iVar1 < 0) {
    param_1 = 0.0 - param_1;
    (*(code *)_putchar)(0x2d);
  }
  iVar1 = dpcmp((long)param_1,DAT_003533c8);
  if (iVar1 < 0) {
    while (iVar1 = dpcmp((long)param_1,DAT_003533d0), iVar1 < 0) {
      iVar4 = iVar4 + -1;
      param_1 = param_1 * 10.0;
    }
  }
  else {
    iVar1 = dpcmp((long)param_1,0x3ff0000000000000);
    if (-1 < iVar1) {
      while (iVar1 = dpcmp((long)param_1,0x3ff0000000000000), -1 < iVar1) {
        iVar4 = iVar4 + 1;
        param_1 = param_1 / 10.0;
      }
    }
  }
  lVar2 = __fixunsdfdi((long)(param_1 * DAT_003533d8));
  uVar3 = ftoi(lVar2);
  kprintf(0x3533b0,uVar3);
  if (iVar4 < 0) {
    kprintf(0x3533c0,iVar4);
    return;
  }
  kprintf(0x3533b8,iVar4);
  return;
}

_printf() {
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  char acStack_c0 [80];
  
LAB_00225a60:
  while( true ) {
    if (*param_1 == 0) {
      return;
    }
    pcVar9 = (char *)0x0;
    lVar7 = 0;
    if (*param_1 == 0x25) break;
    param_1 = param_1 + 1;
    (*(code *)_putchar)();
  }
LAB_00225518:
  pbVar2 = param_1;
  param_1 = pbVar2 + 1;
  switch((int)((*param_1 - 0x30) * 0x1000000) >> 0x18) {
  case 0:
    uVar6 = (int)(char)pbVar2[2] - 0x30;
    if ((uVar6 & 0xff) < 10) {
      if ((int)(char)pbVar2[3] - 0x30U < 10) {
        param_1 = pbVar2 + 3;
        uVar6 = uVar6 * 10 + -0x30 + (int)(char)pbVar2[3];
        if (0x1f < (int)uVar6) {
          uVar6 = 0x1f;
        }
      }
      else {
        param_1 = pbVar2 + 2;
      }
      pcVar9 = acStack_c0 + (0x4f - uVar6);
      for (; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
        acStack_c0[0x4f - uVar6] = '0';
      }
    }
    goto LAB_00225518;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x37:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x47:
    goto switchD_00225544_caseD_1;
  case 0x33:
    param_1 = pbVar2 + 2;
    (*(code *)_putchar)(*(undefined *)param_2);
    param_2 = param_2 + 1;
    goto LAB_00225a60;
  case 0x34:
    if (lVar7 == 0x6c) {
      uVar10 = *param_2;
    }
    else if (lVar7 == 0x68) {
      uVar10 = (ulong)*(short *)param_2;
    }
    else {
      uVar10 = (ulong)(int)*(char **)param_2;
    }
    param_2 = param_2 + 1;
    pcVar8 = acStack_c0 + 0x4f;
    acStack_c0[79] = 0;
    if (uVar10 == 0) {
      pcVar8 = acStack_c0 + 0x4e;
      acStack_c0[78] = 0x30;
    }
    else {
      if ((long)uVar10 < 0) {
        uVar10 = -uVar10;
        (*(code *)_putchar)(0x2d);
      }
      for (; uVar10 != 0; uVar10 = __divdi3(uVar10,10)) {
        lVar7 = __moddi3(uVar10,10);
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)lVar7 + '0';
      }
    }
    param_1 = pbVar2 + 2;
    if ((pcVar9 != (char *)0x0) && (pcVar9 < pcVar8)) {
      pcVar8 = pcVar9;
    }
    cVar5 = *pcVar8;
    if (*pcVar8 == '\0') break;
    do {
      pcVar8 = pcVar8 + 1;
      (*(code *)_putchar)(cVar5);
      cVar5 = *pcVar8;
    } while (*pcVar8 != '\0');
    goto LAB_00225a60;
  case 0x35:
  case 0x36:
    if ((float)*(char **)param_2 == 0.0) {
      param_1 = pbVar2 + 2;
      (*(code *)_putchar)(0x30);
      param_2 = param_2 + 1;
    }
    else {
      param_1 = pbVar2 + 2;
      printfloat((double)(float)*(char **)param_2);
      param_2 = param_2 + 1;
    }
    goto LAB_00225a60;
  case 0x38:
    lVar7 = 0x68;
    goto LAB_00225518;
  case 0x3c:
    goto switchD_00225544_caseD_3c;
  case 0x3f:
    if (lVar7 == 0x6c) {
      uVar10 = *param_2;
    }
    else if (lVar7 == 0x68) {
      uVar10 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar10 = ZEXT48(*(char **)param_2);
    }
    param_2 = param_2 + 1;
    pcVar8 = acStack_c0 + 0x4f;
    acStack_c0[79] = 0;
    if (uVar10 == 0) {
      pcVar8 = acStack_c0 + 0x4e;
      acStack_c0[78] = 0x30;
    }
    else {
      do {
        bVar1 = (byte)uVar10;
        pcVar8 = pcVar8 + -1;
        uVar10 = uVar10 >> 3;
        *pcVar8 = (bVar1 & 7) + 0x30;
      } while (uVar10 != 0);
    }
    param_1 = pbVar2 + 2;
    if ((pcVar9 != (char *)0x0) && (pcVar9 < pcVar8)) {
      pcVar8 = pcVar9;
    }
    cVar5 = *pcVar8;
    if (*pcVar8 == '\0') break;
    do {
      pcVar8 = pcVar8 + 1;
      (*(code *)_putchar)(cVar5);
      cVar5 = *pcVar8;
    } while (*pcVar8 != '\0');
    goto LAB_00225a60;
  case 0x43:
    puVar11 = param_2 + 1;
    pcVar9 = *(char **)param_2;
    cVar5 = *pcVar9;
    param_2 = puVar11;
    if (*pcVar9 == '\0') {
      param_1 = pbVar2 + 2;
      (*(code *)_putchar)(0x28);
      (*(code *)_putchar)(0x6e);
      (*(code *)_putchar)(0x75);
      (*(code *)_putchar)(0x6c);
      (*(code *)_putchar)(0x6c);
      (*(code *)_putchar)(0x29);
    }
    else {
      param_1 = pbVar2 + 2;
      do {
        pcVar9 = pcVar9 + 1;
        (*(code *)_putchar)(cVar5);
        cVar5 = *pcVar9;
      } while (cVar5 != '\0');
    }
    goto LAB_00225a60;
  case 0x45:
    if (lVar7 == 0x6c) {
      uVar10 = *param_2;
    }
    else if (lVar7 == 0x68) {
      uVar10 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar10 = ZEXT48(*(char **)param_2);
    }
    param_2 = param_2 + 1;
    pcVar8 = acStack_c0 + 0x4f;
    acStack_c0[79] = 0;
    if (uVar10 == 0) {
      pcVar8 = acStack_c0 + 0x4e;
      acStack_c0[78] = 0x30;
    }
    else {
      do {
        uVar4 = __umoddi3(uVar10,10);
        pcVar8 = pcVar8 + -1;
        *pcVar8 = (char)uVar4 + '0';
        uVar10 = __udivdi3(uVar10,10);
      } while (uVar10 != 0);
    }
    param_1 = pbVar2 + 2;
    if ((pcVar9 != (char *)0x0) && (pcVar9 < pcVar8)) {
      pcVar8 = pcVar9;
    }
    cVar5 = *pcVar8;
    if (*pcVar8 != '\0') {
      do {
        pcVar8 = pcVar8 + 1;
        (*(code *)_putchar)(cVar5);
        cVar5 = *pcVar8;
      } while (*pcVar8 != '\0');
      goto LAB_00225a60;
    }
    break;
  case 0x48:
    if (lVar7 == 0x6c) {
      uVar10 = *param_2;
    }
    else if (lVar7 == 0x68) {
      uVar10 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar10 = ZEXT48(*(char **)param_2);
    }
    param_2 = param_2 + 1;
    pcVar8 = acStack_c0 + 0x4f;
    acStack_c0[79] = 0;
    if (uVar10 == 0) {
      pcVar8 = acStack_c0 + 0x4e;
      acStack_c0[78] = 0x30;
    }
    else {
      do {
        cVar5 = (char)(uVar10 & 0xf);
        cVar3 = cVar5 + '0';
        if (9 < (uVar10 & 0xf)) {
          cVar3 = cVar5 + 'W';
        }
        pcVar8 = pcVar8 + -1;
        uVar10 = uVar10 >> 4;
        *pcVar8 = cVar3;
      } while (uVar10 != 0);
    }
    param_1 = pbVar2 + 2;
    if ((pcVar9 != (char *)0x0) && (pcVar9 < pcVar8)) {
      pcVar8 = pcVar9;
    }
    cVar5 = *pcVar8;
    if (*pcVar8 == '\0') break;
    do {
      pcVar8 = pcVar8 + 1;
      (*(code *)_putchar)(cVar5);
      cVar5 = *pcVar8;
    } while (*pcVar8 != '\0');
    goto LAB_00225a60;
  default:
    break;
  }
switchD_00225544_caseD_49:
  param_1 = pbVar2 + 2;
  goto LAB_00225a60;
switchD_00225544_caseD_3c:
  lVar7 = 0x6c;
  goto LAB_00225518;
switchD_00225544_caseD_1:
  goto switchD_00225544_caseD_49;
}

kprintf() {
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  _printf(param_1,&local_38);
  return;
}

scePrintf() {
  undefined *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  puVar1 = _putchar;
  _putchar = deci2Putchar;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  _printf(param_1,&local_38);
  _putchar = puVar1;
  return;
}
