// STATUS: NOT STARTED


_ssize_t _read_r(_reent *ptr, int fd, void *buf, size_t cnt) {
	long int ret;
	
  ssize_t sVar1;
  
  errno = 0;
  sVar1 = read(fd,buf,(long)(int)cnt);
  if (((long)sVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return (long)sVar1;
}
