// STATUS: NOT STARTED

enum A_MODE_GOVER_MODE {
	AMGO_MODE_PRE_FADE_OUT = 0,
	AMGO_MODE_REQ_WAIT_STOP = 1,
	AMGO_MODE_REQ_PLAY = 2,
	AMGO_MODE_REQ_PLAYING = 3,
	AMGO_MODE_REQ_STOP = 4,
	AMGO_MODE_END = 5
};


void EAdpcmGoverMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 0xe) {
    adpcm_map.mode = 0xe;
    adpcm_map.gover.mode = 0;
  }
  if (adpcm_map.gover.mode == 1) {
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      EAdpcmCmdPlay(0,0,adpcm_map.gover.para.file_no,0,adpcm_map.gover.para.vol,
                    adpcm_map.gover.para.pan,adpcm_map.gover.para.pitch,adpcm_map.gover.para.fin_flm
                   );
      adpcm_map.gover.mode = 2;
    }
  }
  else if (adpcm_map.gover.mode < 2) {
    if (adpcm_map.gover.mode == 0) {
      EAdpcmCmdStop(0,0,0x50);
      adpcm_map.gover.mode = 1;
    }
  }
  else if (adpcm_map.gover.mode == 2) {
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.gover.mode = 3;
    }
  }
  else if ((adpcm_map.gover.mode == 3) &&
          ((uVar1 = EAGetRetStat(), uVar1 == 1 || (uVar1 = EAGetRetStat(), uVar1 == 2)))) {
    adpcm_map.gover.use = 0;
    AdpcmMapCtrlInit();
    return;
  }
  return;
}

void AdpcmPlayGameOver(int file_no, u_short vol, int fade_flm) {
  adpcm_map.gover.para.file_no = file_no;
  adpcm_map.gover.para.vol = GetAdpcmVol(file_no);
  adpcm_map.gover.para.fin_flm = (short)fade_flm;
  adpcm_map.mode = 0xe;
  adpcm_map.gover.para.pan = 0x280;
  adpcm_map.gover.para.pitch = 0xfff;
  adpcm_map.gover.use = 1;
  adpcm_map.gover.mode = 0;
  return;
}

void AdpcmStopGameOver(int fout_flm) {
  if (adpcm_map.gover.use != 0) {
    EAdpcmCmdStop(0,0,(short)fout_flm);
    adpcm_map.gover.mode = 3;
  }
  return;
}
