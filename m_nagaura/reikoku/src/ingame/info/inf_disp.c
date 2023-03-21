// STATUS: NOT STARTED

typedef struct {
	float frot_x;
	u_short plyr_hp;
	u_short plyr_mp;
	short int plyr_pos_x;
	short int plyr_pos_z;
	u_char film_num;
	u_char film_bak;
	u_char focus;
} INFO_WRK;

typedef struct {
	u_short fndr_mode_tmr;
	short int fp_bak[2];
	u_char phot_shot;
	u_char fndr_dsp_flg;
	u_char fndr_fade_alp;
	u_char fndr_fade_tmr;
	u_char rmp_f;
	u_char rmp_pow;
	u_char flm_cng_tmr;
	u_char stts_fade_tmr;
	u_char stts_fade_alp;
	u_char stts_dsp_flg;
	u_char scor_dsp;
	u_char disp_pause;
	u_char weak5_tmr[4];
	u_char weak5_alp[4];
	u_char hint5_tmr[5];
	u_char hint5_alp[5];
	u_char save_col;
	int lucky7;
} INF_DSP;

typedef struct {
	float hx[5];
	float hy[5];
	float ex[4];
	float ey[4];
	u_int pht_cnt_bak;
	short int bon_mov_sx[12];
	short int bon_mov_sy[12];
	short int bon_mov_ex[12];
	short int bon_mov_ey[12];
	short int dmg_num_mov;
	short int dmg_str_mov;
	u_short ene_no[4];
	u_short ene_dmg[4];
	u_short pht_scr;
	u_short dsp_dmg_red;
	u_short dsp_dmg_blu;
	u_short liner_x;
	u_char liner_w;
	u_char ep_alp[4];
	u_char ep_red[4];
	u_char ep_bar;
	u_char ep_tmr;
	u_char bar_over;
	u_short liner_y;
	u_short red_bar;
	u_short blu_bak;
	u_char liner_wait;
	u_char bon_mov_cnt[12];
	u_char bon_mov_tm[12];
	u_char bon_bak;
	u_char mfb_stts;
	char mfb_wait;
	char mfb_drain;
	char mfb_effect;
	u_char mfb_lgt_alp;
	u_char mfb_lgt_bak;
	u_char mfb_lfl_alp;
	u_char mfb_num_alp;
	u_char mfb_num_siz_x;
	u_char mfb_num_siz_y;
	u_char mfb_nfl_alp;
	u_char shw_hp_tmr;
	u_char chrg_rot[12];
	u_char chrg_flr[12];
	u_char chrg_stp[12];
	u_char dray_tmr[12];
	u_char se_wait;
	u_char se_num;
	u_char level_bak;
	u_char buki_use_flg;
	u_char buki_use_alp;
	u_char buki_use_flr;
	u_char buki_use_tmr;
	u_char shot_kind[4];
	u_char shot_kind2;
	u_char shot_mov;
	u_char shot_pse;
	u_char shot_lgt;
	u_char shot_fad;
	u_char shot_num;
	u_char mfb2_stts;
	u_char mfb2_tim;
	u_char mfb2_tim2;
	u_char fire_mask;
	u_char tm_max;
	u_char issei_timer;
	u_char dsp_dmg_flg;
	u_char dsp_dmg_num;
	u_char dsp_dmg_step;
	u_char dsp_dmg_step2;
	u_char dsp_dmg_alp;
	u_char dmg_num_alp;
	u_char dmg_str_alp;
	u_char dmg_eff_alp;
	u_char dmg_wait_tm;
	u_char dmg_num_mov_tim;
	u_char dmg_str_mov_tim;
	u_char dmg_eff_tim;
	u_char ene_dead_tmr;
	u_char ene_dead_alp;
	u_char rmp_alp;
	u_char hit_hp_ovr_ene;
	u_char hit_hp_ovr_ene_wait;
} NEW_INF;

typedef struct {
	u_char err;
	u_char alp_c;
	u_char alp_f;
	u_char dead;
} LIFE_BALL;

typedef struct {
	short int aim;
	short int dst;
} PRTCL_BALL;

typedef struct {
	short int x;
	short int y;
} PRTCL_POS;

typedef struct {
	u_char num1[6];
	u_char num2[6];
	u_char num3[6];
	u_char num4[6];
} ZAN;

typedef struct {
	u_char tim;
	u_char tim_max;
	u_char spd;
	u_char mov_x;
	u_char mov_y;
} JET_SET;

SPRT_DAT spr_dat[0] = {
};
short unsigned int flip_table[0] = {
};
float NC_ADJ = 0.949999988f;
SPRT_DAT raze_sprt = {
	/* .tex0 = */ 2307256178430748708,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 60,
	/* .h = */ 16,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 0,
	/* .alpha = */ 128
};
INFO_WRK info_wrk = {
	/* .frot_x = */ 0.f,
	/* .plyr_hp = */ 0,
	/* .plyr_mp = */ 0,
	/* .plyr_pos_x = */ 0,
	/* .plyr_pos_z = */ 0,
	/* .film_num = */ 0,
	/* .film_bak = */ 0,
	/* .focus = */ 0
};
static INF_DSP inf_dsp;
static NEW_INF new_inf;
static LIFE_BALL life_ball[5];
static PRTCL_BALL prtcl_ball[5][24];
static FLSH_CORE flsh_lgt;
static FLSH_CORE flsh_max[5];
static FLSH_CORE flsh_chrg[2];
static FLSH_CORE feramp;
static ZAN zanzo[12];
static ZAN dmg_scr;
static JET_SET jet1[25];
static JET_SET jet2[25];
static u_char znz[12][6];
char point_get_end = 0;

void InformationDispInit() {
  memset(&info_wrk,0,0x10);
  memset(&inf_dsp,0,0x2c);
  memset(&new_inf,0,0x158);
  memset(jet1,0,0x7d);
  memset(jet2,0,0x7d);
  point_get_end = '\0';
  return;
}

void InformationDispMain() {
	short int fndr_mx;
	short int fndr_my;
	
  ushort pos_y;
  int iVar1;
  ushort pos_x;
  
  if (inf_dsp.disp_pause == '\0') {
    iVar1 = (int)plyr_wrk.move_box.pos.z._0_2_;
    pos_y = (ushort)(int)(((float)(plyr_wrk.move_box.pos.z._2_2_ + -0xd1) * 8.5) / 10.0);
    InformationDispModeCtrl();
    InformationDispWrkSet();
    if (inf_dsp.fndr_mode_tmr == 1) {
      FndrInit();
    }
    pos_x = (ushort)(int)(((float)(iVar1 + -0x140) * 8.5) / 10.0);
    if (inf_dsp.fndr_dsp_flg != '\0') {
      FinderDisp(pos_x,pos_y);
    }
    if (((sys_wrk.game_mode == 3) && ((ingame_wrk.stts & 0x20) == 0)) &&
       (iVar1 = MesStatusCheck(), iVar1 == 0)) {
      if (inf_dsp.fndr_dsp_flg == '\0') {
        iVar1 = isDispLamp();
        if (iVar1 == 0) {
          new_inf.rmp_alp = '\0';
        }
        else {
          SetSprFile(0x1df2100);
          EdogawaLamp(0xe6,0x160,'\x01');
        }
      }
      else {
        EdogawaLamp(pos_x,pos_y,'\0');
      }
    }
    if (inf_dsp.stts_dsp_flg != '\0') {
      if (inf_dsp.fndr_dsp_flg == '\0') {
        PlayerInformationDisp(0,0);
      }
      else {
        PlayerInformationDisp(pos_x,pos_y);
      }
    }
    if (inf_dsp.scor_dsp != '\0') {
      iVar1 = 1;
      if ((plyr_wrk.sta & 1) == 0) {
        iVar1 = 0x3c;
      }
      PhotoScoreDisp((uint)(ushort)plyr_wrk.ap_timer,iVar1);
    }
  }
  return;
}

void InformationDispModeCtrl() {
  if (inf_dsp.stts_dsp_flg != '\0') {
    inf_dsp.stts_dsp_flg = '\x02';
  }
  if (inf_dsp.fndr_dsp_flg != '\0') {
    inf_dsp.fndr_dsp_flg = '\x02';
  }
  if (plyr_wrk.mode == 1) {
    inf_dsp.fndr_dsp_flg = '\x03';
    inf_dsp.stts_dsp_flg = '\x03';
  }
  if ((ushort)plyr_wrk.hp < (ushort)info_wrk.plyr_hp) {
    inf_dsp.stts_fade_tmr = 0xb4;
  }
  if (inf_dsp.stts_fade_tmr != '\0') {
    inf_dsp.stts_dsp_flg = '\x03';
  }
  if (ev_wrk.movie_on != 0) {
    inf_dsp.stts_dsp_flg = '\0';
    inf_dsp.fndr_dsp_flg = '\0';
  }
  if ((ingame_wrk.stts & 0x20) != 0) {
    inf_dsp.stts_dsp_flg = '\0';
    inf_dsp.fndr_dsp_flg = '\0';
  }
  if (ingame_wrk.mode == 10) {
    inf_dsp.stts_dsp_flg = '\0';
    inf_dsp.fndr_dsp_flg = '\0';
  }
  if (plyr_wrk.ap_timer == 0) {
    if (inf_dsp.phot_shot != '\0') {
      inf_dsp.fndr_dsp_flg = '\x01';
      inf_dsp.stts_dsp_flg = '\x01';
      inf_dsp.phot_shot = inf_dsp.phot_shot + 0xff;
    }
  }
  else {
    inf_dsp.phot_shot = '\n';
    inf_dsp.stts_dsp_flg = '\0';
    inf_dsp.fndr_dsp_flg = '\0';
  }
  SttsFade();
  FndrFade();
  if (inf_dsp.fndr_dsp_flg != '\0') {
    SetSprFile(0x1d88100);
    SetSprFile(0x1df2100);
  }
  if (inf_dsp.stts_dsp_flg == '\0') {
    new_inf.red_bar = (short)(int)((float)((uint)(ushort)plyr_wrk.hp * 0xf3) / 500.0);
    return;
  }
  SetSprFile(0x1df2100);
  return;
}

