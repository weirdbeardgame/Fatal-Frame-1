// STATUS: NOT STARTED

typedef struct {
	float rot0;
	float rot1;
	float spd;
	u_short timer;
	u_short move_type;
} PLYR_FURI_DAT;

char (*plyr_act_func[0])(/* parameters unknown */) = {
};
PLYR_FURI_DAT plyr_act_furi0[0] = {
};
PLYR_FURI_DAT plyr_act_furi1[0] = {
};
PLYR_FURI_DAT plyr_act_furi2[0] = {
};
PLYR_FURI_DAT plyr_act_furi3[0] = {
};

char motPlayerActCtrl(SgCOORDUNIT *cp) {
	sceVu0FVECTOR p;
	sceVu0FVECTOR trot;
	static float rot[2] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	};
	float spd;
	char type;
	sceVu0FVECTOR target;
	float yrot;
	float xrot;
	u_int i;
	float sub;
	float tmp;
	
  int iVar1;
  undefined8 *puVar2;
  Vector4 *trot_00;
  uint uVar3;
  _SgCOORDUNIT *m0;
  char cVar4;
  float fVar5;
  float fVar6;
  float rx;
  float fVar7;
  float p [4];
  Vector4 trot;
  Vector4 target;
  
  trot_00 = &trot;
  cVar4 = '\x01';
  memset(trot_00,0,0x10);
  fVar7 = 1.0;
  sceVu0CopyVector(&target,cp[5].lwmtx.matrix + 3);
  rx = (plyr_wrk.spot_pos.w * DAT_00355944) / DAT_00355948;
  trot.y = (plyr_wrk.spot_pos.z * DAT_00355944) / DAT_00355948;
  trot.x = -rx;
  target.y = target.y + (plyr_wrk.spot_pos.z * 60.0) / DAT_0035594c;
  if ((4 < ani_mdl[0].anm.playnum) || (ABS(plyr_wrk.spot_pos.y) <= DAT_00355950)) {
    if (DAT_003024b0 == '\x01') {
      motPlyrActExec(cp);
      sceVu0CopyVector(trot_00,&plyr_act_wrk.trot);
      fVar6 = plyr_act_wrk.spd;
      cVar4 = plyr_act_wrk.move_type._2_1_;
    }
    else {
      fVar6 = 1.0;
      if ((ingame_wrk.mode == 7) || (plyr_wrk.mode == 4)) {
        trot.x = 0.0;
        trot.y = 0.0;
      }
      else if ((((ani_mdl[0].anm.playnum < 5) && (fVar6 = fVar7, plyr_wrk.spot_pos.z < DAT_00355954)
                ) && (plyr_wrk.spot_pos.w < DAT_00355954)) &&
              (iVar1 = PlyrNeckDirectionChk(p), iVar1 != 0)) {
        motGetPlyrNeckRot(cp,&trot_00->x,p);
      }
    }
  }
  else {
    motGetPlyrNeckRot(cp,&trot_00->x,&plyr_wrk.spot_rot.z);
    fVar6 = fVar7;
  }
  if ((ingame_wrk._0_4_ & 0x90000000) == 0) {
    if (cVar4 == '\0') {
      uVar3 = 0;
      fVar6 = fVar6 / 25.0;
      puVar2 = &rot_117;
      do {
        fVar7 = *(float *)puVar2;
        fVar5 = trot_00->x - fVar7;
        if (ABS(fVar5) < fVar6) {
          *(float *)puVar2 = trot_00->x;
        }
        else {
          if (0.0 < fVar5) {
            fVar7 = fVar7 + fVar6;
          }
          else {
            fVar7 = fVar7 - fVar6;
          }
          *(float *)puVar2 = fVar7;
        }
        uVar3 = uVar3 + 1;
        trot_00 = (Vector4 *)&trot_00->y;
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      } while (uVar3 < 2);
    }
    else {
      rot_117._0_4_ = (float)rot_117 + ((trot.x - (float)rot_117) / 25.0) * fVar6;
      rot_117._4_4_ = rot_117._4_4_ + ((trot.y - rot_117._4_4_) / 25.0) * fVar6;
    }
    m0 = cp + 0xd;
    LocalRotMatrixX((float (*) [4])m0,(float (*) [4])m0,(float)rot_117);
    LocalRotMatrixZ((float (*) [4])m0,(float (*) [4])m0,rot_117._4_4_);
    if (plyr_wrk.mode != 1) {
      motInversKinematics(cp,&target.x,ani_mdl[0].mot.dat,'\x05');
      LocalRotMatrixX((float (*) [4])(cp + 1),(float (*) [4])(cp + 1),rx);
    }
  }
  return '\0';
}

