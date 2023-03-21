// STATUS: NOT STARTED


int _mbtowc_r(_reent *r, wchar_t *pwc, char *s, size_t n, int *state) {
	wchar_t dummy;
	
  uint uVar1;
  uint *puVar2;
  int dummy;
  
  puVar2 = (uint *)&dummy;
  if (pwc != (int *)0x0) {
    puVar2 = (uint *)pwc;
  }
  if (s == (char *)0x0) {
    uVar1 = 0;
  }
  else if (n == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *puVar2 = (uint)(byte)*s;
    uVar1 = (uint)(*s != '\0');
  }
  return uVar1;
}
