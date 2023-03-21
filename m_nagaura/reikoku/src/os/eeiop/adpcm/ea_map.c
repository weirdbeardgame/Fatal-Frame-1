// STATUS: NOT STARTED


void EAdpcmMapMain() {
	int file_no;
	static int wait_cnt;
	
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  
  bVar2 = adpcm_map.mode;
  if (adpcm_map.mode != 1) {
    adpcm_map.mode = 1;
    wait_cnt_117 = 10;
    return;
  }
  bVar1 = 10 < wait_cnt_117;
  if (wait_cnt_117 == 0) {
    if (adpcm_map.map.stop == 0) {
      iVar4 = EAGetNowMapFileNo();
      if (adpcm_map.map.para.file_no == iVar4) {
        adpcm_map.map.para.count = EAGetRetCount();
        return;
      }
      EAdpcmCmdStop(0,0,0x1e);
      adpcm_map.map.stop = bVar2;
      return;
    }
    uVar3 = EAGetRetStat();
    if ((uVar3 != 1) && (uVar3 = EAGetRetStat(), uVar3 != 2)) {
      return;
    }
    iVar4 = EAGetNowMapFileNo();
    if (iVar4 == -1) {
      return;
    }
    adpcm_map.map.stop = 0;
    if (adpcm_map.map.para.file_no == iVar4) goto LAB_00111300;
  }
  else {
    wait_cnt_117 = wait_cnt_117 + -1;
    if (bVar1) {
      wait_cnt_117 = 9;
    }
    if (wait_cnt_117 != 0) {
      return;
    }
    iVar4 = EAGetNowMapFileNo();
    if (iVar4 == -1) {
      wait_cnt_117 = 1;
      return;
    }
    if (adpcm_map.map.para.file_no == iVar4) {
LAB_00111300:
      adpcm_map.map.para.vol = GetAdpcmVol(iVar4);
      adpcm_map.map.para.pan = 0x280;
      adpcm_map.map.para.pitch = 0xfff;
      EAdpcmCmdPlay(0,1,adpcm_map.map.para.file_no,adpcm_map.map.para.count,adpcm_map.map.para.vol,
                    0x280,0xfff,0x96);
      return;
    }
  }
  adpcm_map.map.para.file_no = iVar4;
  adpcm_map.map.para.vol = GetAdpcmVol(iVar4);
  adpcm_map.map.para.pan = 0x280;
  adpcm_map.map.para.pitch = 0xfff;
  EAdpcmCmdPlay(0,1,adpcm_map.map.para.file_no,0,adpcm_map.map.para.vol,0x280,0xfff,0);
  return;
}

static int EAGetNowMapFileNo() {
  int iVar1;
  
  if (plyr_wrk.dop._13_1_ == 0xff) {
    iVar1 = -1;
  }
  else {
    iVar1 = GetSdrAdpcmFno(plyr_wrk.dop._13_1_);
  }
  return iVar1;
}

static u_short EAGetNowMapBgmVol() {
  short sVar1;
  
  if (plyr_wrk.dop._13_1_ == 0xff) {
    sVar1 = 0x3fff;
  }
  else {
    sVar1 = GetSdrAdpcmVol(plyr_wrk.dop._13_1_);
  }
  return sVar1;
}
