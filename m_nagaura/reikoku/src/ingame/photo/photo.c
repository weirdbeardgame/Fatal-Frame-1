// STATUS: NOT STARTED


long int PhotoScoreCount() {
	long int score;
	int i;
	float point;
	float point_2d;
	
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ENE_WRK *pEVar6;
  SUBJECT_WRK *pSVar7;
  long score;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  fVar8 = 0.0;
  if (photo_wrk.plyr.no != -1) {
    photo_wrk.plyr.score = SubjectScoreCount(&photo_wrk.plyr);
    fVar9 = (float)photo_wrk.plyr.score + 0.0;
  }
  iVar4 = 0;
  iVar3 = 0;
  do {
    pSVar7 = (SUBJECT_WRK *)((int)&photo_wrk.ene[0].score + iVar3);
    if (*(short *)((int)&photo_wrk.ene[0].no + iVar3) != -1) {
      iVar3 = SubjectScoreCount(pSVar7);
      pSVar7->score = iVar3;
      fVar9 = fVar9 + (float)iVar3;
      pEVar6 = ene_wrk;
      do {
        if (((ushort)pEVar6->dat_no == photo_wrk.ene[iVar4].no) &&
           ((ushort)pEVar6->type == photo_wrk.ene[iVar4].type)) break;
        pEVar6 = (ENE_WRK *)((int)&pEVar6[1].move_box.spd.z + 2);
      } while ((int)pEVar6 < 0x253b20);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar4 * 0x14;
    if (3 < iVar4) {
      pSVar7 = photo_wrk.furn;
      iVar3 = 4;
      do {
        if ((pSVar7->no != 0xffff) &&
           (cVar2 = CheckGlistRareGhost(4,(uint)(ushort)pSVar7->no), cVar2 != '\0')) {
          if (pSVar7->type == 0x20) {
            pSVar7->score = pSVar7->point;
            fVar8 = fVar8 + (float)pSVar7->point;
          }
          else {
            iVar4 = SubjectScoreCount(pSVar7);
            pSVar7->score = iVar4;
            fVar9 = fVar9 + (float)iVar4;
          }
        }
        iVar3 = iVar3 + -1;
        pSVar7 = pSVar7 + 1;
      } while (-1 < iVar3);
      iVar3 = 2;
      pSVar7 = photo_wrk.rare;
      do {
        if (pSVar7->no != -1) {
          iVar4 = SubjectScoreCount(pSVar7);
          pSVar7->score = iVar4;
          fVar9 = fVar9 + (float)iVar4;
        }
        iVar3 = iVar3 + -1;
        pSVar7 = pSVar7 + 1;
      } while (-1 < iVar3);
      lVar5 = __fixsfdi(fVar9 * photo_wrk.ratio + fVar8);
      score = 9999;
      if (lVar5 < 10000) {
        score = lVar5;
      }
      if (photo_wrk.falth != 0) {
        score = 0;
      }
      cam_custom_wrk.point = cam_custom_wrk.point + score;
      if (9999999 < cam_custom_wrk.point) {
        cam_custom_wrk.point = 9999999;
      }
      if (ingame_wrk.game == 0) {
        ingame_wrk.total_point = ingame_wrk.total_point + (uint)score;
        if (9999999 < ingame_wrk.total_point) {
          ingame_wrk.total_point = 9999999;
        }
        uVar1 = (uint)score;
        if (score <= (long)(ulong)ingame_wrk.high_score) {
          return score;
        }
      }
      else {
        if (ingame_wrk.game != 1) {
          return score;
        }
        BattleModeScoreRecord(score);
        uVar1 = ingame_wrk.high_score;
      }
      ingame_wrk.high_score = uVar1;
      return score;
    }
  } while( true );
}

int SubjectScoreCount(SUBJECT_WRK *sj) {
	float score;
	
  return (int)((float)sj->point * sj->ratio);
}

int SpecialPhotoMakeJudge() {
	int count;
	int ret;
	u_char no;
	static int hint_tbl[48] = {
		/* [0] = */ 280,
		/* [1] = */ 281,
		/* [2] = */ 282,
		/* [3] = */ 283,
		/* [4] = */ 284,
		/* [5] = */ 285,
		/* [6] = */ 286,
		/* [7] = */ 287,
		/* [8] = */ 288,
		/* [9] = */ 289,
		/* [10] = */ 290,
		/* [11] = */ 291,
		/* [12] = */ 292,
		/* [13] = */ 293,
		/* [14] = */ 294,
		/* [15] = */ 295,
		/* [16] = */ 296,
		/* [17] = */ 297,
		/* [18] = */ 298,
		/* [19] = */ 299,
		/* [20] = */ 300,
		/* [21] = */ 301,
		/* [22] = */ 302,
		/* [23] = */ 303,
		/* [24] = */ 304,
		/* [25] = */ 305,
		/* [26] = */ 306,
		/* [27] = */ 307,
		/* [28] = */ 308,
		/* [29] = */ 309,
		/* [30] = */ 310,
		/* [31] = */ 311,
		/* [32] = */ 312,
		/* [33] = */ 313,
		/* [34] = */ 314,
		/* [35] = */ 315,
		/* [36] = */ 316,
		/* [37] = */ 317,
		/* [38] = */ 318,
		/* [39] = */ 319,
		/* [40] = */ 320,
		/* [41] = */ 321,
		/* [42] = */ 322,
		/* [43] = */ 323,
		/* [44] = */ 324,
		/* [45] = */ 325,
		/* [46] = */ 326,
		/* [47] = */ 327
	};
	static int hint_rea_tbl[25] = {
		/* [0] = */ 328,
		/* [1] = */ 329,
		/* [2] = */ 330,
		/* [3] = */ 331,
		/* [4] = */ 332,
		/* [5] = */ 333,
		/* [6] = */ 334,
		/* [7] = */ 335,
		/* [8] = */ 336,
		/* [9] = */ 337,
		/* [10] = */ 338,
		/* [11] = */ 339,
		/* [12] = */ 340,
		/* [13] = */ 341,
		/* [14] = */ 342,
		/* [15] = */ 343,
		/* [16] = */ 344,
		/* [17] = */ 345,
		/* [18] = */ 346,
		/* [19] = */ 347,
		/* [20] = */ 348,
		/* [21] = */ 349,
		/* [22] = */ 350,
		/* [23] = */ 351,
		/* [24] = */ 352
	};
	
  byte bVar1;
  short sVar2;
  uchar (*pauVar3) [2];
  uint uVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  PHOTO_WRK *pPVar8;
  uint uVar9;
  uint uVar10;
  uint in_hi;
  
  bVar1 = photo_wrk.ene_dead;
  iVar6 = -1;
  if (photo_wrk.falth != 0) {
    photo_wrk.spcl_pht_no[0][0] = '\x05';
    photo_wrk.spcl_pht_no[0][1] = '\x01';
  }
  uVar10 = (uint)(photo_wrk.falth != 0);
  uVar4 = (uint)photo_wrk.ene_dead;
  uVar9 = 0xff;
  if (uVar4 != 0xff) {
    if ((uVar4 + 0x6a & 0xff) < 0x32) {
      iVar6 = LoadReq(*(int *)(&hint_rea_tbl_127 + (uVar4 - 0x96) * 4),0x1e90000);
    }
    else {
      iVar6 = LoadReq(*(int *)(&hint_tbl_126 + uVar4 * 4),0x1e90000);
    }
    photo_wrk.spcl_pht_no[uVar10][0] = '\x06';
    photo_wrk.spcl_pht_no[uVar10][1] = bVar1;
    uVar10 = uVar10 + 1;
    uVar9 = uVar4;
  }
  if (uVar9 == 0xff) {
    pauVar3 = photo_wrk.spcl_pht_no[uVar10];
    pPVar8 = &photo_wrk;
    sVar2 = photo_wrk.furn[0].type;
    while (sVar2 != 0x20) {
      if (0x265853 < (int)&pPVar8->plyr) goto LAB_001ffd00;
      sVar2 = pPVar8->furn[1].type;
      pPVar8 = (PHOTO_WRK *)&pPVar8->plyr;
    }
    bVar1 = *(byte *)((in_hi | 0x337730) + (uint)(ushort)pPVar8->furn[0].no * 0x12 + 0xd);
    if ((bVar1 + 0x6a & 0xff) < 0x32) {
      piVar5 = (int *)(&hint_rea_tbl_127 + (bVar1 - 0x96) * 4);
    }
    else {
      piVar5 = (int *)(&hint_tbl_126 + (uint)bVar1 * 4);
    }
    iVar6 = LoadReq(*piVar5,0x1e90000);
    photo_wrk.spcl_pht_no[uVar10][0] = '\x06';
    uVar10 = uVar10 + 1;
    (*pauVar3)[1] = bVar1;
  }
LAB_001ffd00:
  pPVar8 = &photo_wrk;
  psVar7 = &photo_wrk.furn[0].type;
  do {
    if (*psVar7 == 0x40) {
      photo_wrk.spcl_pht_no[uVar10][0] = '\a';
      photo_wrk.spcl_pht_no[uVar10][1] = (&DAT_0033773d)[(uint)(ushort)pPVar8->furn[0].no * 0x12];
      return iVar6;
    }
    pPVar8 = (PHOTO_WRK *)&pPVar8->plyr;
    psVar7 = psVar7 + 10;
  } while ((int)pPVar8 < 0x265854);
  return iVar6;
}

void AddPhotoData() {
	int i;
	int dust;
	
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  bool bVar5;
  int iVar6;
  sceCdCLOCK sVar7;
  byte bVar8;
  uchar uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong in_t4;
  ulong in_t5;
  ulong in_t6;
  
  bVar5 = false;
  if (0x18 < pfile_wrk.pic_num) {
    iVar10 = 0;
    iVar11 = 0;
    do {
      if (((&((PICTURE_WRK *)pfile_wrk.pic[0].subject[-1])->adr_no)[iVar10 + 3] & 2) == 0) {
        bVar5 = true;
      }
      iVar12 = iVar11 + 1;
      if (bVar5) {
        iVar6 = iVar11 * 0x1c;
        uVar1 = iVar6 + 0x26594fU & 7;
        uVar2 = iVar6 + 0x265948U & 7;
        in_t4 = (*(long *)((iVar6 + 0x26594fU) - uVar1) << (7 - uVar1) * 8 |
                in_t4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((iVar6 + 0x265948U) - uVar2) >> uVar2 * 8;
        uVar1 = iVar6 + 0x265957U & 7;
        uVar2 = iVar6 + 0x265950U & 7;
        in_t5 = (*(long *)((iVar6 + 0x265957U) - uVar1) << (7 - uVar1) * 8 |
                in_t5 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((iVar6 + 0x265950U) - uVar2) >> uVar2 * 8;
        uVar1 = iVar6 + 0x26595fU & 7;
        uVar2 = iVar6 + 0x265958U & 7;
        in_t6 = (*(long *)((iVar6 + 0x26595fU) - uVar1) << (7 - uVar1) * 8 |
                in_t6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                *(ulong *)((iVar6 + 0x265958U) - uVar2) >> uVar2 * 8;
        uVar3 = *(undefined4 *)&pfile_wrk.pic[iVar11 + 1].time.pad;
        uVar1 = iVar10 + 0x265933U & 7;
        puVar4 = (ulong *)((iVar10 + 0x265933U) - uVar1);
        *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | in_t4 >> (7 - uVar1) * 8;
        uVar1 = iVar10 + 0x26592cU & 7;
        puVar4 = (ulong *)((iVar10 + 0x26592cU) - uVar1);
        *puVar4 = in_t4 << uVar1 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
        uVar1 = iVar10 + 0x26593bU & 7;
        puVar4 = (ulong *)((iVar10 + 0x26593bU) - uVar1);
        *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | in_t5 >> (7 - uVar1) * 8;
        uVar1 = iVar10 + 0x265934U & 7;
        puVar4 = (ulong *)((iVar10 + 0x265934U) - uVar1);
        *puVar4 = in_t5 << uVar1 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
        uVar1 = iVar10 + 0x265943U & 7;
        puVar4 = (ulong *)((iVar10 + 0x265943U) - uVar1);
        *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | in_t6 >> (7 - uVar1) * 8;
        uVar1 = iVar10 + 0x26593cU & 7;
        puVar4 = (ulong *)((iVar10 + 0x26593cU) - uVar1);
        *puVar4 = in_t6 << uVar1 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
        *(undefined4 *)((int)pfile_wrk.pic[0].subject[5] + iVar10) = uVar3;
      }
      iVar10 = iVar12 * 0x1c;
      iVar11 = iVar12;
    } while (iVar12 < 0x17);
    pfile_wrk.pic_num = '\x18';
  }
  uVar9 = (uchar)photo_wrk.room;
  uVar1 = (uint)photo_wrk.score;
  bVar8 = ingame_wrk.msn_no;
  pfile_wrk.pic[pfile_wrk.pic_num - 1].adr_no = photo_wrk.adr_no;
  pfile_wrk.pic[pfile_wrk.pic_num - 1].score = uVar1;
  pfile_wrk.pic[pfile_wrk.pic_num - 1].room = uVar9;
  pfile_wrk.pic[pfile_wrk.pic_num - 1].msn_no = bVar8;
  pfile_wrk.pic[pfile_wrk.pic_num - 1].status = '\x01';
  sVar7 = sys_wrk.rtc;
  iVar10 = (pfile_wrk.pic_num - 1) * 0x1c;
  uVar1 = iVar10 + 0x265947;
  uVar2 = uVar1 & 7;
  puVar4 = (ulong *)(uVar1 - uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)sys_wrk.rtc >> (7 - uVar2) * 8;
  uVar1 = iVar10 + 0x265940;
  uVar2 = uVar1 & 7;
  puVar4 = (ulong *)(uVar1 - uVar2);
  *puVar4 = (long)sVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  SetNowClock((sceCdCLOCK *)photo_wrk.spcl_pht_no[(uint)pfile_wrk.pic_num * 0xe + 10]);
  GetRecordSubject((PICTURE_WRK *)photo_wrk.spcl_pht_no[(uint)pfile_wrk.pic_num * 0xe]);
  return;
}

int GetSavePhotoNo() {
  byte bVar1;
  PFILE_WRK *pPVar2;
  uchar *puVar3;
  
  pPVar2 = &pfile_wrk;
  bVar1 = pfile_wrk.pic[0].status;
  while( true ) {
    if ((bVar1 & 1) == 0) goto LAB_001fff2c;
    puVar3 = &pPVar2->pic[0].time.pad;
    if (0x265bc7 < (int)puVar3) break;
    bVar1 = pPVar2->pic[1].status;
    pPVar2 = (PFILE_WRK *)puVar3;
  }
  pPVar2 = &pfile_wrk;
  bVar1 = pfile_wrk.pic[0].status;
  while ((bVar1 & 2) != 0) {
    puVar3 = &pPVar2->pic[0].time.pad;
    if (0x265bab < (int)puVar3) {
      return (int)pfile_wrk.pic[23].adr_no;
    }
    bVar1 = pPVar2->pic[1].status;
    pPVar2 = (PFILE_WRK *)puVar3;
  }
LAB_001fff2c:
  return (int)pPVar2->pic[0].adr_no;
}

void DeletePhotoData(u_char no) {
	int i;
	int dust;
	
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = (long)(char)no & 0xff;
  iVar5 = (int)uVar9 * 0x1c;
  uVar10 = (ulong)iVar5;
  uVar7 = (ulong)(uVar9 < 0x17);
  pfile_wrk.pic[23].adr_no = pfile_wrk.pic[(int)uVar9].adr_no;
  if (uVar7 != 0) {
    uVar6 = (ulong)(iVar5 + 4);
    uVar8 = iVar5 + 0x26592c;
    do {
      uVar1 = uVar8 + 0x23 & 7;
      uVar2 = uVar8 + 0x1c & 7;
      uVar6 = (*(long *)((uVar8 + 0x23) - uVar1) << (7 - uVar1) * 8 |
              uVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((uVar8 + 0x1c) - uVar2) >> uVar2 * 8;
      uVar1 = uVar8 + 0x2b & 7;
      uVar2 = uVar8 + 0x24 & 7;
      uVar7 = (*(long *)((uVar8 + 0x2b) - uVar1) << (7 - uVar1) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
              *(ulong *)((uVar8 + 0x24) - uVar2) >> uVar2 * 8;
      uVar1 = uVar8 + 0x33 & 7;
      uVar2 = uVar8 + 0x2c & 7;
      uVar10 = (*(long *)((uVar8 + 0x33) - uVar1) << (7 - uVar1) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((uVar8 + 0x2c) - uVar2) >> uVar2 * 8;
      uVar3 = *(undefined4 *)(uVar8 + 0x34);
      uVar1 = uVar8 + 7 & 7;
      puVar4 = (ulong *)((uVar8 + 7) - uVar1);
      *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | uVar6 >> (7 - uVar1) * 8;
      uVar1 = uVar8 & 7;
      *(ulong *)(uVar8 - uVar1) =
           uVar6 << uVar1 * 8 | *(ulong *)(uVar8 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = uVar8 + 0xf & 7;
      puVar4 = (ulong *)((uVar8 + 0xf) - uVar1);
      *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
      uVar1 = uVar8 + 8 & 7;
      puVar4 = (ulong *)((uVar8 + 8) - uVar1);
      *puVar4 = uVar7 << uVar1 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      uVar1 = uVar8 + 0x17 & 7;
      puVar4 = (ulong *)((uVar8 + 0x17) - uVar1);
      *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | uVar10 >> (7 - uVar1) * 8;
      uVar1 = uVar8 + 0x10 & 7;
      puVar4 = (ulong *)((uVar8 + 0x10) - uVar1);
      *puVar4 = uVar10 << uVar1 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
      *(undefined4 *)(uVar8 + 0x18) = uVar3;
      uVar9 = (ulong)((int)uVar9 + 1);
      uVar8 = uVar8 + 0x1c;
      uVar6 = (ulong)((long)uVar9 < 0x17);
    } while (uVar6 != 0);
  }
  pfile_wrk.pic[23].status = '\0';
  pfile_wrk.pic_num = pfile_wrk.pic_num + 0xff;
  return;
}

void GetRecordSubject(PICTURE_WRK *pic) {
	int i;
	int sort[16][3];
	int tmp[3];
	
  ushort uVar1;
  ushort uVar2;
  uchar auVar3 [2];
  short sVar4;
  int (*paiVar5) [3];
  int iVar6;
  int iVar7;
  short *psVar8;
  PHOTO_WRK *pPVar9;
  short (*pasVar10) [2];
  int *piVar11;
  int (*paiVar12) [3];
  int *piVar13;
  short *psVar14;
  int *piVar15;
  uchar (*pauVar16) [2];
  int *piVar17;
  int iVar18;
  int sort [16] [3];
  int tmp [3];
  
  paiVar5 = sort;
  paiVar12 = sort;
  piVar15 = sort + 1;
  psVar8 = pic->subject + 1;
  piVar17 = sort + 2;
  pasVar10 = pic->subject;
  pPVar9 = &photo_wrk;
  piVar13 = piVar15;
  piVar11 = piVar17;
  do {
    uVar1 = pPVar9->ene[0].type;
    *(int *)paiVar5 = pPVar9->ene[0].score;
    uVar2 = pPVar9->ene[0].no;
    *piVar13 = uVar1 + 1;
    pPVar9 = (PHOTO_WRK *)&pPVar9->plyr;
    *piVar11 = (uint)uVar2;
    piVar13 = piVar13 + 3;
    piVar11 = piVar11 + 3;
    paiVar5 = (int (*) [3])((int)paiVar5 + 0xc);
  } while ((int)piVar11 < (int)(sort[4] + 2));
  piVar11 = sort[4] + 2;
  psVar14 = &photo_wrk.furn[0].no;
  piVar13 = sort[4] + 1;
  paiVar5 = sort[4];
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
    uVar1 = *psVar14;
    (*paiVar5)[0] = ((SUBJECT_WRK *)(psVar14 + -6))->score;
    psVar14 = psVar14 + 10;
    *piVar13 = 4;
    paiVar5 = paiVar5[1];
    *piVar11 = (uint)uVar1;
    piVar13 = piVar13 + 3;
    piVar11 = piVar11 + 3;
  } while (-1 < iVar6);
  piVar11 = sort[9] + 2;
  psVar14 = &photo_wrk.rare[0].no;
  piVar13 = sort[9] + 1;
  paiVar5 = sort[9];
  iVar6 = 2;
  do {
    iVar6 = iVar6 + -1;
    uVar1 = *psVar14;
    (*paiVar5)[0] = ((SUBJECT_WRK *)(psVar14 + -6))->score;
    psVar14 = psVar14 + 10;
    *piVar13 = 5;
    paiVar5 = paiVar5[1];
    *piVar11 = (uint)uVar1;
    piVar13 = piVar13 + 3;
    piVar11 = piVar11 + 3;
  } while (-1 < iVar6);
  iVar6 = 0xc;
  psVar14 = photo_wrk.spcl_pht_score;
  piVar11 = sort[0xc] + 2;
  pauVar16 = photo_wrk.spcl_pht_no[2];
  piVar13 = sort[0xc] + 1;
  paiVar5 = sort[0xc];
  do {
    uVar1 = *psVar14;
    iVar6 = iVar6 + 1;
    auVar3 = *pauVar16;
    psVar14 = psVar14 + 1;
    (*paiVar5)[0] = (uint)uVar1;
    pauVar16 = pauVar16[10];
    *piVar13 = 6;
    paiVar5 = paiVar5[1];
    *piVar11 = (uint)(ushort)auVar3;
    piVar13 = piVar13 + 3;
    piVar11 = piVar11 + 3;
  } while (iVar6 < 0x10);
  iVar6 = 1;
  iVar7 = 0;
  do {
    iVar18 = iVar6;
    if (iVar18 < 0x10) {
      paiVar5 = sort[iVar18];
      piVar11 = piVar17 + iVar18 * 3;
      piVar13 = piVar15 + iVar18 * 3;
      do {
        tmp[0] = sort[iVar7][0];
        if (tmp[0] < (*paiVar5)[0]) {
          tmp[1] = piVar15[iVar7 * 3];
          tmp[2] = piVar17[iVar7 * 3];
          sort[iVar7][0] = (*paiVar5)[0];
          piVar15[iVar7 * 3] = *piVar13;
          piVar17[iVar7 * 3] = *piVar11;
          (*paiVar5)[0] = tmp[0];
          paiVar5 = sort[iVar18];
          *piVar13 = tmp[1];
          piVar13 = piVar15 + iVar18 * 3;
          *piVar11 = tmp[2];
          piVar11 = piVar17 + iVar18 * 3;
        }
        piVar11 = piVar11 + 3;
        piVar13 = piVar13 + 3;
        paiVar5 = paiVar5[1];
      } while ((int)piVar11 < (int)(tmp + 2));
    }
    iVar6 = iVar18 + 1;
    iVar7 = iVar18;
  } while (iVar18 < 0x10);
  do {
    if (*(int *)paiVar12 == 0) {
      (*pasVar10)[0] = 0;
      *psVar8 = 0;
    }
    else {
      sVar4 = *(short *)piVar17;
      (*pasVar10)[0] = *(short *)piVar15;
      *psVar8 = sVar4;
    }
    psVar8 = psVar8 + 2;
    pasVar10 = pasVar10[1];
    piVar17 = piVar17 + 3;
    piVar15 = piVar15 + 3;
    paiVar12 = (int (*) [3])((int)paiVar12 + 0xc);
  } while ((int)psVar8 < (int)((int)&pic->score + 2));
  return;
}
