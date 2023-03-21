// STATUS: NOT STARTED

static float one = 1.f;
static float pio4 = 0.785398126f;
static float pio4lo = 3.77489471e-08f;
static float T[0] = {
};

float __kernel_tanf(float x, float y, int iy) {
	float z;
	float r;
	float v;
	float w;
	float s;
	__int32_t ix;
	__int32_t hx;
	float a;
	float t;
	__int32_t i;
	
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (uint)x & 0x7fffffff;
  if ((uVar2 < 0x31800000) && ((int)x == 0)) {
    if ((uVar2 | iy + 1U) == 0) {
      fVar3 = fabsf(x);
      x = 1.0 / fVar3;
    }
    else if (iy != 1) {
      x = -1.0 / x;
    }
  }
  else {
    if (uVar2 < 0x3f2ca140) {
      fVar3 = x * x;
      fVar4 = x;
    }
    else {
      fVar3 = x;
      if ((int)x < 0) {
        fVar3 = -x;
        y = -y;
      }
      fVar4 = 3.774895e-08 - y;
      y = 0.0;
      fVar4 = (0.7853981 - fVar3) + fVar4;
      fVar3 = fVar4 * fVar4;
    }
    fVar5 = fVar3 * fVar3;
    fVar3 = y + fVar3 * (fVar3 * fVar4 *
                         (DAT_003546f4 +
                          fVar5 * (DAT_003546fc +
                                  fVar5 * (DAT_00354704 +
                                          fVar5 * (DAT_0035470c +
                                                  fVar5 * (DAT_00354714 + fVar5 * DAT_0035471c)))) +
                         fVar3 * (DAT_003546f8 +
                                 fVar5 * (DAT_00354700 +
                                         fVar5 * (DAT_00354708 +
                                                 fVar5 * (DAT_00354710 +
                                                         fVar5 * (DAT_00354718 +
                                                                 fVar5 * DAT_00354720)))))) + y) +
            _T * fVar3 * fVar4;
    fVar5 = fVar4 + fVar3;
    if (uVar2 < 0x3f2ca140) {
      x = fVar5;
      if (iy != 1) {
        fVar1 = (float)((uint)(-1.0 / fVar5) & 0xfffff000);
        x = fVar1 + (-1.0 / fVar5) *
                    (fVar1 * (float)((uint)fVar5 & 0xfffff000) + 1.0 +
                    fVar1 * (fVar3 - ((float)((uint)fVar5 & 0xfffff000) - fVar4)));
      }
    }
    else {
      fVar4 = fVar4 - ((fVar5 * fVar5) / (fVar5 + (float)iy) - fVar3);
      x = (float)(1 - ((int)x >> 0x1e & 2U)) * ((float)iy - (fVar4 + fVar4));
    }
  }
  return x;
}
