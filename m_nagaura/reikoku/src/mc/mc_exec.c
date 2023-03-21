// STATUS: NOT STARTED

u_char save_pht_in_game = 0;

void mcSetPathDir(char file_no) {
  if ((1 < (uint)mc_ctrl.mode) && (mc_ctrl.mode != 7)) {
    sprintf(mc_ctrl.rw.dir,&DAT_00357730);
    sprintf(mc_ctrl.rw.path,s__s_d__00357738);
    return;
  }
  sprintf(mc_ctrl.rw.dir,&DAT_00357720);
  sprintf(mc_ctrl.rw.path,&DAT_00357728);
  return;
}

void mcMakeGameFileName(char *fname, char file_id) {
  sprintf(fname,s__s_s_d_00357740);
  return;
}

void mcMakeAlbumFileName(char *fname, char file_id) {
  sprintf(fname,s__s_s_d_00357740);
  return;
}

void mcMakeIconsysFileName(char *fname) {
  sprintf(fname,&DAT_00357748);
  return;
}

void mcMakeIconDataFileName(char *fname, char file_id) {
  sprintf(fname,&DAT_00357748);
  return;
}

char mcCheckEmpty(u_int offset) {
	u_int size;
	
  uint uVar1;
  uint uVar2;
  
  if ((((mc_ctrl.mode != 1) && (mc_ctrl.mode != 3)) && (mc_ctrl.mode != 4)) &&
     ((mc_ctrl.mode != 5 && (mc_ctrl.mode != 6)))) {
    if ((uint)mc_ctrl.mode < 2) {
      uVar1 = 0x6fd;
    }
    else {
      uVar1 = 0x578;
      if (mc_ctrl.mode == 7) {
        uVar1 = 0x6fd;
      }
    }
    uVar2 = uVar1 - offset;
    if (uVar1 < offset) {
      uVar2 = 0;
    }
    return (uint)mc_ctrl.card[0].free < uVar2;
  }
  return '\0';
}

void mcAcsFileReq(char type, int mode, int header) {
  switch(type) {
  case '\0':
    mcMakeIconsysFileName(mc_ctrl.rw.name);
    mc_ctrl.rw.buf = (char *)&mc_ctrl;
    mc_ctrl.rw.size = 0x3c4;
    mc_ctrl.rw.mode = mode;
    mc_ctrl.rw.step = 0;
    return;
  case '\x01':
  case '\x02':
  case '\x03':
    mcMakeIconDataFileName(mc_ctrl.rw.name,type + -1);
    if (((uint)mc_ctrl.mode < 2) || (mc_ctrl.mode == 7)) {
      mc_ctrl.rw.size = 0xf850;
    }
    else {
      mc_ctrl.rw.size = 0x104b0;
    }
    break;
  default:
    goto switchD_0021a228_caseD_4;
  case '\x05':
  case '\x06':
  case '\a':
    mcMakeGameFileName(mc_ctrl.rw.name,type + -5);
    mc_ctrl.rw.size = mc_game_size;
    mc_ctrl.rw.header_flg = header;
    if (header != 0) {
      mc_ctrl.rw.size = 0x30;
    }
    break;
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
    mcMakeAlbumFileName(mc_ctrl.rw.name,type + -8);
    mc_ctrl.rw.size = mc_album_size;
    mc_ctrl.rw.header_flg = header;
    if (header != 0) {
      mc_ctrl.rw.size = 0x30;
    }
  }
  mc_ctrl.rw.step = 0;
  mc_ctrl.rw.buf = (char *)mc_ctrl.work_addr;
  mc_ctrl.rw.mode = mode;
switchD_0021a228_caseD_4:
  return;
}

char mcWriteFile() {
  char cVar1;
  
  switch(mc_ctrl.rw.step) {
  case 0:
    mcAcsReq(2);
    mc_ctrl.rw.step = 1;
    break;
  case 1:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mc_ctrl.rw.step = 2;
    }
    break;
  case 2:
    mcAcsReq(4);
    mc_ctrl.rw.step = 3;
    break;
  case 3:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mc_ctrl.rw.step = 4;
    }
    break;
  case 4:
    mcAcsReq(8);
    mc_ctrl.rw.step = 5;
    break;
  case 5:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      return '\x01';
    }
  }
  return '\0';
}

