// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#308,  not equal)
enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

static int __sprint(FILE *fp, __suio *uio) {
  int iVar1;
  
  iVar1 = 0;
  if (uio->uio_resid == 0) {
    uio->uio_iovcnt = 0;
  }
  else {
    iVar1 = __sfvwrite(fp,uio);
    uio->uio_iovcnt = 0;
    uio->uio_resid = 0;
  }
  return iVar1;
}

static int __sbprintf(FILE *fp, char *fmt, va_list ap) {
	int ret;
	FILE fake;
	unsigned char buf[1024];
	
  int iVar1;
  int iVar2;
  __sFILE fake;
  uchar buf [1024];
  
  fake._p = buf;
  fake._data = fp->_data;
  fake._file = fp->_file;
  fake._flags = fp->_flags & 0xfffd;
  fake._cookie = fp->_cookie;
  fake._write = fp->_write;
  fake._bf._size = 0x400;
  fake._w = 0x400;
  fake._lbfsize = 0;
  fake._bf._base = fake._p;
  iVar1 = vfprintf(&fake,fmt,ap);
  if ((-1 < iVar1) && (iVar2 = fflush(&fake), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((fake._flags & 0x40) != 0) {
    fp->_flags = fp->_flags | 0x40;
  }
  return iVar1;
}

int vfprintf(FILE *fp, char *fmt0, va_list ap) {
  _reent *p_Var1;
  int iVar2;
  _reent *p_Var3;
  
  p_Var1 = _impure_ptr;
  p_Var3 = fp->_data;
  if (fp->_data == (_reent *)0x0) {
    fp->_data = _impure_ptr;
    p_Var3 = p_Var1;
  }
  if (p_Var3->__sdidinit == 0) {
    __sinit(p_Var3);
    p_Var3 = fp->_data;
  }
  else {
    p_Var3 = fp->_data;
  }
  iVar2 = _vfprintf_r(p_Var3,fp,fmt0,ap);
  return iVar2;
}

int _vfprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap) {
	char *fmt;
	int ch;
	int n;
	int m;
	char *cp;
	__siov *iovp;
	int flags;
	int ret;
	int width;
	int prec;
	char sign;
	wchar_t wc;
	char *decimal_point;
	char softsign;
	double _double;
	int expt;
	int expsize;
	int ndig;
	char expstr[7];
	u_long _uquad;
	enum {
		OCT = 0,
		DEC = 1,
		HEX = 2
	} base;
	int dprec;
	int realsz;
	int size;
	char *xdigs;
	__suio uio;
	__siov iov[8];
	char buf[348];
	char ox[2];
	int state;
	static char blanks[16] = {
		/* [0] = */ 32,
		/* [1] = */ 32,
		/* [2] = */ 32,
		/* [3] = */ 32,
		/* [4] = */ 32,
		/* [5] = */ 32,
		/* [6] = */ 32,
		/* [7] = */ 32,
		/* [8] = */ 32,
		/* [9] = */ 32,
		/* [10] = */ 32,
		/* [11] = */ 32,
		/* [12] = */ 32,
		/* [13] = */ 32,
		/* [14] = */ 32,
		/* [15] = */ 32
	};
	static char zeroes[16] = {
		/* [0] = */ 48,
		/* [1] = */ 48,
		/* [2] = */ 48,
		/* [3] = */ 48,
		/* [4] = */ 48,
		/* [5] = */ 48,
		/* [6] = */ 48,
		/* [7] = */ 48,
		/* [8] = */ 48,
		/* [9] = */ 48,
		/* [10] = */ 48,
		/* [11] = */ 48,
		/* [12] = */ 48,
		/* [13] = */ 48,
		/* [14] = */ 48,
		/* [15] = */ 48
	};
	char *p;
	
  ushort uVar1;
  bool bVar2;
  int iVar3;
  lconv *plVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  char cVar12;
  size_t sVar13;
  size_t sVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulong u;
  __siov *p_Var19;
  char *pcVar20;
  __siov *p_Var21;
  __siov *p_Var22;
  char *pcVar23;
  ulong *puVar24;
  ulong *puVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  char expstr [7];
  __suio uio;
  __siov iov [8];
  char buf [348];
  char acStack_114 [4];
  char ox [2];
  char softsign;
  char sign;
  int wc;
  int state;
  int expt;
  int ndig;
  _reent *local_ec;
  __sFILE *local_e8;
  char *fmt;
  int ret;
  int width;
  char *decimal_point;
  long _double;
  int expsize;
  int dprec;
  int realsz;
  char *xdigs;
  int *local_b8;
  int *local_b4;
  int local_b0;
  undefined4 uStack_ac;
  
  local_ec = data;
  local_e8 = fp;
  plVar4 = localeconv();
  decimal_point = plVar4->decimal_point;
  uVar1 = local_e8->_flags;
  state = 0;
  if (((uVar1 & 8) == 0) || ((local_e8->_bf)._base == (uchar *)0x0)) {
    iVar5 = __swsetup(local_e8);
    if (iVar5 != 0) {
      return -1;
    }
    uVar1 = local_e8->_flags;
  }
  uio.uio_iov = iov;
  if (((uVar1 & 0x1a) == 10) && (-1 < (short)local_e8->_file)) {
    iVar5 = __sbprintf(local_e8,fmt0,ap);
    return iVar5;
  }
  local_b8 = &wc;
  local_b4 = &state;
  uio.uio_resid = 0;
  uio.uio_iovcnt = 0;
  ret = 0;
  fmt = fmt0;
  p_Var19 = uio.uio_iov;
LAB_00241798:
  iVar5 = _mbtowc_r(_impure_ptr,local_b8,fmt,__mb_cur_max,local_b4);
  if (0 < iVar5) goto code_r0x002417c4;
  goto LAB_002417dc;
code_r0x002417c4:
  fmt = fmt + iVar5;
  if (wc == 0x25) {
    fmt = fmt + -1;
LAB_002417dc:
    pcVar20 = fmt + -(int)fmt0;
    if (pcVar20 != (char *)0x0) {
      p_Var19->iov_len = (uint)pcVar20;
      p_Var19->iov_base = fmt0;
      p_Var19 = p_Var19 + 1;
      uio.uio_resid = (int)(pcVar20 + uio.uio_resid);
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      if (7 < uio.uio_iovcnt) {
        iVar6 = __sprint(local_e8,&uio);
        p_Var19 = iov;
        if (iVar6 != 0) goto LAB_00242b84;
      }
      ret = (int)(pcVar20 + ret);
    }
    if (0 < iVar5) {
      uVar18 = 0;
      dprec = 0;
      fmt = fmt + 1;
      width = 0;
      sign = '\0';
      cVar12 = *fmt;
      sVar14 = 0xffffffffffffffff;
      puVar24 = (ulong *)ap;
LAB_00241874:
      lVar27 = (long)(int)cVar12;
      fmt = fmt + 1;
LAB_00241888:
      puVar25 = puVar24;
      uVar28 = uVar18;
      switch((int)lVar27) {
      case 0x20:
        goto switchD_002418a8_caseD_20;
      default:
        pcVar20 = buf;
        if (lVar27 != 0) {
          buf[0] = (char)lVar27;
          sVar9 = 1;
          ap = (char *)puVar24;
          goto LAB_00241f7c;
        }
        goto LAB_00242b60;
      case 0x23:
        uVar18 = uVar18 | 1;
        cVar12 = *fmt;
        goto LAB_00241874;
      case 0x2a:
        puVar25 = puVar24 + 1;
        width = *(int *)puVar24;
        if (width < 0) {
          width = -width;
          goto switchD_002418a8_caseD_2d;
        }
        goto LAB_00241870;
      case 0x2b:
        sign = '+';
        goto LAB_00241904;
      case 0x2d:
switchD_002418a8_caseD_2d:
        uVar18 = uVar18 | 4;
        goto LAB_00241870;
      case 0x2e:
        cVar12 = *fmt;
        lVar27 = (long)cVar12;
        fmt = fmt + 1;
        if (lVar27 == 0x2a) {
          puVar25 = puVar24 + 1;
          uVar28 = *(uint *)puVar24;
          cVar12 = *fmt;
          sVar14 = 0xffffffffffffffff;
          puVar24 = puVar25;
          if (-2 < (long)(int)uVar28) {
            sVar14 = (long)(int)uVar28;
          }
          goto LAB_00241874;
        }
        sVar9 = 0;
        if ((int)cVar12 - 0x30U < 10) {
          iVar5 = 0;
          do {
            iVar5 = iVar5 + -0x30 + (int)lVar27;
            sVar9 = (size_t)iVar5;
            cVar12 = *fmt;
            lVar27 = (long)cVar12;
            fmt = fmt + 1;
            iVar5 = iVar5 * 10;
          } while ((int)cVar12 - 0x30U < 10);
        }
        sVar14 = 0xffffffffffffffff;
        if (-2 < (long)sVar9) {
          sVar14 = sVar9;
        }
        goto LAB_00241888;
      case 0x30:
        uVar18 = uVar18 | 0x80;
LAB_00241870:
        cVar12 = *fmt;
        puVar24 = puVar25;
        goto LAB_00241874;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_002418a8_caseD_31;
      case 0x44:
        uVar18 = uVar18 | 0x10;
      case 100:
      case 0x69:
        if ((uVar18 & 0x10) == 0) {
          if ((uVar18 & 0x40) == 0) {
            u = (ulong)(int)*(uint *)puVar24;
          }
          else {
            u = (ulong)(short)*(ushort *)puVar24;
          }
        }
        else {
          u = *puVar24;
        }
        iVar5 = 1;
        uVar28 = uVar18;
        if ((long)u < 0) {
          u = -u;
          sign = '-';
        }
LAB_00241e04:
        ap = (char *)(puVar24 + 1);
        dprec = (int)sVar14;
        if (-1 < (long)sVar14) {
          uVar28 = uVar28 & 0xffffff7f;
        }
        pcVar20 = acStack_114;
        if ((u == 0) && ((int)sVar14 == 0)) goto LAB_00241f60;
        if (iVar5 == 1) {
          if (u < 10) {
            pcVar20 = buf + 0x15b;
          }
          else {
            do {
              pcVar8 = pcVar20;
              uVar11 = __umoddi3(u,10);
              pcVar20 = pcVar8 + -1;
              *pcVar20 = (char)uVar11 + '0';
              u = __udivdi3(u,10);
            } while (9 < u);
            pcVar20 = pcVar8 + -2;
          }
          *pcVar20 = (char)u + '0';
          goto LAB_00241f60;
        }
        if (iVar5 != 0) {
          if (iVar5 == 2) goto LAB_00241f28;
          pcVar20 = "bug in vfprintf: bad base";
          uVar18 = uVar28 & 0x84;
          sVar9 = strlen("bug in vfprintf: bad base");
          goto LAB_00241f88;
        }
        do {
          pcVar23 = pcVar20;
          pcVar20 = pcVar23 + -1;
          lVar10 = (u & 7) + 0x30;
          u = u >> 3;
          *pcVar20 = (char)lVar10;
        } while (u != 0);
        if ((uVar28 & 1) != 0) {
          pcVar8 = pcVar23 + -0x15d;
          if (lVar10 != 0x30) {
            pcVar20 = pcVar23 + -2;
            *pcVar20 = '0';
            goto LAB_00241f60;
          }
          break;
        }
LAB_00241f60:
        pcVar8 = pcVar20 + -0x15c;
        break;
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        if (sVar14 == 0xffffffffffffffff) {
          sVar14 = 6;
        }
        else if (((lVar27 == 0x67) || (lVar27 == 0x47)) && (sVar14 == 0)) {
          sVar14 = 1;
        }
        ap = (char *)(puVar24 + 1);
        if ((uVar18 & 8) == 0) {
          _double = *puVar24;
        }
        else {
          _double = *puVar24;
        }
        iVar5 = isinf(_double);
        if (iVar5 == 0) {
          iVar5 = isnan((double)_double);
          if (iVar5 == 0) {
            uVar28 = uVar18 | 0x100;
            iVar5 = (int)sVar14;
            pcVar20 = cvt(local_ec,_double,iVar5,uVar28,&softsign,&expt,(int)lVar27,&ndig);
            if ((lVar27 == 0x67) || (lVar27 == 0x47)) {
              if (((long)expt < -3) || ((long)sVar14 < (long)expt)) {
                bVar2 = lVar27 != 0x67;
                lVar27 = 0x65;
                if (bVar2) {
                  lVar27 = 0x45;
                }
              }
              else {
                lVar27 = 0x67;
              }
            }
            sVar13 = (size_t)expt;
            iVar6 = expt + -1;
            if (lVar27 < 0x66) {
              expt = iVar6;
              expsize = exponent(expstr,iVar6,(int)lVar27);
              if ((1 < ndig) || (sVar9 = (long)(expsize + ndig), (uVar18 & 1) != 0)) {
                sVar9 = (size_t)(expsize + ndig + 1);
              }
            }
            else if (lVar27 == 0x66) {
              sVar9 = (size_t)(iVar5 + 2);
              if ((0 < (long)sVar13) && ((sVar14 != 0 || (sVar9 = sVar13, (uVar18 & 1) != 0)))) {
                sVar9 = (size_t)(expt + 1 + iVar5);
              }
            }
            else if ((long)sVar13 < (long)ndig) {
              sVar9 = (size_t)(ndig + 1);
              if ((long)sVar13 < 1) {
                sVar9 = (size_t)((ndig + 2) - expt);
              }
            }
            else {
              sVar9 = (size_t)(int)(expt + (uVar18 & 1));
            }
            if (softsign != '\0') {
              sign = '-';
            }
          }
          else {
            sVar9 = 3;
            pcVar20 = "NaN";
          }
        }
        else {
          iVar5 = dpcmp(_double,0);
          if (iVar5 < 0) {
            sign = '-';
          }
          sVar9 = 3;
          pcVar20 = "Inf";
        }
        goto LAB_00241f84;
      case 0x4c:
        uVar18 = uVar18 | 8;
        cVar12 = *fmt;
        goto LAB_00241874;
      case 0x4f:
        uVar18 = uVar18 | 0x10;
      case 0x6f:
        if ((uVar18 & 0x10) == 0) {
          if ((uVar18 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar24;
          }
          else {
            u = (ulong)*(ushort *)puVar24;
          }
        }
        else {
          u = *puVar24;
        }
        iVar5 = 0;
LAB_00241e00:
        sign = '\0';
        uVar28 = uVar18;
        goto LAB_00241e04;
      case 0x55:
        uVar18 = uVar18 | 0x10;
      case 0x75:
        if ((uVar18 & 0x10) == 0) {
          if ((uVar18 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar24;
          }
          else {
            u = (ulong)*(ushort *)puVar24;
          }
        }
        else {
          u = *puVar24;
        }
        iVar5 = 1;
        goto LAB_00241e00;
      case 0x58:
        xdigs = "0123456789ABCDEF";
        goto LAB_00241dbc;
      case 99:
        ap = (char *)(puVar24 + 1);
        pcVar20 = buf;
        sVar9 = 1;
        sign = '\0';
        buf[0] = *(char *)puVar24;
        goto LAB_00241f84;
      case 0x68:
        uVar18 = uVar18 | 0x40;
        cVar12 = *fmt;
        goto LAB_00241874;
      case 0x6c:
        cVar12 = *fmt;
        if (*fmt == 'l') {
          fmt = fmt + 1;
          uVar18 = uVar18 | 0x20;
          cVar12 = *fmt;
        }
        else {
          uVar18 = uVar18 | 0x10;
        }
        goto LAB_00241874;
      case 0x6e:
        fmt0 = fmt;
        if ((uVar18 & 0x10) == 0) {
          if ((uVar18 & 0x40) == 0) {
            ap = (char *)(puVar24 + 1);
            **(int **)puVar24 = ret;
          }
          else {
            ap = (char *)(puVar24 + 1);
            **(undefined2 **)puVar24 = (short)ret;
          }
        }
        else {
          ap = (char *)(puVar24 + 1);
          **(long **)puVar24 = (long)ret;
        }
        goto LAB_00241798;
      case 0x70:
        iVar5 = 2;
        xdigs = "0123456789abcdef";
        uVar18 = uVar18 | 2;
        lVar27 = 0x78;
        u = (ulong)(int)*(uint *)puVar24;
        goto LAB_00241e00;
      case 0x71:
        uVar18 = uVar18 | 0x20;
        cVar12 = *fmt;
        goto LAB_00241874;
      case 0x73:
        ap = (char *)(puVar24 + 1);
        pcVar20 = *(char **)puVar24;
        if (pcVar20 == (char *)0x0) {
          pcVar20 = "(null)";
        }
        if ((long)sVar14 < 0) {
          sVar9 = strlen(pcVar20);
        }
        else {
          pvVar7 = memchr(pcVar20,0,sVar14);
          sVar9 = sVar14;
          if ((pvVar7 != (void *)0x0) &&
             (sVar9 = (long)((int)pvVar7 - (int)pcVar20),
             (long)sVar14 < (long)((int)pvVar7 - (int)pcVar20))) {
            sVar9 = sVar14;
          }
        }
LAB_00241f7c:
        sign = '\0';
LAB_00241f84:
        uVar18 = uVar28 & 0x84;
        goto LAB_00241f88;
      case 0x78:
        xdigs = "0123456789abcdef";
LAB_00241dbc:
        if ((uVar18 & 0x10) == 0) {
          if ((uVar18 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar24;
          }
          else {
            u = (ulong)*(ushort *)puVar24;
          }
        }
        else {
          u = *puVar24;
        }
        iVar5 = 2;
        if (((uVar18 & 1) != 0) && (u != 0)) {
          uVar18 = uVar18 | 2;
        }
        goto LAB_00241e00;
      }
      goto LAB_00241f64;
    }
LAB_00242b60:
    if (uio.uio_resid != 0) {
      __sprint(local_e8,&uio);
    }
LAB_00242b84:
    iVar5 = -1;
    if ((local_e8->_flags & 0x40) == 0) {
      iVar5 = ret;
    }
    return iVar5;
  }
  goto LAB_00241798;
LAB_00241f28:
  do {
    pcVar8 = pcVar20;
    uVar18 = (uint)u;
    pcVar20 = pcVar8 + -1;
    u = u >> 4;
    *pcVar20 = xdigs[uVar18 & 0xf];
  } while (u != 0);
  pcVar8 = pcVar8 + -0x15d;
LAB_00241f64:
  uVar18 = uVar28 & 0x84;
  sVar9 = (size_t)(int)(buf + -(int)pcVar8);
LAB_00241f88:
  p_Var21 = p_Var19 + 1;
  uVar26 = (uint)sVar9;
  sVar14 = (long)dprec;
  if ((long)dprec <= (long)sVar9) {
    sVar14 = sVar9;
  }
  if (sign == '\0') {
    realsz = (uVar28 & 2) + (int)sVar14;
  }
  else {
    realsz = (int)sVar14 + 1;
  }
  if ((uVar18 == 0) && (uVar17 = width - realsz, 0 < (int)uVar17)) {
    uVar16 = 0x350000;
    p_Var22 = p_Var19;
    p_Var19 = p_Var21;
    for (; iVar5 = (int)uVar16, 0x10 < (int)uVar17; uVar17 = uVar17 - 0x10) {
      p_Var22->iov_base = (void *)(iVar5 + 0x4c50);
      p_Var22->iov_len = (uint)&o_sadd;
      uio.uio_resid = uio.uio_resid + 0x10;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      if (7 < uio.uio_iovcnt) {
        uStack_ac = (undefined4)((ulong)uVar16 >> 0x20);
        local_b0 = iVar5;
        iVar5 = __sprint(local_e8,&uio);
        uVar16 = CONCAT44(uStack_ac,local_b0);
        if (iVar5 != 0) goto LAB_00242b84;
        p_Var19 = iov;
      }
      p_Var22 = p_Var19;
      p_Var19 = p_Var19 + 1;
    }
    p_Var22->iov_len = uVar17;
    p_Var22->iov_base = (void *)(iVar5 + 0x4c50);
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar17 + uio.uio_resid;
    if (uio.uio_iovcnt < 8) {
      p_Var21 = p_Var19 + 1;
    }
    else {
      iVar5 = __sprint(local_e8,&uio);
      p_Var19 = iov;
      if (iVar5 != 0) goto LAB_00242b84;
      p_Var21 = iov + 1;
    }
  }
  if (sign == '\0') {
    p_Var22 = p_Var21;
    if ((uVar28 & 2) != 0) {
      ox[1] = (char)lVar27;
      ox[0] = '0';
      p_Var19->iov_len = 2;
      p_Var19->iov_base = ox;
      uio.uio_resid = uio.uio_resid + 2;
      goto joined_r0x00242128;
    }
  }
  else {
    p_Var19->iov_base = &sign;
    p_Var19->iov_len = 1;
    uio.uio_resid = uio.uio_resid + 1;
joined_r0x00242128:
    if (uio.uio_iovcnt + 1 < 8) {
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      p_Var22 = p_Var21 + 1;
      p_Var19 = p_Var21;
    }
    else {
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      iVar5 = __sprint(local_e8,&uio);
      if (iVar5 != 0) goto LAB_00242b84;
      p_Var22 = iov + 1;
      p_Var19 = iov;
    }
  }
  if ((uVar18 == 0x80) && (uVar18 = width - realsz, p_Var21 = p_Var19, 0 < (int)uVar18)) {
    for (; p_Var19 = p_Var22, 0x10 < (int)uVar18; uVar18 = uVar18 - 0x10) {
      p_Var21->iov_base = "0000000000000000Inf";
      p_Var21->iov_len = (uint)&o_sadd;
      uio.uio_resid = uio.uio_resid + 0x10;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var19 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      p_Var22 = p_Var19 + 1;
      p_Var21 = p_Var19;
    }
    p_Var21->iov_len = uVar18;
    p_Var21->iov_base = "0000000000000000Inf";
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar18 + uio.uio_resid;
    if (uio.uio_iovcnt < 8) {
      p_Var22 = p_Var19 + 1;
    }
    else {
      iVar5 = __sprint(local_e8,&uio);
      p_Var19 = iov;
      if (iVar5 != 0) goto LAB_00242b84;
      p_Var22 = iov + 1;
    }
  }
  uVar18 = dprec - uVar26;
  p_Var21 = p_Var19;
  if (0 < (int)uVar18) {
    for (; p_Var19 = p_Var22, 0x10 < (int)uVar18; uVar18 = uVar18 - 0x10) {
      p_Var21->iov_base = "0000000000000000Inf";
      p_Var21->iov_len = (uint)&o_sadd;
      uio.uio_resid = uio.uio_resid + 0x10;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var19 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      p_Var21 = p_Var19;
      p_Var22 = p_Var19 + 1;
    }
    p_Var21->iov_len = uVar18;
    p_Var21->iov_base = "0000000000000000Inf";
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar18 + uio.uio_resid;
    if (uio.uio_iovcnt < 8) {
      p_Var22 = p_Var19 + 1;
    }
    else {
      iVar5 = __sprint(local_e8,&uio);
      p_Var19 = iov;
      if (iVar5 != 0) goto LAB_00242b84;
      p_Var22 = iov + 1;
    }
  }
  if ((uVar28 & 0x100) == 0) {
    p_Var19->iov_len = uVar26;
    p_Var19->iov_base = pcVar20;
    uio.uio_resid = uVar26 + uio.uio_resid;
LAB_00242a20:
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    bVar2 = uio.uio_iovcnt < 8;
LAB_00242a30:
    if (bVar2) goto LAB_00242a50;
  }
  else {
    if (lVar27 < 0x66) {
      if ((ndig < 2) && ((uVar28 & 1) == 0)) {
        p_Var19->iov_base = pcVar20;
        p_Var19->iov_len = 1;
        uio.uio_resid = uio.uio_resid + 1;
joined_r0x00242908:
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        if (7 < uio.uio_iovcnt) {
          iVar5 = __sprint(local_e8,&uio);
          p_Var22 = iov;
          if (iVar5 != 0) goto LAB_00242b84;
        }
      }
      else {
        ox[0] = *pcVar20;
        ox[1] = '.';
        p_Var19->iov_len = 2;
        p_Var19->iov_base = ox;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 2;
        if (7 < uio.uio_iovcnt) {
          iVar5 = __sprint(local_e8,&uio);
          p_Var22 = iov;
          if (iVar5 != 0) goto LAB_00242b84;
        }
        iVar6 = dpcmp(_double,0);
        iVar5 = ndig;
        if (iVar6 != 0) {
          p_Var22->iov_base = pcVar20 + 1;
          p_Var22->iov_len = iVar5 - 1;
          p_Var22 = p_Var22 + 1;
          uio.uio_resid = uio.uio_resid + -1 + ndig;
          goto joined_r0x00242908;
        }
        uVar18 = ndig - 1;
        if (0 < (int)uVar18) {
          if ((int)uVar18 < 0x11) {
            p_Var22->iov_len = uVar18;
          }
          else {
            do {
              p_Var22->iov_base = "0000000000000000Inf";
              p_Var22->iov_len = (uint)&o_sadd;
              p_Var22 = p_Var22 + 1;
              uio.uio_resid = uio.uio_resid + 0x10;
              uio.uio_iovcnt = uio.uio_iovcnt + 1;
              if (7 < uio.uio_iovcnt) {
                iVar5 = __sprint(local_e8,&uio);
                p_Var22 = iov;
                if (iVar5 != 0) goto LAB_00242b84;
              }
              uVar18 = uVar18 - 0x10;
            } while (0x10 < (int)uVar18);
            p_Var22->iov_len = uVar18;
          }
          p_Var22->iov_base = "0000000000000000Inf";
          p_Var22 = p_Var22 + 1;
          uio.uio_resid = uVar18 + uio.uio_resid;
          goto joined_r0x00242908;
        }
      }
      iVar5 = expsize;
      p_Var22->iov_base = expstr;
      p_Var22->iov_len = iVar5;
      p_Var22 = p_Var22 + 1;
      uio.uio_resid = uio.uio_resid + iVar5;
      goto LAB_00242a20;
    }
    iVar5 = dpcmp(_double,0);
    if (iVar5 == 0) {
      p_Var19->iov_len = 1;
      p_Var19->iov_base = &DAT_00354cd8;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      if (expt < ndig) {
        p_Var22->iov_len = 1;
      }
      else {
        if ((uVar28 & 1) == 0) goto LAB_00242a50;
        p_Var22->iov_len = 1;
      }
      p_Var22->iov_base = decimal_point;
      p_Var22 = p_Var22 + 1;
      uio.uio_resid = uio.uio_resid + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      uVar18 = ndig - 1;
      if ((int)uVar18 < 1) goto LAB_00242a50;
      if ((int)uVar18 < 0x11) {
        p_Var22->iov_len = uVar18;
      }
      else {
        do {
          p_Var22->iov_base = "0000000000000000Inf";
          p_Var22->iov_len = (uint)&o_sadd;
          p_Var22 = p_Var22 + 1;
          uio.uio_resid = uio.uio_resid + 0x10;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          if (7 < uio.uio_iovcnt) {
            iVar5 = __sprint(local_e8,&uio);
            p_Var22 = iov;
            if (iVar5 != 0) goto LAB_00242b84;
          }
          uVar18 = uVar18 - 0x10;
        } while (0x10 < (int)uVar18);
        p_Var22->iov_len = uVar18;
      }
      p_Var22->iov_base = "0000000000000000Inf";
      p_Var22 = p_Var22 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uVar18 + uio.uio_resid;
      bVar2 = uio.uio_iovcnt < 8;
      goto LAB_00242a30;
    }
    if (expt < 1) {
      p_Var19->iov_len = 1;
      p_Var19->iov_base = &DAT_00354cd8;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      p_Var22->iov_len = 1;
      p_Var22->iov_base = decimal_point;
      p_Var22 = p_Var22 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      uVar18 = -expt;
      if (expt < 0) {
        if ((int)uVar18 < 0x11) {
          p_Var22->iov_len = uVar18;
        }
        else {
          do {
            p_Var22->iov_base = "0000000000000000Inf";
            p_Var22->iov_len = (uint)&o_sadd;
            p_Var22 = p_Var22 + 1;
            uio.uio_resid = uio.uio_resid + 0x10;
            uio.uio_iovcnt = uio.uio_iovcnt + 1;
            if (7 < uio.uio_iovcnt) {
              iVar5 = __sprint(local_e8,&uio);
              p_Var22 = iov;
              if (iVar5 != 0) goto LAB_00242b84;
            }
            uVar18 = uVar18 - 0x10;
          } while (0x10 < (int)uVar18);
          p_Var22->iov_len = uVar18;
        }
        p_Var22->iov_base = "0000000000000000Inf";
        p_Var22 = p_Var22 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uVar18 + uio.uio_resid;
        if (7 < uio.uio_iovcnt) {
          iVar5 = __sprint(local_e8,&uio);
          p_Var22 = iov;
          if (iVar5 != 0) goto LAB_00242b84;
        }
      }
      iVar5 = ndig;
      p_Var22->iov_base = pcVar20;
      p_Var22->iov_len = iVar5;
      uio.uio_resid = uio.uio_resid + ndig;
    }
    else {
      if (ndig <= expt) {
        p_Var19->iov_len = ndig;
        p_Var19->iov_base = pcVar20;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + ndig;
        if (7 < uio.uio_iovcnt) {
          iVar5 = __sprint(local_e8,&uio);
          p_Var22 = iov;
          if (iVar5 != 0) goto LAB_00242b84;
        }
        uVar18 = expt - ndig;
        if (0 < (int)uVar18) {
          if ((int)uVar18 < 0x11) {
            p_Var22->iov_len = uVar18;
          }
          else {
            do {
              p_Var22->iov_base = "0000000000000000Inf";
              p_Var22->iov_len = (uint)&o_sadd;
              p_Var22 = p_Var22 + 1;
              uio.uio_resid = uio.uio_resid + 0x10;
              uio.uio_iovcnt = uio.uio_iovcnt + 1;
              if (7 < uio.uio_iovcnt) {
                iVar5 = __sprint(local_e8,&uio);
                p_Var22 = iov;
                if (iVar5 != 0) goto LAB_00242b84;
              }
              uVar18 = uVar18 - 0x10;
            } while (0x10 < (int)uVar18);
            p_Var22->iov_len = uVar18;
          }
          p_Var22->iov_base = "0000000000000000Inf";
          p_Var22 = p_Var22 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uVar18 + uio.uio_resid;
          if (7 < uio.uio_iovcnt) {
            iVar5 = __sprint(local_e8,&uio);
            p_Var22 = iov;
            if (iVar5 != 0) goto LAB_00242b84;
          }
        }
        if ((uVar28 & 1) == 0) goto LAB_00242a50;
        p_Var22->iov_len = 1;
        p_Var22->iov_base = &DAT_00354ce0;
        p_Var22 = p_Var22 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 1;
        bVar2 = uio.uio_iovcnt < 8;
        goto LAB_00242a30;
      }
      p_Var19->iov_len = expt;
      p_Var19->iov_base = pcVar20;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + expt;
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar5 != 0) goto LAB_00242b84;
      }
      iVar5 = expt;
      p_Var22->iov_len = 1;
      p_Var22->iov_base = &DAT_00354ce0;
      p_Var22 = p_Var22 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar6 = __sprint(local_e8,&uio);
        p_Var22 = iov;
        if (iVar6 != 0) goto LAB_00242b84;
      }
      iVar3 = ndig;
      iVar6 = expt;
      p_Var22->iov_base = pcVar20 + iVar5;
      p_Var22->iov_len = iVar3 - iVar6;
      uio.uio_resid = uio.uio_resid + (ndig - expt);
    }
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    p_Var22 = p_Var22 + 1;
    if (uio.uio_iovcnt < 8) goto LAB_00242a50;
  }
  iVar5 = __sprint(local_e8,&uio);
  p_Var22 = iov;
  if (iVar5 != 0) goto LAB_00242b84;
LAB_00242a50:
  if ((uVar28 & 4) != 0) {
    uVar18 = width - realsz;
    if (0 < (int)uVar18) {
      uVar16 = 0x350000;
      if ((int)uVar18 < 0x11) {
        puVar15 = &DAT_00350000;
        p_Var22->iov_len = uVar18;
      }
      else {
        do {
          p_Var22->iov_base = (void *)((int)uVar16 + 0x4c50);
          p_Var22->iov_len = (uint)&o_sadd;
          p_Var22 = p_Var22 + 1;
          uio.uio_resid = uio.uio_resid + 0x10;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          if (7 < uio.uio_iovcnt) {
            uStack_ac = (undefined4)((ulong)uVar16 >> 0x20);
            local_b0 = (int)uVar16;
            iVar5 = __sprint(local_e8,&uio);
            uVar16 = CONCAT44(uStack_ac,local_b0);
            if (iVar5 != 0) goto LAB_00242b84;
            p_Var22 = iov;
          }
          uVar18 = uVar18 - 0x10;
          puVar15 = (undefined *)uVar16;
        } while (0x10 < (int)uVar18);
        p_Var22->iov_len = uVar18;
      }
      p_Var22->iov_base = puVar15 + 0x4c50;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uVar18 + uio.uio_resid;
      if ((7 < uio.uio_iovcnt) && (iVar5 = __sprint(local_e8,&uio), iVar5 != 0)) goto LAB_00242b84;
    }
  }
  iVar5 = width;
  if (width <= realsz) {
    iVar5 = realsz;
  }
  ret = ret + iVar5;
  if ((uio.uio_resid != 0) && (iVar5 = __sprint(local_e8,&uio), iVar5 != 0)) goto LAB_00242b84;
  uio.uio_iovcnt = 0;
  p_Var19 = iov;
  fmt0 = fmt;
  goto LAB_00241798;
switchD_002418a8_caseD_31:
  width = 0;
  do {
    width = width * 10 + -0x30 + (int)lVar27;
    cVar12 = *fmt;
    lVar27 = (long)cVar12;
    fmt = fmt + 1;
  } while ((int)cVar12 - 0x30U < 10);
  goto LAB_00241888;
switchD_002418a8_caseD_20:
  if (sign == '\0') {
    sign = ' ';
LAB_00241904:
    cVar12 = *fmt;
  }
  else {
    cVar12 = *fmt;
  }
  goto LAB_00241874;
}

static char* cvt(_reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length) {
	int mode;
	int dsgn;
	char *digits;
	char *bp;
	char *rve;
	double_union tmp;
	
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int dsgn;
  char *rve;
  
  if (ch == 0x66) {
    iVar2 = 3;
  }
  else if ((ch == 0x65) || (iVar2 = 2, ch == 0x45)) {
    ndigits = ndigits + 1;
    iVar2 = 2;
  }
  if (value >> 0x20 < 0) {
    value = (long)(0.0 - (double)value);
    *sign = '-';
  }
  else {
    *sign = '\0';
  }
  pcVar1 = _dtoa_r(data,value,iVar2,ndigits,decpt,&dsgn,(char **)((uint)&dsgn | 4));
  if (((ch != 0x67) && (ch != 0x47)) || ((flags & 1U) != 0)) {
    pcVar4 = pcVar1 + ndigits;
    if (ch == 0x66) {
      if (*pcVar1 == '0') {
        iVar2 = dpcmp(value,0);
        if (iVar2 != 0) {
          *decpt = 1 - ndigits;
        }
        iVar2 = *decpt;
      }
      else {
        iVar2 = *decpt;
      }
      pcVar4 = pcVar4 + iVar2;
    }
    iVar2 = dpcmp(value,0);
    if (iVar2 == 0) {
      rve = pcVar4;
    }
    if (rve < pcVar4) {
      do {
        pcVar3 = rve + 1;
        *rve = '0';
        rve = pcVar3;
      } while (pcVar3 < pcVar4);
      iVar2 = (int)pcVar3 - (int)pcVar1;
      goto LAB_00242d40;
    }
  }
  iVar2 = (int)rve - (int)pcVar1;
LAB_00242d40:
  *length = iVar2;
  return pcVar1;
}

static int exponent(char *p0, int exp, int fmtch) {
	char *p;
	char *t;
	char expbuf[308];
	
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char expbuf [308];
  char acStack_c [12];
  
  *p0 = (char)fmtch;
  if (exp < 0) {
    exp = -exp;
    p0[1] = '-';
  }
  else {
    p0[1] = '+';
  }
  pcVar5 = p0 + 2;
  pcVar3 = acStack_c;
  if (exp < 10) {
    *pcVar5 = '0';
    p0[3] = (char)exp + '0';
    pcVar5 = p0 + 4;
  }
  else {
    do {
      pcVar4 = pcVar3;
      iVar1 = exp / 10;
      pcVar3 = pcVar4 + -1;
      *pcVar3 = (char)(exp % 10) + '0';
      exp = iVar1;
    } while (9 < iVar1);
    pcVar4 = pcVar4 + -2;
    *pcVar4 = (char)iVar1 + '0';
    if (pcVar4 < acStack_c) {
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (pcVar4 < acStack_c);
      return (int)pcVar5 - (int)p0;
    }
  }
  return (int)pcVar5 - (int)p0;
}