static void FndrInit() {
	int i;
	short int init;
	
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  FLSH_CORE *pFVar5;
  ZAN *zz;
  
  pFVar5 = flsh_max;
  iVar4 = 0x2c0000;
  iVar3 = 4;
  do {
    iVar1 = iVar4 >> 0x10;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 0xf0000;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    pFVar5->flsh_tmr = (uchar)iVar1;
    pFVar5 = pFVar5 + 1;
  } while (-1 < iVar3);
  new_inf.bon_bak = 0xff;
  iVar3 = 2;
  new_inf.pht_scr = (short)photo_wrk.score;
  puVar2 = new_inf.shot_kind + 2;
  new_inf.pht_cnt_bak = ingame_wrk.pht_cnt;
  new_inf.mfb_stts = '\0';
  new_inf.buki_use_flg = '\0';
  new_inf.buki_use_alp = '\0';
  new_inf.buki_use_flr = '\0';
  new_inf.dsp_dmg_flg = '\0';
  new_inf.rmp_alp = '\0';
  do {
    *puVar2 = '\0';
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  zz = zanzo;
  new_inf.shot_kind2 = '\0';
  do {
    ZanzoSS(zz);
    zz = zz + 1;
  } while ((int)zz < 0x4025e0);
  MafubaInit(0.0,0.0);
  iVar3 = 0xb;
  new_inf.dsp_dmg_step = '\0';
  puVar2 = new_inf.dray_tmr;
  new_inf.dsp_dmg_step2 = '\0';
  new_inf.dsp_dmg_alp = '\0';
  new_inf.dmg_num_alp = '\0';
  new_inf.dmg_str_alp = '\0';
  new_inf.dmg_eff_alp = '\0';
  new_inf.dmg_wait_tm = '\0';
  new_inf.tm_max = '\0';
  do {
    puVar2[-0x24] = '\0';
    iVar3 = iVar3 + -1;
    puVar2[-0x18] = '\0';
    puVar2[-0xc] = '\0';
    *puVar2 = '\0';
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  return;
}

void InformationDispWrkSet() {
  info_wrk.frot_x = plyr_wrk.frot_x;
  info_wrk.plyr_pos_z = (ushort)(int)plyr_wrk.move_box.rot.x;
  info_wrk.plyr_hp = plyr_wrk.hp;
  info_wrk.film_num = poss_item[plyr_wrk.film_no];
  info_wrk.plyr_pos_x = (ushort)(int)plyr_wrk.move_box.spd.z;
  if (inf_dsp.stts_fade_tmr != '\0') {
    inf_dsp.stts_fade_tmr = inf_dsp.stts_fade_tmr + 0xff;
  }
  if (inf_dsp.flm_cng_tmr != '\0') {
    inf_dsp.flm_cng_tmr = inf_dsp.flm_cng_tmr + 0xff;
  }
  if (plyr_wrk.mode != 1) {
    if (inf_dsp.fndr_fade_tmr != '\0') {
      inf_dsp.fndr_fade_tmr = inf_dsp.fndr_fade_tmr + 0xff;
      return;
    }
    inf_dsp.fndr_mode_tmr = 0;
    return;
  }
  if (inf_dsp.fndr_mode_tmr != -1) {
    inf_dsp.fndr_mode_tmr = inf_dsp.fndr_mode_tmr + 1;
  }
  inf_dsp.fndr_fade_tmr = '\n';
  return;
}

void PlayerInformationDisp(short int pos_x, short int pos_y) {
  if (ingame_wrk.mode != 0xd) {
    ShowMikuPower2(pos_x,pos_y);
    return;
  }
  return;
}

void FinderDisp(short int pos_x, short int pos_y) {
	short int bon_x[4];
	short int bon_y[4];
	char bon_c[12];
	
  char *pcVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ushort bon_x [4];
  ushort bon_y [4];
  char bon_c [12];
  
  uVar3 = (int)bon_x + 7U & 7;
  puVar2 = (ulong *)(((int)bon_x + 7U) - uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003570c0 >> (7 - uVar3) * 8;
  bon_x = DAT_003570c0;
  uVar3 = (int)bon_y + 7U & 7;
  puVar2 = (ulong *)(((int)bon_y + 7U) - uVar3);
  *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 | (ulong)DAT_003570c8 >> (7 - uVar3) * 8;
  bon_y = DAT_003570c8;
  pcVar1 = bon_c + 7;
  uVar3 = (uint)pcVar1 & 7;
  *(ulong *)(pcVar1 + -uVar3) =
       *(ulong *)(pcVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_0034f470 >> (7 - uVar3) * 8;
  bon_c._0_8_ = DAT_0034f470;
  pcVar1 = bon_c + 0xb;
  uVar3 = (uint)pcVar1 & 3;
  *(uint *)(pcVar1 + -uVar3) =
       *(uint *)(pcVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_0034f478 >> (3 - uVar3) * 8;
  bon_c._8_4_ = DAT_0034f478;
  inf_dsp.lucky7 = ShutterChanceChk();
  NewFndrBase(pos_x,pos_y);
  WeakPoint(pos_x,pos_y);
  FilmZansu((uint)info_wrk.film_num,pos_x,pos_y,0x29,0x179,2);
  Mafuba(pos_x,pos_y,(uchar)enedmg_status,'\n','\n','\x0f','\n','\n',1,2.0,1.0);
  MafubaFinish(pos_x,pos_y,(uchar)eneseal_status,'<');
  ShowEneCtrl(pos_x,pos_y);
  GekisyaBoyGeisyaGirl(pos_x,pos_y);
  BukiyouMan(pos_x,pos_y);
  KanKinoSyogai(pos_x,pos_y);
  TameKin2(pos_x,pos_y);
  if (plyr_wrk.charge_num != '\0') {
    uVar4 = (((int)(0xc - ((uint)cam_custom_wrk.charge_max * 2 + 6 & 0xff)) >> 1 & 0xffU) +
            (uint)plyr_wrk.charge_num) - 1;
    uVar3 = uVar4 & 3;
    BigBon2((uchar)uVar4,bon_x[uVar3],bon_y[uVar3],0x140,0xe0,'\x14');
  }
  return;
}

void PhotoScoreDispOnOff(int on_off) {
  if (on_off != 0) {
    inf_dsp.scor_dsp = '\x01';
    return;
  }
  inf_dsp.scor_dsp = '\0';
  return;
}

static void SttsFade() {
  uint uVar1;
  
  if (inf_dsp.stts_dsp_flg == '\x01') {
    uVar1 = 100;
  }
  else {
    if (inf_dsp.stts_dsp_flg < 2) {
      if (inf_dsp.stts_dsp_flg == '\0') {
        inf_dsp.stts_fade_alp = '\0';
        return;
      }
      return;
    }
    if (inf_dsp.stts_dsp_flg == '\x02') {
      uVar1 = inf_dsp.stts_fade_alp - 10;
      if ((int)uVar1 < 1) {
        inf_dsp.stts_fade_alp = '\0';
        inf_dsp.stts_dsp_flg = '\0';
        return;
      }
    }
    else {
      if (inf_dsp.stts_dsp_flg != '\x03') {
        return;
      }
      uVar1 = inf_dsp.stts_fade_alp + 10;
      if (99 < uVar1) {
        uVar1 = 100;
        inf_dsp.stts_dsp_flg = '\x01';
      }
    }
  }
  inf_dsp.stts_fade_alp = (uchar)uVar1;
  return;
}

static void FndrFade() {
  uint uVar1;
  
  if (inf_dsp.fndr_dsp_flg == '\x01') {
    uVar1 = 100;
  }
  else {
    if (inf_dsp.fndr_dsp_flg < 2) {
      if (inf_dsp.fndr_dsp_flg == '\0') {
        inf_dsp.fndr_fade_alp = '\0';
        return;
      }
      return;
    }
    if (inf_dsp.fndr_dsp_flg == '\x02') {
      uVar1 = inf_dsp.fndr_fade_alp - 10;
      if ((int)uVar1 < 1) {
        inf_dsp.fndr_dsp_flg = '\0';
        inf_dsp.fndr_fade_alp = '\0';
        return;
      }
    }
    else {
      if (inf_dsp.fndr_dsp_flg != '\x03') {
        return;
      }
      uVar1 = inf_dsp.fndr_fade_alp + 5;
      if (99 < uVar1) {
        uVar1 = 100;
        inf_dsp.fndr_dsp_flg = '\x01';
      }
    }
  }
  inf_dsp.fndr_fade_alp = (uchar)uVar1;
  return;
}

static void WeakPoint(short int pos_x, short int pos_y) {
	int i;
	u_char alp;
	u_char siz;
	float ex;
	float ey;
	u_char hnt_alp_num;
	u_char ray_alp_num;
	short int hnt_all_alp;
	u_char chrg_max;
	u_char chrg_alp;
	float chrg_rate;
	short int big_size;
	
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  ENE_WRK *pEVar7;
  float *pfVar8;
  uchar *puVar9;
  int iVar10;
  byte alp;
  NEW_INF *pNVar11;
  float *pfVar12;
  float *pos;
  NEW_INF *tx;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  fVar15 = (float)uVar5;
  PutSpriteYW(0x5f,0x5f,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,fVar15 * 0.5,
              1.0,1.0,0,0xff,1,0,1);
  DspBigCircle(0x57,pos_x,pos_y,(uchar)(int)(fVar15 / 3.0),
               (ushort)(int)*(float *)(&circle_radius_tbl + (uint)cam_custom_wrk.charge_range * 4),
               '\0');
  pEVar7 = ene_wrk;
  puVar6 = inf_dsp.weak5_alp;
  pfVar8 = new_inf.ey;
  puVar9 = inf_dsp.weak5_tmr;
  do {
    alp = (byte)uVar5;
    if ((pEVar7->sta & 1) == 0) {
      if (uVar5 < *puVar6) {
        *puVar6 = alp;
      }
      if ((int)(*puVar6 - 8) < 1) {
        *puVar6 = 0;
      }
      else {
        *puVar6 = (byte)(*puVar6 - 8);
      }
    }
    else {
      uVar3 = *puVar6 + 8;
      if (uVar3 < uVar5) {
        *puVar6 = (byte)uVar3;
      }
      else {
        *puVar6 = alp;
      }
    }
    if (plyr_wrk.mode == 1) {
      uVar3 = pEVar7->sta;
    }
    else {
      if (uVar5 < *puVar6) {
        *puVar6 = alp;
      }
      uVar3 = pEVar7->sta;
    }
    sVar1 = plyr_wrk.move_box.pos.z._2_2_;
    if ((uVar3 & 0x400) == 0) {
      if (*puVar9 == 0) {
        iVar10 = (int)plyr_wrk.move_box.pos.z._0_2_;
        *puVar9 = 0;
        pfVar8[-4] = (float)iVar10;
        *pfVar8 = (float)(int)sVar1;
      }
      else {
        *puVar9 = *puVar9 - 1;
      }
    }
    else {
      if (*puVar9 < 10) {
        *puVar9 = *puVar9 + 1;
      }
      else {
        *puVar9 = 10;
      }
      sVar1 = *(short *)&pEVar7[1].move_box.se;
      pfVar8[-4] = (float)(int)pEVar7[1].move_box.reserve;
      *pfVar8 = (float)(int)sVar1;
    }
    pEVar7 = (ENE_WRK *)((int)&pEVar7[1].move_box.spd.z + 2);
    pfVar8 = pfVar8 + 1;
    puVar9 = puVar9 + 1;
    puVar6 = puVar6 + 1;
  } while ((int)pEVar7 < 0x253f50);
  pNVar11 = &new_inf;
  puVar9 = inf_dsp.hint5_tmr;
  iVar10 = 0;
  puVar6 = inf_dsp.hint5_alp;
  pfVar8 = new_inf.hy;
  pos = &plyr_wrk.fhp[1].z;
  pfVar12 = &plyr_wrk.fhp[2].y;
  tx = pNVar11;
  do {
    if (*pfVar12 == 0.0) {
      if (uVar5 < *puVar6) {
        *puVar6 = alp;
      }
      if ((int)(*puVar6 - 8) < 1) {
        *puVar6 = 0;
      }
      else {
        *puVar6 = (byte)(*puVar6 - 8);
      }
      sVar1 = plyr_wrk.move_box.pos.z._2_2_;
      if (*puVar9 == 0) {
        iVar4 = (int)plyr_wrk.move_box.pos.z._0_2_;
        *puVar9 = 0;
        pNVar11->hx[0] = (float)iVar4;
        pNVar11->hy[0] = (float)(int)sVar1;
      }
      else {
        *puVar9 = *puVar9 - 1;
      }
    }
    else {
      GetCamI2DPos(pos,tx->hx,pfVar8);
      if (*puVar6 + 8 < uVar5) {
        *puVar6 = (byte)(*puVar6 + 8);
      }
      else {
        *puVar6 = alp;
      }
      if (*puVar9 < 10) {
        *puVar9 = *puVar9 + 1;
      }
      else {
        *puVar9 = 10;
      }
    }
    if ((plyr_wrk.mode != 1) && (uVar5 < *puVar6)) {
      *puVar6 = alp;
    }
    puVar6 = puVar6 + 1;
    pNVar11 = (NEW_INF *)(pNVar11->hx + 1);
    puVar9 = puVar9 + 1;
    pfVar8 = pfVar8 + 1;
    tx = (NEW_INF *)(tx->hx + 1);
    pos = pos + 4;
    iVar10 = iVar10 + 1;
    pfVar12 = pfVar12 + 4;
  } while (iVar10 < 1);
  uVar3 = 0;
  uVar5 = 0;
  puVar6 = inf_dsp.hint5_alp;
  iVar10 = 0;
  do {
    iVar10 = iVar10 + -1;
    if (*puVar6 != 0) {
      uVar3 = uVar3 + 1 & 0xff;
      uVar5 = (int)(((uVar5 & 0xffff) + (uint)*puVar6) * 0x10000) >> 0x10;
    }
    puVar6 = puVar6 + 1;
  } while (-1 < iVar10);
  if (uVar3 != 0) {
    uVar5 = (int)((float)uVar5 / (float)uVar3) & 0xff;
    FlashStarYW(flsh_chrg,'d','2',(uchar)(int)(120.0 - (float)(uVar5 * 0x3c) * 0.0078125),'\0');
    DspBigCircle(0x5b,pos_x,pos_y,(uchar)(int)((float)(uVar5 * flsh_chrg[0].alpha) / 100.0),
                 (ushort)(int)*(float *)(&circle_radius_tbl + (uint)cam_custom_wrk.charge_range * 4)
                 ,'\x01');
  }
  cVar2 = '\0';
  if (pa_radius_set == 0) {
    uVar5 = 0x40;
  }
  else {
    fVar13 = *(float *)((int)ene_wrk + (uint)plyr_wrk.near_ene_no * 0x430 + 0x418);
    uVar5 = (int)(fVar13 + fVar13) & 0xff;
  }
  fVar13 = 8.5;
  pfVar12 = new_inf.ex;
  iVar10 = 0;
  puVar6 = inf_dsp.weak5_alp;
  pfVar8 = new_inf.ey;
  do {
    fVar14 = (float)(uint)inf_dsp.weak5_tmr[iVar10] / 10.0;
    if (*puVar6 != '\0') {
      PointerNP((ushort)(int)((*pfVar12 - (float)(int)plyr_wrk.move_box.pos.z._0_2_) * fVar14 +
                             ((float)(plyr_wrk.move_box.pos.z._0_2_ + -0x140) * fVar13) / 10.0),
                (ushort)(int)((*pfVar8 - (float)(int)plyr_wrk.move_box.pos.z._2_2_) * fVar14 +
                             ((float)(plyr_wrk.move_box.pos.z._2_2_ + -0xd1) * fVar13) / 10.0),'\0',
                *puVar6,(float)uVar5);
      cVar2 = cVar2 + '\x01';
    }
    iVar10 = iVar10 + 1;
    puVar6 = puVar6 + 1;
    pfVar8 = pfVar8 + 1;
    pfVar12 = pfVar12 + 1;
  } while (iVar10 < 4);
  fVar13 = GetEnePowerDegree();
  if (fVar13 == -1.0) {
    fVar13 = DAT_00355d3c;
    if ((DAT_00355d3c <= plyr_wrk.charge_rate) &&
       (fVar13 = plyr_wrk.charge_rate, 3.0 < plyr_wrk.charge_rate)) {
      fVar13 = 3.0;
    }
    FlashStarYW(flsh_chrg + 1,'d','2',(uchar)(int)(120.0 - (fVar13 * 60.0) / 3.0),'\0');
    uVar3 = (int)((float)(((int)((fVar15 * fVar13) / 3.0) & 0xffU) * (uint)flsh_chrg[1].alpha) /
                 100.0) & 0xff;
    if (uVar3 != 0) {
      DspBigCircle(0x5b,pos_x,pos_y,(uchar)uVar3,
                   (ushort)(int)*(float *)(&circle_radius_tbl +
                                          (uint)cam_custom_wrk.charge_range * 4),'\x01');
    }
  }
  if (cVar2 != '\0') {
    return;
  }
  PointerNP(pos_x,pos_y,'\0',alp,(float)uVar5);
  return;
}

static void DspBigCircle(u_short lu_chr, short int pos_x, short int pos_y, u_char alp, short int size_r, u_char cl_ptn) {
	int i;
	DISP_SPRT ds;
	
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  DISP_SPRT ds;
  
  uVar4 = (long)lu_chr & 0xffff;
  iVar3 = (int)uVar4;
  iVar2 = iVar3 + 3;
  if (uVar4 <= (ulong)(long)iVar2) {
    fVar5 = (float)(int)(short)pos_y;
    do {
      CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + iVar3 * 0x20));
      ds.x = ds.x + (float)(int)(short)pos_x;
      ds.y = ds.y + fVar5;
      if (cl_ptn == '\x01') {
        ds.r = 0x37;
        ds.g = 0x46;
        ds.b = 0xff;
      }
      else if (cl_ptn == '\x02') {
        ds.g = 0xa1;
        ds.b = 0x26;
        ds.r = 0;
      }
      ds.alphar = 0x48;
      if (inf_dsp.lucky7 != 0) {
        ds.r = 0xfe;
        ds.g = 0x5b;
        ds.b = 7;
      }
      ds.scw = (float)(int)(short)size_r / 110.0;
      ds.csy = (float)*(int *)(&DAT_00329884 + iVar2 * 0x20);
      ds.csx = (float)*(int *)(&DAT_00329880 + iVar2 * 0x20);
      sVar1 = *(short *)(&flip_table + (int)uVar4 * 2);
      if (sVar1 == 1) {
        ds.att = ds.att | 1;
      }
      if (sVar1 == 2) {
        ds.att = ds.att | 2;
      }
      if (sVar1 == 3) {
        ds.att = ds.att | 3;
      }
      ds.tex1 = 0x161;
      ds.zbuf = 0x10100008c;
      iVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)iVar3;
      ds.sch = ds.scw;
      ds.alpha = alp;
      DispSprD(&ds);
    } while ((long)uVar4 <= (long)iVar2);
  }
  return;
}

static void PointerNP(short int cx, short int cy, u_char red, u_char alp, float siz) {
  PointerEN(cx,cy,red,(uchar)(int)((float)((int)(char)alp & 0xff) * 0.5),siz);
  if (red != '\0') {
    SetEffects(0x20,1);
  }
  return;
}

static void PointerEN(short int pos_x, short int pos_y, u_char red, u_char alp, float size) {
	float scl;
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  ds.scw = size * 0.015625;
  CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0032a470);
  ds.x = ds.x + (float)(int)(short)pos_x;
  ds.y = ds.y + (float)(int)(short)pos_y;
  ds.csx = ds.x + (float)(ds.w >> 1) + (float)(int)(short)pos_x;
  ds.g = 0x80 - red;
  ds.r = 0x80;
  ds.csy = ds.y + (float)(ds.h >> 1) + (float)(int)(short)pos_y;
  ds.tex1 = 0x161;
  ds.zbuf = 0x10100008c;
  ds.sch = ds.scw;
  ds.b = ds.g;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void FilmZansu(int number, short int pos_x, short int pos_y, short int num_x, short int num_y, int digit) {
	int i;
	int multi10;
	int multi10_bak;
	int dsp_num;
	u_char dsp_mode;
	
  int iVar1;
  uchar no;
  uchar number_00;
  bool mode;
  int iVar2;
  int iVar3;
  int unaff_s2_lo;
  float pos_y_00;
  
  pos_y_00 = (float)(int)(short)pos_y;
  iVar3 = 1;
  iVar2 = 0;
  PutSpriteYW(2,2,(float)(int)(short)pos_x,pos_y_00,0.0,0x808080,
              (float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0,1.0,1.0,0,0xff,1,0,0);
  if (digit < 1) {
    iVar3 = 1;
  }
  else {
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 * 10;
      unaff_s2_lo = iVar3;
    } while (iVar2 < digit);
  }
  iVar2 = number % iVar3;
  if (iVar3 == 0) {
    trap(7);
  }
  if (inf_dsp.fndr_mode_tmr == 1) {
    info_wrk.film_bak = info_wrk.film_num;
  }
  if (info_wrk.film_num != info_wrk.film_bak) {
    info_wrk.film_bak = info_wrk.film_num;
    inf_dsp.flm_cng_tmr = 'P';
  }
  iVar3 = 0;
  if (0 < digit) {
    do {
      unaff_s2_lo = unaff_s2_lo / 10;
      mode = false;
      iVar1 = unaff_s2_lo * 10;
      number_00 = (uchar)((iVar2 % iVar1) / unaff_s2_lo);
      if (inf_dsp.flm_cng_tmr != '\0') {
        if (inf_dsp.flm_cng_tmr < 0x15) {
          if (iVar3 == digit + -1) {
            mode = true;
          }
          else {
            mode = (iVar2 / (unaff_s2_lo / 10)) % 10 == 9;
          }
        }
        else {
          if (iVar1 == 0) {
            trap(7);
          }
          number_00 = (uchar)(((iVar2 + 1) % iVar1) / unaff_s2_lo);
        }
      }
      no = (uchar)iVar3;
      iVar3 = iVar3 + 1;
      NumDisp(number_00,no,pos_x,pos_y,num_x,num_y,mode);
    } while (iVar3 < digit);
  }
  PutSpriteYW(0xd,0xd,(float)(int)(short)pos_x,pos_y_00,0.0,0x808080,
              (float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0,1.0,1.0,0,0xff,1,0,0);
  return;
}

static void NumDisp(u_char number, u_char no, short int pos_x, short int pos_y, short int num_x, short int num_y, u_char mode) {
	float alp;
	float slot_mov;
	int i;
	short int dsp_y;
	signed char dsp_v;
	signed char dsp_h;
	DISP_SPRT ds;
	
  uint uVar1;
  int iVar2;
  ushort tmp_y;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  DISP_SPRT ds;
  ushort dsp_y;
  char dsp_v;
  char dsp_h;
  int local_bc;
  int local_b8;
  
  iVar2 = (int)(short)pos_y;
  fVar7 = (float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0;
  if (mode == '\0') {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)((uint)DAT_003298de * (uint)inf_dsp.flm_cng_tmr) / 20.0;
  }
  local_b8 = (iVar2 + 0x1a7) * 0x10000;
  local_bc = (iVar2 + 0x16d) * 0x10000;
  uVar3 = ((int)(char)number & 0xffU) + 9;
  iVar4 = 0;
  uVar1 = uVar3 % 10;
  while( true ) {
    CopySprDToSpr(&ds,(SPRT_DAT *)((uVar1 & 0xff) * 0x20 + 0x3298d0));
    if ((int)ds.h < 0) {
      fVar5 = (float)(ds.h & 1 | ds.h >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)ds.h;
    }
    uVar1 = ds.h * iVar4;
    if ((int)uVar1 < 0) {
      fVar6 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)uVar1;
    }
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + 1;
    tmp_y = (ushort)(int)(((float)(iVar2 + (short)num_y) + fVar8 + fVar5) - fVar6);
    YVH_CUT(tmp_y,(uchar)ds.h,(ushort)((uint)local_bc >> 0x10),(ushort)((uint)local_b8 >> 0x10),
            &dsp_y,&dsp_v,(uchar *)&dsp_h);
    ds.x = (float)((int)(short)pos_x + (int)(short)num_x + ((int)(char)no & 0xffU) * 0x1d);
    ds.y = (float)((int)(short)tmp_y + (int)(short)dsp_y);
    ds.v = ds.v + (int)dsp_v;
    ds.h = (uint)dsp_h;
    ds.alpha = (byte)(int)fVar7;
    ds.tex1 = 0x161;
    DispSprD(&ds);
    if (3 < iVar4) break;
    uVar1 = (int)uVar3 % 10;
  }
  return;
}

void YVH_CUT(short int tmp_y, u_char tmp_h, short int up_lmt, short int dwn_lmt, short int *dsp_y, signed char *dsp_v, u_char *dsp_h) {
  char cVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(short)tmp_y;
  iVar4 = iVar3 + ((int)(char)tmp_h & 0xffU);
  if ((iVar4 < (short)up_lmt) || ((short)dwn_lmt < iVar3)) {
    *dsp_v = '\0';
    *dsp_h = '\0';
    *dsp_y = tmp_y;
    return;
  }
  uVar2 = (uchar)((int)(char)tmp_h & 0xffU);
  if (iVar3 < (short)up_lmt) {
    cVar1 = (char)up_lmt - (char)tmp_y;
    *dsp_v = cVar1;
    *dsp_h = uVar2 - cVar1;
    *dsp_y = (short)*dsp_v;
    return;
  }
  *dsp_v = '\0';
  if ((short)dwn_lmt < iVar4) {
    *dsp_h = (char)dwn_lmt - (char)tmp_y;
    *dsp_y = 0;
    return;
  }
  *dsp_h = uVar2;
  *dsp_y = 0;
  return;
}

static void EdogawaLamp(short int pos_x, short int pos_y, u_char out) {
	float chk;
	float pow;
	float lag_pow;
	float cng_pow;
	float cmn_pow;
	signed char pow_add;
	u_char f_max;
	float f;
	u_char sml_alp;
	u_char lag_alp;
	u_char cmn_alp;
	int i;
	u_char ene_num;
	u_char obj;
	
  uint uVar1;
  int iVar2;
  ENE_WRK *pEVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float pos_y_00;
  float pos_x_00;
  
  fVar10 = GetEnePowerDegree();
  fVar8 = fVar10;
  if (fVar10 == -1.0) {
    fVar8 = 100.0;
  }
  fVar7 = fVar8 - (float)(uint)inf_dsp.rmp_pow;
  if (0.0 < fVar7) {
    iVar2 = 4;
    if (fVar7 < 4.0) {
LAB_001b3fb4:
      iVar2 = (int)(char)(int)fVar7;
    }
  }
  else {
    iVar2 = 0;
    if (fVar7 < 0.0) {
      fVar7 = (float)(uint)inf_dsp.rmp_pow - fVar8;
      iVar2 = -4;
      if (fVar7 < 4.0) {
        fVar7 = -fVar7;
        goto LAB_001b3fb4;
      }
    }
  }
  if (iVar2 < 1) {
    if ((-1 < iVar2) ||
       (uVar9 = (uint)inf_dsp.rmp_pow, inf_dsp.rmp_pow = (char)iVar2 + inf_dsp.rmp_pow,
       fVar8 < (float)(uVar9 + iVar2))) goto LAB_001b4024;
  }
  else {
    uVar9 = (uint)inf_dsp.rmp_pow;
    inf_dsp.rmp_pow = (char)iVar2 + inf_dsp.rmp_pow;
    if ((float)(uVar9 + iVar2) < fVar8) goto LAB_001b4024;
  }
  inf_dsp.rmp_pow = (uchar)(int)fVar8;
LAB_001b4024:
  fVar8 = 4.0;
  fVar7 = (float)(uint)inf_dsp.rmp_pow;
  if (fVar7 < 4.0) {
    fVar8 = (float)((int)fVar7 & 0xff);
  }
  fVar11 = SgCosf(((float)(uint)inf_dsp.rmp_f * DAT_00355d40) / 120.0);
  if (inf_dsp.rmp_f < 0x78) {
    inf_dsp.rmp_f = inf_dsp.rmp_f + '\x01';
  }
  else {
    inf_dsp.rmp_f = '\0';
  }
  if (fVar10 == -1.0) {
    fVar8 = fVar7 + 0.0;
  }
  else {
    fVar8 = fVar7 + fVar8 * (fVar11 - 1.0) * 0.5;
  }
  if (fVar8 == 0.0) {
    fVar8 = 0.0;
  }
  if (out == '\0') {
    new_inf.rmp_alp = '\0';
    uVar9 = (uint)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0);
  }
  else {
    uVar9 = new_inf.rmp_alp + 8;
    if (0x7f < uVar9) {
      uVar9 = 0x80;
    }
    new_inf.rmp_alp = (uchar)uVar9;
  }
  fVar11 = (float)(uVar9 & 0xff);
  pEVar3 = ene_wrk;
  pos_x_00 = (float)(int)(short)pos_x;
  cVar4 = '\0';
  pos_y_00 = (float)(int)(short)pos_y;
  uVar5 = (int)((fVar11 * fVar7) / 100.0) & 0xff;
  uVar6 = (int)((fVar11 * fVar8) / 100.0) & 0xff;
  uVar1 = ene_wrk[0].sta;
  while( true ) {
    if ((uVar1 & 1) != 0) {
      cVar4 = cVar4 + '\x01';
    }
    pEVar3 = (ENE_WRK *)((int)&pEVar3[1].move_box.spd.z + 2);
    if (0x253f4f < (int)pEVar3) break;
    uVar1 = pEVar3->sta;
  }
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  fVar8 = 0.0;
  uVar1 = 1;
  if (cVar4 != '\0') {
    uVar1 = 2;
  }
  if (fVar10 == 0.0) {
    uVar1 = 0;
  }
  if (out != '\0') {
    PutSpriteYW(0x9c,0x9c,0.0,0.0,0.0,0x808080,fVar11,1.0,1.0,0,0xff,1,0,1);
  }
  PutSpriteYW(0x8a,0x8a,pos_x_00,pos_y_00,fVar8,0x808080,fVar11,1.0,1.0,0,0xff,1,0,1);
  if (uVar1 == 1) {
    fVar7 = (float)uVar5;
    PutSpriteYW(0x8c,0x8c,pos_x_00,pos_y_00,fVar8,0x808080,fVar7,1.0,1.0,0,0xff,1,1,1);
    fVar10 = (float)uVar6;
    PutSpriteYW(0x8c,0x8c,pos_x_00,pos_y_00,fVar8,0x808080,fVar7,1.0,1.0,0,0xff,1,1,1);
    PutSpriteYW(0x8d,0x8d,pos_x_00,pos_y_00,fVar8,0x808080,fVar10,1.0,1.0,0,0xff,1,1,1);
    PutSpriteYW(0x8d,0x8d,pos_x_00,pos_y_00,fVar8,0x808080,fVar10,1.0,1.0,0,0xff,1,1,1);
  }
  else if ((1 < uVar1) && (uVar1 == 2)) {
    fVar7 = (float)uVar5;
    PutSpriteYW(0x8e,0x8e,pos_x_00,pos_y_00,fVar8,0x808080,fVar7,1.0,1.0,0,0xff,1,1,1);
    fVar10 = (float)uVar6;
    PutSpriteYW(0x8e,0x8e,pos_x_00,pos_y_00,fVar8,0x808080,fVar7,1.0,1.0,0,0xff,1,1,1);
    PutSpriteYW(0x8f,0x8f,pos_x_00,pos_y_00,fVar8,0x808080,fVar10,1.0,1.0,0,0xff,1,1,1);
    PutSpriteYW(0x8f,0x8f,pos_x_00,pos_y_00,fVar8,0x808080,fVar10,1.0,1.0,0,0xff,1,1,1);
  }
  PutSpriteYW(0x8b,0x8b,pos_x_00,pos_y_00,0.0,0x808080,(float)((uVar9 & 0xff) >> 1),1.0,1.0,0,0xff,1
              ,1,1);
  return;
}

static void NewFndrBase(short int pos_x, short int pos_y) {
  float scl_x;
  float alp;
  float pos_y_00;
  float pos_x_00;
  
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  scl_x = 1.0;
  alp = (float)((int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff);
  PutSpriteYW(0,1,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x52,0x54,pos_x_00,pos_y_00,0.0,0x808080,alp,scl_x,scl_x,0,0xff,1,0,0);
  PutSpriteYW(0x3f,0x3f,pos_x_00,pos_y_00,0.0,0x808080,alp,scl_x,scl_x,0,0xff,1,0,0);
  return;
}

static void BigBon(u_char bon_num, short int sx, short int sy, short int ex, short int ey, u_char mov_tim) {
	int i;
	int j;
	float pr1;
	short int msx;
	short int msy;
	short int mex;
	short int mey;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short top_label;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  byte *zz;
  int iVar8;
  ulong in_hi;
  float fVar9;
  float fVar10;
  float rad;
  ushort msx;
  
  uVar5 = (int)(char)bon_num & 0xff;
  if (uVar5 != new_inf.bon_bak) {
    if ((new_inf.bon_bak < uVar5) && (new_inf.bon_mov_cnt[uVar5] == '\0')) {
      new_inf.bon_mov_cnt[uVar5] = mov_tim;
      new_inf.bon_mov_sx[uVar5] = sx;
      new_inf.bon_mov_sy[uVar5] = sy;
      in_hi = 0;
      new_inf.bon_mov_ex[uVar5] = ex;
      new_inf.bon_mov_ey[uVar5] = ey;
      new_inf.bon_mov_tm[uVar5] = mov_tim;
      ZanzoLS((uchar *)znz[uVar5]);
    }
    new_inf.bon_bak = (uchar)uVar5;
  }
  iVar6 = 0;
  do {
    puVar7 = new_inf.bon_mov_cnt + iVar6;
    if (*puVar7 != 0) {
      iVar8 = 0;
      zz = (byte *)(((uint)in_hi | 0x4026f8) + iVar6 * 6);
      in_hi = 0;
      uVar1 = new_inf.bon_mov_sx[iVar6];
      uVar2 = new_inf.bon_mov_ey[iVar6];
      uVar3 = new_inf.bon_mov_ex[iVar6];
      uVar4 = new_inf.bon_mov_sy[iVar6];
      ZanzoLM(zz,(uchar)(int)((float)((uint)*puVar7 * 100) / (float)(uint)new_inf.bon_mov_tm[iVar6])
             );
      top_label = (short)iVar6 + 0x26;
      *puVar7 = *puVar7 - 1;
      do {
        if (*zz != 0xff) {
          rad = (float)(uint)*zz / 100.0;
          fVar9 = SgSinf(rad);
          fVar10 = SgSinf(rad);
          in_hi = (ulong)(uint)(iVar8 * iVar8 >> 0x1f);
          PutSpriteYW(top_label,top_label,
                      (float)(int)(short)(int)((float)((int)(short)uVar1 - (int)(short)uVar3) * rad
                                               * rad + (float)(int)(short)uVar3),
                      (float)(int)(short)(int)((float)((int)(short)uVar4 - (int)(short)uVar2) * rad
                                               * rad + (float)(int)(short)uVar2),0.0,0x808080,
                      (float)((int)((fVar9 * 320.0 * fVar10 * (float)(0x19 - iVar8 * iVar8)) / 25.0)
                             & 0xff) / 10.0,3.0,3.0,0,0xff,0,1,1);
        }
        iVar8 = iVar8 + 1;
        zz = zz + 1;
      } while (iVar8 < 6);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  return;
}

static void BigBon2(u_char bon_num, short int sx, short int sy, short int ex, short int ey, u_char mov_tim) {
	int i;
	int j;
	u_char alp;
	float spd;
	short int msx;
	short int msy;
	short int mex;
	short int mey;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short top_label;
  uint uVar5;
  int iVar6;
  byte *zz;
  uchar *puVar7;
  int iVar8;
  ulong in_hi;
  float fVar9;
  float fVar10;
  ushort mey;
  
  uVar5 = (int)(char)bon_num & 0xff;
  if (uVar5 != new_inf.bon_bak) {
    if ((new_inf.bon_bak < uVar5) && (new_inf.bon_mov_cnt[uVar5] == '\0')) {
      new_inf.bon_mov_cnt[uVar5] = mov_tim;
      new_inf.bon_mov_sx[uVar5] = sx;
      new_inf.bon_mov_sy[uVar5] = sy;
      in_hi = 0;
      new_inf.bon_mov_ex[uVar5] = ex;
      new_inf.bon_mov_ey[uVar5] = ey;
      new_inf.bon_mov_tm[uVar5] = mov_tim;
      ZanzoLS((uchar *)znz[uVar5]);
    }
    new_inf.bon_bak = (uchar)uVar5;
  }
  iVar6 = 0;
  do {
    puVar7 = new_inf.bon_mov_cnt + iVar6;
    if (*puVar7 != 0) {
      iVar8 = 0;
      zz = (byte *)(((uint)in_hi | 0x4026f8) + iVar6 * 6);
      in_hi = 0;
      uVar1 = new_inf.bon_mov_ey[iVar6];
      uVar2 = new_inf.bon_mov_sx[iVar6];
      uVar3 = new_inf.bon_mov_ex[iVar6];
      uVar4 = new_inf.bon_mov_sy[iVar6];
      ZanzoLM(zz,(uchar)(int)((float)((uint)*puVar7 * 100) / (float)(uint)new_inf.bon_mov_tm[iVar6])
             );
      top_label = (short)iVar6 + 0x26;
      *puVar7 = *puVar7 - 1;
      do {
        if (*zz != 0xff) {
          fVar9 = SgSinf(((float)(uint)*zz * DAT_00355d44) / 100.0);
          in_hi = (ulong)(uint)(iVar8 * iVar8 >> 0x1f);
          fVar10 = 0.0;
          if (*zz < 0x47) {
            fVar10 = (float)(0x46 - (uint)*zz) / 70.0;
          }
          PutSpriteYW(top_label,top_label,
                      (float)(int)(short)(int)((float)((int)(short)uVar3 - (int)(short)uVar2) *
                                               fVar10 * fVar10 + (float)(int)(short)uVar2),
                      (float)(int)(short)(int)((float)((int)(short)uVar1 - (int)(short)uVar4) *
                                               fVar10 * fVar10 + (float)(int)(short)uVar4),0.0,
                      0x808080,(float)((int)((fVar9 * 160.0 * (float)(0x19 - iVar8 * iVar8)) / 25.0)
                                      & 0xff) / 10.0,3.0,3.0,0,0xff,0,1,1);
        }
        iVar8 = iVar8 + 1;
        zz = zz + 1;
      } while (iVar8 < 3);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  return;
}

static char GetEnePoint() {
	int i;
	
  short sVar1;
  int iVar2;
  short *psVar3;
  PHOTO_WRK *pPVar4;
  
  if ((new_inf.pht_cnt_bak != ingame_wrk.pht_cnt) &&
     (CONCAT62(photo_wrk.score._2_6_,(short)photo_wrk.score) != 0)) {
    psVar3 = new_inf.ene_dmg;
    new_inf.pht_cnt_bak = ingame_wrk.pht_cnt;
    new_inf.pht_scr = (short)photo_wrk.score;
    iVar2 = 3;
    do {
      psVar3[-4] = -1;
      iVar2 = iVar2 + -1;
      *psVar3 = -1;
      psVar3 = psVar3 + 1;
    } while (-1 < iVar2);
    new_inf.hit_hp_ovr_ene = '<';
    new_inf.hit_hp_ovr_ene_wait = '\0';
    new_inf.dsp_dmg_flg = '\0';
    new_inf.dsp_dmg_num = '\0';
    new_inf.dsp_dmg_step = '\0';
    new_inf.dsp_dmg_step2 = '\0';
    pPVar4 = &photo_wrk;
    sVar1 = photo_wrk.ene[0].no;
    while( true ) {
      if ((sVar1 != -1) && (sVar1 = pPVar4->ene[0].dmg, sVar1 != 0)) {
        new_inf.ene_no[new_inf.dsp_dmg_flg] = pPVar4->ene[0].wrk_no;
        new_inf.ene_dmg[new_inf.dsp_dmg_flg] = sVar1;
        new_inf.dsp_dmg_flg = new_inf.dsp_dmg_flg + '\x01';
      }
      if (0x26583f < (int)&pPVar4->plyr) break;
      sVar1 = pPVar4->ene[1].no;
      pPVar4 = (PHOTO_WRK *)&pPVar4->plyr;
    }
    if (new_inf.dsp_dmg_flg != '\0') {
      new_inf.dsp_dmg_num = new_inf.dsp_dmg_flg;
      new_inf.dsp_dmg_step2 = '\x01';
      new_inf.dsp_dmg_step = '\x01';
    }
    return '\x01';
  }
  return '\0';
}

static void MafubaInit(float t2_s1, float t2_s2) {
  new_inf.mfb_drain = '\0';
  new_inf.mfb_wait = '\0';
  new_inf.mfb_effect = '\0';
  new_inf.se_wait = '\0';
  new_inf.se_num = '\0';
  new_inf.mfb_num_siz_x = (uchar)(int)(t2_s1 * 10.0);
  new_inf.mfb_lgt_alp = '\0';
  new_inf.mfb_lfl_alp = '\0';
  new_inf.mfb_num_alp = '\0';
  new_inf.mfb_nfl_alp = '\0';
  new_inf.ene_dead_tmr = '\0';
  new_inf.ene_dead_alp = '\0';
  new_inf.mfb_stts = '\0';
  new_inf.mfb_num_siz_y = new_inf.mfb_num_siz_x;
  ZanzoSS(&dmg_scr);
  new_inf.shot_fad = '\0';
  new_inf.shot_mov = '\0';
  new_inf.shot_pse = '\0';
  new_inf.shot_lgt = '\0';
  return;
}

static u_char Mafuba(short int pos_x, short int pos_y, u_char stts, u_char t1, u_char t2, u_char t3, u_char t4, u_char t5, int t1_sw, float t2_s1, float t2_s2) {
	u_char t1_sw;
	int j;
	u_char alp_max;
	
  uchar uVar1;
  char cVar2;
  uchar uVar3;
  uchar *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  iVar9 = (int)(short)pos_x;
  iVar10 = (int)(short)pos_y;
  uVar7 = (int)(char)t2 & 0xff;
  uVar6 = (long)(char)t1 & 0xff;
  uVar8 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  cVar2 = GetEnePoint();
  if (cVar2 != '\0') {
    MafubaInit(t2_s1,t2_s2);
  }
  if (stts == '\x01') {
    uVar1 = stts;
    if (new_inf.mfb_stts != '\0') goto LAB_001b50b8;
  }
  else {
    if (stts != '\x02') {
      new_inf.mfb_stts = '\0';
      goto LAB_001b50b8;
    }
    uVar3 = new_inf.mfb_stts;
    if (new_inf.mfb_stts == '\x01') {
      DameDameInit();
      uVar3 = '\x02';
      new_inf.mfb_lgt_bak = new_inf.mfb_lgt_alp;
      new_inf.mfb_effect = (char)uVar7;
      new_inf.mfb_stts = stts;
    }
    uVar1 = new_inf.mfb_stts;
    if (uVar3 == '\x06') {
      new_inf.mfb_stts = '\0';
      uVar1 = new_inf.mfb_stts;
    }
  }
  new_inf.mfb_stts = uVar1;
LAB_001b50b8:
  if (new_inf.mfb_stts - 1 < 5) {
    switch(new_inf.mfb_stts) {
    case '\x01':
      SndEffLoop();
      if ((t1_sw & 0xffU) == 0) {
        if (new_inf.mfb_drain < '\x01') {
          new_inf.mfb_drain = '\0';
        }
        else {
          new_inf.mfb_drain = new_inf.mfb_drain + -1;
        }
      }
      else if ((long)new_inf.mfb_drain < (long)uVar6) {
        new_inf.mfb_drain = new_inf.mfb_drain + '\x01';
      }
      else {
        new_inf.mfb_drain = (char)uVar6;
      }
      new_inf.mfb_lgt_alp =
           (uchar)(int)((float)uVar8 * ((float)(int)new_inf.mfb_drain / (float)(int)uVar6));
      new_inf.mfb_lfl_alp = new_inf.mfb_lgt_alp;
      break;
    case '\x02':
      if ('\0' < new_inf.mfb_drain) {
        new_inf.mfb_drain = new_inf.mfb_drain + -1;
      }
      new_inf.mfb_lfl_alp =
           (uchar)(int)((float)(uVar8 * (int)new_inf.mfb_drain) / (float)(int)uVar6);
      if (new_inf.mfb_effect < '\x01') {
        new_inf.mfb_stts = '\x03';
        new_inf.mfb_wait = t3;
      }
      else {
        new_inf.mfb_effect = new_inf.mfb_effect + -1;
      }
      fVar12 = (float)uVar7;
      fVar11 = (float)(int)new_inf.mfb_effect / fVar12;
      new_inf.mfb_lgt_alp =
           (uchar)(int)((float)((uint)new_inf.mfb_lgt_bak * (int)new_inf.mfb_effect) / fVar12);
      new_inf.mfb_num_alp =
           (uchar)(int)((float)(uVar8 * (uVar7 - (int)new_inf.mfb_effect)) / fVar12);
      new_inf.mfb_num_siz_x = (uchar)(int)((t2_s2 - (t2_s2 - t2_s1) * fVar11 * fVar11) * 10.0);
      new_inf.mfb_num_siz_y = new_inf.mfb_num_siz_x;
      break;
    case '\x03':
      if (new_inf.mfb_wait == '\0') {
        new_inf.mfb_effect = (char)((int)(char)t4 & 0xffU);
        new_inf.mfb_stts = '\x04';
      }
      else {
        new_inf.mfb_wait = new_inf.mfb_wait + -1;
      }
      break;
    case '\x04':
      if (new_inf.mfb_effect < '\x01') {
        new_inf.mfb_drain = (char)((int)(char)t5 & 0xffU);
        new_inf.mfb_stts = '\x05';
      }
      else {
        new_inf.mfb_effect = new_inf.mfb_effect + -1;
      }
      fVar11 = SgSinf(((float)(int)new_inf.mfb_effect * DAT_00355d48) /
                      (float)((int)(char)t4 & 0xffU));
      new_inf.mfb_nfl_alp = (uchar)(int)((float)uVar8 * fVar11);
      break;
    case '\x05':
      if (new_inf.mfb_drain < '\x01') {
        new_inf.mfb_stts = '\x06';
        point_get_end = '\x01';
      }
      else {
        new_inf.mfb_drain = new_inf.mfb_drain + -1;
      }
      new_inf.mfb_num_alp =
           (uchar)(int)((float)(uVar8 * (int)new_inf.mfb_drain) / (float)((int)(char)t5 & 0xffU));
    }
  }
  if (new_inf.mfb_lgt_alp != '\0') {
    PutSpriteYW(0x40,0x40,(float)iVar9,(float)iVar10,0.0,0x808080,(float)(uint)new_inf.mfb_lgt_alp,
                1.0,1.0,0,0xff,1,1,0);
  }
  if (new_inf.mfb_lfl_alp != '\0') {
    PutSpriteYW(0x3e,0x3e,(float)(iVar9 + -5),(float)(iVar10 + 0x10f),0.0,0x808080,
                (float)(uint)new_inf.mfb_lfl_alp * 0.5,1.0,1.0,0,0xff,1,1,0);
  }
  ZanzoSM(&dmg_scr,new_inf.mfb_stts,new_inf.mfb_num_alp,new_inf.mfb_num_siz_x,new_inf.mfb_num_siz_y,
          '\x01');
  puVar4 = dmg_scr.num2;
  iVar5 = 0;
  do {
    if (*puVar4 != 0xff) {
      DameEffNumber('\x01',new_inf.pht_scr,pos_x,pos_y,((ZAN *)(puVar4 + -6))->num1[0],
                    (uchar)(int)((float)((uint)*puVar4 * (6 - iVar5)) / 6.0),puVar4[6],puVar4[0xc]);
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 6);
  if (new_inf.mfb_nfl_alp != '\0') {
    PutSpriteYW(0x19,0x19,(float)iVar9,(float)iVar10,0.0,0x808080,
                (float)(uint)new_inf.mfb_nfl_alp * 0.5,1.0,1.0,0,0xff,1,1,0);
  }
  return new_inf.mfb_stts;
}

static void MafubaFinish(short int pos_x, short int pos_y, u_char start, u_char time) {
	u_char alp_max;
	
  uchar uVar1;
  uint uVar2;
  float rot;
  
  uVar2 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  uVar1 = time;
  if (((start == '\0') && (uVar1 = new_inf.ene_dead_tmr + 0xff, new_inf.ene_dead_tmr == '\0')) ||
     (new_inf.ene_dead_tmr = uVar1, new_inf.ene_dead_tmr == '\0')) {
    if ((int)(new_inf.ene_dead_alp - 0x10) < 1) {
      new_inf.ene_dead_alp = '\0';
    }
    else {
      new_inf.ene_dead_alp = (uchar)(new_inf.ene_dead_alp - 0x10);
    }
  }
  else if (new_inf.ene_dead_alp + 0x10 < uVar2) {
    new_inf.ene_dead_alp = (uchar)(new_inf.ene_dead_alp + 0x10);
  }
  else {
    new_inf.ene_dead_alp = (uchar)uVar2;
  }
  if (new_inf.ene_dead_alp == '\0') {
    return;
  }
  rot = 0.0;
  PutSpriteYW(0x40,0x40,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,
              (float)(uint)new_inf.ene_dead_alp,1.0,1.0,0,0xff,1,1,0);
  PutSpriteYW(0x3e,0x3e,(float)((short)pos_x + -5),(float)((short)pos_y + 0x10f),rot,0x808080,
              (float)(uint)new_inf.ene_dead_alp * 0.5,1.0,1.0,0,0xff,1,1,0);
  return;
}

static void DameEffNumber(u_char type, u_short num, short int pos_x, short int pos_y, u_char stts, u_char num_alp, u_char num_siz_x, u_char num_siz_y) {
	u_char keta;
	u_char adj;
	float temp;
	
  uint uVar1;
  uint num_00;
  uint uVar2;
  uint digit;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = (uint)(short)pos_x;
  num_00 = (int)num & 0xffff;
  uVar3 = (int)(char)num_alp & 0xff;
  uVar2 = (int)(char)num_siz_x & 0xff;
  uVar1 = (int)(char)num_siz_y & 0xff;
  if ((uVar2 != 0xff) && (uVar1 != 0xff)) {
    digit = 1;
    for (fVar5 = (float)num_00; 10.0 <= fVar5; fVar5 = fVar5 / 10.0) {
      digit = digit + 1 & 0xff;
    }
    if (uVar3 != 0) {
      if (type == '\0') {
        PutNumberYW(0xd,num_00,
                    (ushort)(((uVar4 & 0xffff) -
                             (((int)((float)(digit * 0x12) * 0.5) & 0xffU) - 0x87)) * 0x10000 >>
                            0x10),pos_y + 0x5c,(float)uVar2 / 10.0,(float)uVar1 / 10.0,0x808080,
                    (ushort)uVar3,-1,digit,0);
      }
      else {
        fVar5 = (float)uVar2 / 10.0;
        PutNumberYW(7,num_00,(ushort)(((uVar4 & 0xffff) -
                                      (((int)((float)(digit * 0xf) * 0.5) & 0xffU) - 0x3b)) *
                                      0x10000 >> 0x10),pos_y + 0x147,fVar5,(float)uVar1 / 10.0,
                    0x808080,(ushort)uVar3,-1,digit,0);
        PutSpriteYW(0x18,0x18,(float)uVar4,(float)(int)(short)pos_y,0.0,0x808080,(float)uVar3,fVar5,
                    (float)uVar1 / 10.0,0,0xff,1,0,0);
      }
    }
  }
  return;
}

static void SndEffLoop() {
  uchar uVar1;
  
  uVar1 = new_inf.se_wait + 0xff;
  if (new_inf.se_wait == '\0') {
    if (new_inf.se_num < 5) {
      SeStartFix(0x11,0,0x1000,0x1000,0);
    }
    new_inf.se_num = new_inf.se_num + '\x01';
    new_inf.se_wait = '\x05';
    uVar1 = new_inf.se_wait;
  }
  new_inf.se_wait = uVar1;
  return;
}

static void ShowEneCtrl(short int pos_x, short int pos_y) {
	u_char ene_no;
	u_char alp_max;
	u_short ene_hp;
	
  int iVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  if (plyr_wrk.near_ene_no == 0xff) {
    uVar2 = new_inf.ep_tmr + 0xff;
    if (new_inf.ep_tmr == '\0') {
      uVar2 = new_inf.ep_tmr;
      if ((int)(new_inf.ep_alp[0] - 8) < 1) {
        new_inf.ep_alp[0] = '\0';
      }
      else {
        new_inf.ep_alp[0] = (uchar)(new_inf.ep_alp[0] - 8);
      }
    }
  }
  else {
    iVar1 = (uint)plyr_wrk.near_ene_no * 0x430;
    if (*(ushort *)((int)ene_wrk + iVar1 + 8) < 0x1f5) {
      uVar4 = (uint)*(ushort *)((int)ene_wrk + iVar1 + 8);
      new_inf.bar_over = '\0';
    }
    else {
      uVar4 = 500;
      new_inf.bar_over = *(char *)((int)ene_wrk + iVar1 + 8) + '\f';
    }
    new_inf.ep_tmr = 0xb4;
    new_inf.ep_bar =
         (uchar)(int)((float)(((int)((float)(uVar4 * 100) / 500.0) & 0xffU) * 0x99) / 100.0);
    uVar2 = new_inf.ep_tmr;
    if (new_inf.ep_alp[0] + 8 < uVar5) {
      new_inf.ep_alp[0] = (uchar)(new_inf.ep_alp[0] + 8);
    }
    else {
      new_inf.ep_alp[0] = (uchar)uVar5;
    }
  }
  new_inf.ep_tmr = uVar2;
  if (new_inf.dsp_dmg_flg != '\0') {
    cVar3 = EneDamegeCtrl(pos_x,pos_y);
    if (cVar3 != '\x01') {
      if ((cVar3 < '\x02') || (cVar3 != '\x02')) {
        return;
      }
      new_inf.ep_bar = '\0';
      new_inf.ep_alp[0] = '\0';
    }
  }
  ShowEnePower(new_inf.ep_bar,new_inf.ep_bar,pos_x,pos_y,new_inf.ep_alp[0],new_inf.bar_over);
  return;
}

static char EneDamegeCtrl(short int pos_x, short int pos_y) {
	u_char alp_max;
	u_char ep_bar1;
	u_char dsp_no;
	u_short ene_no;
	u_short ene_dmg;
	u_short bar_red;
	u_short bar_blu;
	
  short sVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = (uint)new_inf.dsp_dmg_num - (uint)new_inf.dsp_dmg_flg & 0xff;
  uVar6 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  sVar1 = new_inf.dsp_dmg_red;
  switch(new_inf.dsp_dmg_step) {
  case '\x01':
    new_inf.dsp_dmg_step = '\x02';
    new_inf.dsp_dmg_step2 = '\x01';
    new_inf.dsp_dmg_alp = '\0';
    new_inf.dsp_dmg_blu = *(short *)((int)ene_wrk + (uint)(ushort)new_inf.ene_no[uVar5] * 0x430 + 8)
    ;
    sVar1 = new_inf.ene_dmg[uVar5] + new_inf.dsp_dmg_blu;
    break;
  case '\x02':
    if (new_inf.dsp_dmg_alp + 8 < uVar6) {
      new_inf.dsp_dmg_alp = (uchar)(new_inf.dsp_dmg_alp + 8);
    }
    else {
      new_inf.dsp_dmg_step = '\x03';
      new_inf.dsp_dmg_alp = (uchar)uVar6;
    }
    break;
  case '\x03':
    sVar1 = new_inf.dsp_dmg_red + -1;
    if (((ushort)new_inf.dsp_dmg_red <= (ushort)new_inf.dsp_dmg_blu) &&
       (sVar1 = new_inf.dsp_dmg_red, new_inf.dsp_dmg_step2 == '\a')) {
      new_inf.dsp_dmg_red = new_inf.dsp_dmg_blu;
      new_inf.dsp_dmg_step2 = '\0';
      sVar1 = new_inf.dsp_dmg_red;
      if (new_inf.dsp_dmg_flg == '\x01') {
        if (plyr_wrk.near_ene_no == 0xff) {
          new_inf.dsp_dmg_step = '\x06';
        }
        else if (new_inf.ene_no[uVar5] == (ushort)plyr_wrk.near_ene_no) {
          new_inf.dsp_dmg_step = '\x05';
        }
      }
      else {
        new_inf.dsp_dmg_step = '\x04';
      }
    }
    break;
  case '\x04':
    if (0 < (int)(new_inf.dsp_dmg_alp - 8)) {
      new_inf.dsp_dmg_alp = (uchar)(new_inf.dsp_dmg_alp - 8);
      break;
    }
    new_inf.dsp_dmg_step = '\x05';
    goto LAB_001b5e94;
  case '\x05':
    uVar2 = new_inf.dsp_dmg_flg;
    if ((new_inf.dsp_dmg_flg == '\0') ||
       (uVar2 = new_inf.dsp_dmg_flg + 0xff, (uchar)(new_inf.dsp_dmg_flg + 0xff) == '\0')) {
      new_inf.dsp_dmg_flg = uVar2;
      new_inf.dsp_dmg_step = '\0';
      new_inf.dsp_dmg_alp = '\0';
      return '\x01';
    }
    goto LAB_001b5ecc;
  case '\x06':
    if (0 < (int)(new_inf.dsp_dmg_alp - 8)) {
      new_inf.dsp_dmg_alp = (uchar)(new_inf.dsp_dmg_alp - 8);
      break;
    }
    new_inf.dsp_dmg_step = '\a';
LAB_001b5e94:
    new_inf.dsp_dmg_alp = '\0';
    break;
  case '\a':
    uVar2 = new_inf.dsp_dmg_flg;
    if ((new_inf.dsp_dmg_flg == '\0') ||
       (uVar2 = new_inf.dsp_dmg_flg + 0xff, (uchar)(new_inf.dsp_dmg_flg + 0xff) == '\0')) {
      new_inf.dsp_dmg_flg = uVar2;
      new_inf.dsp_dmg_step = '\0';
      new_inf.dsp_dmg_alp = '\0';
      return '\x02';
    }
LAB_001b5ecc:
    new_inf.dsp_dmg_flg = new_inf.dsp_dmg_flg + 0xff;
    new_inf.dsp_dmg_step = '\x01';
  }
  new_inf.dsp_dmg_red = sVar1;
  if ((ushort)new_inf.dsp_dmg_blu < 0x1f5) {
    new_inf.bar_over = '\0';
    uVar3 = (uint)(ushort)new_inf.dsp_dmg_blu;
  }
  else {
    uVar3 = 500;
    new_inf.bar_over = (char)new_inf.dsp_dmg_blu + '\f';
  }
  uVar4 = 500;
  if ((ushort)new_inf.dsp_dmg_red < 0x1f5) {
    uVar4 = (uint)(ushort)new_inf.dsp_dmg_red;
  }
  ShowEnePower((uchar)(int)((float)(((int)((float)(uVar3 * 100) / 500.0) & 0xffU) * 0x99) / 100.0),
               (uchar)(int)((float)(((int)((float)(uVar4 * 100) / 500.0) & 0xffU) * 0x99) / 100.0),
               pos_x,pos_y,new_inf.dsp_dmg_alp,new_inf.bar_over);
  uVar2 = new_inf.dmg_wait_tm;
  if (new_inf.dsp_dmg_step2 - 1 < 6) {
    switch(new_inf.dsp_dmg_step2) {
    case '\x01':
      new_inf.dsp_dmg_step2 = '\x02';
      new_inf.dmg_str_mov = 100;
      new_inf._336_2_ = 0x1414;
      new_inf.dmg_num_mov = 100;
      new_inf._332_2_ = 0;
      new_inf.dmg_eff_alp = '\0';
      new_inf.dmg_wait_tm = '\0';
      uVar2 = new_inf.dmg_wait_tm;
      break;
    case '\x02':
      if (new_inf.dmg_num_mov_tim < 0x10) {
        new_inf.dsp_dmg_step2 = '\x03';
      }
      else {
        new_inf._336_2_ = new_inf._336_2_ & 0xff00 | (ushort)(byte)(new_inf.dmg_num_mov_tim - 1);
      }
      fVar7 = 1.0 - (float)(uint)new_inf.dmg_num_mov_tim / 20.0;
      new_inf.dmg_num_mov =
           (ushort)(int)(((float)(uint)new_inf.dmg_num_mov_tim / 20.0) * 100.0 *
                        ((float)(uint)new_inf.dmg_num_mov_tim / 20.0));
      new_inf._332_2_ = new_inf._332_2_ & 0xff00 | (ushort)(byte)(int)((float)uVar6 * fVar7 * fVar7)
      ;
      break;
    case '\x03':
      if (new_inf.dmg_num_mov_tim != '\0') {
        new_inf._336_2_ = new_inf._336_2_ & 0xff00 | (ushort)(byte)(new_inf.dmg_num_mov_tim - 1);
      }
      if (new_inf.dmg_str_mov_tim != '\0') {
        new_inf._336_2_ = new_inf._336_2_ & 0xff | (ushort)(byte)(new_inf.dmg_str_mov_tim - 1) << 8;
      }
      if (new_inf._336_2_ == 0) {
        new_inf.dmg_wait_tm = '\n';
        new_inf.dsp_dmg_step2 = '\x04';
      }
      fVar9 = (float)(uint)new_inf.dmg_num_mov_tim / 20.0;
      fVar7 = (float)(uint)new_inf.dmg_str_mov_tim / 20.0;
      fVar10 = 1.0 - (float)(uint)new_inf.dmg_str_mov_tim / 20.0;
      fVar8 = 1.0 - (float)(uint)new_inf.dmg_num_mov_tim / 20.0;
      new_inf.dmg_num_mov = (ushort)(int)(fVar9 * 100.0 * fVar9);
      new_inf.dmg_str_mov = (ushort)(int)(fVar7 * 100.0 * fVar7);
      new_inf._332_2_ =
           CONCAT11((char)(int)((float)uVar6 * fVar10 * fVar10),
                    (char)(int)((float)uVar6 * fVar8 * fVar8));
      uVar2 = new_inf.dmg_wait_tm;
      break;
    case '\x04':
      uVar2 = new_inf.dmg_wait_tm + 0xff;
      if (new_inf.dmg_wait_tm == '\0') {
        new_inf.dsp_dmg_step2 = '\x05';
        new_inf.dmg_eff_tim = '\n';
        uVar2 = new_inf.dmg_wait_tm;
      }
      break;
    case '\x05':
      uVar2 = new_inf.dmg_eff_tim + 0xff;
      if (new_inf.dmg_eff_tim == '\0') {
        new_inf.dsp_dmg_step2 = '\x06';
        uVar2 = new_inf.dmg_eff_tim;
      }
      new_inf.dmg_eff_tim = uVar2;
      fVar7 = SgSinf(((float)(uint)new_inf.dmg_eff_tim * DAT_00355d4c) / 10.0);
      new_inf.dmg_eff_alp = (uchar)(int)((float)uVar6 * fVar7);
      uVar2 = new_inf.dmg_wait_tm;
      break;
    case '\x06':
      if ((int)(new_inf.dmg_num_alp - 8) < 1) {
        new_inf._332_2_ = new_inf._332_2_ & 0xff00;
      }
      else {
        new_inf._332_2_ = new_inf._332_2_ & 0xff00 | (ushort)(byte)(new_inf.dmg_num_alp - 8);
      }
      if ((int)(new_inf.dmg_str_alp - 8) < 1) {
        new_inf._332_2_ = new_inf._332_2_ & 0xff;
      }
      else {
        new_inf._332_2_ = new_inf._332_2_ & 0xff | (ushort)(byte)(new_inf.dmg_str_alp - 8) << 8;
      }
      if (new_inf._332_2_ == 0) {
        new_inf.dsp_dmg_step2 = '\a';
      }
    }
  }
  new_inf.dmg_wait_tm = uVar2;
  if (new_inf.dmg_num_alp != '\0') {
    DameEffNumber('\0',new_inf.ene_dmg[uVar5],pos_x + new_inf.dmg_num_mov,pos_y,'\0',
                  new_inf.dmg_num_alp,'\n','\n');
  }
  if (new_inf.dmg_str_alp != '\0') {
    PutSpriteYW(0x86,0x86,(float)((int)(short)pos_x + (int)(short)new_inf.dmg_str_mov),
                (float)(int)(short)pos_y,0.0,0x808080,(float)(uint)new_inf.dmg_str_alp,1.0,1.0,0,
                0xff,1,0,0);
  }
  if (new_inf.dmg_eff_alp != '\0') {
    DameEffNumber('\0',new_inf.ene_dmg[uVar5],pos_x,pos_y,'\0',new_inf.dmg_eff_alp,'\n','\n');
    PutSpriteYW(0x86,0x86,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,
                (float)(uint)new_inf.dmg_eff_alp,1.0,1.0,0,0xff,1,0,0);
  }
  return '\0';
}

static void ShowEnePower(u_char blu_bar, u_char red_bar, short int pos_x, short int pos_y, u_char alp, u_char bar_over) {
	float rgb_per;
	float alp_per;
	int ovr_ene_rgb;
	
  uchar uVar1;
  uchar alp_00;
  uint uVar2;
  float fVar3;
  float alp_01;
  float pos_x_00;
  float rot;
  int ovr_ene_rgb;
  
  uVar2 = (int)(char)alp & 0xff;
  if (uVar2 != 0) {
    pos_x_00 = (float)(int)(short)pos_x;
    alp_01 = (float)uVar2;
    rot = 0.0;
    PutSpriteYW(0x41,0x42,pos_x_00,(float)(int)(short)pos_y,0.0,0x808080,alp_01,1.0,1.0,0,0xff,1,0,0
               );
    alp_00 = (uchar)uVar2;
    GayBar(0x93,pos_x,pos_y,alp_00,(float)((int)(char)red_bar & 0xff) * 0.0625);
    GayBar(0x43,pos_x,pos_y,alp_00,(float)((int)(char)blu_bar & 0xffU) * 0.0625);
    if (((int)(char)bar_over & 0xffU) == 0) {
      new_inf.hit_hp_ovr_ene_wait = '\0';
      new_inf.hit_hp_ovr_ene = '\0';
      uVar1 = new_inf.hit_hp_ovr_ene_wait;
    }
    else {
      fVar3 = SgSinf(((float)(uint)new_inf.hit_hp_ovr_ene / 60.0) * DAT_00355d50);
      CLRtoRGB(&ovr_ene_rgb,(char)(int)(fVar3 * 32.0) + 'c','M','C');
      PutSpriteYW(0x44,0x44,pos_x_00,(float)(int)(short)pos_y,rot,ovr_ene_rgb,
                  (float)((int)(alp_01 * ((float)((int)(char)bar_over & 0xffU) / 300.0) * 0.5 +
                               alp_01 * 0.5) & 0xff),9.5625,1.0,0,0xff,1,0,0);
      uVar1 = new_inf.hit_hp_ovr_ene_wait + 0xff;
      if ((new_inf.hit_hp_ovr_ene_wait == '\0') &&
         (uVar1 = new_inf.hit_hp_ovr_ene_wait, new_inf.hit_hp_ovr_ene != '\0')) {
        new_inf.hit_hp_ovr_ene = new_inf.hit_hp_ovr_ene + 0xff;
      }
    }
    new_inf.hit_hp_ovr_ene_wait = uVar1;
    Koutakun((uchar)((int)(char)blu_bar & 0xffU),pos_x,pos_y,alp_00);
  }
  return;
}

static void Koutakun(u_char blu_bar, short int pos_x, short int pos_y, u_char alp) {
	short int dsp_u;
	short int dsp_w;
	short int dsp_x;
	
  uchar uVar1;
  uint uVar2;
  uchar in_t0_lo;
  uint in_t1_lo;
  short in_t2_lo;
  
  uVar2 = (int)(char)blu_bar & 0xff;
  if (new_inf.liner_w == '\0') {
    if ((ushort)new_inf.liner_x + 1 < uVar2 + 0x80) {
      new_inf.liner_x = (short)((ushort)new_inf.liner_x + 1);
      goto LAB_001b66f4;
    }
    new_inf.liner_x = 0;
    uVar1 = '\n';
  }
  else {
    uVar1 = new_inf.liner_w + 0xff;
    if (new_inf.liner_w == '\0') goto LAB_001b66f4;
  }
  new_inf.liner_w = uVar1;
LAB_001b66f4:
  if ((ushort)new_inf.liner_x < uVar2) {
    in_t2_lo = 0x80;
    in_t0_lo = (uchar)((0x80 - (uint)(ushort)new_inf.liner_x) * 0x10000 >> 0x10);
    in_t1_lo = (int)new_inf.liner_x;
  }
  else if ((ushort)new_inf.liner_x < 0x80) {
    in_t2_lo = 0x80;
    in_t0_lo = (uchar)((0x80 - (uint)(ushort)new_inf.liner_x) * 0x10000 >> 0x10);
    in_t1_lo = uVar2;
  }
  else if ((uint)(ushort)new_inf.liner_x < uVar2 + 0x80) {
    in_t0_lo = '\0';
    in_t1_lo = (int)((uVar2 - ((ushort)new_inf.liner_x - 0x80)) * 0x10000) >> 0x10;
    in_t2_lo = new_inf.liner_x;
  }
  DspKotaku(0x45,pos_x,pos_y,alp,in_t0_lo,(uchar)in_t1_lo,in_t2_lo);
  return;
}

static void ShowMikuPower(short int pos_x, short int pos_y) {
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float pos_x_00;
  float alp;
  
  uVar1 = (int)((float)((uint)inf_dsp.stts_fade_alp << 7) / 100.0) & 0xff;
  alp = (float)uVar1;
  uVar3 = (int)((float)((uint)(ushort)plyr_wrk.hp * 0x11c) / 500.0) & 0xffff;
  uVar2 = 0x11c - uVar3 & 0xffff;
  CmnWindow(0x20,pos_x,pos_y,(byte)uVar1,0x80);
  pos_x_00 = (float)((short)pos_x + 0x252);
  PolySquareYW(pos_x_00,(float)((short)pos_y + 0x8c),10,(short)uVar2,0x991e2d,alp,1.0,1.0,0x3000,0,0
               ,0);
  PolySquareYW(pos_x_00,(float)(uVar2 + (short)pos_y + 0x8c),10,(short)uVar3,0x91bef0,alp,1.0,1.0,
               0x3000,0,0,0);
  return;
}

static void ShowMikuPower2(short int pos_x, short int pos_y) {
	static FLSH_CORE flsh_life;
	u_char alp;
	u_short blu_bar;
	
  ushort mov_v;
  uchar uVar1;
  int iVar2;
  int mov_v_00;
  int px;
  short sVar3;
  uint uVar4;
  uint alp;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float pos_x_00;
  
  iVar5 = (int)(short)pos_y;
  fVar8 = (float)iVar5;
  pos_x_00 = (float)(int)(short)pos_x;
  alp = (int)((float)((uint)inf_dsp.stts_fade_alp << 7) / 100.0) & 0xff;
  PutSpriteYW(0x61,0x65,pos_x_00,fVar8,0.0,0x808080,(float)alp,1.0,1.0,0,0xff,1,0,1);
  uVar4 = (int)((float)((uint)(ushort)plyr_wrk.hp * 0xf3) / 500.0) & 0xffff;
  sVar3 = (short)uVar4;
  if ((ushort)new_inf.blu_bak == uVar4) {
    iVar2 = (ushort)new_inf.red_bar - 1;
    if ((uVar4 != (ushort)new_inf.red_bar) && (new_inf.red_bar = sVar3, (int)uVar4 < iVar2)) {
      new_inf.red_bar = (short)iVar2;
    }
    if (new_inf.fire_mask != '\0') {
      new_inf.fire_mask = new_inf.fire_mask + 0xff;
    }
  }
  else {
    new_inf.blu_bak = sVar3;
    if (new_inf.fire_mask < 7) {
      new_inf.fire_mask = new_inf.fire_mask + '\x01';
    }
  }
  fVar6 = 243.0;
  uVar1 = (uchar)((alp << 2) / 5);
  GayBar2(0x6e,0x71,pos_x,pos_y - (new_inf.red_bar + -0xf3),uVar1,
          (float)(uint)(ushort)new_inf.red_bar / 243.0);
  if (new_inf.fire_mask == '\a') {
    px = ((short)pos_x + 0x254) * 0x10000 >> 0x10;
    iVar2 = iVar5 - (sVar3 + -0xf3);
    mov_v_00 = iVar2 * 0x10000 >> 0x10;
    iVar2 = (iVar2 + 0xae) * 0x10000 >> 0x10;
    JetCD(jet1,'\x14','\x05','\n','\x06',0x91,'=',pos_x,mov_v_00,px,iVar2,alp);
    JetCD(jet2,'\x14','\x18','\x02','\x01',0x90,'>',pos_x,mov_v_00,px,iVar2,alp);
  }
  fVar7 = (float)uVar4;
  iVar2 = iVar5 - (sVar3 + -0xf3);
  GayBar2(0x6a,0x6d,pos_x,(ushort)((uint)(iVar2 * 0x10000) >> 0x10),uVar1,fVar7 / fVar6);
  mov_v = (ushort)iVar2;
  if (new_inf.fire_mask != '\0') {
    SyonenJet(0x92,'#',pos_x,mov_v,pos_x + 0x254,mov_v + 0xae,(uchar)alp,1.0,
              (float)(uint)new_inf.fire_mask / 10.0);
  }
  if (plyr_wrk.hp == 500) {
    FlashStarYW((FLSH_CORE *)&flsh_life_216,(uchar)alp,(uchar)(alp >> 1),'x','\0');
    fVar6 = 0.0;
    PutSpriteYW(0x66,0x66,pos_x_00,fVar8,0.0,0x808080,(float)(uint)DAT_00357aa9,1.0,1.0,0,0xff,1,1,1
               );
    PutSpriteYW(0x67,0x67,pos_x_00,fVar8,fVar6,0x808080,(float)(uint)DAT_00357aa9,1.0,27.5,0,0xff,1,
                1,1);
    PutSpriteYW(0x68,0x68,pos_x_00,fVar8,fVar6,0x808080,(float)(uint)DAT_00357aa9,1.0,1.0,0,0xff,1,1
                ,1);
    return;
  }
  if (uVar4 < (ushort)new_inf.red_bar) {
    return;
  }
  if (new_inf.liner_wait == '\0') {
    if ((ushort)new_inf.liner_y + 4 < uVar4) {
      new_inf.liner_y = (short)((ushort)new_inf.liner_y + 4);
      goto LAB_001b6de4;
    }
    new_inf.liner_y = 0;
    uVar1 = '\n';
  }
  else {
    uVar1 = new_inf.liner_wait + 0xff;
    if (new_inf.liner_wait == '\0') goto LAB_001b6de4;
  }
  new_inf.liner_wait = uVar1;
LAB_001b6de4:
  if (uVar4 == 0) {
    return;
  }
  fVar8 = SgSinf(((float)(uint)(ushort)new_inf.liner_y * DAT_00355d54) / fVar7);
  PutSpriteYW(0x69,0x69,pos_x_00,(float)(iVar5 - (uint)(ushort)new_inf.liner_y),0.0,0x808080,
              (float)(alp >> 1),DAT_00355d58,(fVar7 * fVar8) / 200.0,0,0xff,1,0,1);
  return;
}

static void DspKotaku(u_short chr, short int pos_x, short int pos_y, u_char alp, u_char dsp_u, u_char dsp_w, u_short dsp_x) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  ds.w = (int)(char)dsp_w & 0xff;
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr & 0xffffU) * 0x20));
  ds.u = ds.u + ((int)(char)dsp_u & 0xffU);
  ds.x = ds.x + (float)(int)(short)pos_x + (float)((int)dsp_x & 0xffff);
  ds.alphar = 0x48;
  ds.y = ds.y + (float)(int)(short)pos_y;
  ds.alpha = (byte)(int)((float)((int)(char)alp & 0xff) * 0.5);
  DispSprD(&ds);
  return;
}

static void GayBar(u_short chr, short int pos_x, short int pos_y, u_char alp, float scl) {
	DISP_SPRT ds;
	
  int iVar1;
  DISP_SPRT ds;
  
  iVar1 = ((int)chr & 0xffffU) * 0x20;
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + iVar1));
  ds.x = ds.x + (float)(int)(short)pos_x;
  ds.y = ds.y + (float)(int)(short)pos_y;
  ds.csx = (float)(*(int *)(&DAT_00329880 + iVar1) + (int)(short)pos_x);
  ds.csy = (float)(*(int *)(&DAT_00329884 + iVar1) + (int)(short)pos_y);
  ds.sch = 1.0;
  ds.tex1 = 0x161;
  ds.scw = scl;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void GayBar2(u_short top_chr, u_short end_chr, short int pos_x, short int pos_y, u_char alp, float scl) {
	int i;
	DISP_SPRT ds;
	
  ulong uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  DISP_SPRT ds;
  
  uVar1 = (long)top_chr & 0xffff;
  if (((scl != 0.0) && (alp != '\0')) && (uVar1 <= ((long)end_chr & 0xffffU))) {
    fVar4 = (float)(int)(short)pos_x;
    iVar2 = (int)uVar1;
    iVar3 = iVar2 * 0x20;
    do {
      CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + iVar2 * 0x20));
      iVar2 = (int)uVar1 + 1;
      uVar1 = (ulong)iVar2;
      ds.x = ds.x + fVar4;
      ds.y = ds.y + (float)(int)(short)pos_y;
      ds.zbuf = 0x10100008c;
      ds.csx = (float)(*(int *)(&DAT_00329880 + iVar3) + (int)(short)pos_x) +
               (float)(uint)*(ushort *)(&DAT_0032987c + iVar3) * 0.5;
      ds.scw = 1.0;
      ds.csy = (float)(*(int *)(&DAT_00329884 + iVar3) + (int)(short)pos_y);
      ds.tex1 = 0x161;
      ds.sch = scl;
      ds.alpha = alp;
      DispSprD(&ds);
    } while ((long)uVar1 <= (long)((long)end_chr & 0xffffU));
  }
  return;
}

