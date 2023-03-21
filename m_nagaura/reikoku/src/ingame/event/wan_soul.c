// STATUS: NOT STARTED

WANDER_SOUL_WRK wander_soul_wrk[1] = {
	/* [0] = */ {
		/* .state = */ ST_WANSO_VACANT,
		/* .vanish = */ ST_WANSO_VACANT,
		/* .id = */ 0,
		/* .disp_flg = */ 0,
		/* .turn = */ 0,
		/* .move_flg = */ 0,
		/* .count = */ 0,
		/* .spl_speed = */ 0.f,
		/* .sp_mat = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [3] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .ori_pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .disp_pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .speedv = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .accelv = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .type = */ 0,
		/* .message_id = */ 0,
		/* .face_id = */ 0,
		/* .adpcm_id = */ 0,
		/* .spl_flg = */ 0,
		/* .destination = */ NULL,
		/* .room_no = */ 0,
		/* .dist = */ 0.f,
		/* .eff_buff = */ NULL,
		/* .wanso_wait_time = */ 0,
		/* .srate = */ 0.f,
		/* .arate = */ 0.f,
		/* .lightpower = */ 0.f
	}
};
static int ene_face_load_id;
static void *ws_noise_buf;
static void *face_buff;
static u_short adpcm_wait_limit;
static void *p_deform_buf;
static void *overlap_buf;
static u_char soul_tell_mode;
static short int telling_count;
static sceVu0FVECTOR save_soul_pos;
static sceVu0FVECTOR end_cam_pos;
static sceVu0FVECTOR cam_move_speed;
static sceVu0FVECTOR cam_ref_adjust_val;

sceVu0FVECTOR* SetFirstDestination(sceVu0FVECTOR *destination, float *pos) {
	float dist;
	
  float (*p0) [4];
  float fVar1;
  float fVar2;
  
  p0 = destination[1];
  fVar1 = GetDistV((float *)destination,pos);
  fVar2 = (*p0)[0];
  while (((fVar2 != 0.0 || ((*p0)[1] != 0.0)) || ((*p0)[2] != 0.0))) {
    fVar2 = GetDistV((float *)p0,pos);
    p0 = p0[1];
    if (fVar1 <= fVar2) break;
    fVar2 = (*p0)[0];
  }
  return p0[-1];
}

float GetDist3(float *v1, float *v2) {
	sceVu0FVECTOR temp;
	
  float fVar1;
  float temp [4];
  
  sceVu0SubVector(temp,v2,v1);
  fVar1 = (float)sceVu0InnerProduct(temp,temp);
  fVar1 = SgSqrtf(fVar1);
  return fVar1;
}

float GetDistPlyr(float *plyr, float *soul) {
	sceVu0FVECTOR temp;
	
  float fVar1;
  float temp [4];
  
  sceVu0CopyVector((Vector4 *)temp,(Vector4 *)soul);
  temp[1] = temp[1] - -500.0;
  sceVu0SubVector(temp,temp,plyr);
  fVar1 = (float)sceVu0InnerProduct(temp,temp);
  fVar1 = SgSqrtf(fVar1);
  return fVar1;
}

void* SetEffectsWithScale(float *pos, SOUL_EFF_PARAM *param, float scale, float rgb) {
	static SOUL_EFF_PARAM temp;
	
  void *pvVar1;
  
  temp_129 = (undefined)(int)((float)(uint)param->r1 * rgb);
  DAT_00402e51 = (undefined)(int)((float)(uint)param->g1 * rgb);
  DAT_00402e52 = (undefined)(int)((float)(uint)param->b1 * rgb);
  DAT_00402e54 = param->scale1 * scale;
  DAT_00402e58 = (undefined)(int)((float)(uint)param->r2 * rgb);
  DAT_00402e59 = (undefined)(int)((float)(uint)param->g2 * rgb);
  DAT_00402e5a = (undefined)(int)((float)(uint)param->b2 * rgb);
  DAT_00402e5c = param->scale2 * scale;
  pvVar1 = SetEffects(0x17,1);
  return pvVar1;
}

int GetUsableWanSoWrkID() {
  return 0;
}

void SetNewSpeed(WANDER_SOUL_WRK *wswrk) {
  float *pfVar1;
  
  pfVar1 = wswrk->accelv;
  sceVu0SubVector(pfVar1,wswrk->destination,wswrk->ori_pos);
  sceVu0Normalize(pfVar1,pfVar1);
  sceVu0ScaleVector(0.5,(Vector4 *)pfVar1,(Vector4 *)pfVar1);
  return;
}

