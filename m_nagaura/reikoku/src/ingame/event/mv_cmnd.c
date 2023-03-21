// STATUS: NOT STARTED

typedef struct {
	short int msg_no;
	short int msg_wait;
} MOVIE_CMD_WRK;

MOVIE_CMD_WRK mvcmd_wrk = {
	/* .msg_no = */ 0,
	/* .msg_wait = */ 0
};

void EventMovieCommandInit() {
  memset(&mvcmd_wrk,0,4);
  mvcmd_wrk.msg_no = 0xffff;
  return;
}

void EventMovieCommandMain(int flame, int top_addr) {
	int *dat_addr;
	u_char *cmd_addr;
	
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = *(int *)top_addr;
  piVar2 = (int *)top_addr;
  while ((iVar1 <= flame && (iVar1 != -1))) {
    if (flame == iVar1) {
      puVar3 = (undefined *)(top_addr + piVar2[1]);
      switch(*puVar3) {
      case 0xf4:
        mvcmd_wrk.msg_no = *(ushort *)(puVar3 + 2);
        mvcmd_wrk.msg_wait = *(ushort *)(puVar3 + 4);
      }
    }
    piVar2 = piVar2 + 2;
    iVar1 = *piVar2;
  }
  if (mvcmd_wrk.msg_no != 0xffff) {
    if (mvcmd_wrk.msg_wait != 0) {
      iVar1 = GetMovieMessageAddr(mvcmd_wrk.msg_no);
      SetMessageAddr(iVar1);
      mvcmd_wrk.msg_wait = mvcmd_wrk.msg_wait - 1;
      SetMessage();
      return;
    }
    mvcmd_wrk.msg_no = 0xffff;
  }
  return;
}

int GetMovieMessageAddr(short int msg_no) {
  int iVar1;
  
  iVar1 = Get4Byte((uchar *)0x7f000c);
  iVar1 = Get4Byte((uchar *)(iVar1 + (short)msg_no * 4 + 0x7f0000));
  return iVar1 + 0x7f0000;
}
