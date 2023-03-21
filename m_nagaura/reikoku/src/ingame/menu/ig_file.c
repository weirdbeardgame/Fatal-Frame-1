// STATUS: NOT STARTED

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	FILE_REL_START = 0,
	FILE_REL_LOAD_WAIT = 1,
	FILE_REL_TATEI = 2,
	FILE_REL_MENU_LOAD_WAIT = 3,
	FILE_REL_END = 4
};

typedef struct {
	int load_id;
	char step;
} FILE_REL;

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	MODE_SLCT_DIR = 0,
	MODE_SLCT_FIL = 1,
	MODE_SLCT_ERR = 2,
	MODE_SLCT_DTL = 3
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	DTL_FILE0 = 0,
	DTL_FILE1 = 1,
	DTL_FILE2 = 2,
	DTL_PHOT = 3,
	DTL_NUM = 4
};

typedef struct {
	u_long tex_now;
	u_long tex_bak;
	int load_id;
	u_char alp_now;
	u_char alp_bak;
	u_char f_mode;
	u_char mod;
	u_char knd;
	u_char dtl;
	u_char lst_top;
	u_char pic_alp[4];
	u_char page_all;
	u_char open_page;
	u_char poss_chk;
	u_char csr_bak;
	u_char csr_now;
	u_char loading;
	u_char can_dsp;
	u_char dsp_flg;
	u_char pht_alp;
	u_char pad_lock;
} MENU_FILE;

typedef struct {
	u_long tex;
	u_char space;
	u_char rot;
} PHOT_FILE;

typedef struct {
	short int px;
	short int py;
	short int sx;
	short int sy;
} DSP_PHT;

typedef struct {
	short int pht_no;
	short int lod_rq;
	short int mem_no;
} DSP_BOX;

typedef struct {
	u_long tx;
	int lod_id;
	short int lod_no;
	short int vrm_no;
	short int dsp_ok;
} MEM_BOX;

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	HUMAN_MSG00 = 0,
	HUMAN_MSG01 = 1,
	HUMAN_MSG02 = 2,
	HUMAN_MSG03 = 3,
	HUMAN_MSG04 = 4,
	HUMAN_MSG05 = 5,
	HUMAN_MSG06 = 6,
	HUMAN_MSG07 = 7,
	HUMAN_MSG08 = 8,
	HUMAN_MSG09 = 9,
	HUMAN_MSG10 = 10,
	HUMAN_MSG11 = 11,
	HUMAN_MSG12 = 12,
	HUMAN_MSG13 = 13,
	HUMAN_MSG14 = 14,
	HUMAN_MSG15 = 15,
	HUMAN_MSG16 = 16,
	HUMAN_MSG17 = 17,
	HUMAN_MSG18 = 18,
	HUMAN_MSG19 = 19,
	HUMAN_MSG20 = 20,
	HUMAN_MSG21 = 21,
	HUMAN_MSG22 = 22,
	HUMAN_MSG23 = 23,
	HUMAN_MSG24 = 24,
	HUMAN_MSG25 = 25,
	HUMAN_MSG26 = 26,
	HUMAN_MSG27 = 27,
	HUMAN_MSG28 = 28,
	HUMAN_MSG29 = 29,
	HUMAN_MSG30 = 30,
	HUMAN_MSG31 = 31,
	HUMAN_MSG32 = 32,
	HUMAN_MSG33 = 33,
	HUMAN_MSG34 = 34,
	HUMAN_MSG35 = 35,
	HUMAN_MSG36 = 36,
	HUMAN_MSG37 = 37,
	HUMAN_MSG38 = 38,
	HUMAN_MSG39 = 39,
	HUMAN_MSG40 = 40,
	HUMAN_MSG41 = 41,
	HUMAN_MSG42 = 42,
	HUMAN_MSG43 = 43,
	HUMAN_MSG44 = 44,
	HUMAN_MSG45 = 45,
	HUMAN_MSG46 = 46,
	HUMAN_MSG47 = 47,
	HUMAN_MSG48 = 48,
	HUMAN_MSG49 = 49
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	HUMAN_NAME00 = 0,
	HUMAN_NAME01 = 1,
	HUMAN_NAME02 = 2,
	HUMAN_NAME03 = 3,
	HUMAN_NAME04 = 4,
	HUMAN_NAME05 = 5,
	HUMAN_NAME06 = 6,
	HUMAN_NAME07 = 7,
	HUMAN_NAME08 = 8,
	HUMAN_NAME09 = 9,
	HUMAN_NAME10 = 10,
	HUMAN_NAME11 = 11,
	HUMAN_NAME12 = 12,
	HUMAN_NAME13 = 13,
	HUMAN_NAME14 = 14,
	HUMAN_NAME15 = 15,
	HUMAN_NAME16 = 16,
	HUMAN_NAME17 = 17,
	HUMAN_NAME18 = 18,
	HUMAN_NAME19 = 19,
	HUMAN_NAME20 = 20,
	HUMAN_NAME21 = 21,
	HUMAN_NAME22 = 22,
	HUMAN_NAME23 = 23,
	HUMAN_NAME24 = 24,
	HUMAN_NAME25 = 25,
	HUMAN_NAME26 = 26,
	HUMAN_NAME27 = 27,
	HUMAN_NAME28 = 28,
	HUMAN_NAME29 = 29,
	HUMAN_NAME30 = 30,
	HUMAN_NAME31 = 31,
	HUMAN_NAME32 = 32,
	HUMAN_NAME33 = 33,
	HUMAN_NAME34 = 34,
	HUMAN_NAME35 = 35,
	HUMAN_NAME36 = 36,
	HUMAN_NAME37 = 37,
	HUMAN_NAME38 = 38,
	HUMAN_NAME39 = 39,
	HUMAN_NAME40 = 40,
	HUMAN_NAME41 = 41,
	HUMAN_NAME42 = 42,
	HUMAN_NAME43 = 43,
	HUMAN_NAME44 = 44,
	HUMAN_NAME45 = 45,
	HUMAN_NAME46 = 46,
	HUMAN_NAME47 = 47,
	HUMAN_NAME48 = 48,
	HUMAN_NAME49 = 49
};

struct RELATION_NAME_PLATE {
	short int x;
	short int y;
	short int u;
	short int v;
	short int exp_u;
	short int exp_v;
	short int n_rabel;
	short int tbl_no;
	short int pad;
};

struct RELATION_PRT {
	RELATION_PRT *left_prt;
	RELATION_PRT *right_prt;
	SPRT_DAT *ssd_p;
	short int st_index[4];
	short int start_no;
	short int end_no;
	short int attribute;
	int csr_y;
	short int wk_scl[8][2];
	short int wk_pos[2][4];
	short int mission_no;
};

struct RELATION_DAT {
	RELATION_DAT *up_p;
	RELATION_DAT *down_p;
	RELATION_DAT *left_p;
	RELATION_DAT *right_p;
	RELATION_PRT *parent_p;
	RELATION_NAME_PLATE *plate_p;
	SPRT_DAT *ssd_p;
	SPRT_DAT *fnt_p;
	SPRT_DAT *fla_p;
	short int dat_idx;
	short int attribute;
	short int msg_idx;
	short int tm2_id;
	short int dsp_pos;
	short int pad;
};

struct RELATION_YAJI {
	short int com_idx;
	short int attribute;
	short int x1;
	short int y1;
	short int len;
	short int pad;
};

struct RELATION_COM {
	short int disp_pos;
	short int attribute;
	SPRT_DAT *ssd_p[4];
	short int flp_num[4];
	short int dat_idx[2];
	short int pad;
};

struct RELATION_CSR {
	short int offx;
	short int offy;
	short int a;
	short int attribute;
	short int mode;
	short int load_id;
	u_long tex_keep;
	short int init_switch;
	RELATION_DAT *now_dat;
	RELATION_PRT *now_prt;
	short int pad;
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	SAKKA = 0,
	SAKKA2 = 1,
	JYOSYU = 2,
	JYOSYU2 = 3,
	HENSYU = 4,
	HENSYU2 = 5,
	TOUSYU = 6,
	TOUSYU2 = 7,
	KIRIE = 8,
	KIRIE2 = 9,
	KIRIE3 = 10,
	KIRIE4 = 11,
	SINKAN = 12,
	SINKAN2 = 13,
	KIMONO = 14,
	KIMONO2 = 15,
	KIMONO3 = 16,
	RYOZO = 17,
	RYOZO2 = 18,
	YAE = 19,
	YAE2 = 20,
	MIKOTO = 21,
	MIKOTO2 = 22,
	MIKOTO3 = 23,
	MAFUYU = 24,
	MAFUYU2 = 25,
	MAFUYU3 = 26,
	MIKU = 27,
	MIYUKI = 28,
	MIYUKI2 = 29,
	OMOI = 30,
	OMOI2 = 31
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	SAKKA_PRT = 0,
	HIMURO_PRT = 1,
	MUNA_PRT = 2,
	HINA_PRT = 3,
	OMOI_PRT = 4
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	R_UP = 0,
	R_DOWN = 1,
	R_LEFT = 2,
	R_RIGHT = 3
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	RCSR_NORM = 0,
	RCSR_LOAD = 1,
	RCSR_AFTLOAD = 2,
	RCSR_TEXDISP = 3
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	R_A = 0,
	R_B = 1,
	R_C = 2,
	R_D = 3,
	R_E = 4,
	R_F = 5,
	R_G = 6,
	R_G2 = 7,
	R_H = 8,
	R_I = 9,
	R_J = 10,
	R_J2 = 11,
	R_K = 12,
	R_K2 = 13,
	R_L = 14,
	R_L2 = 15,
	R_N = 16,
	R_O = 17,
	R_P = 18,
	R_Q = 19,
	R_R = 20,
	R_S = 21,
	R_T = 22,
	R_U = 23,
	R_V = 24,
	R_W = 25,
	R_X = 26,
	R_Y = 27,
	R_Z = 28
};

// warning: multiple differing types with the same name (#138,  not equal)
enum {
	CAPS_NON = 0,
	CAPS_SEL = 205,
	CAPS_EXT = 203,
	CAPS_ENL = 207,
	CAPS_PRT = 208,
	CAPS_MEN = 201,
	CAPS_USE = 204,
	CAPS_NEX = 206,
	CAPS_OK = 205,
	CAPS_MOV = 202
};

struct CAPTION_DATA_SUB {
	short int x;
	short int y;
	u_char mark;
	u_char str;
};

struct CAPTION_DATA {
	short int w;
	short int h;
	CAPTION_DATA_SUB cds[4];
};

struct CAPTION_LIST {
	short int x;
	short int y;
	short int no;
	short int pnl;
};