void NewMissionInitWanderSoul() {
  memset(wander_soul_wrk,0,0xd0);
  return;
}

void ReviveWanderSoul() {
	int i;
	
  WANDER_SOUL_WRK *wswrk;
  int iVar1;
  
  iVar1 = 0;
  wswrk = wander_soul_wrk;
  telling_count = 0;
  ws_noise_buf = (void *)0x0;
  face_buff = (void *)0x0;
  adpcm_wait_limit = 0;
  p_deform_buf = (void *)0x0;
  overlap_buf = (void *)0x0;
  do {
    if (wswrk->eff_buff != (void *)0x0) {
      wswrk->disp_flg = '\0';
      RegisterWansoEffect(wswrk);
    }
    iVar1 = iVar1 + -1;
    wswrk = wswrk + 1;
  } while (-1 < iVar1);
  return;
}

void BSplinePos(float *pos, float *mat_point_array[4], float t1) {
	float rev;
	float t2;
	float t3;
	sceVu0FVECTOR coeff;
	
  float fVar1;
  float fVar2;
  float coeff [4];
  
  fVar2 = t1 * t1;
  fVar1 = 1.0 - t1;
  coeff[3] = fVar2 * t1;
  coeff[0] = fVar1 * fVar1 * fVar1;
  coeff[2] = ((fVar2 + t1) - coeff[3]) * 3.0 + 1.0;
  coeff[1] = (coeff[3] * 3.0 - fVar2 * 6.0) + 4.0;
  sceVu0ApplyMatrix((Vector4 *)pos,(Matrix4x4 *)mat_point_array,(Vector4 *)coeff);
  pos[3] = 6.0;
  sceVu0ScaleVector(DAT_0035629c,(Vector4 *)pos,(Vector4 *)pos);
  return;
}

void ClearWanderSoulOne(WANDER_SOUL_WRK *wswrk) {
  memset(wswrk,0,0xd0);
  return;
}

void CallWanderSoul(u_char data_id, float *pos) {
	WANDER_SOUL_WRK *wswrk;
	
  int iVar1;
  
  iVar1 = GetUsableWanSoWrkID();
  if (wander_soul_wrk[iVar1].eff_buff != (void *)0x0) {
    ResetEffects(wander_soul_wrk[iVar1].eff_buff);
  }
  ClearWanderSoulOne(wander_soul_wrk + iVar1);
  wander_soul_wrk[iVar1].state = ST_WANSO_INIT;
  sceVu0CopyVector((Vector4 *)wander_soul_wrk[iVar1].ori_pos,(Vector4 *)pos);
  wander_soul_wrk[iVar1].id = data_id;
  return;
}

void RegisterWansoEffect(WANDER_SOUL_WRK *wswrk) {
  void *pvVar1;
  
  if ((wswrk->disp_flg == '\0') && (change_efbank != 0)) {
    pvVar1 = SetEffects(0x19,2);
    wswrk->eff_buff = pvVar1;
    if (pvVar1 != (void *)0x0) {
      wswrk->disp_flg = '\x01';
    }
  }
  return;
}

void WansoLateInit(WANDER_SOUL_WRK *wswrk) {
	int i;
	
  uchar uVar1;
  float (*pafVar2) [4];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = 3;
  pfVar5 = wswrk->sp_mat + 3;
  pfVar4 = wswrk->sp_mat + 2;
  pfVar3 = wswrk->sp_mat + 1;
  pafVar2 = wswrk->sp_mat;
  do {
    iVar6 = iVar6 + -1;
    (*pafVar2)[0] = wswrk->ori_pos[0];
    pafVar2 = pafVar2[1];
    *pfVar3 = wswrk->ori_pos[1];
    pfVar3 = pfVar3 + 4;
    *pfVar4 = wswrk->ori_pos[2];
    pfVar4 = pfVar4 + 4;
    *pfVar5 = wswrk->ori_pos[3];
    pfVar5 = pfVar5 + 4;
  } while (-1 < iVar6);
  SetWanSoDat2Wrk((uint)wswrk->id,wswrk);
  if (wswrk->destination == (float (*) [4])0x0) {
    wswrk->state = ST_WANSO_FLOAT;
  }
  else {
    wswrk->state = ST_WANSO_SPLINE;
    SetFirstDestination(wswrk->destination,wswrk->ori_pos);
    wswrk->spl_speed = 0.5;
  }
  wswrk->disp_pos[0] = 0.0;
  wswrk->disp_pos[1] = 0.0;
  wswrk->disp_pos[2] = 0.0;
  uVar1 = room_wrk.disp_no[0];
  wswrk->count = 0;
  wswrk->room_no = uVar1;
  wswrk->arate = 1.0;
  wswrk->srate = 1.0;
  RegisterWansoEffect(wswrk);
  return;
}

