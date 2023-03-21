// STATUS: NOT STARTED


float fabsf(float x) {
	__uint32_t ix;
	
  return (float)((uint)x & 0x7fffffff);
}
