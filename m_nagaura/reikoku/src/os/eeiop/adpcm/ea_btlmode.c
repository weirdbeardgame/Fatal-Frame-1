// STATUS: NOT STARTED

enum A_MODE_BTL_MODE {
	AMBM_MODE_WAIT1 = 0,
	AMBM_MODE_WAIT2 = 1,
	AMBM_MODE_WAIT3 = 2,
	AMBM_MODE_PLAY = 3,
	AMBM_MODE_END_WAIT = 4,
	AMBM_MODE_PLAYING = 5
};


void EAdpcmBtlmodeMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 0xf) {
    adpcm_map.mode = 0xf;
    adpcm_map.btlmode.para.file_no = -1;
  }
  switch(adpcm_map.btlmode.mode) {
  case 0:
    EAdpcmCmdStop(0,0,adpcm_map.btlmode.para.fout_flm);
    adpcm_map.btlmode.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.btlmode.mode = 2;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.btlmode.mode = 4;
    }
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.btlmode.mode = 2;
      adpcm_map.btlmode.para.file_no = -1;
    }
  }
  return;
}

void AdpcmPreBtlmodeFadeOut(u_short fout_flm) {
  adpcm_map.btlmode.use = 1;
  adpcm_map.btlmode.para.fout_flm = fout_flm;
  adpcm_map.btlmode.mode = 0;
  return;
}

u_char IsEndAdpcmBtlmode() {
  return adpcm_map.btlmode.mode == 2;
}

void AdpcmPreBtlmodePreload(int file_no) {
  adpcm_map.btlmode.para.file_no = file_no;
  EAdpcmCmdPreload(0,file_no,0,0);
  adpcm_map.btlmode.mode = 2;
  return;
}

u_char IsPreLoadEndAdpcmBtlmode() {
  byte bVar1;
  ushort uVar2;
  
  uVar2 = EAGetRetTune();
  bVar1 = 0;
  if ((long)(short)uVar2 == (long)adpcm_map.btlmode.para.file_no) {
    uVar2 = EAGetRetStat();
    if (uVar2 == 0xffff) {
      bVar1 = 0xff;
    }
    else {
      uVar2 = EAGetRetStat();
      bVar1 = 1;
      if (uVar2 != 5) {
        bVar1 = 0;
      }
    }
  }
  return bVar1;
}

void AdpcmBtlmodePreLoadEndPlay() {
  short vol;
  
  vol = GetAdpcmVol(adpcm_map.btlmode.para.file_no);
  EAdpcmCmdPlay(0,0,adpcm_map.btlmode.para.file_no,0,vol,0x280,0xfff,0);
  adpcm_map.btlmode.mode = 3;
  return;
}

void AdpcmBtlmodePlay(int file_no) {
  short vol;
  
  adpcm_map.btlmode.para.file_no = file_no;
  vol = GetAdpcmVol(file_no);
  EAdpcmCmdPlay(0,0,adpcm_map.btlmode.para.file_no,0,vol,0x280,0xfff,0);
  adpcm_map.btlmode.mode = 3;
  return;
}

void AdpcmBtlmodeEnd() {
  EAdpcmCmdStop(0,0,0x1e);
  adpcm_map.btlmode.mode = 0;
  adpcm_map.btlmode.use = 0;
  adpcm_map.hiso.use = 0;
  adpcm_map.autog.use = 0;
  adpcm_map.event.use = 0;
  return;
}
