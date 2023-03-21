// STATUS: NOT STARTED


float fmodf(float x, float y) {
	float z;
	exception exc;
	
  __fdlibm_version _Var1;
  int iVar2;
  int *piVar3;
  float fVar4;
  exception exc;
  
  fVar4 = __ieee754_fmodf(x,y);
  _Var1 = __fdlib_version;
  if ((((__fdlib_version != __fdlibm_ieee) && (iVar2 = isnanf(y), iVar2 == 0)) &&
      (iVar2 = isnanf(x), iVar2 == 0)) && (y == 0.0)) {
    exc.type = 1;
    exc.name = "fmodf";
    exc.err = 0;
    exc.arg1 = (long)(double)x;
    exc.arg2 = (long)(double)y;
    if (_Var1 == __fdlibm_svid) {
      exc.retval = (long)(double)x;
    }
    else {
      exc.retval = DAT_003542a0;
    }
    if ((__fdlib_version == __fdlibm_posix) || (iVar2 = matherr(&exc), iVar2 == 0)) {
      piVar3 = __errno();
      *piVar3 = 0x21;
    }
    if (exc.err != 0) {
      piVar3 = __errno();
      *piVar3 = exc.err;
    }
    fVar4 = (float)(double)exc.retval;
  }
  return fVar4;
}
