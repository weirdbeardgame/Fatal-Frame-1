// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#26, enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMEV_MODE_PRE_FADE_OUT = 0,
	AMEV_MODE_REQ_WAIT_STOP = 1,
	AMEV_MODE_REQ_PLAY = 2,
	AMEV_MODE_REQ_PLAYING = 3,
	AMEV_MODE_END = 4
};


void EAdpcmEventMain() {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)adpcm_map.mode;
  if (uVar2 != 6) {
    if (((uVar2 - 1 < 2) || (uVar2 == 4)) || (uVar2 == 5)) {
      adpcm_map.event.mode = 0;
    }
    else {
      adpcm_map.event.para.start_flm = 0;
      EAdpcmCmdStop(0,0,0x14);
      adpcm_map.event.mode = 3;
    }
    adpcm_map.mode = 6;
  }
  switch(adpcm_map.event.mode) {
  case 0:
    if (adpcm_map.event.para.start_flm != 0) {
      adpcm_map.event.para.start_flm = adpcm_map.event.para.start_flm + -1;
    }
    EAdpcmCmdStop(0,0,0x50);
    adpcm_map.event.mode = 1;
    break;
  case 1:
    if (adpcm_map.event.para.start_flm != 0) {
      adpcm_map.event.para.start_flm = adpcm_map.event.para.start_flm + -1;
    }
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      if (adpcm_map.event.para.start_flm == 0) {
        adpcm_map.m_flg = 2;
        EAdpcmCmdPlay(0,0,adpcm_map.event.para.file_no,0,adpcm_map.event.para.vol,
                      adpcm_map.event.para.pan,adpcm_map.event.para.pitch,
                      adpcm_map.event.para.fin_flm);
        adpcm_map.event.mode = 2;
      }
      adpcm_map.mvol = 0xfff;
    }
    break;
  case 2:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.event.mode = 3;
    }
    goto LAB_0010fd38;
  case 3:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.event.mode = 0;
      adpcm_map.event.use = 0;
      adpcm_map.autog.use = 0;
      adpcm_map.hiso.use = 0;
      adpcm_map.event.para.start_flm = 0;
    }
LAB_0010fd38:
    adpcm_map.mvol = 0xfff;
    break;
  case 4:
    adpcm_map.mvol = 0xfff;
    adpcm_map.event.use = 0;
    adpcm_map.autog.use = 0;
    adpcm_map.hiso.use = 0;
    adpcm_map.event.para.start_flm = 0;
    adpcm_map.event.mode = 0;
  }
  return;
}

void AdpcmPlayEvent(int file_no, u_short start_flm, int fade_flm) {
  switch(file_no) {
  case 0:
    adpcm_map.event.para.file_no = 0x645;
    break;
  case 1:
    adpcm_map.event.para.file_no = 0x646;
    break;
  case 2:
    adpcm_map.event.para.file_no = 0x647;
    break;
  case 3:
    adpcm_map.event.para.file_no = 0x648;
    break;
  case 4:
    adpcm_map.event.para.file_no = 0x649;
    break;
  case 5:
    adpcm_map.event.para.file_no = 0x64a;
    break;
  case 6:
    adpcm_map.event.para.file_no = 0x64b;
    break;
  case 7:
    adpcm_map.event.para.file_no = 0x64c;
    break;
  case 8:
    adpcm_map.event.para.file_no = 0x64d;
    break;
  case 9:
    adpcm_map.event.para.file_no = 0x64e;
    break;
  case 10:
    adpcm_map.event.para.file_no = 0x64f;
    break;
  case 0xb:
    adpcm_map.event.para.file_no = 0x650;
    break;
  default:
    adpcm_map.event.para.file_no = 0x652;
    break;
  case 0xd:
    adpcm_map.event.para.file_no = 0x653;
    break;
  case 0xe:
    adpcm_map.event.para.file_no = 0x654;
    break;
  case 0xf:
    adpcm_map.event.para.file_no = 0x655;
    break;
  case 0x10:
    adpcm_map.event.para.file_no = 0x656;
    break;
  case 0x11:
    adpcm_map.event.para.file_no = 0x657;
    break;
  case 0x12:
    adpcm_map.event.para.file_no = 0x658;
    break;
  case 0x13:
    adpcm_map.event.para.file_no = 0x659;
    break;
  case 0x14:
    adpcm_map.event.para.file_no = 0x65a;
    break;
  case 0x15:
    adpcm_map.event.para.file_no = 0x65b;
    break;
  case 0x16:
    adpcm_map.event.para.file_no = 0x65c;
    break;
  case 0x17:
    adpcm_map.event.para.file_no = 0x65d;
    break;
  case 0x18:
    adpcm_map.event.para.file_no = 0x65e;
    break;
  case 0x19:
    adpcm_map.event.para.file_no = 0x651;
  }
  adpcm_map.event.para.vol = GetAdpcmVol(adpcm_map.event.para.file_no);
  adpcm_map.event.para.fin_flm = (short)fade_flm;
  adpcm_map.event.para.start_flm = start_flm;
  adpcm_map.mode = 6;
  adpcm_map.event.para.pan = 0x280;
  adpcm_map.event.para.pitch = 0xfff;
  adpcm_map.event.use = 1;
  adpcm_map.event.mode = 0;
  return;
}

void AdpcmStopEvent(int fout_flm) {
  if (adpcm_map.event.use != 0) {
    EAdpcmCmdStop(0,0,(short)fout_flm);
    adpcm_map.event.para.start_flm = 0;
    adpcm_map.event.mode = 3;
  }
  return;
}
