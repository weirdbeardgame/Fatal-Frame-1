// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#148,  not equal)
enum {
	PWARP_MODE_NO_REQ = 0,
	PWARP_MODE_IN_REQ = 1,
	PWARP_MODE_ROOM_LOAD = 2,
	PWARP_MODE_OUT_REQ = 3,
	PWARP_MODE_END = 4
};

typedef struct {
	u_char mode;
	u_char time;
	u_char req_no;
} PWARP_WRK;

typedef struct {
	u_char room;
	u_char floor;
	u_short pos_x;
	short int pos_y;
	u_short pos_z;
} PWARP_DAT;

float photo_rng_tbl[0] = {
};
u_short photo_frame_tbl[0][2] = {
};
float circle_radius_tbl[0] = {
};
u_char charge_max_tbl[0] = {
};
u_char ini_charge_tbl[0] = {
};
u_short photo_dmg_tbl[0] = {
};
float photo_dist_ratio[0] = {
};
float photo_center_ratio[0] = {
};
float photo_charge_ratio[0] = {
};
int pa_radius_set = 0;
static u_char step_direction = 0;
static u_char no_photo_tm = 0;
static u_char dmg_step = 0;
float paz = 20.f;
float spd_ld = 2.f;
float spd_sd = 4.f;
float spd_su = 0.f;
float spd_sdr = 6.30000019f;
float spd_sur = 0.f;
PWARP_DAT pwarp_dat[0] = {
};
static u_char avoid_chk;
static u_short hp_down_deg;
u_char plyr_vib_time = 0;
PWARP_WRK pwarp_wrk = {
	/* .mode = */ 0,
	/* .time = */ 0,
	/* .req_no = */ 0
};

void PlyrCtrlMain() {
  byte uVar1;
  int iVar1;
  
  if ((dbg_wrk.high_speed_mode != 0) && (*key_now[6] != 0)) {
    plyr_wrk.spd = 27.5;
  }
  PlyrLightSet();
  PlyrSpotLightOnChk();
  if (DBG_cam_id_move_chk == 0) {
    PlyrBattleChk();
    PlyrTrembleChk();
    PlyrDmgChk();
    PlyrVibCtrl(0);
    PlyrHPdwonCtrl();
    if (((plyr_wrk.sta & 0x200) == 0) && (iVar1 = PlyrDoorOpenChk(), iVar1 == 0)) {
      PlyrCondChk();
      PlyrTimerCtrl();
      uVar1 = ShortPauseChk();
      if (uVar1 == 0) {
        PlyrFinderModeChk();
        ClrEneSta();
        switch(plyr_wrk.mode) {
        case 0:
          PlyrNormalCtrl();
          break;
        case 1:
          PlyrFinderCtrl();
          break;
        case 2:
          PlyrDmgCtrl();
          break;
        case 3:
          PlyrFinderEnd();
          break;
        case 4:
          PlyrMessageDisp();
          break;
        case 10:
          PlyrSpeAnimeCtrl();
        }
      }
    }
  }
  return;
}

int PlyrDoorOpenChk() {
  return (int)((plyr_wrk.sta & 8) != 0);
}

u_char ShortPauseChk() {
	u_char chk;
	
  byte bVar1;
  uchar uVar2;
  
  uVar2 = '\0';
  if (plyr_wrk.ap_timer == 0) {
    bVar1 = ingame_wrk.stts & 0xef;
    if ((ingame_wrk.stts & 0x10) == 0) {
      return '\0';
    }
  }
  else {
    uVar2 = '\x01';
    if ((ingame_wrk.stts & 0x10) != 0) {
      return '\x01';
    }
    bVar1 = ingame_wrk.stts | 0x10;
  }
  ingame_wrk.stts = bVar1;
  return uVar2;
}

void PlyrCondChk() {
  short sVar1;
  uchar uVar2;
  
  if ((ushort)plyr_wrk.hp - 1 < 0x32) {
    if (_DAT_00252e80 == -1) {
      _DAT_00252e80 = SeStartFix(0x24,0,0x1000,0x1000,0);
      goto LAB_00204c08;
    }
  }
  else if (_DAT_00252e80 == -1) goto LAB_00204c08;
  if (0x32 < (ushort)plyr_wrk.hp) {
    SeFadeFlame(_DAT_00252e80,0x3c,0);
    _DAT_00252e80 = -1;
  }
LAB_00204c08:
  sVar1 = plyr_wrk.cond_tm;
  if ((plyr_wrk.cond != 0) && (sVar1 = plyr_wrk.cond_tm + -1, plyr_wrk.cond_tm == 0)) {
    plyr_wrk.cond = 0;
    sVar1 = plyr_wrk.cond_tm;
  }
  plyr_wrk.cond_tm = sVar1;
  if (plyr_wrk.cond == 2) {
    SetEffects(6,1);
    uVar2 = LeverGachaChk();
    sVar1 = plyr_wrk.cond_tm;
    if ((uVar2 != '\0') && (sVar1 = 0, 2 < (ushort)plyr_wrk.cond_tm)) {
      sVar1 = plyr_wrk.cond_tm + -2;
    }
  }
  else {
    sVar1 = plyr_wrk.cond_tm;
    if (plyr_wrk.cond == 3) {
      SetEffects(6,1);
      return;
    }
  }
  plyr_wrk.cond_tm = sVar1;
  return;
}

void PlyrDmgChk() {
	static u_char avoid_chk_tm = 0;
	static u_char wrong_chk = 0;
	
  uint uVar1;
  byte bVar2;
  
  if (plyr_wrk.dmg != 0) {
    dmg_step = '\0';
    if (plyr_wrk.dmg_type < 2) {
      CallNega2(0,0x1e,0x3c);
      ReqPlyrHPdown(plyr_wrk.dmg,'\x01');
      PlyrVibCtrl(0xf);
      plyr_wrk.dmg = 0;
      if (plyr_wrk.dmg_type == '\x01') {
        dmg_step = plyr_wrk.dmg_type;
        plyr_wrk.mode = 2;
      }
    }
    else {
      if (avoid_chk_tm_132 == 0) {
        avoid_chk = '\0';
        wrong_chk_133 = '\0';
      }
      bVar2 = avoid_chk_tm_132 + 1;
      if (avoid_chk_tm_132 < 0x12) {
        avoid_chk_tm_132 = bVar2;
        if (bVar2 < 8) {
          if (((pad[0]._384_8_ & 0xf04000000000) != 0) || (uVar1 = PlyrLeverInputChk(), uVar1 == 2))
          {
            wrong_chk_133 = wrong_chk_133 + '\x01';
          }
        }
        else {
          if ((pad[0]._384_8_ & 0xf04000000000) != 0) {
            avoid_chk = avoid_chk + '\x01';
          }
          uVar1 = PlyrLeverInputChk();
          if (uVar1 == 2) {
            avoid_chk = '\x01';
          }
        }
      }
      else {
        if ((avoid_chk != '\x01') || (wrong_chk_133 != '\0')) {
          avoid_chk = '\0';
          CallNega2(0,0x5a,0x3c);
          ReqPlyrHPdown(plyr_wrk.dmg,'\x01');
        }
        plyr_wrk.mode = 2;
        plyr_wrk.dmg = 0;
        avoid_chk_tm_132 = 0;
      }
    }
  }
  return;
}

void PlyrVibCtrl(u_char time) {
  if (time != 0) {
    plyr_vib_time = time;
  }
  if (plyr_vib_time != '\0') {
    VibrateRequest1(0,1);
    plyr_vib_time = plyr_vib_time + 0xff;
  }
  return;
}

void PlyrFinderModeChk() {
	u_short pad_finder;
	u_short pad_finder_bk;
	
  ushort uVar1;
  byte bVar2;
  short *psVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (plyr_wrk.mode == 0) {
    if (((opt_wrk.key_type < 2) || (opt_wrk.key_type == '\x04')) || (opt_wrk.key_type == '\x05')) {
      uVar1 = *key_now[7];
      bVar2 = pad[0].push[5];
    }
    else {
      uVar1 = *key_now[10];
      bVar2 = pad[0].push[9];
    }
    uVar5 = (uint)uVar1;
    if ((uVar1 != 0) && (uVar5 = (uint)uVar1, bVar2 < 7)) {
      uVar5 = 0;
    }
    if (((uVar5 - 1 < 2) && ((plyr_wrk.mvsta & 0x200000) == 0)) &&
       ((plyr_wrk.cond != 1 && ((plyr_wrk.cond != 2 && ((plyr_wrk.sta & 2) == 0)))))) {
      FinderInSet();
      return;
    }
  }
  else if ((plyr_wrk.mode == 1) && ((plyr_wrk.sta & 0x1000) == 0)) {
    if ((opt_wrk.key_type < 2) ||
       ((opt_wrk.key_type == '\x04' ||
        (psVar3 = key_now[10], puVar4 = (ushort *)key_bak[10], opt_wrk.key_type == '\x05')))) {
      psVar3 = key_now[7];
      puVar4 = (ushort *)key_bak[7];
    }
    if ((plyr_wrk.cond != 1) && ((*psVar3 == 1 || ((0x13 < *puVar4 && (*psVar3 == 0)))))) {
      FinderEndSet();
      plyr_wrk.mode = 3;
    }
  }
  return;
}

void FinderInSet() {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	float dist[2];
	u_char i;
	u_char trgt;
	
  uint uVar1;
  float fVar2;
  int iVar3;
  ENE_WRK *pEVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float tv [4];
  float dist [2];
  
  plyr_wrk.sta = plyr_wrk.sta & 0xfffffbff | 4;
  plyr_wrk.mode = 6;
  plyr_wrk.move_box.pos.z._0_2_ = 0x140;
  plyr_wrk.move_box.pos.z._2_2_ = 0xd1;
  plyr_wrk.frot_x = 0.0;
  if (plyr_wrk.move_mot == '\v') {
    SetPlyrAnime('g','\0');
  }
  else {
    SetPlyrAnime('A','\0');
  }
  plyr_wrk.fh_no = -1;
  fVar8 = DAT_00356024;
  PlyrChargeCtrl(0xff,(ENE_WRK *)0x0);
  uVar5 = 0;
  dist[1] = 0.0;
  plyr_wrk.spe1_dir = '\0';
  no_photo_tm = '\x14';
  pEVar4 = ene_wrk;
  uVar6 = 0xff;
  do {
    if ((pEVar4->sta & 1) == 0) {
LAB_00205190:
      uVar5 = uVar5 + 1 & 0xff;
    }
    else if (pEVar4->hp == 0) {
      uVar5 = uVar5 + 1 & 0xff;
    }
    else {
      if ((*(ulong *)pEVar4 & 0x100080000) == 0x100000000) {
        if ((*(char *)&pEVar4->nee != '\0') &&
           (((fVar7 = GetDistV(&plyr_wrk.move_box.spd.z,&(pEVar4->move_box).tpos.x), uVar1 = uVar6,
             fVar2 = dist[1], fVar8 < fVar7 || (uVar1 = uVar5, fVar2 = fVar7, dist[1] == 0.0)) ||
            (fVar7 < dist[1])))) {
          dist[1] = fVar2;
          uVar6 = uVar1;
        }
        goto LAB_00205190;
      }
      uVar5 = uVar5 + 1 & 0xff;
    }
    pEVar4 = (ENE_WRK *)((int)&pEVar4[1].move_box.spd.z + 2);
    if (3 < uVar5) {
      if (uVar6 == 0xff) {
        plyr_wrk.move_box.comm_add.wrk._4_4_ = 0;
        plyr_wrk.move_box.pos_mid.w = 0.0;
        plyr_wrk.move_box.comm_add.pu8 = (uchar *)0x0;
      }
      else {
        tv[0] = plyr_wrk.move_box.spd.z;
        tv[2] = plyr_wrk.move_box.rot.x;
        tv[3] = plyr_wrk.move_box.rot.y;
        fVar8 = DAT_00356028;
        if (plyr_wrk.move_mot == '\v') {
          fVar8 = DAT_0035602c;
        }
        tv[1] = plyr_wrk.move_box.spd.w + fVar8;
        GetTrgtRot(tv,(float *)((int)ene_wrk + uVar6 * 0x430 + 0xc0),&plyr_wrk.move_box.pos_mid.z,3)
        ;
        plyr_wrk.move_box.pos_mid.w = plyr_wrk.move_box.pos_mid.w - plyr_wrk.move_box.trot.w;
        RotLimitChk(&plyr_wrk.move_box.pos_mid.w);
        plyr_wrk.frot_x = plyr_wrk.move_box.pos_mid.z;
      }
      plyr_wrk.move_box.pos_mid.z = 0.0;
      uVar5 = 0;
      iVar3 = 0;
      do {
        if ((*(uint *)((int)&ene_wrk[0].sta + iVar3) & 1) != 0) {
          *(undefined4 *)((int)ene_wrk[0].se_omen + iVar3 + -0x38) = 0;
          *(undefined2 *)((int)&ene_wrk[1].dmg + iVar3) = 0;
        }
        uVar5 = uVar5 + 1 & 0xff;
        iVar3 = uVar5 * 0x430;
      } while (uVar5 < 4);
      plyr_wrk.fhp[0].z = plyr_wrk.move_box.spd.z;
      plyr_wrk.fhp[1].y = plyr_wrk.move_box.rot.y;
      plyr_wrk.fhp[0].w = plyr_wrk.move_box.spd.w;
      plyr_wrk.fhp[1].x = plyr_wrk.move_box.rot.x;
      return;
    }
  } while( true );
}

void FinderEndSet() {
	u_char i;
	
  int iVar1;
  uint uVar2;
  
  plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
  plyr_wrk.fh_no = -1;
  plyr_wrk.mode = 0;
  if (plyr_wrk.move_mot == '\v') {
    SetPlyrAnime('h','\0');
  }
  else {
    SetPlyrAnime('B','\0');
  }
  uVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(uint *)((int)&ene_wrk[0].sta + iVar1) & 1) != 0) {
      *(undefined4 *)((int)ene_wrk[0].se_omen + iVar1 + -0x38) = 0;
      *(undefined2 *)((int)&ene_wrk[1].dmg + iVar1) = 0;
    }
    uVar2 = uVar2 + 1 & 0xff;
    iVar1 = uVar2 * 0x430;
  } while (uVar2 < 4);
  SetDebugMenuSwitch(1);
  return;
}

void ClrEneSta() {
	u_char i;
	
  uint *puVar1;
  uint uVar2;
  
  if (plyr_wrk.aphoto_tm != 0) {
    plyr_wrk.aphoto_tm = plyr_wrk.aphoto_tm + -1;
  }
  uVar2 = 0;
  do {
    puVar1 = (uint *)((int)ene_wrk + uVar2 * 0x430);
    uVar2 = uVar2 + 1 & 0xff;
    *puVar1 = *puVar1 & 0xfffff89f;
  } while (uVar2 < 4);
  return;
}

void PlyrHeightCtrl(float *tv) {
	sceVu0FVECTOR p;
	sceVu0FVECTOR av;
	
  float fVar1;
  float p [4];
  float av [4];
  
  p[0] = plyr_wrk.move_box.spd.z;
  p[1] = plyr_wrk.move_box.spd.w;
  p[2] = plyr_wrk.move_box.rot.x;
  p[3] = plyr_wrk.move_box.rot.y;
  GetPointHeightChk(p);
  if ((plyr_wrk.mvsta & 0xfff0) == 0) {
    if (((((*tv != 0.0) || (tv[1] != 0.0)) || (tv[2] != 0.0)) &&
        (fVar1 = plyr_wrk.move_box.spd.w + 5.0, plyr_wrk.move_box.spd.w + 5.0 < p[1])) ||
       ((((*tv == 0.0 && (tv[1] == 0.0)) && (fVar1 = p[1], tv[2] == 0.0)) ||
        (fVar1 = plyr_wrk.move_box.spd.w - 5.0, p[1] < plyr_wrk.move_box.spd.w - 5.0))))
    goto LAB_002055a4;
  }
  else if (((*tv != 0.0) || (tv[1] != 0.0)) || (tv[2] != 0.0)) {
    av[2] = paz;
    av[0] = 0.0;
    av[1] = 0.0;
    av[3] = 0.0;
    RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)av);
    sceVu0AddVector((Vector4 *)p,(Vector4 *)av,(Vector4 *)&plyr_wrk.move_box.spd.z);
    GetPointHeightChk(p);
  }
  fVar1 = p[1];
LAB_002055a4:
  plyr_wrk.move_box.spd.w = fVar1;
  if (dbg_wrk.high_speed_mode != 0) {
    plyr_wrk.move_box.spd.w = p[1];
  }
  return;
}

void PlyrNormalCtrl() {
  plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
  PlyrActionChk();
  PlyrNModeMoveCtrl();
  PlyrNAnimeCtrl();
  PlyrDWalkTmCtrl();
  PlyrSpotMoveCtrl();
  return;
}

void PlyrSpotMoveCtrl() {
	sceVu0FVECTOR rv;
	float r;
	float rcng_adj;
	u_char d;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float rv [4];
  
  if (1 < plyr_wrk.cond - 1) {
    fVar3 = DAT_00356030;
    if (((plyr_wrk.mvsta & 0xfff0) != 0x10) &&
       (fVar3 = DAT_00356034, (plyr_wrk.mvsta & 0xfff0) != 0x40)) {
      fVar3 = 0.0;
    }
    fVar2 = DAT_00356038;
    if (((((plyr_wrk.mvsta & 0x200000) == 0) && (0xa0 < (pad[0].analog[1] - 0x30 & 0xff))) &&
        (fVar4 = -(((float)(pad[0].analog[1] - 0x80) * DAT_0035603c) / 127.0), fVar2 = DAT_00356044,
        fVar3 = DAT_00356040, fVar4 <= DAT_00356040)) && (fVar3 = fVar4, fVar4 < 0.0)) {
      fVar3 = 0.0;
    }
    if (plyr_wrk.spot_pos.z < fVar3) {
      fVar2 = plyr_wrk.spot_pos.z + fVar2;
      bVar1 = fVar2 < fVar3;
    }
    else {
      fVar2 = plyr_wrk.spot_pos.z - fVar2;
      bVar1 = fVar3 < fVar2;
    }
    plyr_wrk.spot_pos.z = fVar3;
    if (bVar1) {
      plyr_wrk.spot_pos.z = fVar2;
    }
    fVar3 = DAT_00356048;
    if ((pad[0].analog[0] - 0x30 & 0xff) < 0xa1) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = plyr_wrk.spot_pos.z;
      if ((plyr_wrk.mvsta & 0x200000) == 0) {
        fVar3 = ((float)(pad[0].analog[0] - 0x80) * DAT_0035604c) / 127.0;
        fVar2 = DAT_00356050;
        if ((fVar3 <= DAT_00356050) && (fVar2 = fVar3, fVar3 < DAT_00356058)) {
          fVar2 = DAT_00356058;
        }
        fVar3 = DAT_00356054;
        GetTrgtRot(&plyr_wrk.move_box.spd.z,(float *)&camera,rv,2);
        rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
        RotLimitChk((float *)((uint)rv | 4));
        if (ABS(rv[1]) <= DAT_0035605c) {
          fVar2 = -fVar2;
        }
      }
    }
    if (plyr_wrk.spot_pos.w < fVar2) {
      fVar3 = plyr_wrk.spot_pos.w + fVar3;
      bVar1 = fVar3 < fVar2;
    }
    else {
      fVar3 = plyr_wrk.spot_pos.w - fVar3;
      bVar1 = fVar2 < fVar3;
    }
    plyr_wrk.spot_pos.w = fVar2;
    if (bVar1) {
      plyr_wrk.spot_pos.w = fVar3;
    }
  }
  return;
}

void PlyrFinderCtrl() {
  if ((plyr_wrk.sta & 0x1000) == 0) {
    plyr_wrk.sta = plyr_wrk.sta | 0x10;
    FModeScreenEffect();
    EneFrameHitChk();
    PlyrPhotoChk();
    PlyrSubAtkChk();
    PlyrCamRotCngChk();
    PlyrFModeMoveCtrl();
    PlyrDWalkTmCtrl();
    EneHPchk();
    return;
  }
  return;
}

void PlyrCamRotCngChk() {
  if ((*key_now[4] == 1) && ((plyr_wrk.sta & 0x8001400) == 0)) {
    plyr_wrk.sta = plyr_wrk.sta | 0x8000000;
    plyr_wrk.move_box.pos_mid.w = DAT_00356060;
    plyr_wrk.move_box.tpos.w._0_2_ = 0x1e;
  }
  return;
}

void EneHPchk() {
	ENE_WRK *ew;
	float dist[2];
	u_char i;
	u_char no;
	
  ENE_WRK *ew;
  byte no;
  byte i;
  float fVar1;
  float dist [2];
  
  dist[1] = 0.0;
  i = 0xff;
  no = 0;
  ew = ene_wrk;
  do {
    if (((((ew->sta & 1) != 0) && (ew->hp != 0)) && ((*(ulong *)ew & 0x80040) == 0x40)) &&
       ((fVar1 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x), dist[1] == 0.0 ||
        (fVar1 < dist[1])))) {
      dist[1] = fVar1;
      i = no;
    }
    no = no + 1;
    ew = (ENE_WRK *)((int)&ew[1].move_box.spd.z + 2);
  } while (no < 3);
  plyr_wrk.near_ene_no = i;
  return;
}