static void JetCD(JET_SET *ninjin, u_char num, u_char tim, u_char spd, u_char wid, u_short chr, u_char hgh, short int mov_h, int mov_v, int px, int base, int alp) {
	short int mov_v;
	short int px;
	short int base;
	u_char alp;
	int i;
	float nin_scl_x;
	
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float scl_x;
  
  lVar5 = 0;
  if (((long)(char)num & 0xffU) != 0) {
    iVar6 = 0;
    do {
      iVar4 = (int)lVar5;
      puVar3 = &ninjin->tim + iVar6 + iVar4;
      if (*puVar3 == '\0') {
        iVar2 = rand();
        if (((int)(char)tim & 0xffU) == 0) {
          trap(7);
        }
        *puVar3 = (char)(iVar2 % (int)((int)(char)tim & 0xffU)) + '\x01';
        iVar2 = rand();
        if (((int)(char)spd & 0xffU) == 0) {
          trap(7);
        }
        puVar3[2] = (char)(iVar2 % (int)((int)(char)spd & 0xffU)) + '\x01';
        iVar2 = rand();
        if (((int)(char)wid & 0xffU) == 0) {
          trap(7);
        }
        puVar3[4] = '\0';
        puVar3[1] = *puVar3;
        puVar3[3] = (char)(iVar2 % (int)((int)(char)wid & 0xffU)) + '\x01';
      }
      else {
        *puVar3 = *puVar3 + 0xff;
        puVar3[4] = puVar3[4] + puVar3[2];
      }
      puVar3 = &ninjin->tim + iVar6 + iVar4;
      lVar5 = (long)(iVar4 + 1);
      scl_x = (float)(uint)*puVar3 / (float)(uint)puVar3[1];
      SyonenJet(chr,hgh,mov_h + puVar3[3],(short)mov_v - (ushort)puVar3[4],(ushort)px,(ushort)base,
                (uchar)(int)((float)((alp & 0xffU) * (uint)*puVar3) / (float)(uint)puVar3[1]),scl_x,
                (1.0 - scl_x) * 4.0);
      iVar6 = (iVar4 + 1) * 4;
    } while (lVar5 < (long)((long)(char)num & 0xffU));
  }
  uVar1 = new_inf.issei_timer + 0xff;
  if (new_inf.issei_timer == '\0') {
    uVar1 = 0xff;
  }
  new_inf.issei_timer = uVar1;
  return;
}

