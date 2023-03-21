// STATUS: NOT STARTED


int __sfvwrite(FILE *fp, __suio *uio) {
	size_t len;
	char *p;
	__siov *iov;
	int w;
	int s;
	char *nl;
	int nlknown;
	int nldist;
	
  uint *puVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ulong __n_00;
  void *unaff_s3_lo;
  __siov *p_Var10;
  ulong unaff_s5;
  size_t __n;
  
  if (uio->uio_resid != 0) {
    uVar7 = fp->_flags;
    if (((uVar7 & 8) == 0) || ((fp->_bf)._base == (uchar *)0x0)) {
      iVar3 = __swsetup(fp);
      if (iVar3 != 0) {
        return -1;
      }
      uVar7 = fp->_flags;
      p_Var10 = uio->uio_iov;
    }
    else {
      p_Var10 = uio->uio_iov;
    }
    __n_00 = 0;
    if ((uVar7 & 2) != 0) {
      while( true ) {
        while (__n_00 == 0) {
          unaff_s3_lo = p_Var10->iov_base;
          puVar1 = &p_Var10->iov_len;
          p_Var10 = p_Var10 + 1;
          __n_00 = (ulong)(int)*puVar1;
        }
        uVar6 = 0x400;
        if (__n_00 < 0x401) {
          uVar6 = __n_00;
        }
        lVar5 = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo,uVar6);
        iVar3 = (int)lVar5;
        unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar3);
        if (lVar5 < 1) break;
        __n_00 = (ulong)((int)__n_00 - iVar3);
        iVar3 = uio->uio_resid - iVar3;
        uio->uio_resid = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_00244d3c:
      uVar7 = fp->_flags;
LAB_00244d40:
      fp->_flags = uVar7 | 0x40;
      return -1;
    }
    bVar2 = false;
    if ((uVar7 & 1) == 0) {
      do {
        iVar3 = fp->_w;
        uVar6 = (ulong)iVar3;
        while (__n_00 == 0) {
          unaff_s3_lo = p_Var10->iov_base;
          puVar1 = &p_Var10->iov_len;
          p_Var10 = p_Var10 + 1;
          __n_00 = (ulong)(int)*puVar1;
        }
        iVar9 = (int)__n_00;
        if ((uVar7 & 0x200) == 0) {
          if (((fp->_bf)._base < fp->_p) && (uVar6 < __n_00)) {
            memmove(fp->_p,unaff_s3_lo,uVar6);
            fp->_p = fp->_p + iVar3;
            iVar3 = fflush(fp);
            if (iVar3 != 0) {
              uVar7 = fp->_flags;
              goto LAB_00244d40;
            }
            iVar3 = uio->uio_resid;
          }
          else {
            uVar6 = (ulong)(fp->_bf)._size;
            if (__n_00 < uVar6) {
              memmove(fp->_p,unaff_s3_lo,__n_00);
              fp->_w = fp->_w - iVar9;
              fp->_p = fp->_p + iVar9;
              goto LAB_00244bc0;
            }
            uVar6 = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo,uVar6);
            if ((long)uVar6 < 1) {
              uVar7 = fp->_flags;
              goto LAB_00244d40;
            }
            iVar3 = uio->uio_resid;
          }
        }
        else {
          if (__n_00 < uVar6) {
            uVar6 = __n_00;
          }
          memmove(fp->_p,unaff_s3_lo,uVar6);
          fp->_w = fp->_w - (int)uVar6;
          fp->_p = fp->_p + (int)uVar6;
LAB_00244bc0:
          iVar3 = uio->uio_resid;
          uVar6 = __n_00;
        }
        iVar8 = (int)uVar6;
        unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar8);
        __n_00 = (ulong)(iVar9 - iVar8);
        uio->uio_resid = iVar3 - iVar8;
        if (iVar3 - iVar8 == 0) {
          return 0;
        }
        uVar7 = fp->_flags;
      } while( true );
    }
    do {
      if (__n_00 == 0) {
        bVar2 = false;
        do {
          unaff_s3_lo = p_Var10->iov_base;
          __n_00 = (ulong)(int)p_Var10->iov_len;
          p_Var10 = p_Var10 + 1;
        } while (__n_00 == 0);
      }
      if (bVar2) {
        iVar3 = (fp->_bf)._size;
      }
      else {
        pvVar4 = memchr(unaff_s3_lo,10,__n_00);
        if (pvVar4 == (void *)0x0) {
          iVar3 = (int)__n_00 + 1;
        }
        else {
          iVar3 = (int)pvVar4 - ((int)unaff_s3_lo + -1);
        }
        unaff_s5 = (ulong)iVar3;
        bVar2 = true;
        iVar3 = (fp->_bf)._size;
      }
      uVar6 = __n_00;
      if (unaff_s5 <= __n_00) {
        uVar6 = unaff_s5;
      }
      iVar9 = fp->_w + iVar3;
      __n = (size_t)iVar9;
      iVar8 = (int)unaff_s5;
      if (((fp->_bf)._base < fp->_p) && ((long)__n < (long)uVar6)) {
        memmove(fp->_p,unaff_s3_lo,__n);
        fp->_p = fp->_p + iVar9;
        iVar3 = fflush(fp);
        unaff_s5 = (ulong)(iVar8 - iVar9);
        if (iVar3 != 0) goto LAB_00244d3c;
      }
      else if ((long)uVar6 < (long)iVar3) {
        memmove(fp->_p,unaff_s3_lo,uVar6);
        iVar3 = (int)uVar6;
        fp->_w = fp->_w - iVar3;
        fp->_p = fp->_p + iVar3;
        unaff_s5 = (ulong)(iVar8 - iVar3);
        __n = uVar6;
      }
      else {
        __n = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo);
        unaff_s5 = (ulong)(iVar8 - (int)__n);
        if ((long)__n < 1) goto LAB_00244d3c;
      }
      if (unaff_s5 == 0) {
        iVar3 = fflush(fp);
        bVar2 = false;
        if (iVar3 != 0) goto LAB_00244d3c;
        iVar3 = uio->uio_resid;
      }
      else {
        iVar3 = uio->uio_resid;
      }
      iVar9 = (int)__n;
      unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar9);
      __n_00 = (ulong)((int)__n_00 - iVar9);
      uio->uio_resid = iVar3 - iVar9;
    } while (iVar3 - iVar9 != 0);
  }
  return 0;
}
