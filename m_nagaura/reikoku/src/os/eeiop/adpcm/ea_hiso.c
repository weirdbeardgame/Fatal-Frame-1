// STATUS: NOT STARTED

enum A_MODE_HISO_MODE {
	AMHS_MODE_PRE_FADE_OUT = 0,
	AMHS_MODE_REQ_WAIT_STOP = 1,
	AMHS_MODE_REQ_PLAY = 2,
	AMHS_MODE_REQ_STOP = 3,
	AMHS_MODE_END = 4
};


void AdpcmPlayHiso(int file_no, int fade_flm) {
	int call_no;
	
  int file_no_00;
  
  switch(file_no) {
  default:
    file_no_00 = 0x652;
    break;
  case 0xd:
    file_no_00 = 0x653;
    break;
  case 0xe:
    file_no_00 = 0x654;
    break;
  case 0xf:
    file_no_00 = 0x655;
    break;
  case 0x10:
    file_no_00 = 0x656;
    break;
  case 0x11:
    file_no_00 = 0x657;
    break;
  case 0x12:
    file_no_00 = 0x658;
    break;
  case 0x13:
    file_no_00 = 0x659;
    break;
  case 0x14:
    file_no_00 = 0x65a;
    break;
  case 0x15:
    file_no_00 = 0x65b;
    break;
  case 0x16:
    file_no_00 = 0x65c;
    break;
  case 0x17:
    file_no_00 = 0x65d;
    break;
  case 0x18:
    file_no_00 = 0x65e;
    break;
  case 0x21:
    file_no_00 = 0x612;
  }
  if (adpcm_map.hiso.use == 0) {
    adpcm_map.hiso.para.file_no = file_no_00;
    adpcm_map.hiso.para.vol = GetAdpcmVol(file_no_00);
    adpcm_map.hiso.use = 1;
  }
  else {
    if (adpcm_map.mode != 3) {
      return;
    }
    adpcm_map.hiso.para.file_no = file_no_00;
    adpcm_map.hiso.para.vol = GetAdpcmVol(file_no_00);
    adpcm_map.hiso.mode = 0;
  }
  adpcm_map.hiso.para.pan = 0x280;
  adpcm_map.hiso.para.pitch = 0xfff;
  adpcm_map.hiso.para.fin_flm = (short)fade_flm;
  return;
}

void AdpcmStopHiso(int fout_flm) {
  byte bVar1;
  
  if (adpcm_map.hiso.use != 0) {
    bVar1 = IsHighModeUse(3);
    if (bVar1 == 0) {
      adpcm_map.hiso.para.fout_flm = (short)fout_flm;
      adpcm_map.hiso.mode = 3;
    }
    else {
      adpcm_map.hiso.use = 0;
    }
  }
  return;
}

void EAdpcmHisoMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 3) {
    if (adpcm_map.mode - 1 < 2) {
      if (adpcm_map.hiso.mode == 4) {
        adpcm_map.hiso.mode = 3;
      }
      else {
        adpcm_map.hiso.mode = 0;
      }
    }
    else if (adpcm_map.hiso.mode == 4) {
      adpcm_map.hiso.mode = 3;
    }
    else {
      EAdpcmCmdStop(0,0,0);
      adpcm_map.hiso.count = 0;
      adpcm_map.hiso.mode = 1;
    }
    adpcm_map.mode = 3;
  }
  switch(adpcm_map.hiso.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x1e);
    adpcm_map.hiso.mode = 1;
    adpcm_map.hiso.count = 0;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.m_flg = 2;
      EAdpcmCmdPlay(0,0,adpcm_map.hiso.para.file_no,0,adpcm_map.hiso.para.vol,
                    adpcm_map.hiso.para.pan,adpcm_map.hiso.para.pitch,0);
      adpcm_map.hiso.mode = 2;
      adpcm_map.mvol = 0xfff;
    }
    else {
      adpcm_map.hiso.count = adpcm_map.hiso.count + 1;
      if (adpcm_map.hiso.count == 200) {
        EAdpcmCmdStop(0,0,0);
        return;
      }
      if (500 < adpcm_map.hiso.count) {
        EAdpcmCmdStop(0,0,0);
        adpcm_map.hiso.use = 0;
        adpcm_map.hiso.count = 0;
      }
    }
    break;
  case 2:
    uVar1 = EAGetRetStat();
    if (uVar1 == 2) {
      adpcm_map.hiso.use = 0;
    }
    goto LAB_00110cf8;
  case 3:
    EAdpcmCmdStop(0,0,adpcm_map.hiso.para.fout_flm);
    adpcm_map.mvol = 0xfff;
    adpcm_map.hiso.mode = 4;
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.hiso.use = 0;
      adpcm_map.hiso.mode = 0;
    }
LAB_00110cf8:
    adpcm_map.mvol = 0xfff;
  }
  return;
}