static void SyonenJet(u_short chr, u_char hgh, short int mov_h, short int mov_v, short int px, short int base, u_char alp, float scl_x, float scl_y) {
	DISP_SPRT ds;
	
  float fVar1;
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr & 0xffffU) * 0x20));
  ds.csy = (float)(int)(short)base;
  fVar1 = ds.y + (float)(int)(short)mov_v;
  if ((fVar1 < ds.csy) && (fVar1 = ds.csy - fVar1, fVar1 < (float)((int)(char)hgh & 0xff))) {
    ds.h = (uint)(short)(int)fVar1;
  }
  ds.y = ds.y + (float)(int)(short)mov_v;
  ds.x = ds.x + (float)(int)(short)mov_h;
  ds.csx = ds.x + (float)(ds.w >> 1);
  ds.zbuf = 0x10100008c;
  ds.tex1 = 0x161;
  ds.scw = scl_x;
  ds.sch = scl_y;
  ds.alpha = alp;
  DispSprD(&ds);
  return;
}

static void TameKin2(short int pos_x, short int pos_y) {
	int i;
	int j;
	u_char alp;
	float per;
	u_char charge_max;
	u_char ini_num;
	u_char top;
	u_char chrg_rot;
	u_char chrg_alp;
	u_char chrg_siz;
	u_char chrg_rgb;
	u_char chrg_flr;
	u_char init_alp;
	
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  short chr;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  uint ini_num_00;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  uint uVar11;
  ZAN *pZVar12;
  uint unaff_s6_lo;
  int iVar13;
  float fVar14;
  uchar ini_num;
  uchar top;
  uchar chrg_rot;
  uchar chrg_siz;
  uchar chrg_rgb;
  uchar chrg_flr;
  uchar init_alp;
  uint local_c0;
  
  uVar6 = (uint)inf_dsp.fndr_fade_alp;
  local_c0 = (uint)cam_custom_wrk.charge_max * 2 + 6 & 0xff;
  if (local_c0 != 0) {
    iVar7 = 0x32;
    iVar13 = 0;
    do {
      PutSpriteYW((short)iVar7,(short)iVar7,(float)((short)pos_x + 0x8f),
                  (float)((short)pos_y + 0x185),0.0,0x808080,
                  (float)((int)((float)(uVar6 << 7) / 100.0) & 0xff),1.0,1.0,0,0xff,1,0,0);
      iVar10 = iVar13 + 1;
      iVar7 = iVar13 + 0x33;
      iVar13 = iVar10;
    } while (iVar10 < (int)local_c0);
  }
  uVar5 = (int)(0xc - local_c0) >> 1 & 0xff;
  ini_num_00 = (uint)(byte)(&ini_charge_tbl)[plyr_wrk.film_no];
  uVar6 = uVar5;
  if (uVar5 < uVar5 + ini_num_00) {
    do {
      uVar11 = uVar6 + 1;
      new_inf.chrg_stp[uVar6] = '\x03';
      uVar6 = uVar11;
    } while ((int)uVar11 < (int)(uVar5 + ini_num_00));
  }
  local_c0 = uVar5 + local_c0;
  if (ini_num_00 == 0) {
    init_alp = '\0';
  }
  else {
    fVar14 = SgCosf(((float)(uint)new_inf.tm_max * DAT_00355d5c) / 60.0);
    init_alp = (uchar)(int)((fVar14 + 1.0) * 32.0 + 64.0);
  }
  if (uVar5 < local_c0) {
    iVar13 = (short)pos_y + 0x185;
    uVar6 = uVar5;
    do {
      iVar7 = uVar6 - uVar5;
      if (iVar7 < (int)(uint)plyr_wrk.charge_num) {
        if (new_inf.chrg_stp[uVar6] == '\0') {
          new_inf.chrg_rot[uVar6] = '\0';
          new_inf.chrg_flr[uVar6] = '\0';
          new_inf.chrg_stp[uVar6] = '\x01';
          new_inf.dray_tmr[uVar6] = '\0';
        }
      }
      else {
        new_inf.chrg_stp[uVar6] = '\0';
        ZanzoSS(zanzo + uVar6);
      }
      puVar9 = new_inf.chrg_stp + uVar6;
      bVar1 = *puVar9;
      if (bVar1 == 1) {
        puVar8 = new_inf.chrg_rot + uVar6;
        if (*puVar8 < 0x14) {
          *puVar8 = *puVar8 + 1;
        }
        else {
          *puVar8 = 0x14;
          *puVar9 = 2;
        }
        _chrg_flr = 0;
        fVar14 = (float)(uint)new_inf.chrg_rot[uVar6] / 20.0;
        _chrg_rot = (int)(180.0 - fVar14 * 180.0 * fVar14) & 0xff;
        _chrg_siz = (int)(DAT_00355d64 - fVar14 * DAT_00355d60 * fVar14) & 0xff;
        unaff_s6_lo = (int)(fVar14 * 64.0 * fVar14) & 0xff;
        _chrg_rgb = (int)(fVar14 * 128.0 * fVar14) & 0xff;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          new_inf.chrg_flr[uVar6] = '\0';
          puVar9 = new_inf.chrg_rot + uVar6;
          if (*puVar9 != 0) {
            *puVar9 = *puVar9 - 1;
          }
          fVar14 = (float)((uint)*puVar9 << 6) / 20.0;
LAB_001b7b84:
          _chrg_flr = 0;
          _chrg_rgb = 0x80;
          _chrg_siz = 100;
          _chrg_rot = 0;
          unaff_s6_lo = (int)fVar14 & 0xff;
        }
      }
      else if (bVar1 == 2) {
        _chrg_rot = 0;
        puVar8 = new_inf.chrg_flr + uVar6;
        _chrg_siz = 100;
        unaff_s6_lo = 0x40;
        _chrg_rgb = 0x80;
        if (*puVar8 < 0x14) {
          *puVar8 = *puVar8 + 1;
        }
        else {
          *puVar8 = 0x14;
          *puVar9 = 3;
        }
        fVar14 = SgSinf(((float)(uint)new_inf.chrg_flr[uVar6] * DAT_00355d68) / 20.0);
        _chrg_flr = (int)(fVar14 * 128.0) & 0xff;
      }
      else if (bVar1 == 3) {
        if (new_inf.chrg_flr[local_c0 + 0xb] == '\x03') {
          fVar14 = SgCosf(((float)(uint)new_inf.tm_max * DAT_00355d6c) / 60.0);
          fVar14 = (fVar14 + 1.0) * 32.0 + 64.0;
          goto LAB_001b7b84;
        }
        _chrg_rot = 0;
        unaff_s6_lo = 0x40;
        _chrg_siz = 100;
        _chrg_rgb = 0x80;
        _chrg_flr = 0;
      }
      uVar2 = new_inf.dray_tmr[uVar6];
      if (uVar2 == '\0') {
        if (iVar7 < (int)ini_num_00) {
          ZanzoSM(zanzo + uVar6,(uchar)_chrg_rot,init_alp,(uchar)_chrg_siz,0xff,'\0');
        }
        else {
          ZanzoSM(zanzo + uVar6,(uchar)_chrg_rot,(uchar)unaff_s6_lo,(uchar)_chrg_siz,0xff,'\0');
        }
        new_inf.dray_tmr[uVar6] = '\x02';
      }
      else {
        new_inf.dray_tmr[uVar6] = uVar2 + 0xff;
      }
      uVar11 = uVar6 + 1;
      chr = (short)uVar6 + 0x1a;
      iVar10 = 5;
      pZVar12 = zanzo + uVar6;
      do {
        puVar4 = pZVar12->num1;
        puVar9 = pZVar12->num2;
        puVar8 = pZVar12->num3;
        iVar10 = iVar10 + -1;
        pZVar12 = (ZAN *)(pZVar12->num1 + 1);
        AhoBon(chr,pos_x + 0x8f,(ushort)((uint)(iVar13 * 0x10000) >> 0x10),*puVar4,(uchar)_chrg_rgb,
               *puVar9,*puVar8,(uchar)iVar7,ini_num_00);
      } while (-1 < iVar10);
      BakBon(chr,pos_x + 0x8f,(ushort)iVar13,(uchar)_chrg_flr);
      uVar6 = uVar11;
    } while ((int)uVar11 < (int)local_c0);
  }
  if ((new_inf.chrg_flr[local_c0 + 0xb] == '\x03') || (ini_num_00 != 0)) {
    bVar3 = 0x3b < new_inf.tm_max;
    new_inf.tm_max = new_inf.tm_max + '\x01';
    if (bVar3) {
      new_inf.tm_max = '\0';
    }
  }
  else {
    new_inf.tm_max = '\0';
  }
  return;
}

