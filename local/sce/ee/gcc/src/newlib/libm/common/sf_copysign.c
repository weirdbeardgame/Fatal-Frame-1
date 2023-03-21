// STATUS: NOT STARTED


float copysignf(float x, float y) {
	__uint32_t ix;
	__uint32_t iy;
	
  return (float)((uint)x & 0x7fffffff | (uint)y & 0x80000000);
}
