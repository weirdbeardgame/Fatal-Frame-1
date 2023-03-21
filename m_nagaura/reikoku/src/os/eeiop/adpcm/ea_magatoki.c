// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#20, enum constant not equal)
enum A_MODE_PZL_MODE {
	AMMG_MODE_FIRST_FOUT = 0,
	AMMG_MODE_FOUT_WAIT = 1,
	AMMG_MODE_MIN_BGM = 2,
	AMMG_MODE_MIN_BGM_FADE = 3,
	AMMG_MODE_MAGA_PLAY_WAIT = 4,
	AMMG_MODE_PLAY = 5,
	AMMG_MODE_PLAYING = 6
};


void EAdpcmMagatokiMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 0xb) {
    adpcm_map.mode = 0xb;
    adpcm_map.maga.mode = 0;
  }
  switch(adpcm_map.maga.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x1e);
    adpcm_map.maga.para.file_no = 0x702;
    adpcm_map.maga.para.vol = GetAdpcmVol(0x702);
    adpcm_map.maga.para.pitch = 0xfff;
    adpcm_map.maga.para.pan = 0x280;
    adpcm_map.maga.mode = 1;
    return;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 != 1) && (uVar1 = EAGetRetStat(), uVar1 != 2)) {
      return;
    }
    EAdpcmCmdPlay(0,0,adpcm_map.maga.para.file_no,0,adpcm_map.maga.para.vol,adpcm_map.maga.para.pan,
                  adpcm_map.maga.para.pitch,0);
    adpcm_map.bk_para._16_8_ = CONCAT44(adpcm_map.maga.para.file_no,adpcm_map.maga.para.mpos);
    adpcm_map.bk_para._32_8_ =
         CONCAT26(adpcm_map.maga.para.start_flm,
                  CONCAT24(adpcm_map.maga.para.pan,
                           CONCAT22(adpcm_map.maga.para.pitch,adpcm_map.maga.para.vol)));
    adpcm_map.maga.mode = 2;
    adpcm_map.bk_para.pos._0_8_ = adpcm_map.maga.para.pos._0_8_;
    adpcm_map.bk_para.pos._8_8_ = adpcm_map.maga.para.pos._8_8_;
    adpcm_map.bk_para._24_8_ = adpcm_map.maga.para._24_8_;
    adpcm_map.bk_para._40_8_ = adpcm_map.maga.para._40_8_;
  case 2:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.maga.mode = 3;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.maga.mode = 4;
    }
    break;
  case 4:
    break;
  case 5:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.maga.mode = 6;
    }
    break;
  case 6:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.event.use = 0;
      adpcm_map.maga.mode = 0;
      adpcm_map.maga.para.file_no = 0;
      adpcm_map.maga.use = 0;
      adpcm_map.ghost.use = 0;
      adpcm_map.autog.use = 0;
      adpcm_map.hiso.use = 0;
    }
    break;
  default:
    goto switchD_0010eb60_caseD_7;
  }
  adpcm_map.bk_para._16_8_ = CONCAT44(adpcm_map.maga.para.file_no,adpcm_map.maga.para.mpos);
  adpcm_map.bk_para._32_8_ =
       CONCAT26(adpcm_map.maga.para.start_flm,
                CONCAT24(adpcm_map.maga.para.pan,
                         CONCAT22(adpcm_map.maga.para.pitch,adpcm_map.maga.para.vol)));
  adpcm_map.bk_para.pos._0_8_ = adpcm_map.maga.para.pos._0_8_;
  adpcm_map.bk_para._40_8_ = adpcm_map.maga.para._40_8_;
  adpcm_map.bk_para.pos._8_8_ = adpcm_map.maga.para.pos._8_8_;
  adpcm_map.bk_para._24_8_ = adpcm_map.maga.para._24_8_;
switchD_0010eb60_caseD_7:
  return;
}

void AdpcmPreMagatokiFadeOut(u_short fout_flm) {
  adpcm_map.maga.use = 1;
  adpcm_map.maga.para.fout_flm = fout_flm;
  adpcm_map.maga.mode = 0;
  return;
}

u_char IsFadeoutEndAdpcmMagatoki() {
  return adpcm_map.maga.mode == 4;
}

void AdpcmMagatokiPlay(int file_no) {
  adpcm_map.maga.mode = 5;
  adpcm_map.maga.para.file_no = file_no;
  adpcm_map.maga.para.vol = GetAdpcmVol(file_no);
  adpcm_map.maga.para.pan = 0x280;
  adpcm_map.maga.para.pitch = 0xfff;
  EAdpcmCmdPlay(0,1,adpcm_map.maga.para.file_no,0,adpcm_map.maga.para.vol,0x280,0xfff,0);
  return;
}

void AdpcmMagatokiStop() {
  EAdpcmCmdStop(0,0,100);
  if (adpcm_map.maga.mode == 5) {
    adpcm_map.event.use = 0;
    adpcm_map.maga.mode = 0;
    adpcm_map.maga.para.file_no = 0;
    adpcm_map.maga.use = 0;
    adpcm_map.ghost.use = 0;
    adpcm_map.autog.use = 0;
    adpcm_map.hiso.use = 0;
  }
  return;
}