static void ZanzoSS(ZAN *zz) {
	int i;
	
  uchar *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    zz->num1[iVar2] = 0xff;
    zz->num2[iVar2] = 0xff;
    puVar1 = zz->num4 + iVar2;
    zz->num3[iVar2] = 0xff;
    iVar2 = iVar2 + 1;
    *puVar1 = 0xff;
  } while (iVar2 < 6);
  return;
}

static void ZanzoSM(ZAN *zz, u_char num1, u_char num2, u_char num3, u_char num4, u_char mode) {
	int i;
	
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  int iVar5;
  
  iVar5 = 5;
  puVar4 = zz->num4 + 5;
  puVar3 = zz->num3 + 5;
  puVar2 = zz->num2 + 5;
  puVar1 = zz->num1 + 5;
  do {
    iVar5 = iVar5 + -1;
    *puVar1 = puVar1[-1];
    puVar1 = puVar1 + -1;
    *puVar2 = puVar2[-1];
    puVar2 = puVar2 + -1;
    *puVar3 = puVar3[-1];
    puVar3 = puVar3 + -1;
    *puVar4 = puVar4[-1];
    puVar4 = puVar4 + -1;
  } while (0 < iVar5);
  zz->num1[0] = num1;
  zz->num2[0] = num2;
  zz->num3[0] = num3;
  zz->num4[0] = num4;
  if (mode == '\0') {
    puVar4 = zz->num4 + 5;
    puVar3 = zz->num3 + 5;
    puVar2 = zz->num2 + 5;
    iVar5 = 5;
    puVar1 = zz->num1 + 5;
    do {
      if (*puVar1 == zz->num1[0]) {
        *puVar1 = 0xff;
      }
      if (*puVar2 == zz->num2[0]) {
        *puVar2 = 0xff;
      }
      if (*puVar3 == zz->num3[0]) {
        *puVar3 = 0xff;
      }
      if (*puVar4 == zz->num4[0]) {
        *puVar4 = 0xff;
      }
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      puVar2 = puVar2 + -1;
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + -1;
    } while (0 < iVar5);
    return;
  }
  puVar2 = zz->num4 + 5;
  puVar1 = zz->num3 + 5;
  iVar5 = 5;
  do {
    if (*puVar1 == zz->num3[0]) {
      *puVar1 = 0xff;
    }
    if (*puVar2 == zz->num4[0]) {
      *puVar2 = 0xff;
    }
    puVar2 = puVar2 + -1;
    iVar5 = iVar5 + -1;
    puVar1 = puVar1 + -1;
  } while (0 < iVar5);
  return;
}

