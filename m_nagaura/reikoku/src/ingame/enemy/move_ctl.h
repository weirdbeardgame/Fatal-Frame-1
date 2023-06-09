// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_INGAME_ENEMY_MOVE_CTL_H
#define M_NAGAURA_REIKOKU_SRC_INGAME_ENEMY_MOVE_CTL_H

typedef struct {
	u_char job_no;
	u_char pos_no;
	u_char wait_time;
	u_char idx;
	u_short loop;
	u_short reserve;
	int se;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR tpos;
	sceVu0FVECTOR spd;
	sceVu0FVECTOR rot;
	sceVu0FVECTOR rspd;
	sceVu0FVECTOR trot;
	sceVu0FVECTOR pos_mid;
	P_INT comm_add;
	long int comm_add_top;
} MOVE_BOX;

extern void (*CommJmpTbl[0])(/* parameters unknown */);
extern void (*BCommJmpTbl[0])(/* parameters unknown */);

void InitMoveBox(MOVE_BOX *mb);
void MoveCtrl(MOVE_BOX *mb);
void EneBlinkCtrl(ENE_WRK *ew);
void EJob000(MOVE_BOX *mb);
void EJob001(MOVE_BOX *mb);
void EJob002(MOVE_BOX *mb);
void EJob003(MOVE_BOX *mb);
void EJob004(MOVE_BOX *mb);
int* GetEneRootData(u_char no);
u_char GetEneRootMax(u_char no);
void EJob005(MOVE_BOX *mb);
void EJob006(MOVE_BOX *mb);
void EJob007(MOVE_BOX *mb);
void EJob008(MOVE_BOX *mb);
void EJob009(MOVE_BOX *mb);
void EJob00A(MOVE_BOX *mb);
void EJob00B(MOVE_BOX *mb);
void EJob00C(MOVE_BOX *mb);
void EJob00D(MOVE_BOX *mb);
void EJob00E(MOVE_BOX *mb);
void EJob00F(MOVE_BOX *mb);
void EJob010(MOVE_BOX *mb);
void EJob011(MOVE_BOX *mb);
void EJob012(MOVE_BOX *mb);
void EJob013(MOVE_BOX *mb);
void EJob014(MOVE_BOX *mb);
void EJob015(MOVE_BOX *mb);
void EJob016(MOVE_BOX *mb);
void EJob017(MOVE_BOX *mb);
void EJob018(MOVE_BOX *mb);
void EJob019(MOVE_BOX *mb);
void EJob01A(MOVE_BOX *mb);
void EJob01B(MOVE_BOX *mb);
void EJob01C(MOVE_BOX *mb);
void EJob01D(MOVE_BOX *mb);
void EJob01E(MOVE_BOX *mb);
void EJob01F(MOVE_BOX *mb);
void EJob020(MOVE_BOX *mb);
void EJob021(MOVE_BOX *mb);
void EJob022(MOVE_BOX *mb);
void EJob023(MOVE_BOX *mb);
void EJob024(MOVE_BOX *mb);
void EJob025(MOVE_BOX *mb);
void EJob026(MOVE_BOX *mb);
void EJob027(MOVE_BOX *mb);
void EJob028(MOVE_BOX *mb);
void EJob029(MOVE_BOX *mb);
void EJob02A(MOVE_BOX *mb);
void FlyDataEnd(u_char no);
void EJob02B(MOVE_BOX *mb);
void EJob02C(MOVE_BOX *mb);
void EJob02D(MOVE_BOX *mb);
void EJob02E(MOVE_BOX *mb);
void EJob02F(MOVE_BOX *mb);
void EJob030(MOVE_BOX *mb);
void EJob031(MOVE_BOX *mb);
void EJob032(MOVE_BOX *mb);
void EJob033(MOVE_BOX *mb);
void EJob034(MOVE_BOX *mb);
void EJob035(MOVE_BOX *mb);
void EJob036(MOVE_BOX *mb);
void EJob037(MOVE_BOX *mb);
void EJob038(MOVE_BOX *mb);
void EJob039(MOVE_BOX *mb);
void EJob03A(MOVE_BOX *mb);
void EJob03B(MOVE_BOX *mb);
void EJob03C(MOVE_BOX *mb);
void EJob03D(MOVE_BOX *mb);
void EJob03E(MOVE_BOX *mb);
void EJob03F(MOVE_BOX *mb);
void EJob040(MOVE_BOX *mb);
void EJob041(MOVE_BOX *mb);
void EJob042(MOVE_BOX *mb);
void EJob043(MOVE_BOX *mb);
void EJob044(MOVE_BOX *mb);
void EJob045(MOVE_BOX *mb);
void EJob046(MOVE_BOX *mb);
void EJob047(MOVE_BOX *mb);
void EJob048(MOVE_BOX *mb);
void EJob049(MOVE_BOX *mb);
void EJob04A(MOVE_BOX *mb);
void EJob04B(MOVE_BOX *mb);
void EJob04C(MOVE_BOX *mb);
void EJob04D(MOVE_BOX *mb);
void EJob04E(MOVE_BOX *mb);
void EJob04F(MOVE_BOX *mb);
void EJob050(MOVE_BOX *mb);
void EJob051(MOVE_BOX *mb);
void EJob052(MOVE_BOX *mb);
void EJob053(MOVE_BOX *mb);
void EJob054(MOVE_BOX *mb);
void EJob055(MOVE_BOX *mb);
void EJob056(MOVE_BOX *mb);
void EJob057(MOVE_BOX *mb);
void EJob058(MOVE_BOX *mb);
void EJob059(MOVE_BOX *mb);
void EJob05A(MOVE_BOX *mb);
void EJob05B(MOVE_BOX *mb);
void EJob05C(MOVE_BOX *mb);
void EJob05D(MOVE_BOX *mb);
void EJob05E(MOVE_BOX *mb);
void EJob05F(MOVE_BOX *mb);
void EJob060(MOVE_BOX *mb);
void EJob061(MOVE_BOX *mb);
void EJob062(MOVE_BOX *mb);
void EJob063(MOVE_BOX *mb);
void EJob064(MOVE_BOX *mb);
void EJob065(MOVE_BOX *mb);
void EJob066(MOVE_BOX *mb);
void EJob067(MOVE_BOX *mb);
void EJob068(MOVE_BOX *mb);
void EJob069(MOVE_BOX *mb);
void EJob06A(MOVE_BOX *mb);
void EJob06B(MOVE_BOX *mb);
void EJob06C(MOVE_BOX *mb);
void EJob06D(MOVE_BOX *mb);
void EJob06E(MOVE_BOX *mb);
void EJob06F(MOVE_BOX *mb);
void EJob070(MOVE_BOX *mb);
void EJob071(MOVE_BOX *mb);
void EJob072(MOVE_BOX *mb);
void EJob073(MOVE_BOX *mb);
void BJobDammy(ENE_WRK *ew);
void BJob000(ENE_WRK *ew);
void BJob001(ENE_WRK *ew);
void BJob009(ENE_WRK *ew);
void BJob00A(ENE_WRK *ew);
void BJob00B(ENE_WRK *ew);
void BJob00C(ENE_WRK *ew);
void BJob010(ENE_WRK *ew);
void BJob011(ENE_WRK *ew);
void BJob012(ENE_WRK *ew);
void BJob013(ENE_WRK *ew);
void BJob014(ENE_WRK *ew);

#endif // M_NAGAURA_REIKOKU_SRC_INGAME_ENEMY_MOVE_CTL_H
