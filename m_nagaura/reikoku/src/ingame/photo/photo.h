// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_PHOTO_PHOTO_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_PHOTO_PHOTO_H

typedef struct {
	int score;
	int point;
	float ratio;
	u_short no;
	u_short type;
	u_short dmg;
	u_short wrk_no;
} SUBJECT_WRK;

long int PhotoScoreCount();
int SubjectScoreCount(SUBJECT_WRK *sj);
int SpecialPhotoMakeJudge();
void AddPhotoData();
int GetSavePhotoNo();
void DeletePhotoData(u_char no);
void GetRecordSubject(PICTURE_WRK *pic);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_PHOTO_PHOTO_H
