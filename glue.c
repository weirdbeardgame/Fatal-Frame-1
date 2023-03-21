// STATUS: NOT STARTED


sceResetttyinit() {
  ttyinit = 0;
  return;
}

VSync() {
  uint uVar1;
  long lVar2;
  
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 == 0) {
    return;
  }
  EIntr();
  return;
}

VSync2() {
  uint uVar1;
  long lVar2;
  int local_20 [2];
  undefined8 local_18;
  
  local_20[0] = 0;
  SetVSyncFlag(local_20,(uint)local_20 | 8);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  do {
    uVar1 = REG_INTC_STAT;
    if ((uVar1 & 4) != 0) break;
  } while (local_20[0] == 0);
  lVar2 = DIntr();
  REG_INTC_STAT = 4;
  SYNC(0);
  if (lVar2 != 0) {
    EIntr();
  }
  return local_18;
}

write() {
  ssize_t sVar1;
  long lVar2;
  
  if (__fd - 1U < 2) {
    if (ttyinit == 0) {
      lVar2 = sceTtyInit(__buf);
      if (lVar2 == 0) goto LAB_0022b860;
      ttyinit = 1;
    }
    sVar1 = sceTtyWrite(__buf,__n);
  }
  else {
LAB_0022b860:
    sVar1 = -1;
  }
  return sVar1;
}

read() {
  ssize_t sVar1;
  long lVar2;
  
  if (__fd == 0) {
    if (ttyinit == 0) {
      lVar2 = sceTtyInit(__buf);
      if (lVar2 == 0) goto LAB_0022b8d8;
      ttyinit = 1;
    }
    sVar1 = sceTtyRead(__buf,__nbytes);
  }
  else {
LAB_0022b8d8:
    sVar1 = -1;
  }
  return sVar1;
}

open() {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}

close() {
  return -1;
}

ioctl() {
  return -1;
}

lseek() {
  return -1;
}

sbrk() {
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = Status & 0x10000;
  while ((Status & 0x10000) != 0) {
    DI();
    SYNC(0x10);
  }
  puVar3 = heap_ptr_30 + __delta;
  puVar1 = (undefined *)EndOfHeap();
  if (puVar1 < puVar3) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    if (uVar4 != 0) {
      EI();
    }
    puVar1 = &_heap_size;
    puVar3 = heap_ptr_30;
  }
  else {
    puVar1 = heap_ptr_30;
    if (uVar4 != 0) {
      EI();
    }
  }
  heap_ptr_30 = puVar3;
  return puVar1;
}

isatty() {
  return 1;
}

fstat() {
  __buf->st_blocks = 0;
  *(undefined4 *)((int)&__buf->st_dev + 4) = 0x2000;
  return 0;
}

getpid() {
  return 1;
}

kill() {
  if (__pid == 1) {
    Exit(__sig);
  }
  return 0;
}

stat() {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}

unlink() {
  int *piVar1;
  
  piVar1 = __errno();
  *piVar1 = 5;
  return -1;
}
