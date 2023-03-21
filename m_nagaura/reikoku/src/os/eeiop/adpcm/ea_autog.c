// STATUS: NOT STARTED

enum A_MODE_AUTOG_MODE {
	AMAG_MODE_PRE_FADE_OUT = 0,
	AMAG_MODE_REQ_WAIT_STOP = 1,
	AMAG_MODE_REQ_PLAY = 2,
	AMAG_MODE_REQ_STOP = 3,
	AMAG_MODE_END = 4
};


void AdpcmPlayAutoGhost(int file_no, sceVu0FVECTOR *mpos, u_short vol, u_char ewrk_no, int fade_flm) {
  if (adpcm_map.autog.use == 0) {
    adpcm_map.autog.para.mpos = (Vector4 *)mpos;
    adpcm_map.autog.para.file_no = file_no;
    adpcm_map.autog.para.vol = GetAdpcmVol(file_no);
    adpcm_map.autog.use = 1;
    adpcm_map.autog.para.fin_flm = (short)fade_flm;
    adpcm_map.autog.para.ewrk_no = ewrk_no;
  }
  else if (adpcm_map.mode == 4) {
    adpcm_map.autog.para.mpos = (Vector4 *)mpos;
    adpcm_map.autog.para.file_no = file_no;
    adpcm_map.autog.para.vol = GetAdpcmVol(file_no);
    adpcm_map.autog.mode = 0;
    adpcm_map.autog.para.fin_flm = (short)fade_flm;
    adpcm_map.autog.para.ewrk_no = ewrk_no;
  }
  return;
}

void AdpcmStopAutoGhost(int fout_flm) {
  byte bVar1;
  
  if ((adpcm_map.autog.use != 0) && (bVar1 = IsHighModeUse(4), bVar1 != 0)) {
    adpcm_map.hiso.use = 0;
    adpcm_map.autog.use = 0;
  }
  return;
}

void EAdpcmAutogMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 4) {
    if (adpcm_map.mode - 1 < 2) {
      if (adpcm_map.autog.mode == 4) {
        adpcm_map.autog.mode = 3;
      }
      else {
        adpcm_map.autog.mode = 0;
      }
    }
    else if (adpcm_map.autog.mode == 4) {
      adpcm_map.autog.mode = 3;
    }
    else {
      EAdpcmCmdStop(0,0,0);
      adpcm_map.autog.mode = 1;
      adpcm_map.autog.count = 0;
    }
    adpcm_map.mode = 4;
  }
  switch(adpcm_map.autog.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x1e);
    adpcm_map.autog.mode = 1;
    adpcm_map.autog.count = 0;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      EadpcmUpdateAutog(&adpcm_map.autog.para);
      adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.autog.para.fout_flm,adpcm_map.autog.para._24_6_);
      adpcm_map.mpara.pos._0_8_ = adpcm_map.autog.para.pos._0_8_;
      adpcm_map.mpara.pos._8_8_ = adpcm_map.autog.para.pos._8_8_;
      adpcm_map.mpara._16_8_ = adpcm_map.autog.para._16_8_;
      adpcm_map.mpara._32_8_ = adpcm_map.autog.para._32_8_;
      adpcm_map.mpara._40_8_ = adpcm_map.autog.para._40_8_;
      EAdpcmAutogParaSet(&adpcm_map.mpara);
      adpcm_map.m_flg = 2;
      EAdpcmCmdPlay(0,0,adpcm_map.mpara.file_no,0,adpcm_map.mpara.vol,adpcm_map.mpara.pan,
                    adpcm_map.mpara.pitch,0);
      adpcm_map.autog.mode = 2;
      adpcm_map.mvol = 0xfff;
    }
    else {
      adpcm_map.autog.count = adpcm_map.autog.count + 1;
      if (adpcm_map.autog.count == 200) {
        EAdpcmCmdStop(0,0,0);
        return;
      }
      if (500 < adpcm_map.autog.count) {
        EAdpcmCmdStop(0,0,0);
        adpcm_map.hiso.use = 0;
        adpcm_map.autog.count = 0;
        adpcm_map.autog.use = 0;
      }
    }
    break;
  case 2:
    uVar1 = EAGetRetStat();
    if (uVar1 == 2) {
      EAdpcmCmdPos(0,adpcm_map.mpara.file_no,0,0x280,0xfff);
LAB_001107cc:
      adpcm_map.hiso.use = 0;
      adpcm_map.autog.use = 0;
    }
    else {
      EadpcmUpdateAutog(&adpcm_map.autog.para);
      adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.autog.para.fout_flm,adpcm_map.autog.para._24_6_);
      adpcm_map.mpara.pos._0_8_ = adpcm_map.autog.para.pos._0_8_;
      adpcm_map.mpara.pos._8_8_ = adpcm_map.autog.para.pos._8_8_;
      adpcm_map.mpara._16_8_ = adpcm_map.autog.para._16_8_;
      adpcm_map.mpara._32_8_ = adpcm_map.autog.para._32_8_;
      adpcm_map.mpara._40_8_ = adpcm_map.autog.para._40_8_;
      EAdpcmAutogParaSet(&adpcm_map.mpara);
      EAdpcmCmdPos(0,adpcm_map.mpara.file_no,adpcm_map.mpara.vol,adpcm_map.mpara.pan,
                   adpcm_map.mpara.pitch);
    }
    goto LAB_001107d0;
  case 3:
    EAdpcmCmdStop(0,0,adpcm_map.autog.para.fout_flm);
    adpcm_map.mvol = 0xfff;
    adpcm_map.autog.mode = 4;
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.autog.mode = 0;
      goto LAB_001107cc;
    }
LAB_001107d0:
    adpcm_map.mvol = 0xfff;
  }
  return;
}

static void EadpcmUpdateAutog(ADPCM_TUNE_PARAM *atpp) {
  Vector4 *pVVar1;
  
  if ((*(uint *)((int)ene_wrk + (uint)atpp->ewrk_no * 0x430) & 1) != 0) {
    pVVar1 = atpp->mpos;
    (atpp->pos).x = pVVar1->x;
    (atpp->pos).y = pVVar1->y;
    (atpp->pos).z = pVVar1->z;
  }
  return;
}

static void EAdpcmAutogParaSet(ADPCM_TUNE_PARAM *atpp) {
	static int cnt = 0;
	float rot_cam;
	float rot_oc;
	float dist_obj;
	
  short sVar1;
  float fVar2;
  float fVar3;
  
  if (atpp != (ADPCM_TUNE_PARAM *)0x0) {
    fVar2 = SgAtan2f(camera.i.x - camera.p.x,camera.i.z - camera.p.z);
    fVar3 = SgAtan2f((atpp->pos).x - camera.p.x,(atpp->pos).z - camera.p.z);
    fVar2 = SeCmdGetAngle(fVar3,fVar2);
    fVar3 = GetDistV((float *)atpp,&plyr_wrk.move_box.spd.z);
    fVar3 = GetDist(fVar3,(atpp->pos).y - plyr_wrk.move_box.spd.w);
    sVar1 = EAdpcmGetPan(fVar2);
    atpp->pan = sVar1;
    sVar1 = EAdpcmGetVol(fVar3,adpcm_map.autog.para.vol);
    atpp->vol = sVar1;
    cnt_129 = cnt_129 + 1;
    atpp->pitch = 0xfff;
    if (cnt_129 % 0x1e == 0) {
      cnt_129 = 0;
    }
  }
  return;
}
