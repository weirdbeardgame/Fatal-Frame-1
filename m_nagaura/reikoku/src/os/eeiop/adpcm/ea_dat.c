// STATUS: NOT STARTED

ADPCM_VOL adpcm_vol_tbl[0] = {
};

u_short GetAdpcmVol(int file_no) {
	ADPCM_VOL *avp;
	int i;
	u_short vol;
	
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  
  uVar4 = 0x3fff;
  piVar2 = (int *)&adpcm_vol_tbl;
  if (_adpcm_vol_tbl != file_no) {
    iVar3 = 1;
    do {
      piVar2 = piVar2 + 2;
      if (0x16f < iVar3) goto LAB_0010e344;
      iVar3 = iVar3 + 1;
    } while (*piVar2 != file_no);
  }
  uVar4 = *(ushort *)(piVar2 + 1);
LAB_0010e344:
  uVar1 = 0x3fff;
  if (uVar4 < 0x4000) {
    uVar1 = uVar4;
  }
  return uVar1;
}
