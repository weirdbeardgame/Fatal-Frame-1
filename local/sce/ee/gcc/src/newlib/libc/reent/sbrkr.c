// STATUS: NOT STARTED

int errno;

void* _sbrk_r(_reent *ptr, size_t incr) {
	char *ret;
	
  undefined *puVar1;
  
  errno = 0;
  puVar1 = (undefined *)sbrk(incr);
  if ((puVar1 == &_heap_size) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return puVar1;
}
