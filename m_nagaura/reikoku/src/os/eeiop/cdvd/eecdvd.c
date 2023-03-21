#include "eecdvd.h"

typedef struct {
  u_char start_pos;
  u_char req_pos;
  u_char com_num;
} CDVD_REQ_STAT;

typedef struct {
  char stat;
} LOAD_FINISH_DATA;

enum LF_DATA_USE { LF_DATA_USE_OFF = 0, LF_DATA_USE_ON = 1 };

static CDVD_REQ_STAT cdvd_rstat;
static LOAD_FINISH_DATA load_finish[32];

void CdvdInit() {
  CdvdInitEe();
  CdvdInitIop();
  return;
}

void CdvdInitSoftReset() {
  CdvdInitEe();
  CdvdInitResetIop();
  return;
}

static void CdvdInitEe() {
  int i;

  LOAD_FINISH_DATA *pLVar1;
  int iVar2;

  cdvd_rstat.start_pos = '\0';
  cdvd_rstat.req_pos = '\0';
  cdvd_rstat.com_num = 0;
  pLVar1 = load_finish + 0x1f;
  iVar2 = 0x1f;
  do {
    pLVar1->stat = '\0';
    iVar2 = iVar2 + -1;
    pLVar1 = pLVar1 + -1;
  } while (-1 < iVar2);
  return;
}

static void CdvdInitIop() {
  SetIopCmdSm(0xc, 0, 0, 0);
  return;
}

static void CdvdInitResetIop() {
  SetIopCmdSm(0xc, 1, 0, 0);
  return;
}

int LoadReq(int file_no, u_int addr) {
  IMG_ARRANGEMENT *img_arng;

  IMG_ARRANGEMENT *pIVar1;
  int iVar2;

  pIVar1 = GetImgArrangementP(file_no);
  iVar2 = LoadReqNSector(file_no, pIVar1->start, pIVar1->size, addr);
  return iVar2;
}

u_int LoadReqGetAddr(int file_no, u_int addr, int *id) {
  IMG_ARRANGEMENT *img_arng;
  u_int ret;

  IMG_ARRANGEMENT *pIVar1;
  int iVar2;
  uint uVar3;

  pIVar1 = GetImgArrangementP(file_no);
  iVar2 = LoadReqNSector(file_no, pIVar1->start, pIVar1->size, addr);
  *id = iVar2;
  uVar3 = addr + pIVar1->size;
  if ((uVar3 & 0xf) != 0) {
    uVar3 = (uVar3 + 0x10) - (uVar3 & 0xf);
  }
  return uVar3;
}

int LoadReqSe(int file_no, u_char se_type) {
  IMG_ARRANGEMENT *img_arng;
  int ret;

  IMG_ARRANGEMENT *pIVar1;
  int data6;

  pIVar1 = GetImgArrangementP(file_no);
  data6 = GetFreeId();
  if (data6 != -1) {
    SetIopCmdLg(0xe, file_no, pIVar1->start, pIVar1->size, se_type & 0xff, 2,
                data6, 0);
  }
  return data6;
}

int LoadReqNSector(int file_no, int sector, int size, int addr) {
  int ret;

  int data6;

  data6 = GetFreeId();
  if (data6 != -1) {
    SetIopCmdLg(0xe, 0, sector, size, addr, 0, data6, 0);
  }
  return data6;
}

int LoadReqNFno(int file_no, int addr) { return -1; }

int LoadReqBFno(int file_no, int addr) { return -1; }

u_int LoadReqBFnoGetAddr(int file_no, int addr) { return 0; }

int IsLoadEndAll() {
  int iVar1;
  int iVar2;

  sys_wrk.sreset_count = 0;
  if (cdvd_rstat.com_num == 0) {
    iVar1 = 1;
  } else {
    iVar2 = (uint)cdvd_rstat.start_pos + (uint)cdvd_rstat.com_num + -1;
    iVar1 = (uint)cdvd_rstat.start_pos + (uint)cdvd_rstat.com_num + 0x1e;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar1 = IsLoadEnd(iVar2 + (iVar1 >> 5) * -0x20);
  }
  return iVar1;
}

int IsLoadEnd(int id) {
  int iVar1;

  sys_wrk.sreset_count = 0;
  iVar1 = IsLoadEndIop(id);
  return iVar1;
}

static int IsLoadEndIop(int id) {
  int i;
  u_char pos;

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  bVar2 = cdvd_rstat.com_num;
  if (((uint)id < 0x20) && ((id < (int)(uint)cdvd_rstat.req_pos ||
                             ((int)(uint)cdvd_rstat.start_pos <= id)))) {
    if (cdvd_rstat.com_num != 0) {
      uVar5 = (uint)cdvd_rstat.start_pos;
      if (load_finish[id].stat != '\0') {
        return 0;
      }
      iVar6 = 0;
      uVar3 = (uint)cdvd_rstat.com_num;
      uVar4 = uVar5;
      if (uVar3 != 0) {
        while (true) {
          bVar1 = (char)uVar4 + 1;
          if (0x1f < uVar5) {
            uVar5 = uVar5 - 0x20 & 0xff;
          }
          load_finish[uVar5].stat = '\0';
          cdvd_rstat.start_pos = bVar1 - (bVar1 & 0xe0);
          if (uVar5 == id)
            break;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 + 1 & 0xff;
          if ((int)uVar3 <= iVar6) {
            return 1;
          }
          uVar4 = (uint)cdvd_rstat.start_pos;
        }
        cdvd_rstat.com_num = bVar2 - ((char)iVar6 + '\x01');
      }
    }
    return 1;
  }
  return 0;
}

void LoadEndFlgRenew() {
  int i;

  char cVar1;
  LOAD_FINISH_DATA *pLVar2;
  int iVar3;
  uchar *puVar4;

  pLVar2 = load_finish;
  puVar4 = &rcv_stat.cdvd.fstat[0].stat;
  iVar3 = 0x1f;
  do {
    cVar1 = pLVar2->stat;
    iVar3 = iVar3 + -1;
    if (cVar1 == '\x01') {
      pLVar2->stat = '\x04';
    } else if ((('\x01' < cVar1) && (cVar1 == '\x04')) && (*puVar4 == '\0')) {
      pLVar2->stat = '\0';
    }
    puVar4 = puVar4 + 8;
    pLVar2 = pLVar2 + 1;
  } while (-1 < iVar3);
  return;
}

u_char IsExistLoadReq() { return (int)(cdvd_rstat.com_num != 0); }

static int GetFreeId() {
  int ret;

  uint uVar1;

  if (cdvd_rstat.com_num < 0x20) {
    uVar1 = (uint)cdvd_rstat.req_pos;
    load_finish[uVar1].stat = '\x01';
    cdvd_rstat.req_pos =
        (cdvd_rstat.req_pos + 1) - (cdvd_rstat.req_pos + 1 & 0xe0);
    cdvd_rstat.com_num = cdvd_rstat.com_num + 1;
    return uVar1;
  }
  return -1;
}

IMG_ARRANGEMENT *GetImgArrangementP(int file_no) {
  return (IMG_ARRANGEMENT *)(file_no * 8 + 0x12f0000);
}
