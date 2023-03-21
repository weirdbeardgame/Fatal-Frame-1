// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#22, enum constant not equal)
enum A_MODE_PZL_MODE {
	AMPZ_MODE_WAIT1 = 0,
	AMPZ_MODE_WAIT2 = 1,
	AMPZ_MODE_WAIT3 = 2,
	AMPZ_MODE_PLAY = 3,
	AMPZ_MODE_END_WAIT = 4,
	AMPZ_MODE_PLAYING = 5
};


void EAdpcmPuzzleMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 10) {
    adpcm_map.mode = 10;
    adpcm_map.puzzle.para.file_no = -1;
  }
  switch(adpcm_map.puzzle.mode) {
  case 0:
    EAdpcmCmdStop(0,0,adpcm_map.puzzle.para.fout_flm);
    adpcm_map.puzzle.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.puzzle.mode = 2;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.puzzle.mode = 4;
    }
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.puzzle.mode = 2;
      adpcm_map.puzzle.para.file_no = -1;
    }
  }
  return;
}

void AdpcmPrePuzzleFadeOut(u_short fout_flm) {
  adpcm_map.puzzle.use = 1;
  adpcm_map.puzzle.para.fout_flm = fout_flm;
  adpcm_map.puzzle.mode = 0;
  return;
}

u_char IsEndAdpcmPuzzle() {
  return adpcm_map.puzzle.mode == 2;
}

void AdpcmPreLoadPuzzle(int file_no) {
  adpcm_map.puzzle.para.file_no = file_no;
  EAdpcmCmdPreload(0,file_no,0,0);
  adpcm_map.puzzle.mode = 2;
  return;
}

u_char IsPreLoadEndAdpcmPuzzle() {
  byte bVar1;
  ushort uVar2;
  
  uVar2 = EAGetRetTune();
  bVar1 = 0;
  if ((long)(short)uVar2 == (long)adpcm_map.puzzle.para.file_no) {
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

void AdpcmPuzzlePreLoadEndPlay() {
  short vol;
  
  vol = GetAdpcmVol(adpcm_map.puzzle.para.file_no);
  EAdpcmCmdPlay(0,0,adpcm_map.puzzle.para.file_no,0,vol,0x280,0xfff,0);
  adpcm_map.puzzle.mode = 3;
  return;
}

void AdpcmPuzzlePlay(int file_no) {
  short vol;
  
  adpcm_map.puzzle.para.file_no = file_no;
  vol = GetAdpcmVol(file_no);
  EAdpcmCmdPlay(0,0,adpcm_map.puzzle.para.file_no,0,vol,0x280,0xfff,0);
  adpcm_map.puzzle.mode = 3;
  return;
}

void AdpcmPuzzleEnd() {
  EAdpcmCmdStop(0,0,0x1e);
  adpcm_map.puzzle.mode = 0;
  adpcm_map.puzzle.use = 0;
  adpcm_map.autog.use = 0;
  adpcm_map.hiso.use = 0;
  adpcm_map.event.use = 0;
  return;
}