void motPlyrActExec(SgCOORDUNIT *cp) {
  long lVar1;
  
  lVar1 = (**(code **)(&plyr_act_func + (uint)DAT_003024b1 * 4))(cp);
  if (lVar1 != 0) {
    motPlyrActStop();
    return;
  }
  return;
}

void motInitPlyrAct() {
  plyr_act_wrk.pos.x = 0.0;
  DAT_003024b1 = 0xff;
  plyr_act_wrk.pos.w = 0.0;
  DAT_003024b0 = 0;
  plyr_act_wrk.timer = 0;
  plyr_act_wrk.timer2 = 0;
  plyr_act_wrk.spd = 0.0;
  plyr_act_wrk._44_4_ = 0;
  plyr_act_wrk.pos.y = 0.0;
  plyr_act_wrk.pos.z = 0.0;
  return;
}

void motPlyrActReq(char act_no, sceVu0FVECTOR *pos, u_short cnt) {
  DAT_003024b0 = 1;
  DAT_003024b1 = act_no;
  plyr_act_wrk.timer2 = cnt;
  plyr_act_wrk.timer = 0;
  plyr_act_wrk.spd = 0.0;
  plyr_act_wrk._44_4_ = 0;
  if (pos != (float (*) [4])0x0) {
    sceVu0CopyVector(&plyr_act_wrk.pos,(Vector4 *)pos);
    return;
  }
  return;
}

void motPlyrActStop() {
  DAT_003024b1 = 0xff;
  plyr_act_wrk.timer = 0;
  DAT_003024b0 = 0;
  return;
}

char motPlyrActLookAt(SgCOORDUNIT *cp) {
	sceVu0FVECTOR sub;
	
  char cVar1;
  float fVar2;
  float sub [4];
  
  plyr_act_wrk.timer = plyr_act_wrk.timer + 1;
  if (plyr_act_wrk.timer < 0x12d) {
    sceVu0SubVector(sub,(cp->lwmtx).matrix + 3,0x302480);
    fVar2 = (float)sceVu0InnerProduct(sub,sub);
    fVar2 = SgSqrtf(fVar2);
    cVar1 = '\0';
    if (fVar2 <= DAT_00355958) {
      plyr_act_wrk._44_4_ = 1;
      plyr_act_wrk.spd = 1.0;
      motGetPlyrNeckRot(cp,&plyr_act_wrk.trot.x,(float *)&plyr_act_wrk);
      cVar1 = '\0';
    }
  }
  else {
    cVar1 = '\x01';
  }
  return cVar1;
}

char motPlyrActSurprise(SgCOORDUNIT *cp) {
	static u_int se_handle;
	
  bool bVar1;
  int iVar2;
  
  if (plyr_act_wrk.timer2 == 0) {
    plyr_act_wrk._44_4_ = 1;
    plyr_act_wrk.spd = 3.0;
    motGetPlyrNeckRot(cp,&plyr_act_wrk.trot.x,(float *)&plyr_act_wrk);
    if (((plyr_act_wrk.timer == 0) && (plyr_wrk.mode != 1)) &&
       (iVar2 = ReqPlyrSpeAnime('D','\0'), iVar2 != 0)) {
      plyr_wrk.mode = 10;
    }
    if ((plyr_wrk.mode == 10) && (plyr_act_wrk.timer < 0x14)) {
      VibrateRequest2(0,200);
    }
    if (plyr_act_wrk.timer == 0xf) {
      se_handle_136 = SeStartFix(0x22,0,0x1000,0x1000,0);
    }
    if (plyr_act_wrk.timer == 0x14) {
      SeFadeFlame(se_handle_136,10,0);
    }
    plyr_act_wrk.timer = plyr_act_wrk.timer + 1;
    bVar1 = 0x3c < plyr_act_wrk.timer;
  }
  else {
    bVar1 = false;
    plyr_act_wrk.timer2 = plyr_act_wrk.timer2 + -1;
  }
  return bVar1;
}

