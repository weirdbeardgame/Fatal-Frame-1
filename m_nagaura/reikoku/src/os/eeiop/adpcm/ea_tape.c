// STATUS: NOT STARTED

enum A_MODE_TAPE_MODE {
	AMTP_MODE_PRE_FADE_OUT = 0,
	AMTP_MODE_REQ_WAIT_STOP = 1,
	AMTP_MODE_REQ_PLAY = 2,
	AMTP_MODE_REQ_PLAYING = 3,
	AMTP_MODE_REQ_STOP = 4,
	AMTP_MODE_END = 5
};


void EAdpcmTapeMain() {
  ushort uVar1;
  
  switch(adpcm_map.tape.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x50);
    adpcm_map.tape.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.m_flg = 2;
      EAdpcmCmdPlay(0,0,adpcm_map.tape.para.file_no,0,adpcm_map.tape.para.vol,
                    adpcm_map.tape.para.pan,adpcm_map.tape.para.pitch,adpcm_map.tape.para.fin_flm);
      adpcm_map.tape.mode = 2;
      adpcm_map.mvol = 0xfff;
    }
    break;
  case 2:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.tape.mode = 3;
    }
    break;
  case 3:
switchD_0010f778_caseD_3:
    uVar1 = EAGetRetStat();
    if (uVar1 != 2) {
      return;
    }
    goto LAB_0010f858;
  case 4:
    uVar1 = EAGetRetStat();
    if (uVar1 != 1) goto switchD_0010f778_caseD_3;
LAB_0010f858:
    adpcm_map.tape.use = 0;
    adpcm_map.mvol = adpcm_map.tgt_vol;
    adpcm_map.gdead.use = 0;
    adpcm_map.hiso.use = 0;
    adpcm_map.autog.use = 0;
    adpcm_map.event.use = 0;
  }
  return;
}

void AdpcmPlayTape(int file_no, u_short vol, int fade_flm) {
  adpcm_map.tape.para.file_no = file_no;
  adpcm_map.tape.para.vol = GetAdpcmVol(file_no);
  adpcm_map.tape.para.fin_flm = (short)fade_flm;
  adpcm_map.mode = 8;
  adpcm_map.tape.para.pan = 0x280;
  adpcm_map.tape.para.pitch = 0xfff;
  adpcm_map.tape.use = 1;
  adpcm_map.tape.mode = 0;
  return;
}

void AdpcmStopTape(int fout_flm) {
  if (adpcm_map.tape.use != 0) {
    EAdpcmCmdStop(0,0,(short)fout_flm);
    adpcm_map.tape.mode = 4;
  }
  return;
}

u_char IsEndAdpcmTape() {
  return adpcm_map.tape.use == 0;
}
