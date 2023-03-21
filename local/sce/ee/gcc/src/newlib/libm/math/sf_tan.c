// STATUS: NOT STARTED


float tanf(float x) {
	float y[2];
	__int32_t ix;
	
  uint uVar1;
  int iy;
  float fVar2;
  float y [2];
  
  if (((uint)x & 0x7fffffff) < 0x3f490fdb) {
    y[1] = 0.0;
    iy = 1;
  }
  else {
    if (0x7f7fffff < ((uint)x & 0x7fffffff)) {
      return x - x;
    }
    uVar1 = __ieee754_rem_pio2f(x,y);
    iy = (uVar1 & 1) * -2 + 1;
    x = y[0];
  }
  fVar2 = __kernel_tanf(x,y[1],iy);
  return fVar2;
}