void FModeScreenEffect() {
	ENE_WRK *ew;
	float dist[2];
	float alpha;
	u_char i;
	u_char crate;
	
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  ENE_WRK *pEVar4;
  float fVar5;
  float dist [2];
  
  uVar3 = 0;
  puVar1 = req_dmg_ef;
  do {
    if (*puVar1 != '\0') {
      SetEffects(9,1);
      return;
    }
    uVar3 = uVar3 + 1 & 0xff;
    puVar1 = req_dmg_ef + uVar3;
  } while (uVar3 < 3);
  dist[1] = 0.0;
  pEVar4 = ene_wrk;
  bVar2 = 0;
  do {
    if (((pEVar4->sta & 1) != 0) &&
       ((fVar5 = dist[1], pEVar4->hp == 0 ||
        (((pEVar4->sta & 0x80000) == 0 &&
         ((fVar5 = GetDistV(&plyr_wrk.move_box.spd.z,&(pEVar4->move_box).tpos.x), dist[1] == 0.0 ||
          (fVar5 < dist[1])))))))) {
      dist[1] = fVar5;
    }
    bVar2 = bVar2 + 1;
    pEVar4 = (ENE_WRK *)((int)&pEVar4[1].move_box.spd.z + 2);
  } while (bVar2 < 4);
  SetEffects(2,1);
  SetEffects(0xe,1);
  return;
}

void PlyrDmgCtrl() {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	u_char n;
	
  int iVar1;
  uchar uVar2;
  ushort uVar3;
  float tv [4];
  
  iVar1 = (uint)plyr_wrk.atk_no * 0x430;
  if (dmg_step != '\0') {
    if (dmg_step != '\x01') {
      return;
    }
    if ((plyr_wrk.sta & 0x20) == 0) {
      if (plyr_wrk.spd == 0.0) {
        return;
      }
      tv[2] = plyr_wrk.spd;
      tv[3] = 0.0;
      tv[0] = 0.0;
      tv[1] = 0.0;
      RotFvector(&plyr_wrk.move_box.trot.z,tv);
      PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\x01');
      PlyrPosSet((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
      return;
    }
    plyr_wrk.mode = 0;
    dmg_step = '\0';
    return;
  }
  uVar3 = 0;
  if (avoid_chk == '\0') {
    uVar2 = LeverGachaChk();
    uVar3 = *(ushort *)((int)ene_wrk + iVar1 + 0xe);
    if ((*(uint *)((int)ene_wrk + iVar1) & 0x8000) != 0) {
      if (uVar3 == 0) goto LAB_00205d30;
      if ((uVar2 != '\0') && (0x16 < uVar3)) {
        *(ushort *)((int)ene_wrk + iVar1 + 0xe) = uVar3 - 3;
      }
      VibrateRequest1(0,1);
      uVar3 = *(ushort *)((int)ene_wrk + iVar1 + 0xe);
      if (0x14 < uVar3) {
        CallDeform2(0,0,(uint)uVar3,7,0xd);
        uVar3 = *(ushort *)((int)ene_wrk + iVar1 + 0xe);
      }
    }
  }
  else {
    plyr_wrk.dwalk_tm = 0;
    *(undefined2 *)((int)ene_wrk + iVar1 + 0xe) = 0;
  }
  if (uVar3 != 0) {
    return;
  }
LAB_00205d30:
  if (plyr_wrk.anime_no == ':') {
    uVar2 = ';';
  }
  else {
    uVar2 = '9';
    if (plyr_wrk.anime_no == '<') {
      uVar2 = '=';
    }
  }
  SetPlyrAnime(uVar2,'\n');
  dmg_step = '\x01';
  return;
}

u_char LeverGachaChk() {
	u_char result;
	static u_char lever_dir_old = 255;
	
  uchar uVar1;
  uint uVar2;
  
  uVar2 = PlyrLeverInputChk();
  uVar1 = '\0';
  if (uVar2 == 2) {
    if (lever_dir_old_176 == pad[0].an_dir[0]) {
      uVar1 = '\0';
    }
    else {
      lever_dir_old_176 = pad[0].an_dir[0];
      uVar1 = '\x01';
    }
  }
  return uVar1;
}

void PlyrFinderEnd() {
  if (((plyr_wrk.sta & 0x20) != 0) || (plyr_wrk.anime_no != 'B')) {
    plyr_wrk.mode = 0;
  }
  return;
}

void PlyrNAnimeCtrl() {
	u_int psta;
	u_char anime_no;
	u_char frame;
	u_char rl_chk;
	u_char i;
	u_char j;
	u_int psta_chk_tbl[18];
	u_char pmani_no_tbl[18][2];
	
  uchar *puVar1;
  ulong *puVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  uchar anime_no;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uchar frame;
  uint psta_chk_tbl [18];
  uchar pmani_no_tbl [18] [2];
  
  uVar3 = plyr_wrk.mvsta;
  puVar7 = &DAT_00351620;
  frame = '\n';
  uVar8 = 0;
  puVar2 = (ulong *)psta_chk_tbl;
  do {
    puVar6 = puVar2;
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    uVar11 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar9;
    puVar6[2] = uVar10;
    puVar6[3] = uVar11;
    puVar7 = puVar7 + 4;
    puVar2 = puVar6 + 4;
  } while (puVar7 != (ulong *)&UNK_00351660);
  uVar13 = (int)puVar6 + 0x27U & 7;
  puVar2 = (ulong *)(((int)puVar6 + 0x27U) - uVar13);
  *puVar2 = *puVar2 & -1L << (uVar13 + 1) * 8 | _UNK_00351660 >> (7 - uVar13) * 8;
  puVar6[4] = _UNK_00351660;
  puVar1 = pmani_no_tbl[3] + 1;
  uVar13 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar13) =
       *(ulong *)(puVar1 + -uVar13) & -1L << (uVar13 + 1) * 8 | DAT_00351668 >> (7 - uVar13) * 8;
  pmani_no_tbl._0_8_ = DAT_00351668;
  puVar1 = pmani_no_tbl[7] + 1;
  uVar13 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar13) =
       *(ulong *)(puVar1 + -uVar13) & -1L << (uVar13 + 1) * 8 | DAT_00351670 >> (7 - uVar13) * 8;
  pmani_no_tbl._8_8_ = DAT_00351670;
  puVar1 = pmani_no_tbl[0xb] + 1;
  uVar13 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar13) =
       *(ulong *)(puVar1 + -uVar13) & -1L << (uVar13 + 1) * 8 | DAT_00351678 >> (7 - uVar13) * 8;
  pmani_no_tbl._16_8_ = DAT_00351678;
  puVar1 = pmani_no_tbl[0xf] + 1;
  uVar13 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar13) =
       *(ulong *)(puVar1 + -uVar13) & -1L << (uVar13 + 1) * 8 | DAT_00351680 >> (7 - uVar13) * 8;
  pmani_no_tbl._24_8_ = DAT_00351680;
  puVar1 = pmani_no_tbl[0x11] + 1;
  uVar13 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar13) =
       *(uint *)(puVar1 + -uVar13) & -1 << (uVar13 + 1) * 8 | DAT_00351688 >> (3 - uVar13) * 8;
  pmani_no_tbl._32_4_ = DAT_00351688;
  anime_no = '\0';
  if ((plyr_wrk.mvsta & 0xffff) != 0) {
    uVar13 = 0;
    pmani_no_tbl[0][0] = (uchar)DAT_00351668;
    while (((plyr_wrk.mvsta & psta_chk_tbl[0]) == 0 && (uVar13 = uVar13 + 1 & 0xff, uVar13 < 0x12)))
    {
      psta_chk_tbl[0] = psta_chk_tbl[uVar13];
    }
    uVar12 = 0;
    if (pmani_no_tbl[0][0] != plyr_wrk.anime_no) {
      pmani_no_tbl[0][1] = (uchar)(DAT_00351668 >> 8);
      uVar5 = 1;
      while (((pmani_no_tbl[0][1] != plyr_wrk.anime_no && (uVar12 = uVar5 & 0xff, uVar12 < 0x12)) &&
             (pmani_no_tbl[uVar12][0] != plyr_wrk.anime_no))) {
        pmani_no_tbl[0][1] = pmani_no_tbl[uVar12][1];
        uVar5 = uVar12 + 1;
      }
    }
    anime_no = plyr_wrk.anime_no;
    if (uVar13 != uVar12) {
      if (uVar12 < 0x12) {
        sVar4 = GetPlyrFtype();
        uVar8 = (uint)(sVar4 == 1);
      }
      if (((uVar3 & 0xfff0) == 0) && (uVar12 < 8)) {
        if ((uVar12 & 1) != 0) {
          uVar8 = uVar8 ^ 1;
        }
        frame = '\x14';
      }
      anime_no = pmani_no_tbl[uVar13][uVar8];
    }
  }
  if (anime_no == '\0') {
    if ((uVar3 & 0x40000) == 0) {
      if ((uVar3 & 0x80000) == 0) {
        if ((ushort)plyr_wrk.hp < 0x33) {
          anime_no = '\a';
        }
        else if ((time_wrk.no_pad < 0xe10) || (ingame_wrk.msn_no == 0)) {
          if (0x707 < time_wrk.no_pad) {
            anime_no = 'k';
          }
        }
        else {
          anime_no = 'U';
          frame = '<';
        }
      }
      else {
        anime_no = '\a';
      }
    }
    else {
      anime_no = 'd';
    }
  }
  if (plyr_wrk.cond == 2) {
    anime_no = '\b';
  }
  if ((anime_no == 'c') || (anime_no == 'j')) {
    frame = '\0';
  }
  if ((plyr_wrk.anime_no != anime_no) && ((uVar3 & 0x200000) == 0)) {
    SetPlyrAnime(anime_no,frame);
  }
  return;
}

void SetPlyrAnime(u_char anime_no, u_char frame) {
  plyr_wrk.sta = plyr_wrk.sta & 0xffffffdf;
  plyr_wrk.anime_no = anime_no;
  ReqPlayerAnime(frame);
  return;
}

void PlyrTrembleChk() {
	FURN_WRK *fw;
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	float dist;
	float dist_chk;
	u_int fsta;
	u_char i;
	u_char chk;
	u_char no;
	u_short mvib_time_tbl[5];
	u_char mvib_deg_tbl[5];
	static u_short mvib_time0 = 0;
	static u_short mvib_time1 = 0;
	static u_char mvib_degree;
	
  uchar *puVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ENE_WRK *pEVar9;
  FURN_WRK *fw;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float tv [4];
  short mvib_time_tbl [5];
  uchar mvib_deg_tbl [5];
  uint fsta;
  
  bVar3 = false;
  uVar10 = 0;
  pEVar9 = ene_wrk;
  uVar7 = 0;
  fVar14 = 0.0;
  uVar8 = (int)mvib_time_tbl + 7U & 7;
  puVar4 = (ulong *)(((int)mvib_time_tbl + 7U) - uVar8);
  *puVar4 = *puVar4 & -1L << (uVar8 + 1) * 8 | DAT_00351690 >> (7 - uVar8) * 8;
  mvib_time_tbl._0_8_ = DAT_00351690;
  mvib_time_tbl[4] = DAT_00351698;
  puVar1 = mvib_deg_tbl + 3;
  uVar8 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar8) =
       *(uint *)(puVar1 + -uVar8) & -1 << (uVar8 + 1) * 8 | DAT_00357278 >> (3 - uVar8) * 8;
  mvib_deg_tbl._0_4_ = DAT_00357278;
  mvib_deg_tbl[4] = DAT_0035727c;
  fVar12 = 0.0;
  do {
    if ((pEVar9->sta & 1) == 0) {
LAB_002062fc:
      uVar7 = uVar7 + 1 & 0xff;
    }
    else if (pEVar9->hp == 0) {
      uVar7 = uVar7 + 1 & 0xff;
    }
    else {
      if ((*(ulong *)pEVar9 & 0x88000) == 0) {
        fVar13 = GetDistV2(&plyr_wrk.move_box.spd.z,&(pEVar9->move_box).tpos.x);
        if ((fVar14 == fVar12) || (fVar13 < fVar14)) {
          fVar14 = fVar13;
          uVar10 = uVar7;
        }
        goto LAB_002062fc;
      }
      uVar7 = uVar7 + 1 & 0xff;
    }
    pEVar9 = (ENE_WRK *)((int)&pEVar9[1].move_box.spd.z + 2);
    if (3 < uVar7) {
      if ((1.0 <= fVar14) && (fVar14 <= 4000.0)) {
        bVar3 = true;
        if (mvib_time1_190 == 0) {
          bVar2 = mvib_time0_189 == 0;
          mvib_time0_189 = mvib_time0_189 + -1;
          if (bVar2) {
            mvib_time1_190 = 0x12;
            uVar8 = (int)(fVar14 / 500.0) & 0xff;
            if (4 < uVar8) {
              uVar8 = 4;
            }
            mvib_degree_191 = mvib_deg_tbl[uVar8];
            mvib_time0_189 = mvib_time_tbl[uVar8];
            if (*(char *)((int)ene_wrk + uVar10 * 0x430 + 0x10) == '\x02') {
              mvib_degree_191 = mvib_degree_191 >> 1;
            }
          }
        }
        else {
          if (mvib_time1_190 == 0x12) {
            SeStartFix(0xf,0,0x1000,0x1000,0);
          }
          mvib_time1_190 = mvib_time1_190 + -1;
          VibrateRequest2(0,(ushort)mvib_degree_191);
        }
      }
      fVar14 = DAT_0035606c;
      if (!bVar3) {
        fVar13 = 0.0;
        uVar8 = 0;
        iVar6 = 0;
        fVar12 = 0.0;
        do {
          fVar15 = fVar12;
          if ((((*(char *)((int)rg_dsp_wrk[0].pos + iVar6 + -0x10) != '\0') &&
               (fVar11 = GetDistV(&plyr_wrk.move_box.spd.z,(float *)((int)rg_dsp_wrk[0].pos + iVar6)
                                 ), fVar11 <= fVar14)) && (fVar15 = fVar11, fVar12 != fVar13)) &&
             (fVar12 <= fVar11)) {
            fVar15 = fVar12;
          }
          fVar11 = DAT_00356070;
          uVar8 = uVar8 + 1 & 0xff;
          iVar6 = uVar8 << 5;
          fVar12 = fVar15;
        } while (uVar8 < 3);
        if (fVar15 == 0.0) {
          fVar12 = 0.0;
          fw = furn_wrk;
          bVar5 = 0;
          fVar14 = 0.0;
          do {
            iVar6 = GetFurnHintPos(fw,tv,&fsta);
            fVar15 = fVar14;
            if (((iVar6 != 0) && (fVar13 = GetDistV(&plyr_wrk.move_box.spd.z,tv), fVar13 <= fVar11))
               && ((fVar15 = fVar13, fVar14 != fVar12 && (fVar14 <= fVar13)))) {
              fVar15 = fVar14;
            }
            bVar5 = bVar5 + 1;
            fw = fw + 1;
            fVar14 = fVar15;
          } while (bVar5 < 0x3c);
        }
        if ((1.0 <= fVar15) && (fVar15 <= DAT_00356074)) {
          if (mvib_time1_190 == 0) {
            bVar3 = mvib_time0_189 == 0;
            mvib_time0_189 = mvib_time0_189 + -1;
            if (bVar3) {
              mvib_time1_190 = 0xd;
              mvib_time0_189 = 0x96;
              mvib_degree_191 = 0x73;
            }
          }
          else {
            mvib_time1_190 = mvib_time1_190 + -1;
            VibrateRequest2(0,(ushort)mvib_degree_191);
          }
        }
      }
      return;
    }
  } while( true );
}

void ReqPlyrHPdown(u_short deg, u_char prio) {
  if (dbg_wrk.param_muteki == 0) {
    if ((((plyr_wrk.sta & 0x800) == 0) || (prio != '\0')) && ((plyr_wrk.sta & 0x4000) == 0)) {
      plyr_wrk.sta = plyr_wrk.sta | 0x800;
      hp_down_deg = deg;
    }
  }
  return;
}

void PlyrHPdwonCtrl() {
	u_short down;
	
  short sVar1;
  ushort uVar2;
  
  if ((plyr_wrk.sta & 0x800) == 0) {
    if (((plyr_wrk.sta & 0x4000) != 0) && (plyr_wrk.hp = plyr_wrk.hp + 5, 499 < (ushort)plyr_wrk.hp)
       ) {
      plyr_wrk.hp = 500;
      plyr_wrk.sta = plyr_wrk.sta & 0xffffbfff;
    }
  }
  else {
    if ((ushort)hp_down_deg < 3) {
      plyr_wrk.sta = plyr_wrk.sta & 0xfffff7ff;
      uVar2 = hp_down_deg;
    }
    else {
      hp_down_deg = hp_down_deg + -2;
      uVar2 = 2;
    }
    sVar1 = 0;
    if (uVar2 <= (ushort)plyr_wrk.hp) {
      sVar1 = plyr_wrk.hp - uVar2;
    }
    plyr_wrk.hp = sVar1;
    if (plyr_wrk.hp == 0) {
      if (poss_item[8] == 0) {
        if (ingame_wrk.game == 1) {
          CallMissionFailed();
        }
        else {
          plyr_wrk.sta = plyr_wrk.sta & 0xfffff7ff;
          if (_DAT_00252e80 != -1) {
            SeFadeFlame(_DAT_00252e80,0x3c,0);
          }
          SetPlyrAnime('@','\n');
          StartGameOver();
        }
      }
      else {
        poss_item[8] = poss_item[8] - 1;
        plyr_wrk.sta = plyr_wrk.sta & 0xfffff7ff | 0x4000;
        SeStartFix(6,0,0x1000,0x1000,0);
        hp_down_deg = 0;
      }
    }
  }
  return;
}

void PlyrSpotLightOnChk() {
  SetPlyrSpotLight('\x01');
  if ((plyr_wrk.mode == 0) && (plyr_wrk.anime_no != 'B')) {
    SetEffects(10,1);
    return;
  }
  return;
}

