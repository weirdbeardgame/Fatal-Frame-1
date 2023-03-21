// STATUS: NOT STARTED


static supplement_crt0() {
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = 1;
  local_4c = 1;
  local_48 = 1;
  local_2c = 1;
  __sce_sema_id = CreateSema(auStack_50);
  __sce_eh_sema_id = CreateSema(auStack_30);
  return;
}

_InitSys() {
  supplement_crt0();
  InitAlarm();
  InitThread();
  return;
}