static void ZanzoLS(u_char *zz) {
	int i;
	
  int iVar1;
  uchar *puVar2;
  
  puVar2 = zz + 5;
  iVar1 = 5;
  do {
    *puVar2 = 0xff;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}

static void ZanzoLM(u_char *zz, u_char per) {
	int i;
	
  uchar *puVar1;
  int iVar2;
  
  iVar2 = 5;
  puVar1 = zz + 5;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = puVar1[-1];
    puVar1 = puVar1 + -1;
  } while (0 < iVar2);
  *zz = per;
  iVar2 = 5;
  puVar1 = zz + 5;
  do {
    iVar2 = iVar2 + -1;
    if (*puVar1 == per) {
      *puVar1 = 0xff;
      per = *zz;
    }
    puVar1 = puVar1 + -1;
  } while (0 < iVar2);
  return;
}

static void AhoBon(u_short chr, short int px, short int py, u_char rot, u_char rgb, u_char alp, u_char siz, u_char now_num, int ini_num) {
	u_char ini_num;
	float xo;
	float yo;
	DISP_SPRT ds;
	
  float fVar1;
  DISP_SPRT ds;
  
  if (((((int)(char)rot & 0xffU) != 0xff) && (((int)(char)alp & 0xffU) != 0xff)) &&
     (((int)(char)siz & 0xffU) != 0xff)) {
    CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr & 0xffffU) * 0x20));
    ds.x = ds.x + (float)(int)(short)px;
    ds.y = ds.y + (float)(int)(short)py;
    if ((int)ds.w < 0) {
      fVar1 = (float)(ds.w & 1 | ds.w >> 1);
      fVar1 = fVar1 + fVar1;
    }
    else {
      fVar1 = (float)ds.w;
    }
    ds.crx = ds.x + fVar1 * 0.5;
    if ((int)ds.h < 0) {
      fVar1 = (float)(ds.h & 1 | ds.h >> 1);
      fVar1 = fVar1 + fVar1;
    }
    else {
      fVar1 = (float)ds.h;
    }
    ds.scw = (float)((int)(char)siz & 0xffU) / 100.0;
    ds.rot = (float)-((int)(char)rot & 0xffU);
    ds.cry = ds.y + fVar1 * 0.5;
    ds.alphar = 0x48;
    ds.alpha = (byte)(int)((float)((int)(char)alp & 0xffU) * 0.5);
    if (inf_dsp.lucky7 == 0) {
      ds.r = rgb;
      ds.g = rgb;
      ds.b = rgb;
      if (now_num < (byte)ini_num) {
        ds.r = 0xff;
        ds.g = 0x7f;
        ds.b = 0;
      }
    }
    else {
      ds.g = 0;
      ds.r = 0x80;
      ds.b = 0;
    }
    ds.tex1 = 0x161;
    ds.csx = ds.crx;
    ds.csy = ds.cry;
    ds.sch = ds.scw;
    DispSprD(&ds);
  }
  return;
}

