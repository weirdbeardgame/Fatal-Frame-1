// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_EEIOP_CDVD_EECDVD_H
#define M_NAGAURA_REIKOKU_SRC_OS_EEIOP_CDVD_EECDVD_H

typedef unsigned long u_long;
typedef unsigned int u_int;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned __int128 u_long128;

typedef struct {
  u_int start;
  u_int size;
} IMG_ARRANGEMENT;

void CdvdInit();
void CdvdInitSoftReset();
int LoadReq(int file_no, u_int addr);
u_int LoadReqGetAddr(int file_no, u_int addr, int *id);
int LoadReqSe(int file_no, u_char se_type);
int LoadReqNSector(int file_no, int sector, int size, int addr);
int LoadReqNFno(int file_no, int addr);
int LoadReqBFno(int file_no, int addr);
u_int LoadReqBFnoGetAddr(int file_no, int addr);
int IsLoadEndAll();
int IsLoadEnd(int id);
void LoadEndFlgRenew();
u_char IsExistLoadReq();
IMG_ARRANGEMENT *GetImgArrangementP(int file_no);

#endif // M_NAGAURA_REIKOKU_SRC_OS_EEIOP_CDVD_EECDVD_H
