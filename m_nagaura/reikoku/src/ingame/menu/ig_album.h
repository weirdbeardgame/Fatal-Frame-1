// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_ALBUM_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_ALBUM_H


void NewgameMenuAlbumInit();
void LoadgameMenuAlbumInit();
void StartAlbumModeInit();
void IngameMenuAlbum(char is_outgame);
void IngameAlbumAllPad(u_char *csr, u_char *csr_top, u_char *mode);
void IngameAlbumLstPad(u_char *csr, u_char *csr_top, u_char *mode);
void IngameAlbumBigPad(u_char *csr, u_char *csr_top, u_char *mode);
void IngameAlbumDispPhotoLarge(u_char csr);
void IngameAlbumDisp(u_char csr, u_char csr_top, u_char mode, char is_outgame);
u_char* GetSubjectNameAddr(u_short kind, u_short no, u_short show);
u_char TimeIsMoney(u_char hexhex);
u_char MoneyIsTime(u_char time);
void PutDate(PICTURE_WRK *pic_inf, short int pos_x, short int pos_y, short int alpha, int pri);
void OutGameInitPhoto();
int isPhotoEnd();
float GetPhtDispAlpha();

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_MENU_IG_ALBUM_H