void ReleaseWanderSoul(u_char data_id) {
	int i;
	WANDER_SOUL_WRK *wswrk;
	
  int iVar1;
  WANDER_SOUL_WRK *pWVar2;
  WANDER_SOUL_WRK *pWVar3;
  
  pWVar2 = wander_soul_wrk;
  iVar1 = 0;
  if (wander_soul_wrk[0].id == data_id) {
LAB_0021ec0c:
    if (iVar1 < 1) {
      pWVar2->state = ST_WANSO_VACANT;
    }
  }
  else {
    pWVar3 = pWVar2;
    for (iVar1 = 1; pWVar2 = pWVar3 + 1, iVar1 < 1; iVar1 = iVar1 + 1) {
      if (pWVar3[1].id == data_id) goto LAB_0021ec0c;
      pWVar3 = pWVar2;
    }
  }
  return;
}

int WanSoNearJudge(float dist, float distv) {
  if ((2000.0 <= dist) && (1000.0 <= distv)) {
    return 0;
  }
  return 1;
}

int WanSoTouchJudge(float *soul_pos, MOVE_BOX *mbp) {
  int iVar1;
  float fVar2;
  
  iVar1 = RotCheck(soul_pos,mbp,0x32);
  if ((iVar1 != 0) && (fVar2 = GetDist3(soul_pos,&(mbp->pos).y), fVar2 <= 400.0)) {
    return 1;
  }
  return 0;
}

void SoulFloating(float *pos, float *rgb) {
	static int time = 0;
	
  float fVar1;
  
  fVar1 = SgSinf(((float)time_169 / 80.0) * DAT_003562a0);
  pos[2] = 0.0;
  *pos = 0.0;
  pos[1] = fVar1 * 15.0;
  time_169 = time_169 + 1;
  return;
}

void SetSoulNewMove(WANDER_SOUL_WRK *wswrk) {
	float dist;
	sceVu0FVECTOR temp;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float temp [4];
  
  fVar2 = GetDist3(wswrk->ori_pos,(float *)wswrk->destination);
  if (fVar2 <= 500.0) {
    wswrk->dist = fVar2;
    wswrk->count = (short)(int)(fVar2 / 10.5);
  }
  else {
    if (fVar2 <= DAT_003562a4) {
      iVar1 = rand();
      fVar2 = 250.0;
      fVar3 = (float)iVar1 * 4.656613e-10 * 0.5 + 1.0;
    }
    else {
      iVar1 = rand();
      fVar2 = 4.656613e-10;
      fVar3 = (float)iVar1 * 500.0;
    }
    wswrk->dist = fVar3 * fVar2;
    wswrk->count = (short)(int)((fVar3 * fVar2) / 10.5);
  }
  return;
}

void Change2WanSoExtinct(WANDER_SOUL_WRK *wswrk) {
  if (wswrk->adpcm_id != -1) {
    AdpcmStopSoul(0x14);
  }
  wswrk->state = ST_WANSO_EXTINCT;
  wswrk->vanish = SOUL_LIGHT_WAIT;
  wswrk->destination = (float (*) [4])0x0;
  wswrk->wanso_wait_time = 0x14;
  return;
}

void FinishWanSoWrk(WANDER_SOUL_WRK *wswrk) {
  if (ws_noise_buf != (void *)0x0) {
    ResetEffects(ws_noise_buf);
  }
  if (p_deform_buf == (void *)0x0) {
    wswrk->state = ST_WANSO_VACANT;
  }
  else {
    ResetEffects(p_deform_buf);
    wswrk->state = ST_WANSO_VACANT;
  }
  ingame_wrk.mode = 6;
  plyr_wrk.spot_pos.y = 0.0;
  furn_disp_flg = 0;
  return;
}

void ComeOnSignal(float *scale, float *rgb, u_short time) {
  return;
}

float StopAbleDist(float speed, float accel, u_short *count) {
	float time;
	
  float fVar1;
  
  fVar1 = speed / accel;
  *count = (short)(int)fVar1;
  return speed * fVar1 - fVar1 * fVar1 * accel * 0.5;
}