void SetPlyrSpotLight(u_char id) {
	SPOT_WRK ts0;
	SPOT_WRK ts1;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	u_char i;
	
  short sVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong in_hi;
  float fVar15;
  SPOT_WRK ts0;
  SPOT_WRK ts1;
  float tv [4];
  float rv [4];
  
  if (id != '\0') {
    if (plyr_wrk.mode == 1) {
      ts0.pos[0] = camera.p.x;
      ts0.pos[1] = camera.p.y;
      ts0.pos[2] = camera.p.z;
      ts0.pos[3] = camera.p.w;
      tv[2] = -150.0;
      tv[0] = 0.0;
      tv[1] = 0.0;
      tv[3] = 0.0;
      RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
      sceVu0AddVector((Vector4 *)&ts1,&camera.p,(Vector4 *)tv);
      sceVu0SubVector(&ts0.direction,0x252840,0x252850);
      ts0.diffuse[1] = DAT_0035607c;
      ts0.diffuse[0] = DAT_00356078;
      ts1.diffuse[0] = DAT_00356084;
      ts0.diffuse[2] = DAT_00356080;
      ts1.diffuse[2] = DAT_0035608c;
      ts1.diffuse[1] = DAT_00356088;
    }
    else {
      tv[0] = 0.0;
      tv[2] = -300.0;
      tv[1] = 0.0;
      tv[3] = 0.0;
      RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
      sceVu0AddVector((Vector4 *)&ts0,(Vector4 *)&plyr_wrk.shadow_direction.z,(Vector4 *)tv);
      tv[0] = 0.0;
      tv[2] = -150.0;
      tv[1] = 0.0;
      tv[3] = 0.0;
      RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
      sceVu0AddVector((Vector4 *)&ts1,(Vector4 *)&ts0,(Vector4 *)tv);
      rv[1] = plyr_wrk.spot_pos.w + plyr_wrk.move_box.trot.w;
      rv[0] = plyr_wrk.spot_pos.z;
      rv[2] = plyr_wrk.shadow_direction.x;
      rv[3] = plyr_wrk.shadow_direction.y;
      RotLimitChk(rv + 1);
      ts0.direction.y = -800.0;
      ts0.direction.z = DAT_00356090;
      ts0.direction.x = 0.0;
      ts0.direction.w = 0.0;
      RotFvector(rv,&ts0.direction.x);
      ts0.diffuse[1] = DAT_00356098;
      ts0.diffuse[0] = DAT_00356094;
      ts1.diffuse[0] = DAT_003560a0;
      ts0.diffuse[2] = DAT_0035609c;
      ts1.diffuse[2] = DAT_003560a8;
      ts1.diffuse[1] = DAT_003560a4;
    }
    fVar11 = DAT_003560b4;
    ts1.direction.x = ts0.direction.x;
    ts1.direction.y = ts0.direction.y;
    ts1.direction.z = ts0.direction.z;
    ts1.direction.w = ts0.direction.w;
    ts1.diffuse[3] = 255.0;
    ts0.intens = DAT_003560ac;
    ts1.intens = DAT_003560b0;
    ts0.diffuse[3] = 255.0;
    sceVu0ScaleVector(DAT_003560b4,(Vector4 *)ts0.diffuse,(Vector4 *)ts0.diffuse);
    sceVu0ScaleVector(fVar11,(Vector4 *)ts1.diffuse,(Vector4 *)ts1.diffuse);
    ts1.power = DAT_003560b8;
    ts0.power = DAT_003560b8;
  }
  uVar4 = CONCAT44(ts0.pos[1],ts0.pos[0]);
  uVar13 = 0;
  uVar5 = CONCAT44(ts0.pos[3],ts0.pos[2]);
  uVar6 = CONCAT44(ts0.direction.y,ts0.direction.x);
  uVar7 = CONCAT44(ts0.direction.w,ts0.direction.z);
  uVar8 = CONCAT44(ts0.diffuse[1],ts0.diffuse[0]);
  uVar9 = CONCAT44(ts0.diffuse[3],ts0.diffuse[2]);
  uVar10 = CONCAT44(ts0.power,ts0.intens);
  do {
    lVar2 = (in_hi | 0x253f70) + (long)(int)(uVar13 * 0x1d0);
    iVar12 = (int)lVar2;
    lVar2 = (long)(int)((uint)((ulong)lVar2 >> 0x20) | 0x253f70) + (long)(int)(uVar13 * 0x1d0);
    iVar3 = (int)lVar2;
    if (id == '\0') {
      iVar12 = *(int *)(iVar3 + 0x48);
      if (1 < iVar12) {
        *(int *)(iVar3 + 0x48) = iVar12 + -2;
      }
    }
    else {
      iVar3 = *(int *)(iVar12 + 0x48);
      if (iVar3 < 2) {
        *(int *)(iVar12 + 0x48) = iVar3 + 2;
      }
    }
    lVar2 = (long)(int)((uint)((ulong)lVar2 >> 0x20) | 0x253f70) + (long)(int)(uVar13 * 0x1d0);
    iVar12 = (int)lVar2;
    in_hi = (ulong)(int)((ulong)lVar2 >> 0x20);
    uVar13 = uVar13 + 1 & 0xff;
    *(float (*) [2])(iVar12 + 0x1c8) = ts1.pad;
    *(undefined8 *)(iVar12 + 0x150) = uVar4;
    *(undefined8 *)(iVar12 + 0x158) = uVar5;
    *(undefined8 *)(iVar12 + 0x160) = uVar6;
    *(undefined8 *)(iVar12 + 0x168) = uVar7;
    *(undefined8 *)(iVar12 + 0x178) = uVar9;
    *(undefined8 *)(iVar12 + 0x170) = uVar8;
    *(undefined8 *)(iVar12 + 0x180) = uVar10;
    *(float (*) [2])(iVar12 + 0x188) = ts0.pad;
    *(undefined8 *)(iVar12 + 400) = ts1.pos._0_8_;
    *(undefined8 *)(iVar12 + 0x198) = ts1.pos._8_8_;
    *(ulong *)(iVar12 + 0x1a0) = CONCAT44(ts1.direction.y,ts1.direction.x);
    *(ulong *)(iVar12 + 0x1a8) = CONCAT44(ts1.direction.w,ts1.direction.z);
    *(ulong *)(iVar12 + 0x1b0) = CONCAT44(ts1.diffuse[1],ts1.diffuse[0]);
    *(ulong *)(iVar12 + 0x1b8) = CONCAT44(ts1.diffuse[3],ts1.diffuse[2]);
    *(ulong *)(iVar12 + 0x1c0) = CONCAT44(ts1.power,ts1.intens);
  } while (uVar13 < 2);
  uVar13 = 0;
  sVar1 = furn_wrk[0].furn_no;
  while (sVar1 != -1) {
    lVar2 = (in_hi | 0x30ea70) + (long)(int)(uVar13 * 0x220);
    iVar12 = (int)lVar2;
    lVar2 = (long)(int)((uint)((ulong)lVar2 >> 0x20) | 0x30ea70) + (long)(int)(uVar13 * 0x220);
    iVar3 = (int)lVar2;
    uVar14 = uVar13 + 1 & 0xff;
    if (id == '\0') {
      iVar12 = *(int *)(iVar3 + 0x58);
      if (0 < iVar12) {
        *(int *)(iVar3 + 0x58) = iVar12 + -1;
      }
    }
    else {
      iVar3 = *(int *)(iVar12 + 0x58);
      if (iVar3 < 1) {
        *(int *)(iVar12 + 0x58) = iVar3 + 1;
      }
    }
    in_hi = (ulong)(uint)(lVar2 >> 0x3f) << 0x20;
    *(float (*) [2])furn_wrk[uVar13].mylight.spot[0].pad = ts0.pad;
    *(undefined8 *)furn_wrk[uVar13].mylight.spot[0].pos = uVar4;
    *(undefined8 *)(furn_wrk[uVar13].mylight.spot[0].pos + 2) = uVar5;
    *(undefined8 *)&furn_wrk[uVar13].mylight.spot[0].direction = uVar6;
    *(undefined8 *)&furn_wrk[uVar13].mylight.spot[0].direction.z = uVar7;
    *(undefined8 *)furn_wrk[uVar13].mylight.spot[0].diffuse = uVar8;
    *(undefined8 *)(furn_wrk[uVar13].mylight.spot[0].diffuse + 2) = uVar9;
    *(undefined8 *)&furn_wrk[uVar13].mylight.spot[0].intens = uVar10;
    if (0x3b < uVar14) break;
    uVar13 = uVar14;
    sVar1 = furn_wrk[uVar14].furn_no;
  }
  fVar11 = DAT_003560bc;
  uVar13 = 0;
  iVar12 = 0;
  do {
    uVar13 = uVar13 + 1 & 0xff;
    if ((*(uint *)((int)&ene_wrk[0].sta + iVar12) & 1) != 0) {
      iVar3 = *(int *)((int)ene_wrk[0].mylight.parallel[0].direction + iVar12 + 4);
      if (id == '\0') {
        if (0 < iVar3) {
          *(int *)((int)ene_wrk[0].mylight.parallel[0].direction + iVar12 + 4) = iVar3 + -1;
        }
      }
      else if (iVar3 < 1) {
        *(int *)((int)ene_wrk[0].mylight.parallel[0].direction + iVar12 + 4) = iVar3 + 1;
      }
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[1].pos + iVar12 + 0xc) = uVar10;
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[0].diffuse + iVar12 + -4) = uVar4;
      fVar15 = *(float *)((int)ene_wrk[0].mylight.spot[1].pos + iVar12 + 0x10);
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[0].diffuse + iVar12 + 4) = uVar5;
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[0].diffuse + iVar12 + 0xc) = uVar6;
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[0].pad + iVar12 + -4) = uVar7;
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[0].pad + iVar12 + 4) = uVar8;
      *(undefined8 *)((int)ene_wrk[0].mylight.spot[1].pos + iVar12 + 4) = uVar9;
      *(float (*) [2])((int)ene_wrk[0].mylight.spot[1].diffuse + iVar12 + -0xc) = ts0.pad;
      *(float *)((int)ene_wrk[0].mylight.spot[1].pos + iVar12 + 0x10) = fVar15 * fVar11;
    }
    iVar12 = uVar13 * 0x430;
  } while (uVar13 < 4);
  return;
}

void PlyrSubAtkChk() {
	u_char hit;
	int sub_se_tbl[4];
	
  uint uVar1;
  ulong *puVar2;
  byte bVar3;
  uchar uVar4;
  long lVar5;
  int sub_se_tbl [4];
  
  uVar1 = (int)sub_se_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)sub_se_tbl + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003516a0 >> (7 - uVar1) * 8;
  sub_se_tbl._0_8_ = DAT_003516a0;
  uVar1 = (int)sub_se_tbl + 0xfU & 7;
  puVar2 = (ulong *)(((int)sub_se_tbl + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003516a8 >> (7 - uVar1) * 8;
  sub_se_tbl._8_8_ = DAT_003516a8;
  lVar5 = 0xff;
  if ((((*key_now[8] == 1) && (cam_custom_wrk.set_sub != 0xff)) && (poss_item[5] != 0)) &&
     (bVar3 = poss_item[5] - 1, plyr_wrk.cond != 1)) {
    poss_item[5] = bVar3;
    switch(cam_custom_wrk.set_sub) {
    case '\0':
      uVar4 = PSAchk0();
      lVar5 = (long)(char)uVar4;
      break;
    case '\x01':
      uVar4 = PSAchk1();
      lVar5 = (long)(char)uVar4;
      break;
    case '\x02':
      uVar4 = PSAchk2();
      lVar5 = (long)(char)uVar4;
      break;
    case '\x03':
      uVar4 = PSAchk3();
      lVar5 = (long)(char)uVar4;
      break;
    case '\x04':
      PSAchk4('\0');
    }
    if (lVar5 != 0xff) {
      if (lVar5 == 0) {
        SeStartFix(0xc,0,0x1000,0x1000,0);
      }
      else {
        SeStartFix(sub_se_tbl[cam_custom_wrk.set_sub],0,0x1000,0x1000,0);
      }
    }
  }
  if (cam_custom_wrk.set_spe != 0xff) {
    if (cam_custom_wrk.set_spe == '\0') {
      PSAchk5();
    }
    else if (((cam_custom_wrk.set_spe == '\x01') && ((*key_now[9] != 0 || (*key_now[11] != 0)))) &&
            (plyr_wrk.cond != 1)) {
      PSAchk4('\x01');
    }
  }
  return;
}

u_char PSAchk0() {
	ENE_WRK *ew;
	u_char i;
	u_char chk;
	
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ENE_WRK *ew;
  uint eneno;
  
  bVar1 = false;
  eneno = 0;
  ew = ene_wrk;
  do {
    uVar3 = eneno + 1;
    if ((ew->sta & 1) == 0) {
LAB_00207030:
      eneno = eneno + 1 & 0xff;
    }
    else if (ew->hp == 0) {
      eneno = uVar3 & 0xff;
    }
    else {
      if ((*(ulong *)ew & 0x80080400) == 0x400) {
        if (ingame_wrk.msn_no == 4) {
          if (ew->dat_no == 2) {
            eneno = uVar3 & 0xff;
            goto LAB_00207034;
          }
          uVar2 = *(ulong *)((int)&ew[1].move_box.tpos.z + 2);
        }
        else {
          uVar2 = *(ulong *)((int)&ew[1].move_box.tpos.z + 2);
        }
        if ((uVar2 & 0xffffffffffff) == 0) {
          EneActSet(ew,'\n');
          bVar1 = true;
          SetCamPush(eneno);
        }
        goto LAB_00207030;
      }
      eneno = uVar3 & 0xff;
    }
LAB_00207034:
    ew = (ENE_WRK *)((int)&ew[1].move_box.spd.z + 2);
    if (2 < eneno) {
      if (!bVar1) {
        SetCamPush(-1);
      }
      return bVar1;
    }
  } while( true );
}

u_char PSAchk1() {
	ENE_WRK *ew;
	u_char i;
	u_char chk;
	
  byte bVar1;
  bool bVar2;
  ENE_WRK *pEVar3;
  uint eneno;
  
  bVar2 = false;
  eneno = 0;
  pEVar3 = ene_wrk;
  do {
    if ((pEVar3->sta & 1) == 0) {
LAB_00207170:
      eneno = eneno + 1 & 0xff;
    }
    else {
      if (pEVar3->hp != 0) {
        if ((*(ulong *)pEVar3 & 0x80080400) == 0x400) {
          if (ingame_wrk.msn_no == 4) {
            if (pEVar3->dat_no == 2) goto LAB_00207170;
            bVar1 = pEVar3->act_no;
          }
          else {
            bVar1 = pEVar3->act_no;
          }
          if (bVar1 != 10) {
            if ((*(ulong *)((int)&pEVar3[1].move_box.tpos.z + 2) & 0xffffffff0000) != 0) {
              eneno = eneno + 1 & 0xff;
              goto LAB_00207174;
            }
            *(undefined2 *)((int)&pEVar3[1].move_box.tpos.z + 2) = 600;
            SetCamSlow(eneno);
            bVar2 = true;
          }
        }
        goto LAB_00207170;
      }
      eneno = eneno + 1 & 0xff;
    }
LAB_00207174:
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    if (2 < eneno) {
      if (!bVar2) {
        SetCamSlow(-1);
      }
      return bVar2;
    }
  } while( true );
}

u_char PSAchk3() {
	ENE_WRK *ew;
	u_char i;
	u_char chk;
	
  byte bVar1;
  long lVar2;
  uint *puVar3;
  bool bVar4;
  ENE_WRK *pEVar5;
  uint eneno;
  ulong in_hi;
  
  bVar4 = false;
  eneno = 0;
  pEVar5 = ene_wrk;
  do {
    if ((pEVar5->sta & 1) == 0) {
LAB_002072cc:
      eneno = eneno + 1 & 0xff;
    }
    else {
      if (pEVar5->hp != 0) {
        if ((*(ulong *)pEVar5 & 0x80080400) == 0x400) {
          if (ingame_wrk.msn_no == 4) {
            if (pEVar5->dat_no == 2) goto LAB_002072cc;
            bVar1 = pEVar5->act_no;
          }
          else {
            bVar1 = pEVar5->act_no;
          }
          if (bVar1 != 10) {
            if ((*(ulong *)((int)&pEVar5[1].move_box.tpos.z + 2) & 0xffffffff) != 0) {
              eneno = eneno + 1 & 0xff;
              goto LAB_002072d0;
            }
            *(undefined2 *)((int)&pEVar5[1].move_box.tpos.w + 2) = 0xb4;
            bVar4 = true;
            lVar2 = (in_hi | 0x252e90) + (long)(int)(eneno * 0x430);
            puVar3 = (uint *)lVar2;
            in_hi = (ulong)(int)((ulong)lVar2 >> 0x20);
            *puVar3 = *puVar3 | 0x10000000;
            SetCamStop(eneno);
          }
        }
        goto LAB_002072cc;
      }
      eneno = eneno + 1 & 0xff;
    }
LAB_002072d0:
    pEVar5 = (ENE_WRK *)((int)&pEVar5[1].move_box.spd.z + 2);
    if (2 < eneno) {
      if (!bVar4) {
        SetCamStop(-1);
      }
      return bVar4;
    }
  } while( true );
}

u_char PSAchk2() {
	ENE_WRK *ew;
	u_char i;
	u_char chk;
	
  byte bVar1;
  bool bVar2;
  ENE_WRK *pEVar3;
  uint eneno;
  
  bVar2 = false;
  eneno = 0;
  pEVar3 = ene_wrk;
  do {
    if ((pEVar3->sta & 1) == 0) {
LAB_00207410:
      eneno = eneno + 1 & 0xff;
    }
    else {
      if (pEVar3->hp != 0) {
        if ((*(ulong *)pEVar3 & 0x80080020) == 0x20) {
          if (ingame_wrk.msn_no == 4) {
            if (pEVar3->dat_no == 2) goto LAB_00207410;
            bVar1 = pEVar3->act_no;
          }
          else {
            bVar1 = pEVar3->act_no;
          }
          if (bVar1 != 10) {
            if ((*(ulong *)((int)&pEVar3[1].move_box.tpos.z + 2) & 0xffff0000ffff) != 0) {
              eneno = eneno + 1 & 0xff;
              goto LAB_00207414;
            }
            *(undefined2 *)&pEVar3[1].move_box.tpos.w = 600;
            *(undefined *)&pEVar3->nee = 0x50;
            bVar2 = true;
            SetCamView(eneno);
          }
        }
        goto LAB_00207410;
      }
      eneno = eneno + 1 & 0xff;
    }
LAB_00207414:
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    if (2 < eneno) {
      if (!bVar2) {
        SetCamView(-1);
      }
      return bVar2;
    }
  } while( true );
}

void PSAchk4(u_char id) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR tr;
	sceVu0FVECTOR rv;
	ENE_WRK *ew;
	float dist[2];
	float rot;
	u_char i;
	u_char j;
	u_char trgt;
	
  uint uVar1;
  ENE_WRK *pEVar2;
  uint eneno;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float tv [4];
  float tr [4];
  float rv [4];
  float dist [2];
  
  if ((plyr_wrk.sta & 0x400) == 0) {
    dist[1] = 0.0;
    uVar3 = 0;
    eneno = 0xff;
    pEVar2 = ene_wrk;
    do {
      uVar1 = uVar3 + 1;
      if ((pEVar2->sta & 1) == 0) {
LAB_00207564:
        uVar3 = uVar3 + 1 & 0xff;
      }
      else if (pEVar2->hp == 0) {
        uVar3 = uVar1 & 0xff;
      }
      else if ((*(ulong *)pEVar2 & 0x80080000) == 0) {
        if (((ingame_wrk.msn_no != 4) || (pEVar2->dat_no != 2)) || (id != '\0')) {
          fVar4 = GetDistV(&plyr_wrk.move_box.spd.z,&(pEVar2->move_box).tpos.x);
          if ((dist[1] == 0.0) || (fVar4 < dist[1])) {
            eneno = uVar3;
            dist[1] = fVar4;
          }
          goto LAB_00207564;
        }
        uVar3 = uVar1 & 0xff;
      }
      else {
        uVar3 = uVar1 & 0xff;
      }
      pEVar2 = (ENE_WRK *)((int)&pEVar2[1].move_box.spd.z + 2);
    } while (uVar3 < 3);
    if (eneno == 0xff) {
      if (id == '\0') {
        SetCamSearch(-1);
      }
    }
    else {
      fVar4 = SgSinf(camera.fov * 0.5);
      fVar4 = SgAtan2f(-15.0,224.0 / fVar4);
      GetTrgtRot((float *)&camera,(float *)((int)ene_wrk + eneno * 0x430 + 0xc0),tr,3);
      tr[0] = (tr[0] - plyr_wrk.frot_x) + fVar4;
      RotLimitChk(tr);
      tr[1] = tr[1] - plyr_wrk.move_box.trot.w;
      RotLimitChk(tr + 1);
      fVar4 = GetDist(tr[0],tr[1]);
      uVar3 = (uint)(fVar4 / DAT_003560c0);
      plyr_wrk.move_box.tpos.w._0_2_ = (ushort)uVar3;
      if ((uVar3 & 0xffff) != 0) {
        fVar6 = ABS(tr[0]);
        plyr_wrk.move_box.pos_mid.z = tr[0] / (float)(uVar3 & 0xffff);
        plyr_wrk.move_box.pos_mid.w = tr[1] / (float)(uVar3 & 0xffff);
        plyr_wrk.sta = plyr_wrk.sta | 0x400;
        fVar4 = plyr_wrk.move_box.pos_mid.z;
        if (fVar6 <= ABS(tr[1])) {
          fVar4 = plyr_wrk.move_box.pos_mid.w;
          fVar6 = ABS(tr[1]);
        }
        fVar4 = ABS(fVar4);
        plyr_wrk.move_box.tpos.w._0_2_ = 0;
        for (fVar5 = fVar4 + 0.0; fVar5 <= fVar6; fVar5 = fVar5 + fVar4) {
          fVar4 = fVar4 * DAT_003560c4;
          plyr_wrk.move_box.tpos.w._0_2_ = plyr_wrk.move_box.tpos.w._0_2_ + 1 & 0xff;
        }
        if (id == '\0') {
          SetCamSearch(eneno);
        }
      }
    }
  }
  return;
}

void PSAchk5() {
	ENE_WRK *ew;
	sceVu0FVECTOR rv;
	float dist[2];
	u_char i;
	u_char t;
	
  ENE_WRK *pEVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float rv [4];
  float dist [2];
  
  dist[1] = 0.0;
  uVar3 = 0xff;
  uVar2 = 0;
  pEVar1 = ene_wrk;
  plyr_wrk.spe1_dir = '\0';
  do {
    if (((pEVar1->sta & 1) != 0) &&
       ((uVar4 = uVar3, fVar5 = dist[1], pEVar1->hp == 0 ||
        (((pEVar1->sta & 0x80000) == 0 &&
         ((fVar5 = GetDistV((float *)&camera,(pEVar1->mpos).p1 + 3), uVar4 = uVar2, dist[1] == 0.0
          || (fVar5 < dist[1])))))))) {
      dist[1] = fVar5;
      uVar3 = uVar4;
    }
    uVar2 = uVar2 + 1 & 0xff;
    pEVar1 = (ENE_WRK *)((int)&pEVar1[1].move_box.spd.z + 2);
  } while (uVar2 < 4);
  if ((uVar3 != 0xff) && ((*(uint *)((int)ene_wrk + uVar3 * 0x430) & 0x20) == 0)) {
    GetTrgtRot((float *)&camera,(float *)((int)ene_wrk + uVar3 * 0x430 + 0xc0),rv,3);
    rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
    RotLimitChk((float *)((uint)rv | 4));
    rv[0] = rv[0] - plyr_wrk.frot_x;
    RotLimitChk(rv);
    if (ABS(rv[0]) < ABS(rv[1])) {
      if (0.0 < rv[1]) {
        plyr_wrk.spe1_dir = plyr_wrk.spe1_dir | 2;
      }
      else {
        plyr_wrk.spe1_dir = plyr_wrk.spe1_dir | 8;
      }
    }
    else if (0.0 < rv[0]) {
      plyr_wrk.spe1_dir = plyr_wrk.spe1_dir | 1;
    }
    else {
      plyr_wrk.spe1_dir = plyr_wrk.spe1_dir | 4;
    }
  }
  return;
}

void PlyrPhotoChk() {
	u_short pad_shutter;
	
  short *psVar1;
  int se_no;
  
  if (no_photo_tm != '\0') {
    no_photo_tm = no_photo_tm + 0xff;
    return;
  }
  if (((opt_wrk.key_type < 2) || (opt_wrk.key_type == '\x04')) ||
     (psVar1 = key_now[7], opt_wrk.key_type == '\x05')) {
    psVar1 = key_now[10];
  }
  if ((*key_now[5] != 1) && (*psVar1 != 1)) {
    return;
  }
  if (((photo_wrk.mode != 0) || (plyr_wrk.cond == 1)) ||
     ((poss_item[plyr_wrk.film_no] == 0 && (cam_custom_wrk.set_spe != '\x03')))) {
    if (poss_item[plyr_wrk.film_no] != 0) {
      return;
    }
    SeStartFix(5,0,0x1000,0xa00,0);
    return;
  }
  PhotoFlyChk();
  PhotoDmgChk();
  PhotoPointSet();
  if ((plyr_wrk.sta & 0x8000000) != 0) {
    plyr_wrk.move_box.pos_mid.z = 0.0;
    plyr_wrk.move_box.pos_mid.w = 0.0;
    plyr_wrk.sta = plyr_wrk.sta & 0xf7ffffff;
    plyr_wrk.move_box.comm_add.pu8 = (uchar *)0x0;
    plyr_wrk.move_box.comm_add.wrk._4_4_ = 0;
    plyr_wrk.move_box.tpos.w._0_2_ = 0;
  }
  switch(plyr_wrk.charge_num) {
  case '\x04':
  case '\x05':
  case '\x06':
    se_no = 0x15;
    break;
  case '\a':
  case '\b':
  case '\t':
    se_no = 0x16;
    break;
  case '\n':
  case '\v':
  case '\f':
    se_no = 0x17;
    break;
  default:
    SeStartFix(0x14,0,0x1000,0x1000,0);
    goto LAB_00207b30;
  }
  SeStartFix(se_no,0,0x1000,0x1000,0);
LAB_00207b30:
  PlyrChargeCtrl(0xff,(ENE_WRK *)0x0);
  if (cam_custom_wrk.set_spe != '\x03') {
    poss_item[plyr_wrk.film_no] = poss_item[plyr_wrk.film_no] - 1;
  }
  plyr_wrk.ap_timer = 0x78;
  plyr_wrk.aphoto_tm = 600;
  return;
}

