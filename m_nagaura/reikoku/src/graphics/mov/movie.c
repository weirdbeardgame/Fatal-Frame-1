// STATUS: NOT STARTED

typedef int (*sceSdTransIntrHandler)(/* parameters unknown */);
typedef int (*sceSdSpu2IntrHandler)(/* parameters unknown */);

typedef struct {
	u_short func;
	u_short entry;
	u_int value;
} sceSdBatch;

typedef struct {
	int core;
	int mode;
	short int depth_L;
	short int depth_R;
	int delay;
	int feedback;
} sceSdEffectAttr;

typedef struct {
	u_char y[256];
	u_char cb[64];
	u_char cr[64];
} sceIpuRAW8;

typedef struct {
	short int y[256];
	short int cb[64];
	short int cr[64];
} sceIpuRAW16;

typedef struct {
	u_int pix[256];
} sceIpuRGB32;

typedef struct {
	u_short pix[256];
} sceIpuRGB16;

typedef struct {
	u_int pix[32];
} sceIpuINDX4;

typedef struct {
	u_int d4madr;
	u_int d4tadr;
	u_int d4qwc;
	u_int d4chcr;
	u_int d3madr;
	u_int d3qwc;
	u_int d3chcr;
	u_int ipubp;
	u_int ipuctrl;
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

typedef struct {
	sceMpegCbType type;
	char *errMessage;
} sceMpegCbDataError;

typedef struct {
	sceMpegCbType type;
	long int pts;
	long int dts;
} sceMpegCbDataTimeStamp;

typedef struct {
	sceMpegCbType type;
	u_char *header;
	u_char *data;
	u_int len;
	long int pts;
	long int dts;
} sceMpegCbDataStr;

typedef union {
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
} sceMpegCbData;

typedef struct {
	int width;
	int height;
	int frameCount;
	long int pts;
	long int dts;
	u_long flags;
	long int pts2nd;
	long int dts2nd;
	u_long flags2nd;
	void *sys;
} sceMpeg;

typedef int (*sceMpegCallback)(/* parameters unknown */);

typedef struct {
	long int pts;
	long int dts;
	int pos;
	int len;
} TimeStamp;

typedef struct {
	u_long128 *data;
	u_long128 *tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	sceIpuDmaEnv env;
	int sema;
	int isActive;
	long int totalBytes;
	TimeStamp *ts;
	int n_ts;
	int count_ts;
	int wt_ts;
} ViBuf;

typedef struct {
	sceMpeg mpeg;
	ViBuf vibuf;
	u_int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
} VideoDec;

typedef struct {
	u_char data[327680];
	int put;
	int count;
	int size;
} ReadBuf;

typedef struct {
	u_char v[1228800];
} VoData;

typedef struct {
	int status;
	int dummy[15];
	u_int v[2][29248];
} VoTag;

typedef struct {
	VoData *data;
	VoTag *tag;
	int write;
	int count;
	int size;
} VoBuf;

typedef struct {
	char id[4];
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
} SpuStreamHeader;

typedef struct {
	char id[4];
	int size;
} SpuStreamBody;

typedef struct {
	int state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int hdrCount;
	u_char *data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
} AudioDec;

typedef struct {
	int isOnCD;
	int size;
	sceCdlFILE fp;
	u_char *iopBuf;
	int fd;
} StrFile;

typedef struct {
	int x;
	int y;
	int w;
	int h;
} Rect;

typedef union {
	u_long128 q;
	u_long l[2];
	u_int i[4];
	u_short s[8];
	u_char c[16];
} QWORD;

static VoData *voBufData = 0x470100;
static VoTag *voBufTag = 0x6d8100;
ReadBuf *readBuf = 0x420000;
static u_char *audioBuff = 0x6c8100;
static char *videoDecStack = 0x6d4100;
u_int scene_bg_color = 0;
int isWithAudio = 1;
char *commandname = NULL;
char *VERSION = 0x356e28;
char *mpegName[0] = {
};
u_char mpeg_vol_rate[0] = {
};
int isCountVblank = 0;
int vblankCount = 0;
int isFrameEnd = 0;
int oddeven = 0;
int handler_error = 0;
int isStrFileInit = 0;
VoBuf voBuf = {
	/* .data = */ NULL,
	/* .tag = */ NULL,
	/* .write = */ 0,
	/* .count = */ 0,
	/* .size = */ 0
};
MOVIE_WRK movie_wrk = {
	/* .play_event_no = */ 0,
	/* .play_event_sta = */ 0
};
int thread_id = 0;
u_int controller_val = 0;
static u_long128 viBufTag[257];
static u_char *mpegWork;
static u_long128 *viBufData;
static TimeStamp timeStamp[512];
int videoDecTh = 0;
int defaultTh = 0;
StrFile infile = {
	/* .isOnCD = */ 0,
	/* .size = */ 0,
	/* .fp = */ {
		/* .lsn = */ 0,
		/* .size = */ 0,
		/* .name = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0,
			/* [8] = */ 0,
			/* [9] = */ 0,
			/* [10] = */ 0,
			/* [11] = */ 0,
			/* [12] = */ 0,
			/* [13] = */ 0,
			/* [14] = */ 0,
			/* [15] = */ 0
		},
		/* .date = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .flag = */ 0
	},
	/* .iopBuf = */ NULL,
	/* .fd = */ 0
};
VideoDec videoDec = {
	/* .mpeg = */ {
		/* .width = */ 0,
		/* .height = */ 0,
		/* .frameCount = */ 0,
		/* .pts = */ 0,
		/* .dts = */ 0,
		/* .flags = */ 0,
		/* .pts2nd = */ 0,
		/* .dts2nd = */ 0,
		/* .flags2nd = */ 0,
		/* .sys = */ NULL
	},
	/* .vibuf = */ {
		/* .data = */ NULL,
		/* .tag = */ NULL,
		/* .n = */ 0,
		/* .dmaStart = */ 0,
		/* .dmaN = */ 0,
		/* .readBytes = */ 0,
		/* .buffSize = */ 0,
		/* .env = */ {
			/* .d4madr = */ 0,
			/* .d4tadr = */ 0,
			/* .d4qwc = */ 0,
			/* .d4chcr = */ 0,
			/* .d3madr = */ 0,
			/* .d3qwc = */ 0,
			/* .d3chcr = */ 0,
			/* .ipubp = */ 0,
			/* .ipuctrl = */ 0
		},
		/* .sema = */ 0,
		/* .isActive = */ 0,
		/* .totalBytes = */ 0,
		/* .ts = */ NULL,
		/* .n_ts = */ 0,
		/* .count_ts = */ 0,
		/* .wt_ts = */ 0
	},
	/* .state = */ 0,
	/* .sema = */ 0,
	/* .hid_endimage = */ 0,
	/* .hid_vblank = */ 0
};
AudioDec audioDec = {
	/* .state = */ 0,
	/* .sshd = */ {
		/* .id = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* .size = */ 0,
		/* .type = */ 0,
		/* .rate = */ 0,
		/* .ch = */ 0,
		/* .interSize = */ 0,
		/* .loopStart = */ 0,
		/* .loopEnd = */ 0
	},
	/* .ssbd = */ {
		/* .id = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0
		},
		/* .size = */ 0
	},
	/* .hdrCount = */ 0,
	/* .data = */ NULL,
	/* .put = */ 0,
	/* .count = */ 0,
	/* .size = */ 0,
	/* .totalBytes = */ 0,
	/* .iopBuff = */ 0,
	/* .iopBuffSize = */ 0,
	/* .iopLastPos = */ 0,
	/* .iopPausePos = */ 0,
	/* .totalBytesSent = */ 0,
	/* .iopZero = */ 0
};
int frd = 0;
sceGsDBuff db = {
	/* .disp = */ {
		/* [0] = */ {
			/* .pmode = */ {
				/* .EN1 = */ CCC_BITFIELD,
				/* .EN2 = */ CCC_BITFIELD,
				/* .CRTMD = */ CCC_BITFIELD,
				/* .MMOD = */ CCC_BITFIELD,
				/* .AMOD = */ CCC_BITFIELD,
				/* .SLBG = */ CCC_BITFIELD,
				/* .ALP = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .smode2 = */ {
				/* .INT = */ CCC_BITFIELD,
				/* .FFMD = */ CCC_BITFIELD,
				/* .DPMS = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .dispfb = */ {
				/* .FBP = */ CCC_BITFIELD,
				/* .FBW = */ CCC_BITFIELD,
				/* .PSM = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DBX = */ CCC_BITFIELD,
				/* .DBY = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .display = */ {
				/* .DX = */ CCC_BITFIELD,
				/* .DY = */ CCC_BITFIELD,
				/* .MAGH = */ CCC_BITFIELD,
				/* .MAGV = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DW = */ CCC_BITFIELD,
				/* .DH = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .bgcolor = */ {
				/* .R = */ CCC_BITFIELD,
				/* .G = */ CCC_BITFIELD,
				/* .B = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			}
		},
		/* [1] = */ {
			/* .pmode = */ {
				/* .EN1 = */ CCC_BITFIELD,
				/* .EN2 = */ CCC_BITFIELD,
				/* .CRTMD = */ CCC_BITFIELD,
				/* .MMOD = */ CCC_BITFIELD,
				/* .AMOD = */ CCC_BITFIELD,
				/* .SLBG = */ CCC_BITFIELD,
				/* .ALP = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .smode2 = */ {
				/* .INT = */ CCC_BITFIELD,
				/* .FFMD = */ CCC_BITFIELD,
				/* .DPMS = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			},
			/* .dispfb = */ {
				/* .FBP = */ CCC_BITFIELD,
				/* .FBW = */ CCC_BITFIELD,
				/* .PSM = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DBX = */ CCC_BITFIELD,
				/* .DBY = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .display = */ {
				/* .DX = */ CCC_BITFIELD,
				/* .DY = */ CCC_BITFIELD,
				/* .MAGH = */ CCC_BITFIELD,
				/* .MAGV = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .DW = */ CCC_BITFIELD,
				/* .DH = */ CCC_BITFIELD,
				/* .p1 = */ CCC_BITFIELD
			},
			/* .bgcolor = */ {
				/* .R = */ CCC_BITFIELD,
				/* .G = */ CCC_BITFIELD,
				/* .B = */ CCC_BITFIELD,
				/* .p0 = */ CCC_BITFIELD,
				/* .p1 = */ 0
			}
		}
	},
	/* .giftag0 = */ {
		/* .NLOOP = */ CCC_BITFIELD,
		/* .EOP = */ CCC_BITFIELD,
		/* .pad16 = */ CCC_BITFIELD,
		/* .id = */ CCC_BITFIELD,
		/* .PRE = */ CCC_BITFIELD,
		/* .PRIM = */ CCC_BITFIELD,
		/* .FLG = */ CCC_BITFIELD,
		/* .NREG = */ CCC_BITFIELD,
		/* .REGS0 = */ CCC_BITFIELD,
		/* .REGS1 = */ CCC_BITFIELD,
		/* .REGS2 = */ CCC_BITFIELD,
		/* .REGS3 = */ CCC_BITFIELD,
		/* .REGS4 = */ CCC_BITFIELD,
		/* .REGS5 = */ CCC_BITFIELD,
		/* .REGS6 = */ CCC_BITFIELD,
		/* .REGS7 = */ CCC_BITFIELD,
		/* .REGS8 = */ CCC_BITFIELD,
		/* .REGS9 = */ CCC_BITFIELD,
		/* .REGS10 = */ CCC_BITFIELD,
		/* .REGS11 = */ CCC_BITFIELD,
		/* .REGS12 = */ CCC_BITFIELD,
		/* .REGS13 = */ CCC_BITFIELD,
		/* .REGS14 = */ CCC_BITFIELD,
		/* .REGS15 = */ CCC_BITFIELD
	},
	/* .draw0 = */ {
		/* .frame1 = */ {
			/* .FBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .FBW = */ CCC_BITFIELD,
			/* .pad22 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad30 = */ CCC_BITFIELD,
			/* .FBMSK = */ CCC_BITFIELD
		},
		/* .frame1addr = */ 0,
		/* .zbuf1 = */ {
			/* .ZBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad28 = */ CCC_BITFIELD,
			/* .ZMSK = */ CCC_BITFIELD,
			/* .pad33 = */ CCC_BITFIELD
		},
		/* .zbuf1addr = */ 0,
		/* .xyoffset1 = */ {
			/* .OFX = */ CCC_BITFIELD,
			/* .pad16 = */ CCC_BITFIELD,
			/* .OFY = */ CCC_BITFIELD,
			/* .pad48 = */ CCC_BITFIELD
		},
		/* .xyoffset1addr = */ 0,
		/* .scissor1 = */ {
			/* .SCAX0 = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD,
			/* .SCAX1 = */ CCC_BITFIELD,
			/* .pad27 = */ CCC_BITFIELD,
			/* .SCAY0 = */ CCC_BITFIELD,
			/* .pad43 = */ CCC_BITFIELD,
			/* .SCAY1 = */ CCC_BITFIELD,
			/* .pad59 = */ CCC_BITFIELD
		},
		/* .scissor1addr = */ 0,
		/* .prmodecont = */ {
			/* .AC = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .prmodecontaddr = */ 0,
		/* .colclamp = */ {
			/* .CLAMP = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .colclampaddr = */ 0,
		/* .dthe = */ {
			/* .DTHE = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .dtheaddr = */ 0,
		/* .test1 = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .test1addr = */ 0
	},
	/* .clear0 = */ {
		/* .testa = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testaaddr = */ 0,
		/* .prim = */ {
			/* .PRIM = */ CCC_BITFIELD,
			/* .IIP = */ CCC_BITFIELD,
			/* .TME = */ CCC_BITFIELD,
			/* .FGE = */ CCC_BITFIELD,
			/* .ABE = */ CCC_BITFIELD,
			/* .AA1 = */ CCC_BITFIELD,
			/* .FST = */ CCC_BITFIELD,
			/* .CTXT = */ CCC_BITFIELD,
			/* .FIX = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD
		},
		/* .primaddr = */ 0,
		/* .rgbaq = */ {
			/* .R = */ 0,
			/* .G = */ 0,
			/* .B = */ 0,
			/* .A = */ 0,
			/* .Q = */ 0.f
		},
		/* .rgbaqaddr = */ 0,
		/* .xyz2a = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2aaddr = */ 0,
		/* .xyz2b = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2baddr = */ 0,
		/* .testb = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testbaddr = */ 0
	},
	/* .giftag1 = */ {
		/* .NLOOP = */ CCC_BITFIELD,
		/* .EOP = */ CCC_BITFIELD,
		/* .pad16 = */ CCC_BITFIELD,
		/* .id = */ CCC_BITFIELD,
		/* .PRE = */ CCC_BITFIELD,
		/* .PRIM = */ CCC_BITFIELD,
		/* .FLG = */ CCC_BITFIELD,
		/* .NREG = */ CCC_BITFIELD,
		/* .REGS0 = */ CCC_BITFIELD,
		/* .REGS1 = */ CCC_BITFIELD,
		/* .REGS2 = */ CCC_BITFIELD,
		/* .REGS3 = */ CCC_BITFIELD,
		/* .REGS4 = */ CCC_BITFIELD,
		/* .REGS5 = */ CCC_BITFIELD,
		/* .REGS6 = */ CCC_BITFIELD,
		/* .REGS7 = */ CCC_BITFIELD,
		/* .REGS8 = */ CCC_BITFIELD,
		/* .REGS9 = */ CCC_BITFIELD,
		/* .REGS10 = */ CCC_BITFIELD,
		/* .REGS11 = */ CCC_BITFIELD,
		/* .REGS12 = */ CCC_BITFIELD,
		/* .REGS13 = */ CCC_BITFIELD,
		/* .REGS14 = */ CCC_BITFIELD,
		/* .REGS15 = */ CCC_BITFIELD
	},
	/* .draw1 = */ {
		/* .frame1 = */ {
			/* .FBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .FBW = */ CCC_BITFIELD,
			/* .pad22 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad30 = */ CCC_BITFIELD,
			/* .FBMSK = */ CCC_BITFIELD
		},
		/* .frame1addr = */ 0,
		/* .zbuf1 = */ {
			/* .ZBP = */ CCC_BITFIELD,
			/* .pad09 = */ CCC_BITFIELD,
			/* .PSM = */ CCC_BITFIELD,
			/* .pad28 = */ CCC_BITFIELD,
			/* .ZMSK = */ CCC_BITFIELD,
			/* .pad33 = */ CCC_BITFIELD
		},
		/* .zbuf1addr = */ 0,
		/* .xyoffset1 = */ {
			/* .OFX = */ CCC_BITFIELD,
			/* .pad16 = */ CCC_BITFIELD,
			/* .OFY = */ CCC_BITFIELD,
			/* .pad48 = */ CCC_BITFIELD
		},
		/* .xyoffset1addr = */ 0,
		/* .scissor1 = */ {
			/* .SCAX0 = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD,
			/* .SCAX1 = */ CCC_BITFIELD,
			/* .pad27 = */ CCC_BITFIELD,
			/* .SCAY0 = */ CCC_BITFIELD,
			/* .pad43 = */ CCC_BITFIELD,
			/* .SCAY1 = */ CCC_BITFIELD,
			/* .pad59 = */ CCC_BITFIELD
		},
		/* .scissor1addr = */ 0,
		/* .prmodecont = */ {
			/* .AC = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .prmodecontaddr = */ 0,
		/* .colclamp = */ {
			/* .CLAMP = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .colclampaddr = */ 0,
		/* .dthe = */ {
			/* .DTHE = */ CCC_BITFIELD,
			/* .pad01 = */ CCC_BITFIELD
		},
		/* .dtheaddr = */ 0,
		/* .test1 = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .test1addr = */ 0
	},
	/* .clear1 = */ {
		/* .testa = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testaaddr = */ 0,
		/* .prim = */ {
			/* .PRIM = */ CCC_BITFIELD,
			/* .IIP = */ CCC_BITFIELD,
			/* .TME = */ CCC_BITFIELD,
			/* .FGE = */ CCC_BITFIELD,
			/* .ABE = */ CCC_BITFIELD,
			/* .AA1 = */ CCC_BITFIELD,
			/* .FST = */ CCC_BITFIELD,
			/* .CTXT = */ CCC_BITFIELD,
			/* .FIX = */ CCC_BITFIELD,
			/* .pad11 = */ CCC_BITFIELD
		},
		/* .primaddr = */ 0,
		/* .rgbaq = */ {
			/* .R = */ 0,
			/* .G = */ 0,
			/* .B = */ 0,
			/* .A = */ 0,
			/* .Q = */ 0.f
		},
		/* .rgbaqaddr = */ 0,
		/* .xyz2a = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2aaddr = */ 0,
		/* .xyz2b = */ {
			/* .X = */ CCC_BITFIELD,
			/* .Y = */ CCC_BITFIELD,
			/* .Z = */ CCC_BITFIELD
		},
		/* .xyz2baddr = */ 0,
		/* .testb = */ {
			/* .ATE = */ CCC_BITFIELD,
			/* .ATST = */ CCC_BITFIELD,
			/* .AREF = */ CCC_BITFIELD,
			/* .AFAIL = */ CCC_BITFIELD,
			/* .DATE = */ CCC_BITFIELD,
			/* .DATM = */ CCC_BITFIELD,
			/* .ZTE = */ CCC_BITFIELD,
			/* .ZTST = */ CCC_BITFIELD,
			/* .pad19 = */ CCC_BITFIELD
		},
		/* .testbaddr = */ 0
	}
};
int play_mov_no = 0;
static char _0_buf[2048];

void MovieInitWrk() {
  movie_wrk.play_event_no = 0;
  movie_wrk.play_event_sta = 0;
  return;
}

void ReqMpegEvent(int no) {
  movie_wrk.play_event_no = no;
  movie_wrk.play_event_sta = 1;
  return;
}

int PlayMpegEvent() {
	int i;
	int ret;
	
  uint uVar1;
  int iVar2;
  int in_a0_lo;
  int iVar3;
  
  play_mov_no = 0;
  switch(movie_wrk.play_event_sta) {
  case 0:
    goto switchD_0017ed28_caseD_0;
  case 1:
    iVar3 = checkIOP();
    in_a0_lo = 0;
    if (iVar3 == 0) {
      AdpcmShiftMovie();
      SeStopAll();
      movie_wrk.play_event_sta = 2;
      in_a0_lo = 0;
    }
    break;
  case 2:
    movie_wrk.play_event_sta = 3;
    in_a0_lo = 0;
    break;
  case 3:
    if ((uint)scene_movie_no == movie_wrk.play_event_no) {
      play_mov_no = 0;
      iVar2 = play_mov_no;
    }
    else {
      for (iVar3 = 1;
          (iVar2 = play_mov_no, iVar3 < 99 &&
          (iVar2 = iVar3, (uint)(&scene_movie_no)[iVar3] != movie_wrk.play_event_no));
          iVar3 = iVar3 + 1) {
      }
    }
    play_mov_no = iVar2;
    ClearDispRoom(1);
    movie(*(char **)(&mpegName + play_mov_no * 4));
    SetIopCmdSm(1,1,0,0);
    SeSetMVol(opt_wrk.bgm_vol);
    SeSetSteMono(opt_wrk.sound_mode);
    movie_wrk.play_event_sta = 4;
    goto LAB_0017ee28;
  case 4:
LAB_0017ee28:
    sceGsResetGraph(1,1,2,1);
    sceGsSetDefDBuff(0x265eb0,0,0x280,0xe0,2,0x31,1);
    pdrawenv = &g_db.draw0;
    sceGsSyncPath(0,0);
    SgInit3D();
    sceGsSyncPath(0,0);
    vfunc();
    if (scene_bg_color == 0) {
      SetSysBackColor(0,0,0);
      clearGsMem(0,0,0,0x280,0x1c0);
    }
    else {
      SetSysBackColor(0xff,0xff,0xff);
      clearGsMem(0xff,0xff,0xff,0x280,0x1c0);
    }
    AdpcmReturnFromMovie();
    EiMain();
    uVar1 = REG_DMAC_CTRL;
    REG_DMAC_CTRL = uVar1 & 0xfffffffd;
    MovieInitWrk();
switchD_0017ed28_caseD_0:
    in_a0_lo = 0;
  }
  return in_a0_lo;
}

u_int movie(char *name) {
	static int count = 0;
	
  undefined8 uVar1;
  
  sceGsSyncPath(0,0);
  sceGsResetPath();
  sceDmaReset(1);
  sceGsResetGraph(1,1,2,1);
  if (scene_bg_color == 0) {
    clearGsMem(0,0,0,0x280,0x1c0);
  }
  else {
    clearGsMem(0xff,0xff,0xff,0x280,0x1c0);
  }
  sceGsSetDefDBuff(0x304870,0,0x280,0xe0,0,0,1);
  FlushCache(0);
  uVar1 = GetThreadId();
  thread_id = (int)uVar1;
  ChangeThreadPriority(uVar1,1);
  initMov(name);
  readMpeg(&videoDec,readBuf,&infile);
  termMov();
  uVar1 = GetThreadId();
  ChangeThreadPriority(uVar1,thread_id);
  return controller_val;
}

void switchThread() {
  syscall(0);
  return;
}

static int readMpeg(VideoDec *vd, ReadBuf *rb, StrFile *file) {
	u_char cdata[32];
	int isStarted;
	u_char *put_ptr;
	u_char *get_ptr;
	int putsize;
	int getsize;
	int readrest;
	int writerest;
	int count;
	int proceed;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar cdata [32];
  uchar *put_ptr;
  uchar *get_ptr;
  
  bVar2 = false;
  iVar5 = file->size;
  iVar6 = iVar5;
  do {
    bVar1 = iVar5 < 5;
    do {
      do {
        do {
          if ((bVar1) || (uVar4 = videoDecGetState(vd), uVar4 == 3)) {
            while (iVar5 = videoDecFlush(vd), iVar5 == 0) {
              switchThread();
            }
            while ((iVar5 = videoDecIsFlushed(vd), iVar5 == 0 &&
                   (uVar4 = videoDecGetState(vd), uVar4 != 3))) {
              switchThread();
            }
            endDisplay();
            if (isWithAudio != 0) {
              audioDecReset(&audioDec);
            }
            return 1;
          }
          SceneSetVibrate(movie_wrk.play_event_no,(vd->mpeg).frameCount);
          movVblankPad();
          if (((*key_now[12] != 0) && (0x1e < (vd->mpeg).frameCount)) &&
             (movie_wrk.play_event_sta != 7)) {
            videoDec.state = 1;
          }
          iVar3 = readBufBeginPut(rb,&put_ptr);
          if ((0 < iVar6) && (0xffff < iVar3)) {
            iVar3 = strFileRead(file,put_ptr,0x10000);
            iVar6 = iVar6 - iVar3;
            readBufEndPut(rb,iVar3);
          }
          switchThread();
          iVar3 = readBufBeginGet(rb,&get_ptr);
          if (0 < iVar3) {
            iVar3 = sceMpegDemuxPssRing(vd,get_ptr,iVar3,rb,rb->size);
            iVar5 = iVar5 - iVar3;
            readBufEndGet(rb,iVar3);
          }
          proceedAudio();
          bVar1 = iVar5 < 5;
        } while (bVar2);
        iVar3 = voBufIsFull(&voBuf);
        bVar1 = iVar5 < 5;
      } while (iVar3 == 0);
      iVar3 = isAudioOK();
      bVar1 = iVar5 < 5;
    } while (iVar3 == 0);
    startDisplay(1);
    bVar2 = true;
    if (isWithAudio != 0) {
      audioDecStart(&audioDec);
      bVar2 = true;
    }
  } while( true );
}

static int isAudioOK() {
  int iVar1;
  
  if (isWithAudio == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = audioDecIsPreset(&audioDec);
  }
  return iVar1;
}

void initMov(char *bsfilename) {
	ThreadParam th_param;
	void *val;
	
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  undefined8 uVar4;
  ThreadParam th_param;
  
  uVar1 = REG_DMAC_CTRL;
  REG_DMAC_CTRL = uVar1 | 3;
  REG_DMAC_STAT = 4;
  scePcStop();
  puVar2 = (uchar *)0x14b0000;
  if (1 < movie_wrk.play_event_sta - 6U) {
    puVar2 = (uchar *)GetEmptyRoomAddr();
  }
  viBufData = (uint16 *)(puVar2 + 0x152000);
  mpegWork = puVar2;
  readBufCreate(readBuf);
  sceMpegInit();
  videoDecCreate(&videoDec,mpegWork,0x152000,viBufData,viBufTag,0x100,timeStamp,0x200);
  sceSdRemoteInit();
  sceSdRemote(1,0x8000,0);
  audioDecCreate(&audioDec,audioBuff,0xc000,0x6000);
  videoDecSetStream(&videoDec,0,0,videoCallback,readBuf);
  if (isWithAudio != 0) {
    videoDecSetStream(&videoDec,2,0,pcmCallback,readBuf);
  }
                    /* inlined from defs.h */
                    /* end of inlined section */
  voBufCreate(&voBuf,(VoData *)((uint)voBufData & 0xfffffff | 0x20000000),voBufTag,2);
  th_param.entry = videoDecMain;
  th_param.stack = videoDecStack;
  th_param.stackSize = 0x4000;
  th_param.initPriority = 1;
  th_param.gpReg = leavesaim[0xb6];
  th_param.option = 0;
  uVar4 = CreateThread(&th_param);
  videoDecTh = (int)uVar4;
  StartThread(uVar4,0x304758);
  do {
    iVar3 = strFileOpen(&infile,bsfilename);
  } while (iVar3 == 0);
  sceGsSyncVCallback(0x180d00);
  videoDec.hid_endimage = AddDmacHandler(2,0x180eb0,0);
  EnableDmac(2);
  vblankCount = 0;
  scn_vib_time1 = 0;
  scn_vib_time0 = 0;
  return;
}

static void termMov() {
	sceGsGParam *gparam;
	u_long UserIMR;
	
  int iVar1;
  undefined8 uVar2;
  
  readBufDelete(readBuf);
  voBufDelete(&voBuf);
  TerminateThread(videoDecTh);
  DeleteThread(videoDecTh);
  DisableDmac(2);
  RemoveDmacHandler(2,videoDec.hid_endimage);
  videoDecDelete(&videoDec);
  audioDecDelete(&audioDec);
  strFileClose(&infile);
  uVar2 = sceGsPutIMR(0xff00);
  iVar1 = sceGsGetGParam();
  DisableIntc(2);
  RemoveIntcHandler(2,*(undefined4 *)(iVar1 + 0xc));
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  sceGsPutIMR(uVar2);
  return;
}

static void defMain() {
  do {
    switchThread();
  } while( true );
}

void ErrMessage(char *message) {
  return;
}

static void usage() {
  return;
}

void proceedAudio() {
  audioDecSendToIOP(&audioDec);
  return;
}

int MoviePlay(int scene_no) {
	int i;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  
  SetSysBackColor(0,0,0);
  clearGsMem(0,0,0,0x280,0x1c0);
  while (iVar3 = checkIOP(), iVar3 != 0) {
    vfunc();
  }
  AdpcmShiftMovie();
  SeStopAll();
  vfunc();
  movie_wrk.play_event_sta = 6;
  if ((uint)scene_movie_no == scene_no) {
    play_mov_no = 0;
    iVar2 = play_mov_no;
  }
  else {
    for (iVar3 = 1;
        (iVar2 = play_mov_no, iVar3 < 99 &&
        (iVar2 = iVar3, (uint)(&scene_movie_no)[iVar3] != scene_no)); iVar3 = iVar3 + 1) {
    }
  }
  play_mov_no = iVar2;
  movie_wrk.play_event_no = scene_no;
  if (((scene_no != 0) && (scene_no != 0x62)) && (scene_no != 99)) {
    ClearDispRoom(1);
  }
  movie(*(char **)(&mpegName + play_mov_no * 4));
  SetIopCmdSm(1,1,0,0);
  SeSetMVol(opt_wrk.bgm_vol);
  SeSetSteMono(opt_wrk.sound_mode);
  sceGsResetGraph(1,1,2,1);
  sceGsSetDefDBuff(0x265eb0,0,0x280,0xe0,2,0x31,1);
  pdrawenv = &g_db.draw0;
  sceGsSyncPath(0,0);
  SgInit3D();
  sceGsSyncPath(0,0);
  if (scene_no == 0x5f) {
    SetSysBackColor(0xff,0xff,0xff);
    clearGsMem(0xff,0xff,0xff,0x280,0x1c0);
  }
  else {
    SetSysBackColor(0,0,0);
    clearGsMem(0,0,0,0x280,0x1c0);
  }
  vfunc();
  AdpcmReturnFromMovie();
  EiMain();
  uVar1 = REG_DMAC_CTRL;
  REG_DMAC_CTRL = uVar1 & 0xfffffffd;
  MovieInitWrk();
  return 0;
}

void MovieTest(int scene_no) {
	int i;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  
  movie_wrk.play_event_sta = 6;
  if ((uint)scene_movie_no == scene_no) {
    play_mov_no = 0;
    iVar2 = play_mov_no;
  }
  else {
    for (iVar3 = 1;
        (iVar2 = play_mov_no, iVar3 < 99 &&
        (iVar2 = iVar3, (uint)(&scene_movie_no)[iVar3] != scene_no)); iVar3 = iVar3 + 1) {
    }
  }
  play_mov_no = iVar2;
  movie_wrk.play_event_no = scene_no;
  movie(*(char **)(&mpegName + play_mov_no * 4));
  SetIopCmdSm(1,1,0,0);
  SeSetMVol(opt_wrk.bgm_vol);
  SeSetSteMono(opt_wrk.sound_mode);
  sceGsResetGraph(1,1,2,1);
  sceGsSetDefDBuff(0x265eb0,0,0x280,0xe0,2,0x31,1);
  pdrawenv = &g_db.draw0;
  sceGsSyncPath(0,0);
  SgInit3D();
  sceGsSyncPath(0,0);
  vfunc();
  AdpcmReturnFromMovie();
  EiMain();
  uVar1 = REG_DMAC_CTRL;
  REG_DMAC_CTRL = uVar1 & 0xfffffffd;
  MovieInitWrk();
  return;
}

int PadSyncCallback2() {
	int id;
	int i;
	int state;
	int wrk;
	int exid;
	int p_id;
	PAD_STRUCT *psp;
	char act_align[6];
	
  char cVar1;
  uchar *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  PAD_STRUCT *psp;
  int p_id;
  char act_align [6];
  
  p_id = 0;
  psp = pad;
  do {
    lVar3 = scePadGetState(psp->port,psp->slot);
    if (lVar3 == 0) {
      psp->step = '\0';
      psp->flags = psp->flags & 0xfe;
      PadClearCount(p_id);
    }
    else {
      psp->flags = psp->flags | 1;
    }
    if (lVar3 == 1) {
      psp->step = '\0';
    }
    cVar1 = psp->step;
    if (cVar1 == '\x03') {
      lVar3 = scePadInfoMode(psp->port,psp->slot,1,0);
      if (lVar3 != 0) {
        lVar4 = scePadInfoMode(psp->port,psp->slot,2,0);
        if (0 < lVar4) {
          lVar3 = lVar4;
        }
        if (lVar3 != 7) goto LAB_0017fcbc;
        psp->step = '\n';
      }
    }
    else if (cVar1 < '\x04') {
      if (cVar1 == '\x01') {
        lVar3 = scePadGetState(psp->port,psp->slot);
        if (lVar3 != 5) {
          lVar3 = scePadSetMainMode(psp->port,psp->slot,1,3);
          if (lVar3 != 1) goto LAB_0017fc0c;
          psp->step = '\x02';
        }
      }
      else if (cVar1 < '\x02') {
        if (cVar1 == '\0') {
          if (lVar3 == 6) {
            iVar6 = psp->port;
          }
          else {
            if (lVar3 != 2) goto LAB_0017fd50;
            iVar6 = psp->port;
          }
          lVar3 = scePadInfoMode(iVar6,psp->slot,1,0);
          if (lVar3 != 0) {
            lVar4 = scePadInfoMode(psp->port,psp->slot,2,0);
            if (0 < lVar4) {
              lVar3 = lVar4;
            }
            psp->id = '\0';
            if (((lVar3 != 4) && (lVar3 != 7)) ||
               (lVar3 = scePadInfoAct(psp->port,psp->slot,0xffffffffffffffff,0), lVar3 == 0))
            goto LAB_0017fcbc;
            act_align[0] = '\0';
            act_align[1] = '\x01';
            iVar6 = 2;
            do {
              pcVar5 = act_align + iVar6;
              iVar6 = iVar6 + 1;
              *pcVar5 = -1;
            } while (iVar6 < 6);
            puVar2 = psp->pad_direct + 5;
            iVar6 = 5;
            do {
              *puVar2 = '\0';
              iVar6 = iVar6 + -1;
              puVar2 = puVar2 + -1;
            } while (-1 < iVar6);
            lVar3 = scePadSetActAlign(psp->port,psp->slot,act_align);
            if (lVar3 == 1) {
              psp->step = '\x01';
            }
          }
        }
      }
      else {
        lVar3 = scePadGetReqState(psp->port,psp->slot);
        if (lVar3 == 1) {
LAB_0017fc0c:
          psp->step = '\0';
        }
        else if ((lVar3 < 2) && (lVar3 == 0)) {
          psp->step = '\x03';
        }
      }
    }
    else if (cVar1 == '\v') {
      lVar3 = scePadGetReqState(psp->port,psp->slot);
      if (lVar3 == 1) {
        psp->step = '\n';
      }
      if (lVar3 == 0) {
LAB_0017fcbc:
        psp->step = 'c';
      }
    }
    else if (cVar1 < '\f') {
      if (cVar1 == '\n') {
        lVar3 = scePadInfoPressMode(psp->port,psp->slot);
        if (lVar3 != 1) goto LAB_0017fcbc;
        lVar3 = scePadEnterPressMode(psp->port,psp->slot);
        if (lVar3 == 1) {
          psp->step = '\v';
        }
      }
    }
    else if ((cVar1 == 'c') && ((lVar3 == 6 || (lVar3 == 2)))) {
      PadReadFunc(psp,p_id);
      if ((psp->pad_direct[0] & 0x80) != 0) {
        psp->pad_direct[0] = psp->pad_direct[0] & 1;
        scePadSetActDirect(psp->port,psp->slot,psp->pad_direct);
        if ((*(ulong *)&psp->rpt_time & 0xffff0000) == 0) {
          psp->pad_direct[0] = '\0';
          psp->pad_direct[1] = '\0';
        }
        else {
          VibrateRequest((short)p_id,0,0);
        }
      }
    }
LAB_0017fd50:
    psp = psp + 1;
    p_id = p_id + 1;
    if (1 < p_id) {
      return 0;
    }
  } while( true );
}

void movVblankPad() {
  char cVar1;
  uchar *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  PAD_STRUCT *psp;
  int p_id;
  undefined auStack_a0 [16];
  
  p_id = 0;
  psp = pad;
  do {
    lVar3 = scePadGetState(psp->port,psp->slot);
    if (lVar3 == 0) {
      psp->step = '\0';
      psp->flags = psp->flags & 0xfe;
      PadClearCount(p_id);
    }
    else {
      psp->flags = psp->flags | 1;
    }
    if (lVar3 == 1) {
      psp->step = '\0';
    }
    cVar1 = psp->step;
    if (cVar1 == '\x03') {
      lVar3 = scePadInfoMode(psp->port,psp->slot,1,0);
      if (lVar3 != 0) {
        lVar4 = scePadInfoMode(psp->port,psp->slot,2,0);
        if (0 < lVar4) {
          lVar3 = lVar4;
        }
        if (lVar3 != 7) goto LAB_0017fcbc;
        psp->step = '\n';
      }
    }
    else if (cVar1 < '\x04') {
      if (cVar1 == '\x01') {
        lVar3 = scePadGetState(psp->port,psp->slot);
        if (lVar3 != 5) {
          lVar3 = scePadSetMainMode(psp->port,psp->slot,1,3);
          if (lVar3 != 1) goto LAB_0017fc0c;
          psp->step = '\x02';
        }
      }
      else if (cVar1 < '\x02') {
        if (cVar1 == '\0') {
          if (lVar3 == 6) {
            iVar6 = psp->port;
          }
          else {
            if (lVar3 != 2) goto LAB_0017fd50;
            iVar6 = psp->port;
          }
          lVar3 = scePadInfoMode(iVar6,psp->slot,1,0);
          if (lVar3 != 0) {
            lVar4 = scePadInfoMode(psp->port,psp->slot,2,0);
            if (0 < lVar4) {
              lVar3 = lVar4;
            }
            psp->id = '\0';
            if (((lVar3 != 4) && (lVar3 != 7)) ||
               (lVar3 = scePadInfoAct(psp->port,psp->slot,0xffffffffffffffff,0), lVar3 == 0))
            goto LAB_0017fcbc;
            auStack_a0[0] = 0;
            auStack_a0[1] = 1;
            iVar6 = 2;
            do {
              puVar5 = auStack_a0 + iVar6;
              iVar6 = iVar6 + 1;
              *puVar5 = 0xff;
            } while (iVar6 < 6);
            puVar2 = psp->pad_direct + 5;
            iVar6 = 5;
            do {
              *puVar2 = '\0';
              iVar6 = iVar6 + -1;
              puVar2 = puVar2 + -1;
            } while (-1 < iVar6);
            lVar3 = scePadSetActAlign(psp->port,psp->slot,auStack_a0);
            if (lVar3 == 1) {
              psp->step = '\x01';
            }
          }
        }
      }
      else {
        lVar3 = scePadGetReqState(psp->port,psp->slot);
        if (lVar3 == 1) {
LAB_0017fc0c:
          psp->step = '\0';
        }
        else if ((lVar3 < 2) && (lVar3 == 0)) {
          psp->step = '\x03';
        }
      }
    }
    else if (cVar1 == '\v') {
      lVar3 = scePadGetReqState(psp->port,psp->slot);
      if (lVar3 == 1) {
        psp->step = '\n';
      }
      if (lVar3 == 0) {
LAB_0017fcbc:
        psp->step = 'c';
      }
    }
    else if (cVar1 < '\f') {
      if (cVar1 == '\n') {
        lVar3 = scePadInfoPressMode(psp->port,psp->slot);
        if (lVar3 != 1) goto LAB_0017fcbc;
        lVar3 = scePadEnterPressMode(psp->port,psp->slot);
        if (lVar3 == 1) {
          psp->step = '\v';
        }
      }
    }
    else if ((cVar1 == 'c') && ((lVar3 == 6 || (lVar3 == 2)))) {
      PadReadFunc(psp,p_id);
      if ((psp->pad_direct[0] & 0x80) != 0) {
        psp->pad_direct[0] = psp->pad_direct[0] & 1;
        scePadSetActDirect(psp->port,psp->slot,psp->pad_direct);
        if ((*(ulong *)&psp->rpt_time & 0xffff0000) == 0) {
          psp->pad_direct[0] = '\0';
          psp->pad_direct[1] = '\0';
        }
        else {
          VibrateRequest((short)p_id,0,0);
        }
      }
    }
LAB_0017fd50:
    psp = psp + 1;
    p_id = p_id + 1;
    if (1 < p_id) {
      return;
    }
  } while( true );
}

void ReqLogoMovie() {
  uint uVar1;
  
  movie_wrk.play_event_sta = 7;
  play_mov_no = 0x25;
  vfunc();
  DrawAll2DMes_P2();
  FlushModel(0);
  FlushModel(1);
  ClearTextureCache();
  movie(*(char **)(&mpegName + play_mov_no * 4));
  SetIopCmdSm(1,1,0,0);
  SeSetMVol(opt_wrk.bgm_vol);
  SeSetSteMono(opt_wrk.sound_mode);
  sceGsResetGraph(1,1,2,1);
  sceGsSetDefDBuff(0x265eb0,0,0x280,0xe0,2,0x31,1);
  pdrawenv = &g_db.draw0;
  sceGsSyncPath(0,0);
  SgInit3D();
  sceGsSyncPath(0,0);
  AdpcmReturnFromMovie();
  EiMain();
  uVar1 = REG_DMAC_CTRL;
  REG_DMAC_CTRL = uVar1 & 0xfffffffd;
  MovieInitWrk();
  return;
}

int audioDecCreate(AudioDec *ad, u_char *buff, int buffSize, int iopBuffSize) {
  long lVar1;
  
  ad->state = 0;
  ad->hdrCount = 0;
  ad->put = 0;
  ad->count = 0;
  ad->totalBytes = 0;
  ad->totalBytesSent = 0;
  ad->iopLastPos = 0;
  ad->iopPausePos = 0;
  ad->data = buff;
  ad->size = buffSize;
  ad->iopBuffSize = iopBuffSize;
  lVar1 = sceSifAllocIopHeap(iopBuffSize);
  ad->iopBuff = (int)lVar1;
  if (-1 < lVar1) {
    lVar1 = sceSifAllocIopHeap(0x800);
    ad->iopZero = (int)lVar1;
    if (-1 < lVar1) {
      memset(_0_buf,0,0x800);
      sendToIOP(ad->iopZero,(uchar *)_0_buf,0x800);
      changeMasterVolume((((int)((uint)(ushort)opt_wrk.bgm_vol * 0x3fff) >> 0xc) *
                         (uint)(byte)(&mpeg_vol_rate)[play_mov_no]) / 100);
      return 1;
    }
  }
  return 0;
}

int audioDecDelete(AudioDec *ad) {
  sceSifFreeIopHeap(ad->iopBuff);
  sceSifFreeIopHeap(ad->iopZero);
  changeMasterVolume(0);
  return 1;
}

void audioDecPause(AudioDec *ad) {
	int ret;
	
  uint uVar1;
  
  ad->state = 3;
  changeInputVolume(0);
  uVar1 = sceSdRemote(1,0x80e0,0,2,0,0);
  ad->iopPausePos = (uVar1 & 0xffffff) - ad->iopBuff;
  sceSdRemote(1,0x80d0,0,0,ad->iopZero,0x4000,0x800);
  return;
}

void audioDecResume(AudioDec *ad) {
  int iVar1;
  int iVar2;
  
  changeInputVolume(0x7fff);
  iVar1 = ad->iopBuffSize;
  iVar2 = iVar1 + 0x3ff;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  sceSdRemote(1,0x80e0,0,0x13,ad->iopBuff,(iVar2 >> 10) << 10,ad->iopBuff + ad->iopPausePos);
  ad->state = 2;
  return;
}

void audioDecStart(AudioDec *ad) {
  int iVar1;
  int iVar2;
  
  changeInputVolume(0x7fff);
  iVar1 = ad->iopBuffSize;
  iVar2 = iVar1 + 0x3ff;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  sceSdRemote(1,0x80e0,0,0x13,ad->iopBuff,(iVar2 >> 10) << 10,ad->iopBuff + ad->iopPausePos);
  ad->state = 2;
  return;
}

void audioDecReset(AudioDec *ad) {
  audioDecPause(ad);
  ad->iopPausePos = 0;
  ad->state = 0;
  ad->hdrCount = 0;
  ad->put = 0;
  ad->count = 0;
  ad->totalBytes = 0;
  ad->totalBytesSent = 0;
  ad->iopLastPos = 0;
  return;
}

void audioDecBeginPut(AudioDec *ad, u_char **ptr0, int *len0, u_char **ptr1, int *len1) {
	int len;
	
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  
  if (ad->state == 0) {
    iVar1 = ad->hdrCount;
    *len0 = 0x28 - iVar1;
    *ptr0 = (uchar *)((ad->sshd).id + iVar1);
    puVar2 = ad->data;
    *len1 = ad->size;
    *ptr1 = puVar2;
    return;
  }
  iVar1 = ad->put;
  iVar4 = ad->size - ad->count;
  iVar3 = ad->size - iVar1;
  puVar2 = ad->data;
  if (iVar4 <= iVar3) {
    *len0 = iVar4;
    *len1 = 0;
    *ptr0 = puVar2 + iVar1;
    *ptr1 = (uchar *)0x0;
    return;
  }
  *len0 = iVar3;
  *ptr0 = puVar2 + iVar1;
  iVar1 = ad->put;
  iVar3 = ad->size;
  *ptr1 = ad->data;
  *len1 = iVar4 - (iVar3 - iVar1);
  return;
}

void audioDecEndPut(AudioDec *ad, int size) {
	int hdr_add;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (ad->state == 0) {
    uVar1 = 0x28 - ad->hdrCount;
    if ((uint)size <= uVar1) {
      uVar1 = size;
    }
    uVar3 = ad->hdrCount + uVar1;
    ad->hdrCount = uVar3;
    if (0x27 < uVar3) {
      ad->state = 1;
    }
    size = size - uVar1;
    iVar2 = ad->put;
  }
  else {
    iVar2 = ad->put;
  }
  if (ad->size == 0) {
    trap(7);
  }
  ad->count = ad->count + size;
  ad->totalBytes = ad->totalBytes + size;
  ad->put = (iVar2 + size) % ad->size;
  return;
}

int audioDecIsPreset(AudioDec *ad) {
  return ad->totalBytesSent < ad->iopBuffSize ^ 1;
}

int audioDecSendToIOP(AudioDec *ad) {
	int pd0;
	int pd1;
	int d0;
	int d1;
	u_char *ps0;
	int s0;
	int s1;
	int count_sent;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int pd0;
  int d0;
  int pd1;
  int d1;
  
  iVar5 = ad->state;
  iVar3 = 0;
  if (iVar5 == 1) {
    iVar5 = ad->iopBuffSize;
    if (iVar5 == 0) {
      trap(7);
    }
    d0 = iVar5 - ad->totalBytesSent;
    pd1 = 0;
    d1 = 0;
    pd0 = ad->iopBuff + ad->totalBytesSent % iVar5;
    iVar5 = ad->count;
  }
  else if (iVar5 < 2) {
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = ad->count;
  }
  else if (iVar5 == 2) {
    uVar2 = sceSdRemote(1,0x8100,0);
    iopGetArea(&pd0,(int *)((uint)&pd0 | 4),(int *)((uint)&pd0 | 8),(int *)((uint)&pd0 | 0xc),ad,
               (uVar2 & 0xffffff) - ad->iopBuff);
    iVar5 = ad->count;
  }
  else {
    if (iVar5 == 3) {
      return 0;
    }
    iVar5 = ad->count;
  }
  iVar6 = ad->size;
  iVar4 = iVar5 + 0x3ff;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  iVar1 = ((ad->put - iVar5) + iVar6) % iVar6;
  if (iVar6 == 0) {
    trap(7);
  }
  iVar4 = (iVar4 >> 10) * 0x400;
  iVar6 = iVar6 - iVar1;
  if (iVar4 < iVar6) {
    iVar6 = iVar4;
  }
  if (0x3ff < d0 + d1) {
    if (iVar6 + (iVar4 - iVar6) < 0x400) {
      iVar6 = ad->iopLastPos;
      goto LAB_001803dc;
    }
    iVar3 = sendToIOP2area(pd0,d0,pd1,d1,ad->data + iVar1,iVar6,ad->data,iVar4 - iVar6);
    iVar5 = ad->count;
  }
  iVar6 = ad->iopLastPos;
LAB_001803dc:
  ad->count = iVar5 - iVar3;
  ad->totalBytesSent = ad->totalBytesSent + iVar3;
  if (ad->iopBuffSize == 0) {
    trap(7);
  }
  ad->iopLastPos = (iVar6 + iVar3) % ad->iopBuffSize;
  return iVar3;
}

static void iopGetArea(int *pd0, int *d0, int *pd1, int *d1, AudioDec *ad, int pos) {
	int len;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ad->iopBuffSize;
  iVar2 = ad->iopLastPos;
  if (iVar1 == 0) {
    trap(7);
  }
  iVar4 = (((pos + iVar1) - iVar2) + -0x400) % iVar1;
  iVar3 = iVar4 + 0x3ff;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = (iVar3 >> 10) * 0x400;
  if (iVar4 <= iVar1 - iVar2) {
    *pd0 = ad->iopBuff + iVar2;
    *d0 = iVar4;
    *pd1 = 0;
    *d1 = 0;
    return;
  }
  *pd0 = ad->iopBuff + iVar2;
  *d0 = ad->iopBuffSize - ad->iopLastPos;
  *pd1 = ad->iopBuff;
  *d1 = iVar4 - (ad->iopBuffSize - ad->iopLastPos);
  return;
}

static int sendToIOP2area(int pd0, int d0, int pd1, int d1, u_char *ps0, int s0, u_char *ps1, int s1) {
	int diff;
	
  int size;
  int iVar1;
  
  iVar1 = s0 + s1;
  if (d0 + d1 < iVar1) {
    iVar1 = iVar1 - (d0 + d1);
    if (iVar1 < s1) {
      s1 = s1 - iVar1;
      iVar1 = s0 + s1;
    }
    else {
      s0 = s0 - (iVar1 - s1);
      s1 = 0;
      iVar1 = s0;
    }
  }
  size = d0 - s0;
  if (s0 < d0) {
    if (s1 < size) {
      sendToIOP(pd0,ps0,s0);
      sendToIOP(pd0 + s0,ps1,s1);
    }
    else {
      sendToIOP(pd0,ps0,s0);
      sendToIOP(pd0 + s0,ps1,size);
      sendToIOP(pd1,ps1 + (d0 - s0),s1 - size);
    }
  }
  else {
    sendToIOP(pd0,ps0,d0);
    sendToIOP(pd1,ps0 + d0,s0 - d0);
    sendToIOP((pd1 + s0) - d0,ps1,s1);
  }
  return iVar1;
}

static int sendToIOP(int dst, u_char *src, int size) {
	sceSifDmaData transData;
	int did;
	
  undefined8 uVar1;
  long lVar2;
  sceSifDmaData transData;
  
  if (size < 1) {
    size = 0;
  }
  else {
    transData.mode = 0;
    transData.data = (uint)src;
    transData.addr = dst;
    transData.size = size;
    FlushCache(0);
    uVar1 = sceSifSetDma(&transData,1);
    do {
      lVar2 = sceSifDmaStat(uVar1);
    } while (-1 < lVar2);
  }
  return size;
}

static void changeMasterVolume(u_int val) {
	int i;
	
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0x980;
  do {
    sceSdRemote(1,0x8010,uVar1,val);
    sceSdRemote(1,0x8010,uVar2 | 0xa80,val);
    uVar2 = uVar2 + 1;
    uVar1 = uVar2 | 0x980;
  } while ((int)uVar2 < 2);
  return;
}

static void changeInputVolume(u_int val) {
  sceSdRemote(1,0x8010,0xf80,val);
  sceSdRemote(1,0x8010,0x1080,val);
  return;
}

void clearGsMem(int r, int g, int b, int disp_width, int disp_height) {
	u_long giftag_clear[2];
	sceGifPacket packet;
	u_long128 packetBase[6];
	sceDmaChan *dmaGif;
	
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong giftag_clear [2];
  sceGifPacket packet;
  uint16 packetBase [6];
  
  uVar1 = DAT_0034e238;
  uVar2 = sceDmaGetChan(2);
  iVar4 = disp_height / 2 + 0x1f;
  iVar5 = disp_height + 0x3e;
  if (-1 < disp_height + 0x1f) {
    iVar5 = disp_height + 0x1f;
  }
  iVar3 = disp_height / 2 + 0x3e;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  db.giftag0._0_8_ = 0x1000000000008008;
  db.giftag0._8_8_ = 0xe;
  sceGsSetDefDrawEnv(0x3048d0,0,(short)disp_width,((iVar3 >> 5) + (iVar5 >> 5)) * 0x400000 >> 0x10,0
                     ,0);
  db.draw0.xyoffset1 = (sceGsXyoffset)0x0;
  FlushCache(0);
  sceGsSyncPath(0,0);
  sceGsPutDrawEnv(0x3048c0);
  sceGifPkInit(&packet,packetBase);
  sceGifPkReset(&packet);
  sceGifPkEnd(&packet,0,0,0);
  sceGifPkOpenGifTag(&packet,uVar1);
  sceGifPkAddGsAD(&packet,0,6);
  sceGifPkAddGsAD(&packet,1,(long)r | (long)g << 8 | (long)b << 0x10);
  sceGifPkAddGsAD(&packet,5,0);
  sceGifPkAddGsAD(&packet,5,0x96002800);
  sceGifPkCloseGifTag(&packet);
  sceGifPkTerminate(&packet);
  FlushCache(0);
  sceGsSyncPath(0,0);
  sceDmaSend(uVar2,packet.pBase);
  sceGsSyncPath(0,0);
  return;
}

void setImageTag(u_int *tags, void *image, int index, int image_w, int image_h) {
	int mbx;
	int mby;
	int i;
	int j;
	Rect tex;
	Rect poly;
	sceGifPacket packet;
	u_long giftag[2];
	u_long giftag_eop[2];
	u_long *tag;
	void *val;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Rect tex;
  Rect poly;
  sceGifPacket packet;
  ulong giftag [2];
  ulong giftag_eop [2];
  
  uVar2 = DAT_0034e248;
  uVar1 = DAT_0034e238;
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
  sceGifPkInit(&packet,(uint)tags & 0xfffffff | 0x20000000);
  sceGifPkReset(&packet);
  if (index == 0) {
    sceGifPkCnt(&packet,0,0,0);
    sceGifPkOpenGifTag(&packet,uVar2);
    sceGifPkAddGsAD(&packet,0x50,0xa140000000000);
    sceGifPkAddGsAD(&packet,0x52,0x1000000010);
    sceGifPkCloseGifTag(&packet);
    iVar4 = 0;
    if (0 < image_w >> 4) {
      do {
        iVar6 = 0;
        if (0 < image_h >> 4) {
          do {
            sceGifPkCnt(&packet,0,0,0);
            sceGifPkOpenGifTag(&packet,uVar2);
            sceGifPkAddGsAD(&packet,0x51,(long)(iVar4 << 4) << 0x20 | (long)(iVar6 << 4) << 0x30);
            iVar6 = iVar6 + 1;
            sceGifPkAddGsAD(&packet,0x53,0);
            sceGifPkCloseGifTag(&packet);
            puVar3 = (undefined8 *)sceGifPkReserve(&packet,4);
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
            *puVar3 = 0x800000000000040;
            uVar5 = (uint)image & 0xfffffff;
            puVar3[1] = 0;
            image = (void *)((int)image + 0x400);
            sceGifPkRef(&packet,uVar5,0x40,0,0,0);
          } while (iVar6 < image_h >> 4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < image_w >> 4);
    }
  }
  sceGifPkEnd(&packet,0,0,0);
  sceGifPkOpenGifTag(&packet,uVar1);
  sceGifPkAddGsAD(&packet,0x3f,0);
  sceGifPkAddGsAD(&packet,0x14,0x60);
  sceGifPkAddGsAD(&packet,6,0xaa8029400);
  sceGifPkAddGsAD(&packet,0,0x116);
  sceGifPkAddGsAD(&packet,3,0x80008);
  sceGifPkAddGsAD(&packet,5,0x79006c00);
  sceGifPkAddGsAD(&packet,3,(long)(image_w * 0x10 + 8) | (long)(image_h * 0x10 + 8) << 0x10);
  sceGifPkAddGsAD(&packet,5,0x87009400);
  sceGifPkCloseGifTag(&packet);
  sceGifPkTerminate(&packet);
  return;
}

int vblankHandlerM(int val) {
	sceDmaChan *dmaGif_loadimage;
	VoTag *tag;
	
  int iVar1;
  ulong uVar2;
  VoTag *pVVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (isCountVblank != 0) {
    uVar5 = sceDmaGetChan(2);
    vblankCount = vblankCount + 1;
    uVar2 = REG_GS_CSR;
    oddeven = (uint)(uVar2 >> 0xd) & 1;
    handler_error = sceGsSyncPath(1,0);
    if (handler_error == 0) {
      pVVar3 = voBufGetTag(&voBuf);
      if (pVVar3 == (VoTag *)0x0) {
        SYNC(0);
        EI();
        frd = frd + 1;
        return 0;
      }
      if ((oddeven & 1U) == 0) {
                    /* inlined from defs.h */
        uVar4 = 0x3048d0;
      }
      else {
                    /* inlined from defs.h */
                    /* end of inlined section */
        uVar4 = 0x3049c0;
      }
                    /* end of inlined section */
      sceGsSetHalfOffset(uVar4 | 0x20000000,0x800,0x800,(ushort)oddeven ^ 1);
      if ((oddeven == 0) && (pVVar3->status == 2)) {
        sceGsSwapDBuff(0x304870,0);
        sceGsSyncPath(0,0);
        sceDmaSend(uVar5,pVVar3->v);
        pVVar3->status = 1;
      }
      else if ((oddeven == 1) && (iVar1 = pVVar3->status, iVar1 == 1)) {
        sceGsSwapDBuff(0x304870,1);
        sceGsSyncPath(0,0);
        sceDmaSend(uVar5,pVVar3->v[1]);
        pVVar3->status = 0;
        isFrameEnd = iVar1;
      }
    }
  }
  SYNC(0);
  EI();
  return 0;
}

int handler_endimage(int val) {
  if (isFrameEnd != 0) {
    voBufDecCount(&voBuf);
    isFrameEnd = 0;
  }
  SYNC(0);
  EI();
  return 0;
}

void startDisplay(int waitEven) {
  int iVar1;
  
  do {
    iVar1 = sceGsSyncV(0);
  } while (iVar1 == waitEven);
  isCountVblank = 1;
  frd = 0;
  vblankCount = 0;
  return;
}

void endDisplay() {
  isCountVblank = 0;
  frd = 0;
  return;
}

int videoCallback(sceMpeg *mp, sceMpegCbDataStr *str, void *data) {
	u_char *ps0;
	int s0;
	int s1;
	u_char *pd0;
	u_char *pd1;
	int d0;
	int d1;
	int len;
	void *val;
	void *val;
	
  uchar *ps0;
  uint uVar1;
  int len;
  int iVar2;
  uint s0;
  uchar *pd0;
  int d0;
  uchar *pd1;
  int d1;
  
  ps0 = str->data;
  uVar1 = str->len;
  s0 = (int)data + (*(int *)((int)data + 0x50008) - (int)ps0);
  if (uVar1 < s0) {
    s0 = uVar1;
  }
  videoDecBeginPut(&videoDec,&pd0,(int *)((uint)&pd0 | 4),(uchar **)((uint)&pd0 | 8),
                   (int *)((uint)&pd0 | 0xc));
                    /* inlined from defs.h */
                    /* end of inlined section */
  len = copy2area((uchar *)((uint)pd0 & 0xfffffff | 0x20000000),d0,
                  (uchar *)((uint)pd1 & 0xfffffff | 0x20000000),d1,ps0,s0,(uchar *)data,uVar1 - s0);
  if ((0 < len) && (iVar2 = videoDecPutTs(&videoDec,str->pts,str->dts,pd0,len), iVar2 == 0)) {
    ErrMessage("pts buffer overflow\n");
  }
  videoDecEndPut(&videoDec,len);
  return (int)(0 < len);
}

int pcmCallback(sceMpeg *mp, sceMpegCbDataStr *str, void *data) {
	ReadBuf *rb;
	u_char *ps0;
	int s0;
	int s1;
	u_char *pd0;
	u_char *pd1;
	int d0;
	int d1;
	int len;
	int ret;
	
  uchar *puVar1;
  int s0;
  int iVar2;
  uchar *ps0;
  uchar *pd0;
  int d0;
  uchar *pd1;
  int d1;
  
  iVar2 = str->len - 4;
  puVar1 = (uchar *)((int)data + *(int *)((int)data + 0x50008));
  ps0 = str->data + 4;
  if (puVar1 <= ps0) {
    ps0 = ps0 + -*(int *)((int)data + 0x50008);
  }
  s0 = (int)puVar1 - (int)ps0;
  if (iVar2 < s0) {
    s0 = iVar2;
  }
  audioDecBeginPut(&audioDec,&pd0,(int *)((uint)&pd0 | 4),(uchar **)((uint)&pd0 | 8),
                   (int *)((uint)&pd0 | 0xc));
  iVar2 = copy2area(pd0,d0,pd1,d1,ps0,s0,(uchar *)data,iVar2 - s0);
  audioDecEndPut(&audioDec,iVar2);
  return (int)(0 < iVar2);
}

static int copy2area(u_char *pd0, int d0, u_char *pd1, int d1, u_char *ps0, int s0, u_char *ps1, int s1) {
  int iVar1;
  size_t __n;
  size_t __n_00;
  int iVar2;
  int iVar3;
  
  __n_00 = (size_t)s1;
  __n = (size_t)s0;
  iVar3 = s0 + s1;
  iVar1 = 0;
  if (iVar3 <= d0 + d1) {
    iVar2 = d0 - s0;
    iVar1 = iVar3;
    if ((long)__n < (long)d0) {
      if ((long)__n_00 < (long)iVar2) {
        memcpy(pd0,ps0,__n);
        memcpy(pd0 + s0,ps1,__n_00);
      }
      else {
        memcpy(pd0,ps0,__n);
        memcpy(pd0 + s0,ps1,(long)iVar2);
        memcpy(pd1,ps1 + (d0 - s0),(long)(s1 - iVar2));
      }
    }
    else {
      memcpy(pd0,ps0,(long)d0);
      memcpy(pd1,ps0 + d0,(long)(s0 - d0));
      memcpy(pd1 + (s0 - d0),ps1,__n_00);
    }
  }
  return iVar1;
}

void readBufCreate(ReadBuf *b) {
  b->size = 0x50000;
  b->count = 0;
  b->put = 0;
  return;
}

void readBufDelete(ReadBuf *b) {
  return;
}

int readBufBeginPut(ReadBuf *b, u_char **ptr) {
	int size;
	
  int iVar1;
  
  iVar1 = b->size - b->count;
  if (iVar1 != 0) {
    *ptr = b->data + b->put;
  }
  return iVar1;
}

int readBufEndPut(ReadBuf *b, int size) {
	int size_ok;
	
  int iVar1;
  int iVar2;
  
  iVar1 = b->size;
  if (iVar1 == 0) {
    trap(7);
  }
  iVar2 = iVar1 - b->count;
  if (size < iVar2) {
    iVar2 = size;
  }
  b->count = b->count + iVar2;
  b->put = (b->put + iVar2) % iVar1;
  return iVar2;
}

int readBufBeginGet(ReadBuf *b, u_char **ptr) {
  int iVar1;
  int iVar2;
  
  iVar1 = b->count;
  if (iVar1 != 0) {
    iVar2 = b->size;
    if (iVar2 == 0) {
      trap(7);
    }
    *ptr = b->data + ((b->put - iVar1) + iVar2) % iVar2;
  }
  return iVar1;
}

int readBufEndGet(ReadBuf *b, int size) {
	int size_ok;
	
  int iVar1;
  int iVar2;
  
  iVar1 = b->count;
  iVar2 = iVar1;
  if (size < iVar1) {
    iVar2 = size;
  }
  b->count = iVar1 - iVar2;
  return iVar2;
}

int strFileOpen(StrFile *file, char *filename) {
	char *body;
	char fn[256];
	char devname[64];
	int dlen;
	int i;
	int len;
	char *tail;
	int __x;
	sceCdRMode mode;
	
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  uchar *puVar6;
  size_t sVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  long lVar11;
  char fn [256];
  char devname [64];
  sceCdRMode mode;
  
  pcVar4 = index(filename,0x3a);
  uVar3 = DAT_00356e7c;
  uVar2 = DAT_00356e78;
  if (pcVar4 == (char *)0x0) {
    file->isOnCD = 0;
    devname._0_4_ = uVar2;
    devname._4_2_ = uVar3;
    sprintf(fn,s__s__s_00356e70);
    iVar5 = file->isOnCD;
  }
  else {
    strncpy(devname,filename,(long)((int)pcVar4 - (int)filename));
    devname[(int)pcVar4 - (int)filename] = '\0';
    iVar5 = strcmp(devname,s_cdrom0_00356e50);
    if (iVar5 == 0) {
      sVar7 = strlen(pcVar4 + 1);
      lVar11 = 0;
      file->isOnCD = 1;
      if (0 < (long)sVar7) {
        do {
          pcVar10 = pcVar4 + 1 + (int)lVar11;
          cVar9 = *pcVar10;
          if (*pcVar10 == '/') {
            cVar9 = '\\';
            *pcVar10 = '\\';
          }
          lVar11 = (long)((int)lVar11 + 1);
          cVar8 = cVar9 + -0x20;
          if ((""[cVar9 + 1] & 2U) == 0) {
            cVar8 = cVar9;
          }
          *pcVar10 = cVar8;
        } while (lVar11 < (long)sVar7);
      }
      index(filename,0x3b);
      pcVar4 = &DAT_00356e68;
    }
    else {
      file->isOnCD = 0;
      pcVar4 = s__s__s_00356e70;
    }
    sprintf(fn,pcVar4);
    iVar5 = file->isOnCD;
  }
  if (iVar5 == 0) {
    lVar11 = sceOpen(fn,1);
    file->fd = (int)lVar11;
    if (-1 < lVar11) {
      lVar11 = sceLseek(lVar11,0,2);
      file->size = (int)lVar11;
      if ((-1 < lVar11) && (lVar11 = sceLseek(file->fd,0,0), -1 < lVar11)) {
        return 1;
      }
      sceClose(file->fd);
    }
  }
  else {
    if (isStrFileInit == 0) {
      sceCdDiskReady(0);
      isStrFileInit = 1;
    }
    puVar6 = (uchar *)sceSifAllocIopHeap(0x28010);
    file->iopBuf = puVar6;
    sceCdStInit(0x50,5,(uint)(puVar6 + 0xf) & 0xfffffff0);
    lVar11 = sceCdSearchFile(&file->fp,fn);
    if (lVar11 != 0) {
      uVar1 = (file->fp).lsn;
      file->size = (file->fp).size;
      mode.trycount = '\0';
      mode.spindlctrl = '\0';
      mode.datapattern = '\0';
      sceCdStStart(uVar1,&mode);
      return 1;
    }
  }
  return 0;
}

int strFileClose(StrFile *file) {
  if (file->isOnCD == 0) {
    sceClose(file->fd);
  }
  else {
    sceCdStStop();
    sceSifFreeIopHeap(file->iopBuf);
  }
  return 1;
}

int strFileRead(StrFile *file, void *buff, int size) {
	int count;
	u_int err;
	
  int iVar1;
  uint err;
  
  if (file->isOnCD == 0) {
    iVar1 = sceRead(file->fd,buff,size,&err);
  }
  else {
    iVar1 = sceCdStRead(size >> 0xb,buff,1);
    iVar1 = iVar1 << 0xb;
  }
  return iVar1;
}

int getFIFOindex(ViBuf *f, void *addr) {
	void *val;
	
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
  if (addr != (void *)((uint)(f->tag + f->n + 1) & 0xfffffff)) {
    return (uint)((int)addr - (int)f->data) >> 0xb;
  }
  return 0;
}

void setD3_CHCR(u_int val) {
  uint uVar1;
  
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_3_IPU_FROM_CHCR = val;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  EIntr();
  return;
}

void setD4_CHCR(u_int val) {
  uint uVar1;
  
  DIntr();
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 | 0x10000;
  REG_DMAC_4_IPU_TO_CHCR = val;
  uVar1 = REG_DMAC_ENABLER;
  REG_DMAC_ENABLEW = uVar1 & 0xfffeffff;
  EIntr();
  return;
}

void scTag2(QWORD *q, void *addr, u_int id, u_int qwc) {
  q->l[0] = (long)(int)addr << 0x20 | (ulong)((long)(int)id << 0x20) >> 4 |
            (long)(int)qwc & 0xffffffffU;
  return;
}

int viBufCreate(ViBuf *f, u_long128 *data, u_long128 *tag, int size, TimeStamp *ts, int n_ts) {
	SemaParam param;
	
  int iVar1;
  SemaParam param;
  
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
  f->data = data;
  f->tag = (uint16 *)((uint)tag & 0xfffffff | 0x20000000);
  f->buffSize = size << 0xb;
  f->ts = ts;
  f->n_ts = n_ts;
  param.maxCount = 1;
  f->n = size;
  param.initCount = 1;
  iVar1 = CreateSema(&param);
  f->sema = iVar1;
  viBufReset(f);
  f->totalBytes = 0;
  return 1;
}

int viBufReset(ViBuf *f) {
	int i;
	void *val;
	void *val;
	void *val;
	
  TimeStamp *pTVar1;
  TimeStamp *pTVar2;
  uint16 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  f->isActive = 1;
  f->dmaStart = 0;
  f->dmaN = 0;
  f->readBytes = 0;
  f->count_ts = 0;
  f->wt_ts = 0;
  if (f->n_ts < 1) {
    puVar3 = f->tag;
    iVar4 = f->n;
  }
  else {
    pTVar1 = f->ts;
    puVar3 = f->tag;
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      pTVar2 = pTVar1 + iVar4;
      pTVar2->len = 0;
      pTVar2->pos = 0;
      pTVar2->dts = -1;
      iVar6 = f->n_ts;
      pTVar2->pts = -1;
      iVar4 = iVar5;
    } while (iVar5 < iVar6);
    iVar4 = f->n;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    do {
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
      scTag2((QWORD *)(puVar3 + iVar6),(void *)((uint)(f->data + iVar6 * 0x80) & 0xfffffff),3,0x80);
      iVar6 = iVar6 + 1;
      puVar3 = f->tag;
    } while (iVar6 < f->n);
  }
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
  scTag2((QWORD *)(puVar3 + iVar6),(void *)((uint)puVar3 & 0xfffffff),2,0);
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
  REG_DMAC_4_IPU_TO_QWC = 0;
                    /* inlined from defs.h */
                    /* end of inlined section */
  REG_DMAC_4_IPU_TO_MADR = (uint)f->data & 0xfffffff;
                    /* inlined from defs.h */
                    /* end of inlined section */
  REG_DMAC_4_IPU_TO_TADR = (uint)f->tag & 0xfffffff;
  setD4_CHCR(5);
  return 1;
}

void viBufBeginPut(ViBuf *f, u_char **ptr0, int *len0, u_char **ptr1, int *len1) {
	int en;
	
  int iVar1;
  int iVar2;
  uint16 *puVar3;
  int iVar4;
  
  WaitSema(f->sema);
  iVar2 = f->buffSize;
  if (iVar2 == 0) {
    trap(7);
  }
  iVar1 = ((f->dmaStart + f->dmaN) * 0x800 + f->readBytes) % iVar2;
  iVar4 = (f->n - (f->dmaN + 2)) * 0x800 - f->readBytes;
  if (iVar2 - iVar1 < iVar4) {
    *len0 = iVar2 - iVar1;
    puVar3 = f->data;
    iVar2 = f->buffSize;
    *ptr0 = (uchar *)((int)puVar3 + iVar1);
    *ptr1 = (uchar *)puVar3;
    *len1 = iVar4 - (iVar2 - iVar1);
  }
  else {
    puVar3 = f->data;
    *len0 = iVar4;
    *len1 = 0;
    *ptr0 = (uchar *)((int)puVar3 + iVar1);
    *ptr1 = (uchar *)0x0;
  }
  SignalSema(f->sema);
  return;
}

void viBufEndPut(ViBuf *f, int size) {
  WaitSema(f->sema);
  f->readBytes = f->readBytes + size;
  f->totalBytes = (long)size + f->totalBytes;
  SignalSema(f->sema);
  return;
}

int viBufAddDMA(ViBuf *f) {
	int i;
	int index;
	u_int d4chcr;
	int isNewData;
	int read_n;
	
  int iVar1;
  void *addr;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint id;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  bVar2 = false;
  WaitSema(f->sema);
  if (f->isActive == 0) {
    ErrMessage("DMA ADD not active\n");
    iVar5 = 0;
  }
  else {
    setD4_CHCR(5);
    uVar7 = REG_DMAC_4_IPU_TO_CHCR;
    addr = (void *)REG_DMAC_4_IPU_TO_MADR;
    iVar3 = getFIFOindex(f,addr);
    iVar5 = f->n;
    if (iVar5 == 0) {
      trap(7);
    }
    iVar3 = ((iVar3 + iVar5) - f->dmaStart) % iVar5;
    iVar4 = f->dmaN - iVar3;
    iVar3 = (f->dmaStart + iVar3) % iVar5;
    f->dmaN = iVar4;
    iVar4 = iVar3 + iVar4;
    f->dmaStart = iVar3;
    iVar3 = iVar4 % iVar5;
    iVar1 = f->readBytes;
    iVar6 = iVar1 + 0x7ff;
    if (-1 < iVar1) {
      iVar6 = iVar1;
    }
    iVar6 = iVar6 >> 0xb;
    f->readBytes = iVar1 + iVar6 * -0x800;
    if (0 < iVar6) {
      if (iVar5 == 0) {
        trap(7);
      }
      iVar5 = (iVar4 + iVar5 + -1) % iVar5;
      bVar2 = true;
      scTag2((QWORD *)(f->tag + iVar5),f->data + iVar5 * 0x80,3,0x80);
    }
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        id = 3;
        if (iVar5 == iVar6 + -1) {
          id = 0;
        }
        scTag2((QWORD *)(f->tag + iVar3),f->data + iVar3 * 0x80,id,0x80);
        iVar5 = iVar5 + 1;
        iVar3 = (iVar3 + 1) % f->n;
        if (f->n == 0) {
          trap(7);
        }
      } while (iVar5 < iVar6);
    }
    iVar6 = f->dmaN + iVar6;
    f->dmaN = iVar6;
    if (iVar6 != 0) {
      if (bVar2) {
        uVar7 = uVar7 & 0xfffffff | 0x30000000;
      }
      setD4_CHCR(uVar7 | 0x100);
    }
    SignalSema(f->sema);
    iVar5 = 1;
  }
  return iVar5;
}

int viBufStopDMA(ViBuf *f) {
  int iVar1;
  uint uVar2;
  
  WaitSema(f->sema);
  f->isActive = 0;
  setD4_CHCR(5);
  uVar2 = REG_DMAC_4_IPU_TO_MADR;
  (f->env).d4madr = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_TADR;
  (f->env).d4tadr = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_QWC;
  (f->env).d4qwc = uVar2;
  uVar2 = REG_DMAC_4_IPU_TO_CHCR;
  (f->env).d4chcr = uVar2;
  do {
    uVar2 = REG_IPU_CTRL;
  } while ((uVar2 & 0xf0) != 0);
  setD3_CHCR(0);
  uVar2 = REG_DMAC_3_IPU_FROM_MADR;
  (f->env).d3madr = uVar2;
  iVar1 = f->sema;
  uVar2 = REG_DMAC_3_IPU_FROM_QWC;
  (f->env).d3qwc = uVar2;
  uVar2 = REG_DMAC_3_IPU_FROM_CHCR;
  (f->env).d3chcr = uVar2;
  uVar2 = REG_IPU_BP;
  (f->env).ipubp = uVar2;
  uVar2 = REG_IPU_CTRL;
  (f->env).ipuctrl = uVar2;
  SignalSema(iVar1);
  return 1;
}

int viBufRestartDMA(ViBuf *f) {
	int bp;
	int fp;
	int ifc;
	u_int d4madr_next;
	u_int d4qwc_next;
	u_int d4tadr_next;
	u_int d4chcr_next;
	int index;
	int index_next;
	int id;
	void *val;
	void *val;
	
  int iVar1;
  uint16 *puVar2;
  uint16 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint16 *addr;
  uint val;
  uint uVar10;
  uint uVar11;
  
  uVar7 = (f->env).ipubp;
  iVar5 = (uVar7 >> 0x10 & 3) + (uVar7 >> 8 & 0xf);
  addr = (uint16 *)((f->env).d4madr + iVar5 * -0x10);
  uVar11 = (f->env).d4qwc + iVar5;
  val = (f->env).d4chcr | 0x100;
  uVar10 = (f->env).d4tadr;
  WaitSema(f->sema);
  puVar2 = f->data;
  if (addr < puVar2) {
    iVar5 = f->n;
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
    puVar3 = (uint16 *)(f->env).d4madr;
    uVar11 = (uint)((int)puVar2 - (int)addr) >> 4;
                    /* inlined from defs.h */
    uVar10 = (uint)f->tag & 0xfffffff;
                    /* end of inlined section */
    addr = addr + iVar5 * 0x80;
    iVar6 = 0;
    if ((puVar3 != puVar2) && (iVar6 = 3, puVar3 == puVar2 + iVar5 * 0x80)) {
      iVar6 = 0;
    }
    if (iVar5 == 0) {
      trap(7);
    }
    iVar1 = (iVar5 - f->dmaStart) % iVar5;
    val = (f->env).d4chcr & 0xfffffff | iVar6 << 0x1c | 0x100;
    if (iVar1 < 0) {
      iVar6 = f->dmaN;
    }
    else {
      if (iVar5 == 0) {
        trap(7);
      }
      iVar6 = f->dmaN;
      if (iVar1 < iVar6) {
        uVar8 = (f->env).d3madr;
        goto LAB_00181f98;
      }
    }
    f->dmaStart = iVar5 + -1;
    f->dmaN = iVar6 + 1;
  }
  else {
    iVar5 = getFIFOindex(f,(void *)(f->env).d4madr);
    iVar6 = getFIFOindex(f,addr);
    if (iVar5 != iVar6) {
                    /* end of inlined section */
      iVar1 = f->n;
                    /* end of inlined section */
      puVar2 = f->data;
      iVar9 = 3;
      if (iVar1 << 0xb == 0) {
        trap(7);
      }
      iVar4 = f->dmaN;
                    /* inlined from defs.h */
                    /* end of inlined section */
                    /* inlined from defs.h */
                    /* end of inlined section */
      uVar11 = (uint)((int)puVar2 + (iVar5 * 0x800 - (int)addr)) >> 4;
                    /* inlined from defs.h */
      uVar10 = (uint)(f->tag + iVar5) & 0xfffffff;
                    /* end of inlined section */
      iVar5 = ((iVar6 + iVar1) - f->dmaStart) % iVar1;
      if ((uint16 *)((int)puVar2 + (int)((f->env).d4madr - (int)puVar2) % (iVar1 << 0xb)) ==
          puVar2 + ((f->dmaStart + iVar4) % iVar1) * 0x80) {
        iVar9 = 0;
      }
      val = (f->env).d4chcr & 0xfffffff | iVar9 << 0x1c | 0x100;
      if (-1 < iVar5) {
        if (iVar1 == 0) {
          trap(7);
        }
        if (iVar5 < iVar4) {
          uVar8 = (f->env).d3madr;
          goto LAB_00181f98;
        }
      }
      f->dmaStart = iVar6;
      f->dmaN = iVar4 + 1;
    }
  }
  uVar8 = (f->env).d3madr;
LAB_00181f98:
  if (uVar8 == 0) {
    iVar5 = f->dmaN;
  }
  else {
    if ((f->env).d3qwc != 0) {
      REG_DMAC_3_IPU_FROM_MADR = uVar8;
      REG_DMAC_3_IPU_FROM_QWC = (f->env).d3qwc;
      setD3_CHCR((f->env).d3chcr | 0x100);
    }
    iVar5 = f->dmaN;
  }
  if (iVar5 != 0) {
    do {
      iVar5 = REG_IPU_CTRL;
    } while (iVar5 < 0);
    REG_IPU_CMD = uVar7 & 0x7f;
    do {
      iVar5 = REG_IPU_CTRL;
    } while (iVar5 < 0);
  }
  REG_DMAC_4_IPU_TO_MADR = addr;
  REG_DMAC_4_IPU_TO_TADR = uVar10;
  REG_DMAC_4_IPU_TO_QWC = uVar11;
  if (f->dmaN == 0) {
    uVar7 = (f->env).ipuctrl;
  }
  else {
    setD4_CHCR(val);
    uVar7 = (f->env).ipuctrl;
  }
  REG_IPU_CTRL = uVar7;
  f->isActive = 1;
  SignalSema(f->sema);
  return 1;
}

int viBufDelete(ViBuf *f) {
  setD4_CHCR(5);
  REG_DMAC_4_IPU_TO_QWC = 0;
  REG_DMAC_4_IPU_TO_MADR = 0;
  REG_DMAC_4_IPU_TO_TADR = 0;
  DeleteSema(f->sema);
  return 1;
}

int viBufIsActive(ViBuf *f) {
	int ret;
	
  int iVar1;
  
  WaitSema(f->sema);
  iVar1 = f->isActive;
  SignalSema(f->sema);
  return iVar1;
}

int viBufCount(ViBuf *f) {
	int ret;
	
  int iVar1;
  int iVar2;
  
  WaitSema(f->sema);
  iVar1 = f->dmaN;
  iVar2 = f->readBytes;
  SignalSema(f->sema);
  return iVar1 * 0x800 + iVar2;
}

void viBufFlush(ViBuf *f) {
  int iVar1;
  int iVar2;
  
  WaitSema(f->sema);
  iVar2 = f->readBytes + 0x7ff;
  iVar1 = f->readBytes + 0xffe;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  f->readBytes = (iVar1 >> 0xb) << 0xb;
  SignalSema(f->sema);
  return;
}

int viBufModifyPts(ViBuf *f, TimeStamp *new_ts) {
	TimeStamp *ts;
	int rd;
	int datasize;
	int loop;
	int tgt;
	int pos;
	int size;
	int len;
	
  TimeStamp *pTVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TimeStamp *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar3 = true;
  iVar4 = f->n_ts;
  if (iVar4 == 0) {
    trap(7);
  }
  iVar9 = ((f->wt_ts - f->count_ts) + iVar4) % iVar4;
  iVar8 = f->n * 0x800;
  if (0 < f->count_ts) {
    pTVar1 = f->ts;
    pTVar6 = pTVar1 + iVar9;
    iVar5 = pTVar6->len;
    if ((iVar5 != 0) && (iVar7 = new_ts->len, iVar7 != 0)) {
      while( true ) {
        iVar2 = pTVar6->pos;
        if (iVar8 == 0) {
          trap(7);
        }
        if (((iVar2 + iVar8) - new_ts->pos) % iVar8 < iVar7) {
          if (iVar8 == 0) {
            trap(7);
          }
          iVar4 = (new_ts->pos + iVar7) - iVar2;
          if (iVar5 < iVar4) {
            iVar4 = iVar5;
          }
          pTVar6->len = iVar5 - iVar4;
          pTVar6->pos = (iVar2 + iVar4) % iVar8;
          if (iVar5 - iVar4 == 0) {
            if (pTVar6->pts < 0) {
              iVar5 = f->count_ts;
            }
            else {
              pTVar6->len = 0;
              pTVar6->pts = -1;
              pTVar6->dts = -1;
              pTVar6->pos = 0;
              iVar5 = f->count_ts;
            }
            iVar4 = f->n_ts;
            iVar5 = iVar5 + -1;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            f->count_ts = iVar5;
          }
          else {
            iVar4 = f->n_ts;
          }
        }
        else {
          bVar3 = false;
        }
        if (iVar4 == 0) {
          trap(7);
        }
        iVar9 = (iVar9 + 1) % iVar4;
        if (!bVar3) break;
        pTVar6 = pTVar1 + iVar9;
        iVar5 = pTVar6->len;
        if (iVar5 == 0) {
          return 0;
        }
        iVar7 = new_ts->len;
        if (iVar7 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

int viBufPutTs(ViBuf *f, TimeStamp *ts) {
	int ret;
	
  TimeStamp *pTVar1;
  int iVar2;
  TimeStamp *pTVar3;
  long lVar4;
  
  iVar2 = 0;
  WaitSema(f->sema);
  if (f->count_ts < f->n_ts) {
    viBufModifyPts(f,ts);
    lVar4 = ts->pts;
    if (lVar4 < 0) {
      iVar2 = 1;
      if (ts->dts < 0) goto LAB_00182420;
      iVar2 = f->wt_ts;
    }
    else {
      iVar2 = f->wt_ts;
    }
    pTVar1 = f->ts;
    pTVar3 = pTVar1 + iVar2;
    pTVar3->pos = ts->pos;
    pTVar3->pts = lVar4;
    lVar4 = ts->dts;
    pTVar1[f->wt_ts].len = ts->len;
    pTVar3->dts = lVar4;
    f->count_ts = f->count_ts + 1;
    if (f->n_ts == 0) {
      trap(7);
    }
    f->wt_ts = (f->wt_ts + 1) % f->n_ts;
    iVar2 = 1;
  }
LAB_00182420:
  SignalSema(f->sema);
  return iVar2;
}

int viBufGetTs(ViBuf *f, TimeStamp *ts) {
	u_int d4madr;
	u_int ipubp;
	int bp;
	int fp;
	int ifc;
	u_int d4madr_next;
	int datasize;
	int isEnd;
	int tscount;
	int wt;
	int i;
	int pos;
	int len;
	int size;
	
  uint uVar1;
  uint16 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TimeStamp *pTVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  TimeStamp *pTVar12;
  int iVar13;
  int iVar14;
  
  bVar10 = false;
  iVar9 = REG_DMAC_4_IPU_TO_MADR;
  uVar8 = REG_IPU_BP;
  uVar1 = (f->env).ipubp;
  iVar14 = f->n * 0x800;
  WaitSema(f->sema);
  ts->dts = -1;
  ts->pts = -1;
  puVar2 = f->data;
  if (iVar14 == 0) {
    trap(7);
  }
  iVar3 = f->count_ts;
  iVar13 = 0;
  iVar4 = f->wt_ts;
  if (0 < iVar3) {
    iVar5 = f->n_ts;
    pTVar6 = f->ts;
    do {
      if (iVar5 == 0) {
        trap(7);
      }
      pTVar12 = pTVar6 + ((iVar4 - iVar3) + iVar5 + iVar13) % iVar5;
      if ((((int)((iVar9 + ((uVar8 >> 0x10 & 3) + (uVar8 >> 8 & 0xf)) * -0x10 +
                   ((int)(uVar1 & 0x7f) >> 3) + iVar14) - (int)puVar2) % iVar14 + iVar14) -
          pTVar12->pos) % iVar14 < pTVar12->len) {
        bVar10 = true;
        iVar7 = f->count_ts;
        ts->pts = pTVar12->pts;
        iVar11 = iVar7;
        if (1 < iVar7) {
          iVar11 = 1;
        }
        ts->dts = pTVar12->dts;
        pTVar12->dts = -1;
        f->count_ts = iVar7 - iVar11;
        pTVar12->pts = -1;
      }
      iVar13 = iVar13 + 1;
    } while ((iVar13 < iVar3) && (!bVar10));
  }
  SignalSema(f->sema);
  return 1;
}

int videoDecCreate(VideoDec *vd, u_char *mpegWork, int mpegWorkSize, u_long128 *data, u_long128 *tag, int tagSize, TimeStamp *pts, int n_pts) {
  sceMpegCreate(vd,mpegWork,mpegWorkSize);
  sceMpegAddCallback(vd,0,0x182b60,0);
  sceMpegAddCallback(vd,1,0x182b68,0);
  sceMpegAddCallback(vd,2,0x182b98,0);
  sceMpegAddCallback(vd,3,0x182bc0,0);
  sceMpegAddCallback(vd,5,0x182be8,0);
  videoDecReset(vd);
  viBufCreate(&vd->vibuf,data,tag,tagSize,pts,n_pts);
  return 1;
}

void videoDecSetDecodeMode(VideoDec *vd, int ni, int np, int nb) {
  void *pvVar1;
  
  pvVar1 = (vd->mpeg).sys;
  *(int *)((int)pvVar1 + 0x9c) = nb;
  *(int *)((int)pvVar1 + 0x94) = ni;
  *(int *)((int)pvVar1 + 0x98) = np;
  return;
}

int videoDecSetStream(VideoDec *vd, int strType, int ch, sceMpegCallback cb, void *data) {
  sceMpegAddStrCallback(vd,strType,ch,cb,data);
  return 1;
}

void videoDecBeginPut(VideoDec *vd, u_char **ptr0, int *len0, u_char **ptr1, int *len1) {
  int iVar1;
  int iVar2;
  int iVar3;
  uint16 *puVar4;
  int iVar5;
  
  WaitSema((vd->vibuf).sema);
  iVar2 = (vd->vibuf).dmaN;
  iVar5 = (vd->vibuf).readBytes;
  iVar3 = (vd->vibuf).buffSize;
  if (iVar3 == 0) {
    trap(7);
  }
  iVar1 = (((vd->vibuf).dmaStart + iVar2) * 0x800 + iVar5) % iVar3;
  iVar5 = ((vd->vibuf).n - (iVar2 + 2)) * 0x800 - iVar5;
  if (iVar3 - iVar1 < iVar5) {
    *len0 = iVar3 - iVar1;
    puVar4 = (vd->vibuf).data;
    iVar2 = (vd->vibuf).buffSize;
    *ptr0 = (uchar *)((int)puVar4 + iVar1);
    *ptr1 = (uchar *)puVar4;
    *len1 = iVar5 - (iVar2 - iVar1);
  }
  else {
    puVar4 = (vd->vibuf).data;
    *len0 = iVar5;
    *len1 = 0;
    *ptr0 = (uchar *)((int)puVar4 + iVar1);
    *ptr1 = (uchar *)0x0;
  }
  SignalSema((vd->vibuf).sema);
  return;
}

void videoDecEndPut(VideoDec *vd, int size) {
  WaitSema((vd->vibuf).sema);
  (vd->vibuf).readBytes = (vd->vibuf).readBytes + size;
  (vd->vibuf).totalBytes = (long)size + (vd->vibuf).totalBytes;
  SignalSema((vd->vibuf).sema);
  return;
}

void videoDecReset(VideoDec *vd) {
  vd->state = 0;
  return;
}

int videoDecDelete(VideoDec *vd) {
  viBufDelete(&vd->vibuf);
  sceMpegDelete(vd);
  return 1;
}

void videoDecAbort(VideoDec *vd) {
  vd->state = 1;
  return;
}

u_int videoDecGetState(VideoDec *vd) {
  return vd->state;
}

u_int videoDecSetState(VideoDec *vd, u_int state) {
	u_int old;
	
  uint uVar1;
  
  uVar1 = vd->state;
  vd->state = state;
  return uVar1;
}

int videoDecPutTs(VideoDec *vd, long int pts_val, long int dts_val, u_char *start, int len) {
	TimeStamp ts;
	
  int iVar1;
  TimeStamp ts;
  
  ts.pos = (int)start - (int)(vd->vibuf).data;
  ts.pts = pts_val;
  ts.dts = dts_val;
  ts.len = len;
  iVar1 = viBufPutTs(&videoDec.vibuf,&ts);
  return iVar1;
}

int videoDecInputCount(VideoDec *vd) {
  int iVar1;
  
  iVar1 = viBufCount(&vd->vibuf);
  return iVar1;
}

int videoDecInputSpaceCount(VideoDec *vd) {
	u_char *ptr0;
	u_char *ptr1;
	int len0;
	int len1;
	
  uchar *ptr0;
  int len0;
  uchar *ptr1;
  int len1;
  
  videoDecBeginPut(vd,&ptr0,(int *)((uint)&ptr0 | 4),(uchar **)((uint)&ptr0 | 8),
                   (int *)((uint)&ptr0 | 0xc));
  return len0 + len1;
}

int videoDecFlush(VideoDec *vd) {
	u_char *pd0;
	u_char *pd1;
	u_char seq_end_code[4];
	int d0;
	int d1;
	void *val;
	void *val;
	
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  uchar seq_end_code [4];
  uchar *pd0;
  int d0;
  uchar *pd1;
  int d1;
  
  puVar1 = seq_end_code + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)DAT_00356e80 >> (3 - uVar2) * 8;
  seq_end_code = DAT_00356e80;
  videoDecBeginPut(vd,&pd0,&d0,&pd1,&d1);
  iVar3 = 0;
  if (3 < d0 + d1) {
                    /* inlined from defs.h */
                    /* end of inlined section */
    iVar3 = cpy2area((uchar *)((uint)pd0 & 0xfffffff | 0x20000000),d0,
                     (uchar *)((uint)pd1 & 0xfffffff | 0x20000000),d1,seq_end_code,4,(uchar *)0x0,0)
    ;
    videoDecEndPut(&videoDec,iVar3);
    viBufFlush(&vd->vibuf);
    iVar3 = 1;
    if (vd->state == 0) {
      vd->state = 2;
      iVar3 = 1;
    }
  }
  return iVar3;
}

int videoDecIsFlushed(VideoDec *vd) {
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = videoDecInputCount(vd);
  uVar2 = 0;
  if (iVar1 == 0) {
    lVar3 = sceMpegIsRefBuffEmpty(vd);
    uVar2 = (uint)(lVar3 != 0);
  }
  return uVar2;
}

void videoDecMain(VideoDec *vd) {
  viBufReset(&vd->vibuf);
  voBufReset(&voBuf);
  decBs0(vd);
  do {
  } while (voBuf.count != 0);
  videoDecSetState(vd,3);
  return;
}

int decBs0(VideoDec *vd) {
	VoData *voData;
	int status;
	int i;
	int image_w;
	int image_h;
	
  int image_h;
  VoData *pVVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int status;
  
  status = 1;
  do {
    lVar4 = sceMpegIsEnd(vd);
    if (lVar4 != 0) {
LAB_00182b20:
      sceMpegReset(vd);
      return status;
    }
    uVar3 = videoDecGetState(vd);
    if (uVar3 == 1) {
      status = -1;
      goto LAB_00182b20;
    }
    while (pVVar1 = voBufGetData(&voBuf), pVVar1 == (VoData *)0x0) {
      switchThread();
    }
    lVar4 = sceMpegGetPicture(vd,pVVar1,0x4b0);
    if (lVar4 < 0) {
      ErrMessage("sceMpegGetPicture() decode error");
      iVar2 = (vd->mpeg).frameCount;
    }
    else {
      iVar2 = (vd->mpeg).frameCount;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
      iVar2 = (vd->mpeg).width;
      image_h = (vd->mpeg).height;
      if (0 < voBuf.size) {
        iVar7 = 0;
        iVar6 = 0;
        do {
          iVar5 = iVar5 + 1;
          setImageTag((uint *)((int)(voBuf.tag)->v + iVar6),(voBuf.data)->v + iVar7,0,iVar2,image_h)
          ;
          setImageTag((uint *)((int)(voBuf.tag)->v[1] + iVar6),(voBuf.data)->v + iVar7,1,iVar2,
                      image_h);
          iVar7 = iVar7 + 0x12c000;
          iVar6 = iVar6 + 0x39240;
        } while (iVar5 < voBuf.size);
      }
    }
    voBufIncCount(&voBuf);
    switchThread();
  } while( true );
}

int mpegError(sceMpeg *mp, sceMpegCbDataError *cberror, void *anyData) {
  return 1;
}

int mpegNodata(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData) {
  switchThread();
  viBufAddDMA(&videoDec.vibuf);
  return 1;
}

int mpegStopDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData) {
  viBufStopDMA(&videoDec.vibuf);
  return 1;
}

int mpegRestartDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData) {
  viBufRestartDMA(&videoDec.vibuf);
  return 1;
}

int mpegTS(sceMpeg *mp, sceMpegCbDataTimeStamp *cbts, void *anyData) {
	TimeStamp ts;
	
  TimeStamp ts;
  
  viBufGetTs(&videoDec.vibuf,&ts);
  cbts->pts = ts.pts;
  cbts->dts = ts.dts;
  return 1;
}

static int cpy2area(u_char *pd0, int d0, u_char *pd1, int d1, u_char *ps0, int s0, u_char *ps1, int s1) {
  int iVar1;
  size_t __n;
  size_t __n_00;
  int iVar2;
  int iVar3;
  
  __n_00 = (size_t)s1;
  __n = (size_t)s0;
  iVar3 = s0 + s1;
  iVar1 = 0;
  if (iVar3 <= d0 + d1) {
    iVar2 = d0 - s0;
    iVar1 = iVar3;
    if ((long)__n < (long)d0) {
      if ((long)__n_00 < (long)iVar2) {
        memcpy(pd0,ps0,__n);
        memcpy(pd0 + s0,ps1,__n_00);
      }
      else {
        memcpy(pd0,ps0,__n);
        memcpy(pd0 + s0,ps1,(long)iVar2);
        memcpy(pd1,ps1 + (d0 - s0),(long)(s1 - iVar2));
      }
    }
    else {
      memcpy(pd0,ps0,(long)d0);
      memcpy(pd1,ps0 + d0,(long)(s0 - d0));
      memcpy(pd1 + (s0 - d0),ps1,__n_00);
    }
  }
  return iVar1;
}

void voBufCreate(VoBuf *f, VoData *data, VoTag *tag, int size) {
	int i;
	
  int iVar1;
  int iVar2;
  
  f->count = 0;
  f->data = data;
  f->write = 0;
  f->tag = tag;
  f->size = size;
  iVar1 = 0;
  if (0 < size) {
    do {
      iVar2 = iVar1 + 1;
      tag[iVar1].status = 0;
      iVar1 = iVar2;
    } while (iVar2 < size);
  }
  return;
}

void voBufDelete(VoBuf *f) {
  return;
}

void voBufReset(VoBuf *f) {
  f->count = 0;
  f->write = 0;
  return;
}

int voBufIsFull(VoBuf *f) {
  return (int)(f->count == f->size);
}

void voBufIncCount(VoBuf *f) {
  DIntr();
  f->tag[f->write].status = 2;
  f->count = f->count + 1;
  if (f->size == 0) {
    trap(7);
  }
  f->write = (f->write + 1) % f->size;
  EIntr();
  return;
}

VoData* voBufGetData(VoBuf *f) {
  int iVar1;
  VoData *pVVar2;
  
  iVar1 = voBufIsFull(f);
  if (iVar1 == 0) {
    pVVar2 = f->data + f->write;
  }
  else {
    pVVar2 = (VoData *)0x0;
  }
  return pVVar2;
}

int voBufIsEmpty(VoBuf *f) {
  return (int)(f->count == 0);
}

VoTag* voBufGetTag(VoBuf *f) {
  int iVar1;
  VoTag *pVVar2;
  
  iVar1 = voBufIsEmpty(f);
  if (iVar1 == 0) {
    iVar1 = f->size;
    if (iVar1 == 0) {
      trap(7);
    }
    pVVar2 = f->tag + ((f->write - f->count) + iVar1) % iVar1;
  }
  else {
    pVVar2 = (VoTag *)0x0;
  }
  return pVVar2;
}

void voBufDecCount(VoBuf *f) {
  if (0 < f->count) {
    f->count = f->count + -1;
  }
  return;
}