float GetRot(float *a, float *b) {
	sceVu0FVECTOR temp;
	
  float fVar1;
  float temp [4];
  
  sceVu0SubVector(temp,b,a);
  fVar1 = SgAtan2f(temp[0],temp[2]);
  return fVar1;
}

int RotCheck2(float rot1, float rot2, u_short range) {
  int iVar1;
  float local_30 [4];
  
  local_30[0] = rot1 - rot2;
  RotLimitChk(local_30);
  local_30[0] = ABS(local_30[0]);
  iVar1 = dpcmp((long)(double)local_30[0],
                (long)((double)((float)((int)range & 0xffff) * DAT_003562a8) / DAT_00352f80));
  return 0 < iVar1 ^ 1;
}

void GetBSplinePos(float *pos, float *mat_point_array[4], float t1) {
	float rev;
	float t2;
	float t3;
	sceVu0FVECTOR coeff;
	
  float fVar1;
  float fVar2;
  float coeff [4];
  
  fVar2 = t1 * t1;
  fVar1 = 1.0 - t1;
  coeff[3] = fVar2 * t1;
  coeff[0] = fVar1 * fVar1 * fVar1;
  coeff[2] = ((fVar2 + t1) - coeff[3]) * 3.0 + 1.0;
  coeff[1] = (coeff[3] * 3.0 - fVar2 * 6.0) + 4.0;
  sceVu0ApplyMatrix((Vector4 *)pos,(Matrix4x4 *)mat_point_array,(Vector4 *)coeff);
  pos[3] = 6.0;
  sceVu0ScaleVector(DAT_003562ac,(Vector4 *)pos,(Vector4 *)pos);
  return;
}

int SetMoveDirect(WANDER_SOUL_WRK *wswrk, float s2p_len) {
	float rot2;
	sceVu0FVECTOR temp;
	sceVu0FVECTOR *tempdes;
	
  int iVar1;
  float (*pafVar2) [4];
  float rot2;
  float rot1;
  float temp [4];
  
  pafVar2 = wswrk->destination;
  rot2 = GetRot(wswrk->ori_pos,&plyr_wrk.move_box.spd.z);
  for (; (((*pafVar2)[0] != -1.0 || ((*pafVar2)[1] != -1.0)) || ((*pafVar2)[2] != -1.0));
      pafVar2 = pafVar2[1]) {
    sceVu0SubVector(temp,pafVar2,wswrk->ori_pos);
    rot1 = SgAtan2f(temp[0],temp[2]);
    iVar1 = RotCheck2(rot1,rot2,0x1e);
    if (iVar1 == 0) {
      wswrk->destination = pafVar2;
      sceVu0Normalize(temp,temp);
      sceVu0ScaleVector(0.5,(Vector4 *)wswrk->accelv,(Vector4 *)temp);
      return 1;
    }
  }
  return 0;
}

void AddVec2MatD(float *mat[4], float *vec) {
	int i;
	
  float (*pafVar1) [4];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 2;
  pafVar1 = mat;
  do {
    iVar2 = iVar2 + -1;
    fVar4 = pafVar1[1][1];
    fVar3 = pafVar1[1][2];
    fVar5 = pafVar1[1][3];
    (*pafVar1)[0] = pafVar1[1][0];
    (*pafVar1)[1] = fVar4;
    (*pafVar1)[2] = fVar3;
    (*pafVar1)[3] = fVar5;
    pafVar1 = pafVar1[1];
  } while (-1 < iVar2);
  mat[3][0] = *vec;
  mat[3][1] = vec[1];
  mat[3][2] = vec[2];
  mat[3][3] = vec[3];
  return;
}

void Change2WanSoFloat(WANDER_SOUL_WRK *wswrk) {
  wswrk->destination = (float (*) [4])0x0;
  wswrk->state = ST_WANSO_FLOAT;
  return;
}

float GetKnotDist(float *mat[4]) {
	sceVu0FVECTOR coeff;
	sceVu0FVECTOR first_p;
	sceVu0FVECTOR last_p;
	
  float fVar1;
  float fVar2;
  float coeff [4];
  float first_p [4];
  float last_p [4];
  
  fVar1 = DAT_003562b0;
  coeff[0] = DAT_003562b0;
  coeff[1] = DAT_003562b4;
  coeff[2] = DAT_003562b0;
  coeff[3] = 0.0;
  fVar2 = DAT_003562b4;
  sceVu0ApplyMatrix((Vector4 *)first_p,(Matrix4x4 *)mat,(Vector4 *)coeff);
  coeff[3] = fVar1;
  coeff[1] = fVar1;
  coeff[0] = 0.0;
  coeff[2] = fVar2;
  sceVu0ApplyMatrix((Vector4 *)last_p,(Matrix4x4 *)mat,(Vector4 *)coeff);
  sceVu0SubVector(coeff,(Vector4 *)last_p,(Vector4 *)first_p);
  fVar1 = (float)sceVu0InnerProduct(coeff,coeff);
  fVar1 = SgSqrtf(fVar1);
  return fVar1;
}

