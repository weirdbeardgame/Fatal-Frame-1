// STATUS: NOT STARTED

static float one = 1.f;
static float Zero[0] = {
};

float __ieee754_fmodf(float x, float y) {
	__int32_t n;
	__int32_t hx;
	__int32_t hy;
	__int32_t hz;
	__int32_t ix;
	__int32_t iy;
	__int32_t sx;
	__int32_t i;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)y & 0x7fffffff;
  uVar5 = (uint)x ^ (uint)x & 0x80000000;
  if (((uVar6 == 0) || (0x7f7fffff < (int)uVar5)) || (0x7f800000 < uVar6)) {
    return (x * y) / (x * y);
  }
  if ((int)uVar5 < (int)uVar6) {
    return x;
  }
  if (uVar5 != uVar6) {
    if ((int)uVar5 < 0x800000) {
      iVar7 = -0x7e;
      for (iVar3 = (int)x << 8; 0 < iVar3; iVar3 = iVar3 << 1) {
        iVar7 = iVar7 + -1;
      }
    }
    else {
      iVar7 = ((int)uVar5 >> 0x17) + -0x7f;
    }
    if (uVar6 < 0x800000) {
      iVar3 = -0x7e;
      for (iVar4 = uVar6 << 8; -1 < iVar4; iVar4 = iVar4 << 1) {
        iVar3 = iVar3 + -1;
      }
    }
    else {
      iVar3 = ((int)uVar6 >> 0x17) + -0x7f;
    }
    if (iVar7 < -0x7e) {
      uVar5 = uVar5 << (-iVar7 - 0x7eU & 0x1f);
    }
    else {
      uVar5 = uVar5 & 0x7fffff | 0x800000;
    }
    bVar2 = iVar3 < -0x7e;
    if (bVar2) {
      uVar6 = uVar6 << (-iVar3 - 0x7eU & 0x1f);
    }
    else {
      uVar6 = (uint)y & 0x7fffff | 0x800000;
    }
    iVar7 = iVar7 - iVar3;
    do {
      bVar1 = iVar7 == 0;
      iVar7 = iVar7 + -1;
      if (bVar1) {
        if (-1 < (int)(uVar5 - uVar6)) {
          uVar5 = uVar5 - uVar6;
        }
        if (uVar5 != 0) {
          if ((int)uVar5 < 0x800000) {
            do {
              uVar5 = uVar5 << 1;
              iVar3 = iVar3 + -1;
            } while ((int)uVar5 < 0x800000);
            bVar2 = iVar3 < -0x7e;
          }
          if (bVar2) {
            uVar5 = (int)uVar5 >> (-iVar3 - 0x7eU & 0x1f);
          }
          else {
            uVar5 = uVar5 - 0x800000 | (iVar3 + 0x7f) * 0x800000;
          }
          return (float)(uVar5 | (uint)x & 0x80000000);
        }
        break;
      }
      iVar4 = uVar5 - uVar6;
      uVar5 = uVar5 << 1;
    } while ((iVar4 < 0) || (uVar5 = iVar4 * 2, iVar4 != 0));
  }
  return *(float *)(&Zero + ((int)x >> 0x1f) * -4);
}
