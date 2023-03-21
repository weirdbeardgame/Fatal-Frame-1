// STATUS: NOT STARTED


void __smakebuf(FILE *fp) {
	size_t size;
	size_t couldbetty;
	void *p;
	stat st;
	
  _reent *p_Var1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  ushort uVar5;
  stat st;
  
  uVar5 = fp->_flags;
  if ((uVar5 & 2) != 0) {
    (fp->_bf)._size = 1;
    (fp->_bf)._base = fp->_nbuf;
    fp->_p = fp->_nbuf;
    return;
  }
  if (-1 < (short)fp->_file) {
    iVar3 = _fstat_r(fp->_data,(int)(short)fp->_file,&st);
    if (-1 < iVar3) {
      bVar2 = (st.st_mode & 0xf000) == 0x2000;
      if ((st.st_mode & 0xf000) == 0x8000) {
        uVar5 = fp->_flags;
        if ((code *)fp->_seek != __sseek) goto LAB_00244f7c;
        fp->_blksize = 0x400;
        uVar5 = uVar5 | 0x400;
      }
      else {
        uVar5 = fp->_flags;
LAB_00244f7c:
        uVar5 = uVar5 | 0x800;
      }
      fp->_flags = uVar5;
      goto LAB_00244f84;
    }
    uVar5 = fp->_flags;
  }
  bVar2 = false;
  fp->_flags = uVar5 | 0x800;
LAB_00244f84:
  puVar4 = (uchar *)_malloc_r(fp->_data,0x400);
  uVar5 = fp->_flags;
  if (puVar4 == (uchar *)0x0) {
    (fp->_bf)._base = fp->_nbuf;
    (fp->_bf)._size = 1;
    fp->_flags = uVar5 | 2;
    fp->_p = fp->_nbuf;
  }
  else {
    p_Var1 = fp->_data;
    (fp->_bf)._base = puVar4;
    p_Var1->__cleanup = _cleanup_r;
    fp->_flags = uVar5 | 0x80;
    (fp->_bf)._size = 0x400;
    fp->_p = puVar4;
    if ((bVar2) && (iVar3 = isatty((int)(short)fp->_file), iVar3 != 0)) {
      fp->_flags = fp->_flags | 1;
    }
  }
  return;
}
