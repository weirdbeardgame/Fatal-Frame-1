// STATUS: NOT STARTED


_off_t _lseek_r(_reent *ptr, int fd, off_t pos, int whence) {
	off_t ret;
	
  __off_t _Var1;
  
  errno = 0;
  _Var1 = lseek(fd,pos,whence);
  if ((_Var1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return _Var1;
}