void EneFrameHitChk() {
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR rv;
	PP_JUDGE ppj;
	float dpe;
	float dce;
	float tx;
	float ty;
	u_char i;
	u_char chk;
	u_char chk2;
	
  short sVar1;
  float sight;
  uchar uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *tp;
  uint *puVar6;
  ENE_WRK *ew;
  uint uVar7;
  float (*p0) [4];
  float fVar8;
  float fVar9;
  float dist;
  float tv [4];
  float rv [4];
  PP_JUDGE ppj;
  float tx;
  float ty;
  uchar chk;
  uchar chk2;
  PP_JUDGE *local_c0;
  
  local_c0 = &ppj;
  ew = ene_wrk;
  p0 = ppj.p;
  uVar7 = 0;
  _chk2 = 0;
  _chk = 0;
  do {
    if ((((ew->sta & 1) != 0) && (ew->hp != 0)) && ((ew->sta & 0x80000) == 0)) {
      fVar8 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x);
      sight = DAT_003560c8;
      fVar9 = plyr_wrk.move_box.trot.w;
      tp = (ew->mpos).p1 + 3;
      dist = *(float *)(&photo_rng_tbl + (uint)plyr_wrk.cam_type * 4);
      _chk2 = 1;
      *(float *)((int)&ew->bcomm_add + 4) = fVar8;
      uVar2 = OutSightChk(tp,(float *)&camera,fVar9,sight,dist);
      if (uVar2 == '\0') {
        iVar3 = FrameInsideChk(tp,&tx,&ty);
        if (iVar3 != 0) {
          sVar1 = ew[1].dmg;
          puVar6 = (uint *)((int)ene_wrk + uVar7 * 0x430);
          _chk = 1;
          *puVar6 = *puVar6 | 0x20;
          if (sVar1 != -1) {
            ew[1].dmg = sVar1 + 1;
          }
          iVar4 = (int)plyr_wrk.move_box.pos.z._0_2_;
          iVar3 = (int)plyr_wrk.move_box.pos.z._2_2_;
          ew[1].move_box.reserve = (short)(int)tx;
          *(short *)&ew[1].move_box.se = (short)(int)ty;
          fVar9 = GetDist(tx - (float)iVar4,ty - (float)iVar3);
          if (fVar9 <= *(float *)(&circle_radius_tbl + (uint)cam_custom_wrk.charge_range * 4)) {
            uVar5 = *puVar6;
            *(float *)&ew->bcomm_add_top = fVar9;
            *puVar6 = uVar5 | 0x40;
            if (fVar9 <= 25.0) {
              *puVar6 = uVar5 | 0x140;
            }
            uVar5 = ew->sta;
          }
          else {
            uVar5 = ew->sta;
          }
          if ((uVar5 & 0x1000000) == 0) {
            ppj.p[0][0] = (ew->mpos).p1[3];
            ppj.p[0][1] = (ew->mpos).p2[0];
            ppj.p[0][2] = (ew->mpos).p2[1];
            ppj.p[0][3] = (ew->mpos).p2[2];
            ppj.num = '\x01';
            tv[2] = 200.0;
            ppj.result[0] = '\0';
            tv[0] = 0.0;
            tv[1] = 0.0;
            tv[3] = 0.0;
            GetTrgtRot((float *)p0,(float *)&camera,rv,3);
            RotFvector(rv,tv);
            sceVu0AddVector((Vector4 *)p0,(Vector4 *)p0,(Vector4 *)tv);
            CheckPointDepth(local_c0);
            if ((ppj.result[0] != '\0') || (fVar8 <= 300.0)) {
              puVar6 = (uint *)((int)ene_wrk + uVar7 * 0x430);
              *puVar6 = *puVar6 | 0x200;
              uVar5 = ew->sta;
            }
            else {
              uVar5 = ew->sta;
            }
          }
          if (((((uVar5 & 0x40) != 0) || ((fVar8 <= 510.0 && ((uVar5 & 0x20) != 0)))) &&
              ((uVar5 & 0x200) != 0)) && (*(char *)&ew->nee != '\0')) {
            puVar6 = (uint *)((int)ene_wrk + uVar7 * 0x430);
            *puVar6 = *puVar6 | 0x400;
            if (ew->type < 2) {
              PlyrChargeCtrl('\x01',ew);
            }
            else {
              plyr_wrk.charge_rate = 3.0;
            }
          }
          goto LAB_00207f00;
        }
        *(undefined4 *)((int)&ew->bcomm_add + 4) = 0;
      }
      else {
        *(undefined4 *)((int)&ew->bcomm_add + 4) = 0;
      }
      ew[1].dmg = 0;
    }
LAB_00207f00:
    uVar7 = uVar7 + 1 & 0xff;
    ew = (ENE_WRK *)((int)&ew[1].move_box.spd.z + 2);
    if (3 < uVar7) {
      if ((_chk == 0) || (_chk2 == 0)) {
        PlyrChargeCtrl('\0',(ENE_WRK *)0x0);
      }
      return;
    }
  } while( true );
}

