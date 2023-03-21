// STATUS: NOT STARTED


int _printf_r(_reent *ptr, char *fmt) {
  int iVar1;
  char local_30 [48];
  
  iVar1 = _vfprintf_r(ptr,ptr->_stdout,fmt,local_30);
  return iVar1;
}

int printf(char *fmt) {
  _reent *p_Var1;
  int iVar2;
  char local_38 [56];
  
  p_Var1 = _impure_ptr;
  _impure_ptr->_stdout->_data = _impure_ptr;
  iVar2 = vfprintf(p_Var1->_stdout,fmt,local_38);
  return iVar2;
}