char mcReadFile() {
  char cVar1;
  
  switch(mc_ctrl.rw.step) {
  case 0:
    mcAcsReq(2);
    mc_ctrl.rw.step = 1;
    break;
  case 1:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mc_ctrl.rw.step = 2;
    }
    break;
  case 2:
    mcAcsReq(3);
    mc_ctrl.rw.step = 3;
    break;
  case 3:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      if (mc_ctrl.acs.sta != '\0') {
        return '\x01';
      }
      mc_ctrl.rw.step = 4;
    }
    break;
  case 4:
    mcAcsReq(8);
    mc_ctrl.rw.step = 5;
    break;
  case 5:
    cVar1 = mcAcsMain();
    if (cVar1 != '\0') {
      return '\x01';
    }
  }
  return '\0';
}

char mcCheckFileList() {
	u_int i;
	u_int file_num;
	u_int size;
	char str[256];
	
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  char str [256];
  
  uVar7 = 0;
  if ((long)(short)mc_ctrl.dir.file_num != 0) {
    do {
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(long)(short)mc_ctrl.dir.file_num);
  }
  uVar7 = 0;
  mc_ctrl.dir_size = 0;
  if ((long)(short)mc_ctrl.dir.file_num != 0) {
    puVar5 = &mc_ctrl.dir.table[0].FileSizeByte;
    do {
      uVar1 = *puVar5;
      uVar7 = (ulong)((int)uVar7 + 1);
      puVar5 = puVar5 + 0x10;
      mc_ctrl.dir_size = mc_ctrl.dir_size + (uVar1 + 0x3ff >> 10);
    } while (uVar7 < (ulong)(long)(short)mc_ctrl.dir.file_num);
  }
  iVar6 = (int)((uint)mc_ctrl.dir.file_num << 0x10) >> 0x10;
  iVar4 = iVar6 - ((int)((uint)mc_ctrl.dir.file_num << 0x10) >> 0x1f) >> 1;
  mc_ctrl.dir_size = mc_ctrl.dir_size + iVar4 + ((iVar6 + iVar4 * -2) * 0x10000 >> 0x10);
  if (((uint)mc_ctrl.mode < 2) || (mc_ctrl.mode == 7)) {
    uVar7 = 0;
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar6 = 0;
      while( true ) {
        iVar3 = strindex((char *)(mc_ctrl.dir.table[0].EntryName + iVar6),"BASLUS-20388zero");
        if ((-1 < iVar3) &&
           (iVar4 = iVar4 + 1,
           *(uint *)(mc_ctrl.dir.table[0].EntryName + iVar6 + -0x10) != mc_game_size)) {
          return '\x02';
        }
        iVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)iVar6;
        if ((ulong)(long)(short)mc_ctrl.dir.file_num <= uVar7) break;
        iVar6 = iVar6 * 0x40;
      }
    }
    if (iVar4 != 3) {
      return '\x02';
    }
  }
  else {
    sprintf(str,&DAT_00357730);
    uVar7 = 0;
    iVar4 = 0;
    if (mc_ctrl.dir.file_num != 0) {
      iVar6 = 0;
      while( true ) {
        iVar3 = strindex((char *)(mc_ctrl.dir.table[0].EntryName + iVar6),str);
        if ((-1 < iVar3) &&
           (iVar4 = iVar4 + 1,
           *(uint *)(mc_ctrl.dir.table[0].EntryName + iVar6 + -0x10) != mc_album_size)) {
          return '\x01';
        }
        iVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)iVar6;
        if ((ulong)(long)(short)mc_ctrl.dir.file_num <= uVar7) break;
        iVar6 = iVar6 * 0x40;
      }
    }
    if (iVar4 != 1) {
      return '\x01';
    }
  }
  uVar7 = 0;
  iVar4 = 0;
  if (mc_ctrl.dir.file_num != 0) {
    iVar6 = 0;
    while( true ) {
      iVar3 = strindex((char *)(mc_ctrl.dir.table[0].EntryName + iVar6),"icon.sys");
      if ((-1 < iVar3) &&
         (iVar4 = iVar4 + 1, *(int *)(mc_ctrl.dir.table[0].EntryName + iVar6 + -0x10) != 0x3c4))
      goto LAB_0021a7a8;
      iVar6 = (int)uVar7 + 1;
      uVar7 = (ulong)iVar6;
      if ((ulong)(long)(short)mc_ctrl.dir.file_num <= uVar7) break;
      iVar6 = iVar6 * 0x40;
    }
  }
  if (iVar4 == 1) {
    uVar7 = 0;
    iVar4 = 0;
    if (mc_ctrl.dir.file_num != 0) {
      iVar6 = 0;
      do {
        iVar3 = strindex((char *)(mc_ctrl.dir.table[0].EntryName + iVar6),_mc_iconName);
        if (-1 < iVar3) {
          iVar4 = iVar4 + 1;
          iVar6 = *(int *)(mc_ctrl.dir.table[0].EntryName + iVar6 + -0x10);
          if (((uint)mc_ctrl.mode < 2) || (mc_ctrl.mode == 7)) {
            if (iVar6 != 0xf850) {
              return '\x04';
            }
          }
          else if (iVar6 != 0x104b0) {
            return '\x04';
          }
        }
        iVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)iVar6;
        iVar6 = iVar6 * 0x40;
      } while (uVar7 < (ulong)(long)(short)mc_ctrl.dir.file_num);
    }
    cVar2 = '\x04';
    if (iVar4 == 1) {
      cVar2 = '\0';
    }
  }
  else {
LAB_0021a7a8:
    cVar2 = '\x03';
  }
  return cVar2;
}

