// STATUS: NOT STARTED

enum EA_SCENE_MODE {
	EAS_MODE_WAIT1 = 0,
	EAS_MODE_WAIT2 = 1,
	EAS_MODE_WAIT3 = 2,
	EAS_MODE_WAIT4 = 3,
	EAS_MODE_WAIT5 = 4
};


void EAdpcmSceneMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 0xd) {
    adpcm_map.mode = 0xd;
  }
  switch(adpcm_map.scene.mode) {
  case 0:
    EAdpcmCmdStop(0,0,adpcm_map.scene.para.fout_flm);
    adpcm_map.scene.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.scene.mode = 2;
    }
    break;
  case 3:
    uVar1 = EAGetRetStat();
    if (5 < (short)uVar1) {
      adpcm_map.scene.mode = 4;
    }
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.scene.mode = 0;
      adpcm_map.scene.use = 0;
      adpcm_map.hiso.use = 0;
      adpcm_map.autog.use = 0;
      adpcm_map.event.use = 0;
    }
  }
  return;
}

void AdpcmPreSceneFadeOut(u_short fout_flm) {
  adpcm_map.scene.use = 1;
  adpcm_map.scene.para.fout_flm = fout_flm;
  adpcm_map.scene.mode = 0;
  return;
}

u_char IsFadeoutEndAdpcmScene() {
  return adpcm_map.scene.mode == 2;
}

void AdpcmScenePreLoadReq(int scene_no) {
  adpcm_map.scene.para.file_no = scene_no + 0x703;
  adpcm_map.scene.use = 1;
  EAdpcmCmdPreload(0,adpcm_map.scene.para.file_no,0,0);
  adpcm_map.scene.mode = 2;
  return;
}

int IsAdpcmScenePreLoadEnd() {
  ushort uVar1;
  int iVar2;
  
  uVar1 = EAGetRetTune();
  iVar2 = 0;
  if ((long)(short)uVar1 == (long)adpcm_map.scene.para.file_no) {
    uVar1 = EAGetRetStat();
    if (uVar1 == 0xffff) {
      iVar2 = -1;
    }
    else {
      uVar1 = EAGetRetStat();
      iVar2 = 1;
      if (uVar1 != 5) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

void AdpcmScenePreLoadEndPlay(int scene_no) {
  short vol;
  
  vol = GetAdpcmVol(scene_no + 0x703);
  EAdpcmCmdPlay(0,0,scene_no + 0x703,0,vol,0x280,0xfff,0);
  adpcm_map.scene.mode = 3;
  return;
}

void AdpcmSceneStop() {
  if (adpcm_map.scene.use != 0) {
    EAdpcmCmdStop(0,0,0);
    adpcm_map.scene.mode = 0;
    adpcm_map.scene.use = 0;
    adpcm_map.hiso.use = 0;
    adpcm_map.autog.use = 0;
    adpcm_map.event.use = 0;
  }
  return;
}
