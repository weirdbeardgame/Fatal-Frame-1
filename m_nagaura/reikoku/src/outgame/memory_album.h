// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OUTGAME_MEMORY_ALBUM_H
#define M_NAGAURA_REIKOKU_SRC_OUTGAME_MEMORY_ALBUM_H

typedef struct {
	PICTURE_WRK pic[24];
} MC_ALBUM_SAVE;

extern MC_ALBUM_SAVE mc_album_save;
extern MC_ALBUM_SAVE album_save_dat[2];
extern char is_newdata_albmside;

void MemAlbmInit(u_char h_type, u_char src_pht_max, u_char cpy_pht_max, u_char src_cl_type, u_char cpy_cl_type, u_char src_slot, u_char cpy_slot, u_char src_file, int cpy_file);
void MemAlbmInit2(u_char side, u_char pht_max, u_char cl_type, u_char slot, u_char file);
void MemAlbmInit3();
void NewAlbumInit(u_char side);
char SweetMemories(u_char mode, u_char alp);
void DspPhotInTopPage(u_char alp);
char NmlPadInTopPage();
char SamePhotoChk();
void KillRingBuffer();
char AbnPadInBigPage(u_char alp);
void MiniPht(u_char alp);
char MenuPadCmn();
char PasteCtrl();
void Paste();
void BuffPadCmn();
void BuffPadMnu();
void CopyToOsugi(u_char from, u_char no1, u_char to, u_char no2);
void CopyDataWithoutAdr(u_char from, u_char no1, u_char to, u_char no2);
void DelPyon(u_char file, u_char csr);
void DspOgAlbumTop1(u_char alp, u_char alp0, u_char alp1);
void DspOgAlbumTop2(u_char alp, u_char alp0, u_char alp1);
void DspOgAlbumBig(u_char alp);
void InfoWin(u_char mode, u_char side, u_char alp);
void Navion(u_char type, u_char sw, u_char alp);
void ComWin(u_char mode, u_char csr, u_char alp);
void BufWin(u_char type, u_char alp);
void DtlWin(u_char mode, u_char type, u_char alp);
void TruthPhoto(u_char mode, short int px, short int py, u_char alp);
void BtnExt(u_char mode, u_char alp);
char InKeyTamusi();
char GetAlbumCurPos(char side);

#endif // M_NAGAURA_REIKOKU_SRC_OUTGAME_MEMORY_ALBUM_H
