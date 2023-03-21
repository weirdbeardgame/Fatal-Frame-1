// STATUS: NOT STARTED


u_char PosInAreaJudgeSub(int *addr, u_short pos_x, u_short pos_y, u_char type) {
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (int)pos_x & 0xffff;
  uVar3 = (int)pos_y & 0xffff;
  if (type == '\x02') {
    if (0 < (int)((int)*(short *)addr * uVar2 + (int)*(short *)((int)addr + 2) * uVar3 + addr[1])) {
      return '\0';
    }
    if (0 < (int)((int)*(short *)(addr + 2) * uVar2 + (int)*(short *)((int)addr + 10) * uVar3 +
                 addr[3])) {
      return '\0';
    }
    sVar1 = *(short *)(addr + 4);
  }
  else {
    if (type != '\x01') {
      if (type != '\x03') {
        return '\0';
      }
      if (0 < (int)((int)*(short *)addr * uVar2 + (int)*(short *)((int)addr + 2) * uVar3 + addr[1]))
      {
        return '\0';
      }
      if (0 < (int)((int)*(short *)(addr + 2) * uVar2 + (int)*(short *)((int)addr + 10) * uVar3 +
                   addr[3])) {
        return '\0';
      }
      if (0 < (int)((int)*(short *)(addr + 4) * uVar2 + (int)*(short *)((int)addr + 0x12) * uVar3 +
                   addr[5])) {
        return '\0';
      }
      if (-1 < (int)((int)*(short *)(addr + 6) * uVar2 + (int)*(short *)((int)addr + 0x1a) * uVar3 +
                    addr[7])) {
        return '\x01';
      }
      return '\0';
    }
    if (0 < (int)((int)*(short *)addr * uVar2 + (int)*(short *)((int)addr + 2) * uVar3 + addr[1])) {
      return '\0';
    }
    if ((int)((int)*(short *)(addr + 2) * uVar2 + (int)*(short *)((int)addr + 10) * uVar3 + addr[3])
        < 0) {
      return '\0';
    }
    sVar1 = *(short *)(addr + 4);
  }
  if ((-1 < (int)((int)sVar1 * uVar2 + (int)*(short *)((int)addr + 0x12) * uVar3 + addr[5])) &&
     (-1 < (int)((int)*(short *)(addr + 6) * uVar2 + (int)*(short *)((int)addr + 0x1a) * uVar3 +
                addr[7]))) {
    return '\x01';
  }
  return '\0';
}

void Get2DLinearConstFromPos(float *a, float *b, float *c, float x0, float y0, float x1, float y1) {
  *a = y0 - y1;
  *b = x1 - x0;
  *c = x0 * y1 - x1 * y0;
  return;
}

int Get2DLinearCrossPoint(float *cpx, float *cpy, float a0, float b0, float c0, float a1, float b1, float c1) {
	float mother;
	
  float fVar1;
  
  fVar1 = a0 * b1 - b0 * a1;
  if (fVar1 == 0.0) {
    return 0;
  }
  *cpx = (b0 * c1 - c0 * b1) / fVar1;
  *cpy = (c0 * a1 - a0 * c1) / fVar1;
  return 1;
}