char mcCheckRootList() {
	u_int i;
	u_int j;
	u_int file_num;
	char str[256];
	
  int iVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  char str [256];
  
  uVar6 = 0;
  if ((long)(short)mc_ctrl.dir.file_num != 0) {
    do {
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(long)(short)mc_ctrl.dir.file_num);
  }
  iVar3 = 0;
  uVar4 = 0;
  puVar2 = mc_ctrl.album.sta;
  do {
    ((MC_ALBUM *)(puVar2 + -5))->file_no[0] = 0xff;
    uVar4 = uVar4 + 1;
    *puVar2 = 0xff;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 5);
  uVar6 = 0;
  if (mc_ctrl.dir.file_num != 0) {
    iVar7 = 0;
    iVar8 = iVar3;
    do {
      puVar2 = mc_ctrl.dir.table[0].EntryName + iVar7;
      iVar1 = strindex((char *)puVar2,"BASLUS-20388albm");
      iVar5 = (int)uVar6;
      uVar6 = (ulong)(iVar5 + 1);
      iVar3 = iVar8;
      if (-1 < iVar1) {
        iVar1 = 0;
        if (*puVar2 != '\0') {
          uVar6 = (ulong)(iVar5 + 1);
          do {
            iVar1 = iVar1 + 1;
          } while (mc_ctrl.dir.table[0].EntryName[iVar1 + iVar7] != '\0');
        }
        iVar3 = iVar8 + 1;
        mc_ctrl.album.file_no[iVar8] = mc_ctrl.dir.table[0].EntryName[iVar1 + iVar7 + -1] + 0xd0;
      }
      iVar7 = (int)uVar6 << 6;
      iVar8 = iVar3;
    } while (uVar6 < (ulong)(long)(short)mc_ctrl.dir.file_num);
  }
  mc_ctrl.album.file_num = (char)iVar3;
  return '\0';
}

u_int mcGetFileSizeCeil(u_int file_id, u_int block) {
	u_int size;
	
  uint uVar1;
  
  uVar1 = mcGetFileSize(file_id);
  if (block != 0) {
    if (block == 0) {
      trap(7);
    }
    uVar1 = uVar1 + (int)(block - (int)uVar1 % (int)block) % (int)block;
  }
  return uVar1;
}

