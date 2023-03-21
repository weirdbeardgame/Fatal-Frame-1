// STATUS: NOT STARTED

enum A_MODE_FURN_MODE {
	AMFR_MODE_PRE_FADE_OUT = 0,
	AMFR_MODE_REQ_WAIT_STOP = 1,
	AMFR_MODE_REQ_PLAY = 2,
	AMFR_MODE_REQ_STOP = 3,
	AMFR_MODE_END = 4
};


void EAdpcmFurnMain() {
  ushort uVar1;
  
  if (adpcm_map.mode != 2) {
    if (adpcm_map.mode == 1) {
      adpcm_map.furn.mode = 0;
    }
    else if (adpcm_map.furn.mode == 4) {
      adpcm_map.furn.mode = 3;
    }
    else {
      adpcm_map.furn.mode = 0;
    }
    adpcm_map.mode = 2;
  }
  switch(adpcm_map.furn.mode) {
  case 0:
    EAdpcmCmdStop(0,0,0x1e);
    adpcm_map.furn.mode = 1;
    break;
  case 1:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.furn.para.fout_flm,adpcm_map.furn.para._24_6_);
      adpcm_map.mpara.pos._0_8_ = adpcm_map.furn.para.pos._0_8_;
      adpcm_map.mpara.pos._8_8_ = adpcm_map.furn.para.pos._8_8_;
      adpcm_map.mpara._16_8_ = adpcm_map.furn.para._16_8_;
      adpcm_map.mpara._32_8_ = adpcm_map.furn.para._32_8_;
      adpcm_map.mpara._40_8_ = adpcm_map.furn.para._40_8_;
      EAdpcmFurnParaSet(&adpcm_map.mpara);
      EAdpcmCmdPlay(0,1,adpcm_map.mpara.file_no,0,adpcm_map.mpara.vol,adpcm_map.mpara.pan,
                    adpcm_map.mpara.pitch,0);
      adpcm_map.furn.mode = 2;
    }
    break;
  case 2:
    adpcm_map.mpara._24_8_ = CONCAT26(adpcm_map.furn.para.fout_flm,adpcm_map.furn.para._24_6_);
    adpcm_map.mpara.pos._0_8_ = adpcm_map.furn.para.pos._0_8_;
    adpcm_map.mpara.pos._8_8_ = adpcm_map.furn.para.pos._8_8_;
    adpcm_map.mpara._16_8_ = adpcm_map.furn.para._16_8_;
    adpcm_map.mpara._32_8_ = adpcm_map.furn.para._32_8_;
    adpcm_map.mpara._40_8_ = adpcm_map.furn.para._40_8_;
    EAdpcmFurnParaSet(&adpcm_map.mpara);
    adpcm_map.m_flg = 0;
    EAdpcmCmdPos(0,adpcm_map.mpara.file_no,
                 (short)((int)((uint)(ushort)adpcm_map.mpara.vol * adpcm_map.mvol) / 0xfff),
                 adpcm_map.mpara.pan,adpcm_map.mpara.pitch);
    return;
  case 3:
    EAdpcmCmdStop(0,0,adpcm_map.furn.para.fout_flm);
    adpcm_map.furn.mode = 4;
    break;
  case 4:
    uVar1 = EAGetRetStat();
    if ((uVar1 == 1) || (uVar1 = EAGetRetStat(), uVar1 == 2)) {
      adpcm_map.furn.use = 0;
      adpcm_map.furn.mode = 0;
    }
  }
  return;
}

static void EAdpcmFurnParaSet(ADPCM_TUNE_PARAM *atpp) {
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
    sVar1 = EAdpcmGetVol(fVar3,atpp->vol);
    atpp->vol = sVar1;
    cnt_120 = cnt_120 + 1;
    atpp->pitch = 0xfff;
    if (cnt_120 % 0x1e == 0) {
      cnt_120 = 0;
    }
  }
  return;
}

void AdpcmPlayFurn(int file_no, float *pos, u_short vol, int fade_flm) {
  if (adpcm_map.furn.use == 0) {
    switch(file_no) {
    case 0:
      adpcm_map.furn.para.file_no = 0x60f;
      break;
    case 1:
      adpcm_map.furn.para.file_no = 0x611;
      break;
    default:
      adpcm_map.furn.para.file_no = 0x610;
      break;
    case 3:
      adpcm_map.furn.para.file_no = 0x613;
      break;
    case 4:
      adpcm_map.furn.para.file_no = 0x61a;
      break;
    case 5:
      adpcm_map.furn.para.file_no = 0x653;
      break;
    case 6:
      adpcm_map.furn.para.file_no = 0x654;
      break;
    case 7:
      adpcm_map.furn.para.file_no = 0x655;
      break;
    case 8:
      adpcm_map.furn.para.file_no = 0x656;
      break;
    case 9:
      adpcm_map.furn.para.file_no = 0x657;
      break;
    case 10:
      adpcm_map.furn.para.file_no = 0x658;
      break;
    case 0xb:
      adpcm_map.furn.para.file_no = 0x659;
      break;
    case 0xc:
      adpcm_map.furn.para.file_no = 0x65a;
      break;
    case 0xd:
      adpcm_map.furn.para.file_no = 0x65b;
      break;
    case 0xe:
      adpcm_map.furn.para.file_no = 0x65c;
      break;
    case 0xf:
      adpcm_map.furn.para.file_no = 0x65d;
      break;
    case 0x10:
      adpcm_map.furn.para.file_no = 0x65e;
      break;
    case 0x19:
      adpcm_map.furn.para.file_no = 0x612;
    }
    adpcm_map.furn.para.pos.x = *pos;
    adpcm_map.furn.para.pos.y = pos[1];
    adpcm_map.furn.para.pos.z = pos[2];
    adpcm_map.furn.para.pos.w = pos[3];
    adpcm_map.furn.para.vol = GetAdpcmVol(adpcm_map.furn.para.file_no);
    adpcm_map.furn.use = 1;
    adpcm_map.furn.para.fin_flm = (short)fade_flm;
  }
  return;
}

void AdpcmStopFurn(int fout_flm) {
  byte bVar1;
  
  if (adpcm_map.furn.use != 0) {
    bVar1 = IsHighModeUse(2);
    if (bVar1 == 0) {
      adpcm_map.furn.para.fout_flm = (short)fout_flm;
      adpcm_map.furn.mode = 3;
    }
    else {
      adpcm_map.furn.use = 0;
    }
  }
  return;
}
