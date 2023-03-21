// STATUS: NOT STARTED


scePcStart() {
  undefined4 unaff_retaddr;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  SYNC(0x10);
  Status = (Status | 6) ^ 2 | 0x10000;
  SYNC(0x10);
  Perf = param_1;
  ErrorPC = unaff_retaddr;
  SYNC(0x10);
  return;
}

scePcStop() {
  Perf = (PCCR | 0x80000000) ^ 0x80000000;
  return;
}