u_char file_kind[0] = {
};
static RELATION_NAME_PLATE name_plate[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
SPRT_DAT spr_dat_tmp[0] = {
};
static char exp_table[0][8][2] = {
};
static char hum_table[0][8][2] = {
};
RELATION_COM rel_com[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
static char name_rbl[0][2] = {
};
RELATION_PRT rel_prt[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
RELATION_DAT rel_dat[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
RELATION_YAJI rel_yaj[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
CAPTION_LIST caption_list[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
CAPTION_DATA caption_data[0] = CCC_CANNOT_COMPUTE_ELEMENT_SIZE;
static FILE_REL file_rel;
static MEM_BOX mem_box[3];
static MENU_FILE menu_file;
static PHOT_FILE phot_file[4];
static FLSH_CORE flsh[4];
static short int menu_dsp_file[50];
enum NAME_PLATE_RABEL {
	SAKKA = 0,
	SAKKA2 = 1,
	JYOSYU = 2,
	JYOSYU2 = 3,
	HENSYU = 4,
	HENSYU2 = 5,
	TOUSYU = 6,
	TOUSYU2 = 7,
	KIRIE = 8,
	KIRIE2 = 9,
	KIRIE3 = 10,
	KIRIE4 = 11,
	SINKAN = 12,
	SINKAN2 = 13,
	KIMONO = 14,
	KIMONO2 = 15,
	KIMONO3 = 16,
	RYOZO = 17,
	RYOZO2 = 18,
	YAE = 19,
	YAE2 = 20,
	MIKOTO = 21,
	MIKOTO2 = 22,
	MIKOTO3 = 23,
	MAFUYU = 24,
	MAFUYU2 = 25,
	MAFUYU3 = 26,
	MIKU = 27,
	MIYUKI = 28,
	MIYUKI2 = 29,
	OMOI = 30,
	OMOI2 = 31
} = SAKKA;
enum PARENT_RABEL {
	SAKKA_PRT = 0,
	HIMURO_PRT = 1,
	MUNA_PRT = 2,
	HINA_PRT = 3,
	OMOI_PRT = 4
} = SAKKA_PRT;
enum REL_DIRECTION {
	R_UP = 0,
	R_DOWN = 1,
	R_LEFT = 2,
	R_RIGHT = 3
} = R_UP;
enum REL_ALPB {
	R_A = 0,
	R_B = 1,
	R_C = 2,
	R_D = 3,
	R_E = 4,
	R_F = 5,
	R_G = 6,
	R_G2 = 7,
	R_H = 8,
	R_I = 9,
	R_J = 10,
	R_J2 = 11,
	R_K = 12,
	R_K2 = 13,
	R_L = 14,
	R_L2 = 15,
	R_N = 16,
	R_O = 17,
	R_P = 18,
	R_Q = 19,
	R_R = 20,
	R_S = 21,
	R_T = 22,
	R_U = 23,
	R_V = 24,
	R_W = 25,
	R_X = 26,
	R_Y = 27,
	R_Z = 28
} = R_A;
RELATION_CSR rel_csr = CCC_TYPE_LOOKUP_FAILED;

void NewgameMenuFileInit() {
  memset(&menu_file,0,0x30);
  memset(phot_file,0,0x40);
  return;
}

void LoadgameMenuFileInit() {
  memset(&menu_file,0,0x30);
  memset(phot_file,0,0x40);
  return;
}

void StartFileModeInit() {
	int i;
	
  uchar *puVar1;
  int iVar2;
  
  menu_file.load_id = -1;
  menu_file.can_dsp = 0xff;
  menu_file.open_page = '\x01';
  ig_menu_wrk.csr[2] = '\0';
  ig_menu_wrk.csr[1] = '\0';
  iVar2 = 0;
  menu_file.tex_now = 0;
  menu_file.tex_bak = 0;
  menu_file.alp_now = '\0';
  menu_file.alp_bak = '\0';
  menu_file.f_mode = '\0';
  menu_file.lst_top = '\0';
  menu_file.mod = '\0';
  menu_file.poss_chk = '\0';
  do {
    puVar1 = &file_kind + iVar2;
    iVar2 = iVar2 + 1;
    GetDispMenuFile(*puVar1);
    menu_file.poss_chk = menu_file.poss_chk + ig_menu_wrk.file_num;
  } while (iVar2 < 4);
  menu_file.pht_alp = '\0';
  memset(mem_box,-1,0x48);
  yw2d.pad_lock = 1;
  menu_file.pad_lock = '\0';
  return;
}

void IngameMenuFile() {
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int se_no;
  
  IngameMenuFileDisp();
  if (menu_file.poss_chk == '\0') {
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (*key_now[4] != 1) {
      return;
    }
    yw2d.out_mode_cnt = 0xb;
    SeStartFix(3,0,0x1000,0x1000,1);
    return;
  }
  if (menu_file.mod == '\x01') {
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (menu_file.pad_lock != '\0') {
      return;
    }
    if (*key_now[4] == 1) {
      menu_file.mod = '\0';
      se_no = 3;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      ig_menu_wrk.mode = '\n';
      menu_file.mod = '\x03';
      if (ig_menu_wrk.csr[1] == '\x01') {
        menu_file.dtl = '\x02';
      }
      else if (ig_menu_wrk.csr[1] < 2) {
        if (ig_menu_wrk.csr[1] == '\0') {
          menu_file.dtl = '\0';
        }
      }
      else if (ig_menu_wrk.csr[1] == '\x02') {
        menu_file.dtl = '\x03';
        menu_file.pht_alp = '\0';
      }
      else if (ig_menu_wrk.csr[1] == '\x03') {
        menu_file.dtl = 0xff;
      }
      menu_file.csr_bak = 0xff;
      menu_file.open_page = '\x01';
      se_no = 1;
    }
    else if ((*key_now[0] == 1) ||
            ((((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
              (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)) ||
             ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
              (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))))) {
      if (ig_menu_wrk.csr[2] == '\0') {
        ig_menu_wrk.csr[2] = ig_menu_wrk.file_num + 0xff;
        if (ig_menu_wrk.file_num < 8) {
          menu_file.lst_top = '\0';
        }
        else {
          menu_file.lst_top = ig_menu_wrk.file_num + 0xf8;
        }
      }
      else {
        if (ig_menu_wrk.csr[2] == menu_file.lst_top) {
          menu_file.lst_top = menu_file.lst_top + 0xff;
        }
        ig_menu_wrk.csr[2] = ig_menu_wrk.csr[2] + 0xff;
      }
      se_no = 0;
    }
    else {
      if (((*key_now[1] != 1) &&
          (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x02');
        if (uVar3 < 0x1a) {
          return;
        }
        sVar2 = Ana2PadDirCnt('\x02');
        if ((int)sVar2 % 5 != 1) {
          return;
        }
      }
      if ((int)(uint)ig_menu_wrk.csr[2] < (int)(ig_menu_wrk.file_num - 1)) {
        if ((uint)ig_menu_wrk.csr[2] == menu_file.lst_top + 7) {
          menu_file.lst_top = menu_file.lst_top + '\x01';
        }
        ig_menu_wrk.csr[2] = ig_menu_wrk.csr[2] + '\x01';
      }
      else {
        ig_menu_wrk.csr[2] = '\0';
        menu_file.lst_top = '\0';
      }
      se_no = 0;
    }
  }
  else if (menu_file.mod < 2) {
    if (menu_file.mod != '\0') {
      return;
    }
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (menu_file.pad_lock != '\0') {
      return;
    }
    if (*key_now[4] == 1) {
      se_no = 3;
      yw2d.out_mode_cnt = 0xb;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      if (ig_menu_wrk.csr[1] < 3) {
        se_no = 1;
        if (ig_menu_wrk.file_num == '\0') {
          se_no = 2;
          menu_file.mod = '\x02';
        }
        else {
          menu_file.mod = '\x01';
        }
      }
      else {
        ig_menu_wrk.mode = '\v';
        file_rel.load_id = -1;
        file_rel.step = '\0';
        se_no = 1;
      }
    }
    else if (((*key_now[0] == 1) ||
             (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
              (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)))) ||
            ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
             (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
      if (menu_file.poss_chk == '\0') {
        return;
      }
      bVar1 = ig_menu_wrk.csr[1] == '\0';
      ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
      if (bVar1) {
        ig_menu_wrk.csr[1] = '\x03';
      }
      ig_menu_wrk.csr[2] = '\0';
      se_no = 0;
      menu_file.lst_top = '\0';
    }
    else {
      if (((*key_now[1] != 1) &&
          (((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)))) &&
         (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)) {
        uVar3 = Ana2PadDirCnt('\x02');
        if (uVar3 < 0x1a) {
          return;
        }
        sVar2 = Ana2PadDirCnt('\x02');
        if ((int)sVar2 % 5 != 1) {
          return;
        }
      }
      if (menu_file.poss_chk == '\0') {
        return;
      }
      bVar1 = 2 < ig_menu_wrk.csr[1];
      ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
      if (bVar1) {
        ig_menu_wrk.csr[1] = '\0';
      }
      ig_menu_wrk.csr[2] = '\0';
      se_no = 0;
      menu_file.lst_top = '\0';
    }
  }
  else {
    if (menu_file.mod != '\x02') {
      return;
    }
    if (yw2d.pad_lock != 0) {
      return;
    }
    if (menu_file.pad_lock != '\0') {
      return;
    }
    if (*key_now[4] == 1) {
      menu_file.mod = '\0';
      se_no = 3;
    }
    else if ((*key_now[6] == 1) || (*key_now[5] == 1)) {
      menu_file.mod = '\0';
      se_no = 1;
    }
    else {
      if (((*key_now[0] != 1) &&
          ((((ushort)*key_now[0] < 0x1a || ((uint)(ushort)*key_now[0] % 5 != 1)) &&
           (sVar2 = Ana2PadDirCnt('\0'), sVar2 != 1)))) &&
         ((uVar3 = Ana2PadDirCnt('\0'), uVar3 < 0x1a ||
          (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 != 1)))) {
        if ((*key_now[1] != 1) &&
           ((((ushort)*key_now[1] < 0x1a || ((uint)(ushort)*key_now[1] % 5 != 1)) &&
            (sVar2 = Ana2PadDirCnt('\x02'), sVar2 != 1)))) {
          uVar3 = Ana2PadDirCnt('\x02');
          if (uVar3 < 0x1a) {
            return;
          }
          sVar2 = Ana2PadDirCnt('\x02');
          if ((int)sVar2 % 5 != 1) {
            return;
          }
        }
        if (menu_file.poss_chk == '\0') {
          return;
        }
        bVar1 = 2 < ig_menu_wrk.csr[1];
        ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + '\x01';
        if (bVar1) {
          ig_menu_wrk.csr[1] = '\0';
        }
        ig_menu_wrk.csr[2] = '\0';
        menu_file.mod = '\0';
        menu_file.lst_top = '\0';
        SeStartFix(0,0,0x1000,0x1000,1);
        return;
      }
      if (menu_file.poss_chk == '\0') {
        return;
      }
      bVar1 = ig_menu_wrk.csr[1] == '\0';
      ig_menu_wrk.csr[1] = ig_menu_wrk.csr[1] + 0xff;
      if (bVar1) {
        ig_menu_wrk.csr[1] = '\x03';
      }
      ig_menu_wrk.csr[2] = '\0';
      se_no = 0;
      menu_file.mod = '\0';
      menu_file.lst_top = '\0';
    }
  }
  SeStartFix(se_no,0,0x1000,0x1000,1);
  return;
}

void IngameMenuFileDisp() {
  GetDispMenuFile((&file_kind)[ig_menu_wrk.csr[1]]);
  FileCntInit();
  FileModeInOut();
  DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x04');
  if (menu_file.poss_chk == '\0') {
    DrawMessageBox(0x64000,170.0,210.0,300.0,60.0,(byte)(int)yw2d.io_a[4]);
    PutStringYW(0x15,3,0xc3,0xe4,0x808080,(byte)(int)yw2d.io_a[4],0x1000,0);
  }
  else {
    DspFileOut((ushort)(int)yw2d.io_x[4],(ushort)(int)yw2d.io_y[4],(ushort)(int)yw2d.io_a[4]);
  }
  FileModeInOut2();
  FileCntRenew();
  return;
}

void IngameMenuFileData() {
	short int no;
	
  bool bVar1;
  uchar uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  IngameMenuFileDataDisp();
  uVar2 = menu_file.dtl;
  if (menu_file.dtl == '\x03') {
    if ((yw2d.pad_lock != 0) || (menu_file.pad_lock != '\0')) goto LAB_001e7894;
    if (*key_now[4] == 1) {
      iVar5 = IsLoadEndAll();
      if (iVar5 == 0) goto LAB_001e7894;
      menu_file.tex_now = 0;
      menu_file.load_id = -1;
      menu_file.can_dsp = 0xff;
      menu_file.alp_now = '\0';
      menu_file.tex_bak = 0;
      memset(mem_box,-1,0x48);
      menu_file.mod = '\x01';
      iVar5 = 3;
      ig_menu_wrk.mode = uVar2;
    }
    else {
      if ((*key_now[2] != 1) &&
         (((((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)) &&
           (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
          ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
           (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))))) {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             ((sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1 ||
              ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
               (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))))))) &&
           (1 < ig_menu_wrk.file_num)) {
          uVar6 = (uint)ig_menu_wrk.csr[2];
          ig_menu_wrk.csr[2] = ig_menu_wrk.csr[2] + '\x01';
          if ((int)(ig_menu_wrk.file_num - 1) <= (int)uVar6) {
            ig_menu_wrk.csr[2] = '\0';
            menu_file.lst_top = '\0';
          }
          if (7 < (int)((uint)ig_menu_wrk.csr[2] - (uint)menu_file.lst_top)) {
            menu_file.lst_top = menu_file.lst_top + '\x01';
          }
          SeStartFix(0,0,0x1000,0x1000,1);
          menu_file.pht_alp = '\0';
        }
        goto LAB_001e7894;
      }
      if (ig_menu_wrk.file_num < 2) goto LAB_001e7894;
      bVar1 = ig_menu_wrk.csr[2] == '\0';
      ig_menu_wrk.csr[2] = ig_menu_wrk.csr[2] + 0xff;
      if (bVar1) {
        ig_menu_wrk.csr[2] = ig_menu_wrk.file_num - 1;
        if (ig_menu_wrk.csr[2] < 8) {
          menu_file.lst_top = '\0';
        }
        else {
          menu_file.lst_top = ig_menu_wrk.file_num + 0xf8;
        }
      }
      if ((int)((uint)ig_menu_wrk.csr[2] - (uint)menu_file.lst_top) < 0) {
        menu_file.lst_top = menu_file.lst_top + 0xff;
      }
      menu_file.pht_alp = '\0';
      iVar5 = 0;
    }
  }
  else {
    if ((yw2d.pad_lock != 0) || (menu_file.pad_lock != '\0')) goto LAB_001e7894;
    if (*key_now[4] == 1) {
      menu_file.mod = '\x01';
      ig_menu_wrk.mode = '\x03';
      iVar5 = 3;
    }
    else {
      if ((*key_now[6] != 1) && (*key_now[5] != 1)) {
        if (((*key_now[3] == 1) ||
            (((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)) ||
             (sVar3 = Ana2PadDirCnt('\x01'), sVar3 == 1)))) ||
           ((uVar4 = Ana2PadDirCnt('\x01'), 0x19 < uVar4 &&
            (sVar3 = Ana2PadDirCnt('\x01'), (int)sVar3 % 5 == 1)))) {
          if ((menu_file.page_all < 2) ||
             (uVar2 = menu_file.open_page + '\x01', menu_file.page_all <= menu_file.open_page))
          goto LAB_001e7894;
        }
        else {
          if (((((*key_now[2] != 1) &&
                (((ushort)*key_now[2] < 0x1a || ((uint)(ushort)*key_now[2] % 5 != 1)))) &&
               (sVar3 = Ana2PadDirCnt('\x03'), sVar3 != 1)) &&
              ((uVar4 = Ana2PadDirCnt('\x03'), uVar4 < 0x1a ||
               (sVar3 = Ana2PadDirCnt('\x03'), (int)sVar3 % 5 != 1)))) ||
             ((menu_file.page_all < 2 || (menu_file.open_page < 2)))) goto LAB_001e7894;
          uVar2 = menu_file.open_page + 0xff;
        }
LAB_001e75cc:
        menu_file.open_page = uVar2;
        SeStartFix(4,0,0x1000,0x1000,1);
        goto LAB_001e7894;
      }
      if (menu_file.page_all < 2) {
        menu_file.mod = '\x01';
        ig_menu_wrk.mode = '\x03';
        iVar5 = 3;
      }
      else {
        uVar2 = menu_file.open_page + '\x01';
        if (menu_file.open_page < menu_file.page_all) goto LAB_001e75cc;
        menu_file.mod = '\x01';
        ig_menu_wrk.mode = '\x03';
        iVar5 = 1;
      }
    }
  }
  SeStartFix(iVar5,0,0x1000,0x1000,1);
LAB_001e7894:
  if ((&file_kind)[ig_menu_wrk.csr[1]] == 1) {
    uVar4 = menu_dsp_file[ig_menu_wrk.csr[2]];
    if ((short)uVar4 < 0x32) {
      if (poss_file[1][(short)uVar4] == '\x02') {
        poss_file[1][(short)uVar4] = '\x03';
      }
    }
    else if (poss_file[3][(int)((menu_dsp_file[ig_menu_wrk.csr[2]] - 0x32) * 0x10000) >> 0x10] ==
             '\x02') {
      poss_file[3][(int)((menu_dsp_file[ig_menu_wrk.csr[2]] - 0x32) * 0x10000) >> 0x10] = '\x03';
    }
  }
  else if (poss_file[(byte)(&file_kind)[ig_menu_wrk.csr[1]]]
           [(short)menu_dsp_file[ig_menu_wrk.csr[2]]] == '\x02') {
    poss_file[(byte)(&file_kind)[ig_menu_wrk.csr[1]]][(short)menu_dsp_file[ig_menu_wrk.csr[2]]] =
         '\x03';
  }
  return;
}

void IngameMenuFileDataDisp() {
  GetDispMenuFile((&file_kind)[ig_menu_wrk.csr[1]]);
  DspMenuTitle((ushort)(int)yw2d.io_x[1],(ushort)(int)yw2d.io_y[1],yw2d.io_a[1],'2','\x04');
  DspFileDtl(0,0,0x80);
  return;
}

void GetDispMenuFile(u_char csr) {
	int i;
	
  uint uVar1;
  uint uVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (int)(char)csr & 0xff;
  if (uVar2 == 0xff) {
    ig_menu_wrk.file_num = '\0';
  }
  else {
    memset(menu_dsp_file,-1,0x32);
    ig_menu_wrk.file_num = '\0';
    iVar4 = 0;
    puVar3 = (uchar *)poss_file[uVar2];
    do {
      if (1 < *puVar3) {
        uVar1 = (uint)ig_menu_wrk.file_num;
        ig_menu_wrk.file_num = ig_menu_wrk.file_num + '\x01';
        menu_dsp_file[uVar1] = (ushort)iVar4;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x32);
    if (uVar2 == 1) {
      puVar3 = (uchar *)poss_file[3];
      iVar4 = 0;
      do {
        if (1 < *puVar3) {
          uVar2 = (uint)ig_menu_wrk.file_num;
          ig_menu_wrk.file_num = ig_menu_wrk.file_num + '\x01';
          menu_dsp_file[uVar2] = (short)iVar4 + 0x32;
        }
        iVar5 = iVar4 + 1;
        puVar3 = poss_file[3] + iVar4 + 1;
        iVar4 = iVar5;
      } while (iVar5 < 0x32);
    }
  }
  return;
}

static void FileCntInit() {
  return;
}

static void FileCntRenew() {
  if (yw2d.inn_mode_cnt != -1) {
    yw2d.inn_mode_cnt = yw2d.inn_mode_cnt + 1;
  }
  if (yw2d.out_mode_cnt != 0) {
    yw2d.out_mode_cnt = yw2d.out_mode_cnt + -1;
  }
  return;
}

static void FileModeInOut() {
	int i;
	float fade_in;
	float fade_out;
	
  int iVar1;
  
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = (float)((uint)(ushort)yw2d.inn_mode_cnt << 7) / 10.0;
    yw2d.io_a[2] = (1.0 - (float)(uint)(ushort)yw2d.inn_mode_cnt / 10.0) * 128.0;
    yw2d.io_a[3] = yw2d.io_a[2];
    yw2d.io_a[4] = yw2d.io_a[1];
    PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    if (yw2d.inn_mode_cnt == 10) {
      yw2d.pad_lock = 0;
    }
  }
  else if (yw2d.out_mode_cnt == 0) {
    iVar1 = 0;
    do {
      XYAdefaultYW((uchar)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
  }
  else {
    yw2d.io_a[0] = 128.0;
    yw2d.io_a[1] = (float)(((ushort)yw2d.out_mode_cnt - 1) * 0x80) / 10.0;
    yw2d.io_a[2] = (1.0 - (float)((ushort)yw2d.out_mode_cnt - 1) / 10.0) * 128.0;
    yw2d.io_a[3] = yw2d.io_a[2];
    yw2d.io_a[4] = yw2d.io_a[1];
    PlayerStatusYW((uchar)(int)yw2d.io_a[2]);
    DspTopMenu((ushort)(int)yw2d.io_x[3],(ushort)(int)yw2d.io_y[3],(ushort)(int)yw2d.io_a[3],0);
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x01');
    yw2d.pad_lock = 1;
    if (yw2d.out_mode_cnt == 1) {
      ig_menu_wrk.mode = '\a';
      IngameMenuModeSlctDispInit();
      yw2d.pad_lock = 0;
      yw2d.menu_io_flg = 0;
    }
  }
  return;
}

static void FileModeInOut2() {
  if ((ushort)yw2d.inn_mode_cnt < 0xb) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  if (yw2d.out_mode_cnt != 0) {
    DspPlayData((ushort)(int)yw2d.io_x[2],(ushort)(int)yw2d.io_y[2],yw2d.io_a[2],'\x02');
    return;
  }
  return;
}

static void DspFileOut(short int pos_x, short int pos_y, short int alpha) {
  DspKindTab(pos_x - 0xf,pos_y,alpha);
  DspFile2D2(pos_x - 0xf,pos_y,alpha);
  DspFileLst(pos_x,pos_y,alpha);
  DspMsgWndw(pos_x,pos_y,alpha);
  return;
}

static void DspKindTab(short int pos_x, short int pos_y, short int alpha) {
	int rgb;
	
  int rgb;
  
  WakuWaku(pos_x - 2,pos_y + 0x94,(byte)alpha,'\x04','-');
  PutSpriteYW(0x18e,0x191,(float)((short)pos_x + 5),(float)((short)pos_y + -3),0.0,0x808080,
              (float)(int)(short)alpha,1.0,1.0,0,0xff,1,0,0);
  if (menu_file.mod == '\0') {
    FlashStarYW(flsh,'@','`','Z','\0');
    CLRtoRGB(&rgb,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
  }
  else {
    FlashStarYW(flsh,'@','`','Z',0xff);
    CLRtoRGB(&rgb,flsh[0].alpha,flsh[0].alpha,flsh[0].alpha);
  }
  CmnCursol(pos_x + 0x2f,
            (ushort)(((int)(short)pos_y + (uint)ig_menu_wrk.csr[1] * 0x26 + 0xb4) * 0x10000 >> 0x10)
            ,0x7a,0x1e,(float)(uint)flsh[0].alpha,(byte)alpha,0x23000);
  return;
}

static void DspFile2D(short int pos_x, short int pos_y, short int alpha) {
	int i;
	char add;
	
  char cVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float rot;
  float pos_x_00;
  float pos_y_00;
  float alp;
  
  alp = (float)(int)(short)alpha;
  uVar5 = (uint)ig_menu_wrk.csr[1];
  pos_x_00 = (float)(int)(short)pos_x;
  pos_y_00 = (float)(int)(short)pos_y;
  uVar4 = 0;
  puVar3 = menu_file.pic_alp;
  cVar1 = (char)(int)(alp / 30.0);
  do {
    if (uVar4 == uVar5) {
      if ((int)((uint)*puVar3 + (int)cVar1) < (int)(short)alpha) {
        *puVar3 = cVar1 + *puVar3;
      }
      else {
        *puVar3 = (byte)alpha;
      }
    }
    else {
      iVar2 = (uint)*puVar3 - (int)cVar1;
      if (iVar2 < 1) {
        *puVar3 = 0;
      }
      else {
        *puVar3 = (byte)iVar2;
      }
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar4 < 4);
  rot = 0.0;
  PutSpriteYW(0x1c7,0x1c8,pos_x_00,pos_y_00,0.0,0x808080,(float)(uint)menu_file.pic_alp[0],1.0,1.0,0
              ,0xff,1,0,0);
  PutSpriteYW(0x1c2,0x1c2,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)menu_file.pic_alp[1],1.0,1.0,0
              ,0xff,1,0,0);
  PutSpriteYW(0x1c9,0x1ca,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)menu_file.pic_alp[2],1.0,1.0,0
              ,0xff,1,0,0);
  PutSpriteYW(0x1c3,0x1c3,pos_x_00,pos_y_00,rot,0x808080,(float)(uint)menu_file.pic_alp[3],1.0,1.0,0
              ,0xff,1,0,0);
  PutSpriteYW(0x192,0x192,pos_x_00,pos_y_00,rot,0x808080,alp,1.0,1.0,0,0xff,1,0,0);
  return;
}

static void DspFile2D2(short int pos_x, short int pos_y, short int alpha) {
	short int no;
	u_short alp_add;
	
  byte bVar1;
  ushort uVar2;
  float scl_x;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float pos_y_00;
  float alp;
  float pos_x_00;
  
  uVar3 = menu_file.mod;
  bVar1 = (&file_kind)[ig_menu_wrk.csr[1]];
  uVar6 = (uint)(short)alpha;
  if (bVar1 == 0xff) {
    uVar2 = menu_dsp_file[ig_menu_wrk.csr[2]];
    if ((short)uVar2 < 0x32) {
      alp = (float)uVar6;
      menu_file.csr_now = map_file_dat[1][(short)uVar2].dsp_pct;
    }
    else {
      alp = (float)uVar6;
      menu_file.csr_now =
           map_file_dat[3][(int)((menu_dsp_file[ig_menu_wrk.csr[2]] - 0x32) * 0x10000) >> 0x10].
           dsp_pct;
    }
  }
  else {
    alp = (float)uVar6;
    uVar7 = (int)(alp / 30.0) & 0xffff;
    if (menu_file.mod == '\0') {
      if ((int)(menu_file.alp_bak - uVar7) < 1) {
        menu_file.alp_bak = '\0';
      }
      else {
        menu_file.alp_bak = (uchar)(menu_file.alp_bak - uVar7);
      }
      if ((int)(menu_file.alp_now - uVar7) < 1) {
        menu_file.tex_now = 0;
        menu_file.can_dsp = 0xff;
        menu_file.tex_bak = 0;
      }
      else {
        menu_file.alp_now = (uchar)(menu_file.alp_now - uVar7);
      }
    }
    else if (menu_file.mod == '\x01') {
      if (bVar1 != 1) {
        menu_file.csr_now =
             map_file_dat[(byte)(&file_kind)[ig_menu_wrk.csr[1]]]
             [(short)menu_dsp_file[ig_menu_wrk.csr[2]]].dsp_pct;
        if (menu_file.csr_now == menu_file.can_dsp) {
          if ((menu_file.alp_now == uVar6) && (menu_file.dsp_flg != '\0')) {
            menu_file.tex_bak = menu_file.tex_now;
            menu_file.tex_now = VramItem2D(menu_file.f_mode,'\x02');
            menu_file.f_mode = '\x01' - menu_file.f_mode;
            menu_file.dsp_flg = '\0';
            menu_file.alp_now = '\0';
          }
        }
        else if (menu_file.load_id == -1) {
          menu_file.loading = menu_file.csr_now;
          menu_file.load_id = LoadItem2D('\x04',menu_file.csr_now);
          menu_file.dsp_flg = uVar3;
        }
        iVar4 = IsLoadEnd(menu_file.load_id);
        if (iVar4 != 0) {
          menu_file.load_id = -1;
          menu_file.can_dsp = menu_file.loading;
        }
        uVar5 = (uint)menu_file.alp_now;
        menu_file.alp_now = (uchar)alpha;
        if ((int)(uVar5 + uVar7) < (int)uVar6) {
          menu_file.alp_now = (uchar)(uVar5 + uVar7);
        }
        menu_file.alp_bak = (uchar)alpha - menu_file.alp_now;
      }
      scl_x = DAT_00355f28;
      pos_x_00 = (float)((short)pos_x + -0x16d);
      pos_y_00 = (float)((short)pos_y + -0x5c);
      DspItem2D(menu_file.tex_now,pos_x_00,pos_y_00,0x808080,(float)(uint)menu_file.alp_now,
                DAT_00355f28,DAT_00355f28,'2');
      DspItem2D(menu_file.tex_bak,pos_x_00,pos_y_00,0x808080,(float)(uint)menu_file.alp_bak,scl_x,
                scl_x,'2');
    }
  }
  PutSpriteYW(0x192,0x192,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,alp,1.0,1.0
              ,0,0xff,1,0,0);
  return;
}

static void DspFileLst(short int pos_x, short int pos_y, short int alpha) {
	int i;
	short int no;
	
  uchar uVar1;
  ushort uVar2;
  short sVar3;
  byte alp;
  ushort pos_x_00;
  int iVar4;
  int iVar5;
  int iVar6;
  float rot;
  float alp_00;
  float pos_y_00;
  float pos_x_01;
  
  iVar6 = (int)(short)pos_y;
  alp = (byte)alpha;
  pos_x_01 = (float)(int)(short)pos_x;
  alp_00 = (float)(int)(short)alpha;
  pos_y_00 = (float)iVar6;
  CmnWindow(8,pos_x,pos_y,alp,0x80);
  rot = 0.0;
  PutSpriteYW(0x194,0x194,pos_x_01,pos_y_00,0.0,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x195,0x195,pos_x_01,pos_y_00,rot,0x808080,alp_00,1.0,1.0,0,0xff,1,0,0);
  PutSpriteYW(0x196,0x196,pos_x_01,pos_y_00,rot,0x808080,alp_00,1.0,DAT_00355f2c,0,0xff,1,0,0);
  SideBar(ig_menu_wrk.file_num,'\b',0x119,menu_file.lst_top,0x199,alp,0,0);
  SideTri(ig_menu_wrk.file_num,'\b',0x197,alpha);
  if ((&file_kind)[ig_menu_wrk.csr[1]] == -1) {
    DispCaption(0xc,alp);
    return;
  }
  iVar5 = 0;
  if (menu_dsp_file[menu_file.lst_top] != 0xffff) {
    sVar3 = pos_y + 0x30;
    pos_x_00 = pos_x + 0x10a;
    do {
      if ((&file_kind)[ig_menu_wrk.csr[1]] == '\x01') {
        uVar2 = menu_dsp_file[iVar5 + (uint)menu_file.lst_top];
        if ((short)uVar2 < 0x32) {
          PutStringYW(0xb,(byte)uVar2,pos_x_00,(short)iVar5 * 0x22 + sVar3,0x808080,alp,0x23000,0);
          uVar1 = poss_file[1][(short)uVar2];
          goto joined_r0x001e8a58;
        }
        iVar4 = (int)((menu_dsp_file[iVar5 + (uint)menu_file.lst_top] - 0x32) * 0x10000) >> 0x10;
        PutStringYW(0x18,(&file2item)[iVar4 * 2],pos_x_00,(short)(iVar5 * 0x22) + sVar3,0x808080,alp
                    ,0x23000,0);
        if (poss_file[3][iVar4] == '\x02') {
          PutSpriteYW(0x193,0x193,pos_x_01,(float)(iVar5 * 0x22 + iVar6),0.0,0x808080,alp_00,1.0,1.0
                      ,0,0xff,1,0,0);
        }
      }
      else {
        PutStringYW((&file_kind)[ig_menu_wrk.csr[1]] + 10,
                    *(byte *)(menu_dsp_file + iVar5 + (uint)menu_file.lst_top),pos_x_00,
                    (short)iVar5 * 0x22 + sVar3,0x808080,alp,0x23000,0);
        uVar1 = poss_file[(byte)(&file_kind)[ig_menu_wrk.csr[1]]]
                [(short)menu_dsp_file[iVar5 + (uint)menu_file.lst_top]];
joined_r0x001e8a58:
        if (uVar1 == '\x02') {
          PutSpriteYW(0x193,0x193,pos_x_01,(float)(iVar5 * 0x22 + iVar6),0.0,0x808080,alp_00,1.0,1.0
                      ,0,0xff,1,0,0);
        }
      }
      iVar5 = iVar5 + 1;
    } while ((iVar5 < 8) && (menu_dsp_file[iVar5 + (uint)menu_file.lst_top] != 0xffff));
  }
  if (ig_menu_wrk.file_num != '\0') {
    if (menu_file.mod == '\x01') {
      FlashStarYW(flsh + 1,'@','`','Z','\0');
      CmnCursol(pos_x + 0x101,
                (ushort)((iVar6 + ((uint)ig_menu_wrk.csr[2] - (uint)menu_file.lst_top) * 0x22 + 0x2a
                         ) * 0x10000 >> 0x10),0x14e,0x23,(float)(uint)flsh[1].alpha,alp,0x28000);
    }
    else {
      FlashStarYW(flsh + 1,'@','`','Z',0xff);
    }
  }
  DispCaption(0xc,alp);
  return;
}

void SideBar(u_char hav_now, u_char dsp_max, u_short mov_lng, u_char lst_top, u_short chr_top, u_char alp, short int dx, short int dy) {
	u_char csr_top;
	u_short now_lng;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)(char)hav_now & 0xff;
  uVar2 = (int)(char)dsp_max & 0xff;
  uVar4 = (int)mov_lng & 0xffff;
  if (uVar3 != 0) {
    if (uVar2 < uVar3) {
      uVar1 = uVar3 - uVar2 & 0xff;
      uVar3 = (int)((float)(uVar4 * uVar2) / (float)uVar3) & 0xffff;
    }
    else {
      uVar1 = 0;
      uVar3 = uVar4;
    }
    PutBarScale(dx,(ushort)((uint)(((int)(short)dy +
                                   (int)(((float)(uVar4 - uVar3) / (float)uVar1) *
                                        (float)((int)(char)lst_top & 0xff))) * 0x10000) >> 0x10),
                (short)uVar3,alp,chr_top);
    return;
  }
  return;
}

static void PutBarScale(short int pos_x, short int pos_y, u_short now_lng, u_char alp, u_short chr_top) {
	int i;
	float scl_px;
	float scl_py;
	float mdl_lng;
	float mdl_scl;
	DISP_SPRT ds;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  DISP_SPRT ds;
  
  uVar1 = (int)chr_top & 0xffff;
  d = (SPRT_DAT *)(&spr_dat + uVar1 * 0x20);
  iVar2 = (uVar1 + 2) * 0x20;
  fVar4 = (float)(int)(short)pos_x;
  iVar9 = *(int *)(&DAT_00329884 + iVar2);
  fVar8 = (float)*(int *)(&DAT_00329880 + iVar2);
  fVar5 = (float)(int)(short)pos_y;
  iVar3 = 0;
  fVar7 = (float)(((int)now_lng & 0xffffU) -
                 ((uint)*(ushort *)(&DAT_0032987e + uVar1 * 0x20) +
                 (uint)*(ushort *)(&DAT_0032987e + (uVar1 + 1) * 0x20))) /
          (float)(uint)*(ushort *)(&DAT_0032987e + iVar2);
  fVar6 = fVar7 * (float)(uint)*(ushort *)(&DAT_0032987e + iVar2);
  do {
    CopySprDToSpr(&ds,d);
    if (iVar3 == 0) {
      ds.y = ds.y + fVar5;
LAB_001e8ef4:
      ds.x = ds.x + fVar4;
    }
    else {
      if (iVar3 == 1) {
        ds.y = ds.y + fVar5 + fVar6;
        goto LAB_001e8ef4;
      }
      if (iVar3 == 2) {
        ds.scw = 1.0;
        ds.y = ds.y + fVar5 / fVar7;
        ds.csx = fVar8;
        ds.csy = (float)iVar9;
        ds.sch = fVar7;
        goto LAB_001e8ef4;
      }
    }
    ds.tex1 = 0x141;
    iVar3 = iVar3 + 1;
    ds.alpha = alp;
    DispSprD(&ds);
    d = d + 1;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}

static void SideTri(u_char hav_now, u_char dsp_max, u_short chr_top, short int alpha) {
	int rgb_l;
	int rgb_r;
	
  uchar mode;
  int iVar1;
  float scl_x;
  int rgb_r;
  
  iVar1 = (int)(short)alpha;
  if (menu_file.mod == '\x03') {
    if (menu_file.dtl != '\x03') {
      if (dsp_max < 2) {
        FlashStarYW(flsh + 3,'@',0xc0,'<',0xff);
        CLRtoRGB(&rgb_r,flsh[3].alpha,flsh[3].alpha,flsh[3].alpha);
        return;
      }
      FlashStarYW(flsh + 3,'@',0xc0,'<','\0');
      CLRtoRGB(&rgb_r,flsh[3].alpha,flsh[3].alpha,flsh[3].alpha);
      if (1 < hav_now) {
        PutSpriteYW(chr_top,chr_top,0.0,0.0,0.0,rgb_r,(float)iVar1,1.0,1.0,0,0xff,1,0,0);
      }
      if (dsp_max <= hav_now) {
        return;
      }
      scl_x = 1.0;
      goto LAB_001e91a8;
    }
    if (hav_now < 2) {
      FlashStarYW(flsh + 3,'@',0xc0,'<',0xff);
      return;
    }
    FlashStarYW(flsh + 3,'@',0xc0,'<','\0');
    scl_x = 1.0;
    CLRtoRGB(&rgb_r,flsh[3].alpha,flsh[3].alpha,flsh[3].alpha);
  }
  else {
    if (dsp_max < hav_now) {
      mode = '\0';
    }
    else {
      mode = 0xff;
    }
    FlashStarYW(flsh + 2,'@',0xc0,'<',mode);
    CLRtoRGB(&rgb_r,flsh[2].alpha,flsh[2].alpha,flsh[2].alpha);
    scl_x = 1.0;
  }
  PutSpriteYW(chr_top,chr_top,0.0,0.0,0.0,rgb_r,(float)iVar1,scl_x,scl_x,0,0xff,1,0,0);
LAB_001e91a8:
  PutSpriteYW(chr_top + 1,chr_top + 1,0.0,0.0,0.0,rgb_r,(float)iVar1,scl_x,scl_x,0,0xff,1,0,0);
  return;
}

static void DspMsgWndw(short int pos_x, short int pos_y, short int alpha) {
  char cVar1;
  ushort uVar2;
  byte alp;
  
  alp = (byte)alpha;
  DrawMessageBox(0x1e000,(float)((short)pos_x + 0x1a),(float)((short)pos_y + 0x154),588.0,80.0,alp);
  cVar1 = (&file_kind)[ig_menu_wrk.csr[1]];
  if (cVar1 == -1) {
    PutStringYW(0x15,8,pos_x + 0x30,pos_y + 0x164,0x808080,alp,0x19000,0);
    return;
  }
  if (menu_file.mod != '\x01') {
    if (menu_file.mod < 2) {
      if (menu_file.mod == '\0') {
        PutStringYW(0x15,cVar1 + 4,pos_x + 0x30,pos_y + 0x164,0x808080,alp,0x19000,0);
        return;
      }
    }
    else if (menu_file.mod == '\x02') {
      PutStringYW(0x15,0,pos_x + 0x30,pos_y + 0x164,0x808080,alp,0x19000,0);
      return;
    }
    return;
  }
  if (cVar1 != '\x01') {
    PutStringYW(cVar1 + 0xe,*(byte *)(menu_dsp_file + ig_menu_wrk.csr[2]),pos_x + 0x30,pos_y + 0x164
                ,0x808080,alp,0x19000,0);
    return;
  }
  uVar2 = menu_dsp_file[ig_menu_wrk.csr[2]];
  if (0x31 < (short)uVar2) {
    PutStringYW(0x16,(&file2item)
                     [(int)((menu_dsp_file[ig_menu_wrk.csr[2]] - 0x32) * 0x10000) >> 0xf],
                pos_x + 0x30,pos_y + 0x164,0x808080,alp,0x19000,0);
    return;
  }
  PutStringYW(0xf,(byte)uVar2,pos_x + 0x30,pos_y + 0x164,0x808080,alp,0x19000,0);
  return;
}

static void DspFileDtl(short int pos_x, short int pos_y, short int alpha) {
  if (menu_file.dtl != '\x03') {
    DspFileBook(pos_x,pos_y,alpha);
    return;
  }
  DspFilePhot(pos_x,pos_y,alpha);
  return;
}

static void DspFileBook(short int pos_x, short int pos_y, short int alpha) {
  byte alp;
  
  alp = (byte)alpha;
  PolySquareYW(55.0,91.0,0x212,0x148,0,(float)(int)(short)alpha * 0.5,1.0,1.0,0x1e000,0,0,0);
  DspFileCmmn(pos_x,pos_y,alpha);
  CmnWindow(10,pos_x,pos_y,alp,0x80);
  menu_file.page_all =
       ChkPageYW((&file_kind)[ig_menu_wrk.csr[1]] + '\x12',
                 *(uchar *)(menu_dsp_file + ig_menu_wrk.csr[2]));
  PageInfo(menu_file.open_page,menu_file.page_all,pos_x,pos_y - 0xd,alp);
  SideTri(menu_file.open_page,menu_file.page_all,0x21b,alpha);
  if (ig_menu_wrk.file_num != '\0') {
    PutStringYW((&file_kind)[ig_menu_wrk.csr[1]] + 10,*(byte *)(menu_dsp_file + ig_menu_wrk.csr[2]),
                0xeb,0x23,0x808080,0x80,0x19000,0);
    PutPage2YW((&file_kind)[ig_menu_wrk.csr[1]] + '\x12',
               *(uchar *)(menu_dsp_file + ig_menu_wrk.csr[2]),menu_file.open_page,0x5a,0x6e,0x808080
               ,0x80,0x19000);
  }
  DispCaption(0xd,alp);
  return;
}

static void DspFilePhot(short int pos_x, short int pos_y, short int alpha) {
  ushort uVar1;
  byte msg_knd;
  byte msg_no;
  float rot;
  float alp;
  
  alp = (float)(int)(short)alpha;
  DspFileCmmn(pos_x,pos_y,alpha);
  rot = 0.0;
  PutSpriteYW(0x19c,0x1a1,(float)(int)(short)pos_x,(float)(int)(short)pos_y,0.0,0x808080,alp,1.0,1.0
              ,0,0xff,1,0,0);
  PutSpriteYW(0x1a2,0x1c1,(float)(int)(short)pos_x,(float)(int)(short)pos_y,rot,0x808080,alp,1.0,1.0
              ,0,0xff,1,0,0);
  SideTri(ig_menu_wrk.file_num,'\b',0x21b,alpha);
  if ((&file_kind)[ig_menu_wrk.csr[1]] == '\x01') {
    uVar1 = menu_dsp_file[ig_menu_wrk.csr[2]];
    if (0x31 < (short)uVar1) {
      PutStringYW(0x18,(&file2item)
                       [(int)((menu_dsp_file[ig_menu_wrk.csr[2]] - 0x32) * 0x10000) >> 0xf],0xeb,
                  0x23,0x808080,0x80,0x19000,0);
      goto LAB_001e9950;
    }
    msg_no = (byte)uVar1;
    msg_knd = 0xb;
  }
  else {
    msg_no = *(byte *)(menu_dsp_file + ig_menu_wrk.csr[2]);
    msg_knd = (&file_kind)[ig_menu_wrk.csr[1]] + 10;
  }
  PutStringYW(msg_knd,msg_no,0xeb,0x23,0x808080,0x80,0x19000,0);
LAB_001e9950:
  PhotDispCtrl((byte)alpha);
  DispCaption(0xe,(byte)alpha);
  return;
}

static void PhotDispCtrl(u_char alp) {
	int i;
	int j;
	short int no;
	short int wk_no;
	char tate_yoko;
	signed char box_no;
	signed char lod_chk;
	u_int mem_ofs;
	SPRITE_DATA dmy;
	DSP_BOX dsp_box[3];
	DSP_PHT dsp_pht[6];
	
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  short bar_l;
  ushort *puVar8;
  uchar uVar9;
  short bar_h;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  DSP_BOX *pDVar15;
  int iVar16;
  MEM_BOX *pMVar17;
  DSP_PHT *pDVar18;
  ushort *puVar19;
  ulong in_hi;
  undefined4 uVar20;
  float pos_y;
  float pos_x;
  float alp_00;
  SPRITE_DATA dmy;
  DSP_BOX dsp_box [3];
  undefined auStack_10a [10];
  DSP_PHT dsp_pht [6];
  uint local_d0;
  ushort *local_cc;
  DSP_PHT *local_c8;
  ushort *local_c4;
  ushort *local_c0;
  ushort *local_bc;
  
  local_d0 = (int)(char)alp & 0xff;
  alp_00 = (float)local_d0;
  local_cc = &dsp_box[0].lod_rq;
  puVar19 = &dsp_box[0].mem_no;
  puVar1 = (undefined *)((int)&dsp_pht[0].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a30 >> (7 - uVar6) * 8;
  dsp_pht[0] = DAT_00350a30;
  puVar1 = (undefined *)((int)&dsp_pht[1].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a38 >> (7 - uVar6) * 8;
  dsp_pht[1] = DAT_00350a38;
  puVar1 = (undefined *)((int)&dsp_pht[2].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a40 >> (7 - uVar6) * 8;
  dsp_pht[2] = DAT_00350a40;
  puVar1 = (undefined *)((int)&dsp_pht[3].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a48 >> (7 - uVar6) * 8;
  dsp_pht[3] = DAT_00350a48;
  puVar1 = (undefined *)((int)&dsp_pht[4].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a50 >> (7 - uVar6) * 8;
  dsp_pht[4] = DAT_00350a50;
  puVar1 = (undefined *)((int)&dsp_pht[5].sy + 1);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_00350a58 >> (7 - uVar6) * 8;
  dsp_pht[5] = DAT_00350a58;
  puVar11 = &mem_box[0].vrm_no;
  local_c8 = dsp_pht;
  local_c4 = &dsp_pht[0].py;
  local_bc = &dsp_pht[0].sy;
  local_c0 = &dsp_pht[0].sx;
  puVar14 = puVar19;
  puVar8 = local_cc;
  do {
    *puVar8 = 0xffff;
    *puVar14 = 0xffff;
    puVar8 = puVar8 + 3;
    *puVar11 = 0xffff;
    puVar14 = puVar14 + 3;
    puVar11 = puVar11 + 0xc;
  } while ((int)puVar14 < (int)auStack_10a);
  iVar16 = 0;
  do {
    uVar6 = (uint)(in_hi >> 0x20);
    uVar5 = TargetPhot((ushort)ig_menu_wrk.csr[2],(ushort)iVar16);
    in_hi = (ulong)uVar6 << 0x20;
    dsp_box[iVar16].pht_no = uVar5;
    if ((long)(int)(short)uVar5 != -1) {
      iVar10 = -1;
      if ((long)(int)(short)uVar5 == (long)(short)mem_box[0].dsp_ok) {
        iVar10 = 0;
      }
      else {
        for (iVar12 = 1; iVar12 < 3; iVar12 = iVar12 + 1) {
          if (dsp_box[iVar16].pht_no == mem_box[iVar12].dsp_ok) {
            iVar10 = (int)(char)iVar12;
            break;
          }
        }
      }
      uVar7 = (ulong)uVar6;
      if (iVar10 == -1) {
        iVar13 = 0;
        in_hi = uVar7 << 0x20;
        iVar10 = 0x1000000;
        iVar12 = 2;
        puVar14 = &mem_box[0].lod_no;
        do {
          iVar12 = iVar12 + -1;
          if (dsp_box[iVar16].pht_no == *puVar14) {
            iVar13 = iVar10 >> 0x18;
            iVar10 = iVar10 + 0x1000000;
          }
          puVar14 = puVar14 + 0xc;
        } while (-1 < iVar12);
        if (iVar13 == 0) {
          in_hi = uVar7 << 0x20;
          local_cc[iVar16 * 3] = dsp_box[iVar16].pht_no;
        }
      }
      else {
        in_hi = uVar7 << 0x20;
        puVar19[iVar16 * 3] = (ushort)iVar10;
        mem_box[iVar10].vrm_no = (ushort)iVar16;
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 3);
  iVar16 = 2;
  pDVar15 = dsp_box;
  puVar14 = local_bc;
  puVar8 = local_c0;
  puVar11 = local_c4;
  pDVar18 = local_c8;
  do {
    if (pDVar15->pht_no != 0xffff) {
      uVar9 = '\0';
      if (0x31 < (short)pDVar15->pht_no) {
        uVar9 = (&pht_waku_put)[(int)((pDVar15->pht_no - 0x32) * 0x10000) >> 0x10];
      }
      DspBack2D(pDVar15->pht_no,uVar9,pDVar18->px,*puVar11,*puVar8,*puVar14,(uchar)local_d0);
    }
    puVar14 = puVar14 + 4;
    puVar8 = puVar8 + 4;
    puVar11 = puVar11 + 4;
    pDVar18 = pDVar18 + 1;
    iVar16 = iVar16 + -1;
    pDVar15 = pDVar15 + 1;
  } while (-1 < iVar16);
  puVar14 = puVar19;
  while( true ) {
    iVar16 = (short)dsp_box[0].mem_no * 0x204;
    uVar7 = in_hi & 0xffffffff00000000;
    in_hi = uVar7 | (uint)(iVar16 >> 0x1f);
    if (dsp_box[0].mem_no != 0xffff) {
      uVar20 = (undefined4)(uVar7 >> 0x20);
      uVar7 = LoadTIM2Sub(&dmy,(char *)((short)dsp_box[0].mem_no * 0x10440 + 0x1d573b0),0,
                          iVar16 + 0x3080);
      in_hi = CONCAT44(uVar20,(short)*puVar14 * 0x18 >> 0x1f);
      mem_box[(short)*puVar14].tx = uVar7;
    }
    puVar14 = puVar14 + 3;
    if ((int)auStack_10a <= (int)puVar14) break;
    dsp_box[0].mem_no = *puVar14;
  }
  cVar4 = AllVramTensoOK('\x03',dsp_box);
  if (cVar4 != '\0') {
    uVar6 = (uint)menu_file.pht_alp;
    menu_file.pht_alp = (uchar)local_d0;
    if ((int)(uVar6 + 0x10) < (int)local_d0) {
      menu_file.pht_alp = (uchar)(uVar6 + 0x10);
    }
    iVar16 = 2;
    pDVar15 = dsp_box;
    do {
      if (pDVar15->pht_no != 0xffff) {
        uVar9 = '\0';
        if (0x31 < (short)pDVar15->pht_no) {
          uVar9 = (&pht_waku_put)[(int)((pDVar15->pht_no - 0x32) * 0x10000) >> 0x10];
        }
        lVar3 = (in_hi | 0x402b80) + (long)((short)*puVar19 * 0x18);
        in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
        DspPhot2D(*(ulong *)lVar3,uVar9,local_c8->px,*local_c4,*local_c0,*local_bc,menu_file.pht_alp
                 );
      }
      local_bc = local_bc + 4;
      local_c0 = local_c0 + 4;
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 1;
      puVar19 = puVar19 + 3;
      iVar16 = iVar16 + -1;
      pDVar15 = pDVar15 + 1;
    } while (-1 < iVar16);
  }
  iVar16 = 0;
  do {
    in_hi = in_hi & 0xffffffff00000000 | (ulong)(uint)(iVar16 * 6 >> 0x1f);
    pDVar15 = dsp_box + iVar16;
    uVar5 = pDVar15->pht_no;
    if (uVar5 == 0xffff) goto LAB_001ea100;
    if ((short)uVar5 < 0x32) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (&pht_waku_put)[(int)((pDVar15->pht_no - 0x32) * 0x10000) >> 0x10];
    }
    if (cVar4 == '\0') {
      if (iVar16 == 1) {
        PolySquareYW(176.0,165.0,0x120,0xbc,0,1.0,1.0,1.0,0x1000,0,0,0);
        pos_x = 170.0;
        pos_y = 159.0;
        bar_l = 300;
        bar_h = 200;
        goto LAB_001ea058;
      }
      if (iVar16 < 2) {
        if (iVar16 == 0) {
          PolySquareYW(66.0,237.0,0x4e,0x32,0,1.0,1.0,1.0,0x1000,0,0,0);
          pos_x = 64.0;
          pos_y = 235.0;
          bar_l = 0x52;
          bar_h = 0x36;
          goto LAB_001ea058;
        }
      }
      else if (iVar16 == 2) {
        PolySquareYW(496.0,237.0,0x4e,0x32,0,1.0,1.0,1.0,0x1000,0,0,0);
        pos_x = 494.0;
        pos_y = 235.0;
        bar_l = 0x52;
        bar_h = 0x36;
        goto LAB_001ea058;
      }
    }
    else {
      if (iVar16 != 1) {
        if (iVar16 < 2) {
          if (iVar16 == 0) {
            PolySquareYW(80.0,224.0,0x32,0x4e,0,1.0,1.0,1.0,0x1000,0,0,0);
            pos_x = 78.0;
            pos_y = 222.0;
            bar_l = 0x36;
            bar_h = 0x52;
            goto LAB_001ea058;
          }
        }
        else if (iVar16 == 2) {
          PolySquareYW(510.0,224.0,0x32,0x4e,0,1.0,1.0,1.0,0x1000,0,0,0);
          PolySquareYW(508.0,222.0,0x36,0x52,0x808080,alp_00,1.0,1.0,0x3000,0,0,0);
        }
        goto LAB_001ea100;
      }
      PolySquareYW(226.0,120.0,0xbc,0x11c,0,1.0,1.0,1.0,0x1000,0,0,0);
      pos_x = 220.0;
      pos_y = 114.0;
      bar_l = 200;
      bar_h = 0x128;
LAB_001ea058:
      PolySquareYW(pos_x,pos_y,bar_l,bar_h,0x808080,alp_00,1.0,1.0,0x3000,0,0,0);
    }
LAB_001ea100:
    iVar16 = iVar16 + 1;
    if (2 < iVar16) {
      iVar16 = 0;
      do {
        lVar3 = ((long)(int)local_cc | in_hi) + (long)(iVar16 * 6);
        puVar14 = (ushort *)lVar3;
        in_hi = (ulong)(int)((ulong)lVar3 >> 0x20);
        if (*puVar14 != 0xffff) {
          pMVar17 = mem_box;
          iVar12 = 0;
          iVar10 = 0;
          do {
            iVar12 = iVar12 + 1;
            if ((pMVar17->lod_id == -1) && (pMVar17->vrm_no == 0xffff)) {
              uVar5 = *puVar14;
              pMVar17->dsp_ok = 0xffff;
              pMVar17->lod_no = uVar5;
              if ((short)uVar5 < 0x32) {
                iVar10 = LoadReq((short)uVar5 + 0xcf,iVar10 + 0x1d573b0);
                pMVar17->lod_id = iVar10;
              }
              else {
                iVar10 = LoadReq((char)(&file2phot)[(short)(uVar5 - 0x32)] + 0xff,iVar10 + 0x1d573b0
                                );
                pMVar17->lod_id = iVar10;
              }
              break;
            }
            iVar10 = iVar10 + 0x10440;
            pMVar17 = pMVar17 + 1;
          } while (iVar12 < 3);
        }
        iVar16 = iVar16 + 1;
        if (2 < iVar16) {
          iVar16 = mem_box[0].lod_id;
          pMVar17 = mem_box;
          while( true ) {
            if ((iVar16 != -1) && (iVar16 = IsLoadEnd(iVar16), iVar16 != 0)) {
              uVar5 = pMVar17->lod_no;
              pMVar17->lod_no = 0xffff;
              pMVar17->dsp_ok = uVar5;
              pMVar17->lod_id = -1;
            }
            if (0x402bc7 < (int)(pMVar17 + 1)) break;
            iVar16 = pMVar17[1].lod_id;
            pMVar17 = pMVar17 + 1;
          }
          return;
        }
      } while( true );
    }
  } while( true );
}

static char AllVramTensoOK(char pht_num, DSP_BOX *dsp_box) {
	int i;
	short int dsp_ok;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &mem_box[0].lod_id;
  iVar4 = 0;
  iVar2 = 0x10000;
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    if (*piVar3 == -1) {
      iVar4 = iVar2 >> 0x10;
      iVar2 = iVar2 + 0x10000;
    }
    piVar3 = piVar3 + 6;
  } while (-1 < iVar1);
  return iVar4 == pht_num;
}

static short int TargetPhot(short int csr, short int no) {
	short int pht_no;
	short int load_pht;
	
  int iVar1;
  
  if (1 < ig_menu_wrk.file_num) {
    iVar1 = ((int)(short)csr + (int)(short)no + -1) * 0x10000 >> 0x10;
    if (iVar1 < 0) {
      iVar1 = ig_menu_wrk.file_num - 1;
    }
    if ((int)(ig_menu_wrk.file_num - 1) < iVar1) {
      iVar1 = 0;
    }
    return menu_dsp_file[iVar1];
  }
  if ((short)no != 1) {
    return 0xffff;
  }
  return menu_dsp_file[(short)csr];
}

static u_char DspPhot2D(u_long tex, u_char rt, short int px, short int py, short int sx, short int sy, u_char alp) {
	DISP_SPRT ds;
	
  uchar uVar1;
  DISP_SPRT ds;
  
  if (tex == 0xffffffffffffffff) {
    uVar1 = '\x01';
  }
  else if (alp == '\0') {
    uVar1 = '\x02';
  }
  else {
    CopySprDToSpr(&ds,(SPRT_DAT *)&DAT_0032bc50);
    ds.csx = (float)(int)(short)px;
    ds.csy = (float)(int)(short)py;
    ds.scw = (float)(int)(short)sx / 288.0;
    ds.sch = (float)(int)(short)sy / 192.0;
    ds.x = ds.csx - 144.0;
    ds.y = ds.csy - 96.0;
    ds.w = 0x120;
    ds.h = 0xc0;
    if (rt != '\0') {
      ds.rot = -90.0;
      ds.crx = ds.csx;
      ds.cry = ds.csy;
    }
    ds.pri = 0x5000;
    ds.z = 0xfffafff;
    ds.tex1 = 0x161;
    ds.tex0 = tex;
    ds.alpha = alp;
    DispSprD(&ds);
    uVar1 = '\0';
  }
  return uVar1;
}

static void DspBack2D(short int pht_no, u_char rt, short int px, short int py, short int sx, short int sy, u_char alp) {
  if (pht_no != 0xffff) {
    if (rt == '\0') {
      PolySquareYW((float)(int)(short)px - (float)(int)(short)sx * 0.5,
                   (float)(int)(short)py - (float)(int)(short)sy * 0.5,sx,sy,0,
                   (float)((int)(char)alp & 0xffU),1.0,1.0,0xa000,0,0,0);
    }
    else {
      PolySquareYW((float)(int)(short)px - (float)(int)(short)sy * 0.5,
                   (float)(int)(short)py - (float)(int)(short)sx * 0.5,sy,sx,0,
                   (float)((int)(char)alp & 0xffU),1.0,1.0,0xa000,0,0,0);
    }
  }
  return;
}

static void DspFileCmmn(short int pos_x, short int pos_y, short int alpha) {
  CmnWindow(9,pos_x,pos_y,(byte)alpha,0x80);
  return;
}

void PageInfo(u_char now, u_char all, short int pos_x, short int pos_y, u_char alpha) {
  ushort pos_y_00;
  uint uVar1;
  float alp;
  
  uVar1 = (int)(char)alpha & 0xff;
  alp = (float)uVar1;
  PolySquareYW((float)((short)pos_x + 0x110),(float)((short)pos_y + 0x192),0x11,2,0x808080,alp,1.0,
               1.0,0x19000,0,0,0);
  pos_y_00 = pos_y + 0x186;
  PutNumberYW(0,(int)(char)now & 0xff,pos_x + 0x123,pos_y_00,1.0,1.0,0x808080,(ushort)uVar1,0x19000,
              1,0);
  PutStringYW(0x15,1,pos_x + 0x13a,pos_y_00,0x808080,(byte)uVar1,0x19000,0);
  PutNumberYW(0,(int)(char)all & 0xff,pos_x + 0x147,pos_y_00,1.0,1.0,0x808080,(ushort)uVar1,0x19000,
              1,0);
  PolySquareYW((float)((short)pos_x + 0x161),(float)((short)pos_y + 0x192),0x11,2,0x808080,alp,1.0,
               1.0,0x19000,0,0,0);
  return;
}

void DokiDokiLetter(u_char level) {
	u_char musinon_tbl[6];
	u_short ketuatu_tbl[6];
	static u_char musinon = 0;
	static u_char sinpaku = 0;
	static u_short ketuatu = 0;
	
  uchar *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  uint uVar6;
  uchar musinon_tbl [6];
  short ketuatu_tbl [6];
  
  puVar1 = musinon_tbl + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | DAT_003571a8 >> (3 - uVar6) * 8;
  musinon_tbl._0_4_ = DAT_003571a8;
  musinon_tbl[4] = DAT_003571ac;
  musinon_tbl[5] = DAT_003571ad;
  uVar6 = (int)(char)level & 0xffU;
  if (5 < ((int)(char)level & 0xffU)) {
    uVar6 = 5;
  }
  uVar3 = (int)ketuatu_tbl + 7U & 7;
  puVar4 = (ulong *)(((int)ketuatu_tbl + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_00350a60 >> (7 - uVar3) * 8;
  ketuatu_tbl._0_8_ = DAT_00350a60;
  uVar3 = (int)ketuatu_tbl + 0xbU & 3;
  puVar5 = (uint *)(((int)ketuatu_tbl + 0xbU) - uVar3);
  *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | DAT_00350a68 >> (3 - uVar3) * 8;
  ketuatu_tbl._8_4_ = DAT_00350a68;
  if (uVar6 != 0) {
    if (sinpaku_214 == '\0') {
      bVar2 = musinon_213 == '\0';
      musinon_213 = musinon_213 + 0xff;
      if (bVar2) {
        musinon_213 = musinon_tbl[uVar6];
        ketuatu_215 = ketuatu_tbl[uVar6];
        sinpaku_214 = '\x12';
      }
    }
    else {
      if (sinpaku_214 == '\x12') {
        SeStartFix(0xf,0,0x1000,0x1000,1);
      }
      sinpaku_214 = sinpaku_214 + -1;
      VibrateRequest2(0,ketuatu_215);
    }
  }
  return;
}

void RelationShip() {
  char cVar1;
  int iVar2;
  
  switch(file_rel.step) {
  case '\0':
    file_rel.load_id = LoadReq(0x53,0x1d88100);
    file_rel.load_id = LoadReq(0x65,0x1e90000);
    file_rel.step = '\x01';
    break;
  case '\x01':
    iVar2 = IsLoadEnd(file_rel.load_id);
    if (iVar2 != 0) {
      file_rel.step = '\x02';
    }
    break;
  case '\x02':
    SetSprFile(0x1d88100);
    cVar1 = TateizFreeSpace();
    if (cVar1 != '\0') {
      file_rel.step = '\x03';
      file_rel.load_id = LoadReq(0x52,0x1e90000);
      file_rel.load_id = LoadReq(0x4a,0x1d88100);
    }
    break;
  case '\x03':
    iVar2 = IsLoadEnd(file_rel.load_id);
    if (iVar2 != 0) {
      file_rel.step = '\x04';
    }
    break;
  case '\x04':
    ig_menu_wrk.mode = '\x03';
  }
  return;
}

static char TateizFreeSpace() {
	int ret_num;
	DISP_SPRT ds;
	
  char cVar1;
  int iVar2;
  RELATION_PRT *r_prt;
  RELATION_DAT *r_dat;
  RELATION_YAJI *r_yaj;
  DISP_SPRT ds;
  
  iVar2 = 0;
  if (rel_csr.init_switch == 0) {
    RelationMapInit();
    rel_csr.init_switch = 1;
  }
  RelAtributeChg();
  RelComAtributeChg();
  if (((rel_csr.attribute & 2) == 0) && (iVar2 = ButtonManager(), iVar2 == 1)) {
    return '\x01';
  }
  if ((rel_csr.attribute & 1) == 0) {
    MoveBeyondData();
    MoveBeyondGroup();
    RelMapScroolY(rel_csr.now_prt);
  }
  RelDspBackGrd();
  r_prt = (RELATION_PRT *)&rel_prt;
  do {
    if (rel_csr.now_prt == r_prt) {
      RelDspPrtFla(r_prt);
    }
    else {
      RelDspPrt(r_prt);
    }
    r_prt = r_prt + 1;
  } while (r_prt < (RELATION_PRT *)0x33e64c);
  r_dat = (RELATION_DAT *)&rel_dat;
  do {
    RelationDispDat(r_dat);
    r_dat = r_dat + 1;
  } while (r_dat < (RELATION_DAT *)&rel_yaj);
  if ((rel_csr.attribute & 1) != 0) {
    RelationDispMsg(rel_csr.now_dat);
  }
  r_yaj = (RELATION_YAJI *)&rel_yaj;
  do {
    RelDspYajirusi(r_yaj);
    r_yaj = r_yaj + 1;
  } while (r_yaj < (RELATION_YAJI *)0x33f01c);
  RelDspComment();
  cVar1 = '\x01';
  if (iVar2 != 1) {
    cVar1 = (char)iVar2;
  }
  return cVar1;
}

void RelationMapInit() {
	int i;
	
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_0033e052;
  do {
    *puVar1 = 2;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x12;
  } while (uVar2 < 0x1d);
  uVar2 = 0;
  puVar1 = &DAT_0033e676;
  do {
    *puVar1 = 2;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x18;
  } while (uVar2 < 0x20);
  rel_csr.load_id = 0xffff;
  rel_csr.offx = 0;
  rel_csr.now_prt = (RELATION_PRT *)PTR_rel_prt_0033e660;
  rel_csr.now_dat = (RELATION_DAT *)&rel_dat;
  rel_csr.attribute = 0;
  rel_csr.offy = 0;
  rel_csr.mode = 0;
  RelAtributeChg();
  return;
}

void RelAtributeChg() {
	int i;
	int j;
	int k;
	
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  iVar7 = 0;
  do {
    uVar8 = 0;
    if ((&exp_table)[iVar7] != -1) {
      iVar5 = 0;
      iVar3 = iVar7;
      do {
        cVar1 = (&exp_table)[iVar3];
        if (cVar1 == -2) {
          pcVar6 = &exp_table + iVar5 + iVar7;
          (&DAT_0033e676)[uVar9 * 0x18] = 0;
          (&DAT_0033e678)[(short)(&DAT_0033e674)[uVar9 * 0x18] * 0x18] =
               (&DAT_0033e678)[uVar9 * 0x18];
          do {
            pcVar6 = pcVar6 + 2;
            iVar5 = iVar5 + 2;
          } while (*pcVar6 != -1);
          lVar4 = (long)(char)(&DAT_0033dc81)[iVar5 + iVar7];
          if (0 < lVar4) {
            puVar2 = &DAT_0033e676 + uVar9 * 0x18 + (char)(&DAT_0033dc81)[iVar5 + iVar7] * -0x18;
            do {
              *puVar2 = 1;
              lVar4 = (long)((int)lVar4 + -1);
              puVar2 = puVar2 + 0x18;
            } while (0 < lVar4);
          }
          break;
        }
        if (cVar1 != -4) {
          if (poss_file[cVar1][(char)(&DAT_0033dc81)[iVar3]] != '\x03') goto LAB_001eaee8;
          (&DAT_0033e676)[uVar9 * 0x18] = 0;
          (&DAT_0033e678)[(short)(&DAT_0033e674)[uVar9 * 0x18] * 0x18] =
               (&DAT_0033e678)[uVar9 * 0x18];
          if (cVar1 != -1) {
            pcVar6 = &exp_table + iVar5 + iVar7;
            do {
              pcVar6 = pcVar6 + 2;
              iVar5 = iVar5 + 2;
            } while (*pcVar6 != -1);
          }
          lVar4 = (long)(char)(&DAT_0033dc81)[iVar5 + iVar7];
          if (0 < lVar4) {
            puVar2 = &DAT_0033e676 + uVar9 * 0x18 + (char)(&DAT_0033dc81)[iVar5 + iVar7] * -0x18;
            do {
              *puVar2 = 1;
              lVar4 = (long)((int)lVar4 + -1);
              puVar2 = puVar2 + 0x18;
            } while (0 < lVar4);
          }
          break;
        }
        if (((long)(char)(&DAT_0033dc81)[iVar3] <= (long)(ulong)ingame_wrk.msn_no) ||
           (ingame_wrk.clear_count != 0)) {
          pcVar6 = &exp_table + iVar5 + iVar7;
          (&DAT_0033e676)[uVar9 * 0x18] = 0;
          (&DAT_0033e678)[(short)(&DAT_0033e674)[uVar9 * 0x18] * 0x18] =
               (&DAT_0033e678)[uVar9 * 0x18];
          do {
            pcVar6 = pcVar6 + 2;
            iVar5 = iVar5 + 2;
          } while (*pcVar6 != -1);
          lVar4 = (long)(char)(&DAT_0033dc81)[iVar5 + iVar7];
          if (0 < lVar4) {
            puVar2 = &DAT_0033e676 + uVar9 * 0x18 + (char)(&DAT_0033dc81)[iVar5 + iVar7] * -0x18;
            do {
              *puVar2 = 1;
              lVar4 = (long)((int)lVar4 + -1);
              puVar2 = puVar2 + 0x18;
            } while (0 < lVar4);
          }
          break;
        }
LAB_001eaee8:
        uVar8 = uVar8 + 1;
        iVar5 = uVar8 * 2;
      } while ((uVar8 < 8) && (iVar3 = iVar5 + iVar7, (&exp_table)[iVar5 + iVar7] != -1));
    }
    uVar9 = uVar9 + 1;
    iVar7 = uVar9 * 0x10;
    if (0x1f < uVar9) {
      return;
    }
  } while( true );
}

void RelComAtributeChg() {
	int i;
	int j;
	int k;
	
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  iVar7 = 0;
  do {
    uVar9 = 0;
    if ((&hum_table)[iVar7] != -1) {
      iVar3 = 0;
      iVar4 = iVar7;
      do {
        cVar1 = (&hum_table)[iVar4];
        if (cVar1 == -2) {
          (&DAT_0033e052)[uVar8 * 0x12] = 0;
          pcVar6 = &hum_table + iVar3 + iVar7;
          do {
            pcVar6 = pcVar6 + 2;
            iVar3 = iVar3 + 2;
          } while (*pcVar6 != -1);
          lVar5 = (long)(char)(&DAT_0033de81)[iVar3 + iVar7];
          if (0 < lVar5) {
            puVar2 = &DAT_0033e052 + uVar8 * 0x12 + (char)(&DAT_0033de81)[iVar3 + iVar7] * -0x12;
            do {
              *puVar2 = 1;
              lVar5 = (long)((int)lVar5 + -1);
              puVar2 = puVar2 + 0x12;
            } while (0 < lVar5);
          }
          break;
        }
        if (cVar1 != -4) {
          if (poss_file[cVar1][(char)(&DAT_0033de81)[iVar4]] != '\x03') goto LAB_001eb1b8;
          (&DAT_0033e052)[uVar8 * 0x12] = 0;
          if (cVar1 != -1) {
            pcVar6 = &hum_table + iVar3 + iVar7;
            do {
              pcVar6 = pcVar6 + 2;
              iVar3 = iVar3 + 2;
            } while (*pcVar6 != -1);
          }
          lVar5 = (long)(char)(&DAT_0033de81)[iVar3 + iVar7];
          if (0 < lVar5) {
            puVar2 = &DAT_0033e052 + uVar8 * 0x12 + (char)(&DAT_0033de81)[iVar3 + iVar7] * -0x12;
            do {
              *puVar2 = 1;
              lVar5 = (long)((int)lVar5 + -1);
              puVar2 = puVar2 + 0x12;
            } while (0 < lVar5);
          }
          break;
        }
        if (((long)(char)(&DAT_0033de81)[iVar4] <= (long)(ulong)ingame_wrk.msn_no) ||
           (ingame_wrk.clear_count != 0)) {
          (&DAT_0033e052)[uVar8 * 0x12] = 0;
          pcVar6 = &hum_table + iVar3 + iVar7;
          do {
            pcVar6 = pcVar6 + 2;
            iVar3 = iVar3 + 2;
          } while (*pcVar6 != -1);
          lVar5 = (long)(char)(&DAT_0033de81)[iVar3 + iVar7];
          if (0 < lVar5) {
            puVar2 = &DAT_0033e052 + uVar8 * 0x12 + (char)(&DAT_0033de81)[iVar3 + iVar7] * -0x12;
            do {
              *puVar2 = 1;
              lVar5 = (long)((int)lVar5 + -1);
              puVar2 = puVar2 + 0x12;
            } while (0 < lVar5);
          }
          break;
        }
LAB_001eb1b8:
        uVar9 = uVar9 + 1;
        iVar3 = uVar9 * 2;
      } while ((uVar9 < 8) && (iVar4 = iVar3 + iVar7, (&hum_table)[iVar3 + iVar7] != -1));
    }
    uVar8 = uVar8 + 1;
    iVar7 = uVar8 * 0x10;
    if (0x1c < uVar8) {
      return;
    }
  } while( true );
}

void MoveBeyondData() {
  RELATION_DAT *pRVar1;
  short sVar2;
  ushort uVar3;
  
  if ((*key_now[2] == 1) ||
     ((((0x19 < (ushort)*key_now[2] && ((uint)(ushort)*key_now[2] % 5 == 1)) ||
       (sVar2 = Ana2PadDirCnt('\x03'), sVar2 == 1)) ||
      ((uVar3 = Ana2PadDirCnt('\x03'), 0x19 < uVar3 &&
       (sVar2 = Ana2PadDirCnt('\x03'), (int)sVar2 % 5 == 1)))))) {
    pRVar1 = (rel_csr.now_dat)->left_p;
    if ((pRVar1 != (RELATION_DAT *)0x0) && (pRVar1->attribute != 2)) {
      rel_csr.now_dat = pRVar1;
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
  }
  else if ((((*key_now[3] == 1) ||
            ((0x19 < (ushort)*key_now[3] && ((uint)(ushort)*key_now[3] % 5 == 1)))) ||
           (sVar2 = Ana2PadDirCnt('\x01'), sVar2 == 1)) ||
          ((uVar3 = Ana2PadDirCnt('\x01'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\x01'), (int)sVar2 % 5 == 1)))) {
    pRVar1 = (rel_csr.now_dat)->right_p;
    if ((pRVar1 != (RELATION_DAT *)0x0) && (pRVar1->attribute != 2)) {
      rel_csr.now_dat = pRVar1;
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
  }
  else if (((*key_now[0] == 1) ||
           (((0x19 < (ushort)*key_now[0] && ((uint)(ushort)*key_now[0] % 5 == 1)) ||
            (sVar2 = Ana2PadDirCnt('\0'), sVar2 == 1)))) ||
          ((uVar3 = Ana2PadDirCnt('\0'), 0x19 < uVar3 &&
           (sVar2 = Ana2PadDirCnt('\0'), (int)sVar2 % 5 == 1)))) {
    pRVar1 = (rel_csr.now_dat)->up_p;
    if ((pRVar1 != (RELATION_DAT *)0x0) && (pRVar1->attribute != 2)) {
      rel_csr.now_dat = pRVar1;
      SeStartFix(0,0,0x1000,0x1000,1);
      return;
    }
  }
  else if (((((*key_now[1] == 1) ||
             ((0x19 < (ushort)*key_now[1] && ((uint)(ushort)*key_now[1] % 5 == 1)))) ||
            (sVar2 = Ana2PadDirCnt('\x02'), sVar2 == 1)) ||
           ((uVar3 = Ana2PadDirCnt('\x02'), 0x19 < uVar3 &&
            (sVar2 = Ana2PadDirCnt('\x02'), (int)sVar2 % 5 == 1)))) &&
          ((pRVar1 = (rel_csr.now_dat)->down_p, pRVar1 != (RELATION_DAT *)0x0 &&
           (pRVar1->attribute != 2)))) {
    rel_csr.now_dat = pRVar1;
    SeStartFix(0,0,0x1000,0x1000,1);
    return;
  }
  return;
}

void MoveBeyondGroup() {
	int i;
	RELATION_PRT *temp_prt;
	
  ushort uVar1;
  RELATION_DAT *pRVar2;
  ushort *puVar3;
  uint uVar4;
  
  if (*key_now[8] != 1) {
    if (*key_now[10] != 1) {
      return;
    }
    rel_csr.now_prt = (rel_csr.now_prt)->right_prt;
    if (((short)(ushort)ingame_wrk.msn_no < (short)(rel_csr.now_prt)->mission_no) &&
       (ingame_wrk.clear_count == 0)) {
      do {
        rel_csr.now_prt = (rel_csr.now_prt)->right_prt;
      } while ((short)(ushort)ingame_wrk.msn_no < (short)(rel_csr.now_prt)->mission_no);
    }
    uVar4 = 0;
    puVar3 = (rel_csr.now_prt)->st_index;
    do {
      uVar1 = *puVar3;
      if (uVar1 == 0xffff) {
        pRVar2 = (RELATION_DAT *)(&rel_dat + (short)(rel_csr.now_prt)->st_index[0] * 0x30);
        break;
      }
      pRVar2 = (RELATION_DAT *)(&rel_dat + (short)uVar1 * 0x30);
      if ((&DAT_0033e676)[(short)uVar1 * 0x18] != 2) break;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      pRVar2 = rel_csr.now_dat;
    } while (uVar4 < 4);
    rel_csr.now_dat = pRVar2;
    if (uVar4 == 4) {
      rel_csr.now_dat = (RELATION_DAT *)(&rel_dat + (short)(rel_csr.now_prt)->st_index[0] * 0x30);
    }
    rel_csr.attribute = rel_csr.attribute | 2;
    SeStartFix(0,0,0x1000,0x1000,1);
    return;
  }
  rel_csr.now_prt = (rel_csr.now_prt)->left_prt;
  if (((short)(ushort)ingame_wrk.msn_no < (short)(rel_csr.now_prt)->mission_no) &&
     (ingame_wrk.clear_count == 0)) {
    do {
      rel_csr.now_prt = (rel_csr.now_prt)->left_prt;
    } while ((short)(ushort)ingame_wrk.msn_no < (short)(rel_csr.now_prt)->mission_no);
  }
  uVar4 = 0;
  puVar3 = (rel_csr.now_prt)->st_index;
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0xffff) {
      pRVar2 = (RELATION_DAT *)(&rel_dat + (short)(rel_csr.now_prt)->st_index[0] * 0x30);
      break;
    }
    pRVar2 = (RELATION_DAT *)(&rel_dat + (short)uVar1 * 0x30);
    if ((&DAT_0033e676)[(short)uVar1 * 0x18] != 2) break;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
    pRVar2 = rel_csr.now_dat;
  } while (uVar4 < 4);
  rel_csr.now_dat = pRVar2;
  if (uVar4 == 4) {
    rel_csr.now_dat = (RELATION_DAT *)(&rel_dat + (short)(rel_csr.now_prt)->st_index[0] * 0x30);
  }
  rel_csr.attribute = rel_csr.attribute | 2;
  SeStartFix(0,0,0x1000,0x1000,1);
  return;
}

void RelMapScroolX(RELATION_DAT *r_dat) {
  short sVar1;
  SPRT_DAT *pSVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  
  pSVar2 = r_dat->parent_p->ssd_p;
  iVar3 = pSVar2->x;
  lVar5 = (long)(int)(iVar3 + (((ushort)pSVar2->w >> 1) - 0x140));
  if ((short)rel_csr.offx < lVar5) {
    uVar4 = (ushort)pSVar2->w >> 1;
    if ((int)(short)(rel_csr.offx + 8) < (int)(iVar3 + (uVar4 - 0x140))) {
      rel_csr.offx = rel_csr.offx + 8;
      return;
    }
    sVar1 = *(short *)&pSVar2->x;
  }
  else {
    if ((short)rel_csr.offx <= lVar5) {
      return;
    }
    uVar4 = (ushort)pSVar2->w >> 1;
    if ((int)(iVar3 + (uVar4 - 0x140)) < (int)(short)(rel_csr.offx - 8)) {
      rel_csr.offx = rel_csr.offx - 8;
      return;
    }
    sVar1 = *(short *)&pSVar2->x;
  }
  rel_csr.offx = sVar1 + (uVar4 - 0x140);
  return;
}

void RelMapScroolY(RELATION_PRT *r_prt) {
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)(0xe0 - r_prt->csr_y);
  if (lVar2 < (short)rel_csr.offy) {
    bVar1 = lVar2 < (int)(short)(rel_csr.offy - 8);
    rel_csr.offy = rel_csr.offy - 8;
  }
  else {
    if (lVar2 <= (short)rel_csr.offy) {
      rel_csr.attribute = rel_csr.attribute & 0xfffd;
      return;
    }
    bVar1 = (int)(short)(rel_csr.offy + 8) < lVar2;
    rel_csr.offy = rel_csr.offy + 8;
  }
  if (bVar1) {
    return;
  }
  rel_csr.offy = 0xe0 - *(short *)&r_prt->csr_y;
  rel_csr.attribute = rel_csr.attribute & 0xfffd;
  return;
}

int ButtonManager() {
	int ret_num;
	
  bool bVar1;
  uint uVar2;
  
  if (((*key_now[6] == 1) || (*key_now[5] == 1)) && ((rel_csr.now_dat)->attribute != 2)) {
    rel_csr.mode = 0;
    rel_csr.attribute = rel_csr.attribute ^ 1;
    SeStartFix(1,0,0x1000,0x1000,1);
  }
  uVar2 = 0;
  if (*key_now[4] == 1) {
    bVar1 = (rel_csr.attribute & 1) == 0;
    if (bVar1) {
      rel_csr.init_switch = 0;
    }
    else {
      rel_csr.mode = 0;
      rel_csr.attribute = rel_csr.attribute ^ 1;
    }
    uVar2 = (uint)bVar1;
    SeStartFix(3,0,0x1000,0x1000,1);
  }
  return uVar2;
}

void RelationDispDat(RELATION_DAT *r_dat) {
	SPRT_DAT ssd;
	DISP_SPRT ds;
	
  ushort uVar1;
  SPRT_DAT *pSVar2;
  RELATION_NAME_PLATE *pRVar3;
  int iVar4;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  
  uVar1 = r_dat->attribute;
  if (r_dat->attribute != 2) {
    if (rel_csr.now_dat == r_dat) {
      pSVar2 = r_dat->fla_p;
      ssd.tex0 = pSVar2->tex0;
      ssd._8_8_ = *(ulong *)&pSVar2->u;
      ssd._24_8_ = *(undefined8 *)&pSVar2->pri;
      ssd.x = (int)*(undefined8 *)&pSVar2->x;
      ssd.y = (int)((ulong)*(undefined8 *)&pSVar2->x >> 0x20);
      ssd._16_8_ = CONCAT44(ssd.y + (short)r_dat->plate_p->y + (int)(short)rel_csr.offy,
                            ssd.x + (short)r_dat->plate_p->x);
      CopySprDToSpr(&ds,&ssd);
      ds.tex1 = 0x161;
      DispSprD(&ds);
      pSVar2 = r_dat->fla_p;
      ssd.tex0 = pSVar2[1].tex0;
      ssd._8_8_ = *(ulong *)&pSVar2[1].u;
      ssd._24_8_ = *(undefined8 *)&pSVar2[1].pri;
      ssd.x = (int)*(undefined8 *)&pSVar2[1].x;
      ssd.y = (int)((ulong)*(undefined8 *)&pSVar2[1].x >> 0x20);
      ssd._16_8_ = CONCAT44(ssd.y + (short)r_dat->plate_p->y + (int)(short)rel_csr.offy,
                            ssd.x + (short)r_dat->plate_p->x);
      CopySprDToSpr(&ds,&ssd);
      ds.tex1 = 0x161;
      ds.att = ds.att | 2;
      DispSprD(&ds);
      uVar1 = r_dat->attribute;
    }
    if (uVar1 != 1) {
      pSVar2 = r_dat->ssd_p;
      ssd.tex0 = pSVar2->tex0;
      ssd._8_8_ = *(ulong *)&pSVar2->u;
      ssd._24_8_ = *(undefined8 *)&pSVar2->pri;
      ssd.x = (int)*(undefined8 *)&pSVar2->x;
      ssd.y = (int)((ulong)*(undefined8 *)&pSVar2->x >> 0x20);
      ssd._16_8_ = CONCAT44(ssd.y + (short)r_dat->plate_p->y + (int)(short)rel_csr.offy,
                            ssd.x + (short)r_dat->plate_p->x + (int)(short)rel_csr.offx);
      CopySprDToSpr(&ds,&ssd);
      if (r_dat != (RELATION_DAT *)0x33eb60) {
        ds.r = 0;
        ds.g = 0;
        ds.b = 0;
      }
      ds.tex1 = 0x161;
      DispSprD(&ds);
      pSVar2 = r_dat->ssd_p;
      ssd.tex0 = pSVar2[1].tex0;
      ssd._8_8_ = *(ulong *)&pSVar2[1].u;
      ssd._24_8_ = *(undefined8 *)&pSVar2[1].pri;
      ssd.x = (int)*(undefined8 *)&pSVar2[1].x;
      ssd.y = (int)((ulong)*(undefined8 *)&pSVar2[1].x >> 0x20);
      ssd._16_8_ = CONCAT44(ssd.y + (short)r_dat->plate_p->y + (int)(short)rel_csr.offy,
                            ssd.x + -1 + (int)(short)r_dat->plate_p->x + (int)(short)rel_csr.offx);
      CopySprDToSpr(&ds,&ssd);
      if (r_dat != (RELATION_DAT *)0x33eb60) {
        ds.r = 0;
        ds.g = 0;
        ds.b = 0;
      }
      ds.tex1 = 0x161;
      ds.att = ds.att | 2;
      DispSprD(&ds);
      pSVar2 = r_dat->fnt_p;
      pRVar3 = r_dat->plate_p;
      ssd.tex0 = pSVar2->tex0;
      ssd._24_8_ = *(undefined8 *)&pSVar2->pri;
      ssd.x = (int)*(undefined8 *)&pSVar2->x;
      ssd.y = (int)((ulong)*(undefined8 *)&pSVar2->x >> 0x20);
      ssd._8_8_ = *(ulong *)&pSVar2->u & 0xffffffff00000000 | (ulong)*(uint *)&pRVar3->u;
      ssd._16_8_ = CONCAT44(ssd.y + (short)pRVar3->y + (int)(short)rel_csr.offy,
                            ssd.x + (short)pRVar3->x + (int)(short)rel_csr.offx);
      CopySprDToSpr(&ds,&ssd);
      DispSprD(&ds);
      pRVar3 = r_dat->plate_p;
      iVar4 = (short)pRVar3->tbl_no * 0x20;
      ssd.tex0 = *(ulong *)(&spr_dat + iVar4);
      ssd._24_8_ = *(undefined8 *)(&DAT_00329888 + iVar4);
      ssd.x = (int)*(undefined8 *)(&DAT_00329880 + iVar4);
      ssd.y = (int)((ulong)*(undefined8 *)(&DAT_00329880 + iVar4) >> 0x20);
      ssd._8_8_ = *(ulong *)(&DAT_00329878 + iVar4) & 0xffffffff00000000 |
                  (ulong)*(uint *)&pRVar3->exp_u;
      ssd._16_8_ = CONCAT44(ssd.y + (short)pRVar3->y + (int)(short)rel_csr.offy,
                            ssd.x + (short)pRVar3->x + (int)(short)rel_csr.offx);
      CopySprDToSpr(&ds,&ssd);
      DispSprD(&ds);
    }
  }
  return;
}

void RelDspYajirusi(RELATION_YAJI *r_yaj) {
	float temp_x1;
	float temp_y1;
	float temp_x2;
	float temp_y2;
	float temp_x3;
	float temp_y3;
	u_char yaj_r;
	int yaj_pri;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  uchar r;
  float in_f21;
  float unaff_f20;
  float in_f23;
  float unaff_f22;
  float in_f25;
  float unaff_f24;
  
  iVar3 = (short)r_yaj->com_idx * 0x24;
  if ((&DAT_0033e052)[(short)r_yaj->com_idx * 0x12] != 2) {
    if ((rel_csr.now_dat == (RELATION_DAT *)(&rel_dat + *(short *)(&DAT_0033e06c + iVar3) * 0x30))
       || (rel_csr.now_dat == (RELATION_DAT *)(&rel_dat + *(short *)(&DAT_0033e06e + iVar3) * 0x30))
       ) {
      r = 0x80;
      iVar3 = 0x14000;
    }
    else {
      r = '\0';
      iVar3 = 0x19000;
    }
    uVar1 = r_yaj->attribute;
    if ((uVar1 & 1) != 0) {
      unaff_f20 = (float)((short)r_yaj->x1 + -0x140);
      in_f21 = (float)((int)(short)r_yaj->y1 + (int)(short)rel_csr.offy + -0xe0);
      SetSquareS(iVar3,unaff_f20,in_f21,unaff_f20 + (float)(int)(short)r_yaj->len,in_f21 + 2.0,r,
                 '\0','\0',0x80);
      uVar1 = r_yaj->attribute;
    }
    if ((uVar1 & 2) != 0) {
      unaff_f20 = (float)((short)r_yaj->x1 + -0x140);
      in_f21 = (float)((int)(short)r_yaj->y1 + (int)(short)rel_csr.offy + -0xe0);
      SetSquareS(iVar3,unaff_f20,in_f21,unaff_f20 + 2.0,in_f21 + (float)(int)(short)r_yaj->len,r,
                 '\0','\0',0x80);
      uVar1 = r_yaj->attribute;
    }
    if ((uVar1 & 0x3c) != 0) {
      if ((uVar1 & 4) != 0) {
        in_f21 = (float)((int)(short)r_yaj->y1 + (int)(short)rel_csr.offy + -0xe0);
        unaff_f20 = (float)((short)r_yaj->x1 + -0x145);
        in_f25 = unaff_f20 + 4.0;
        unaff_f22 = unaff_f20 + 9.0 + 1.0;
        unaff_f24 = (in_f21 - 14.0) - 1.0;
        in_f23 = in_f21;
      }
      if ((uVar1 & 8) != 0) {
        in_f21 = (float)((int)(short)r_yaj->y1 + (int)(short)rel_csr.offy + -0xe0);
        unaff_f20 = (float)((short)r_yaj->x1 + -0x145);
        in_f25 = unaff_f20 + 4.0;
        unaff_f22 = unaff_f20 + 9.0 + 1.0;
        unaff_f24 = in_f21 + 14.0 + 1.0;
        in_f23 = in_f21;
      }
      if ((uVar1 & 0x10) != 0) {
        unaff_f20 = (float)((short)r_yaj->x1 + -0x140);
        iVar2 = (int)(short)r_yaj->y1 + (int)(short)rel_csr.offy;
        in_f21 = (float)(iVar2 + -0xe4);
        unaff_f24 = (float)(iVar2 + -0xe0);
        in_f25 = unaff_f20 - 14.0;
        in_f23 = in_f21 + 9.0;
        unaff_f22 = unaff_f20;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar2 = (int)(short)r_yaj->y1 + (int)(short)rel_csr.offy;
        unaff_f20 = (float)((short)r_yaj->x1 + -0x140);
        in_f21 = (float)(iVar2 + -0xe4);
        unaff_f24 = (float)(iVar2 + -0xe0);
        in_f23 = in_f21 + 9.0;
        in_f25 = unaff_f20 + 14.0;
        unaff_f22 = unaff_f20;
      }
      SetTriangle(iVar3,unaff_f20,in_f21,unaff_f22,in_f23,in_f25,unaff_f24,r,'\0','\0',0x80);
    }
  }
  return;
}

void RelDspComment() {
	int i;
	int j;
	int l;
	int disp_flg;
	SPRT_DAT ssd;
	DISP_SPRT ds;
	
  long lVar1;
  uint uVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  uint uVar8;
  ulong in_hi;
  ulong uVar9;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  uint local_c0;
  
  local_c0 = 0;
  do {
    uVar8 = 0;
    bVar3 = false;
    lVar1 = (in_hi | 0x33e050) + (long)(int)(local_c0 * 0x24);
    uVar2 = (uint)((ulong)lVar1 >> 0x20);
    in_hi = (ulong)(int)uVar2;
    if (1 < *(ushort *)((int)lVar1 + 2) - 1) {
      lVar1 = (long)(int)(uVar2 | 0x33e06c) + (long)(int)(local_c0 * 0x24);
      psVar4 = (short *)lVar1;
      uVar9 = (ulong)(int)((ulong)lVar1 >> 0x20);
      iVar5 = 1;
      do {
        uVar9 = uVar9 & 0xffffffff00000000;
        if ((*psVar4 != -1) && (rel_csr.now_dat == (RELATION_DAT *)(&rel_dat + *psVar4 * 0x30))) {
          bVar3 = true;
        }
        iVar5 = iVar5 + -1;
        psVar4 = psVar4 + 1;
      } while (-1 < iVar5);
      if (bVar3) {
        in_hi = uVar9 | (uint)((int)(local_c0 * 0x24) >> 0x1f);
        if ((&PTR_DAT_0033e054)[local_c0 * 9] != (undefined *)0x0) {
          in_hi = uVar9 | (uint)((int)(local_c0 * 0x24) >> 0x1f);
          ppuVar7 = (ulong **)(&PTR_DAT_0033e054 + local_c0 * 9);
          psVar4 = &DAT_0033e064 + local_c0 * 0x12;
          puVar6 = *ppuVar7;
          while( true ) {
            ssd.tex0 = *puVar6;
            ssd._8_8_ = puVar6[1];
            ssd.x = (int)puVar6[2];
            ssd.y = (int)(puVar6[2] >> 0x20);
            ssd.x = ssd.x + (short)rel_csr.offx;
            ssd.y = ssd.y + (short)rel_csr.offy;
            ssd._28_4_ = (uint)(puVar6[3] >> 0x20) & 0xffffff00 | 0x80;
            ssd._24_8_ = CONCAT44(ssd._28_4_,0x18000);
            CopySprDToSpr(&ds,&ssd);
            if (*(short *)(&flip_table + *psVar4 * 2) != 0) {
              ds.crx = (float)ssd.x;
              ds.rot = 90.0;
              ds.cry = (float)ssd.y;
            }
            uVar8 = uVar8 + 1;
            DispSprD(&ds);
            ppuVar7 = ppuVar7 + 1;
            psVar4 = psVar4 + 1;
            if ((3 < uVar8) || (*ppuVar7 == (ulong *)0x0)) break;
            puVar6 = *ppuVar7;
          }
        }
      }
      else {
        in_hi = uVar9 | (uint)((int)(local_c0 * 0x24) >> 0x1f);
        if ((&PTR_DAT_0033e054)[local_c0 * 9] != (undefined *)0x0) {
          in_hi = uVar9 | (uint)((int)(local_c0 * 0x24) >> 0x1f);
          ppuVar7 = (ulong **)(&PTR_DAT_0033e054 + local_c0 * 9);
          psVar4 = &DAT_0033e064 + local_c0 * 0x12;
          puVar6 = *ppuVar7;
          while( true ) {
            ssd.tex0 = *puVar6;
            ssd._8_8_ = puVar6[1];
            ssd.x = (int)puVar6[2];
            ssd.y = (int)(puVar6[2] >> 0x20);
            ssd.x = ssd.x + (short)rel_csr.offx;
            ssd.y = ssd.y + (short)rel_csr.offy;
            ssd._28_4_ = (uint)(puVar6[3] >> 0x20) & 0xffffff00 | 0x30;
            ssd._24_8_ = CONCAT44(ssd._28_4_,0x19000);
            CopySprDToSpr(&ds,&ssd);
            ds.r = 0xff;
            ds.g = 0xff;
            ds.b = 0xff;
            if (*(short *)(&flip_table + *psVar4 * 2) != 0) {
              ds.crx = (float)ssd.x;
              ds.cry = (float)ssd.y;
              ds.rot = 90.0;
            }
            uVar8 = uVar8 + 1;
            DispSprD(&ds);
            ppuVar7 = ppuVar7 + 1;
            psVar4 = psVar4 + 1;
            if ((3 < uVar8) || (*ppuVar7 == (ulong *)0x0)) break;
            puVar6 = *ppuVar7;
          }
        }
      }
    }
    local_c0 = local_c0 + 1;
  } while (local_c0 < 0x1d);
  return;
}

void RelDspPrtFla(RELATION_PRT *r_prt) {
	int i;
	int j;
	int scl_flg;
	float scl_tmpx;
	float scl_tmpy;
	SPRT_DAT ssd;
	DISP_SPRT ds;
	
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  
  iVar6 = 0;
  if (r_prt->attribute != 1) {
    if ((short)(ushort)ingame_wrk.msn_no < (short)r_prt->mission_no) {
      if (ingame_wrk.clear_count == 0) {
        return;
      }
      uVar1 = r_prt->start_no;
    }
    else {
      uVar1 = r_prt->start_no;
    }
    lVar5 = (long)(short)uVar1;
    if (lVar5 <= (short)r_prt->end_no) {
      do {
        iVar4 = (int)lVar5;
        iVar3 = iVar4 * 0x20;
        ssd.x = (int)*(undefined8 *)(&DAT_00329880 + iVar3);
        ssd.y = (int)((ulong)*(undefined8 *)(&DAT_00329880 + iVar3) >> 0x20);
        ssd.x = ssd.x + (short)rel_csr.offx;
        ssd._24_8_ = *(undefined8 *)(&DAT_00329888 + iVar3);
        ssd.tex0 = *(ulong *)(&spr_dat + iVar3);
        ssd.y = ssd.y + (short)rel_csr.offy;
        ssd._8_8_ = *(undefined8 *)(&DAT_00329878 + iVar3);
        CopySprDToSpr(&ds,&ssd);
        fVar8 = 1.0;
        uVar1 = r_prt->wk_scl[iVar6][0];
        ds.att = ds.att | *(ushort *)(&flip_table + iVar4 * 2);
        ds.tex1 = 0x161;
        fVar7 = fVar8;
        if (uVar1 != 0) {
          fVar7 = (float)(uint)(ushort)r_prt->ssd_p->w;
          fVar7 = ((float)(int)(short)uVar1 + fVar7) / fVar7;
        }
        uVar2 = r_prt->wk_scl[iVar6][1];
        if (uVar2 != 0) {
          fVar8 = (float)(uint)(ushort)r_prt->ssd_p->h;
          fVar8 = ((float)(int)(short)uVar2 + fVar8) / fVar8;
        }
        if (uVar2 != 0 || uVar1 != 0) {
          ds.csx = (float)(ssd.x + (uint)((ushort)ssd.w >> 1));
          ds.csy = (float)(ssd.y + (uint)((ushort)ssd.h >> 1));
          ds.scw = fVar7;
          ds.sch = fVar8;
        }
        lVar5 = (long)(iVar4 + 1);
        DispSprD(&ds);
        iVar6 = iVar6 + 1;
      } while (lVar5 <= (short)r_prt->end_no);
    }
  }
  return;
}

void RelDspPrt(RELATION_PRT *r_prt) {
	int i;
	float temp_x1;
	float temp_y1;
	float temp_x4;
	float temp_y4;
	
  ushort *puVar1;
  ushort (*pauVar2) [4];
  ushort *puVar3;
  uint uVar4;
  float y4;
  float y1;
  float x4;
  float x1;
  
  if ((r_prt->attribute != 1) &&
     (((short)r_prt->mission_no <= (short)(ushort)ingame_wrk.msn_no || (ingame_wrk.clear_count != 0)
      ))) {
    puVar1 = r_prt->wk_pos + 3;
    uVar4 = 0;
    puVar3 = r_prt->wk_pos + 2;
    pauVar2 = r_prt->wk_pos;
    do {
      if ((*pauVar2)[0] != *puVar3) {
        x1 = (float)((short)(*pauVar2)[0] + -0x140);
        x4 = (float)((short)*puVar3 + -0x140);
        y1 = (float)((int)(short)puVar1[-2] + (int)(short)rel_csr.offy + -0xe0);
        y4 = (float)((int)(short)*puVar1 + (int)(short)rel_csr.offy + -0xe0);
        SetSquareS(0x24000,x1 + 4.0,y1 + 4.0,x4 - 4.0,y4 - 4.0,'\0','\0','\0','\x01');
        SetSquareS(0x25000,x1,y1,x4,y4,'\0','\0','\0','\x7f');
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
      pauVar2 = pauVar2[1];
      puVar1 = puVar1 + 4;
    } while (uVar4 < 2);
  }
  return;
}

void RelDspBackGrd() {
	int i;
	int j;
	u_char alp_rate;
	SPRT_DAT ssd;
	SPRT_DAT ssd_fnt;
	SPRT_DAT ssd_sakka;
	SPRT_DAT ssd_himuro;
	SPRT_DAT ssd_hina;
	SPRT_DAT ssd_muna;
	DISP_SPRT ds;
	
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  SPRT_DAT ssd;
  SPRT_DAT ssd_fnt;
  SPRT_DAT ssd_sakka;
  SPRT_DAT ssd_himuro;
  SPRT_DAT ssd_hina;
  SPRT_DAT ssd_muna;
  DISP_SPRT ds;
  int i;
  
  uVar17 = DAT_00350b20;
  uVar16 = DAT_00350b18;
  uVar15 = DAT_00350b10;
  uVar14 = DAT_00350b08;
  uVar13 = DAT_00350b00;
  uVar12 = DAT_00350af8;
  uVar11 = _PTR_DAT_00350af0;
  uVar10 = DAT_00350ae8;
  uVar9 = DAT_00350ae0;
  uVar8 = DAT_00350ad8;
  uVar7 = DAT_00350ad0;
  uVar6 = DAT_00350ac8;
  uVar5 = DAT_00350ac0;
  uVar4 = DAT_00350ab8;
  uVar3 = DAT_00350ab0;
  uVar2 = DAT_00350aa8;
  ssd_fnt._8_8_ = DAT_00350a90;
  ssd_fnt._16_8_ = DAT_00350a98;
  ssd_fnt.tex0 = DAT_00350a88;
  ssd_fnt._24_8_ = DAT_00350aa0;
  i = 0;
  ssd.y = (int)(DAT_003317e0 >> 0x20);
  ssd.tex0 = DAT_003317d0;
  ssd._8_8_ = DAT_003317d8;
  ssd._24_8_ = DAT_003317e8;
  ssd._16_8_ = DAT_003317e0 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.y = (int)(DAT_00331800 >> 0x20);
  ssd.tex0 = DAT_003317f0;
  ssd._8_8_ = _PTR_DAT_003317f8;
  ssd._24_8_ = DAT_00331808;
  ssd._16_8_ = DAT_00331800 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  SetSprFile(0x1e90000);
  SetSprFile(0x1e05b00);
  do {
    iVar18 = 0;
    iVar19 = i + 1;
    do {
      ssd._8_8_ = DAT_0032d258;
      ssd.h = (short)((ulong)DAT_0032d258 >> 0x30);
      ssd.w = (short)((ulong)DAT_0032d258 >> 0x20);
      iVar1 = (uint)(ushort)ssd.w * iVar18;
      iVar18 = iVar18 + 1;
      ssd.tex0 = DAT_0032d250;
      ssd._24_8_ = DAT_0032d268;
      ssd._16_8_ = CONCAT44((uint)(ushort)ssd.h * i + -0x32 + (int)(short)rel_csr.offy,iVar1);
      CopySprDToSpr(&ds,&ssd);
      DispSprD(&ds);
    } while (iVar18 < 6);
    i = iVar19;
  } while (iVar19 < 10);
  PutSpriteYW(0x1cb,0x1ce,0.0,0.0,0.0,0x808080,80.0,DAT_00355f30,DAT_00355f34,1,0xff,1,0,0);
  ssd.y = (int)(uVar4 >> 0x20);
  ssd.tex0 = uVar2;
  ssd._8_8_ = uVar3;
  ssd._24_8_ = uVar5;
  ssd._16_8_ = uVar4 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
  CopySprDToSpr(&ds,&ssd);
  ds.tex1 = 0x161;
  DispSprD(&ds);
  if (1 < ingame_wrk.msn_no) {
    ssd.y = (int)(uVar16 >> 0x20);
    ssd.tex0 = uVar14;
    ssd._8_8_ = uVar15;
    ssd._24_8_ = uVar17;
    ssd._16_8_ = uVar16 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
    CopySprDToSpr(&ds,&ssd);
    ds.tex1 = 0x161;
    DispSprD(&ds);
  }
  ssd.y = (int)(uVar8 >> 0x20);
  ssd.tex0 = uVar6;
  ssd._8_8_ = uVar7;
  ssd._24_8_ = uVar9;
  ssd._16_8_ = uVar8 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
  CopySprDToSpr(&ds,&ssd);
  ds.tex1 = 0x161;
  DispSprD(&ds);
  ssd.y = (int)(uVar12 >> 0x20);
  ssd.tex0 = uVar10;
  ssd._8_8_ = uVar11;
  ssd._24_8_ = uVar13;
  ssd._16_8_ = uVar12 & 0xffffffff | (ulong)(uint)(ssd.y + (short)rel_csr.offy) << 0x20;
  CopySprDToSpr(&ds,&ssd);
  ds.tex1 = 0x161;
  DispSprD(&ds);
  SetSquareS(0x1e000,100.0,(float)((short)rel_csr.offy + -0x80),300.0,
             (float)((short)rel_csr.offy + -0xd),'@','@','@','@');
  ssd_fnt._8_6_ = CONCAT24(ssd_fnt.w + 0x1e,ssd_fnt._8_4_);
  ssd_fnt._8_8_ = ssd_fnt._8_8_ & 0xffff000000000000 | (ulong)ssd_fnt._8_6_;
  ssd_fnt._16_8_ = CONCAT44(ssd_fnt.y + (short)rel_csr.offy,ssd_fnt.x + -0x12);
  CopySprDToSpr(&ds,&ssd_fnt);
  DispSprD(&ds);
  SetSprFile(0x1e05b00);
  DrawButtonTex(0x14000,3,(float)(DAT_0032d400 + -0x2d),
                (float)(DAT_0032d404 + (short)rel_csr.offy + 0x45),'d');
  ssd._28_4_ = (undefined4)((ulong)DAT_0032d408 >> 0x20);
  ssd._24_8_ = CONCAT44(ssd._28_4_,0x14000);
  ssd.tex0 = DAT_0032d3f0;
  ssd._8_8_ = DAT_0032d3f8;
  ssd._16_8_ = CONCAT44(DAT_0032d404 + 0x61 + (int)(short)rel_csr.offy,DAT_0032d400 + -0x2d);
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  ssd.y = (int)((ulong)DAT_0032d360 >> 0x20);
  ssd.x = (int)DAT_0032d360;
  ssd._28_4_ = (undefined4)((ulong)DAT_0032d368 >> 0x20);
  ssd._24_8_ = CONCAT44(ssd._28_4_,0x14000);
  ssd.tex0 = DAT_0032d350;
  ssd._8_8_ = DAT_0032d358;
  ssd._16_8_ = CONCAT44(ssd.y + 0x61 + (int)(short)rel_csr.offy,ssd.x + -0x2d);
  CopySprDToSpr(&ds,&ssd);
  DispSprD(&ds);
  DrawButtonTex(0x14000,1,(float)(DAT_0032d400 + -0x2d),
                (float)(DAT_0032d404 + (short)rel_csr.offy + 0x2b),'d');
  ssd.tex0 = DAT_0032b1d0;
  ssd._8_8_ = DAT_0032b1d8;
  ssd._16_8_ = DAT_0032b1e0;
  ssd._24_8_ = DAT_0032b1e8;
  CopySprDToSpr(&ds,&ssd);
  ds.pri = 0x14000;
  ds.y = (float)((short)rel_csr.offy + 0x60);
  ds.z = 0xffebfff;
  ds.alpha = 100;
  ds.x = 474.0;
  DispSprD(&ds);
  DspMenuTitle((ushort)(int)yw2d.io_x[1],
               (ushort)(int)((yw2d.io_y[1] + (float)(int)(short)rel_csr.offy) - 22.0),128.0,'\x1e',
               '\x04');
  SetSprFile(0x1d88100);
  return;
}

void RelationDispMsg(RELATION_DAT *r_dat) {
	SPRT_SDAT ssd;
	SPRT_SDAT ssd2;
	SPRT_SDAT ssd3;
	SPRT_SDAT ssd4;
	DISP_SQAR dsq;
	DISP_STR ds;
	STR_DAT spev_str;
	short int dsp_offy;
	
  int iVar1;
  ushort pos_y;
  int iVar2;
  SPRT_SDAT ssd;
  SPRT_SDAT ssd2;
  SPRT_SDAT ssd3;
  SPRT_SDAT ssd4;
  DISP_SQAR dsq;
  DISP_STR ds;
  STR_DAT spev_str;
  
  iVar2 = 0xe6;
  if (r_dat->dsp_pos != 1) {
    iVar2 = 0;
  }
  spev_str.str = (char *)GetIngameMSGAddr('2',(int)(char)(&name_rbl)[(short)r_dat->msg_idx * 2]);
  spev_str.pos_y = iVar2 + 0x1e;
  spev_str.pos_x = 0x50;
  spev_str.r = 0;
  spev_str.g = 0;
  spev_str.b = 0;
  spev_str.alpha = 0x80;
  spev_str.pri = 0xc;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  spev_str.str = (char *)GetIngameMSGAddr('3',(int)*(char *)((short)r_dat->msg_idx * 2 + 0x33e469));
  spev_str.pos_y = iVar2 + 0x32;
  spev_str.pos_x = 0xf0;
  spev_str.alpha = 0x80;
  spev_str.pri = 0xc;
  spev_str.r = 0;
  spev_str.g = 0;
  spev_str.b = 0;
  CopyStrDToStr(&ds,&spev_str);
  SetMessageV2(&ds);
  if (rel_csr.mode == 1) {
    iVar1 = IsLoadEnd((int)(short)rel_csr.load_id);
    if (iVar1 != 0) {
      rel_csr.mode = 2;
      rel_csr.load_id = 0xffff;
    }
  }
  else if ((short)rel_csr.mode < 2) {
    if ((rel_csr.mode == 0) && (r_dat->tm2_id != 0xffff)) {
      iVar1 = LoadReq((int)(short)r_dat->tm2_id,0x1d573b0);
      rel_csr.mode = 1;
      rel_csr.load_id = (ushort)iVar1;
    }
  }
  else if (rel_csr.mode == 2) {
    rel_csr.mode = 3;
  }
  else if (rel_csr.mode == 3) {
    rel_csr.tex_keep = VramItem2D('\0','\x03');
    PkTm2(rel_csr.tex_keep,0x27,(short)iVar2 + 0x39,0xc0,0x80,0x80,0xd000);
  }
  pos_y = (short)iVar2 + 0x14;
  SetSprFile(0x1e90000);
  Sheet(0x32d,0x14,pos_y,600,0xb4,'\x0f',0x80);
  Fuchidori(0x32f,0x14,pos_y,600,0xb4,'\x0e',0x80);
  SetSprFile(0x1d88100);
  return;
}

void SimpleDispSprtDS(SPRT_DAT *ssd, u_int addr, int sp_no, SPRT_SROT *srot, SPRT_SSCL *sscl, u_char alp_rate) {
	DISP_SPRT ds;
	SPRT_DAT sd;
	
  DISP_SPRT ds;
  SPRT_DAT sd;
  
  sd.tex0 = ssd->tex0;
  sd.u = ssd->u;
  sd.pri = (uint)*(byte *)&ssd->pri << 0xc;
  sd.v = ssd->v;
  sd.w = ssd->w;
  sd.h = ssd->h;
  sd.x = ssd->x;
  sd.y = ssd->y;
  if (((int)(char)alp_rate & 0xffU) == 0xff) {
    ds.alphar = 0x48;
  }
  else {
    sd.alpha = (uchar)(((uint)ssd->alpha * ((int)(char)alp_rate & 0xffU)) / 100);
  }
  CopySprDToSpr(&ds,&sd);
  if (srot != (SPRT_SROT *)0x0) {
    if (srot->cx == 0x7fff) {
      ds.att = ds.att | (int)(short)srot->cy;
    }
    else {
      ds.crx = (float)(int)(short)srot->cx;
      ds.rot = srot->rot;
      ds.cry = (float)(int)(short)srot->cy;
    }
  }
  if (sscl != (SPRT_SSCL *)0x0) {
    ds.scw = (float)(int)(short)sscl->sw / 100.0;
    ds.sch = (float)(int)(short)sscl->sh / 100.0;
    ds.csx = (float)(int)(short)sscl->cx;
    ds.csy = (float)(int)(short)sscl->cy;
  }
  DispSprD(&ds);
  return;
}

void TestPk2DataSou(long int sendtexaddr) {
	static int ttest_count = 0;
	SPRT_DAT ssd;
	
  SPRT_DAT ssd;
  
  if (*key_now[8] == 1) {
    ttest_count_273 = ttest_count_273 + 1;
  }
  if (*key_now[9] == 1) {
    ttest_count_273 = ttest_count_273 + -1;
  }
  ssd.w = 0x2a8;
  ssd.h = 0x200;
  ssd.tex0 = DAT_00330c70;
  ssd.v = 1;
  ssd.u = 1;
  ssd.x = 0;
  ssd.y = 0;
  ssd.pri = 0;
  SimpleDispSprtDS(&ssd,(uint)sendtexaddr,ttest_count_273,(SPRT_SROT *)0x0,(SPRT_SSCL *)0x0,'d');
  return;
}

void DispCaption(int no, u_char alp) {
	int i;
	u_int pri;
	SPRT_DAT ssd;
	DISP_SPRT ds;
	CAPTION_DATA_SUB *cdsp;
	CAPTION_DATA *cdp;
	CAPTION_LIST *clp;
	DISP_SQAR dq;
	SQAR_DAT sq;
	
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong *puVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  byte alp_00;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  SPRT_DAT ssd;
  DISP_SPRT ds;
  DISP_SQAR dq;
  SQAR_DAT sq;
  
  iVar7 = no * 8;
  psVar9 = (short *)(&caption_list + iVar7);
  sVar2 = *(short *)(&DAT_0033f026 + iVar7);
  iVar6 = *(short *)(&DAT_0033f024 + iVar7) * 0x1c;
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_00350b28 >> (7 - uVar3) * 8;
  sq._0_8_ = DAT_00350b28;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_00350b30 >> (7 - uVar3) * 8;
  sq._8_8_ = DAT_00350b30;
  uVar3 = (uint)&sq.alpha & 7;
  puVar5 = &sq.alpha + -uVar3;
  *(ulong *)puVar5 = *(ulong *)puVar5 & -1L << (uVar3 + 1) * 8 | DAT_00350b38 >> (7 - uVar3) * 8;
  sq._16_8_ = DAT_00350b38;
  psVar11 = (short *)(&caption_data + iVar6);
  if (sVar2 != 0) {
    CopySqrDToSqr(&dq,&sq);
    dq.x[0] = (int)*psVar9;
    dq.x[1] = dq.x[0] + *psVar11;
    dq.z = 0xfff5fff;
    dq.y[0] = (int)*(short *)(&DAT_0033f022 + iVar7);
    dq.y[2] = dq.y[0] + *(short *)(&DAT_0033f0da + iVar6);
    dq.zbuf = 0x10100008c;
    dq.x[2] = (int)*psVar9;
    dq.y[1] = (int)*(short *)(&DAT_0033f022 + iVar7);
    dq.pri = 0xa000;
    dq.alpha = (uchar)((((int)(char)alp & 0xffU) << 1) / 3);
    dq.x[3] = dq.x[1];
    dq.y[3] = dq.y[2];
    DispSqrD(&dq);
  }
  if ((&DAT_0033f0e1)[iVar6] != '\0') {
    iVar6 = 0;
    do {
      iVar10 = iVar6 + 1;
      psVar8 = psVar11 + iVar6 * 3 + 2;
      alp_00 = (byte)((int)(char)alp & 0xffU);
      DrawButtonTexNZ(0xa000,(uint)*(byte *)(psVar8 + 2),(float)((int)*psVar9 + (int)*psVar8),
                      (float)((int)*(short *)(&DAT_0033f022 + iVar7) + (int)psVar8[1] + 1),alp_00);
      iVar6 = (uint)*(byte *)((int)psVar8 + 5) * 0x20;
      ssd._24_8_ = *(undefined8 *)(&DAT_00329888 + iVar6);
      ssd.tex0 = *(ulong *)(&spr_dat + iVar6);
      ssd._8_8_ = *(undefined8 *)(&DAT_00329878 + iVar6);
      ssd._16_8_ = *(undefined8 *)(&DAT_00329880 + iVar6);
      CopySprDToSpr(&ds,&ssd);
      ds.x = (float)((int)*psVar9 + (int)*psVar8 + 0x18);
      ds.y = (float)((int)*(short *)(&DAT_0033f022 + iVar7) + (int)psVar8[1]);
      ds.z = 0xfff5fff;
      ds.zbuf = 0x10100008c;
      ds.pri = 0xa000;
      ds.alpha = alp_00;
      DispSprD(&ds);
      if (*(char *)((int)psVar11 + iVar10 * 6 + 9) == '\0') {
        return;
      }
      iVar6 = iVar10;
    } while (iVar10 < 4);
  }
  return;
}
