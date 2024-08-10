// File written by stdump development version on 2024-08-10
// 
// Input file:
//   SLUS_203.88
// Toolchain version(s):
//   unknown
// Built-in types:
//   char                     8-bit integer
//   complex double           64-bit floating point
//   complex float            32-bit floating point
//   complex long double      64-bit floating point
//   double                   64-bit floating point
//   float                    32-bit floating point
//   int                      32-bit signed integer
//   long double              64-bit floating point
//   long int                 64-bit signed integer
//   long long int            64-bit signed integer
//   long long unsigned int   64-bit unsigned integer
//   long unsigned int        64-bit unsigned integer
//   long128                  128-bit integer
//   short int                16-bit signed integer
//   short unsigned int       16-bit unsigned integer
//   signed char              8-bit signed integer
//   u_long128                128-bit integer
//   unsigned char            8-bit unsigned integer
//   unsigned int             32-bit unsigned integer
//   void                     void

typedef struct { // 0x8
	/* 0x0 */ int real;
	/* 0x4 */ int imag;
} complex int;

typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef unsigned int size_t;
typedef char *__gnuc_va_list;
typedef long unsigned int clock_t;
typedef long int time_t;

struct tm { // 0x24
	/* 0x00 */ int tm_sec;
	/* 0x04 */ int tm_min;
	/* 0x08 */ int tm_hour;
	/* 0x0c */ int tm_mday;
	/* 0x10 */ int tm_mon;
	/* 0x14 */ int tm_year;
	/* 0x18 */ int tm_wday;
	/* 0x1c */ int tm_yday;
	/* 0x20 */ int tm_isdst;
};

// warning: multiple differing types with the same name (type name not equal)
typedef __uint32_t ULong;

struct _glue { // 0xc
	/* 0x0 */ _glue *_next;
	/* 0x4 */ int _niobs;
	/* 0x8 */ __sFILE *_iobs;
};

typedef struct { // 0x18
	/* 0x00 */ _Bigint *_next;
	/* 0x04 */ int _k;
	/* 0x08 */ int _maxwds;
	/* 0x0c */ int _sign;
	/* 0x10 */ int _wds;
	/* 0x14 */ ULong _x[1];
} _Bigint;

struct _atexit { // 0x88
	/* 0x00 */ _atexit *_next;
	/* 0x04 */ int _ind;
	/* 0x08 */ void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf { // 0x8
	/* 0x0 */ unsigned char *_base;
	/* 0x4 */ int _size;
};

typedef long int _fpos_t;

struct __sFILE { // 0x58
	/* 0x00 */ unsigned char *_p;
	/* 0x04 */ int _r;
	/* 0x08 */ int _w;
	/* 0x0c */ short int _flags;
	/* 0x0e */ short int _file;
	/* 0x10 */ __sbuf _bf;
	/* 0x18 */ int _lbfsize;
	/* 0x1c */ void *_cookie;
	/* 0x20 */ int (*_read)(/* parameters unknown */);
	/* 0x24 */ int (*_write)(/* parameters unknown */);
	/* 0x28 */ _fpos_t (*_seek)(/* parameters unknown */);
	/* 0x2c */ int (*_close)(/* parameters unknown */);
	/* 0x30 */ __sbuf _ub;
	/* 0x38 */ unsigned char *_up;
	/* 0x3c */ int _ur;
	/* 0x40 */ unsigned char _ubuf[3];
	/* 0x43 */ unsigned char _nbuf[1];
	/* 0x44 */ __sbuf _lb;
	/* 0x4c */ int _blksize;
	/* 0x50 */ int _offset;
	/* 0x54 */ _reent *_data;
};

struct _reent { // 0x2ec
	/* 0x000 */ int _errno;
	/* 0x004 */ __sFILE *_stdin;
	/* 0x008 */ __sFILE *_stdout;
	/* 0x00c */ __sFILE *_stderr;
	/* 0x010 */ int _inc;
	/* 0x014 */ char _emergency[25];
	/* 0x030 */ int _current_category;
	/* 0x034 */ char *_current_locale;
	/* 0x038 */ int __sdidinit;
	/* 0x03c */ void (*__cleanup)(/* parameters unknown */);
	/* 0x040 */ _Bigint *_result;
	/* 0x044 */ int _result_k;
	/* 0x048 */ _Bigint *_p5s;
	/* 0x04c */ _Bigint **_freelist;
	/* 0x050 */ int _cvtlen;
	/* 0x054 */ char *_cvtbuf;
	/* 0x058 */ union { // 0xf0
		/* 0x058 */ struct { // 0x4c
			/* 0x058 */ unsigned int _rand_next;
			/* 0x05c */ char *_strtok_last;
			/* 0x060 */ char _asctime_buf[26];
			/* 0x07c */ tm _localtime_buf;
			/* 0x0a0 */ int _gamma_signgam;
		} _reent;
		/* 0x058 */ struct { // 0xf0
			/* 0x058 */ unsigned char *_nextf[30];
			/* 0x0d0 */ unsigned int _nmalloc[30];
		} _unused;
	} _new;
	/* 0x148 */ _atexit *_atexit;
	/* 0x14c */ _atexit _atexit0;
	/* 0x1d4 */ void (**_sig_func)(/* parameters unknown */);
	/* 0x1d8 */ _glue __sglue;
	/* 0x1e4 */ __sFILE __sf[3];
};

typedef _fpos_t fpos_t;
typedef __sFILE FILE;
typedef int wchar_t;

typedef struct { // 0x8
	/* 0x0 */ int quot;
	/* 0x4 */ int rem;
} div_t;

typedef struct { // 0x10
	/* 0x0 */ long int quot;
	/* 0x8 */ long int rem;
} ldiv_t;

typedef unsigned char u_char;
typedef short unsigned int u_short;
typedef unsigned int u_int;
typedef long unsigned int u_long;

struct ThreadParam { // 0x30
	/* 0x00 */ int status;
	/* 0x04 */ void *entry;
	/* 0x08 */ void *stack;
	/* 0x0c */ int stackSize;
	/* 0x10 */ void *gpReg;
	/* 0x14 */ int initPriority;
	/* 0x18 */ int currentPriority;
	/* 0x1c */ u_int attr;
	/* 0x20 */ u_int option;
	/* 0x24 */ int waitType;
	/* 0x28 */ int waitId;
	/* 0x2c */ int wakeupCount;
};

struct SemaParam { // 0x18
	/* 0x00 */ int currentCount;
	/* 0x04 */ int maxCount;
	/* 0x08 */ int initCount;
	/* 0x0c */ int numWaitThreads;
	/* 0x10 */ u_int attr;
	/* 0x14 */ u_int option;
};

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COUNT : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COUNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CLKS : 2;
	/* 0x0:2 */ unsigned int GATE : 1;
	/* 0x0:3 */ unsigned int GATS : 1;
	/* 0x0:4 */ unsigned int GATM : 2;
	/* 0x0:6 */ unsigned int ZRET : 1;
	/* 0x0:7 */ unsigned int CUE : 1;
	/* 0x1:0 */ unsigned int CMPE : 1;
	/* 0x1:1 */ unsigned int OVFE : 1;
	/* 0x1:2 */ unsigned int EQUF : 1;
	/* 0x1:3 */ unsigned int OVFF : 1;
	/* 0x1:4 */ unsigned int p0 : 20;
} tT_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int COMP : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_COMP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int HOLD : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tT_HOLD;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OPTION : 28;
	/* 0x3:4 */ unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct { // 0x8
	/* 0x0 */ unsigned int DATA;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct { // 0x8
	/* 0x0 */ unsigned int BSTOP;
	/* 0x4:0 */ unsigned int p0 : 31;
	/* 0x7:7 */ unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int IFC : 4;
	/* 0x0:4 */ unsigned int OFC : 4;
	/* 0x1:0 */ unsigned int CBP : 6;
	/* 0x1:6 */ unsigned int ECD : 1;
	/* 0x1:7 */ unsigned int SCD : 1;
	/* 0x2:0 */ unsigned int IDP : 2;
	/* 0x2:2 */ unsigned int p0 : 2;
	/* 0x2:4 */ unsigned int AS : 1;
	/* 0x2:5 */ unsigned int IVF : 1;
	/* 0x2:6 */ unsigned int QST : 1;
	/* 0x2:7 */ unsigned int MP1 : 1;
	/* 0x3:0 */ unsigned int PCT : 3;
	/* 0x3:3 */ unsigned int p1 : 3;
	/* 0x3:6 */ unsigned int RST : 1;
	/* 0x3:7 */ unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BP : 7;
	/* 0x0:7 */ unsigned int p0 : 1;
	/* 0x1:0 */ unsigned int IFC : 4;
	/* 0x1:4 */ unsigned int p1 : 4;
	/* 0x2:0 */ unsigned int FP : 2;
	/* 0x2:2 */ unsigned int p2 : 14;
} tIPU_BP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int p0 : 2;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int p1 : 29;
} tGIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int M3R : 1;
	/* 0x0:1 */ unsigned int M3P : 1;
	/* 0x0:2 */ unsigned int IMT : 1;
	/* 0x0:3 */ unsigned int PSE : 1;
	/* 0x0:4 */ unsigned int p0 : 1;
	/* 0x0:5 */ unsigned int IP3 : 1;
	/* 0x0:6 */ unsigned int P3Q : 1;
	/* 0x0:7 */ unsigned int P2Q : 1;
	/* 0x1:0 */ unsigned int P1Q : 1;
	/* 0x1:1 */ unsigned int OPH : 1;
	/* 0x1:2 */ unsigned int APATH : 2;
	/* 0x1:4 */ unsigned int DIR : 1;
	/* 0x1:5 */ unsigned int p1 : 11;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tGIF_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int NLOOP : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int tag : 16;
} tGIF_TAG0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int tag : 14;
	/* 0x1:6 */ unsigned int PRE : 1;
	/* 0x1:7 */ unsigned int PRIM : 11;
	/* 0x3:2 */ unsigned int FLG : 2;
	/* 0x3:4 */ unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int tag;
} tGIF_TAG3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int p0 : 1;
	/* 0x2:0 */ unsigned int REGCNT : 4;
	/* 0x2:4 */ unsigned int VUADDR : 10;
	/* 0x3:6 */ unsigned int p1 : 2;
} tGIF_CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int P3CNT : 15;
	/* 0x1:7 */ unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int LOOPCNT : 15;
	/* 0x1:7 */ unsigned int EOP : 1;
	/* 0x2:0 */ unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int p0 : 3;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int p1 : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p2 : 10;
	/* 0x3:0 */ unsigned int FQC : 4;
	/* 0x3:4 */ unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MARK : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_MARK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CL : 8;
	/* 0x1:0 */ unsigned int WL : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MOD : 2;
	/* 0x0:2 */ unsigned int p0 : 30;
} tVIF_MODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int m0 : 2;
	/* 0x0:2 */ unsigned int m1 : 2;
	/* 0x0:4 */ unsigned int m2 : 2;
	/* 0x0:6 */ unsigned int m3 : 2;
	/* 0x1:0 */ unsigned int m4 : 2;
	/* 0x1:2 */ unsigned int m5 : 2;
	/* 0x1:4 */ unsigned int m6 : 2;
	/* 0x1:6 */ unsigned int m7 : 2;
	/* 0x2:0 */ unsigned int m8 : 2;
	/* 0x2:2 */ unsigned int m9 : 2;
	/* 0x2:4 */ unsigned int m10 : 2;
	/* 0x2:6 */ unsigned int m11 : 2;
	/* 0x3:0 */ unsigned int m12 : 2;
	/* 0x3:2 */ unsigned int m13 : 2;
	/* 0x3:4 */ unsigned int m14 : 2;
	/* 0x3:6 */ unsigned int m15 : 2;
} tVIF_MASK;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int immediate : 16;
	/* 0x2:0 */ unsigned int num : 8;
	/* 0x3:0 */ unsigned int CMD : 8;
} tVIF_CODE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ITOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R0;
} tVIF_R0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R1;
} tVIF_R1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R2;
} tVIF_R2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int R3;
} tVIF_R3;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C0;
} tVIF_C0;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C1;
} tVIF_C1;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C2;
} tVIF_C2;

typedef struct { // 0x4
	/* 0x0 */ unsigned int C3;
} tVIF_C3;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int VPS : 2;
	/* 0x0:2 */ unsigned int VEW : 1;
	/* 0x0:3 */ unsigned int VGW : 1;
	/* 0x0:4 */ unsigned int p0 : 2;
	/* 0x0:6 */ unsigned int MRK : 1;
	/* 0x0:7 */ unsigned int DBF : 1;
	/* 0x1:0 */ unsigned int VSS : 1;
	/* 0x1:1 */ unsigned int VFS : 1;
	/* 0x1:2 */ unsigned int VIS : 1;
	/* 0x1:3 */ unsigned int INT : 1;
	/* 0x1:4 */ unsigned int ERO : 1;
	/* 0x1:5 */ unsigned int ER1 : 1;
	/* 0x1:6 */ unsigned int p1 : 9;
	/* 0x2:7 */ unsigned int FDR : 1;
	/* 0x3:0 */ unsigned int FQC : 5;
	/* 0x3:5 */ unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RST : 1;
	/* 0x0:1 */ unsigned int FBK : 1;
	/* 0x0:2 */ unsigned int STP : 1;
	/* 0x0:3 */ unsigned int STC : 1;
	/* 0x0:4 */ unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int MII : 1;
	/* 0x0:1 */ unsigned int ME0 : 1;
	/* 0x0:2 */ unsigned int ME1 : 1;
	/* 0x0:3 */ unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int num : 8;
	/* 0x1:0 */ unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int BASE : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int OFFSET : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOPS : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int TOP : 10;
	/* 0x1:2 */ unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 1;
	/* 0x0:2 */ unsigned int MOD : 2;
	/* 0x0:4 */ unsigned int ASP : 2;
	/* 0x0:6 */ unsigned int TTE : 1;
	/* 0x0:7 */ unsigned int TIE : 1;
	/* 0x1:0 */ unsigned int STR : 1;
	/* 0x1:1 */ unsigned int p1 : 7;
	/* 0x2:0 */ unsigned int TAG : 16;
} tD_CHCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_MADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int QWC : 16;
	/* 0x2:0 */ unsigned int p0 : 16;
} tD_QWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_TADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR0;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int SPR : 1;
} tD_ASR1;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 14;
	/* 0x1:6 */ unsigned int p0 : 18;
} tD_SADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int DMAE : 1;
	/* 0x0:1 */ unsigned int RELE : 1;
	/* 0x0:2 */ unsigned int MFD : 2;
	/* 0x0:4 */ unsigned int STS : 2;
	/* 0x0:6 */ unsigned int STD : 2;
	/* 0x1:0 */ unsigned int RCYC : 3;
	/* 0x1:3 */ unsigned int p0 : 21;
} tD_CTRL;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CIS0 : 1;
	/* 0x0:1 */ unsigned int CIS1 : 1;
	/* 0x0:2 */ unsigned int CIS2 : 1;
	/* 0x0:3 */ unsigned int CIS3 : 1;
	/* 0x0:4 */ unsigned int CIS4 : 1;
	/* 0x0:5 */ unsigned int CIS5 : 1;
	/* 0x0:6 */ unsigned int CIS6 : 1;
	/* 0x0:7 */ unsigned int CIS7 : 1;
	/* 0x1:0 */ unsigned int CIS8 : 1;
	/* 0x1:1 */ unsigned int CIS9 : 1;
	/* 0x1:2 */ unsigned int p0 : 3;
	/* 0x1:5 */ unsigned int SIS : 1;
	/* 0x1:6 */ unsigned int MEIS : 1;
	/* 0x1:7 */ unsigned int BEIS : 1;
	/* 0x2:0 */ unsigned int CIM0 : 1;
	/* 0x2:1 */ unsigned int CIM1 : 1;
	/* 0x2:2 */ unsigned int CIM2 : 1;
	/* 0x2:3 */ unsigned int CIM3 : 1;
	/* 0x2:4 */ unsigned int CIM4 : 1;
	/* 0x2:5 */ unsigned int CIM5 : 1;
	/* 0x2:6 */ unsigned int CIM6 : 1;
	/* 0x2:7 */ unsigned int CIM7 : 1;
	/* 0x3:0 */ unsigned int CIM8 : 1;
	/* 0x3:1 */ unsigned int CIM9 : 1;
	/* 0x3:2 */ unsigned int p1 : 3;
	/* 0x3:5 */ unsigned int SIM : 1;
	/* 0x3:6 */ unsigned int MEIM : 1;
	/* 0x3:7 */ unsigned int p2 : 1;
} tD_STAT;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int CPC0 : 1;
	/* 0x0:1 */ unsigned int CPC1 : 1;
	/* 0x0:2 */ unsigned int CPC2 : 1;
	/* 0x0:3 */ unsigned int CPC3 : 1;
	/* 0x0:4 */ unsigned int CPC4 : 1;
	/* 0x0:5 */ unsigned int CPC5 : 1;
	/* 0x0:6 */ unsigned int CPC6 : 1;
	/* 0x0:7 */ unsigned int CPC7 : 1;
	/* 0x1:0 */ unsigned int CPC8 : 1;
	/* 0x1:1 */ unsigned int CPC9 : 1;
	/* 0x1:2 */ unsigned int p0 : 6;
	/* 0x2:0 */ unsigned int CDE0 : 1;
	/* 0x2:1 */ unsigned int CDE1 : 1;
	/* 0x2:2 */ unsigned int CDE2 : 1;
	/* 0x2:3 */ unsigned int CDE3 : 1;
	/* 0x2:4 */ unsigned int CDE4 : 1;
	/* 0x2:5 */ unsigned int CDE5 : 1;
	/* 0x2:6 */ unsigned int CDE6 : 1;
	/* 0x2:7 */ unsigned int CDE7 : 1;
	/* 0x3:0 */ unsigned int CDE8 : 1;
	/* 0x3:1 */ unsigned int CDE9 : 1;
	/* 0x3:2 */ unsigned int p1 : 5;
	/* 0x3:7 */ unsigned int PCE : 1;
} tD_PCR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int SQWC : 8;
	/* 0x1:0 */ unsigned int p0 : 8;
	/* 0x2:0 */ unsigned int TQWC : 8;
	/* 0x3:0 */ unsigned int p1 : 8;
} tD_SQWC;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int RMSK : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBSR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_RBOR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int ADDR : 31;
	/* 0x3:7 */ unsigned int p0 : 1;
} tD_STADR;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLER;

typedef struct { // 0x4
	/* 0x0:0 */ unsigned int p0 : 16;
	/* 0x2:0 */ unsigned int CPND : 1;
	/* 0x2:1 */ unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EN1 : 1;
	/* 0x0:1 */ unsigned int EN2 : 1;
	/* 0x0:2 */ unsigned int CRTMD : 3;
	/* 0x0:5 */ unsigned int MMOD : 1;
	/* 0x0:6 */ unsigned int AMOD : 1;
	/* 0x0:7 */ unsigned int SLBG : 1;
	/* 0x1:0 */ unsigned int ALP : 8;
	/* 0x2:0 */ unsigned int p0 : 16;
	/* 0x4 */ unsigned int p1;
} tGS_PMODE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int INT : 1;
	/* 0x0:1 */ unsigned int FFMD : 1;
	/* 0x0:2 */ unsigned int DPMS : 2;
	/* 0x0:4 */ unsigned int p0 : 28;
	/* 0x4 */ unsigned int p1;
} tGS_SMODE2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int FBP : 9;
	/* 0x1:1 */ unsigned int FBW : 6;
	/* 0x1:7 */ unsigned int PSM : 5;
	/* 0x2:4 */ unsigned int p0 : 12;
	/* 0x4:0 */ unsigned int DBX : 11;
	/* 0x5:3 */ unsigned int DBY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DX : 12;
	/* 0x1:4 */ unsigned int DY : 11;
	/* 0x2:7 */ unsigned int MAGH : 4;
	/* 0x3:3 */ unsigned int MAGV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int DW : 12;
	/* 0x5:4 */ unsigned int DH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int EXBP : 14;
	/* 0x1:6 */ unsigned int EXBW : 6;
	/* 0x2:4 */ unsigned int FBIN : 2;
	/* 0x2:6 */ unsigned int WFFMD : 1;
	/* 0x2:7 */ unsigned int EMODA : 2;
	/* 0x3:1 */ unsigned int EMODC : 2;
	/* 0x3:3 */ unsigned int p0 : 5;
	/* 0x4:0 */ unsigned int WDX : 11;
	/* 0x5:3 */ unsigned int WDY : 11;
	/* 0x6:6 */ unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SX : 12;
	/* 0x1:4 */ unsigned int SY : 11;
	/* 0x2:7 */ unsigned int SMPH : 4;
	/* 0x3:3 */ unsigned int SMPV : 2;
	/* 0x3:5 */ unsigned int p0 : 3;
	/* 0x4:0 */ unsigned int WW : 12;
	/* 0x5:4 */ unsigned int WH : 11;
	/* 0x6:7 */ unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int WRITE : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_EXTWRITE;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int R : 8;
	/* 0x1:0 */ unsigned int G : 8;
	/* 0x2:0 */ unsigned int B : 8;
	/* 0x3:0 */ unsigned int p0 : 8;
	/* 0x4 */ unsigned int p1;
} tGS_BGCOLOR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int SIGNAL : 1;
	/* 0x0:1 */ unsigned int FINISH : 1;
	/* 0x0:2 */ unsigned int HSINT : 1;
	/* 0x0:3 */ unsigned int VSINT : 1;
	/* 0x0:4 */ unsigned int EDWINT : 1;
	/* 0x0:5 */ unsigned int p0 : 3;
	/* 0x1:0 */ unsigned int FLUSH : 1;
	/* 0x1:1 */ unsigned int RESET : 1;
	/* 0x1:2 */ unsigned int p1 : 2;
	/* 0x1:4 */ unsigned int NFIELD : 1;
	/* 0x1:5 */ unsigned int FIELD : 1;
	/* 0x1:6 */ unsigned int FIFO : 2;
	/* 0x2:0 */ unsigned int REV : 8;
	/* 0x3:0 */ unsigned int ID : 8;
	/* 0x4 */ unsigned int p2;
} tGS_CSR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int p0 : 8;
	/* 0x1:0 */ unsigned int SIGMSK : 1;
	/* 0x1:1 */ unsigned int FINISHMSK : 1;
	/* 0x1:2 */ unsigned int HSMSK : 1;
	/* 0x1:3 */ unsigned int VSMSK : 1;
	/* 0x1:4 */ unsigned int EDWMSK : 1;
	/* 0x1:5 */ unsigned int p1 : 19;
	/* 0x4 */ unsigned int p2;
} tGS_IMR;

typedef struct { // 0x8
	/* 0x0:0 */ unsigned int DIR : 1;
	/* 0x0:1 */ unsigned int p0 : 31;
	/* 0x4 */ unsigned int p1;
} tGS_BUSDIR;

typedef struct { // 0x8
	/* 0x0 */ unsigned int SIGID;
	/* 0x4 */ unsigned int LBLID;
} tGS_SIGLBLID;

struct sce_stat { // 0x40
	/* 0x00 */ unsigned int st_mode;
	/* 0x04 */ unsigned int st_attr;
	/* 0x08 */ unsigned int st_size;
	/* 0x0c */ unsigned char st_ctime[8];
	/* 0x14 */ unsigned char st_atime[8];
	/* 0x1c */ unsigned char st_mtime[8];
	/* 0x24 */ unsigned int st_hisize;
	/* 0x28 */ unsigned int st_private[6];
};

struct sce_dirent { // 0x144
	/* 0x000 */ sce_stat d_stat;
	/* 0x040 */ char d_name[256];
	/* 0x140 */ void *d_private;
};

typedef struct { // 0x10
	/* 0x0 */ unsigned int epc;
	/* 0x4 */ unsigned int gp;
	/* 0x8 */ unsigned int sp;
	/* 0xc */ unsigned int dummy;
} sceExecData;

struct _sif_rpc_data { // 0x10
	/* 0x0 */ void *paddr;
	/* 0x4 */ unsigned int pid;
	/* 0x8 */ int tid;
	/* 0xc */ unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data { // 0x28
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ unsigned int command;
	/* 0x14 */ void *buff;
	/* 0x18 */ void *cbuff;
	/* 0x1c */ sceSifEndFunc func;
	/* 0x20 */ void *para;
	/* 0x24 */ _sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data { // 0x1c
	/* 0x00 */ _sif_rpc_data rpcd;
	/* 0x10 */ void *src;
	/* 0x14 */ void *dest;
	/* 0x18 */ int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data { // 0x44
	/* 0x00 */ unsigned int command;
	/* 0x04 */ sceSifRpcFunc func;
	/* 0x08 */ void *buff;
	/* 0x0c */ int size;
	/* 0x10 */ sceSifRpcFunc cfunc;
	/* 0x14 */ void *cbuff;
	/* 0x18 */ int csize;
	/* 0x1c */ sceSifClientData *client;
	/* 0x20 */ void *paddr;
	/* 0x24 */ unsigned int fno;
	/* 0x28 */ void *receive;
	/* 0x2c */ int rsize;
	/* 0x30 */ int rmode;
	/* 0x34 */ unsigned int rid;
	/* 0x38 */ _sif_serve_data *link;
	/* 0x3c */ _sif_serve_data *next;
	/* 0x40 */ _sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data { // 0x18
	/* 0x00 */ int key;
	/* 0x04 */ int active;
	/* 0x08 */ _sif_serve_data *link;
	/* 0x0c */ _sif_serve_data *start;
	/* 0x10 */ _sif_serve_data *end;
	/* 0x14 */ _sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct { // 0x10
	/* 0x0:0 */ long unsigned int NLOOP : 15;
	/* 0x1:7 */ long unsigned int EOP : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int id : 14;
	/* 0x5:6 */ long unsigned int PRE : 1;
	/* 0x5:7 */ long unsigned int PRIM : 11;
	/* 0x7:2 */ long unsigned int FLG : 2;
	/* 0x7:4 */ long unsigned int NREG : 4;
	/* 0x8:0 */ long unsigned int REGS0 : 4;
	/* 0x8:4 */ long unsigned int REGS1 : 4;
	/* 0x9:0 */ long unsigned int REGS2 : 4;
	/* 0x9:4 */ long unsigned int REGS3 : 4;
	/* 0xa:0 */ long unsigned int REGS4 : 4;
	/* 0xa:4 */ long unsigned int REGS5 : 4;
	/* 0xb:0 */ long unsigned int REGS6 : 4;
	/* 0xb:4 */ long unsigned int REGS7 : 4;
	/* 0xc:0 */ long unsigned int REGS8 : 4;
	/* 0xc:4 */ long unsigned int REGS9 : 4;
	/* 0xd:0 */ long unsigned int REGS10 : 4;
	/* 0xd:4 */ long unsigned int REGS11 : 4;
	/* 0xe:0 */ long unsigned int REGS12 : 4;
	/* 0xe:4 */ long unsigned int REGS13 : 4;
	/* 0xf:0 */ long unsigned int REGS14 : 4;
	/* 0xf:4 */ long unsigned int REGS15 : 4;
} sceGifTag;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int A : 2;
	/* 0x0:2 */ long unsigned int B : 2;
	/* 0x0:4 */ long unsigned int C : 2;
	/* 0x0:6 */ long unsigned int D : 2;
	/* 0x1:0 */ long unsigned int pad8 : 24;
	/* 0x4:0 */ long unsigned int FIX : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SBP : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int SBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int SPSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int DBP : 14;
	/* 0x5:6 */ long unsigned int pad46 : 2;
	/* 0x6:0 */ long unsigned int DBW : 6;
	/* 0x6:6 */ long unsigned int pad54 : 2;
	/* 0x7:0 */ long unsigned int DPSM : 6;
	/* 0x7:6 */ long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int WMS : 2;
	/* 0x0:2 */ long unsigned int WMT : 2;
	/* 0x0:4 */ long unsigned int MINU : 10;
	/* 0x1:6 */ long unsigned int MAXU : 10;
	/* 0x3:0 */ long unsigned int MINV : 10;
	/* 0x4:2 */ long unsigned int MAXV : 10;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CLAMP : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DIMX00 : 3;
	/* 0x0:3 */ long unsigned int pad00 : 1;
	/* 0x0:4 */ long unsigned int DIMX01 : 3;
	/* 0x0:7 */ long unsigned int pad01 : 1;
	/* 0x1:0 */ long unsigned int DIMX02 : 3;
	/* 0x1:3 */ long unsigned int pad02 : 1;
	/* 0x1:4 */ long unsigned int DIMX03 : 3;
	/* 0x1:7 */ long unsigned int pad03 : 1;
	/* 0x2:0 */ long unsigned int DIMX10 : 3;
	/* 0x2:3 */ long unsigned int pad10 : 1;
	/* 0x2:4 */ long unsigned int DIMX11 : 3;
	/* 0x2:7 */ long unsigned int pad11 : 1;
	/* 0x3:0 */ long unsigned int DIMX12 : 3;
	/* 0x3:3 */ long unsigned int pad12 : 1;
	/* 0x3:4 */ long unsigned int DIMX13 : 3;
	/* 0x3:7 */ long unsigned int pad13 : 1;
	/* 0x4:0 */ long unsigned int DIMX20 : 3;
	/* 0x4:3 */ long unsigned int pad20 : 1;
	/* 0x4:4 */ long unsigned int DIMX21 : 3;
	/* 0x4:7 */ long unsigned int pad21 : 1;
	/* 0x5:0 */ long unsigned int DIMX22 : 3;
	/* 0x5:3 */ long unsigned int pad22 : 1;
	/* 0x5:4 */ long unsigned int DIMX23 : 3;
	/* 0x5:7 */ long unsigned int pad23 : 1;
	/* 0x6:0 */ long unsigned int DIMX30 : 3;
	/* 0x6:3 */ long unsigned int pad30 : 1;
	/* 0x6:4 */ long unsigned int DIMX31 : 3;
	/* 0x6:7 */ long unsigned int pad31 : 1;
	/* 0x7:0 */ long unsigned int DIMX32 : 3;
	/* 0x7:3 */ long unsigned int pad32 : 1;
	/* 0x7:4 */ long unsigned int DIMX33 : 3;
	/* 0x7:7 */ long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int DTHE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBA : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsFba;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsFinish;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 56;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsFog;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FCR : 8;
	/* 0x1:0 */ long unsigned int FCG : 8;
	/* 0x2:0 */ long unsigned int FCB : 8;
	/* 0x3:0 */ long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int FBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 7;
	/* 0x2:0 */ long unsigned int FBW : 6;
	/* 0x2:6 */ long unsigned int pad22 : 2;
	/* 0x3:0 */ long unsigned int PSM : 6;
	/* 0x3:6 */ long unsigned int pad30 : 2;
	/* 0x4:0 */ long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int WDATA;
} sceGsHwreg;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsLabel;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP1 : 14;
	/* 0x1:6 */ long unsigned int TBW1 : 6;
	/* 0x2:4 */ long unsigned int TBP2 : 14;
	/* 0x4:2 */ long unsigned int TBW2 : 6;
	/* 0x5:0 */ long unsigned int TBP3 : 14;
	/* 0x6:6 */ long unsigned int TBW3 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP4 : 14;
	/* 0x1:6 */ long unsigned int TBW4 : 6;
	/* 0x2:4 */ long unsigned int TBP5 : 14;
	/* 0x4:2 */ long unsigned int TBW5 : 6;
	/* 0x5:0 */ long unsigned int TBP6 : 14;
	/* 0x6:6 */ long unsigned int TBW6 : 6;
	/* 0x7:4 */ long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PABE : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int PRIM : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 3;
	/* 0x0:3 */ long unsigned int IIP : 1;
	/* 0x0:4 */ long unsigned int TME : 1;
	/* 0x0:5 */ long unsigned int FGE : 1;
	/* 0x0:6 */ long unsigned int ABE : 1;
	/* 0x0:7 */ long unsigned int AA1 : 1;
	/* 0x1:0 */ long unsigned int FST : 1;
	/* 0x1:1 */ long unsigned int CTXT : 1;
	/* 0x1:2 */ long unsigned int FIX : 1;
	/* 0x1:3 */ long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int AC : 1;
	/* 0x0:1 */ long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct { // 0x8
	/* 0x0:0 */ u_int R : 8;
	/* 0x1:0 */ u_int G : 8;
	/* 0x2:0 */ u_int B : 8;
	/* 0x3:0 */ u_int A : 8;
	/* 0x4 */ float Q;
} sceGsRgbaq;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int MSK : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SCAX0 : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SCAX1 : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int SCAY0 : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int SCAY1 : 11;
	/* 0x7:3 */ long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct { // 0x8
	/* 0x0 */ u_int ID;
	/* 0x4 */ u_int IDMSK;
} sceGsSignal;

typedef struct { // 0x8
	/* 0x0 */ float S;
	/* 0x4 */ float T;
} sceGsSt;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ATE : 1;
	/* 0x0:1 */ long unsigned int ATST : 3;
	/* 0x0:4 */ long unsigned int AREF : 8;
	/* 0x1:4 */ long unsigned int AFAIL : 2;
	/* 0x1:6 */ long unsigned int DATE : 1;
	/* 0x1:7 */ long unsigned int DATM : 1;
	/* 0x2:0 */ long unsigned int ZTE : 1;
	/* 0x2:1 */ long unsigned int ZTST : 2;
	/* 0x2:3 */ long unsigned int pad19 : 45;
} sceGsTest;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TBP0 : 14;
	/* 0x1:6 */ long unsigned int TBW : 6;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int TW : 4;
	/* 0x3:6 */ long unsigned int TH : 4;
	/* 0x4:2 */ long unsigned int TCC : 1;
	/* 0x4:3 */ long unsigned int TFX : 2;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex0;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int LCM : 1;
	/* 0x0:1 */ long unsigned int pad01 : 1;
	/* 0x0:2 */ long unsigned int MXL : 3;
	/* 0x0:5 */ long unsigned int MMAG : 1;
	/* 0x0:6 */ long unsigned int MMIN : 3;
	/* 0x1:1 */ long unsigned int MTBA : 1;
	/* 0x1:2 */ long unsigned int pad10 : 9;
	/* 0x2:3 */ long unsigned int L : 2;
	/* 0x2:5 */ long unsigned int pad21 : 11;
	/* 0x4:0 */ long unsigned int K : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int pad00 : 20;
	/* 0x2:4 */ long unsigned int PSM : 6;
	/* 0x3:2 */ long unsigned int pad26 : 11;
	/* 0x4:5 */ long unsigned int CBP : 14;
	/* 0x6:3 */ long unsigned int CPSM : 4;
	/* 0x6:7 */ long unsigned int CSM : 1;
	/* 0x7:0 */ long unsigned int CSA : 5;
	/* 0x7:5 */ long unsigned int CLD : 3;
} sceGsTex2;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int TA0 : 8;
	/* 0x1:0 */ long unsigned int pad08 : 7;
	/* 0x1:7 */ long unsigned int AEM : 1;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int TA1 : 8;
	/* 0x5:0 */ long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int CBW : 6;
	/* 0x0:6 */ long unsigned int COU : 6;
	/* 0x1:4 */ long unsigned int COV : 10;
	/* 0x2:6 */ long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct { // 0x8
	/* 0x0 */ long unsigned int pad00;
} sceGsTexflush;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int XDR : 2;
	/* 0x0:2 */ long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int SSAX : 11;
	/* 0x1:3 */ long unsigned int pad11 : 5;
	/* 0x2:0 */ long unsigned int SSAY : 11;
	/* 0x3:3 */ long unsigned int pad27 : 5;
	/* 0x4:0 */ long unsigned int DSAX : 11;
	/* 0x5:3 */ long unsigned int pad43 : 5;
	/* 0x6:0 */ long unsigned int DSAY : 11;
	/* 0x7:3 */ long unsigned int DIR : 2;
	/* 0x7:5 */ long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int RRW : 12;
	/* 0x1:4 */ long unsigned int pad12 : 20;
	/* 0x4:0 */ long unsigned int RRH : 12;
	/* 0x5:4 */ long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int U : 14;
	/* 0x1:6 */ long unsigned int pad14 : 2;
	/* 0x2:0 */ long unsigned int V : 14;
	/* 0x3:6 */ long unsigned int pad30 : 34;
} sceGsUv;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int OFX : 16;
	/* 0x2:0 */ long unsigned int pad16 : 16;
	/* 0x4:0 */ long unsigned int OFY : 16;
	/* 0x6:0 */ long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 32;
} sceGsXyz;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int X : 16;
	/* 0x2:0 */ long unsigned int Y : 16;
	/* 0x4:0 */ long unsigned int Z : 24;
	/* 0x7:0 */ long unsigned int F : 8;
} sceGsXyzf;

typedef struct { // 0x8
	/* 0x0:0 */ long unsigned int ZBP : 9;
	/* 0x1:1 */ long unsigned int pad09 : 15;
	/* 0x3:0 */ long unsigned int PSM : 4;
	/* 0x3:4 */ long unsigned int pad28 : 4;
	/* 0x4:0 */ long unsigned int ZMSK : 1;
	/* 0x4:1 */ long unsigned int pad33 : 31;
} sceGsZbuf;

typedef struct { // 0x28
	/* 0x00 */ tGS_PMODE pmode;
	/* 0x08 */ tGS_SMODE2 smode2;
	/* 0x10 */ tGS_DISPFB2 dispfb;
	/* 0x18 */ tGS_DISPLAY2 display;
	/* 0x20 */ tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame1;
	/* 0x08 */ u_long frame1addr;
	/* 0x10 */ sceGsZbuf zbuf1;
	/* 0x18 */ long int zbuf1addr;
	/* 0x20 */ sceGsXyoffset xyoffset1;
	/* 0x28 */ long int xyoffset1addr;
	/* 0x30 */ sceGsScissor scissor1;
	/* 0x38 */ long int scissor1addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test1;
	/* 0x78 */ long int test1addr;
} sceGsDrawEnv1;

typedef struct { // 0x80
	/* 0x00 */ sceGsFrame frame2;
	/* 0x08 */ u_long frame2addr;
	/* 0x10 */ sceGsZbuf zbuf2;
	/* 0x18 */ long int zbuf2addr;
	/* 0x20 */ sceGsXyoffset xyoffset2;
	/* 0x28 */ long int xyoffset2addr;
	/* 0x30 */ sceGsScissor scissor2;
	/* 0x38 */ long int scissor2addr;
	/* 0x40 */ sceGsPrmodecont prmodecont;
	/* 0x48 */ long int prmodecontaddr;
	/* 0x50 */ sceGsColclamp colclamp;
	/* 0x58 */ long int colclampaddr;
	/* 0x60 */ sceGsDthe dthe;
	/* 0x68 */ long int dtheaddr;
	/* 0x70 */ sceGsTest test2;
	/* 0x78 */ long int test2addr;
} sceGsDrawEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGsTest testa;
	/* 0x08 */ long int testaaddr;
	/* 0x10 */ sceGsPrim prim;
	/* 0x18 */ long int primaddr;
	/* 0x20 */ sceGsRgbaq rgbaq;
	/* 0x28 */ long int rgbaqaddr;
	/* 0x30 */ sceGsXyz xyz2a;
	/* 0x38 */ long int xyz2aaddr;
	/* 0x40 */ sceGsXyz xyz2b;
	/* 0x48 */ long int xyz2baddr;
	/* 0x50 */ sceGsTest testb;
	/* 0x58 */ long int testbaddr;
} sceGsClear;

typedef struct { // 0x230
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw0;
	/* 0x0e0 */ sceGsClear clear0;
	/* 0x140 */ sceGifTag giftag1;
	/* 0x150 */ sceGsDrawEnv1 draw1;
	/* 0x1d0 */ sceGsClear clear1;
} sceGsDBuff;

typedef struct { // 0x330
	/* 0x000 */ sceGsDispEnv disp[2];
	/* 0x050 */ sceGifTag giftag0;
	/* 0x060 */ sceGsDrawEnv1 draw01;
	/* 0x0e0 */ sceGsDrawEnv2 draw02;
	/* 0x160 */ sceGsClear clear0;
	/* 0x1c0 */ sceGifTag giftag1;
	/* 0x1d0 */ sceGsDrawEnv1 draw11;
	/* 0x250 */ sceGsDrawEnv2 draw12;
	/* 0x2d0 */ sceGsClear clear1;
} sceGsDBuffDc;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex11;
	/* 0x18 */ long int tex11addr;
	/* 0x20 */ sceGsTex0 tex01;
	/* 0x28 */ long int tex01addr;
	/* 0x30 */ sceGsClamp clamp1;
	/* 0x38 */ long int clamp1addr;
} sceGsTexEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsTexflush texflush;
	/* 0x08 */ long int texflushaddr;
	/* 0x10 */ sceGsTex1 tex12;
	/* 0x18 */ long int tex12addr;
	/* 0x20 */ sceGsTex0 tex02;
	/* 0x28 */ long int tex02addr;
	/* 0x30 */ sceGsClamp clamp2;
	/* 0x38 */ long int clamp2addr;
} sceGsTexEnv2;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha1;
	/* 0x08 */ long int alpha1addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba1;
	/* 0x38 */ long int fba1addr;
} sceGsAlphaEnv;

typedef struct { // 0x40
	/* 0x00 */ sceGsAlpha alpha2;
	/* 0x08 */ long int alpha2addr;
	/* 0x10 */ sceGsPabe pabe;
	/* 0x18 */ long int pabeaddr;
	/* 0x20 */ sceGsTexa texa;
	/* 0x28 */ long int texaaddr;
	/* 0x30 */ sceGsFba fba2;
	/* 0x38 */ long int fba2addr;
} sceGsAlphaEnv2;

typedef struct { // 0x60
	/* 0x00 */ sceGifTag giftag0;
	/* 0x10 */ sceGsBitbltbuf bitbltbuf;
	/* 0x18 */ long int bitbltbufaddr;
	/* 0x20 */ sceGsTrxpos trxpos;
	/* 0x28 */ long int trxposaddr;
	/* 0x30 */ sceGsTrxreg trxreg;
	/* 0x38 */ long int trxregaddr;
	/* 0x40 */ sceGsTrxdir trxdir;
	/* 0x48 */ long int trxdiraddr;
	/* 0x50 */ sceGifTag giftag1;
} sceGsLoadImage;

typedef struct { // 0x70
	/* 0x00 */ u_int vifcode[4];
	/* 0x10 */ sceGifTag giftag;
	/* 0x20 */ sceGsBitbltbuf bitbltbuf;
	/* 0x28 */ long int bitbltbufaddr;
	/* 0x30 */ sceGsTrxpos trxpos;
	/* 0x38 */ long int trxposaddr;
	/* 0x40 */ sceGsTrxreg trxreg;
	/* 0x48 */ long int trxregaddr;
	/* 0x50 */ sceGsFinish finish;
	/* 0x58 */ long int finishaddr;
	/* 0x60 */ sceGsTrxdir trxdir;
	/* 0x68 */ long int trxdiraddr;
} sceGsStoreImage;

typedef struct { // 0x10
	/* 0x0 */ short int sceGsInterMode;
	/* 0x2 */ short int sceGsOutMode;
	/* 0x4 */ short int sceGsFFMode;
	/* 0x6 */ short int sceGsVersion;
	/* 0x8 */ int (*sceGsVSCfunc)(/* parameters unknown */);
	/* 0xc */ int sceGsVSCid;
} sceGsGParam;

struct _sceDmaTag { // 0x10
	/* 0x0 */ u_short qwc;
	/* 0x2 */ u_char mark;
	/* 0x3 */ u_char id;
	/* 0x4 */ _sceDmaTag *next;
	/* 0x8 */ u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct { // 0x14
	/* 0x00 */ u_char sts;
	/* 0x01 */ u_char std;
	/* 0x02 */ u_char mfd;
	/* 0x03 */ u_char rcycle;
	/* 0x04 */ u_short express;
	/* 0x06 */ u_short notify;
	/* 0x08 */ u_short sqwc;
	/* 0x0a */ u_short tqwc;
	/* 0x0c */ void *rbadr;
	/* 0x10 */ u_int rbmsk;
} sceDmaEnv;

typedef struct { // 0x90
	/* 0x00 */ tD_CHCR chcr;
	/* 0x04 */ u_int p0[3];
	/* 0x10 */ void *madr;
	/* 0x14 */ u_int p1[3];
	/* 0x20 */ u_int qwc;
	/* 0x24 */ u_int p2[3];
	/* 0x30 */ sceDmaTag *tadr;
	/* 0x34 */ u_int p3[3];
	/* 0x40 */ void *as0;
	/* 0x44 */ u_int p4[3];
	/* 0x50 */ void *as1;
	/* 0x54 */ u_int p5[3];
	/* 0x60 */ u_int p6[4];
	/* 0x70 */ u_int p7[4];
	/* 0x80 */ void *sadr;
	/* 0x84 */ u_int p8[3];
} sceDmaChan;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_int pad03;
} sceDmaPacket;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_int pad11;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif0Packet;

typedef struct { // 0x20
	/* 0x00 */ u_int *pCurrent;
	/* 0x04 */ u_long128 *pBase;
	/* 0x08 */ u_long128 *pDmaTag;
	/* 0x0c */ u_int *pVifCode;
	/* 0x10 */ u_int numlen;
	/* 0x14 */ u_long *pGifTag;
	/* 0x18 */ u_int pad12;
	/* 0x1c */ u_int pad13;
} sceVif1Packet;

typedef struct { // 0x10
	/* 0x0 */ u_int *pCurrent;
	/* 0x4 */ u_long128 *pBase;
	/* 0x8 */ u_long128 *pDmaTag;
	/* 0xc */ u_long *pGifTag;
} sceGifPacket;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_short vi[16];
} sceDevVu0Cnd;

typedef struct { // 0x240
	/* 0x000 */ u_long128 vf[32];
	/* 0x200 */ u_int status;
	/* 0x204 */ u_int mac;
	/* 0x208 */ u_int clipping;
	/* 0x20c */ u_int r;
	/* 0x210 */ u_int i;
	/* 0x214 */ u_int q;
	/* 0x218 */ u_int p;
	/* 0x21c */ u_short vi[16];
} sceDevVu1Cnd;

typedef struct { // 0x30
	/* 0x00 */ u_long128 tag;
	/* 0x10 */ u_int stat;
	/* 0x14 */ u_int count;
	/* 0x18 */ u_int p3count;
	/* 0x1c */ u_int p3tag;
	/* 0x20 */ u_int pad;
} sceDevGifCnd;

typedef struct { // 0x3c
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short mark;
	/* 0x32 */ u_short num;
	/* 0x34 */ u_char error;
	/* 0x35 */ u_char cl;
	/* 0x36 */ u_char wl;
	/* 0x37 */ u_char cmod;
	/* 0x38 */ u_char pad;
} sceDevVif0Cnd;

typedef struct { // 0x44
	/* 0x00 */ u_int row[4];
	/* 0x10 */ u_int col[4];
	/* 0x20 */ u_int mask;
	/* 0x24 */ u_int code;
	/* 0x28 */ u_int stat;
	/* 0x2c */ u_short itop;
	/* 0x2e */ u_short itops;
	/* 0x30 */ u_short base;
	/* 0x32 */ u_short offset;
	/* 0x34 */ u_short top;
	/* 0x36 */ u_short tops;
	/* 0x38 */ u_short mark;
	/* 0x3a */ u_short num;
	/* 0x3c */ u_char error;
	/* 0x3d */ u_char cl;
	/* 0x3e */ u_char wl;
	/* 0x3f */ u_char cmod;
	/* 0x40 */ u_char pad;
} sceDevVif1Cnd;

typedef int qword[4];
typedef int sceVu0IVECTOR[4];
typedef float sceVu0FVECTOR[4];
typedef float sceVu0FMATRIX[4][4];
typedef void (*CdlCB)(/* parameters unknown */);

typedef struct { // 0x4
	/* 0x0 */ u_char trycount;
	/* 0x1 */ u_char spindlctrl;
	/* 0x2 */ u_char datapattern;
	/* 0x3 */ u_char pad;
} sceCdRMode;

typedef struct { // 0x4
	/* 0x0 */ u_char minute;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char sector;
	/* 0x3 */ u_char track;
} sceCdlLOCCD;

typedef struct { // 0x24
	/* 0x00 */ u_int lsn;
	/* 0x04 */ u_int size;
	/* 0x08 */ char name[16];
	/* 0x18 */ u_char date[8];
	/* 0x20 */ u_int flag;
} sceCdlFILE;

typedef struct { // 0x8
	/* 0x0 */ u_char stat;
	/* 0x1 */ u_char second;
	/* 0x2 */ u_char minute;
	/* 0x3 */ u_char hour;
	/* 0x4 */ u_char pad;
	/* 0x5 */ u_char day;
	/* 0x6 */ u_char month;
	/* 0x7 */ u_char year;
} sceCdCLOCK;

enum {
	__no_type_class = -1,
	__void_type_class = 0,
	__integer_type_class = 1,
	__char_type_class = 2,
	__enumeral_type_class = 3,
	__boolean_type_class = 4,
	__pointer_type_class = 5,
	__reference_type_class = 6,
	__offset_type_class = 7,
	__real_type_class = 8,
	__complex_type_class = 9,
	__function_type_class = 10,
	__method_type_class = 11,
	__record_type_class = 12,
	__union_type_class = 13,
	__array_type_class = 14,
	__string_type_class = 15,
	__set_type_class = 16,
	__file_type_class = 17,
	__lang_type_class = 18
};

typedef __gnuc_va_list va_list;

union __dmath { // 0x8
	/* 0x0 */ __uint32_t i[2];
	/* 0x0 */ double d;
};

struct exception { // 0x28
	/* 0x00 */ int type;
	/* 0x04 */ char *name;
	/* 0x08 */ double arg1;
	/* 0x10 */ double arg2;
	/* 0x18 */ double retval;
	/* 0x20 */ int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

typedef long int dword[2];
typedef float LMATRIX[3][4];

struct _SgCOORDUNIT { // 0xe0
	/* 0x00 */ sceVu0FMATRIX matrix;
	/* 0x40 */ sceVu0FMATRIX lwmtx;
	/* 0x80 */ sceVu0FMATRIX workm;
	/* 0xc0 */ sceVu0FVECTOR rot;
	/* 0xd0 */ _SgCOORDUNIT *parent;
	/* 0xd4 */ u_int flg;
	/* 0xd8 */ u_int edge_check;
	/* 0xdc */ u_int camin;
};

typedef _SgCOORDUNIT SgCOORDUNIT;

typedef struct { // 0x230
	/* 0x000 */ sceVu0FVECTOR p;
	/* 0x010 */ sceVu0FVECTOR i;
	/* 0x020 */ float roll;
	/* 0x024 */ float fov;
	/* 0x028 */ float nearz;
	/* 0x02c */ float farz;
	/* 0x030 */ float ax;
	/* 0x034 */ float ay;
	/* 0x038 */ float cx;
	/* 0x03c */ float cy;
	/* 0x040 */ float zmin;
	/* 0x044 */ float zmax;
	/* 0x048 */ float pad[2];
	/* 0x050 */ sceVu0FMATRIX vs;
	/* 0x090 */ sceVu0FMATRIX vc;
	/* 0x0d0 */ sceVu0FMATRIX vcv;
	/* 0x110 */ sceVu0FMATRIX wv;
	/* 0x150 */ sceVu0FMATRIX ws;
	/* 0x190 */ sceVu0FMATRIX wc;
	/* 0x1d0 */ sceVu0FMATRIX wcv;
	/* 0x210 */ sceVu0FVECTOR zd;
	/* 0x220 */ sceVu0FVECTOR yd;
} SgCAMERA;

typedef struct { // 0x90
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR direction;
	/* 0x20 */ sceVu0FVECTOR ldirection;
	/* 0x30 */ sceVu0FVECTOR spvector;
	/* 0x40 */ sceVu0FVECTOR diffuse;
	/* 0x50 */ sceVu0FVECTOR specular;
	/* 0x60 */ sceVu0FVECTOR ambient;
	/* 0x70 */ float intens;
	/* 0x74 */ float intens_b;
	/* 0x78 */ float power;
	/* 0x7c */ float btimes;
	/* 0x80 */ float spower;
	/* 0x84 */ int Enable;
	/* 0x88 */ int SEnable;
	/* 0x8c */ int num;
} SgLIGHT;

typedef struct { // 0xd0
	/* 0x00 */ LMATRIX DLightMtx;
	/* 0x30 */ LMATRIX SLightMtx;
	/* 0x60 */ LMATRIX DColorMtx;
	/* 0x90 */ LMATRIX SColorMtx;
	/* 0xc0 */ sceVu0FVECTOR ambient;
} SgPARALLELGROUP;

typedef struct { // 0xc0
	/* 0x00 */ sceVu0FVECTOR pos[3];
	/* 0x30 */ sceVu0FVECTOR btimes;
	/* 0x40 */ sceVu0FVECTOR eyevec;
	/* 0x50 */ LMATRIX DColorMtx;
	/* 0x80 */ LMATRIX SColorMtx;
	/* 0xb0 */ int lnum[3];
	/* 0xbc */ u_int pad;
} SgPOINTGROUP;

typedef struct { // 0x130
	/* 0x000 */ sceVu0FVECTOR pos[3];
	/* 0x030 */ sceVu0FVECTOR intens;
	/* 0x040 */ sceVu0FVECTOR intens_b;
	/* 0x050 */ sceVu0FVECTOR btimes;
	/* 0x060 */ LMATRIX WDLightMtx;
	/* 0x090 */ LMATRIX SLightMtx;
	/* 0x0c0 */ LMATRIX DColorMtx;
	/* 0x0f0 */ LMATRIX SColorMtx;
	/* 0x120 */ int lnum[3];
	/* 0x12c */ u_int pad;
} SgSPOTGROUP;

typedef struct { // 0x150
	/* 0x000 */ LMATRIX Parallel_DLight;
	/* 0x030 */ LMATRIX Parallel_SLight;
	/* 0x060 */ LMATRIX Spot_pos;
	/* 0x090 */ sceVu0FVECTOR Spot_intens;
	/* 0x0a0 */ sceVu0FVECTOR Spot_intens_b;
	/* 0x0b0 */ LMATRIX Spot_WDLightMtx;
	/* 0x0e0 */ LMATRIX Spot_SLightMtx;
	/* 0x110 */ LMATRIX Point_pos;
	/* 0x140 */ sceVu0FVECTOR Point_eyevec;
} SgVULightCoord;

typedef struct { // 0x80
	/* 0x00 */ qword ParallelVif;
	/* 0x10 */ sceVu0FVECTOR Parallel_Ambient;
	/* 0x20 */ LMATRIX Parallel_DColor;
	/* 0x50 */ LMATRIX Parallel_SColor;
} SgVULightParallel;

typedef struct { // 0x80
	/* 0x00 */ qword SpotVif;
	/* 0x10 */ sceVu0FVECTOR Spot_btimes;
	/* 0x20 */ LMATRIX Spot_DColor;
	/* 0x50 */ LMATRIX Spot_SColor;
} SgVULightSpot;

typedef struct { // 0x80
	/* 0x00 */ qword PointVif;
	/* 0x10 */ sceVu0FVECTOR Point_btimes;
	/* 0x20 */ LMATRIX Point_DColor;
	/* 0x50 */ LMATRIX Point_SColor;
} SgVULightPoint;

typedef struct { // 0x6
	/* 0x0 */ u_char TexNum;
	/* 0x1 */ u_char pads;
	/* 0x2 */ u_char AnmON;
	/* 0x3 */ u_char AnmStep;
	/* 0x4 */ u_char AnmCnt;
	/* 0x5 */ u_char AnmLoop;
} TextureAnimation;

typedef struct { // 0x60
	/* 0x00 */ void *shadow_model;
	/* 0x04 */ int smodel_num;
	/* 0x08 */ void **search_model;
	/* 0x0c */ int search_num;
	/* 0x10 */ void *source_model;
	/* 0x20 */ sceVu0FVECTOR direction;
	/* 0x30 */ sceVu0FVECTOR *bbox;
	/* 0x34 */ SgCAMERA *camera;
	/* 0x40 */ sceVu0IVECTOR color;
	/* 0x50 */ u_long shadow_tex0;
} ShadowHandle;

typedef struct { // 0x6
	/* 0x0 */ short int GroupNo;
	/* 0x2 */ short int Num;
	/* 0x4 */ short int Lists[1];
} ModelGroup;

typedef struct { // 0x10
	/* 0x0 */ u_short QWC;
	/* 0x2:0 */ unsigned int DUMMY : 10;
	/* 0x3:2 */ unsigned int IDFLG : 5;
	/* 0x4 */ u_int ADDR;
	/* 0x8 */ u_int pad[2];
} SgDMAtag;

typedef struct { // 0x10
	/* 0x0 */ u_short QWC;
	/* 0x2:0 */ unsigned int DUMMY : 10;
	/* 0x3:2 */ unsigned int PCE : 2;
	/* 0x3:4 */ unsigned int ID : 3;
	/* 0x3:7 */ unsigned int IRQ : 1;
	/* 0x4:0 */ unsigned int ADDR : 31;
	/* 0x7:7 */ unsigned int SPR : 1;
	/* 0x8 */ u_int pad[2];
} SgSourceChainTag;

typedef struct { // 0x10
	/* 0x0 */ u_short QWC;
	/* 0x2:0 */ unsigned int DUMMY : 10;
	/* 0x3:2 */ unsigned int PCE : 2;
	/* 0x3:4 */ unsigned int ID : 3;
	/* 0x3:7 */ unsigned int IRQ : 1;
	/* 0x4:0 */ unsigned int ADDR : 31;
	/* 0x7:7 */ unsigned int SPR : 1;
	/* 0x8 */ u_int pad[2];
} SgDestinationTag;

typedef struct { // 0x10
	/* 0x0 */ int num;
	/* 0x4 */ int lnum[3];
} MatCache;

typedef struct { // 0x48
	/* 0x00 */ int cache_on;
	/* 0x04 */ int edge_check;
	/* 0x08 */ int cn0;
	/* 0x0c */ int cn1;
	/* 0x10 */ u_int tagd_addr;
	/* 0x14 */ int qwc;
	/* 0x18 */ MatCache Parallel;
	/* 0x28 */ MatCache Point;
	/* 0x38 */ MatCache Spot;
} CoordCache;

typedef struct { // 0x24
	/* 0x00 */ u_int addr;
	/* 0x04 */ u_int max_width;
	/* 0x08 */ u_int max_height;
	/* 0x0c */ u_int width;
	/* 0x10 */ u_int height;
	/* 0x14 */ u_int width_p;
	/* 0x18 */ u_int height_p;
	/* 0x1c */ float scale;
	/* 0x20 */ float fund_scale;
} ShadowTexture;

enum {
	VUPROG_SG = 0,
	VUPROG_SG_PRESET0 = 1,
	VUPROG_SG_PRESET2 = 2,
	VUPROG_SG_SHADOW = 3
};

typedef signed char s_char;
typedef short int s_short;
typedef long int s_long;

enum GAME_MODE {
	GAME_MODE_INIT = 0,
	GAME_MODE_MCCHECK = 1,
	GAME_MODE_OUTGAME = 2,
	GAME_MODE_INGAME = 3
};

enum GAME_MODE_CHANGE {
	GMC_OUT_MENU_IN = 0,
	GMC_IN_GAMEOVER_OUT = 1,
	GMC_IN_GAMECLEAR_OUT = 2,
	GMC_IN_GAMERETIRE_OUT = 3
};

enum {
	INGAME_MODE_FIRST_LOAD = 0,
	INGAME_MODE_INIT = 1,
	INGAME_MODE_WAIT = 2,
	INGAME_MODE_NEW_GAME = 3,
	INGAME_MODE_LOAD_START = 4,
	INGAME_MODE_MSN_TITLE = 5,
	INGAME_MODE_NOMAL = 6,
	INGAME_MODE_EVENT = 7,
	INGAME_MODE_SPECIAL_EVENT = 8,
	INGAME_MODE_AREA_MOVE = 9,
	INGAME_MODE_MENU = 10,
	INGAME_MODE_PAUSE = 11,
	INGAME_MODE_SPD_MAP = 12,
	INGAME_MODE_SPD_OPT = 13,
	INGAME_MODE_GET_ITEM = 14,
	INGAME_MODE_WANDER_SOUL = 15,
	INGAME_MODE_SAVE_POINT = 16,
	INGAME_MODE_PHOTO_AFTER = 17,
	INGAME_MODE_GHOST_DEAD = 18,
	INGAME_MODE_SGST_DISP = 19,
	INGAME_MODE_GAME_OVER = 20,
	INGAME_MODE_GAME_OVER_ALBUM = 21,
	INGAME_MODE_INTER_MSN = 22,
	INGAME_MODE_ENDING = 23,
	INGAME_MODE_WAIT_MSN0 = 24
};

enum {
	OG_TITLE_MODE = 0,
	OG_LOADGAME_MODE = 1,
	OG_OPTION_MODE = 2,
	OG_ALBUM_MODE = 3,
	OG_MOVIE_MODE = 4,
	OG_DEMOPLAY_MODE = 5,
	OG_NAME_ENTRY_MODE = 6,
	OG_MAPDATA_EDIT_MODE = 7,
	OG_SOUND_TEST_MODE = 8,
	OG_SCENE_TEST_MODE = 9,
	OG_MOTION_TEST_MODE = 10,
	OG_2D_TEST_MODE = 11
};

enum OUTGAME_MODE {
	OUTGAME_MODE_INIT = 0,
	OUTGAME_MODE_WAIT = 1,
	OUTGAME_MODE_LOGO = 2,
	OUTGAME_MODE_TITLE_TOP = 3,
	OUTGAME_MODE_TITLE = 4,
	OUTGAME_MODE_ALBUM = 5,
	OUTGAME_MODE_BATTLE = 6,
	OUTGAME_MODE_OPTION = 7,
	OUTGAME_MODE_MODESEL = 8,
	OUTGAME_MODE_MAP_DATA_EDIT = 9,
	OUTGAME_MODE_SOUND_TEST = 10,
	OUTGAME_MODE_SCENE_TEST = 11,
	OUTGAME_MODE_MOTION_TEST = 12,
	OUTGAME_MODE_ROOM_SIZE_CHECK = 13,
	OUTGAME_MODE_LAYOUT_TEST = 14,
	OUTGAME_MODE_DBG_MAX = 9,
	OUTGAME_MODE_DBG_STORY_MODE = 5
};

enum TITLE_MODE {
	TITLE_INIT = 0,
	TITLE_WAIT = 1,
	TITLE_TITLE = 2,
	TITLE_TITLE_WAIT = 3,
	TITLE_TITLE_WAIT2 = 4,
	TITLE_TITLE_SEL = 5,
	TITLE_LOAD_PRE = 6,
	TITLE_MEMCA_LOAD_WAIT = 7,
	TITLE_MEMCA_LOAD = 8,
	TITLE_MODE_SEL = 9,
	TITLE_DIFF_SEL = 10,
	TITLE_INIT_FROM_IN = 11,
	TITLE_WAIT_FROM_IN = 12,
	TITLE_MODE_SELECT = 13,
	TITLE_ALBM_LOAD_PRE = 14,
	TITLE_ALBM_LOAD1 = 15,
	TITLE_ALBM_LOAD2 = 16,
	TITLE_ALBM_MAIN_PRE = 17,
	TITLE_ALBM_MAIN = 18,
	TITLE_ALBM_SAVE_PRE = 19,
	TITLE_ALBM_SAVE = 20,
	TITLE_ALBM_LOAD_MODE_PRE = 21,
	TITLE_ALBM_LOAD_MODE = 22,
	TITLE_TITLE_SEL_INIT = 23,
	TITLE_TITLE_SEL_BGMREQ = 24,
	TITLE_ALBM_LOAD0 = 25,
	TITLE_INIT_FROM_IN_BGMREQ = 26,
	TITLE_MODE_SEL_BGMREQ = 27,
	TITLE_MOVIE_STEP1 = 28,
	TITLE_MOVIE_STEP2 = 29,
	TITLE_MOVIE_STEP3 = 30
};

enum {
	NUM_TYPE_R = 0,
	NUM_TYPE_L = 1,
	NUM_TYPE_Z = 2
};

enum MOVIE_STAT {
	MOVIE_STAT_NOPLAY = 0,
	MOVIE_STAT_WAIT1 = 1,
	MOVIE_STAT_WAIT2 = 2,
	MOVIE_STAT_PLAY_MPEG = 3,
	MOVIE_STAT_END1 = 4,
	MOVIE_STAT_END2 = 5,
	MOVIE_STAT_TEST = 6,
	MOVIE_STAT_LOGO = 7
};

enum {
	ZERO_CHAPTER0 = 0,
	ZERO_CHAPTER1 = 1,
	ZERO_CHAPTER2 = 2,
	ZERO_CHAPTER3 = 3,
	ZERO_CHAPTER4 = 4,
	ZERO_CHAPTER5 = 5,
	ZERO_CHAPTER_MAX = 6,
	ZERO_MISSION0 = 1,
	ZERO_MISSION1 = 2,
	ZERO_MISSION2 = 3,
	ZERO_MISSION3 = 4,
	ZERO_MISSION4 = 5,
	ZERO_MISSION5 = 6,
	ZERO_MISSION_MAX = 7
};

enum MAP_FLOOR_LBL {
	MAP_FLOOR_B1 = 0,
	MAP_FLOOR_F1 = 1,
	MAP_FLOOR_F2 = 2,
	MAP_FLOOR_F3 = 3,
	MAP_FLOOR_MAX = 4
};

enum MAP_TYPE_CODE {
	MAP_ROOM_DAT = 0,
	MAP_CAMERA = 1,
	MAP_CAMERA_B = 2,
	MAP_CAMERA_D = 3,
	MAP_CAMERA_T = 4,
	MAP_HEIGHT = 5,
	MAP_HIT_CHECK = 6,
	MAP_REQ_EVENT = 7,
	MAP_REQ_SE = 8,
	MAP_FIND_DAT = 9,
	MAP_DOOR_DAT = 10,
	MAP_FURNITUR = 11,
	MAP_MOVE_MOT = 12
};

enum {
	EW_JIBAKU1 = 0,
	EW_JIBAKU2 = 1,
	EW_FUYU = 2,
	EW_AUTO = 3
};

enum {
	CK_NORMAL = 0,
	CK_BATTLE = 1,
	CK_DRAMA = 2,
	CK_DOOR = 3,
	CK_MAX = 4
};

enum {
	FILE_TYPE_END = 0,
	FILE_TYPE_DAT = 1,
	FILE_TYPE_SE = 2,
	FILE_TYPE_CAM_DAT = 3,
	FILE_TYPE_CAM_DAT2 = 4,
	FILE_TYPE_CAM_DAT3 = 5,
	FILE_TYPE_CAM_DAT4 = 6,
	FILE_TYPE_MAP_DAT = 7,
	FILE_TYPE_ENE_MDL = 8,
	FILE_TYPE_BENE_MOT = 9,
	FILE_TYPE_ENE_MOT = 10,
	FILE_TYPE_ITM_MDL = 11,
	FILE_TYPE_ROOM = 12,
	FILE_TYPE_SCENE = 13
};

enum SEBUF_GHOST_CHK {
	SEBUF_GHOST_TYPE = 0,
	SEBUF_GHOST_NO = 1,
	SEBUF_GHOST_CHK_NUM = 2
};

enum ROOM_SE_LOAD_AT_MDL_LOAD {
	RSE_NO_LOAD = 0,
	RSE_ONE_LOAD = 1,
	RSE_NEXT_LOAD = 2
};

enum {
	OPT_KT_ANALOG1 = 0,
	OPT_KT_RADICON1 = 1,
	OPT_KT_ANALOG2 = 2,
	OPT_KT_RADICON2 = 3,
	OPT_KT_ANALOG1R = 4,
	OPT_KT_RADICON1R = 5,
	OPT_KT_ANALOG2R = 6,
	OPT_KT_RADICON2R = 7,
	KEY_TYPE_NUM = 8
};

enum {
	PMODE_NORMAL = 0,
	PMODE_FINDER = 1,
	PMODE_DMG = 2,
	PMODE_FINDER_END = 3,
	PMODE_MSG_DISP = 4,
	PMODE_POSE = 5,
	PMODE_FINDER_IN = 6,
	PMODE_PRE_DMG = 7,
	PMODE_OVERHEAT = 8,
	PMODE_FIN_CAM = 9,
	PMODE_ANIME = 10
};

enum {
	PCT_NORMAL = 0
};

enum {
	PCON_NORMAL = 0,
	PCON_MAHI = 1,
	PCON_KONWAKU = 2,
	PCON_TEBURE = 3,
	PCON_MEKURAMASHI = 4,
	PCON_TEBURE2 = 5
};

enum {
	EBLINK_DATA = 0,
	EARATIO_DATA = 1,
	EACT_NORMAL = 2,
	EACT_CAPTURE = 3,
	EACT_PVIEW = 4,
	EACT_ATK = 5,
	EACT_OUTAREA = 6,
	EACT_DMG = 7,
	EACT_DEL = 8,
	EACT_APPEAR = 9,
	EACT_PUSH = 10,
	EACT_NONE = 255
};

enum {
	PHOTO_MODE_NO_REQ = 0,
	PHOTO_MODE_PRE0 = 1,
	PHOTO_MODE_PRE1 = 2,
	PHOTO_MODE_SCORE = 3,
	PHOTO_MODE_CNG_PHOTO = 4,
	PHOTO_MODE_MAKE_DISP = 5,
	PHOTO_MODE_DISP_WAIT1 = 6,
	PHOTO_MODE_DISP_WAIT2 = 7,
	PHOTO_MODE_CAP = 8,
	PHOTO_MODE_END = 9,
	PHOTO_MODE_AFTER = 10,
	PHOTO_MODE_HINT_LOAD = 11
};

enum {
	SUB_NOTING = 0,
	SUB_KIND_BENE = 1,
	SUB_KIND_FENE = 2,
	SUB_KIND_AENE = 3,
	SUB_KIND_FURN = 4,
	SUB_KIND_RARE = 5,
	SUB_KIND_MAKE = 6
};

enum {
	NOMAL_PHOTO = 0,
	PHOTO_MAKE_MONO = 1,
	PHOTO_MAKE_NO_ITEM = 2,
	PHOTO_MAKE_DARK = 3,
	PHOTO_MAKE_FALTH = 4,
	PHOTO_MAKE_BLURRY = 5,
	PHOTO_MAKE_2DPLUS = 6,
	PHOTO_MAKE_3DPLUS = 7
};

enum {
	EAP_KUBI = 0,
	EAP_KATA = 1,
	EAP_ASHI = 2
};

enum {
	CFSB_NOT = 0,
	CFSB_CLOSE = 1,
	CFSB_OPEN = 2,
	CFSB_EQUIP = 3
};

enum {
	CFSB_NO_PUSH = 0,
	CFSB_NO_SLOW = 1,
	CFSB_NO_VIEW = 2,
	CFSB_NO_STOP = 3,
	CFSB_NO_SEARCH = 4,
	CUSTOM_SB_NUM = 5
};

enum {
	CFSP_NO_DIR = 0,
	CFSP_NO_ASEARCH = 1,
	CFSP_NO_ZOOM = 2,
	CFSP_NO_NFILM = 3,
	CFSP_NO_ZERO = 4,
	CUSTOM_SP_NUM = 5
};

enum {
	GRA2D_CALL_OG = 0,
	GRA2D_CALL_IG0 = 1,
	GRA2D_CALL_IG1 = 2,
	GRA2D_CALL_IG0E = 3,
	GRA2D_CALL_IG1E = 4,
	GRA2D_CALL_IG2 = 5,
	GRA2D_CALL_IG3 = 6,
	GRA2D_CALL_IG31 = 7,
	GRA2D_CALL_IG32 = 8,
	GRA2D_LOAD_FONT = 9,
	GRA2D_CACHE_DRAW = 10,
	GRA2D_RESETDEF = 11
};

enum {
	EF_NULL = 0,
	EF_Z_DEP = 1,
	EF_DITHER = 2,
	EF_BLUR_N = 3,
	EF_BLUR_B = 4,
	EF_BLUR_W = 5,
	EF_DEFORM = 6,
	EF_FOCUS = 7,
	EF_OVERLAP = 8,
	EF_FADEFRAME = 9,
	EF_RENZFLARE = 10,
	EF_BLACKFILTER = 11,
	EF_NEGA = 12,
	EF_NCONTRAST = 13,
	EF_NCONTRAST2 = 14,
	EF_NCONTRAST3 = 15,
	EF_MAGATOKI = 16,
	EF_ENEDMG1 = 17,
	EF_ENEDMG2 = 18,
	EF_SPIRIT = 19,
	EF_HALO = 20,
	EF_RIPPLE = 21,
	EF_RIPPLE2 = 22,
	EF_FIRE = 23,
	EF_FIRE2 = 24,
	EF_TORCH = 25,
	EF_SMOKE = 26,
	EF_PDEFORM = 27,
	EF_ENEFIRE = 28,
	EF_DUST = 29,
	EF_WATERDROP = 30,
	EF_SUNSHINE = 31,
	EF_NEGACIRCLE = 32,
	EF_ENEFACE = 33,
	EF_FACESPIRIT = 34,
	EF_DITHER2 = 35,
	EF_Z_DEP2 = 36,
	EF_HAZE = 37,
	EF_PBLUR = 38,
	EF_ENEIN = 39,
	EF_ENEOUT = 40,
	EF_LUMINE = 41,
	EF_STEALTH = 42,
	EF_STEALTH2 = 43,
	EF_007 = 44,
	EF_MONO = 45,
	EF_SEPIA = 46
};

enum {
	SS_GOEMON = 0,
	SS_SYOIN = 1,
	SS_IKESU1 = 2,
	SS_IKESU2 = 3,
	SS_KAIRO1 = 4,
	SS_KAIRO2 = 5,
	SS_KAIDAN = 6,
	SS_END = 7
};

enum {
	R000_GENKAN = 0,
	R001_FUSUMA = 1,
	R002_IZANAI = 2,
	R003_OUSETSU = 3,
	R004 = 4,
	R005 = 5,
	R006_HAKONIWA = 6,
	R007_TOMURAI = 7,
	R008_KAIROU = 8,
	R009_NANDO = 9,
	R010_NINGYO = 10,
	R011_GOIMON = 11,
	R012_IMA = 12,
	R013_ANUTSU = 13,
	R014 = 14,
	R015_KOUJI = 15,
	R016_NAKANIWA = 16,
	R017_KAIDAN = 17,
	R018 = 18,
	R019 = 19,
	R020 = 20,
	R021_URANIWA = 21,
	R022_NAKASU = 22,
	R023_IKESU = 23,
	R024_TSUKIMI = 24,
	R025_SANDO = 25,
	RO26_OYASHIRO = 26,
	R027_WATARI = 27,
	R028 = 28,
	R029 = 29,
	R030 = 30,
	R031 = 31,
	R032 = 32,
	R033 = 33,
	R034 = 34,
	R035 = 35,
	R036 = 36,
	R037 = 37,
	R038_TYOUBOU = 38
};

enum {
	M000_MIKU = 0,
	M001_MAFUYU = 1,
	M002_MONOSAK = 2,
	M003_HENSYU = 3,
	M004_JYOSYU = 4,
	M005_SAKKA = 5,
	M006_KOKIRIE = 6,
	M007_KAZOKU = 7,
	M008_DUMMY = 8,
	M009_HENSHITAI = 9,
	M010_HENREI = 10,
	M011_JYOREI = 11,
	M012_SAKKAREI = 12,
	M013_TENAGA = 13,
	M014_KAMIONNA = 14,
	M015_KOMUSO = 15,
	M016_MINREI = 16,
	M017_KIRIE = 17,
	M018_MAYOIGO1 = 18,
	M019_BOUREI1 = 19,
	M020_SAKASA = 20,
	M021_KUBI = 21,
	M022_MAYOIGO2 = 22,
	M023_MAYOIGO3 = 23,
	M024_MEKAKUSHI = 24,
	M025_RTE = 25,
	M026_MINZOKU = 26,
	M027_KONNA = 27,
	M028_KOTOKO = 28,
	M029_MAYOIGO4 = 29,
	M030_SAKKAGE = 30,
	M031_HAIREI = 31,
	M032_SHINKAN1 = 32,
	M033_MINTSUMA = 33,
	M034_SHINKAN2 = 34,
	M035_SHINKAN3 = 35,
	M036_SHINKAN4 = 36,
	M037_TOUSHU = 37,
	M038_NAWAMIKO = 38,
	M039_MAGONLY = 39,
	M040_MAGATOKI = 40,
	M041_DUMMY = 41,
	M042_SYOUKI2 = 42,
	M043_SYOUKI3 = 43,
	M044_SYOUKI4 = 44,
	M045_DUMMY = 45,
	M046_DUMMY = 46,
	M047_SAKKAN = 47,
	M048_TE = 48,
	M049_HENSYUHAND = 49,
	M050_LTE = 50,
	M051_MKIRIE = 51,
	M052_DUMMY = 52,
	M053_DUMMY = 53,
	M054_DUMMY = 54,
	M055_SYOUALL = 55,
	M056_MINDEAD = 56,
	M057_NAWAKOKI = 57,
	M058_BOUREI2 = 58,
	M059_JITOUSHU = 59,
	M060_TENAKAGE = 60,
	M061_MONOJYO = 61,
	M800_BOUREI1 = 62,
	M801_SAKASA = 63,
	M802_KUBI = 64,
	M803_KONNA = 65,
	M804_KOTOKO = 66,
	M900_ONNRYOU = 67,
	M901_ONNRYOU = 68,
	M902_ONNRYOU = 69,
	MAN_MDL_ID_MAX = 70
};

enum {
	A000_MIKU = 0,
	A001_MAFUYU = 1,
	A010_HENREI = 2,
	A011_JYOREI = 3,
	A012_SAKKAREI = 4,
	A013_TENAGA = 5,
	A014_KAMIONNA = 6,
	A015_KOMUSO = 7,
	A016_MINREI = 8,
	A018_MAYOIGO1 = 9,
	A019_BOUREI1 = 10,
	A020_SAKASA = 11,
	A021_KUBI = 12,
	A022_MAYOIGO2 = 13,
	A023_MAYOIGO3 = 14,
	A024_MEKAKUSHI = 15,
	A025_RTE = 16,
	A027_KONNA = 17,
	A028_KOTOKO = 18,
	A031_HAIREI = 19,
	A032_SHINKAN1 = 20,
	A033_MINTSUMA = 21,
	A034_SHINKAN2 = 22,
	A035_SHINKAN3 = 23,
	A036_SHINKAN4 = 24,
	A037_TOUSHU = 25,
	A038_NAWAMIKO = 26,
	A039_DUMMY = 27,
	A040_MAGATOKI = 28,
	A041_DUMMY = 29,
	A042_SYOUKIA = 30,
	A043_SYOUKIB = 31,
	A044_SYOUKIC = 32,
	A051_MKIRIE = 33,
	A058_BOUREI2 = 34,
	A800_BOUREI1 = 35,
	A801_SAKASA = 36,
	A802_KUBI = 37,
	A803_KONNA = 38,
	A804_KOTOKO = 39,
	A001_SAKKA = 40,
	A100_HENSYU = 41,
	A101_HENSYU = 42,
	A102_HENSYU = 43,
	A103_HENREI = 44,
	A104_HENREI = 45,
	A105_HENSYU = 46,
	A106_JYOSYU = 47,
	A107_MEKAKUSHI = 48,
	A108_JYOSYU = 49,
	A109_JYOSYU = 50,
	A110_MINTSUMA = 51,
	A111_KUBI = 52,
	A112_SAKKA = 53,
	A113_KOKIRIE = 54,
	A114_SAKKA = 55,
	A115_SAKKAN = 56,
	A116_MAFUYU = 57,
	A119_JYOSYU = 58,
	A120_KOKIRIE = 59,
	A122_JYOSYU = 60,
	A125_SAKKA = 61,
	A126_SAKASA = 62,
	A128_HENSYU = 63,
	A129_HENREI = 64,
	A130_HENSHITAI = 65,
	A200_MAYOIGO4 = 66,
	A205_MAFUYU = 67,
	A206_MAYOIGO1 = 68,
	A207_MINZOKU = 69,
	A209_KOKIRIE = 70,
	A211_MINZOKU = 71,
	A213_MINZOKU = 72,
	A216_MINZOKU = 73,
	A300_JITOUSHU = 74,
	A301_JITOUSHU = 75,
	A400_KOKIRIE = 76,
	MAN_ANM_ID_MAX = 77
};

enum GHOST_SE_ID {
	SG000_HENREI = 0,
	SG001_JYOREI = 1,
	SG002_SAKKA = 2,
	SG003_DUMMY = 3,
	SG004_MAYOIGO1 = 4,
	SG005_DUMMY = 5,
	SG006_DUMMY = 6,
	SG007_DUMMY = 7,
	SG008_DUMMY = 8,
	SG009_KOMUSO = 9,
	SG010_DUMMY = 10,
	SG011_DUMMY = 11,
	SG012_DUMMY = 12,
	SG013_DUMMY = 13,
	SG014_DUMMY = 14,
	SG015_DUMMY = 15,
	SG016_DUMMY = 16,
	SG017_DUMMY = 17,
	SG018_TENAGA = 18,
	SG019_DUMMY = 19,
	SG020_KAMIONNA = 20,
	SG021_KUBI = 21,
	SG022_DUMMY = 22,
	SG023_DUMMY = 23,
	SG024_DUMMY = 24,
	SG025_DUMMY = 25,
	SG026_DUMMY = 26,
	SE_GHOST_ID_MAX = 27
};

enum {
	CAPN_MAINMENU = 0,
	CAPN_OPTION = 1,
	CAPN_SAVEPOINT = 2,
	CAPN_MODE_SEL = 3,
	CAPN_MISSION_SEL = 4,
	CAPN_SOUND_TEST = 5,
	CAPN_SCR_BRIGHTNESS = 6,
	CAPN_CONTROLLER = 7,
	CAPN_LOAD = 8,
	CAPN_SAVE = 9,
	CAPN_PHOTO_LIST = 10,
	CAPN_PHOTO_ENLARGE = 11,
	CAPN_FILE_LIST = 12,
	CAPN_FILE_DISP = 13,
	CAPN_FILE_PHOTO = 14,
	CAPN_GHOST_LIST = 15,
	CAPN_RANK_LIST = 16,
	CAPN_RANK_ENLARGE = 17,
	CAPN_CAMERA = 18,
	CAPN_ITEM = 19,
	CAPN_ALBUM_ENLARGE = 20,
	CAPN_GET_FILE = 21,
	CAPN_ALBUM = 22
};

typedef struct { // 0x20
	/* 0x00 */ u_long count;
	/* 0x08 */ sceCdCLOCK rtc;
	/* 0x10 */ u_int sreset_count;
	/* 0x14 */ u_char sreset_ng;
	/* 0x15 */ u_char reset;
	/* 0x16 */ u_char pause;
	/* 0x17 */ u_char game_mode;
	/* 0x18 */ u_char mode;
	/* 0x19 */ u_char init;
	/* 0x1a */ u_char load;
	/* 0x1b */ u_char load_mode;
	/* 0x1c */ u_int padding;
} SYS_WRK;

typedef struct { // 0x88
	/* 0x00 */ sceCdCLOCK start;
	/* 0x08 */ sceCdCLOCK real;
	/* 0x10 */ u_long real_ofs;
	/* 0x18 */ u_long game;
	/* 0x20 */ u_long one_game;
	/* 0x28 */ u_long play;
	/* 0x30 */ u_long area;
	/* 0x38 */ u_long room;
	/* 0x40 */ u_long finder;
	/* 0x48 */ u_long swalk;
	/* 0x50 */ u_long nwalk;
	/* 0x58 */ u_long fwalk;
	/* 0x60 */ u_long run;
	/* 0x68 */ u_long stop;
	/* 0x70 */ u_long zerohour;
	/* 0x78 */ u_long no_pad;
	/* 0x80 */ u_int padding;
} TIME_WRK;

typedef struct { // 0xc
	/* 0x0 */ int load_id;
	/* 0x4 */ u_char mode;
	/* 0x5 */ u_char mode_next;
	/* 0x8 */ u_int padding;
} OUTGAME_WRK;

typedef struct { // 0x1c
	/* 0x00 */ u_char game;
	/* 0x01 */ u_char mode;
	/* 0x02 */ u_char init_flg;
	/* 0x03 */ u_char stts;
	/* 0x04 */ u_char msn_no;
	/* 0x05 */ u_char difficult;
	/* 0x06 */ u_char clear_count;
	/* 0x07 */ u_char rg_pht_cnt;
	/* 0x08 */ u_short ghost_cnt;
	/* 0x0c */ u_int pht_cnt;
	/* 0x10 */ u_int high_score;
	/* 0x14 */ u_int total_point;
	/* 0x18 */ u_int padding;
} INGAME_WRK;

typedef struct { // 0x8
	/* 0x0 */ u_short file_no;
	/* 0x2 */ u_char file_type;
	/* 0x3 */ u_char tmp_no;
	/* 0x4 */ u_int addr;
} MSN_LOAD_DAT;

typedef struct { // 0xc
	/* 0x0 */ int load_id;
	/* 0x4 */ u_char mode;
	/* 0x5 */ u_char sub_mode;
	/* 0x6 */ u_char next_mode;
	/* 0x7 */ u_char csr;
	/* 0x8 */ u_char load_side;
} TITLE_WRK;

typedef struct { // 0x10
	/* 0x0 */ u_char pad_mode;
	/* 0x1 */ u_char pad_move;
	/* 0x2 */ u_char key_type;
	/* 0x3 */ u_char sound_mode;
	/* 0x4 */ u_short bgm_vol;
	/* 0x6 */ u_short bgm_vol_bak;
	/* 0x8 */ u_short se_vol;
	/* 0xc */ u_int padding;
} OPTION_WRK;

typedef struct { // 0x8
	/* 0x0 */ int play_event_no;
	/* 0x4 */ int play_event_sta;
} MOVIE_WRK;

typedef struct { // 0x1c0
	/* 0x000 */ int port;
	/* 0x004 */ int slot;
	/* 0x040 */ u_long128 pad_dma_buf[16];
	/* 0x140 */ u_short now;
	/* 0x142 */ u_short old;
	/* 0x144 */ u_short cnt[16];
	/* 0x164 */ u_short cnt_bak[16];
	/* 0x184 */ u_short one;
	/* 0x186 */ u_short rpt;
	/* 0x188 */ u_short rpt_time;
	/* 0x18a */ u_char pad_direct[6];
	/* 0x190 */ char flags;
	/* 0x191 */ char step;
	/* 0x192 */ char id;
	/* 0x193 */ u_char analog[4];
	/* 0x197 */ u_char push[12];
	/* 0x1a4 */ u_short an_cnt[2];
	/* 0x1a8 */ u_short an_cnt_bak[2];
	/* 0x1ac */ float an_rot[2];
	/* 0x1b4 */ float an_rot_bak[2];
	/* 0x1bc */ u_char an_dir[2];
	/* 0x1be */ u_char an_dir_bak[2];
} PAD_STRUCT;

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR direction;
	/* 0x10 */ sceVu0FVECTOR diffuse;
} PARARELL_WRK;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR diffuse;
	/* 0x20 */ float power;
	/* 0x24 */ float pad[3];
} POINT_WRK;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR direction;
	/* 0x20 */ sceVu0FVECTOR diffuse;
	/* 0x30 */ float intens;
	/* 0x34 */ float power;
	/* 0x38 */ float pad[2];
} SPOT_WRK;

typedef struct { // 0x1d0
	/* 0x000 */ int parallel_num;
	/* 0x004 */ int point_num;
	/* 0x008 */ int spot_num;
	/* 0x00c */ int pad;
	/* 0x010 */ sceVu0FVECTOR ambient;
	/* 0x020 */ PARARELL_WRK parallel[3];
	/* 0x080 */ POINT_WRK point[3];
	/* 0x110 */ SPOT_WRK spot[3];
} LIGHT_PACK;

typedef union { // 0x8
	/* 0x0 */ u_char *pu8;
	/* 0x0 */ u_short *pu16;
	/* 0x0 */ u_int *pu32;
	/* 0x0 */ u_long *pu64;
	/* 0x0 */ s_char *ps8;
	/* 0x0 */ s_short *ps16;
	/* 0x0 */ int *ps32;
	/* 0x0 */ s_long *ps64;
	/* 0x0 */ long int wrk;
} P_INT;

typedef struct { // 0x90
	/* 0x00 */ u_char job_no;
	/* 0x01 */ u_char pos_no;
	/* 0x02 */ u_char wait_time;
	/* 0x03 */ u_char idx;
	/* 0x04 */ u_short loop;
	/* 0x06 */ u_short reserve;
	/* 0x08 */ int se;
	/* 0x10 */ sceVu0FVECTOR pos;
	/* 0x20 */ sceVu0FVECTOR tpos;
	/* 0x30 */ sceVu0FVECTOR spd;
	/* 0x40 */ sceVu0FVECTOR rot;
	/* 0x50 */ sceVu0FVECTOR rspd;
	/* 0x60 */ sceVu0FVECTOR trot;
	/* 0x70 */ sceVu0FVECTOR pos_mid;
	/* 0x80 */ P_INT comm_add;
	/* 0x88 */ long int comm_add_top;
} MOVE_BOX;

typedef struct { // 0x1c
	/* 0x00 */ u_char se_foot;
	/* 0x01 */ u_char room_no;
	/* 0x02 */ u_char room_old;
	/* 0x03 */ u_char pad;
	/* 0x04 */ u_short camera_no;
	/* 0x06 */ u_short camera_no_old;
	/* 0x08 */ u_short camera_btl;
	/* 0x0a */ u_short camera_btl_old;
	/* 0x0c */ u_short camera_drm;
	/* 0x0e */ u_short camera_drm_old;
	/* 0x10 */ u_short camera_door;
	/* 0x12 */ u_short camera_door_old;
	/* 0x14 */ u_short camera_door_did;
	/* 0x16 */ u_char camera_door_rid;
	/* 0x17 */ u_char cam_type;
	/* 0x18 */ float hight;
} PROOM_INFO;

typedef struct { // 0xa0
	/* 0x00 */ sceVu0FVECTOR p0;
	/* 0x10 */ sceVu0FVECTOR p1;
	/* 0x20 */ sceVu0FVECTOR p2;
	/* 0x30 */ sceVu0FVECTOR p3;
	/* 0x40 */ sceVu0FVECTOR p4;
	/* 0x50 */ sceVu0FVECTOR p5;
	/* 0x60 */ sceVu0FVECTOR p6;
	/* 0x70 */ sceVu0FVECTOR p7;
	/* 0x80 */ sceVu0FVECTOR p8;
	/* 0x90 */ sceVu0FVECTOR p9;
} MPOS;

typedef struct { // 0x20
	/* 0x00 */ u_short door_id;
	/* 0x02 */ u_char flag;
	/* 0x03 */ u_char room_no;
	/* 0x10 */ sceVu0FVECTOR dov;
} DOPEN_POS;

typedef struct { // 0x400
	/* 0x000 */ u_int sta;
	/* 0x004 */ u_int mvsta;
	/* 0x008 */ u_char mode;
	/* 0x009 */ u_char cam_type;
	/* 0x00a */ u_char anime_no;
	/* 0x00b */ u_char cond;
	/* 0x00c */ u_short cond_tm;
	/* 0x00e */ u_short flash_tm;
	/* 0x010 */ u_short aphoto_tm;
	/* 0x012 */ u_short dmg;
	/* 0x014 */ u_short hp;
	/* 0x016 */ u_short ap_timer;
	/* 0x018 */ u_short dwalk_tm;
	/* 0x01a */ u_short fh_no;
	/* 0x01c */ float fh_deg;
	/* 0x020 */ float spd;
	/* 0x024 */ float spd_ud;
	/* 0x028 */ float prot;
	/* 0x02c */ float frot_x;
	/* 0x030 */ float charge_deg;
	/* 0x034 */ float charge_rate;
	/* 0x038 */ u_char charge_num;
	/* 0x039 */ u_char rock_trgt;
	/* 0x03a */ u_char film_no;
	/* 0x03b */ u_char dmg_cam_flag;
	/* 0x03c */ u_char hp_num;
	/* 0x03d */ u_char mode_save;
	/* 0x03e */ u_char move_mot;
	/* 0x03f */ u_char atk_no;
	/* 0x040 */ u_char near_ene_no;
	/* 0x041 */ u_char photo_charge;
	/* 0x042 */ u_char dmg_type;
	/* 0x043 */ u_char spe1_dir;
	/* 0x044 */ char pr_set;
	/* 0x045 */ char po_set;
	/* 0x046 */ u_char reserve[2];
	/* 0x050 */ sceVu0FVECTOR mv;
	/* 0x060 */ sceVu0FVECTOR op;
	/* 0x070 */ sceVu0FVECTOR rock_adj;
	/* 0x080 */ sceVu0FVECTOR bwp;
	/* 0x090 */ sceVu0FVECTOR cp_old;
	/* 0x0a0 */ sceVu0FVECTOR soulp;
	/* 0x0b0 */ sceVu0FVECTOR spot_rot;
	/* 0x0c0 */ sceVu0FVECTOR spot_pos;
	/* 0x0d0 */ sceVu0FVECTOR shadow_direction;
	/* 0x0e0 */ sceVu0FVECTOR psave;
	/* 0x0f0 */ sceVu0FVECTOR fhp[5];
	/* 0x140 */ short int fp[2];
	/* 0x150 */ MOVE_BOX move_box;
	/* 0x1e0 */ LIGHT_PACK mylight;
	/* 0x3b0 */ PROOM_INFO pr_info;
	/* 0x3d0 */ DOPEN_POS dop;
	/* 0x3f0 */ int se_deadly;
	/* 0x3f4 */ u_int padding;
} PLYR_WRK;

typedef struct { // 0x40
	/* 0x00 */ u_int attr1;
	/* 0x04 */ u_short dst_gthr;
	/* 0x06 */ u_char way_gthr;
	/* 0x07 */ u_char atk_ptn;
	/* 0x08 */ u_char wspd;
	/* 0x09 */ u_char rspd;
	/* 0x0a */ u_short hp;
	/* 0x0c */ u_short atk_rng;
	/* 0x0e */ u_short hit_rng;
	/* 0x10 */ u_short chance_rng;
	/* 0x12 */ short int hit_adjx;
	/* 0x14 */ u_short atk_p;
	/* 0x16 */ u_short atk_h;
	/* 0x18 */ u_char atk;
	/* 0x19 */ u_char atk_tm;
	/* 0x1a */ u_short mdl_no;
	/* 0x1c */ u_short anm_no;
	/* 0x20 */ u_int se_no;
	/* 0x24 */ u_int adpcm_no;
	/* 0x28 */ int dead_adpcm;
	/* 0x2c */ u_short point_base;
	/* 0x2e */ u_char hint_pic;
	/* 0x2f */ u_char aura_alp;
	/* 0x30 */ u_char area[6];
	/* 0x36 */ u_short dir;
	/* 0x38 */ u_short px;
	/* 0x3a */ short int py;
	/* 0x3c */ u_short pz;
} ENE_DAT;

typedef struct { // 0x20
	/* 0x00 */ u_char dat_no;
	/* 0x01 */ u_char soul_no;
	/* 0x02 */ u_short dir;
	/* 0x04 */ u_short px;
	/* 0x06 */ short int py;
	/* 0x08 */ u_short pz;
	/* 0x0a */ u_short adpcm_tm;
	/* 0x0c */ int adpcm_no;
	/* 0x10 */ u_short rng;
	/* 0x12 */ u_short mdl_no;
	/* 0x14 */ u_short anm_no;
	/* 0x16 */ u_short point_base;
	/* 0x18 */ u_int se_no;
	/* 0x1c */ int se_foot;
} AENE_INFO_DAT;

typedef struct { // 0x430
	/* 0x000 */ u_int sta;
	/* 0x004 */ u_int sta2;
	/* 0x008 */ u_short hp;
	/* 0x00a */ u_short dmg;
	/* 0x00c */ u_short dmg_old;
	/* 0x00e */ u_short atk_tm;
	/* 0x010 */ u_char type;
	/* 0x011 */ u_char dat_no;
	/* 0x012 */ u_char act_no;
	/* 0x013 */ u_char anime_no;
	/* 0x020 */ MOVE_BOX move_box;
	/* 0x0b0 */ ENE_DAT *dat;
	/* 0x0c0 */ MPOS mpos;
	/* 0x160 */ LIGHT_PACK mylight;
	/* 0x330 */ float dist_p_e;
	/* 0x334 */ float dist_c_e;
	/* 0x338 */ float pra_per;
	/* 0x33c */ float pr_anime;
	/* 0x340 */ u_short pra_time;
	/* 0x342 */ u_short bloop;
	/* 0x344 */ u_char bjob_no;
	/* 0x345 */ u_char bpos_no;
	/* 0x346 */ u_char bwait_time;
	/* 0x347 */ u_char recog_tm;
	/* 0x348 */ P_INT bcomm_add;
	/* 0x350 */ long int bcomm_add_top;
	/* 0x358 */ u_char tr_rate;
	/* 0x359 */ u_char ajob_no;
	/* 0x35a */ u_char apos_no;
	/* 0x35b */ u_char await_time;
	/* 0x360 */ P_INT acomm_add;
	/* 0x368 */ long int acomm_add_top;
	/* 0x370 */ void *pdf;
	/* 0x374 */ float d_pd;
	/* 0x378 */ void *pdf2;
	/* 0x37c */ float d_pd2;
	/* 0x380 */ void *nee;
	/* 0x384 */ float nee_rate;
	/* 0x388 */ float nee_size;
	/* 0x38c */ u_int nee_col;
	/* 0x390 */ int se_omen[2];
	/* 0x3a0 */ sceVu0FVECTOR adjp;
	/* 0x3b0 */ sceVu0FVECTOR pp;
	/* 0x3c0 */ sceVu0FVECTOR sp;
	/* 0x3d0 */ sceVu0FVECTOR si;
	/* 0x3e0 */ sceVu0FVECTOR bep;
	/* 0x3f0 */ u_short in_finder_tm;
	/* 0x3f2 */ u_char area[6];
	/* 0x3f8 */ u_short tr_time;
	/* 0x3fa */ u_char tr_max;
	/* 0x3fb */ u_char dmg_type;
	/* 0x3fc */ u_char room_no;
	/* 0x3fd */ char se_area_no;
	/* 0x3fe */ u_char ani_reso;
	/* 0x3ff */ u_char ani_reso_tm;
	/* 0x400 */ short int fp[2];
	/* 0x404 */ short int fp2[3][2];
	/* 0x410 */ u_char eroot[2];
	/* 0x412 */ u_char plight_svo;
	/* 0x413 */ u_char slight_svo;
	/* 0x414 */ u_char plight_svm[2];
	/* 0x416 */ u_char slight_svm[2];
	/* 0x418 */ float pa_radius;
	/* 0x41c */ AENE_INFO_DAT *aie;
	/* 0x420 */ u_short stm_slow;
	/* 0x422 */ u_short stm_view;
	/* 0x424 */ u_short stm_stop;
	/* 0x426 */ u_char tr_rate2;
} ENE_WRK;

typedef struct { // 0xb0
	/* 0x00 */ u_char sta;
	/* 0x01 */ u_char able[10];
	/* 0x10 */ sceVu0FVECTOR pos[10];
} PHOTO_POS_INFO;

typedef struct { // 0x14
	/* 0x00 */ int dat_adr;
	/* 0x04 */ u_char floor;
	/* 0x05 */ u_char load_area;
	/* 0x06 */ u_char now_room;
	/* 0x07 */ u_char next_room;
	/* 0x08 */ u_char room_update_flg;
	/* 0x09 */ u_char mirror_flg;
	/* 0x0a */ u_char flr_exist[4];
	/* 0x10 */ u_int padding;
} MAP_WRK;

typedef struct { // 0x3f0
	/* 0x000 */ u_char room_no;
	/* 0x001 */ u_char room_num;
	/* 0x002 */ u_char camera_no;
	/* 0x003 */ u_char camera_bno;
	/* 0x004 */ u_char camera_dno;
	/* 0x005 */ u_char camera_tno;
	/* 0x006 */ u_char camera_num;
	/* 0x007 */ u_char camera_bnum;
	/* 0x008 */ u_char camera_dnum;
	/* 0x009 */ u_char camera_tnum;
	/* 0x00a */ u_char height_no;
	/* 0x00b */ u_char height_num;
	/* 0x00c */ u_char hit_num;
	/* 0x00d */ u_char hit_num_next;
	/* 0x00e */ u_char ev_num;
	/* 0x00f */ u_char find_num;
	/* 0x010 */ u_char se_num;
	/* 0x011 */ u_char mot_num;
	/* 0x012 */ u_char disp_no[2];
	/* 0x014 */ u_char disp_bak[2];
	/* 0x020 */ sceVu0FVECTOR pos[2];
	/* 0x040 */ LIGHT_PACK mylight[2];
	/* 0x3e0 */ short int room_height;
} ROOM_WRK;

typedef struct { // 0x14
	/* 0x00 */ int score;
	/* 0x04 */ int point;
	/* 0x08 */ float ratio;
	/* 0x0c */ u_short no;
	/* 0x0e */ u_short type;
	/* 0x10 */ u_short dmg;
	/* 0x12 */ u_short wrk_no;
} SUBJECT_WRK;

typedef struct { // 0x138
	/* 0x000 */ int mode;
	/* 0x008 */ u_long score;
	/* 0x010 */ float ratio;
	/* 0x014 */ SUBJECT_WRK plyr;
	/* 0x028 */ SUBJECT_WRK ene[4];
	/* 0x078 */ SUBJECT_WRK furn[5];
	/* 0x0dc */ SUBJECT_WRK rare[3];
	/* 0x118 */ u_short spcl_pht_score[4];
	/* 0x120 */ u_char spcl_pht_no[4][2];
	/* 0x128 */ u_short bonus_sta;
	/* 0x12a */ u_short room;
	/* 0x12c */ u_short dist_2d;
	/* 0x12e */ u_short no_2d;
	/* 0x130 */ u_char adr_no;
	/* 0x131 */ u_char ene_dead;
	/* 0x132 */ u_char no_item;
	/* 0x133 */ u_char falth;
} PHOTO_WRK;

typedef struct { // 0x1c
	/* 0x00 */ u_char adr_no;
	/* 0x01 */ u_char msn_no;
	/* 0x02 */ u_char room;
	/* 0x03 */ u_char status;
	/* 0x04 */ u_short subject[3][2];
	/* 0x10 */ u_int score;
	/* 0x14 */ sceCdCLOCK time;
} PICTURE_WRK;

typedef struct { // 0x3c0
	/* 0x000 */ u_char pic_num;
	/* 0x001 */ u_char sort_key;
	/* 0x002 */ u_char skey_bak;
	/* 0x004 */ PICTURE_WRK pic[34];
	/* 0x3bc */ u_int padding;
} PFILE_WRK;

typedef struct { // 0x2c
	/* 0x00 */ u_char type;
	/* 0x01 */ u_char id;
	/* 0x02 */ u_short p0[3];
	/* 0x08 */ u_short p1[3];
	/* 0x0e */ u_short p2[3];
	/* 0x14 */ u_short p3[3];
	/* 0x1c */ float roll[2];
	/* 0x24 */ float fov[2];
} MAP_CAM_DAT;

typedef struct { // 0x38
	/* 0x00 */ u_char *str;
	/* 0x04 */ int pos_x;
	/* 0x08 */ int pos_y;
	/* 0x0c */ int type;
	/* 0x10 */ u_int r;
	/* 0x14 */ u_int g;
	/* 0x18 */ u_int b;
	/* 0x1c */ int alpha;
	/* 0x20 */ int pri;
	/* 0x24 */ int x_wide;
	/* 0x28 */ int y_wide;
	/* 0x2c */ int brnch_num;
	/* 0x30 */ int csr;
	/* 0x34 */ int st;
} DISP_STR;

typedef struct { // 0x24
	/* 0x00 */ u_char *str;
	/* 0x04 */ int pos_x;
	/* 0x08 */ int pos_y;
	/* 0x0c */ int type;
	/* 0x10 */ u_int r;
	/* 0x14 */ u_int g;
	/* 0x18 */ u_int b;
	/* 0x1c */ int alpha;
	/* 0x20 */ int pri;
} STR_DAT;

typedef struct { // 0x88
	/* 0x00 */ u_int att;
	/* 0x04 */ u_int u;
	/* 0x08 */ u_int v;
	/* 0x0c */ u_int w;
	/* 0x10 */ u_int h;
	/* 0x14 */ float crx;
	/* 0x18 */ float cry;
	/* 0x1c */ float csx;
	/* 0x20 */ float csy;
	/* 0x24 */ float x;
	/* 0x28 */ float y;
	/* 0x2c */ u_int z;
	/* 0x30 */ float scw;
	/* 0x34 */ float sch;
	/* 0x38 */ float rot;
	/* 0x40 */ u_long gftg;
	/* 0x48 */ u_long tex0;
	/* 0x50 */ u_long tex1;
	/* 0x58 */ u_long texa;
	/* 0x60 */ u_long alphar;
	/* 0x68 */ u_long zbuf;
	/* 0x70 */ u_long test;
	/* 0x78 */ u_int pri;
	/* 0x7c */ u_char r;
	/* 0x7d */ u_char g;
	/* 0x7e */ u_char b;
	/* 0x7f */ u_char alpha;
	/* 0x80 */ u_char col;
} DISP_SPRT;

typedef struct { // 0x20
	/* 0x00 */ u_long tex0;
	/* 0x08 */ u_short u;
	/* 0x0a */ u_short v;
	/* 0x0c */ u_short w;
	/* 0x0e */ u_short h;
	/* 0x10 */ int x;
	/* 0x14 */ int y;
	/* 0x18 */ int pri;
	/* 0x1c */ u_char alpha;
} SPRT_DAT;

typedef struct { // 0x80
	/* 0x00 */ u_int att;
	/* 0x04 */ float crx;
	/* 0x08 */ float cry;
	/* 0x0c */ float csx;
	/* 0x10 */ float csy;
	/* 0x14 */ int x[4];
	/* 0x24 */ int y[4];
	/* 0x34 */ u_int z;
	/* 0x38 */ float scw;
	/* 0x3c */ float sch;
	/* 0x40 */ float rot;
	/* 0x48 */ u_long texa;
	/* 0x50 */ u_long alphar;
	/* 0x58 */ u_long zbuf;
	/* 0x60 */ u_long test;
	/* 0x68 */ u_int pri;
	/* 0x6c */ u_char r[4];
	/* 0x70 */ u_char g[4];
	/* 0x74 */ u_char b[4];
	/* 0x78 */ u_char alpha;
} DISP_SQAR;

typedef struct { // 0x18
	/* 0x00 */ u_int w;
	/* 0x04 */ u_int h;
	/* 0x08 */ int x;
	/* 0x0c */ int y;
	/* 0x10 */ u_int pri;
	/* 0x14 */ u_char r;
	/* 0x15 */ u_char g;
	/* 0x16 */ u_char b;
	/* 0x17 */ u_char alpha;
} SQAR_DAT;

typedef struct { // 0x24
	/* 0x00 */ u_int w;
	/* 0x04 */ u_int h;
	/* 0x08 */ int x;
	/* 0x0c */ int y;
	/* 0x10 */ u_int pri;
	/* 0x14 */ u_char r[4];
	/* 0x18 */ u_char g[4];
	/* 0x1c */ u_char b[4];
	/* 0x20 */ u_char alpha;
} GSQR_DAT;

typedef struct { // 0x28
	/* 0x00 */ int x[4];
	/* 0x10 */ int y[4];
	/* 0x20 */ u_int pri;
	/* 0x24 */ u_char r;
	/* 0x25 */ u_char g;
	/* 0x26 */ u_char b;
	/* 0x27 */ u_char alpha;
} SQR4_DAT;

typedef struct { // 0x34
	/* 0x00 */ int x[4];
	/* 0x10 */ int y[4];
	/* 0x20 */ u_int pri;
	/* 0x24 */ u_char r[4];
	/* 0x28 */ u_char g[4];
	/* 0x2c */ u_char b[4];
	/* 0x30 */ u_char alpha;
} GSQ4_DAT;

typedef struct { // 0xe
	/* 0x0 */ short int u;
	/* 0x2 */ short int v;
	/* 0x4 */ short int w;
	/* 0x6 */ short int h;
	/* 0x8 */ short int x;
	/* 0xa */ short int y;
	/* 0xc */ u_char pri;
	/* 0xd */ u_char alp;
} SPRT_SDAT;

typedef struct { // 0x8
	/* 0x0 */ short int cx;
	/* 0x2 */ short int cy;
	/* 0x4 */ float rot;
} SPRT_SROT;

typedef struct { // 0x8
	/* 0x0 */ short int cx;
	/* 0x2 */ short int cy;
	/* 0x4 */ short int sw;
	/* 0x6 */ short int sh;
} SPRT_SSCL;

typedef union { // 0x10
	/* 0x0 */ u_long128 ul128;
	/* 0x0 */ u_long ul64[2];
	/* 0x0 */ u_int ui32[4];
	/* 0x0 */ float fl32[4];
	/* 0x0 */ u_short us16[8];
	/* 0x0 */ u_char uc8[16];
	/* 0x0 */ sceVu0FVECTOR fv;
	/* 0x0 */ sceVu0IVECTOR iv;
} Q_WORDDATA;

typedef struct { // 0xb0
	/* 0x00 */ u_char num;
	/* 0x01 */ u_char result[10];
	/* 0x10 */ sceVu0FVECTOR p[10];
} PP_JUDGE;

typedef struct { // 0x68
	/* 0x00 */ u_int btlhit_no;
	/* 0x04 */ u_int voice_no;
	/* 0x08 */ u_int door_no[3];
	/* 0x14 */ u_int foot_no[8];
	/* 0x34 */ u_int srund_no[2];
	/* 0x3c */ u_int ghost_no[3];
	/* 0x48 */ u_int event_no[2];
	/* 0x50 */ u_int wide_no;
	/* 0x54 */ u_int jidou_no[4];
	/* 0x64 */ u_char ghost_type[3];
} SE_CTRL;

typedef struct { // 0x18
	/* 0x00 */ u_char charge_range;
	/* 0x01 */ u_char charge_max;
	/* 0x02 */ u_char charge_speed;
	/* 0x03 */ u_char func_sub[5];
	/* 0x08 */ u_char func_spe[5];
	/* 0x0d */ u_char set_sub;
	/* 0x0e */ u_char set_spe;
	/* 0x10 */ u_long point;
} CAM_CUSTOM_WRK;

typedef struct { // 0x11c
	/* 0x000 */ PICTURE_WRK pic_inf[10];
	/* 0x118 */ u_short pic_num;
	/* 0x11a */ u_short best_score;
} SAVE_RANK;

typedef struct { // 0x2a0
	/* 0x000 */ PICTURE_WRK pic[24];
} MC_ALBUM_SAVE;

typedef struct { // 0x2
	/* 0x0 */ u_char lock;
	/* 0x1 */ u_char no_pause;
} PAD_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char costume;
	/* 0x1 */ u_char clear_info;
} CLEAR_BONUS;

typedef struct { // 0x1c
	/* 0x00 */ u_int *pk2;
	/* 0x04 */ u_int *near_sgd;
	/* 0x08 */ u_int *far_sgd;
	/* 0x0c */ u_int *ss_sgd;
	/* 0x10 */ u_int *sh_sgd;
	/* 0x14 */ u_int *lit_data;
	/* 0x18 */ u_int room_id;
} RMDL_ADDR;

typedef struct { // 0xb4
	/* 0x00 */ u_short furn_id[30];
	/* 0x3c */ u_short door_id[16];
	/* 0x5c */ u_int *door_addr[16];
	/* 0x9c */ u_int *load_addr;
	/* 0xa0 */ u_int furn_num;
	/* 0xa4 */ u_int door_num;
	/* 0xa8 */ u_int room_file_no;
	/* 0xac */ short int block_no;
	/* 0xae */ u_char room_no;
	/* 0xaf */ u_char chapter_no;
	/* 0xb0 */ u_char sereq_type;
} ROOM_LOAD_BLOCK;

typedef struct { // 0x1b0
	/* 0x000 */ int mode_on;
	/* 0x004 */ int lgt_spot;
	/* 0x008 */ int lgt_point;
	/* 0x00c */ int lgt_switch;
	/* 0x010 */ int cam_mode;
	/* 0x014 */ int eff_z_dep;
	/* 0x018 */ int eff_dither;
	/* 0x01c */ int eff_dithsp;
	/* 0x020 */ int eff_dithal;
	/* 0x024 */ int eff_pdef1;
	/* 0x028 */ int eff_pdef2;
	/* 0x02c */ int eff_pdef3;
	/* 0x030 */ int eff_test2;
	/* 0x034 */ int eff_test3;
	/* 0x038 */ int eff_blur;
	/* 0x03c */ int eff_blra;
	/* 0x040 */ int eff_blrs;
	/* 0x044 */ int eff_blrr;
	/* 0x048 */ int eff_dfm;
	/* 0x04c */ int eff_dfmr;
	/* 0x050 */ int eff_focus;
	/* 0x054 */ int eff_ffr;
	/* 0x058 */ int eff_ffra;
	/* 0x05c */ int eff_frhl;
	/* 0x060 */ int eff_renz;
	/* 0x064 */ int eff_renzs;
	/* 0x068 */ int eff_rip;
	/* 0x06c */ int eff_rips;
	/* 0x070 */ int oth_info;
	/* 0x074 */ int oth_perf;
	/* 0x078 */ int oth_bg_color;
	/* 0x07c */ int light_infinite;
	/* 0x080 */ int light_point;
	/* 0x084 */ int light_spot;
	/* 0x088 */ int le_R;
	/* 0x08c */ int le_G;
	/* 0x090 */ int le_B;
	/* 0x094 */ int le_AR;
	/* 0x098 */ int le_AG;
	/* 0x09c */ int le_AB;
	/* 0x0a0 */ int le_power;
	/* 0x0a4 */ int le_cone;
	/* 0x0a8 */ int sbtset;
	/* 0x0ac */ int eff_pdef_p;
	/* 0x0b0 */ int eff_sccol_tp1;
	/* 0x0b4 */ int eff_sccol_tp2;
	/* 0x0b8 */ int eff_sccol_cont_col;
	/* 0x0bc */ int eff_sccol_cont_alp;
	/* 0x0c0 */ int eff_sccol_cont_alp2;
	/* 0x0c4 */ int eff_sccol_over;
	/* 0x0c8 */ int eff_amufire;
	/* 0x0cc */ int eff_itemfire;
	/* 0x0d0 */ int eff_colmono;
	/* 0x0d4 */ int eff_prtblr_sw;
	/* 0x0d8 */ int eff_prtblr_alp;
	/* 0x0dc */ int fog_min;
	/* 0x0e0 */ int fog_max;
	/* 0x0e4 */ int fog_near;
	/* 0x0e8 */ int fog_far;
	/* 0x0ec */ int fog_r;
	/* 0x0f0 */ int fog_g;
	/* 0x0f4 */ int fog_b;
	/* 0x0f8 */ int eff_sccol_blk;
	/* 0x0fc */ int eff_leaf;
	/* 0x100 */ int eff_new_def_sw;
	/* 0x104 */ int eff_new_def_alp1;
	/* 0x108 */ int eff_new_def_alp2;
	/* 0x10c */ int eff_new_def_col1;
	/* 0x110 */ int eff_new_def_col2;
	/* 0x114 */ int disp_3d_all;
	/* 0x118 */ int disp_3d_room;
	/* 0x11c */ int disp_3d_furn;
	/* 0x120 */ int disp_3d_girl;
	/* 0x124 */ int disp_3d_enemy;
	/* 0x128 */ int disp_3d_mirror;
	/* 0x12c */ int disp_3d_textrans;
	/* 0x130 */ int disp_3d_2ddraw;
	/* 0x134 */ int cam_hold_mode;
	/* 0x138 */ int oth_hint_sw;
	/* 0x13c */ int oth_hint_no;
	/* 0x140 */ int oth_hint_alp;
	/* 0x144 */ int oth_pkt_num_sw;
	/* 0x148 */ int eff_new_ene_ef_sw;
	/* 0x14c */ int eff_new_ene_ef_alp;
	/* 0x150 */ int eff_new_ene_ef_sz;
	/* 0x154 */ int high_speed_mode;
	/* 0x158 */ int param_film74;
	/* 0x15c */ int param_film14;
	/* 0x160 */ int param_film37;
	/* 0x164 */ int param_film90;
	/* 0x168 */ int param_manyo;
	/* 0x16c */ int param_enestop;
	/* 0x170 */ int disp_3d_girl_shadow;
	/* 0x174 */ int disp_3d_room_shadow;
	/* 0x178 */ int param_pad_type;
	/* 0x17c */ int le_plen;
	/* 0x180 */ int cc_charge_range;
	/* 0x184 */ int cc_charge_max;
	/* 0x188 */ int cc_charge_speed;
	/* 0x18c */ int cc_set_sub;
	/* 0x190 */ int cc_set_spe;
	/* 0x194 */ int param_reiseki;
	/* 0x198 */ int param_fuyurei;
	/* 0x19c */ int param_enetype;
	/* 0x1a0 */ int param_muteki;
	/* 0x1a4 */ int oth_sub_menu;
	/* 0x1a8 */ int black_white;
	/* 0x1ac */ int param_camera;
} DEBUG_NUMBERS;

typedef struct { // 0xc
	/* 0x0 */ char *name;
	/* 0x4 */ int subnum;
	/* 0x8 */ int nmax;
} DEBUG_SUB_MENU;

typedef struct { // 0x94
	/* 0x00 */ int parent;
	/* 0x04 */ int off_num;
	/* 0x08 */ int mnum;
	/* 0x0c */ int kai;
	/* 0x10 */ int max;
	/* 0x14 */ int pos;
	/* 0x18 */ char *title;
	/* 0x1c */ DEBUG_SUB_MENU submenu[10];
} DEBUG_MENU;

enum SE_FADE_MODE {
	SE_FADE_NONE = 0,
	SE_FADE_IN = 1,
	SE_FADE_OUT = 2
};

typedef struct { // 0x6
	/* 0x0 */ u_short now;
	/* 0x2 */ u_short tgt;
	/* 0x4 */ short int inc;
} S_FADE;

typedef struct { // 0xc
	/* 0x0 */ int mvol;
	/* 0x4 */ int tgt_vol;
	/* 0x8 */ int deg;
} SE_MENU_FADE;

struct tagSE_WRK { // 0x40
	/* 0x00 */ void *mpos;
	/* 0x10 */ sceVu0FVECTOR spos;
	/* 0x20 */ int status;
	/* 0x24 */ u_int atr;
	/* 0x28 */ u_short se_p;
	/* 0x2a */ u_short v_p;
	/* 0x2c */ u_short pitch;
	/* 0x2e */ u_short now_pitch;
	/* 0x30 */ u_short pan;
	/* 0x32 */ u_short vol_rate;
	/* 0x34 */ u_char vol_phase;
	/* 0x35 */ u_char ene_wrk_no;
	/* 0x36 */ u_short fade_vol;
	/* 0x38 */ u_short fade_spd;
	/* 0x3a */ u_short fade_tgt;
	/* 0x3c */ u_char fade_mode;
	/* 0x3d */ u_char room_id;
	/* 0x3e */ u_char menu;
};

typedef tagSE_WRK SE_WRK;

typedef struct { // 0x4
	/* 0x0 */ short int fst;
	/* 0x2 */ short int snd;
} SE_VPOS_STE;

enum SE_WRK_STATUS {
	SEW_STAT_FREE = 0,
	SEW_STAT_RING = 1,
	SEW_STAT_FDIN = 2,
	SEW_STAT_FDOUT = 3,
	SEW_STAT_RESERVED = 4
};

typedef struct { // 0x8
	/* 0x0 */ int count;
	/* 0x4 */ u_char sew_no0;
	/* 0x5 */ char mode;
} SE_EV_WRK;

enum SE_EV_MODE {
	SE_EVM_NORMAL = 0,
	SE_EVM_COUNT = 1
};

enum CD_FILE_DAT {
	DUMMYDUMMY00_OBJ = 0,
	DUMMYDUMMY01_OBJ = 1,
	DUMMYDUMMY02_OBJ = 2,
	DUMMYDUMMY03_OBJ = 3,
	DUMMYDUMMY04_OBJ = 4,
	DUMMYDUMMY05_OBJ = 5,
	DUMMYDUMMY06_OBJ = 6,
	DUMMYDUMMY07_OBJ = 7,
	DUMMYDUMMY08_OBJ = 8,
	DUMMYDUMMY09_OBJ = 9,
	MSN00MAP_OBJ = 10,
	MSN01MAP_OBJ = 11,
	MSN02MAP_OBJ = 12,
	MSN03MAP_OBJ = 13,
	MSN04MAP_OBJ = 14,
	M0_EVENT_OBJ = 15,
	M1_EVENT_OBJ = 16,
	M2_EVENT_OBJ = 17,
	M3_EVENT_OBJ = 18,
	M4_EVENT_OBJ = 19,
	IG_MSG_OBJ = 20,
	ENE_ACT0_OBJ = 21,
	ENE_ACT1_OBJ = 22,
	ENE_ACT2_OBJ = 23,
	ENE_ACT3_OBJ = 24,
	ENE_ACT4_OBJ = 25,
	MAP_CAM1_OBJ = 26,
	MAP_CAM2_OBJ = 27,
	MAP_CAM3_OBJ = 28,
	BMAP_CAM1_OBJ = 29,
	BMAP_CAM2_OBJ = 30,
	BMAP_CAM3_OBJ = 31,
	DMAP_CAM1_OBJ = 32,
	DMAP_CAM2_OBJ = 33,
	DMAP_CAM3_OBJ = 34,
	TMAP_CAM1_OBJ = 35,
	TMAP_CAM2_OBJ = 36,
	TMAP_CAM3_OBJ = 37,
	MSN00TTL_PK2 = 38,
	MSN01TTL_PK2 = 39,
	MSN02TTL_PK2 = 40,
	MSN03TTL_PK2 = 41,
	MSN04TTL_PK2 = 42,
	EVTEX00_PK2 = 43,
	EVTEX00B_PK2 = 44,
	EVTEX00C_PK2 = 45,
	EVTEX00D_PK2 = 46,
	EVTEX00E_PK2 = 47,
	EVTEX00F_PK2 = 48,
	EVTEX00G_PK2 = 49,
	EVTEX01_PK2 = 50,
	EVTEX02A_PK2 = 51,
	EVTEX02B_PK2 = 52,
	EVTEX02C_PK2 = 53,
	EVTEX03_PK2 = 54,
	EVTEX04_PK2 = 55,
	EVTEX20_PK2 = 56,
	EVTEX21_PK2 = 57,
	EVTEX_ZUSI_PK2 = 58,
	TX_PZL_BG_KI_PK2 = 59,
	TX_PZL_BG_DO_PK2 = 60,
	TX_PZL_BG_AI_PK2 = 61,
	TX_PZL_BG_RK_PK2 = 62,
	TX_PZL_MENZ_PK2 = 63,
	TX_BTL_DMY_PK2 = 64,
	M_SLCT_STY_DMY_PK2 = 65,
	TX_BTL_RES_PK2 = 66,
	EFF001_PK2 = 67,
	FNT001_PK2 = 68,
	PHOTO001_PK2 = 69,
	PL_STTS_PK2 = 70,
	PL_SAVE_PK2 = 71,
	PL_PSVP_PK2 = 72,
	PL_GOVR_PK2 = 73,
	PL_FNDR_PK2 = 74,
	PL_LIFE_PK2 = 75,
	PL_BGBG_PK2 = 76,
	PL_PLDT_PK2 = 77,
	PL_MTOP_PK2 = 78,
	PL_SMAP_PK2 = 79,
	PL_ITEM_PK2 = 80,
	PL_PHOT_PK2 = 81,
	PL_FILE_PK2 = 82,
	PL_FILE_REL_PK2 = 83,
	PL_RANK_PK2 = 84,
	PL_OPTI_PK2 = 85,
	PL_ALBM_PK2 = 86,
	PL_ALBM_SW_PK2 = 87,
	PL_ALBM_SP_PK2 = 88,
	PL_ALBM_SR_PK2 = 89,
	PL_ALBM_SG_PK2 = 90,
	PL_ALBM_SB_PK2 = 91,
	PL_ALBM_SO_PK2 = 92,
	PL_ALBM_BW_PK2 = 93,
	PL_ALBM_BP_PK2 = 94,
	PL_ALBM_BR_PK2 = 95,
	PL_ALBM_BG_PK2 = 96,
	PL_ALBM_BB_PK2 = 97,
	PL_ALBM_BO_PK2 = 98,
	PL_ALBM_SAVE_PK2 = 99,
	PL_ALBM_FSM_PK2 = 100,
	PL_GLST_PK2 = 101,
	PL_CAME_PK2 = 102,
	PL_PLAY_PK2 = 103,
	SV_PHT_PK2 = 104,
	S_MODE_CLEARBG_PK2 = 105,
	STG00TTL_PK2 = 106,
	STG01TTL_PK2 = 107,
	STG02TTL_PK2 = 108,
	STG03TTL_PK2 = 109,
	STG04TTL_PK2 = 110,
	STG05TTL_PK2 = 111,
	STG06TTL_PK2 = 112,
	STG07TTL_PK2 = 113,
	STG08TTL_PK2 = 114,
	STG09TTL_PK2 = 115,
	STG10TTL_PK2 = 116,
	STG11TTL_PK2 = 117,
	STG12TTL_PK2 = 118,
	STG13TTL_PK2 = 119,
	STG14TTL_PK2 = 120,
	STG15TTL_PK2 = 121,
	STG16TTL_PK2 = 122,
	STG17TTL_PK2 = 123,
	STG18TTL_PK2 = 124,
	STG19TTL_PK2 = 125,
	STG20TTL_PK2 = 126,
	STG21TTL_PK2 = 127,
	STG22TTL_PK2 = 128,
	STG23TTL_PK2 = 129,
	STG24TTL_PK2 = 130,
	STG25TTL_PK2 = 131,
	STG26TTL_PK2 = 132,
	STG27TTL_PK2 = 133,
	STG28TTL_PK2 = 134,
	STG29TTL_PK2 = 135,
	ITEM_00_TM2 = 136,
	ITEM_01_TM2 = 137,
	ITEM_02_TM2 = 138,
	ITEM_03_TM2 = 139,
	ITEM_04_TM2 = 140,
	ITEM_05_TM2 = 141,
	ITEM_06_TM2 = 142,
	ITEM_07_TM2 = 143,
	ITEM_08_TM2 = 144,
	ITEM_09_TM2 = 145,
	ITEM_10_TM2 = 146,
	ITEM_11_TM2 = 147,
	ITEM_12_TM2 = 148,
	ITEM_13_TM2 = 149,
	ITEM_14_TM2 = 150,
	ITEM_15_TM2 = 151,
	ITEM_16_TM2 = 152,
	ITEM_17_TM2 = 153,
	ITEM_18_TM2 = 154,
	ITEM_19_TM2 = 155,
	ITEM_20_TM2 = 156,
	ITEM_21_TM2 = 157,
	ITEM_22_TM2 = 158,
	ITEM_23_TM2 = 159,
	ITEM_24_TM2 = 160,
	ITEM_25_TM2 = 161,
	ITEM_26_TM2 = 162,
	ITEM_27_TM2 = 163,
	ITEM_28_TM2 = 164,
	ITEM_29_TM2 = 165,
	ITEM_30_TM2 = 166,
	ITEM_31_TM2 = 167,
	ITEM_32_TM2 = 168,
	ITEM_33_TM2 = 169,
	ITEM_34_TM2 = 170,
	ITEM_35_TM2 = 171,
	ITEM_36_TM2 = 172,
	ITEM_37_TM2 = 173,
	ITEM_38_TM2 = 174,
	ITEM_39_TM2 = 175,
	ITEM_40_TM2 = 176,
	ITEM_41_TM2 = 177,
	ITEM_42_TM2 = 178,
	ITEM_43_TM2 = 179,
	ITEM_44_TM2 = 180,
	ITEM_45_TM2 = 181,
	ITEM_46_TM2 = 182,
	ITEM_47_TM2 = 183,
	ITEM_48_TM2 = 184,
	ITEM_49_TM2 = 185,
	ITEM_50_TM2 = 186,
	ITEM_51_TM2 = 187,
	ITEM_52_TM2 = 188,
	ITEM_53_TM2 = 189,
	ITEM_54_TM2 = 190,
	ITEM_55_TM2 = 191,
	ITEM_56_TM2 = 192,
	ITEM_57_TM2 = 193,
	ITEM_58_TM2 = 194,
	ITEM_59_TM2 = 195,
	ITEM_60_TM2 = 196,
	ITEM_61_TM2 = 197,
	ITEM_62_TM2 = 198,
	ITEM_63_TM2 = 199,
	ITEM_64_TM2 = 200,
	ITEM_65_TM2 = 201,
	ITEM_66_TM2 = 202,
	ITEM_67_TM2 = 203,
	ITEM_68_TM2 = 204,
	ITEM_69_TM2 = 205,
	ITEM_70_TM2 = 206,
	HINT_00_TM2 = 207,
	HINT_01_TM2 = 208,
	HINT_02_TM2 = 209,
	HINT_03_TM2 = 210,
	HINT_04_TM2 = 211,
	HINT_05_TM2 = 212,
	HINT_06_TM2 = 213,
	HINT_07_TM2 = 214,
	HINT_08_TM2 = 215,
	HINT_09_TM2 = 216,
	HINT_10_TM2 = 217,
	HINT_11_TM2 = 218,
	HINT_12_TM2 = 219,
	HINT_13_TM2 = 220,
	HINT_14_TM2 = 221,
	HINT_15_TM2 = 222,
	HINT_16_TM2 = 223,
	HINT_17_TM2 = 224,
	HINT_18_TM2 = 225,
	HINT_19_TM2 = 226,
	HINT_20_TM2 = 227,
	HINT_21_TM2 = 228,
	HINT_22_TM2 = 229,
	HINT_23_TM2 = 230,
	HINT_24_TM2 = 231,
	HINT_25_TM2 = 232,
	HINT_26_TM2 = 233,
	HINT_27_TM2 = 234,
	HINT_28_TM2 = 235,
	HINT_29_TM2 = 236,
	HINT_30_TM2 = 237,
	HINT_31_TM2 = 238,
	HINT_32_TM2 = 239,
	HINT_33_TM2 = 240,
	HINT_34_TM2 = 241,
	HINT_35_TM2 = 242,
	HINT_36_TM2 = 243,
	HINT_37_TM2 = 244,
	HINT_38_TM2 = 245,
	HINT_39_TM2 = 246,
	HINT_40_TM2 = 247,
	HINT_41_TM2 = 248,
	HINT_42_TM2 = 249,
	HINT_43_TM2 = 250,
	HINT_44_TM2 = 251,
	HINT_45_TM2 = 252,
	HINT_46_TM2 = 253,
	HINT_47_TM2 = 254,
	IPHT_00_TM2 = 255,
	IPHT_01_TM2 = 256,
	IPHT_02_TM2 = 257,
	IPHT_03_TM2 = 258,
	TITLE_PK2 = 259,
	M_SLCT_BTL_PK2 = 260,
	M_SLCT_BTL_CHR_PK2 = 261,
	M_SLCT_BTL_MSN_PK2 = 262,
	M_SLCT_CMN_PK2 = 263,
	M_SLCT_FSM_PK2 = 264,
	M_SLCT_OPT_PK2 = 265,
	M_SLCT_SND_PK2 = 266,
	M_SLCT_STY_PK2 = 267,
	PHT_SCR_PK2 = 268,
	TEST2D_PK2 = 269,
	ICON_OBJ = 270,
	ICON2_OBJ = 271,
	RARE_ENE001_PK2 = 272,
	PAZ_ENE001_PK2 = 273,
	PAZ_ENE002_PK2 = 274,
	PAZ_ENE003_PK2 = 275,
	PAZ_ENE004_PK2 = 276,
	PAZ_ENE005_PK2 = 277,
	PAZ_ENE006_PK2 = 278,
	PAZ_ENE007_PK2 = 279,
	HINT_00_PK2 = 280,
	HINT_01_PK2 = 281,
	HINT_02_PK2 = 282,
	HINT_03_PK2 = 283,
	HINT_04_PK2 = 284,
	HINT_05_PK2 = 285,
	HINT_06_PK2 = 286,
	HINT_07_PK2 = 287,
	HINT_08_PK2 = 288,
	HINT_09_PK2 = 289,
	HINT_10_PK2 = 290,
	HINT_11_PK2 = 291,
	HINT_12_PK2 = 292,
	HINT_13_PK2 = 293,
	HINT_14_PK2 = 294,
	HINT_15_PK2 = 295,
	HINT_16_PK2 = 296,
	HINT_17_PK2 = 297,
	HINT_18_PK2 = 298,
	HINT_19_PK2 = 299,
	HINT_20_PK2 = 300,
	HINT_21_PK2 = 301,
	HINT_22_PK2 = 302,
	HINT_23_PK2 = 303,
	HINT_24_PK2 = 304,
	HINT_25_PK2 = 305,
	HINT_26_PK2 = 306,
	HINT_27_PK2 = 307,
	HINT_28_PK2 = 308,
	HINT_29_PK2 = 309,
	HINT_30_PK2 = 310,
	HINT_31_PK2 = 311,
	HINT_32_PK2 = 312,
	HINT_33_PK2 = 313,
	HINT_34_PK2 = 314,
	HINT_35_PK2 = 315,
	HINT_36_PK2 = 316,
	HINT_37_PK2 = 317,
	HINT_38_PK2 = 318,
	HINT_39_PK2 = 319,
	HINT_40_PK2 = 320,
	HINT_41_PK2 = 321,
	HINT_42_PK2 = 322,
	HINT_43_PK2 = 323,
	HINT_44_PK2 = 324,
	HINT_45_PK2 = 325,
	HINT_46_PK2 = 326,
	HINT_47_PK2 = 327,
	REA_00_PK2 = 328,
	REA_01_PK2 = 329,
	REA_02_PK2 = 330,
	REA_03_PK2 = 331,
	REA_04_PK2 = 332,
	REA_05_PK2 = 333,
	REA_06_PK2 = 334,
	REA_07_PK2 = 335,
	REA_08_PK2 = 336,
	REA_09_PK2 = 337,
	REA_10_PK2 = 338,
	REA_11_PK2 = 339,
	REA_12_PK2 = 340,
	REA_13_PK2 = 341,
	REA_14_PK2 = 342,
	REA_15_PK2 = 343,
	REA_16_PK2 = 344,
	REA_17_PK2 = 345,
	REA_18_PK2 = 346,
	REA_19_PK2 = 347,
	REA_20_PK2 = 348,
	REA_21_PK2 = 349,
	REA_22_PK2 = 350,
	REA_23_PK2 = 351,
	REA_24_PK2 = 352,
	ENEDMG_PK2 = 353,
	ENEFACE001_PK2 = 354,
	ENEFACE002_PK2 = 355,
	ENEFACE003_PK2 = 356,
	ENEFACE004_PK2 = 357,
	ENEFACE005_PK2 = 358,
	M010_E_PK2 = 359,
	M011_E_PK2 = 360,
	M012_E_PK2 = 361,
	M013_E_PK2 = 362,
	M014_E_PK2 = 363,
	M015_E_PK2 = 364,
	M016_E_PK2 = 365,
	M018_E_PK2 = 366,
	M019_E_PK2 = 367,
	M020_E_PK2 = 368,
	M021_E_PK2 = 369,
	M022_E_PK2 = 370,
	M023_E_PK2 = 371,
	M024_E_PK2 = 372,
	M025_E_PK2 = 373,
	M027_E_PK2 = 374,
	M028_E_PK2 = 375,
	M031_E_PK2 = 376,
	M032_E_PK2 = 377,
	M033_E_PK2 = 378,
	M034_E_PK2 = 379,
	M035_E_PK2 = 380,
	M036_E_PK2 = 381,
	M037_E_PK2 = 382,
	M038_E_PK2 = 383,
	M040_E_PK2 = 384,
	M042_E_PK2 = 385,
	G_OVER_PK2 = 386,
	N_LOAD_PK2 = 387,
	LOGO_PK2 = 388,
	HAND_PK2 = 389,
	M000_DMY_TM2 = 390,
	M001_LIST_TM2 = 391,
	M002_LIST_TM2 = 392,
	M003_LIST_TM2 = 393,
	M004_LIST_TM2 = 394,
	M005_LIST_TM2 = 395,
	M006_LIST_TM2 = 396,
	M007_DMY_TM2 = 397,
	M008_DMY_TM2 = 398,
	M009_DMY_TM2 = 399,
	M010_LIST_TM2 = 400,
	M011_LIST_TM2 = 401,
	M012_LIST_TM2 = 402,
	M013_LIST_TM2 = 403,
	M014_LIST_TM2 = 404,
	M015_LIST_TM2 = 405,
	M016_LIST_TM2 = 406,
	M017_DMY_TM2 = 407,
	M018_LIST_TM2 = 408,
	M019_LIST_TM2 = 409,
	M020_LIST_TM2 = 410,
	M021_LIST_TM2 = 411,
	M022_LIST_TM2 = 412,
	M023_LIST_TM2 = 413,
	M024_LIST_TM2 = 414,
	M025_LIST_TM2 = 415,
	M026_LIST_TM2 = 416,
	M027_LIST_TM2 = 417,
	M028_LIST_TM2 = 418,
	M029_LIST_TM2 = 419,
	M030_DMY_TM2 = 420,
	M031_LIST_TM2 = 421,
	M032_LIST_TM2 = 422,
	M033_LIST_TM2 = 423,
	M034_LIST_TM2 = 424,
	M035_LIST_TM2 = 425,
	M036_LIST_TM2 = 426,
	M037_LIST_TM2 = 427,
	M038_LIST_TM2 = 428,
	M039_DMY_TM2 = 429,
	M040_LIST_TM2 = 430,
	M041_DMY_TM2 = 431,
	M042_LIST_TM2 = 432,
	M043_LIST_TM2 = 433,
	M044_LIST_TM2 = 434,
	M045_DMY_TM2 = 435,
	M046_DMY_TM2 = 436,
	M047_DMY_TM2 = 437,
	M048_DMY_TM2 = 438,
	M049_DMY_TM2 = 439,
	M050_DMY_TM2 = 440,
	M051_LIST_TM2 = 441,
	M052_DMY_TM2 = 442,
	M053_DMY_TM2 = 443,
	M054_DMY_TM2 = 444,
	M055_DMY_TM2 = 445,
	M056_DMY_TM2 = 446,
	M057_DMY_TM2 = 447,
	M058_LIST_TM2 = 448,
	M059_DMY_TM2 = 449,
	M060_DMY_TM2 = 450,
	M061_LIST_TM2 = 451,
	A00_LIST_TM2 = 452,
	A01_LIST_TM2 = 453,
	A02_LIST_TM2 = 454,
	A03_LIST_TM2 = 455,
	A04_LIST_TM2 = 456,
	A05_LIST_TM2 = 457,
	A06_LIST_TM2 = 458,
	A07_LIST_TM2 = 459,
	A08_LIST_TM2 = 460,
	A09_LIST_TM2 = 461,
	A10_LIST_TM2 = 462,
	A11_LIST_TM2 = 463,
	A12_LIST_TM2 = 464,
	A13_LIST_TM2 = 465,
	A14_LIST_TM2 = 466,
	A15_LIST_TM2 = 467,
	A16_LIST_TM2 = 468,
	A17_LIST_TM2 = 469,
	A18_LIST_TM2 = 470,
	A19_LIST_TM2 = 471,
	A20_LIST_TM2 = 472,
	A21_LIST_TM2 = 473,
	A22_LIST_TM2 = 474,
	A23_LIST_TM2 = 475,
	A24_LIST_TM2 = 476,
	A25_LIST_TM2 = 477,
	A26_LIST_TM2 = 478,
	A27_LIST_TM2 = 479,
	A28_LIST_TM2 = 480,
	A29_LIST_TM2 = 481,
	A30_LIST_TM2 = 482,
	A31_LIST_TM2 = 483,
	A32_LIST_TM2 = 484,
	A33_LIST_TM2 = 485,
	A34_LIST_TM2 = 486,
	A35_LIST_TM2 = 487,
	A36_LIST_TM2 = 488,
	A37_LIST_TM2 = 489,
	A38_LIST_TM2 = 490,
	A39_LIST_TM2 = 491,
	A40_LIST_TM2 = 492,
	A41_LIST_TM2 = 493,
	A42_LIST_TM2 = 494,
	A43_LIST_TM2 = 495,
	A44_LIST_TM2 = 496,
	A45_LIST_TM2 = 497,
	A46_LIST_TM2 = 498,
	REA00_LIST_TM2 = 499,
	REA01_LIST_TM2 = 500,
	REA02_LIST_TM2 = 501,
	REA03_LIST_TM2 = 502,
	REA04_LIST_TM2 = 503,
	REA05_LIST_TM2 = 504,
	REA06_LIST_TM2 = 505,
	REA07_LIST_TM2 = 506,
	REA08_LIST_TM2 = 507,
	REA09_LIST_TM2 = 508,
	REA10_LIST_TM2 = 509,
	REA11_LIST_TM2 = 510,
	REA12_LIST_TM2 = 511,
	REA13_LIST_TM2 = 512,
	REA14_LIST_TM2 = 513,
	REA15_LIST_TM2 = 514,
	REA16_LIST_TM2 = 515,
	REA17_LIST_TM2 = 516,
	REA18_LIST_TM2 = 517,
	REA19_LIST_TM2 = 518,
	REA20_LIST_TM2 = 519,
	REA21_LIST_TM2 = 520,
	REA22_LIST_TM2 = 521,
	REA23_LIST_TM2 = 522,
	REA24_LIST_TM2 = 523,
	PZL_NAME00_TM2 = 524,
	PZL_NAME01_TM2 = 525,
	PZL_NAME02_TM2 = 526,
	PZL_NAME03_TM2 = 527,
	PZL_NAME04_TM2 = 528,
	PZL_NAME05_TM2 = 529,
	PZL_NAME06_TM2 = 530,
	REL00_SAKKA_TM2 = 531,
	REL01_JYOSYU_TM2 = 532,
	REL02_HENSYU_TM2 = 533,
	REL03_TOUSHU_TM2 = 534,
	REL04_KIRIE_TM2 = 535,
	REL05_SHINKAN_TM2 = 536,
	REL06_KOKIRIE_TM2 = 537,
	REL07_MINZOKU_TM2 = 538,
	REL08_MINTUM_TM2 = 539,
	REL09_MINMUS_TM2 = 540,
	REL10_MAFUYU_TM2 = 541,
	REL11_MIKU_TM2 = 542,
	REL12_MIYUKI_TM2 = 543,
	SCENE0010_MOVIE_SCN = 544,
	SCENE0010_MOVIE_SLT = 545,
	SCENE0020_SCN = 546,
	SCENE0020_SLT = 547,
	SCENE0022_SCN = 548,
	SCENE0022_SLT = 549,
	SCENE0030_SCN = 550,
	SCENE0030_SLT = 551,
	SCENE0031_MOVIE_SCN = 552,
	SCENE0031_MOVIE_SLT = 553,
	SCENE1000_MOVIE_SCN = 554,
	SCENE1000_MOVIE_SLT = 555,
	SCENE1010_SCN = 556,
	SCENE1010_SLT = 557,
	SCENE1030_SCN = 558,
	SCENE1030_SLT = 559,
	SCENE1031_MOVIE_SCN = 560,
	SCENE1031_MOVIE_SLT = 561,
	SCENE1034_SCN = 562,
	SCENE1034_SLT = 563,
	SCENE1070_SCN = 564,
	SCENE1070_SLT = 565,
	SCENE1080_SCN = 566,
	SCENE1080_SLT = 567,
	SCENE1090_SCN = 568,
	SCENE1090_SLT = 569,
	SCENE1100_SCN = 570,
	SCENE1100_SLT = 571,
	SCENE1101_MOVIE_SCN = 572,
	SCENE1101_MOVIE_SLT = 573,
	SCENE1102_SCN = 574,
	SCENE1102_SLT = 575,
	SCENE1120_SCN = 576,
	SCENE1120_SLT = 577,
	SCENE1150_SCN = 578,
	SCENE1150_SLT = 579,
	SCENE1160_SCN = 580,
	SCENE1160_SLT = 581,
	SCENE1170_SCN = 582,
	SCENE1170_SLT = 583,
	SCENE1180_SCN = 584,
	SCENE1180_SLT = 585,
	SCENE1220_SCN = 586,
	SCENE1220_SLT = 587,
	SCENE1230_SCN = 588,
	SCENE1230_SLT = 589,
	SCENE1240_MOVIE_SCN = 590,
	SCENE1240_MOVIE_SLT = 591,
	SCENE1250_SCN = 592,
	SCENE1250_SLT = 593,
	SCENE1260_SCN = 594,
	SCENE1260_SLT = 595,
	SCENE1280_SCN = 596,
	SCENE1280_SLT = 597,
	SCENE1300_MOVIE_SCN = 598,
	SCENE1300_MOVIE_SLT = 599,
	SCENE1301_SCN = 600,
	SCENE1301_SLT = 601,
	SCENE1320_SCN = 602,
	SCENE1320_SLT = 603,
	SCENE1330_SCN = 604,
	SCENE1330_SLT = 605,
	SCENE1331_MOVIE_SCN = 606,
	SCENE1331_MOVIE_SLT = 607,
	SCENE1332_MOVIE_SCN = 608,
	SCENE1332_MOVIE_SLT = 609,
	SCENE1340_SCN = 610,
	SCENE1340_SLT = 611,
	SCENE1410_SCN = 612,
	SCENE1410_SLT = 613,
	SCENE2010_MOVIE_SCN = 614,
	SCENE2010_MOVIE_SLT = 615,
	SCENE2013_SCN = 616,
	SCENE2013_SLT = 617,
	SCENE2020_SCN = 618,
	SCENE2020_SLT = 619,
	SCENE2030_SCN = 620,
	SCENE2030_SLT = 621,
	SCENE2040_SCN = 622,
	SCENE2040_SLT = 623,
	SCENE2050_MOVIE_SCN = 624,
	SCENE2050_MOVIE_SLT = 625,
	SCENE2060_SCN = 626,
	SCENE2060_SLT = 627,
	SCENE2061_MOVIE_SCN = 628,
	SCENE2061_MOVIE_SLT = 629,
	SCENE2062_SCN = 630,
	SCENE2062_SLT = 631,
	SCENE2070_SCN = 632,
	SCENE2070_SLT = 633,
	SCENE2071_MOVIE_SCN = 634,
	SCENE2071_MOVIE_SLT = 635,
	SCENE2072_SCN = 636,
	SCENE2072_SLT = 637,
	SCENE2090_SCN = 638,
	SCENE2090_SLT = 639,
	SCENE2091_MOVIE_SCN = 640,
	SCENE2091_MOVIE_SLT = 641,
	SCENE2092_SCN = 642,
	SCENE2092_SLT = 643,
	SCENE2100_SCN = 644,
	SCENE2100_SLT = 645,
	SCENE2110_MOVIE_SCN = 646,
	SCENE2110_MOVIE_SLT = 647,
	SCENE2130_SCN = 648,
	SCENE2130_SLT = 649,
	SCENE2131_MOVIE_SCN = 650,
	SCENE2131_MOVIE_SLT = 651,
	SCENE2132_SCN = 652,
	SCENE2132_SLT = 653,
	SCENE2140_SCN = 654,
	SCENE2140_SLT = 655,
	SCENE2141_SCN = 656,
	SCENE2141_SLT = 657,
	SCENE2142_MOVIE_SCN = 658,
	SCENE2142_MOVIE_SLT = 659,
	SCENE2143_MOVIE_SCN = 660,
	SCENE2143_MOVIE_SLT = 661,
	SCENE2150_SCN = 662,
	SCENE2150_SLT = 663,
	SCENE2160_SCN = 664,
	SCENE2160_SLT = 665,
	SCENE2170_SCN = 666,
	SCENE2170_SLT = 667,
	SCENE2171_MOVIE_SCN = 668,
	SCENE2171_MOVIE_SLT = 669,
	SCENE3010_MOVIE_SCN = 670,
	SCENE3010_MOVIE_SLT = 671,
	SCENE3020_SCN = 672,
	SCENE3020_SLT = 673,
	SCENE3030_SCN = 674,
	SCENE3030_SLT = 675,
	SCENE3040_MOVIE_SCN = 676,
	SCENE3040_MOVIE_SLT = 677,
	SCENE3050_SCN = 678,
	SCENE3050_SLT = 679,
	SCENE3060_SCN = 680,
	SCENE3060_SLT = 681,
	SCENE3070_SCN = 682,
	SCENE3070_SLT = 683,
	SCENE3080_MOVIE_SCN = 684,
	SCENE3080_MOVIE_SLT = 685,
	SCENE3081_MOVIE_SCN = 686,
	SCENE3081_MOVIE_SLT = 687,
	SCENE3090_MOVIE_SCN = 688,
	SCENE3090_MOVIE_SLT = 689,
	SCENE3100_SCN = 690,
	SCENE3100_SLT = 691,
	SCENE3110_SCN = 692,
	SCENE3110_SLT = 693,
	SCENE4010_MOVIE_SCN = 694,
	SCENE4010_MOVIE_SLT = 695,
	SCENE4011_SCN = 696,
	SCENE4011_SLT = 697,
	SCENE4020_SCN = 698,
	SCENE4020_SLT = 699,
	SCENE4030_SCN = 700,
	SCENE4030_SLT = 701,
	SCENE4031_MOVIE_SCN = 702,
	SCENE4031_MOVIE_SLT = 703,
	SCENE4040_SCN = 704,
	SCENE4040_SLT = 705,
	SCENE4041_MOVIE_SCN = 706,
	SCENE4041_MOVIE_SLT = 707,
	SCENE4042_SCN = 708,
	SCENE4042_SLT = 709,
	SCENE4050_SCN = 710,
	SCENE4050_SLT = 711,
	SCENE4060_MOVIE_SCN = 712,
	SCENE4060_MOVIE_SLT = 713,
	SCENE4070_SCN = 714,
	SCENE4070_SLT = 715,
	SCENE4080_MOVIE_SCN = 716,
	SCENE4080_MOVIE_SLT = 717,
	SCENE4090_MOVIE_SCN = 718,
	SCENE4090_MOVIE_SLT = 719,
	SCENE4100_MOVIE_SCN = 720,
	SCENE4100_MOVIE_SLT = 721,
	SCENE4110_MOVIE_SCN = 722,
	SCENE4110_MOVIE_SLT = 723,
	SCENE4120_MOVIE_SCN = 724,
	SCENE4120_MOVIE_SLT = 725,
	SCENE5010_MOVIE_SCN = 726,
	SCENE5010_MOVIE_SLT = 727,
	SCENE5020_MOVIE_SCN = 728,
	SCENE5020_MOVIE_SLT = 729,
	SCENE4900_SCN = 730,
	SCENE4900_SLT = 731,
	SCENE4901_SCN = 732,
	SCENE4901_SLT = 733,
	SCENE9000_MOVIE_SCN = 734,
	SCENE9000_MOVIE_SLT = 735,
	SCENE9001_MOVIE_SCN = 736,
	SCENE9001_MOVIE_SLT = 737,
	R000_GENKAN_MIM = 738,
	R001_MIM = 739,
	R002_MIM = 740,
	R003_OUSETSU_MIM = 741,
	R004_MIM = 742,
	R005_MIM = 743,
	R006_MIM = 744,
	R007_TOMURAI_MIM = 745,
	R008_MIM = 746,
	R009_NANDO_MIM = 747,
	R010_MIM = 748,
	R011_GOIMON_MIM = 749,
	R012_MIM = 750,
	R013_MIM = 751,
	R014_MIM = 752,
	R015_MIM = 753,
	R016_MIM = 754,
	R017_MIM = 755,
	R018_MIM = 756,
	R019_MIM = 757,
	R020_MIM = 758,
	R021_URANIWA_MIM = 759,
	R022_MIM = 760,
	R023_MIM = 761,
	R024_MIM = 762,
	R025_MIM = 763,
	R026_MIM = 764,
	R027_MIM = 765,
	R028_MIM = 766,
	R029_MIM = 767,
	R030_MIM = 768,
	R031_MIM = 769,
	R032_MIM = 770,
	R033_MIM = 771,
	R034_MIM = 772,
	R035_MIM = 773,
	R036_MIM = 774,
	R037_MIM = 775,
	R038_TYOUBOU_MIM = 776,
	R039_MIM = 777,
	R040_MIM = 778,
	R041_HIKAE_MIM = 779,
	M000_MIKU_BWC = 780,
	M000_MIKU_CLT = 781,
	M000_SPE1_BWC = 782,
	M000_SPE1_CLT = 783,
	M000_SPE2_BWC = 784,
	M000_SPE2_CLT = 785,
	M000_SPE3_BWC = 786,
	M000_SPE3_CLT = 787,
	M001_MAFUYU_BWC = 788,
	M001_MAFUYU_CLT = 789,
	M000_MIKU_ACS = 790,
	M000_MIKU_PK2 = 791,
	M000_MIKU_MPK = 792,
	M000_SPE1_PK2 = 793,
	M000_SPE2_PK2 = 794,
	M000_SPE3_PK2 = 795,
	M001_MAFUYU_ACS = 796,
	M001_MAFUYU_PK2 = 797,
	M001_MAFUYU_MPK = 798,
	M000_MIKU_MDL = 799,
	M001_MAFUYU_MDL = 800,
	M002_MONOSAK_MDL = 801,
	M003_HENSYU_MDL = 802,
	M004_JYOSYU_MDL = 803,
	M005_SAKKA_MDL = 804,
	M006_KOKIRIE_MDL = 805,
	M007_KAZOKU_MDL = 806,
	M008_DUMMY_MDL = 807,
	M009_HENSHITAI_MDL = 808,
	M010_HENREI_MDL = 809,
	M011_JYOREI_MDL = 810,
	M012_SAKKAREI_MDL = 811,
	M013_TENAGA_MDL = 812,
	M014_KAMIONNA_MDL = 813,
	M015_KOMUSO_MDL = 814,
	M016_MINREI_MDL = 815,
	M017_KIRIE_MDL = 816,
	M018_MAYOIGO1_MDL = 817,
	M019_BOUREI1_MDL = 818,
	M020_SAKASA_MDL = 819,
	M021_KUBI_MDL = 820,
	M022_MAYOIGO2_MDL = 821,
	M023_MAYOIGO3_MDL = 822,
	M024_MEKAKUSHI_MDL = 823,
	M025_RTE_MDL = 824,
	M026_MINZOKU_MDL = 825,
	M027_KONNA_MDL = 826,
	M028_KOTOKO_MDL = 827,
	M029_MAYOIGO4_MDL = 828,
	M030_SAKKAGE_MDL = 829,
	M031_HAIREI_MDL = 830,
	M032_SHINKAN1_MDL = 831,
	M033_MINTSUMA_MDL = 832,
	M034_SHINKAN2_MDL = 833,
	M035_SHINKAN3_MDL = 834,
	M036_SHINKAN4_MDL = 835,
	M037_TOUSHU_MDL = 836,
	M038_NAWAMIKO_MDL = 837,
	M039_MAGONLY_MDL = 838,
	M040_MAGATOKI_MDL = 839,
	M041_DUMMY_MDL = 840,
	M042_SYOUKI2_MDL = 841,
	M043_SYOUKI3_MDL = 842,
	M044_SYOUKI4_MDL = 843,
	M045_DUMMY_MDL = 844,
	M046_DUMMY_MDL = 845,
	M047_SAKKAN_MDL = 846,
	M048_DUMMY_MDL = 847,
	M049_HENSYUHAND_MDL = 848,
	M050_LTE_MDL = 849,
	M051_MKIRIE_MDL = 850,
	M052_DUMMY_MDL = 851,
	M053_DUMMY_MDL = 852,
	M054_DUMMY_MDL = 853,
	M055_SYOUALL_MDL = 854,
	M056_MINDEAD_MDL = 855,
	M057_NAWAKOKI_MDL = 856,
	M058_BOUREI2_MDL = 857,
	M059_JITOUSHU_MDL = 858,
	M060_TENAKAGE_MDL = 859,
	M061_MONOJYO_MDL = 860,
	M800_BOUREI1_MDL = 861,
	M801_SAKASA_MDL = 862,
	M802_KUBI_MDL = 863,
	M803_KONNA_MDL = 864,
	M804_KOTOKO_MDL = 865,
	M900_ONNRYOU_MPK = 866,
	M000_MIKU_ANM = 867,
	M001_MAFUYU_ANM = 868,
	M010_HENREI_ANM = 869,
	M011_JYOREI_ANM = 870,
	M012_SAKKAREI_ANM = 871,
	M013_TENAGA_ANM = 872,
	M014_KAMIONNA_ANM = 873,
	M015_KOMUSO_ANM = 874,
	M016_MINREI_ANM = 875,
	M018_MAYOIGO1_ANM = 876,
	M019_BOUREI1_ANM = 877,
	M020_SAKASA_ANM = 878,
	M021_KUBI_ANM = 879,
	M022_MAYOIGO2_ANM = 880,
	M023_MAYOIGO3_ANM = 881,
	M024_MEKAKUSHI_ANM = 882,
	M025_RTE_ANM = 883,
	M027_KONNA_ANM = 884,
	M028_KOTOKO_ANM = 885,
	M031_HAIREI_ANM = 886,
	M032_SHINKAN1_ANM = 887,
	M033_MINTSUMA_ANM = 888,
	M034_SHINKAN2_ANM = 889,
	M035_SHINKAN3_ANM = 890,
	M036_SHINKAN4_ANM = 891,
	M037_TOUSHU_ANM = 892,
	M038_NAWAMIKO_ANM = 893,
	M039_DUMMY_ANM = 894,
	M040_MAGATOKI_ANM = 895,
	M041_DUMMY_ANM = 896,
	M042_SYOUKI2_ANM = 897,
	M043_SYOUKI3_ANM = 898,
	M044_SYOUKI4_ANM = 899,
	M051_MKIRIE_ANM = 900,
	M058_BOUREI2_ANM = 901,
	M800_BOUREI1_ANM = 902,
	M801_SAKASA_ANM = 903,
	M802_KUBI_ANM = 904,
	M803_KONNA_ANM = 905,
	M804_KOTOKO_ANM = 906,
	M005_SAKKA_F001_ANM = 907,
	M003_HENSYU_F100_ANM = 908,
	M003_HENSYU_F101_ANM = 909,
	M003_HENSYU_F102_ANM = 910,
	M010_HENREI_F103_ANM = 911,
	M010_HENREI_F104_ANM = 912,
	M003_HENSYU_F105_ANM = 913,
	M004_JYOSYU_F106_ANM = 914,
	M024_MEKAKUSHI_F107_ANM = 915,
	M004_JYOSYU_F108_ANM = 916,
	M004_JYOSYU_F109_ANM = 917,
	M033_MINTSUMA_F110_ANM = 918,
	M021_KUBI_F111_ANM = 919,
	M005_SAKKA_F112_ANM = 920,
	M006_KOKIRIE_F113_ANM = 921,
	M005_SAKKA_F114_ANM = 922,
	M047_SAKKAN_F115_ANM = 923,
	M001_MAFUYU_F116_ANM = 924,
	M004_JYOSYU_F119_ANM = 925,
	M006_KOKIRIE_F120_ANM = 926,
	M004_JYOSYU_F122_ANM = 927,
	M005_SAKKA_F125_ANM = 928,
	M020_SAKASA_F126_ANM = 929,
	M003_HENSYU_F128_ANM = 930,
	M010_HENREI_F129_ANM = 931,
	M009_HENSHITAI_F130_ANM = 932,
	M029_MAYOIGO4_F200_ANM = 933,
	M001_MAFUYU_F205_ANM = 934,
	M018_MAYOIGO1_F206_ANM = 935,
	M026_MINZOKU_F207_ANM = 936,
	M006_KOKIRIE_F209_ANM = 937,
	M026_MINZOKU_F211_ANM = 938,
	M026_MINZOKU_F213_ANM = 939,
	M026_MINZOKU_F216_ANM = 940,
	M059_JITOUSHU_F300_ANM = 941,
	M059_JITOUSHU_F301_ANM = 942,
	M006_KOKIRIE_F400_ANM = 943,
	I000_PLAY_CAMERA1_SGD = 944,
	I001_PLAY_LIGHT_SGD = 945,
	I002_LIGHTER_SGD = 946,
	I003_CAMERA1_SGD = 947,
	I004_RECORDER_SGD = 948,
	I005_NOTE_SGD = 949,
	I006_KEY_SABI_SGD = 950,
	I007_KEY_EARTH_SGD = 951,
	I008_TAPE2_SGD = 952,
	I009_HIBUTU5_SGD = 953,
	I010_GOSINKYO1_SGD = 954,
	I011_PHOTO_IKKO_SGD = 955,
	I012_DMY = 956,
	I013_GOSINKYO2_SGD = 957,
	I014_DMY = 958,
	I015_DMY = 959,
	I016_KOMON_SGD = 960,
	I017_ISI_GLAY_SGD = 961,
	I018_ISI_BLUE_SGD = 962,
	I019_ISI_YELLOW_SGD = 963,
	I020_ISI_PURPLE_SGD = 964,
	I021_ISI_GREEN_SGD = 965,
	I022_DMY = 966,
	I023_ALBUM_SGD = 967,
	I024_SYOUKI1_SGD = 968,
	I025_SYOUKI2_SGD = 969,
	I026_SYOUKI3_SGD = 970,
	I027_SYOUKI4_SGD = 971,
	I028_SYOUKI5_SGD = 972,
	I029_SYOUKI6_SGD = 973,
	I030_SYOUKI7_SGD = 974,
	I031_SYOUKI8_SGD = 975,
	I032_KIRIE_SGD = 976,
	I033_DMY = 977,
	I034_DMY = 978,
	I035_KENKYU_SGD = 979,
	I036_PHOTO_NAWA_SGD = 980,
	I037_DMY = 981,
	I038_HIKIDO_SGD = 982,
	I039_DMY = 983,
	I040_DMY = 984,
	I041_MEN_SGD = 985,
	R000_GENKAN_PK2 = 986,
	R000_GENKAN_LIT = 987,
	R001_FUSUMA_PK2 = 988,
	R001_FUSUMA_LIT = 989,
	R002_IZANAI_PK2 = 990,
	R002_IZANAI_LIT = 991,
	R003_OUSETSU_PK2 = 992,
	R003_OUSETSU_LIT = 993,
	R004_SEMAI_PK2 = 994,
	R004_SEMAI_LIT = 995,
	R005_MEN_PK2 = 996,
	R005_MEN_LIT = 997,
	R006_HAKONIWA_PK2 = 998,
	R006_HAKONIWA_LIT = 999,
	R007_TOMURAI_PK2 = 1000,
	R007_TOMURAI_LIT = 1001,
	R008_KAIROU_PK2 = 1002,
	R008_KAIROU_LIT = 1003,
	R009_NANDO_PK2 = 1004,
	R009_NANDO_LIT = 1005,
	R010_NINGYO_PK2 = 1006,
	R010_NINGYO_LIT = 1007,
	R011_GOIMON_PK2 = 1008,
	R011_GOIMON_LIT = 1009,
	R012_IMA_PK2 = 1010,
	R012_IMA_LIT = 1011,
	R013_ANUTSU_PK2 = 1012,
	R013_ANUTSU_LIT = 1013,
	R014_BUTSUMA_PK2 = 1014,
	R014_BUTSUMA_LIT = 1015,
	R015_KOUJI_PK2 = 1016,
	R015_KOUJI_LIT = 1017,
	R016_NAKANIWA_PK2 = 1018,
	R016_NAKANIWA_LIT = 1019,
	R017_KAIDAN_PK2 = 1020,
	R017_KAIDAN_LIT = 1021,
	R018_ZASHIKI_PK2 = 1022,
	R018_ZASHIKI_LIT = 1023,
	R019_ODOU_PK2 = 1024,
	R019_ODOU_LIT = 1025,
	R020_YANEURA_PK2 = 1026,
	R020_YANEURA_LIT = 1027,
	R021_URANIWA_PK2 = 1028,
	R021_URANIWA_LIT = 1029,
	R022_NAKASU_PK2 = 1030,
	R022_NAKASU_LIT = 1031,
	R023_IKESU_PK2 = 1032,
	R023_IKESU_LIT = 1033,
	R024_TSUKIMI_PK2 = 1034,
	R024_TSUKIMI_LIT = 1035,
	R025_SANDO_PK2 = 1036,
	R025_SANDO_LIT = 1037,
	R026_OYASHIRO_PK2 = 1038,
	R026_OYASHIRO_LIT = 1039,
	R027_WATARI_PK2 = 1040,
	R027_WATARI_LIT = 1041,
	R028_KEGARE1_PK2 = 1042,
	R028_KEGARE1_LIT = 1043,
	R029_KARAKURI_PK2 = 1044,
	R029_KARAKURI_LIT = 1045,
	R030_KEGARE2_PK2 = 1046,
	R030_KEGARE2_LIT = 1047,
	R031_IDOSOKO_PK2 = 1048,
	R031_IDOSOKO_LIT = 1049,
	R032_NAWADONO_PK2 = 1050,
	R032_NAWADONO_LIT = 1051,
	R033_MISOGI_PK2 = 1052,
	R033_MISOGI_LIT = 1053,
	R034_YOMI_PK2 = 1054,
	R034_YOMI_LIT = 1055,
	R035_KOTO_PK2 = 1056,
	R035_KOTO_LIT = 1057,
	R036_K_MEN_PK2 = 1058,
	R036_K_MEN_LIT = 1059,
	R037_FAR_DMY = 1060,
	R037_DMY = 1061,
	R038_TYOUBOU_PK2 = 1062,
	R038_TYOUBOU_LIT = 1063,
	R039_FAR_DMY = 1064,
	R039__DMY = 1065,
	R040_NINGYO_2_PK2 = 1066,
	R040_NINGYO_2_LIT = 1067,
	R041_HIKAE_PK2 = 1068,
	R041_HIKAE_LIT = 1069,
	F000_CLOCK_L_SGD = 1070,
	F001_CLOCK_S_SGD = 1071,
	F002_CLOCK_C_SGD = 1072,
	F003_BYOUBU_F_SGD = 1073,
	F004_MEN_SGD = 1074,
	F005_KABE_SGD = 1075,
	F006_NAWA0_SGD = 1076,
	F007_NAWA1_SGD = 1077,
	F008_NAWA2_SGD = 1078,
	F009_LIGHT_AKARI_SGD = 1079,
	F010_HASHIRA_SGD = 1080,
	F011_IDO_SGD = 1081,
	F012_SAVEPNT_SGD = 1082,
	F013_WAFUKU1_SGD = 1083,
	F014_WAFUKU2_SGD = 1084,
	F015_SISI_SGD = 1085,
	F016_SYOUDAI_SGD = 1086,
	F017_TANMONO_SGD = 1087,
	F018_JOMAE_SGD = 1088,
	F019_JOMAE_SGD = 1089,
	F020_KAGOME_SGD = 1090,
	F021_SUISYA_SGD = 1091,
	F022_BRIDGE1_SGD = 1092,
	F023_BRIDGE2_SGD = 1093,
	F024_SYOUJI_A_S_SGD = 1094,
	F025_SYOUJI_S_SGD = 1095,
	F026_SYOUJI_SGD = 1096,
	F027_SYOUJI_A_SGD = 1097,
	F028_HAND_MIRROR_SGD = 1098,
	F029_SYOUJI_A_SGD = 1099,
	F030_SYOUJI_SGD = 1100,
	F031_SYOUJI_SGD = 1101,
	F032_JOMAE_SGD = 1102,
	F033_NAWA_SGD = 1103,
	F034_AKARI_SGD = 1104,
	F035_FUTA_SGD = 1105,
	F036_WAFUKU_SGD = 1106,
	F037_BYOUBU_SGD = 1107,
	F038_HIKIDASHI_SGD = 1108,
	F039_BYOUBU_A_SGD = 1109,
	F040_DARK_AKARI_SGD = 1110,
	F041_MEN1_SGD = 1111,
	F042_MEN2_SGD = 1112,
	F043_MEN3_SGD = 1113,
	F044_MEN4_SGD = 1114,
	F045_TOBIRA1_SGD = 1115,
	F046_TOBIRA2_SGD = 1116,
	F047_HANDR_SGD = 1117,
	F048_FOOTR_SGD = 1118,
	F049_HEAD_SGD = 1119,
	F050_FOOTL_SGD = 1120,
	F051_HANDL_SGD = 1121,
	F052_TOUROU_SGD = 1122,
	F053_BYOUBU_M_SGD = 1123,
	F054_HIKIDO_SGD = 1124,
	F055_SYOUJI_A_S_SGD = 1125,
	F056_KAZARI_SGD = 1126,
	F057_NAWA0_SGD = 1127,
	F058_NAWA1_SGD = 1128,
	F059_NAWA2_SGD = 1129,
	F060_DMY = 1130,
	F061_NAWA_SGD = 1131,
	F062_AKARI_SGD = 1132,
	F063_LIGHT_AKARI_SGD = 1133,
	F064_DARK_AKARI_SGD = 1134,
	F065_KAMON_D5_SGD = 1135,
	F066_KAMON_D2_SGD = 1136,
	F067_KEKKON2_SGD = 1137,
	F068_KAMON_HAK_SGD = 1138,
	F069_KAMON1_SGD = 1139,
	F070_KAMON_D4_SGD = 1140,
	F071_AKASI_SGD = 1141,
	F072_KAN_MIZO_SGD = 1142,
	F073_MOON_SGD = 1143,
	F074_KAN_HAME_SGD = 1144,
	F075_SYOUJI_S_SGD = 1145,
	F076_TANA_SGD = 1146,
	F077_TOBIRA_R_SGD = 1147,
	F078_TOBIRA_L_SGD = 1148,
	F079_KEKKON1_SGD = 1149,
	F080_HAMEITA_SGD = 1150,
	F081_KYODAI_SGD = 1151,
	F082_KAGIBAN1_SGD = 1152,
	F083_KAGIBAN2_SGD = 1153,
	F084_DMY = 1154,
	F085_DMY = 1155,
	F086_DMY = 1156,
	F087_KAIDAN_SGD = 1157,
	F088_SAVEPNT2_SGD = 1158,
	F089_SAVEPNT3_SGD = 1159,
	F090_SAVEPNT4_SGD = 1160,
	F091_SAVEPNT5_SGD = 1161,
	F092_OFUDA1_SGD = 1162,
	F093_OFUDA2_SGD = 1163,
	F094_OFUDA3_SGD = 1164,
	F095_OFUDA4_SGD = 1165,
	F096_TOBIRA_R_SGD = 1166,
	F097_TOBIRA_L_SGD = 1167,
	F098_MEN_SGD = 1168,
	F099_KAKUSHI1_SGD = 1169,
	F100_KAKUSHI2_SGD = 1170,
	F101_TEMARI_SGD = 1171,
	F102_KAKUSHI_ANU_SGD = 1172,
	F103_GOSINKYOU_SGD = 1173,
	F104_HASHIRA_SGD = 1174,
	F105_K_MEN_SGD = 1175,
	F106_KAIDAN_SGD = 1176,
	F107_CANDOL_2_SGD = 1177,
	F108_ODOROKI_SGD = 1178,
	F109_CANDOL_1_SGD = 1179,
	F110_ZUSITO_L_SGD = 1180,
	F111_ZUSITO_R_SGD = 1181,
	F112_ZUSI_SGD = 1182,
	F113_NAWA_SGD = 1183,
	F114_KAIDAN_SGD = 1184,
	F115_KOKUSEKI_SGD = 1185,
	F116_OFUDA1_SGD = 1186,
	F117_OFUDA2_SGD = 1187,
	F118_OFUDA3_SGD = 1188,
	F119_OFUDA_KAI1_SGD = 1189,
	F120_OFUDA_KAI2_SGD = 1190,
	F121_OFUDA_KAI3_SGD = 1191,
	F122_K_KOKUSEKI_SGD = 1192,
	F123_MADO_SGD = 1193,
	F124_KAGE_SGD = 1194,
	F125_MEN_SGD = 1195,
	F126_KINKO_SGD = 1196,
	F127_NAWA1_SGD = 1197,
	F128_NAWA2_SGD = 1198,
	F129_NAWA3_SGD = 1199,
	F130_NAWA4_SGD = 1200,
	F131_NAWA5_SGD = 1201,
	F132_NAWA6_SGD = 1202,
	F133_NAWA7_SGD = 1203,
	F134_NAWA8_SGD = 1204,
	F135_NAWA2_SGD = 1205,
	F136_NAWA1_SGD = 1206,
	F137_NAWA10_SGD = 1207,
	F138_DENKYU_SGD = 1208,
	F139_DENKYU_SGD = 1209,
	F140_GAREKI_SGD = 1210,
	F141_TUITATE_SGD = 1211,
	F142_HAKO_FUTA_SGD = 1212,
	F143_NAZOKURO_SGD = 1213,
	F144_HAKO_FUTA_SGD = 1214,
	F145_IDO_FUTA_SGD = 1215,
	F146_DENKYU_SGD = 1216,
	F147_NIN_HED_SGD = 1217,
	F148_DENKYU_SGD = 1218,
	F149_CHIDAMARI_SGD = 1219,
	F150_ITA_SGD = 1220,
	F151_OKOTU_HAKO_SGD = 1221,
	F152__DMY = 1222,
	F153_SYOKUDAI_SGD = 1223,
	F154_BUTSU4_SGD = 1224,
	F155_BUTSU5_SGD = 1225,
	F156__DMY = 1226,
	F157__DMY = 1227,
	F158__DMY = 1228,
	F159__DMY = 1229,
	F160__DMY = 1230,
	F161__DMY = 1231,
	F162__DMY = 1232,
	F163__DMY = 1233,
	F164__DMY = 1234,
	F165_KEKKON3_SGD = 1235,
	F166_KEKKON4_SGD = 1236,
	F167_KEKKON5_SGD = 1237,
	F168_KEKKON6_SGD = 1238,
	D000_GEN1_SGD = 1239,
	D001_GEN2_SGD = 1240,
	D002_GEN_IZA_SGD = 1241,
	D003_GEN_SEM_N_SGD = 1242,
	D004_FUS_KAI_SGD = 1243,
	D005_FUS1_1_SGD = 1244,
	D006_FUS1_2_SGD = 1245,
	D007_FUS2_1_SGD = 1246,
	D008_FUS2_2_SGD = 1247,
	D009_FUS3_1_SGD = 1248,
	D010_FUS3_2_SGD = 1249,
	D011_KAGIBANGOU_SGD = 1250,
	D012_TYOUBOU1_SGD = 1251,
	D013_FUS_IZA_SGD = 1252,
	D014_IZA_OUS_SGD = 1253,
	D015_IMA_ANU_K_SGD = 1254,
	D016_OUS_ANU_SGD = 1255,
	D017_SEM_ANU_SGD = 1256,
	D018_HAHEN_NO_SGD = 1257,
	D019_MEN_HAK_SGD = 1258,
	D020_K_MEN_SEM1_SGD = 1259,
	D021_K_MEN_SEM_SGD = 1260,
	D022_HAK1_SGD = 1261,
	D023_KAI_NAN_SGD = 1262,
	D024_WAN_NAK_SGD = 1263,
	D025_WAN_GOI_SGD = 1264,
	D026_GEN_SEM2_SGD = 1265,
	D027_GOI_IMA_SGD = 1266,
	D028_IMA_ANU_SGD = 1267,
	D029_K_MEN_SEM2_SGD = 1268,
	D030_ANU1_SGD = 1269,
	D031_HAK_ANU_SGD = 1270,
	D032_HAK_BUT1_SGD = 1271,
	D033_HAK_BUT2_SGD = 1272,
	D034_SEM_MEN_SGD = 1273,
	D035_TOM_KAI_SGD = 1274,
	D036_KOU_WAT1_SGD = 1275,
	D037_TOM_NAK_SGD = 1276,
	D038_NAK_KAI_SGD = 1277,
	D039_KOU_WAT2_SGD = 1278,
	D040_NAK_NAK_SGD = 1279,
	D041_NAK_ODO1_SGD = 1280,
	D042_DMY = 1281,
	D043_BUT_KAI_SGD = 1282,
	D044_KAI_IKE_SGD = 1283,
	D045_TOM_KOU_SGD = 1284,
	D046_YAN_BUT1_SGD = 1285,
	D047_ANU_SEM_SGD = 1286,
	D048_IDO_IKE_SGD = 1287,
	D049_MEN_HAK_SGD = 1288,
	D050_IDO_TOR_SGD = 1289,
	D051_TOR_OYA1_SGD = 1290,
	D052_TOR_OYA2_SGD = 1291,
	D053_KOT_YAN_SGD = 1292,
	D054_WAN_GOI2_SGD = 1293,
	D055_DMY = 1294,
	D056_DMY = 1295,
	D057_DMY = 1296,
	D058_WAT_KAR1_SGD = 1297,
	D059_DMY = 1298,
	D060_DMY = 1299,
	D061_DMY = 1300,
	D062_DMY = 1301,
	D063_DMY = 1302,
	D064_DMY = 1303,
	D065_KAI_KOT_SGD = 1304,
	D066_KOTO1_SGD = 1305,
	D067_KAI1_SGD = 1306,
	D068_KAI2_SGD = 1307,
	D069_KAIR_TYO_SGD = 1308,
	D070_OUS_TYO_SGD = 1309,
	D071_TSU_TYO1_SGD = 1310,
	D072_TSU_TYO2_SGD = 1311,
	D073_KAID_TYO_SGD = 1312,
	D074_DMY = 1313,
	D075_YAN_BUT2_SGD = 1314,
	D076_DMY = 1315,
	D077_KAI_ZAS_SGD = 1316,
	D078_DMY = 1317,
	D079_DMY = 1318,
	D080_DMY = 1319,
	D081_DMY = 1320,
	D082_DMY = 1321,
	D083_DMY = 1322,
	D084_DMY = 1323,
	D085_DMY = 1324,
	D086_DMY = 1325,
	D087_DMY = 1326,
	D088_DMY = 1327,
	D089_DMY = 1328,
	D090_DMY = 1329,
	D091_DMY = 1330,
	D092_DMY = 1331,
	D093_KIN_KEG1_SGD = 1332,
	D094_KIN_KEG2_SGD = 1333,
	D095_IDO_KEG2_SGD = 1334,
	D096_NAW_KEG2_2_SGD = 1335,
	D097_NAW_TUM1_SGD = 1336,
	D098_NAW_TUM2_SGD = 1337,
	D099_YOM_TUM1_SGD = 1338,
	D100_YOM_TUM2_SGD = 1339,
	D101_NAK_ODO2_SGD = 1340,
	D102_WAT_KAR2_SGD = 1341,
	D103_IMA1_SGD = 1342,
	D104_DMY = 1343,
	D105_DMY = 1344,
	D106_DMY = 1345,
	D107_HAHEN_YES_SGD = 1346,
	D108_ZASIKI_SGD = 1347,
	D109_DMY = 1348,
	D110_NAW_KEG2_1_SGD = 1349,
	SSYSTEM_BD = 1350,
	SGY000_BD = 1351,
	SGY001_BD = 1352,
	SV000_MIKU_BD = 1353,
	SV001_MAFUYU_BD = 1354,
	SP000_KAMON_BD = 1355,
	SP001_NINGYOU_BD = 1356,
	SP002_BANGOU_BD = 1357,
	SP003_BUTUDAN_BD = 1358,
	SP004_ROUSOKU_BD = 1359,
	SP005_BONJI_BD = 1360,
	SP006_KANZASHI_BD = 1361,
	SP007_NAWA_BD = 1362,
	SG010_HENREI_BD = 1363,
	SG011_JYOREI_BD = 1364,
	SG012_SAKKAREI_BD = 1365,
	SG024_MEKAKUSHI_BD = 1366,
	SG018_MAYOIGO1_BD = 1367,
	SG023_MAYOIGO3_BD = 1368,
	SG022_MAYOIGO2_BD = 1369,
	SG016_MINREI_BD = 1370,
	SG033_MINTSUMA_BD = 1371,
	SG015_KOMUSO_BD = 1372,
	SG032_SHINKAN1_BD = 1373,
	SG034_SHINKAN2_BD = 1374,
	SG035_SHINKAN3_BD = 1375,
	SG036_SHINKAN4_BD = 1376,
	SG037_TOUSHU_BD = 1377,
	SG038_NAWAMIKO_BD = 1378,
	SG046_SYOUKI1_BD = 1379,
	SG039_MAGAONLY_BD = 1380,
	SG013_TENAGA_BD = 1381,
	SG020_SAKASA_BD = 1382,
	SG014_KAMIONNA_BD = 1383,
	SG021_KUBI_BD = 1384,
	SG019_BOUREI_BD = 1385,
	SG028_KOTOKO_BD = 1386,
	SG025_RTE_BD = 1387,
	SG031_HAIREI_BD = 1388,
	SG027_KONNA_BD = 1389,
	SE000_EVENT0_BD = 1390,
	SE000_GASAGOSO00_BD = 1391,
	SE001_GASAGOSO01_BD = 1392,
	SE002_HASHIRI_BD = 1393,
	SE003_KANE_BD = 1394,
	SE004_KOTOEND_BD = 1395,
	SE005_TOKEI_BD = 1396,
	SE006_TOKEIKANE_BD = 1397,
	SE007_YUKATATAKU_BD = 1398,
	SE000_BD = 1399,
	SE001_BD = 1400,
	SE002_BD = 1401,
	SE003_BD = 1402,
	SE005_BD = 1403,
	SE006_BD = 1404,
	SE007_BD = 1405,
	SE008_BD = 1406,
	SE009_BD = 1407,
	SE010_BD = 1408,
	SE011_BD = 1409,
	SE012_BD = 1410,
	SE014_BD = 1411,
	SE015_BD = 1412,
	SE016_BD = 1413,
	SE017_BD = 1414,
	SE018_BD = 1415,
	SE022_BD = 1416,
	SE023_BD = 1417,
	SE024_BD = 1418,
	SE025_BD = 1419,
	SE026_BD = 1420,
	SE027_BD = 1421,
	SE035_BD = 1422,
	SE038_BD = 1423,
	SR000_RARE0_BD = 1424,
	SJ000_JIDOU0_BD = 1425,
	SJ001_HENBYOU_BD = 1426,
	SJ004_HENDOOR_BD = 1427,
	SJ009_JOMIRROR_BD = 1428,
	SJ010_TSUMAKUBI_BD = 1429,
	SJ000_102_BD = 1430,
	SJ001_104_BD = 1431,
	SJ002_106_BD = 1432,
	SJ003_107_BD = 1433,
	SJ004_109_BD = 1434,
	SJ005_110_BD = 1435,
	SJ006_111_BD = 1436,
	SJ007_111_BD = 1437,
	SJ008_114_BD = 1438,
	SJ009_KIRIE_BD = 1439,
	SJ010_KOKIRIE_BD = 1440,
	SJ011_115_BD = 1441,
	SJ012_116_BD = 1442,
	SJ013_117_BD = 1443,
	SAF000_DOMA_BD = 1444,
	SAF001_GISHIKI_BD = 1445,
	SAF002_HASHIGO_BD = 1446,
	SAF003_ISHIDAN_BD = 1447,
	SAF004_ISHIDATAMI_BD = 1448,
	SAF005_ITA_K2_BD = 1449,
	SAF006_ITADAN_BD = 1450,
	SAF007_ITAHASHI_BD = 1451,
	SAF008_ITANOMA1_BD = 1452,
	SAF009_TANSUDAN_BD = 1453,
	SAF010_KAMOI_BD = 1454,
	SAF011_KISHIMI_BD = 1455,
	SAF012_KUSA_BD = 1456,
	SAF013_KUSA20_BD = 1457,
	SAF014_MIZU_BD = 1458,
	SAF015_NAWA_BD = 1459,
	SAF016_OCHIBA_BD = 1460,
	SAF017_TATAMI_BD = 1461,
	SAF018_TENHARI_BD = 1462,
	SAF019_TUKIMI_BD = 1463,
	SAF020_DOJARI_BD = 1464,
	SAF021_DOKATA_BD = 1465,
	SAF022_DOTAKE_BD = 1466,
	SAF023_DOYAWA_BD = 1467,
	SAF024_CHU2KAI_BD = 1468,
	SAF025_WATASHI_BD = 1469,
	SAF026_YANEURA1_BD = 1470,
	SAF027_YANEURA2_BD = 1471,
	SAD000_FUSUMA_BD = 1472,
	SAD001_ISHI_BD = 1473,
	SAD002_KAITEN_BD = 1474,
	SAD003_KIDO_BD = 1475,
	SAD004_KUGURI_BD = 1476,
	SAD005_RYOUTE_BD = 1477,
	SAD006_TYUU_BD = 1478,
	SS000_BUTUWIND_BD = 1479,
	SS001_HISO_BD = 1480,
	SS002_IDOWIND_BD = 1481,
	SS003_KIMONO00_BD = 1482,
	SS004_KIMONO01_BD = 1483,
	SS005_MIZUBE_BD = 1484,
	SS006_MUSHI_BD = 1485,
	SS007_NAWA00_BD = 1486,
	SS008_NAWA01_BD = 1487,
	SS009_RAIMEI00_BD = 1488,
	SS010_RAIMEI01_BD = 1489,
	SS011_SORAUNARI_BD = 1490,
	SS012_SUISYA_BD = 1491,
	SS013_SUITEKI_BD = 1492,
	SS014_SUKIMAWIND_BD = 1493,
	SS000_BD = 1494,
	SS002_BD = 1495,
	SS003_BD = 1496,
	SS004_BD = 1497,
	SS007_BD = 1498,
	SS009_BD = 1499,
	SS010_BD = 1500,
	SS011_BD = 1501,
	SS012_BD = 1502,
	SS014_BD = 1503,
	SS015_BD = 1504,
	SS016_BD = 1505,
	SS020_BD = 1506,
	SS021_BD = 1507,
	SS022_BD = 1508,
	SS028_BD = 1509,
	SS029_BD = 1510,
	SS030_BD = 1511,
	SS041_BD = 1512,
	ST000_ZOU_OKU_BD = 1513,
	ST001_MEN_KAKE_BD = 1514,
	ST002_KAMON_HAME_BD = 1515,
	ST003_DBIG_AKANAI_BD = 1516,
	ST004_DMDL_AKANAI_BD = 1517,
	ST005_FUSUMA_AKANAI_BD = 1518,
	ST006_DMDL_KAGI_BD = 1519,
	ST007_DSML_KAGI_BD = 1520,
	ST008_KAGAMI_BD = 1521,
	ST009_KAMON_HAME_BD = 1522,
	ST010_KAMON_HIRAKI_BD = 1523,
	ST011_NAWA_KAKE_BD = 1524,
	ST012_OFUDA_BD = 1525,
	ST013_KAGAMI_ISHI_BD = 1526,
	ST014_NINGYOU_BD = 1527,
	AO000_TITLE_STR = 1528,
	AO001_STAFF_STR = 1529,
	AO002_SHOU_TITLE_STR = 1530,
	AO003_GAMEOVER_STR = 1531,
	AB000_STR = 1532,
	AB001_STR = 1533,
	AB002_STR = 1534,
	AB003_STR = 1535,
	AB004_STR = 1536,
	AB005_STR = 1537,
	AB010_STR = 1538,
	AB012_STR = 1539,
	AB013_STR = 1540,
	AB014_STR = 1541,
	AB015_STR = 1542,
	AB016_STR = 1543,
	AB018_STR = 1544,
	AB019_STR = 1545,
	AB026_STR = 1546,
	AB027_STR = 1547,
	AB028_STR = 1548,
	AB029_STR = 1549,
	AB030_STR = 1550,
	AE000_TAPE_STR = 1551,
	AE001_USIRO_STR = 1552,
	AE002_KOTO_STR = 1553,
	AE003_CHIKUONKI_STR = 1554,
	AE004_AYASHII_STR = 1555,
	AK000_IKESU_STR = 1556,
	AK001_KAZE_STR = 1557,
	AK002_NAKANIWA_STR = 1558,
	AK003_NAKASU_STR = 1559,
	AK004_SANDOU_STR = 1560,
	AK005_URANIWA_STR = 1561,
	AK006_AME_STR = 1562,
	AK007_KAMINARIFAR_STR = 1563,
	AY010_HENREI_STR = 1564,
	AY011_JYOREI_STR = 1565,
	AY012_SAKKAREI_STR = 1566,
	AY013_TENAGA_STR = 1567,
	AY014_KAMIONNA_STR = 1568,
	AY015_KOMUSO_STR = 1569,
	AY016_MINREI_STR = 1570,
	AY018_MAYOIGO1_STR = 1571,
	AY019_BOUREI_STR = 1572,
	AY020_SAKASA_STR = 1573,
	AY021_KUBI_STR = 1574,
	AY022_MAYOIGO2_STR = 1575,
	AY023_MAYOIGO3_STR = 1576,
	AY024_MEKAKUSHI_STR = 1577,
	AY025_RTE_STR = 1578,
	AY027_KONNA_STR = 1579,
	AY028_KOTOKO_STR = 1580,
	AY031_HAIREI_STR = 1581,
	AY032_SHINKAN1_STR = 1582,
	AY033_MINTSUMA_STR = 1583,
	AY037_TOUSHU_STR = 1584,
	AY038_NAWAMIKO_STR = 1585,
	AY039_MAGAONLY_STR = 1586,
	AY046_SYOUKI1_STR = 1587,
	AY_KIRIE_STR = 1588,
	AD010_HENREI_STR = 1589,
	AD011_JYOREI_STR = 1590,
	AD012_SAKKAREI00_STR = 1591,
	AD012_SAKKAREI01_STR = 1592,
	AD016_MINREI_STR = 1593,
	AD018_MAYOIGO1_STR = 1594,
	AD022_MAYOIGO2_STR = 1595,
	AD023_MAYOIGO3_STR = 1596,
	AD024_MEKAKUSHI_STR = 1597,
	AD032_SHINKAN1_STR = 1598,
	AD033_MINTSUMA_STR = 1599,
	AD034_SHINKAN2_STR = 1600,
	AD035_SHINKAN3_STR = 1601,
	AD036_SHINKAN4_STR = 1602,
	AD037_TOUSHU00_STR = 1603,
	AD037_TOUSHU01_STR = 1604,
	AVMC000_KIRIE0_STR = 1605,
	AVMC001_KIRIE1_STR = 1606,
	AVMC002_KIRIE2_STR = 1607,
	AVMC003_MAHUYU0_STR = 1608,
	AVMC004_MAHUYU1_STR = 1609,
	AVMC005_MAHUYU2_STR = 1610,
	AVMC006_MIKU0_STR = 1611,
	AVMC007_MIKU1_STR = 1612,
	AVMC008_MIKU2_STR = 1613,
	AVMC009_MAFUYU3_STR = 1614,
	AVMC010_MAFUYU4_STR = 1615,
	AVMC011_MAFUYU5_STR = 1616,
	AVMC012_MAFUYU6_STR = 1617,
	AVMC020_KOROSHITA_STR = 1618,
	AVMC021_DOKONIIKUNO_STR = 1619,
	AVMC022_SAMUI_STR = 1620,
	AVMC023_MITAWAYO_STR = 1621,
	AVMC024_KAESHITE_STR = 1622,
	AVMC025_KOKONIITE_STR = 1623,
	AVMC026_NE_STR = 1624,
	AVMC027_DOUSHITE_STR = 1625,
	AVMC028_NAWAGA_STR = 1626,
	AVMC029_SUSURI1_STR = 1627,
	AVMC030_SUSURI2_STR = 1628,
	AVMC031_SUSURI3_STR = 1629,
	AVMC032_SUSURI4_STR = 1630,
	AVT000_OGATA0_STR = 1631,
	AVT001_OGATA1_STR = 1632,
	AVT002_HIRASAKA0_STR = 1633,
	AVT003_HIRASAKA1_STR = 1634,
	AVT004_HIRASAKA2_STR = 1635,
	AVT005_HIRASAKA3_STR = 1636,
	AVT006_TAKAMINE0_STR = 1637,
	AVT007_TAKAMINE1_STR = 1638,
	AVP000_STR = 1639,
	AVP001_STR = 1640,
	AVP002_STR = 1641,
	AVP003_STR = 1642,
	AVJS000_SAKKA00_STR = 1643,
	AVJS001_SAKKA01_STR = 1644,
	AVJS002_SAKKA02_STR = 1645,
	AVJS003_SAKKA03_STR = 1646,
	AVJS004_SAKKA04_STR = 1647,
	AVJS005_SAKKA05_STR = 1648,
	AVJS006_SAKKA06_STR = 1649,
	AVJS007_SAKKA07_STR = 1650,
	AVJS008_JOSYU00_STR = 1651,
	AVJS009_JOSYU01_STR = 1652,
	AVJS010_JOSYU02_STR = 1653,
	AVJS011_JOSYU03_STR = 1654,
	AVJS012_JOSYU04_STR = 1655,
	AVJS013_JOSYU05_STR = 1656,
	AVJS014_JOSYU06_STR = 1657,
	AVJS015_JOSYU07_STR = 1658,
	AVJS016_JOSYU08_STR = 1659,
	AVJS017_JOSYU09_STR = 1660,
	AVJS018_HEN00_STR = 1661,
	AVJS019_HEN01_STR = 1662,
	AVJS020_HEN02_STR = 1663,
	AVJS021_HEN03_STR = 1664,
	AVJS022_HEN04_STR = 1665,
	AVJS023_HEN05_STR = 1666,
	AVJS024_HEN06_STR = 1667,
	AVJS025_MINZOKU00_STR = 1668,
	AVJS026_MINZOKU01_STR = 1669,
	AVJS027_MINZOKU02_STR = 1670,
	AVJS028_MINZOKU03_STR = 1671,
	AVJS029_MINZOKU04_STR = 1672,
	AVJS030_MINZOKU05_STR = 1673,
	AVJS031_MINZOKU06_STR = 1674,
	AVJS032_MINZOKU07_STR = 1675,
	AVJS033_MINZOKU08_STR = 1676,
	AVJS034_MINZOKU09_STR = 1677,
	AVJS035_MINZOKU10_STR = 1678,
	AVJS036_MINZOKU11_STR = 1679,
	AVJS037_MAYOIGO00_STR = 1680,
	AVJS038_MAYOIGO01_STR = 1681,
	AVJS039_MAYOIGO02_STR = 1682,
	AVJS040_MAYOIGO03_STR = 1683,
	AVJS041_MAYOIGO04_STR = 1684,
	AVJS042_MAYOIGO05_STR = 1685,
	AVJS043_MAYOIGO10_STR = 1686,
	AVJS044_MAYOIGO11_STR = 1687,
	AVJS045_MAYOIGO12_STR = 1688,
	AVJS046_MAYOIGO13_STR = 1689,
	AVJS047_MAYOIGO14_STR = 1690,
	AVJS048_MAYOIGO15_STR = 1691,
	AVJS049_MAYOIGO16_STR = 1692,
	AVJS050_MAYOIGO20_STR = 1693,
	AVJS051_MAYOIGO21_STR = 1694,
	AVJS052_MAYOIGO22_STR = 1695,
	AVJS053_HAHA00_STR = 1696,
	AVJS054_HAHA01_STR = 1697,
	AVJS055_HAHA02_STR = 1698,
	AVJS056_HAHA03_STR = 1699,
	AVJS057_HAHA04_STR = 1700,
	AVJS058_HAHA05_STR = 1701,
	AVJS059_HAHA06_STR = 1702,
	AVJS060_KOKIRIE00_STR = 1703,
	AVJS061_KOKIRIE01_STR = 1704,
	AVJS062_KOKIRIE02_STR = 1705,
	AVJS063_KOKIRIE03_STR = 1706,
	AVJS064_KOKIRIE04_STR = 1707,
	AVJS065_KOKIRIE05_STR = 1708,
	AVJS066_KOKIRIE06_STR = 1709,
	AVJS067_KOKIRIE07_STR = 1710,
	AVJS068_KOKIRIE08_STR = 1711,
	AVJS069_KOKIRIE09_STR = 1712,
	AVJS070_SHINKAN00_STR = 1713,
	AVJS071_SHINKAN01_STR = 1714,
	AVJS072_SHINKAN02_STR = 1715,
	AVJS073_SHINKAN03_STR = 1716,
	AVJS074_SHINKAN04_STR = 1717,
	AVJW000_SAKKA00_STR = 1718,
	AVJW001_SAKKA01_STR = 1719,
	AVJW002_SAKKA02_STR = 1720,
	AVJW003_SAKKA03_STR = 1721,
	AVJW004_SAKKA04_STR = 1722,
	AVJW005_SAKKA05_STR = 1723,
	AVJW006_SAKKA06_STR = 1724,
	AVJW007_SAKKA07_STR = 1725,
	AVJW008_JOSYU00_STR = 1726,
	AVJW009_JOSYU01_STR = 1727,
	AVJW010_JOSYU02_STR = 1728,
	AVJW011_JOSYU03_STR = 1729,
	AVJW012_JOSYU04_STR = 1730,
	AVJW013_JOSYU05_STR = 1731,
	AVJW014_JOSYU06_STR = 1732,
	AVJW015_JOSYU07_STR = 1733,
	AVJW016_JOSYU08_STR = 1734,
	AVJW017_JOSYU09_STR = 1735,
	AVJW018_SHINKAN00_STR = 1736,
	AVJW019_SHINKAN01_STR = 1737,
	AVJW020_SHINKAN02_STR = 1738,
	AVJW021_SHINKAN03_STR = 1739,
	AVJW022_SHINKAN04_STR = 1740,
	AVJW023_HEN00_STR = 1741,
	AVJW024_HEN01_STR = 1742,
	AVJW025_HEN02_STR = 1743,
	AVJW026_HEN03_STR = 1744,
	AVJW027_HEN04_STR = 1745,
	AVJW028_HEN05_STR = 1746,
	AVJW029_HEN06_STR = 1747,
	AVJW030_MINZOKU00_STR = 1748,
	AVJW031_MINZOKU01_STR = 1749,
	AVJW032_MINZOKU02_STR = 1750,
	AVJW033_MINZOKU03_STR = 1751,
	AVJW034_MINZOKU04_STR = 1752,
	AVJW035_MINZOKU05_STR = 1753,
	AVJW036_MINZOKU06_STR = 1754,
	AVJW037_MINZOKU07_STR = 1755,
	AVJW038_MINZOKU08_STR = 1756,
	AVJW039_MINZOKU09_STR = 1757,
	AVJW040_MINZOKU10_STR = 1758,
	AVJW041_MINZOKU11_STR = 1759,
	AVJW042_HAHA00_STR = 1760,
	AVJW043_HAHA01_STR = 1761,
	AVJW044_HAHA02_STR = 1762,
	AVJW045_HAHA03_STR = 1763,
	AVJW046_HAHA04_STR = 1764,
	AVJW047_HAHA05_STR = 1765,
	AVJW048_HAHA06_STR = 1766,
	AVJW049_MAYOIGO00_STR = 1767,
	AVJW050_MAYOIGO01_STR = 1768,
	AVJW051_MAYOIGO02_STR = 1769,
	AVJW052_MAYOIGO03_STR = 1770,
	AVJW053_MAYOIGO04_STR = 1771,
	AVJW054_MAYOIGO05_STR = 1772,
	AVJW055_MAYOIGO10_STR = 1773,
	AVJW056_MAYOIGO11_STR = 1774,
	AVJW057_MAYOIGO12_STR = 1775,
	AVJW058_MAYOIGO13_STR = 1776,
	AVJW059_MAYOIGO14_STR = 1777,
	AVJW060_MAYOIGO15_STR = 1778,
	AVJW061_MAYOIGO16_STR = 1779,
	AVJW062_MAYOIGO20_STR = 1780,
	AVJW063_MAYOIGO21_STR = 1781,
	AVJW064_MAYOIGO22_STR = 1782,
	AVJW065_KOKIRIE00_STR = 1783,
	AVJW066_KOKIRIE01_STR = 1784,
	AVJW067_KOKIRIE02_STR = 1785,
	AVJW068_KOKIRIE03_STR = 1786,
	AVJW069_KOKIRIE04_STR = 1787,
	AVJW070_KOKIRIE05_STR = 1788,
	AVJW071_KOKIRIE06_STR = 1789,
	AVJW072_KOKIRIE07_STR = 1790,
	AVJW073_KOKIRIE08_STR = 1791,
	AVJW074_KOKIRIE09_STR = 1792,
	AM000_MAGA_STR = 1793,
	AM001_MAGAIN_STR = 1794,
	SCENE0010_STR = 1795,
	SCENE0020_STR = 1796,
	SCENE0022_STR = 1797,
	SCENE0030_STR = 1798,
	SCENE0031_STR = 1799,
	SCENE1000_STR = 1800,
	SCENE1010_STR = 1801,
	SCENE1030_STR = 1802,
	SCENE1031_STR = 1803,
	SCENE1034_STR = 1804,
	SCENE1070_STR = 1805,
	SCENE1080_STR = 1806,
	SCENE1090_STR = 1807,
	SCENE1100_STR = 1808,
	SCENE1101_STR = 1809,
	SCENE1102_STR = 1810,
	SCENE1120_STR = 1811,
	SCENE1150_STR = 1812,
	SCENE1160_STR = 1813,
	SCENE1170_STR = 1814,
	SCENE1180_STR = 1815,
	SCENE1220_STR = 1816,
	SCENE1230_STR = 1817,
	SCENE1240_STR = 1818,
	SCENE1250_STR = 1819,
	SCENE1260_STR = 1820,
	SCENE1280_STR = 1821,
	SCENE1300_STR = 1822,
	SCENE1301_STR = 1823,
	SCENE1320_STR = 1824,
	SCENE1330_STR = 1825,
	SCENE1331_STR = 1826,
	SCENE1332_STR = 1827,
	SCENE1340_STR = 1828,
	SCENE1410_STR = 1829,
	SCENE2010_STR = 1830,
	SCENE2013_STR = 1831,
	SCENE2020_STR = 1832,
	SCENE2030_STR = 1833,
	SCENE2040_STR = 1834,
	SCENE2050_STR = 1835,
	SCENE2060_STR = 1836,
	SCENE2061_STR = 1837,
	SCENE2062_STR = 1838,
	SCENE2070_STR = 1839,
	SCENE2071_STR = 1840,
	SCENE2072_STR = 1841,
	SCENE2090_STR = 1842,
	SCENE2091_STR = 1843,
	SCENE2092_STR = 1844,
	SCENE2100_STR = 1845,
	SCENE2110_STR = 1846,
	SCENE2130_STR = 1847,
	SCENE2131_STR = 1848,
	SCENE2132_STR = 1849,
	SCENE2140_STR = 1850,
	SCENE2141_STR = 1851,
	SCENE2142_STR = 1852,
	SCENE2143_STR = 1853,
	SCENE2150_STR = 1854,
	SCENE2160_STR = 1855,
	SCENE2170_STR = 1856,
	SCENE2171_STR = 1857,
	SCENE3010_STR = 1858,
	SCENE3020_STR = 1859,
	SCENE3030_STR = 1860,
	SCENE3040_STR = 1861,
	SCENE3050_STR = 1862,
	SCENE3060_STR = 1863,
	SCENE3070_STR = 1864,
	SCENE3080_STR = 1865,
	SCENE3081_STR = 1866,
	SCENE3090_STR = 1867,
	SCENE3100_STR = 1868,
	SCENE3110_STR = 1869,
	SCENE4010_STR = 1870,
	SCENE4011_STR = 1871,
	SCENE4020_STR = 1872,
	SCENE4030_STR = 1873,
	SCENE4031_STR = 1874,
	SCENE4040_STR = 1875,
	SCENE4041_STR = 1876,
	SCENE4042_STR = 1877,
	SCENE4050_STR = 1878,
	SCENE4060_STR = 1879,
	SCENE4070_STR = 1880,
	SCENE4080_STR = 1881,
	SCENE4090_STR = 1882,
	SCENE4100_STR = 1883,
	SCENE4110_STR = 1884,
	SCENE4120_STR = 1885,
	SCENE5010_STR = 1886,
	SCENE5020_STR = 1887,
	SCENE4900_STR = 1888,
	SCENE4901_STR = 1889,
	SCENE9000_STR = 1890,
	SCENE9001_STR = 1891,
	SCENE1010_OLD_STR = 1892,
	SCENE1031_OLD_STR = 1893,
	SCENE1301_OLD_STR = 1894,
	SCENE1332_OLD_STR = 1895,
	RSHADE_SGD = 1896
};

enum {
	ANALOGRx = 0,
	ANALOGRy = 1,
	ANALOGLx = 2,
	ANALOGLy = 3
};

enum {
	PUSHLright = 0,
	PUSHLleft = 1,
	PUSHLup = 2,
	PUSHLdown = 3,
	PUSHRup = 4,
	PUSHRright = 5,
	PUSHRdown = 6,
	PUSHRleft = 7,
	PUSHL1 = 8,
	PUSHR1 = 9,
	PUSHL2 = 10,
	PUSHR2 = 11
};

enum {
	SE_ADDRNO_STATIC = 0,
	SE_ADDRNO_BTLHIT = 1,
	SE_ADDRNO_VOICE = 2,
	SE_ADDRNO_DOOR0 = 3,
	SE_ADDRNO_DOOR1 = 4,
	SE_ADDRNO_DOOR2 = 5,
	SE_ADDRNO_FOOT0 = 6,
	SE_ADDRNO_FOOT1 = 7,
	SE_ADDRNO_FOOT2 = 8,
	SE_ADDRNO_FOOT3 = 9,
	SE_ADDRNO_FOOT4 = 10,
	SE_ADDRNO_FOOT5 = 11,
	SE_ADDRNO_FOOT6 = 12,
	SE_ADDRNO_FOOT7 = 13,
	SE_ADDRNO_SRUND0 = 14,
	SE_ADDRNO_SRUND1 = 15,
	SE_ADDRNO_GHOST0 = 16,
	SE_ADDRNO_GHOST1 = 17,
	SE_ADDRNO_GHOST2 = 18,
	SE_ADDRNO_EVENT0 = 19,
	SE_ADDRNO_EVENT1 = 20,
	SE_ADDRNO_WIDE = 21,
	SE_ADDRNO_JIDOU0 = 22,
	SE_ADDRNO_JIDOU1 = 23,
	SE_ADDRNO_JIDOU2 = 24,
	SE_ADDRNO_JIDOU3 = 25,
	SE_ADDRNO_SB0 = 26,
	SE_ADDRNO_ADPCM0 = 27,
	SE_ADDRNO_SB1 = 28,
	SE_ADDRNO_ADPCM1 = 29,
	SE_CSR0 = 0,
	SE_CLIC = 1,
	SE_CLIC_NO = 2,
	SE_CANCEL = 3,
	SE_CSR1 = 4,
	SE_SEALING = 5,
	SE_USEITEM = 6,
	SE_SOUL_APR = 7,
	SE_SOUL_LOOP = 8,
	SE_CAMSUB_00 = 9,
	SE_CAMSUB_01 = 12,
	SE_CAMSUB_02 = 13,
	SE_CAMSUB_03 = 24,
	SE_COME_OUT = 10,
	SE_GETITEM = 11,
	SE_STAMINA_UP = 14,
	SE_TERROR = 15,
	SE_PHOTO = 16,
	SE_DRAIN = 17,
	SE_CHARGE = 18,
	SE_FLASH_CHARGE = 255,
	SE_PUNT = 19,
	SE_SHUTTER = 20,
	SE_SPOUT_LOW = 21,
	SE_SPOUT_MDL = 22,
	SE_SPOUT_HI = 23,
	SE_RARE0 = 27,
	SE_RARE1 = 28,
	SE_ENE_PURIFY = 29,
	SE_ENE0_GRASP = 30,
	SE_ENE0_WARP = 31,
	SE_ENE0_HIT = 32,
	SE_TOUSHU_KIRI = 32,
	SE_TOUSHU_KAZEKIRI = 31,
	SE_PLYR_DMG0 = 33,
	SE_PLYR_DMG1 = 34,
	SE_PLYR_DMG2 = 35,
	SE_PLYR_DEADLY = 36,
	SE_PLYR_DEADLY2 = 255,
	SE_PUZZLE0 = 33,
	SE_PUZZLE1 = 34,
	SE_PUZZLE2 = 35,
	SE_PUZZLE3 = 36,
	SE_PUZZLE4 = 37,
	SE_MN0 = 33,
	SE_MN1 = 34,
	SE_MN2 = 35,
	SE_MN3 = 36,
	SE_MN4 = 37,
	SE_DOOR_OPN_00 = 38,
	SE_DOOR_CLS_00 = 39,
	SE_DOOR_OPN_01 = 40,
	SE_DOOR_CLS_01 = 41,
	SE_DOOR_OPN_02 = 42,
	SE_DOOR_CLS_02 = 43,
	SE_FOOT0 = 44,
	SE_FOOT1 = 45,
	SE_FOOT2 = 46,
	SE_FOOT3 = 47,
	SE_FOOT4 = 48,
	SE_FOOT5 = 49,
	SE_FOOT6 = 50,
	SE_FOOT7 = 51,
	SE_SURROUND0 = 52,
	SE_SURROUND1 = 53,
	SE_ENE0_OMEN = 54,
	SE_ENE0_APPROACH = 55,
	SE_ENE0_FLINCH_LOW = 56,
	SE_ENE0_FLINCH_MDL = 57,
	SE_ENE0_FLINCH_HI = 58,
	SE_ENE0_ATACK = 59,
	SE_ENE0_DEATH = 60,
	SE_ENE0_SPE0 = 61,
	SE_ENE0_SPE1 = 62,
	SE_ENE0_SPE2 = 63,
	SE_ENE0_SPE3 = 64,
	SE_ENE1_OMEN = 65,
	SE_ENE1_APPROACH = 66,
	SE_ENE1_FLINCH_LOW = 67,
	SE_ENE1_FLINCH_MDL = 68,
	SE_ENE1_FLINCH_HI = 69,
	SE_ENE1_ATACK = 70,
	SE_ENE1_DEATH = 71,
	SE_ENE1_SPE0 = 72,
	SE_ENE1_SPE1 = 73,
	SE_ENE1_SPE2 = 74,
	SE_ENE1_SPE3 = 75,
	SE_ENE2_OMEN = 76,
	SE_ENE2_APPROACH = 77,
	SE_ENE2_FLINCH_LOW = 78,
	SE_ENE2_FLINCH_MDL = 79,
	SE_ENE2_FLINCH_HI = 80,
	SE_ENE2_ATACK = 81,
	SE_ENE2_DEATH = 82,
	SE_ENE2_SPE0 = 83,
	SE_ENE2_SPE1 = 84,
	SE_ENE2_SPE2 = 85,
	SE_ENE2_SPE3 = 86,
	SE_EVENT_00 = 87,
	SE_EVENT_01 = 88,
	SE_EVENT_02 = 89,
	SE_EVENT_10 = 90,
	SE_EVENT_11 = 91,
	SE_EVENT_12 = 92,
	SE_HANYOU = 93,
	SE_ENE_JIDOU0 = 94,
	SE_ENE_JIDOU1 = 95,
	SE_ENE_JIDOU2 = 96,
	SE_ENE_JIDOU3 = 97,
	SE_NO = 255,
	SE_TMP_KOTO0 = 81,
	SE_TMP_KOTO1 = 82,
	SE_TMP_JREI001 = 255,
	SE_TMP_JREI104 = 255,
	SE_TMP_JREI109 = 255,
	SE_TMP_JREI110 = 255,
	SE_ENE0_FLINCH = 51,
	SE_DOOR_SP_OPN = 31,
	SE_DOOR_SP_CLS = 32,
	SE_DOOR_LG_LCK = 33,
	SE_UNLOCK_MD = 36,
	SE_DOOR_LG_OPN = 26,
	SE_DOOR_LG_CLS = 27,
	SE_DOOR_MD_OPN = 28,
	SE_DOOR_MD_CLS = 29,
	SE_FUSUMA_OPN = 30
};

enum IOP_STEREO_SET {
	IS_STEREO = 0,
	IS_MONAURAL = 1
};

enum IOP_COMMAND_ID {
	IC_COM_NOTHING = 0,
	IC_SE_INIT = 1,
	IC_SE_PLAY = 2,
	IC_SE_POS = 3,
	IC_SE_STOP = 4,
	IC_SE_VOL = 5,
	IC_SE_EVOL = 6,
	IC_SE_PITCH = 7,
	IC_SE_ALLSTOP = 8,
	IC_SE_MVOL = 9,
	IC_SE_STE_MONO = 10,
	IC_SE_QUIT = 11,
	IC_CDVD_INIT = 12,
	IC_CDVD_LOAD = 13,
	IC_CDVD_LOAD_SECT = 14,
	IC_CDVD_SEEK = 15,
	IC_CDVD_SE_TRANS = 16,
	IC_CDVD_SE_TRANS_RESET = 17,
	IC_CDVD_BREAK = 18,
	IC_BGM_INIT = 19,
	IC_BGM_PLAY = 20,
	IC_BGM_STOP = 21,
	IC_BGM_PAUSE = 22,
	IC_BGM_RESTART = 23,
	IC_BGM_VOL = 24,
	IC_BGM_QUIT = 25,
	IC_ADPCM_INIT = 26,
	IC_ADPCM_PLAY = 27,
	IC_ADPCM_PRELOAD = 28,
	IC_ADPCM_LOADEND_PLAY = 29,
	IC_ADPCM_STOP = 30,
	IC_ADPCM_PAUSE = 31,
	IC_ADPCM_RESTART = 32,
	IC_ADPCM_FADE_VOL = 33,
	IC_ADPCM_POS = 34,
	IC_ADPCM_MVOL = 35,
	IC_ADPCM_SET_SPU2IRQ = 36,
	IC_ADPCM_QUIT = 37
};

enum IOP_CMD_MODE {
	ICM_INIT = 0,
	ICM_REQ = 1,
	ICM_GET_STAT_ONLY = 2
};

enum TRANS_MEM_TYPE {
	TRANS_MEM_EE = 0,
	TRANS_MEM_IOP = 1,
	TRANS_MEM_SPU = 2,
	TRANS_PCM = 3,
	TRANS_MEM_NUM = 4
};

typedef struct { // 0x8
	/* 0x0 */ int file_no;
	/* 0x4 */ u_char stat;
	/* 0x5 */ u_char renew;
} CDVD_LOAD_STAT;

enum CDVD_LOAD_STATUS {
	CDVD_LS_FINISHED = 0,
	CDVD_LS_WAIT = 1,
	CDVD_LS_TRANS = 2,
	CDVD_LS_TRANS_END = 3,
	CDVD_LS_LOADING = 4
};

enum CDVD_SE_TRANS_STATUS {
	CDVD_SE_NOCMD = 0,
	CDVD_SE_WAIT = 1,
	CDVD_SE_FINISHED = 2
};

typedef struct { // 0x10c
	/* 0x000 */ CDVD_LOAD_STAT fstat[32];
	/* 0x100 */ int stat;
	/* 0x104 */ u_int ld_addr;
	/* 0x108 */ int se_trans;
} CDVD_RET_STAT;

typedef struct { // 0x4
	/* 0x0 */ int status;
} SE_VSTAT;

typedef struct { // 0x8
	/* 0x0 */ int thread_id;
	/* 0x4 */ int stat;
} BGM_STAT;

typedef struct { // 0x8
	/* 0x0 */ short int status;
	/* 0x2 */ short int tune_no;
	/* 0x4 */ int count;
} ADPCM_STAT;

enum ADPCM_PLAY_STAT {
	ADPCM_STAT_NOPLAY = 0,
	ADPCM_STAT_FULL_STOP = 1,
	ADPCM_STAT_LOOPEND_STOP = 2,
	ADPCM_STAT_PRELOAD = 3,
	ADPCM_STAT_PRELOAD_TRANS = 4,
	ADPCM_STAT_PRELOAD_END = 5,
	ADPCM_STAT_PLAY = 6,
	ADPCM_STAT_LTRANS = 7,
	ADPCM_STAT_RTRANS = 8,
	ADPCM_STAT_PAUSE = 9,
	ADPCM_STAT_ERROR = -1
};

typedef struct { // 0x180
	/* 0x000 */ SE_VSTAT sev_stat[24];
	/* 0x060 */ BGM_STAT bgm;
	/* 0x068 */ CDVD_RET_STAT cdvd;
	/* 0x174 */ ADPCM_STAT adpcm;
	/* 0x17c */ int dummy[1];
} IOP_STAT;

typedef struct { // 0x20
	/* 0x00 */ int cmd_no;
	/* 0x04 */ int data1;
	/* 0x08 */ int data2;
	/* 0x0c */ int data3;
	/* 0x10 */ int data4;
	/* 0x14 */ int data5;
	/* 0x18 */ int data6;
	/* 0x1c */ int data7;
} IOP_COMMAND;

typedef struct { // 0x414
	/* 0x000 */ int get_cmd[256];
	/* 0x400 */ int cmd_num;
	/* 0x404 */ int timer_id;
	/* 0x408 */ int thread_id;
	/* 0x40c */ int adpcm_thid;
	/* 0x410 */ unsigned int count;
} IOP_SYS_CTRL;

typedef struct { // 0x4
	/* 0x0 */ u_short vol;
	/* 0x2 */ u_char mono;
} IOP_MASTER_VOL;

typedef struct { // 0x10
	/* 0x0 */ unsigned int adrs;
	/* 0x4 */ short unsigned int attribute;
	/* 0x6 */ short unsigned int pitch;
	/* 0x8 */ short unsigned int adsr1;
	/* 0xa */ short unsigned int adsr2;
	/* 0xc */ char efct;
	/* 0xd */ char vol;
	/* 0xe */ char pan;
} SE_PARAM;

typedef struct { // 0x20
	/* 0x00 */ SE_PARAM *param;
	/* 0x04 */ unsigned int attribute;
	/* 0x08 */ short int v_no;
	/* 0x0a */ short int prm_no;
	/* 0x0c */ short unsigned int pitch;
	/* 0x0e */ short unsigned int vol_l;
	/* 0x10 */ short unsigned int vol_r;
	/* 0x12 */ short unsigned int adsr1;
	/* 0x14 */ short unsigned int adsr2;
	/* 0x16 */ short unsigned int tgt_vol_l;
	/* 0x18 */ short unsigned int tgt_vol_r;
	/* 0x1a */ char inc_vol_l;
	/* 0x1b */ char inc_vol_r;
	/* 0x1c */ unsigned char buf_no;
} SE_WRK_SET;

typedef struct { // 0x32
	/* 0x00 */ short int btlhit;
	/* 0x02 */ short int voice;
	/* 0x04 */ short int door[3];
	/* 0x0a */ short int foot[8];
	/* 0x1a */ short int srund[2];
	/* 0x1e */ short int ghost[3];
	/* 0x24 */ short int event[2];
	/* 0x28 */ short int wide;
	/* 0x2a */ short int jidou[4];
} SE_START_POINT;

enum SE_VOICE_STAT {
	VOICE_FREE = 0,
	VOICE_USE = 1,
	VOICE_LOOP = 2,
	VOICE_RESERVED = 3
};

typedef struct { // 0x2c
	/* 0x00 */ unsigned int fsize;
	/* 0x04 */ unsigned int asize;
	/* 0x08 */ unsigned int offset;
	/* 0x0c */ unsigned int pos;
	/* 0x10 */ int pcm_no;
	/* 0x14 */ int intr;
	/* 0x18 */ int file;
	/* 0x1c */ short int vol_reg;
	/* 0x20 */ char *buf;
	/* 0x24 */ unsigned char stat;
	/* 0x25 */ char pre_load;
	/* 0x26 */ char vol;
	/* 0x27 */ char dbufid;
	/* 0x28 */ char loop;
} IOP_PCM;

enum IOP_PCM_STAT {
	IPS_IDOL = 0,
	IPS_PRELOAD = 1,
	IPS_PRELOADED = 2,
	IPS_PLAY = 3,
	IPS_PAUSE = 4,
	IPS_LOAD = 5,
	IPS_STOP = 6
};

typedef struct { // 0xc
	/* 0x0 */ unsigned int size;
	/* 0x4 */ unsigned int vol;
	/* 0x8 */ unsigned int loop;
} BGM_DAT;

typedef struct { // 0x20
	/* 0x00 */ int req_type;
	/* 0x04 */ int file_no;
	/* 0x08 */ int start_sector;
	/* 0x0c */ int size_sector;
	/* 0x10 */ int size_byte;
	/* 0x14 */ u_int id;
	/* 0x18 */ u_int *taddr;
	/* 0x1c */ u_char se_buf_no;
	/* 0x1d */ u_char tmem;
} CDVD_REQ_BUF;

typedef struct { // 0x10
	/* 0x0 */ u_int *taddr;
	/* 0x4 */ int start;
	/* 0x8 */ int file_no;
	/* 0xc */ int size_now;
} CDVD_PCM;

typedef struct { // 0x18
	/* 0x00 */ u_int *taddr;
	/* 0x04 */ int start;
	/* 0x08 */ int file_no;
	/* 0x0c */ int size_now;
	/* 0x10 */ int read_now;
	/* 0x14 */ u_char req_type;
	/* 0x15 */ u_char call_play;
	/* 0x16 */ u_char endld_flg;
	/* 0x17 */ u_char now_load;
} CDVD_ADPCM;

typedef struct { // 0xc
	/* 0x0 */ int id;
	/* 0x4 */ int tid;
	/* 0x8 */ u_char ltrans;
	/* 0x9 */ u_char stat;
	/* 0xa */ u_char tmem;
} CDVD_TRANS_STAT;

typedef struct { // 0x94
	/* 0x00 */ sceCdRMode rmode;
	/* 0x04 */ sceCdlFILE cdlf;
	/* 0x28 */ CDVD_PCM pcm;
	/* 0x38 */ CDVD_ADPCM adpcm[2];
	/* 0x68 */ u_int ctime;
	/* 0x6c */ int stat;
	/* 0x70 */ int start;
	/* 0x74 */ int id;
	/* 0x78 */ int file_no;
	/* 0x7c */ int size;
	/* 0x80 */ int now_size;
	/* 0x84 */ int end_size;
	/* 0x88 */ u_char start_pos;
	/* 0x89 */ u_char req_pos;
	/* 0x8a */ u_char buf_use_num;
	/* 0x8b */ u_char now_lbuf;
	/* 0x8c */ u_char cmd_on;
	/* 0x8d */ u_char vtrans_flg;
	/* 0x8e */ u_char adpcm_req;
	/* 0x8f */ u_char pcm_req;
	/* 0x90 */ u_char pcm_pre;
	/* 0x91 */ u_char pcm_pre_end;
	/* 0x92 */ u_char error_cnt;
} CDVD_STAT;

enum CDVD_STATUS {
	CDVD_STAT_FREE = 0,
	CDVD_STAT_LOADING = 1,
	CDVD_STAT_STREAMING = 2,
	CDVD_STAT_TRANS_WAIT = 3,
	CDVD_STAT_SEEKING = 4
};

enum ADPCM_LOADREQ_TYPE {
	ADPCM_LDREQ_NO = 0,
	ADPCM_LDREQ_PRELOAD_ONLY = 1,
	ADPCM_LDREQ_STREAM = 2
};

enum {
	SENO_WIDE_TEKAGAMI = 0,
	SENO_WIDE_SINCHU = 1,
	SENO_WIDE_BUTSUZO = 2,
	SENO_WIDE_KAKEJIKU = 3,
	SENO_WIDE_KINKO = 4,
	SENO_WIDE_KAGOME = 5,
	SENO_WIDE_MEKAKUSHI = 6,
	SENO_WIDE_TOUSHU = 7,
	SENO_WIDE_SHIKINAWA = 8,
	SENO_WIDE_KANZASHI = 9,
	SENO_WIDE_DOORUNLOCK = 10,
	SENO_WIDE_DOORLOCK = 11,
	SENO_WIDE_FUSUMALOCK = 12,
	SENO_WIDE_HANUNLOCK = 10,
	SENO_WIDE_HANLOCKED = 11,
	SENO_SRUND_ROOM00 = 0,
	SENO_SRUND_ROOM02 = 1,
	SENO_SRUND_ROOM03 = 2,
	SENO_SRUND_ROOM04 = 3,
	SENO_SRUND_ROOM07 = 4,
	SENO_SRUND_ROOM09 = 5,
	SENO_SRUND_ROOM10 = 6,
	SENO_SRUND_ROOM11 = 7,
	SENO_SRUND_ROOM14 = 8,
	SENO_SRUND_ROOM15 = 9,
	SENO_SRUND_ROOM16 = 10,
	SENO_SRUND_ROOM20 = 11,
	SENO_SRUND_ROOM21 = 12,
	SENO_SRUND_ROOM22 = 13,
	SENO_SRUND_ROOM28 = 14,
	SENO_SRUND_ROOM29 = 15,
	SENO_SRUND_ROOM30 = 16,
	SENO_SRUND_ROOM41 = 17,
	SENO_EVENT_ROOM00 = 0,
	SENO_EVENT_ROOM01 = 1,
	SENO_EVENT_ROOM02 = 2,
	SENO_EVENT_ROOM03 = 3,
	SENO_EVENT_ROOM05 = 4,
	SENO_EVENT_ROOM06 = 5,
	SENO_EVENT_ROOM07 = 6,
	SENO_EVENT_ROOM08 = 7,
	SENO_EVENT_ROOM09 = 8,
	SENO_EVENT_ROOM10 = 9,
	SENO_EVENT_ROOM11 = 10,
	SENO_EVENT_ROOM12 = 11,
	SENO_EVENT_ROOM14 = 12,
	SENO_EVENT_ROOM15 = 13,
	SENO_EVENT_ROOM16 = 14,
	SENO_EVENT_ROOM17 = 15,
	SENO_EVENT_ROOM18 = 16,
	SENO_EVENT_ROOM22 = 17,
	SENO_EVENT_ROOM23 = 18,
	SENO_EVENT_ROOM24 = 19,
	SENO_EVENT_ROOM25 = 20,
	SENO_EVENT_ROOM26 = 21,
	SENO_EVENT_ROOM27 = 22,
	SENO_EVENT_ROOM35 = 23,
	SENO_EVENT_ROOM38 = 24,
	ADPCM_MC_KIRIE0 = 0,
	ADPCM_MC_KIRIE1 = 1,
	ADPCM_MC_KIRIE2 = 2,
	ADPCM_MC_MAFUYU0 = 3,
	ADPCM_MC_MAFUYU1 = 4,
	ADPCM_MC_MAFUYU2 = 5,
	ADPCM_MC_MIKU0 = 6,
	ADPCM_MC_MIKU1 = 7,
	ADPCM_MC_MIKU2 = 8,
	ADPCM_MC_MAFUYU3 = 9,
	ADPCM_MC_MAFUYU4 = 10,
	ADPCM_MC_MAFUYU5 = 11,
	ADPCM_MC_KOROSHITA = 12,
	ADPCM_MC_DOKOIKUNO = 13,
	ADPCM_MC_SAMUI = 14,
	ADPCM_MC_MITAWAYO = 15,
	ADPCM_MC_KAESHITE = 16,
	ADPCM_MC_KOKONIITE = 17,
	ADPCM_MC_NE = 18,
	ADPCM_MC_DOUSHITE = 19,
	ADPCM_MC_NAWAGA = 20,
	ADPCM_MC_SUSURI1 = 21,
	ADPCM_MC_SUSURI2 = 22,
	ADPCM_MC_SUSURI3 = 23,
	ADPCM_MC_SUSURI4 = 24,
	ADPCM_MC_MAFUYU6 = 25,
	ADPCM_FURN_TAPE = 30,
	ADPCM_FURN_USHIRO = 31,
	ADPCM_FURN_KOTO = 32,
	ADPCM_FURN_CHIKUONKI = 33
};

enum {
	SCENE_NO_0_01_0 = 0,
	SCENE_NO_0_02_0 = 1,
	SCENE_NO_0_02_2 = 2,
	SCENE_NO_0_03_0 = 3,
	SCENE_NO_0_03_1 = 4,
	CHAPTER0_SCENE = 5,
	SCENE_NO_1_00_0 = 5,
	SCENE_NO_1_01_0 = 6,
	SCENE_NO_1_03_0 = 7,
	SCENE_NO_1_03_1 = 8,
	SCENE_NO_1_03_4 = 9,
	SCENE_NO_1_07_0 = 10,
	SCENE_NO_1_08_0 = 11,
	SCENE_NO_1_09_0 = 12,
	SCENE_NO_1_10_0 = 13,
	SCENE_NO_1_10_1 = 14,
	SCENE_NO_1_10_2 = 15,
	SCENE_NO_1_12_0 = 16,
	SCENE_NO_1_15_0 = 17,
	SCENE_NO_1_16_0 = 18,
	SCENE_NO_1_17_0 = 19,
	SCENE_NO_1_18_0 = 20,
	SCENE_NO_1_22_0 = 21,
	SCENE_NO_1_23_0 = 22,
	SCENE_NO_1_24_0 = 23,
	SCENE_NO_1_25_0 = 24,
	SCENE_NO_1_26_0 = 25,
	SCENE_NO_1_28_0 = 26,
	SCENE_NO_1_30_0 = 27,
	SCENE_NO_1_30_1 = 28,
	SCENE_NO_1_32_0 = 29,
	SCENE_NO_1_33_0 = 30,
	SCENE_NO_1_33_1 = 31,
	SCENE_NO_1_33_2 = 32,
	SCENE_NO_1_34_0 = 33,
	SCENE_NO_1_41_0 = 34,
	CHAPTER1_SCENE = 35,
	SCENE_NO_2_01_0 = 35,
	SCENE_NO_2_01_3 = 36,
	SCENE_NO_2_02_0 = 37,
	SCENE_NO_2_03_0 = 38,
	SCENE_NO_2_04_0 = 39,
	SCENE_NO_2_05_0 = 40,
	SCENE_NO_2_06_0 = 41,
	SCENE_NO_2_06_1 = 42,
	SCENE_NO_2_06_2 = 43,
	SCENE_NO_2_07_0 = 44,
	SCENE_NO_2_07_1 = 45,
	SCENE_NO_2_07_2 = 46,
	SCENE_NO_2_09_0 = 47,
	SCENE_NO_2_09_1 = 48,
	SCENE_NO_2_09_2 = 49,
	SCENE_NO_2_10_0 = 50,
	SCENE_NO_2_11_0 = 51,
	SCENE_NO_2_13_0 = 52,
	SCENE_NO_2_13_1 = 53,
	SCENE_NO_2_13_2 = 54,
	SCENE_NO_2_14_0 = 55,
	SCENE_NO_2_14_1 = 56,
	SCENE_NO_2_14_2 = 57,
	SCENE_NO_2_14_3 = 58,
	SCENE_NO_2_15_0 = 59,
	SCENE_NO_2_16_0 = 60,
	SCENE_NO_2_17_0 = 61,
	SCENE_NO_2_17_1 = 62,
	CHAPTER2_SCENE = 63,
	SCENE_NO_3_01_0 = 63,
	SCENE_NO_3_02_0 = 64,
	SCENE_NO_3_03_0 = 65,
	SCENE_NO_3_04_0 = 66,
	SCENE_NO_3_05_0 = 67,
	SCENE_NO_3_06_0 = 68,
	SCENE_NO_3_07_0 = 69,
	SCENE_NO_3_08_0 = 70,
	SCENE_NO_3_08_1 = 71,
	SCENE_NO_3_09_0 = 72,
	SCENE_NO_3_10_0 = 73,
	SCENE_NO_3_11_0 = 74,
	CHAPTER3_SCENE = 75,
	SCENE_NO_4_01_0 = 75,
	SCENE_NO_4_01_1 = 76,
	SCENE_NO_4_02_0 = 77,
	SCENE_NO_4_03_0 = 78,
	SCENE_NO_4_03_1 = 79,
	SCENE_NO_4_04_0 = 80,
	SCENE_NO_4_04_1 = 81,
	SCENE_NO_4_04_2 = 82,
	SCENE_NO_4_05_0 = 83,
	SCENE_NO_4_06_0 = 84,
	SCENE_NO_4_07_0 = 85,
	SCENE_NO_4_08_0 = 86,
	SCENE_NO_4_09_0 = 87,
	SCENE_NO_4_10_0 = 88,
	SCENE_NO_4_11_0 = 89,
	SCENE_NO_4_12_0 = 90,
	CHAPTER4_SCENE = 91,
	SCENE_NO_5_01_0 = 91,
	SCENE_NO_5_02_0 = 92,
	CHAPTER5_SCENE = 93,
	SCENE_NO_4_90_0 = 93,
	SCENE_NO_4_90_1 = 94,
	SCENE_NO_9_00_0 = 95,
	SCENE_NO_9_00_1 = 96,
	SPECIAL_SCENE = 97,
	SCENE_NO_9_10_0 = 98,
	SCENE_NO_9_20_0 = 99,
	SCENE_NO_MAX = 99
};

typedef struct { // 0x8
	/* 0x0 */ short int fade_spd;
	/* 0x2 */ u_short vol;
	/* 0x4 */ u_char pmode;
	/* 0x5 */ u_char bgm_no;
	/* 0x6 */ u_char fade_mode;
} BGM_CTRL;

enum BGM_PMODE {
	BGMP_NO_PLAY = 0,
	BGMP_NOMAL = 1,
	BGMP_FADEIN = 2,
	BGMP_FADEOUT = 3
};

typedef struct { // 0x2c
	/* 0x00 */ sceSifClientData gcd;
	/* 0x28 */ int cmd_num;
} EI_SYS;

typedef struct { // 0x4
	/* 0x0 */ u_short se_no0;
	/* 0x2 */ u_short se_no1;
} SE_STE;

enum {
	FURN_STTS_NO_USE = 32768,
	FURN_STTS_NO_DSP = 16384,
	FURN_STTS_NO_HIT = 8192,
	FURN_STTS_SE_USE = 2048,
	FURN_STTS_NO_ACT = 1024,
	FURN_STTS_LOOK_S = 512,
	FURN_STTS_LOOK_N = 256,
	FURN_STTS_POINT = 128,
	FURN_STTS_PIC_DSP = 64,
	FURN_STTS_PIC_MAK = 32,
	FURN_STTS_PIC_NODSP = 16,
	FURN_STTS_PICD_WAIT = 8,
	FURN_STTS_EFCT_OFF = 4,
	FURN_STTS_COVER_NO = 2,
	M1_FRN_DSPNONE1 = 1,
	M1_FRN_DSPNONE2 = 2,
	M1_FRN_DSPNONE3 = 3,
	M1_FRN_NORMAL1 = 4,
	M1_FRN_NAWA1 = 5,
	M1_FRN_NAWA2 = 6,
	M1_FRN_NAWA3 = 7,
	M1_FRN_NAWA4 = 8,
	M1_FRN_NAWA5 = 9,
	M1_FRN_NAWA6 = 10,
	M1_FRN_NAWA7 = 11,
	M1_FRN_NAWA8 = 12,
	M1_FRN_NAWA9 = 13,
	M1_FRN_NAWA10 = 14,
	M1_FRN_NAWA11 = 15,
	M1_FRN_NAWA12 = 16,
	M1_FRN_NAWA13 = 17,
	M1_FRN_ZUSIL2 = 18,
	M1_FRN_ZUSIR2 = 19,
	M1_FRN_BYOBU1 = 20,
	M1_FRN_BYOBU2 = 21,
	M1_FRN_TUITATE4 = 22,
	M1_FRN_TOKEI1 = 23,
	M1_FRN_YOKAN1 = 24,
	M1_FRN_YOKAN2 = 25,
	M1_FRN_SHOJI1 = 26,
	M1_FRN_KAMON00 = 27,
	M1_FRN_WAFUKU1 = 28,
	M1_FRN_WAFUKU2 = 29,
	M1_FRN_WAFUKU3 = 30,
	M1_FRN_WAFUKU4 = 31,
	M1_FRN_WAFUKU5 = 32,
	M1_FRN_WAFUKU6 = 33,
	M1_FRN_WAFUKU7 = 34,
	M1_FRN_PUZUL1 = 35,
	M1_FRN_YOKAN5 = 36,
	M1_FRN_BYOBU3 = 37,
	M1_FRN_FUSUMA1 = 38,
	M1_FRN_YOKAN6 = 39,
	M1_FRN_AKARI2 = 40,
	M1_FRN_AKARI3 = 41,
	M1_FRN_AKARI4 = 42,
	M1_FRN_AKARI5 = 43,
	M1_FRN_AKARI6 = 44,
	M1_FRN_AKARI7 = 45,
	M1_FRN_AKARI8 = 46,
	M1_FRN_AKARI9 = 47,
	M1_FRN_AKARI10 = 48,
	M1_FRN_BYOBUL = 49,
	M1_FRN_YOKAN3 = 50,
	M1_FRN_SAKURA = 51,
	M1_FRN_SHOJI2 = 52,
	M1_FRN_TUITATE5 = 53,
	M1_FRN_TANSU1 = 54,
	M1_FRN_TANSU2 = 55,
	M1_FRN_NINGYO1 = 56,
	M1_FRN_NINGYO2 = 57,
	M1_FRN_ANDON1 = 58,
	M1_FRN_KIMONO1 = 59,
	M1_FRN_PUZUL2 = 60,
	M1_FRN_PUZUL3 = 61,
	M1_FRN_BYOBU1B = 62,
	M1_FRN_BYOBU5 = 63,
	M1_FRN_BYOBU6 = 64,
	M1_FRN_SHOJI3 = 65,
	M1_FRN_MIRROR1 = 66,
	M1_FRN_HINT5 = 67,
	M1_FRN_ANDON2 = 68,
	M1_FRN_IZABGM = 69,
	M1_FRN_KOTOSE = 70,
	M1_FRN_IKEBANA = 71,
	M1_FRN_KAMEN = 72,
	M1_FRN_TUTUMI = 73,
	M1_FRN_GAKU = 74,
	M1_FRN_GAKARIL = 75,
	M1_FRN_GAKARIR = 76,
	M1_FRN_ZUSIL1 = 77,
	M1_FRN_ZUSIR1 = 78,
	M1_FRN_ZUSI1 = 79,
	M1_FRN_NORMAL2 = 80,
	M1_FRN_NORMAL3 = 81,
	M1_FRN_KAIDAN1 = 82,
	M1_FRN_YUKAKAGE1 = 83,
	M1_FRN_YUKAKAGE2 = 84,
	M1_FRN_NORMAL5 = 85,
	M1_FRN_NORMAL6 = 86,
	M1_FRN_NORMAL7 = 87,
	M1_FRN_NORMAL8 = 88,
	M1_FRN_NORMAL9 = 89,
	M1_FRN_NORMAL10 = 90,
	M1_FRN_SHOSAI1 = 91,
	M1_FRN_SHOSAI2 = 92,
	M1_FRN_ZUSIL3 = 93,
	M1_FRN_ZUSIR3 = 94,
	M1_FRN_ZUSI2 = 95,
	M1_FRN_KAMON01 = 96,
	M1_FRN_OFUDA02 = 97,
	M1_FRN_OFUDA03 = 98,
	M1_FRN_OFUDA04 = 99,
	M1_FRN_IDO01 = 100,
	M1_FRN_IDO02 = 101,
	M1_FRN_KAGI01 = 102,
	M1_FRN_KAMON02 = 103,
	M1_FRN_TOBIRA01 = 104,
	M1_FRN_TOBIRA02 = 105,
	M1_FRN_DAIZA = 106,
	M1_FRN_BUDDA01a = 107,
	M1_FRN_BUDDA02a = 108,
	M1_FRN_BUDDA03a = 109,
	M1_FRN_BUDDA04a = 110,
	M1_FRN_BUDDA05a = 111,
	M1_FRN_BUDDA01b = 112,
	M1_FRN_BUDDA02b = 113,
	M1_FRN_BUDDA03b = 114,
	M1_FRN_BUDDA04b = 115,
	M1_FRN_BUDDA05b = 116,
	M1_FRN_KAMON03 = 117,
	M1_FRN_JOMAE03 = 118,
	M1_FRN_DOLL01 = 119,
	M1_FRN_KAGI02 = 120,
	M1_FRN_ROU1 = 121,
	M1_FRN_HINT4 = 122,
	M1_FRN_TOITA1 = 123,
	M1_FRN_MEN1 = 124,
	M1_FRN_MEN2 = 125,
	M1_FRN_MEN3 = 126,
	M1_FRN_MEN4 = 127,
	M1_FRN_DOOR1 = 128,
	M1_FRN_DOOR2 = 129,
	M1_FRN_SUISHA = 130,
	M1_FRN_MEN5 = 131,
	M1_FRN_SACRIFY1 = 132,
	M1_FRN_SACRIFY2 = 133,
	M1_FRN_SACRIFY3 = 134,
	M1_FRN_SACRIFY4 = 135,
	M1_FRN_SACRIFY5 = 136,
	M1_FRN_KAKMEN = 137,
	M1_FRN_HINT6 = 138,
	M1_FRN_HINT7 = 139,
	M1_FRN_HINT8 = 140,
	M1_FRN_HINT9 = 141,
	M1_FRN_HINT10 = 142,
	M1_FRN_HINT11 = 143,
	M1_FRN_HINT12 = 144,
	M1_FRN_HINT13 = 145,
	M1_FRN_HINT14 = 146,
	M1_FRN_OFUDA05 = 147,
	M1_FRN_OFUDA06 = 148,
	M1_FRN_OFUDA07 = 149,
	M2_FRN_OFUDA08 = 150,
	M2_FRN_OFUDA09 = 151,
	M2_FRN_OFUDA10 = 152,
	M1_FRN_HINT15 = 153,
	M2_FRN_SIMENAWA = 154,
	M2_FRN_KAIDAN2 = 155,
	M2_FRN_JOU1 = 156,
	M2_FRN_JOU2 = 157,
	M2_FRN_ODOMEN = 158,
	M2_FRN_SAVE1 = 159,
	M2_FRN_STONE1 = 160,
	M2_FRN_KAMON04 = 161,
	M2_FRN_KAKUSI01 = 162,
	M2_FRN_MEN6 = 163,
	M2_FRN_HASI01 = 164,
	M2_FRN_STONE2 = 165,
	M2_FRN_MADO01 = 166,
	M2_FRN_SHADOW1 = 167,
	M2_FRN_MEN7 = 168,
	M2_FRN_KINKO1 = 169,
	M2_FRN_HINT16 = 170,
	M2_FRN_TORO1 = 171,
	M2_FRN_TAN1 = 172,
	M2_FRN_TAN2 = 173,
	M2_FRN_TAN3 = 174,
	M2_FRN_KIRA1 = 175,
	M2_FRN_NIGYO1 = 176,
	M2_FRN_HIMO1 = 177,
	M2_FRN_LIGHT1 = 178,
	M2_FRN_HIKI1 = 179,
	M2_FRN_SAVE2 = 180,
	M2_FRN_SAVE3 = 181,
	M2_FRN_HASI02 = 182,
	M2_FRN_HINT17 = 183,
	M1_FRN_FIRE0 = 184,
	M1_FRN_FIRE1 = 185,
	M1_FRN_NFIRE0 = 186,
	M1_FRN_NFIRE1 = 187,
	M1_FRN_NFIRE2 = 188,
	M1_FRN_NFIRE3 = 189,
	M1_FRN_NFIRE4 = 190,
	M2_FRN_WFIRE0 = 191,
	M2_FRN_WFIRE1 = 192,
	M2_FRN_WFIRE2 = 193,
	M1_FRN_WFIRE3 = 194,
	M1_FRN_WFIRE4 = 195,
	M1_FRN_WFIRE5 = 196,
	M1_FRN_WFIRE6 = 197,
	M1_FRN_WFIRE7 = 198,
	M1_FRN_WFIRE8 = 199,
	M1_FRN_WFIRE9 = 200,
	M1_FRN_TFIRE0 = 201,
	M1_FRN_TFIRE1 = 202,
	M1_FRN_TFIRE2 = 203,
	M1_FRN_TFIRE3 = 204,
	M1_FRN_TFIRE4 = 205,
	M1_FRN_NOFUDA0 = 206,
	M1_FRN_NOFUDA1 = 207,
	M1_FRN_KOFUDA1 = 208,
	M1_FRN_WLIGHT0 = 209,
	M1_FRN_KLIGHT0 = 210,
	M1_FRN_KLIGHT1 = 211,
	M1_FRN_NFIRE5 = 212,
	M1_FRN_NSE0 = 213,
	M1_FRN_214 = 214,
	M1_FRN_215 = 215,
	M1_FRN_216 = 216,
	M1_FRN_217 = 217,
	M1_FRN_218 = 218,
	M1_FRN_219 = 219,
	M1_FRN_220 = 220,
	M1_FRN_221 = 221,
	M1_FRN_222 = 222,
	M1_FRN_223 = 223,
	M1_FRN_224 = 224,
	M1_FRN_225 = 225,
	M1_FRN_226 = 226,
	M1_FRN_227 = 227,
	M1_FRN_228 = 228,
	M1_FRN_229 = 229,
	M1_FRN_230 = 230,
	M1_FRN_231 = 231,
	M1_FRN_232 = 232,
	M1_FRN_233 = 233,
	M1_FRN_234 = 234,
	M1_FRN_235 = 235,
	M1_FRN_236 = 236,
	M1_FRN_237 = 237,
	M1_FRN_238 = 238,
	M1_FRN_239 = 239,
	M1_FRN_240 = 240,
	M1_FRN_241 = 241,
	M1_FRN_242 = 242,
	M1_FRN_243 = 243,
	M1_FRN_244 = 244,
	M1_FRN_245 = 245,
	M1_FRN_246 = 246,
	M1_FRN_247 = 247,
	M1_FRN_248 = 248,
	M1_FRN_249 = 249,
	M1_FRN_250 = 250,
	M1_FRN_251 = 251,
	M1_FRN_252 = 252,
	M1_FRN_253 = 253,
	M1_FRN_254 = 254,
	M1_FRN_255 = 255,
	M1_FRN_256 = 256,
	M1_FRN_257 = 257,
	M1_FRN_258 = 258,
	M1_FRN_259 = 259,
	M1_FRN_260 = 260,
	M1_FRN_261 = 261,
	M1_FRN_262 = 262,
	M1_FRN_263 = 263,
	M1_FRN_264 = 264,
	M1_FRN_265 = 265,
	M1_FRN_266 = 266,
	M1_FRN_267 = 267,
	M1_FRN_268 = 268,
	M1_FRN_269 = 269,
	M1_FRN_270 = 270,
	M1_FRN_271 = 271,
	M1_FRN_272 = 272,
	M1_FRN_273 = 273,
	M1_FRN_274 = 274,
	M1_FRN_275 = 275,
	M1_FRN_276 = 276,
	M1_FRN_277 = 277,
	M1_FRN_278 = 278,
	M1_FRN_279 = 279,
	M1_FRN_280 = 280,
	M1_FRN_281 = 281,
	M1_FRN_282 = 282,
	M1_FRN_283 = 283,
	M1_FRN_284 = 284,
	M1_FRN_285 = 285,
	M1_FRN_286 = 286,
	M1_FRN_287 = 287,
	M1_FRN_288 = 288,
	M1_FRN_289 = 289,
	M1_FRN_290 = 290,
	M1_FRN_291 = 291,
	M1_FRN_292 = 292,
	M1_FRN_293 = 293,
	M1_FRN_294 = 294,
	M1_FRN_295 = 295,
	M1_FRN_296 = 296,
	M1_FRN_297 = 297,
	M1_FRN_298 = 298,
	M1_FRN_299 = 299,
	M1_FRN_300 = 300,
	M1_FRN_301 = 301,
	M1_FRN_302 = 302,
	M1_FRN_303 = 303,
	M1_FRN_304 = 304,
	M1_FRN_305 = 305,
	M1_FRN_306 = 306,
	M1_FRN_307 = 307,
	M1_FRN_308 = 308,
	M1_FRN_309 = 309,
	M1_FRN_310 = 310,
	M1_FRN_311 = 311,
	M1_FRN_312 = 312,
	M1_FRN_313 = 313,
	M1_FRN_314 = 314,
	M1_FRN_315 = 315,
	M1_FRN_316 = 316,
	M1_FRN_317 = 317,
	M1_FRN_318 = 318,
	M1_FRN_319 = 319,
	M1_FRN_320 = 320,
	M1_FRN_321 = 321,
	M1_FRN_322 = 322,
	M1_FRN_323 = 323,
	M1_FRN_324 = 324,
	M1_FRN_325 = 325,
	M1_FRN_326 = 326,
	M1_FRN_327 = 327,
	M1_FRN_328 = 328,
	M1_FRN_329 = 329,
	M1_FRN_330 = 330,
	M1_FRN_331 = 331,
	M1_FRN_332 = 332,
	M1_FRN_333 = 333,
	M1_FRN_334 = 334,
	M1_FRN_335 = 335,
	M1_FRN_336 = 336,
	M1_FRN_337 = 337,
	M1_FRN_338 = 338,
	M1_FRN_339 = 339,
	M1_FRN_340 = 340,
	M1_FRN_341 = 341,
	M1_FRN_342 = 342,
	M1_FRN_343 = 343,
	M1_FRN_344 = 344,
	M1_FRN_345 = 345,
	M1_FRN_346 = 346,
	M1_FRN_347 = 347,
	M1_FRN_348 = 348,
	M1_FRN_349 = 349,
	M1_FRN_350 = 350,
	M1_FRN_351 = 351,
	M1_FRN_352 = 352,
	M1_FRN_353 = 353,
	M1_FRN_354 = 354,
	M1_FRN_355 = 355,
	M1_FRN_356 = 356,
	M1_FRN_357 = 357,
	M1_FRN_358 = 358,
	M1_FRN_359 = 359,
	M1_FRN_360 = 360,
	M1_FRN_361 = 361,
	M1_FRN_362 = 362,
	M1_FRN_363 = 363,
	M1_FRN_364 = 364,
	M1_FRN_365 = 365,
	M1_FRN_366 = 366,
	M1_FRN_367 = 367,
	M1_FRN_368 = 368,
	M1_FRN_369 = 369,
	M1_FRN_370 = 370,
	M1_FRN_371 = 371,
	M1_FRN_372 = 372,
	M1_FRN_373 = 373,
	M1_FRN_374 = 374,
	M1_FRN_375 = 375,
	M1_FRN_376 = 376,
	M1_FRN_377 = 377,
	M1_FRN_378 = 378,
	M1_FRN_379 = 379,
	M1_FRN_380 = 380,
	M1_FRN_381 = 381,
	M1_FRN_382 = 382,
	M1_FRN_383 = 383,
	M1_FRN_384 = 384,
	M1_FRN_385 = 385,
	M1_FRN_386 = 386,
	M1_FRN_387 = 387,
	M1_FRN_388 = 388,
	M1_FRN_389 = 389,
	M1_FRN_390 = 390,
	M1_FRN_391 = 391,
	M1_FRN_392 = 392,
	M1_FRN_393 = 393,
	M1_FRN_394 = 394,
	M1_FRN_395 = 395,
	M1_FRN_396 = 396,
	M1_FRN_397 = 397,
	M1_FRN_398 = 398,
	M1_FRN_399 = 399,
	M1_FRN_400 = 400,
	M1_FRN_401 = 401,
	M1_FRN_402 = 402,
	M1_FRN_403 = 403,
	M1_FRN_404 = 404,
	M1_FRN_405 = 405,
	M1_FRN_406 = 406,
	M1_FRN_407 = 407,
	M1_FRN_408 = 408
};

enum SND_TEST_MODE {
	SND_TEST_INIT = 0,
	SND_TEST_BGM_NO = 1,
	SND_TEST_BGM_VOL = 2,
	SND_TEST_SE_VOICE = 3,
	SND_TEST_SE_NO = 4,
	SND_TEST_SE_VOL = 5,
	SND_TEST_SE_PITCH = 6,
	SND_TEST_SE_ADDR = 7,
	SND_TEST_SE_FILE = 8,
	SND_TEST_SE_LOAD_START = 9,
	SND_TEST_SE_LOAD_WAIT = 10,
	SND_TEST_MODE_NUM = 11
};

typedef struct { // 0x6
	/* 0x0 */ u_char se_no;
	/* 0x2 */ u_short pitch;
	/* 0x4 */ u_short vol;
} SND_TEST_SE;

typedef struct { // 0xa0
	/* 0x00 */ SND_TEST_SE se[24];
	/* 0x90 */ int load_id;
	/* 0x94 */ u_short bgm_vol;
	/* 0x96 */ u_short se_buf_no;
	/* 0x98 */ u_short se_file_no;
	/* 0x9a */ u_short bgm_no;
	/* 0x9c */ u_char mode;
	/* 0x9d */ u_char se_no;
	/* 0x9e */ u_char cng_pitch;
	/* 0x9f */ u_char se_sel;
} SND_TEST_WRK;

enum { // 0x8
	T_B_MODE_01 = 624041600,
	T_B_MODE_02 = -584015740,
	T_B_MODE_03 = -584015672,
	T_B_MODE_04 = -516873972,
	T_B_MODE_05 = -516873840,
	T_B_MODE_06 = -584015340,
	T_B_MODE_07 = -1657757096,
	T_B_MODE_08 = -1657757060,
	T_B_MODE_09 = -1657757024,
	T_B_MODE_10 = -1657756988,
	T_B_MODE_11 = -1657756952,
	T_FONT_B_MODE = 1697784588,
	T_BM_COSPLAY = -1656707312,
	T_FONT_B_STRT = 1697783424,
	T_FONT_B_RSLT = 1697784452,
	T_FONT_N_SLCT = -449697984,
	T_CHECK = 1496361028,
	T_SYO_CURSOR = 1430300752,
	T_FILMZ = 1697782336,
	T_FUSUMA_01 = 624041600,
	T_FUSUMA_02 = -584015740,
	T_FUSUMA_03 = -584015672,
	T_FUSUMA_04 = -516873972,
	T_FUSUMA_05 = -516873840,
	T_FUSUMA_06 = -584015340,
	T_FUSUMA_07 = -1657757096,
	T_FUSUMA_08 = -1657757060,
	T_FUSUMA_09 = -1657757024,
	T_FUSUMA_10 = -1657756988,
	T_FUSUMA_11 = -1657756952,
	T_FONT_M_SLCT = 624042764,
	T_OPT_BG_01 = 624041600,
	T_OPT_BG_02 = -584015740,
	T_OPT_BG_03 = -584015672,
	T_OPT_BG_04 = -516873972,
	T_OPT_BG_05 = -516873840,
	T_OPT_BG_06 = -584015340,
	T_OPT_BG_07 = -1657757096,
	T_OPT_BG_08 = -1657757060,
	T_OPT_BG_09 = -1657757024,
	T_OPT_BG_10 = -1657756988,
	T_OPT_BG_11 = -1657756952,
	T_ST_BK_01 = 624041600,
	T_ST_BK_02 = -584015740,
	T_ST_BK_03 = -584015672,
	T_ST_BK_04 = -516873972,
	T_ST_BK_05 = -516873840,
	T_ST_BK_06 = -584015340,
	T_ST_BK_07 = -1657757096,
	T_ST_BK_08 = -1657757060,
	T_ST_BK_09 = -1657757024,
	T_ST_BK_10 = -1657756988,
	T_ST_BK_11 = -1657756952,
	T_ST_COM = -1657756916,
	T_ST_FLR = -584015056,
	T_ST_NUM = -1657756812,
	T_ST_ARROW = -1724865640,
	T_S_MODE_01 = 624041600,
	T_S_MODE_02 = -584015740,
	T_S_MODE_03 = -584015672,
	T_S_MODE_04 = -516873972,
	T_S_MODE_05 = -516873840,
	T_S_MODE_06 = -584015340,
	T_S_MODE_07 = -1657757096,
	T_S_MODE_08 = -1657757060,
	T_S_MODE_09 = -1657757024,
	T_S_MODE_10 = -1657756988,
	T_S_MODE_11 = -1657756952,
	T_SM_COSPLAY = -1656708340,
	T_FONT_S_MODE = 1697784605,
	T_FONT_S_MODE2 = 624043809,
	T_FONT_S_RSLT = 1697786149
};

enum {
	TM_FLM_OBI = 0,
	TM_FLM_MSN_SL = 1,
	TM_FLM_B_MODE = 2,
	TM_FLM_M_SLCT = 3,
	TM_FLM_S_MODE = 4,
	TM_FLM_S_TEST = 5,
	TM_FLM_OPTION = 6,
	TM_FLM_BODY = 7,
	TM_BM_DIFFICULTY = 8,
	TM_BM_MISSION_SELECT = 9,
	TM_BM_COSTUME = 10,
	TM_BM_NORMAL = 11,
	TM_BM_HARD = 12,
	TM_BM_NIGHTMARE = 13,
	TM_BM_SPECIAL = 14,
	TM_BM_CUSTOM = 15,
	TM_BM_KAKKO_L = 16,
	TM_BM_KAKKO_R = 17,
	TM_BM_PLAY_S = 18,
	TM_BM_PLAY_M = 19,
	TM_BM_STOP = 20,
	TM_BM_FW = 21,
	TM_BM_CAMERA = 22,
	TM_BM_SETTING = 23,
	TM_BM_EXIT = 24,
	TM_BM_PHOT = 25,
	TM_BM_SAVE = 26,
	TM_BM_1 = 27,
	TM_BM_2 = 28,
	TM_BM_3 = 29,
	TM_BMS_R = 30,
	TM_BMS_E = 31,
	TM_BMS_A = 32,
	TM_BMS_D = 33,
	TM_BMS_Y = 34,
	TM_BMS_G = 35,
	TM_BMS_O = 36,
	TM_BMS_KAKKO = 37,
	TM_BMR_0 = 38,
	TM_BMR_1 = 39,
	TM_BMR_2 = 40,
	TM_BMR_3 = 41,
	TM_BMR_4 = 42,
	TM_BMR_5 = 43,
	TM_BMR_6 = 44,
	TM_BMR_7 = 45,
	TM_BMR_8 = 46,
	TM_BMR_9 = 47,
	TM_BMR_NEXT = 48,
	TM_BMR_SAVE = 49,
	TM_BMR_EXIT = 50,
	TM_BMR_MISSION = 51,
	TM_BMR_RESULTS = 52,
	TM_BMR_CONGRATULATIONS = 53,
	TM_BMR_SPACE = 54,
	TM_BMR_ALL_CLEARED = 55,
	TM_BMR_RECORD = 56,
	TM_BMR_LINE = 57,
	TM_NS_MN_BT_BS = 58,
	TM_NS_RANK = 59,
	TM_NS_S = 60,
	TM_NS_A = 61,
	TM_NS_B = 62,
	TM_NS_C = 63,
	TM_NS_D = 64,
	TM_NS_E = 65,
	TM_NS_EXIT = 66,
	TM_NS_CHK_BOX = 67,
	TM_NS_CHK_RED = 68,
	TM_NS_NEXT_TRI = 69,
	TM_MS_STORY_MODE = 70,
	TM_MS_BATTLE_MODE = 71,
	TM_MS_SOUND_TEST = 72,
	TM_MS_EXIT = 73,
	TM_MS_OPTION = 74,
	TM_ST_DOWN = 75,
	TM_ST_RW = 76,
	TM_ST_PLAY = 77,
	TM_ST_STOP = 78,
	TM_ST_FW = 79,
	TM_ST_UP = 80,
	TM_ST_FLR01 = 81,
	TM_ST_FLR02 = 82,
	TM_ST_FLR03 = 83,
	TM_ST_FLR04 = 84,
	TM_ST_FLR05 = 85,
	TM_ST_FLR06 = 86,
	TM_ST_ARROW1 = 87,
	TM_ST_ARROW2 = 88,
	TM_ST_ARROW3 = 89,
	TM_ST_NUM_0 = 90,
	TM_ST_NUM_1 = 91,
	TM_ST_NUM_2 = 92,
	TM_ST_NUM_3 = 93,
	TM_ST_NUM_4 = 94,
	TM_ST_NUM_5 = 95,
	TM_ST_NUM_6 = 96,
	TM_ST_NUM_7 = 97,
	TM_ST_NUM_8 = 98,
	TM_ST_NUM_9 = 99,
	TM_ST_NUM_CRN = 100,
	TM_SM_CHAPTER = 101,
	TM_SM_DIFFICULTY = 102,
	TM_SM_GAME_START = 103,
	TM_SM_EXIT = 104,
	TM_SM_DAI = 105,
	TM_SM_ONE = 106,
	TM_SM_TWO = 107,
	TM_SM_THREE = 108,
	TM_SM_SAI = 109,
	TM_SM_SYU = 110,
	TM_SM_YA = 111,
	TM_SM_JO = 112,
	TM_SM_SYO = 113,
	TM_SM_COSTUME = 114,
	TM_SM_CONTINUE = 115,
	TM_SM_NORMAL = 116,
	TM_SM_HARD = 117,
	TM_SM_NIGHTMARE = 118,
	TM_SM_SPECIAL = 119,
	TM_SM_CUSTOM = 120,
	TM_SM_KAKKO_L = 121,
	TM_SM_KAKKO_R = 122,
	TM_SM_PLAY_S = 123,
	TM_SM_PLAY_M = 124,
	TM_SM_STOP = 125,
	TM_SM_FW = 126,
	TM_SM_SHW0 = 127,
	TM_SM_SHW1 = 128,
	TM_SM_SHW2 = 129,
	TM_SM_SHW3 = 130,
	TM_SM_SHW4 = 131,
	TM_SM_CONT = 132,
	TM_SM_1 = 133,
	TM_SM_2 = 134,
	TM_SM_3 = 135,
	TM_SMR_S = 136,
	TM_SMR_A = 137,
	TM_SMR_B = 138,
	TM_SMR_C = 139,
	TM_SMR_D = 140,
	TM_SMR_E = 141,
	TM_SMR_PLAY_RESULT = 142,
	TM_SMR_RANK = 143,
	TM_SMR_MISSION_CLEAR = 144,
	TM_SMR_SPACE = 145,
	TM_SMR_MISSION = 146,
	TM_SMR_FAILED = 147
};

enum {
	MENU_OPTN_CTRL_TYPE = 0,
	MENU_OPTN_VIBRATION = 1,
	MENU_OPTN_SOUND = 2,
	MENU_OPTN_BGM_VOL = 3,
	MENU_OPTN_LIGHT = 4,
	MENU_OPTN_BACK_MENU = 5,
	MENU_OPTN_MAX = 6,
	MENU_OPTN_MODE_SLCT = 7
};

enum {
	GET_ITM_TYPE_FILE0 = 0,
	GET_ITM_TYPE_FILE1 = 1,
	GET_ITM_TYPE_FILE2 = 2,
	GET_ITM_TYPE_PHOT = 3,
	GET_ITM_TYPE_ITEM = 4
};

enum {
	IGMSG_GET_FILE0 = 0,
	IGMSG_GET_FILE1 = 1,
	IGMSG_GET_FILE2 = 2,
	IGMSG_GET_PHOT = 3,
	IGMSG_GET_ITEM = 4,
	IGMSG_FIND_MSG = 5,
	IGMSG_MENU_MSG = 6,
	IGMSG_SPEV_MSG = 7,
	IGMSG_SV_PNT_MSG = 8,
	IGMSG_PRE_SV_MSG = 9,
	IGMSG_FILE0_NAME = 10,
	IGMSG_FILE1_NAME = 11,
	IGMSG_FILE2_NAME = 12,
	IGMSG_PHOTO_NAME = 13,
	IGMSG_FILE0_MSG = 14,
	IGMSG_FILE1_MSG = 15,
	IGMSG_FILE2_MSG = 16,
	IGMSG_PHOTO_MSG = 17,
	IGMSG_FILE0_DAT = 18,
	IGMSG_FILE1_DAT = 19,
	IGMSG_FILE2_DAT = 20,
	IGMSG_MENU_FILE = 21,
	IGMSG_ITEM_MSG = 22,
	IGMSG_ITEM_USE = 23,
	IGMSG_ITEM_NAME = 24,
	IGMSG_MENU_ITEM = 25,
	IGMSG_MAP_NAME = 26,
	IGMSG_MENU_MAP = 27,
	IGMSG_MENU_OPT = 28,
	IGMSG_OPT_MSG = 29,
	IGMSG_ROOM_NAME = 30,
	IGMSG_ENE_NAME = 31,
	IGMSG_FURN_NAME = 32,
	IGMSG_MENU_ALBUM = 33,
	IGMSG_PHOTO_MSG0 = 34,
	IGMSG_PHOTO_MSG1 = 35,
	IGMSG_PHOTO_MSG2 = 36,
	IGMSG_RARE_NAME = 37,
	IGMSG_PZL_NAME = 38,
	IGMSG_MENU_RANK = 39,
	IGMSG_MENU_TOP = 40,
	IGMSG_HINT_2D_MSG1 = 41,
	IGMSG_HINT_3D_MSG1 = 42,
	IGMSG_HINT_SP_MSG1 = 43,
	IGMSG_SOUL_TELL = 44,
	IGMSG_CAME_MSG = 45,
	IGMSG_BTL_MSON = 46,
	IGMSG_GLIST_ROOM = 47,
	IGMSG_GLIST_MSG = 48,
	IGMSG_MODE_SLCT = 49,
	HUMAN_NAME_TBL = 50,
	HUMAN_MSG_TBL = 51,
	IGMSG_SND_TST = 52
};

enum {
	EEWS_NO = 0,
	EEWS_ENTRY = 1,
	EEWS_ACTIVE = 2
};

enum AREA_READ_STATUS {
	AR_STAT_NO = 0,
	AR_STAT_READ_READY = 1,
	AR_STAT_READ_MOTION = 2,
	AR_STAT_READ_SE = 3,
	AR_STAT_READ_MODE0 = 4,
	AR_STAT_READ_MODE1 = 5,
	AR_STAT_READ_MODE2 = 6,
	AR_STAT_READ_MODE3 = 7,
	AR_STAT_READ_END = 8,
	AR_STAT_START = 9,
	AR_STAT_READ_ONE_ROOM = 10
};

enum {
	IG_FILE_NO_REQ = 0,
	IG_FILE_NO_GET = 1,
	IG_FILE_GET_END = 2,
	IG_FILE_READ = 3
};

enum MMAP_DOOR_STTS {
	MMAP_DOOR_NO_FOUND = 0,
	MMAP_DOOR_NORMAL_LOCK = 1,
	MMAP_DOOR_SECRET_FREE = 2,
	MMAP_DOOR_NORMAL_FREE = 3,
	MMAP_DOOR_LOOK_ONLY = 4
};

enum {
	FGTYPE_AIR = 0,
	FGTYPE_CEILING = 1,
	FGTYPE_GROUND = 2,
	FGTYPE_UNDER = 3,
	FGTYPE_DOOR = 4,
	FGTYPE_ON_FURN = 5,
	FGTYPE_ON_ROOF = 6,
	FGTYPE_ON_FINDER = 7,
	FGTYPE_OFF_FINDER = 8,
	FGTYPE_PHOTO = 9,
	FGTYPE_POS = 10,
	FGTYPE_DATEND = 11
};

typedef struct { // 0x30
	/* 0x00 */ u_char mode;
	/* 0x01 */ u_char evt_no;
	/* 0x02 */ u_char movie_on;
	/* 0x03 */ u_char next_msn;
	/* 0x04 */ u_char msg_init;
	/* 0x05 */ u_char use_item;
	/* 0x06 */ u_char get_item;
	/* 0x07 */ u_char btl_ene;
	/* 0x08 */ u_char end_ev;
	/* 0x09 */ u_char btl_lock;
	/* 0x0a */ u_char pht_2d;
	/* 0x0b */ u_char pht_furn;
	/* 0x0c */ u_char pht_ev[10];
	/* 0x16 */ u_char pos_req[16];
	/* 0x26 */ u_char spev_tmp[4];
	/* 0x2a */ u_char gst_door[2];
	/* 0x2c */ u_char face_stts[4];
} EVENT_WRK;

typedef struct { // 0x1a
	/* 0x00 */ u_char mode;
	/* 0x01 */ u_char dummy;
	/* 0x02 */ u_short req_no;
	/* 0x04 */ u_short msg_no;
	/* 0x06 */ u_short pos_req[10];
} FIND_WRK;

typedef struct { // 0xa
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char dummy;
	/* 0x2 */ u_short after;
	/* 0x4 */ u_short pos_x;
	/* 0x6 */ u_short pos_y;
	/* 0x8 */ u_short msg_no;
} FIND_DAT;

typedef struct { // 0x220
	/* 0x000 */ u_short furn_no;
	/* 0x002 */ short int stts;
	/* 0x010 */ sceVu0FVECTOR pos;
	/* 0x020 */ sceVu0FVECTOR rotate;
	/* 0x030 */ float rot;
	/* 0x034 */ int fewrk_no;
	/* 0x038 */ u_short id;
	/* 0x03a */ u_short fno_bk;
	/* 0x03c */ u_short dist;
	/* 0x03e */ u_short score;
	/* 0x040 */ float ratio;
	/* 0x044 */ u_char use;
	/* 0x045 */ u_char cmdflg;
	/* 0x046 */ u_short attr_id;
	/* 0x048 */ u_char room_id;
	/* 0x049 */ u_char fs_flg;
	/* 0x050 */ LIGHT_PACK mylight;
} FURN_WRK;

typedef struct { // 0x50
	/* 0x00 */ void *addr;
	/* 0x10 */ sceVu0FVECTOR pos0;
	/* 0x20 */ sceVu0FVECTOR pos1;
	/* 0x30 */ sceVu0FVECTOR rot0;
	/* 0x40 */ u_char use;
} FURN_EFCT;

typedef struct { // 0x12
	/* 0x00 */ u_short attr_no;
	/* 0x02 */ u_short dist_n;
	/* 0x04 */ u_short dist_f;
	/* 0x06 */ u_short score;
	/* 0x08 */ u_short fact_no;
	/* 0x0a */ u_char fp_num;
	/* 0x0b */ u_char fp_no;
	/* 0x0c */ u_char fp_rot;
	/* 0x0d */ u_char fp_mak;
	/* 0x0e */ u_char acs_flg;
	/* 0x0f */ u_char ef_type;
	/* 0x10 */ u_char ef_no;
} FURN_DAT;

typedef struct { // 0x8
	/* 0x0 */ u_int flg;
	/* 0x4 */ u_int padding;
} FURN_ATTR_FLG;

typedef struct { // 0xc
	/* 0x0 */ u_short mdl_no;
	/* 0x2 */ u_short attr;
	/* 0x4 */ u_char stts;
	/* 0x5 */ u_char stts_map;
	/* 0x6 */ u_char room_id;
	/* 0x8 */ u_int padding;
} DOOR_STTS_KEEP;

typedef struct { // 0x20
	/* 0x00 */ u_short item_no;
	/* 0x02 */ u_char disp;
	/* 0x10 */ sceVu0FVECTOR pos;
} ITEM_DISP_WRK;

typedef struct { // 0x20
	/* 0x00 */ u_char mode;
	/* 0x01 */ u_char rg_no;
	/* 0x02 */ u_char dsp_no;
	/* 0x03 */ u_char alpha;
	/* 0x04 */ u_char alp_bak;
	/* 0x05 */ u_char se_wrk_no;
	/* 0x06 */ u_short count;
	/* 0x08 */ u_short time;
	/* 0x10 */ sceVu0FVECTOR pos;
} RGOST_DSP_WRK;

typedef struct { // 0x12
	/* 0x00 */ u_char room;
	/* 0x01 */ u_char ap_step0;
	/* 0x02 */ u_char ap_step1[4];
	/* 0x06 */ u_char ap_step2[6];
	/* 0x0c */ u_short ap_near;
	/* 0x0e */ u_short ap_far;
	/* 0x10 */ u_short ap_stts;
} RGOST_AP_DAT;

typedef struct { // 0xe
	/* 0x0 */ u_short score;
	/* 0x2 */ u_char center_no;
	/* 0x3 */ u_char center_num;
	/* 0x4 */ u_char start;
	/* 0x5 */ u_char inter;
	/* 0x6 */ u_char end;
	/* 0x7 */ u_char dummy;
	/* 0x8 */ short int pos[3];
} RGOST_DAT;

typedef struct { // 0xa
	/* 0x0 */ u_short score;
	/* 0x2 */ u_char efct_no;
	/* 0x3 */ u_char room;
	/* 0x4 */ short int pos[3];
} PGOST_DAT;

typedef struct { // 0x5
	/* 0x0 */ u_char req_no;
	/* 0x1 */ u_char pgst_no;
	/* 0x2 */ u_char ev_no;
	/* 0x3 */ u_char stts;
	/* 0x4 */ u_char time;
} PGOST_WRK;

typedef struct { // 0x60
	/* 0x00 */ u_char stts;
	/* 0x01 */ u_char gtime;
	/* 0x02 */ u_char rtime;
	/* 0x03 */ u_char ptime;
	/* 0x04 */ u_char atime[11];
	/* 0x0f */ u_char room_fg[42];
	/* 0x39 */ u_char sound;
	/* 0x3a */ u_char pic_num;
	/* 0x3b */ u_char raze;
	/* 0x3c */ u_char fg_mode;
	/* 0x3d */ u_char fgst_no;
	/* 0x3e */ u_char gg_mode;
	/* 0x3f */ u_char ggst_no;
	/* 0x40 */ u_char zh_mode;
	/* 0x41 */ u_char zh_efct;
	/* 0x42 */ u_char fg_pos[2][3];
	/* 0x48 */ u_char fg_set_num;
	/* 0x49 */ u_char fg_se_empty[3];
	/* 0x4c */ u_char gg_room[5];
	/* 0x51 */ u_char pg_req[5];
	/* 0x56 */ u_char ggst_cnt;
	/* 0x58 */ u_short fgst_cnt;
	/* 0x5a */ u_short dgst_cnt;
	/* 0x5c */ u_short zh_ap;
	/* 0x5e */ u_short fg_ap;
} AP_WRK;

typedef struct { // 0xbc
	/* 0x00 */ u_int *sgd_room;
	/* 0x04 */ u_int *sgd_furn[30];
	/* 0x7c */ u_short mno_room;
	/* 0x7e */ u_short mno_furn[30];
	/* 0xba */ u_char room_id;
} ROOM_MDATA;

typedef struct { // 0x8
	/* 0x0 */ u_int *sgd_door;
	/* 0x4 */ u_short mno_door;
} DOOR_MDATA;

typedef struct { // 0x540
	/* 0x000 */ ROOM_MDATA rmd[6];
	/* 0x468 */ DOOR_MDATA dmd[20];
	/* 0x510 */ sceVu0FVECTOR tmp_after_pos;
	/* 0x520 */ u_char area_no;
	/* 0x521 */ u_char area_bak;
	/* 0x522 */ u_char room[6];
	/* 0x528 */ u_char rgst[5];
	/* 0x52d */ u_char ev_se;
	/* 0x52e */ u_char fg_max;
	/* 0x530 */ u_int padding;
} AREA_WRK;

typedef struct { // 0x15
	/* 0x00 */ u_char stat;
	/* 0x01 */ u_char rm_from;
	/* 0x02 */ u_char rm_to;
	/* 0x03 */ u_char next_area;
	/* 0x04 */ u_char room[6];
	/* 0x0a */ u_char fgst[3];
	/* 0x0d */ u_char rgst[5];
	/* 0x12 */ u_char load_mode;
	/* 0x13 */ u_char load_count;
	/* 0x14 */ u_char load_id;
} AREA_READ_WRK;

typedef struct { // 0x8
	/* 0x0 */ u_short dmg;
	/* 0x2 */ u_short hit_rng;
	/* 0x4 */ u_short mdl_no;
	/* 0x6 */ u_short cond;
} FLY_DATA;

typedef struct { // 0xd0
	/* 0x00 */ u_short sta;
	/* 0x02 */ u_char ene;
	/* 0x03 */ u_char reserve;
	/* 0x10 */ MOVE_BOX move_box;
	/* 0xa0 */ FLY_DATA *dat;
	/* 0xa4 */ void *ep;
	/* 0xb0 */ sceVu0FVECTOR adjp;
	/* 0xc0 */ sceVu0FVECTOR adjmv;
} FLY_WRK;

typedef struct { // 0xc
	/* 0x0 */ float rot;
	/* 0x4 */ u_short pos_x;
	/* 0x6 */ u_short pos_z;
	/* 0x8 */ u_char stts;
} DOOR_STTS_MAP;

typedef struct { // 0x2
	/* 0x0 */ u_char eventflg;
	/* 0x1 */ u_char data;
} FURN_DAT_SAVE;

typedef enum {
	ST_WANSO_VACANT = 0,
	ST_WANSO_INIT = 1,
	ST_WANSO_WANDER = 2,
	ST_WANSO_SET_MOVE = 3,
	ST_WANSO_MOVE = 4,
	ST_WANSO_SPEED_DOWN = 5,
	ST_WANSO_SPLINE = 6,
	ST_WANSO_FLOAT = 10,
	ST_WANSO_WAIT = 11,
	ST_WANSO_TELLIN = 12,
	ST_WANSO_ADPCM_OUT = 13,
	ST_WANSO_TELL = 14,
	ST_WANSO_EXTINCT = 20,
	SOUL_LIGHT_WAIT = 21,
	SOUL_LIGHT_BIGGER = 22,
	SOUL_LIGHT_LESSER = 23,
	SOUL_LIGHT_END = 24,
	SOUL_LIGHT_VANISH_IN = 30,
	SOUL_LIGHT_VANISH = 31,
	SOUL_LIGHT_APPEAR_IN = 32,
	SOUL_LIGHT_APPEAR = 33
} EN_ST_WANDER_SOUL;

typedef struct { // 0xd0
	/* 0x00 */ EN_ST_WANDER_SOUL state;
	/* 0x04 */ EN_ST_WANDER_SOUL vanish;
	/* 0x08 */ u_char id;
	/* 0x09 */ u_char disp_flg;
	/* 0x0a */ u_char turn;
	/* 0x0b */ u_char move_flg;
	/* 0x0c */ u_short count;
	/* 0x10 */ float spl_speed;
	/* 0x20 */ sceVu0FMATRIX sp_mat;
	/* 0x60 */ sceVu0FVECTOR ori_pos;
	/* 0x70 */ sceVu0FVECTOR disp_pos;
	/* 0x80 */ sceVu0FVECTOR speedv;
	/* 0x90 */ sceVu0FVECTOR accelv;
	/* 0xa0 */ u_char type;
	/* 0xa1 */ u_char message_id;
	/* 0xa2 */ u_short face_id;
	/* 0xa4 */ u_short adpcm_id;
	/* 0xa6 */ u_char spl_flg;
	/* 0xa8 */ sceVu0FVECTOR *destination;
	/* 0xac */ u_char room_no;
	/* 0xb0 */ float dist;
	/* 0xb4 */ void *eff_buff;
	/* 0xb8 */ u_int wanso_wait_time;
	/* 0xbc */ float srate;
	/* 0xc0 */ float arate;
	/* 0xc4 */ float lightpower;
} WANDER_SOUL_WRK;

typedef struct { // 0x34
	/* 0x00 */ u_int HeaderSections;
	/* 0x04 */ u_int UniqHeaderSize;
	/* 0x08 */ sceVu0FVECTOR *pUniqVertex;
	/* 0x0c */ sceVu0FVECTOR *pUniqNormal;
	/* 0x10 */ u_int *pUniqList;
	/* 0x14 */ u_int CommonHeaderSize;
	/* 0x18 */ sceVu0FVECTOR *pCommonVertex;
	/* 0x1c */ sceVu0FVECTOR *pCommonNormal;
	/* 0x20 */ u_int *pCommonList;
	/* 0x24 */ u_int WeightedHeaderSize;
	/* 0x28 */ sceVu0FVECTOR *pWeightedVertex;
	/* 0x2c */ sceVu0FVECTOR *pWeightedNormal;
	/* 0x30 */ u_int *pWeightedList;
} PHEAD;

typedef struct { // 0x8
	/* 0x0 */ short int cn0;
	/* 0x2 */ short int cn1;
	/* 0x4 */ u_short vIdx;
	/* 0x6 */ u_short vOff;
} ONELIST;

typedef struct { // 0xc
	/* 0x0 */ int list_num;
	/* 0x4 */ ONELIST lists[1];
} VERTEXLIST;

typedef struct { // 0xb0
	/* 0x00 */ u_int primtype;
	/* 0x04 */ char name[12];
	/* 0x10 */ sceVu0FVECTOR Ambient;
	/* 0x20 */ sceVu0FVECTOR Diffuse;
	/* 0x30 */ sceVu0FVECTOR Specular;
	/* 0x40 */ sceVu0FVECTOR Emission;
	/* 0x50 */ u_int vifcode[4];
	/* 0x60 */ u_long128 giftag;
	/* 0x70 */ u_int Tex0[4];
	/* 0x80 */ u_int Tex1[4];
	/* 0x90 */ u_int Miptbp1[4];
	/* 0xa0 */ u_int Miptbp2[4];
} SgMaterial;

typedef struct { // 0x90
	/* 0x00 */ u_int primtype;
	/* 0x04 */ char name[12];
	/* 0x10 */ sceVu0FVECTOR Ambient;
	/* 0x20 */ sceVu0FVECTOR Diffuse;
	/* 0x30 */ sceVu0FVECTOR Specular;
	/* 0x40 */ sceVu0FVECTOR Emission;
	/* 0x50 */ int cache_on;
	/* 0x54 */ u_int tagd_addr;
	/* 0x58 */ int qwc;
	/* 0x5c */ MatCache Parallel;
	/* 0x6c */ MatCache Point;
	/* 0x7c */ MatCache Spot;
} SgMaterialC;

typedef struct { // 0x1c
	/* 0x00 */ u_int VersionID;
	/* 0x04 */ u_char MAPFLAG;
	/* 0x05 */ u_char kind;
	/* 0x06 */ u_short materials;
	/* 0x08 */ SgCOORDUNIT *coordp;
	/* 0x0c */ SgMaterial *matp;
	/* 0x10 */ u_int *phead;
	/* 0x14 */ u_int blocks;
	/* 0x18 */ u_int **primitives;
} HeaderSection;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR Ambient;
	/* 0x10 */ sceVu0FVECTOR Diffuse;
	/* 0x20 */ sceVu0FVECTOR Specular;
	/* 0x30 */ sceVu0FVECTOR Emission;
} Material;

typedef struct { // 0x50
	/* 0x00 */ sceVu0FVECTOR Ambient;
	/* 0x10 */ sceVu0FVECTOR Diffuse;
	/* 0x20 */ sceVu0FVECTOR Specular;
	/* 0x30 */ sceVu0FVECTOR Emission;
	/* 0x40 */ long int TEX0;
	/* 0x48 */ long int CLAMP;
} TMaterial;

typedef struct { // 0x0
} MTriangle;

typedef struct { // 0x50
	/* 0x00 */ Material material;
	/* 0x40 */ u_int npoints;
	/* 0x44 */ u_int pad[3];
} MTriangle_Top;

typedef struct { // 0x10
	/* 0x0 */ sceVu0FVECTOR color;
} GMTriangle;

typedef struct { // 0x60
	/* 0x00 */ Material material;
	/* 0x40 */ int npoints;
	/* 0x44 */ int pad[3];
	/* 0x50 */ GMTriangle *mt;
} GMTriangle_Top;

typedef struct { // 0x10
	/* 0x0 */ float S;
	/* 0x4 */ float T;
	/* 0x8 */ float pad[2];
} TMTriangle;

typedef struct { // 0x70
	/* 0x00 */ TMaterial material;
	/* 0x50 */ int npoints;
	/* 0x54 */ int pad[3];
	/* 0x60 */ TMTriangle *mt;
} TMTriangle_Top;

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR color;
	/* 0x10 */ float S;
	/* 0x14 */ float T;
	/* 0x18 */ float pad[2];
} GTMTriangle;

typedef struct { // 0x70
	/* 0x00 */ TMaterial material;
	/* 0x50 */ int npoints;
	/* 0x54 */ int pad[3];
	/* 0x60 */ GTMTriangle *mt;
} GTMTriangle_Top;

typedef struct { // 0x6
	/* 0x0 */ short int vnum;
	/* 0x2 */ short int nnum;
	/* 0x4 */ char vif_size;
	/* 0x5 */ char vtype;
} VUVN_PRIM;

enum {
	ATR_LOOP_ACT = 1,
	ATR_REMAIN = 2,
	ATR_DUMMY = 4,
	ATR_NOREMAIN = 0,
	ATR_ONE_ACT = 0,
	CHK_DIST_NEAR = 3,
	CHK_DIST_FAR = 4,
	CHK_STATUS = 5,
	CHK_EVENT = 6,
	CHK_DIRECT = 7,
	CHK_NODIRECT = 9,
	CHK_FINDER = 8,
	CHK_NOFINDER = 10,
	CHK_NOEVENT = 11,
	CHK_SPEED_LESS = 12,
	CHK_SPEED_MORE = 13,
	CHK_COUNT_LESS = 14,
	CHK_COUNT_MORE = 15,
	CHK_SQUARE_AREA = 16,
	CHK_CIRCLE_AREA = 17,
	CHK_PERCENT = 18,
	CHK_ACT_FINISH = 19,
	CHK_IN_ROOM = 20,
	CHK_OUT_OF_ROOM = 21,
	CHK_NOSQU_AREA = 22,
	CHK_NOCIR_AREA = 23,
	CHK_DOOR_OPEN = 24,
	CHK_NO_DOOR_OPEN = 25,
	CHK_BATTLE = 26,
	CHK_NO_BATTLE = 27,
	CHK_FLOOR = 28,
	CHK_NO_FLOOR = 29,
	CHK_CLEAR_COUNT = 30,
	ACT_END = 0,
	ACT_SE_PLAY = 1,
	ACT_SE_PLAY_FIO = 2,
	ACT_MIME_REQ = 3,
	ACT_ACCSRY_REQ = 4,
	ACT_TEX_ANM_REQ = 5,
	ACT_POINT_LIGHT = 6,
	ACT_ROTATE = 7,
	ACT_ROTATE_G = 8,
	ACT_TREMBLE = 9,
	ACT_PARALLEL_LIGHT = 10,
	ACT_MIKU_ACT = 11,
	ACT_CHANGE_DATA = 12,
	ACT_VIBE = 13,
	ACT_SHOUKI = 14,
	ACT_ROPE_FALL = 15,
	ACT_ROPE_AWAY = 17,
	ACT_THUNDER = 18,
	ACT_DISP_GHOST = 19,
	ACT_LAMP_TREMBLE = 20,
	ACT_EYE_LIGHT = 21,
	ACT_ADPCM = 22,
	ACT_FALL_OBJ = 23,
	ACT_QUAKE = 24,
	ACT_CANDLE_FIRE = 16,
	ACT_CANDLE_FRAME = 25,
	ACT_SUNSHINE = 26,
	ACT_BLOOD = 27,
	ACT_BUTSUMA_FIRE = 28,
	ACT_CMOVE = 29,
	ACT_EVE_SE = 30,
	ACT_CANDLE_NO = 31,
	ACT_SHOUKI2 = 32,
	ACT_ADPCM_ONCE = 33,
	FSPE_OBJ_PLAYER = 32768,
	FSPE_OBJ_JIBAKU = 16384,
	FSPE_OBJ_FUYU = 8192,
	FSPE_OBJ_JIDOU = 4096,
	FSPE_OBJ_GHOST = 28672,
	FSPE_OBJ_ALL = 65535,
	FSPE_NORMAL = 0,
	FSPE_SAME = 1,
	FSPE_TRUE = 2,
	FSPE_FALSE = 3,
	FSPE_TA_STOP = 0,
	FSPE_TA_LOOP = 1,
	FSPE_TA_WAVE = 2,
	FSPE_TA_FORW = 1,
	FSPE_TA_BACK = 2,
	F_MIKU_LOOK_AT = 0,
	F_MIKU_SURPRISE = 1,
	F_MIKU_SOWASOWA = 2,
	F_MIKU_NANIKORE = 3,
	F_MIKU_HIMA = 4,
	F_MIKU_MIMAWASHI = 5,
	F_MIKU_MIAGE = 6,
	ROPE_STOP = 0,
	ROPE_WIND = 1,
	ROPE_ENE = 2,
	ROPE_FALL = 4,
	ROPE_VIB = 3,
	F_SHOUJI_FACE = 0,
	FSPE_FLG_EVENT = 1,
	FSPE_FLG_FINISH = 2,
	FSPE_FLG_PERCENT = 4,
	FSPE_AE_TAPE = 0,
	FSPE_AE_KOTO = 1,
	FSPE_AE_OKYO = 3,
	FSPE_AE_OKYO_L = 4,
	FSPE_AE_DOKO = 5,
	FSPE_AE_SAMUI = 6,
	FSPE_AE_MITA = 7,
	FSPE_AE_KAESHITE = 8,
	FSPE_AE_KOKONI = 9,
	FSPE_AE_NE = 10,
	FSPE_AE_DOUSHITE = 11,
	FSPE_AE_NAWAGA = 12,
	FSPE_AE_SUSURI1 = 13,
	FSPE_AE_SUSURI2 = 14,
	FSPE_AE_SUSURI3 = 15,
	FSPE_AE_SUSURI4 = 16,
	FSPE_AE_CHIKUON = 25,
	FSPE_SURR_SE = 65535
};

typedef enum {
	ST_FACT_VACANT = 0,
	ST_FACT_WAITWAIT = 1,
	ST_FACT_WAIT = 2,
	ST_FACT_EXEC = 3,
	ST_FACT_END = 4
} ST_FACT;

typedef enum {
	ST_TREMBLE_VACANT = 0,
	ST_TREMBLE_NOR = 1,
	ST_TREMBLE_REV = 2
} ST_TREMBLE;

typedef struct { // 0x80
	/* 0x00 */ sceVu0FVECTOR *pos;
	/* 0x04 */ sceVu0FVECTOR *rot;
	/* 0x10 */ sceVu0FVECTOR ori_pos;
	/* 0x20 */ sceVu0FVECTOR ori_rot;
	/* 0x30 */ ST_TREMBLE state;
	/* 0x34 */ u_char time;
	/* 0x38 */ float speed;
	/* 0x3c */ float nowdist;
	/* 0x40 */ sceVu0FMATRIX mat;
} TREMBLE_H_WRK;

typedef struct { // 0xc
	/* 0x0 */ signed char nochkflg;
	/* 0x4 */ void *p;
	/* 0x8 */ u_char chknum[4];
} SPE_CHK_COND;

typedef struct { // 0x3
	/* 0x0 */ u_char regmode;
	/* 0x1 */ u_char looptype;
	/* 0x2 */ char nowstep;
} FSPE_TEXTURE_ANM;

typedef struct { // 0xb0
	/* 0x00 */ u_char attribute;
	/* 0x04 */ void *wp;
	/* 0x08 */ void *ap;
	/* 0x0c */ SPE_CHK_COND chk_occ;
	/* 0x18 */ SPE_CHK_COND chk_end;
	/* 0x24 */ ST_FACT state;
	/* 0x28 */ u_char flg;
	/* 0x29 */ u_char eventflg;
	/* 0x2a */ signed char trembleflg;
	/* 0x2b */ u_char prejudge;
	/* 0x2c */ signed char lw_id;
	/* 0x30 */ void *buff;
	/* 0x34 */ u_short furn_id;
	/* 0x36 */ u_short fact_no;
	/* 0x38 */ int fw_id;
	/* 0x3c */ u_char room_no;
	/* 0x40 */ sceVu0FVECTOR *vecp_temp;
	/* 0x50 */ sceVu0FVECTOR util_v;
	/* 0x60 */ sceVu0FVECTOR pos;
	/* 0x70 */ sceVu0FVECTOR rot_speed;
	/* 0x80 */ sceVu0FVECTOR rot_speed2;
	/* 0x90 */ u_short count;
	/* 0x94 */ int adj_valg_num;
	/* 0x98 */ u_short se_no;
	/* 0x9c */ TextureAnimation *pta;
	/* 0xa0 */ FSPE_TEXTURE_ANM ta;
} FURN_ACT_WRK;

typedef unsigned char TIM2_UCHAR8;
// warning: multiple differing types with the same name (type name not equal)
typedef u_int TIM2_UINT32;
typedef short unsigned int TIM2_UINT16;
typedef long unsigned int TIM2_UINT64;

enum TIM2_gattr_type {
	TIM2_NONE = 0,
	TIM2_RGB16 = 1,
	TIM2_RGB24 = 2,
	TIM2_RGB32 = 3,
	TIM2_IDTEX4 = 4,
	TIM2_IDTEX8 = 5
};

typedef struct { // 0x10
	/* 0x0 */ TIM2_UCHAR8 FileId[4];
	/* 0x4 */ TIM2_UCHAR8 FormatVersion;
	/* 0x5 */ TIM2_UCHAR8 FormatId;
	/* 0x6 */ TIM2_UINT16 Pictures;
	/* 0x8 */ TIM2_UCHAR8 pad[8];
} TIM2_FILEHEADER;

typedef struct { // 0x30
	/* 0x00 */ TIM2_UINT32 TotalSize;
	/* 0x04 */ TIM2_UINT32 ClutSize;
	/* 0x08 */ TIM2_UINT32 ImageSize;
	/* 0x0c */ TIM2_UINT16 HeaderSize;
	/* 0x0e */ TIM2_UINT16 ClutColors;
	/* 0x10 */ TIM2_UCHAR8 PictFormat;
	/* 0x11 */ TIM2_UCHAR8 MipMapTextures;
	/* 0x12 */ TIM2_UCHAR8 ClutType;
	/* 0x13 */ TIM2_UCHAR8 ImageType;
	/* 0x14 */ TIM2_UINT16 ImageWidth;
	/* 0x16 */ TIM2_UINT16 ImageHeight;
	/* 0x18 */ TIM2_UINT64 GsTex0;
	/* 0x20 */ TIM2_UINT64 GsTex1;
	/* 0x28 */ TIM2_UINT32 GsTexaFbaPabe;
	/* 0x2c */ TIM2_UINT32 GsTexClut;
} TIM2_PICTUREHEADER;

typedef struct { // 0x10
	/* 0x0 */ TIM2_UINT64 GsMiptbp1;
	/* 0x8 */ TIM2_UINT64 GsMiptbp2;
	/* 0x10 */ TIM2_UINT32 MMImageSize[0];
} TIM2_MIPMAPHEADER;

typedef struct { // 0x10
	/* 0x0 */ TIM2_UCHAR8 ExHeaderId[4];
	/* 0x4 */ TIM2_UINT32 UserSpaceSize;
	/* 0x8 */ TIM2_UINT32 UserDataSize;
	/* 0xc */ TIM2_UINT32 Reserved;
} TIM2_EXHEADER;

enum {
	LOAD_NEW = 0,
	LOAD_ADD = 1
};

enum {
	TEX_NO_MIRROR = 0,
	TEX_X_MIRROR = 1,
	TEX_Y_MIRROR = 2,
	TEX_XY_MIRROR = 3
};

typedef struct { // 0x60
	/* 0x00 */ sceGsTex0 g_GsTex0;
	/* 0x08 */ u_int g_nTexSizeW;
	/* 0x0c */ u_int g_nTexSizeH;
	/* 0x10 */ u_char g_bMipmapLv;
	/* 0x18 */ long unsigned int g_GsMiptbp1;
	/* 0x20 */ long unsigned int g_GsMiptbp2;
	/* 0x28 */ float pos_x;
	/* 0x2c */ float pos_y;
	/* 0x30 */ int pos_z;
	/* 0x34 */ float size_w;
	/* 0x38 */ float size_h;
	/* 0x3c */ float scale_w;
	/* 0x40 */ float scale_h;
	/* 0x44 */ int clamp_u;
	/* 0x48 */ int clamp_v;
	/* 0x4c */ u_int rot_center;
	/* 0x50 */ float angle;
	/* 0x54 */ u_char r;
	/* 0x55 */ u_char g;
	/* 0x56 */ u_char b;
	/* 0x57 */ u_char alpha;
	/* 0x58 */ u_int mask;
} SPRITE_DATA;

typedef struct { // 0x30
	/* 0x00 */ u_long tex1;
	/* 0x08 */ u_long alpha;
	/* 0x10 */ u_long zbuf;
	/* 0x18 */ u_long test;
	/* 0x20 */ u_long clamp;
	/* 0x28 */ u_long prim;
} DRAW_ENV;

typedef union { // 0x4
	/* 0x0 */ int ui32;
	/* 0x0 */ float fl32;
} U32DATA;

typedef struct { // 0x50
	/* 0x00 */ Q_WORDDATA dat;
	/* 0x10 */ void *pnt[6];
	/* 0x28 */ float fw[3];
	/* 0x34 */ u_int z;
	/* 0x38 */ u_int flow;
	/* 0x3c */ u_int cnt;
	/* 0x40 */ u_int in;
	/* 0x44 */ u_int keep;
	/* 0x48 */ u_int out;
	/* 0x4c */ u_int max;
} EFFECT_CONT;

typedef struct { // 0x14
	/* 0x00 */ u_char sw;
	/* 0x01 */ u_char alp;
	/* 0x04 */ int scl;
	/* 0x08 */ int rot;
	/* 0x0c */ float x;
	/* 0x10 */ float y;
} BLUR_STR;

typedef struct { // 0x4
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char col;
	/* 0x3 */ u_char alp;
} CONTRAST_STR;

typedef struct { // 0x2
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char alp;
} FFRAME_STR;

typedef struct { // 0x10
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x4 */ float spd;
	/* 0x8 */ float alp;
	/* 0xc */ u_char amax;
	/* 0xd */ u_char cmax;
} DITHER_STR;

typedef struct { // 0x3
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char rate;
} DEFORM_STR;

typedef struct { // 0x4
	/* 0x0 */ u_char sw;
	/* 0x1 */ u_char col;
	/* 0x2 */ u_char alp;
	/* 0x3 */ u_char alp2;
} NEGA_STR;

typedef struct { // 0x1
	/* 0x0 */ u_char sw;
} MONO_STR;

typedef struct { // 0x34
	/* 0x00 */ BLUR_STR bl;
	/* 0x14 */ CONTRAST_STR cn;
	/* 0x18 */ FFRAME_STR ff;
	/* 0x1c */ DITHER_STR dt;
	/* 0x2c */ DEFORM_STR df;
	/* 0x2f */ NEGA_STR ng;
	/* 0x33 */ MONO_STR mn;
} SBTSET;

typedef double SIMEQUAT[2][3];

enum {
	EF_SC_FADE_END = 0,
	EF_SC_FADE_IN = 1,
	EF_SC_FADE_OUT = 2
};

typedef struct { // 0xc
	/* 0x0 */ float scl;
	/* 0x4 */ short int rot;
	/* 0x6 */ short int bx;
	/* 0x8 */ short int by;
	/* 0xa */ u_char flip;
	/* 0xb */ u_char alp;
} ONE_HAND;

typedef struct { // 0xd0
	/* 0x00 */ ONE_HAND oh[16];
	/* 0xc0 */ u_long count;
	/* 0xc8 */ int wait;
	/* 0xcc */ u_int top;
} HAND_WRK;

typedef struct { // 0x3c
	/* 0x00 */ int on[4];
	/* 0x10 */ int flg[4];
	/* 0x20 */ u_int flow;
	/* 0x24 */ u_int cnt;
	/* 0x28 */ u_int in;
	/* 0x2c */ u_int keep;
	/* 0x30 */ u_int out;
	/* 0x34 */ u_int max;
	/* 0x38 */ float *vol;
} EFF_PARTSBLUR;

typedef struct { // 0x28
	/* 0x00 */ float r;
	/* 0x04 */ float add;
	/* 0x08 */ float h;
	/* 0x0c */ float x;
	/* 0x10 */ float y;
	/* 0x14 */ float z;
	/* 0x18 */ float ox;
	/* 0x1c */ float oy;
	/* 0x20 */ float oz;
	/* 0x24 */ float lng;
} EFFPOS;

typedef struct { // 0x2d30
	/* 0x0000 */ EFFPOS ep[17][17];
	/* 0x2d28 */ short int use;
	/* 0x2d2a */ short int pass;
	/* 0x2d2c */ float r;
} EFFINFO;

typedef struct { // 0x2d30
	/* 0x0000 */ EFFPOS ep[289];
	/* 0x2d28 */ short int use;
	/* 0x2d2a */ short int pass;
	/* 0x2d2c */ float r;
} EFFINFO2;

enum {
	HH_RET = 0,
	HH_S1 = 1,
	HH_S2B = 2,
	HH_S3 = 3,
	HH_P1 = 4,
	HH_P1B = 5,
	HH_P2 = 6,
	HH_P2_TZ1 = 7,
	HH_ITEM = 8,
	HH_AFIRE = 9,
	HH_ENEEF = 10,
	HH_ENEEF2 = 11,
	HH_TORCH = 12,
	HH_SMOKE = 13,
	HH_S2 = 14,
	HH_S1B = 15
};

enum {
	MAX_PARTICLES = 200
};

enum {
	P_LIFETIME = 150
};

typedef struct { // 0x1e0
	/* 0x000 */ sceVu0FVECTOR opos[24];
	/* 0x180 */ int tbl[24];
} FACESPIRIT_ST;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR rot;
	/* 0x20 */ float scl;
	/* 0x24 */ float mscl;
	/* 0x28 */ float spd;
	/* 0x2c */ u_char r;
	/* 0x2d */ u_char g;
	/* 0x2e */ u_char b;
	/* 0x2f */ u_char alp;
} RIPPLE_SUB;

typedef struct { // 0x50
	/* 0x00 */ int fl;
	/* 0x04 */ u_char r;
	/* 0x05 */ u_char g;
	/* 0x06 */ u_char b;
	/* 0x07 */ u_char a;
	/* 0x08 */ float mang;
	/* 0x0c */ float cnt;
	/* 0x10 */ sceVu0FVECTOR pos;
	/* 0x20 */ sceVu0FVECTOR opos;
	/* 0x30 */ sceVu0FVECTOR vel;
	/* 0x40 */ sceVu0FVECTOR ang;
} EFF_LEAF_ONE;

typedef struct { // 0x520
	/* 0x000 */ int flag;
	/* 0x004 */ int type;
	/* 0x010 */ sceVu0FVECTOR bpos;
	/* 0x020 */ EFF_LEAF_ONE lo[16];
} EFF_LEAF;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR position;
	/* 0x10 */ sceVu0FVECTOR color;
	/* 0x20 */ sceVu0FVECTOR velocity;
	/* 0x30 */ float alp_step;
	/* 0x34 */ int lifetime;
	/* 0x38 */ int dummy[2];
} PARTICLE;

typedef struct { // 0x3210
	/* 0x0000 */ PARTICLE particles[200];
	/* 0x3200 */ int head;
	/* 0x3204 */ int cnt;
	/* 0x3208 */ short int flag;
	/* 0x320a */ short int max;
	/* 0x320c */ short int disp;
	/* 0x320e */ short int blife;
} HEAT_HAZE;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR npos;
	/* 0x10 */ sceVu0FVECTOR *oposp;
	/* 0x14 */ sceVu0FMATRIX *wmtxp;
	/* 0x18 */ int time;
	/* 0x1c */ short int top;
	/* 0x1e */ short int num;
	/* 0x20 */ float xp;
	/* 0x24 */ float xm;
	/* 0x28 */ float rot;
	/* 0x2c */ float rotp;
	/* 0x30 */ float x;
	/* 0x34 */ float y;
	/* 0x38 */ float n;
	/* 0x3c */ float cnt;
} NEW_PERTICLE;

typedef struct { // 0x3c0
	/* 0x000 */ sceVu0FMATRIX wmtx[12];
	/* 0x300 */ sceVu0FVECTOR opos[12];
} TAIL_DMG2_DAT;

typedef struct { // 0x1400
	/* 0x0000 */ sceVu0FMATRIX wmtx[64];
	/* 0x1000 */ sceVu0FVECTOR opos[64];
} TAIL_DEAD_DAT;

typedef struct { // 0x20
	/* 0x00 */ sceVu0IVECTOR iv;
	/* 0x10 */ u_int tx;
	/* 0x14 */ u_int ty;
	/* 0x18 */ u_int fg;
	/* 0x1c */ u_short alp;
	/* 0x1e */ u_short cl;
} TEX_WORK;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR npos;
	/* 0x10 */ sceVu0FVECTOR bpos;
	/* 0x20 */ sceVu0FVECTOR vel;
	/* 0x30 */ int time;
	/* 0x34 */ int life;
	/* 0x38 */ int alp;
	/* 0x3c */ int dummy;
} FIREFLY;

typedef struct { // 0x8
	/* 0x0 */ void *adr;
	/* 0x4 */ short int furn_id;
	/* 0x6 */ u_short dummy;
} EFFRDR_RSV;

typedef struct { // 0x60
	/* 0x00 */ sceVu0FVECTOR ligdiff;
	/* 0x10 */ sceVu0FVECTOR ligpos;
	/* 0x20 */ sceVu0FVECTOR fpos;
	/* 0x30 */ void *ebuf;
	/* 0x34 */ float ligpow;
	/* 0x38 */ float wavew;
	/* 0x3c */ float rate;
	/* 0x40 */ float szw;
	/* 0x44 */ float szh;
	/* 0x48 */ float sw;
	/* 0x4c */ float sh;
	/* 0x50 */ u_short furn_id;
	/* 0x52 */ u_char lignum;
	/* 0x53 */ u_char usefl;
	/* 0x54 */ u_char sta;
} BURN_FIRE;

typedef struct { // 0x50
	/* 0x00 */ sceVu0FVECTOR bpos;
	/* 0x10 */ sceVu0FVECTOR brot;
	/* 0x20 */ sceVu0FVECTOR lpos;
	/* 0x30 */ float ww;
	/* 0x34 */ float hh;
	/* 0x38 */ int power;
	/* 0x3c */ u_char r;
	/* 0x3d */ u_char g;
	/* 0x3e */ u_char b;
	/* 0x3f */ u_char a;
	/* 0x40 */ void *adr;
} SUNSHINE;

typedef struct { // 0x90
	/* 0x00 */ sceVu0FVECTOR wbpos[2];
	/* 0x20 */ float scw[4];
	/* 0x30 */ float sch[4];
	/* 0x40 */ float rot_z[4];
	/* 0x50 */ float alp[4];
	/* 0x60 */ int cnt[4];
	/* 0x70 */ int flow[4];
	/* 0x80 */ int enedmg_no;
	/* 0x84 */ int enedmg1_flg;
	/* 0x88 */ int enedmg_chance;
	/* 0x8c */ int dummy;
} ENDMG1;

typedef struct { // 0xc
	/* 0x0 */ int enedmg_no;
	/* 0x4 */ int enedmg2_flg;
	/* 0x8 */ int enedmg_chance;
} ENDMG2;

enum {
	MES_BANK0 = 240,
	MES_BANK1 = 241,
	MES_BANK2 = 242,
	MES_BANK3 = 243,
	MES_U_LINE = 246,
	MES_W_WIDE = 247,
	MES_H_WIDE = 248,
	MES_SEL = 249,
	MES_WAIT = 250,
	MES_EX_NUM = 251,
	MES_EX_STR = 252,
	MES_COL = 253,
	MES_RET = 254,
	MES_END = 255
};

enum {
	C_WHITE = 0,
	C_BLACK = 1,
	C_RED = 2,
	C_GREEN = 3,
	C_BLUE = 4,
	C_YELLOW = 5,
	C_PERPLE = 6
};

enum {
	F_2424 = 0,
	F_2424_S = 1
};

enum {
	C_WAIT = 16,
	C_SEL = 32,
	C_END = 64,
	C_DIC = 128
};

enum {
	M_SQUARE = 0,
	M_TRIANGLE = 1,
	M_CIRCLE = 2,
	M_CROSS = 3
};

typedef struct { // 0x2
	/* 0x0 */ u_char sta;
	/* 0x1 */ u_char cnt;
} PHOTO_EXPAND;

enum {
	EXPAND_WORK = 0,
	EXPAND_END = 1
};

enum {
	T_BUTTON = 0,
	T_BUTTON_MO = 1,
	T_FLARE_EFFECT_1 = 2,
	T_FLARE_EFFECT_1_MO = 3,
	T_FLARE_EFFECT_2 = 4,
	T_FLARE_EFFECT_2_MO = 5,
	T_FOG_01_3 = 6,
	T_FOG_01_3_MO = 7,
	T_FOG_01_4 = 8,
	T_FOG_01_4_MO = 9,
	T_FOG_02_2L = 10,
	T_FOG_02_2L_MO = 11,
	T_FRAME_EFFECT = 12,
	T_FRAME_EFFECT_MO = 13,
	T_GRACIRCLE = 14,
	T_GRACIRCLE_MO = 15,
	T_ITEM_EFFECT1 = 16,
	T_ITEM_EFFECT1_MO = 17,
	T_ITEM_EFFECT3 = 18,
	T_ITEM_EFFECT3_MO = 19,
	T_KAREHA = 20,
	T_KAREHA_MO = 21,
	T_KASA_EFFECT = 22,
	T_KASA_EFFECT_MO = 23,
	T_KASA_EFFECT2 = 24,
	T_KASA_EFFECT2_MO = 25,
	T_MES_WIN = 26,
	T_MES_WIN_MO = 27,
	T_PZL_OFD = 28,
	T_PZL_OFD_MO = 29,
	T_RAYHAZE = 30,
	T_RAYHAZE_MO = 31,
	T_ROUSOKU_1 = 32,
	T_ROUSOKU_1_MO = 33,
	T_ROUSOKU_2 = 34,
	T_ROUSOKU_2_MO = 35,
	T_ROUSOKU_3 = 36,
	T_ROUSOKU_3_MO = 37,
	T_ROUSOKU_4 = 38,
	T_ROUSOKU_4_MO = 39,
	T_ROUSOKU_5 = 40,
	T_ROUSOKU_5_MO = 41,
	T_ROUSOKU_6 = 42,
	T_ROUSOKU_6_MO = 43,
	T_ROUSOKU_7 = 44,
	T_ROUSOKU_7_MO = 45,
	T_RYUSI_6 = 46,
	T_RYUSI_6_MO = 47,
	T_SAKURA = 48,
	T_SAKURA_MO = 49,
	T_SORA = 50,
	T_SORA_MO = 51,
	T_SUITEKI = 52,
	T_SUITEKI_MO = 53,
	T_WATER01 = 54,
	T_WATER01_MO = 55,
	T_YES_NO = 56,
	T_YES_NO_MO = 57,
	T_YUKI = 58,
	T_YUKI_MO = 59
};

enum {
	T_CHAR00 = 0,
	T_CHAR00_MO = 1,
	T_CHAR01 = 2,
	T_CHAR01_MO = 3,
	T_CHAR02 = 4,
	T_CHAR02_MO = 5,
	T_CHAR03 = 6,
	T_CHAR03_MO = 7,
	T_CHAR04 = 8,
	T_CHAR04_MO = 9,
	T_FUREA00 = 10,
	T_FUREA00_MO = 11,
	T_MARU = 12,
	T_MARU_MO = 13
};

enum {
	T_FONT_14_12 = 0,
	T_FONT_24_24B0 = 1,
	T_FONT_24_24B1 = 2,
	T_FONT_24_24B2 = 3,
	T_FONT_24_24B3 = 4,
	T_FONT_24_24B4 = 5
};

typedef struct { // 0x8
	/* 0x0 */ u_char dmg;
	/* 0x1 */ u_char hint;
	/* 0x2 */ u_char pazz;
	/* 0x3 */ u_char eneface;
	/* 0x4 */ u_char enedmg[4];
} G2D_LOAD_FLG;

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct { // 0x3c4
	/* 0x000 */ unsigned char Head[4];
	/* 0x004 */ short unsigned int Reserv1;
	/* 0x006 */ short unsigned int OffsLF;
	/* 0x008 */ unsigned int Reserv2;
	/* 0x00c */ unsigned int TransRate;
	/* 0x010 */ _iconVu0IVECTOR BgColor[4];
	/* 0x050 */ _iconVu0FVECTOR LightDir[3];
	/* 0x080 */ _iconVu0FVECTOR LightColor[3];
	/* 0x0b0 */ _iconVu0FVECTOR Ambient;
	/* 0x0c0 */ unsigned char TitleName[68];
	/* 0x104 */ unsigned char FnameView[64];
	/* 0x144 */ unsigned char FnameCopy[64];
	/* 0x184 */ unsigned char FnameDel[64];
	/* 0x1c4 */ unsigned char Reserve3[512];
} sceMcIconSys;

typedef struct { // 0x40
	/* 0x00 */ struct { // 0x8
		/* 0x00 */ unsigned char Resv2;
		/* 0x01 */ unsigned char Sec;
		/* 0x02 */ unsigned char Min;
		/* 0x03 */ unsigned char Hour;
		/* 0x04 */ unsigned char Day;
		/* 0x05 */ unsigned char Month;
		/* 0x06 */ short unsigned int Year;
	} _Create;
	/* 0x08 */ struct { // 0x8
		/* 0x08 */ unsigned char Resv2;
		/* 0x09 */ unsigned char Sec;
		/* 0x0a */ unsigned char Min;
		/* 0x0b */ unsigned char Hour;
		/* 0x0c */ unsigned char Day;
		/* 0x0d */ unsigned char Month;
		/* 0x0e */ short unsigned int Year;
	} _Modify;
	/* 0x10 */ unsigned int FileSizeByte;
	/* 0x14 */ short unsigned int AttrFile;
	/* 0x16 */ short unsigned int Reserve1;
	/* 0x18 */ unsigned int Reserve2;
	/* 0x1c */ unsigned int PdaAplNo;
	/* 0x20 */ unsigned char EntryName[32];
} sceMcTblGetDir;

enum {
	T_EFE00 = 0,
	T_FIRE00 = 1,
	T_FIRE01 = 2,
	T_FIRE02 = 3,
	T_FIRE03 = 4,
	T_FIRE04 = 5
};

enum {
	MC_MODE_GAMESAVE = 0,
	MC_MODE_GAMELOAD = 1,
	MC_MODE_ALBUMSAVE = 2,
	MC_MODE_ALBUMLOAD_GAME1 = 3,
	MC_MODE_ALBUMLOAD_GAME2 = 4,
	MC_MODE_ALBUMLOAD_TITLE1 = 5,
	MC_MODE_ALBUMLOAD_TITLE2 = 6,
	MC_MODE_STARTCHECK = 7,
	MC_MODE_NUM = 8
};

enum {
	MC_FUNC_SLOT_CHECK = 0,
	MC_FUNC_FILE_CHECK = 1,
	MC_FUNC_OPEN = 2,
	MC_FUNC_LOAD = 3,
	MC_FUNC_SAVE = 4,
	MC_FUNC_MAKE_DIR = 5,
	MC_FUNC_FORMAT = 6,
	MC_FUNC_EXIST_CHECK = 7,
	MC_FUNC_CLOSE = 8,
	MC_FUNC_DELETE = 9,
	MC_FUNC_NUM = 10
};

enum {
	MC_INIT = 0,
	MC_CHECK = 1,
	MC_SEL_NEW_OR_LOAD = 2,
	MC_CAP_ALBUM_LOAD = 3,
	MC_SEL_SLOT = 4,
	MC_SEL_START = 5,
	MC_SEL_FILE = 6,
	MC_SEL_LOAD = 7,
	MC_SEL_SAVE = 8,
	MC_SEL_MAKE_DIR = 9,
	MC_SEL_REMAKE_DIR = 10,
	MC_SEL_FORMAT = 11,
	MC_SEL_ALBUM_TYPE = 12,
	MC_SEL_ALBUM_CHECK = 13,
	MC_LOAD = 14,
	MC_SAVE = 15,
	MC_MAKE_DIR = 16,
	MC_REMAKE_DIR = 17,
	MC_DELETE_DIR = 18,
	MC_FORMAT = 19,
	MC_UNFORMAT = 20,
	MC_DISP_ERR = 21,
	MC_LOAD_END = 22,
	MC_SAVE_END = 23,
	MC_SEL_GOTITLE = 24,
	MC_END = 25,
	MC_ERR_END = 26
};

enum {
	MC_ERR_NONE = 0,
	MC_ERR_UNFORMAT_CARD = 1,
	MC_ERR_NOCARD = 2,
	MC_ERR_NOEMPTY = 3,
	MC_ERR_NODIR = 4,
	MC_ERR_NOFILE = 5,
	MC_ERR_LOAD = 6,
	MC_ERR_SAVE = 7,
	MC_ERR_FORMAT = 8,
	MC_ERR_ILLEGUL_DIR = 9,
	MC_ERR_ACS = 10
};

enum {
	MC_MSG_SEL_SLOT = 0,
	MC_MSG_SEL_SAVEFILE = 1,
	MC_MSG_CHECK = 2,
	MC_MSG_ERR_ACCESS = 3,
	MC_MSG_ERR_NOEMPTY_GAME = 4,
	MC_MSG_ERR_NOEMPTY_ALBUM = 5,
	MC_MSG_ERR_NOCARD = 6,
	MC_MSG_ERR_NODIR = 7,
	MC_MSG_ERR_NOGAMEFILE = 8,
	MC_MSG_ERR_NOALBUMFILE = 9,
	MC_MSG_ERR_UNFORMAT = 10,
	MC_MSG_FORMAT = 11,
	MC_MSG_SEL_FORMAT = 12,
	MC_MSG_ERR_FORMAT = 13,
	MC_MSG_SEL_MAKE_DIR = 14,
	MC_MSG_MAKE_DIR = 15,
	MC_MSG_SEL_REMAKE_DIR = 16,
	MC_MSG_REMAKE_DIR = 17,
	MC_MSG_SEL_SAVE = 18,
	MC_MSG_SAVE = 19,
	MC_MSG_END_SAVE = 20,
	MC_MSG_ERR_SAVE = 21,
	MC_MSG_SEL_LOAD = 22,
	MC_MSG_LOAD = 23,
	MC_MSG_END_LOAD = 24,
	MC_MSG_ERR_LOAD = 25,
	MC_MSG_ERR_SUM = 26,
	MC_MSG_SEL_START = 27,
	MC_MSG_SEL_START2 = 28,
	MC_MSG_SEL_ALBUM_TYPE = 29,
	MC_MSG_SEL_ALBUM_CHECK = 30,
	MC_MSG_SEL_OVERWRITE = 31,
	MC_MSG_SEL_NEW_OR_LOAD = 32,
	MC_MSG_ERR_ILLEGUL_NOEMPTY = 33,
	MC_MSG_SEL_LOADFILE = 34,
	MC_MSG_ERR_ILLEGUL_LOAD = 35,
	MC_MSG_CAP_ALBUM_LOAD = 36,
	MC_MSG_SEL_NEW_OR_LOAD2 = 37,
	MC_MSG_SEL_START3 = 38,
	MC_MSG_SEL_GOTITLE = 39,
	MC_MSG_ADD_NOEMPTY = 40,
	MC_MSG_NONE = 41,
	MC_MSG_MAX = 42
};

enum {
	MC_HEAD_MSG_NEWFILE = 100,
	MC_HEAD_MSG_MSN0 = 101,
	MC_HEAD_MSG_MSN1 = 102,
	MC_HEAD_MSG_MSN2 = 103,
	MC_HEAD_MSG_MSN3 = 104,
	MC_HEAD_MSG_MSN4 = 105,
	MC_HEAD_MSG_MSN5 = 106,
	MC_HEAD_MSG_ILLEGUL = 107,
	MC_HEAD_MSG_COLON = 108,
	MC_HEAD_MSG_MAX = 109
};

enum {
	MC_FILE_ICONSYS = 0,
	MC_FILE_ICONDATA1 = 1,
	MC_FILE_ICONDATA2 = 2,
	MC_FILE_ICONDATA3 = 3,
	MC_FILE_HEADER = 4,
	MC_FILE_GAMEDATA1 = 5,
	MC_FILE_GAMEDATA2 = 6,
	MC_FILE_GAMEDATA3 = 7,
	MC_FILE_ALBUMDATA1 = 8,
	MC_FILE_ALBUMDATA2 = 9,
	MC_FILE_ALBUMDATA3 = 10,
	MC_FILE_ALBUMDATA4 = 11,
	MC_FILE_ALBUMDATA5 = 12
};

enum {
	MC_MENU_SEL_MODE = 0,
	MC_MENU_GAMESAVE = 1,
	MC_MENU_SEL_LOAD = 2,
	MC_MENU_ALBUMLOAD = 3,
	MC_MENU_ALBUM = 4,
	MC_MENU_ALBUMSAVE = 5,
	MC_MENU_FILM = 6,
	MC_MENU_SEL_EXIT = 7,
	MC_MENU_END = 8
};

enum {
	MC_CHECK_SLOT_REQ = 0,
	MC_CHECK_SLOT_SYNC = 1,
	MC_CHECK_ROOT_REQ = 2,
	MC_CHECK_ROOT_SYNC = 3,
	MC_CHECK_FILE_REQ = 4,
	MC_CHECK_FILE_SYNC = 5,
	MC_CHECK_READ_HEAD_REQ = 6,
	MC_CHECK_READ_HEAD_SYNC = 7
};

enum {
	MC_NEW_MAKE_DIR_REQ = 0,
	MC_NEW_MAKE_DIR_SYNC = 1,
	MC_NEW_MAKE_ICONSYS_REQ = 2,
	MC_NEW_MAKE_ICONSYS_SYNC = 3,
	MC_NEW_MAKE_LOADICON_REQ = 4,
	MC_NEW_MAKE_LOADICON_SYNC = 5,
	MC_NEW_MAKE_ICONDATA_REQ = 6,
	MC_NEW_MAKE_ICONDATA_SYNC = 7,
	MC_NEW_MAKE_GAMEDATA_REQ = 8,
	MC_NEW_MAKE_GAMEDATA_SYNC = 9,
	MC_NEW_MAKE_ALBUMDATA_REQ = 10,
	MC_NEW_MAKE_ALBUMDATA_SYNC = 11
};

typedef struct { // 0x7
	/* 0x0 */ char sync;
	/* 0x1 */ char sta;
	/* 0x2 */ char card_sta;
	/* 0x3 */ char func_no;
	/* 0x4 */ char retry_cnt;
	/* 0x5 */ char req;
	/* 0x6 */ char step;
} MC_ACCESS;

typedef struct { // 0xc
	/* 0x0 */ int type;
	/* 0x4 */ int free;
	/* 0x8 */ int format;
} MC_STATUS;

typedef struct { // 0x4c0
	/* 0x000 */ sceMcTblGetDir table[18];
	/* 0x480 */ short int file_num;
	/* 0x482 */ short int gamefile_num;
	/* 0x484 */ u_int size;
} MC_DIR;

typedef struct { // 0x198
	/* 0x000 */ char path[128];
	/* 0x080 */ char dir[128];
	/* 0x100 */ char name[128];
	/* 0x180 */ char *buf;
	/* 0x184 */ int fd;
	/* 0x188 */ int size;
	/* 0x18c */ int mode;
	/* 0x190 */ int step;
	/* 0x194 */ int header_flg;
} MC_RW;

typedef struct { // 0xc
	/* 0x0 */ u_char file_no[5];
	/* 0x5 */ u_char sta[5];
	/* 0xa */ char file_num;
	/* 0xb */ char type;
} MC_ALBUM;

typedef struct { // 0xac0
	/* 0x000 */ sceMcIconSys icon;
	/* 0x400 */ MC_DIR dir;
	/* 0x8c0 */ MC_ACCESS acs;
	/* 0x8c8 */ MC_STATUS card[2];
	/* 0x8e0 */ MC_RW rw;
	/* 0xa78 */ MC_ALBUM album;
	/* 0xa84 */ int port;
	/* 0xa88 */ int slot;
	/* 0xa8c */ int port_mes;
	/* 0xa90 */ int mode;
	/* 0xa94 */ int step;
	/* 0xa98 */ int stepbak;
	/* 0xa9c */ int sub_step;
	/* 0xaa0 */ int msg_no;
	/* 0xaa4 */ int now_cur;
	/* 0xaa8 */ int sel_cur;
	/* 0xaac */ int sel_file;
	/* 0xab0 */ u_int dir_size;
	/* 0xab4 */ u_int *work_addr;
} MC_CTRL;

typedef struct { // 0x8
	/* 0x0 */ u_char *addr;
	/* 0x4 */ int size;
} MC_DATA_STR;

typedef struct { // 0x20
	/* 0x00 */ u_int map_flg;
	/* 0x04 */ u_int msn_no;
	/* 0x08 */ u_int room_no;
	/* 0x0c */ u_int hour;
	/* 0x10 */ u_int minute;
	/* 0x14 */ u_int sec;
	/* 0x18 */ u_int frame;
	/* 0x1c */ u_short msn_flg;
	/* 0x1e */ u_char clear_flg;
	/* 0x1f */ u_char difficult;
} MC_GAME_HEADER;

typedef struct { // 0x20
	/* 0x00 */ u_int map_flg;
	/* 0x04 */ u_int photo_num;
	/* 0x08 */ u_int type;
	/* 0x0c */ u_int pad[5];
} MC_ALBUM_HEADER;

typedef union { // 0x20
	/* 0x00 */ MC_GAME_HEADER game;
	/* 0x00 */ MC_ALBUM_HEADER album;
} MC_HEADER;

typedef struct { // 0x5
	/* 0x0 */ char step;
	/* 0x1 */ char sub_step;
	/* 0x2 */ char mode;
	/* 0x3 */ char cur;
	/* 0x4 */ char pad;
} MC_MSN_CTRL;

enum {
	FND_FRAME_L = 0,
	FND_FRAME_R = 1,
	FND_CONT_BASE = 2,
	FND_CONT_NUM00 = 3,
	FND_CONT_NUM01 = 4,
	FND_CONT_NUM02 = 5,
	FND_CONT_NUM03 = 6,
	FND_CONT_NUM04 = 7,
	FND_CONT_NUM05 = 8,
	FND_CONT_NUM06 = 9,
	FND_CONT_NUM07 = 10,
	FND_CONT_NUM08 = 11,
	FND_CONT_NUM09 = 12,
	FND_CONT_MASK = 13,
	FND_DM_NUM_00 = 14,
	FND_DM_NUM_01 = 15,
	FND_DM_NUM_02 = 16,
	FND_DM_NUM_03 = 17,
	FND_DM_NUM_04 = 18,
	FND_DM_NUM_05 = 19,
	FND_DM_NUM_06 = 20,
	FND_DM_NUM_07 = 21,
	FND_DM_NUM_08 = 22,
	FND_DM_NUM_09 = 23,
	FND_FNT_SPIRIT = 24,
	FND_DM_FNT_FLA = 25,
	FND_STK_NUM_00 = 26,
	FND_STK_NUM_01 = 27,
	FND_STK_NUM_02 = 28,
	FND_STK_NUM_03 = 29,
	FND_STK_NUM_04 = 30,
	FND_STK_NUM_05 = 31,
	FND_STK_NUM_06 = 32,
	FND_STK_NUM_07 = 33,
	FND_STK_NUM_08 = 34,
	FND_STK_NUM_09 = 35,
	FND_STK_NUM_10 = 36,
	FND_STK_NUM_11 = 37,
	FND_BIG_NUM_00 = 38,
	FND_BIG_NUM_01 = 39,
	FND_BIG_NUM_02 = 40,
	FND_BIG_NUM_03 = 41,
	FND_BIG_NUM_04 = 42,
	FND_BIG_NUM_05 = 43,
	FND_BIG_NUM_06 = 44,
	FND_BIG_NUM_07 = 45,
	FND_BIG_NUM_08 = 46,
	FND_BIG_NUM_09 = 47,
	FND_BIG_NUM_10 = 48,
	FND_BIG_NUM_11 = 49,
	FND_STK_NUM_BASE_00 = 50,
	FND_STK_NUM_BASE_01 = 51,
	FND_STK_NUM_BASE_02 = 52,
	FND_STK_NUM_BASE_03 = 53,
	FND_STK_NUM_BASE_04 = 54,
	FND_STK_NUM_BASE_05 = 55,
	FND_STK_NUM_BASE_06 = 56,
	FND_STK_NUM_BASE_07 = 57,
	FND_STK_NUM_BASE_08 = 58,
	FND_STK_NUM_BASE_09 = 59,
	FND_STK_NUM_BASE_10 = 60,
	FND_STK_NUM_BASE_11 = 61,
	FND_SEAL_LIT_FLA = 62,
	FND_SEAL_GAUGE = 63,
	FND_SEAL_FNT = 64,
	FND_ENE_VIT_BASE = 65,
	FND_ENE_VIT_BASE2 = 66,
	FND_ENE_VIT_BAR = 67,
	FND_ENE_VIT_OVR = 68,
	FND_ENE_VIT_BAR_FLA = 69,
	FND_WEP_GAUGE = 70,
	FND_WEP_GAUGE_FLA = 71,
	FND_WEP_FNT_0B = 72,
	FND_WEP_FNT_1B = 73,
	FND_WEP_FNT_2B = 74,
	FND_WEP_FNT_3B = 75,
	FND_WEP_FNT_4B = 76,
	FND_WEP_FNT_0A = 77,
	FND_WEP_FNT_1A = 78,
	FND_WEP_FNT_2A = 79,
	FND_WEP_FNT_3A = 80,
	FND_WEP_FNT_4A = 81,
	FND_STK_GAUGE_L = 82,
	FND_STK_GAUGE_M = 83,
	FND_STK_GAUGE_R = 84,
	FND_FIL_BASE = 85,
	FND_FIL_FLA = 86,
	FND_BIG_CNT_CIR1 = 87,
	FND_BIG_CNT_CIR2 = 88,
	FND_BIG_CNT_CIR3 = 89,
	FND_BIG_CNT_CIR4 = 90,
	FND_CNT_CIR_FLA1 = 91,
	FND_CNT_CIR_FLA2 = 92,
	FND_CNT_CIR_FLA3 = 93,
	FND_CNT_CIR_FLA4 = 94,
	FND_CNT_CIR_SGT = 95,
	FND_CNT_CIR = 96,
	LIFEBAR_WAKU_1 = 97,
	LIFEBAR_WAKU_2 = 98,
	LIFEBAR_WAKU_3 = 99,
	LIFEBAR_WAKU_4 = 100,
	LIFEBAR_WAKU_5 = 101,
	LIFEBAR_WAKU_FLA1 = 102,
	LIFEBAR_WAKU_FLA2 = 103,
	LIFEBAR_WAKU_FLA3 = 104,
	LIFEBAR_WAKU_FLA4 = 105,
	LIFEBAR_BLUE_1 = 106,
	LIFEBAR_BLUE_2 = 107,
	LIFEBAR_BLUE_3 = 108,
	LIFEBAR_BLUE_4 = 109,
	LIFEBAR_RED_01 = 110,
	LIFEBAR_RED_02 = 111,
	LIFEBAR_RED_03 = 112,
	LIFEBAR_RED_04 = 113,
	FND_WP_NUM00 = 114,
	FND_WP_NUM01 = 115,
	FND_WP_NUM02 = 116,
	FND_WP_NUM03 = 117,
	FND_WP_NUM04 = 118,
	FND_WP_NUM05 = 119,
	FND_WP_NUM06 = 120,
	FND_WP_NUM07 = 121,
	FND_WP_NUM08 = 122,
	FND_WP_NUM09 = 123,
	FND_DM_NUM00 = 124,
	FND_DM_NUM01 = 125,
	FND_DM_NUM02 = 126,
	FND_DM_NUM03 = 127,
	FND_DM_NUM04 = 128,
	FND_DM_NUM05 = 129,
	FND_DM_NUM06 = 130,
	FND_DM_NUM07 = 131,
	FND_DM_NUM08 = 132,
	FND_DM_NUM09 = 133,
	FND_DM_FNT_DAMAGE = 134,
	FND_DM_FNT_SPCIAL = 135,
	FND_DM_FNT_CLOSE = 136,
	FND_DM_FNT_CORE = 137,
	FND_RMP_BASE = 138,
	FND_RMP_GRS = 139,
	FND_RMP_BLU_SML = 140,
	FND_RMP_BLU_BIG = 141,
	FND_RMP_RED_SML = 142,
	FND_RMP_RED_BIG = 143,
	LF_GAIN_L = 144,
	LF_GAIN_S = 145,
	LF_MASK = 146,
	FND_ENE_VIT_BAR2 = 147,
	KAN_BU = 148,
	KAN_BR = 149,
	KAN_BD = 150,
	KAN_BL = 151,
	KAN_FU = 152,
	KAN_FR = 153,
	KAN_FD = 154,
	KAN_FL = 155,
	FND_RMP_CV = 156,
	FND_FNT_IMPACT1 = 157,
	FND_FNT_IMPACT2 = 158,
	FND_FNT_BIND = 159,
	FND_FNT_FIND = 160,
	FND_FNT_SLOW = 161,
	FND_FNT_TRIPLE1 = 162,
	FND_FNT_TRIPLE2 = 163,
	FND_FNT_DOUBLE1 = 164,
	FND_FNT_DOUBLE2 = 165,
	FND_FNT_ZERO = 166,
	FND_END = 166,
	MNU_MAIN_BASE_VAT1 = 167,
	MNU_MAIN_BASE_VAT1_B = 168,
	MNU_MAIN_BASE_VAT2 = 169,
	MNU_MAIN_BASE_VAT2_B = 170,
	MNU_MAIN_BASE_VAT3 = 171,
	MNU_MAIN_BASE_VAT3_B = 172,
	MNU_MAIN_BASE_VAT4 = 173,
	MNU_MAIN_BASE_VAT4_B = 174,
	MNU_MAIN_BASE_VAT5 = 175,
	MNU_MAIN_BASE_VAT5_B = 176,
	MNU_MAIN_BASE_VAT6 = 177,
	MNU_MAIN_BASE_VAT6_B = 178,
	MNU_MAIN_BASE_VAT7 = 179,
	MNU_MAIN_BASE_VAT7_B = 180,
	MNU_MAIN_BASE_HOL1 = 181,
	MNU_MAIN_BASE_HOL2 = 182,
	MNU_MAIN_BASE_HOL2_B = 183,
	MNU_SEL_BACK1 = 184,
	MNU_SEL_BACK2 = 185,
	MNU_SEL_BACK3 = 186,
	MNU_SEL_BACK4 = 187,
	MNU_SEL_BACK5 = 188,
	MNU_SEL_BACK6 = 189,
	MNU_SEL_BACK7 = 190,
	MNU_FNT_MAP = 191,
	MNU_FNT_ITEM = 192,
	MNU_FNT_PHOT = 193,
	MNU_FNT_FILE = 194,
	MNU_FNT_GHOST = 195,
	MNU_FNT_RANKING = 196,
	MNU_FNT_CAMERA = 197,
	MNU_FNT_MENU = 198,
	MNU_FNT_OPTION = 199,
	MNU_CURSOR1 = 200,
	MNU_GRB_CAP_MENU = 201,
	MNU_GRB_CAP_MOVE = 202,
	MNU_GRB_CAP_EXIT = 203,
	MNU_GRB_CAP_USE = 204,
	MNU_GRB_CAP_SELECT = 205,
	MNU_GRB_CAP_NEXT = 206,
	MNU_GRB_CAP_ENLARGE = 207,
	MNU_GRB_CAP_PROTECT = 208,
	MNU_END = 208,
	STTS_BASE_L = 209,
	STTS_BASE_R = 210,
	STTS_MIKU = 211,
	STTS_FLM_07 = 212,
	STTS_FLM_14 = 213,
	STTS_FLM_37 = 214,
	STTS_FLM_74 = 215,
	STTS_FLM_90 = 216,
	STTS_REISEKI = 217,
	STTS_ATSU = 218,
	STTS_CHI = 219,
	STTS_SHI = 220,
	STTS_HI = 221,
	STTS_TAN = 222,
	STTS_KAN = 223,
	STTS_TSUI = 224,
	STTS_KAKU = 225,
	STTS_MU = 226,
	STTS_REI = 227,
	STTS_QQQ = 228,
	LIFE_BAR_BLUE1_1 = 229,
	LIFE_BAR_BLUE1_2 = 230,
	LIFE_BAR_BLUE1_3 = 231,
	LIFE_BAR_BLUE2_1 = 232,
	LIFE_BAR_BLUE2_2 = 233,
	LIFE_BAR_BLUE2_3 = 234,
	LIFE_BAR_RED_1 = 235,
	LIFE_BAR_RED_2 = 236,
	LIFE_BAR_RED_3 = 237,
	STTS_FLR = 238,
	STTS_MAFUYU = 239,
	STTS_REISEKI2 = 240,
	PLAYMATE = 241,
	STTS_END = 241,
	CAM_BALL_FLR = 242,
	CAM_BALL_OFF = 243,
	CAM_BALL_ONN = 244,
	CAM_CMND_00 = 245,
	CAM_CMND_01 = 246,
	CAM_CMND_02 = 247,
	CAM_CMND_03 = 248,
	CAM_FILM_00 = 249,
	CAM_FILM_01 = 250,
	CAM_FILM_02 = 251,
	CAM_FILM_03 = 252,
	CAM_FONT_00 = 253,
	CAM_FONT_01 = 254,
	CAM_FONT_02 = 255,
	CAM_FONT_03 = 256,
	CAM_FONT_04 = 257,
	CAM_FONT_05 = 258,
	CAM_FONT_06 = 259,
	CAM_FONT_07 = 260,
	CAM_FONT_08 = 261,
	CAM_FONT_09 = 262,
	CAM_FONT_10 = 263,
	CAM_FONT_11 = 264,
	CAM_FONT_LV = 265,
	CAM_FONT_NXT = 266,
	CAM_BACK_TEX = 267,
	CAM_WTTL_00 = 268,
	CAM_WTTL_01 = 269,
	CAM_WTTL_02 = 270,
	CAM_WTTL_03 = 271,
	CAM_WTTL_04 = 272,
	CAM_FONT2_00 = 273,
	CAM_FONT2_01 = 274,
	CAM_FONT2_02 = 275,
	CAM_END = 275,
	ITM_DSP_LENS1 = 276,
	ITM_DSP_LENS2 = 277,
	ITM_DSP_LENS3 = 278,
	ITM_SCRBAR_BASE_U = 279,
	ITM_SCRBAR_BASE_D = 280,
	ITM_SCRBAR_BASE_M = 281,
	ITM_SCR_TRIANGLE_U = 282,
	ITM_SCR_TRIANGLE_D = 283,
	ITM_SCRBAR_PICK_U = 284,
	ITM_SCRBAR_PICK_D = 285,
	ITM_SCRBAR_PICK_M = 286,
	ITM_CAM_FLR = 287,
	ITM_END = 287,
	PHT_LIST_BASE11 = 288,
	PHT_LIST_BASE12 = 289,
	PHT_LIST_BASE21 = 290,
	PHT_LIST_BASE22 = 291,
	PHT_SAVE_ACT = 292,
	PHT_DELT_ACT = 293,
	PHT_CHNG_ACT = 294,
	PHT_SORT_ACT = 295,
	PHT_TIME_ACT = 296,
	PHT_POINT_ACT = 297,
	PHT_SAVE2_ACT = 298,
	PHT_ALL_ACT = 299,
	PHT_DETAILS_ACT = 300,
	PHT_ZOOM_ACT = 301,
	PHT_DATE_ACT = 302,
	PHT_PINT_ACT = 303,
	PHT_GARD_ACT = 304,
	PHT_MNU_FNT_TARGET = 305,
	PHT_MNU_FNT_DATE = 306,
	PHT_MNU_FNT_PLACE = 307,
	PHT_MNU_FNT_POINT = 308,
	PHT_LAG_DIGIT0 = 309,
	PHT_LAG_DIGIT1 = 310,
	PHT_LAG_DIGIT2 = 311,
	PHT_LAG_DIGIT3 = 312,
	PHT_LAG_DIGIT4 = 313,
	PHT_LAG_DIGIT5 = 314,
	PHT_LAG_DIGIT6 = 315,
	PHT_LAG_DIGIT7 = 316,
	PHT_LAG_DIGIT8 = 317,
	PHT_LAG_DIGIT9 = 318,
	PHT_SML_CORON = 319,
	PHT_SML_SEP = 320,
	PHT_SML_SEALMARK = 321,
	PHT_PICT_SEALMARK1 = 322,
	PHT_PICT_SEALMARK2 = 323,
	PHT_PICT_SEALMARK3 = 324,
	PHT_PICT_SEALMARK4 = 325,
	PHT_FNT_DATE = 326,
	PHT_FNT_POINT = 327,
	PHT_FNT_SAVE = 328,
	PHT_ALL_FRAME_01 = 329,
	PHT_ALL_FRAME_02 = 330,
	PHT_ALL_FRAME_03 = 331,
	PHT_ALL_FRAME_04 = 332,
	PHT_ALL_FRAME_05 = 333,
	PHT_ALL_FRAME_06 = 334,
	PHT_ALL_FRAME_07 = 335,
	PHT_ALL_FRAME_08 = 336,
	PHT_ALL_FRAME_09 = 337,
	PHT_ALL_FRAME_10 = 338,
	PHT_ALL_FRAME_11 = 339,
	PHT_ALL_FRAME_12 = 340,
	PHT_SAM_FRAME = 341,
	PHT_SAM_ACT_FRAME = 342,
	PHT_SAM_ACT_FRAME2 = 343,
	PHT_SAM_BLANK = 344,
	PHT_SAM_SEAT = 345,
	PHT_SAM_SEAT2 = 346,
	PHT_SCRT_NUM0 = 347,
	PHT_SCRT_NUM1 = 348,
	PHT_SCRT_NUM2 = 349,
	PHT_SCRT_NUM3 = 350,
	PHT_SCRT_NUM4 = 351,
	PHT_SCRT_NUM5 = 352,
	PHT_SCRT_NUM6 = 353,
	PHT_SCRT_NUM7 = 354,
	PHT_SCRT_NUM8 = 355,
	PHT_SCRT_NUM9 = 356,
	PHT_PHOTO_EDGE_HU = 357,
	PHT_PHOTO_EDGE_HD = 358,
	PHT_PHOTO_EDGE_VL = 359,
	PHT_PHOTO_EDGE_VR = 360,
	PHT_SCRBAR_BASE_U = 361,
	PHT_SCRBAR_BASE_D = 362,
	PHT_SCRBAR_BASE_M = 363,
	PHT_SCR_TRIANGLE_U = 364,
	PHT_SCR_TRIANGLE_D = 365,
	PHT_SCRBAR_PICK_U = 366,
	PHT_SCRBAR_PICK_D = 367,
	PHT_SCRBAR_PICK_M = 368,
	PHT_ZOOM_DECO_BACK_L1 = 369,
	PHT_ZOOM_DECO_BACK_L2 = 370,
	PHT_ZOOM_DECO_BACK_L3 = 371,
	PHT_ZOOM_DECO_BACK_R1 = 372,
	PHT_ZOOM_DECO_BACK_R2 = 373,
	PHT_ZOOM_DECO_BACK_R3 = 374,
	PHT_ZOOM_FNT_TARGET = 375,
	PHT_ZOOM_FNT_DATE = 376,
	PHT_ZOOM_FNT_PLACE = 377,
	PHT_ZOOM_FNT_POINT = 378,
	PHT_ZOOM_TRIANGLE_LFT = 379,
	PHT_ZOOM_TRIANGLE_RGT = 380,
	PHT_ZOOM_FNT_BACK = 381,
	PHT_ZOOM_FNT_NEXT = 382,
	PHT_ZOOM_SEALING1 = 383,
	PHT_ZOOM_SEALING2 = 384,
	PHT_ZOOM_SEALING3 = 385,
	PHT_ZOOM_SEALING4 = 386,
	PHT_ZOOM_DAISHI_HU = 387,
	PHT_ZOOM_DAISHI_HD = 388,
	PHT_ZOOM_DAISHI_VL = 389,
	PHT_ZOOM_DAISHI_VR = 390,
	PHT_FNT_JOHO = 391,
	PHT_FNT_HOZ = 392,
	PHT_FNT_HRD = 393,
	PHT_FNT_PLC = 394,
	PHT_FNT_PNT = 395,
	FUSUMA_L = 396,
	FUSUMA_R = 397,
	PHT_END = 397,
	FIL_SEL_MNU_REPORT = 398,
	FIL_SEL_MNU_MEMO = 399,
	FIL_SEL_MNU_DENSYO = 400,
	FIL_SEL_MEU_PHOT = 401,
	FIL_SEL_LENS = 402,
	FIL_SEL_FNT_SHINKI = 403,
	FIL_SCRBAR_BASE_U = 404,
	FIL_SCRBAR_BASE_D = 405,
	FIL_SCRBAR_BASE_M = 406,
	FIL_SCR_TRIANGLE_U = 407,
	FIL_SCR_TRIANGLE_D = 408,
	FIL_SCRBAR_PICK_U = 409,
	FIL_SCRBAR_PICK_D = 410,
	FIL_SCRBAR_PICK_M = 411,
	FIL_PHT_FRAME_LFT1 = 412,
	FIL_PHT_FRAME_LFT2 = 413,
	FIL_PHT_FRAME_LFT3 = 414,
	FIL_PHT_FRAME_RGT1 = 415,
	FIL_PHT_FRAME_RGT2 = 416,
	FIL_PHT_FRAME_RGT3 = 417,
	FIL_PHT_FRAME_EMBS_LUV1 = 418,
	FIL_PHT_FRAME_EMBS_LUV2 = 419,
	FIL_PHT_FRAME_EMBS_LUV3 = 420,
	FIL_PHT_FRAME_EMBS_LUV4 = 421,
	FIL_PHT_FRAME_EMBS_LUH1 = 422,
	FIL_PHT_FRAME_EMBS_LUH2 = 423,
	FIL_PHT_FRAME_EMBS_LUH3 = 424,
	FIL_PHT_FRAME_EMBS_LUH4 = 425,
	FIL_PHT_FRAME_EMBS_RUV1 = 426,
	FIL_PHT_FRAME_EMBS_RUV2 = 427,
	FIL_PHT_FRAME_EMBS_RUV3 = 428,
	FIL_PHT_FRAME_EMBS_RUV4 = 429,
	FIL_PHT_FRAME_EMBS_RUH1 = 430,
	FIL_PHT_FRAME_EMBS_RUH2 = 431,
	FIL_PHT_FRAME_EMBS_RUH3 = 432,
	FIL_PHT_FRAME_EMBS_RUH4 = 433,
	FIL_PHT_FRAME_EMBS_LDV1 = 434,
	FIL_PHT_FRAME_EMBS_LDV2 = 435,
	FIL_PHT_FRAME_EMBS_LDV3 = 436,
	FIL_PHT_FRAME_EMBS_LDV4 = 437,
	FIL_PHT_FRAME_EMBS_LDH1 = 438,
	FIL_PHT_FRAME_EMBS_LDH2 = 439,
	FIL_PHT_FRAME_EMBS_LDH3 = 440,
	FIL_PHT_FRAME_EMBS_LDH4 = 441,
	FIL_PHT_FRAME_EMBS_RDV1 = 442,
	FIL_PHT_FRAME_EMBS_RDV2 = 443,
	FIL_PHT_FRAME_EMBS_RDV3 = 444,
	FIL_PHT_FRAME_EMBS_RDV4 = 445,
	FIL_PHT_FRAME_EMBS_RDH1 = 446,
	FIL_PHT_FRAME_EMBS_RDH2 = 447,
	FIL_PHT_FRAME_EMBS_RDH3 = 448,
	FIL_PHT_FRAME_EMBS_RDH4 = 449,
	FIL_MEDIA_01 = 450,
	FIL_MEDIA_02 = 451,
	FIL_MEDIA_03 = 452,
	FIL_MEDIA_04_A = 453,
	FIL_MEDIA_04_B = 454,
	FIL_MEDIA_05_A = 455,
	FIL_MEDIA_05_B = 456,
	FIL_MEDIA_06_A = 457,
	FIL_MEDIA_06_B = 458,
	FIL_END = 458,
	MAP_BACK_MASK1 = 459,
	MAP_BACK_MASK2 = 460,
	MAP_BACK_MASK3 = 461,
	MAP_BACK_MASK4 = 462,
	MAP_SEAT_PAPER = 463,
	MAP_FNT_DOT1 = 464,
	MAP_FNT_DOT2 = 465,
	MAP_FNT_DOT3 = 466,
	MAP_FNT_ZOOM = 467,
	MAP_FNT_MOOV = 468,
	MAP_FNT_CHANGE = 469,
	MAP_FNT_PRESENT = 470,
	MAP_FNT_L1R1 = 471,
	MAP_TRIANGLE1 = 472,
	MAP_TRIANGLE2 = 473,
	MAP_TRIANGLE3 = 474,
	MAP_TRIANGLE4 = 475,
	MAP_DIRECTION = 476,
	MAP_CAPT_L1 = 477,
	MAP_CAPT_R1 = 478,
	MAP_ICON_DOOR1 = 479,
	MAP_ICON_DOOR2 = 480,
	MAP_ICON_DOOR3 = 481,
	MAP_ICON_PLAYER = 482,
	MAP_ICON_SAVE = 483,
	MAP_ID_00 = 484,
	MAP_ID_01 = 485,
	MAP_ID_02 = 486,
	MAP_ID_03 = 487,
	MAP_ID_04 = 488,
	MAP_ID_05 = 489,
	MAP_ID_06 = 490,
	MAP_ID_07 = 491,
	MAP_ID_08 = 492,
	MAP_ID_09 = 493,
	MAP_ID_10 = 494,
	MAP_ID_11 = 495,
	MAP_ID_12 = 496,
	MAP_ID_13 = 497,
	MAP_ID_14 = 498,
	MAP_ID_15 = 499,
	MAP_ID_16 = 500,
	MAP_ID_17 = 501,
	MAP_ID_18 = 502,
	MAP_ID_19 = 503,
	MAP_ID_20 = 504,
	MAP_ID_21 = 505,
	MAP_ID_22 = 506,
	MAP_ID_23 = 507,
	MAP_ID_24 = 508,
	MAP_ID_25 = 509,
	MAP_ID_26 = 510,
	MAP_ID_27 = 511,
	MAP_ID_28 = 512,
	MAP_ID_29 = 513,
	MAP_ID_30 = 514,
	MAP_ID_31 = 515,
	MAP_ID_32 = 516,
	MAP_ID_33 = 517,
	MAP_ID_34 = 518,
	MAP_ID_35 = 519,
	MAP_ID_36 = 520,
	MAP_DD_37 = 521,
	MAP_ID_38 = 522,
	MAP_DD_39 = 523,
	MAP_ID_40 = 524,
	MAP_ID_41 = 525,
	MAP_AD_08 = 526,
	MAP_AD_29 = 527,
	MAP_AD_17 = 528,
	MAP_AD_14 = 529,
	MAP_AD_03 = 530,
	MAP_AD_09 = 531,
	MAP_AD_20 = 532,
	MAP_END = 532,
	PSE_FNT = 533,
	GOV_FNT1 = 534,
	GOV_FNT2 = 535,
	TTL_FNT_SAVE = 536,
	TTL_FNT_LOAD = 537,
	TTL_FNT_ALBM = 538,
	TRIANGLE_LFT = 539,
	TRIANGLE_RGT = 540,
	PSE_END = 540,
	PLD_00 = 541,
	PLD_01 = 542,
	PLD_02 = 543,
	PLD_03 = 544,
	PLD_04 = 545,
	PLD_05 = 546,
	PLD_CLK_BASE = 547,
	PLD_CLK_SHRT = 548,
	PLD_CLK_SHRT_SDW = 549,
	PLD_CLK_LONG = 550,
	PLD_CLK_LONG_SDW = 551,
	PLD_CLK_SEC = 552,
	PLD_CLK_SEC_SDW = 553,
	PLD_END = 553,
	MENU_OPT_CNT00 = 554,
	MENU_OPT_CNT01 = 555,
	MENU_OPT_CNT02 = 556,
	MENU_OPT_CNT03 = 557,
	MENU_OPT_CNT04 = 558,
	MNU_OPT_VOLUME = 559,
	MNU_OPT_VOLUME_FRM = 560,
	MNU_OPT_SND_TUNE = 561,
	MNU_OPT_ICON_00 = 562,
	MNU_OPT_ICON_01 = 563,
	MNU_OPT_ICON_02 = 564,
	MNU_OPT_ICON_03 = 565,
	MNU_OPT_SEL_TRI_L = 566,
	MNU_OPT_SEL_TRI_R = 567,
	BRGHT_PHT = 568,
	BRGHT_ONE = 569,
	BRGHT_TWO = 570,
	BRGHT_THR = 571,
	BRGHT_FOR = 572,
	BRGHT_SEN = 573,
	BRGHT_TEN = 574,
	MENU_OPT_KEY_KEY = 575,
	MENU_OPT_KEY_NORMAL = 576,
	MENU_OPT_KEY_REVERSE = 577,
	MENU_OPT_KEY_WHT_00 = 578,
	MENU_OPT_KEY_WHT_01 = 579,
	MENU_OPT_KEY_WHT_02 = 580,
	MENU_OPT_KEY_WHT_03 = 581,
	MENU_OPT_KEY_WHT_04 = 582,
	MENU_OPT_KEY_WHT_05 = 583,
	MENU_OPT_KEY_WHT_06 = 584,
	MENU_OPT_KEY_WHT_07 = 585,
	MENU_OPT_KEY_RED_00 = 586,
	MENU_OPT_KEY_RED_01 = 587,
	MENU_OPT_KEY_RED_02 = 588,
	MENU_OPT_KEY_RED_03 = 589,
	MENU_OPT_KEY_RED_04 = 590,
	MENU_OPT_KEY_RED_05 = 591,
	MENU_OPT_KEY_RED_06 = 592,
	MENU_OPT_KEY_RED_07 = 593,
	MENU_OPT_KEY_RED_08 = 594,
	MENU_OPT_KAKKO_L = 595,
	MENU_OPT_KAKKO_R = 596,
	MENU_OPT_MOVE_TYPE = 597,
	MENU_OPT_TYPE_A = 598,
	MENU_OPT_TYPE_B = 599,
	MENU_OPT_TYPE_C = 600,
	MENU_OPT_TYPE_D = 601,
	MENU_OPT_TYPE_E = 602,
	MENU_OPT_TYPE_F = 603,
	MENU_OPT_TYPE_G = 604,
	MENU_OPT_TYPE_H = 605,
	MNU_OPT_END = 605,
	SV_MMC_01 = 606,
	SV_MMC_02 = 607,
	SV_MMC_03 = 608,
	SV_MMC_04 = 609,
	SV_MMC_05 = 610,
	SV_MMC_06 = 611,
	SV_HDK_01 = 612,
	SV_FSL_V01 = 613,
	SV_FSL_V02 = 614,
	SV_FSL_V03 = 615,
	SV_FSL_V04 = 616,
	SV_FSL_H01 = 617,
	SV_FSL_H02 = 618,
	SV_PHT_V01 = 619,
	SV_PHT_V02 = 620,
	SV_PHT_V03 = 621,
	SV_PHT_V04 = 622,
	SV_PHT_V05 = 623,
	SV_PHT_V06 = 624,
	SV_PHT_H01 = 625,
	SV_PHT_H02 = 626,
	SV_PHT_H03 = 627,
	SV_PHT_H04 = 628,
	SV_PHT_V01R = 629,
	SV_PHT_V02R = 630,
	SV_PHT_V03R = 631,
	SV_PHT_V04R = 632,
	SV_PHT_V05R = 633,
	SV_PHT_V06R = 634,
	SV_PHT_H01R = 635,
	SV_PHT_H02R = 636,
	SV_PHT_H03R = 637,
	SV_PHT_H04R = 638,
	SV_LNZ_LNZ = 639,
	SV_LNZ_NO1 = 640,
	SV_LNZ_NO2 = 641,
	SV_LNZ_SLT1 = 642,
	SV_LNZ_SLT2 = 643,
	SV_LNZ_HDD3 = 644,
	SV_LNZ_FILE1 = 645,
	SV_LNZ_NUM00 = 646,
	SV_LNZ_NUM01 = 647,
	SV_LNZ_NUM02 = 648,
	SV_LNZ_NUM03 = 649,
	SV_LNZ_NUM04 = 650,
	SV_LNZ_NUM05 = 651,
	SV_LNZ_NUM06 = 652,
	SV_LNZ_NUM07 = 653,
	SV_LNZ_NUM08 = 654,
	SV_LNZ_NUM09 = 655,
	SV_LNZ_SCRBAR_BASE_U = 656,
	SV_LNZ_SCRBAR_BASE_D = 657,
	SV_LNZ_SCRBAR_BASE_M = 658,
	SV_LNZ_SCR_TRIANGLE_U = 659,
	SV_LNZ_SCR_TRIANGLE_D = 660,
	SV_LNZ_SCRBAR_PICK_U = 661,
	SV_LNZ_SCRBAR_PICK_D = 662,
	SV_LNZ_SCRBAR_PICK_M = 663,
	SP_R000 = 664,
	SP_R006 = 665,
	SP_R014 = 666,
	SP_R015 = 667,
	SP_R021 = 668,
	SP_R031 = 669,
	SP_R041 = 670,
	SP_R042 = 671,
	SP_R043 = 672,
	SP_R044 = 673,
	SP_R045 = 674,
	SP_R046 = 675,
	SV_END = 675,
	PSP_FNT_SAVE = 676,
	PSP_FNT_ALBUM = 677,
	PSP_FNT_FILM = 678,
	PSP_FNT_RETURN = 679,
	PSP_FNT_SP = 680,
	PSP_KAKKO_LU = 681,
	PSP_KAKKO_LD = 682,
	PSP_KAKKO_RU = 683,
	PSP_KAKKO_RD = 684,
	PSP_ICN_MEMOCA = 685,
	PSP_ICN_ALBUM = 686,
	PSP_ICN_FILM = 687,
	PSP_ICN_RETURN = 688,
	PSP_END = 688,
	TP_BG_SML_WS = 689,
	TP_BG_SML_PS = 690,
	TP_BG_SML_RS = 691,
	TP_BG_SML_GS = 692,
	TP_BG_SML_BS = 693,
	TP_BG_SML_OS = 694,
	KK_BG_SML_WX = 695,
	KK_BG_SML_PX = 696,
	KK_BG_SML_RX = 697,
	KK_BG_SML_GX = 698,
	KK_BG_SML_BX = 699,
	KK_BG_SML_OX = 700,
	TP_BG_BIG_WS = 701,
	TP_BG_BIG_PS = 702,
	TP_BG_BIG_RS = 703,
	TP_BG_BIG_GS = 704,
	TP_BG_BIG_BS = 705,
	TP_BG_BIG_OS = 706,
	KK_BG_BIG_WX = 707,
	KK_BG_BIG_PX = 708,
	KK_BG_BIG_RX = 709,
	KK_BG_BIG_GX = 710,
	KK_BG_BIG_BX = 711,
	KK_BG_BIG_OX = 712,
	OA_LD_OUT_SIR = 713,
	OA_LD_OUT_MUR = 714,
	OA_LD_OUT_AKA = 715,
	OA_LD_OUT_MID = 716,
	OA_LD_OUT_AOO = 717,
	OA_LD_OUT_CHA = 718,
	OA_LD_CSR_L = 719,
	OA_LD_CSR_R = 720,
	OA_LD_FNT1_0 = 721,
	OA_LD_FNT1_1 = 722,
	OA_LD_FNT1_2 = 723,
	OA_LD_FNT1_3 = 724,
	OA_LD_FNT1_4 = 725,
	OA_LD_FNT1_5 = 726,
	OA_LD_FNT1_6 = 727,
	OA_LD_FNT1_7 = 728,
	OA_LD_FNT1_8 = 729,
	OA_LD_FNT1_9 = 730,
	OA_LD_FNT2_0 = 731,
	OA_LD_FNT2_1 = 732,
	OA_LD_FNT2_2 = 733,
	OA_LD_FNT2_3 = 734,
	OA_LD_FNT2_4 = 735,
	OA_LD_FNT2_5 = 736,
	OA_LD_FNT2_6 = 737,
	OA_LD_FNT2_7 = 738,
	OA_LD_FNT2_8 = 739,
	OA_LD_FNT2_9 = 740,
	OA_LD_FNT2_SLSH = 741,
	OA_LD_FNT2_FILE = 742,
	OA_LD_FNT2_ALBM = 743,
	OA_LD_FNT2_HIFN = 744,
	OA_LD_FNT2_NEW = 745,
	OA_LD_FNT2_MAI = 746,
	OA_LD_FNT2_SLD = 747,
	OA_LD_SML_RNZ = 748,
	OA_TP_BG_L = 749,
	OA_TP_BG_R = 750,
	OA_TP_FNT_0 = 751,
	OA_TP_FNT_1 = 752,
	OA_TP_FNT_2 = 753,
	OA_TP_FNT_3 = 754,
	OA_TP_FNT_4 = 755,
	OA_TP_FNT_5 = 756,
	OA_TP_FNT_6 = 757,
	OA_TP_FNT_7 = 758,
	OA_TP_FNT_8 = 759,
	OA_TP_FNT_9 = 760,
	OA_TP_FNT_SLSH = 761,
	OA_TP_FNT_DOT = 762,
	OA_TP_FNT_MMC = 763,
	OA_TP_FNT_SLT = 764,
	OA_TP_FNT_ALBM = 765,
	OA_TP_FNT_MAI = 766,
	OA_TP_FNT_BFFR = 767,
	OA_TP_FNT_FILE = 768,
	OA_TP_FNT_MNU = 769,
	OA_TP_FNT_MOV = 770,
	OA_TP_FNT_ZOM = 771,
	OA_TP_FNT_EXI = 772,
	OA_TP_FNT_ZM2 = 773,
	OA_TP_FNT_MV2 = 774,
	OA_TP_FNT_DEL = 775,
	OA_TP_FNT_SAV = 776,
	OA_TP_FNT_LOD = 777,
	OA_TP_FNT_EXT = 778,
	OA_TP_PHT_WAKU = 779,
	ALBM_CAPT_L1 = 780,
	ALBM_CAPT_R1 = 781,
	OA_TP_PHT_SELE1 = 782,
	OA_TP_PHT_SELE2 = 783,
	OA_TP_PHT_SELE3 = 784,
	OA_TP_PHT_SELE4 = 785,
	ALBM_WAKU_BIG_U = 786,
	ALBM_WAKU_BIG_D = 787,
	ALBM_WAKU_BIG_L = 788,
	ALBM_WAKU_BIG_R = 789,
	ALBM_WAKU_BIG_U2 = 790,
	ALBM_WAKU_BIG_D2 = 791,
	ALBM_WAKU_BIG_L2 = 792,
	ALBM_WAKU_BIG_R2 = 793,
	ALBM_SAM_WAKU = 794,
	ALBM_MINI_SEALING = 795,
	ALBM_FNT_TARGET = 796,
	ALBM_FNT_DATE = 797,
	ALBM_FNT_PLACE = 798,
	ALBM_FNT_POINT = 799,
	ALBM_FNT_TARGET2 = 800,
	ALBM_FNT_DATE2 = 801,
	ALBM_FNT_PLACE2 = 802,
	ALBM_FNT_POINT2 = 803,
	ALBM_FNT_JOHO = 804,
	ALBM_SCRBAR_BASE_U = 805,
	ALBM_SCRBAR_BASE_D = 806,
	ALBM_SCRBAR_BASE_M = 807,
	ALBM_SCR_TRIANGLE_U = 808,
	ALBM_SCR_TRIANGLE_D = 809,
	ALBM_SCRBAR_PICK_U = 810,
	ALBM_SCRBAR_PICK_D = 811,
	ALBM_SCRBAR_PICK_M = 812,
	OA_END = 812,
	GLST_PHT_DAI = 813,
	GLST_PHT_WAKU = 814,
	GLST_FUTI1 = 815,
	GLST_FUTI2 = 816,
	GLST_FUTI3 = 817,
	GLST_FUTI4 = 818,
	GLST_NUM1_0 = 819,
	GLST_NUM1_1 = 820,
	GLST_NUM1_2 = 821,
	GLST_NUM1_3 = 822,
	GLST_NUM1_4 = 823,
	GLST_NUM1_5 = 824,
	GLST_NUM1_6 = 825,
	GLST_NUM1_7 = 826,
	GLST_NUM1_8 = 827,
	GLST_NUM1_9 = 828,
	GLST_NUM2_0 = 829,
	GLST_NUM2_1 = 830,
	GLST_NUM2_2 = 831,
	GLST_NUM2_3 = 832,
	GLST_NUM2_4 = 833,
	GLST_NUM2_5 = 834,
	GLST_NUM2_6 = 835,
	GLST_NUM2_7 = 836,
	GLST_NUM2_8 = 837,
	GLST_NUM2_9 = 838,
	GLST_NUM2_PER = 839,
	GLST_ALL_NUM = 840,
	GLST_HIT_NUM = 841,
	GLST_SXES_PER = 842,
	GLST_G_NAME = 843,
	GLST_DSP_PLACE = 844,
	GLST_COMPLETE = 845,
	GLST_CHRY = 846,
	GLST_END = 846,
	RNK_FNT1_S = 847,
	RNK_FNT1_A = 848,
	RNK_FNT1_B = 849,
	RNK_FNT1_C = 850,
	RNK_FNT1_D = 851,
	RNK_FNT1_PLS = 852,
	RNK_FNT1_MNS = 853,
	RNK_FNT1_1 = 854,
	RNK_FNT1_2 = 855,
	RNK_FNT1_3 = 856,
	RNK_FNT1_4 = 857,
	RNK_FNT1_5 = 858,
	RNK_FNT1_6 = 859,
	RNK_FNT1_7 = 860,
	RNK_FNT1_8 = 861,
	RNK_FNT1_9 = 862,
	RNK_FNT1_0 = 863,
	RNK_FNT1_I = 864,
	RNK_FNT1_RNK = 865,
	RNK_BASE_LU = 866,
	RNK_BASE_LD = 867,
	RNK_BASE_RU = 868,
	RNK_BASE_RD = 869,
	RNK_EN_LU = 870,
	RNK_EN_LD = 871,
	RNK_EN_RU = 872,
	RNK_EN_RD = 873,
	RNK_FNT2_1 = 874,
	RNK_FNT2_2 = 875,
	RNK_FNT2_3 = 876,
	RNK_FNT2_4 = 877,
	RNK_FNT2_5 = 878,
	RNK_FNT2_6 = 879,
	RNK_FNT2_7 = 880,
	RNK_FNT2_8 = 881,
	RNK_FNT2_9 = 882,
	RNK_FNT2_0 = 883,
	RNK_FNT2_I = 884,
	RNK_FNT2_S = 885,
	RNK_FNT2_A = 886,
	RNK_FNT2_B = 887,
	RNK_FNT2_C = 888,
	RNK_FNT2_D = 889,
	RNK_FNT2_PLS = 890,
	RNK_FNT2_MNS = 891,
	RNK_FNT3_1 = 892,
	RNK_FNT3_2 = 893,
	RNK_FNT3_3 = 894,
	RNK_FNT3_4 = 895,
	RNK_FNT3_5 = 896,
	RNK_FNT3_6 = 897,
	RNK_FNT3_7 = 898,
	RNK_FNT3_8 = 899,
	RNK_FNT3_9 = 900,
	RNK_FNT3_0 = 901,
	RNK_FNT3_I = 902,
	RNK_FNT3_S = 903,
	RNK_FNT3_A = 904,
	RNK_FNT3_B = 905,
	RNK_FNT3_C = 906,
	RNK_FNT3_D = 907,
	RNK_FNT3_PLS = 908,
	RNK_FNT3_MNS = 909,
	RNK_WAKU_BIG_U = 910,
	RNK_WAKU_BIG_D = 911,
	RNK_WAKU_BIG_L = 912,
	RNK_WAKU_BIG_R = 913,
	RNK_WAKU_BIG_U2 = 914,
	RNK_WAKU_BIG_D2 = 915,
	RNK_WAKU_BIG_L2 = 916,
	RNK_WAKU_BIG_R2 = 917,
	RNK_FNT_TARGET = 918,
	RNK_FNT_DATE = 919,
	RNK_FNT_PLACE = 920,
	RNK_FNT_POINT = 921,
	RNK_FNT_TARGET2 = 922,
	RNK_FNT_DATE2 = 923,
	RNK_FNT_PLACE2 = 924,
	RNK_FNT_POINT2 = 925,
	RNK_SAM_WAKU = 926,
	RNK_CHRY = 927,
	RNK_END = 927,
	REL_NAME_WAKU = 928,
	REL_NAME_WAKU2 = 929,
	REL_NAME_WAKU_BIG = 930,
	REL_NAME_WAKU2_BIG = 931,
	REL_NAME_FLA1 = 932,
	REL_NAME_FLA2 = 933,
	REL_NAME_FLA1_BIG = 934,
	REL_NAME_FLA2_BIG = 935,
	REL_NAME_FNT = 936,
	REL_NAME_FNT2 = 937,
	REL_RES_FNT = 938,
	REL_RES_FNT2 = 939,
	REL_RES_FNT3 = 940,
	REL_RES_FNT4 = 941,
	REL_RES_FNT5 = 942,
	REL_RES_FNT6 = 943,
	REL_RES_FNT7 = 944,
	REL_RES_FNT8 = 945,
	REL_RES_FNT9 = 946,
	REL_CMNT_FNT_00 = 947,
	REL_CMNT_FNT_01 = 948,
	REL_CMNT_FNT_02 = 949,
	REL_CMNT_FNT_03 = 950,
	REL_CMNT_FNT_04 = 951,
	REL_CMNT_FNT_05 = 952,
	REL_CMNT_FNT_06 = 953,
	REL_CMNT_FNT_07 = 954,
	REL_CMNT_FNT_08 = 955,
	REL_CMNT_FNT_09 = 956,
	REL_CMNT_FNT_10 = 957,
	REL_CMNT_FNT_11 = 958,
	REL_CMNT_FNT_12 = 959,
	REL_CMNT_FNT_13 = 960,
	REL_CMNT_FNT_14 = 961,
	REL_CMNT_FNT_15 = 962,
	REL_CMNT_FNT_16 = 963,
	REL_CMNT_FNT_17 = 964,
	REL_CMNT_FNT_18 = 965,
	REL_CMNT_FNT_19 = 966,
	REL_CMNT_FNT_20 = 967,
	REL_CMNT_FNT_21 = 968,
	REL_CMNT_FNT_22 = 969,
	REL_CMNT_FNT_23 = 970,
	REL_CMNT_FNT_24 = 971,
	REL_CMNT_FNT_25 = 972,
	REL_CMNT_FNT_26 = 973,
	REL_CMNT_FNT_27 = 974,
	REL_CMNT_FNT_28 = 975,
	REL_CMNT_FNT_29 = 976,
	REL_CMNT_FNT_30 = 977,
	REL_CMNT_FNT_31 = 978,
	REL_WAKU_SAKKA0 = 979,
	REL_WAKU_SAKKA1 = 980,
	REL_WAKU_SAKKA2 = 981,
	REL_WAKU_SAKKA3 = 982,
	REL_WAKU_SAKKA4 = 983,
	REL_WAKU_SAKKA5 = 984,
	REL_WAKU_SAKKA6 = 985,
	REL_WAKU_SAKKA7 = 986,
	REL_WAKU_HIMURO0 = 987,
	REL_WAKU_HIMURO1 = 988,
	REL_WAKU_HIMURO2 = 989,
	REL_WAKU_HIMURO3 = 990,
	REL_WAKU_HIMURO4 = 991,
	REL_WAKU_HIMURO5 = 992,
	REL_WAKU_HIMURO6 = 993,
	REL_WAKU_HIMURO7 = 994,
	REL_WAKU_MUNA0 = 995,
	REL_WAKU_MUNA1 = 996,
	REL_WAKU_MUNA2 = 997,
	REL_WAKU_MUNA3 = 998,
	REL_WAKU_MUNA4 = 999,
	REL_WAKU_MUNA5 = 1000,
	REL_WAKU_MUNA6 = 1001,
	REL_WAKU_MUNA7 = 1002,
	REL_WAKU_OMOI0 = 1003,
	REL_WAKU_OMOI1 = 1004,
	REL_WAKU_OMOI2 = 1005,
	REL_WAKU_OMOI3 = 1006,
	REL_WAKU_OMOI4 = 1007,
	REL_WAKU_OMOI5 = 1008,
	REL_WAKU_OMOI6 = 1009,
	REL_WAKU_OMOI7 = 1010,
	REL_WAKU_HINA0 = 1011,
	REL_WAKU_HINA1 = 1012,
	REL_WAKU_HINA2 = 1013,
	REL_WAKU_HINA3 = 1014,
	REL_WAKU_HINA4 = 1015,
	REL_WAKU_HINA5 = 1016,
	REL_WAKU_HINA6 = 1017,
	REL_WAKU_HINA7 = 1018,
	REL_TITLE_00 = 1019,
	REL_TITLE_01 = 1020,
	REL_CAP_FNT = 1021,
	REL_FAM_NAME00 = 1022,
	REL_FAM_NAME01 = 1023,
	REL_FAM_NAME02 = 1024,
	REL_FAM_NAME03 = 1025,
	REL_END = 1025
};

enum {
	PKZ_STTS = 0,
	PKZ_BGBG = 1,
	PKZ_PLDT = 2,
	PKZ_MTOP = 3,
	PKZ_SAVE = 4,
	PKZ_PSVP = 5,
	PKZ_GOVR = 6,
	PKZ_FNDR = 7,
	PKZ_LIFE = 8,
	PKZ_SMAP = 9,
	PKZ_ITEM = 10,
	PKZ_PHOT = 11,
	PKZ_FILE = 12,
	PKZ_RANK = 13,
	PKZ_GLST = 14,
	PKZ_OPTI = 15,
	PKZ_CAME = 16,
	PKZ_ALBM = 17,
	PKZ_ALBM_SAVE = 18
};

typedef struct { // 0x74
	/* 0x00 */ float io_x[7];
	/* 0x1c */ float io_y[7];
	/* 0x38 */ float io_a[7];
	/* 0x54 */ float pos_x[1][2];
	/* 0x5c */ float pos_y[1][2];
	/* 0x64 */ u_short inn_mode_cnt;
	/* 0x66 */ u_short out_mode_cnt;
	/* 0x68 */ u_short znz_tmr[1];
	/* 0x6a */ u_short menu_cnt;
	/* 0x6c */ u_short menu_io_cnt;
	/* 0x6e */ u_char menu_io_flg;
	/* 0x6f */ u_char map_flg;
	/* 0x70 */ u_char pad_lock;
} FOR_YW2D;

typedef struct { // 0x2
	/* 0x0 */ u_char flsh_tmr;
	/* 0x1 */ u_char alpha;
} FLSH_CORE;

enum {
	HELPMSG_MODESLCT = 0,
	MODE_SLCT01 = 1,
	MODE_SLCT02 = 2,
	MODE_SLCT03 = 3,
	MODE_SLCT04 = 4,
	HELPMSG_STORYMODE = 5,
	MODE_SLCT06 = 6,
	MODE_SLCT07 = 7,
	MODE_SLCT08 = 8,
	MODE_SLCT09 = 9,
	HELPMSG_BTLMODE = 10,
	MODE_SLCT11 = 11,
	MODE_SLCT12 = 12,
	MODE_SLCT13 = 13,
	MODE_SLCT14 = 14,
	MODE_SLCT15 = 15,
	MODE_SLCT16 = 16,
	MODE_SLCT17 = 17,
	MODE_SLCT18 = 18,
	MODE_SLCT19 = 19,
	MODE_SLCT20 = 20,
	MODE_SLCT21 = 21,
	MODE_SLCT22 = 22,
	MODE_SLCT23 = 23,
	MODE_SLCT24 = 24,
	MODE_SLCT25 = 25,
	MODE_SLCT26 = 26,
	MODE_SLCT27 = 27,
	MODE_SLCT28 = 28,
	MODE_SLCT29 = 29
};

enum {
	BTL_MODE_READY = 0,
	BTL_MODE_GAME = 1,
	BTL_MODE_FAILED = 2,
	BTL_MODE_CLEAR = 3,
	BTL_MODE_NEXT = 4,
	BTL_MODE_SAVE1 = 5,
	BTL_MODE_SAVE2 = 6,
	BTL_MODE_SAVE_WAIT = 7,
	BTL_MODE_SAVE3 = 8,
	BTL_MODE_EXIT = 9,
	BTL_MODE_END = 10
};

typedef struct { // 0xe
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char csr[4];
	/* 0x5 */ u_char stage_no;
	/* 0x6 */ u_char load_mode;
	/* 0x7 */ u_char load_count;
	/* 0x8 */ u_char load_id;
	/* 0xa */ u_short time;
	/* 0xc */ u_short count;
} BTL_MODE_WRK;

typedef struct { // 0xc0
	/* 0x00 */ u_short time;
	/* 0x02 */ u_short score;
	/* 0x04 */ u_short rank[5];
	/* 0x0e */ u_char clear;
	/* 0x0f */ u_char film[2];
	/* 0x11 */ u_char reiseki;
	/* 0x12 */ u_char map_no;
	/* 0x13 */ u_char room;
	/* 0x14 */ u_char floor;
	/* 0x15 */ u_char ene_no[3];
	/* 0x18 */ u_char ene_ap[3];
	/* 0x1b */ u_char rgst_no[5];
	/* 0x20 */ u_short fly_mdl_no;
	/* 0x22 */ short int prot;
	/* 0x30 */ sceVu0FVECTOR ppos;
	/* 0x40 */ sceVu0FVECTOR epos[3];
	/* 0x70 */ sceVu0FVECTOR rgpos[5];
} STAGE_DAT;

typedef struct { // 0x10
	/* 0x0 */ u_char rank;
	/* 0x2 */ u_short best_time;
	/* 0x8 */ long int best_shot;
} STAGE_WRK;

enum {
	BTL_MSON00 = 0,
	BTL_MSON01 = 1,
	BTL_MSON02 = 2,
	BTL_MSON03 = 3,
	BTL_MSON04 = 4,
	BTL_MSON05 = 5,
	BTL_MSON06 = 6,
	BTL_MSON07 = 7,
	BTL_MSON08 = 8,
	BTL_MSON09 = 9,
	BTL_MSON10_MISSION = 10,
	BTL_MSON11_CRN = 11,
	BTL_MSON12_PTS = 12,
	BTL_MSON13_CLEAR = 13,
	BTL_MSON14_TIME = 14,
	BTL_MSON15_BEST = 15,
	BTL_MSON16_SHOT = 16,
	BTL_MSON17_TOTAL = 17,
	BTL_MSON18_POINT = 18,
	BTL_MSON19_BONUS = 19,
	BTL_MSON01_MES = 20,
	BTL_MSON02_MES = 21,
	BTL_MSON03_MES = 22,
	BTL_MSON04_MES = 23,
	BTL_MSON05_MES = 24,
	BTL_MSON06_MES = 25,
	BTL_MSON07_MES = 26,
	BTL_MSON08_MES = 27,
	BTL_MSON09_MES = 28,
	BTL_MSON10_MES = 29,
	BTL_MSON11_MES = 30,
	BTL_MSON12_MES = 31,
	BTL_MSON13_MES = 32,
	BTL_MSON14_MES = 33,
	BTL_MSON15_MES = 34,
	BTL_MSON16_MES = 35,
	BTL_MSON17_MES = 36,
	BTL_MSON18_MES = 37,
	BTL_MSON19_MES = 38,
	BTL_MSON20_MES = 39,
	BTL_STORY00_HARD = 40,
	BTL_STORY01_BATTLE = 41,
	BTL_STORY02_COS = 42
};

enum ADPCM_RMODE {
	ADPCM_NOUSE = 0,
	ADPCM_FIX = 1,
	ADPCM_POS = 2,
	ADPCM_MOVE = 3
};

enum {
	ADPCM_MODE_NONE = 0,
	ADPCM_MODE_MAP = 1,
	ADPCM_MODE_FURN = 2,
	ADPCM_MODE_HISO = 3,
	ADPCM_MODE_AUTOG = 4,
	ADPCM_MODE_GHOST = 5,
	ADPCM_MODE_EVENT = 6,
	ADPCM_MODE_GDEAD = 7,
	ADPCM_MODE_TAPE = 8,
	ADPCM_MODE_SOUL = 9,
	ADPCM_MODE_PUZZLE = 10,
	ADPCM_MODE_MAGATOKI = 11,
	ADPCM_MODE_SHINKAN = 12,
	ADPCM_MODE_SCENE = 13,
	ADPCM_MODE_GOVER = 14,
	ADPCM_MODE_BTLMODE = 15,
	ADPCM_MODE_MOVIE = 16
};

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR *mpos;
	/* 0x14 */ int file_no;
	/* 0x18 */ int count;
	/* 0x1c */ u_short fin_flm;
	/* 0x1e */ u_short fout_flm;
	/* 0x20 */ u_short vol;
	/* 0x22 */ u_short pitch;
	/* 0x24 */ u_short pan;
	/* 0x26 */ u_short start_flm;
	/* 0x28 */ u_char mode;
	/* 0x29 */ u_char ewrk_no;
} ADPCM_TUNE_PARAM;

typedef struct { // 0x40
	/* 0x00 */ ADPCM_TUNE_PARAM para;
	/* 0x30 */ int count;
	/* 0x34 */ u_char stop;
	/* 0x35 */ u_char use;
	/* 0x36 */ u_char mode;
} ADPCM_REQ_BOX;

typedef struct { // 0x440
	/* 0x000 */ ADPCM_TUNE_PARAM mpara;
	/* 0x030 */ ADPCM_TUNE_PARAM bk_para;
	/* 0x060 */ ADPCM_REQ_BOX btlmode;
	/* 0x0a0 */ ADPCM_REQ_BOX gover;
	/* 0x0e0 */ ADPCM_REQ_BOX scene;
	/* 0x120 */ ADPCM_REQ_BOX maga;
	/* 0x160 */ ADPCM_REQ_BOX shinkan;
	/* 0x1a0 */ ADPCM_REQ_BOX puzzle;
	/* 0x1e0 */ ADPCM_REQ_BOX soul;
	/* 0x220 */ ADPCM_REQ_BOX tape;
	/* 0x260 */ ADPCM_REQ_BOX gdead;
	/* 0x2a0 */ ADPCM_REQ_BOX event;
	/* 0x2e0 */ ADPCM_REQ_BOX ghost;
	/* 0x320 */ ADPCM_REQ_BOX autog;
	/* 0x360 */ ADPCM_REQ_BOX hiso;
	/* 0x3a0 */ ADPCM_REQ_BOX furn;
	/* 0x3e0 */ ADPCM_REQ_BOX map;
	/* 0x420 */ int mvol;
	/* 0x424 */ int tgt_vol;
	/* 0x428 */ int deg;
	/* 0x42c */ u_char m_flg;
	/* 0x42d */ u_char movie;
	/* 0x42e */ u_char outmode;
	/* 0x42f */ u_char type;
	/* 0x430 */ u_char mode;
} ADPCM_MAP;

typedef struct { // 0x8
	/* 0x0 */ int file_no;
	/* 0x4 */ u_short vol;
} ADPCM_VOL;

enum {
	MS_MODE_START = 0,
	MS_MODE_INIT = 1,
	MS_MODE_FADE_INN = 2,
	MS_MODE_FILM_INN = 3,
	MS_MODE_LOOP = 4,
	MS_MODE_FILM_OUT = 5,
	MS_MODE_FADE_OUT = 6,
	MS_MODE_END = 7
};

enum {
	MS_MODE_SLCT = 0,
	MS_STORY_MODE = 1,
	MS_BATTLE_MODE = 2,
	MS_OPTION = 3,
	MS_SOUND_TEST = 4,
	MS_EXIT = 5,
	MS_MODE_NUM = 6,
	MS_MISSION_SELECT = 7,
	MS_CAMERA = 8,
	MS_PHOT = 9,
	MS_SAVE = 10,
	MS_BREAK = 11,
	MS_STORY_EXIT = 12
};

enum {
	SM_CHAPTER = 0,
	SM_DIFFCULTY = 1,
	SM_COSTUME = 2,
	SM_GAME_START = 3,
	SM_EXIT = 4,
	SM_CSR_NUM = 5
};

enum {
	BM_COSTUME = 0,
	BM_CAMERA = 1,
	BM_PHOT = 2,
	BM_SAVE = 3,
	BM_MISSION = 4,
	BM_EXIT = 5,
	BM_CSR_NUM = 6
};

enum {
	CS_NORMAL = 0,
	CS_SPECIAL1 = 1,
	CS_SPECIAL2 = 2,
	CS_SPECIAL3 = 3
};

typedef struct { // 0x28
	/* 0x00 */ u_long mode_tmr;
	/* 0x08 */ u_char main_step;
	/* 0x09 */ u_char mode_step;
	/* 0x0a */ u_char chr_alp;
	/* 0x0b */ u_char bak_alp;
	/* 0x0c */ u_char win_alp;
	/* 0x0d */ u_char flm_alp;
	/* 0x0e */ u_char flm_lng;
	/* 0x0f */ u_char pre_mode;
	/* 0x10 */ u_char now_mode;
	/* 0x11 */ u_char next_mode;
	/* 0x12 */ u_char end_mode;
	/* 0x13 */ u_char side;
	/* 0x14 */ u_char opt_mode;
	/* 0x15 */ u_char csr[3];
	/* 0x18 */ u_char sm_slct[3];
	/* 0x1b */ u_char bm_slct[2];
	/* 0x1d */ u_char unsel_col[4];
} DSP_M_SLCT_WRK;

enum {
	SV_PNT_WIN_MSG00 = 0,
	SV_PNT_WIN_MSG01 = 1,
	SV_PNT_WIN_MSG02 = 2,
	SV_PNT_WIN_MSG03 = 3,
	SV_PNT_WIN_MSG04 = 4,
	SV_PNT_WIN_MSG05 = 5,
	SV_PNT_WIN_MSG06 = 6,
	SV_PNT_WIN_MSG07 = 7,
	SV_PNT_ALBUM_MSG00 = 8,
	SV_PNT_ALBUM_MSG01 = 9,
	GAME_OVER_MSG00 = 10,
	GAME_OVER_MSG01 = 11,
	GAME_OVER_MSG02 = 12,
	PAUSE_MSG01 = 13,
	PAUSE_MSG02 = 14,
	PAUSE_MSG03 = 15,
	PAUSE_MSG04 = 16,
	MENU_MSG_YES_NO = 17,
	FNDR_CHRG00 = 18,
	FNDR_CHRG01 = 19,
	FNDR_CHRG02 = 20,
	FNDR_CHRG03 = 21,
	FNDR_CHRG04 = 22,
	FNDR_CHRG05 = 23,
	FNDR_CHRG06 = 24,
	FNDR_CHRG07 = 25,
	FNDR_CHRG08 = 26,
	FNDR_CHRG09 = 27,
	LOCK_BTL00 = 28,
	LOCK_BTL01 = 29
};

enum {
	GET_MSG_ERR = 0,
	GET_MSG_SLCT = 1,
	GET_MSG_000B = 2,
	GET_MSG_000A = 3
};

enum {
	NO_FILE_ERR = 0,
	FILE_SLSH = 1,
	FILE_PAGE = 2
};

enum {
	ITEM_DO_USE = 0,
	ITEM_YES_NO = 1,
	ITEM_NO_USE = 2,
	ITEM_SET_FILM = 3,
	ITEM_YET_USE = 4,
	ITEM_OVER_FILM = 5
};

enum {
	PHOT_NO_HAVE = 0,
	PHOT_DO_DEL = 1,
	PHOT_DEL_SEAL = 2,
	PHOT_NOTHING = 3,
	PHOT_YES_NO = 4,
	PHOT_SLASH = 5,
	PHOT_COLON = 6,
	PHOT_CHECK = 7
};

enum {
	OA_MNU_CMD_SIZE = 0,
	OA_MNU_CMD_MOVE = 1,
	OA_MNU_CMD_DEL = 2,
	OA_MNU_CMD_SAVE = 3,
	OA_MNU_CMD_LOAD = 4,
	OA_MNU_CMD_EXIT = 5,
	OA_MNU_CMD_NUM = 6
};

typedef struct { // 0x44
	/* 0x00 */ u_int src_addr;
	/* 0x04 */ u_int cpy_addr;
	/* 0x08 */ u_short key_nashi_nori_take;
	/* 0x0a */ u_char is_title;
	/* 0x0b */ u_char side;
	/* 0x0c */ u_char side_chng;
	/* 0x0d */ u_char mode;
	/* 0x0e */ u_char mode_chng;
	/* 0x0f */ u_char pht_max[2];
	/* 0x11 */ u_char cl_type[2];
	/* 0x13 */ u_char slot[2];
	/* 0x15 */ u_char file[2];
	/* 0x17 */ u_char csr[5];
	/* 0x1c */ u_char csr_tim;
	/* 0x1d */ u_char buf[9];
	/* 0x26 */ u_char buf_sid[9];
	/* 0x2f */ u_char buf_set;
	/* 0x30 */ u_char mem;
	/* 0x31 */ u_char csr_mode;
	/* 0x32 */ u_char exit_realy;
	/* 0x33 */ u_char pst_mode;
	/* 0x34 */ u_char menu_alp;
	/* 0x35 */ u_char yes_no;
	/* 0x36 */ u_char pst_yes_no;
	/* 0x37 */ u_char rtrn_bak;
	/* 0x38 */ u_char io_mode;
	/* 0x39 */ u_char all_alp;
	/* 0x3a */ u_char inf_alp;
	/* 0x3b */ u_char dat_alp;
	/* 0x3c */ u_char pop_ud;
	/* 0x3d */ u_char buf_exp_flg;
	/* 0x3e */ u_char flsh_tmr;
	/* 0x3f */ u_char side_chng_wait;
	/* 0x40 */ u_char side_chng_mode;
	/* 0x41 */ u_char copy_wait;
	/* 0x42 */ u_char paste_wait;
} DSP_MEM_ALBM;

typedef struct { // 0x4
	/* 0x0 */ short int p;
	/* 0x2 */ short int n;
} CSR_ADD;

enum {
	GAME_INIT_LOAD_START = 0,
	GAME_INIT_LOAD_MSG_DAT = 1,
	GAME_INIT_WAIT_MSG_DAT = 2,
	GAME_INIT_LOAD_FONT_TEX = 3,
	GAME_INIT_WAIT_FONT_TEX = 4,
	GAME_INIT_LOAD_SE_STAT = 5,
	GAME_INIT_WAIT_SE_STAT = 6,
	GAME_INIT_LOAD_END = 7
};

typedef struct { // 0x10
	/* 0x0 */ unsigned int data;
	/* 0x4 */ unsigned int addr;
	/* 0x8 */ unsigned int size;
	/* 0xc */ unsigned int mode;
} sceSifDmaData;

enum {
	CD_LOADINIT = 0,
	CD_FILELOAD = 1,
	CD_FILEEND = 2
};

typedef struct { // 0x8
	/* 0x0 */ u_int start;
	/* 0x4 */ u_int size;
} IMG_ARRANGEMENT;

typedef struct { // 0x3
	/* 0x0 */ u_char start_pos;
	/* 0x1 */ u_char req_pos;
	/* 0x2 */ u_char com_num;
} CDVD_REQ_STAT;

typedef struct { // 0x1
	/* 0x0 */ char stat;
} LOAD_FINISH_DATA;

enum LF_DATA_USE {
	LF_DATA_USE_OFF = 0,
	LF_DATA_USE_ON = 1
};

enum ADPCM_GHOST_MODE {
	ADP_GST_INIT = 0,
	ADP_GST_REQ = 1,
	ADP_GST_FADEIN = 2,
	ADP_GST_PLAY = 3,
	ADP_GST_FADEOUT = 4,
	ADP_GST_STOP = 5
};

enum A_MODE_BTL_MODE {
	AMBM_MODE_WAIT1 = 0,
	AMBM_MODE_WAIT2 = 1,
	AMBM_MODE_WAIT3 = 2,
	AMBM_MODE_PLAY = 3,
	AMBM_MODE_END_WAIT = 4,
	AMBM_MODE_PLAYING = 5
};

enum A_MODE_GOVER_MODE {
	AMGO_MODE_PRE_FADE_OUT = 0,
	AMGO_MODE_REQ_WAIT_STOP = 1,
	AMGO_MODE_REQ_PLAY = 2,
	AMGO_MODE_REQ_PLAYING = 3,
	AMGO_MODE_REQ_STOP = 4,
	AMGO_MODE_END = 5
};

enum EA_SCENE_MODE {
	EAS_MODE_WAIT1 = 0,
	EAS_MODE_WAIT2 = 1,
	EAS_MODE_WAIT3 = 2,
	EAS_MODE_WAIT4 = 3,
	EAS_MODE_WAIT5 = 4
};

// warning: multiple differing types with the same name (enum constant not equal)
enum A_MODE_PZL_MODE {
	AMMG_MODE_FIRST_FOUT = 0,
	AMMG_MODE_FOUT_WAIT = 1,
	AMMG_MODE_MIN_BGM = 2,
	AMMG_MODE_MIN_BGM_FADE = 3,
	AMMG_MODE_MAGA_PLAY_WAIT = 4,
	AMMG_MODE_PLAY = 5,
	AMMG_MODE_PLAYING = 6
};

// warning: multiple differing types with the same name (enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMSH_MODE_PRE_FADE_OUT = 0,
	AMSH_MODE_REQ_WAIT_STOP = 1,
	AMSH_MODE_REQ_PLAY = 2,
	AMSH_MODE_REQ_PLAYING = 3,
	AMSH_MODE_END = 4,
	AMSH_MODE_REQ_STOP_REQ = 5,
	AMSH_MODE_REQ_STOP_WAIT = 6
};

// warning: multiple differing types with the same name (enum constant not equal)
enum A_MODE_PZL_MODE {
	AMPZ_MODE_WAIT1 = 0,
	AMPZ_MODE_WAIT2 = 1,
	AMPZ_MODE_WAIT3 = 2,
	AMPZ_MODE_PLAY = 3,
	AMPZ_MODE_END_WAIT = 4,
	AMPZ_MODE_PLAYING = 5
};

enum A_MODE_SOUL_MODE {
	AMSL_MODE_PRE_FADE_OUT = 0,
	AMSL_MODE_REQ_WAIT1 = 1,
	AMSL_MODE_REQ_WAIT2 = 2,
	AMSL_MODE_REQ_PLAY = 3,
	AMSL_MODE_REQ_STOP = 4,
	AMSL_MODE_END = 5
};

enum A_MODE_TAPE_MODE {
	AMTP_MODE_PRE_FADE_OUT = 0,
	AMTP_MODE_REQ_WAIT_STOP = 1,
	AMTP_MODE_REQ_PLAY = 2,
	AMTP_MODE_REQ_PLAYING = 3,
	AMTP_MODE_REQ_STOP = 4,
	AMTP_MODE_END = 5
};

// warning: multiple differing types with the same name (enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMGD_MODE_PRE_FADE_OUT = 0,
	AMGD_MODE_REQ_WAIT_STOP = 1,
	AMGD_MODE_REQ_PLAY = 2,
	AMGD_MODE_REQ_PLAYING = 3,
	AMGD_MODE_REQ_STOP = 4,
	AMGD_MODE_END = 5
};

// warning: multiple differing types with the same name (enum constant not equal)
enum A_MODE_GDEAD_MODE {
	AMEV_MODE_PRE_FADE_OUT = 0,
	AMEV_MODE_REQ_WAIT_STOP = 1,
	AMEV_MODE_REQ_PLAY = 2,
	AMEV_MODE_REQ_PLAYING = 3,
	AMEV_MODE_END = 4
};

enum A_MODE_GHOST_MODE {
	AMG_MODE_PRE_FADE_OUT = 0,
	AMG_MODE_REQ_WAIT_STOP = 1,
	AMG_MODE_REQ_PLAY = 2,
	AMG_MODE_REQ_STOP = 3,
	AMG_MODE_END = 4
};

enum A_MODE_AUTOG_MODE {
	AMAG_MODE_PRE_FADE_OUT = 0,
	AMAG_MODE_REQ_WAIT_STOP = 1,
	AMAG_MODE_REQ_PLAY = 2,
	AMAG_MODE_REQ_STOP = 3,
	AMAG_MODE_END = 4
};

enum A_MODE_HISO_MODE {
	AMHS_MODE_PRE_FADE_OUT = 0,
	AMHS_MODE_REQ_WAIT_STOP = 1,
	AMHS_MODE_REQ_PLAY = 2,
	AMHS_MODE_REQ_STOP = 3,
	AMHS_MODE_END = 4
};

enum A_MODE_FURN_MODE {
	AMFR_MODE_PRE_FADE_OUT = 0,
	AMFR_MODE_REQ_WAIT_STOP = 1,
	AMFR_MODE_REQ_PLAY = 2,
	AMFR_MODE_REQ_STOP = 3,
	AMFR_MODE_END = 4
};

typedef struct { // 0xc
	/* 0x0 */ u_int fno[3];
} ROOM_DOOR_SE;

typedef struct { // 0x14
	/* 0x00 */ u_int fno[5];
} ROOM_FOOT_SE;

typedef struct { // 0x8
	/* 0x0 */ int file_no;
	/* 0x4 */ u_short vol;
} ADPCM_ROOM_PLAY;

typedef struct { // 0xc
	/* 0x0 */ u_short rvol;
	/* 0x2 */ u_char door_no;
	/* 0x3 */ u_char foot_no;
	/* 0x4 */ u_char srund_no;
	/* 0x5 */ u_char event_no;
	/* 0x6 */ u_char adpcm[5];
} ROOM_SOUND_INFO;

enum {
	EWRK_GHOST0 = 0,
	EWRK_GHOST1 = 1,
	EWRK_GHOST2 = 2,
	EWRK_AUTO = 3,
	ET_JIBAKU = 0,
	ET_FUYU = 1,
	ET_AUTO = 2,
	ET_FLY_MOVE = 3,
	JED0_BOUREI1 = 0,
	AED0_SAKKA1 = 0,
	AED0_SAKKA2 = 1,
	AED0_JOSYU1 = 2,
	JED_HENSYUSYA1 = 0,
	JED_HENSYUSYA2 = 1,
	JED_HENSYUSYA3 = 2,
	JED_TENAGA = 3,
	JED_KYOUKOTSU = 4,
	JED_SAKASA = 5,
	JED_MAYOIGO1 = 6,
	JED_JOSYU1 = 7,
	JED_NAMAKUBI = 8,
	JED_JOSYU3 = 9,
	JED_SAKKA = 10,
	JED_MAGATOKI1 = 11,
	JED_MAGATOKI_M1 = 12,
	FED_BOUREI1 = 0,
	FED_SAKASA = 1,
	FED_NAMAKUBI = 2,
	FED_KYOUKOTSU = 3,
	FED_NAMAKUBI2 = 4,
	FED_SAKASA2 = 5,
	FED_SAKASA3 = 6,
	FED_YUKATE = 7,
	AED_HENSYUSYA1 = 0,
	AED_HENSYUSYA2 = 1,
	AED_HENSYUSYA3 = 2,
	AED_HENSYU_REI3 = 3,
	AED_HENSYU_REI1 = 4,
	AED_HENSYU_REI2 = 5,
	AED_HENSYUSYA5 = 5,
	AED_JOSYU1 = 6,
	AED_MEKAKUSHI1 = 7,
	AED_JOSYU2 = 8,
	AED_JOSYU3 = 9,
	AED_MINZOKUTSUMA1 = 10,
	AED_KUBI1 = 11,
	AED_SAKKA3 = 12,
	AED_KIRIE1 = 13,
	AED_KOKIRIE1 = 13,
	AED_SAKKA1 = 14,
	AED_SAKKA2 = 15,
	AED_MAHUYU1 = 16,
	AED_HENSYU_REI4 = 17,
	AED_HENSYU_REI5 = 18,
	AED_JOSYU4 = 19,
	AED_KIRIE2 = 20,
	AED_JOSYU5 = 21,
	AED_SAKKA4 = 22,
	AED_SAKKA5 = 23,
	AED_SAKASA1 = 24,
	AED_HENSYUSYA6 = 25,
	AED_HENSYU_REI6 = 26,
	JED2_MEKAKUSHI1 = 0,
	JED2_TENAGA = 1,
	JED2_MAYOIGO3 = 2,
	JED2_MEKAKUSHI2 = 3,
	JED2_MEKAKUSHI3 = 4,
	JED2_KYOUKOTSUMAN = 5,
	JED2_MEKAKUSHI4 = 6,
	JED2_MAYOIGO1 = 7,
	JED2_MAYOIGO2 = 8,
	JED2_KAMIONNA = 9,
	JED2_MEKAKUSHI5 = 10,
	JED2_MEKAKUSHI6 = 11,
	JED2_SAKASA = 12,
	JED2_MEKAKUSHI7 = 13,
	JED2_MINZOKU1 = 14,
	JED2_MEKAKUSHI8 = 15,
	JED2_MINZOKUTSUMA = 16,
	JED2_MINZOKU2 = 17,
	JED2_MEKAKUSHI9 = 18,
	JED2_MAGATOKI2 = 19,
	JED2_MAGATOKI_M2 = 20,
	FED2_BOUREI = 0,
	FED2_SAKASA = 1,
	FED2_NAMAKUBI = 2,
	FED2_KYOUKOTSU = 3,
	FED2_KYOUKOTSUMAN = 4,
	FED2_NAMAKUBI2 = 5,
	FED2_SAKASA2 = 6,
	FED2_SAKASA3 = 7,
	FED2_YUKATE = 8,
	AED2_MAYOIGO1 = 0,
	AED2_MAYOIGO2 = 1,
	AED2_MAHUYU = 2,
	AED2_MAYOIGO5 = 3,
	AED2_MINZOKU1 = 4,
	AED2_MEKAKUSHI3 = 5,
	AED2_KIRIE2 = 6,
	AED2_MINZOKU2 = 7,
	AED2_MINZOKUTSUMA1 = 8,
	AED2_MINZOKU3 = 9,
	AED2_MINZOKU4 = 10,
	JED3_TOSHU1 = 0,
	JED3_KUBINASHI1 = 1,
	JED3_KUBINASHI2 = 2,
	JED3_KUBINASHI3 = 3,
	JED3_KUBINASHI4 = 4,
	JED3_TOSHU2 = 5,
	JED3_MAGATOKI_M1 = 6,
	FED3_KAMIONNA1 = 0,
	FED3_KOMUSOU1 = 1,
	FED3_KYOUKOTSU1 = 2,
	FED3_KYOUKOTSUMAN1 = 3,
	FED3_HAIREI1 = 4,
	FED3_SAKASA1 = 5,
	FED3_BOUREI1 = 6,
	FED3_NAMAKUBI1 = 7,
	FED3_NAMAKUBI2 = 8,
	FED3_BOUREI2 = 9,
	FED3_NAWAMIKO1 = 10,
	FED3_SYOUKI1 = 11,
	FED3_SYOUKI2 = 12,
	FED3_SYOUKI3 = 13,
	FED3_KOMUSOU2 = 14,
	FED3_KOMUSOU3 = 15,
	FED3_HAIREI2 = 16,
	FED3_BOUREI3 = 17,
	FED3_NAWAMIKO2 = 18,
	FED3_YUKATE = 19,
	AED3_TOSHU1 = 0,
	AED3_TOSHU2 = 1,
	JED4_KUBI1 = 0,
	JED4_MAGATOKI1 = 1,
	JED4_KIRIE1 = 2,
	JED4_MAGATOKI_M1 = 3,
	JED4_KYOUKOTSU1 = 4,
	JED4_KYOUKOTSUMAN1 = 5,
	JED4_NAWAMIKO1 = 6,
	JED4_NAWAMIKO2 = 7,
	JED4_KIRIE2 = 8,
	FED4_KAMIONNA1 = 0,
	FED4_KOMUSOU1 = 1,
	FED4_HAIREI1 = 2,
	FED4_SAKASA1 = 3,
	FED4_BOUREI1 = 4,
	FED4_NAMAKUBI1 = 5,
	FED4_NAMAKUBI2 = 6,
	FED4_BOUREI2 = 7,
	FED4_SYOUKI1 = 8,
	FED4_SYOUKI2 = 9,
	FED4_SYOUKI3 = 10,
	FED4_KOMUSOU2 = 11,
	FED4_KOMUSOU3 = 12,
	FED4_HAIREI2 = 13,
	FED4_BOUREI3 = 14,
	FED4_YUKATE = 15,
	AED4_KOKIRIE1 = 0,
	AGST000_SAKKA0 = 0,
	AGST001_SAKKA1 = 1,
	AGST002_JYOSYU0 = 2,
	AGST100_HENSYU0 = 0,
	AGST101_HENSYU1 = 1,
	AGST102_HENSYU2 = 2,
	AGST103_HENSYU3 = 3,
	AGST104_HENSYU4 = 4,
	AGST105_HENSYU5 = 5,
	AGST106_JYOSYU0 = 6,
	AGST107_MEKAKUSHI0 = 7,
	AGST108_JYOSYU1 = 8,
	AGST109_JYOSYU2 = 9,
	AGST110_MINTSUMA0 = 10,
	AGST111_KUBI0 = 11,
	AGST112_SAKKA0 = 12,
	AGST113_KOKIRIE0 = 13,
	AGST114_SAKKA1 = 14,
	AGST115_SAKKA2 = 15,
	AGST116_MAFUYU0 = 16,
	AGST117_HENSYU6 = 17,
	AGST118_HENSYU7 = 18,
	AGST119_JYOSYU3 = 19,
	AGST120_KOKIRIE1 = 20,
	AGST121_JYOSYU4 = 21,
	AGST122_SAKKA3 = 22,
	AGST123_SAKKA4 = 23,
	AGST124_SAKASA0 = 24,
	AGST125_HENSYU8 = 25,
	AGST126_HENSYU9 = 26,
	AGST127_HENSYU10 = 27,
	AGST128_HENSYU11 = 28,
	AGST129_JYOSYU5 = 29,
	AGST130_JYOSYU6 = 30,
	AGST131_JYOSYU7 = 31,
	AGST132_JYOSYU8 = 32,
	AGST133_SHITAI = 33,
	AGST200_MAYOIGO0 = 0,
	AGST201_MAYOIGO1 = 1,
	AGST202_MINZOKU0 = 2,
	AGST203_MAYOIGO2 = 3,
	AGST204_MINZOKU1 = 4,
	AGST205_MAFUYU0 = 5,
	AGST206_MAYOIGO3 = 6,
	AGST207_MINZOKU3 = 7,
	AGST208_MEKAKUSHI0 = 8,
	AGST209_KOKIRIE0 = 9,
	AGST210_MAYOIGO4 = 10,
	AGST211_MINZOKU4 = 11,
	AGST212_MINTSUMA0 = 12,
	AGST213_MINZOKU5 = 13,
	AGST214_MINZOKU6 = 14,
	AGST215_MINTSUMA1 = 15,
	AGST216_MINZOKU2 = 16,
	AGST300_TOUSHU0 = 0,
	AGST301_TOUSHU1 = 1,
	AGST302_TOUSHU2 = 2,
	AGST400_KOKIREI0 = 0,
	REIKON100 = 0,
	REIKON101 = 1,
	REIKON102 = 2,
	REIKON103 = 3,
	REIKON105 = 4,
	REIKON110 = 5,
	REIKON112 = 6,
	REIKON114 = 7,
	REIKON119 = 8,
	REIKON120 = 9,
	REIKON121 = 10,
	REIKON123 = 11,
	REIKON128 = 12,
	REIKON130 = 13,
	REIKON131 = 14,
	REIKON132 = 15,
	REIKON202 = 16,
	REIKON203 = 17,
	REIKON204 = 18,
	REIKON206 = 19,
	REIKON211 = 20,
	REIKON212 = 21,
	REIKON214 = 22,
	REIKON215 = 23,
	REIKON216 = 24,
	REIKON000 = 25
};

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ int se_no;
	/* 0x14 */ int vpos;
	/* 0x18 */ int ewrk_no;
	/* 0x1c */ int fin_spd;
	/* 0x20 */ u_short vol_max;
	/* 0x22 */ u_short pitch;
	/* 0x24 */ u_char mode;
	/* 0x25 */ u_char room_id;
	/* 0x26 */ u_char menu;
} SE_REQ_TMP_STR;

enum SE_PARAM_NO {
	SE_PARAM_NO_000 = 0,
	SE_PARAM_NO_001 = 1,
	SE_PARAM_NO_002 = 2,
	SE_PARAM_NO_003 = 3,
	SE_PARAM_NO_004 = 4,
	SE_PARAM_NO_005 = 5,
	SE_PARAM_NO_006 = 6,
	SE_PARAM_NO_007 = 7,
	SE_PARAM_NO_008 = 8,
	SE_PARAM_NO_009 = 9,
	SE_PARAM_NO_010 = 10,
	SE_PARAM_NO_011 = 11,
	SE_PARAM_NO_012 = 12,
	SE_PARAM_NO_013 = 13
};

enum SE_TRANS_MODE {
	STMODE_READY = 0,
	STMODE_EE2IOP = 1,
	STMODE_IOP2SPU = 2,
	STMODE_USEOK = 3
};

typedef struct { // 0x10
	/* 0x0 */ u_int dma_id;
	/* 0x4 */ u_int size;
	/* 0x8 */ int file_no;
	/* 0xc */ u_char trans_pos;
	/* 0xd */ u_char fg_no;
	/* 0xe */ u_char mode;
} SE_TRANS_CTRL;

typedef struct { // 0x8
	/* 0x0 */ int file_no;
	/* 0x4 */ u_char fg_no;
} FG_FILE_TBL;

enum DOOR_OPEN_CTRL_MODE {
	DOCM_FREE = 0,
	DOCM_MOVE = 1,
	DOCM_LOAD_WAIT = 2,
	DOCM_WAIT = 3,
	DOCM_MOTION = 4,
	DOCM_MOTION_ADD = 5,
	DOCM_MOTION_ADD2 = 6,
	DOCM_MOTION_ADD3 = 7,
	DOCM_WAIT_MOTION = 8,
	DCOM_WAIT_OPEN = 9
};

enum DOOR_LOCK_STTS {
	DOOR_LOCK_UNLOCKED = 0,
	DOOR_LOCK_LOCKED = 1,
	DOOR_LOCK_NUM = 2
};

typedef struct { // 0x10
	/* 0x0 */ float rot;
	/* 0x4 */ u_short pos_x;
	/* 0x6 */ short int pos_y;
	/* 0x8 */ u_short pos_z;
	/* 0xa */ short int pad_s;
	/* 0xc */ u_short type;
	/* 0xe */ u_short mdl_no;
} DOOR_DATA_POP;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR spos;
	/* 0x10 */ sceVu0FVECTOR epos;
	/* 0x20 */ float srot;
	/* 0x24 */ float erot;
	/* 0x28 */ float door_pre;
	/* 0x2c */ u_char stts;
	/* 0x2d */ u_char mode;
	/* 0x2e */ u_short move_flame;
	/* 0x30 */ u_short mtn_flame;
	/* 0x32 */ u_short wait_flame;
	/* 0x34 */ u_short count;
	/* 0x36 */ u_char mtn_dat_no;
	/* 0x37 */ u_char open[2];
	/* 0x39 */ u_char chk_flg;
} DOOR_OPEN_CTRL;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR npos;
	/* 0x20 */ float rot;
	/* 0x24 */ float nrot;
	/* 0x28 */ float *open_tbl;
	/* 0x2c */ u_short door_id;
	/* 0x2e */ u_short count;
	/* 0x30 */ u_short mdl_no;
	/* 0x32 */ u_short type;
	/* 0x34 */ u_char fwrk_no;
	/* 0x35 */ u_char stts;
	/* 0x36 */ u_char use;
	/* 0x37 */ u_char dmd_no;
	/* 0x38 */ u_char hchk_mode;
	/* 0x39 */ u_char lock;
} DOOR_WRK;

typedef struct { // 0x40
	/* 0x00 */ float *open_tbl;
	/* 0x10 */ sceVu0FVECTOR npos;
	/* 0x20 */ float nrot;
	/* 0x24 */ float inert;
	/* 0x28 */ u_char stts;
	/* 0x2a */ u_short type;
	/* 0x2c */ u_short door_id;
	/* 0x2e */ u_short count;
	/* 0x30 */ u_short dw_no;
	/* 0x32 */ u_short stop_cnt;
	/* 0x34 */ u_char dmd_no;
	/* 0x35 */ u_char opnmtn_flg;
	/* 0x36 */ u_char reopen;
} AUTO_CLOSE_DOOR_WRK;

typedef struct { // 0x40
	/* 0x00 */ float *open_tbl;
	/* 0x10 */ sceVu0FVECTOR npos;
	/* 0x20 */ float nrot;
	/* 0x24 */ float inert;
	/* 0x28 */ u_char stts;
	/* 0x2a */ u_short type;
	/* 0x2c */ u_short door_id;
	/* 0x2e */ u_short count;
	/* 0x30 */ u_short dw_no;
	/* 0x32 */ u_char dmd_no;
	/* 0x33 */ u_char opnmtn_flg;
} NON_CLOSE_DOOR_WRK;

typedef struct { // 0x10
	/* 0x0 */ u_short attribute;
	/* 0x2 */ short int open_wait;
	/* 0x4 */ short int close_wait;
	/* 0x6 */ short int move_max;
	/* 0x8 */ int se_file;
	/* 0xc */ u_char room_id;
	/* 0xe */ u_short dbl_did;
} DOOR_TYPE_DAT;

typedef struct { // 0x10
	/* 0x0 */ float sx;
	/* 0x4 */ float sy;
	/* 0x8 */ u_char dmd_no1;
	/* 0x9 */ u_char dmd_no2;
	/* 0xa */ u_char anm_no;
	/* 0xb */ u_char anm_last_no;
	/* 0xc */ u_char c_dmd_no1;
	/* 0xd */ u_char c_dmd_no2;
	/* 0xe */ u_char c_anm_no;
} DOOR_MTN_DAT;

typedef struct { // 0x8
	/* 0x0 */ u_short st_tbl_pos;
	/* 0x2 */ u_short start_cnt;
	/* 0x4 */ u_short end_cnt;
	/* 0x6 */ u_short sel_cnt;
} DOOR_MOVE_DAT;

enum DOOR_OPEN_CALL_MOTION {
	DOORR_NEAR_PULL = 0,
	DOORR_FAR_PULL = 1,
	DOORR_LEFT_PULL = 2,
	DOORR_PUSH = 3,
	DOORL_NEAR_PULL = 4,
	DOORL_FAR_PULL = 5,
	DOORL_LEFT_PULL = 6,
	DOORL_PUSH = 7,
	DOORD_NEAR_PULL = 8,
	DOORD_FAR_PULL = 9,
	DOORD_PUSH = 10,
	FUSUMAR_NML = 11,
	FUSUMAR_RIGHT = 12,
	FUSUMAL_NML = 13,
	FUSUMAL_LEFT = 14,
	FUSUMAD_NML = 15,
	DOOR_ROT = 16,
	DOOR_KUGURI_PUSH = 17,
	DOOR_KUGURI_PULL = 18
};

enum DOOR_OPEN_MOTION_TBL {
	DMOT_TBL_ODSR_NEAR_PULL = 0,
	DMOT_TBL_ODSR_FAR_PULL = 1,
	DMOT_TBL_ODSR_LEFT_PULL = 2,
	DMOT_TBL_ODSR_PUSH = 3,
	DMOT_TBL_ODSL_NEAR_PULL = 4,
	DMOT_TBL_ODSL_FAR_PULL = 5,
	DMOT_TBL_ODSL_LEFT_PULL = 6,
	DMOT_TBL_ODSL_PUSH = 7,
	DMOT_TBL_ODDL_NEAR_PULL = 8,
	DMOT_TBL_ODDR_NEAR_PULL = 9,
	DMOT_TBL_ODDL_FAR_PULL = 10,
	DMOT_TBL_ODDR_FAR_PULL = 11,
	DMOT_TBL_ODDL_PUSH = 12,
	DMOT_TBL_ODDR_PUSH = 13,
	DMOT_TBL_OFSR_NML = 14,
	DMOT_TBL_OFSR_RIGHT = 15,
	DMOT_TBL_OFSL_NML = 16,
	DMOT_TBL_OFSL_LEFT = 17,
	DMOT_TBL_OFDL_NML = 18,
	DMOT_TBL_OFDR_NML = 19,
	DMOT_TBL_CDSR_PULL = 20,
	DMOT_TBL_CDSR_PUSH = 21,
	DMOT_TBL_CDSL_PULL = 22,
	DMOT_TBL_CDSL_PUSH = 23,
	DMOT_TBL_CDDL_PULL = 24,
	DMOT_TBL_CDDR_PULL = 25,
	DMOT_TBL_CDDL_PUSH = 26,
	DMOT_TBL_CDDR_PUSH = 27,
	DMOT_TBL_CFDL_NML = 28,
	DMOT_TBL_CFDR_NML = 29,
	DMOT_TBL_OROT_NML = 30,
	DMOT_TBL_OKUGURI_PUSH = 31,
	DMOT_TBL_OKUGURI_PULL = 32
};

enum {
	DOOR_STTS_NO_USE = 0,
	DOOR_STTS_CLOSE = 1,
	DOOR_STTS_OPENMTN = 2,
	DOOR_STTS_OPENING = 3,
	DOOR_STTS_OPEN = 4,
	DOOR_STTS_OPEN_FORCE = 5,
	DOOR_STTS_CLOSING = 6,
	DOOR_STTS_INERT_CLS = 7,
	DOOR_STTS_INERT_OPN = 8,
	DOOR_STTS_MANUAL_OPEN = 9,
	DOOR_STTS_NUM = 10
};

typedef struct { // 0xa
	/* 0x0 */ u_short camera_no;
	/* 0x2 */ u_char room_id;
	/* 0x3 */ u_char pad;
	/* 0x4 */ u_short door_id[2];
	/* 0x8 */ u_char sq_num;
} CAMERA4_DATA_POP;

enum BGM_NO {
	BN_BGM00 = 0,
	BN_BGM01 = 1,
	BN_BGM02 = 2,
	BN_BGM03 = 3,
	BN_BGM04 = 4,
	BN_BGM05 = 5,
	BN_BGM10 = 6,
	BN_BGM12 = 7,
	BN_BGM13 = 8,
	BN_BGM14 = 9,
	BN_BGM15 = 10,
	BN_BGM16 = 11,
	BN_BGM18 = 12,
	BN_TAPE = 13,
	BN_USIRO = 14,
	BN_IKESU = 15,
	BN_KAZE = 16,
	BN_NAKANIWA = 17,
	BN_NAKASU = 18,
	BN_SANDOU = 19,
	BN_URANIWA = 20,
	BN_BGM19 = 21,
	BN_KAMINARI = 22,
	BN_NOTHING = 23
};

typedef struct { // 0x5
	/* 0x0 */ u_char num;
	/* 0x1 */ u_char rate[4];
} SE_FOOT_RAND_ITA;

typedef struct { // 0x2
	/* 0x0 */ char row;
	/* 0x1 */ char col;
} DCT_ROOT;

typedef struct { // 0xc
	/* 0x0 */ char *file;
	/* 0x4 */ u_char mask;
	/* 0x8 */ int rack;
} BIT_FILE;

typedef struct { // 0x10
	/* 0x0 */ int screen_flag;
	/* 0x4 */ int time;
	/* 0x8 */ int cnt;
	/* 0xc */ u_char col_r;
	/* 0xd */ u_char col_g;
	/* 0xe */ u_char col_b;
	/* 0xf */ u_char now_alpha;
} SCRCTRL;

enum {
	GUS_NO_MOVE = 0,
	X_PLUS = 1,
	X_MINUS = 2,
	Y_PLUS = 3,
	Y_MINUS = 4,
	Z_PLUS = 5,
	Z_MINUS = 6
};

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR fall_speed;
	/* 0x10 */ sceVu0IVECTOR wind;
	/* 0x20 */ sceVu0FVECTOR rotate;
	/* 0x30 */ int stop_time;
	/* 0x34 */ short int r;
	/* 0x36 */ short int g;
	/* 0x38 */ short int b;
	/* 0x3a */ short int a;
} FALL_TABLE;

typedef struct { // 0x17b0
	/* 0x0000 */ sceVu0FVECTOR mpos_keep;
	/* 0x0010 */ void *pos_p;
	/* 0x0014 */ short int at_ground[600];
	/* 0x04c4 */ short int rgba[600][4];
	/* 0x1784 */ int fnum_keep;
	/* 0x1788 */ int fall_count;
	/* 0x178c */ float fall_rate;
	/* 0x1790 */ float rate_remain;
	/* 0x1794 */ short int mode_keep;
	/* 0x1796 */ short int area_keep;
	/* 0x1798 */ short int dist;
	/* 0x179a */ short int init_flg;
	/* 0x179c */ short int offs[3];
} LEAVES_TABLE;

enum {
	BAT_READY_GO = 0,
	BAT_MISSION_FAILED = 1,
	BAT_MISSION_CLEAR = 2,
	BAT_MISSION_ALL_CLEAR = 3,
	BAT_RESULT = 4,
	BAT_STORY_CLEAR = 5
};

typedef struct { // 0x8
	/* 0x0 */ void *start_point;
	/* 0x4 */ short int start_num;
	/* 0x6 */ short int end_num;
} ANM_WRK;

typedef struct { // 0x14
	/* 0x00 */ short int x_trans;
	/* 0x02 */ short int y_trans;
	/* 0x04 */ short int x_scale;
	/* 0x06 */ short int y_scale;
	/* 0x08 */ short int rotation;
	/* 0x0a */ short int alpha;
	/* 0x0c */ short int counter;
	/* 0x10 */ u_int attribute;
} ANM2D_DAT_TABLE;

typedef struct { // 0x110
	/* 0x000 */ int anm_index;
	/* 0x004 */ SPRT_SDAT *sdat_p;
	/* 0x008 */ SPRT_SDAT sdat[8];
	/* 0x078 */ SPRT_SROT srot[8];
	/* 0x0b8 */ SPRT_SSCL sscl[8];
	/* 0x0f8 */ int sp_no;
	/* 0x0fc */ void *table_p;
	/* 0x100 */ short int x_speed;
	/* 0x102 */ short int y_speed;
	/* 0x104 */ short int xscal_off;
	/* 0x106 */ short int yscal_off;
	/* 0x108 */ short int rot_off;
	/* 0x10a */ short int alpha_off;
	/* 0x10c */ short int counter;
	/* 0x10e */ short int pad;
} ANM2D_WRK_TABLE;

enum {
	TM_SM_CHAPTER = 0,
	TM_SM_DIFFICULTY = 1,
	TM_SM_GAME_START = 2,
	TM_SM_EXIT = 3,
	TM_SM_DAI = 4,
	TM_SM_ONE = 5,
	TM_SM_TWO = 6,
	TM_SM_THREE = 7,
	TM_SM_SAI = 8,
	TM_SM_SYU = 9,
	TM_SM_YA = 10,
	TM_SM_JO = 11,
	TM_SM_SYO = 12,
	TM_SM_COSTUME = 13,
	TM_SM_CONTINUE = 14,
	TM_SM_NORMAL = 15,
	TM_SM_HARD = 16,
	TM_SM_NIGHTMARE = 17,
	TM_SM_SPECIAL = 18,
	TM_SM_CUSTOM = 19,
	TM_SM_KAKKO_L = 20,
	TM_SM_KAKKO_R = 21,
	TM_SM_PLAY_S = 22,
	TM_SM_PLAY_M = 23,
	TM_SM_STOP = 24,
	TM_SM_FW = 25,
	TM_SMR_S = 26,
	TM_SMR_A = 27,
	TM_SMR_B = 28,
	TM_SMR_C = 29,
	TM_SMR_D = 30,
	TM_SMR_E = 31,
	TM_SMR_PLAY_RESULT = 32,
	TM_SMR_RANK = 33,
	TM_SMR_MISSION_CLEAR1 = 34,
	TM_SMR_MISSION_CLEAR2 = 35,
	TM_SMR_SPACE = 36,
	TM_SMR_MISSION = 37,
	TM_SMR_FAILED = 38,
	TM_SMR_MSN_0 = 39,
	TM_SMR_MSN_1 = 40,
	TM_SMR_MSN_2 = 41,
	TM_SMR_MSN_3 = 42,
	TM_SMR_MSN_4 = 43,
	TM_SMR_MSN_5 = 44,
	TM_SMR_MSN_6 = 45,
	TM_SMR_MSN_7 = 46,
	TM_SMR_MSN_8 = 47,
	TM_SMR_MSN_9 = 48,
	TM_SMR_MSN_10 = 49,
	TM_SMR_MSN_11 = 50
};

typedef struct { // 0x10
	/* 0x0 */ u_long tex_keep;
	/* 0x8 */ short int tm2_id;
	/* 0xa */ short int mode;
	/* 0xc */ short int load_id;
	/* 0xe */ short int pad;
} BTL_ANM_LOAD;

enum {
	BANM_NORM = 0,
	BANM_LOAD = 1,
	BANM_AFTLOAD = 2,
	BANM_TEXDISP = 3
};

enum { // 0x8
	T_BTL_RES_BG00 = 624040512,
	T_BTL_RES_BG01 = -584016828,
	T_BTL_RES_BG02 = -584016760,
	T_BTL_RES_BG03 = -516875060,
	T_BTL_RES_BG04 = -516874928,
	T_BTL_RES_BG05 = -584016428,
	T_BTL_RES_BG06 = -1657758184,
	T_BTL_RES_BG07 = -1657758148,
	T_BTL_RES_BG08 = -1657758112,
	T_BTL_RES_BG09 = -1657758076,
	T_BTL_RES_BG10 = -1657758040
};

enum { // 0x8
	T_S_MODE_BG00 = 624040512,
	T_S_MODE_BG01 = -584016828,
	T_S_MODE_BG02 = -584016760,
	T_S_MODE_BG03 = -516875060,
	T_S_MODE_BG04 = -516874928,
	T_S_MODE_BG05 = -584016428,
	T_S_MODE_BG06 = -1657758184,
	T_S_MODE_BG07 = -1657758148,
	T_S_MODE_BG08 = -1657758112,
	T_S_MODE_BG09 = -1657758076,
	T_S_MODE_BG10 = -1657758040
};

struct EFF_BLUR { // 0x28
	/* 0x00 */ u_int flow;
	/* 0x04 */ u_int cnt;
	/* 0x08 */ u_int in;
	/* 0x0c */ u_int keep;
	/* 0x10 */ u_int out;
	/* 0x14 */ u_int alp;
	/* 0x18 */ float scl;
	/* 0x1c */ float rot;
	/* 0x20 */ float cx;
	/* 0x24 */ float cy;
};

struct EFF_FOCUS { // 0x18
	/* 0x00 */ u_int flow;
	/* 0x04 */ u_int cnt;
	/* 0x08 */ u_int in;
	/* 0x0c */ u_int keep;
	/* 0x10 */ u_int out;
	/* 0x14 */ u_int max;
};

struct EFF_DEFORM { // 0x4
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char otype;
	/* 0x2 */ u_char init;
	/* 0x3 */ u_char pass;
};

enum {
	EX1_SEC1_INIT1 = 0,
	EX1_SEC1_FADEIN1 = 1,
	EX1_SEC1_FADEOUT1 = 2,
	EX1_SEC1_KEEP = 3,
	EX1_SEC1_INIT2 = 4,
	EX1_SEC1_FADEIN2 = 5,
	EX1_SEC1_FADEOUT2 = 6,
	EX1_SEC1_FINISH = 7,
	EX1_SEC2_INIT = 8,
	EX1_SEC2_CHANGE = 9,
	EX1_SEC2_WAIT = 10,
	EX1_SEC2_FINISH = 11
};

enum {
	EX2_SEC1_INIT1 = 0,
	EX2_SEC1_CHANGE1 = 1,
	EX2_SEC1_KEEP = 2,
	EX2_SEC1_INIT2 = 3,
	EX2_SEC1_CHANGE2 = 4,
	EX2_SEC1_CHANGE3 = 5,
	EX2_SEC1_FINISH = 6
};

typedef struct { // 0x18
	/* 0x00 */ float rrr;
	/* 0x04 */ float lll;
	/* 0x08 */ float mm1;
	/* 0x0c */ float mm2;
	/* 0x10 */ float sss;
	/* 0x14 */ float ccc;
} DEFWORK;

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR stq;
	/* 0x10 */ sceVu0FVECTOR vtw;
} SCRDEF;

enum {
	EX0_SEC1_INIT1 = 0,
	EX0_SEC1_CHANGE1 = 1,
	EX0_SEC1_KEEP1 = 2,
	EX0_SEC1_INIT2 = 3,
	EX0_SEC1_CHANGE2 = 4,
	EX0_SEC1_KEEP2 = 5,
	EX0_SEC1_INIT3 = 6,
	EX0_SEC1_CHANGE3 = 7,
	EX0_SEC1_KEEP3 = 8,
	EX0_SEC1_INIT4 = 9,
	EX0_SEC1_CHANGE4 = 10,
	EX0_SEC1_KEEP4 = 11,
	EX0_SEC1_FINISH = 12
};

enum {
	GAMEOVER_INIT = 0,
	GAMEOVER_WHITE_OUT = 1,
	GAMEOVER_LOAD_WAIT = 2,
	GAMEOVER_WHITE_IN = 3,
	GAMEOVER_BG_IN = 4,
	GAMEOVER_IN = 5,
	GAMEOVER_WAIT = 6,
	GAMEOVER_OUT = 7,
	GAMEOVER_BLACK_OUT = 8,
	GAMEOVER_FINISH = 9
};

typedef struct { // 0x10
	/* 0x0 */ u_int type;
	/* 0x4 */ u_char rgba[4];
	/* 0x8 */ float lscl;
	/* 0xc */ float tscl;
} EFRENZ;

typedef struct { // 0x30
	/* 0x00 */ u_int u1;
	/* 0x04 */ u_int u2;
	/* 0x08 */ u_int v1;
	/* 0x0c */ u_int v2;
	/* 0x10 */ u_int x1;
	/* 0x14 */ u_int x2;
	/* 0x18 */ u_int y1;
	/* 0x1c */ u_int y2;
	/* 0x20 */ u_int zz;
	/* 0x24 */ float alp;
	/* 0x28 */ u_int dummy[2];
} HAZE_WORK;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR oposp;
	/* 0x10 */ sceVu0FVECTOR oposc;
	/* 0x20 */ float scr;
	/* 0x24 */ float mov;
	/* 0x28 */ float lng;
	/* 0x2c */ float dummy;
} HAZE_NUMS;

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ int flow;
	/* 0x14 */ float rot;
	/* 0x18 */ float cnt;
	/* 0x1c */ int dummy;
} NEW_ITEM;

typedef struct { // 0x170
	/* 0x000 */ sceVu0FVECTOR fpos[8];
	/* 0x080 */ sceVu0IVECTOR ipos[8];
	/* 0x100 */ u_char clip[8];
	/* 0x108 */ u_char alp[8];
	/* 0x110 */ U32DATA ts[8];
	/* 0x130 */ U32DATA tt[8];
	/* 0x150 */ U32DATA tq[8];
} EFF_SUNSHINE;

typedef struct { // 0x80
	/* 0x00 */ float alp;
	/* 0x04 */ float cnt;
	/* 0x10 */ sceVu0IVECTOR ivec[4];
	/* 0x50 */ sceVu0FVECTOR pos;
	/* 0x60 */ sceVu0FVECTOR vel;
	/* 0x70 */ sceVu0FVECTOR opos;
} EFF_DUST;

typedef struct { // 0x10
	/* 0x0 */ float v;
	/* 0x4 */ float oy;
	/* 0x8 */ float t;
	/* 0xc */ u_short dist;
	/* 0xe */ short int mode;
} RIPPLE2_M;

typedef struct { // 0x1140
	/* 0x0000 */ RIPPLE2_M rip2m[275];
	/* 0x1130 */ float texsc;
	/* 0x1134 */ float time;
	/* 0x1138 */ int sufno;
	/* 0x113c */ int dummy;
} RIPPLE2;

typedef struct { // 0x40e0
	/* 0x0000 */ sceVu0FVECTOR bpos;
	/* 0x0010 */ sceVu0FVECTOR vt[275];
	/* 0x1140 */ sceVu0IVECTOR vtiw[275];
	/* 0x2270 */ sceVu0IVECTOR col[275];
	/* 0x33a0 */ u_int tx[275];
	/* 0x37ec */ u_int ty[275];
	/* 0x3c38 */ short int clip[275];
	/* 0x3e5e */ short int fg[275];
	/* 0x4084 */ int pnumw;
	/* 0x4088 */ int vnumw;
	/* 0x408c */ int pnumh;
	/* 0x4090 */ int vnumh;
	/* 0x4094 */ float tsw;
	/* 0x4098 */ float tsh;
	/* 0x40a0 */ sceVu0FMATRIX slm;
} RIP_WORK1;

typedef struct { // 0x300
	/* 0x000 */ sceVu0FVECTOR vt[15];
	/* 0x0f0 */ sceVu0IVECTOR vtiw[15];
	/* 0x1e0 */ sceVu0FVECTOR bpos;
	/* 0x1f0 */ u_int tx[15];
	/* 0x22c */ u_int ty[15];
	/* 0x268 */ short int clip[15];
	/* 0x286 */ short int fg[15];
	/* 0x2a4 */ int pnumw;
	/* 0x2a8 */ int vnumw;
	/* 0x2ac */ int pnumh;
	/* 0x2b0 */ int vnumh;
	/* 0x2b4 */ float tsw;
	/* 0x2b8 */ float tsh;
	/* 0x2c0 */ sceVu0FMATRIX slm;
} RIP_WORK2;

enum {
	SPM_NORMAL = 0,
	SPM_LSTEP0 = 1,
	SPM_LSTEP1 = 2,
	SPM_LSTEP2 = 3,
	SPM_LSTEP3 = 4,
	SPM_SSTEP0 = 5,
	SPM_SSTEP1 = 6,
	SPM_SSTEP2 = 7,
	SPM_SSTEP3 = 8,
	SPM_NLADDER0 = 9,
	SPM_HASI = 10,
	SPM_KAGAMI = 11,
	SPM_RLADDER0 = 12,
	SPM_RLADDER1 = 13
};

typedef struct { // 0x10
	/* 0x0 */ int sw;
	/* 0x4 */ int num;
	/* 0x8 */ int top;
	/* 0xc */ int dummy;
} SWORD_LINE;

typedef struct { // 0x200
	/* 0x000 */ int cam_search_flow;
	/* 0x004 */ u_char walp;
	/* 0x008 */ int top;
	/* 0x00c */ int num;
	/* 0x010 */ float alp;
	/* 0x014 */ float cnt;
	/* 0x020 */ sceVu0FVECTOR cpos[30];
} CAMSEARCH_STR;

typedef struct { // 0x28c
	/* 0x000 */ int cam_view_flow;
	/* 0x004 */ u_char alpn;
	/* 0x008 */ int cnt;
	/* 0x00c */ float alpc;
	/* 0x010 */ float rot_z;
	/* 0x014 */ u_short ligtime[3];
	/* 0x01c */ float rrad[48];
	/* 0x0dc */ float rrot[48];
	/* 0x19c */ float racc[48];
	/* 0x25c */ u_char ralp[48];
} CAMVIEW_STR;

typedef struct { // 0x820
	/* 0x000 */ int cam_push_flow;
	/* 0x004 */ u_char alpn;
	/* 0x008 */ int cnt;
	/* 0x00c */ float alpc;
	/* 0x010 */ float rot_z;
	/* 0x014 */ float size;
	/* 0x020 */ sceVu0FVECTOR rpos[64];
	/* 0x420 */ float rrad[64];
	/* 0x520 */ float rrot[64];
	/* 0x620 */ float racc[64];
	/* 0x720 */ float ralp[64];
} CAMPUSH_STR;

typedef struct { // 0x900
	/* 0x000 */ int cam_slow_flow;
	/* 0x004 */ float pos_y[3];
	/* 0x010 */ float rot_xx[3];
	/* 0x01c */ float rot_yy[3];
	/* 0x028 */ float rot_zz[3];
	/* 0x034 */ float hrt;
	/* 0x038 */ float rrt;
	/* 0x03c */ int cnt;
	/* 0x040 */ u_short ligtime[3];
	/* 0x050 */ sceVu0FVECTOR rpos[32];
	/* 0x250 */ float rrad[32];
	/* 0x2d0 */ float rrot[32];
	/* 0x350 */ float racc[32];
	/* 0x3d0 */ float ralp[32];
	/* 0x450 */ float rlif[32];
	/* 0x4d0 */ int fl;
	/* 0x4e0 */ sceVu0FVECTOR ncf[2][33];
} CAMSLOW_STR;

typedef struct { // 0x2c8
	/* 0x000 */ int cam_stop_flow;
	/* 0x004 */ int flow2;
	/* 0x008 */ int cnt;
	/* 0x00c */ u_short ligtime[3];
	/* 0x014 */ float rot_z;
	/* 0x018 */ float size[3];
	/* 0x024 */ u_char alp[3];
	/* 0x028 */ float rrad[32];
	/* 0x0a8 */ float rrotx[32];
	/* 0x128 */ float rroty[32];
	/* 0x1a8 */ float racc[32];
	/* 0x228 */ float rbrk[32];
	/* 0x2a8 */ u_char rscl[32];
} CAMSTOP_STR;

typedef struct { // 0x544
	/* 0x000 */ int flow;
	/* 0x004 */ float rrad[64];
	/* 0x104 */ float rrotx[64];
	/* 0x204 */ float rroty[64];
	/* 0x304 */ float racc[64];
	/* 0x404 */ float rbrk[64];
	/* 0x504 */ u_char rscl[64];
} SPAWAY;

typedef struct { // 0x8
	/* 0x0 */ u_char mdl_no;
	/* 0x2 */ u_short tex_no;
	/* 0x4 */ int addr;
} EDMG_TEX_WRK;

enum {
	ITM_FILM_O = 0,
	ITM_FILM_N = 1,
	ITM_FILM_S = 2,
	ITM_FILM_14 = 1,
	ITM_FILM_37 = 2,
	ITM_FILM_74 = 3,
	ITM_FILM_90 = 4,
	ITM_SP_STONE = 5,
	ITM_HEAL_MP = 5,
	ITM_HEAL_HP = 6,
	ITM_HEAL_ST_MP = 7,
	ITM_HEAL_ST_HP = 8,
	ITM_REISEKI = 5,
	ITM_GEKKAKO = 66,
	ITM_MANYOGAN = 6,
	ITM_GOSHINSUI = 7,
	ITM_KAGAMIISHI = 8,
	ITM_CAMERA_0 = 9,
	ITM_KEY_MIRROR = 10,
	ITM_KEY_BLACK = 11,
	ITM_KEY_BLUE = 12,
	ITM_KEY_KAGOME = 13,
	ITM_KEY_KAMON_L = 14,
	ITM_KEY_KAMON_R = 15,
	ITM_TOUSHU_AKASHI = 14,
	ITM_SHIKINAWA = 15,
	ITM_KEY_SINTYU = 16,
	ITM_KEY_AKASABI = 17,
	ITM_GAKUFU = 17,
	ITM_RECORDER = 18,
	ITM_TAPE_RED = 19,
	ITM_TAPE_BLUE = 20,
	ITM_PHOT_HANYOU = 21,
	ITM_FILE_WIFE_DIARY = 21,
	ITM_PICT_KAMON = 22,
	ITM_FILE_ISYO = 22,
	ITM_KAMON_ISI = 23,
	ITM_KEY_GREEN = 23,
	ITM_KEY_YAMABUKI = 24,
	ITM_BUTUZO_H = 25,
	ITM_KEY_SIYOU = 26,
	ITM_MIRROR0 = 27,
	ITM_PHT_WIFE_DAUGHTER = 28,
	ITM_PHOTO_HEN = 29,
	ITM_SYUKI = 30,
	ITM_SCRAP = 31,
	ITM_NOTE = 32,
	ITM_SCHEDULE = 33,
	ITM_MATCH = 34,
	ITM_DENSYO = 35,
	ITM_KOMONJO = 36,
	ITM_LIGHTER = 37,
	ITM_KANZASI = 38,
	ITM_PHT_KOKIRIE = 38,
	ITM_KAKEJIKU_ONI = 39,
	ITM_GLD_KANZASI = 40,
	ITM_MEN_YOROKOBI = 41,
	ITM_MEN_IKARI = 42,
	ITM_MEN_KANASIMI = 43,
	ITM_MEN_TANOSIMI = 44,
	ITM_MEN_ODOROKI = 45,
	ITM_PHT_ONIASOBI = 45,
	ITM_MEN_NISUGATA = 46,
	ITM_MEN_MEKAKUSI = 47,
	ITM_KEY_KINNKO = 48,
	ITM_MIRROR1 = 49,
	ITM_SAKKA_TETYOU = 50,
	ITM_KOMONJO2 = 51,
	ITM_NEWS_BIG_NEW = 52,
	ITM_NEWS_SML_NEW = 53,
	ITM_NEWS_BIG_OLD = 54,
	ITM_NEWS_SML_OLD = 55,
	ITM_MIRROR2 = 56,
	ITM_MIRROR3 = 57,
	ITM_MIRROR4 = 58,
	ITM_MIRROR_ALL = 59,
	ITM_TAPE_WHITE = 60,
	ITM_TAPE_WHITE1 = 61,
	ITM_TAPE_RED1 = 62,
	ITM_TAPE_RED2 = 63,
	ITM_TAPE_RED3 = 64,
	ITM_TAPE_BLUE1 = 65,
	ITM_DUMMY67 = 67,
	ITM_DUMMY68 = 68,
	ITM_DUMMY69 = 69,
	ITM_PHT_00_HENSYU = 0,
	ITM_PHT_01_ONIASOBI = 1,
	ITM_PHT_02_WIFE = 2,
	ITM_PHT_03_KOKIRIE = 3,
	PHT_HINT_00 = 0,
	PHT_HINT_01 = 1,
	PHT_HINT_02 = 2,
	PHT_HINT_03 = 3,
	PHT_HINT_04 = 4,
	PHT_HINT_05 = 5,
	PHT_HINT_06 = 6,
	PHT_HINT_07 = 7,
	PHT_HINT_08 = 8,
	PHT_HINT_09 = 9,
	PHT_HINT_10 = 10,
	PHT_HINT_11 = 11,
	PHT_HINT_12 = 12,
	PHT_HINT_13 = 13,
	PHT_HINT_14 = 14,
	PHT_HINT_15 = 15,
	PHT_HINT_16 = 16,
	PHT_HINT_17 = 17,
	PHT_HINT_18 = 18,
	PHT_HINT_19 = 19,
	PHT_HINT_20 = 20,
	PHT_HINT_21 = 21,
	PHT_HINT_22 = 22,
	PHT_HINT_23 = 23,
	PHT_HINT_24 = 24,
	PHT_HINT_25 = 25,
	PHT_HINT_26 = 26,
	PHT_HINT_27 = 27,
	PHT_HINT_28 = 28,
	PHT_HINT_29 = 29,
	PHT_HINT_30 = 30,
	PHT_HINT_31 = 31,
	PHT_HINT_32 = 32,
	PHT_HINT_33 = 33,
	PHT_HINT_34 = 34,
	PHT_HINT_35 = 35,
	PHT_HINT_36 = 36,
	PHT_HINT_37 = 37,
	PHT_HINT_38 = 38,
	PHT_HINT_39 = 39,
	PHT_HINT_40 = 40,
	PHT_HINT_41 = 41,
	PHT_HINT_42 = 42,
	PHT_HINT_43 = 43,
	PHT_HINT_44 = 44,
	PHT_HINT_45 = 45,
	PHT_HINT_46 = 46,
	PHT_HINT_47 = 47,
	PHT_3D_100 = 100,
	PHT_3D_101 = 101,
	PHT_3D_102 = 102,
	PHT_3D_103 = 103,
	PHT_3D_104 = 104,
	PHT_3D_105 = 105,
	PHT_3D_106 = 106,
	PHT_3D_107 = 107,
	PHT_3D_108 = 108,
	PHT_3D_109 = 109,
	PHT_3D_110 = 110,
	PHT_RARE_00 = 150,
	PHT_RARE_01 = 151,
	PHT_RARE_02 = 152,
	PHT_RARE_03 = 153,
	PHT_RARE_04 = 154,
	PHT_RARE_05 = 155,
	PHT_RARE_06 = 156,
	PHT_RARE_07 = 157,
	PHT_RARE_08 = 158,
	PHT_RARE_09 = 159,
	PHT_RARE_10 = 160,
	PHT_RARE_11 = 161,
	PHT_RARE_12 = 162,
	PHT_RARE_13 = 163,
	PHT_RARE_14 = 164,
	PHT_RARE_15 = 165,
	PHT_RARE_16 = 166,
	PHT_RARE_17 = 167,
	PHT_RARE_18 = 168,
	PHT_RARE_19 = 169,
	PHT_RARE_20 = 170,
	PHT_RARE_21 = 171,
	PHT_RARE_22 = 172,
	PHT_RARE_23 = 173,
	PHT_RARE_24 = 174,
	FILE_TYPE_TECHO = 0,
	FILE_TYPE_HINT_PHOT = 1,
	FILE_TYPE_SCRAP = 2,
	FILE_TYPE_ITEM_PHOT = 3
};

enum {
	PANI_STAND = 0,
	PANI_BWALK_L = 1,
	PANI_BWALK_R = 2,
	PANI_NWALK_L = 3,
	PANI_NWALK_R = 4,
	PANI_RUN_L = 5,
	PANI_RUN_R = 6,
	PANI_DMG_STAND = 7,
	PANI_DMG_WALK_L = 8,
	PANI_DMG_WALK_R = 9,
	PANI_PULL_NER_R = 10,
	PANI_PULL_CNT_R = 11,
	PANI_PULL_LEF_R = 12,
	PANI_PUSH_CNT_R = 13,
	PANI_PULL_NER_L = 14,
	PANI_PULL_CNT_L = 15,
	PANI_PULL_LEF_L = 16,
	PANI_PUSH_CNT_L = 17,
	PANI_PULL_BOTH_NER = 18,
	PANI_PULL_BOTH = 19,
	PANI_PUSH_BOTH = 20,
	PANI_SLIDE_CNT_R = 21,
	PANI_SLIDE_RIG_R = 22,
	PANI_SLIDE_CNT_L = 23,
	PANI_SLIDE_LEF_L = 24,
	PANI_SLIDE_BOTH = 25,
	PANI_KAITEN = 26,
	PANI_KUGURI_PUSH = 27,
	PANI_KUGURI_PULL = 28,
	PANI_PULL_NER_R_LAST = 29,
	PANI_PULL_CNT_R_LAST = 30,
	PANI_PULL_LEF_R_LAST = 31,
	PANI_PUSH_CNT_R_LAST = 32,
	PANI_PULL_NER_L_LAST = 33,
	PANI_PULL_CNT_L_LAST = 34,
	PANI_PULL_LEF_L_LAST = 35,
	PANI_PUSH_CNT_L_LAST = 36,
	PANI_PULL_BOTH_NER_LAST = 37,
	PANI_PULL_BOTH_LAST = 38,
	PANI_PUSH_BOTH_LAST = 39,
	PANI_SLIDE_CNT_R_LAST = 40,
	PANI_SLIDE_RIG_R_LAST = 41,
	PANI_SLIDE_CNT_L_LAST = 42,
	PANI_SLIDE_LEF_L_LAST = 43,
	PANI_SLIDE_BOTH_LAST = 44,
	PANI_KAITEN_LAST = 45,
	PANI_KUGURI_PUSH_LAST = 46,
	PANI_KUGURI_PULL_LAST = 47,
	PANI_UP_LONG_L = 48,
	PANI_UP_LONG_R = 49,
	PANI_DOWN_LONG_L = 50,
	PANI_DOWN_LONG_R = 51,
	PANI_UP_SHORT_L = 52,
	PANI_UP_SHORT_R = 53,
	PANI_DOWN_SHORT_L = 54,
	PANI_DOWN_SHORT_R = 55,
	PANI_DMG_NECK_IN = 56,
	PANI_DMG_NECK_OUT = 57,
	PANI_DMG_SHLD_IN = 58,
	PANI_DMG_SHLD_OUT = 59,
	PANI_DMG_LEG_IN = 60,
	PANI_DMG_LEG_OUT = 61,
	PANI_DMG_BEND = 62,
	PANI_DMG_BACK = 63,
	PANI_DEAD = 64,
	PANI_CAM_SET_IN = 65,
	PANI_CAM_SET_OUT = 66,
	PANI_CAM_UPDOWN = 67,
	PANI_BIBIRI = 68,
	PANI_RUN_UP_LONG_L = 69,
	PANI_RUN_UP_LONG_R = 70,
	PANI_RUN_DOWN_LONG_L = 71,
	PANI_RUN_DOWN_LONG_R = 72,
	PANI_RUN_UP_SHORT_L = 73,
	PANI_RUN_UP_SHORT_R = 74,
	PANI_RUN_DOWN_SHORT_L = 75,
	PANI_RUN_DOWN_SHORT_R = 76,
	PANI_CAM_WALKF_L = 77,
	PANI_CAM_WALKF_R = 78,
	PANI_CAM_WALKB_L = 79,
	PANI_CAM_WALKB_R = 80,
	PANI_CAM_WALKR_L = 81,
	PANI_CAM_WALKR_R = 82,
	PANI_CAM_WALKL_L = 83,
	PANI_CAM_WALKL_R = 84,
	PANI_STAND2 = 85,
	PANI_TURN_L = 86,
	PANI_TURN_R = 87,
	PANI_STAND_LIGHT = 88,
	PANI_PULL_R_AREA = 89,
	PANI_PUSH_R_AREA = 90,
	PANI_PULL_L_AREA = 91,
	PANI_PUSH_L_AREA = 92,
	PANI_PULL_BOTH_AREA = 93,
	PANI_PUSH_BOTH_AREA = 94,
	PANI_SLIDE_BOTH_AREA = 95,
	PANI_WALK_HASI_L = 96,
	PANI_WALK_HASI_R = 97,
	PANI_LAD_UP = 98,
	PANI_LAD_DOWN = 99,
	PANI_STAND_LOW = 100,
	PANI_WALK_LOW_L = 101,
	PANI_WALK_LOW_R = 102,
	PANI_CAM_SET_LOW_IN = 103,
	PANI_CAM_SET_LOW_OUT = 104,
	PANI_IDO_UP = 105,
	PANI_IDO_DOWN = 106,
	PANI_LOOK_LR = 107,
	PANI_DUMMY_DOORCLOSE = 200,
	EANI_STAND = 0,
	EANI_APPEAR = 1,
	EANI_WALK = 2,
	EANI_RIGHT = 3,
	EANI_LEFT = 4,
	EANI_BACK = 5,
	EANI_ATTACK_IN = 6,
	EANI_ATTACK_MISS = 7,
	EANI_CATCH_IN = 8,
	EANI_CATCH = 9,
	EANI_CATCH_OUT = 10,
	EANI_DAMAGE = 11,
	EANI_DEAD = 12,
	EANI_SP0 = 13,
	EANI_SP1 = 14,
	EANI_SP2 = 15,
	EANI_SP3 = 16,
	EANI_SP4 = 17,
	EANI_SP5 = 18,
	EANI_SP6 = 19,
	EANI_SP7 = 20
};

typedef struct { // 0x58
	/* 0x00 */ int pri;
	/* 0x04 */ int bx;
	/* 0x08 */ int by;
	/* 0x0c */ u_char r;
	/* 0x0d */ u_char g;
	/* 0x0e */ u_char b;
	/* 0x0f */ u_char alp;
	/* 0x10 */ u_char *str;
	/* 0x14 */ u_char *stp;
	/* 0x18 */ int sta;
	/* 0x1c */ int flg;
	/* 0x20 */ int pass;
	/* 0x24 */ int csr;
	/* 0x28 */ int selnum;
	/* 0x2c */ int seltype;
	/* 0x30 */ int decide;
	/* 0x34 */ int mes_is_end;
	/* 0x38 */ int cnt;
	/* 0x3c */ int retst;
	/* 0x40 */ int disptype;
	/* 0x44 */ int fntmcnt;
	/* 0x48 */ int fntcnt;
	/* 0x4c */ int fntwait;
	/* 0x50 */ u_char usrgb[4];
	/* 0x54 */ u_char vib;
} MES_DAT;

typedef struct { // 0x30c
	/* 0x000 */ u_short dummy;
	/* 0x002 */ u_char pass;
	/* 0x003 */ u_char pass_flg;
	/* 0x004 */ u_char *old_adr;
	/* 0x008 */ int cnt;
	/* 0x00c */ u_char mes_alps[16][48];
} MESV22;

typedef unsigned char u_8;
typedef short unsigned int u_16;
typedef unsigned int u_32;
typedef long unsigned int u_64;

typedef struct { // 0x2
	/* 0x0 */ u_8 bfType[2];
} BITMAPFILEHEADER1;

typedef struct { // 0xc
	/* 0x0 */ u_32 bfSize;
	/* 0x4 */ u_16 bfReserved1;
	/* 0x6 */ u_16 bfReserved2;
	/* 0x8 */ u_32 bfOffbits;
} BITMAPFILEHEADER2;

typedef struct { // 0x28
	/* 0x00 */ u_32 biSize;
	/* 0x04 */ u_32 biWidth;
	/* 0x08 */ u_32 biHeight;
	/* 0x0c */ u_16 biPlanes;
	/* 0x0e */ u_16 biBitCount;
	/* 0x10 */ u_32 biCompression;
	/* 0x14 */ u_32 biSizeImage;
	/* 0x18 */ u_32 biXPelsPerMeter;
	/* 0x1c */ u_32 biYPelsPerMeter;
	/* 0x20 */ u_32 biClrUsed;
	/* 0x24 */ u_32 biClrImportant;
} BITMAPINFOHEADER;

typedef struct { // 0x8
	/* 0x0 */ SPRT_DAT *spr;
	/* 0x4 */ u_int num;
} RARE_ENE_1DAT;

typedef struct { // 0x10
	/* 0x0 */ RARE_ENE_1DAT *re1d;
	/* 0x4 */ float sclw;
	/* 0x8 */ float sclh;
	/* 0xc */ u_short attr;
	/* 0xe */ u_char attr_sub;
	/* 0xf */ u_char pat;
} RARE_ENE_DAT;

typedef struct { // 0x50
	/* 0x00 */ void *ModelBuf;
	/* 0x04 */ void *FreeAddr;
	/* 0x08 */ int ModelMode;
	/* 0x0c */ int PreLight;
	/* 0x10 */ float scale;
	/* 0x14 */ int DispNo;
	/* 0x18 */ int GroupNo;
	/* 0x1c */ u_int *GroupListp;
	/* 0x20 */ int bwflg;
	/* 0x30 */ sceVu0FVECTOR trans;
	/* 0x40 */ sceVu0FVECTOR rot;
} MODEL_DATA;

enum {
	MOT_FTYPE = 0,
	MIM_FTYPE = 1,
	BGM_FTYPE = 2,
	MOV_FTYPE = 3,
	TPK_FTYPE = 4,
	MPK_FTYPE = 5,
	PK2_FTYPE = 6,
	FTYPE_NUM = 7
};

enum {
	AC_STAT_READ = 0,
	AC_STAT_END = 1,
	AC_STAT_MOT_WAIT = 2
};

enum {
	MIKU_BASE_OBJ = 0,
	MIKU_FACE_OBJ = 1,
	MIKU_HEAD_OBJ = 2,
	MIKU_HAIR0_OBJ = 3,
	MIKU_HAIR1_OBJ = 4,
	MIKU_HAIR2_OBJ = 5,
	MIKU_HAIR3_OBJ = 6,
	MIKU_ACS03_OBJ = 7,
	MIKU_LHAND_OBJ = 8,
	MIKU_RHAND_OBJ = 9
};

enum {
	MAFUYU_BASE_OBJ = 0,
	MAFUYU_FACE_OBJ = 1,
	MAFUYU_HAIR0_OBJ = 2,
	MAFUYU_HAIR1_OBJ = 3,
	MAFUYU_HAIR2_OBJ = 4,
	MAFUYU_HAIR3_OBJ = 5,
	MAFUYU_HAIR4_OBJ = 6,
	MAFUYU_HAIR5_OBJ = 7,
	MAFUYU_LHAND_OBJ = 8,
	MAFUYU_RHAND_OBJ = 9
};

enum {
	BONE_BASE = 0,
	BONE_ARM1_L = 1,
	BONE_ARM1_R = 2,
	BONE_ARM2_L = 3,
	BONE_ARM2_R = 4,
	BONE_ARM3_L = 5,
	BONE_ARM3_R = 6,
	BONE_BACK = 7,
	BONE_EYEL_CNT = 8,
	BONE_EYER_CNT = 9,
	BONE_FOOT_L = 10,
	BONE_FOOT_R = 11,
	BONE_HED1 = 12,
	BONE_HED2 = 13,
	BONE_LEG1_L = 14,
	BONE_LEG1_R = 15,
	BONE_LEG2_L = 16,
	BONE_LEG2_R = 17,
	BONE_SHD_L = 18,
	BONE_SHD_R = 19,
	BONE_WAIST = 20,
	BONE_WAIST2 = 21,
	BONE_WT_ARM_L = 22,
	BONE_WT_ARM_R = 23,
	BONE_WT_LEG_L = 24,
	BONE_WT_LEG_R = 25,
	BONE_WT_SHD_L = 26,
	BONE_WT_SHD_R = 27
};

enum {
	M000_MIM_HAIR0 = 0,
	M000_MIM_HAIR1 = 1,
	M000_MIM_HAIR2 = 2,
	M000_MIM_HAIR3 = 3,
	M000_MIM_ACS = 4,
	M000_MIM_MEPATI = 5,
	M000_MIM_LHAND_NIGIRI = 6,
	M000_MIM_RHAND_NIGIRI = 7,
	M000_MIM_NUM = 8
};

enum {
	M001_MIM_MEPATI = 0,
	M001_MIM_LHAND_NIGIRI = 1,
	M001_MIM_NUM = 2
};

enum {
	M025_MIM_ATTACK_IN = 0,
	M025_MIM_ATTACK_LOOP = 1,
	M025_MIM_ATTACK_OUT = 2,
	M025_MIM_ATTACK_B_IN = 3,
	M025_MIM_ATTACK_B_LOOP = 4,
	M025_MIM_ATTACK_B_OUT = 5,
	M025_MIM_MISS = 6,
	M025_MIM_MISS_B = 7,
	M025_MIM_YAMITE_IN = 8,
	M025_MIM_YAMITE_LOOP = 9,
	M025_MIM_YAMITE_OUT = 10,
	M025_MIM_NUM = 11
};

enum {
	MIM_NO_SET = 0,
	MIM_NO_REQ = 1,
	MIM_REQ = 2
};

typedef u_short ANI_CODE;

enum {
	AC_CTRL = 0,
	AC_TIMER = 1,
	AC_MOTION = 2,
	AC_MIME = 3,
	AC_SE = 4,
	AC_DOOR = 5,
	AC_EFCT = 6
};

enum {
	AC_CODE_END = 0,
	AC_LOOP_END = 1,
	AC_NLOOP = 2
};

enum {
	AC_MOT_PLAY = 0,
	AC_MOT_PLAY_L = 1,
	AC_MOT_PLAY_R = 2
};

enum {
	AC_MIME_PLAY = 0,
	AC_MIME_LOOP = 1
};

enum {
	AC_SE_FOOT_L = 0,
	AC_SE_FOOT_R = 1
};

enum {
	AC_DOOR_S = 0,
	AC_DOOR_L = 1,
	AC_DOOR_R = 2,
	AC_DOOR_LR = 3,
	AC_DOOR_CLOSE_LR = 4
};

enum {
	AC_EFCT_HOKORI_L = 0,
	AC_EFCT_HOKORI_R = 1,
	AC_EFCT_SWORD_ON = 2,
	AC_EFCT_SWORD_OFF = 3,
	AC_EFCT_QUAKE = 4
};

enum {
	ACS_ALPHA_ON = 0,
	ACS_ALPHA_OFF = 1
};

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR p;
	/* 0x10 */ sceVu0FVECTOR old;
	/* 0x20 */ sceVu0FVECTOR v;
	/* 0x30 */ sceVu0FVECTOR f;
} C_PARTICLE;

typedef struct { // 0x8
	/* 0x0 */ u_short p1;
	/* 0x2 */ u_short p2;
	/* 0x4 */ float ldef;
} SPRING;

typedef struct { // 0x10
	/* 0x0 */ float center[3];
	/* 0xc */ float r;
} SPHERE;

typedef struct { // 0x20
	/* 0x00 */ float p0[3];
	/* 0x0c */ float p1[3];
	/* 0x18 */ float r;
	/* 0x1c */ u_int axis;
} TUBE;

typedef struct { // 0x8
	/* 0x0 */ void *dat;
	/* 0x4 */ u_char type;
	/* 0x5 */ u_char bone_id;
} COLLISION_DAT;

typedef struct { // 0x14
	/* 0x00 */ float *vtx;
	/* 0x04 */ float gravity;
	/* 0x08 */ float Kd;
	/* 0x0c */ float Ke;
	/* 0x10 */ u_int fixed_num;
} ROPE_DAT;

typedef struct { // 0x40
	/* 0x00 */ C_PARTICLE *particle;
	/* 0x04 */ SPRING *spring;
	/* 0x08 */ ROPE_DAT *rdat;
	/* 0x10 */ sceVu0FVECTOR dir;
	/* 0x20 */ sceVu0FVECTOR top;
	/* 0x30 */ float pow;
	/* 0x34 */ u_int furn_id;
	/* 0x38 */ u_char p_num;
	/* 0x39 */ u_char spring_num;
	/* 0x3a */ u_char stat;
	/* 0x3b */ u_char move_mode;
} ROPE_CTRL;

typedef struct { // 0x10
	/* 0x0 */ float gravity;
	/* 0x4 */ float Kd;
	/* 0x8 */ float Ke;
	/* 0xc */ u_char w;
	/* 0xd */ u_char h;
	/* 0xe */ u_char type;
} CLOTH;

typedef struct { // 0xc
	/* 0x0 */ CLOTH *dat;
	/* 0x4 */ sceVu0FVECTOR *rist_vtx;
	/* 0x8 */ u_char bone_id;
	/* 0x9 */ u_char bone_id2;
	/* 0xa */ u_char sgd_id;
	/* 0xb */ u_char flg;
} CLOTH_DAT;

typedef struct { // 0x14
	/* 0x00 */ C_PARTICLE *particle;
	/* 0x04 */ SPRING *spring;
	/* 0x08 */ CLOTH_DAT *cdat;
	/* 0x0c */ u_short p_num;
	/* 0x0e */ u_short spring_num;
	/* 0x10 */ u_char w;
	/* 0x11 */ u_char h;
	/* 0x12 */ u_char reset_flg;
	/* 0x13 */ u_char pad;
} CLOTH_CTRL;

typedef struct { // 0x4
	/* 0x0 */ short int alpha;
	/* 0x2 */ short int stat;
} ACS_ALPHA;

typedef struct { // 0x14
	/* 0x00 */ u_int type;
	/* 0x04 */ u_int furn_id;
	/* 0x08 */ u_int timer;
	/* 0x0c */ u_int req;
	/* 0x10 */ u_char alpha;
} CMOVE_CTRL;

typedef struct { // 0x20
	/* 0x00 */ u_char file_id[4];
	/* 0x04 */ u_int map_flg;
	/* 0x08 */ u_int bone_num;
	/* 0x0c */ u_int trans_num;
	/* 0x10 */ u_int frame_num;
	/* 0x14 */ u_int interp_frame;
	/* 0x18 */ u_int flg;
	/* 0x1c */ u_int si_frame;
} MOT_FILE_HEADER;

typedef struct { // 0x2
	/* 0x0 */ u_char parent_id;
	/* 0x1 */ u_char trans_id;
} MOT_ID_TABLE;

typedef struct { // 0x4
	/* 0x0 */ u_int *frame_addr;
} MOT_ADDR_TABLE;

typedef struct { // 0x8
	/* 0x0 */ ANI_CODE code;
	/* 0x2 */ u_short cnt;
	/* 0x4 */ u_int stat;
} ANI_BUF;

typedef struct { // 0x6c
	/* 0x00 */ int playnum;
	/* 0x04 */ int stat;
	/* 0x08 */ int loop_rest;
	/* 0x0c */ int timer;
	/* 0x10 */ ANI_BUF buf[10];
	/* 0x60 */ ANI_CODE *code_head;
	/* 0x64 */ ANI_CODE *code_now;
	/* 0x68 */ ANI_CODE *loop_start;
} ANI_CODE_CTRL;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR rot;
	/* 0x10 */ sceVu0FVECTOR scale;
	/* 0x20 */ sceVu0FVECTOR trans;
} RST_DATA;

typedef struct { // 0x2c
	/* 0x00 */ u_int *top;
	/* 0x04 */ u_int *dat;
	/* 0x08 */ u_int play_id;
	/* 0x0c */ int cnt;
	/* 0x10 */ int all_cnt;
	/* 0x14 */ int inp_allcnt;
	/* 0x18 */ int inp_cnt;
	/* 0x1c */ int reso;
	/* 0x20 */ int reso_cnt;
	/* 0x24 */ RST_DATA *rst0;
	/* 0x28 */ RST_DATA *rst1;
} MOT_CTRL;

typedef struct { // 0x20
	/* 0x00 */ u_char file_id[4];
	/* 0x04 */ u_int map_flg;
	/* 0x08 */ u_int key_num;
	/* 0x0c */ u_int frame_num;
	/* 0x10 */ u_int parts_no;
	/* 0x14 */ u_int flg;
	/* 0x18 */ u_char w_name[8];
} MIM_FILE_HEADER;

typedef struct { // 0x8
	/* 0x0 */ u_int *wav_addr;
	/* 0x4 */ u_int *key_addr;
} MIM_ADDR_TABLE;

typedef struct { // 0x14
	/* 0x00 */ sceVu0FVECTOR *vtx;
	/* 0x04 */ sceVu0FVECTOR *pkt;
	/* 0x08 */ u_int *dat;
	/* 0x0c */ u_int vtx_num;
	/* 0x10 */ u_int p_no;
} MIME_DAT;

typedef struct { // 0x30
	/* 0x00 */ u_char *name;
	/* 0x04 */ float mass;
	/* 0x08 */ float Ks;
	/* 0x0c */ float dec;
	/* 0x10 */ sceVu0FVECTOR pos;
	/* 0x20 */ sceVu0FVECTOR gravity;
} WMIM;

typedef struct { // 0x8
	/* 0x0 */ WMIM *dat;
	/* 0x4 */ u_char bone_id;
} WMIM_DAT;

typedef struct { // 0x40
	/* 0x00 */ WMIM_DAT *wdat;
	/* 0x10 */ sceVu0FVECTOR v;
	/* 0x20 */ sceVu0FVECTOR w;
	/* 0x30 */ sceVu0FVECTOR pbak;
} WMIM_CTRL;

typedef struct { // 0x8
	/* 0x0 */ u_int *addr;
	/* 0x4 */ u_char *dat;
} MIME_LOAD;

typedef struct { // 0x14
	/* 0x00 */ MIME_DAT *mdat;
	/* 0x04 */ int frame;
	/* 0x08 */ u_short furn_id;
	/* 0x0a */ u_short cnt;
	/* 0x0c */ u_char weight_id;
	/* 0x0d */ u_char parts_id;
	/* 0x0e */ u_char reso;
	/* 0x0f */ u_char loop;
	/* 0x10 */ u_char stat;
	/* 0x11 */ u_char rev;
	/* 0x12 */ u_char flg;
	/* 0x13 */ u_char pad;
} MIME_CTRL;

typedef struct { // 0x100
	/* 0x00 */ ANI_CODE_CTRL anm;
	/* 0x6c */ MOT_CTRL mot;
	/* 0xa0 */ sceVu0FVECTOR pbak;
	/* 0xb0 */ u_int *mdl_p;
	/* 0xb4 */ u_int *pk2_p;
	/* 0xb8 */ u_int *mpk_p;
	/* 0xbc */ u_int *base_p;
	/* 0xc0 */ u_int *anm_p;
	/* 0xc4 */ u_int *mtop;
	/* 0xc8 */ u_int *mdat;
	/* 0xcc */ u_int *tanm_p;
	/* 0xd0 */ MIME_CTRL *mim;
	/* 0xd4 */ MIME_CTRL *bgmim;
	/* 0xd8 */ WMIM_CTRL *wmim;
	/* 0xdc */ CLOTH_CTRL *cloth_ctrl;
	/* 0xe0 */ u_int mot_num;
	/* 0xe4 */ u_int mim_num;
	/* 0xe8 */ u_int bg_num;
	/* 0xec */ u_int wmim_num;
	/* 0xf0 */ u_short ftype;
	/* 0xf2 */ u_short interp_flg;
} ANI_CTRL;

typedef struct { // 0x14
	/* 0x00 */ float scale;
	/* 0x04 */ u_char neck_id;
	/* 0x05 */ u_char waist_id;
	/* 0x06 */ u_char leg_id;
	/* 0x08 */ WMIM_DAT *wdat;
	/* 0x0c */ CLOTH_DAT *cdat;
	/* 0x10 */ COLLISION_DAT *collision;
} MANMDL_DAT;

typedef struct { // 0x10
	/* 0x0 */ u_int *mdl_p;
	/* 0x4 */ u_int flg;
	/* 0x8 */ u_int mdl_no;
	/* 0xc */ int offset;
} ENE_VRAM_CTRL;

typedef struct { // 0x10
	/* 0x0 */ u_int pak_num;
	/* 0x4 */ u_int map_flg;
	/* 0x8 */ u_int pad[2];
} MANMPK_HEADER;

typedef struct { // 0xc
	/* 0x0 */ float r;
	/* 0x4 */ float ry;
	/* 0x8 */ u_char bone_id;
	/* 0x9 */ u_char flg;
} ENE_CHILD_CTRL;

typedef struct { // 0xc
	/* 0x0 */ u_char map_flg;
	/* 0x2 */ u_short anm_no;
	/* 0x4 */ u_int *anm_p;
	/* 0x8 */ u_char pkt_no;
} ANI_MDL_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char buf_no;
	/* 0x1 */ u_char pkt_no;
} ENE_PKT_CTRL;

typedef struct { // 0x2
	/* 0x0 */ u_char msn_no;
	/* 0x1 */ u_char step;
} MSN_PLYR_INIT;

typedef struct { // 0x14
	/* 0x00 */ float pow[2];
	/* 0x08 */ int cnt;
	/* 0x0c */ int all_cnt;
	/* 0x10 */ short int req;
	/* 0x12 */ char loop;
	/* 0x13 */ char flg;
} QUAKE_CTRL;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR trot;
	/* 0x20 */ float spd;
	/* 0x24 */ u_int timer;
	/* 0x28 */ u_short timer2;
	/* 0x2c */ u_int move_type;
	/* 0x30 */ u_char req;
	/* 0x31 */ u_char act_no;
} PLYR_ACT_WRK;

enum {
	PMOT_STAND = 0,
	PMOT_BWALK_L = 1,
	PMOT_BWALK_R = 2,
	PMOT_NWALK_L = 3,
	PMOT_NWALK_R = 4,
	PMOT_RUN_L = 5,
	PMOT_RUN_R = 6,
	PMOT_DMG_STAND = 7,
	PMOT_DMG_WALK_L = 8,
	PMOT_DMG_WALK_R = 9,
	PMOT_PULL_NER_R_IN = 10,
	PMOT_PULL_NER_R_LAST = 11,
	PMOT_PULL_CNT_R_IN = 12,
	PMOT_PULL_CNT_R_LAST = 13,
	PMOT_PULL_LEF_R_IN = 14,
	PMOT_PULL_LEF_R_LAST = 15,
	PMOT_PUSH_CNT_R_IN = 16,
	PMOT_PUSH_CNT_R_LAST = 17,
	PMOT_PULL_NER_L_IN = 18,
	PMOT_PULL_NER_L_LAST = 19,
	PMOT_PULL_CNT_L_IN = 20,
	PMOT_PULL_CNT_L_LAST = 21,
	PMOT_PULL_LEF_L_IN = 22,
	PMOT_PULL_LEF_L_LAST = 23,
	PMOT_PUSH_CNT_L_IN = 24,
	PMOT_PUSH_CNT_L_LAST = 25,
	PMOT_PULL_BOTH_NER_IN = 26,
	PMOT_PULL_BOTH_NER_LAST = 27,
	PMOT_PULL_BOTH_IN = 28,
	PMOT_PULL_BOTH_LAST = 29,
	PMOT_PUSH_BOTH_IN = 30,
	PMOT_PUSH_BOTH_LAST = 31,
	PMOT_SLIDE_CNT_R_IN = 32,
	PMOT_SLIDE_CNT_R_LAST = 33,
	PMOT_SLIDE_RIG_R_IN = 34,
	PMOT_SLIDE_RIG_R_LAST = 35,
	PMOT_SLIDE_CNT_L_IN = 36,
	PMOT_SLIDE_CNT_L_LAST = 37,
	PMOT_SLIDE_LEF_L_IN = 38,
	PMOT_SLIDE_LEF_L_LAST = 39,
	PMOT_SLIDE_BOTH_IN = 40,
	PMOT_SLIDE_BOTH_LAST = 41,
	PMOT_UP_LONG_L = 42,
	PMOT_UP_LONG_R = 43,
	PMOT_DOWN_LONG_L = 44,
	PMOT_DOWN_LONG_R = 45,
	PMOT_UP_SHORT_L = 46,
	PMOT_UP_SHORT_R = 47,
	PMOT_DOWN_SHORT_L = 48,
	PMOT_DOWN_SHORT_R = 49,
	PMOT_DMG_NECK_IN = 50,
	PMOT_DMG_NECK_LOOP = 51,
	PMOT_DMG_NECK_OUT = 52,
	PMOT_DMG_SHLD_IN = 53,
	PMOT_DMG_SHLD_LOOP = 54,
	PMOT_DMG_SHLD_OUT = 55,
	PMOT_DMG_LEG_IN = 56,
	PMOT_DMG_LEG_LOOP = 57,
	PMOT_DMG_LEG_OUT = 58,
	PMOT_DMG_BEND = 59,
	PMOT_DMG_BACK = 60,
	PMOT_DEAD = 61,
	PMOT_CAM_SET_IN = 62,
	PMOT_CAM_SET_OUT = 63,
	PMOT_CAM_UPDOWN = 64,
	PMOT_BIBIRI = 65,
	PMOT_STAND2 = 66,
	PMOT_TURN_R = 67,
	PMOT_TURN_L = 68,
	PMOT_STAND_LIGHT = 69,
	PMOT_RUN_UP_LONG_L = 70,
	PMOT_RUN_UP_LONG_R = 71,
	PMOT_RUN_DOWN_LONG_L = 72,
	PMOT_RUN_DOWN_LONG_R = 73,
	PMOT_CAM_WALKF_L = 74,
	PMOT_CAM_WALKF_R = 75,
	PMOT_CAM_WALKB_L = 76,
	PMOT_CAM_WALKB_R = 77,
	PMOT_CAM_WALKR_L = 78,
	PMOT_CAM_WALKR_R = 79,
	PMOT_CAM_WALKL_L = 80,
	PMOT_CAM_WALKL_R = 81,
	PMOT_RUN_UP_SHORT_L = 82,
	PMOT_RUN_UP_SHORT_R = 83,
	PMOT_RUN_DOWN_SHORT_L = 84,
	PMOT_RUN_DOWN_SHORT_R = 85,
	PMOT_PULL_R_AREA_IN = 86,
	PMOT_PUSH_R_AREA_IN = 87,
	PMOT_PULL_L_AREA_IN = 88,
	PMOT_PUSH_L_AREA_IN = 89,
	PMOT_PULL_BOTH_AREA_IN = 90,
	PMOT_PUSH_BOTH_AREA_IN = 91,
	PMOT_SLIDE_BOTH_AREA_IN = 92,
	PMOT_KAITEN = 93,
	PMOT_KAITEN_LAST = 94,
	PMOT_WALK_HASI_L = 95,
	PMOT_WALK_HASI_R = 96,
	PMOT_LAD_UP_IN = 97,
	PMOT_LAD_UP_LOOP = 98,
	PMOT_LAD_UP_OUT = 99,
	PMOT_LAD_DOWN_IN = 100,
	PMOT_LAD_DOWN_LOOP = 101,
	PMOT_LAD_DOWN_OUT = 102,
	PMOT_STAND_LOW = 103,
	PMOT_WALK_LOW_L = 104,
	PMOT_WALK_LOW_R = 105,
	PMOT_KUGURI_PUSH = 106,
	PMOT_KUGURI_PUSH_LAST = 107,
	PMOT_KUGURI_PULL = 108,
	PMOT_KUGURI_PULL_LAST = 109,
	PMOT_IDO_UP_IN = 110,
	PMOT_IDO_UP_LOOP = 111,
	PMOT_IDO_UP_OUT = 112,
	PMOT_IDO_DOWN_IN = 113,
	PMOT_IDO_DOWN_LOOP = 114,
	PMOT_IDO_DOWN_OUT = 115,
	PMOT_CAM_SET_LOW_IN = 116,
	PMOT_CAM_SET_LOW_OUT = 117,
	PMOT_MOT_MAX = 118
};

enum {
	E010_MOT_WALK = 0,
	E010_MOT_ATTACK = 1,
	E010_MOT_MISS = 2,
	E010_MOT_CATCH_LOOP = 3,
	E010_MOT_CATCH_OUT = 4,
	E010_MOT_DAMAGE = 5,
	E010_MOT_DEAD = 6,
	E010_MOT_SP0 = 7
};

enum {
	E011_MOT_WALK = 0,
	E011_MOT_ATTACK = 1,
	E011_MOT_MISS = 2,
	E011_MOT_CATCH_IN = 3,
	E011_MOT_CATCH_LOOP = 4,
	E011_MOT_CATCH_OUT = 5,
	E011_MOT_DAMAGE = 6,
	E011_MOT_DEAD = 7,
	E011_MOT_SP0 = 8,
	E011_MOT_SP1 = 9
};

enum {
	E012_MOT_STAND = 0,
	E012_MOT_WALK = 1,
	E012_MOT_TURN_R = 2,
	E012_MOT_TURN_L = 3,
	E012_MOT_BACK = 4,
	E012_MOT_ATTACK = 5,
	E012_MOT_MISS = 6,
	E012_MOT_CATCH_IN = 7,
	E012_MOT_CATCH_LOOP = 8,
	E012_MOT_CATCH_OUT = 9,
	E012_MOT_DAMAGE = 10,
	E012_MOT_DEAD = 11,
	E012_MOT_SP0 = 12
};

enum {
	E013_MOT_WALK = 0,
	E013_MOT_ATTACK = 1,
	E013_MOT_MISS = 2,
	E013_MOT_CATCH_IN = 3,
	E013_MOT_CATCH_LOOP = 4,
	E013_MOT_CATCH_OUT = 5,
	E013_MOT_DAMAGE = 6,
	E013_MOT_DEAD = 7
};

enum {
	E014_MOT_WALK = 0,
	E014_MOT_ATTACK = 1,
	E014_MOT_MISS = 2,
	E014_MOT_CATCH_IN = 3,
	E014_MOT_CATCH_LOOP = 4,
	E014_MOT_CATCH_OUT = 5,
	E014_MOT_DAMAGE = 6,
	E014_MOT_DEAD = 7,
	E014_MOT_SP0 = 8,
	E014_MOT_SP1 = 9,
	E014_MOT_SP2 = 10,
	E014_MOT_SP3 = 11,
	E014_MOT_SP4 = 12,
	E014_MOT_SP5 = 13
};

enum {
	E015_MOT_STAND = 0,
	E015_MOT_TURN_R = 1,
	E015_MOT_TURN_L = 2,
	E015_MOT_ATTACK = 3,
	E015_MOT_MISS = 4,
	E015_MOT_CATCH_IN = 5,
	E015_MOT_CATCH_LOOP = 6,
	E015_MOT_CATCH_OUT = 7,
	E015_MOT_DAMAGE = 8,
	E015_MOT_DEAD = 9,
	E015_MOT_SP0 = 10,
	E015_MOT_SP1 = 11,
	E015_MOT_SP2 = 12,
	E015_MOT_SP3 = 13,
	E015_MOT_SP4 = 14
};

enum {
	E016_MOT_WALK = 0,
	E016_MOT_ATTACK = 1,
	E016_MOT_MISS = 2,
	E016_MOT_CATCH_LOOP = 3,
	E016_MOT_CATCH_OUT = 4,
	E016_MOT_DAMAGE = 5,
	E016_MOT_DEAD = 6,
	E016_MOT_SP0 = 7,
	E016_MOT_SP1 = 8,
	E016_MOT_SP2 = 9,
	E016_MOT_SP3 = 10,
	E016_MOT_SP4 = 11,
	E016_MOT_SP5 = 12
};

enum {
	E018_MOT_WALK = 0,
	E018_MOT_TURN_R = 1,
	E018_MOT_TURN_L = 2,
	E018_MOT_ATTACK = 3,
	E018_MOT_MISS = 4,
	E018_MOT_CATCH_IN = 5,
	E018_MOT_CATCH_LOOP = 6,
	E018_MOT_CATCH_OUT = 7,
	E018_MOT_DAMAGE = 8,
	E018_MOT_DEAD = 9,
	E018_MOT_SP0 = 10,
	E018_MOT_SP1 = 11,
	E018_MOT_SP2 = 12,
	E018_MOT_SP3 = 13
};

enum {
	E019_MOT_STAND = 0,
	E019_MOT_APPEAR = 1,
	E019_MOT_WALK = 2,
	E019_MOT_ATTACK = 3,
	E019_MOT_MISS = 4,
	E019_MOT_CATCH_IN = 5,
	E019_MOT_CATCH_LOOP = 6,
	E019_MOT_CATCH_OUT = 7,
	E019_MOT_DAMAGE = 8,
	E019_MOT_DEAD = 9,
	E019_MOT_SP0 = 10
};

enum {
	E020_MOT_STAND = 0,
	E020_MOT_WALK = 1,
	E020_MOT_BACK = 2,
	E020_MOT_ATTACK = 3,
	E020_MOT_MISS = 4,
	E020_MOT_CATCH_IN = 5,
	E020_MOT_CATCH_LOOP = 6,
	E020_MOT_CATCH_OUT = 7,
	E020_MOT_DAMAGE = 8,
	E020_MOT_DEAD = 9,
	E020_MOT_SP0 = 10,
	E020_MOT_SP1 = 11
};

enum {
	E021_MOT_STAND = 0,
	E021_MOT_WALK = 1,
	E021_MOT_TURN_R = 2,
	E021_MOT_TURN_L = 3,
	E021_MOT_BACK = 4,
	E021_MOT_CATCH_LOOP = 5
};

enum {
	E022_MOT_STAND = 0,
	E022_MOT_WALK = 1,
	E022_MOT_ATTACK = 2,
	E022_MOT_MISS = 3,
	E022_MOT_CATCH_LOOP = 4,
	E022_MOT_CATCH_OUT = 5,
	E022_MOT_DAMAGE = 6,
	E022_MOT_DEAD = 7,
	E022_MOT_SP0 = 8,
	E022_MOT_SP1 = 9,
	E022_MOT_SP2 = 10
};

enum {
	E023_MOT_STAND = 0,
	E023_MOT_WALK = 1,
	E023_MOT_ATTACK = 2,
	E023_MOT_MISS = 3,
	E023_MOT_CATCH_LOOP = 4,
	E023_MOT_CATCH_OUT = 5,
	E023_MOT_DAMAGE = 6,
	E023_MOT_DEAD = 7
};

enum {
	E024_MOT_STAND = 0,
	E024_MOT_WALK = 1,
	E024_MOT_ATTACK = 2,
	E024_MOT_MISS = 3,
	E024_MOT_CATCH_LOOP = 4,
	E024_MOT_CATCH_OUT = 5,
	E024_MOT_DAMAGE = 6,
	E024_MOT_DEAD = 7,
	E024_MOT_SP0 = 8,
	E024_MOT_SP1 = 9,
	E024_MOT_SP2 = 10,
	E024_MOT_SP3 = 11
};

enum {
	E025_MOT_STAND = 0,
	E025_MOT_ATTACK = 1,
	E025_MOT_MISS = 2,
	E025_MOT_CATCH_LOOP = 3,
	E025_MOT_CATCH_OUT = 4,
	E025_MOT_SP0 = 5,
	E025_MOT_SP1 = 6,
	E025_MOT_SP2 = 7,
	E025_MOT_SP3 = 8,
	E025_MOT_SP4 = 9,
	E025_MOT_SP5 = 10,
	E025_MOT_SP6 = 11,
	E025_MOT_SP7 = 12
};

enum {
	E027_MOT_STAND = 0,
	E027_MOT_APPEAR = 1,
	E027_MOT_WALK = 2,
	E027_MOT_TURN_R = 3,
	E027_MOT_TURN_L = 4,
	E027_MOT_ATTACK = 5,
	E027_MOT_MISS = 6,
	E027_MOT_CATCH_LOOP = 7,
	E027_MOT_CATCH_OUT = 8,
	E027_MOT_DAMAGE = 9,
	E027_MOT_DEAD = 10,
	E027_MOT_SP0 = 11,
	E027_MOT_SP1 = 12,
	E027_MOT_SP2 = 13,
	E027_MOT_SP3 = 14
};

enum {
	E028_MOT_STAND = 0,
	E028_MOT_APPEAR = 1,
	E028_MOT_WALK = 2,
	E028_MOT_ATTACK = 3,
	E028_MOT_MISS = 4,
	E028_MOT_CATCH_LOOP = 5,
	E028_MOT_CATCH_OUT = 6,
	E028_MOT_DAMAGE = 7,
	E028_MOT_DEAD = 8,
	E028_MOT_SP0 = 9,
	E028_MOT_SP1 = 10,
	E028_MOT_SP2 = 11
};

enum {
	E031_MOT_STAND = 0,
	E031_MOT_APPEAR = 1,
	E031_MOT_WALK = 2,
	E031_MOT_TURN_R = 3,
	E031_MOT_TURN_L = 4,
	E031_MOT_ATTACK = 5,
	E031_MOT_DAMAGE = 6,
	E031_MOT_DEAD = 7
};

enum {
	E032_MOT_STAND = 0,
	E032_MOT_WALK = 1,
	E032_MOT_TURN_R = 2,
	E032_MOT_TURN_L = 3,
	E032_MOT_ATTACK = 4,
	E032_MOT_MISS = 5,
	E032_MOT_CATCH_IN = 6,
	E032_MOT_CATCH_LOOP = 7,
	E032_MOT_CATCH_OUT = 8,
	E032_MOT_DAMAGE = 9,
	E032_MOT_DEAD = 10,
	E032_MOT_SP0 = 11,
	E032_MOT_SP1 = 12,
	E032_MOT_SP2 = 13,
	E032_MOT_SP3 = 14,
	E032_MOT_SP4 = 15,
	E032_MOT_SP5 = 16,
	E032_MOT_SP6 = 17
};

enum {
	E033_MOT_STAND = 0,
	E033_MOT_WALK = 1,
	E033_MOT_TURN_R = 2,
	E033_MOT_TURN_L = 3,
	E033_MOT_BACK = 4,
	E033_MOT_ATTACK = 5,
	E033_MOT_MISS = 6,
	E033_MOT_CATCH_IN = 7,
	E033_MOT_CATCH_LOOP = 8,
	E033_MOT_CATCH_OUT = 9,
	E033_MOT_DAMAGE = 10,
	E033_MOT_DEAD = 11,
	E033_MOT_SP0 = 12,
	E033_MOT_SP1 = 13,
	E033_MOT_SP2 = 14,
	E033_MOT_SP3 = 15,
	E033_MOT_SP4 = 16,
	E033_MOT_SP5 = 17,
	E033_MOT_SP6 = 18
};

enum {
	E034_MOT_STAND = 0,
	E034_MOT_WALK = 1,
	E034_MOT_TURN_R = 2,
	E034_MOT_TURN_L = 3,
	E034_MOT_ATTACK = 4,
	E034_MOT_MISS = 5,
	E034_MOT_CATCH_IN = 6,
	E034_MOT_CATCH_LOOP = 7,
	E034_MOT_CATCH_OUT = 8,
	E034_MOT_DAMAGE = 9,
	E034_MOT_DEAD = 10,
	E034_MOT_SP0 = 11,
	E034_MOT_SP1 = 12,
	E034_MOT_SP2 = 13,
	E034_MOT_SP3 = 14,
	E034_MOT_SP4 = 15,
	E034_MOT_SP5 = 16,
	E034_MOT_SP6 = 17
};

enum {
	E035_MOT_STAND = 0,
	E035_MOT_WALK = 1,
	E035_MOT_ATTACK = 2,
	E035_MOT_MISS = 3,
	E035_MOT_CATCH_IN = 4,
	E035_MOT_CATCH_LOOP = 5,
	E035_MOT_CATCH_OUT = 6,
	E035_MOT_DAMAGE = 7,
	E035_MOT_DEAD = 8,
	E035_MOT_SP0 = 9,
	E035_MOT_SP1 = 10,
	E035_MOT_SP2 = 11,
	E035_MOT_SP3 = 12,
	E035_MOT_SP4 = 13,
	E035_MOT_SP5 = 14,
	E035_MOT_SP6 = 15
};

enum {
	E036_MOT_STAND = 0,
	E036_MOT_WALK = 1,
	E036_MOT_ATTACK = 2,
	E036_MOT_MISS = 3,
	E036_MOT_CATCH_IN = 4,
	E036_MOT_CATCH_LOOP = 5,
	E036_MOT_CATCH_OUT = 6,
	E036_MOT_DAMAGE = 7,
	E036_MOT_DEAD = 8,
	E036_MOT_SP0 = 9,
	E036_MOT_SP1 = 10,
	E036_MOT_SP2 = 11,
	E036_MOT_SP3 = 12
};

enum {
	E037_MOT_STAND = 0,
	E037_MOT_WALK = 1,
	E037_MOT_ATTACK_A = 2,
	E037_MOT_ATTACK_B = 3,
	E037_MOT_ATTACK_C = 4,
	E037_MOT_ATTACK_D = 5,
	E037_MOT_ATTACK_E = 6,
	E037_MOT_DAMAGE = 7,
	E037_MOT_DEAD = 8,
	E037_MOT_SP0 = 9,
	E037_MOT_SP1 = 10,
	E037_MOT_SP2 = 11,
	E037_MOT_SP3 = 12,
	E037_MOT_SP4 = 13
};

enum {
	E038_MOT_STAND = 0,
	E038_MOT_APPEAR = 1,
	E038_MOT_WALK = 2,
	E038_MOT_ATTACK = 3,
	E038_MOT_MISS = 4,
	E038_MOT_CATCH_IN = 5,
	E038_MOT_CATCH_LOOP = 6,
	E038_MOT_CATCH_OUT = 7,
	E038_MOT_DAMAGE = 8,
	E038_MOT_DEAD = 9
};

enum {
	E040_MOT_STAND = 0,
	E040_MOT_WALK = 1,
	E040_MOT_ATTACK = 2,
	E040_MOT_DAMAGE = 3,
	E040_MOT_SP0 = 4,
	E040_MOT_SP1 = 5,
	E040_MOT_SP2 = 6,
	E040_MOT_SP3 = 7
};

enum {
	E042_MOT_WALK = 0,
	E042_MOT_ATTACK = 1,
	E042_MOT_MISS = 2,
	E042_MOT_CATCH_IN = 3,
	E042_MOT_CATCH_LOOP = 4,
	E042_MOT_CATCH_OUT = 5,
	E042_MOT_DAMAGE = 6,
	E042_MOT_DEAD = 7,
	E042_MOT_SP0 = 8,
	E042_MOT_SP1 = 9,
	E042_MOT_SP2 = 10,
	E042_MOT_SP3 = 11,
	E042_MOT_SP4 = 12
};

typedef enum {
	DR_CNT_IDOL = 0,
	DR_CNT_START = 1,
	DR_CNT_LOAD_WAIT = 2,
	DR_CNT_OPEN_STRT = 3,
	DR_CNT_DOR_OPEN = 4,
	DR_CNT_CLOSE_STRT = 5,
	DR_CNT_DOR_CLOSE = 6,
	DR_CNT_END = 7
} ST_DOOR_CONTE;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x1c
	/* 0x00 */ float adj_r0;
	/* 0x04 */ float adj_r1;
	/* 0x08 */ float adj_org;
	/* 0x0c */ u_short adj_x0;
	/* 0x0e */ u_short adj_x1;
	/* 0x10 */ u_short adj_z0;
	/* 0x12 */ u_short adj_z1;
	/* 0x14 */ ST_DOOR_CONTE state;
	/* 0x18 */ u_char timer;
	/* 0x19 */ u_char door_mtn_dat_no;
	/* 0x1a */ u_char mtn_no;
} DOOR_CONTE;

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int TIM2_UINT32;

typedef struct { // 0x30
	/* 0x00 */ SgLIGHT *lights;
	/* 0x04 */ SgLIGHT *plights;
	/* 0x08 */ SgLIGHT *slights;
	/* 0x0c */ int lnum;
	/* 0x10 */ int pnum;
	/* 0x14 */ int snum;
	/* 0x18 */ int lmax;
	/* 0x1c */ int pmax;
	/* 0x20 */ int smax;
	/* 0x24 */ u_int *ldata;
	/* 0x28 */ u_int *pdata;
	/* 0x2c */ u_int *sdata;
} ROOM_LIGHT;

typedef struct { // 0x1c
	/* 0x00 */ float rot_y;
	/* 0x04 */ float rot_x;
	/* 0x08 */ u_short pos_x;
	/* 0x0a */ short int pos_y;
	/* 0x0c */ u_short pos_z;
	/* 0x0e */ u_short attr_id;
	/* 0x10 */ u_short model_no;
	/* 0x12 */ u_short id;
	/* 0x14 */ short int top;
	/* 0x16 */ short int btm;
	/* 0x18 */ u_char snum;
} FURN_DATA_POP;

enum {
	FURN_USER_NOW_ROOM = 0,
	FURN_USER_DOOR_NOW_ROOM = 1,
	FURN_USER_NEXT_ROOM = 2,
	FURN_USER_DOOR_NEXT_ROOM = 3,
	FURN_USER_DOOR_JOINT = 4,
	FURN_USER_NOTHING = 5
};

enum {
	PLYR_INIT_LOAD_SE_REQ = 0,
	PLYR_INIT_LOAD_SE_WAIT = 1,
	PLYR_INIT_LOAD_TEX_REQ = 2,
	PLYR_INIT_LOAD_TEX_SYNC = 3,
	PLYR_INIT_LOAD_MPK_REQ = 4,
	PLYR_INIT_LOAD_MPK_SYNC = 5,
	PLYR_INIT_LOAD_ACS_REQ = 6,
	PLYR_INIT_LOAD_ACS_SYNC = 7,
	PLYR_INIT_LOAD_BWC_REQ = 8,
	PLYR_INIT_LOAD_BWC_SYNC = 9,
	PLYR_INIT_LOAD_CLT_REQ = 10,
	PLYR_INIT_LOAD_CLT_SYNC = 11,
	PLYR_INIT_LOAD_ANM_REQ = 12,
	PLYR_INIT_LOAD_ANM_SYNC = 13
};

typedef struct { // 0xc
	/* 0x0 */ u_short pk2;
	/* 0x2 */ u_short mpk;
	/* 0x4 */ u_short acs;
	/* 0x6 */ u_short anm;
	/* 0x8 */ u_short bwc;
	/* 0xa */ u_short clt;
} PLYR_FILE_ID;

typedef struct { // 0x10
	/* 0x0 */ float rot0;
	/* 0x4 */ float rot1;
	/* 0x8 */ float spd;
	/* 0xc */ u_short timer;
	/* 0xe */ u_short move_type;
} PLYR_FURI_DAT;

enum {
	CMOVE_KAGE = 0,
	CMOVE_KARASU = 1,
	CMOVE_KAIDAN = 2,
	CMOVE_NINGYO = 3
};

typedef sceVu0FVECTOR VECTOR;
typedef sceVu0FMATRIX MATRIX;

typedef struct { // 0xb0
	/* 0x00 */ float scrz;
	/* 0x04 */ float ax;
	/* 0x08 */ float ay;
	/* 0x0c */ float cx;
	/* 0x10 */ float cy;
	/* 0x14 */ float zmin;
	/* 0x18 */ float zmax;
	/* 0x1c */ float nearz;
	/* 0x20 */ float farz;
	/* 0x30 */ MATRIX vs;
	/* 0x70 */ MATRIX vc;
} SCREEN;

typedef struct { // 0xf0
	/* 0x00 */ VECTOR yd;
	/* 0x10 */ VECTOR zd;
	/* 0x20 */ VECTOR p;
	/* 0x30 */ MATRIX wv;
	/* 0x70 */ MATRIX ws;
	/* 0xb0 */ MATRIX wc;
} VIEW;

typedef struct { // 0x130
	/* 0x000 */ int model;
	/* 0x010 */ VECTOR lp0;
	/* 0x020 */ VECTOR lp1;
	/* 0x030 */ VECTOR lp2;
	/* 0x040 */ VECTOR ld0;
	/* 0x050 */ VECTOR ld1;
	/* 0x060 */ VECTOR ld2;
	/* 0x070 */ VECTOR c0;
	/* 0x080 */ VECTOR c1;
	/* 0x090 */ VECTOR c2;
	/* 0x0a0 */ VECTOR a;
	/* 0x0b0 */ MATRIX nl;
	/* 0x0f0 */ MATRIX lc;
} LIGHT;

typedef struct { // 0x40
	/* 0x00 */ qword tag;
	/* 0x10 */ VIEW *view;
	/* 0x14 */ LIGHT *light;
	/* 0x18 */ MATRIX *mw;
	/* 0x1c */ u_char shadow;
	/* 0x1d */ u_char clip;
	/* 0x1e */ u_char spec;
	/* 0x20 */ float rate;
	/* 0x24 */ VECTOR *c;
	/* 0x28 */ VECTOR *c1;
	/* 0x2c */ VECTOR *cvnt;
	/* 0x30 */ VECTOR *cvnt1;
	/* 0x34 */ VECTOR *box;
	/* 0x38 */ qword* (*driver1)(/* parameters unknown */);
	/* 0x3c */ qword* (*driver3)(/* parameters unknown */);
} OBJECT;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR st;
	/* 0x10 */ sceVu0FVECTOR vp;
	/* 0x20 */ sceVu0FVECTOR clip;
} SNODE;

typedef struct { // 0x3d0
	/* 0x000 */ SNODE node0[10];
	/* 0x1e0 */ SNODE node1[10];
	/* 0x3c0 */ SNODE *in;
	/* 0x3c4 */ SNODE *out;
	/* 0x3c8 */ int nodes;
} FlipNode;

typedef struct { // 0xc
	/* 0x0 */ int mask;
	/* 0x4 */ int xyz;
	/* 0x8 */ float sgn;
} ClipData;

typedef struct { // 0x8
	/* 0x0 */ int s;
	/* 0x4 */ int e;
} BoundLine;

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR vp;
	/* 0x10 */ sceVu0FVECTOR clip;
} MNODE;

typedef struct { // 0x290
	/* 0x000 */ MNODE node0[10];
	/* 0x140 */ MNODE node1[10];
	/* 0x280 */ MNODE *in;
	/* 0x284 */ MNODE *out;
	/* 0x288 */ int nodes;
} MFlipNode;

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct { // 0x8
	/* 0x0 */ u_short func;
	/* 0x2 */ u_short entry;
	/* 0x4 */ u_int value;
} sceSdBatch;

typedef struct { // 0x14
	/* 0x00 */ int core;
	/* 0x04 */ int mode;
	/* 0x08 */ short int depth_L;
	/* 0x0a */ short int depth_R;
	/* 0x0c */ int delay;
	/* 0x10 */ int feedback;
} sceSdEffectAttr;

typedef struct { // 0x180
	/* 0x000 */ u_char y[256];
	/* 0x100 */ u_char cb[64];
	/* 0x140 */ u_char cr[64];
} sceIpuRAW8;

typedef struct { // 0x300
	/* 0x000 */ short int y[256];
	/* 0x200 */ short int cb[64];
	/* 0x280 */ short int cr[64];
} sceIpuRAW16;

typedef struct { // 0x400
	/* 0x000 */ u_int pix[256];
} sceIpuRGB32;

typedef struct { // 0x200
	/* 0x000 */ u_short pix[256];
} sceIpuRGB16;

typedef struct { // 0x80
	/* 0x00 */ u_int pix[32];
} sceIpuINDX4;

typedef struct { // 0x24
	/* 0x00 */ u_int d4madr;
	/* 0x04 */ u_int d4tadr;
	/* 0x08 */ u_int d4qwc;
	/* 0x0c */ u_int d4chcr;
	/* 0x10 */ u_int d3madr;
	/* 0x14 */ u_int d3qwc;
	/* 0x18 */ u_int d3chcr;
	/* 0x1c */ u_int ipubp;
	/* 0x20 */ u_int ipuctrl;
} sceIpuDmaEnv;

typedef enum {
	sceMpegStrM2V = 0,
	sceMpegStrIPU = 1,
	sceMpegStrPCM = 2,
	sceMpegStrADPCM = 3,
	sceMpegStrDATA = 4
} sceMpegStrType;

typedef enum {
	sceMpegCbError = 0,
	sceMpegCbNodata = 1,
	sceMpegCbStopDMA = 2,
	sceMpegCbRestartDMA = 3,
	sceMpegCbBackground = 4,
	sceMpegCbTimeStamp = 5,
	sceMpegCbStr = 6
} sceMpegCbType;

typedef struct { // 0x8
	/* 0x0 */ sceMpegCbType type;
	/* 0x4 */ char *errMessage;
} sceMpegCbDataError;

typedef struct { // 0x18
	/* 0x00 */ sceMpegCbType type;
	/* 0x08 */ long int pts;
	/* 0x10 */ long int dts;
} sceMpegCbDataTimeStamp;

typedef struct { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x04 */ u_char *header;
	/* 0x08 */ u_char *data;
	/* 0x0c */ u_int len;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
} sceMpegCbDataStr;

typedef union { // 0x20
	/* 0x00 */ sceMpegCbType type;
	/* 0x00 */ sceMpegCbDataError error;
	/* 0x00 */ sceMpegCbDataTimeStamp ts;
	/* 0x00 */ sceMpegCbDataStr str;
} sceMpegCbData;

typedef struct { // 0x48
	/* 0x00 */ int width;
	/* 0x04 */ int height;
	/* 0x08 */ int frameCount;
	/* 0x10 */ long int pts;
	/* 0x18 */ long int dts;
	/* 0x20 */ u_long flags;
	/* 0x28 */ long int pts2nd;
	/* 0x30 */ long int dts2nd;
	/* 0x38 */ u_long flags2nd;
	/* 0x40 */ void *sys;
} sceMpeg;

typedef int (*sceMpegCallback)(/* parameters unknown */);

typedef struct { // 0x18
	/* 0x00 */ long int pts;
	/* 0x08 */ long int dts;
	/* 0x10 */ int pos;
	/* 0x14 */ int len;
} TimeStamp;

typedef struct { // 0x60
	/* 0x00 */ u_long128 *data;
	/* 0x04 */ u_long128 *tag;
	/* 0x08 */ int n;
	/* 0x0c */ int dmaStart;
	/* 0x10 */ int dmaN;
	/* 0x14 */ int readBytes;
	/* 0x18 */ int buffSize;
	/* 0x1c */ sceIpuDmaEnv env;
	/* 0x40 */ int sema;
	/* 0x44 */ int isActive;
	/* 0x48 */ long int totalBytes;
	/* 0x50 */ TimeStamp *ts;
	/* 0x54 */ int n_ts;
	/* 0x58 */ int count_ts;
	/* 0x5c */ int wt_ts;
} ViBuf;

typedef struct { // 0xb8
	/* 0x00 */ sceMpeg mpeg;
	/* 0x48 */ ViBuf vibuf;
	/* 0xa8 */ u_int state;
	/* 0xac */ int sema;
	/* 0xb0 */ int hid_endimage;
	/* 0xb4 */ int hid_vblank;
} VideoDec;

typedef struct { // 0x5000c
	/* 0x00000 */ u_char data[327680];
	/* 0x50000 */ int put;
	/* 0x50004 */ int count;
	/* 0x50008 */ int size;
} ReadBuf;

typedef struct { // 0x12c000
	/* 0x000000 */ u_char v[1228800];
} VoData;

typedef struct { // 0x39240
	/* 0x00000 */ int status;
	/* 0x00004 */ int dummy[15];
	/* 0x00040 */ u_int v[2][29248];
} VoTag;

typedef struct { // 0x14
	/* 0x00 */ VoData *data;
	/* 0x04 */ VoTag *tag;
	/* 0x08 */ int write;
	/* 0x0c */ int count;
	/* 0x10 */ int size;
} VoBuf;

typedef struct { // 0x20
	/* 0x00 */ char id[4];
	/* 0x04 */ int size;
	/* 0x08 */ int type;
	/* 0x0c */ int rate;
	/* 0x10 */ int ch;
	/* 0x14 */ int interSize;
	/* 0x18 */ int loopStart;
	/* 0x1c */ int loopEnd;
} SpuStreamHeader;

typedef struct { // 0x8
	/* 0x0 */ char id[4];
	/* 0x4 */ int size;
} SpuStreamBody;

typedef struct { // 0x5c
	/* 0x00 */ int state;
	/* 0x04 */ SpuStreamHeader sshd;
	/* 0x24 */ SpuStreamBody ssbd;
	/* 0x2c */ int hdrCount;
	/* 0x30 */ u_char *data;
	/* 0x34 */ int put;
	/* 0x38 */ int count;
	/* 0x3c */ int size;
	/* 0x40 */ int totalBytes;
	/* 0x44 */ int iopBuff;
	/* 0x48 */ int iopBuffSize;
	/* 0x4c */ int iopLastPos;
	/* 0x50 */ int iopPausePos;
	/* 0x54 */ int totalBytesSent;
	/* 0x58 */ int iopZero;
} AudioDec;

typedef struct { // 0x34
	/* 0x00 */ int isOnCD;
	/* 0x04 */ int size;
	/* 0x08 */ sceCdlFILE fp;
	/* 0x2c */ u_char *iopBuf;
	/* 0x30 */ int fd;
} StrFile;

enum {
	FOD_CAM_POS_ID = 0,
	FOD_CAM_INT_ID = 1,
	FOD_CAM_ROLL_ID = 2,
	FOD_CAM_FOV_ID = 3,
	FOD_CAM_NEAR_ID = 4,
	FOD_CAM_FAR_ID = 5,
	FOD_CAM_ANM_ID_MAX = 6,
	FOD_LIT_COL_ID = 0,
	FOD_LIT_POS_ID = 1,
	FOD_LIT_INT_ID = 2,
	FOD_LIT_CONE_ID = 3,
	FOD_LIT_SPREAD_ID = 4,
	FOD_LIT_ANM_ID_MAX = 5,
	FOD_LIT_DIR_ID = 2,
	FOD_LAMB_TYPE = 0,
	FOD_LINF_TYPE = 1,
	FOD_LSPOT_TYPE = 2,
	FOD_LPOINT_TYPE = 3,
	FOD_LIT_TYPE_MAX = 4,
	FOD_AMB_CMN = 0,
	FOD_AMB_CHAR = 1,
	FOD_AMB_ROOM = 2,
	FOD_AMB_FURN = 3,
	FOD_AMB_DOOR = 4,
	FOD_AMB_ITEM = 5,
	FOD_AMB_MAX = 6,
	FOD_EFF_Z_DEPTH = 0,
	FOD_EFF_DITHER = 1,
	FOD_EFF_BLUR_NORMAL = 2,
	FOD_EFF_BLUR_BLACK = 3,
	FOD_EFF_BLUR_WHITE = 4,
	FOD_EFF_DEFORM = 5,
	FOD_EFF_FOCUS = 6,
	FOD_EFF_MONOCHROME = 7,
	FOD_EFF_SEPIA = 8,
	FOD_EFF_CONTRAST1 = 9,
	FOD_EFF_CONTRAST2 = 10,
	FOD_EFF_CONTRAST3 = 11,
	FOD_EFF_FADE_FRAME = 12,
	FOD_EFF_LENZ_FLARE = 13,
	FOD_EFF_CROSS_FADE = 14,
	FOD_EFF_FADE_SCREEN = 15,
	FOD_EFF_FADE_MODEL = 16,
	FOD_EFF_COLOR_CHANGE = 17,
	FOD_EFF_PARTS_DEFORM = 18,
	FOD_EFF_FIRE = 19,
	FOD_EFF_FIX_FIRE = 20,
	FOD_EFF_ITEM = 21,
	FOD_EFF_AMULET = 22,
	FOD_EFF_ENEMY = 23,
	FOD_EFF_SHIBATA = 24,
	FOD_EFF_VIBRATE = 25,
	FOD_EFF_ID_MAX = 26,
	FOD_EFF_BLUR_TYPE_NORMAL = 0,
	FOD_EFF_BLUR_TYPE_BLACK = 1,
	FOD_EFF_BLUR_TYPE_WHITE = 2,
	FOD_EFF_LF_ROT = 0,
	FOD_EFF_LF_TRANS = 1,
	FOD_EFF_PDF_TYPE1 = 0,
	FOD_EFF_PDF_TYPE2 = 1,
	FOD_EFF_PDF_TYPE3 = 2
};

typedef struct { // 0x10
	/* 0x0 */ u_int frame;
	/* 0x4 */ u_int size;
	/* 0x8 */ u_char anm[8];
} FOD_CAM_FRAME;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR p;
	/* 0x10 */ sceVu0FVECTOR i;
	/* 0x20 */ float roll;
	/* 0x24 */ float fov;
	/* 0x28 */ float near;
	/* 0x2c */ float far;
} FOD_FIRST_CAM;

typedef struct { // 0x10
	/* 0x0 */ u_int frame;
	/* 0x4 */ u_int size;
	/* 0x8 */ u_int pad[2];
} FOD_LIT_FRAME;

typedef struct { // 0x10
	/* 0x0 */ int light_id;
	/* 0x4 */ u_int type;
	/* 0x8 */ u_char anm[8];
} FOD_LIT_ANM;

typedef struct { // 0x20
	/* 0x00 */ u_char light_no;
	/* 0x01 */ u_char light_type;
	/* 0x02 */ u_char anm_flg;
	/* 0x03 */ char pad;
	/* 0x04 */ char light_name[28];
} FOD_LIT_SERIAL;

typedef struct { // 0x20
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
} FOD_LIT_AMB;

typedef struct { // 0x30
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float direction[4];
} FOD_LIT_INF;

typedef struct { // 0x50
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float position[4];
	/* 0x30 */ float interest[4];
	/* 0x40 */ float cone;
	/* 0x44 */ float spread;
	/* 0x48 */ float fpad[2];
} FOD_LIT_SPOT;

typedef struct { // 0x30
	/* 0x00 */ u_int id;
	/* 0x04 */ u_int size;
	/* 0x08 */ u_int pad[2];
	/* 0x10 */ float color[4];
	/* 0x20 */ float position[4];
} FOD_LIT_POINT;

typedef struct { // 0x1940
	/* 0x0000 */ FOD_LIT_SERIAL lit_serial[36];
	/* 0x0480 */ SgLIGHT all_lit[36];
	/* 0x18c0 */ sceVu0FVECTOR amb[6];
	/* 0x1920 */ u_int *lit_top;
	/* 0x1924 */ u_int ilit_num;
	/* 0x1928 */ u_int slit_num;
	/* 0x192c */ u_int plit_num;
	/* 0x1930 */ u_int all_lit_num;
	/* 0x1934 */ int hand_spot_no;
} FOD_LIGHT;

typedef struct { // 0x10
	/* 0x0 */ int num;
	/* 0x4 */ int shibata;
	/* 0x8 */ int pad[2];
} FOD_EF_FIX_HDR;

typedef struct { // 0x10
	/* 0x0 */ u_int frame_no;
	/* 0x4 */ u_int size;
	/* 0x8 */ u_char zdepth;
	/* 0x9 */ u_char mono;
	/* 0xa */ u_char sepia;
	/* 0xb */ u_char color_change;
	/* 0xc */ u_int pad;
} FOD_EFF_FRAME;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char alpmax;
	/* 0x3 */ u_char colmax;
	/* 0x4 */ float speed;
	/* 0x8 */ float alpha;
	/* 0xc */ u_int ipad;
} FOD_EF_DITHER;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char blur_type;
	/* 0x2 */ u_char alpha;
	/* 0x3 */ u_char cpad;
	/* 0x4 */ u_int scale;
	/* 0x8 */ u_int rot;
	/* 0xc */ u_int ipad;
} FOD_EF_BLUR;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char volume;
	/* 0x3 */ u_char cpad;
	/* 0x4 */ u_int ipad[3];
} FOD_EF_DEFORM;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_FOCUS;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char color;
	/* 0x2 */ u_char alpha;
	/* 0x3 */ u_char cont_type;
	/* 0x4 */ u_int ipad[3];
} FOD_EF_CONTRAST;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_F_FRAME;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float x;
	/* 0x8 */ float y;
	/* 0xc */ float z;
} FOD_EF_LENZ_F;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char volume;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int ipad[3];
} FOD_EF_CROSS_F;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ u_char r;
	/* 0x5 */ u_char g;
	/* 0x6 */ u_char b;
	/* 0x7 */ u_char a;
	/* 0x8 */ u_int ipad[2];
} FOD_EF_FADE_SCR;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char alpha;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_char prefix[4];
	/* 0x8 */ u_int mdl_id;
	/* 0xc */ u_int ipad;
} FOD_EF_FADE_MDL;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char type;
	/* 0x3 */ u_char alpha;
	/* 0x4 */ float rate;
	/* 0x8 */ float trate;
	/* 0xc */ int pad;
} FOD_EF_P_DEFORM1;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_P_DEFORM2;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char data_type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float sclx;
	/* 0x8 */ float scly;
	/* 0xc */ float pad;
} FOD_EF_P_DEFORM3;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_FIRE;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_ITEM;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ float posx;
	/* 0x8 */ float posy;
	/* 0xc */ float posz;
} FOD_EF_AMULET;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char cpad[3];
	/* 0x4 */ u_char prefix[4];
	/* 0x8 */ u_int ipad[2];
} FOD_EF_ENEMY;

typedef struct { // 0x10
	/* 0x0 */ u_char efct_id;
	/* 0x1 */ u_char type;
	/* 0x2 */ u_char cpad[2];
	/* 0x4 */ u_int frame;
	/* 0x8 */ u_int ipad[2];
} FOD_EF_VIBRATE;

typedef union { // 0x10
	/* 0x0 */ FOD_EF_DITHER dither;
	/* 0x0 */ FOD_EF_BLUR blur;
	/* 0x0 */ FOD_EF_DEFORM deform;
	/* 0x0 */ FOD_EF_FOCUS focus;
	/* 0x0 */ FOD_EF_CONTRAST contrast;
	/* 0x0 */ FOD_EF_F_FRAME f_frame;
	/* 0x0 */ FOD_EF_LENZ_F lenz_f;
	/* 0x0 */ FOD_EF_CROSS_F cross_f;
	/* 0x0 */ FOD_EF_P_DEFORM1 pdf1;
	/* 0x0 */ FOD_EF_P_DEFORM2 pdf2;
	/* 0x0 */ FOD_EF_P_DEFORM3 pdf3;
	/* 0x0 */ FOD_EF_FADE_SCR fade_scr;
	/* 0x0 */ FOD_EF_FADE_MDL fade_mdl;
	/* 0x0 */ FOD_EF_FIRE fire;
	/* 0x0 */ FOD_EF_ITEM item;
	/* 0x0 */ FOD_EF_AMULET amulet;
	/* 0x0 */ FOD_EF_ENEMY enemy;
	/* 0x0 */ FOD_EF_VIBRATE vibrate;
	/* 0x0 */ u_char unit[16];
} FOD_EFF_DATA;

typedef struct { // 0xe0
	/* 0x00 */ FOD_EFF_DATA *fix[12];
	/* 0x30 */ FOD_EF_FADE_MDL *fade_mdl[4];
	/* 0x40 */ sceVu0FVECTOR fire_pos[4];
	/* 0x80 */ sceVu0FVECTOR lenz_pos;
	/* 0x90 */ sceVu0FVECTOR lenz_rot;
	/* 0xa0 */ sceVu0FVECTOR pdf_pos;
	/* 0xb0 */ float pdf_spd;
	/* 0xb4 */ float pdf_rate;
	/* 0xb8 */ float pdf_trate;
	/* 0xbc */ void *pdf_p;
	/* 0xc0 */ u_int fix_eff_num;
	/* 0xc4 */ u_int fade_mdl_cnt;
	/* 0xc8 */ u_int fire_num;
	/* 0xcc */ u_int mono_flg;
	/* 0xd0 */ int mdl_efct_sw[4];
} FOD_EFF_PARAM;

typedef struct { // 0x10
	/* 0x0 */ u_int file_id;
	/* 0x4 */ float version;
	/* 0x8 */ u_int reso;
	/* 0xc */ u_int frame;
} FOD_FILE_HDR;

typedef struct { // 0x1980
	/* 0x0000 */ FOD_LIGHT fod_light;
	/* 0x1940 */ FOD_FILE_HDR *cam_file_hdr;
	/* 0x1944 */ FOD_CAM_FRAME *cam_frame_top;
	/* 0x1948 */ FOD_CAM_FRAME *cam_frame;
	/* 0x194c */ FOD_FILE_HDR *lit_file_hdr;
	/* 0x1950 */ FOD_LIT_FRAME *lit_frame_top;
	/* 0x1954 */ FOD_LIT_FRAME *lit_frame;
	/* 0x1958 */ FOD_FILE_HDR *eff_file_hdr;
	/* 0x195c */ FOD_EFF_FRAME *eff_frame_top;
	/* 0x1960 */ FOD_EFF_FRAME *eff_frame;
	/* 0x1964 */ u_int now_frame;
	/* 0x1968 */ u_int frame_max;
	/* 0x196c */ u_int total_frame;
	/* 0x1970 */ u_int now_reso;
	/* 0x1974 */ u_char resolution;
	/* 0x1975 */ u_char end_flg;
	/* 0x1976 */ u_char pad[2];
} FOD_CTRL;

enum {
	SCN_DATA_LOAD_REQ = 0,
	SCN_DATA_LOAD_WAIT = 1,
	SCN_ADPCM_LOAD_REQ = 2,
	SCN_ADPCM_LOAD_WAIT = 3
};

typedef struct { // 0x18
	/* 0x00 */ u_int type;
	/* 0x04 */ float sclx;
	/* 0x08 */ float scly;
	/* 0x0c */ u_int alpha;
	/* 0x10 */ float rate;
	/* 0x14 */ float trate;
} SCN_ENE_EF_PDF;

typedef struct { // 0x4c
	/* 0x00 */ u_short scene_no;
	/* 0x02 */ u_short mdl_no;
	/* 0x04 */ float aura_size;
	/* 0x08 */ float aura_rate;
	/* 0x0c */ u_int aura_rgba;
	/* 0x10 */ SCN_ENE_EF_PDF pdf1;
	/* 0x28 */ SCN_ENE_EF_PDF pdf2;
	/* 0x40 */ float pdf_dist;
	/* 0x44 */ float aura_pos_ajst;
	/* 0x48 */ int mdl_alpha;
} SCN_ENE_EFCT;

typedef struct { // 0x140
	/* 0x000 */ ANI_CTRL mdl_anm;
	/* 0x100 */ SCN_ENE_EFCT *ene_efct;
	/* 0x104 */ void *efct_addr[4];
	/* 0x114 */ char prefix[4];
	/* 0x118 */ u_int mdl_no;
	/* 0x11c */ u_int mdl_alpha;
	/* 0x120 */ u_int scn_mdl_no;
	/* 0x124 */ u_int *mdl_addr;
	/* 0x128 */ u_int *mot_addr;
	/* 0x12c */ u_int *mim_addr;
	/* 0x130 */ u_int *mim_buf_addr;
	/* 0x134 */ u_int disp_flg;
} SCN_ANM_MDL;

typedef struct { // 0x20
	/* 0x00 */ float min;
	/* 0x04 */ float max;
	/* 0x08 */ float near;
	/* 0x0c */ float far;
	/* 0x10 */ int r;
	/* 0x14 */ int g;
	/* 0x18 */ int b;
	/* 0x1c */ int pad;
} SCENE_FOG;

typedef struct { // 0x46a0
	/* 0x0000 */ SCN_ANM_MDL man_mdl[4];
	/* 0x0500 */ SCN_ANM_MDL furn_mdl[14];
	/* 0x1680 */ SCN_ANM_MDL item_mdl[8];
	/* 0x2080 */ SCN_ANM_MDL door_mdl[8];
	/* 0x2a80 */ int man_mdl_tex[4];
	/* 0x2a90 */ FOD_CTRL fod_ctrl;
	/* 0x4410 */ SCENE_FOG fog;
	/* 0x4430 */ SgCAMERA tmp_cam;
	/* 0x4660 */ SgCAMERA *cam;
	/* 0x4664 */ int man_mdl_num;
	/* 0x4668 */ int door_num;
	/* 0x466c */ int furn_num;
	/* 0x4670 */ int item_num;
	/* 0x4674 */ u_int *scn_data_addr;
	/* 0x4678 */ u_int *light_rev_addr;
	/* 0x467c */ int scene_no;
	/* 0x4680 */ int chapter_no;
	/* 0x4684 */ int room_no;
	/* 0x4688 */ int hero_mdl_no;
	/* 0x468c */ int count_flg;
	/* 0x4690 */ int mirror_flg;
	/* 0x4694 */ int init_flg;
} SCENE_CTRL;

typedef struct { // 0x30
	/* 0x00 */ u_int *scn_file_addr;
	/* 0x04 */ u_int file_num;
	/* 0x08 */ u_int *ofs_top_addr;
	/* 0x0c */ u_int *hdr_addr;
	/* 0x10 */ u_int *cam_fod_addr;
	/* 0x14 */ u_int *lit_fod_addr;
	/* 0x18 */ u_int *eff_fod_addr;
	/* 0x1c */ u_int *man_mot_addr;
	/* 0x20 */ u_int *man_mim_addr;
	/* 0x24 */ u_int *furn_mot_addr;
	/* 0x28 */ u_int *door_mot_addr;
	/* 0x2c */ u_int *item_mot_addr;
} SCENE_FILE;

typedef struct { // 0x6
	/* 0x0 */ u_short start;
	/* 0x2 */ u_short end;
	/* 0x4 */ u_short type;
} SCN_VIB_DATA;

typedef struct { // 0xc
	/* 0x0 */ int time0;
	/* 0x4 */ int time1;
	/* 0x8 */ int val;
} SCN_VIB_TYPE;

struct mallinfo { // 0x28
	/* 0x00 */ int arena;
	/* 0x04 */ int ordblks;
	/* 0x08 */ int smblks;
	/* 0x0c */ int hblks;
	/* 0x10 */ int hblkhd;
	/* 0x14 */ int usmblks;
	/* 0x18 */ int fsmblks;
	/* 0x1c */ int uordblks;
	/* 0x20 */ int fordblks;
	/* 0x24 */ int keepcost;
};

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int w;
	/* 0xc */ int h;
} Rect;

typedef union { // 0x10
	/* 0x0 */ u_long128 q;
	/* 0x0 */ u_long l[2];
	/* 0x0 */ u_int i[4];
	/* 0x0 */ u_short s[8];
	/* 0x0 */ u_char c[16];
} QWORD;

enum {
	INGAME_INIT_LOAD_START = 0,
	INGAME_INIT_LOAD_MENU = 1,
	INGAME_INIT_WAIT_MENU = 2,
	INGAME_INIT_LOAD_EFCT = 3,
	INGAME_INIT_WAIT_EFCT = 4,
	INGAME_INIT_LOAD_CAME = 5,
	INGAME_INIT_WAIT_CAME = 6,
	INGAME_INIT_LOAD_PHOTO = 7,
	INGAME_INIT_WAIT_PHOTO = 8,
	INGAME_INIT_LOAD_GOVER = 9,
	INGAME_INIT_WAIT_GOVER = 10,
	INGAME_INIT_LOAD_FNDR = 11,
	INGAME_INIT_WAIT_FNDR = 12,
	INGAME_INIT_LOAD_BHSE = 13,
	INGAME_INIT_WAIT_BHSE = 14,
	INGAME_INIT_LOAD_END = 15
};

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char count;
	/* 0x2 */ u_char lock;
	/* 0x4 */ int load_id;
} LOAD_START_WRK;

enum {
	LOAD_START_MODE_PREQ = 0,
	LOAD_START_MODE_PLYR = 1,
	LOAD_START_MODE_DREQ = 2,
	LOAD_START_MODE_DATA = 3,
	LOAD_START_MODE_ROOM = 4,
	LOAD_START_MODE_RGRQ = 5,
	LOAD_START_MODE_RGST = 6,
	LOAD_START_MODE_FGST = 7,
	LOAD_START_MODE_GGST = 8,
	LOAD_START_MODE_FADEIN = 9,
	LOAD_START_MODE_END = 10
};

enum {
	CT_RF_PF = 0,
	CT_RP_PF = 1,
	CT_RF_PM = 2,
	CT_RP_PM = 3,
	CT_RM_PM = 4,
	CT_RP_PC = 5
};

enum {
	CM_PLYR_X = 0,
	CM_PLYR_Z = 1
};

typedef struct { // 0xc
	/* 0x0 */ u_short no;
	/* 0x2 */ u_short no_old;
	/* 0x4 */ u_char kind;
	/* 0x5 */ u_char type;
	/* 0x6 */ u_char change;
	/* 0x7 */ u_char pad;
	/* 0x8 */ MAP_CAM_DAT *mcd;
} MAP_CAM_INFO;

typedef struct { // 0x40
	/* 0x00 */ sceVu0FVECTOR i;
	/* 0x10 */ sceVu0FVECTOR p;
	/* 0x20 */ sceVu0FVECTOR rot_y;
	/* 0x30 */ sceVu0FVECTOR rot_x;
} CAM_ID_MOVE;

enum {
	ENE_DEAD_NO_MODE = 0,
	ENE_DEAD_MODE_M3BG1 = 1,
	ENE_DEAD_MODE_M3BG1_WAIT = 2,
	ENE_DEAD_MODE_BGREQ = 3,
	ENE_DEAD_MODE_DGREQ = 4,
	ENE_DEAD_MODE_FGREQ = 5
};

enum {
	BGLOAD_MODE_REQ = 0,
	BGLOAD_MODE_START = 1,
	BGLOAD_MODE_MDL = 2,
	BGLOAD_MODE_MOT = 3,
	BGLOAD_MODE_SE = 4,
	BGLOAD_MODE_END = 5
};

typedef struct { // 0x10
	/* 0x0 */ u_char load_mode;
	/* 0x1 */ u_char rel_mot;
	/* 0x2 */ u_char bg_no;
	/* 0x4 */ u_int mdl_adr;
	/* 0x8 */ u_int mot_adr;
	/* 0xc */ u_int se_adr;
} BGST_WRK;

enum {
	DGLOAD_MODE_REQ = 0,
	DGLOAD_MODE_START = 1,
	DGLOAD_MODE_MDL = 2,
	DGLOAD_MODE_MOT = 3,
	DGLOAD_MODE_SE = 4,
	DGLOAD_MODE_END = 5
};

typedef struct { // 0x2
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char load_mode;
} DGST_WRK;

typedef struct { // 0x30
	/* 0x00 */ u_char room_no;
	/* 0x01 */ u_char ene_type;
	/* 0x02 */ u_char pos_num;
	/* 0x04 */ u_short cmr_no;
	/* 0x06 */ u_short rot[3];
	/* 0x0c */ int pos[3][3];
} FGST_AP_DAT;

enum {
	FG_NO_REQ = 0,
	FG_COUNT = 1,
	FG_WAIT = 2,
	FG_ENTRY = 3,
	FG_BATTLE = 4,
	FG_DEAD = 5
};

typedef struct { // 0x4
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char load_id;
	/* 0x2 */ u_char load_num;
	/* 0x3 */ u_char load_no;
} FG_LOAD_WRK;

enum {
	FG_LOAD_MODE_READY = 0,
	FG_LOAD_MDL_LOAD = 1,
	FG_LOAD_MDL_WAIT = 2,
	FG_LOAD_MOT_LOAD = 3,
	FG_LOAD_MOT_WAIT = 4,
	FG_LOAD_SE_LOAD = 5,
	FG_LOAD_SE_WAIT = 6,
	FG_LOAD_SE_TRANS = 7,
	FG_LOAD_MODE_END = 8
};

typedef struct { // 0x28
	/* 0x00 */ u_char ggst[5];
	/* 0x05 */ u_char room[5];
	/* 0x0a */ short int pos[5][3];
} GGOST_DAT;

enum {
	GUARD_GHOST_NO_REQ = 0,
	GUARD_GHOST_LOAD = 1,
	GUARD_GHOST_AP_WAIT = 2,
	GUARD_GHOST_AP_NOW = 3,
	GUARD_GHOST_BTL_END = 4
};

enum {
	GGLOAD_MODE_REQ = 0,
	GGLOAD_MODE_REREQ = 1,
	GGLOAD_MODE_START = 2,
	GGLOAD_MODE_RESTART = 3,
	GGLOAD_MODE_MDL = 4,
	GGLOAD_MODE_MOT = 5,
	GGLOAD_MODE_SE = 6,
	GGLOAD_MODE_END = 7
};

enum {
	RGAP1_CLR_CNT = 0,
	RGAP1_GST_CNT = 1,
	RGAP1_RGT_CNT = 2,
	RGAP1_HISCORE = 3
};

enum {
	RGAP2_GAME_TM = 0,
	RGAP2_REAL_TM = 1,
	RGAP2_AREA_TM = 2,
	RGAP2_PLYR_SE = 3,
	RGAP2_PHT_NUM = 4,
	RGAP2_SCORE = 5
};

enum {
	RG_STTS_NO_REQ = 0,
	RG_STTS_COUNT = 1,
	RG_STTS_RCOUNT = 2,
	RG_STTS_ENTRY = 3,
	RG_STTS_APPEAR = 4
};

enum {
	RG_DSP_MODE_NO = 0,
	RG_DSP_MODE_START = 1,
	RG_DSP_MODE_INTER = 2,
	RG_DSP_MODE_END = 3
};

typedef struct { // 0x6
	/* 0x0 */ u_short flame;
	/* 0x2 */ u_char alp_no;
	/* 0x3 */ u_char ani_no;
	/* 0x4 */ u_char efct_no;
	/* 0x5 */ u_char rate_no;
} RG_DISP_DAT;

enum {
	RG_ALP_KEEP = 0,
	RG_ALP_UP = 1,
	RG_ALP_DOWN = 2
};

typedef struct { // 0x4
	/* 0x0 */ u_short flame;
	/* 0x2 */ u_char alp;
	/* 0x3 */ u_char stts;
} RG_ALP_DAT;

typedef struct { // 0x2
	/* 0x0 */ u_char flame;
	/* 0x1 */ u_char tim_no;
} RG_ANI_DAT;

enum {
	RG_RATE_KEEP = 0,
	RG_RATE_UP = 1,
	RG_RATE_DOWN = 2
};

typedef struct { // 0x4
	/* 0x0 */ u_short flame;
	/* 0x2 */ u_char rate;
	/* 0x3 */ u_char stts;
} RG_RATE_DAT;

enum {
	PG_STTS_NO = 0,
	PG_STTS_READY = 1,
	PG_STTS_IN = 2,
	PG_STTS_NOW = 3,
	PG_STTS_OUT = 4
};

typedef struct { // 0x4
	/* 0x0 */ u_char stts;
	/* 0x1 */ u_char ap_num;
	/* 0x2 */ u_short ap_cnt;
} RGOST_WRK;

enum {
	SGST_MODE_NO_REQ = 0,
	SGST_MODE_AP_IN = 1,
	SGST_MODE_AP_LOAD = 2,
	SGST_MODE_BATTLE = 3,
	SGST_MODE_DEAD_IN = 4,
	SGST_MODE_MOT_REL = 5,
	SGST_MODE_BHSE_WAIT = 6,
	SGST_MODE_DD_LOAD = 7,
	SGST_MODE_END = 8
};

enum {
	SGLOAD_MODE_REQ = 0,
	SGLOAD_MODE_START = 1,
	SGLOAD_MODE_MDL = 2,
	SGLOAD_MODE_MOT = 3,
	SGLOAD_MODE_SE = 4,
	SGLOAD_MODE_SE2 = 5,
	SGLOAD_MODE_END = 6
};

enum {
	SGDISP_MODE_REQ = 0,
	SGDISP_MODE_START = 1,
	SGDISP_MODE_BLACK_OUT0 = 2,
	SGDISP_MODE_BLACK_IN0 = 3,
	SGDISP_MODE_CMR_ZOOM = 4,
	SGDISP_MODE_BLACK_OUT1 = 5,
	SGDISP_MODE_BLACK_IN1 = 6,
	SGDISP_MODE_END = 7,
	SGDISP_MODE_WHITE_OUT0_1 = 8,
	SGDISP_MODE_WHITE_OUT0_2 = 9,
	SGDISP_MODE_WHITE_OUT1_1 = 10,
	SGDISP_MODE_WHITE_OUT1_2 = 11,
	SGDISP_MODE_WHITE_OUT1_3 = 12
};

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char load_mode;
	/* 0x2 */ u_char disp_mode;
	/* 0x3 */ u_char dat_no;
	/* 0x4 */ u_char sg_no;
	/* 0x5 */ u_char bak_ene;
	/* 0x6 */ short int time;
} SGST_WRK;

typedef struct { // 0x1
	/* 0x0 */ u_char sg_no;
} SGST_DAT;

typedef struct { // 0x18
	/* 0x00 */ u_short st_x0;
	/* 0x02 */ short int st_y0;
	/* 0x04 */ u_short st_z0;
	/* 0x06 */ u_short st_x1;
	/* 0x08 */ short int st_y1;
	/* 0x0a */ u_short st_z1;
	/* 0x0c */ u_short ed_x0;
	/* 0x0e */ short int ed_y0;
	/* 0x10 */ u_short ed_z0;
	/* 0x12 */ u_short ed_x1;
	/* 0x14 */ short int ed_y1;
	/* 0x16 */ u_short ed_z1;
} SGEF_DAT;

typedef struct { // 0x30
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ sceVu0FVECTOR rot;
	/* 0x20 */ u_char room;
	/* 0x21 */ u_char floor;
	/* 0x22 */ u_char zh_mdl_bak[2];
	/* 0x24 */ u_char zh_mot_bak[2];
	/* 0x26 */ u_char zh_mmt_bak[2];
	/* 0x28 */ u_short time;
} ZHOUR_WRK;

enum {
	ZH_NO_REQ = 0,
	ZH_READY = 1,
	ZH_READY2 = 2,
	ZH_START = 3,
	ZH_NOW = 4,
	ZH_OUT_REQ = 5,
	ZH_OUT = 6,
	ZH_OUT_WAIT = 7,
	ZH_OUT_LOAD0 = 8,
	ZH_OUT_LOAD1 = 9,
	ZH_RETURN = 10,
	ZH_END = 11
};

enum {
	EV_OFF = 0,
	EV_ON = 1,
	PAD_RL1 = 10,
	ITEM_USE = 11,
	ITEM_PAD = 12,
	AREA_PAD = 13,
	BTL_END = 20,
	PHT_2D = 30,
	PHT_FURN = 40,
	KEEP_FINDER = 190,
	KF_BTL_END = 191,
	NOT_BTL_STOP = 200,
	NBS_PAD_RL1 = 201,
	NOT_ZHB_STOP = 202,
	MSG_DISP = 10,
	MOVIE_PLAY = 11,
	SAVE_POINT = 12,
	SPCL_REQ = 13,
	CG2D_DISP = 14,
	DSP3D_OFF = 15,
	DSP3D_ON = 16,
	EV_BGM_REQ = 20,
	EV_BGM_STOP = 21,
	ADPCM_REQ = 22,
	ADPCM_STOP = 23,
	EV_SE_REQ = 25,
	EV_SE_STOP = 26,
	PLYR_DSP_OFF = 28,
	PLYR_DSP_ON = 29,
	PPOS_SET = 30,
	PROT_SET = 31,
	ENE_SET = 32,
	EPOS_SET = 33,
	EROT_SET = 34,
	ENE_SE_LOAD = 35,
	ITEM_GET = 40,
	ITEM_LOST = 41,
	ITEM_SET = 42,
	ITEM_DEL = 43,
	ITEM_FIND = 47,
	FILE_GET = 44,
	FILE_SET = 45,
	FILE_DEL = 46,
	FILE_FIND = 48,
	DOOR_LOCK = 50,
	DOOR_UNLOCK = 51,
	DOOR_OPEN = 52,
	DOOR_CLOSE = 53,
	DOOR_OPNING = 54,
	DOOR_CLSING = 55,
	DOOR_APPEAR = 56,
	DOOR_OPNF = 57,
	DOOR_CNG = 58,
	DOOR_DSP = 59,
	ROT_DOOR_CNG = 62,
	DOOR_PST = 63,
	FURN_ACT = 60,
	FATTR_CNG = 61,
	FLR_CNG = 70,
	PDOOR_OPEN = 71,
	PHOTO_LOCK = 80,
	PHT_EV_SET = 90,
	PHT_EV_CLR = 91,
	PGST_SET = 100,
	PGST_REQ = 101,
	AGST_END = 110,
	DCAM_SET = 120,
	BTL_LOCK = 130,
	MONO_DISP = 140,
	ZGST_DISP = 141,
	EV_BLACK_OUT = 150,
	EV_BLACK_IN = 151,
	EV_SE_LOAD = 152,
	HANYO_SE_REQ = 153,
	EV_SE_LOAD_BLK = 154,
	ZGST_PAUSE = 200,
	ZGST_RSTRT = 201,
	FGST_PAUSE = 202,
	FGST_RSTRT = 203,
	ROOM_FG_PS = 207,
	ROOM_FG_RS = 208,
	RGST_PAUSE = 204,
	RGST_RSTRT = 205,
	FGST_DEL = 206,
	EVAP_FGST = 209,
	EVAP_ZGST = 210,
	SGST_SET = 211,
	DEL_LOAD = 230,
	OTHR_END = 240,
	NEXT_MSN = 250,
	GAME_CLEAR = 251,
	NV_END = 254,
	EV_END = 255,
	SE_REQ_MV = 240,
	SE_STOP_MV = 241,
	BGM_REQ_MV = 242,
	BGM_STOP_MV = 243,
	MSG_DISP_MV = 244,
	EFCT_DISP_MV = 245,
	EFCT_CLR_MV = 246,
	FOG_SET_MV = 247,
	FACE_CNG_MV = 248,
	FILE_LOAD_MV = 249
};

enum {
	EV_MSG_OFF = 0,
	EV_MSG_ON = 1,
	EV_MSG_END = 2
};

enum {
	BTL_LOCK_NO_REQ = 0,
	BTL_LOCK_SET0 = 1,
	BTL_LOCK_SET1 = 2,
	BTL_LOCK_SET_MSG = 3,
	BTL_LOCK_AFTER = 4,
	BTL_LOCK_AFTER_MSG = 5
};

enum {
	ENDING_MODE_NO_REQ = 0,
	ENDING_MODE_MOVIE = 1,
	ENDING_MODE_STAFF = 2,
	ENDING_MODE_CLEAR = 3,
	ENDING_MODE_SAVE = 4
};

enum {
	SPEV02_MSG00 = 0,
	SPEV02_MSG01 = 1,
	SPEV02_MSG02 = 2,
	SPEV02_MSG03 = 3,
	SPEV02_MSG04 = 4,
	SPEV02_MSG05 = 5,
	SPEV02_MSG06 = 6,
	SPEV02_MSG07 = 7,
	SPEV02_MSG08 = 8,
	SPEV02_MSG09 = 9,
	SPEV02_MSG10 = 10,
	SPEV02_MSG11 = 11,
	SPEV02_MSG12 = 12,
	SPEV02_MSG13 = 13,
	SPEV02_MSG14 = 14,
	SPEV02_MSG15 = 15,
	SPEV_MSG_YES = 16,
	SPEV_MSG_NO = 17,
	SPEV03_MSG00 = 18,
	SPEV03_MSG01 = 19,
	SPEV03_MSG02 = 20,
	SPEV03_MSG03 = 21,
	SPEV03_MSG04 = 22,
	SPEV03_MSG05 = 23,
	SPEV03_MSG06 = 24,
	SPEV03_MSG07 = 25,
	SPEV03_MSG08 = 26,
	SPEV03_MSG09 = 27,
	SPEV03_MSG10 = 28,
	SPEV03_MSG11 = 29,
	SPEV03_MSG12 = 30,
	SPEV00_MSG00 = 31,
	SPEV00_MSG01 = 32,
	SPEV00_MSG02 = 33,
	SPEV00_MSG03 = 34,
	SPEV00_MSG04 = 35,
	SPEV00_MSG05 = 36,
	SPEV00_MSG06 = 37,
	SPEV00_MSG07 = 38,
	SPEV00_MSG08 = 39,
	SPEV00_MSG09 = 40,
	SPEV00_MSG10 = 41,
	SPEV00_MSG11 = 42,
	SPEV00_MSG12 = 43,
	SPEV00_MSG13 = 44,
	SPEV01_MSG00 = 45,
	SPEV01_MSG01 = 46,
	SPEV01_MSG02 = 47,
	SPEV04_MSG00 = 48,
	SPEV04_MSG01 = 49,
	SPEV04_MSG02 = 50,
	SPEV04_MSG03 = 51,
	SPEV04_MSG04 = 52,
	SPEV04_MSG05 = 53,
	SPEV04_MSG06 = 54,
	SPEV04_MSG07 = 55,
	SPEV04_MSG08 = 56,
	SPEV04_MSG09 = 57,
	SPEV04_MSG10 = 58,
	SPEV20_MSG00 = 59,
	SPEV21_MSG00 = 60,
	SPEV21_MSG01 = 61,
	SPEV21_MSG02 = 62,
	SPEV21_MSG03 = 63,
	SPEV21_MSG04 = 64,
	SPEV21_MSG05 = 65,
	SPEV21_MSG06 = 66,
	SPEV21_MSG07 = 67,
	SPEV21_MSG08 = 68,
	SPEV21_MSG09 = 69,
	SPEV21_MSG10 = 70,
	SPEV21_MSG11 = 71,
	SPEV21_MSG12 = 72,
	SPEV21_MSG13 = 73,
	SPEV21_MSG14 = 74,
	SPEV21_MSG15 = 75,
	SPEV21_MSG16 = 76,
	SPEV21_MSG17 = 77,
	SPEV21_MSG18 = 78,
	SPEV21_MSG19 = 79,
	SPEV21_MSG20 = 80,
	SPEV34_MSG00 = 81,
	SPEV34_MSG01 = 82,
	SPEV34_MSG02 = 83,
	SPEV34_MSG03 = 84,
	SPEV34_MSG04 = 85,
	SPEV34_MSG05 = 86,
	SPEV39_MSG00 = 87,
	SPEV42_MSG00 = 88,
	SPEV42_MSG01 = 89,
	SPEV42_MSG02 = 90,
	SPEV42_MSG03 = 91,
	SPEV42_MSG04 = 92,
	SPEV42_MSG05 = 93,
	SPEV42_MSG06 = 94,
	SPEV58_MSG00 = 95,
	SPEV59_MSG00 = 96,
	SPEV60_MSG00 = 97,
	SPEV61_MSG00 = 98,
	SPEV62_MSG00 = 99,
	SPEV63_MSG00 = 100,
	SPEV64_MSG00 = 101,
	SPEV64_MSG01 = 102,
	SPEV65_MSG00 = 103,
	SPEV65_MSG01 = 104,
	SPEV66_MSG00 = 105,
	SPEV66_MSG01 = 106,
	SPEV67_MSG00 = 107,
	SPEV67_MSG01 = 108,
	SPEV68_MSG00 = 109,
	SPEV68_MSG01 = 110,
	SPEV69_MSG00 = 111,
	SPEV69_MSG01 = 112,
	SPEV70_MSG00 = 113,
	SPEV70_MSG01 = 114,
	SPEV71_MSG00 = 115,
	SPEV71_MSG01 = 116,
	SPEV72_MSG00 = 117,
	SPEV72_MSG01 = 118,
	SPEV73_MSG00 = 119,
	SPEV73_MSG01 = 120,
	SPEV74_MSG00 = 121,
	SPEV74_MSG01 = 122,
	SPEV75_MSG00 = 123,
	SPEV75_MSG01 = 124,
	SPEV76_MSG00 = 125,
	SPEV76_MSG01 = 126,
	SPEV77_MSG00 = 127,
	SPEV77_MSG01 = 128,
	SPEV78_MSG00 = 129,
	SPEV78_MSG01 = 130,
	SPEV_MSG_CHECK = 131,
	SPEV_MSG_NEXT = 132
};

enum {
	SPEV00_NUMBER_0 = 0,
	SPEV01_NUMBER_1 = 1,
	SPEV02_OFUDA_0T = 2,
	SPEV03_OFUDA_0S = 3,
	SPEV04_KAMON_CRUSH0 = 4,
	SPEV05_OFUDA_1T = 5,
	SPEV06_OFUDA_1S = 6,
	SPEV07_OFUDA_2T = 7,
	SPEV08_OFUDA_2S = 8,
	SPEV09_KAMON_CRUSH1 = 9,
	SPEV10_NUMBER_2 = 10,
	SPEV11_KAMON_BLACK_B = 11,
	SPEV12_KAMON_BLACK_A = 12,
	SPEV13_BUTSUZO = 13,
	SPEV14_OFUDA_3T = 14,
	SPEV15_OFUDA_3S = 15,
	SPEV16_NUMBER3 = 16,
	SPEV17_KAMON_BLUE_B = 17,
	SPEV18_KAMON_BLUE_A = 18,
	SPEV19_KAMON_YELLOW_B = 19,
	SPEV20_KAMON_YELLOW_A = 20,
	SPEV21_LIGHTSOUT = 21,
	SPEV22_OFUDA_4T = 22,
	SPEV23_OFUDA_4S = 23,
	SPEV24_NUMBER_4 = 24,
	SPEV25_OFUDA_5T = 25,
	SPEV26_OFUDA_5S = 26,
	SPEV27_NUMBER_5 = 27,
	SPEV28_KAGOME = 28,
	SPEV29_MEN_KI = 29,
	SPEV30_MEN_DO = 30,
	SPEV31_MEN_AI = 31,
	SPEV32_MEN_RAKU = 32,
	SPEV33_MEN_CLOSE = 33,
	SPEV34_MEN_OPEN = 34,
	SPEV35_KAMON_PURPLE_B = 35,
	SPEV36_KAMON_PURPLE_A = 36,
	SPEV37_OFUDA_6T = 37,
	SPEV38_OFUDA_6S = 38,
	SPEV39_BUTSUZO_B = 39,
	SPEV40_KAMON_GREEN_B = 40,
	SPEV41_KAMON_GREEN_A = 41,
	SPEV42_BONJI_0 = 42,
	SPEV43_BONJI_1 = 43,
	SPEV44_BONJI_2 = 44,
	SPEV45_BONJI_3 = 45,
	SPEV46_NUMBER_6 = 46,
	SPEV47_NUMBER_7 = 47,
	SPEV48_NUMBER_8 = 48,
	SPEV49_KAKEJIKU = 49,
	SPEV50_NUMBER_9 = 50,
	SPEV51_NUMBER_10 = 51,
	SPEV52_NUMBER_11 = 52,
	SPEV53_NUMBER_12 = 53,
	SPEV54_MEN_OPEN1 = 54,
	SPEV55_MEN_OPEN2 = 55,
	SPEV56_MEN_OPEN3 = 56,
	SPEV57_BONJI_B = 57,
	SPEV58_IDO_INTO = 58,
	SPEV59_IDO_OUT = 59,
	SPEV60_BONJI_0A = 60,
	SPEV61_BONJI_1A = 61,
	SPEV62_BONJI_2A = 62,
	SPEV63_BONJI_3A = 63,
	SPEV64_USE_MIRROR = 64,
	SPEV65_USE_KEY = 65,
	SPEV66_USE_LIGHTER = 66,
	SPEV67_USE_BUTSUZO = 67,
	SPEV68_USE_KAKEJIKU = 68,
	SPEV69_USE_KINKO = 69,
	SPEV70_USE_KAGOME = 70,
	SPEV71_USE_MEKAKUSHI = 71,
	SPEV72_USE_TOUSHU = 72,
	SPEV73_USE_NAWA0 = 73,
	SPEV74_USE_NAWA1 = 74,
	SPEV75_USE_NAWA2 = 75,
	SPEV76_USE_NAWA3 = 76,
	SPEV77_USE_KANZASHI = 77,
	SPEV78_USE_IKARI = 78,
	SPEV79_IDO_INTO = 79,
	SPEV80_IDO_OUT = 80,
	SPEV81_OMN_MOVE = 81,
	SPEV82_USE_NAWAFLS = 82,
	SPEV82_USE_NAWAFLS0 = 82,
	SPEV83_USE_NAWAFLS1 = 83,
	SPEV84_USE_NAWAFLS2 = 84,
	SPEV85_USE_NAWAFLS3 = 85,
	SPEV86_ROT_DOOR_KI = 86,
	SPEV87_ROT_DOOR_DO = 87,
	SPEV88_ROT_DOOR_AI = 88,
	SPEV89_ROT_DOOR_RAKU = 89,
	SPEV90_ROT_DOOR_KAKE = 90
};

typedef struct { // 0x8
	/* 0x0 */ u_char no;
	/* 0x1 */ u_char ret;
	/* 0x2 */ u_char mode;
	/* 0x3 */ u_char time;
	/* 0x4 */ u_char count;
	/* 0x5 */ u_char csr[3];
} SPECIAL_EVENT_WRK;

typedef struct { // 0x11
	/* 0x00 */ u_char move_num;
	/* 0x01 */ u_char empty_no;
	/* 0x02 */ u_char start[5];
	/* 0x07 */ u_char line[10];
} STAR_PZL_DAT;

typedef struct { // 0x31
	/* 0x00 */ u_char pzl_no;
	/* 0x01 */ u_char mode;
	/* 0x02 */ u_char menu_mode;
	/* 0x03 */ u_char menu_csr[2];
	/* 0x05 */ u_char time;
	/* 0x06 */ u_char count;
	/* 0x07 */ u_char empty;
	/* 0x08 */ u_char slct_no;
	/* 0x09 */ u_char bak_no[10];
	/* 0x13 */ u_char stone[5];
	/* 0x18 */ u_char line[5][5];
} STAR_PZL_WRK;

enum {
	STAR_PZL_MODE_DEADWAIT = 0,
	STAR_PZL_MODE_READY = 1,
	STAR_PZL_MODE_SELOAD = 2,
	STAR_PZL_MODE_IN = 3,
	STAR_PZL_MODE_START = 4,
	STAR_PZL_MODE_SLCT = 5,
	STAR_PZL_MODE_MSG0 = 6,
	STAR_PZL_MODE_MSG = 7,
	STAR_PZL_MODE_MSG2 = 8,
	STAR_PZL_MODE_MSG3 = 9,
	STAR_PZL_MODE_MOVE = 10,
	STAR_PZL_MODE_MENU = 11,
	STAR_PZL_MODE_RESL = 12,
	STAR_PZL_MODE_END = 13,
	STAR_PZL_MODE_OUT = 14,
	STAR_PZL_MODE_BEFBAD = 15,
	STAR_PZL_MODE_BAD = 16,
	STAR_PZL_MODE_READYGOOD = 17,
	STAR_PZL_MODE_READYGOOD2 = 18,
	STAR_PZL_MODE_GOOD = 19,
	STAR_PZL_MODE_GOUT = 20
};

enum {
	STAR_PZL_MENU_BACK = 0,
	STAR_PZL_MENU_RESET = 1,
	STAR_PZL_MENU_EXIT = 2,
	STAR_PZL_MENU_SLCT = 3,
	STAR_PZL_MENU_Y_N0 = 4,
	STAR_PZL_MENU_Y_N1 = 5
};

typedef struct { // 0x7
	/* 0x0 */ u_char dial_num;
	/* 0x1 */ u_char lock_door;
	/* 0x2 */ u_char dial_no[5];
} DIAL_KEY_DAT;

typedef struct { // 0x15
	/* 0x00 */ u_char door_no;
	/* 0x01 */ u_char mode;
	/* 0x02 */ u_char time;
	/* 0x03 */ u_char count;
	/* 0x04 */ u_char slct_no;
	/* 0x05 */ u_char push;
	/* 0x06 */ u_char btn[10];
	/* 0x10 */ u_char push_no[5];
} DIAL_KEY_WRK;

enum {
	DIAL_KEY_MODE_DEADWAIT = 0,
	DIAL_KEY_MODE_READY = 1,
	DIAL_KEY_MODE_SELOAD = 2,
	DIAL_KEY_MODE_IN = 3,
	DIAL_KEY_MODE_MSG0 = 4,
	DIAL_KEY_MODE_MSG01 = 5,
	DIAL_KEY_MODE_MSG02 = 6,
	DIAL_KEY_MODE_MSG03 = 7,
	DIAL_KEY_MODE_SLCT = 8,
	DIAL_KEY_MODE_PUSH = 9,
	DIAL_KEY_MODE_GOOD = 10,
	DIAL_KEY_MODE_BAD = 11,
	DIAL_KEY_MODE_GOUT = 12,
	DIAL_KEY_MODE_BOUT = 13,
	DIAL_KEY_MODE_OUT = 14,
	DIAL_KEY_MODE_EXIT = 15,
	DIAL_KEY_MODE_GEXT = 16,
	DIAL_KEY_MODE_END = 17
};

enum {
	GST_DOOR_MODE_READY = 0,
	GST_DOOR_MODE_IN = 1,
	GST_DOOR_MODE_MSG = 2,
	GST_DOOR_MODE_SLCT = 3,
	GST_DOOR_MODE_OUT = 4,
	GST_DOOR_MODE_EXIT = 5
};

enum {
	DOLL_PZL_MODE_DEADWAIT = 0,
	DOLL_PZL_MODE_READY = 1,
	DOLL_PZL_MODE_SELOAD = 2,
	DOLL_PZL_MODE_BIN = 3,
	DOLL_PZL_MODE_ADPFADE = 4,
	DOLL_PZL_MODE_PRELOAD = 5,
	DOLL_PZL_MODE_IN = 6,
	DOLL_PZL_MODE_IN2 = 7,
	DOLL_PZL_MODE_IN3 = 8,
	DOLL_PZL_MODE_IN4 = 9,
	DOLL_PZL_MODE_SLCT = 10,
	DOLL_PZL_MODE_Y_N = 11,
	DOLL_PZL_MODE_Y_N2 = 12,
	DOLL_PZL_MODE_RESL = 13,
	DOLL_PZL_MODE_END = 14,
	DOLL_PZL_MODE_OUT = 15,
	DOLL_PZL_MODE_BAD = 16,
	DOLL_PZL_MODE_BAD2 = 17,
	DOLL_PZL_MODE_BAD3 = 18,
	DOLL_PZL_MODE_BAD4 = 19,
	DOLL_PZL_MODE_BAD5 = 20,
	DOLL_PZL_MODE_GOOD = 21,
	DOLL_PZL_MODE_GOOD2 = 22,
	DOLL_PZL_MODE_GOOD3 = 23,
	DOLL_PZL_MODE_GOUT = 24
};

enum {
	DOLL_ROT_NOMAL = 0,
	DOLL_ROT_LEFT = 1,
	DOLL_ROT_BACK = 2,
	DOLL_ROT_RIGHT = 3,
	DOLL_ROT_NUM = 4
};

typedef struct { // 0xe
	/* 0x0 */ u_char answer;
	/* 0x1 */ u_char order[9];
	/* 0xa */ u_char unfade_doll[3];
	/* 0xd */ u_char pad;
} EV_DOLL_DAT;

enum {
	BTZ_PZL_MODE_DEADWAIT = 0,
	BTZ_PZL_MODE_READY = 1,
	BTZ_PZL_MODE_SELOAD = 2,
	BTZ_PZL_MODE_IN = 3,
	BTZ_PZL_MODE_BDSLCT = 4,
	BTZ_PZL_MODE_SLCT = 5,
	BTZ_PZL_MODE_SLCTYES = 6,
	BTZ_PZL_MODE_SLCTNO = 7,
	BTZ_PZL_MODE_PUT = 8,
	BTZ_PZL_MODE_CONFLICT = 9,
	BTZ_PZL_MODE_Y_N = 10,
	BTZ_PZL_MODE_RESL = 11,
	BTZ_PZL_MODE_BAD = 12,
	BTZ_PZL_MODE_GOOD = 13,
	BTZ_PZL_MODE_GOUT = 14,
	BTZ_PZL_MODE_OUT = 15,
	BTZ_PZL_MODE_END = 16
};

typedef struct { // 0x4
	/* 0x0 */ short int use_flg;
	/* 0x2 */ short int set_place;
} EV_BTZ_DAT;

typedef struct { // 0x2c
	/* 0x00 */ short int t_counter;
	/* 0x02 */ short int bld_apr[10];
	/* 0x16 */ short int bld_end[10];
	/* 0x2a */ short int pad;
} EV_BLD_DAT;

enum {
	CDL_PZL_MODE_DEADWAIT = 0,
	CDL_PZL_MODE_READY = 1,
	CDL_PZL_MODE_SELOAD = 2,
	CDL_PZL_MODE_IN = 3,
	CDL_PZL_MODE_SLCT = 4,
	CDL_PZL_MODE_FIRE = 5,
	CDL_PZL_SIDE_FIRE = 6,
	CDL_PZL_MODE_RESET = 7,
	CDL_PZL_MODE_GOOD = 8,
	CDL_PZL_MODE_GOOD2 = 9,
	CDL_PZL_MODE_GOOD3 = 10,
	CDL_PZL_MODE_GOUT = 11,
	CDL_PZL_MODE_OUT = 12,
	CDL_PZL_MODE_END = 13
};

typedef struct { // 0x6c
	/* 0x00 */ short int cdl_flg[3][6];
	/* 0x24 */ short int flame_alpha[6];
	/* 0x30 */ short int flame_shape[6];
	/* 0x3c */ short int stflame_alpha[6];
	/* 0x48 */ short int stflame_shape[6];
	/* 0x54 */ short int flame_time[6];
	/* 0x60 */ short int stflame_time[6];
} EV_CDL_DAT;

enum {
	OMN_PZL_MODE_UNREADY = 0,
	OMN_PZL_MODE_READY = 1,
	OMN_PZL_MODE_SELOAD = 2,
	OMN_PZL_MODE_IN = 3,
	OMN_PZL_MODE_NONE = 4,
	OMN_PZL_MODE_EXISTIN = 5,
	OMN_PZL_MODE_EXIST = 6,
	OMN_PZL_MODE_EXISTGO = 7,
	OMN_PZL_MODE_EXISTGET = 8,
	OMN_PZL_MODE_EXISTOUT = 9,
	OMN_PZL_MODE_GETWAIT = 10,
	OMN_PZL_MODE_NISUSE = 11,
	OMN_PZL_MODE_NISUNUSE = 12,
	OMN_PZL_MODE_NISDISUSE = 13,
	OMN_PZL_MODE_BEFFADE = 14,
	OMN_PZL_MODE_CFADE = 15,
	OMN_PZL_MODE_AFTFADE = 16,
	OMN_PZL_MODE_UNHAVE = 17,
	OMN_PZL_MODE_HAVEUSEIN = 18,
	OMN_PZL_MODE_HAVEUSE = 19,
	OMN_PZL_MODE_HAVEUNUSE = 20,
	OMN_PZL_MODE_USEIN = 21,
	OMN_PZL_MODE_USE = 22,
	OMN_PZL_MODE_SIMENOK = 23,
	OMN_PZL_MODE_UNSIMEN = 24,
	OMN_PZL_MODE_OPEN = 25,
	OMN_PZL_MODE_OUT = 26,
	OMN_PZL_MODE_GETOUT = 27,
	OMN_PZL_MODE_GETOUT2 = 28,
	OMN_PZL_MODE_PUTOUT = 29,
	OMN_PZL_MODE_GETEND = 30,
	OMN_PZL_MODE_END = 31,
	OMN_PZL_MODE_MSGEND = 32,
	OMN_PZL_MODE_TIMECNT = 33
};

enum {
	ZSI_PZL_MODE_DEADWAIT = 0,
	ZSI_PZL_MODE_READY = 1,
	ZSI_PZL_MODE_IN = 2,
	ZSI_PZL_MODE_SELOAD = 3,
	ZSI_PZL_MODE_MSG1 = 4,
	ZSI_PZL_MODE_MSG2 = 5,
	ZSI_PZL_MODE_SLCT = 6,
	ZSI_PZL_MODE_PUSH = 7,
	ZSI_PZL_MODE_GOOD = 8,
	ZSI_PZL_MODE_BAD = 9,
	ZSI_PZL_MODE_OUT = 10,
	ZSI_PZL_MODE_GOUT = 11,
	ZSI_PZL_MODE_END = 12
};

typedef struct { // 0x2
	/* 0x0 */ u_char answer;
	/* 0x1 */ u_char ansflg;
} ZUSHI_WRK;

enum {
	IDO_PZL_MODE_MSGYES = 0,
	IDO_PZL_MODE_MSGNO = 1,
	IDO_PZL_MODE_READY = 2,
	IDO_PZL_MODE_IN = 3,
	IDO_PZL_MODE_OUT = 4,
	IDO_PZL_MODE_END = 5
};

typedef struct { // 0x2
	/* 0x0 */ u_char answer;
	/* 0x1 */ u_char ansflg;
} IDO_WRK;

enum {
	ITM_PZL_MODE_READY = 0,
	ITM_PZL_MODE_IN = 1,
	ITM_PZL_MODE_MSG = 2,
	ITM_PZL_MODE_MSG2 = 3,
	ITM_PZL_MODE_MSG3 = 4,
	ITM_PZL_MODE_YES = 5,
	ITM_PZL_MODE_NO = 6,
	ITM_PZL_MODE_OMN = 7,
	ITM_PZL_MODE_OUT = 8,
	ITM_PZL_MODE_NOOUT = 9,
	ITM_PZL_MODE_END = 10,
	ITM_PZL_MODE_NOEND = 11
};

typedef struct { // 0xc
	/* 0x0 */ u_char scn_no;
	/* 0x4 */ MSN_LOAD_DAT *load_dat;
	/* 0x8 */ u_short *del_dat;
} SCN_LOAD_DAT;

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char load_mode;
	/* 0x2 */ u_char load_count;
	/* 0x3 */ u_char time;
	/* 0x4 */ int load_id;
} MSN_TITLE_WRK;

enum {
	MSN_TITLE_MODE_READY = 0,
	MSN_TITLE_MODE_IN = 1,
	MSN_TITLE_MODE_LOAD = 2,
	MSN_TITLE_MODE_OUT = 3,
	MSN_TITLE_MODE_END_PRE = 4,
	MSN_TITLE_MODE_END = 5
};

enum {
	MT_LOAD_MODE_PREQ = 0,
	MT_LOAD_MODE_PLYR = 1,
	MT_LOAD_MODE_DREQ = 2,
	MT_LOAD_MODE_DATA = 3,
	MT_LOAD_MODE_RREQ = 4,
	MT_LOAD_MODE_ROOM = 5,
	MT_LOAD_MODE_FGST = 6,
	MT_LOAD_MODE_DGST = 7,
	MT_LOAD_MODE_GGST = 8,
	MT_LOAD_MODE_END = 9
};

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char count;
	/* 0x4 */ int load_id;
} EVENT_LOAD_WRK;

enum {
	EV_LOAD_MODE_READY = 0,
	EV_LOAD_MODE_REQ = 1,
	EV_LOAD_MODE_LOAD = 2,
	EV_LOAD_MODE_ROOM = 3,
	EV_LOAD_MODE_SCENE = 4,
	EV_LOAD_MODE_END = 5
};

typedef struct { // 0x4
	/* 0x0 */ short int msg_no;
	/* 0x2 */ short int msg_wait;
} MOVIE_CMD_WRK;

typedef struct { // 0x10
	/* 0x0 */ float frot_x;
	/* 0x4 */ u_short plyr_hp;
	/* 0x6 */ u_short plyr_mp;
	/* 0x8 */ short int plyr_pos_x;
	/* 0xa */ short int plyr_pos_z;
	/* 0xc */ u_char film_num;
	/* 0xd */ u_char film_bak;
	/* 0xe */ u_char focus;
} INFO_WRK;

enum { // 0x8
	T_TP_FNTS_SL = 624043264,
	T_ALBM_PWK_BIG = 1430300420,
	T_ALBM_PWK_MINI = -1723816185,
	T_ALBM_ARROWS = -1656707312,
	T_ALBM_SEAL_MINI = -1723816159,
	T_ALBM_WFNT = -1657755862,
	T_ALBM_INFO = 1497409358,
	T_OA_TYPE_BIG_B = 1697786048,
	T_OA_TYPE_BIG_G = 1697786048,
	T_OA_TYPE_BIG_O = 1697786048,
	T_OA_TYPE_BIG_P = 1697786048,
	T_OA_TYPE_BIG_R = 1697786048,
	T_OA_TYPE_BIG_W = 1697786048,
	T_TP_HAIKEI = 1697787136,
	T_LD_BOOKS = 624044608,
	T_LD_D_NAME = 557919300,
	T_LD_RNZ_CSR = -1590612795,
	T_LD_FONTS = -515822327,
	T_OA_TYPE_SML_B = 556870912,
	T_OA_TYPE_SML_G = 556870912,
	T_OA_TYPE_SML_O = 556870912,
	T_OA_TYPE_SML_P = 556870912,
	T_OA_TYPE_SML_R = 556870912,
	T_OA_TYPE_SML_W = 556870912,
	T_FUSUMA = 556868928,
	T_CAM_BALL_FLR = -1723814912,
	T_CAM_BALL_OFF = 1429253129,
	T_CAM_BALL_ON = 1429253137,
	T_CAM_CMND = 557919257,
	T_CAM_FILM = -584012646,
	T_CAM_FONT = -515822370,
	T_CAM_FONT2 = -515822305,
	T_CAM_LV_NXT = -1656705696,
	T_CAM_TEX = 556871025,
	T_CAM_WTTL = 557919861,
	T_NEW_ICON = 1497410560,
	T_S_LENZ2 = -584012795,
	T_KATE_FONTS = -584012727,
	T_SYO_DODAI = 624045197,
	T_MEDIA_01 = -584012143,
	T_MEDIA_02 = -1656705323,
	T_MEDIA_03 = -1656705306,
	T_MEDIA_04 = -1656705289,
	T_REL_CMNT_FNT = 625092224,
	T_REL_FNAME_FNT = -515823743,
	T_REL_NAME_FNT = 625059778,
	T_REL_RES_FNT = -448649021,
	T_REL_CAP_FNT = -515823292,
	T_REL_NAME_FLA = -582964859,
	T_REL_NAME_WAKU = -1589565018,
	T_REL_WAKU_FLA = -1656706617,
	T_REL_WAKU_FLA_BOX = -515823144,
	T_REL_TITLE = -515823079,
	T_FNDR_FRAME = 1697782336,
	T_FNDR_CNT_BASE = -516874684,
	T_FNDR_CNT_NUM = -1656709432,
	T_FND_STK_NUM = -582967591,
	T_FND_CNT_SGT = -1723818246,
	T_FND_CNT_CIR = -582967549,
	T_FND_CNT_CIR2 = -582967516,
	T_FND_CNT_CIR_FLA = -584016059,
	T_FND_ENE_VIT = -1656709239,
	T_FND_ENE_VIT_BAR = 356556698,
	T_FND_ENE_VIT_FLA = -1657757796,
	T_FND_WP_NUM = 1497407424,
	T_FND_WP_FNT = -516874299,
	T_FND_WP_FNT_FLA = -584015799,
	T_FND_DM_NUM = -1656708979,
	T_FND_DM_FLA = -1656708962,
	T_FND_DM_FNT = -515825489,
	T_FND_CRG_FNT = -582967056,
	T_FND_BIG_FNT = -584015599,
	T_FND_LIT_FLA = -582966955,
	T_ENE_VIT = 1497407862,
	T_KAN_BASE = 1497407867,
	T_KAN_FLR = -1723817600,
	T_GLST_ALL = 624045056,
	T_G_CHRY = -1656705532,
	T_GOV_FNT = -1656707392,
	T_G_OVER1 = 557917905,
	T_G_OVER2 = -582965422,
	T_LENS_1 = 556870656,
	T_LENS_2 = -584012540,
	T_CAM_FLR = 556870984,
	T_FND_VIT_BAR = -1723817216,
	T_FND_VIT_BAR2 = -1723817207,
	T_FND_VIT_FLA = 221291282,
	T_FND_VIT_FLA_MAX = -1791974527,
	T_FND_VIT_GAGE = -1657756783,
	T_GAIN_LIFE = -1723817035,
	T_FND_RMP_CV = -584014914,
	T_FND_RMP_CV2 = -584014846,
	T_FND_RMP_BASE = -1723816890,
	T_FND_RMP_BLU_SML = -1723816881,
	T_FND_RMP_BLU_BIG = -584014760,
	T_FND_RMP_RED_SML = -1723816804,
	T_FND_RMP_RED_BIG = -584014683,
	T_FND_RMP_GRS = -1723816727,
	T_STTS_BARZ = -1723816320,
	T_STTS_BASE = -516872567,
	T_STTS_FILM_Z = -584014067,
	T_STTS_FLR = 1429251921,
	T_STTS_FONT2 = -582965415,
	T_STTS_MFY = -1724864646,
	T_REISEKI = 1430300558,
	T_MNU_OPT_CNT = 556870656,
	T_MNU_OPT_OBJ = -516870908,
	T_MNU_OPT_ALW = 1430302088,
	T_BRIGHT = 624045451,
	T_KEY_TYPE = -515821681,
	T_KEY_N_R = -582963248,
	T_KEY_RED_FNT = 557920241,
	T_KEY_WHT_FNT = 557920370,
	T_INF_BAR = -1657754624,
	T_PHT_EDGEZ = 1430301732,
	T_PHT_WAKU = -516871129,
	T_PHT_SEL = 1497410731,
	T_MENU_FONT = -584012624,
	T_MENU_FONT2 = -1657754380,
	T_SCRTCH_FONT = -1723814632,
	T_SEAL_MARK = -1724863199,
	T_SEAL_BIG = -1723814603,
	T_SEAL_MINI = -1723814594,
	T_SEAL_MINI2 = -1724863161,
	T_MAE_TSUGI = -1723814565,
	T_KAKU_DECO = 1630612836,
	T_KAKU_WAKU = -1656705176,
	T_INFO = 1497411449,
	T_INFO2 = -1656705154,
	T_PLAY = -1723814272,
	T_PLYDAT1 = 556869568,
	T_PLYDAT2 = 556869828,
	T_CLOCK = 556870088,
	T_PSP_FONTS = -449697792,
	T_PSP_ICONZ = 556869892,
	T_RANK_FONT1 = -582964224,
	T_RANK_FONT2 = -582964191,
	T_RNK_BAK = 556870722,
	T_RNK_FNT1 = -515822266,
	T_RNK_FNT2 = -515822201,
	T_RNK_PWK_BIG = 1430302152,
	T_RNK_PWK_MINI = -1723814453,
	T_RNK_WFNT = -1657754156,
	T_R_CHRY = -1656705544,
	T_SV_FSLCT = -1723816320,
	T_SV_ICONZ = -582965623,
	T_SV_PHTF = 1497409194,
	T_SV_PHTF2 = 1497409199,
	T_SV_RENS4 = 556869300,
	T_MAP_MASK = -584012800,
	T_MAP_PAPER = -515822524,
	T_MAP_FONT = -1656705915,
	T_MAP_ARROW = -1656705898,
	T_MAP_ICON = 1496362151,
	T_HIMURO_ALL = 1698835635,
	T_SCR_BAR = 1430299392,
	T_SCR_BAR_BS = 1430299395,
	T_PSE_FNT = -1656708346,
	T_MASK_L = -851401961,
	T_MASK_S = -1992252647,
	T_WINDOW = -1657756901,
	T_TITLE_LIST = -582966465,
	T_SYO_CURSOR = 1430299488,
	T_MNU_TOP_FREM = 556868451,
	T_MNU_TOP_LIST = -515824537,
	T_MNU_TOP_LIST2 = -1657756504,
	T_MNU_USA_CAP = -515824436,
	T_SV_PHT1 = 556870208,
	T_SV_PHT2 = -516871356
};

enum {
	IGMENU_MODE_MAP = 0,
	IGMENU_MODE_ITEM = 1,
	IGMENU_MODE_ALBM = 2,
	IGMENU_MODE_FILE = 3,
	IGMENU_MODE_GHOST = 4,
	IGMENU_MODE_RANKING = 5,
	IGMENU_MODE_CAMERA = 6,
	IGMENU_MODE_SLCT = 7,
	IGMENU_MODE_ITEM_USE_SLCT = 8,
	IGMENU_MODE_ITEM_USE_END = 9,
	IGMENU_MODE_FILE_DATA = 10,
	IGMENU_MODE_RELATION = 11,
	IGMENU_MODE_OPTN = 12
};

typedef struct { // 0x10
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char csr[6];
	/* 0x7 */ u_char csr_bak[6];
	/* 0xd */ u_char item_num;
	/* 0xe */ u_char use_item;
	/* 0xf */ u_char file_num;
} INGAME_MENU_WRK;

typedef struct { // 0x4
	/* 0x0 */ u_short item_no;
	/* 0x2 */ u_short item_num;
} MENU_ITEM_WRK;

typedef struct { // 0x2c
	/* 0x00 */ u_short fndr_mode_tmr;
	/* 0x02 */ short int fp_bak[2];
	/* 0x06 */ u_char phot_shot;
	/* 0x07 */ u_char fndr_dsp_flg;
	/* 0x08 */ u_char fndr_fade_alp;
	/* 0x09 */ u_char fndr_fade_tmr;
	/* 0x0a */ u_char rmp_f;
	/* 0x0b */ u_char rmp_pow;
	/* 0x0c */ u_char flm_cng_tmr;
	/* 0x0d */ u_char stts_fade_tmr;
	/* 0x0e */ u_char stts_fade_alp;
	/* 0x0f */ u_char stts_dsp_flg;
	/* 0x10 */ u_char scor_dsp;
	/* 0x11 */ u_char disp_pause;
	/* 0x12 */ u_char weak5_tmr[4];
	/* 0x16 */ u_char weak5_alp[4];
	/* 0x1a */ u_char hint5_tmr[5];
	/* 0x1f */ u_char hint5_alp[5];
	/* 0x24 */ u_char save_col;
	/* 0x28 */ int lucky7;
} INF_DSP;

typedef struct { // 0x158
	/* 0x000 */ float hx[5];
	/* 0x014 */ float hy[5];
	/* 0x028 */ float ex[4];
	/* 0x038 */ float ey[4];
	/* 0x048 */ u_int pht_cnt_bak;
	/* 0x04c */ short int bon_mov_sx[12];
	/* 0x064 */ short int bon_mov_sy[12];
	/* 0x07c */ short int bon_mov_ex[12];
	/* 0x094 */ short int bon_mov_ey[12];
	/* 0x0ac */ short int dmg_num_mov;
	/* 0x0ae */ short int dmg_str_mov;
	/* 0x0b0 */ u_short ene_no[4];
	/* 0x0b8 */ u_short ene_dmg[4];
	/* 0x0c0 */ u_short pht_scr;
	/* 0x0c2 */ u_short dsp_dmg_red;
	/* 0x0c4 */ u_short dsp_dmg_blu;
	/* 0x0c6 */ u_short liner_x;
	/* 0x0c8 */ u_char liner_w;
	/* 0x0c9 */ u_char ep_alp[4];
	/* 0x0cd */ u_char ep_red[4];
	/* 0x0d1 */ u_char ep_bar;
	/* 0x0d2 */ u_char ep_tmr;
	/* 0x0d3 */ u_char bar_over;
	/* 0x0d4 */ u_short liner_y;
	/* 0x0d6 */ u_short red_bar;
	/* 0x0d8 */ u_short blu_bak;
	/* 0x0da */ u_char liner_wait;
	/* 0x0db */ u_char bon_mov_cnt[12];
	/* 0x0e7 */ u_char bon_mov_tm[12];
	/* 0x0f3 */ u_char bon_bak;
	/* 0x0f4 */ u_char mfb_stts;
	/* 0x0f5 */ char mfb_wait;
	/* 0x0f6 */ char mfb_drain;
	/* 0x0f7 */ char mfb_effect;
	/* 0x0f8 */ u_char mfb_lgt_alp;
	/* 0x0f9 */ u_char mfb_lgt_bak;
	/* 0x0fa */ u_char mfb_lfl_alp;
	/* 0x0fb */ u_char mfb_num_alp;
	/* 0x0fc */ u_char mfb_num_siz_x;
	/* 0x0fd */ u_char mfb_num_siz_y;
	/* 0x0fe */ u_char mfb_nfl_alp;
	/* 0x0ff */ u_char shw_hp_tmr;
	/* 0x100 */ u_char chrg_rot[12];
	/* 0x10c */ u_char chrg_flr[12];
	/* 0x118 */ u_char chrg_stp[12];
	/* 0x124 */ u_char dray_tmr[12];
	/* 0x130 */ u_char se_wait;
	/* 0x131 */ u_char se_num;
	/* 0x132 */ u_char level_bak;
	/* 0x133 */ u_char buki_use_flg;
	/* 0x134 */ u_char buki_use_alp;
	/* 0x135 */ u_char buki_use_flr;
	/* 0x136 */ u_char buki_use_tmr;
	/* 0x137 */ u_char shot_kind[4];
	/* 0x13b */ u_char shot_kind2;
	/* 0x13c */ u_char shot_mov;
	/* 0x13d */ u_char shot_pse;
	/* 0x13e */ u_char shot_lgt;
	/* 0x13f */ u_char shot_fad;
	/* 0x140 */ u_char shot_num;
	/* 0x141 */ u_char mfb2_stts;
	/* 0x142 */ u_char mfb2_tim;
	/* 0x143 */ u_char mfb2_tim2;
	/* 0x144 */ u_char fire_mask;
	/* 0x145 */ u_char tm_max;
	/* 0x146 */ u_char issei_timer;
	/* 0x147 */ u_char dsp_dmg_flg;
	/* 0x148 */ u_char dsp_dmg_num;
	/* 0x149 */ u_char dsp_dmg_step;
	/* 0x14a */ u_char dsp_dmg_step2;
	/* 0x14b */ u_char dsp_dmg_alp;
	/* 0x14c */ u_char dmg_num_alp;
	/* 0x14d */ u_char dmg_str_alp;
	/* 0x14e */ u_char dmg_eff_alp;
	/* 0x14f */ u_char dmg_wait_tm;
	/* 0x150 */ u_char dmg_num_mov_tim;
	/* 0x151 */ u_char dmg_str_mov_tim;
	/* 0x152 */ u_char dmg_eff_tim;
	/* 0x153 */ u_char ene_dead_tmr;
	/* 0x154 */ u_char ene_dead_alp;
	/* 0x155 */ u_char rmp_alp;
	/* 0x156 */ u_char hit_hp_ovr_ene;
	/* 0x157 */ u_char hit_hp_ovr_ene_wait;
} NEW_INF;

typedef struct { // 0x4
	/* 0x0 */ u_char err;
	/* 0x1 */ u_char alp_c;
	/* 0x2 */ u_char alp_f;
	/* 0x3 */ u_char dead;
} LIFE_BALL;

typedef struct { // 0x4
	/* 0x0 */ short int aim;
	/* 0x2 */ short int dst;
} PRTCL_BALL;

typedef struct { // 0x4
	/* 0x0 */ short int x;
	/* 0x2 */ short int y;
} PRTCL_POS;

typedef struct { // 0x18
	/* 0x00 */ u_char num1[6];
	/* 0x06 */ u_char num2[6];
	/* 0x0c */ u_char num3[6];
	/* 0x12 */ u_char num4[6];
} ZAN;

typedef struct { // 0x5
	/* 0x0 */ u_char tim;
	/* 0x1 */ u_char tim_max;
	/* 0x2 */ u_char spd;
	/* 0x3 */ u_char mov_x;
	/* 0x4 */ u_char mov_y;
} JET_SET;

enum FEXEC_TYPE {
	FEXEC_TYPE_NO = 0,
	FEXEC_TYPE_MOTION = 1,
	FEXEC_TYPE_ACSSRY = 2,
	FEXEC_TYPE_LIGHT = 3,
	FEXEC_TYPE_EFFCT = 4,
	FEXEC_TYPE_TANIM = 5,
	FEXEC_TYPE_SOUND = 6
};

typedef struct { // 0xc
	/* 0x0 */ u_int attr;
	/* 0x4 */ u_short wake_no;
	/* 0x6 */ u_short exec_no0;
	/* 0x8 */ u_short exec_no1;
	/* 0xa */ u_short end_no;
} FACT_INIT_DAT;

typedef struct { // 0x28
	/* 0x00 */ u_int ck_item;
	/* 0x04 */ u_int ck_rate;
	/* 0x08 */ float distn;
	/* 0x0c */ float distf;
	/* 0x10 */ float rot_range;
	/* 0x14 */ float vlow;
	/* 0x18 */ float vhigh;
	/* 0x1c */ u_int delay;
	/* 0x20 */ u_int stat;
	/* 0x24 */ u_short obj;
} FACT_CHK_DAT;

typedef struct { // 0x4
	/* 0x0 */ u_short type;
	/* 0x2 */ u_short no;
} FACT_EXEC_DAT;

typedef struct { // 0x8
	/* 0x0 */ float fin_rate;
	/* 0x4 */ u_short attr;
	/* 0x6 */ u_char step;
	/* 0x7 */ u_char loop;
} FEXEC_TANIM_DAT;

typedef struct { // 0x2
	/* 0x0 */ u_short snd_no;
} FEXEC_SOUND_DAT;

enum FACT_STTS {
	FACT_STTS_NO = 0,
	FACT_STTS_WAIT = 1,
	FACT_STTS_WAIT_DELAY = 2,
	FACT_STTS_EXEC = 3,
	FACT_STTS_END = 4
};

enum FACT_CHECK_NO {
	FCHK_WAKE = 0,
	FCHK_END = 1
};

enum FEXEC_MODE {
	FEXEC_FADE_IN = 0,
	FEXEC_NOMAL_EXEC = 1,
	FEXEC_FADE_OUT = 2,
	FEXEC_END = 3
};

enum FEXEC_SOUND_MODE {
	SOUND_ON = 0,
	SOUND_END = 1
};

typedef struct { // 0x40
	/* 0x00 */ FACT_CHK_DAT *chk[2];
	/* 0x08 */ FACT_EXEC_DAT *exec[2];
	/* 0x10 */ float dist_tgt;
	/* 0x14 */ float fade_rate;
	/* 0x18 */ float fade;
	/* 0x1c */ u_int glb_cnt;
	/* 0x20 */ u_int dly_cnt;
	/* 0x24 */ u_int exe_cnt;
	/* 0x28 */ u_int attr;
	/* 0x2c */ int fw_no;
	/* 0x30 */ int exec_rate;
	/* 0x34 */ int hndl;
	/* 0x38 */ u_short furn_id;
	/* 0x3a */ u_char stts;
	/* 0x3b */ u_char exec_mode[2];
	/* 0x3d */ u_char exec_flg;
	/* 0x3e */ u_char eve_flg;
	/* 0x3f */ u_char room_id;
} F_ACT_WRK;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x18
	/* 0x00 */ float adj_r0;
	/* 0x04 */ float adj_r1;
	/* 0x08 */ float adj_org;
	/* 0x0c */ u_short adj_x0;
	/* 0x0e */ u_short adj_x1;
	/* 0x10 */ u_short adj_z0;
	/* 0x12 */ u_short adj_z1;
	/* 0x14 */ u_char step;
	/* 0x15 */ u_char timer;
	/* 0x16 */ u_char door_kind;
	/* 0x17 */ u_char mtn_no;
} DOOR_CONTE;

enum DOOR_HIT_CHECK_PTN {
	DHC_CLOSE_HC = 0,
	DHC_DBL_OPEN_00 = 1,
	DHC_DBL_OPEN_01 = 2,
	DHC_NML_OPEN_02 = 3,
	DHC_NML_OPEN_03 = 4,
	DHC_NML_OPEN_04 = 5,
	DHC_NML_OPEN_05 = 6,
	DHC_NML_OPEN_06 = 7,
	DHC_NML_OPEN_07 = 8
};

enum DOOR_OPEN_CHECK_MODE {
	DOP_CHK_NONE = 0,
	DOP_CHK_LOCK = 1,
	DOP_CHK_ALL = 2,
	DOP_CHK_HIDE = 3
};

typedef struct { // 0x8
	/* 0x0 */ int dwrk_no;
	/* 0x4 */ u_char type;
	/* 0x5 */ u_char sq_no[2];
} DOJ_SQUARE;

typedef struct { // 0x18
	/* 0x00 */ DOJ_SQUARE dojs[2];
	/* 0x10 */ int dwno_base;
	/* 0x14 */ u_char mtn_no;
	/* 0x15 */ u_char exc_flg;
	/* 0x16 */ u_char dbl_flg;
	/* 0x17 */ u_char dor_flg;
} DOJ_SQUARE_MTN;

enum {
	DOOR_OPEN_CHECK_LBATTLE = 0,
	DOOR_OPEN_CHECK_NORMAL = 1,
	DOOR_OPEN_CHECK_BLAFTER = 2
};

enum FURN_EFCT_TYPE {
	FEFCT_FIRE0 = 0,
	FEFCT_KASA0 = 1,
	FEFCT_SUNSHINE0 = 2,
	FEFCT_DEFORM0 = 3,
	FEFCT_MAX = 4
};

enum FURN_EFCT_USE {
	FEFCT_USE_NO = 0,
	FEFCT_USE_USE = 1
};

typedef struct { // 0x1c
	/* 0x00 */ float pos_x;
	/* 0x04 */ float pos_y;
	/* 0x08 */ float pos_z;
	/* 0x0c */ float fscl;
	/* 0x10 */ float kscl;
	/* 0x14 */ u_char fr;
	/* 0x15 */ u_char fg;
	/* 0x16 */ u_char fb;
	/* 0x17 */ u_char kr;
	/* 0x18 */ u_char kg;
	/* 0x19 */ u_char kb;
} FURN_EFCT_FIRE;

typedef struct { // 0x18
	/* 0x00 */ float pos_x;
	/* 0x04 */ float pos_y;
	/* 0x08 */ float pos_z;
	/* 0x0c */ float scl;
	/* 0x10 */ u_char r;
	/* 0x11 */ u_char g;
	/* 0x12 */ u_char b;
	/* 0x13 */ u_char twink;
	/* 0x14 */ u_char tex;
} FURN_EFCT_KASA;

typedef struct { // 0x34
	/* 0x00 */ float pos_x;
	/* 0x04 */ float pos_y;
	/* 0x08 */ float pos_z;
	/* 0x0c */ float lpos_x;
	/* 0x10 */ float lpos_y;
	/* 0x14 */ float lpos_z;
	/* 0x18 */ float rot_x;
	/* 0x1c */ float rot_y;
	/* 0x20 */ float rot_z;
	/* 0x24 */ float w;
	/* 0x28 */ float h;
	/* 0x2c */ int power;
	/* 0x30 */ u_char r;
	/* 0x31 */ u_char g;
	/* 0x32 */ u_char b;
} FURN_EFCT_SUNSHINE;

typedef struct { // 0x2
	/* 0x0 */ u_char sclw;
	/* 0x1 */ u_char sclh;
} FURN_EFCT_DEFORM;

enum {
	NO_USE_ITEM = 0,
	EV_OPEN_ITEM = 1,
	FILM_SET_ITEM = 2,
	HP_RECOVER = 3,
	MP_RECOVER = 4,
	TAPE_PLAY = 5
};

typedef struct { // 0x4
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char value0;
	/* 0x2 */ short int value1;
} ITEM_USE_DAT;

typedef struct { // 0xe
	/* 0x0 */ u_char item_no;
	/* 0x1 */ u_char stts;
	/* 0x2 */ u_char room;
	/* 0x3 */ u_char msn_no;
	/* 0x4 */ short int pos_x;
	/* 0x6 */ short int pos_y;
	/* 0x8 */ short int pos_z;
	/* 0xa */ u_short get_msg[2];
} MAP_ITEM_DAT;

enum {
	AP_TYPE_NO_COND = 0,
	AP_TYPE_EVENT = 1,
	AP_TYPE_PLAY_TIME = 2,
	AP_TYPE_REAL_TIME = 3,
	AP_TYPE_TOTAL_PTIME = 4,
	AP_TYPE_TOTAL_RTIME = 5,
	AP_TYPE_TOTAL_SCORE = 6,
	AP_TYPE_HIGH_SCORE = 7
};

typedef struct { // 0xe
	/* 0x0 */ u_char stts;
	/* 0x1 */ u_char room;
	/* 0x2 */ short int pos_x;
	/* 0x4 */ short int pos_y;
	/* 0x6 */ short int pos_z;
	/* 0x8 */ u_char get_msg[2];
	/* 0xa */ u_char dsp_pct;
	/* 0xb */ u_char msn_no;
	/* 0xc */ u_char map_dsp;
} MAP_FILE_DAT;

typedef struct { // 0x8
	/* 0x0 */ u_short time;
	/* 0x4 */ float magnif;
} FSPE_LIGHT_ANM;

typedef enum {
	ST_FSLA_VACANT = 0,
	ST_FSLA_IN = 1,
	ST_FSLA_EXEC = 2,
	ST_FSLA_OUT = 3
} ST_FSLA;

typedef struct { // 0x10
	/* 0x0 */ u_char state;
	/* 0x1 */ u_char room_no;
	/* 0x4 */ float *power;
	/* 0x8 */ sceVu0FVECTOR *pos;
	/* 0xc */ sceVu0FVECTOR *diffuse;
} POINT_LIGHT_WRK;

typedef struct { // 0x40
	/* 0x00 */ ST_FSLA state;
	/* 0x04 */ u_char room_id;
	/* 0x08 */ FSPE_LIGHT_ANM *ap_in;
	/* 0x0c */ u_int time;
	/* 0x10 */ float now_magnif;
	/* 0x20 */ sceVu0FVECTOR diffuse;
	/* 0x30 */ u_char type;
	/* 0x31 */ u_char fadeouttype;
	/* 0x32 */ signed char plw_id;
} FSPE_LIGHT_WRK;

typedef struct { // 0x30
	/* 0x00 */ void *next;
	/* 0x04 */ void *pre;
	/* 0x08 */ u_short time;
	/* 0x0a */ u_short nowtime;
	/* 0x0c */ sceVu0FVECTOR *ori;
	/* 0x10 */ sceVu0FVECTOR accel;
	/* 0x20 */ sceVu0FVECTOR des;
} ADJ_VALG_WRK;

typedef enum {
	ST_WAIT1 = 0,
	ST_GO_AROUND = 1,
	ST_WAIT2 = 2,
	ST_GO_CAMERA = 3,
	ST_FINISH_PE = 4
} ST_PEOBJ;

typedef struct { // 0x90
	/* 0x00 */ void *nextpe;
	/* 0x04 */ void *underpe;
	/* 0x08 */ ST_PEOBJ state;
	/* 0x10 */ sceVu0IVECTOR scrvec;
	/* 0x20 */ sceVu0FVECTOR pos;
	/* 0x30 */ sceVu0FVECTOR c2ov_step;
	/* 0x40 */ sceVu0FVECTOR c2ov_move;
	/* 0x50 */ sceVu0FVECTOR c2sv_unit;
	/* 0x60 */ float c2slen;
	/* 0x64 */ float c2olen;
	/* 0x68 */ float steplen;
	/* 0x6c */ int pe_width;
	/* 0x70 */ int m_time;
	/* 0x74 */ int time;
	/* 0x78 */ float nowz;
	/* 0x7c */ float ka;
	/* 0x80 */ float kb;
	/* 0x84 */ int alphabl;
} PARTICLE_EFF_OBJ;

typedef struct { // 0x30
	/* 0x00 */ u_long tex_now;
	/* 0x08 */ u_long tex_bak;
	/* 0x10 */ int load_id;
	/* 0x14 */ short int gage_hp;
	/* 0x16 */ u_char alp_now;
	/* 0x17 */ u_char itm_lst_strt;
	/* 0x18 */ u_char flm_alp[5];
	/* 0x1d */ u_char hp_max_chk;
	/* 0x1e */ u_char flm_dff_chk;
	/* 0x1f */ u_char itm_eve_chk;
	/* 0x20 */ u_char itm_csr_now;
	/* 0x21 */ u_char itm_loading;
	/* 0x22 */ u_char itm_can_dsp;
	/* 0x23 */ u_char itm_dsp_flg;
	/* 0x24 */ u_char i_mode;
	/* 0x25 */ u_char msg_end;
	/* 0x26 */ u_char btn_flsh_cnt;
	/* 0x27 */ u_char set_sub_tmp;
	/* 0x28 */ u_char set_sub_flr;
	/* 0x29 */ u_char set_sub_bak;
	/* 0x2a */ u_char set_spe_tmp;
	/* 0x2b */ u_char set_spe_flr;
	/* 0x2c */ u_char set_spe_bak;
	/* 0x2d */ u_char cam_flr_tmr;
	/* 0x2e */ u_char tape_flsh;
} ITM_EFF_WRK;

typedef struct { // 0x8
	/* 0x0 */ u_char chr[4];
	/* 0x4 */ u_int num;
} PKZ_HEAD;

typedef struct { // 0x3
	/* 0x0 */ u_char open_page;
	/* 0x1 */ u_char knd_bak;
	/* 0x2 */ u_char no_bak;
} MSG_DSP;

typedef struct { // 0x4
	/* 0x0 */ u_char knd_char;
	/* 0x2 */ short int char_no;
} YWDBG;

enum {
	GAME_OVER_TO_ALBUM = 0,
	GAME_OVER_QUIT_GAME = 1
};

typedef struct { // 0xc
	/* 0x0 */ float menu_alp;
	/* 0x4 */ float logo_alp;
	/* 0x8 */ u_char type;
	/* 0x9 */ u_char csr;
	/* 0xa */ u_char mode;
	/* 0xb */ u_char fade;
} GO_WRK;

enum {
	PAUSE_MODE_NO_REQ = 0,
	PAUSE_MODE_MENU = 1,
	PAUSE_MODE_MENU_OUT = 2
};

enum {
	PAUSE_CONTINUE = 0,
	PAUSE_OPTION = 1,
	PAUSE_RESET = 2,
	PAUSE_MODE_NUM = 3
};

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char opti;
	/* 0x2 */ u_char csr[3];
	/* 0x6 */ u_short timer;
} PAUSE_WRK;

typedef struct { // 0x4
	/* 0x0 */ u_char sopt;
	/* 0x1 */ u_char smap;
	/* 0x2 */ u_char slod;
	/* 0x3 */ u_char lod_ret;
} SPD_MNU;

typedef struct { // 0x3
	/* 0x0 */ u_char alp;
	/* 0x1 */ u_char msg_alp;
	/* 0x2 */ u_char yn_mode;
} PAUSE_DSP;

enum {
	NRM_ALBM_CMD_SEAL = 0,
	NRM_ALBM_CMD_DEL = 1,
	NRM_ALBM_CMD_MODE = 2,
	NRM_ALBM_CMD_SORT = 3,
	NRM_ALBM_CMD_NUM = 4
};

enum {
	BIG_ALBM_CMD_SEAL = 0,
	BIG_ALBM_CMD_DEL = 1,
	BIG_ALBM_CMD_NUM = 2
};

enum {
	ALBM_MODE_ALL = 0,
	ALBM_MODE_LST = 1,
	ALBM_MODE_BIG = 2,
	ALBM_MODE_NUM = 3
};

enum {
	ALBM_SORT_DATE = 0,
	ALBM_SORT_SCORE = 1,
	ALBM_SORT_SEAL = 2,
	ALBM_SORT_NUM = 3
};

typedef struct { // 0xc
	/* 0x0 */ float lrg_io_alf;
	/* 0x4 */ u_short lrg_io_cnt;
	/* 0x6 */ u_short mmenu_tmr;
	/* 0x8 */ u_short smenu_tmr;
	/* 0xa */ u_char menu_csr_bak;
	/* 0xb */ u_char dsp_pct_bak;
} ALBM_WRK;

enum {
	CAMERA_CUSTOM_FILM = 0,
	CAMERA_CUSTOM_PWUP = 1,
	CAMERA_CUSTOM_SBAB = 2,
	CAMERA_CUSTOM_SPAB = 3,
	CAMERA_CUSTOM_MENU = 4
};

typedef struct { // 0x8
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char csr[6];
	/* 0x7 */ u_char yn_mode;
} CAMERA_MENU_WRK;

typedef struct { // 0x20
	/* 0x00 */ short int arw_cnt;
	/* 0x02 */ u_char sb_flsh[5];
	/* 0x07 */ u_char ex_flsh[5];
	/* 0x0c */ u_char pow_bak[3];
	/* 0x0f */ u_char pow_flr[3][4];
	/* 0x1b */ u_char film_or_perform;
	/* 0x1c */ u_char bonus_or_special;
	/* 0x1d */ u_char pfm_max[3];
} CAM_DSP;

typedef struct { // 0xa
	/* 0x0 */ short int pos_x;
	/* 0x2 */ short int pos_y;
	/* 0x4 */ u_short siz_x;
	/* 0x6 */ u_short siz_y;
	/* 0x8 */ u_char win_no;
} MSK_SIZ;

typedef struct { // 0xe
	/* 0x0 */ short int pos_x;
	/* 0x2 */ short int pos_y;
	/* 0x4 */ u_short siz_x;
	/* 0x6 */ u_short siz_y;
	/* 0x8 */ u_char u_hgh;
	/* 0x9 */ u_char d_hgh;
	/* 0xa */ u_char l_wid;
	/* 0xb */ u_char r_wid;
	/* 0xc */ u_char pri;
	/* 0xd */ u_char bak;
} WIN_PTN;

typedef struct { // 0xa
	/* 0x0 */ short int pos_x;
	/* 0x2 */ short int pos_y;
	/* 0x4 */ u_short siz_x;
	/* 0x6 */ u_short siz_y;
	/* 0x8 */ u_char win_no;
} PLS_LIN;

typedef struct { // 0x8
	/* 0x0 */ u_short on_cnt[4];
} ANA_PAD;

typedef struct { // 0x6
	/* 0x0 */ u_char type;
	/* 0x1 */ u_char no;
	/* 0x2 */ u_char msg0;
	/* 0x3 */ u_char msg1;
	/* 0x4 */ u_char flg;
	/* 0x5 */ u_char itm_num;
} FILE_GET_CTRL;

typedef struct { // 0x8
	/* 0x0 */ u_short cnt;
	/* 0x2 */ u_char stp;
	/* 0x3 */ u_char dsp;
	/* 0x4 */ u_char csr[1];
	/* 0x5 */ u_char stts;
	/* 0x6 */ u_char page_all;
	/* 0x7 */ u_char open_page;
} FILE_GET_DSP;

typedef struct { // 0xb
	/* 0x0 */ u_char msg_type_bak;
	/* 0x1 */ u_char msg_no_bak;
	/* 0x2 */ u_char str;
	/* 0x3 */ u_char msg;
	/* 0x4 */ u_char scn;
	/* 0x5 */ u_char chr;
	/* 0x6 */ u_char ply;
	/* 0x7 */ u_char nam;
	/* 0x8 */ u_char tim;
	/* 0x9 */ u_char bak;
	/* 0xa */ u_char msg_end;
} FILE_GET_FADE;

typedef struct { // 0x10
	/* 0x0 */ u_long tex_addr;
	/* 0x8 */ float scl;
	/* 0xc */ u_char alp;
} FILE2D;

enum {
	GET_FILE_BOOK = 1,
	GET_FILE_PHOT = 2,
	GET_FILE_ITEM = 3
};

enum {
	START = 0,
	INIT = 1,
	ERROR = 2,
	END = 3,
	STEP_B00 = 4,
	STEP_B01 = 5,
	STEP_B02 = 6,
	STEP_B03 = 7,
	STEP_B04 = 8,
	STEP_B05 = 9,
	STEP_B06 = 10,
	STEP_B07 = 11,
	STEP_P00 = 12,
	STEP_P01 = 13,
	STEP_P02 = 14,
	STEP_P03 = 15,
	STEP_P04 = 16,
	STEP_P05 = 17,
	STEP_P06 = 18,
	STEP_I00 = 19,
	STEP_I01 = 20,
	STEP_I02 = 21,
	STEP_I03 = 22,
	STEP_I04 = 23
};

typedef struct { // 0x8
	/* 0x0 */ int item_no;
	/* 0x4 */ int adpcm_no;
} TAPE_DAT;

enum {
	FILE_REL_START = 0,
	FILE_REL_LOAD_WAIT = 1,
	FILE_REL_TATEI = 2,
	FILE_REL_MENU_LOAD_WAIT = 3,
	FILE_REL_END = 4
};

typedef struct { // 0x8
	/* 0x0 */ int load_id;
	/* 0x4 */ char step;
} FILE_REL;

enum {
	MODE_SLCT_DIR = 0,
	MODE_SLCT_FIL = 1,
	MODE_SLCT_ERR = 2,
	MODE_SLCT_DTL = 3
};

enum {
	DTL_FILE0 = 0,
	DTL_FILE1 = 1,
	DTL_FILE2 = 2,
	DTL_PHOT = 3,
	DTL_NUM = 4
};

typedef struct { // 0x30
	/* 0x00 */ u_long tex_now;
	/* 0x08 */ u_long tex_bak;
	/* 0x10 */ int load_id;
	/* 0x14 */ u_char alp_now;
	/* 0x15 */ u_char alp_bak;
	/* 0x16 */ u_char f_mode;
	/* 0x17 */ u_char mod;
	/* 0x18 */ u_char knd;
	/* 0x19 */ u_char dtl;
	/* 0x1a */ u_char lst_top;
	/* 0x1b */ u_char pic_alp[4];
	/* 0x1f */ u_char page_all;
	/* 0x20 */ u_char open_page;
	/* 0x21 */ u_char poss_chk;
	/* 0x22 */ u_char csr_bak;
	/* 0x23 */ u_char csr_now;
	/* 0x24 */ u_char loading;
	/* 0x25 */ u_char can_dsp;
	/* 0x26 */ u_char dsp_flg;
	/* 0x27 */ u_char pht_alp;
	/* 0x28 */ u_char pad_lock;
} MENU_FILE;

typedef struct { // 0x10
	/* 0x0 */ u_long tex;
	/* 0x8 */ u_char space;
	/* 0x9 */ u_char rot;
} PHOT_FILE;

typedef struct { // 0x8
	/* 0x0 */ short int px;
	/* 0x2 */ short int py;
	/* 0x4 */ short int sx;
	/* 0x6 */ short int sy;
} DSP_PHT;

typedef struct { // 0x6
	/* 0x0 */ short int pht_no;
	/* 0x2 */ short int lod_rq;
	/* 0x4 */ short int mem_no;
} DSP_BOX;

typedef struct { // 0x18
	/* 0x00 */ u_long tx;
	/* 0x08 */ int lod_id;
	/* 0x0c */ short int lod_no;
	/* 0x0e */ short int vrm_no;
	/* 0x10 */ short int dsp_ok;
} MEM_BOX;

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

typedef struct { // 0x12
	/* 0x00 */ short int x;
	/* 0x02 */ short int y;
	/* 0x04 */ short int u;
	/* 0x06 */ short int v;
	/* 0x08 */ short int exp_u;
	/* 0x0a */ short int exp_v;
	/* 0x0c */ short int n_rabel;
	/* 0x0e */ short int tbl_no;
	/* 0x10 */ short int pad;
} RELATION_NAME_PLATE;

typedef struct { // 0x54
	/* 0x00 */ RELATION_PRT *left_prt;
	/* 0x04 */ RELATION_PRT *right_prt;
	/* 0x08 */ SPRT_DAT *ssd_p;
	/* 0x0c */ short int st_index[4];
	/* 0x14 */ short int start_no;
	/* 0x16 */ short int end_no;
	/* 0x18 */ short int attribute;
	/* 0x1c */ int csr_y;
	/* 0x20 */ short int wk_scl[8][2];
	/* 0x40 */ short int wk_pos[2][4];
	/* 0x50 */ short int mission_no;
} RELATION_PRT;

typedef struct { // 0x30
	/* 0x00 */ RELATION_DAT *up_p;
	/* 0x04 */ RELATION_DAT *down_p;
	/* 0x08 */ RELATION_DAT *left_p;
	/* 0x0c */ RELATION_DAT *right_p;
	/* 0x10 */ RELATION_PRT *parent_p;
	/* 0x14 */ RELATION_NAME_PLATE *plate_p;
	/* 0x18 */ SPRT_DAT *ssd_p;
	/* 0x1c */ SPRT_DAT *fnt_p;
	/* 0x20 */ SPRT_DAT *fla_p;
	/* 0x24 */ short int dat_idx;
	/* 0x26 */ short int attribute;
	/* 0x28 */ short int msg_idx;
	/* 0x2a */ short int tm2_id;
	/* 0x2c */ short int dsp_pos;
	/* 0x2e */ short int pad;
} RELATION_DAT;

typedef struct { // 0xc
	/* 0x0 */ short int com_idx;
	/* 0x2 */ short int attribute;
	/* 0x4 */ short int x1;
	/* 0x6 */ short int y1;
	/* 0x8 */ short int len;
	/* 0xa */ short int pad;
} RELATION_YAJI;

typedef struct { // 0x24
	/* 0x00 */ short int disp_pos;
	/* 0x02 */ short int attribute;
	/* 0x04 */ SPRT_DAT *ssd_p[4];
	/* 0x14 */ short int flp_num[4];
	/* 0x1c */ short int dat_idx[2];
	/* 0x20 */ short int pad;
} RELATION_COM;

typedef struct { // 0x28
	/* 0x00 */ short int offx;
	/* 0x02 */ short int offy;
	/* 0x04 */ short int a;
	/* 0x06 */ short int attribute;
	/* 0x08 */ short int mode;
	/* 0x0a */ short int load_id;
	/* 0x10 */ u_long tex_keep;
	/* 0x18 */ short int init_switch;
	/* 0x1c */ RELATION_DAT *now_dat;
	/* 0x20 */ RELATION_PRT *now_prt;
	/* 0x24 */ short int pad;
} RELATION_CSR;

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

enum {
	SAKKA_PRT = 0,
	HIMURO_PRT = 1,
	MUNA_PRT = 2,
	HINA_PRT = 3,
	OMOI_PRT = 4
};

enum {
	R_UP = 0,
	R_DOWN = 1,
	R_LEFT = 2,
	R_RIGHT = 3
};

enum {
	RCSR_NORM = 0,
	RCSR_LOAD = 1,
	RCSR_AFTLOAD = 2,
	RCSR_TEXDISP = 3
};

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

typedef struct { // 0x6
	/* 0x0 */ short int x;
	/* 0x2 */ short int y;
	/* 0x4 */ u_char mark;
	/* 0x5 */ u_char str;
} CAPTION_DATA_SUB;

typedef struct { // 0x1c
	/* 0x00 */ short int w;
	/* 0x02 */ short int h;
	/* 0x04 */ CAPTION_DATA_SUB cds[4];
} CAPTION_DATA;

typedef struct { // 0x8
	/* 0x0 */ short int x;
	/* 0x2 */ short int y;
	/* 0x4 */ short int no;
	/* 0x6 */ short int pnl;
} CAPTION_LIST;

typedef struct { // 0x5
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char csr_bak;
	/* 0x2 */ u_char star;
	/* 0x3 */ u_char cnt;
	/* 0x4 */ char exist_s_rank;
} MENU_RANK;

typedef struct { // 0x4
	/* 0x0 */ u_short type;
	/* 0x2 */ u_short id;
} SUBJECT_CHK;

typedef struct { // 0x8
	/* 0x0 */ u_short mdl_no;
	/* 0x2 */ u_short knd;
	/* 0x4 */ u_short no;
	/* 0x6 */ u_short msn;
} GLIST_ORDER;

typedef struct { // 0x2
	/* 0x0 */ char disp_flg;
	/* 0x1 */ char new_flg;
} GLIST_INDEX;

typedef struct { // 0x10
	/* 0x0 */ u_short lst_top;
	/* 0x2 */ u_short mode;
	/* 0x4 */ u_short dtl_alp;
	/* 0x6 */ u_short g_num;
	/* 0x8 */ u_short all_num;
	/* 0xa */ u_short complete;
	/* 0xc */ u_short cnt;
	/* 0xe */ u_short flg;
} MENU_GLST;

typedef struct { // 0x10
	/* 0x0 */ u_long tex;
	/* 0x8 */ int load_id;
	/* 0xc */ char mode;
} GLIST_PHOTO;

typedef struct { // 0x8
	/* 0x0 */ short int px;
	/* 0x2 */ short int py;
	/* 0x4 */ u_char rt;
	/* 0x5 */ u_char flr;
	/* 0x6 */ u_char id;
} MAP_DOOR_POS;

typedef struct { // 0x8
	/* 0x0 */ u_short px;
	/* 0x2 */ u_short py;
	/* 0x4 */ short int rt;
	/* 0x6 */ u_char flr;
	/* 0x7 */ u_char room;
} MAP_SVP_POS;

enum {
	HIMURO_B1 = 1,
	HIMURO_1F = 2,
	HIMURO_2F = 4,
	HIMURO_3F = 8
};

typedef struct { // 0x14
	/* 0x00 */ float alp;
	/* 0x04 */ short int mvx;
	/* 0x06 */ short int mvy;
	/* 0x08 */ u_char flr;
	/* 0x09 */ u_char scl_now;
	/* 0x0a */ u_char scl_mod;
	/* 0x0b */ u_char plyr_id;
	/* 0x0c */ u_char here_no;
	/* 0x0d */ u_char here_id;
	/* 0x0e */ u_char here_bak;
	/* 0x0f */ u_char line_alp;
	/* 0x10 */ u_char movable;
	/* 0x11 */ u_char visit_flr;
} MAP_CTRL;

typedef struct { // 0x10
	/* 0x0 */ float x;
	/* 0x4 */ float y;
	/* 0x8 */ float a;
	/* 0xc */ int rgb;
} LINE_PRT;

typedef struct { // 0x8
	/* 0x0 */ u_short snd_vol;
	/* 0x2 */ u_char mode;
	/* 0x3 */ u_char vive_flg;
	/* 0x4 */ u_char fade_alp[3];
} MENU_OPT;

typedef struct { // 0x4
	/* 0x0 */ short int x;
	/* 0x2 */ short int y;
} OPT_CSR_POS;

enum {
	SPMENU_START_INN = 0,
	SPMENU_START = 1,
	SPMENU_BREAK = 2,
	SPMENU_PSVP_WAIT = 3,
	SPMENU_MODE_SLCT_INN = 4,
	SPMENU_MODE_SLCT = 5,
	SPMODE_SAVE_INN = 6,
	SPMODE_SAVE = 7,
	SPMODE_SAVE_OUT = 8,
	SPMODE_ALBM_PSVP_WAIT = 9,
	SPMODE_ALBM_INN = 10,
	SPMODE_ALBM_LOAD = 11,
	SPMODE_ALBM_PRE = 12,
	SPMODE_ALBM = 13,
	SPMODE_ALBM_AFT = 14,
	SPMODE_ALBM_SAVE = 15,
	SPMODE_ALBM_OUT = 16,
	SPMENU_MODE_FILM = 17,
	SPMENU_EXIT = 18,
	SPMENU_OPEN_FOR_MSN = 19,
	SPMENU_END_FOR_MSN = 20
};

typedef struct { // 0x7
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char sub_mode;
	/* 0x2 */ u_char csr[5];
} SAVE_POINT_MENU_WRK;

enum {
	CNT_STTS_IDOL = 0,
	CNT_START = 1,
	CNT_HALF_MASK = 2,
	CNT_FILE_CHECK = 3,
	CNT_SLOT_SELECT = 4,
	CNT_FILE_SELECT = 5,
	CNT_FINAL_ANSWER = 6,
	CNT_WAIT_SAVE_END = 7,
	CNT_BREAK = 8,
	CNT_END = 9
};

enum {
	SVP_MODE_NONE = -1,
	SVP_MODE_SAVE = 0,
	SVP_MODE_ALBUM = 1,
	SVP_MODE_FILM = 2,
	SVP_MODE_EXIT = 3,
	SVP_MODE_NUM = 4
};

enum {
	ALBM_MODE_INIT = 0,
	ALBM_MODE_LOAD_FOR_INN = 1,
	ALBM_MODE_DATA_LOAD = 2,
	ALBM_MODE_PRE = 3,
	ALBM_MODE_BODY = 4,
	ALBM_MODE_AFT = 5,
	ALBM_MODE_DATA_SAVE = 6,
	ALBM_MODE_OUT = 7
};

typedef struct { // 0xb
	/* 0x0 */ signed char slct_mode;
	/* 0x1 */ u_char str_no;
	/* 0x2 */ u_char top_alp;
	/* 0x3 */ u_char bak_alp;
	/* 0x4 */ u_char msg_alp;
	/* 0x5 */ u_char ans_alp;
	/* 0x6 */ u_char btn_tmr;
	/* 0x7 */ u_char atype_buf[2];
	/* 0x9 */ u_char load_side;
	/* 0xa */ u_char in_album;
} DSP_SVP;

typedef struct { // 0x6
	/* 0x0 */ u_short dmy_tmr;
	/* 0x2 */ u_char step;
	/* 0x3 */ u_char sv_ctrl;
	/* 0x4 */ u_char slot;
	/* 0x5 */ u_char file;
} SAVE_CONTE;

typedef struct { // 0xc
	/* 0x0 */ float slot1_alp;
	/* 0x4 */ float slot2_alp;
	/* 0x8 */ float slot3_alp;
} MIRACLE_LENZ;

typedef struct { // 0x14
	/* 0x00 */ u_short msk_alp;
	/* 0x02 */ u_short msg_alp;
	/* 0x04 */ u_short fdt_alp;
	/* 0x06 */ u_short svp_alp;
	/* 0x08 */ u_short alt_alp;
	/* 0x0a */ u_short yno_alp;
	/* 0x0c */ u_char bck;
	/* 0x0d */ u_char msk;
	/* 0x0e */ u_char msg;
	/* 0x0f */ u_char fdt;
	/* 0x10 */ u_char svp;
	/* 0x11 */ u_char alt;
	/* 0x12 */ u_char alt_bak_alp;
} SV_DSP_SW;

typedef struct { // 0xc
	/* 0x0 */ short int siz_w;
	/* 0x2 */ short int siz_h;
	/* 0x4 */ short int pos_x;
	/* 0x6 */ short int pos_y;
	/* 0x8 */ u_char ttl;
	/* 0x9 */ u_char alp;
	/* 0xa */ u_char rgb;
} BOOK;

typedef struct { // 0xc
	/* 0x0 */ int load_id;
	/* 0x4 */ u_char step;
	/* 0x5 */ u_char type[2];
	/* 0x7 */ u_char load_side;
	/* 0x8 */ u_char in_album;
} ALBM_MODE;

enum {
	PWARP_MODE_NO_REQ = 0,
	PWARP_MODE_IN_REQ = 1,
	PWARP_MODE_ROOM_LOAD = 2,
	PWARP_MODE_OUT_REQ = 3,
	PWARP_MODE_END = 4
};

typedef struct { // 0x3
	/* 0x0 */ u_char mode;
	/* 0x1 */ u_char time;
	/* 0x2 */ u_char req_no;
} PWARP_WRK;

typedef struct { // 0x8
	/* 0x0 */ u_char room;
	/* 0x1 */ u_char floor;
	/* 0x2 */ u_short pos_x;
	/* 0x4 */ short int pos_y;
	/* 0x6 */ u_short pos_z;
} PWARP_DAT;

enum SCN_TEST_MODE {
	SCN_TEST_INIT = 0,
	SCN_TEST_SLCT = 1,
	SCN_TEST_PLAY = 2,
	SCN_TEST_MENU = 3,
	SCN_TEST_LOAD_REQ = 0,
	SCN_TEST_MSN_LOAD_REQ = 1,
	SCN_TEST_ROOM_MDL_LOAD_REQ = 2,
	SCN_TEST_MAN_MDL_LOAD_REQ = 3,
	SCN_TEST_MDL_LOAD_REQ = 4,
	SCN_TEST_LOAD_WAIT = 5,
	SCN_TEST_BGM_LOAD_REQ = 6,
	SCN_TEST_BGM_LOAD_WAIT = 7,
	SCN_TEST_LOAD_FINISH = 8
};

enum {
	SCN_DB_EFF_Z_DEP = 0,
	SCN_DB_EFF_MONO = 1,
	SCN_DB_EFF_SEPIA = 2,
	SCN_DB_EFF_FLG_ONLY = 2,
	SCN_DB_EFF_DITHER = 3,
	SCN_DB_EFF_BLUR_N = 4,
	SCN_DB_EFF_BLUR_B = 5,
	SCN_DB_EFF_BLUR_W = 6,
	SCN_DB_EFF_DEFORM = 7,
	SCN_DB_EFF_FOCUS = 8,
	SCN_DB_EFF_CONTRAST1 = 9,
	SCN_DB_EFF_CONTRAST2 = 10,
	SCN_DB_EFF_CONTRAST3 = 11,
	SCN_DB_EFF_FADE_FRAME = 12,
	SCN_DB_EFF_CROSS_FADE = 13,
	SCN_DB_EFF_FADE_SCR = 14,
	SCN_DB_EFF_SHIBATA = 15,
	SCN_DB_EFF_MAX = 16
};

typedef struct { // 0x1500
	/* 0x0000 */ SgLIGHT light_tmp[36];
	/* 0x1440 */ SCENE_FOG fog_tmp;
	/* 0x1460 */ sceVu0FVECTOR amb_tmp[6];
	/* 0x14c0 */ u_int mode;
	/* 0x14c4 */ u_int init;
	/* 0x14c8 */ u_int load_status;
	/* 0x14cc */ int scene_no;
	/* 0x14d0 */ int main_menu_csr;
	/* 0x14d4 */ int now_menu;
	/* 0x14d8 */ int menu_csr;
	/* 0x14dc */ int l_menu_csr;
	/* 0x14e0 */ int l_sel_csr;
	/* 0x14e4 */ int effect_csr;
	/* 0x14e8 */ int db_flg;
	/* 0x14ec */ int light_no;
	/* 0x14f0 */ int effect_id;
	/* 0x14f4 */ int loop_flg;
	/* 0x14f8 */ int ene_mdl_no;
} SCN_TEST_WRK;

typedef struct { // 0x20
	/* 0x00 */ FOD_EFF_DATA eff_data;
	/* 0x10 */ u_int eff_flg;
	/* 0x14 */ int eff_no;
	/* 0x18 */ int param_num;
	/* 0x1c */ char *eff_name;
} SCN_EFF_CTRL;

enum {
	SCN_DB_CAM = 0,
	SCN_DB_LIGHT = 1,
	SCN_DB_AMBIENT = 2,
	SCN_DB_FOG = 3,
	SCN_DB_EFFECT = 4,
	SCN_DB_ENE_EFFECT = 5,
	SCN_DB_VIBRATE = 6,
	SCN_DB_FILE_SAVE = 7,
	SCN_DB_EXIT = 8,
	SCN_DB_MAIN_MENU_MAX = 9,
	SCN_DB_MAIN_MENU_ID = 0,
	SCN_DB_CAM_MODE_ID = 1,
	SCN_DB_LIGHT_SEL_ID = 2,
	SCN_DB_AMB_DATA_ID = 3,
	SCN_DB_FOG_DATA_ID = 4,
	SCN_DB_EFCT_SEL_ID = 5,
	SCN_DB_ENE_EFF_SEL_ID = 6,
	SCN_DB_VIB_MODE_ID = 7,
	SCN_DB_LIGHT_DATA_ID = 8,
	SCN_DB_EFCT_DATA_ID = 9,
	SCN_DB_ENE_FIRE_DATA_ID = 10,
	SCN_DB_ENE_PDF1_DATA_ID = 11,
	SCN_DB_ENE_PDF2_DATA_ID = 12,
	SCN_DB_ENE_OTHER_DATA_ID = 13,
	SCN_DB_INF_LIGHT = 0,
	SCN_DB_PNT_LIGHT = 1,
	SCN_DB_SPT_LIGHT = 2,
	SCN_DB_ENE_FIRE = 0,
	SCN_DB_ENE_PDEFORM1 = 1,
	SCN_DB_ENE_PDEFORM2 = 2,
	SCN_DB_ENE_OTHERS = 3,
	SCN_DB_ENE_EFF_MAX = 4
};

enum { // 0x8
	T_TITLE_00 = 624042752,
	T_TITLE_01 = -584014588,
	T_TITLE_02 = -584014520,
	T_TITLE_03 = -516872820,
	T_TITLE_04 = -516872688,
	T_TITLE_05 = -584014188,
	T_TITLE_06 = -1657755944,
	T_TITLE_07 = -1657755908,
	T_TITLE_08 = -1657755872,
	T_TITLE_09 = -1657755836,
	T_TITLE_10 = -1657755800,
	T_TITLE_FONT = 624043916,
	T_TAIKEN = -584013424
};

enum {
	TFONT_LOAD = 0,
	TFONT_EASY = 1,
	TFONT_HARD = 2,
	TFONT_GAME1 = 3,
	TFONT_GAME2 = 4,
	TFONT_GAME3 = 5,
	TFONT_START = 6,
	TFONT_ALBUM = 7,
	TFONT_NEW = 8,
	TFONT_OPTION = 9,
	TFONT_NORMAL = 10,
	TFONT_SANKAKU_L = 11,
	TFONT_SANKAKU_R = 12,
	TFONT_KAKKO_L = 13,
	TFONT_KAKKO_R = 14,
	TFONT_NIGHT_MARE = 15,
	TFONT_DIFFICULTY = 16,
	TFONT_PRESS_START_BUTTON = 17,
	TFONT_TAIKEN = 18,
	TFONT_BAN = 19
};

enum {
	TITLE_SUBMODE_LOAD_INIT = 0,
	TITLE_SUBMODE_LOAD_SYSTEM_INIT = 1,
	TITLE_SUBMODE_LOAD_SYSTEM_SYNC = 2,
	TITLE_SUBMODE_LOAD_GAMEDATA_INIT = 3,
	TITLE_SUBMODE_LOAD_GAMEDATA_SYNC = 4,
	TITLE_SUBMODE_LOAD_ALBUM_INIT = 5,
	TITLE_SUBMODE_LOAD_ALBUM_SYNC = 6,
	TITLE_SUBMODE_LOAD_END = 7
};

typedef struct { // 0x4
	/* 0x0 */ u_short timer;
	/* 0x2 */ u_char mode;
} TTL_DSP_WRK;

typedef struct { // 0x10
	/* 0x0 */ float cnt;
	/* 0x4 */ float alp;
	/* 0x8 */ float spd;
	/* 0xc */ u_char alpmx;
	/* 0xd */ u_char colmx;
	/* 0xe */ u_short type;
} OUT_DITHER_STR;

enum {
	SLCT_STORY_MODE = 0,
	SLCT_BATTLE_MODE = 1,
	SLCT_OPTION = 2,
	SLCT_MAP_DATA_EDIT = 3,
	SLCT_SOUND_TEST = 4,
	SLCT_SCENE_TEST = 5,
	SLCT_MOTION_TEST = 6,
	SLCT_2D_TEST = 7,
	SLCT_ROOM_SIZE_CHECK = 8,
	SLCT_NUM = 9
};

enum {
	MC_DEL_INIT = 0,
	MC_DEL_GETDIR_REQ = 1,
	MC_DEL_GETDIR_SYNC = 2,
	MC_DEL_EXEC_REQ = 3,
	MC_DEL_EXEC_SYNC = 4
};

typedef struct { // 0x10
	/* 0x0 */ int type;
	/* 0x4 */ int free;
	/* 0x8 */ int format;
	/* 0xc */ int dir;
} MC_START_CHECK;

typedef struct { // 0x1
	/* 0x0 */ u_char alp;
} DSP_MC;

enum {
	MT_TYPE_INIT = 0,
	MT_TYPE_SELECT = 1,
	MT_MDL_SELECT = 2,
	MT_ANM_SELECT = 3,
	MT_CAM_MODE = 4,
	MT_POP_MENU = 5
};

typedef struct { // 0x24
	/* 0x00 */ u_char mode;
	/* 0x01 */ u_char mdl_num;
	/* 0x02 */ u_char anm_num;
	/* 0x03 */ char cur_id;
	/* 0x04 */ u_char sel_id;
	/* 0x05 */ char mot_num;
	/* 0x06 */ char mim_num;
	/* 0x07 */ char bg_num;
	/* 0x08 */ char ani_type;
	/* 0x0c */ ANI_CODE **tbl;
	/* 0x10 */ u_int type;
	/* 0x14 */ u_int mdl_id;
	/* 0x18 */ u_int anm_id;
	/* 0x1c */ u_int mimloop;
	/* 0x20 */ u_int motloop;
} MOTTEST_WORK;

typedef struct { // 0x10
	/* 0x0 */ u_int r;
	/* 0x4 */ u_int g;
	/* 0x8 */ u_int b;
	/* 0xc */ u_int pad;
} MT_RGB_WORK;

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int z;
	/* 0xc */ u_int pad;
} MT_IVECTOR;

enum {
	RSC_MISSION_NO = 0,
	RSC_ROOM_NO = 1,
	RSC_CHECK = 2,
	RSC_EXIT = 3,
	RSC_MENU_MAX = 4
};

typedef struct { // 0x20
	/* 0x00 */ sceVu0FVECTOR pos;
	/* 0x10 */ u_char floor;
} FREE_DAT;

enum {
	BTL_LOAD_MODE_PREQ = 0,
	BTL_LOAD_MODE_PLYR = 1,
	BTL_LOAD_MODE_DREQ = 2,
	BTL_LOAD_MODE_DATA = 3,
	BTL_LOAD_MODE_RREQ = 4,
	BTL_LOAD_MODE_ROOM = 5,
	BTL_LOAD_MODE_GOST = 6,
	BTL_LOAD_MODE_END = 7
};

typedef struct { // 0x8
	/* 0x0 */ u_char *addr;
	/* 0x4 */ int size;
} BTL_SAVE_STR;

enum {
	BONUS_RECORD = 0,
	BONUS_RANKE = 1,
	BONUS_RANKD = 2,
	BONUS_RANKC = 3,
	BONUS_RANKB = 4,
	BONUS_RANKA = 5,
	BONUS_RANKS = 6,
	BONUS_NODMG = 7,
	BONUS_DUMMY0 = 8,
	BONUS_DUMMY1 = 9
};

typedef struct { // 0x10
	/* 0x0 */ u_char r1;
	/* 0x1 */ u_char g1;
	/* 0x2 */ u_char b1;
	/* 0x4 */ float scale1;
	/* 0x8 */ u_char r2;
	/* 0x9 */ u_char g2;
	/* 0xa */ u_char b2;
	/* 0xc */ float scale2;
} SOUL_EFF_PARAM;

typedef struct { // 0x6
	/* 0x0 */ u_char destination_id;
	/* 0x1 */ u_char message_id;
	/* 0x2 */ u_short face_id;
	/* 0x4 */ u_short adpcm_id;
} WANDER_SOUL_DAT;

enum {
	REIKON_MSG100 = 0,
	REIKON_MSG102 = 1,
	REIKON_MSG103 = 2,
	REIKON_MSG110 = 3,
	REIKON_MSG112 = 4,
	REIKON_MSG114 = 5,
	REIKON_MSG119 = 6,
	REIKON_MSG121 = 7,
	REIKON_MSG123 = 8,
	REIKON_MSG130 = 9,
	REIKON_MSG202 = 10,
	REIKON_MSG204 = 11,
	REIKON_MSG206 = 12,
	REIKON_MSG211 = 13,
	REIKON_MSG212 = 14,
	REIKON_MSG214 = 15,
	REIKON_MSG215 = 16,
	REIKON_MSG216 = 17
};

enum {
	ST_VOL_DWN = 0,
	ST_SLCT_PRE = 1,
	ST_SND_PLAY = 2,
	ST_SND_STOP = 3,
	ST_SLCT_NXT = 4,
	ST_VOL_UPP = 5,
	ST_CMND_NUM = 6
};

typedef struct { // 0x28
	/* 0x00 */ u_short bgm_no;
	/* 0x02 */ u_short bgm_vol;
	/* 0x04 */ u_short bgm_no_bak;
	/* 0x06 */ u_short mst_vol;
	/* 0x08 */ u_char csr[1];
	/* 0x09 */ u_char run[6];
	/* 0x0f */ u_char csr_alp[6];
	/* 0x15 */ u_char run_alp[6];
	/* 0x1b */ u_char run_flsh[6];
	/* 0x21 */ u_char num_tmr[3];
	/* 0x24 */ u_char ply_flm;
	/* 0x25 */ u_char ply_min;
	/* 0x26 */ u_char ply_sec;
	/* 0x27 */ u_char msg_no;
} ST_F;

typedef struct { // 0x4
	/* 0x0 */ u_short bgm_no;
	/* 0x2 */ u_short time;
} BGM_DATA;

typedef struct { // 0x6
	/* 0x0 */ short int lvl_now;
	/* 0x2 */ short int lvl_bak;
	/* 0x4 */ u_char tmr;
	/* 0x5 */ u_char beat;
} BEAT_DSP;

typedef struct { // 0x4
	/* 0x0 */ u_char beat;
	/* 0x1 */ u_char max;
	/* 0x2 */ u_char min;
	/* 0x3 */ u_char drop;
} BEAT_DATA;

typedef union { // 0x8
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ __uint32_t lsw;
		/* 0x4 */ __uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union { // 0x4
	/* 0x0 */ float value;
	/* 0x0 */ __uint32_t word;
} ieee_float_shape_type;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	M16_NA_REGS = 1,
	M16_REGS = 2,
	T_REG = 3,
	M16_T_REGS = 4,
	GR_REGS = 5,
	FP_REGS = 6,
	HI_REG = 7,
	LO_REG = 8,
	HILO_REG = 9,
	MD_REGS = 10,
	HI_AND_GR_REGS = 11,
	LO_AND_GR_REGS = 12,
	HILO_AND_GR_REGS = 13,
	HI1_REG = 14,
	LO1_REG = 15,
	HILO1_REG = 16,
	MD1_REGS = 17,
	HI1_AND_GR_REGS = 18,
	LO1_AND_GR_REGS = 19,
	HILO1_AND_GR_REGS = 20,
	HI01_REG = 21,
	LO01_REG = 22,
	HILO01_REG = 23,
	MD01_REGS = 24,
	HI01_AND_GR_REGS = 25,
	LO01_AND_GR_REGS = 26,
	HILO01_AND_GR_REGS = 27,
	ST_REGS = 28,
	ALL_REGS = 29,
	LIM_REG_CLASSES = 30
};

struct mips_frame_info { // 0x70
	/* 0x00 */ long int total_size;
	/* 0x08 */ long int var_size;
	/* 0x10 */ long int args_size;
	/* 0x18 */ long int extra_size;
	/* 0x20 */ int gp_reg_size;
	/* 0x24 */ int fp_reg_size;
	/* 0x28 */ long int mask;
	/* 0x30 */ long int fmask;
	/* 0x38 */ long int gp_save_offset;
	/* 0x40 */ long int fp_save_offset;
	/* 0x48 */ long int gp_sp_offset;
	/* 0x50 */ long int fp_sp_offset;
	/* 0x58 */ int initialized;
	/* 0x5c */ int num_gp;
	/* 0x60 */ int num_fp;
	/* 0x68 */ long int insns_len;
};

struct mips_args { // 0x3c
	/* 0x00 */ int gp_reg_found;
	/* 0x04 */ int arg_number;
	/* 0x08 */ int arg_words;
	/* 0x0c */ int fp_arg_words;
	/* 0x10 */ int last_arg_fp;
	/* 0x14 */ int fp_code;
	/* 0x18 */ int num_adjusts;
	/* 0x1c */ rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum machine_mode {
	VOIDmode = 0,
	PQImode = 1,
	QImode = 2,
	PHImode = 3,
	HImode = 4,
	PSImode = 5,
	SImode = 6,
	PDImode = 7,
	DImode = 8,
	TImode = 9,
	OImode = 10,
	QFmode = 11,
	HFmode = 12,
	TQFmode = 13,
	SFmode = 14,
	DFmode = 15,
	XFmode = 16,
	TFmode = 17,
	QCmode = 18,
	HCmode = 19,
	SCmode = 20,
	DCmode = 21,
	XCmode = 22,
	TCmode = 23,
	CQImode = 24,
	CHImode = 25,
	CSImode = 26,
	CDImode = 27,
	CTImode = 28,
	COImode = 29,
	BLKmode = 30,
	CCmode = 31,
	MAX_MACHINE_MODE = 32
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MAX_MODE_CLASS = 7
};

typedef int ptrdiff_t;
typedef unsigned int wint_t;
typedef unsigned char UQItype;
typedef int SItype;
typedef unsigned int USItype;
typedef long int DItype;
typedef long unsigned int UDItype;
typedef float SFtype;
typedef double DFtype;
typedef long int word_type;

struct DIstruct { // 0x8
	/* 0x0 */ SItype low;
	/* 0x4 */ SItype high;
};

typedef union { // 0x8
	/* 0x0 */ DIstruct s;
	/* 0x0 */ DItype ll;
} DIunion;

typedef void (*func_ptr)(/* parameters unknown */);
typedef short int HItype;
typedef short unsigned int UHItype;
// warning: multiple differing types with the same name (type name not equal)
typedef UDItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef USItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef DFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x18
	/* 0x00 */ fp_class_type class;
	/* 0x04 */ unsigned int sign;
	/* 0x08 */ int normal_exp;
	/* 0x10 */ union { // 0x8
		/* 0x10 */ fractype ll;
		/* 0x10 */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x8
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ halffractype words[2];
	/* 0x0 */ struct { // 0x8
		/* 0x0:0 */ fractype fraction : 52;
		/* 0x6:4 */ unsigned int exp : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

// warning: multiple differing types with the same name (type name not equal)
typedef USItype fractype;
// warning: multiple differing types with the same name (type name not equal)
typedef UHItype halffractype;
// warning: multiple differing types with the same name (type name not equal)
typedef SFtype FLO_type;
// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

// warning: multiple differing types with the same name (size not equal)
typedef struct { // 0x10
	/* 0x0 */ fp_class_type class;
	/* 0x4 */ unsigned int sign;
	/* 0x8 */ int normal_exp;
	/* 0xc */ union { // 0x4
		/* 0xc */ fractype ll;
		/* 0xc */ halffractype l[2];
	} fraction;
} fp_number_type;

// warning: multiple differing types with the same name (size not equal)
typedef union { // 0x4
	/* 0x0 */ FLO_type value;
	/* 0x0 */ fractype value_raw;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ fractype fraction : 23;
		/* 0x2:7 */ unsigned int exp : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} bits;
} FLO_union_type;

typedef long int _off_t;
typedef long int _ssize_t;
typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef long int off_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;
typedef long int fd_mask;

typedef struct { // 0x8
	/* 0x0 */ fd_mask fds_bits[1];
} _types_fd_set;

struct malloc_chunk { // 0x10
	/* 0x0 */ size_t prev_size;
	/* 0x4 */ size_t size;
	/* 0x8 */ malloc_chunk *fd;
	/* 0xc */ malloc_chunk *bk;
};

typedef malloc_chunk *mchunkptr;
typedef malloc_chunk *mbinptr;

struct flock { // 0x20
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
};

struct eflock { // 0x30
	/* 0x00 */ short int l_type;
	/* 0x02 */ short int l_whence;
	/* 0x08 */ long int l_start;
	/* 0x10 */ long int l_len;
	/* 0x18 */ short int l_pid;
	/* 0x1a */ short int l_xxx;
	/* 0x20 */ long int l_rpid;
	/* 0x28 */ long int l_rsys;
};

struct stat { // 0x68
	/* 0x00 */ dev_t st_dev;
	/* 0x02 */ ino_t st_ino;
	/* 0x04 */ mode_t st_mode;
	/* 0x08 */ nlink_t st_nlink;
	/* 0x0a */ uid_t st_uid;
	/* 0x0c */ gid_t st_gid;
	/* 0x0e */ dev_t st_rdev;
	/* 0x10 */ off_t st_size;
	/* 0x18 */ time_t st_atime;
	/* 0x20 */ long int st_spare1;
	/* 0x28 */ time_t st_mtime;
	/* 0x30 */ long int st_spare2;
	/* 0x38 */ time_t st_ctime;
	/* 0x40 */ long int st_spare3;
	/* 0x48 */ long int st_blksize;
	/* 0x50 */ long int st_blocks;
	/* 0x58 */ long int st_spare4[2];
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int ULong;

struct __siov { // 0x8
	/* 0x0 */ void *iov_base;
	/* 0x4 */ size_t iov_len;
};

struct __suio { // 0xc
	/* 0x0 */ __siov *uio_iov;
	/* 0x4 */ int uio_iovcnt;
	/* 0x8 */ int uio_resid;
};

typedef union { // 0x10
	/* 0x0 */ double value;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int fraction1;
		/* 0x4:0 */ unsigned int fraction0 : 20;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x8
		/* 0x0 */ unsigned int function1;
		/* 0x4:0 */ unsigned int function0 : 19;
		/* 0x6:3 */ unsigned int quiet : 1;
		/* 0x6:4 */ unsigned int exponent : 11;
		/* 0x7:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ struct { // 0x10
		/* 0x0 */ long unsigned int lsw;
		/* 0x8 */ long unsigned int msw;
	} parts;
	/* 0x0 */ long int aslong[2];
} __ieee_double_shape_type;

typedef union { // 0x8
	/* 0x0 */ float value;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int fraction0 : 7;
		/* 0x0:7 */ unsigned int fraction1 : 16;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} number;
	/* 0x0 */ struct { // 0x4
		/* 0x0:0 */ unsigned int function1 : 16;
		/* 0x2:0 */ unsigned int function0 : 6;
		/* 0x2:6 */ unsigned int quiet : 1;
		/* 0x2:7 */ unsigned int exponent : 8;
		/* 0x3:7 */ unsigned int sign : 1;
	} nan;
	/* 0x0 */ long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union { // 0x8
	/* 0x0 */ double d;
	/* 0x0 */ __uint32_t i[2];
};

struct lconv { // 0x30
	/* 0x00 */ char *decimal_point;
	/* 0x04 */ char *thousands_sep;
	/* 0x08 */ char *grouping;
	/* 0x0c */ char *int_curr_symbol;
	/* 0x10 */ char *currency_symbol;
	/* 0x14 */ char *mon_decimal_point;
	/* 0x18 */ char *mon_thousands_sep;
	/* 0x1c */ char *mon_grouping;
	/* 0x20 */ char *positive_sign;
	/* 0x24 */ char *negative_sign;
	/* 0x28 */ char int_frac_digits;
	/* 0x29 */ char frac_digits;
	/* 0x2a */ char p_cs_precedes;
	/* 0x2b */ char p_sep_by_space;
	/* 0x2c */ char n_cs_precedes;
	/* 0x2d */ char n_sep_by_space;
	/* 0x2e */ char p_sign_posn;
	/* 0x2f */ char n_sign_posn;
};

enum {
	OCT = 0,
	DEC = 1,
	HEX = 2
};

struct rtx_def;