int ChkLineCross(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) {
	float a0;
	float b0;
	float c0;
	float a1;
	float b1;
	float c1;
	float d;
	
  int iVar1;
  float a0;
  float b0;
  float c0;
  float a1;
  float b1;
  float c1;
  
  Get2DLinearConstFromPos(&a0,(float *)((uint)&a0 | 4),(float *)((uint)&a0 | 8),x0,y0,x1,y1);
  iVar1 = 0;
  if ((a0 * x2 + b0 * y2 + c0) * (a0 * x3 + b0 * y3 + c0) <= 0.0) {
    Get2DLinearConstFromPos((float *)((uint)&a0 | 0xc),&b1,&c1,x2,y2,x3,y3);
    iVar1 = 1;
    if (0.0 < (a1 * x0 + b1 * y0 + c1) * (a1 * x1 + b1 * y1 + c1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

int ChkInsideBox(float cpx, float cpy, float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) {
	float x3;
	float y3;
	float a0;
	float b0;
	float c0;
	float a1;
	float b1;
	float c1;
	float d;
	
  int iVar1;
  float a0;
  float b0;
  float c0;
  float a1;
  float b1;
  float c1;
  
  Get2DLinearConstFromPos(&a0,&b0,&c0,x0,y0,x1,y1);
  Get2DLinearConstFromPos(&a1,&b1,&c1,x2,y2,param_11,param_12);
  iVar1 = 0;
  if ((a0 * cpx + b0 * cpy + c0) * (a1 * cpx + b1 * cpy + c1) <= 0.0) {
    Get2DLinearConstFromPos(&a0,&b0,&c0,x0,y0,x2,y2);
    Get2DLinearConstFromPos(&a1,&b1,&c1,x1,y1,param_11,param_12);
    iVar1 = 1;
    if (0.0 < (a0 * cpx + b0 * cpy + c0) * (a1 * cpx + b1 * cpy + c1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

u_char HitChkSegment2All(float *f, float *t, float deg) {
	sceVu0FVECTOR seg;
	sceVu0FVECTOR chk;
	float ft;
	int i;
	int j;
	u_short cmp_x;
	u_short cmp_y;
	u_short cmp_z;
	u_char room_id;
	u_char room_no;
	u_char tmp_hit_num;
	
  byte bVar1;
  short pos_x;
  short pos_y;
  ushort pos_y_00;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float seg [4];
  float chk [4];
  
  if (deg == 0.0) {
    uVar4 = 0xff;
  }
  else {
    fVar14 = 0.0;
    fVar13 = *f;
    fVar11 = f[1];
    fVar7 = *t - fVar13;
    fVar12 = f[2];
    fVar8 = t[1] - fVar11;
    fVar10 = t[2] - fVar12;
    if (0.0 < deg) {
      while( true ) {
        fVar9 = fVar14 + 1.0;
        iVar6 = 0;
        pos_y_00 = (ushort)(int)(fVar11 + (fVar8 * fVar9) / deg);
        pos_x = (short)(int)(fVar12 + (fVar10 * fVar9) / deg);
        pos_y = (short)(int)(fVar13 + (fVar7 * fVar9) / deg);
        uVar4 = map_wrk.now_room;
        bVar1 = room_wrk.hit_num;
        do {
          if (uVar4 != 0xff) {
            uVar2 = GetDataRoom('\x06',uVar4);
            iVar5 = 0;
            if (bVar1 != 0) {
              do {
                uVar3 = PosInAreaJudge1('\x06',uVar2,(uchar)iVar5,pos_x,pos_y);
                iVar5 = iVar5 + 1;
                if (uVar3 != '\0') {
                  return '\x01';
                }
              } while (iVar5 < (int)(uint)bVar1);
            }
            uVar2 = DoorCoverCheck(pos_y,pos_y_00,pos_x,uVar4);
            if (uVar2 != '\0') {
              return '\x02';
            }
            uVar4 = GetDataRoom('\v',uVar4);
            uVar4 = FurnCoverCheck(pos_y,pos_y_00,pos_x,uVar4);
            if (uVar4 != '\0') {
              return '\x03';
            }
          }
          iVar6 = iVar6 + 1;
          uVar4 = map_wrk.next_room;
          bVar1 = room_wrk.hit_num_next;
        } while (iVar6 < 2);
        fVar14 = fVar14 + 1.0;
        if (deg <= fVar14) break;
        fVar13 = *f;
        fVar11 = f[1];
        fVar12 = f[2];
      }
    }
    uVar4 = '\0';
  }
  return uVar4;
}

u_char HitChkSegment2All2D(float *f, float *t, float deg) {
	sceVu0FVECTOR seg;
	sceVu0FVECTOR chk;
	float ft;
	int i;
	int j;
	u_short cmp_x;
	u_short cmp_y;
	u_short cmp_z;
	u_char room_id;
	u_char room_no;
	
  short pos_x;
  short pos_y;
  ushort pos_y_00;
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float seg [4];
  float chk [4];
  int i;
  
  if (deg == 0.0) {
    uVar3 = 0xff;
  }
  else {
    fVar8 = t[2];
    fVar10 = 0.0;
    fVar6 = *t;
    fVar5 = *f;
    fVar7 = f[2];
    if (0.0 < deg) {
      fVar9 = *f;
      while( true ) {
        i = 0;
        pos_x = (short)(int)(f[2] + ((fVar8 - fVar7) * (fVar10 + 1.0)) / deg);
        pos_y_00 = (ushort)(int)(f[1] + ((fVar10 + 1.0) * 0.0) / deg);
        pos_y = (short)(int)(fVar9 + ((fVar6 - fVar5) * (fVar10 + 1.0)) / deg);
        uVar3 = map_wrk.now_room;
        do {
          if (uVar3 != 0xff) {
            uVar1 = GetDataRoom('\x06',uVar3);
            iVar4 = 0;
            if (room_wrk.hit_num != '\0') {
              do {
                uVar2 = PosInAreaJudge1('\x06',uVar1,(uchar)iVar4,pos_x,pos_y);
                iVar4 = iVar4 + 1;
                if (uVar2 != '\0') {
                  return '\x01';
                }
              } while (iVar4 < (int)(uint)room_wrk.hit_num);
            }
            uVar1 = GetDataRoom('\v',uVar3);
            uVar1 = FurnCoverCheck(pos_y,pos_y_00,pos_x,uVar1);
            if (uVar1 != '\0') {
              return '\x03';
            }
            uVar1 = DoorCoverCheck(pos_y,pos_y_00,pos_x,uVar3);
            uVar3 = map_wrk.next_room;
            if (uVar1 != '\0') {
              return '\x02';
            }
          }
          i = i + 1;
        } while (i < 2);
        fVar10 = fVar10 + 1.0;
        if (deg <= fVar10) break;
        fVar9 = *f;
      }
    }
    uVar3 = '\0';
  }
  return uVar3;
}

u_char FurnCoverCheck(u_short pos_x, short int pos_y, u_short pos_z, u_char room_no) {
	u_int *addr;
	u_int *addr_bak;
	FURN_DATA_POP *fedp;
	int i;
	u_char dt_num;
	
  int iVar1;
  uchar uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (((int)(char)room_no & 0xffU) != 0xff) {
    piVar4 = (int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x2c) + ((int)(char)room_no & 0xffU) * 4 +
                             0x7f8004) + 0x7f8000);
    uVar6 = (uint)*(byte *)(*piVar4 + 0x7f8000);
    iVar5 = 0;
    if (uVar6 != 0) {
      iVar3 = 0;
      do {
        iVar3 = *(int *)((int)piVar4 + iVar3 + 4);
        iVar1 = *(int *)(iVar3 + 0x7f8000);
        GetFurnAttr(*(short *)(iVar1 + 0x7f8012),ingame_wrk.msn_no);
        uVar2 = PosInAreaJudgeSub((int *)(*(int *)(iVar3 + 0x7f8004) + 0x7f8000),pos_z,pos_x,
                                  *(uchar *)(iVar1 + 0x7f8019));
        iVar5 = iVar5 + 1;
        if (((uVar2 != '\0') && (-(int)*(short *)(iVar1 + 0x7f8014) <= (int)(short)pos_y)) &&
           ((int)(short)pos_y <= -(int)*(short *)(iVar1 + 0x7f8016))) {
          return '\x01';
        }
        iVar3 = iVar5 * 4;
      } while (iVar5 < (int)uVar6);
    }
  }
  return '\0';
}