char motPlyrActSowasowa(SgCOORDUNIT *cp) {
	static char ofs = 0;
	
  float fVar1;
  
  plyr_act_wrk.spd = DAT_0035595c;
  plyr_act_wrk._44_4_ = 1;
  if (plyr_act_wrk.timer == (int)ofs_140 + 0x46U) {
    plyr_act_wrk.trot.x = motGetRandom(DAT_00355960,DAT_00355964);
    fVar1 = motGetRandom(1.0,-1.0);
    if (0.0 < fVar1) {
      plyr_act_wrk.trot.x = -plyr_act_wrk.trot.x;
    }
    motGetRandom(DAT_00355968,DAT_0035596c);
  }
  else if ((int)ofs_140 + 0x46U <= plyr_act_wrk.timer) {
    fVar1 = motGetRandom(30.0,0.0);
    plyr_act_wrk.timer = 0;
    ofs_140 = (char)(int)fVar1;
  }
  plyr_act_wrk.trot.y = 0.0;
  plyr_act_wrk.timer = plyr_act_wrk.timer + 1;
  return '\0';
}

char motPlyrActKyoro(SgCOORDUNIT *cp) {
	PLYR_FURI_DAT *dat;
	
  ushort uVar1;
  int iVar2;
  float *in_a1_lo;
  float *pfVar3;
  
  if (DAT_003024b1 == 4) {
    in_a1_lo = (float *)&plyr_act_furi1;
  }
  else if (DAT_003024b1 < 5) {
    if (DAT_003024b1 == 3) {
      in_a1_lo = (float *)&plyr_act_furi0;
    }
  }
  else if (DAT_003024b1 == 5) {
    in_a1_lo = (float *)&plyr_act_furi2;
  }
  else if (DAT_003024b1 == 6) {
    if (((plyr_act_wrk.timer == 0) && (plyr_wrk.mode != 1)) &&
       (iVar2 = ReqPlyrSpeAnime('D','\0'), iVar2 != 0)) {
      plyr_wrk.mode = 10;
    }
    in_a1_lo = (float *)&plyr_act_furi3;
  }
  do {
    uVar1 = *(ushort *)(in_a1_lo + 3);
    pfVar3 = in_a1_lo;
    while( true ) {
      if (plyr_act_wrk.timer <= uVar1) {
        plyr_act_wrk._44_4_ = (uint)*(ushort *)((int)pfVar3 + 0xe);
        plyr_act_wrk.timer = plyr_act_wrk.timer + 1;
        plyr_act_wrk.spd = pfVar3[2];
        plyr_act_wrk.trot.y = pfVar3[1];
        plyr_act_wrk.trot.x = *pfVar3;
        return '\0';
      }
      in_a1_lo = pfVar3 + 4;
      if (*(short *)((int)pfVar3 + 0x1e) == -1) {
        return '\x01';
      }
      if (*(short *)((int)pfVar3 + 0x1e) == -2) break;
      uVar1 = *(ushort *)(pfVar3 + 7);
      pfVar3 = in_a1_lo;
    }
    plyr_act_wrk.timer = 0;
  } while( true );
}

