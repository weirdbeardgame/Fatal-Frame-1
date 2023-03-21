// STATUS: NOT STARTED


int isinf(double x) {
	__int32_t hx;
	ieee_double_shape_type ew_u;
	
  uint uVar1;
  
  uVar1 = 0x7ff00000 - ((uint)((ulong)x >> 0x20) & 0x7fffffff | ((uint)x | -(uint)x) >> 0x1f);
  return ((int)(uVar1 | -uVar1) >> 0x1f) + 1;
}
