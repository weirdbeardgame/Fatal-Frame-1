// STATUS: NOT STARTED


sceGifPkInit() {
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = param_2;
  return;
}

sceGifPkReset() {
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}

sceGifPkTerminate() {
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)param_1[2];
  for (puVar2 = (undefined4 *)*param_1; ((uint)puVar2 & 0xc) != 0; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + ((int)puVar2 - (int)piVar1 >> 4) + -1;
  }
  param_1[2] = 0;
  *param_1 = puVar2;
  return puVar2;
}

sceGifPkCnt() {
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)sceGifPkTerminate();
  puVar1 = *param_1;
  param_1[2] = puVar2;
  *puVar1 = param_4 | 0x10000000;
  puVar1[2] = param_2;
  *param_1 = puVar1 + 4;
  puVar1[3] = param_3;
  puVar1[1] = 0;
  return;
}

sceGifPkRef() {
  uint *puVar1;
  
  sceGifPkTerminate();
  puVar1 = *param_1;
  *puVar1 = param_6 | param_3 | 0x30000000;
  puVar1[1] = param_2 & 0x9fffffff;
  *param_1 = puVar1 + 4;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  return;
}

sceGifPkEnd() {
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)sceGifPkTerminate();
  puVar1 = *param_1;
  param_1[2] = puVar2;
  *puVar1 = param_4 | 0x70000000;
  puVar1[2] = param_2;
  *param_1 = puVar1 + 4;
  puVar1[3] = param_3;
  puVar1[1] = 0;
  return;
}

sceGifPkReserve() {
  *param_1 = *param_1 + param_2 * 4;
  return;
}

sceGifPkOpenGifTag() {
  undefined4 *puVar1;
  undefined4 in_a1_udw;
  undefined4 in_register_0000005c;
  
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = (int)param_2;
  puVar1[1] = (int)((ulong)param_2 >> 0x20);
  puVar1[2] = in_a1_udw;
  puVar1[3] = in_register_0000005c;
  *param_1 = (int)(puVar1 + 4);
  param_1[3] = (int)puVar1;
  return;
}

sceGifPkCloseGifTag() {
  ulong *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)param_1[3];
  puVar3 = (undefined4 *)*param_1;
  uVar5 = *puVar1;
  uVar4 = ((int)puVar3 - (int)puVar1 >> 3) - 2;
  uVar2 = uVar5 >> 0x3a & 3;
  if (uVar2 != 1) {
    uVar4 = uVar4 >> 1;
  }
  if (uVar2 != 2) {
    uVar2 = uVar5 >> 0x3c;
    if (uVar5 >> 0x3c == 0) {
      uVar2 = 0x10;
    }
    if (uVar2 == 0) {
      trap(7);
    }
    uVar4 = (int)(uVar4 + (int)uVar2 + -1) / (int)uVar2;
  }
  param_1[3] = 0;
  *puVar1 = uVar5 + ((long)(int)uVar4 & 0xffffffffU);
  for (; ((uint)puVar3 & 0xc) != 0; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  *param_1 = puVar3;
  return;
}

sceGifPkAddGsAD() {
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = param_3;
  puVar1[1] = param_2 & 0xffffffff;
  *param_1 = (int)(puVar1 + 2);
  return;
}
