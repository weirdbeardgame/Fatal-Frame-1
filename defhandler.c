// STATUS: NOT STARTED


_defStopDMA() {
  sceIpuStopDMA(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}

_defRestartDMA() {
  sceIpuRestartDMA(*(int *)(param_1 + 0x40) + 0x4c);
  return;
}
