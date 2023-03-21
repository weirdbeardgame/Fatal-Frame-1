// STATUS: NOT STARTED

DOOR_TYPE_DAT door_type_dat[0] = {
};
static float dopen_tbl_dplrn[0] = {
};
static float dopen_tbl_dplrc[0] = {
};
static float dopen_tbl_dplrl[0] = {
};
static float dopen_tbl_dpsrc[0] = {
};
static float dopen_tbl_dplln[0] = {
};
static float dopen_tbl_dpllc[0] = {
};
static float dopen_tbl_dplll[0] = {
};
static float dopen_tbl_dpslc[0] = {
};
static float dopen_tbl_dpln_dbl0[0] = {
};
static float dopen_tbl_dpln_dbl1[0] = {
};
static float dopen_tbl_dplc_dbl0[0] = {
};
static float dopen_tbl_dplc_dbl1[0] = {
};
static float dopen_tbl_dpsc_dbl0[0] = {
};
static float dopen_tbl_dpsc_dbl1[0] = {
};
static float dopen_tbl_frc[0] = {
};
static float dopen_tbl_frr[0] = {
};
static float dopen_tbl_flc[0] = {
};
static float dopen_tbl_flr[0] = {
};
static float dopen_tbl_f_dbl0[0] = {
};
static float dopen_tbl_f_dbl1[0] = {
};
static float dclose68_tbl[0] = {
};
static float dclose69_tbl[0] = {
};
static float dclose70_tbl[0] = {
};
static float dclose71_tbl[0] = {
};
static float dclose72r_tbl[0] = {
};
static float dclose72l_tbl[0] = {
};
static float dclose73r_tbl[0] = {
};
static float dclose73l_tbl[0] = {
};
static float dclose74r_tbl[0] = {
};
static float dclose74l_tbl[0] = {
};
static float dopen_tbl_drot[0] = {
};
static float dopen_tbl_dpsk[0] = {
};
static float dopen_tbl_dplk[0] = {
};
float *dtbl_tbl[0] = {
};
DOOR_MTN_DAT door_mtn_dat[0] = {
};
DOOR_MOVE_DAT door_move_dat[0] = {
};

DOOR_MTN_DAT* GetDoorMtnDat(u_char dtype) {
  return (DOOR_MTN_DAT *)(&door_mtn_dat + ((int)(char)dtype & 0xffU) * 0x10);
}

DOOR_TYPE_DAT* GetDoorTypeDatP(int no) {
  return (DOOR_TYPE_DAT *)(&door_type_dat + no * 0x10);
}

DOOR_TYPE_DAT GetDoorTypeDat(int no) {
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  
  uVar2 = *(ulong *)(&door_type_dat + no * 0x10);
  uVar3 = *(ulong *)(no * 0x10 + 0x333b48);
  puVar1 = (undefined *)((int)&__return_storage_ptr__->move_max + 1);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
  uVar4 = (uint)__return_storage_ptr__ & 7;
  *(ulong *)((int)__return_storage_ptr__ - uVar4) =
       uVar2 << uVar4 * 8 |
       *(ulong *)((int)__return_storage_ptr__ - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&__return_storage_ptr__->dbl_did + 1);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
  uVar4 = (uint)&__return_storage_ptr__->se_file & 7;
  puVar5 = (ulong *)((int)&__return_storage_ptr__->se_file - uVar4);
  *puVar5 = uVar3 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  return __return_storage_ptr__;
}

u_short GetDoorMotionTblPos(u_char door_motion_dat_no) {
  return *(short *)(&door_move_dat + ((int)(char)door_motion_dat_no & 0xffU) * 8);
}

int IsFusumaType(u_char type) {
  DOOR_TYPE_DAT *pDVar1;
  
  pDVar1 = GetDoorTypeDatP((int)(char)type & 0xff);
  return (int)((pDVar1->attribute & 0x1000U) != 0);
}

int IsRotType(u_char type) {
  DOOR_TYPE_DAT *pDVar1;
  
  pDVar1 = GetDoorTypeDatP((int)(char)type & 0xff);
  return (int)(pDVar1->room_id != 0xff);
}

int IsFusumaAttr(u_short attr) {
  return (int)((attr & 0x1000U) != 0);
}

int MotionIsDouble(u_char motion_no) {
  switch(motion_no) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x10':
    return 0;
  case '\b':
  case '\t':
  case '\n':
  case '\x0f':
    return 1;
  default:
    return 0;
  }
}
