// STATUS: NOT STARTED


int isnanf(float x) {
	__int32_t ix;
	
  return 0x7f800000 - ((uint)x & 0x7fffffff) >> 0x1f;
}
