// STATUS: NOT STARTED


void EAdpcmCmdInit(u_int dev_init) {
  SetIopCmdSm(0x1a,dev_init,0,0);
  return;
}

void EAdpcmCmdPlay(u_char channel, u_char loop, int file_no, int start_flm, u_short vol, u_short pan, u_short pitch, u_short fin_flm) {
	IMG_ARRANGEMENT *iap;
	int flg;
	
  IMG_ARRANGEMENT *pIVar1;
  uint data4;
  uint uVar2;
  
  pIVar1 = GetImgArrangementP(file_no);
  uVar2 = 0xc;
  if (loop != 0) {
    uVar2 = 0xe;
  }
  data4 = uVar2 | 1;
  if (channel == 0) {
    data4 = uVar2;
  }
  SetIopCmdLg(0x1b,file_no,pIVar1->start,pIVar1->size,data4,(int)pan << 0x10 | (int)vol & 0xffffU,
              (int)pitch << 0x10 | (int)fin_flm & 0xffffU,start_flm);
  return;
}

void EAdpcmCmdPreload(u_char channel, int file_no, int start_flm, u_short fin_flm) {
	IMG_ARRANGEMENT *iap;
	
  IMG_ARRANGEMENT *pIVar1;
  
  pIVar1 = GetImgArrangementP(file_no);
  SetIopCmdLg(0x1c,file_no,pIVar1->start,pIVar1->size,0,0,0,start_flm);
  return;
}

void EAdpcmCmdPreEndPlay(u_char channel, u_char loop, int file_no, u_short vol, u_short pan, u_short pitch, u_short fin_flm) {
	int flg;
	
  uint uVar1;
  uint data4;
  
  uVar1 = 0xc;
  if (loop != 0) {
    uVar1 = 0xe;
  }
  data4 = uVar1 | 1;
  if (channel == 0) {
    data4 = uVar1;
  }
  SetIopCmdLg(0x1d,file_no,0,0,data4,(int)pan << 0x10 | (int)vol & 0xffffU,
              (int)pitch << 0x10 | (int)fin_flm & 0xffffU,0);
  return;
}

void EAdpcmCmdStop(u_char channel, int file_no, u_short fout_flm) {
  SetIopCmdLg(0x1e,file_no,0,0,(uint)(channel != 0),0,(int)fout_flm & 0xffff,0);
  return;
}

void EAdpcmCmdPause(u_char channel, int file_no, u_short fout_flm) {
  SetIopCmdLg(0x1f,file_no,0,0,0,0,(int)fout_flm & 0xffff,0);
  return;
}

void EAdpcmCmdRestart(u_char channel, int file_no, u_short fin_flm) {
  SetIopCmdLg(0x20,file_no,0,0,0,0,(int)fin_flm & 0xffff,0);
  return;
}

void EAdpcmCmdFadeVol(u_char channel, int file_no, u_short vol_percent, u_short fin_flm) {
  SetIopCmdLg(0x21,file_no,0,0,0,(int)vol_percent & 0xffff,(int)fin_flm & 0xffff,0);
  return;
}

void EAdpcmCmdPos(u_char channel, int file_no, u_short vol, u_short pan, u_short pitch) {
  SetIopCmdLg(0x22,file_no,0,0,0,(int)pan << 0x10 | (int)vol & 0xffffU,(int)pitch & 0xffff,0);
  return;
}

short int EAGetRetStat() {
  return rcv_stat.adpcm.status;
}

short int EAGetRetTune() {
  return rcv_stat.adpcm.tune_no;
}

int EAGetRetCount() {
  return rcv_stat.adpcm.count;
}

u_char IsAdpcmPlay(int file_no) {
  byte bVar1;
  ushort uVar2;
  
  uVar2 = EAGetRetTune();
  if ((long)(short)uVar2 == (long)file_no) {
    uVar2 = EAGetRetStat();
    bVar1 = 1;
    if ((short)uVar2 < 6) {
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

u_short EAdpcmGetPan(float rot) {
	float panf;
	
  short sVar1;
  float fVar3;
  uint uVar2;
  
  fVar3 = SgSinf(rot);
  uVar2 = (int)(fVar3 * 640.0 + 640.0) & 0xffff;
  sVar1 = (short)uVar2;
  if (0x4ff < uVar2) {
    sVar1 = 0x4ff;
  }
  return sVar1;
}

u_short EAdpcmGetVol(float dist, u_short vol) {
	float ratio_dist;
	
  float fVar1;
  
  if (dist < DAT_0035512c) {
    fVar1 = (DAT_0035512c - dist) / DAT_0035512c;
    fVar1 = fVar1 * fVar1;
  }
  else {
    fVar1 = 0.0;
  }
  return (short)(int)((float)((int)vol & 0xffff) * fVar1);
}

u_short EAdpcmGetPitch(float rot, float dist, u_short pitch) {
	float fpitch_rate;
	
  uint uVar1;
  float fVar2;
  
  if (rot < 0.0) {
    rot = -rot;
  }
  uVar1 = (int)((float)((int)pitch & 0xffff) +
               (rot / DAT_00355130) * (float)((int)pitch & 0xffff) * 0.5) & 0xffff;
  if (dist < 2000.0) {
    fVar2 = (float)uVar1 + ((float)uVar1 * DAT_00355134 * (2000.0 - dist)) / 2000.0;
  }
  else {
    if (DAT_00355138 <= dist) {
      return (short)(int)((float)uVar1 * DAT_00355140);
    }
    fVar2 = (float)uVar1 - ((dist - 2000.0) * (float)uVar1 * DAT_0035513c) / 8000.0;
  }
  return (short)(int)fVar2;
}
