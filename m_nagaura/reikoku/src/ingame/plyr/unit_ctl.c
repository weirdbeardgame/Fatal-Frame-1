// STATUS: NOT STARTED


void RotLimitChk(float *rot) {
  float fVar1;
  
  fVar1 = *rot;
  if (DAT_00356208 < fVar1) {
    *rot = fVar1 - DAT_0035620c;
    return;
  }
  if (fVar1 < DAT_00356210) {
    *rot = fVar1 + DAT_00356214;
  }
  return;
}

float GetTrgtRotY(float *p0, float *p1) {
  float fVar1;
  
  fVar1 = SgAtan2f(*p1 - *p0,p1[2] - p0[2]);
  return fVar1;
}

void GetTrgtRotFromPlyr(float *p, float *rot, int id) {
	sceVu0FVECTOR dist;
	
  float fVar1;
  float dist [4];
  
  *rot = 0.0;
  rot[1] = 0.0;
  rot[2] = 0.0;
  rot[3] = 0.0;
  sceVu0SubVector(dist,p,0x252bf0);
  dist[1] = -(dist[1] - -600.0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV(p,&plyr_wrk.move_box.spd.z);
    fVar1 = SgAtan2f(dist[1],dist[3]);
    *rot = fVar1;
  }
  if ((id & 2U) != 0) {
    fVar1 = SgAtan2f(dist[0],dist[2]);
    rot[1] = fVar1;
  }
  return;
}

void GetTrgtRot(float *p0, float *p1, float *rot, int id) {
	sceVu0FVECTOR dist;
	
  float fVar1;
  float dist [4];
  
  *rot = 0.0;
  rot[1] = 0.0;
  rot[2] = 0.0;
  rot[3] = 0.0;
  sceVu0SubVector(dist,p1,p0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV(p0,p1);
    fVar1 = SgAtan2f(-dist[1],dist[3]);
    *rot = fVar1;
    RotLimitChk(rot);
  }
  if ((id & 2U) != 0) {
    fVar1 = SgAtan2f(dist[0],dist[2]);
    rot[1] = fVar1;
    RotLimitChk(rot + 1);
  }
  return;
}

int GetRndSP(u_int min, u_int lng) {
	long int result;
	
  int iVar1;
  long lVar2;
  float fVar3;
  
  if ((long)(int)lng != 0) {
    iVar1 = rand();
    lVar2 = __muldi3((long)(int)lng & 0xffffffff,(long)iVar1);
    fVar3 = __floatdisf(lVar2);
    lVar2 = __fixsfdi(fVar3 * 4.656613e-10);
    min = min + (int)lVar2;
  }
  return min;
}

u_char ConvertRot2Dir(float rot, u_char id) {
	u_char dir;
	
  int iVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  
  if (id == '\x01') {
    iVar4 = (int)((rot + DAT_00356224 + DAT_00356228) / DAT_0035622c);
    iVar1 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    uVar3 = iVar4 + (iVar1 >> 3) * -8 + 4U & 0xff;
    uVar2 = (uchar)uVar3;
    if (7 < uVar3) {
      uVar2 = uVar2 + 0xf8;
    }
  }
  else {
    if (id < 2) {
      if (id == '\0') {
        iVar4 = (int)((rot + DAT_00356218 + DAT_0035621c) / DAT_00356220);
        iVar1 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar1 = iVar4;
        }
        uVar3 = iVar4 + (iVar1 >> 2) * -4 + 2U & 0xff;
        uVar2 = (uchar)uVar3;
        if (uVar3 < 4) {
          return uVar2;
        }
        return uVar2 + 0xfc;
      }
    }
    else if (id == '\x02') {
      uVar3 = (int)((rot + DAT_00356230 + DAT_00356234) / DAT_00356230) % 2 + 1U & 0xff;
      uVar2 = (uchar)uVar3;
      if (uVar3 < 2) {
        return uVar2;
      }
      return uVar2 + 0xfe;
    }
    uVar2 = '\0';
    if (rot < 0.0) {
      uVar2 = '\x01';
    }
  }
  return uVar2;
}