void motGetPlyrNeckRot(SgCOORDUNIT *cp, float *trot, float *tpos) {
	sceVu0FVECTOR p;
	sceVu0FVECTOR d0;
	sceVu0FVECTOR d1;
	sceVu0FVECTOR d2;
	sceVu0FVECTOR n;
	sceVu0FVECTOR v0;
	sceVu0FVECTOR v1;
	float inner;
	
  float fVar1;
  float p [4];
  float d0 [4];
  float d1 [4];
  float d2 [4];
  float n [4];
  float v0 [4];
  float v1 [4];
  
  sceVu0CopyVector((Vector4 *)p,(Vector4 *)tpos);
  p[3] = 1.0;
  sceVu0SubVector((Vector4 *)d0,p,0x252bf0);
  sceVu0CopyVector((Vector4 *)d1,cp[0xd].lwmtx.matrix + 1);
  sceVu0SubVector((Vector4 *)d2,p,cp[0xd].lwmtx.matrix + 3);
  sceVu0CopyVector((Vector4 *)v0,(Vector4 *)d0);
  sceVu0CopyVector((Vector4 *)v1,(Vector4 *)d1);
  v0[1] = 0.0;
  v1[1] = 0.0;
  sceVu0Normalize((Vector4 *)v0,(Vector4 *)v0);
  sceVu0ScaleVector(-1.0,(Vector4 *)v1,(Vector4 *)v1);
  sceVu0Normalize((Vector4 *)v1,(Vector4 *)v1);
  fVar1 = (float)sceVu0InnerProduct((Vector4 *)v0,(Vector4 *)v1);
  if (0.0 < fVar1) {
    fVar1 = SgACosf(fVar1);
    *trot = fVar1;
    sceVu0OuterProduct(n,(Vector4 *)v0,(Vector4 *)v1);
    fVar1 = *trot;
    if (n[1] < 0.0) {
      *trot = -fVar1;
      fVar1 = *trot;
    }
    if (fVar1 <= DAT_00355970) {
      if (fVar1 < DAT_00355974) {
        *trot = DAT_00355974;
      }
    }
    else {
      *trot = DAT_00355970;
    }
    sceVu0CopyVector((Vector4 *)v0,(Vector4 *)d2);
    sceVu0CopyVector((Vector4 *)v1,(Vector4 *)d2);
    v1[1] = 0.0;
    sceVu0Normalize((Vector4 *)v0,(Vector4 *)v0);
    sceVu0Normalize((Vector4 *)v1,(Vector4 *)v1);
    fVar1 = (float)sceVu0InnerProduct((Vector4 *)v0,(Vector4 *)v1);
    fVar1 = SgACosf(fVar1);
    trot[1] = fVar1;
    if (cp[0xd].lwmtx.matrix[3].y < p[1]) {
      trot[1] = -fVar1;
      fVar1 = trot[1];
    }
    else {
      fVar1 = trot[1];
    }
    if (fVar1 <= DAT_00355978) {
      if (fVar1 < DAT_0035597c) {
        trot[1] = DAT_0035597c;
      }
    }
    else {
      trot[1] = DAT_00355978;
    }
  }
  return;
}

void InitQuake() {
  quake.flg = '\0';
  quake.req = 0;
  quake.cnt = 0;
  quake.all_cnt = 0;
  quake.loop = '\0';
  return;
}

void StopQuake() {
  quake.req = 0;
  ani_mdl[0].mot.reso = 1;
  motPlyrActStop();
  return;
}

void ReqQuake(u_int furn_id, float pow, u_int time, u_int loop, u_int stop_flg) {
  quake.pow[1] = pow * DAT_00355980;
  quake.loop = (char)loop;
  quake.req = 1;
  quake.pow[0] = pow;
  quake.cnt = time;
  quake.all_cnt = time;
  motPlyrActReq('\x03',(float (*) [4])0x0,0);
  if (stop_flg == 1) {
    ani_mdl[0].mot.reso = 0;
  }
  SeStartPosSrundFlame(plyr_wrk.dop._13_1_,&camera.i.x,0,0x1000,0x1000);
  return;
}

