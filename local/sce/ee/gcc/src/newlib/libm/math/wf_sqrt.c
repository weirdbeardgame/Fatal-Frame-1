// STATUS: NOT STARTED


float sqrtf(float x) {
	float z;
	exception exc;
	
  __fdlibm_version _Var1;
  int iVar2;
  int *piVar3;
  float fVar4;
  exception exc;
  
  fVar4 = __ieee754_sqrtf(x);
  _Var1 = __fdlib_version;
  if (((__fdlib_version != __fdlibm_ieee) && (iVar2 = isnanf(x), iVar2 == 0)) && (x < 0.0)) {
    exc.type = 1;
    exc.name = "sqrtf";
    exc.err = 0;
    exc.arg1 = (long)(double)x;
    if (_Var1 == __fdlibm_svid) {
      exc.retval = 0;
    }
    else {
      exc.retval = DAT_003542b0;
    }
    exc.arg2 = exc.arg1;
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
