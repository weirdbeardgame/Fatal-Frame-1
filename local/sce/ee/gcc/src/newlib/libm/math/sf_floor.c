// STATUS: NOT STARTED

static float huge = 1.00000002e+30f;

float floorf(float x) {
	__int32_t i0;
	__int32_t j0;
	__uint32_t i;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((int)x >> 0x17 & 0xffU) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < x + 1e+30) {
        if ((int)x < 0) {
          if (((uint)x & 0x7fffffff) != 0) {
            x = -1.0;
          }
        }
        else {
          x = 0.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uint)x & uVar2) == 0) {
        return x;
      }
      if (0.0 < x + 1e+30) {
        if ((int)x < 0) {
          x = (float)((int)x + (0x800000 >> (uVar1 & 0x1f)));
        }
        x = (float)((uint)x & ~uVar2);
      }
    }
    return x;
  }
  if (uVar1 != 0x80) {
    return x;
  }
  return x + x;
}
