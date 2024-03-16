#ifndef TYPEDEFS_H 
#define TYPEDEFS_H

typedef unsigned long u_long;
typedef unsigned short u_short;
typedef unsigned char u_char;
typedef unsigned int u_int;

typedef struct {
  u_long mode_tmr;
  u_char field1_0x4;
  u_char field2_0x5;
  u_char field3_0x6;
  u_char field4_0x7;
  u_char main_step;
  u_char mode_step;
  u_char chr_alp;
  u_char bak_alp;
  u_char win_alp;
  u_char flm_alp;
  u_char flm_lng;
  u_char pre_mode;
  u_char now_mode;
  u_char next_mode;
  u_char end_mode;
  u_char side;
  u_char opt_mode;
  u_char csr[3];
  u_char sm_slct[3];
  u_char bm_slct[2];
  u_char unsel_col[4];
  u_char field22_0x21;
  u_char field23_0x22;
  u_char field24_0x23;
  u_char field25_0x24;
  u_char field26_0x25;
  u_char field27_0x26;
  u_char field28_0x27;
} DSP_M_SLCT_WRK;

#endif /* TYPEDEFS_H */
