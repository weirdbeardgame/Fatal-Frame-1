// STATUS: NOT STARTED

enum A_MODE_SOUL_MODE {
	AMSL_MODE_PRE_FADE_OUT = 0,
	AMSL_MODE_REQ_WAIT1 = 1,
	AMSL_MODE_REQ_WAIT2 = 2,
	AMSL_MODE_REQ_PLAY = 3,
	AMSL_MODE_REQ_STOP = 4,
	AMSL_MODE_END = 5
};


void EAdpcmSoulMain() {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)adpcm_map.mode;
  if (uVar2 != 9) {
    if ((((uVar2 - 1 < 2) || (uVar2 == 4)) || (uVar2 == 5)) || ((uVar2 == 7 || (uVar2 == 8)))) {
      adpcm_map.soul.mode = 0;
    }
    else if (adpcm_map.soul.mode < 2) {
      adpcm_map.soul.mode = 0;
    }
    else {
      EAdpcmCmdStop(0,0,0x1e);
      adpcm_map.soul.mode = 4;
    }
    adpcm_map.mode = 9;
  }
  switch(adpcm_map.soul.mode) {
  case 0:
    EAdpcmCmdStop(0,0,adpcm_map.soul.para.fout_flm);
    adpcm_map.soul.count = 0;
    adpcm_map.soul.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.soul.mode = 2;
    }
    else {
      adpcm_map.soul.count = adpcm_map.soul.count + 1;
      if (adpcm_map.soul.count == 200) {
        EAdpcmCmdStop(0,0,0);
        return;
      }
      if (1000 < adpcm_map.soul.count) {
        adpcm_map.soul.count = 0;
      }
    }
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.soul.mode = 0;
      adpcm_map.soul.use = 0;
      adpcm_map.hiso.use = 0;
      adpcm_map.autog.use = 0;
      adpcm_map.event.use = 0;
    }
  }
  return;
}

void AdpcmPreSoulFadeOut(u_short fout_flm) {
  adpcm_map.soul.use = 1;
  adpcm_map.soul.para.fout_flm = fout_flm;
  adpcm_map.soul.mode = 0;
  return;
}

u_char IsFadeoutEndAdpcmSoul() {
  return adpcm_map.soul.mode == 2;
}

void AdpcmPlaySoul(int file_no, u_short vol, int fade_flm) {
  adpcm_map.soul.para.file_no = file_no;
  adpcm_map.soul.para.vol = GetAdpcmVol(file_no);
  adpcm_map.soul.para.fin_flm = (short)fade_flm;
  adpcm_map.soul.para.pan = 0x280;
  adpcm_map.soul.para.pitch = 0xfff;
  EAdpcmCmdPlay(0,0,adpcm_map.soul.para.file_no,0,adpcm_map.soul.para.vol,0x280,0xfff,
                adpcm_map.soul.para.fin_flm);
  adpcm_map.soul.mode = 3;
  return;
}

void AdpcmStopSoul(int fout_flm) {
  if (adpcm_map.soul.use != 0) {
    EAdpcmCmdStop(0,0,(short)fout_flm);
    adpcm_map.soul.mode = 4;
  }
  return;
}
