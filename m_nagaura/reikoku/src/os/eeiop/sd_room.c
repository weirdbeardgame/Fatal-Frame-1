// STATUS: NOT STARTED

enum BGM_NO {
	BN_BGM00 = 0,
	BN_BGM01 = 1,
	BN_BGM02 = 2,
	BN_BGM03 = 3,
	BN_BGM04 = 4,
	BN_BGM05 = 5,
	BN_BGM10 = 6,
	BN_BGM12 = 7,
	BN_BGM13 = 8,
	BN_BGM14 = 9,
	BN_BGM15 = 10,
	BN_BGM16 = 11,
	BN_BGM18 = 12,
	BN_TAPE = 13,
	BN_USIRO = 14,
	BN_IKESU = 15,
	BN_KAZE = 16,
	BN_NAKANIWA = 17,
	BN_NAKASU = 18,
	BN_SANDOU = 19,
	BN_URANIWA = 20,
	BN_BGM19 = 21,
	BN_KAMINARI = 22,
	BN_NOTHING = 23
};

ADPCM_ROOM_PLAY adpcm_param_tbl[0] = {
};
int foot_se_index[0] = {
};
static ROOM_SOUND_INFO rm_snd_info[0] = {
};
static ROOM_DOOR_SE rm_door[0] = {
};
static ROOM_FOOT_SE rm_foot[0] = {
};
static u_int rm_srund[0] = {
};
static u_int rm_event[0] = {
};

ROOM_SOUND_INFO* GetSdrDatP(u_char room_id) {
  return (ROOM_SOUND_INFO *)(&rm_snd_info + ((int)(char)room_id & 0xffU) * 0xc);
}

int GetSdrAdpcmFno(u_char room_id) {
  return *(int *)(&adpcm_param_tbl +
                 (uint)(byte)(&DAT_00267a96)
                             [(uint)ingame_wrk.msn_no + ((int)(char)room_id & 0xffU) * 0xc] * 8);
}

u_short GetSdrAdpcmVol(u_char room_id) {
  return *(short *)(&DAT_00267964 +
                   (uint)(byte)(&DAT_00267a96)
                               [(uint)ingame_wrk.msn_no + ((int)(char)room_id & 0xffU) * 0xc] * 8);
}

u_short GetSdrReverbVol(u_char room_id) {
  return *(short *)(&rm_snd_info + ((int)(char)room_id & 0xffU) * 0xc);
}

void SetRoomReverbVol(u_char room_id) {
	u_short vol;
	
  short vol;
  
  if (room_id < 0x2a) {
    vol = GetSdrReverbVol(room_id);
  }
  else {
    vol = 0x2fff;
  }
  SetReverbVolume(vol);
  return;
}

u_int* GetSdrDoorSeTblP(u_char room_id) {
	u_char door_no;
	
  uint uVar1;
  
  uVar1 = (uint)(byte)(&DAT_00267a92)[((int)(char)room_id & 0xffU) * 0xc];
  if ((ingame_wrk.msn_no != 1) && (((int)(char)room_id & 0xffU) == 0xd)) {
    uVar1 = 0x2a;
  }
  return (uint *)(&rm_door + uVar1 * 0xc);
}

u_int* GetSdrFootSeTblP(u_char room_id) {
  return (uint *)(&rm_foot + (uint)(byte)(&DAT_00267a93)[((int)(char)room_id & 0xffU) * 0xc] * 0x14)
  ;
}

u_int GetSdrSrundSe(u_char room_id) {
  return *(uint *)(&rm_srund + (uint)(byte)(&DAT_00267a94)[((int)(char)room_id & 0xffU) * 0xc] * 4);
}

u_int GetSdrEventSe(u_char room_id) {
  return *(uint *)(&rm_event + (uint)(byte)(&DAT_00267a95)[((int)(char)room_id & 0xffU) * 0xc] * 4);
}
