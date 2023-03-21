// STATUS: NOT STARTED

enum A_MODE_GHOST_MODE {
	AMG_MODE_PRE_FADE_OUT = 0,
	AMG_MODE_REQ_WAIT_STOP = 1,
	AMG_MODE_REQ_PLAY = 2,
	AMG_MODE_REQ_STOP = 3,
	AMG_MODE_END = 4
};


void AdpcmPlayGhost(int file_no, sceVu0FVECTOR *mpos, u_short vol, u_char ewrk_no, int fade_flm) {
  if (adpcm_map.ghost.use == 0) {
    adpcm_map.ghost.para.mpos = (Vector4 *)mpos;
    adpcm_map.ghost.para.file_no = file_no;
    adpcm_map.ghost.para.vol = GetAdpcmVol(file_no);
    adpcm_map.ghost.use = 1;
    adpcm_map.ghost.para.fin_flm = (short)fade_flm;
    adpcm_map.ghost.para.ewrk_no = ewrk_no;
  }
  return;
}

void AdpcmStopGhost(int fout_flm) {
  byte bVar1;
  
  if (adpcm_map.ghost.use != 0) {
    bVar1 = IsHighModeUse(5);
    if (bVar1 == 0) {
      adpcm_map.ghost.para.fout_flm = (short)fout_flm;
      adpcm_map.ghost.mode = 3;
    }
    else {
      adpcm_map.hiso.use = 0;
      adpcm_map.ghost.use = 0;
      adpcm_map.autog.use = 0;
    }
  }
  return;
}

void EAdpcmGhostMain() {
	static int wait_cnt;
	
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)adpcm_map.mode;
  if (uVar2 != 5) {
    if (uVar2 - 1 < 2) {
      adpcm_map.ghost.mode = 0;
    }
    else if (uVar2 == 4) {
      adpcm_map.ghost.mode = 0;
    }
    else if (adpcm_map.ghost.mode == 4) {
      adpcm_map.ghost.mode = 3;
    }
    else {
      adpcm_map.ghost.mode = 0;
    }
    adpcm_map.mode = 5;
  }
  switch(adpcm_map.ghost.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x1e);
    adpcm_map.ghost.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.ghost.para.fout_flm,adpcm_map.ghost.para._24_6_);
      adpcm_map.mpara.pos._0_8_ = adpcm_map.ghost.para.pos._0_8_;
      adpcm_map.mpara.pos._8_8_ = adpcm_map.ghost.para.pos._8_8_;
      adpcm_map.mpara._16_8_ = adpcm_map.ghost.para._16_8_;
      adpcm_map.mpara._32_8_ = adpcm_map.ghost.para._32_8_;
      adpcm_map.mpara._40_8_ = adpcm_map.ghost.para._40_8_;
      EAdpcmGhostParaSet(&adpcm_map.mpara);
      EAdpcmCmdPlay(0,1,adpcm_map.mpara.file_no,0,adpcm_map.mpara.vol,adpcm_map.mpara.pan,
                    adpcm_map.mpara.pitch,0);
      adpcm_map.ghost.mode = 2;
    }
    break;
  case 2:
    adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.ghost.para.fout_flm,adpcm_map.ghost.para._24_6_);
    adpcm_map.mpara.pos._0_8_ = adpcm_map.ghost.para.pos._0_8_;
    adpcm_map.mpara.pos._8_8_ = adpcm_map.ghost.para.pos._8_8_;
    adpcm_map.mpara._16_8_ = adpcm_map.ghost.para._16_8_;
    adpcm_map.mpara._32_8_ = adpcm_map.ghost.para._32_8_;
    adpcm_map.mpara._40_8_ = adpcm_map.ghost.para._40_8_;
    EAdpcmGhostParaSet(&adpcm_map.mpara);
    adpcm_map.m_flg = 0;
    EAdpcmCmdPos(0,adpcm_map.mpara.file_no,
                 (short)((int)((uint)(ushort)adpcm_map.mpara.vol * adpcm_map.mvol) / 0xfff),
                 adpcm_map.mpara.pan,adpcm_map.mpara.pitch);
    return;
  case 3:
    EAdpcmCmdStop(0,0,adpcm_map.ghost.para.fout_flm);
    adpcm_map.ghost.mode = 4;
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.hiso.use = 0;
      adpcm_map.ghost.mode = 0;
      adpcm_map.ghost.use = 0;
      adpcm_map.autog.use = 0;
    }
  }
  return;
}

static void EAdpcmGhostParaSet(ADPCM_TUNE_PARAM *atpp) {
	static int cnt = 0;
	float rot_cam;
	float rot_oc;
	float dist_obj;
	
  Vector4 *pVVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  
  if (atpp != (ADPCM_TUNE_PARAM *)0x0) {
    fVar3 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
    if ((*(uint *)((int)ene_wrk + (uint)atpp->ewrk_no * 0x430) & 1) != 0) {
      pVVar1 = atpp->mpos;
      (atpp->pos).x = pVVar1->x;
      (atpp->pos).y = pVVar1->y;
      (atpp->pos).z = pVVar1->z;
    }
    fVar4 = SgAtan2f((atpp->pos).x - camera.p.x,(atpp->pos).z - camera.p.z);
    fVar3 = SeCmdGetAngle(fVar4,fVar3);
    fVar4 = GetDistV((float *)atpp,&plyr_wrk.move_box.spd.z);
    fVar4 = GetDist(fVar4,(atpp->pos).y - plyr_wrk.move_box.spd.w);
    sVar2 = EAdpcmGetPan(fVar3);
    atpp->pan = sVar2;
    sVar2 = EAdpcmGetVol(fVar4,atpp->vol);
    atpp->vol = sVar2;
    sVar2 = EAdpcmGetPitch(fVar3,fVar4,0x1000);
    atpp->pitch = sVar2;
    cnt_127 = cnt_127 + 1;
    if (cnt_127 % 0x1e == 0) {
      cnt_127 = 0;
    }
  }
  return;
}
