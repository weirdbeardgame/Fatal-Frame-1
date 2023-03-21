// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_MC_MC_EXEC_H
#define M_NAGAURA_REIKOKU_SRC_MC_MC_EXEC_H

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct {
	unsigned char Head[4];
	short unsigned int Reserv1;
	short unsigned int OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	_iconVu0IVECTOR BgColor[4];
	_iconVu0FVECTOR LightDir[3];
	_iconVu0FVECTOR LightColor[3];
	_iconVu0FVECTOR Ambient;
	unsigned char TitleName[68];
	unsigned char FnameView[64];
	unsigned char FnameCopy[64];
	unsigned char FnameDel[64];
	unsigned char Reserve3[512];
} sceMcIconSys;

extern u_char save_pht_in_game;

void mcSetPathDir(char file_no);
void mcMakeGameFileName(char *fname, char file_id);
void mcMakeAlbumFileName(char *fname, char file_id);
void mcMakeIconsysFileName(char *fname);
void mcMakeIconDataFileName(char *fname, char file_id);
char mcCheckEmpty(u_int offset);
void mcAcsFileReq(char type, int mode, int header);
char mcWriteFile();
char mcReadFile();
char mcCheckFileList();
char mcCheckRootList();
u_int mcGetFileSizeCeil(u_int file_id, u_int block);
u_int mcGetFileSize(u_int file_id);
char mcCheckHeaderFile();
int strindex(char *s, char *t);
void mcMakeSaveFile(u_int *work_addr, u_char file_id);
char mcSetLoadFile(u_int *work_addr, u_char file_id);
char mcCompareCheckSum(u_char *data_ptr, int data_size);
void mcMakeHeaderFile();
void mcSetHeaderFile();
char mcGetAlbumNo();
void mcSetIconSys(sceMcIconSys *pSys);

#endif // M_NAGAURA_REIKOKU_SRC_MC_MC_EXEC_H
