// STATUS: NOT STARTED


int fflush(FILE *fp) {
	unsigned char *p;
	int n;
	int t;
	
  ushort uVar1;
  _reent *p_Var2;
  _reent *s;
  uchar *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uchar *puVar7;
  
  s = _impure_ptr;
  if (fp == (__sFILE *)0x0) {
    iVar4 = _fwalk(_impure_ptr,fflush);
  }
  else {
    p_Var2 = fp->_data;
    if (p_Var2 == (_reent *)0x0) {
      fp->_data = _impure_ptr;
      iVar4 = s->__sdidinit;
    }
    else {
      iVar4 = p_Var2->__sdidinit;
      s = p_Var2;
    }
    if (iVar4 == 0) {
      __sinit(s);
      uVar1 = fp->_flags;
    }
    else {
      uVar1 = fp->_flags;
    }
    iVar4 = 0;
    if (((uVar1 & 8) != 0) && (puVar7 = (fp->_bf)._base, puVar7 != (uchar *)0x0)) {
      puVar3 = fp->_p;
      fp->_p = puVar7;
      iVar4 = 0;
      iVar6 = (int)puVar3 - (int)puVar7;
      if ((uVar1 & 3) == 0) {
        iVar4 = (fp->_bf)._size;
      }
      fp->_w = iVar4;
      while (0 < iVar6) {
        lVar5 = (*(code *)fp->_write)(fp->_cookie,puVar7,iVar6);
        iVar6 = iVar6 - (int)lVar5;
        if (lVar5 < 1) {
          fp->_flags = fp->_flags | 0x40;
          return -1;
        }
        puVar7 = puVar7 + (int)lVar5;
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}
