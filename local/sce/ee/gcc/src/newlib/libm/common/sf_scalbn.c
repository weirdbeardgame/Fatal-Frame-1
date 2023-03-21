// STATUS: NOT STARTED

static float two25 = 33554432.f;
static float twom25 = 2.98023224e-08f;
static float huge = 1.00000002e+30f;
static float tiny = 1e-30.f;

float scalbnf(float x, int n) {
	__int32_t k;
	__int32_t ix;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float x_00;
  
  iVar1 = (int)((uint)x & 0x7f800000) >> 0x17;
  if (iVar1 == 0) {
    if (((uint)x & 0x7fffffff) == 0) {
      return x;
    }
    x = x * 3.355443e+07;
    iVar1 = ((int)((uint)x & 0x7f800000) >> 0x17) + -0x19;
    if (n < -50000) {
      return x * 1e-30;
    }
  }
  iVar2 = iVar1 + n;
  if (iVar1 == 0xff) {
    return x + x;
  }
  if (iVar2 < 0xff) {
    if (0 < iVar2) {
      return (float)((uint)x & 0x807fffff | iVar2 * 0x800000);
    }
    if (-0x19 < iVar2) {
      return (float)((uint)x & 0x807fffff | (iVar2 + 0x19) * 0x800000) * 2.980232e-08;
    }
    x_00 = 1e-30;
    if (n < 0xc351) goto LAB_0023bde8;
  }
  x_00 = 1e+30;
LAB_0023bde8:
  fVar3 = copysignf(x_00,x);
  return fVar3 * x_00;
}