char QuakeCamera() {
	float v0;
	float v1;
	float v2;
	sceVu0FVECTOR val[2];
	sceVu0FVECTOR xd;
	char i;
	QUAKE_CTRL *qk_p;
	float dat;
	
  uint uVar1;
  int iVar2;
  float (*pafVar3) [4];
  QUAKE_CTRL *pQVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float val [2] [4];
  float xd [4];
  
  pafVar3 = val;
  pQVar4 = &quake;
  if (quake.req == 0) {
    return '\0';
  }
  if ((ingame_wrk._0_4_ & 0x90000000) == 0) {
    if ((ingame_wrk._0_4_ & 0x20000000) != 0) {
      return '\0';
    }
    uVar1 = quake.cnt - 1;
    if (quake.all_cnt <= quake.cnt) {
      quake.cnt = quake.cnt + -1;
      return '\0';
    }
    quake.cnt = uVar1;
    if (0 < (int)uVar1) {
      if ((uVar1 & 1) != 0) {
        VibrateRequest2(0,0xa0);
      }
      iVar5 = 0x1000000;
      sceVu0OuterProduct(xd,0x252a50,0x252a60);
      do {
        fVar9 = pQVar4->pow[0];
        fVar8 = -fVar9;
        fVar6 = motGetRandom(fVar9,fVar8);
        fVar7 = motGetRandom(fVar9,fVar8);
        fVar8 = motGetRandom(fVar9,fVar8);
        if (quake.cnt < 0x1e) {
          fVar9 = (float)quake.cnt / 30.0;
          fVar8 = fVar8 * fVar9;
          fVar6 = fVar6 * fVar9;
          fVar7 = fVar7 * fVar9;
        }
        iVar2 = iVar5 >> 0x18;
        iVar5 = iVar5 + 0x1000000;
        pQVar4 = (QUAKE_CTRL *)(pQVar4->pow + 1);
        *(float *)pafVar3 = xd[0] * fVar6 + camera.yd.x * fVar7 + camera.zd.x * fVar8;
        *(float *)((int)pafVar3 + 4) = xd[1] * fVar6 + camera.yd.y * fVar7 + camera.zd.y * fVar8;
        fVar9 = xd[2];
        *(float *)((int)pafVar3 + 0xc) = 0.0;
        *(float *)((int)pafVar3 + 8) = fVar9 * fVar6 + camera.yd.z * fVar7 + camera.zd.z * fVar8;
        pafVar3 = (float (*) [4])((int)pafVar3 + 0x10);
      } while (iVar2 < 2);
      sceVu0AddVector(&camera.p,&camera.p,(Vector4 *)val);
      sceVu0AddVector(&camera.i,&camera.i,(Vector4 *)val[1]);
      return '\x01';
    }
    if (quake.loop != '\0') {
      fVar6 = motGetRandom(600.0,1200.0);
      quake.cnt = (int)fVar6;
      quake.loop = quake.loop + -1;
      return '\0';
    }
    quake.req = 0;
    StopQuake();
  }
  return '\0';
}

float motGetRandom(float upper, float lower) {
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * (upper - lower) + lower;
}

float motLinearSupValue(float moto, float saki, u_char mode, u_int cnt, u_int all_cnt) {
	u_int now_cnt;
	float val;
	float cnt_rate;
	float dv;
	
  uint uVar1;
  float fVar2;
  float in_f0;
  float fVar3;
  
  if (all_cnt < cnt) {
    cnt = all_cnt;
  }
  uVar1 = all_cnt + 1;
  if (all_cnt != 0) {
    uVar1 = all_cnt;
  }
  if ((int)cnt < 0) {
    fVar2 = (float)(cnt & 1 | cnt >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)cnt;
  }
  if ((int)uVar1 < 0) {
    fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)uVar1;
  }
  fVar2 = fVar2 / fVar3;
  fVar3 = saki - moto;
  if (mode == '\x01') {
    fVar2 = SgSinf(fVar2 * DAT_00355984 + DAT_00355988);
    fVar3 = fVar2 * fVar3 + fVar3;
  }
  else if (mode < 2) {
    if (mode != '\0') {
      return in_f0;
    }
    fVar3 = fVar3 * fVar2;
  }
  else {
    if (mode != '\x02') {
      return in_f0;
    }
    fVar2 = SgSinf(fVar2 * DAT_0035598c);
    fVar3 = fVar3 * fVar2;
  }
  return moto + fVar3;
}
