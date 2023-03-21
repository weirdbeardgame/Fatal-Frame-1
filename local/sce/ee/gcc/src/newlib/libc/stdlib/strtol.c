// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#306, type name not equal)
typedef unsigned int ULong;

long int _strtol_r(_reent *rptr, char *nptr, char **endptr, int base) {
	char *s;
	long unsigned int acc;
	int c;
	long unsigned int cutoff;
	int neg;
	int any;
	int cutlim;
	
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong v;
  int iVar13;
  
  v = (ulong)base;
  bVar4 = false;
  pcVar12 = nptr;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((""[*pcVar11 + 1] & 8U) != 0);
  if (lVar10 == 0x2d) {
    cVar1 = *pcVar12;
    bVar4 = true;
  }
  else {
    if (lVar10 != 0x2b) goto LAB_0024133c;
    cVar1 = *pcVar12;
  }
  lVar10 = (long)cVar1;
  pcVar12 = pcVar11 + 2;
LAB_0024133c:
  if ((((v == 0) || (v == 0x10)) && (lVar10 == 0x30)) && ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    v = 0x10;
    pcVar12 = pcVar12 + 2;
  }
  if ((v == 0) && (v = 10, lVar10 == 0x30)) {
    v = 8;
  }
  uVar8 = 0x7fffffffffffffff;
  if (bVar4) {
    uVar8 = 0x8000000000000000;
  }
  uVar5 = __umoddi3(uVar8,v);
  iVar13 = 0;
  uVar6 = __udivdi3(uVar8,v);
  uVar8 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar2 = ""[iVar9 + 1];
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 3) == 0) {
LAB_00241460:
        if (iVar13 < 0) {
          uVar8 = 0x7fffffffffffffff;
          if (bVar4) {
            uVar8 = 0x8000000000000000;
          }
          rptr->_errno = 0x22;
        }
        else if (bVar4) {
          uVar8 = -uVar8;
        }
        if (endptr != (char **)0x0) {
          pcVar12 = pcVar12 + -1;
          if (iVar13 == 0) {
            pcVar12 = nptr;
          }
          *endptr = pcVar12;
        }
        return uVar8;
      }
      iVar3 = iVar9 + -0x37;
      if ((bVar2 & 1) == 0) {
        iVar3 = iVar9 + -0x57;
      }
    }
    else {
      iVar3 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar3;
    if ((long)v <= lVar10) goto LAB_00241460;
    if (iVar13 < 0) {
LAB_00241410:
      iVar13 = -1;
    }
    else if (uVar6 < uVar8) {
      iVar13 = -1;
    }
    else {
      if ((uVar8 == uVar6) && ((int)uVar5 < lVar10)) goto LAB_00241410;
      iVar13 = 1;
      lVar7 = __muldi3(uVar8,v);
      uVar8 = lVar10 + lVar7;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}

long int strtol(char *s, char **ptr, int base) {
  long lVar1;
  
  lVar1 = _strtol_r(_impure_ptr,s,ptr,base);
  return lVar1;
}
