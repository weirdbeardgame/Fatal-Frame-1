// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#7,  not equal)
enum {
	CD_LOADINIT = 0,
	CD_FILELOAD = 1,
	CD_FILEEND = 2
};

static u_int sbuff[16];
static sceSifClientData flCd;

int FileLoadInit() {
	int i;
	
  int iVar1;
  long lVar2;
  
  do {
    lVar2 = sceSifBindRpc(0x357e80,0x12358,0);
    iVar1 = 10000;
    if (lVar2 < 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  } while (flCd.serve == (_sif_serve_data *)0x0);
  do {
    lVar2 = sceSifCheckStatRpc(0x357e80);
  } while (lVar2 != 0);
  sceSifCallRpc(0x357e80,0,0,0x357e40,4,0x357e40,0x40,0);
  return 1;
}

void FileLoadNReq(int file_no, long int addr) {
  long lVar1;
  
  sbuff[1] = (uint)addr;
  sbuff[0] = file_no;
  do {
    lVar1 = sceSifCheckStatRpc(0x357e80);
  } while (lVar1 != 0);
  sceSifCallRpc(0x357e80,1,0,0x357e40,0x80,0x357e40,0x40,0);
  return;
}

int FileLoadNEnd(int file_no) {
  return 1;
}

void FileLoadB(int file_no, long int addr) {
  LoadReq(file_no,(uint)addr);
  return;
}
