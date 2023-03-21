// STATUS: NOT STARTED


void srand(unsigned int seed) {
  *(uint *)&_impure_ptr->field_0x58 = seed;
  return;
}

int rand() {
  uint uVar1;
  
  uVar1 = *(int *)&_impure_ptr->field_0x58 * 0x41c64e6d + 0x3039;
  *(uint *)&_impure_ptr->field_0x58 = uVar1;
  return uVar1 & 0x7fffffff;
}
