// STATUS: NOT STARTED


int isnan(double x) {
	__int32_t hx;
	ieee_double_shape_type ew_u;
	
  return 0x7ff00000 - ((uint)((ulong)x >> 0x20) & 0x7fffffff | (SUB84(x,0) | -SUB84(x,0)) >> 0x1f)
         >> 0x1f;
}