u_int mcGetFileSize(u_int file_id) {
	u_int size;
	int i;
	
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (file_id - 5 < 3) {
    uVar2 = 0;
    if (mc_gamedata_str_num != 0) {
      do {
        iVar1 = (int)uVar2;
        uVar2 = (ulong)(iVar1 + 1);
        iVar3 = iVar3 + (&DAT_00343144)[iVar1 * 2];
      } while (uVar2 < mc_gamedata_str_num);
      return iVar3 + 0x10;
    }
  }
  else {
    uVar2 = 0;
    if (mc_albumdata_str_num != 0) {
      do {
        iVar1 = (int)uVar2;
        uVar2 = (ulong)(iVar1 + 1);
        iVar3 = iVar3 + (&DAT_00343234)[iVar1 * 2];
      } while (uVar2 < mc_albumdata_str_num);
    }
  }
  return iVar3 + 0x10;
}

char mcCheckHeaderFile() {
	u_int i;
	u_int file_num;
	
  uint *puVar1;
  int iVar2;
  uint uVar3;
  MC_HEADER *pMVar4;
  
  mc_ctrl.dir.gamefile_num = 0;
  pMVar4 = mc_header_buf;
  uVar3 = 0;
  do {
    puVar1 = &(pMVar4->game).map_flg;
    uVar3 = uVar3 + 1;
    pMVar4 = pMVar4 + 1;
    if (*puVar1 == 1) {
      mc_ctrl.dir.gamefile_num = mc_ctrl.dir.gamefile_num + 1;
    }
  } while (uVar3 < 3);
  iVar2 = 0;
  if ((mc_ctrl.mode == 1) && (mc_ctrl.dir.gamefile_num == 0)) {
    iVar2 = mc_ctrl.mode;
  }
  return (char)iVar2;
}

int strindex(char *s, char *t) {
	int i;
	int j;
	int k;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*s != '\0') {
    do {
      iVar2 = 0;
      if (((long)(int)*t != 0) && ((long)s[iVar3] == (long)(int)*t)) {
        iVar2 = 1;
        iVar1 = iVar3;
        while( true ) {
          iVar1 = iVar1 + 1;
          if ((t[iVar2] == '\0') || (s[iVar1] != t[iVar2])) break;
          iVar2 = iVar2 + 1;
        }
      }
      if ((0 < iVar2) && (t[iVar2] == '\0')) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (s[iVar3] != '\0');
  }
  return -1;
}

void mcMakeSaveFile(u_int *work_addr, u_char file_id) {
	u_char *addr0;
	u_char *addr1;
	int i;
	int j;
	u_int sum;
	u_int size;
	u_int str_num;
	MC_DATA_STR *data_str;
	
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  size_t __n;
  byte **ppbVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  MC_DATA_STR_0_ *pMVar10;
  
  uVar9 = 0;
  if (4 < file_id) {
    if (file_id < 8) {
      pMVar10 = &mc_gamedata_str;
      uVar8 = (uint)mc_gamedata_str_num;
      __n = (size_t)(int)mc_game_size;
    }
    else {
      if (0xc < file_id) {
        return;
      }
      uVar8 = (uint)mc_albumdata_str_num;
      __n = (size_t)(int)mc_album_size;
      if (save_pht_in_game == '\0') {
        pMVar10 = &mc_albumdata_str;
      }
      else {
        pMVar10 = &mc_albumdata2_str;
      }
    }
    memset(work_addr,0,__n);
    puVar7 = work_addr + 4;
    uVar3 = 0;
    if (uVar8 != 0) {
      iVar2 = 0;
      do {
        iVar5 = 0;
        ppbVar6 = (byte **)(pMVar10 + iVar2);
        pbVar4 = *ppbVar6;
        if (0 < (int)ppbVar6[1]) {
          do {
            bVar1 = *pbVar4;
            iVar5 = iVar5 + 1;
            pbVar4 = pbVar4 + 1;
            *(byte *)puVar7 = bVar1;
            uVar9 = uVar9 + bVar1;
            puVar7 = (uint *)((int)puVar7 + 1);
          } while (iVar5 < (int)ppbVar6[1]);
        }
        uVar3 = uVar3 + 1;
        iVar2 = uVar3 * 8;
      } while (uVar3 < uVar8);
    }
    *work_addr = uVar9;
  }
  return;
}

