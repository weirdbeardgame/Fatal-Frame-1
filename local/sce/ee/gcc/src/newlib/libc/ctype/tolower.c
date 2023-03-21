// STATUS: NOT STARTED


int tolower(int c) {
  int iVar1;
  
  iVar1 = c + 0x20;
  if ((""[c + 1] & 1U) == 0) {
    iVar1 = c;
  }
  return iVar1;
}
