// STATUS: NOT STARTED


sceDeci2Open() {
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = param_1 & 0xffff;
  local_14 = 0x20406d80;
  local_1c = param_2;
  local_18 = param_3;
  Deci2Call(1,&local_20);
  return;
}

sceDeci2Close() {
  undefined4 local_20 [4];
  
  local_20[0] = param_1;
  Deci2Call(2,local_20);
  return;
}

sceDeci2ReqSend() {
  undefined4 local_20;
  int local_1c;
  
  local_1c = (int)param_2;
  local_20 = param_1;
  Deci2Call(3,&local_20);
  return;
}

sceDeci2Poll() {
  undefined4 local_20 [4];
  
  local_20[0] = param_1;
  Deci2Call(4,local_20);
  return;
}

sceDeci2ExRecv() {
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = param_3 & 0xffff;
  local_20 = param_1;
  local_1c = param_2;
  Deci2Call(0xfffffffffffffffb,&local_20);
  return;
}

sceDeci2ExSend() {
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = param_3 & 0xffff;
  local_20 = param_1;
  local_1c = param_2;
  Deci2Call(0xfffffffffffffffa,&local_20);
  return;
}

sceDeci2ExReqSend() {
  undefined4 local_20;
  int local_1c;
  
  local_1c = (int)param_2;
  local_20 = param_1;
  Deci2Call(0xfffffffffffffff9,&local_20);
  return;
}

sceDeci2ExLock() {
  undefined4 local_20 [4];
  
  local_20[0] = param_1;
  Deci2Call(0xfffffffffffffff8,local_20);
  return;
}

sceDeci2ExUnLock() {
  undefined4 local_20 [4];
  
  local_20[0] = param_1;
  Deci2Call(0xfffffffffffffff7,local_20);
  return;
}

kputs() {
  undefined4 local_20 [4];
  
  local_20[0] = param_1;
  Deci2Call(0x10,local_20);
  return;
}