void PlyrChargeCtrl(u_char req, ENE_WRK *ew) {
	u_short ctime[4];
	float cldown[4];
	float dpe;
	float rate0;
	float rate1;
	u_char cn;
	u_char cl_max;
	
  uint uVar1;
  ulong *puVar2;
  uchar uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  short ctime [4];
  float cldown [4];
  
  uVar1 = (int)ctime + 7U & 7;
  puVar2 = (ulong *)(((int)ctime + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)_DAT_00357288 >> (7 - uVar1) * 8;
  ctime = _DAT_00357288;
  uVar1 = (int)cldown + 7U & 7;
  puVar2 = (ulong *)(((int)cldown + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003516f8 >> (7 - uVar1) * 8;
  cldown._0_8_ = DAT_003516f8;
  uVar1 = (int)cldown + 0xfU & 7;
  puVar2 = (ulong *)(((int)cldown + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_00351700 >> (7 - uVar1) * 8;
  cldown._8_8_ = DAT_00351700;
  if (req == '\0') {
    uVar3 = (&ini_charge_tbl)[plyr_wrk.film_no];
    if (cam_custom_wrk.set_spe == '\x04') {
      uVar3 = '\f';
    }
    plyr_wrk.charge_rate = 0.0;
    if (plyr_wrk.charge_num == uVar3) {
      plyr_wrk.charge_deg = 0.0;
    }
    else if (plyr_wrk.charge_deg == 0.0) {
      plyr_wrk.charge_deg = cldown[cam_custom_wrk.charge_speed];
      plyr_wrk.charge_num = plyr_wrk.charge_num + 0xff;
    }
    else {
      if ((plyr_wrk.charge_deg < 1.0) || (cldown[cam_custom_wrk.charge_speed] < plyr_wrk.charge_deg)
         ) {
        plyr_wrk.charge_deg = cldown[cam_custom_wrk.charge_speed];
      }
      plyr_wrk.charge_deg = plyr_wrk.charge_deg - 1.0;
    }
  }
  else if (req == 0xff) {
    plyr_wrk.charge_deg = 0.0;
    plyr_wrk.charge_rate = 0.0;
    plyr_wrk.charge_num = (&ini_charge_tbl)[plyr_wrk.film_no];
    if (cam_custom_wrk.set_spe == '\x04') {
      plyr_wrk.charge_num = '\f';
    }
  }
  else {
    fVar5 = *(float *)((int)&ew->bcomm_add + 4);
    if (plyr_wrk.film_no == '\0') {
      bVar4 = 1;
    }
    else {
      bVar4 = (&charge_max_tbl)[cam_custom_wrk.charge_max];
    }
    if (plyr_wrk.charge_num < bVar4) {
      if (((int)plyr_wrk.charge_deg & 0xffffU) < (uint)(ushort)ctime[cam_custom_wrk.charge_speed]) {
        fVar6 = DAT_003560cc;
        if (fVar5 <= 2000.0) {
          fVar6 = ((2000.0 - fVar5) * DAT_003560d0) / 2000.0 + DAT_003560cc;
        }
        plyr_wrk.charge_rate = fVar6 * 3.0;
        plyr_wrk.charge_deg = plyr_wrk.charge_deg + plyr_wrk.charge_rate;
      }
      else {
        plyr_wrk.charge_deg = 0.0;
        plyr_wrk.charge_num = plyr_wrk.charge_num + 1;
        if (plyr_wrk.charge_num < bVar4) {
          SeStartFix(0x12,0,0x1000,0x1000,0);
        }
        else {
          plyr_wrk.charge_rate = 4.5;
          SeStartFix(0x13,0,0x1000,0x1000,0);
        }
      }
    }
    else {
      plyr_wrk.charge_rate = 4.5;
    }
  }
  return;
}

void PhotoFlyChk() {
	FLY_WRK *fw;
	float tx;
	float ty;
	u_char i;
	
  uchar uVar1;
  int iVar2;
  byte bVar3;
  float *p1;
  FLY_WRK *pFVar4;
  float fVar5;
  float tx;
  float ty;
  
  bVar3 = 0;
  pFVar4 = fly_wrk;
  do {
    p1 = &(pFVar4->move_box).pos.y;
    if (((((pFVar4->sta & 1U) != 0) && ((pFVar4->sta & 8U) != 0)) &&
        (fVar5 = GetDistV(&plyr_wrk.move_box.spd.z,p1),
        fVar5 <= *(float *)(&photo_rng_tbl + (uint)plyr_wrk.cam_type * 4))) &&
       ((uVar1 = OutSightChk(p1,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003560d4,DAT_003560d8)
        , uVar1 == '\0' && (iVar2 = FrameInsideChk(p1,&tx,&ty), iVar2 != 0)))) {
      pFVar4->sta = pFVar4->sta | 2;
    }
    bVar3 = bVar3 + 1;
    pFVar4 = pFVar4 + 1;
  } while (bVar3 < 10);
  return;
}

int FrameInsideChk(float *tv, float *tx, float *ty) {
	float minx;
	float maxx;
	float miny;
	float maxy;
	int result;
	
  int iVar1;
  float fVar2;
  
  GetCamI2DPos(tv,tx,ty);
  fVar2 = *ty + *ty;
  *ty = fVar2;
  iVar1 = 0;
  if (((((float)(int)plyr_wrk.move_box.pos.z._0_2_ -
         (float)(uint)*(ushort *)(&photo_frame_tbl + (uint)plyr_wrk.cam_type * 4) * 0.5 <= *tx) &&
       (iVar1 = 0,
       *tx <= (float)(int)plyr_wrk.move_box.pos.z._0_2_ +
              (float)(uint)*(ushort *)(&photo_frame_tbl + (uint)plyr_wrk.cam_type * 4) * 0.5)) &&
      ((float)(int)plyr_wrk.move_box.pos.z._2_2_ -
       (float)(uint)*(ushort *)(&DAT_00341062 + (uint)plyr_wrk.cam_type * 4) * 0.5 <= fVar2)) &&
     (iVar1 = 0,
     fVar2 <= (float)(int)plyr_wrk.move_box.pos.z._2_2_ +
              (float)(uint)*(ushort *)(&DAT_00341062 + (uint)plyr_wrk.cam_type * 4) * 0.5)) {
    iVar1 = 1;
  }
  return iVar1;
}

int FrameInsideChkFurn(FURN_WRK *fw, float *degree, u_int fsta) {
	PP_JUDGE ppj;
	sceVu0FVECTOR fpc;
	int i;
	int pchk;
	int ret;
	float magnify;
	float tx;
	float ty;
	
  bool bVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  PP_JUDGE ppj;
  float fpc [4];
  float tx;
  float ty;
  float *local_b8;
  uint local_b4;
  
  iVar7 = 0;
  bVar1 = false;
  fVar8 = 0.0;
  uVar4 = (uint)(ushort)fw->id;
  iVar6 = 0;
  local_b8 = degree;
  if ((&DAT_0033773a)[(uint)(ushort)fw->id * 0x12] != '\0') {
    local_b4 = fsta;
    do {
      iVar5 = iVar6 * 0x10;
      fpc[0] = fw->pos[0] +
               *(float *)(iVar5 + *(int *)(&fpc_dat + (uint)(byte)(&DAT_0033773b)[uVar4 * 0x12] * 4)
                         );
      fpc[1] = fw->pos[1] +
               *(float *)(iVar5 + *(int *)(&fpc_dat + (uint)(byte)(&DAT_0033773b)[uVar4 * 0x12] * 4)
                         + 4);
      fpc[2] = fw->pos[2] +
               *(float *)(iVar5 + *(int *)(&fpc_dat +
                                          (uint)(byte)(&DAT_0033773b)[(uint)(ushort)fw->id * 0x12] *
                                          4) + 8);
      uVar2 = OutSightChk(fpc,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003560dc,DAT_003560e0);
      if (uVar2 == '\0') {
        iVar3 = FrameInsideChk(fpc,&tx,&ty);
        if (iVar3 != 0) {
          if ((local_b4 & 2) == 0) {
            ppj.num = '\x01';
            ppj.p[0][0] = fpc[0];
            ppj.p[0][1] = fpc[1];
            ppj.p[0][2] = fpc[2];
            ppj.p[0][3] = fpc[3];
            ppj.result[0] = '\0';
            CheckPointDepth(&ppj);
            if (ppj.result[0] != '\0') {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = (uint)(ushort)fw->id;
            iVar7 = 1;
            fVar8 = fVar8 + *(float *)(iVar5 + *(int *)(&fpc_dat +
                                                       (uint)(byte)(&DAT_0033773b)[uVar4 * 0x12] * 4
                                                       ) + 0xc);
            goto LAB_00208628;
          }
        }
        uVar4 = (uint)(ushort)fw->id;
      }
      else {
        uVar4 = (uint)(ushort)fw->id;
      }
LAB_00208628:
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)(byte)(&DAT_0033773a)[uVar4 * 0x12]);
  }
  *local_b8 = fVar8;
  return iVar7;
}

int FrameInsideChkRare(int wrk_no, float *degree) {
	int i;
	int rg_no;
	int ret;
	float magnify;
	float tx;
	float ty;
	sceVu0FVECTOR rpc;
	
  byte bVar1;
  byte bVar2;
  int iVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float rpc [4];
  float tx;
  float ty;
  float *local_b8;
  int ret;
  
  ret = 0;
  bVar1 = rg_dsp_wrk[wrk_no].rg_no;
  fVar10 = 0.0;
  local_b8 = degree;
  if (bVar1 < 0x80) {
    iVar8 = 0;
    if ((&DAT_00326283)[(uint)bVar1 * 0xe] != '\0') {
      do {
        iVar3 = (uint)bVar1 * 0xe;
        iVar7 = iVar8 * 0x10;
        bVar2 = (&DAT_00326282)[iVar3];
        rpc[0] = rg_dsp_wrk[wrk_no].pos[0] +
                 *(float *)(iVar7 + *(int *)(&rgc_dat + (uint)bVar2 * 4));
        rpc[1] = rg_dsp_wrk[wrk_no].pos[1] +
                 *(float *)(iVar7 + *(int *)(&rgc_dat + (uint)bVar2 * 4) + 4);
        rpc[2] = rg_dsp_wrk[wrk_no].pos[2] +
                 *(float *)(iVar7 + *(int *)(&rgc_dat + (uint)bVar2 * 4) + 8);
        uVar4 = OutSightChk(rpc,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003560e4,
                            (float)(uint)*(ushort *)(&DAT_0032622e + (uint)bVar1 * 0x12));
        if (((uVar4 == '\0') && (iVar5 = FrameInsideChk(rpc,&tx,&ty), iVar5 != 0)) &&
           (uVar6 = (uint)cam_custom_wrk.charge_range,
           fVar9 = GetDist((float)(int)plyr_wrk.move_box.pos.z._0_2_ - tx,
                           (float)(int)plyr_wrk.move_box.pos.z._2_2_ - ty),
           fVar9 <= *(float *)(&circle_radius_tbl + uVar6 * 4))) {
          ret = 1;
          fVar10 = fVar10 + *(float *)(iVar7 + *(int *)(&rgc_dat +
                                                       (uint)(byte)(&DAT_00326282)[iVar3] * 4) + 0xc
                                      );
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)(byte)(&DAT_00326283)[(uint)bVar1 * 0xe]);
    }
  }
  else {
    rpc[2] = rg_dsp_wrk[wrk_no].pos[2];
    rpc[0] = rg_dsp_wrk[wrk_no].pos[0];
    rpc[1] = rg_dsp_wrk[wrk_no].pos[1];
    uVar4 = OutSightChk(rpc,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003560e8,DAT_003560ec);
    if (((uVar4 == '\0') && (iVar8 = FrameInsideChk(rpc,&tx,&ty), iVar8 != 0)) &&
       (uVar6 = (uint)cam_custom_wrk.charge_range,
       fVar9 = GetDist((float)(int)plyr_wrk.move_box.pos.z._0_2_ - tx,
                       (float)(int)plyr_wrk.move_box.pos.z._2_2_ - ty),
       fVar9 <= *(float *)(&circle_radius_tbl + uVar6 * 4))) {
      fVar10 = 1.0;
      ret = 1;
    }
  }
  *local_b8 = fVar10;
  return ret;
}

u_short PhotoDmgChk() {
	ENE_WRK *ew;
	u_short dmg;
	
  short sVar1;
  short sVar2;
  ENE_WRK *pEVar3;
  ENE_WRK *ew;
  
  plyr_wrk.sta = plyr_wrk.sta & 0xfffffeff;
  ew = ene_wrk;
  sVar2 = 0;
  pEVar3 = ew;
  do {
    if ((ew->sta & 0x400) != 0) {
      if (ew->type == 2) {
        pEVar3->sta = pEVar3->sta | 0x80800;
      }
      else {
        sVar1 = PhotoDmgChkSub(ew);
        sVar2 = sVar2 + sVar1;
      }
    }
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    ew = (ENE_WRK *)((int)&ew[1].move_box.spd.z + 2);
  } while ((int)pEVar3 < 0x253f50);
  if (sVar2 != 0) {
    point_get_end = '\0';
  }
  return sVar2;
}

u_short PhotoDmgChkSub(ENE_WRK *ew) {
	u_int i;
	u_char film_up_tbl[5];
	
  uchar *puVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uchar film_up_tbl [5];
  
  uVar4 = ew->sta;
  puVar1 = film_up_tbl + 3;
  uVar5 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar5) =
       *(uint *)(puVar1 + -uVar5) & -1 << (uVar5 + 1) * 8 | DAT_00357290 >> (3 - uVar5) * 8;
  film_up_tbl._0_4_ = DAT_00357290;
  film_up_tbl[4] = DAT_00357294;
  uVar5 = (uint)plyr_wrk.charge_num;
  if ((uVar4 & 0x20000) != 0) {
    uVar5 = plyr_wrk.charge_num + 3;
  }
  if ((uVar4 & 0x100) != 0) {
    uVar5 = uVar5 + 2;
  }
  uVar5 = uVar5 + film_up_tbl[plyr_wrk.film_no];
  if (0x15 < uVar5) {
    uVar5 = 0x15;
  }
  uVar3 = *(ushort *)(&photo_dmg_tbl + uVar5 * 2);
  ew->dmg = uVar3;
  if ((ushort)ew->hp <= uVar3) {
    plyr_wrk.sta = plyr_wrk.sta | 0x100;
    if ((ushort)ingame_wrk.ghost_cnt < 50000) {
      ingame_wrk.ghost_cnt = ingame_wrk.ghost_cnt + 1;
    }
  }
  puVar6 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
  *puVar6 = *puVar6 & 0xfffff7ff;
  if ((ew->sta & 0x20000) == 0) {
    ew[1].move_box.pos_no = '\0';
  }
  else {
    puVar6 = (uint *)((int)ene_wrk + (uint)*(byte *)((int)&(ew->move_box).pos.x + 3) * 0x430);
    bVar2 = (&charge_max_tbl)[cam_custom_wrk.charge_max] == plyr_wrk.charge_num;
    *puVar6 = *puVar6 | 0x800;
    if (bVar2) {
      ew[1].move_box.pos_no = '\x03';
    }
    else {
      ew[1].move_box.pos_no = '\x02';
    }
  }
  return ew->dmg;
}

void PhotoPointSet() {
  InitPhotoWrk();
  PhotoPointChkEne();
  PhotoPointChkFurn();
  PhotoPointChkRare();
  photo_wrk.room = (ushort)plyr_wrk.dop._13_1_;
  return;
}

void PhotoPointChkEne() {
	u_char i;
	u_char cnt;
	
  byte bVar1;
  int iVar2;
  ENE_WRK *ew;
  uint uVar3;
  
  bVar1 = 0;
  uVar3 = 0;
  iVar2 = 0;
  do {
    ew = (ENE_WRK *)((int)&ene_wrk[0].sta + iVar2);
    if ((ew->sta & 0x400) != 0) {
      PhotoPointCulcEne(ew,&photo_wrk);
      bVar1 = bVar1 + 1;
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = uVar3 * 0x430;
  } while (uVar3 < 4);
  if (bVar1 < 3) {
    if (1 < bVar1) {
      photo_wrk.bonus_sta = photo_wrk.bonus_sta | 8;
    }
  }
  else {
    photo_wrk.bonus_sta = photo_wrk.bonus_sta | 0x10;
  }
  return;
}

void PhotoPointChkFurn() {
	PHOTO_WRK *pw;
	FURN_WRK *fw;
	sceVu0FVECTOR tv;
	u_int sta;
	u_int i;
	float dist;
	float degree;
	
  int iVar1;
  uint uVar2;
  FURN_WRK *fw;
  float fVar3;
  float tv [4];
  uint sta;
  float degree;
  
  if (plyr_wrk.fh_no != -1) {
    uVar2 = (uint)(ushort)plyr_wrk.fh_no;
    fVar3 = GetDistV(furn_wrk[uVar2].pos,&plyr_wrk.move_box.spd.z);
    sta = GetFurnAttrF(furn_wrk + uVar2,ingame_wrk.msn_no);
    PhotoPointCulcFurn(furn_wrk + uVar2,&photo_wrk,fVar3,plyr_wrk.fh_deg,sta);
  }
  fw = furn_wrk;
  uVar2 = 0;
  do {
    iVar1 = GetFurnHintPos(fw,tv,&sta);
    if (((iVar1 == 0) && (sta = GetFurnAttrF(fw,ingame_wrk.msn_no), (sta & 0x80) != 0)) &&
       (((ushort)fw->furn_no < 1000 || (fw->furn_no == 0xffff)))) {
      fVar3 = GetDistV(fw->pos,&plyr_wrk.move_box.spd.z);
      iVar1 = (uint)(ushort)fw->id * 0x12;
      if ((((float)(uint)*(ushort *)(&DAT_00337732 + iVar1) <= fVar3) &&
          (fVar3 <= (float)(uint)*(ushort *)(&DAT_00337734 + iVar1))) &&
         (iVar1 = FrameInsideChkFurn(fw,&degree,sta), iVar1 != 0)) {
        PhotoPointCulcFurn(fw,&photo_wrk,fVar3,degree,sta);
      }
    }
    uVar2 = uVar2 + 1;
    fw = fw + 1;
  } while (uVar2 < 0x3c);
  return;
}

void PhotoPointChkRare() {
	u_int i;
	float degree;
	
  int iVar1;
  uint wrk_no;
  RGOST_DSP_WRK *pRVar2;
  float dist;
  float degree;
  
  pRVar2 = rg_dsp_wrk;
  wrk_no = 0;
  do {
    if ((pRVar2->mode != '\0') && (99 < pRVar2->alpha)) {
      iVar1 = FrameInsideChkRare(wrk_no,&degree);
      if (iVar1 != 0) {
        dist = GetDistV(pRVar2->pos,&plyr_wrk.move_box.spd.z);
        PhotoPointCulcRare((uchar)wrk_no,&photo_wrk,dist,degree);
        RareGhostDispEndSet(wrk_no);
      }
    }
    wrk_no = wrk_no + 1;
    pRVar2 = pRVar2 + 1;
  } while (wrk_no < 3);
  return;
}

void PhotoPointCulcEne(ENE_WRK *ew, PHOTO_WRK *pw) {
	SUBJECT_WRK *sw;
	int i;
	int point;
	float point_plus;
	float ratio;
	float ratio_tmp;
	float dist;
	
  byte bVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  SUBJECT_WRK *pSVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  SUBJECT_WRK *pSVar10;
  SUBJECT_WRK *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pSVar11 = pw->ene;
  if (pw->ene[0].no == -1) {
    bVar4 = true;
  }
  else {
    iVar9 = 1;
    pSVar10 = pSVar11;
    do {
      bVar4 = iVar9 < 4;
      pSVar11 = pSVar10 + 1;
      if (!bVar4) {
        return;
      }
      pSVar5 = pSVar10 + 1;
      iVar9 = iVar9 + 1;
      pSVar10 = pSVar11;
    } while (pSVar5->no != -1);
  }
  if (!bVar4) {
    return;
  }
  if (1 < ew->type) {
    if (ew->type != 2) {
      return;
    }
    fVar12 = *(float *)((int)&ew->bcomm_add + 4);
    fVar15 = *(float *)&ew->bcomm_add_top;
    pSVar11->point = (uint)*(ushort *)((int)(ew->mpos).p0[3] + 0x2c);
    iVar9 = (int)(fVar12 / 500.0);
    if (9 < iVar9) {
      iVar9 = 9;
    }
    iVar16 = (int)(fVar15 / 10.0);
    if (10 < iVar16) {
      iVar16 = 10;
    }
    pSVar11->ratio =
         *(float *)(&photo_dist_ratio + iVar9 * 4) * *(float *)(&photo_center_ratio + iVar16 * 4);
    pSVar11->no = (ushort)ew->dat_no;
    pSVar11->type = (ushort)ew->type;
    return;
  }
  pSVar11->dmg = ew->dmg;
  if ((*(ulong *)ew & 0x80000800) == 0x80000000) {
    pw->falth = 1;
    fVar12 = (ew->mpos).p0[3];
  }
  else {
    fVar12 = (ew->mpos).p0[3];
  }
  fVar15 = DAT_003560f0;
  fVar13 = *(float *)((int)&ew->bcomm_add + 4);
  fVar19 = 0.0;
  uVar8 = (uint)plyr_wrk.charge_num;
  if (cam_custom_wrk.set_spe == '\x04') {
    uVar8 = plyr_wrk.charge_num + 3;
  }
  if (fVar13 <= (float)(uint)*(ushort *)((int)fVar12 + 0xe)) {
    uVar8 = uVar8 + 1;
    pw->bonus_sta = pw->bonus_sta | 2;
  }
  else {
    fVar13 = fVar13 - (float)(uint)*(ushort *)((int)fVar12 + 0xe);
    if (fVar13 <= 1000.0) {
      fVar15 = ((1000.0 - fVar13) / 1000.0) * DAT_003560f4 + 1.0;
    }
    else {
      if (2000.0 < fVar13) {
        fVar13 = 2000.0;
      }
      fVar15 = ((2000.0 - fVar13) / 1000.0) * 0.5 + 0.5;
    }
  }
  fVar13 = DAT_003560f8;
  fVar14 = *(float *)&ew->bcomm_add_top;
  fVar18 = 10.0;
  if (fVar14 <= 10.0) {
    uVar8 = uVar8 + 1;
    pw->bonus_sta = pw->bonus_sta | 4;
  }
  else {
    fVar6 = 20.0;
    fVar13 = DAT_003560fc;
    fVar17 = DAT_00356100;
    if (fVar14 < 20.0) {
code_r0x002091d0:
      fVar13 = ((fVar6 - fVar14) / fVar18) * fVar13;
    }
    else {
      fVar18 = 40.0;
      if (40.0 <= fVar14) {
        fVar6 = 80.0;
        if (80.0 <= fVar14) {
          if (100.0 < fVar14) {
            fVar14 = 100.0;
          }
          fVar13 = ((100.0 - fVar14) / 40.0) * 0.5 + 0.5;
          goto LAB_00209218;
        }
        fVar13 = DAT_00356108;
        fVar17 = 1.0;
        goto code_r0x002091d0;
      }
      fVar13 = ((40.0 - fVar14) / 20.0) * 0.5;
      fVar17 = DAT_00356104;
    }
    fVar13 = fVar13 + fVar17;
  }
LAB_00209218:
  fVar13 = fVar15 * 1.0 * fVar13;
  if (plyr_wrk.charge_num < (byte)(&charge_max_tbl)[cam_custom_wrk.charge_max]) {
    uVar7 = ew->sta;
  }
  else {
    uVar2 = pw->bonus_sta;
    uVar7 = ew->sta;
    fVar18 = *(float *)(&photo_charge_ratio + (uint)cam_custom_wrk.charge_max * 4);
    uVar8 = uVar8 + 2;
    pw->bonus_sta = uVar2 | 0x40;
    fVar15 = DAT_0035610c;
    fVar13 = fVar13 * fVar18;
    if ((uVar7 & 0x800) != 0) {
      pw->bonus_sta = uVar2 | 0x60;
      fVar13 = fVar13 * fVar15;
    }
  }
  fVar15 = DAT_00356118;
  bVar1 = *(byte *)&ew->nee;
  if (bVar1 < 10) {
    fVar13 = fVar13 * 0.5;
  }
  else {
    if (bVar1 < 0x28) {
      uVar2 = ew->dmg;
      goto LAB_002092d4;
    }
    if (bVar1 < 0x3c) {
      fVar13 = fVar13 * DAT_00356114;
    }
    else {
      fVar13 = fVar13 * DAT_00356110;
    }
  }
  uVar2 = ew->dmg;
LAB_002092d4:
  fVar18 = DAT_00356124;
  if ((ushort)ew->hp <= uVar2) {
    fVar18 = DAT_0035611c;
    if ((pw->bonus_sta & 0x20U) != 0) {
      pw->bonus_sta = pw->bonus_sta | 0x80;
      fVar18 = fVar15;
    }
    fVar19 = (float)((uint)(ushort)ew->dmg - (uint)(ushort)ew->hp) * DAT_00356120;
  }
  fVar13 = fVar13 * fVar18;
  if (*(short *)&ew[1].move_box.tpos.w == 0) {
    bVar1 = ew->act_no;
  }
  else {
    pw->bonus_sta = pw->bonus_sta | 0x400;
    bVar1 = ew->act_no;
  }
  if (bVar1 == 10) {
    fVar13 = fVar13 * DAT_00356128;
    pw->bonus_sta = pw->bonus_sta | 0x100;
    sVar3 = *(short *)((int)&ew[1].move_box.tpos.z + 2);
  }
  else {
    sVar3 = *(short *)((int)&ew[1].move_box.tpos.z + 2);
  }
  if (sVar3 == 0) {
    sVar3 = *(short *)((int)&ew[1].move_box.tpos.w + 2);
  }
  else {
    fVar13 = fVar13 * DAT_0035612c;
    pw->bonus_sta = pw->bonus_sta | 0x200;
    sVar3 = *(short *)((int)&ew[1].move_box.tpos.w + 2);
  }
  if (sVar3 == 0) {
    pSVar11->ratio = fVar13;
  }
  else {
    fVar13 = fVar13 * DAT_00356130;
    pw->bonus_sta = pw->bonus_sta | 0x800;
    pSVar11->ratio = fVar13;
  }
  if ((uVar7 & 0x800) != 0) {
    uVar8 = uVar8 + 4;
  }
  iVar9 = 0xc;
  if (ew->type == 0) {
    iVar9 = 0x19;
  }
  uVar2 = ew->dmg;
  iVar9 = uVar8 * iVar9 + (int)fVar19;
  pSVar11->point = iVar9;
  if ((int)((float)iVar9 * pSVar11->ratio) < (int)(uint)uVar2) {
    pSVar11->point = (uint)uVar2;
    pSVar11->ratio = 1.0;
    bVar1 = ew->dat_no;
  }
  else {
    bVar1 = ew->dat_no;
  }
  pSVar11->no = (ushort)bVar1;
  pSVar11->type = (ushort)ew->type;
  pSVar11->wrk_no = (ushort)*(byte *)((int)&(ew->move_box).pos.x + 3);
  if (((pw->ene_dead == 0xff) && (ew->type == 0)) && (*(byte *)((int)fVar12 + 0x2e) != 0xff)) {
    if ((ushort)ew->dmg < (ushort)ew->hp) {
      return;
    }
    if (ingame_wrk.game != 1) {
      pw->ene_dead = *(byte *)((int)fVar12 + 0x2e);
      return;
    }
  }
  return;
}

void PhotoPointCulcFurn(FURN_WRK *fw, PHOTO_WRK *pw, float dist, float degree, u_int stts) {
	SUBJECT_WRK *sw;
	int i;
	
  ushort uVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  SUBJECT_WRK *pSVar6;
  SUBJECT_WRK *pSVar7;
  SUBJECT_WRK *pSVar8;
  int iVar9;
  
  pSVar6 = pw->furn;
  iVar9 = 0;
  if (pw->furn[0].no == -1) {
    bVar2 = true;
    pSVar8 = pSVar6;
LAB_0020957c:
    if ((bVar2) && ((stts & 8) == 0)) {
      if ((stts & 0x40) == 0) {
        if ((stts & 0x20) != 0) {
          if ((float)(uint)(ushort)photo_wrk.dist_2d < dist) {
            return;
          }
          pw->furn[(ushort)photo_wrk.no_2d].no = -1;
          pw->furn[(ushort)photo_wrk.no_2d].type = 0;
          sVar3 = photo_wrk.no_2d;
          pw->no_2d = (short)iVar9;
          pw->dist_2d = (short)(int)dist;
          pSVar8->type = 0x20;
          pSVar6[(ushort)sVar3].score = 0;
        }
      }
      else {
        pSVar8->type = 0x40;
      }
      uVar1 = *(ushort *)(&DAT_00337736 + (uint)(ushort)fw->id * 0x12);
      pSVar8->no = fw->id;
      uVar4 = (int)(dist / 400.0) & 0xff;
      pSVar8->point = (uint)uVar1;
      uVar5 = 9;
      if (uVar4 < 10) {
        uVar5 = uVar4;
      }
      pSVar8->ratio = *(float *)(&photo_dist_ratio + uVar5 * 4) * degree;
    }
  }
  else {
    iVar9 = 1;
    pSVar7 = pSVar6;
    while( true ) {
      bVar2 = iVar9 < 5;
      pSVar8 = pSVar7 + 1;
      if (!bVar2) break;
      if (pSVar7[1].no == -1) goto LAB_0020957c;
      iVar9 = iVar9 + 1;
      pSVar7 = pSVar8;
    }
  }
  return;
}

void PhotoPointCulcRare(u_char wrk_no, PHOTO_WRK *pw, float dist, float degree) {
	SUBJECT_WRK *sw;
	int i;
	int rg_no;
	u_char para0;
	
  byte bVar1;
  bool bVar2;
  bool bVar3;
  SUBJECT_WRK *pSVar4;
  PGOST_DAT_0_ *pPVar5;
  int iVar6;
  SUBJECT_WRK *pSVar7;
  SUBJECT_WRK *pSVar8;
  uint uVar9;
  
  pSVar8 = pw->rare;
  bVar1 = rg_dsp_wrk[(int)(char)wrk_no & 0xffU].rg_no;
  if (pw->rare[0].no == -1) {
    bVar2 = true;
  }
  else {
    iVar6 = 1;
    pSVar7 = pSVar8;
    do {
      bVar2 = iVar6 < 3;
      pSVar8 = pSVar7 + 1;
      if (!bVar2) {
        return;
      }
      pSVar4 = pSVar7 + 1;
      iVar6 = iVar6 + 1;
      pSVar7 = pSVar8;
    } while (pSVar4->no != -1);
  }
  bVar3 = 0x7f < bVar1;
  if (bVar2) {
    if (bVar3) {
      iVar6 = (bVar1 - 0x80) * 10;
      pPVar5 = &pg_dat;
    }
    else {
      iVar6 = (uint)bVar1 * 0xe;
      pPVar5 = &rg_dat;
    }
    pSVar8->point = (uint)*(ushort *)(pPVar5 + iVar6);
    if (bVar3) {
      pSVar8->ratio = 1.0;
    }
    else {
      pSVar8->ratio = (float)(uint)rg_dsp_wrk[(int)(char)wrk_no & 0xffU].alpha / 100.0;
    }
    if (bVar3) {
      pSVar8->no = (ushort)bVar1;
    }
    else {
      uVar9 = 0;
      if (500.0 < dist) {
        uVar9 = (int)((dist - 500.0) / 400.0) & 0xff;
      }
      if (9 < uVar9) {
        uVar9 = 9;
      }
      pSVar8->ratio = pSVar8->ratio + *(float *)(&photo_dist_ratio + uVar9 * 4);
      pSVar8->no = (ushort)bVar1;
    }
  }
  return;
}

void PlyrMpRecoverChk(u_int recov) {
  return;
}

void PlyrFModeMoveCtrl() {
	MOVE_BOX *mb;
	sceVu0FVECTOR tv;
	
  float tv [4];
  
  memset(tv,0,0x10);
  plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
  if ((plyr_wrk.cond != 1) && (8 < plyr_wrk.move_mot - 1)) {
    if (dbg_wrk.mode_on == 0) {
      PlyrMovePadFind((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    }
    PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\x01');
    PlyrPosSet((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
  }
  return;
}

void PlyrActionChk() {
  if (*key_now[5] == 1) {
    DoorCheckOn('\0');
    return;
  }
  return;
}

void PlyrNModeMoveCtrl() {
	sceVu0FVECTOR tv;
	MOVE_BOX *mb;
	
  uchar uVar1;
  float tv [4];
  
  if (plyr_wrk.cond != 1) {
    if (plyr_wrk.cond == 2) {
      PlyrKonwakuMove((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    }
    else if ((((opt_wrk.key_type == '\x01') || (opt_wrk.key_type == '\x03')) ||
             (opt_wrk.key_type == '\x05')) || (opt_wrk.key_type == '\a')) {
      PlyrMovePadV((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    }
    else {
      PlyrMovePad((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    }
    uVar1 = PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\0');
    if (uVar1 != '\0') {
      PlyrHitTurnChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    }
    PlyrPosSet((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
    if (dbg_wrk.high_speed_mode == 0) {
      PlyrSpecialMoveChk(tv);
    }
  }
  return;
}

void PlyrHitTurnChk(MOVE_BOX *mb, float *tv) {
	float rot;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float rot;
  
  if (((((opt_wrk.key_type != '\x01') && (opt_wrk.key_type != '\x03')) &&
       (opt_wrk.key_type != '\x05')) && (opt_wrk.key_type != '\a')) &&
     ((((*tv != 0.0 || (tv[1] != 0.0)) || (tv[2] != 0.0)) && ((plyr_wrk.mvsta & 0x3000000) == 0))))
  {
    fVar1 = SgAtan2f(*tv,tv[2]);
    rot = fVar1 - plyr_wrk.move_box.trot.w;
    RotLimitChk(&rot);
    if ((rot != 0.0) && (ABS(rot) <= DAT_00356134)) {
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xff7fffff | 0x2000000;
      if (0.0 < rot) {
        (mb->rspd).z = DAT_00356138;
      }
      else {
        (mb->rspd).z = DAT_0035613c;
      }
      fVar1 = (mb->rspd).z;
      fVar3 = (mb->rot).z;
      fVar2 = ABS(rot) / DAT_00356140;
      mb->loop = (short)(int)fVar2;
      (mb->rot).z = fVar3 + (rot - fVar1 * (float)((int)fVar2 & 0xffff));
      RotLimitChk(&(mb->rot).z);
    }
  }
  return;
}

u_char PlyrSpecialMoveChk2(float *mv) {
	sceVu0FVECTOR rv;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR cv;
	sceVu0FVECTOR bv;
	u_char i;
	u_char clr;
	
  uchar uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float rv [4];
  float tv [4];
  float cv [4];
  float bv [4];
  
  fVar4 = -300.0;
  bv[1] = 0.0;
  bv[2] = 0.0;
  bv[3] = 0.0;
  if (0.0 < *mv) {
    fVar4 = 300.0;
  }
  bVar2 = 0;
  tv[3] = 0.0;
  iVar3 = 0xff;
  bv[0] = fVar4 / 60.0;
  tv[0] = 0.0;
  tv[1] = 0.0;
  tv[2] = 0.0;
  do {
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)bv);
    sceVu0AddVector((Vector4 *)cv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
    uVar1 = GetPointMoveMotion((float *)(Vector4 *)cv,plyr_wrk.dop._13_1_);
    switch(uVar1) {
    case '\x01':
    case '\x03':
    case '\x05':
    case '\a':
    case '\f':
    case '\r':
      iVar3 = 2;
      break;
    case '\x02':
    case '\x04':
    case '\x06':
    case '\b':
    case '\t':
      iVar3 = 0;
    }
    if (iVar3 != 0xff) goto LAB_00209cfc;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 0x3c);
  bv[0] = 0.0;
  fVar4 = -300.0;
  bv[1] = 0.0;
  bv[3] = 0.0;
  if (0.0 < mv[2]) {
    fVar4 = 300.0;
  }
  bVar2 = 0;
  tv[3] = 0.0;
  bv[2] = fVar4 / 60.0;
  tv[0] = 0.0;
  tv[1] = 0.0;
  tv[2] = 0.0;
  while( true ) {
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)bv);
    sceVu0AddVector((Vector4 *)cv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
    uVar1 = GetPointMoveMotion((float *)(Vector4 *)cv,plyr_wrk.dop._13_1_);
    switch(uVar1) {
    case '\x01':
    case '\x03':
    case '\x05':
    case '\a':
    case '\f':
    case '\r':
      iVar3 = 2;
      break;
    case '\x02':
    case '\x04':
    case '\x06':
    case '\b':
    case '\t':
      iVar3 = 0;
    }
    if (iVar3 != 0xff) break;
    bVar2 = bVar2 + 1;
    if (0x3b < bVar2) {
      return '\0';
    }
  }
LAB_00209cfc:
  mv[iVar3] = 0.0;
  return '\x01';
}

void PlyrSpecialMoveChk(float *mv) {
	sceVu0FVECTOR tv;
	sceVu0FVECTOR cv;
	sceVu0FVECTOR rv;
	float rot;
	float adj;
	u_char move_mot;
	u_char up;
	float lstep_adju;
	float sstep_adju;
	float sstep_adjd;
	float nlad0_adju[2];
	float nlad0_adjd[2];
	float rlad0_adju[2];
	float rlad0_adjd[2];
	float rlad1_adju[2];
	float rlad1_adjd[2];
	
  ulong *puVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float tv [4];
  float cv [4];
  float rv [4];
  float nlad0_adju [2];
  float nlad0_adjd [2];
  float rlad0_adju [2];
  float rlad0_adjd [2];
  float rlad1_adju [2];
  float rlad1_adjd [2];
  float rot;
  
  uVar4 = (int)nlad0_adju + 7U & 7;
  puVar1 = (ulong *)(((int)nlad0_adju + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_00357298 >> (7 - uVar4) * 8;
  nlad0_adju = DAT_00357298;
  uVar4 = (int)nlad0_adjd + 7U & 7;
  puVar1 = (ulong *)(((int)nlad0_adjd + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003572a0 >> (7 - uVar4) * 8;
  nlad0_adjd = DAT_003572a0;
  uVar4 = (int)rlad0_adju + 7U & 7;
  puVar1 = (ulong *)(((int)rlad0_adju + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003572a8 >> (7 - uVar4) * 8;
  rlad0_adju = DAT_003572a8;
  uVar4 = (int)rlad0_adjd + 7U & 7;
  puVar1 = (ulong *)(((int)rlad0_adjd + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003572b0 >> (7 - uVar4) * 8;
  rlad0_adjd = DAT_003572b0;
  uVar4 = (int)rlad1_adju + 7U & 7;
  puVar1 = (ulong *)(((int)rlad1_adju + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003572b8 >> (7 - uVar4) * 8;
  rlad1_adju = DAT_003572b8;
  cv[2] = 100.0;
  fVar6 = 60.0;
  uVar4 = (int)rlad1_adjd + 7U & 7;
  puVar1 = (ulong *)(((int)rlad1_adjd + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003572c0 >> (7 - uVar4) * 8;
  rlad1_adjd = DAT_003572c0;
  if ((plyr_wrk.mvsta & 0x200000) != 0) {
    return;
  }
  uVar4 = plyr_wrk.mvsta & 0xf;
  plyr_wrk.mvsta = plyr_wrk.mvsta & 0xffe8000f;
  if (uVar4 == 0) {
    if (plyr_wrk.move_mot != '\v') {
      return;
    }
    plyr_wrk.mvsta = plyr_wrk.mvsta | 0x40000;
    return;
  }
  uVar4 = (uint)plyr_wrk.move_mot;
  if (plyr_wrk.move_mot == '\0') {
    tv[0] = 0.0;
    tv[1] = 0.0;
    tv[2] = 100.0;
    tv[3] = 0.0;
    RotFvector(&plyr_wrk.move_box.trot.z,tv);
    sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
    uVar3 = GetPointMoveMotion(tv,plyr_wrk.dop._13_1_);
    uVar4 = (uint)(char)uVar3;
    if ((byte)(uVar3 - 0xc) < 2) {
      uVar4 = (uint)plyr_wrk.move_mot;
    }
  }
  uVar5 = uVar4 - 1;
  switch(uVar5) {
  case 0:
  case 1:
  case 2:
  case 3:
    tv[2] = 200.0;
    tv[0] = 0.0;
    tv[1] = 0.0;
    tv[3] = 0.0;
    rv[0] = 0.0;
    rv[1] = 0.0;
    rv[2] = 0.0;
    rv[3] = 0.0;
    if ((step_direction & 1) == 0) {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03');
      rv[1] = (float)(int)(char)uVar3 * DAT_0035614c;
    }
    else {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03');
      rv[1] = (float)(int)(char)uVar3 * DAT_00356144 + DAT_00356148;
    }
    RotLimitChk(rv + 1);
    RotFvector(rv,tv);
    uVar3 = PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\0');
    if (uVar3 == '\0') {
      step_direction = (byte)uVar5 & 3;
      rot = (float)(uVar5 & 3) * DAT_00356150 * 0.5 - plyr_wrk.move_box.trot.w;
      RotLimitChk(&rot);
      if (ABS(rot) <= DAT_00356154) {
        if ((plyr_wrk.mvsta & 1) == 0) {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x10;
        }
        else {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x100;
        }
      }
      else {
        step_direction = step_direction + 2 & 3;
        if ((plyr_wrk.mvsta & 1) == 0) {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x20;
        }
        else {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x200;
        }
      }
      if ((plyr_wrk.mvsta & 0xfff0) == 0) {
        return;
      }
      plyr_wrk.move_box.trot.w = (float)(uint)step_direction * DAT_00356158 * 0.5;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
      if (plyr_wrk.move_mot != '\0') {
        return;
      }
      fVar6 = 1.0;
      while( true ) {
        tv[0] = 0.0;
        tv[1] = 0.0;
        tv[3] = 0.0;
        tv[2] = fVar6;
        RotFvector(&plyr_wrk.move_box.trot.z,tv);
        sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
        uVar3 = GetPointMoveMotion(tv,plyr_wrk.dop._13_1_);
        if (uVar3 != '\0') break;
        fVar6 = fVar6 + 1.0;
      }
      cv[0] = 0.0;
      cv[1] = 0.0;
      cv[3] = 0.0;
      rv[1] = plyr_wrk.move_box.trot.w + DAT_0035615c;
      rv[0] = plyr_wrk.move_box.trot.z;
      rv[2] = plyr_wrk.move_box.pos_mid.x;
      rv[3] = plyr_wrk.move_box.pos_mid.y;
      RotLimitChk(rv + 1);
      RotFvector(rv,(float *)(Vector4 *)cv);
      sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)cv);
      plyr_wrk.move_box.spd.z = tv[0];
      plyr_wrk.move_box.spd.w = tv[1];
      plyr_wrk.move_box.rot.x = tv[2];
      plyr_wrk.move_box.rot.y = tv[3];
      return;
    }
    uVar4 = 0x100000;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    step_direction = (byte)(uVar4 - 5) & 3;
    tv[0] = 0.0;
    tv[2] = 125.0;
    tv[1] = 0.0;
    tv[3] = 0.0;
    rv[0] = 0.0;
    rv[1] = 0.0;
    rv[2] = 0.0;
    rv[3] = 0.0;
    if ((uVar4 - 5 & 1) == 0) {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03');
      rv[1] = (float)(int)(char)uVar3 * DAT_00356168;
    }
    else {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03');
      rv[1] = (float)(int)(char)uVar3 * DAT_00356160 + DAT_00356164;
    }
    RotLimitChk(rv + 1);
    RotFvector(rv,tv);
    uVar3 = PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\0');
    if (uVar3 == '\0') {
      bVar2 = false;
      rot = (float)(uint)step_direction * DAT_0035616c * 0.5 - plyr_wrk.move_box.trot.w;
      RotLimitChk(&rot);
      if (ABS(rot) <= DAT_00356170) {
        bVar2 = true;
        if ((plyr_wrk.mvsta & 1) == 0) {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x40;
        }
        else {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x400;
        }
      }
      else {
        step_direction = step_direction + 2 & 3;
        if ((plyr_wrk.mvsta & 1) == 0) {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x80;
        }
        else {
          plyr_wrk.mvsta = plyr_wrk.mvsta | 0x800;
        }
      }
      if ((plyr_wrk.mvsta & 0xfff0) == 0) {
        return;
      }
      plyr_wrk.move_box.trot.w = (float)(uint)step_direction * DAT_00356174 * 0.5;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
      if (plyr_wrk.move_mot != '\0') {
        return;
      }
      fVar7 = 1.0;
      while( true ) {
        tv[0] = 0.0;
        tv[1] = 0.0;
        tv[3] = 0.0;
        tv[2] = fVar7;
        RotFvector(&plyr_wrk.move_box.trot.z,tv);
        sceVu0AddVector((Vector4 *)tv,(Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
        uVar3 = GetPointMoveMotion(tv,plyr_wrk.dop._13_1_);
        if (uVar3 != '\0') break;
        fVar7 = fVar7 + 1.0;
      }
      cv[2] = fVar6;
      if (!bVar2) {
        cv[2] = 85.0;
      }
      cv[0] = 0.0;
      cv[1] = 0.0;
      cv[3] = 0.0;
      rv[1] = (float)(step_direction + 2 & 3) * DAT_00356178 * 0.5;
      RotLimitChk(rv + 1);
      RotFvector(rv,(float *)(Vector4 *)cv);
      sceVu0AddVector((Vector4 *)tv,(Vector4 *)tv,(Vector4 *)cv);
      plyr_wrk.move_box.spd.z = tv[0];
      plyr_wrk.move_box.spd.w = tv[1];
      plyr_wrk.move_box.rot.x = tv[2];
      plyr_wrk.move_box.rot.y = tv[3];
      return;
    }
    uVar4 = 0x100000;
    break;
  case 8:
    if ((plyr_wrk.anime_no == 'c') ||
       (uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03'), uVar3 == '\x01')) {
      if (((*mv != 0.0) || ((mv[1] != 0.0 || (mv[2] != 0.0)))) &&
         ((plyr_wrk.mvsta & 0x1000000) == 0)) {
        plyr_wrk.move_box.spd.z = nlad0_adjd[0];
        plyr_wrk.move_box.rot.x = nlad0_adjd[1];
        plyr_wrk.mvsta = plyr_wrk.mvsta | 0x2000;
        step_direction = '\x01';
      }
    }
    else {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x03');
      if (uVar3 == '\0') {
        plyr_wrk.move_box.spd.z = nlad0_adju[0];
        plyr_wrk.move_box.rot.x = nlad0_adju[1];
        plyr_wrk.mvsta = plyr_wrk.mvsta | 0x1000;
        step_direction = '\x01';
      }
    }
    goto LAB_0020a64c;
  case 9:
    uVar4 = 0x10000;
    break;
  case 10:
    uVar4 = 0x20000;
    break;
  case 0xb:
    uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x02');
    if ((uVar3 == '\x01') && (plyr_wrk.move_box.spd.w == 0.0)) {
      plyr_wrk.mvsta = plyr_wrk.mvsta | 0x8000;
      rlad1_adju[0] = rlad0_adjd[0];
      rlad1_adju[1] = rlad0_adjd[1];
    }
    else {
      uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x02');
      if ((uVar3 != '\0') || (plyr_wrk.move_box.spd.w != DAT_0035617c)) goto LAB_0020a64c;
      rlad1_adju[0] = rlad0_adju[0];
      rlad1_adju[1] = rlad0_adju[1];
LAB_0020a634:
      plyr_wrk.mvsta = plyr_wrk.mvsta | 0x4000;
    }
LAB_0020a638:
    step_direction = '\0';
    plyr_wrk.move_box.spd.z = rlad1_adju[0];
    plyr_wrk.move_box.rot.x = rlad1_adju[1];
    goto LAB_0020a64c;
  case 0xc:
    uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x02');
    if ((uVar3 == '\x01') && (plyr_wrk.move_box.spd.w == DAT_00356180)) {
      plyr_wrk.mvsta = plyr_wrk.mvsta | 0x8000;
      rlad1_adju[0] = rlad1_adjd[0];
      rlad1_adju[1] = rlad1_adjd[1];
      goto LAB_0020a638;
    }
    uVar3 = ConvertRot2Dir(plyr_wrk.move_box.trot.w,'\x02');
    if ((uVar3 == '\0') && (plyr_wrk.move_box.spd.w == DAT_00356184)) {
      goto LAB_0020a634;
    }
LAB_0020a64c:
    if ((plyr_wrk.mvsta & 0xfff0) != 0) {
      plyr_wrk.move_box.trot.w = (float)(uint)step_direction * DAT_00356188 * 0.5;
      RotLimitChk(&plyr_wrk.move_box.trot.w);
    }
  default:
    goto switchD_00209ef0_caseD_d;
  }
  plyr_wrk.mvsta = plyr_wrk.mvsta | uVar4;
switchD_00209ef0_caseD_d:
  return;
}

void PlyrPosSet(MOVE_BOX *mb, float *tv) {
  float *pfVar1;
  
  if (plyr_wrk.dop._14_1_ != plyr_wrk.dop._13_1_) {
    _DAT_00252e70 = plyr_wrk.rock_adj.z;
    _DAT_00252e74 = plyr_wrk.rock_adj.w;
    _DAT_00252e78 = plyr_wrk.bwp.x;
    _DAT_00252e7c = plyr_wrk.bwp.y;
    DAT_00252e63 = plyr_wrk.dop._14_1_;
  }
  plyr_wrk.rock_adj.z = (mb->pos).y;
  pfVar1 = &(mb->pos).y;
  plyr_wrk.rock_adj.w = (mb->pos).z;
  plyr_wrk.bwp.x = (mb->pos).w;
  plyr_wrk.bwp.y = (mb->tpos).x;
  plyr_wrk.op.z = *tv;
  plyr_wrk.op.w = tv[1];
  plyr_wrk.rock_adj.x = tv[2];
  plyr_wrk.rock_adj.y = tv[3];
  sceVu0AddVector((Vector4 *)pfVar1,(Vector4 *)pfVar1,(Vector4 *)tv);
  if ((plyr_wrk.mvsta & 0x200000) != 0) {
    (mb->pos).z = (mb->pos).z + plyr_wrk.spd_ud;
    return;
  }
  PlyrHeightCtrl(tv);
  return;
}

void PlyrKonwakuMove(MOVE_BOX *mb, float *tv) {
  *tv = 0.0;
  tv[2] = 2.0;
  tv[1] = 0.0;
  tv[3] = 0.0;
  RotFvector(&(mb->rot).y,tv);
  return;
}

void PlyrMovePad(MOVE_BOX *mb, float *tv) {
	sceVu0FVECTOR fr;
	sceVu0FVECTOR tr;
	float r;
	float rcng;
	u_char run_chk;
	static u_char no_rot_cng2 = 0;
	static u_short cam_cng_tm = 0;
	static int plyr_cam_no_save = 0;
	static float keep_rot = 0.f;
	static float rs[2] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	};
	static u_char ds[5] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0
	};
	
  short sVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  Vector4 fr;
  float tr [4];
  float rcng;
  float r;
  
  memset(&fr,0,0x10);
  memset(tr,0,0x10);
  r = GetMovePad('\0');
  uVar3 = PlyrMoveStaChk(r);
  GetMoveSpeed(tv);
  PadInfoTmpSave((uchar *)&ds_308,pad[0].an_dir[0],(float *)&rs_307,r);
  rcng = keep_rot_306 - (float)rs_307;
  RotLimitChk(&rcng);
  rcng = ABS(rcng);
  if ((plyr_cam_no_save_305 != plyr_wrk.dop.dov[0]._0_2_) &&
     (cam_cng_tm_304 = 10, plyr_wrk.dop._13_1_ != plyr_wrk.dop._14_1_)) {
    plyr_wrk.mvsta = plyr_wrk.mvsta | 0x400000;
  }
  plyr_cam_no_save_305 = (uint)plyr_wrk.dop.dov[0]._0_2_;
  if ((plyr_wrk.mvsta & 0x3000000) == 0) {
    if (r == 10.0) {
      no_rot_cng2_303 = '\0';
      cam_cng_tm_304 = 0;
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xffbfffff;
      uVar2 = plyr_wrk.mvsta;
      if (uVar3 != '\0') goto LAB_0020aa10;
    }
    else {
LAB_0020aa10:
      if (cam_cng_tm_304 != 0) {
        (mb->rspd).z = 0.0;
        plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfeffffff;
        RotFvector(&(mb->rot).y,tv);
        cam_cng_tm_304 = cam_cng_tm_304 + -1;
        if (cam_cng_tm_304 != 0) {
          return;
        }
        fVar5 = GetTrgtRotY(&plyr_wrk.move_box.spd.z,(float *)&camera);
        iVar4 = RotRngChk(&plyr_wrk.move_box.spd.z,&plyr_wrk.soulp.z,fVar5,DAT_0035618c);
        if (iVar4 != 0) {
          return;
        }
        plyr_wrk.mvsta = plyr_wrk.mvsta | 0x400000;
        keep_rot_306 = (float)rs_307;
        return;
      }
      if (((plyr_wrk.mvsta & 0x600000) == 0x400000) && (rcng <= DAT_00356190)) {
        no_rot_cng2_303 = '\x01';
        goto LAB_0020aad4;
      }
      if ((((rs_307._4_4_ == r) && ((plyr_wrk.mvsta & 0x800000) == 0)) || (uVar3 != '\0')) ||
         (uVar2 = plyr_wrk.mvsta, (plyr_wrk.mvsta & 0x200000) != 0)) {
        RotFvector(&(mb->rot).y,tv);
        if ((plyr_wrk.mvsta & 0x100000) == 0) {
          return;
        }
        if ((step_direction & 1) != 0) {
          *tv = 0.0;
          return;
        }
        tv[2] = 0.0;
        return;
      }
    }
    plyr_wrk.mvsta = uVar2 & 0xffbfffff;
    if ((uVar2 & 0x100000) != 0) {
      if ((step_direction & 1) == 0) {
        tv[2] = 0.0;
      }
      else {
        *tv = 0.0;
      }
    }
    if (r == 10.0) {
      if ((((*tv != 0.0) || (tv[1] != 0.0)) || (tv[2] != 0.0)) && ((plyr_wrk.mvsta & 0xfff0) != 0))
      {
        RotFvector(&plyr_wrk.move_box.trot.z,tv);
      }
    }
    else {
      fr.y = r + plyr_wrk.prot;
      RotLimitChk((float *)((uint)&fr | 4));
      RotFvector(&fr.x,tv);
      r = fr.y - (mb->rot).z;
      RotLimitChk(&r);
      if (0.0 < r) {
        rcng = DAT_00356194;
      }
      else {
        r = ABS(r);
        rcng = DAT_00356198;
      }
      if ((r <= DAT_0035619c) || (no_rot_cng2_303 != '\0')) {
        if ((plyr_wrk.mvsta & 0xfff0) == 0) {
          if (DAT_003561a0 < r) {
            (mb->rot).z = (mb->rot).z + rcng;
            RotLimitChk(&(mb->rot).z);
            plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfeffffff | 0x800000;
          }
          else {
            plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfe7fffff;
            (mb->rot).z = fr.y;
          }
        }
        else {
          plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfe7fffff;
        }
      }
      else {
        CngPlyrRotRapid(mb,fr.y);
        if (((plyr_wrk.move_mot - 1 < 9) || (plyr_wrk.move_mot == '\f')) ||
           (plyr_wrk.move_mot == '\r')) {
          tv[3] = 0.0;
          plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
          *tv = 0.0;
          tv[1] = 0.0;
          tv[2] = 0.0;
        }
        plyr_wrk.mvsta = plyr_wrk.mvsta & 0xff7fffff | 0x1000000;
      }
    }
  }
  else {
    if (((plyr_wrk.move_mot - 1 < 9) || (plyr_wrk.move_mot == '\f')) || (plyr_wrk.move_mot == '\r'))
    {
      *tv = 0.0;
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
      tv[1] = 0.0;
      tv[2] = 0.0;
      tv[3] = 0.0;
      sVar1 = mb->loop;
    }
    else {
      sVar1 = mb->loop;
    }
    if (sVar1 == 0) {
      (mb->rspd).z = 0.0;
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfcffffff;
      return;
    }
    fVar6 = (mb->rot).z;
    fVar5 = (mb->rspd).z;
    mb->loop = sVar1 + -1;
    (mb->rot).z = fVar6 + fVar5;
    RotLimitChk(&(mb->rot).z);
LAB_0020aad4:
    RotFvector(&(mb->rot).y,tv);
  }
  return;
}

void GetMoveSpeed(float *tv) {
  uint uVar1;
  
  *tv = 0.0;
  tv[1] = 0.0;
  uVar1 = plyr_wrk.mvsta;
  tv[2] = 0.0;
  tv[3] = 0.0;
  if ((uVar1 & 0xffff) != 0) {
    if ((uVar1 & 0xa000) != 0) {
      tv[2] = -plyr_wrk.spd;
      return;
    }
    tv[2] = plyr_wrk.spd;
  }
  return;
}

void PlyrMovePadV(MOVE_BOX *mb, float *tv) {
	sceVu0FVECTOR r;
	float delta;
	u_char dir;
	static u_char dir_old = 255;
	
  float *rot;
  short sVar1;
  bool bVar2;
  uint uVar3;
  uchar uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float r [4];
  
  fVar6 = DAT_003561a4;
  uVar3 = plyr_wrk.mvsta;
  uVar5 = 0xff;
  *tv = 0.0;
  tv[1] = 0.0;
  tv[2] = 0.0;
  tv[3] = 0.0;
  if ((uVar3 & 0x3000000) != 0) {
    if (((plyr_wrk.move_mot - 1 < 9) || (plyr_wrk.move_mot == '\f')) || (plyr_wrk.move_mot == '\r'))
    {
      tv[3] = 0.0;
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
      *tv = 0.0;
      tv[1] = 0.0;
      tv[2] = 0.0;
      sVar1 = mb->loop;
    }
    else {
      sVar1 = mb->loop;
    }
    if (sVar1 == 0) {
      (mb->rspd).z = 0.0;
      plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfcffffff;
      return;
    }
    fVar7 = (mb->rot).z;
    fVar6 = (mb->rspd).z;
    mb->loop = sVar1 + -1;
    (mb->rot).z = fVar7 + fVar6;
    RotLimitChk(&(mb->rot).z);
    return;
  }
  r[0] = 0.0;
  r[1] = GetMovePad('\0');
  r[2] = 0.0;
  r[3] = 0.0;
  if ((plyr_wrk.mvsta & 0x200000) != 0) {
    r[1] = 0.0;
  }
  PlyrMoveStaChk(r[1]);
  bVar2 = false;
  if (r[1] != 10.0) {
    uVar4 = ConvertRot2Dir(r[1],'\x01');
    uVar5 = (ulong)(char)uVar4;
    switch(uVar4) {
    case '\x01':
    case '\x02':
    case '\x03':
      fVar6 = (mb->rot).z + fVar6;
      break;
    case '\x04':
      if (dir_old_315 != uVar5) {
        if (((plyr_wrk.move_mot - 1 < 9) || (plyr_wrk.move_mot == '\f')) ||
           (plyr_wrk.move_mot == '\r')) {
          *tv = 0.0;
          plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
          tv[1] = 0.0;
          tv[2] = 0.0;
          tv[3] = 0.0;
          fVar6 = (mb->rot).z;
        }
        else {
          fVar6 = (mb->rot).z;
        }
        r[1] = fVar6 + DAT_003561a8;
        plyr_wrk.mvsta = plyr_wrk.mvsta | 0x1000000;
        RotLimitChk((float *)((uint)r | 4));
        CngPlyrRotRapid(mb,r[1]);
      }
    default:
      bVar2 = uVar5 < 2;
      goto LAB_0020b074;
    case '\x05':
    case '\x06':
    case '\a':
      fVar6 = (mb->rot).z - fVar6;
    }
    rot = &(mb->rot).z;
    *rot = fVar6;
    RotLimitChk(rot);
    bVar2 = uVar5 < 2;
  }
LAB_0020b074:
  if (((bVar2) || (uVar5 == 7)) ||
     (((plyr_wrk.mvsta & 1) != 0 || ((plyr_wrk.mvsta & 0x200000) != 0)))) {
    GetMoveSpeed(tv);
    RotFvector(&(mb->rot).y,tv);
  }
  dir_old_315 = (char)uVar5;
  return;
}

void CngPlyrRotRapid(MOVE_BOX *mb, float rot0) {
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30 [4];
  
  local_30[0] = rot0 - (mb->rot).z;
  RotLimitChk(local_30);
  if (0.0 < local_30[0]) {
    (mb->rspd).z = DAT_003561ac;
  }
  else {
    (mb->rspd).z = DAT_003561b0;
  }
  fVar1 = (mb->rspd).z;
  fVar3 = (mb->rot).z;
  fVar2 = ABS(local_30[0]) / DAT_003561b4;
  mb->loop = (short)(int)fVar2;
  (mb->rot).z = fVar3 + (local_30[0] - fVar1 * (float)((int)fVar2 & 0xffff));
  RotLimitChk(&(mb->rot).z);
  return;
}

void PlyrMovePadFind(MOVE_BOX *mb, float *tv) {
	float rot;
	u_char anime;
	u_char frame;
	u_char anime_tbl[4];
	
  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  uchar frame;
  float rad;
  float fVar4;
  uchar anime_tbl [4];
  
  puVar1 = anime_tbl + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)DAT_003572e8 >> (3 - uVar2) * 8;
  anime_tbl = DAT_003572e8;
  frame = '\n';
  rad = GetMovePad('\x01');
  if (rad == 10.0) {
    uVar3 = 'C';
    frame = '\x14';
  }
  else {
    plyr_wrk.mvsta = plyr_wrk.mvsta | 4;
    fVar4 = SgSinf(rad);
    *tv = plyr_wrk.spd * fVar4;
    fVar4 = SgCosf(rad);
    tv[2] = plyr_wrk.spd * fVar4;
    RotFvector(&(mb->rot).y,tv);
    uVar3 = ConvertRot2Dir(rad,'\0');
    uVar3 = anime_tbl[(char)uVar3];
  }
  if (plyr_wrk.anime_no != uVar3) {
    if (uVar3 == 'C') {
      now_frot_x = 0.0;
    }
    SetPlyrAnime(uVar3,frame);
  }
  return;
}

float GetMovePad(u_char id) {
	float rot;
	u_char dir;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 10.0;
  uVar1 = 0xff;
  if ((plyr_wrk.mvsta & 0x200000) == 0) {
    if (id == '\0') {
      if ((((opt_wrk.key_type == '\x01') || (opt_wrk.key_type == '\x03')) ||
          (opt_wrk.key_type == '\x05')) || (fVar2 = fVar3, opt_wrk.key_type == '\a')) {
        if (*key_now[0] == 0) {
          if (*key_now[1] != 0) {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 4;
        }
        if (*key_now[2] == 0) {
          if (*key_now[3] != 0) {
            if (uVar1 == 0xff) {
              uVar1 = 6;
            }
            else {
              if (uVar1 == 0) {
                uVar1 = 8;
              }
              uVar1 = (uVar1 + 6) / 2;
            }
          }
        }
        else if (uVar1 == 0xff) {
          uVar1 = 2;
        }
        else {
          uVar1 = (uVar1 + 2) / 2;
        }
        fVar2 = 10.0;
        if (uVar1 != 0xff) {
          fVar2 = (float)uVar1 * DAT_003561b8 - DAT_003561bc;
        }
      }
      if ((pad[0].id != 'y') || (fVar3 = pad[0].an_rot[0], pad[0].an_dir[0] == 0xff))
      goto LAB_0020b408;
    }
    else if (pad[0].an_dir[1] != 0xff) {
      fVar3 = pad[0].an_rot[1];
    }
  }
  else {
    plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfcffffff;
    fVar3 = plyr_wrk.move_box.trot.w;
  }
  fVar2 = fVar3;
LAB_0020b408:
  if ((plyr_wrk.sta & 0x4000000) != 0) {
    if (fVar2 != 10.0) {
      return 10.0;
    }
    plyr_wrk.sta = plyr_wrk.sta & 0xfbffffff;
  }
  return fVar2;
}

int MovePadEnableChk(u_char *dir_save) {
	int chk;
	
  uchar uVar1;
  uint uVar2;
  
  uVar1 = *dir_save;
  uVar2 = 0;
  if (((uVar1 == dir_save[1]) && (uVar1 == dir_save[2])) && (uVar1 == dir_save[3])) {
    uVar2 = (uint)(uVar1 != dir_save[4]);
  }
  return uVar2;
}

void PadInfoTmpSave(u_char *dir_save, u_char dir_now, float *rot_save, float rot_now) {
	u_char i;
	
  uchar *puVar1;
  float *pfVar2;
  uint uVar3;
  
  if ((plyr_wrk.mvsta & 0x200000) == 0) {
    uVar3 = 4;
    do {
      puVar1 = dir_save + uVar3;
      uVar3 = uVar3 - 1 & 0xff;
      *puVar1 = puVar1[-1];
    } while (uVar3 != 0);
    uVar3 = 1;
    do {
      pfVar2 = rot_save + uVar3;
      uVar3 = uVar3 - 1 & 0xff;
      *pfVar2 = pfVar2[-1];
    } while (uVar3 != 0);
    *dir_save = dir_now;
  }
  else {
    uVar3 = 0;
    do {
      puVar1 = dir_save + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      *puVar1 = 0xff;
    } while (uVar3 < 5);
    uVar3 = 0;
    do {
      pfVar2 = rot_save + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      *pfVar2 = 10.0;
    } while (uVar3 < 2);
    *dir_save = dir_now;
  }
  *rot_save = rot_now;
  return;
}

u_char PlyrMoveStaChk(float pad_chk) {
	u_char run_chk;
	u_int psta;
	
  uint uVar1;
  uint uVar2;
  uchar uVar3;
  
  uVar2 = 0;
  uVar3 = '\0';
  if ((plyr_wrk.mvsta & 0xf) == 0) {
    if (*key_now[6] != 1) goto LAB_0020b5d0;
  }
  else if (*key_now[6] == 0) goto LAB_0020b5d0;
  uVar2 = 1;
LAB_0020b5d0:
  plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfff7fff0;
  if ((uVar2 == 0) && (pad_chk != 10.0)) {
    uVar1 = PlyrLeverInputChk();
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = 2;
    }
  }
  if (((uVar2 & 1) != 0) && (pad_chk == 10.0)) {
    uVar3 = '\x01';
  }
  uVar1 = uVar2;
  if (plyr_wrk.dwalk_tm != 0) {
    uVar1 = 0x80000;
    if (uVar2 != 0) {
      uVar1 = 0x80008;
    }
  }
  plyr_wrk.mvsta = plyr_wrk.mvsta | uVar1;
  return uVar3;
}

u_int PlyrLeverInputChk() {
	u_char chkx;
	u_char chky;
	u_int result;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if ((((*key_now[0] != 0) || (*key_now[1] != 0)) || (*key_now[3] != 0)) || (*key_now[2] != 0)) {
    uVar3 = 1;
  }
  if (pad[0].id == 'y') {
    uVar1 = pad[0].analog[2] + 0x80;
    if ((pad[0].analog[2] & 0x80) == 0) {
      uVar1 = 0x7f - pad[0].analog[2];
    }
    uVar2 = pad[0].analog[3] + 0x80;
    if ((pad[0].analog[3] & 0x80) == 0) {
      uVar2 = 0x7f - pad[0].analog[3];
    }
    fVar4 = GetDist((float)(uVar1 & 0xff),(float)(uVar2 & 0xff));
    if (((int)fVar4 & 0xffU) < 0x7f) {
      if (0x31 < ((int)fVar4 & 0xffU)) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}

u_char PlyrMoveHitChk(MOVE_BOX *mb, float *tv, u_char id) {
	float dist;
	u_char result;
	u_char div;
	
  uchar uVar1;
  float fVar2;
  
  if ((*tv != 0.0) || (uVar1 = '\0', tv[2] != 0.0)) {
    fVar2 = GetDist(*tv,tv[2]);
    if (24.0 < fVar2) {
      uVar1 = (uchar)(int)(fVar2 / 24.0);
    }
    else {
      uVar1 = (uchar)((int)fVar2 & 0xffU);
      if (((int)fVar2 & 0xffU) == 0) {
        uVar1 = '\x01';
      }
    }
    uVar1 = PlyrMapHitCheck(tv,&(mb->pos).y,uVar1,plyr_wrk.dop._13_1_);
    if (id != '\0') {
      PlyrSpecialMoveChk2(tv);
    }
  }
  return uVar1;
}

void InitPhotoWrk() {
	PHOTO_WRK *pw;
	int i;
	
  int iVar1;
  SUBJECT_WRK *pSVar2;
  
  memset(&photo_wrk,0,0x138);
  pSVar2 = photo_wrk.ene;
  iVar1 = 3;
  InitSubjectWrk(&photo_wrk.plyr);
  do {
    iVar1 = iVar1 + -1;
    InitSubjectWrk(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (-1 < iVar1);
  pSVar2 = photo_wrk.furn;
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    InitSubjectWrk(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (-1 < iVar1);
  pSVar2 = photo_wrk.rare;
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    InitSubjectWrk(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (-1 < iVar1);
  photo_wrk.ratio = 1.0;
  photo_wrk.mode = 1;
  photo_wrk.dist_2d = -1;
  photo_wrk.ene_dead = 0xff;
  return;
}

void InitSubjectWrk(SUBJECT_WRK *sw) {
  sw->no = -1;
  sw->ratio = 1.0;
  return;
}

void PlyrBattleChk() {
	ENE_WRK *ew;
	int i;
	
  float fVar1;
  ENE_WRK *ew;
  int i;
  float fVar2;
  
  fVar1 = DAT_003561c0;
  plyr_wrk.sta = plyr_wrk.sta & 0xfffffffe;
  i = 0;
  ew = ene_wrk;
  while (((ew->sta & 1) == 0 ||
         ((fVar2 = GetDistV(&plyr_wrk.move_box.spd.z,&(ew->move_box).tpos.x), fVar1 < fVar2 &&
          (plyr_wrk.dop._13_1_ != ew[1].move_box.wait_time))))) {
    i = i + 1;
    ew = (ENE_WRK *)((int)&ew[1].move_box.spd.z + 2);
    if (2 < i) {
      return;
    }
  }
  plyr_wrk.sta = plyr_wrk.sta | 1;
  return;
}

void PlyrLightSet() {
	LIGHT_PACK *lp;
	POINT_WRK p;
	sceVu0FVECTOR tv;
	char pr_set;
	char po_set;
	
  float fVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  POINT_WRK p;
  float tv [4];
  
  lVar4 = (long)plyr_wrk.pr_set;
  lVar5 = (long)plyr_wrk.po_set;
  if ((lVar4 == -1) || (plyr_wrk.mylight.parallel[0].direction[2] == 0.0)) {
    plyr_wrk.mylight.parallel[0].direction[2] =
         (float)((int)plyr_wrk.mylight.parallel[0].direction[2] + 1);
    plyr_wrk.pr_set = '\0';
    lVar4 = 0;
  }
  if (lVar4 != -1) {
    iVar3 = (int)lVar4;
    fVar6 = camera.p.x - plyr_wrk.move_box.spd.z;
    plyr_wrk.mylight.parallel[iVar3 + 1].direction[3] = -1.0;
    fVar2 = DAT_003561c4;
    fVar1 = camera.p.z;
    plyr_wrk.mylight.parallel[iVar3 + 1].direction[2] = fVar6;
    fVar6 = plyr_wrk.move_box.rot.x;
    plyr_wrk.mylight.parallel[iVar3 + 2].direction[0] = fVar2;
    plyr_wrk.mylight.parallel[iVar3 + 2].direction[1] = 255.0;
    plyr_wrk.mylight.parallel[iVar3 + 1].diffuse[1] = 0.0;
    plyr_wrk.mylight.parallel[iVar3 + 1].diffuse[2] = fVar2;
    plyr_wrk.mylight.parallel[iVar3 + 1].diffuse[0] = fVar1 - fVar6;
    plyr_wrk.mylight.parallel[iVar3 + 1].diffuse[3] = fVar2;
  }
  if ((lVar5 == -1) || (plyr_wrk.mylight.parallel[0].direction[3] == 0.0)) {
    plyr_wrk.mylight.parallel[0].direction[3] =
         (float)((int)plyr_wrk.mylight.parallel[0].direction[3] + 1);
    plyr_wrk.po_set = '\0';
    lVar5 = 0;
  }
  if (lVar5 != -1) {
    tv[1] = 0.0;
    tv[0] = -300.0;
    tv[2] = 180.0;
    tv[3] = 0.0;
    RotFvector(&plyr_wrk.move_box.trot.z,(float *)(Vector4 *)tv);
    iVar3 = (int)lVar5;
    sceVu0AddVector((Vector4 *)(plyr_wrk.mylight.point[iVar3].pad + 1),
                    (Vector4 *)&plyr_wrk.move_box.spd.z,(Vector4 *)tv);
    fVar1 = DAT_003561c8;
    plyr_wrk.mylight.point[iVar3 + 1].diffuse[2] = 180.0;
    plyr_wrk.mylight.point[iVar3 + 1].diffuse[0] = fVar1;
    plyr_wrk.mylight.point[iVar3 + 1].diffuse[1] = 255.0;
    plyr_wrk.mylight.point[iVar3 + 1].pos[2] = fVar1;
    plyr_wrk.mylight.point[iVar3 + 1].pos[3] = fVar1;
  }
  return;
}

void PlyrMessageDisp() {
  uchar uVar1;
  int iVar2;
  
  if ((find_wrk.mode == '\0') || (uVar1 = FindMapCtrl(), uVar1 == '\0')) {
    if (ingame_wrk.mode == 0xe) {
      iVar2 = ItemGetCtrl();
      if (iVar2 != 0) {
        ev_wrk.get_item = 0;
        ingame_wrk.mode = 6;
        plyr_wrk.mode = 0;
        eff_blur_off = 0;
      }
    }
    else if (ev_wrk.btl_lock != 0) {
      LockBattleDoorOpenMSGDisp();
    }
  }
  else {
    plyr_wrk.mode = 0;
  }
  return;
}

int ReqPlyrSpeAnime(u_char anime_no, u_char frame) {
	int result;
	
  int iVar1;
  
  iVar1 = 0;
  if (((plyr_wrk.mode == 0) && ((plyr_wrk._0_8_ & 0x20000000000009) == 0)) &&
     (iVar1 = 0, anime_no != plyr_wrk.anime_no)) {
    SetPlyrAnime(anime_no,frame);
    iVar1 = 1;
  }
  return iVar1;
}

void PlyrSpeAnimeCtrl() {
	MOVE_BOX *mb;
	sceVu0FVECTOR tv;
	
  float tv [4];
  
  if ((plyr_wrk.sta & 0x20) == 0) {
    tv[0] = 0.0;
    tv[2] = -plyr_wrk.spd;
    tv[1] = 0.0;
    tv[3] = 0.0;
    RotFvector(&plyr_wrk.move_box.trot.z,tv);
    PlyrMoveHitChk((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv,'\x01');
    PlyrPosSet((MOVE_BOX *)&plyr_wrk.move_box.tpos.z,tv);
  }
  else {
    plyr_wrk.mode = 0;
  }
  return;
}

void PlyrDWalkTmCtrl() {
  if (plyr_wrk.dwalk_tm != 0) {
    plyr_wrk.dwalk_tm = plyr_wrk.dwalk_tm + -1;
  }
  return;
}

float GetEnePowerDegree() {
	FURN_WRK *fw;
	ENE_WRK *ew;
	sceVu0FVECTOR tv;
	sceVu0FVECTOR sv;
	float dist[2];
	float degree;
	float far;
	float height;
	u_int fsta;
	u_char i;
	
  int iVar1;
  byte bVar2;
  ENE_WRK *pEVar3;
  FURN_WRK *pFVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_f20;
  float tv [4];
  float sv [4];
  float dist [2];
  uint fsta;
  
  fVar7 = 0.0;
  iVar1 = ChkPhotoAble();
  if (iVar1 != 0) {
    return -1.0;
  }
  fVar8 = fVar7;
  dist[0] = fVar7;
  if (plyr_wrk.mode == 1) {
    pEVar3 = ene_wrk;
    bVar2 = 0;
    do {
      if (((((pEVar3->sta & 1) != 0) && (pEVar3->hp != 0)) && ((pEVar3->sta & 0x80000) == 0)) &&
         ((fVar6 = GetDistV((float *)&camera,(pEVar3->mpos).p1 + 3), dist[0] == fVar7 ||
          (fVar6 < dist[0])))) {
        sv[0] = (pEVar3->mpos).p1[3];
        sv[1] = (pEVar3->mpos).p2[0];
        sv[2] = (pEVar3->mpos).p2[1];
        sv[3] = (pEVar3->mpos).p2[2];
        dist[0] = fVar6;
      }
      bVar2 = bVar2 + 1;
      pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    } while (bVar2 < 4);
    if ((dist[0] < 1.0) || (4000.0 < dist[0])) {
      dist[0] = 0.0;
      uVar5 = 0;
      iVar1 = 0;
      do {
        if (((*(char *)((int)rg_dsp_wrk[0].pos + iVar1 + -0x10) != '\0') &&
            (99 < *(byte *)((int)rg_dsp_wrk[0].pos + iVar1 + -0xd))) &&
           ((fVar7 = GetDistV(&plyr_wrk.move_box.spd.z,(float *)((int)rg_dsp_wrk[0].pos + iVar1)),
            dist[0] == 0.0 || (fVar7 < dist[0])))) {
          sv[3] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 0xc);
          sv[0] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1);
          sv[1] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 4);
          sv[2] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 8);
          unaff_f20 = 4000.0;
          dist[0] = fVar7;
        }
        uVar5 = uVar5 + 1 & 0xff;
        iVar1 = uVar5 << 5;
      } while (uVar5 < 3);
      if (dist[0] == 0.0) {
        dist[0] = 0.0;
        pFVar4 = furn_wrk;
        bVar2 = 0;
        fVar7 = DAT_003561cc;
        do {
          iVar1 = GetFurnHintPos(pFVar4,tv,&fsta);
          if ((((iVar1 != 0) && ((plyr_wrk.move_box.spd.w + fVar7) - DAT_003561d0 <= tv[1])) &&
              (tv[1] <= plyr_wrk.move_box.spd.w + fVar7 + DAT_003561d0)) &&
             ((fVar6 = GetDistV(&plyr_wrk.move_box.spd.z,tv), dist[0] == 0.0 || (fVar6 < dist[0]))))
          {
            sv[0] = tv[0];
            unaff_f20 = (float)(uint)*(ushort *)(&DAT_00337734 + (uint)(ushort)pFVar4->id * 0x12);
            sv[1] = tv[1];
            sv[2] = tv[2];
            sv[3] = tv[3];
            dist[0] = fVar6;
          }
          bVar2 = bVar2 + 1;
          pFVar4 = pFVar4 + 1;
        } while (bVar2 < 0x3c);
      }
      if ((dist[0] < 1.0) || (unaff_f20 < dist[0])) goto LAB_0020c38c;
    }
    fVar8 = CulcEP((float *)&camera,sv);
  }
  else {
    pEVar3 = ene_wrk;
    bVar2 = 0;
    do {
      if (((((pEVar3->sta & 1) != 0) && (pEVar3->hp != 0)) && ((pEVar3->sta & 0x80000) == 0)) &&
         ((fVar6 = GetDistV(&plyr_wrk.move_box.spd.z,(pEVar3->mpos).p1 + 3), dist[0] == fVar7 ||
          (fVar6 < dist[0])))) {
        sv[0] = (pEVar3->mpos).p1[3];
        sv[1] = (pEVar3->mpos).p2[0];
        sv[2] = (pEVar3->mpos).p2[1];
        sv[3] = (pEVar3->mpos).p2[2];
        dist[0] = fVar6;
      }
      bVar2 = bVar2 + 1;
      pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    } while (bVar2 < 4);
    if ((dist[0] < 1.0) || (4000.0 < dist[0])) {
      dist[0] = 0.0;
      uVar5 = 0;
      iVar1 = 0;
      do {
        if ((*(char *)((int)rg_dsp_wrk[0].pos + iVar1 + -0x10) != '\0') &&
           ((fVar7 = GetDistV(&plyr_wrk.move_box.spd.z,(float *)((int)rg_dsp_wrk[0].pos + iVar1)),
            dist[0] == 0.0 || (fVar7 < dist[0])))) {
          sv[3] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 0xc);
          sv[0] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1);
          sv[1] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 4);
          sv[2] = *(float *)((int)rg_dsp_wrk[0].pos + iVar1 + 8);
          unaff_f20 = 4000.0;
          dist[0] = fVar7;
        }
        uVar5 = uVar5 + 1 & 0xff;
        iVar1 = uVar5 << 5;
      } while (uVar5 < 3);
      if (dist[0] == 0.0) {
        dist[0] = 0.0;
        pFVar4 = furn_wrk;
        bVar2 = 0;
        fVar7 = DAT_003561d4;
        do {
          iVar1 = GetFurnHintPos(pFVar4,tv,&fsta);
          if ((((iVar1 != 0) && ((plyr_wrk.move_box.spd.w + fVar7) - DAT_003561d8 <= tv[1])) &&
              (tv[1] <= plyr_wrk.move_box.spd.w + fVar7 + DAT_003561d8)) &&
             ((fVar6 = GetDistV(&plyr_wrk.move_box.spd.z,tv), dist[0] == 0.0 || (fVar6 < dist[0]))))
          {
            sv[0] = tv[0];
            unaff_f20 = (float)(uint)*(ushort *)(&DAT_00337734 + (uint)(ushort)pFVar4->id * 0x12);
            sv[1] = tv[1];
            sv[2] = tv[2];
            sv[3] = tv[3];
            dist[0] = fVar6;
          }
          bVar2 = bVar2 + 1;
          pFVar4 = pFVar4 + 1;
        } while (bVar2 < 0x3c);
      }
      if ((1.0 <= dist[0]) && (dist[0] <= unaff_f20)) {
        fVar8 = CulcEP2(&plyr_wrk.move_box.spd.z,sv);
      }
    }
    else {
      fVar8 = CulcEP2(&plyr_wrk.move_box.spd.z,sv);
    }
  }
LAB_0020c38c:
  if ((ingame_wrk.difficult != 0) && (ingame_wrk.game == 0)) {
    fVar8 = 0.0;
  }
  return fVar8;
}

float CulcEP(float *v0, float *v1) {
	sceVu0FVECTOR rv;
	float degree;
	
  float fVar1;
  float rv [4];
  
  GetTrgtRot(v0,v1,rv,3);
  fVar1 = 0.0;
  rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
  RotLimitChk((float *)((uint)rv | 4));
  rv[1] = ABS(rv[1]);
  if (rv[1] <= DAT_003561dc) {
    if (rv[1] < DAT_003561e0) {
      rv[0] = rv[0] - plyr_wrk.frot_x;
      RotLimitChk(rv);
      rv[0] = ABS(rv[0]);
    }
    else {
      rv[0] = DAT_003561e0;
    }
    fVar1 = ((DAT_003561e4 - (rv[0] + rv[1])) * 100.0) / DAT_003561e4;
  }
  return fVar1;
}

float CulcEP2(float *v0, float *v1) {
	sceVu0FVECTOR rv;
	float degree;
	
  float fVar1;
  float rv [4];
  
  GetTrgtRot(v0,v1,rv,2);
  fVar1 = 0.0;
  rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
  RotLimitChk((float *)((uint)rv | 4));
  if (ABS(rv[1]) <= DAT_003561e8) {
    fVar1 = ((DAT_003561e8 - ABS(rv[1])) * 100.0) / DAT_003561e8;
  }
  return fVar1;
}

int ChkPhotoAble() {
	int result;
	u_char i;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = 0;
  do {
    uVar4 = uVar2 + 1 & 0xff;
    plyr_wrk.fhp[uVar2 + 2].y = 0.0;
    uVar2 = uVar4;
  } while (uVar4 < 5);
  iVar3 = 0;
  if ((plyr_wrk.mode == 1) && (iVar3 = iVar5, plyr_wrk.cond != 1)) {
    if ((ene_wrk[0].sta & 0x400) == 0) {
      uVar2 = 1;
      do {
        uVar4 = uVar2 & 0xff;
        bVar1 = uVar4 < 4;
        if (!bVar1) goto LAB_0020c5fc;
        uVar2 = uVar4 + 1;
      } while ((*(uint *)((int)ene_wrk + uVar4 * 0x430) & 0x400) == 0);
    }
    else {
      bVar1 = true;
    }
    iVar5 = 1;
    iVar3 = 1;
    if (!bVar1) {
LAB_0020c5fc:
      iVar3 = iVar5;
      if (((plyr_wrk.sta & 1) == 0) && (iVar3 = SearchRareEne(), iVar3 == 0)) {
        iVar3 = SearchFurnHint();
      }
    }
  }
  return iVar3;
}

int SearchRareEne() {
	sceVu0FVECTOR tv;
	float dist[2];
	float tx;
	float ty;
	int i;
	int result;
	
  uchar uVar1;
  RGOST_DSP_WRK *pRVar2;
  int iVar3;
  float *tp;
  int iVar4;
  int iVar5;
  float fVar6;
  float tv [4];
  float dist [2];
  float tx;
  float ty;
  
  pRVar2 = rg_dsp_wrk;
  iVar5 = 0;
  iVar4 = 0;
  tp = rg_dsp_wrk[0].pos;
  dist[1] = 0.0;
  do {
    if ((((pRVar2->mode != '\0') && (99 < pRVar2->alpha)) &&
        (uVar1 = OutSightChk(tp,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003561ec,DAT_003561f0)
        , uVar1 == '\0')) &&
       ((iVar3 = FrameInsideChk(tp,&tx,&ty), iVar3 != 0 &&
        (fVar6 = GetDist((float)(int)plyr_wrk.move_box.pos.z._0_2_ - tx,
                         (float)(int)plyr_wrk.move_box.pos.z._2_2_ - ty),
        fVar6 <= *(float *)(&circle_radius_tbl + (uint)cam_custom_wrk.charge_range * 4))))) {
      if (dist[1] == 0.0) {
        plyr_wrk.fhp[1].z = *tp;
      }
      else {
        if (dist[1] <= fVar6) goto LAB_0020c794;
        plyr_wrk.fhp[1].z = *tp;
      }
      iVar5 = 1;
      plyr_wrk.fhp[1].w = tp[1];
      plyr_wrk.fhp[2].x = tp[2];
      plyr_wrk.fhp[2].y = 1.0;
      dist[1] = fVar6;
    }
LAB_0020c794:
    iVar4 = iVar4 + 1;
    tp = tp + 8;
    pRVar2 = pRVar2 + 1;
    if (2 < iVar4) {
      return iVar5;
    }
  } while( true );
}

int SearchFurnHint() {
	PP_JUDGE ppj;
	FURN_WRK *fw;
	sceVu0FVECTOR tv;
	float dist[2];
	float tx;
	float ty;
	u_int fsta;
	int i;
	int result;
	u_char pchk;
	
  long lVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  FURN_WRK *fw;
  int iVar5;
  int iVar6;
  ulong in_hi;
  float fVar7;
  PP_JUDGE ppj;
  float tv [4];
  float dist [2];
  uint fsta;
  float tx;
  float ty;
  
  iVar6 = 0;
  bVar2 = false;
  iVar5 = 0;
  plyr_wrk.fh_no = -1;
  dist[1] = 0.0;
  fw = furn_wrk;
  do {
    iVar4 = GetFurnHintPos(fw,tv,&fsta);
    if (iVar4 != 0) {
      lVar1 = (in_hi | 0x337734) + (long)(int)((uint)(ushort)fw->id * 0x12);
      in_hi = (ulong)(int)((ulong)lVar1 >> 0x20);
      uVar3 = OutSightChk(tv,(float *)&camera,plyr_wrk.move_box.trot.w,DAT_003561f4,
                          (float)(uint)*(ushort *)lVar1);
      if (((uVar3 == '\0') && (iVar4 = FrameInsideChk(tv,&tx,&ty), iVar4 != 0)) &&
         (fVar7 = GetDist((float)(int)plyr_wrk.move_box.pos.z._0_2_ - tx,
                          (float)(int)plyr_wrk.move_box.pos.z._2_2_ - ty),
         fVar7 <= *(float *)(&circle_radius_tbl + (uint)cam_custom_wrk.charge_range * 4))) {
        if ((fsta & 2) == 0) {
          ppj.num = '\x01';
          ppj.p[0][0] = tv[0];
          ppj.p[0][1] = tv[1];
          ppj.p[0][2] = tv[2];
          ppj.p[0][3] = tv[3];
          ppj.result[0] = '\0';
          CheckPointDepth(&ppj);
          if (ppj.result[0] != '\0') {
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((dist[1] == 0.0 || (fVar7 < dist[1])))) {
          plyr_wrk.fhp[1].z = tv[0];
          iVar6 = 1;
          plyr_wrk.fhp[1].w = tv[1];
          plyr_wrk.fhp[2].x = tv[2];
          plyr_wrk.fhp[2].y = 1.0;
          plyr_wrk.fh_no = (short)iVar5;
          dist[1] = fVar7;
        }
      }
    }
    iVar5 = iVar5 + 1;
    fw = fw + 1;
  } while (iVar5 < 0x3c);
  if (plyr_wrk.fh_no != -1) {
    FrameInsideChkFurn(furn_wrk + (ushort)plyr_wrk.fh_no,&plyr_wrk.fh_deg,0);
  }
  return iVar6;
}

int GetFurnHintPos(FURN_WRK *fw, float *tv, u_int *fsta) {
	u_int furn_attr;
	int result;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((fw->use == '\0') || (uVar3 = 0, fw->use == '\x02')) {
    uVar2 = GetFurnAttrF(fw,ingame_wrk.msn_no);
    uVar3 = 0;
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x60) != 0) {
        uVar1 = fw->id;
        fVar5 = fw->pos[0] +
                **(float **)
                  (&fpc_dat + (uint)(byte)(&DAT_0033773b)[(uint)(ushort)fw->id * 0x12] * 4);
        *tv = fVar5;
        tv[1] = fw->pos[1] +
                *(float *)(*(int *)(&fpc_dat + (uint)(byte)(&DAT_0033773b)[(uint)uVar1 * 0x12] * 4)
                          + 4);
        fVar7 = fw->pos[2];
        fVar6 = *(float *)(*(int *)(&fpc_dat + (uint)(byte)(&DAT_0033773b)[(uint)uVar1 * 0x12] * 4)
                          + 8);
        tv[3] = 0.0;
        fVar7 = fVar7 + fVar6;
        tv[2] = fVar7;
        uVar4 = (uint)plyr_wrk.dop._13_1_;
        uVar3 = GetPointRoom((short)(int)fVar5,(short)(int)fVar7);
        uVar3 = (uint)(uVar4 == uVar3);
      }
      *fsta = uVar2;
    }
    else {
      *fsta = uVar2;
    }
  }
  return uVar3;
}

float GetPlyrSpd() {
	float spd;
	
  float fVar1;
  
  fVar1 = 0.0;
  if ((plyr_wrk.mvsta & 0xfff0) == 0) {
    if ((plyr_wrk.mvsta & 1) != 0) {
      return 11.0;
    }
    if ((plyr_wrk.mvsta & 2) != 0) {
      return 5.5;
    }
    if ((plyr_wrk.mvsta & 4) != 0) {
      return 2.75;
    }
    if ((plyr_wrk.mvsta & 8) != 0) {
      fVar1 = DAT_003561f8;
    }
  }
  else {
    if (plyr_wrk.move_mot != '\0') {
      return 0.0;
    }
    if ((plyr_wrk.mvsta & 0x20) != 0) {
      return spd_ld;
    }
    if ((plyr_wrk.mvsta & 0x800) != 0) {
      return spd_sdr;
    }
    if ((plyr_wrk.mvsta & 0x400) != 0) {
      return spd_sur;
    }
    if ((plyr_wrk.mvsta & 0x80) != 0) {
      return spd_sd;
    }
    if ((plyr_wrk.mvsta & 0x40) != 0) {
      return spd_su;
    }
  }
  return fVar1;
}

int PlyrNeckDirectionChk(float *p) {
  uchar uVar1;
  int iVar2;
  float fVar3;
  
  *p = 0.0;
  p[1] = 0.0;
  p[2] = 0.0;
  p[3] = 0.0;
  uVar1 = NeckTargetEneChk(p);
  if (uVar1 == '\0') {
    uVar1 = NeckTargetItemChk(p);
    if (uVar1 == '\0') {
      NeckTargetDoorChk(p);
      fVar3 = *p;
    }
    else {
      fVar3 = *p;
    }
  }
  else {
    fVar3 = *p;
  }
  iVar2 = 0;
  if (((fVar3 != 0.0) || (p[1] != 0.0)) || (p[2] != 0.0)) {
    iVar2 = 1;
  }
  return iVar2;
}

u_char NeckTargetEneChk(float *p) {
	ENE_WRK *ew;
	float dist[2];
	u_char i;
	u_char no;
	
  int iVar1;
  uchar uVar2;
  ENE_WRK *pEVar3;
  uint uVar4;
  uint uVar5;
  float dist [2];
  
  dist[1] = 0.0;
  uVar5 = 0xff;
  uVar4 = 0;
  pEVar3 = ene_wrk;
  do {
    if (((((pEVar3->sta & 1) != 0) && (pEVar3->hp != 0)) && ((pEVar3->sta & 0x80000) == 0)) &&
       ((uVar2 = PlyrNoticeObjectChk(&(pEVar3->move_box).tpos.x,dist), uVar2 != '\0' &&
        ((dist[1] == 0.0 || (dist[0] < dist[1])))))) {
      dist[1] = dist[0];
      uVar5 = uVar4;
    }
    uVar4 = uVar4 + 1 & 0xff;
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
  } while (uVar4 < 4);
  if (uVar5 != 0xff) {
    iVar1 = uVar5 * 0x430;
    *p = *(float *)((int)ene_wrk + iVar1 + 0xc0);
    p[1] = *(float *)((int)ene_wrk + iVar1 + 0xc4);
    p[2] = *(float *)((int)ene_wrk + iVar1 + 200);
    p[3] = *(float *)((int)ene_wrk + iVar1 + 0xcc);
  }
  return uVar5 != 0xff;
}

u_char NeckTargetItemChk(float *p) {
	float dist[2];
	u_char i;
	u_char no;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float dist [2];
  
  dist[1] = 0.0;
  uVar4 = 0xff;
  uVar3 = 0;
  fVar5 = 0.0;
  iVar2 = 0;
  do {
    if ((((*(short *)((int)item_dsp_wrk[0].pos + iVar2 + -0x10) != -1) &&
         (plyr_wrk.move_box.spd.w + -1000.0 <= *(float *)((int)item_dsp_wrk[0].pos + iVar2 + 4))) &&
        (uVar1 = PlyrNoticeObjectChk((float *)((int)item_dsp_wrk[0].pos + iVar2),dist),
        uVar1 != '\0')) && ((dist[1] == fVar5 || (dist[0] < dist[1])))) {
      dist[1] = dist[0];
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = uVar3 << 5;
  } while (uVar3 < 0x10);
  if (uVar4 != 0xff) {
    *p = item_dsp_wrk[uVar4].pos[0];
    p[1] = item_dsp_wrk[uVar4].pos[1];
    p[2] = item_dsp_wrk[uVar4].pos[2];
    p[3] = item_dsp_wrk[uVar4].pos[3];
  }
  return uVar4 != 0xff;
}

u_char NeckTargetDoorChk(float *p) {
	sceVu0FVECTOR rv;
	float dist[2];
	u_char i;
	u_char no;
	
  char cVar1;
  float fVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float rv [4];
  float dist [2];
  
  dist[1] = 0.0;
  uVar6 = 0xff;
  uVar5 = 0;
  iVar4 = 0;
  do {
    cVar1 = *(char *)((int)door_wrk[0].npos + iVar4 + 0x26);
    if (((((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x04')) &&
        (((door_keep[*(ushort *)((int)door_wrk[0].npos + iVar4 + 0x1c)].attr & 0x8000U) == 0 &&
         (uVar3 = PlyrNoticeObjectChk((float *)((int)door_wrk[0].pos + iVar4),dist), uVar3 != '\0'))
        )) && ((dist[1] == 0.0 || (dist[0] < dist[1])))) {
      dist[1] = dist[0];
      uVar6 = uVar5;
    }
    fVar7 = DAT_00356200;
    fVar2 = DAT_003561fc;
    uVar5 = uVar5 + 1 & 0xff;
    iVar4 = uVar5 << 6;
  } while (uVar5 < 0x14);
  if ((uVar6 != 0xff) && (350.0 <= dist[1])) {
    if (plyr_wrk.move_mot == '\v') {
      *p = 250.0;
      fVar7 = fVar2;
    }
    else {
      *p = 250.0;
    }
    p[1] = fVar7;
    p[2] = 0.0;
    p[3] = 0.0;
    rv[0] = 0.0;
    rv[1] = door_wrk[uVar6].rot;
    rv[2] = 0.0;
    rv[3] = 0.0;
    RotFvector(rv,p);
    sceVu0AddVector((Vector4 *)p,(Vector4 *)(door_wrk + uVar6),(Vector4 *)p);
  }
  return uVar6 != 0xff;
}

u_char PlyrNoticeObjectChk(float *ov, float *dist) {
	sceVu0FVECTOR rv;
	u_char result;
	
  uchar uVar1;
  float fVar2;
  float rv [4];
  
  GetTrgtRot(&plyr_wrk.move_box.spd.z,ov,rv,2);
  uVar1 = '\0';
  rv[1] = rv[1] - plyr_wrk.move_box.trot.w;
  RotLimitChk((float *)((uint)rv | 4));
  if (ABS(rv[1]) <= DAT_00356204) {
    fVar2 = GetDistV2(&plyr_wrk.move_box.spd.z,ov);
    *dist = fVar2;
    if (fVar2 <= 2000.0) {
      uVar1 = '\x01';
    }
  }
  return uVar1;
}

void ReqPlayerStop(u_char frame) {
  if ((((plyr_wrk.mode == 0) || (plyr_wrk.mode == 4)) &&
      ((CONCAT44(plyr_wrk.mvsta,plyr_wrk.sta) & 0x20000000000008) == 0)) &&
     (plyr_wrk.anime_no != '\0')) {
    plyr_wrk.mvsta = plyr_wrk.mvsta & 0xfffffff0;
    SetPlyrAnime('\0',frame);
    return;
  }
  return;
}

void PlayerWarpReq(u_char dat_no) {
  pwarp_wrk.time = ' ';
  ingame_wrk.stts = ingame_wrk.stts | 0x80;
  pwarp_wrk.mode = '\x01';
  pwarp_wrk.req_no = dat_no;
  SetBlackOut2(0x20);
  return;
}

int PlayerWarpCtrl() {
  uchar uVar1;
  int iVar2;
  
  if (pwarp_wrk.mode == '\x02') {
    iVar2 = RoomMdlLoadWait();
    if (iVar2 != 0) {
      plyr_wrk.move_box.spd.z = (float)(uint)*(ushort *)(&DAT_0034111a + (uint)pwarp_wrk.req_no * 8)
      ;
      plyr_wrk.move_box.spd.w = (float)(int)*(short *)(&DAT_0034111c + (uint)pwarp_wrk.req_no * 8);
      plyr_wrk.move_box.rot.x = (float)(uint)*(ushort *)(&DAT_0034111e + (uint)pwarp_wrk.req_no * 8)
      ;
      printf("floor = %d\n");
      if ((&DAT_00341119)[(uint)pwarp_wrk.req_no * 8] != map_wrk.floor) {
        MapFloorChange((&DAT_00341119)[(uint)pwarp_wrk.req_no * 8]);
      }
      SetBlackIn2(0x10);
      pwarp_wrk.mode = '\x03';
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
    }
  }
  else if (pwarp_wrk.mode < 3) {
    if (pwarp_wrk.mode != '\x01') {
      return 0;
    }
    uVar1 = pwarp_wrk.time + 0xff;
    if (pwarp_wrk.time == '\0') {
      PlayerWarpRoomLoadReq();
      pwarp_wrk.mode = '\x02';
    }
    else {
      if (uVar1 != '\0') {
        pwarp_wrk.time = uVar1;
        return 0;
      }
      ingame_wrk.stts = ingame_wrk.stts | 0x20;
      pwarp_wrk.time = uVar1;
    }
  }
  else {
    if (pwarp_wrk.mode != '\x03') {
      if (pwarp_wrk.mode != '\x04') {
        return 0;
      }
      ingame_wrk.stts = ingame_wrk.stts & 0x7f;
      pwarp_wrk.mode = '\0';
      return 1;
    }
    if (pwarp_wrk.time != '\0') {
      pwarp_wrk.time = pwarp_wrk.time + 0xff;
      return 0;
    }
    pwarp_wrk.mode = '\x04';
  }
  return 0;
}

void PlayerWarpRoomLoadReq() {
  RoomLoadReq((uint)(byte)(&pwarp_dat)[(uint)pwarp_wrk.req_no * 8]);
  return;
}

int ShutterChanceChk() {
	ENE_WRK *ew;
	u_char i;
	int result;
	
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ENE_WRK *pEVar4;
  ENE_WRK *pEVar5;
  byte bVar6;
  
  bVar6 = 0;
  pEVar4 = ene_wrk;
  if ((ene_wrk[0].sta & 1) == 0) {
    pEVar4 = ene_wrk;
    bVar2 = 1;
  }
  else {
    if (ene_wrk[0].hp != 0) {
      uVar3 = CONCAT44(ene_wrk[0].sta2,ene_wrk[0].sta);
      uVar1 = ene_wrk[0].sta;
      goto LAB_0020d518;
    }
    bVar2 = 1;
  }
  do {
    do {
      bVar6 = bVar2;
      pEVar5 = pEVar4;
      pEVar4 = (ENE_WRK *)((int)&pEVar5[1].move_box.spd.z + 2);
      if (2 < bVar6) {
        return 0;
      }
      bVar2 = bVar6 + 1;
    } while (((pEVar4->sta & 1) == 0) || (*(short *)((int)&pEVar5[1].move_box.rot.x + 2) == 0));
    uVar3 = *(ulong *)pEVar4;
    uVar1 = pEVar4->sta;
LAB_0020d518:
    bVar2 = bVar6 + 1;
  } while (((uVar3 & 0x80400) != 0x400) || ((uVar1 & 0x30000) == 0));
  return 1;
}

void PlayerWarpReq2(u_char dat_no) {
  ingame_wrk.stts = ingame_wrk.stts | 0x80;
  pwarp_wrk.time = ' ';
  pwarp_wrk.mode = '\x01';
  pwarp_wrk.req_no = dat_no;
  SetPanel(0x10,0.0,0.0,640.0,448.0,'\0','\0','\0',0x80);
  SetBlackOut2(1);
  return;
}
