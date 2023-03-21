// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#178,  not equal)
enum {
	REIKON_MSG100 = 0,
	REIKON_MSG102 = 1,
	REIKON_MSG103 = 2,
	REIKON_MSG110 = 3,
	REIKON_MSG112 = 4,
	REIKON_MSG114 = 5,
	REIKON_MSG119 = 6,
	REIKON_MSG121 = 7,
	REIKON_MSG123 = 8,
	REIKON_MSG130 = 9,
	REIKON_MSG202 = 10,
	REIKON_MSG204 = 11,
	REIKON_MSG206 = 12,
	REIKON_MSG211 = 13,
	REIKON_MSG212 = 14,
	REIKON_MSG214 = 15,
	REIKON_MSG215 = 16,
	REIKON_MSG216 = 17
};

sceVu0FVECTOR soul_des100[0] = {
};
sceVu0FVECTOR soul_des101[0] = {
};
sceVu0FVECTOR soul_des102[0] = {
};
sceVu0FVECTOR soul_des103[0] = {
};
sceVu0FVECTOR soul_des105[0] = {
};
sceVu0FVECTOR soul_des110[0] = {
};
sceVu0FVECTOR soul_des112[0] = {
};
sceVu0FVECTOR soul_des114[0] = {
};
sceVu0FVECTOR soul_des119[0] = {
};
sceVu0FVECTOR soul_des120[0] = {
};
sceVu0FVECTOR soul_des121[0] = {
};
sceVu0FVECTOR soul_des123[0] = {
};
sceVu0FVECTOR soul_des128[0] = {
};
sceVu0FVECTOR soul_des130[0] = {
};
sceVu0FVECTOR soul_des131[0] = {
};
sceVu0FVECTOR soul_des132[0] = {
};
sceVu0FVECTOR soul_des202[0] = {
};
sceVu0FVECTOR soul_des203[0] = {
};
sceVu0FVECTOR soul_des204[0] = {
};
sceVu0FVECTOR soul_des206[0] = {
};
sceVu0FVECTOR soul_des211[0] = {
};
sceVu0FVECTOR soul_des212[0] = {
};
sceVu0FVECTOR soul_des214[0] = {
};
sceVu0FVECTOR soul_des215[0] = {
};
sceVu0FVECTOR soul_des216[0] = {
};
sceVu0FVECTOR soul_des000[0] = {
};
sceVu0FVECTOR *soul_des_array[0] = {
};
WANDER_SOUL_DAT wander_soul_dat[0] = {
};

void SetWanSoDat2Wrk(int data_id, WANDER_SOUL_WRK *wswrk) {
  int iVar1;
  
  iVar1 = data_id * 6;
  wswrk->message_id = (&DAT_00345d49)[iVar1];
  wswrk->face_id = *(short *)(&DAT_00345d4a + iVar1);
  wswrk->adpcm_id = *(short *)(&DAT_00345d4c + iVar1);
  if ((byte)(&wander_soul_dat)[iVar1] == 0xff) {
    wswrk->destination = (float (*) [4])0x0;
    return;
  }
  wswrk->destination =
       *(float (**) [4])(&soul_des_array + (uint)(byte)(&wander_soul_dat)[iVar1] * 4);
  return;
}
