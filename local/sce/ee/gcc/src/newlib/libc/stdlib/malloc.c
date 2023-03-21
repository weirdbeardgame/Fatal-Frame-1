// STATUS: NOT STARTED


void* malloc(size_t nbytes) {
  void *pvVar1;
  
  pvVar1 = _malloc_r(_impure_ptr,nbytes);
  return pvVar1;
}

void free(void *aptr) {
  _free_r(_impure_ptr,aptr);
  return;
}