static void BakBon(u_short chr, short int px, short int py, u_char flr) {
	float xo;
	float yo;
	DISP_SPRT ds;
	int rgb;
	
  int rgb;
  float fVar1;
  float fVar2;
  DISP_SPRT ds;
  
  CopySprDToSpr(&ds,(SPRT_DAT *)(&spr_dat + ((int)chr & 0xffffU) * 0x20));
  ds.x = ds.x + (float)(int)(short)px;
  ds.y = ds.y + (float)(int)(short)py;
  if ((int)ds.w < 0) {
    fVar2 = (float)(ds.w & 1 | ds.w >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)ds.w;
  }
  if ((int)ds.h < 0) {
    fVar1 = (float)(ds.h & 1 | ds.h >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)ds.h;
  }
  rgb = 0x808080;
  if (inf_dsp.lucky7 != 0) {
    rgb = 0x800000;
  }
  if (((int)(char)flr & 0xffU) != 0) {
    PutSpriteYW(0x3e,0x3e,(ds.x + fVar2 * 0.5) - 63.0,(ds.y + fVar1 * 0.5) - 63.0,0.0,rgb,
                (float)((int)(char)flr & 0xffU),DAT_00355d70,DAT_00355d70,0,0xff,1,1,0);
  }
  return;
}

static void PhotoScoreDisp(int count, int wait) {
	u_char alp_table2[31];
	static int e_flow = 255;
	static float fcnt;
	float fnum;
	float fslide;
	u_char alp;
	int cnt;
	float fw;
	float f;
	DISP_SPRT ds;
	SPRT_DAT raze_sprt;
	
  uchar *puVar1;
  byte alpha;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort pos_x;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uchar alp_table2 [31];
  DISP_SPRT ds;
  SPRT_DAT raze_sprt;
  
  puVar1 = alp_table2 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0034f4d8 >> (7 - uVar2) * 8;
  alp_table2._0_8_ = DAT_0034f4d8;
  puVar1 = alp_table2 + 0xf;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0034f4e0 >> (7 - uVar2) * 8;
  alp_table2._8_8_ = DAT_0034f4e0;
  puVar1 = alp_table2 + 0x17;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | DAT_0034f4e8 >> (7 - uVar2) * 8;
  alp_table2._16_8_ = DAT_0034f4e8;
  puVar1 = alp_table2 + 0x1b;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_0034f4f0 >> (3 - uVar2) * 8;
  alp_table2._24_4_ = DAT_0034f4f0;
  alp_table2[28] = DAT_0034f4f4;
  alp_table2[29] = DAT_0034f4f5;
  alp_table2[30] = DAT_0034f4f6;
  raze_sprt.tex0 = DAT_0034f4f8;
  raze_sprt._8_8_ = DAT_0034f500;
  raze_sprt._16_8_ = DAT_0034f508;
  fVar7 = 4.0;
  raze_sprt._24_8_ = DAT_0034f510;
  if (count + 1 == wait) {
    e_flow_256 = 0;
  }
  CopySprDToSpr(&ds,&raze_sprt);
  if (e_flow_256 != 1) {
    if (1 < e_flow_256) {
      return;
    }
    if (e_flow_256 != 0) {
      return;
    }
    fVar5 = SgSinf(0.0);
    e_flow_256 = e_flow_256 + 1;
    fcnt_257 = (1.0 - fVar5) * 24.0;
  }
  iVar4 = wait - count;
  if (iVar4 < 10) {
    iVar3 = iVar4 * 3;
    iVar4 = iVar4 * 9;
  }
  else {
    if (10 < count) {
      iVar4 = 0x5a;
      alpha = alp_table2[30];
      goto LAB_001b8498;
    }
    iVar3 = count * 3;
    iVar4 = count * 9;
  }
  alpha = alp_table2[iVar3];
LAB_001b8498:
  fVar5 = fcnt_257 + fcnt_257 + 1.0;
  if (fVar5 != (float)(int)fVar5) {
    fVar5 = (float)((int)fVar5 + 1);
  }
  fVar8 = 0.0;
  ds.alpha = alpha;
  if (0.0 < fcnt_257 + fcnt_257 + 1.0) {
    fVar9 = (float)iVar4;
    do {
      fVar6 = fVar8 - (fVar5 - 1.0) * 0.5;
      fVar8 = fVar8 + 1.0;
      pos_x = (ushort)(int)(fVar6 * fVar7 + DAT_00355d74);
      NumberDisp((int)photo_wrk.score,pos_x,0x2b,'\x02',0xff,0xff,0xff,alpha,0,7,0);
      ds.x = (float)((short)pos_x + 0xaf);
      ds.y = 55.0;
      DispSprD(&ds);
    } while (fVar8 < fcnt_257 + fcnt_257 + 1.0);
  }
  else {
    fVar9 = (float)iVar4;
  }
  fVar7 = SgSinf((fVar9 * DAT_00355d78) / 180.0);
  if (count < 2) {
    e_flow_256 = e_flow_256 + 1;
  }
  fcnt_257 = (1.0 - fVar7) * 24.0;
  return;
}