char mcSetLoadFile(u_int *work_addr, u_char file_id) {
	u_char *addr0;
	u_char *addr1;
	int i;
	int j;
	u_int size;
	u_int str_num;
	MC_DATA_STR *data_str;
	
  undefined uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  MC_DATA_STR_0_ *pMVar11;
  
  bVar2 = file_id < 5;
  if (!bVar2) {
    uVar10 = (uint)mc_gamedata_str_num;
    if (file_id < 8) {
      pMVar11 = &mc_gamedata_str;
      uVar7 = mc_game_size;
    }
    else {
      uVar10 = (uint)mc_albumdata_str_num;
      if (file_id >= 0xd) {
        return file_id < 0xd;
      }
      pMVar11 = &mc_albumdata_str;
      uVar7 = mc_album_size;
    }
    if (mc_ctrl.rw.header_flg == 0) {
      cVar3 = mcCompareCheckSum((uchar *)work_addr,uVar7);
      if (cVar3 != '\0') {
        return '\x01';
      }
    }
    else {
      uVar10 = 1;
    }
    puVar5 = work_addr + 4;
    uVar7 = 0;
    if (uVar10 != 0) {
      iVar4 = 0;
      do {
        iVar8 = 0;
        puVar9 = (undefined4 *)(pMVar11 + iVar4);
        puVar6 = (undefined *)*puVar9;
        if (0 < (int)puVar9[1]) {
          do {
            uVar1 = *(undefined *)puVar5;
            iVar8 = iVar8 + 1;
            puVar5 = (uint *)((int)puVar5 + 1);
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          } while (iVar8 < (int)puVar9[1]);
        }
        uVar7 = uVar7 + 1;
        iVar4 = uVar7 * 8;
      } while (uVar7 < uVar10);
    }
    bVar2 = false;
  }
  return bVar2;
}

char mcCompareCheckSum(u_char *data_ptr, int data_size) {
	int sum;
	int data_sum;
	int i;
	
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = data_size + -0x10;
  iVar2 = 0;
  pbVar3 = data_ptr + 0x10;
  if (0 < iVar4) {
    do {
      bVar1 = *pbVar3;
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
      iVar2 = iVar2 + (uint)bVar1;
    } while (iVar4 != 0);
  }
  return *(int *)data_ptr != iVar2;
}

void mcMakeHeaderFile() {
	MC_GAME_HEADER *header;
	MC_ALBUM_HEADER *header;
	
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = time_wrk.game;
  if (((uint)mc_ctrl.mode < 2) || (mc_ctrl.mode == 7)) {
    mc_header.game.map_flg = 1;
    if (ingame_wrk.mode == 0x17) {
      mc_header.game.msn_no = 5;
    }
    else {
      mc_header.game.msn_no = (uint)ingame_wrk.msn_no;
    }
    mc_header.game.room_no = (uint)plyr_wrk.dop._13_1_;
    uVar1 = __udivdi3(time_wrk.game,0x34bc0);
    mc_header.game.hour = (uint)uVar1;
    uVar1 = __udivdi3(uVar2,0xe10);
    uVar1 = __umoddi3(uVar1,0x3c);
    mc_header.game.minute = (uint)uVar1;
    uVar1 = __udivdi3(uVar2,0x3c);
    uVar1 = __umoddi3(uVar1,0x3c);
    mc_header.game.sec = (uint)uVar1;
    uVar2 = __umoddi3(uVar2,0x3c);
    mc_header.game.frame = (uint)uVar2;
    if (ingame_wrk.clear_count == 0) {
      mc_header.album.pad[4]._0_3_ = ZEXT23((ushort)mc_msn_flg);
    }
    else {
      mc_header.album.pad[4]._0_3_ = CONCAT12(1,(ushort)mc_msn_flg);
    }
    mc_header.album.pad[4] = CONCAT13(ingame_wrk.difficult,mc_header.album.pad[4]._0_3_);
  }
  else {
    mc_header.game.map_flg = 1;
    mc_header.game.msn_no = mc_photo_num;
    mc_header.album.pad[4] = 0xff;
    mc_header.game.room_no = (uint)mc_ctrl.album.type;
    mc_header.game.hour = 0xff;
    mc_header.game.minute = 0xff;
    mc_header.game.sec = 0xff;
    mc_header.game.frame = 0xff;
  }
  return;
}

