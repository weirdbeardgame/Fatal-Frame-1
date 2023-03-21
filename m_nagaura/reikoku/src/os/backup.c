// STATUS: NOT STARTED


void SaveDataSet(u_char *addr0) {
	u_char *addr1;
	int i;
	int j;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  uVar6 = mc_gamedata_str_num;
  if (mc_gamedata_str_num != 0) {
    do {
      iVar4 = (int)uVar5;
      iVar3 = 0;
      pbVar2 = *(byte **)(&mc_gamedata_str + iVar4 * 8);
      if (0 < (int)(&DAT_00343144)[iVar4 * 2]) {
        do {
          bVar1 = *pbVar2;
          iVar3 = iVar3 + 1;
          pbVar2 = pbVar2 + 1;
          *addr0 = bVar1;
          addr0 = addr0 + 1;
          uVar6 = mc_gamedata_str_num;
        } while (iVar3 < (int)(&DAT_00343144)[iVar4 * 2]);
      }
      uVar5 = (ulong)(iVar4 + 1);
    } while (uVar5 < uVar6);
  }
  return;
}

void SavePCFile() {
	int fd;
	u_char fname[27];
	
  uchar *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uchar fname [27];
  
  puVar1 = fname + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._0_8_ >> (7 - uVar2) * 8;
  fname._0_8_ = s_host0____bin_data_save_dat_00349990._0_8_;
  puVar1 = fname + 0xf;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._8_8_ >> (7 - uVar2) * 8;
  fname._8_8_ = s_host0____bin_data_save_dat_00349990._8_8_;
  puVar1 = fname + 0x17;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._16_8_ >> (7 - uVar2) * 8;
  fname._16_8_ = s_host0____bin_data_save_dat_00349990._16_8_;
  fname[24] = s_host0____bin_data_save_dat_00349990[24];
  fname[25] = s_host0____bin_data_save_dat_00349990[25];
  fname[26] = s_host0____bin_data_save_dat_00349990[26];
  scePcStop();
  InitialDmaBuffer();
  SaveDataSet(&DAT_00420000);
  uVar3 = sceOpen(fname,0x202);
  sceLseek(uVar3,0,0);
  sceWrite(uVar3,0x420000,0x200000);
  sceWrite(uVar3,0x1a90000,0x200000);
  sceClose(uVar3);
  return;
}

void LoadPCFile() {
	int fd;
	u_char fname[27];
	
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  byte fname [27];
  
  pbVar1 = fname + 7;
  uVar2 = (uint)pbVar1 & 7;
  *(ulong *)(pbVar1 + -uVar2) =
       *(ulong *)(pbVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._0_8_ >> (7 - uVar2) * 8;
  fname._0_8_ = s_host0____bin_data_save_dat_00349990._0_8_;
  pbVar1 = fname + 0xf;
  uVar2 = (uint)pbVar1 & 7;
  *(ulong *)(pbVar1 + -uVar2) =
       *(ulong *)(pbVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._8_8_ >> (7 - uVar2) * 8;
  fname._8_8_ = s_host0____bin_data_save_dat_00349990._8_8_;
  pbVar1 = fname + 0x17;
  uVar2 = (uint)pbVar1 & 7;
  *(ulong *)(pbVar1 + -uVar2) =
       *(ulong *)(pbVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 |
       s_host0____bin_data_save_dat_00349990._16_8_ >> (7 - uVar2) * 8;
  fname._16_8_ = s_host0____bin_data_save_dat_00349990._16_8_;
  fname[24] = s_host0____bin_data_save_dat_00349990[24];
  fname[25] = s_host0____bin_data_save_dat_00349990[25];
  fname[26] = s_host0____bin_data_save_dat_00349990[26];
  scePcStop();
  uVar3 = sceOpen(fname,0x201);
  sceLseek(uVar3,0,0);
  sceRead(uVar3,0x420000,0x200000);
  sceRead(uVar3,0x1a90000,0x200000);
  LoadDataDevelop(&DAT_00420000);
  sceClose(uVar3);
  return;
}

void LoadDataDevelop(u_char *addr0) {
	u_char *addr1;
	int i;
	int j;
	
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  uVar6 = mc_gamedata_str_num;
  if (mc_gamedata_str_num != 0) {
    do {
      iVar4 = (int)uVar5;
      iVar3 = 0;
      pbVar2 = *(byte **)(&mc_gamedata_str + iVar4 * 8);
      if (0 < (int)(&DAT_00343144)[iVar4 * 2]) {
        do {
          bVar1 = *addr0;
          iVar3 = iVar3 + 1;
          addr0 = addr0 + 1;
          *pbVar2 = bVar1;
          pbVar2 = pbVar2 + 1;
          uVar6 = mc_gamedata_str_num;
        } while (iVar3 < (int)(&DAT_00343144)[iVar4 * 2]);
      }
      uVar5 = (ulong)(iVar4 + 1);
    } while (uVar5 < uVar6);
  }
  return;
}
