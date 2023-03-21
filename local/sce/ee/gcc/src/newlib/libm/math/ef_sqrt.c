// STATUS: NOT STARTED

static float one = 1.f;
static float tiny = 1e-30.f;

float __ieee754_sqrtf(float x) {
	float z;
	__uint32_t r;
	__int32_t ix;
	__int32_t s;
	__int32_t q;
	__int32_t m;
	__int32_t t;
	__int32_t i;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (((uint)x & 0x7f800000) == 0x7f800000) {
    return x * x + x;
  }
  iVar4 = (int)x >> 0x17;
  if (0 < (int)x) {
LAB_0023aec4:
    if (iVar4 == 0) {
      iVar4 = 0;
      if (((uint)x & 0x800000) == 0) {
        do {
          x = (float)((int)x << 1);
          iVar4 = iVar4 + 1;
        } while (((uint)x & 0x800000) == 0);
        iVar4 = 1 - iVar4;
      }
      else {
        iVar4 = 1;
      }
    }
    iVar3 = (((uint)x & 0x7fffff | 0x800000) << (iVar4 - 0x7fU & 1)) << 1;
    iVar6 = 0;
    uVar2 = 0;
    uVar5 = 0x1000000;
    do {
      iVar1 = iVar6 + uVar5;
      if (iVar1 <= iVar3) {
        iVar3 = iVar3 - iVar1;
        iVar6 = iVar1 + uVar5;
        uVar2 = uVar2 + uVar5;
      }
      uVar5 = uVar5 >> 1;
      iVar3 = iVar3 << 1;
    } while (uVar5 != 0);
    if (iVar3 != 0) {
      uVar2 = uVar2 + (uVar2 & 1);
    }
    return (float)(((int)uVar2 >> 1) + 0x3f000000 + ((int)(iVar4 - 0x7fU) >> 1) * 0x800000);
  }
  if (((uint)x & 0x7fffffff) != 0) {
    if (-1 < (int)x) goto LAB_0023aec4;
    x = (x - x) / (x - x);
  }
  return x;
}
