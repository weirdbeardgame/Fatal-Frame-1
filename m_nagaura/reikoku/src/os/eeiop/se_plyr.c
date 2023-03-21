// STATUS: NOT STARTED

typedef struct {
	u_char num;
	u_char rate[4];
} SE_FOOT_RAND_ITA;

SE_FOOT_RAND_ITA rand_ita_tbl[0] = {
};

int SeReqFootStep(float *pos) {
	u_int *addr;
	int i;
	int rd0;
	int rd1;
	int foot_rand_per[3];
	int foot_rand;
	u_short px;
	u_short pz;
	u_short call_no;
	u_char room_no;
	u_char se_no;
	u_char dscv_flg;
	u_short frand_tbl[2][3];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  bool bVar5;
  uchar uVar6;
  uchar uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short pitch;
  uint call_no;
  float fVar12;
  float fVar13;
  int foot_rand_per [3];
  short frand_tbl [2] [3];
  
  call_no = 0;
  iVar11 = 0;
  fVar13 = *pos;
  fVar12 = pos[2];
  puVar1 = (undefined *)((int)frand_tbl[1] + 1);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0034a270 >> (7 - uVar2) * 8;
  frand_tbl._0_8_ = DAT_0034a270;
  puVar1 = (undefined *)((int)frand_tbl[1] + 5);
  uVar2 = (uint)puVar1 & 3;
  puVar4 = (uint *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | DAT_0034a278 >> (3 - uVar2) * 8;
  frand_tbl[1]._2_4_ = DAT_0034a278;
  uVar6 = GetDataRoom('\b',plyr_wrk.dop._13_1_);
  if (room_wrk.se_num != '\0') {
    do {
      uVar7 = PosInAreaJudge1('\b',uVar6,(uchar)iVar11,(short)(int)fVar12,(short)(int)fVar13);
      if (uVar7 != '\0') {
        call_no = (uint)*(ushort *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x20) +
                                                     (char)uVar6 * 4 + 0x7f8004) + iVar11 * 4 +
                                           0x7f8004) + 0x7f8000) + 0x7f8000);
        break;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)room_wrk.se_num);
    if (iVar11 < (int)(uint)room_wrk.se_num) {
      rand();
      iVar11 = rand();
      iVar11 = ((0x73 - iVar11 % 0x1e) * 0x1000) / 100;
      iVar8 = rand();
      pitch = 0x1000;
      if (iVar8 % 3 == 0) {
        iVar8 = rand();
        pitch = (short)(((0x6e - iVar8 % 0x19) * 0x1000) / 100);
      }
      if ((plyr_wrk.mvsta & 1) == 0) {
        iVar11 = (int)((float)iVar11 * DAT_00355154);
      }
      if (*(int *)(&foot_se_index + call_no * 4) == 0x5ac) {
        bVar5 = false;
        if (se_ctrl.foot_no[0] == 0x5a9) {
LAB_001158e4:
          bVar5 = true;
        }
        else {
          for (iVar8 = 1; iVar8 < 8; iVar8 = iVar8 + 1) {
            if (se_ctrl.foot_no[iVar8] == 0x5a9) goto LAB_001158e4;
          }
        }
        if (bVar5) {
          iVar8 = rand();
          iVar10 = (uint)(ushort)frand_tbl[0][0] + (uint)(ushort)frand_tbl[0][1];
          iVar9 = iVar10 + (uint)(ushort)frand_tbl[0][2];
          iVar8 = iVar8 % iVar9;
          if (iVar9 == 0) {
            trap(7);
          }
          if ((int)(uint)(ushort)frand_tbl[0][0] <= iVar8) {
            iVar9 = 0;
            if (iVar8 < iVar10) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < 8);
            }
            else {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < 8);
            }
            goto LAB_001159dc;
          }
        }
        else {
          iVar8 = rand();
          iVar9 = (uint)(ushort)frand_tbl[1][0] + (frand_tbl[1]._2_4_ & 0xffff);
          if (iVar9 == 0) {
            trap(7);
          }
          iVar10 = 0;
          if ((int)(uint)(ushort)frand_tbl[0][0] <= iVar8 % iVar9) {
            do {
              iVar10 = iVar10 + 1;
            } while (iVar10 < 8);
            goto LAB_001159dc;
          }
        }
        SFootGetSeNo(call_no);
      }
LAB_001159dc:
      uVar6 = SFootGetSeNo(call_no);
      if ((long)(char)uVar6 == 0xff) {
        return 0xff;
      }
      iVar11 = SeStartPut((int)(char)uVar6,pos,0,(short)iVar11,pitch,0xff);
      return iVar11;
    }
  }
  return -1;
}

u_char IsKarehaZone(float *pos) {
	u_int *addr;
	int i;
	u_short px;
	u_short pz;
	u_short call_no;
	u_char room_no;
	
  uchar room;
  uchar uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 0;
  fVar5 = pos[2];
  fVar4 = *pos;
  room = GetDataRoom('\b',plyr_wrk.dop._13_1_);
  uVar3 = 0;
  if (room_wrk.se_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\b',room,(uchar)iVar2,(short)(int)fVar5,(short)(int)fVar4);
      if (uVar1 != '\0') {
        uVar3 = (uint)*(ushort *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x20) + (char)room * 4
                                                  + 0x7f8004) + iVar2 * 4 + 0x7f8004) + 0x7f8000) +
                       0x7f8000);
        break;
      }
      iVar2 = iVar2 + 1;
      uVar3 = 0;
    } while (iVar2 < (int)(uint)room_wrk.se_num);
  }
  return *(int *)(&foot_se_index + uVar3 * 4) == 0x5b4;
}

u_char IsTakenohaZone(float *pos) {
	u_int *addr;
	int i;
	u_short px;
	u_short pz;
	u_short call_no;
	u_char room_no;
	
  uchar room;
  uchar uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 0;
  fVar5 = pos[2];
  fVar4 = *pos;
  room = GetDataRoom('\b',plyr_wrk.dop._13_1_);
  uVar3 = 0;
  if (room_wrk.se_num != '\0') {
    do {
      uVar1 = PosInAreaJudge1('\b',room,(uchar)iVar2,(short)(int)fVar5,(short)(int)fVar4);
      if (uVar1 != '\0') {
        uVar3 = (uint)*(ushort *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(map_wrk.dat_adr + 0x20) + (char)room * 4
                                                  + 0x7f8004) + iVar2 * 4 + 0x7f8004) + 0x7f8000) +
                       0x7f8000);
        break;
      }
      iVar2 = iVar2 + 1;
      uVar3 = 0;
    } while (iVar2 < (int)(uint)room_wrk.se_num);
  }
  return *(int *)(&foot_se_index + uVar3 * 4) == 0x5ba;
}

u_char IsHokoriZone() {
  return plyr_wrk.dop._13_1_ == '\t';
}