void mcSetHeaderFile() {
	MC_GAME_HEADER *header;
	MC_ALBUM_HEADER *header;
	
  if ((1 < (uint)mc_ctrl.mode) && (mc_ctrl.mode != 7)) {
    mc_album_type = mc_header.game.room_no;
    mc_photo_num = mc_header.game.msn_no;
    return;
  }
  if (mc_header.game.msn_no == 5) {
    ingame_wrk.msn_no = 0;
  }
  else {
    ingame_wrk.msn_no = mc_header.game.msn_no._0_1_;
  }
  plyr_wrk.dop._13_1_ = mc_header.game.room_no._0_1_;
  mc_msn_flg = mc_header.album.pad[4]._0_1_;
  time_wrk.game =
       (long)(int)(mc_header.game.hour * 0x34bc0 + mc_header.game.frame +
                  mc_header.game.sec * 0x3c + mc_header.game.minute * 0xe10) & 0xffffffff;
  return;
}

char mcGetAlbumNo() {
	u_int i;
	char flg[5];
	
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  char flg [5];
  
  pcVar1 = flg;
  memset(flg,0,5);
  uVar5 = 0;
  if ((long)mc_ctrl.album.file_num != 0) {
    do {
      iVar2 = (int)uVar5;
      uVar5 = (ulong)(iVar2 + 1);
      flg[mc_ctrl.album.file_no[iVar2]] = '\x01';
    } while (uVar5 < (ulong)(long)mc_ctrl.album.file_num);
  }
  uVar3 = 0;
  do {
    if (*pcVar1 == '\0') {
      return (char)uVar3;
    }
    uVar4 = uVar3 + 1;
    pcVar1 = flg + uVar3 + 1;
    uVar3 = uVar4;
  } while (uVar4 < 5);
  return -1;
}

