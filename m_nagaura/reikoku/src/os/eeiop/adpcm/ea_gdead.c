// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#25, enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMGD_MODE_PRE_FADE_OUT = 0,
	AMGD_MODE_REQ_WAIT_STOP = 1,
	AMGD_MODE_REQ_PLAY = 2,
	AMGD_MODE_REQ_PLAYING = 3,
	AMGD_MODE_REQ_STOP = 4,
	AMGD_MODE_END = 5
};


void EAdpcmGdeadMain() {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)adpcm_map.mode;
  if (uVar2 != 7) {
    if (((uVar2 - 1 < 2) || (uVar2 == 4)) || (uVar2 == 5)) {
      adpcm_map.gdead.mode = 0;
    }
    else {
      adpcm_map.gdead.mode = 1;
    }
    adpcm_map.mode = 7;
  }
  switch(adpcm_map.gdead.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x50);
    adpcm_map.gdead.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      EAdpcmCmdPlay(0,0,adpcm_map.gdead.para.file_no,0,adpcm_map.gdead.para.vol,
                    adpcm_map.gdead.para.pan,adpcm_map.gdead.para.pitch,adpcm_map.gdead.para.fin_flm
                   );
      adpcm_map.gdead.mode = 2;
    }
    break;
  case 2:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.gdead.mode = 3;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.hiso.use = 0;
      adpcm_map.gdead.use = 0;
      adpcm_map.event.use = 0;
      adpcm_map.autog.use = 0;
    }
  }
  return;
}

void AdpcmPlayGhostDead(int file_no, u_short vol, int fade_flm) {
  adpcm_map.gdead.para.file_no = file_no;
  adpcm_map.gdead.para.vol = GetAdpcmVol(file_no);
  adpcm_map.gdead.para.fin_flm = (short)fade_flm;
  adpcm_map.mode = 7;
  adpcm_map.gdead.para.pan = 0x280;
  adpcm_map.gdead.para.pitch = 0xfff;
  adpcm_map.gdead.use = 1;
  adpcm_map.gdead.mode = 0;
  return;
}

void AdpcmStopGhostDead(int fout_flm) {
  if (adpcm_map.gdead.use != 0) {
    EAdpcmCmdStop(0,0,(short)fout_flm);
    adpcm_map.gdead.mode = 3;
  }
  return;
}
