// STATUS: NOT STARTED


void FSpeMapDataMapping() {
	u_int *addr_top;
	u_int *addr_data;
	int i;
	u_short data_num;
	
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(iRam007f8010 + 0x7f8000);
  for (uVar2 = (uint)((*piVar1 + 0x7f8000) - (int)piVar1) >> 2 & 0xffff; uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *piVar1 = *piVar1 + 0x7f8000;
    piVar1 = piVar1 + 1;
  }
  return;
}

u_char* FSpeGetTopAddr(u_short fact_no) {
	u_int *addr;
	
  if (((int)fact_no & 0xffffU) == 0xffff) {
    return (uchar *)0x0;
  }
  return *(uchar **)(((int)fact_no & 0xffffU) * 4 + iRam007f8010 + 0x7f8000);
}
