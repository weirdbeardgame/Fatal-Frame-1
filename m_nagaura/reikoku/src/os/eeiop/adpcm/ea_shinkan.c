// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#21, enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMSH_MODE_PRE_FADE_OUT = 0,
	AMSH_MODE_REQ_WAIT_STOP = 1,
	AMSH_MODE_REQ_PLAY = 2,
	AMSH_MODE_REQ_PLAYING = 3,
	AMSH_MODE_END = 4,
	AMSH_MODE_REQ_STOP_REQ = 5,
	AMSH_MODE_REQ_STOP_WAIT = 6
};


void EAdpcmShinkanMain() {
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)adpcm_map.mode;
  if (uVar2 != 0xc) {
    if ((((uVar2 - 1 < 2) || (uVar2 == 4)) || (uVar2 == 5)) || (uVar2 == 6)) {
      adpcm_map.shinkan.mode = 0;
    }
    else {
      adpcm_map.shinkan.para.start_flm = 0;
      EAdpcmCmdStop(0,0,0x14);
      adpcm_map.shinkan.mode = 3;
    }
    adpcm_map.mode = 0xc;
  }
  switch(adpcm_map.shinkan.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x10);
    adpcm_map.shinkan.mode = 1;
    return;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 != 1) && (uVar1 = EAGetRetStat(), uVar1 != 2)) {
      return;
    }
    EAdpcmCmdPlay(0,0,adpcm_map.shinkan.para.file_no,0,adpcm_map.shinkan.para.vol,
                  adpcm_map.shinkan.para.pan,adpcm_map.shinkan.para.pitch,
                  adpcm_map.shinkan.para.fin_flm);
    adpcm_map.bk_para.pos._0_8_ = adpcm_map.shinkan.para.pos._0_8_;
    adpcm_map.bk_para.pos._8_8_ = adpcm_map.shinkan.para.pos._8_8_;
    adpcm_map.bk_para._16_8_ = CONCAT44(adpcm_map.shinkan.para.file_no,adpcm_map.shinkan.para.mpos);
    adpcm_map.bk_para._24_8_ =
         CONCAT26(adpcm_map.shinkan.para.fout_flm,
                  CONCAT24(adpcm_map.shinkan.para.fin_flm,adpcm_map.shinkan.para.count));
    adpcm_map.bk_para._32_8_ =
         CONCAT26(adpcm_map.shinkan.para.start_flm,
                  CONCAT24(adpcm_map.shinkan.para.pan,
                           CONCAT22(adpcm_map.shinkan.para.pitch,adpcm_map.shinkan.para.vol)));
    adpcm_map.bk_para._40_8_ = adpcm_map.shinkan.para._40_8_;
    adpcm_map.shinkan.mode = 2;
    return;
  case 2:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.shinkan.mode = 3;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.shinkan.mode = 4;
    }
    break;
  case 4:
    break;
  case 5:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      EAdpcmCmdStop(0,0,0x1e);
      adpcm_map.shinkan.mode = 6;
      adpcm_map.shinkan.para.start_flm = 0;
    }
    break;
  case 6:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.shinkan.mode = 4;
      adpcm_map.shinkan.use = 0;
      adpcm_map.event.use = 0;
      adpcm_map.autog.use = 0;
      adpcm_map.hiso.use = 0;
    }
    break;
  default:
    goto switchD_0010eee8_caseD_7;
  }
  adpcm_map.bk_para._16_8_ = CONCAT44(adpcm_map.shinkan.para.file_no,adpcm_map.shinkan.para.mpos);
  adpcm_map.bk_para._24_8_ =
       CONCAT26(adpcm_map.shinkan.para.fout_flm,
                CONCAT24(adpcm_map.shinkan.para.fin_flm,adpcm_map.shinkan.para.count));
  adpcm_map.bk_para._32_8_ =
       CONCAT26(adpcm_map.shinkan.para.start_flm,
                CONCAT24(adpcm_map.shinkan.para.pan,
                         CONCAT22(adpcm_map.shinkan.para.pitch,adpcm_map.shinkan.para.vol)));
  adpcm_map.bk_para.pos._0_8_ = adpcm_map.shinkan.para.pos._0_8_;
  adpcm_map.bk_para._40_8_ = adpcm_map.shinkan.para._40_8_;
  adpcm_map.bk_para.pos._8_8_ = adpcm_map.shinkan.para.pos._8_8_;
switchD_0010eee8_caseD_7:
  return;
}

void AdpcmPlayShinkan(int file_no, int fade_flm) {
  adpcm_map.shinkan.para.file_no = file_no;
  adpcm_map.shinkan.para.vol = GetAdpcmVol(file_no);
  adpcm_map.shinkan.para.fin_flm = (short)fade_flm;
  adpcm_map.mode = 0xc;
  adpcm_map.shinkan.para.pan = 0x280;
  adpcm_map.shinkan.para.pitch = 0xfff;
  adpcm_map.shinkan.use = 1;
  adpcm_map.shinkan.mode = 0;
  return;
}

void AdpcmStopShinkan(int fout_flm) {
  if (adpcm_map.shinkan.use != 0) {
    adpcm_map.shinkan.mode = 5;
  }
  return;
}

u_char IsEndAdpcmShinkan() {
  if (adpcm_map.shinkan.mode == 4) {
    adpcm_map.shinkan.use = 0;
    adpcm_map.event.use = 0;
    adpcm_map.autog.use = 0;
    adpcm_map.hiso.use = 0;
    return 1;
  }
  return 0;
}