void InfoDispPause() {
  inf_dsp.disp_pause = '\x01';
  return;
}

void InfoDispRestart() {
  inf_dsp.disp_pause = '\0';
  return;
}

static void BukiyouMan(short int px, short int py) {
	u_char alp_max;
	u_char num;
	u_char buki_alp;
	
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float pos_y;
  float pos_x;
  
  pos_y = (float)(int)(short)py;
  pos_x = (float)(int)(short)px;
  uVar2 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  PutSpriteYW(0x46,0x46,pos_x,pos_y,0.0,0x808080,(float)uVar2,1.0,1.0,0,0xff,1,0,0);
  if (cam_custom_wrk.set_sub == 0xff) {
    return;
  }
  iVar1 = CheckCamSubEffect();
  new_inf.buki_use_flg = iVar1 != 0;
  PutSpriteYW(cam_custom_wrk.set_sub + 0x48,cam_custom_wrk.set_sub + 0x48,pos_x,pos_y,0.0,0x808080,
              (float)(uVar2 << 2) / 5.0,1.0,DAT_00355d7c,0,0xff,1,0,0);
  uVar3 = 9;
  if (poss_item[5] < 10) {
    uVar3 = (uint)poss_item[5];
  }
  PutNumberYW(0xc,uVar3,px + 0x23a,py + 0x171,1.0,1.0,0x808080,(ushort)uVar2,-1,1,0);
  if (new_inf.buki_use_flg == '\0') {
    iVar1 = new_inf.buki_use_alp - 0x10;
    if (iVar1 < 1) {
      new_inf.buki_use_alp = '\0';
    }
    else {
      new_inf.buki_use_alp = (uchar)iVar1;
    }
  }
  else {
    uVar3 = new_inf.buki_use_alp + 0x10;
    if (uVar3 < uVar2) {
      new_inf.buki_use_alp = (uchar)uVar3;
    }
    else {
      new_inf.buki_use_alp = (uchar)uVar2;
    }
  }
  if ((new_inf.buki_use_flg == '\0') || (uVar2 <= new_inf.buki_use_alp)) {
    if ((int)(new_inf.buki_use_flr - 0x10) < 1) {
      new_inf.buki_use_flr = '\0';
    }
    else {
      new_inf.buki_use_flr = (uchar)(new_inf.buki_use_flr - 0x10);
    }
  }
  else {
    new_inf.buki_use_flr = new_inf.buki_use_alp;
  }
  if (new_inf.buki_use_alp == uVar2) {
    fVar4 = SgCosf(((float)(uint)new_inf.buki_use_tmr * DAT_00355d80) / 60.0);
    uVar2 = (int)((float)((uint)new_inf.buki_use_alp *
                         ((int)((fVar4 + 1.0) * 50.0 * 0.5) + 0x32U & 0xff)) / 100.0) & 0xff;
    if (new_inf.buki_use_tmr < 0x3c) {
      new_inf.buki_use_tmr = new_inf.buki_use_tmr + '\x01';
      goto LAB_001b8994;
    }
  }
  else {
    uVar2 = (uint)new_inf.buki_use_alp;
  }
  new_inf.buki_use_tmr = '\0';
LAB_001b8994:
  if (new_inf.buki_use_alp != '\0') {
    PutSpriteYW(cam_custom_wrk.set_sub + 0x4d,cam_custom_wrk.set_sub + 0x4d,pos_x,pos_y,0.0,0x808080
                ,(float)uVar2,1.0,DAT_00355d84,0,0xff,1,1,0);
  }
  if (new_inf.buki_use_flr != '\0') {
    PutSpriteYW(0x47,0x47,pos_x,pos_y,0.0,0x808080,(float)(uint)new_inf.buki_use_alp,1.0,1.0,0,0xff,
                1,1,0);
  }
  return;
}

static void DameDameInit() {
	int i;
	
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    new_inf.shot_kind[iVar2] = 0xff;
    sVar1 = photo_wrk.bonus_sta;
    iVar2 = iVar2 + 1;
    new_inf.shot_kind2 = 0xff;
  } while (iVar2 < 4);
  new_inf.shot_num = (photo_wrk.bonus_sta & 0x20U) != 0;
  if ((bool)new_inf.shot_num) {
    new_inf.shot_kind[0] = '\x01';
  }
  if ((photo_wrk.bonus_sta & 0x10U) != 0) {
    new_inf.shot_kind[new_inf.shot_num] = '\x02';
    new_inf.shot_num = new_inf.shot_num + '\x01';
  }
  if ((sVar1 & 8U) != 0) {
    new_inf.shot_kind[new_inf.shot_num] = '\x03';
    new_inf.shot_num = new_inf.shot_num + '\x01';
  }
  if ((sVar1 & 2U) != 0) {
    new_inf.shot_kind[new_inf.shot_num] = '\x04';
    new_inf.shot_num = new_inf.shot_num + '\x01';
  }
  if ((sVar1 & 4U) != 0) {
    new_inf.shot_kind[new_inf.shot_num] = '\x05';
    new_inf.shot_num = new_inf.shot_num + '\x01';
  }
  if ((sVar1 & 0x80U) != 0) {
    new_inf.shot_kind[new_inf.shot_num] = '\x06';
    new_inf.shot_num = new_inf.shot_num + '\x01';
  }
  if ((sVar1 & 0x100U) != 0) {
    new_inf.shot_kind2 = '\x01';
  }
  if ((sVar1 & 0x200U) != 0) {
    new_inf.shot_kind2 = '\x02';
  }
  if ((sVar1 & 0x400U) != 0) {
    new_inf.shot_kind2 = '\x03';
  }
  if ((sVar1 & 0x800U) != 0) {
    new_inf.shot_kind2 = '\x04';
  }
  new_inf.shot_fad = '\x14';
  new_inf.shot_pse = '\x1e';
  new_inf.shot_mov = '\x14';
  new_inf.shot_lgt = '\x14';
  return;
}

static void GekisyaBoyGeisyaGirl(short int px, short int py) {
	int i;
	u_char alp1;
	u_char alp2;
	u_char alp_max;
	u_char mov;
	short int y[10];
	
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  ushort y [10];
  
  iVar10 = (int)(short)px;
  iVar11 = (int)(short)py;
  uVar8 = (int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff;
  if (new_inf.shot_mov == '\0') {
    if (new_inf.shot_pse == '\0') {
      bVar2 = new_inf.shot_lgt - 1;
      if (new_inf.shot_lgt == '\0') {
        if (new_inf.shot_fad == '\0') {
          return;
        }
        uVar7 = 100;
        uVar12 = 0;
        uVar6 = (int)((float)(uVar8 * (byte)(new_inf.shot_fad - 1)) / 20.0) & 0xff;
        new_inf.shot_fad = new_inf.shot_fad - 1;
      }
      else {
        uVar7 = 100;
        uVar6 = 0x80;
        new_inf.shot_lgt = bVar2;
        fVar13 = SgSinf(((float)(uint)bVar2 * DAT_00355d88) / 20.0);
        uVar12 = (int)((float)uVar8 * fVar13) & 0xff;
      }
    }
    else {
      uVar7 = 100;
      uVar6 = 0x80;
      uVar12 = 0;
      new_inf.shot_pse = new_inf.shot_pse + 0xff;
    }
  }
  else {
    new_inf.shot_mov = new_inf.shot_mov - 1;
    uVar12 = 0;
    fVar13 = 1.0 - (float)(uint)new_inf.shot_mov / 20.0;
    uVar7 = (int)(fVar13 * 100.0 * fVar13) & 0xff;
    uVar6 = (int)((float)uVar8 * fVar13 * fVar13) & 0xff;
  }
  iVar9 = 6;
  puVar3 = y + 6;
  do {
    *puVar3 = 0xffff;
    iVar9 = iVar9 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar9);
  switch(new_inf.shot_num) {
  case '\x01':
    y[0] = 0x139;
    break;
  case '\x02':
    y[0] = 0x139;
    y[1] = 0x149;
    break;
  case '\x03':
    y[0] = 0x139;
    y[1] = 0x149;
    y[2] = 0x159;
    break;
  case '\x04':
    y[0] = 0x139;
    y[1] = 0x149;
    y[2] = 0x159;
    y[3] = 0x169;
    break;
  case '\x05':
  case '\x06':
    y[0] = 0x139;
    y[1] = 0x149;
    y[2] = 0x159;
    y[3] = 0x169;
    y[4] = 0x179;
    y[5] = 0x189;
  }
  iVar9 = 0;
  SetSprFile(0x1df2100);
  uVar1 = y[0];
  do {
    if (uVar1 == 0xffff) {
      y[7] = 0x129;
      if (new_inf.shot_kind2 == 2) {
        if (uVar6 != 0) {
          PutSpriteYW(0xa1,0xa1,(float)(uVar7 + iVar10),(float)(iVar11 + 0x129),0.0,0x808080,
                      (float)uVar6,1.0,1.0,0,0xff,1,0,0);
        }
        if (uVar12 == 0) {
          return;
        }
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[7] + iVar11);
        sVar4 = 0xa1;
        sVar5 = 0xa1;
      }
      else if (new_inf.shot_kind2 < 3) {
        if (new_inf.shot_kind2 != 1) {
          return;
        }
        if (uVar6 != 0) {
          PutSpriteYW(0x9d,0x9e,(float)(uVar7 + iVar10),(float)(iVar11 + 0x129),0.0,0x808080,
                      (float)uVar6,1.0,1.0,0,0xff,1,0,0);
        }
        if (uVar12 == 0) {
          return;
        }
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[7] + iVar11);
        sVar4 = 0x9d;
        sVar5 = 0x9e;
      }
      else {
        if (new_inf.shot_kind2 != 3) {
          if (new_inf.shot_kind2 != 4) {
            return;
          }
          if (uVar6 != 0) {
            PutSpriteYW(0x9f,0x9f,(float)(uVar7 + iVar10),(float)(iVar11 + 0x129),0.0,0x808080,
                        (float)uVar6,1.0,1.0,0,0xff,1,0,0);
          }
          if (uVar12 == 0) {
            return;
          }
          PutSpriteYW(0x9f,0x9f,(float)(uVar7 + iVar10),(float)((short)y[7] + iVar11),0.0,0x808080,
                      (float)uVar12,1.0,1.0,0,0xff,1,1,0);
          return;
        }
        if (uVar6 != 0) {
          PutSpriteYW(0xa0,0xa0,(float)(uVar7 + iVar10),(float)(iVar11 + 0x129),0.0,0x808080,
                      (float)uVar6,1.0,1.0,0,0xff,1,0,0);
        }
        if (uVar12 == 0) {
          return;
        }
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[7] + iVar11);
        sVar4 = 0xa0;
        sVar5 = 0xa0;
      }
      PutSpriteYW(sVar4,sVar5,fVar14,fVar13,0.0,0x808080,(float)uVar12,1.0,1.0,0,0xff,1,1,0);
      return;
    }
    switch(new_inf.shot_kind[iVar9]) {
    case '\x01':
      if (uVar6 != 0) {
        PutSpriteYW(0xa6,0xa6,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[iVar9] + iVar11);
        sVar4 = 0xa6;
        sVar5 = 0xa6;
LAB_001b9280:
        PutSpriteYW(sVar4,sVar5,fVar14,fVar13,0.0,0x808080,(float)uVar12,1.0,1.0,0,0xff,1,1,0);
      }
      break;
    case '\x02':
      if (uVar6 != 0) {
        PutSpriteYW(0xa2,0xa3,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[iVar9] + iVar11);
        sVar4 = 0xa2;
        sVar5 = 0xa3;
        goto LAB_001b9280;
      }
      break;
    case '\x03':
      if (uVar6 != 0) {
        PutSpriteYW(0xa4,0xa5,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[iVar9] + iVar11);
        sVar4 = 0xa4;
        sVar5 = 0xa5;
        goto LAB_001b9280;
      }
      break;
    case '\x04':
      if (uVar6 != 0) {
        PutSpriteYW(0x88,0x88,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[iVar9] + iVar11);
        sVar4 = 0x88;
        sVar5 = 0x88;
        goto LAB_001b9280;
      }
      break;
    case '\x05':
      if (uVar6 != 0) {
        PutSpriteYW(0x89,0x89,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        fVar14 = (float)(uVar7 + iVar10);
        fVar13 = (float)((short)y[iVar9] + iVar11);
        sVar4 = 0x89;
        sVar5 = 0x89;
        goto LAB_001b9280;
      }
      break;
    case '\x06':
      if (uVar6 != 0) {
        PutSpriteYW(0x87,0x87,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar6,1.0,1.0,0,0xff,1,0,0);
      }
      if (uVar12 != 0) {
        PutSpriteYW(0x87,0x87,(float)(uVar7 + iVar10),(float)((short)y[iVar9] + iVar11),0.0,0x808080
                    ,(float)uVar12,1.0,1.0,0,0xff,1,1,0);
      }
    }
    iVar9 = iVar9 + 1;
    uVar1 = y[iVar9];
  } while( true );
}

static char KanKinoSyogai(short int pos_x, short int pos_y) {
	int i;
	char dir;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char unaff_s1_lo;
  float alp;
  float pos_y_00;
  float pos_x_00;
  
  cVar1 = -1;
  if ((cam_custom_wrk.set_spe != 0xff) && (cVar1 = -1, cam_custom_wrk.set_spe == '\0')) {
    pos_x_00 = (float)(int)(short)pos_x;
    pos_y_00 = (float)(int)(short)pos_y;
    alp = (float)((int)((float)((uint)inf_dsp.fndr_fade_alp << 7) / 100.0) & 0xff);
    iVar2 = 0x94;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      PutSpriteYW((short)iVar2,(short)iVar2,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,0,1)
      ;
      iVar2 = iVar3 + 0x95;
      iVar3 = iVar4;
    } while (iVar4 < 4);
    if ((plyr_wrk.spe1_dir & 1) != 0) {
      PutSpriteYW(0x98,0x98,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,1,1);
    }
    if ((plyr_wrk.spe1_dir & 2) != 0) {
      PutSpriteYW(0x99,0x99,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,1,1);
    }
    if ((plyr_wrk.spe1_dir & 4) != 0) {
      PutSpriteYW(0x9a,0x9a,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,1,1);
    }
    cVar1 = unaff_s1_lo;
    if ((plyr_wrk.spe1_dir & 8) != 0) {
      PutSpriteYW(0x9b,0x9b,pos_x_00,pos_y_00,0.0,0x808080,alp,1.0,1.0,0,0xff,1,1,1);
    }
  }
  return cVar1;
}

int isDispLamp() {
  bool bVar1;
  int iVar2;
  
  if ((ingame_wrk.mode == 0x14) ||
     ((iVar2 = 0, efcnt[12].dat._0_1_ == '\0' &&
      (((ingame_wrk.game == 0 && (poss_item[9] == 0)) ||
       ((iVar2 = 0, eff_filament_off == 0 &&
        ((((ingame_wrk.game == 1 && (bVar1 = isBattleModeGame(), !bVar1)) ||
          (ingame_wrk.mode == 0xd)) ||
         ((plyr_wrk.mode == 4 ||
          ((iVar2 = 1, ingame_wrk.game == 0 && (iVar2 = 1, ingame_wrk.difficult != 0)))))))))))))) {
    iVar2 = 0;
  }
  return iVar2;
}