void SetWansoSpeed(WANDER_SOUL_WRK *wswrk, float dist) {
	static int count = 0;
	
  float fVar1;
  
  if (count_209 == 10) {
    count_209 = 0xb;
    if (DAT_003562b8 < dist) {
      wswrk->spl_speed = 0.0;
    }
    else {
      fVar1 = (float)sceVu0InnerProduct(0x252c10,0x252c10);
      fVar1 = SgSqrtf(fVar1);
      wswrk->spl_speed = fVar1;
    }
  }
  else {
    count_209 = count_209 + 1;
  }
  return;
}

void WansoPreTell(WANDER_SOUL_WRK *wswrk) {
  if (wswrk->adpcm_id == -1) {
    wswrk->wanso_wait_time = 10;
  }
  else {
    AdpcmPreSoulFadeOut(10);
  }
  FinderEndSet();
  CallSoulTellingCameraIn(wswrk->ori_pos,&plyr_wrk.move_box.spd.z,0x1e);
  SetPlyrAnime('\0','\0');
  wswrk->state = ST_WANSO_TELLIN;
  wswrk->count = 0x1e;
  ingame_wrk.mode = 0xf;
  SeStartPos(7,wswrk->ori_pos,0,0x1000,0x1000,0xff);
  return;
}

u_char WansoAlphaCtrl(WANDER_SOUL_WRK *wswrk, float dist) {
	int flg;
	
  bool bVar1;
  float fVar2;
  
  bVar1 = true;
  if ((ev_wrk.movie_on == 0) && ((plyr_wrk.sta & 1) == 0)) {
    if (((dist < 600.0) && (wswrk->message_id == 0xff)) &&
       (wswrk->destination != (float (*) [4])0x0)) {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    fVar2 = wswrk->arate + DAT_003562bc;
  }
  else {
    fVar2 = wswrk->arate - DAT_003562c0;
  }
  wswrk->arate = fVar2;
  fVar2 = wswrk->arate;
  if (fVar2 <= 1.0) {
    if (fVar2 < 0.0) {
      wswrk->arate = 0.0;
      fVar2 = 0.0;
    }
  }
  else {
    wswrk->arate = 1.0;
    fVar2 = 1.0;
  }
  return 1.0 <= fVar2;
}

void WansoExtinctCtrl(WANDER_SOUL_WRK *wswrk) {
  EN_ST_WANDER_SOUL EVar1;
  short sVar2;
  uint uVar3;
  
  EVar1 = wswrk->state;
  if (EVar1 == SOUL_LIGHT_LESSER) {
    sVar2 = wswrk->count + -1;
    wswrk->count = sVar2;
    if (sVar2 == 0) {
      wswrk->state = SOUL_LIGHT_END;
      wswrk->count = 1;
      return;
    }
    uVar3 = (uint)(ushort)wswrk->count;
  }
  else {
    if (SOUL_LIGHT_LESSER < EVar1) {
      if (EVar1 != SOUL_LIGHT_END) {
        return;
      }
      sVar2 = wswrk->count + -1;
      wswrk->count = sVar2;
      if (sVar2 == 0) {
        wswrk->state = ST_WANSO_VACANT;
        FinishWanSoWrk(wswrk);
        return;
      }
      wswrk->srate = 0.0;
      return;
    }
    if (EVar1 != SOUL_LIGHT_BIGGER) {
      return;
    }
    sVar2 = wswrk->count + -1;
    wswrk->count = sVar2;
    if (sVar2 == 0) {
      wswrk->state = SOUL_LIGHT_LESSER;
      wswrk->count = 0x14;
      return;
    }
    uVar3 = 0x1e - (ushort)wswrk->count;
  }
  wswrk->srate = (float)uVar3 / 20.0;
  return;
}

void OneSoulCtrl(WANDER_SOUL_WRK *wswrk, float *srate, float *arate) {
	float dist;
	float knot_dist;
	static float rate = 0.f;
	u_char visible;
	sceVu0FVECTOR soul;
	sceVu0FVECTOR camera;
	sceVu0FVECTOR interest;
	static u_char *strp;
	static signed char noise_in_time;
	static u_short se_no;
	static u_char face_load_end;
	static float spd = 0.5f;
	static float rate = 1.f;
	static float trate = 1.f;
	
  bool bVar1;
  uint uVar2;
  uchar uVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  float (*pafVar8) [4];
  EN_ST_WANDER_SOUL EVar9;
  float *pos;
  float (*mat) [4];
  float *soul_00;
  float fVar10;
  float len;
  float soul [4];
  float camera [4];
  float interest [4];
  
  pos = wswrk->disp_pos;
  soul_00 = wswrk->ori_pos;
  SoulFloating(pos,arate);
  sceVu0AddVector((Vector4 *)pos,(Vector4 *)soul_00,(Vector4 *)pos);
  fVar10 = GetDistPlyr(&plyr_wrk.move_box.spd.z,soul_00);
  GetDistV(&plyr_wrk.move_box.spd.z,soul_00);
  len = (float)sceVu0InnerProduct(wswrk->speedv,wswrk->speedv);
  SgSqrtf(len);
  uVar3 = WansoAlphaCtrl(wswrk,fVar10);
  if ((DAT_003562c4 <= fVar10) || (uVar3 == '\0')) {
    plyr_wrk.spot_pos.y = 0.0;
  }
  else {
    wswrk->disp_pos[3] = 1.0;
    sceVu0CopyVector((Vector4 *)&plyr_wrk.spot_rot.z,(Vector4 *)pos);
  }
  if (uVar3 == '\0') {
LAB_0021f6e8:
    EVar9 = wswrk->state;
LAB_0021f6ec:
    iVar7 = EVar9 + ~ST_WANSO_SPEED_DOWN;
  }
  else {
    EVar9 = wswrk->state;
    if ((ingame_wrk.mode != 6) || (wswrk->message_id == 0xff)) goto LAB_0021f6ec;
    iVar7 = EVar9 + ~ST_WANSO_SPEED_DOWN;
    if (EVar9 < ST_WANSO_TELLIN) {
      if ((fVar10 < 400.0) && ((plyr_wrk.sta & 8) == 0)) {
        if ((map_wrk.now_room == '\x15') &&
           (iVar7 = EVar9 + ~ST_WANSO_SPEED_DOWN, wswrk->room_no == '\x19')) goto LAB_0021f6f0;
        iVar7 = RotCheck(soul_00,(MOVE_BOX *)&plyr_wrk.move_box.tpos.z,0x32);
        if (iVar7 != 0) {
          WansoPreTell(wswrk);
          goto LAB_0021f6e8;
        }
        EVar9 = wswrk->state;
      }
      goto LAB_0021f6ec;
    }
  }
LAB_0021f6f0:
  switch(iVar7) {
  case 0:
    rate_222 = rate_222 + wswrk->spl_speed;
    mat = wswrk->sp_mat;
    while (1.0 <= rate_222) {
      rate_222 = rate_222 - 1.0;
      bVar4 = wswrk->spl_flg;
      if (bVar4 == 0) {
        pafVar8 = wswrk->destination;
        fVar10 = pafVar8[1][0];
        wswrk->destination = pafVar8[1];
        if (fVar10 != -1.0) goto LAB_0021f794;
        if (pafVar8[1][1] == -1.0) {
          uVar3 = '\x01';
          if (pafVar8[1][2] == -1.0) {
            wswrk->destination = pafVar8;
            goto LAB_0021f790;
          }
          goto LAB_0021f794;
        }
        pafVar8 = wswrk->destination;
      }
      else {
        uVar3 = bVar4 + 1;
        if (4 < bVar4) {
          if (wswrk->message_id == 0xff) {
            Change2WanSoExtinct(wswrk);
          }
          else {
            Change2WanSoFloat(wswrk);
          }
          break;
        }
LAB_0021f790:
        wswrk->spl_flg = uVar3;
LAB_0021f794:
        pafVar8 = wswrk->destination;
      }
      AddVec2MatD(mat,(float *)pafVar8);
      fVar10 = GetKnotDist(mat);
      if (0.0 < fVar10) {
        wswrk->spl_speed = 2.0 / fVar10;
      }
      else {
        wswrk->spl_speed = 1.0;
      }
    }
    GetBSplinePos(soul_00,mat,rate_222);
    break;
  default:
    WansoExtinctCtrl(wswrk);
    break;
  case 4:
    break;
  case 6:
    sVar6 = wswrk->count + -1;
    soul._0_8_ = DAT_00352f90;
    soul._8_8_ = DAT_00352f98;
    camera._0_8_ = DAT_00352fa0;
    camera._8_8_ = DAT_00352fa8;
    interest._0_8_ = DAT_00352fb0;
    interest._8_8_ = DAT_00352fb8;
    wswrk->count = sVar6;
    if (sVar6 == 0) {
      uVar3 = CallSoulTellingCamera(soul_00,camera,interest,soul);
      wswrk->turn = uVar3;
      wswrk->state = ST_WANSO_ADPCM_OUT;
    }
    else if (sVar6 == 3) {
      overlap_buf = SetEffects(8,2);
    }
    break;
  case 7:
    if (wswrk->adpcm_id == -1) {
      uVar2 = wswrk->wanso_wait_time;
      if (uVar2 != 0) goto LAB_0021fc0c;
    }
    else {
      bVar4 = IsFadeoutEndAdpcmSoul();
      if (bVar4 == 0) {
        if ((ushort)adpcm_wait_limit < 900) {
          adpcm_wait_limit = adpcm_wait_limit + 1;
          return;
        }
        adpcm_wait_limit = adpcm_wait_limit + 1;
        AdpcmStopSoul(10);
        wswrk->adpcm_id = -1;
        wswrk->state = ST_WANSO_TELL;
        return;
      }
    }
    wswrk->state = ST_WANSO_TELL;
  case 8:
    if (telling_count == 0) {
      iVar7 = SeStartPos(8,soul_00,0,0x1000,0x1000,0xff);
      se_no_225 = (ushort)iVar7;
      ws_noise_buf = SetEffects(2,4);
      noise_in_time_224 = '(';
      strp_223 = (uchar *)GetIngameMSGAddr(',',(uint)wswrk->message_id);
      if (wswrk->adpcm_id != 0xffff) {
        AdpcmPlaySoul((uint)(ushort)wswrk->adpcm_id,0x3fff,5);
      }
      if (wswrk->face_id != 0xffff) {
        ene_face_load_id = LoadReq((uint)(ushort)wswrk->face_id,0x1080000);
        face_load_end_226 = '\0';
      }
    }
    if ((int)((uint)telling_count << 0x10) < 1) {
      if ((face_load_end_226 == '\0') && (iVar7 = IsLoadEnd(ene_face_load_id), iVar7 != 0)) {
        face_load_end_226 = '\x01';
      }
      if ((((short)telling_count < -0x3c) && (face_load_end_226 != '\0')) &&
         (face_buff = SetEffects(0x21,8), face_buff != (void *)0x0)) {
        p_deform_buf = SetEffects(0x1b,2);
        telling_count = 0x32;
      }
      if (telling_count != 0) goto LAB_0021fb30;
    }
    else {
LAB_0021fb30:
      if (strp_223 != (uchar *)0x0) {
        SetMessageV3(strp_223,0x64000);
      }
      iVar7 = MesStatusCheck();
      if (iVar7 == 0) {
        strp_223 = (uchar *)0x0;
      }
    }
    if ((-1 < noise_in_time_224) &&
       (cVar5 = noise_in_time_224 + -1, bVar1 = noise_in_time_224 == '\x01',
       noise_in_time_224 = cVar5, bVar1)) {
      if (ws_noise_buf != (void *)0x0) {
        ResetEffects(ws_noise_buf);
      }
      ws_noise_buf = SetEffects(2,2);
    }
    if (((telling_count == 1) || (telling_count = telling_count - 1, telling_count == 1)) &&
       (strp_223 == (uchar *)0x0)) {
      SeStop((uint)se_no_225);
      Change2WanSoExtinct(wswrk);
      telling_count = 0;
    }
    break;
  case 0xe:
    uVar2 = wswrk->wanso_wait_time;
    if (uVar2 == 0) {
      if ((400.0 <= fVar10) && (wswrk->message_id == 0xff)) {
        return;
      }
      wswrk->count = 10;
      wswrk->state = SOUL_LIGHT_BIGGER;
      ingame_wrk.mode = 0xf;
      SetPlyrAnime('\0','\n');
      return;
    }
LAB_0021fc0c:
    wswrk->wanso_wait_time = uVar2 - 1;
  }
  return;
}

void WanderSoulCtrl() {
	int i;
	WANDER_SOUL_WRK *wswrk;
	static signed char time = 0;
	
  bool bVar1;
  char cVar2;
  WANDER_SOUL_WRK *wswrk;
  int iVar3;
  
  iVar3 = 0;
  wswrk = wander_soul_wrk;
  do {
    if (wswrk->state == ST_WANSO_VACANT) {
      if ((overlap_buf != (void *)0x0) &&
         (cVar2 = time_233 + '\x01', bVar1 = '(' < time_233, time_233 = cVar2, bVar1)) {
        ResetEffects(overlap_buf);
        overlap_buf = (void *)0x0;
        time_233 = '\0';
      }
      if (wswrk->disp_flg != '\0') {
        wswrk->disp_flg = '\0';
        if (wswrk->eff_buff != (void *)0x0) {
          ResetEffects(wswrk->eff_buff);
          wswrk->eff_buff = (void *)0x0;
        }
      }
    }
    else if (wswrk->state == ST_WANSO_INIT) {
      WansoLateInit(wswrk);
    }
    else {
      RegisterWansoEffect(wswrk);
      OneSoulCtrl(wswrk,&wswrk->srate,&wswrk->arate);
    }
    iVar3 = iVar3 + -1;
    wswrk = wswrk + 1;
  } while (-1 < iVar3);
  return;
}

u_char CallSoulTellingCamera(float *soul_pos, float *relative_camera_pos, float *relative_interest, float *relative_soul_pos) {
	sceVu0FVECTOR tempv;
	sceVu0FVECTOR axis;
	sceVu0FMATRIX mtx;
	float tempf;
	u_char turn;
	
  float fVar1;
  float tempv [4];
  float axis [4];
  float mtx [4] [4];
  
  sceVu0SubVector(tempv,0x252840,soul_pos);
  sceVu0SubVector(axis,0x252bf0,soul_pos);
  fVar1 = -axis[2];
  axis[1] = 0.0;
  axis[2] = axis[0];
  tempv[1] = 0.0;
  axis[0] = fVar1;
  fVar1 = (float)sceVu0InnerProduct(axis,tempv);
  if (fVar1 < 0.0) {
    *relative_camera_pos = -*relative_camera_pos;
  }
  sceVu0SubVector(tempv,soul_pos,0x252bf0);
  plyr_wrk.move_box.trot.w = SgAtan2f(tempv[0],tempv[2]);
  sceVu0UnitMatrix((Matrix4x4 *)mtx);
  sceVu0RotMatrix((Matrix4x4 *)mtx,(Matrix4x4 *)mtx,0x252c20);
  sceVu0TransMatrix((Matrix4x4 *)mtx,(Matrix4x4 *)mtx,(Vector4 *)&plyr_wrk.move_box.spd.z);
  sceVu0ApplyMatrix((Vector4 *)soul_pos,(Matrix4x4 *)mtx,(Vector4 *)relative_soul_pos);
  sceVu0ApplyMatrix(&camera.i,(Matrix4x4 *)mtx,(Vector4 *)relative_interest);
  sceVu0ApplyMatrix(&camera.p,(Matrix4x4 *)mtx,(Vector4 *)relative_camera_pos);
  camera.roll = DAT_003562c8;
  camera.fov = DAT_003562cc;
  soul_tell_mode = '\0';
  return fVar1 >= 0.0;
}

void CallSoulTellingCameraIn(float *soul_pos, float *mic_eye_pos, int time) {
	sceVu0FVECTOR temp;
	
  float fVar1;
  float temp [4];
  
  fVar1 = (float)time;
  sceVu0SubVector(temp,soul_pos,0x252840);
  sceVu0ScaleVector(1.0 / (fVar1 * DAT_003562d0),(Vector4 *)cam_move_speed,(Vector4 *)temp);
  sceVu0SubVector(temp,soul_pos,0x252850);
  sceVu0ScaleVector(1.0 / fVar1,(Vector4 *)cam_ref_adjust_val,(Vector4 *)temp);
  soul_tell_mode = '\x01';
  sceVu0CopyVector((Vector4 *)save_soul_pos,(Vector4 *)soul_pos);
  return;
}

int SoulTellingCameraInCtrl() {
  int iVar1;
  
  iVar1 = 0;
  if (ingame_wrk.mode == 0xf) {
    if (soul_tell_mode != '\0') {
      sceVu0AddVector(&camera.p,&camera.p,(Vector4 *)cam_move_speed);
      sceVu0AddVector(&camera.i,&camera.i,(Vector4 *)cam_ref_adjust_val);
    }
    iVar1 = 1;
  }
  return iVar1;
}