void mcSetIconSys(sceMcIconSys *pSys) {
	u_int i;
	char str[256];
	
  int *piVar1;
  float *pfVar2;
  undefined *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined uVar9;
  int iVar10;
  int iVar11;
  char str [256];
  
  memset(pSys,0,0x3c4);
  uVar9 = DAT_00357754;
  *(undefined4 *)pSys->Head = DAT_00357750;
  *(undefined *)&pSys->Reserv1 = uVar9;
  pSys->OffsLF = 0x14;
  pSys->TransRate = 0x60;
  uVar8 = mc_bgcolor[1]._0_8_;
  uVar7 = mc_bgcolor[0]._8_8_;
  uVar6 = mc_bgcolor[0]._0_8_;
  puVar3 = (undefined *)((int)pSys->BgColor + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_bgcolor[0]._0_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->BgColor & 7;
  puVar5 = (ulong *)((int)pSys->BgColor - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->BgColor + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  piVar1 = pSys->BgColor + 2;
  uVar4 = (uint)piVar1 & 7;
  puVar5 = (ulong *)((int)piVar1 - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->BgColor[1] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->BgColor[1] & 7;
  puVar5 = (ulong *)((int)pSys->BgColor[1] - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar8 = mc_bgcolor[2]._8_8_;
  uVar7 = mc_bgcolor[2]._0_8_;
  uVar6 = mc_bgcolor[1]._8_8_;
  puVar3 = (undefined *)((int)pSys->BgColor[1] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_bgcolor[1]._8_8_ >> (7 - uVar4) * 8;
  piVar1 = pSys->BgColor[1] + 2;
  uVar4 = (uint)piVar1 & 7;
  puVar5 = (ulong *)((int)piVar1 - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->BgColor[2] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->BgColor[2] & 7;
  puVar5 = (ulong *)((int)pSys->BgColor[2] - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->BgColor[2] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  piVar1 = pSys->BgColor[2] + 2;
  uVar4 = (uint)piVar1 & 7;
  puVar5 = (ulong *)((int)piVar1 - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar7 = mc_bgcolor[3]._8_8_;
  uVar6 = mc_bgcolor[3]._0_8_;
  puVar3 = (undefined *)((int)pSys->BgColor[3] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_bgcolor[3]._0_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->BgColor[3] & 7;
  puVar5 = (ulong *)((int)pSys->BgColor[3] - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->BgColor[3] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  piVar1 = pSys->BgColor[3] + 2;
  uVar4 = (uint)piVar1 & 7;
  puVar5 = (ulong *)((int)piVar1 - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar8 = mc_lightdir[1]._0_8_;
  uVar7 = mc_lightdir[0]._8_8_;
  uVar6 = mc_lightdir[0]._0_8_;
  puVar3 = (undefined *)((int)pSys->LightDir + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_lightdir[0]._0_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightDir & 7;
  puVar5 = (ulong *)((int)pSys->LightDir - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightDir + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightDir + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightDir[1] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightDir[1] & 7;
  puVar5 = (ulong *)((int)pSys->LightDir[1] - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar8 = mc_lightdir[2]._8_8_;
  uVar7 = mc_lightdir[2]._0_8_;
  uVar6 = mc_lightdir[1]._8_8_;
  puVar3 = (undefined *)((int)pSys->LightDir[1] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_lightdir[1]._8_8_ >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightDir[1] + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightDir[2] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightDir[2] & 7;
  puVar5 = (ulong *)((int)pSys->LightDir[2] - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightDir[2] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightDir[2] + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar8 = mc_lightcol[1]._0_8_;
  uVar7 = mc_lightcol[0]._8_8_;
  uVar6 = mc_lightcol[0]._0_8_;
  puVar3 = (undefined *)((int)pSys->LightColor + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_lightcol[0]._0_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightColor & 7;
  puVar5 = (ulong *)((int)pSys->LightColor - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightColor + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightColor + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightColor[1] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightColor[1] & 7;
  puVar5 = (ulong *)((int)pSys->LightColor[1] - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar8 = mc_lightcol[2]._8_8_;
  uVar7 = mc_lightcol[2]._0_8_;
  uVar6 = mc_lightcol[1]._8_8_;
  puVar3 = (undefined *)((int)pSys->LightColor[1] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_lightcol[1]._8_8_ >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightColor[1] + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightColor[2] + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->LightColor[2] & 7;
  puVar5 = (ulong *)((int)pSys->LightColor[2] - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->LightColor[2] + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  pfVar2 = pSys->LightColor[2] + 2;
  uVar4 = (uint)pfVar2 & 7;
  puVar5 = (ulong *)((int)pfVar2 - uVar4);
  *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar7 = mc_ambient._8_8_;
  uVar6 = mc_ambient._0_8_;
  puVar3 = (undefined *)((int)pSys->Ambient + 7);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | mc_ambient._0_8_ >> (7 - uVar4) * 8;
  uVar4 = (uint)pSys->Ambient & 7;
  puVar5 = (ulong *)((int)pSys->Ambient - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar3 = (undefined *)((int)pSys->Ambient + 0xf);
  uVar4 = (uint)puVar3 & 7;
  puVar5 = (ulong *)(puVar3 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
  uVar4 = (uint)(pSys->Ambient + 2) & 7;
  puVar5 = (ulong *)((int)(pSys->Ambient + 2) - uVar4);
  *puVar5 = uVar7 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  strcpy((char *)pSys->FnameView,_mc_iconName);
  strcpy((char *)pSys->FnameCopy,PTR_s_zero_ico_00343fac);
  strcpy((char *)pSys->FnameDel,PTR_s_zero_ico_00343fb0);
  if (((uint)mc_ctrl.mode < 2) || (mc_ctrl.mode == 7)) {
    strcpy((char *)pSys->TitleName,&mc_icon_title);
  }
  else {
    strcpy(str,&mc_icon_album);
    iVar10 = 0;
    if (str[0] == '\0') {
      iVar11 = -1;
    }
    else {
      do {
        iVar11 = iVar10;
        iVar10 = iVar11 + 1;
      } while (str[iVar11 + 1] != '\0');
    }
    str[iVar11] = str[iVar11] + (char)mc_ctrl.sel_file;
    strcpy((char *)pSys->TitleName,str);
  }
  return;
}
