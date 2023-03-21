// STATUS: NOT STARTED

typedef unsigned char u_8;
typedef short unsigned int u_16;
typedef unsigned int u_32;
typedef long unsigned int u_64;

typedef struct {
	u_8 bfType[2];
} BITMAPFILEHEADER1;

typedef struct {
	u_32 bfSize;
	u_16 bfReserved1;
	u_16 bfReserved2;
	u_32 bfOffbits;
} BITMAPFILEHEADER2;

typedef struct {
	u_32 biSize;
	u_32 biWidth;
	u_32 biHeight;
	u_16 biPlanes;
	u_16 biBitCount;
	u_32 biCompression;
	u_32 biSizeImage;
	u_32 biXPelsPerMeter;
	u_32 biYPelsPerMeter;
	u_32 biClrUsed;
	u_32 biClrImportant;
} BITMAPINFOHEADER;

static BITMAPFILEHEADER1 bfhp1 = {
	/* .bfType = */ {
		/* [0] = */ 66,
		/* [1] = */ 77
	}
};
static int now_no[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};

void TakeSnapshot(char *data_i, char *data_o, int size_w, int size_h, int type) {
	int bx;
	int by;
	int x;
	int y;
	int oneli;
	int onelo;
	int fd;
	char fname[256];
	int k;
	int nBytes;
	int offset;
	int tex_size;
	int bitc;
	BITMAPFILEHEADER2 bfhp2;
	BITMAPINFOHEADER bihp;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char fname [256];
  BITMAPFILEHEADER2 bfhp2;
  BITMAPINFOHEADER bihp;
  
  iVar1 = size_w * size_h * 3;
  iVar6 = size_w + 0x3e;
  if (-1 < size_w + -1) {
    iVar6 = size_w + -1;
  }
  bfhp2.bfSize = iVar1 + 0x36;
  iVar10 = 0;
  bfhp2.bfOffbits = 0x36;
  bihp.biSize = 0x28;
  bihp.biPlanes = 1;
  bihp.biBitCount = 0x18;
  bihp.biYPelsPerMeter = 0xec4;
  bfhp2.bfReserved1 = 0;
  bfhp2.bfReserved2 = 0;
  bihp.biCompression = 0;
  bihp.biSizeImage = 0;
  bihp.biXPelsPerMeter = 0xec4;
  bihp.biClrUsed = 0;
  bihp.biClrImportant = 0;
  iVar4 = size_h;
  if (0 < size_h) {
    do {
      iVar11 = 0;
      if (0 < size_w) {
        do {
          iVar2 = (-size_h / 2 + 0x70 + iVar10) * 0xa00;
          iVar7 = (-size_w / 2 + 0x140 + iVar11) * 4;
          iVar3 = (iVar4 + -1) * ((iVar6 >> 6) + 1) * 0xc0;
          iVar8 = iVar7 + iVar2;
          iVar9 = iVar11 * 3 + iVar3;
          data_o[iVar3 + iVar11 * 3] = data_i[iVar8 + 2];
          iVar11 = iVar11 + 1;
          data_o[iVar9 + 1] = data_i[iVar8 + 1];
          data_o[iVar9 + 2] = data_i[iVar2 + iVar7];
        } while (iVar11 < size_w);
      }
      iVar10 = iVar10 + 1;
      iVar4 = size_h - iVar10;
    } while (iVar10 < size_h);
  }
  bihp.biWidth = size_w;
  bihp.biHeight = size_h;
  sprintf(fname,"host:snapshot%d%04d.bmp");
  lVar5 = sceOpen(fname,0x202);
  if (lVar5 != -1) {
    sceWrite(lVar5,0x356ac0,2);
    sceWrite(lVar5,&bfhp2,0xc);
    sceWrite(lVar5,&bihp,0x28);
    sceWrite(lVar5,data_o,iVar1);
    sceClose(lVar5);
    now_no[type % 2] = now_no[type % 2] + 1;
  }
  return;
}
