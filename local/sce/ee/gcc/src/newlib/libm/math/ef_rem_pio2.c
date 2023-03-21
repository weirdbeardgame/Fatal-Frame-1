// STATUS: NOT STARTED

static __int32_t two_over_pi[0] = {
};
static __int32_t npio2_hw[0] = {
};
static float zero = 0.f;
static float half = 0.5f;
static float two8 = 256.f;
static float invpio2 = 0.636619806f;
static float pio2_1 = 1.57078552f;
static float pio2_1t = 1.08043341e-05f;
static float pio2_2 = 1.08042732e-05f;
static float pio2_2t = 6.07709993e-11f;
static float pio2_3 = 6.07709438e-11f;
static float pio2_3t = 6.12323426e-17f;

__int32_t __ieee754_rem_pio2f(float x, float *y) {
	float z;
	float w;
	float t;
	float r;
	float fn;
	float tx[3];
	__int32_t i;
	__int32_t j;
	__int32_t n;
	__int32_t ix;
	__int32_t hx;
	int e0;
	int nx;
	__uint32_t high;
	
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float tx [3];
  
  pfVar3 = tx;
  uVar4 = (uint)x & 0x7fffffff;
  if (uVar4 < 0x3f490fd9) {
    *y = x;
    y[1] = 0.0;
    return 0;
  }
  if (uVar4 < 0x4016cbe4) {
    if (0 < (int)x) {
      fVar9 = x - 1.570786;
      if (((uint)x & 0x7ffffff0) == 0x3fc90fd0) {
        fVar6 = 6.0771e-11;
        fVar9 = fVar9 - 1.080427e-05;
        fVar5 = fVar9 - 6.0771e-11;
      }
      else {
        fVar6 = 1.080433e-05;
        fVar5 = fVar9 - 1.080433e-05;
      }
      *y = fVar5;
      y[1] = (fVar9 - fVar5) - fVar6;
      return 1;
    }
    fVar9 = x + 1.570786;
    if (((uint)x & 0x7ffffff0) == 0x3fc90fd0) {
      fVar6 = 6.0771e-11;
      fVar9 = fVar9 + 1.080427e-05;
      fVar5 = fVar9 + 6.0771e-11;
    }
    else {
      fVar6 = 1.080433e-05;
      fVar5 = fVar9 + 1.080433e-05;
    }
    *y = fVar5;
    y[1] = (fVar9 - fVar5) + fVar6;
    return -1;
  }
  iVar2 = (int)uVar4 >> 0x17;
  if (0x43490f80 < uVar4) {
    if (0x7f7fffff < uVar4) {
      *y = x - x;
      y[1] = x - x;
      return 0;
    }
    tx[2] = (float)(uVar4 + (iVar2 + -0x86) * -0x800000);
    iVar7 = 1;
    do {
      iVar7 = iVar7 + -1;
      *pfVar3 = (float)(int)tx[2];
      pfVar3 = pfVar3 + 1;
      tx[2] = (tx[2] - (float)(int)tx[2]) * 256.0;
    } while (-1 < iVar7);
    iVar7 = 3;
    if (tx[2] == 0.0) {
      iVar1 = 2;
      do {
        iVar7 = iVar1;
        iVar1 = iVar7 + -1;
      } while (tx[iVar7 + -1] == 0.0);
    }
    iVar7 = __kernel_rem_pio2f(tx,y,iVar2 + -0x86,iVar7,2,(int *)&two_over_pi);
    if (-1 < (int)x) {
      return iVar7;
    }
    fVar9 = *y;
    fVar6 = y[1];
    goto LAB_0023ae34;
  }
  fVar5 = fabsf(x);
  iVar7 = (int)(fVar5 * 0.6366198 + 0.5);
  fVar9 = (float)iVar7;
  fVar6 = fVar9 * 1.080433e-05;
  fVar5 = fVar5 - fVar9 * 1.570786;
  if ((iVar7 < 0x20) && (((uint)x & 0x7fffff00) != *(uint *)(&npio2_hw + (iVar7 + -1) * 4))) {
    *y = fVar5 - fVar6;
LAB_0023ad30:
    fVar9 = *y;
    fVar8 = fVar5;
  }
  else {
    *y = fVar5 - fVar6;
    if ((int)(iVar2 - ((uint)(fVar5 - fVar6) >> 0x17 & 0xff)) < 9) {
      fVar9 = *y;
      fVar8 = fVar5;
    }
    else {
      fVar8 = fVar5 - fVar9 * 1.080427e-05;
      fVar6 = fVar9 * 6.0771e-11 - ((fVar5 - fVar8) - fVar9 * 1.080427e-05);
      *y = fVar8 - fVar6;
      if (0x19 < (int)(iVar2 - ((uint)(fVar8 - fVar6) >> 0x17 & 0xff))) {
        fVar5 = fVar8 - fVar9 * 6.077094e-11;
        fVar6 = fVar9 * 6.123234e-17 - ((fVar8 - fVar5) - fVar9 * 6.077094e-11);
        *y = fVar5 - fVar6;
        goto LAB_0023ad30;
      }
      fVar9 = *y;
    }
  }
  fVar6 = (fVar8 - fVar9) - fVar6;
  y[1] = fVar6;
  if (-1 < (int)x) {
    return iVar7;
  }
LAB_0023ae34:
  *y = -fVar9;
  y[1] = -fVar6;
  return -iVar7;
}