u_char HitChkSegment2AllChk(float *f, float *t, float deg) {
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)room_wrk.disp_no[0];
  uVar2 = GetPointRoom((short)(int)*f,(short)(int)f[2]);
  uVar1 = '\x01';
  if (uVar3 == uVar2) {
    uVar3 = (uint)room_wrk.disp_no[0];
    uVar2 = GetPointRoom((short)(int)*t,(short)(int)t[2]);
    uVar1 = '\x01';
    if (uVar3 == uVar2) {
      uVar1 = HitChkSegment2All(f,t,deg);
    }
  }
  return uVar1;
}

u_char OutSightChk(float *tp, float *vp, float rot, float sight, float dist) {
	u_char chk;
	
  int iVar1;
  float fVar2;
  
  if ((dist != 0.0) && (fVar2 = GetDistV(tp,vp), dist < fVar2)) {
    return '\x01';
  }
  iVar1 = RotRngChk(vp,tp,rot,sight * 0.5);
  return iVar1 == 0;
}

int RotRngChk(float *vp, float *tp, float rot, float rng) {
  float fVar1;
  float local_30 [4];
  
  local_30[0] = rot;
  fVar1 = GetTrgtRotY(vp,tp);
  local_30[0] = fVar1 - local_30[0];
  RotLimitChk(local_30);
  return (uint)(ABS(local_30[0]) <= rng);
}

int GetPointHeightChk(float *tv) {
	int result;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = (uint)room_wrk.disp_no[0];
  uVar1 = GetPointRoom((short)(int)*tv,(short)(int)tv[2]);
  if (uVar2 == uVar1) {
    fVar3 = GetPointHeight((short)(int)*tv,(short)(int)tv[2]);
    tv[1] = fVar3;
  }
  return (uint)(uVar2 == uVar1);
}

void ReqEneStop(u_char req, u_char except) {
	ENE_WRK *ew;
	FLY_WRK *fw;
	u_char i;
	
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  FLY_WRK *pFVar4;
  uint uVar5;
  ENE_WRK *pEVar6;
  
  if (req != '\0') {
    uVar5 = 0;
    pEVar6 = ene_wrk;
    do {
      if (((pEVar6->sta & 1) != 0) &&
         (((int)((int)(char)except & 0xffU) >> (uVar5 & 0x1f) & 1U) == 0)) {
        puVar3 = (uint *)((int)ene_wrk + uVar5 * 0x430);
        uVar1 = *puVar3;
        *puVar3 = uVar1 | 0x8000000;
        if (req == '\x02') {
          *puVar3 = uVar1 | 0x8200000;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
      pEVar6 = (ENE_WRK *)((int)&pEVar6[1].move_box.spd.z + 2);
    } while (uVar5 < 4);
    pFVar4 = fly_wrk;
    bVar2 = 0;
    do {
      if ((pFVar4->sta & 1U) != 0) {
        pFVar4->sta = pFVar4->sta | 4;
      }
      bVar2 = bVar2 + 1;
      pFVar4 = pFVar4 + 1;
    } while (bVar2 < 10);
    return;
  }
  pEVar6 = ene_wrk;
  uVar5 = 0;
  do {
    if ((pEVar6->sta & 0x8000000) != 0) {
      puVar3 = (uint *)((int)ene_wrk + uVar5 * 0x430);
      *puVar3 = *puVar3 & 0xf7dfffff;
    }
    uVar5 = uVar5 + 1 & 0xff;
    pEVar6 = (ENE_WRK *)((int)&pEVar6[1].move_box.spd.z + 2);
  } while (uVar5 < 4);
  pFVar4 = fly_wrk;
  bVar2 = 0;
  do {
    if ((pFVar4->sta & 4U) != 0) {
      pFVar4->sta = pFVar4->sta & 0xfffb;
    }
    bVar2 = bVar2 + 1;
    pFVar4 = pFVar4 + 1;
  } while (bVar2 < 10);
  return;
}
