#include "ev_main.h"

// warning: multiple differing types with the same name (#108,  not equal)
enum { EV_MSG_OFF = 0, EV_MSG_ON = 1, EV_MSG_END = 2 };

// warning: multiple differing types with the same name (#108,  not equal)
enum {
  BTL_LOCK_NO_REQ = 0,
  BTL_LOCK_SET0 = 1,
  BTL_LOCK_SET1 = 2,
  BTL_LOCK_SET_MSG = 3,
  BTL_LOCK_AFTER = 4,
  BTL_LOCK_AFTER_MSG = 5
};

// warning: multiple differing types with the same name (#108,  not equal)
enum {
  ENDING_MODE_NO_REQ = 0,
  ENDING_MODE_MOVIE = 1,
  ENDING_MODE_STAFF = 2,
  ENDING_MODE_CLEAR = 3,
  ENDING_MODE_SAVE = 4
};

u_char event_stts[250] = {
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
    /* [15] = */ 0,
    /* [16] = */ 0,
    /* [17] = */ 0,
    /* [18] = */ 0,
    /* [19] = */ 0,
    /* [20] = */ 0,
    /* [21] = */ 0,
    /* [22] = */ 0,
    /* [23] = */ 0,
    /* [24] = */ 0,
    /* [25] = */ 0,
    /* [26] = */ 0,
    /* [27] = */ 0,
    /* [28] = */ 0,
    /* [29] = */ 0,
    /* [30] = */ 0,
    /* [31] = */ 0,
    /* [32] = */ 0,
    /* [33] = */ 0,
    /* [34] = */ 0,
    /* [35] = */ 0,
    /* [36] = */ 0,
    /* [37] = */ 0,
    /* [38] = */ 0,
    /* [39] = */ 0,
    /* [40] = */ 0,
    /* [41] = */ 0,
    /* [42] = */ 0,
    /* [43] = */ 0,
    /* [44] = */ 0,
    /* [45] = */ 0,
    /* [46] = */ 0,
    /* [47] = */ 0,
    /* [48] = */ 0,
    /* [49] = */ 0,
    /* [50] = */ 0,
    /* [51] = */ 0,
    /* [52] = */ 0,
    /* [53] = */ 0,
    /* [54] = */ 0,
    /* [55] = */ 0,
    /* [56] = */ 0,
    /* [57] = */ 0,
    /* [58] = */ 0,
    /* [59] = */ 0,
    /* [60] = */ 0,
    /* [61] = */ 0,
    /* [62] = */ 0,
    /* [63] = */ 0,
    /* [64] = */ 0,
    /* [65] = */ 0,
    /* [66] = */ 0,
    /* [67] = */ 0,
    /* [68] = */ 0,
    /* [69] = */ 0,
    /* [70] = */ 0,
    /* [71] = */ 0,
    /* [72] = */ 0,
    /* [73] = */ 0,
    /* [74] = */ 0,
    /* [75] = */ 0,
    /* [76] = */ 0,
    /* [77] = */ 0,
    /* [78] = */ 0,
    /* [79] = */ 0,
    /* [80] = */ 0,
    /* [81] = */ 0,
    /* [82] = */ 0,
    /* [83] = */ 0,
    /* [84] = */ 0,
    /* [85] = */ 0,
    /* [86] = */ 0,
    /* [87] = */ 0,
    /* [88] = */ 0,
    /* [89] = */ 0,
    /* [90] = */ 0,
    /* [91] = */ 0,
    /* [92] = */ 0,
    /* [93] = */ 0,
    /* [94] = */ 0,
    /* [95] = */ 0,
    /* [96] = */ 0,
    /* [97] = */ 0,
    /* [98] = */ 0,
    /* [99] = */ 0,
    /* [100] = */ 0,
    /* [101] = */ 0,
    /* [102] = */ 0,
    /* [103] = */ 0,
    /* [104] = */ 0,
    /* [105] = */ 0,
    /* [106] = */ 0,
    /* [107] = */ 0,
    /* [108] = */ 0,
    /* [109] = */ 0,
    /* [110] = */ 0,
    /* [111] = */ 0,
    /* [112] = */ 0,
    /* [113] = */ 0,
    /* [114] = */ 0,
    /* [115] = */ 0,
    /* [116] = */ 0,
    /* [117] = */ 0,
    /* [118] = */ 0,
    /* [119] = */ 0,
    /* [120] = */ 0,
    /* [121] = */ 0,
    /* [122] = */ 0,
    /* [123] = */ 0,
    /* [124] = */ 0,
    /* [125] = */ 0,
    /* [126] = */ 0,
    /* [127] = */ 0,
    /* [128] = */ 0,
    /* [129] = */ 0,
    /* [130] = */ 0,
    /* [131] = */ 0,
    /* [132] = */ 0,
    /* [133] = */ 0,
    /* [134] = */ 0,
    /* [135] = */ 0,
    /* [136] = */ 0,
    /* [137] = */ 0,
    /* [138] = */ 0,
    /* [139] = */ 0,
    /* [140] = */ 0,
    /* [141] = */ 0,
    /* [142] = */ 0,
    /* [143] = */ 0,
    /* [144] = */ 0,
    /* [145] = */ 0,
    /* [146] = */ 0,
    /* [147] = */ 0,
    /* [148] = */ 0,
    /* [149] = */ 0,
    /* [150] = */ 0,
    /* [151] = */ 0,
    /* [152] = */ 0,
    /* [153] = */ 0,
    /* [154] = */ 0,
    /* [155] = */ 0,
    /* [156] = */ 0,
    /* [157] = */ 0,
    /* [158] = */ 0,
    /* [159] = */ 0,
    /* [160] = */ 0,
    /* [161] = */ 0,
    /* [162] = */ 0,
    /* [163] = */ 0,
    /* [164] = */ 0,
    /* [165] = */ 0,
    /* [166] = */ 0,
    /* [167] = */ 0,
    /* [168] = */ 0,
    /* [169] = */ 0,
    /* [170] = */ 0,
    /* [171] = */ 0,
    /* [172] = */ 0,
    /* [173] = */ 0,
    /* [174] = */ 0,
    /* [175] = */ 0,
    /* [176] = */ 0,
    /* [177] = */ 0,
    /* [178] = */ 0,
    /* [179] = */ 0,
    /* [180] = */ 0,
    /* [181] = */ 0,
    /* [182] = */ 0,
    /* [183] = */ 0,
    /* [184] = */ 0,
    /* [185] = */ 0,
    /* [186] = */ 0,
    /* [187] = */ 0,
    /* [188] = */ 0,
    /* [189] = */ 0,
    /* [190] = */ 0,
    /* [191] = */ 0,
    /* [192] = */ 0,
    /* [193] = */ 0,
    /* [194] = */ 0,
    /* [195] = */ 0,
    /* [196] = */ 0,
    /* [197] = */ 0,
    /* [198] = */ 0,
    /* [199] = */ 0,
    /* [200] = */ 0,
    /* [201] = */ 0,
    /* [202] = */ 0,
    /* [203] = */ 0,
    /* [204] = */ 0,
    /* [205] = */ 0,
    /* [206] = */ 0,
    /* [207] = */ 0,
    /* [208] = */ 0,
    /* [209] = */ 0,
    /* [210] = */ 0,
    /* [211] = */ 0,
    /* [212] = */ 0,
    /* [213] = */ 0,
    /* [214] = */ 0,
    /* [215] = */ 0,
    /* [216] = */ 0,
    /* [217] = */ 0,
    /* [218] = */ 0,
    /* [219] = */ 0,
    /* [220] = */ 0,
    /* [221] = */ 0,
    /* [222] = */ 0,
    /* [223] = */ 0,
    /* [224] = */ 0,
    /* [225] = */ 0,
    /* [226] = */ 0,
    /* [227] = */ 0,
    /* [228] = */ 0,
    /* [229] = */ 0,
    /* [230] = */ 0,
    /* [231] = */ 0,
    /* [232] = */ 0,
    /* [233] = */ 0,
    /* [234] = */ 0,
    /* [235] = */ 0,
    /* [236] = */ 0,
    /* [237] = */ 0,
    /* [238] = */ 0,
    /* [239] = */ 0,
    /* [240] = */ 0,
    /* [241] = */ 0,
    /* [242] = */ 0,
    /* [243] = */ 0,
    /* [244] = */ 0,
    /* [245] = */ 0,
    /* [246] = */ 0,
    /* [247] = */ 0,
    /* [248] = */ 0,
    /* [249] = */ 0};
EVENT_WRK ev_wrk = {
    /* .mode = */ 0,
    /* .evt_no = */ 0,
    /* .movie_on = */ 0,
    /* .next_msn = */ 0,
    /* .msg_init = */ 0,
    /* .use_item = */ 0,
    /* .get_item = */ 0,
    /* .btl_ene = */ 0,
    /* .end_ev = */ 0,
    /* .btl_lock = */ 0,
    /* .pht_2d = */ 0,
    /* .pht_furn = */ 0,
    /* .pht_ev = */
    {/* [0] = */ 0,
     /* [1] = */ 0,
     /* [2] = */ 0,
     /* [3] = */ 0,
     /* [4] = */ 0,
     /* [5] = */ 0,
     /* [6] = */ 0,
     /* [7] = */ 0,
     /* [8] = */ 0,
     /* [9] = */ 0},
    /* .pos_req = */
    {/* [0] = */ 0,
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
     /* [15] = */ 0},
    /* .spev_tmp = */
    {/* [0] = */ 0,
     /* [1] = */ 0,
     /* [2] = */ 0,
     /* [3] = */ 0},
    /* .gst_door = */
    {/* [0] = */ 0,
     /* [1] = */ 0},
    /* .face_stts = */
    {/* [0] = */ 0,
     /* [1] = */ 0,
     /* [2] = */ 0,
     /* [3] = */ 0}};
int black_time = 0;
int load_file_id = 0;
int ending_mode = 0;
int clear_disp = 0;
int clear_disp_mode = 0;
int first_clear_flg = 0;

void EventWrkInit() {
  memset(&ev_wrk, 0, 0x30);
  memset(event_stts, 0, 0xfa);
  black_time = 0;
  load_file_id = 0;
  return;
}

void EventInit() {
  int i;

  int iVar1;
  byte *pbVar2;

  if (event_stts[0] == '\0') {
    ingame_wrk.mode = 7;
    ev_wrk.mode = 1;
    ev_wrk.pht_2d = 0xff;
    pbVar2 = ev_wrk.pht_ev + 9;
    ev_wrk.evt_no = 0;
    ev_wrk.btl_ene = 0xff;
    iVar1 = 9;
    ev_wrk.use_item = 0xff;
    ev_wrk.msg_init = 0;
    do {
      *pbVar2 = 0xff;
      iVar1 = iVar1 + -1;
      pbVar2 = pbVar2 + -1;
    } while (-1 < iVar1);
    iVar1 = 1;
    pbVar2 = ev_wrk.gst_door + 1;
    do {
      *pbVar2 = 0xff;
      iVar1 = iVar1 + -1;
      pbVar2 = pbVar2 + -1;
    } while (-1 < iVar1);
    EventMain();
    return;
  }
  return;
}

void EventMain() {
  int i;
  int loop;
  int *addr;
  u_char *dat_adr;
  short int scene_no;

  byte *pbVar1;
  uchar *puVar2;
  short *psVar3;
  int *piVar4;
  undefined uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  byte *dat_adr;
  int iVar10;
  char cVar11;
  int *pbVar13;
  int *addr;
  float fVar12;
  short scene_no;

  bVar8 = true;
  addr = (int *)(*(int *)(iRam007f0004 + (uint)ev_wrk.evt_no * 4 + 0x7f0000) +
                 0x7f0000);
  uVar5 = *(undefined *)addr;
  do {
    switch (uVar5) {
    case 10:
      if (*(char *)((int)addr + 1) == '\0') {
        if (ev_wrk.msg_init == 0) {
          iVar10 = GetEventMessageAddr(*(ushort *)((int)addr + 2));
          SetMessageAddr(iVar10);
          ev_wrk.msg_init = 1;
        }
        if (ev_wrk.msg_init == 1) {
          if (*key_now[5] == 1) {
            MessageWaitOff();
          }
          iVar10 = SetMessage();
          bVar8 = false;
          if (iVar10 == 0) {
            ev_wrk.msg_init = 2;
          }
          goto LAB_0019e3b8;
        }
        addr = addr + 1;
      } else {
        addr = addr + 1;
      }
      break;
    case 0xb:
      if (*(char *)((int)addr + 1) == '\0') {
        bVar6 = *(byte *)((int)addr + 2);
        cVar11 = *(char *)(addr + 1);
        cVar7 = *(char *)((int)addr + 6);
        eff_filament_off = 1;
        iVar10 = EventSceneCtrl((ushort)bVar6);
        if (iVar10 == 2) {
          *(undefined *)((int)addr + 1) = 1;
          ingame_wrk.stts = ingame_wrk.stts & 0xd7;
          event_stts[ev_wrk.evt_no] = '\x01';
          if (cVar11 == '\0') {
            SetSysBackColor(0, 0, 0);
            scene_bg_color = 0;
            SeRevival(0x1e);
            eff_filament_off = 0;
            AdpcmMapUse();
            if (bVar6 == 0x21) {
              r022_light_on = 1;
              SetPreRenderR022(1);
            }
          } else {
            ingame_wrk.stts = ingame_wrk.stts | 0x28;
            AdpcmSceneStop();
            AdpcmMapNoUse();
            if (cVar7 == '\0') {
              SetSysBackColor(0, 0, 0);
              scene_bg_color = 0;
            } else {
              SetSysBackColor(0xff, 0xff, 0xff);
              scene_bg_color = 1;
            }
          }
        }
        return;
      }
      addr = addr + 2;
      break;
    case 0xc:
      SavePointMenuOpen();
    case 0xfb:
    switchD_0019d678_caseD_fb:
      addr = (int *)((int)addr + 2);
      break;
    case 0xd:
      ingame_wrk.mode = 8;
      bVar8 = false;
      SpecialEventInit(*(uchar *)((int)addr + 1));
      break;
    case 0xe:
      addr = addr + 3;
      break;
    case 0xf:
      if (*(char *)((int)addr + 1) == '\0') {
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x10:
      if (*(char *)((int)addr + 1) == '\0') {
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x14:
      if (*(char *)((int)addr + 1) != '\0') {
        addr = addr + 1;
        break;
      }
    LAB_0019deb0:
      *(undefined *)((int)addr + 1) = 1;
      goto LAB_0019e3b8;
    case 0x15:
      if (*(char *)((int)addr + 1) == '\0')
        goto LAB_0019deb0;
      addr = addr + 1;
      break;
    case 0x16:
      if (*(char *)((int)addr + 1) == '\0') {
        AdpcmPlayEvent((int)*(short *)((int)addr + 2), *(short *)(addr + 1),
                       (int)*(short *)((int)addr + 6));
      LAB_0019d9e0:
        *(undefined *)((int)addr + 1) = 1;
      LAB_0019df74:
        addr = addr + 2;
      } else {
        addr = addr + 2;
      }
      break;
    case 0x17:
      if (*(char *)((int)addr + 1) == '\0') {
        AdpcmStopEvent((int)*(short *)((int)addr + 2));
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x19:
      if (*(char *)((int)addr + 1) == '\0') {
        SeEvReq((uint) * (byte *)((int)addr + 2),
                (uint) * (byte *)((int)addr + 3), 0, '\0');
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x1a:
      if (*(char *)((int)addr + 1) == '\0') {
        SeEvStop((uint) * (byte *)((int)addr + 2));
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x1c:
      if (*(char *)((int)addr + 1) == '\0') {
        plyr_wrk.sta = plyr_wrk.sta | 0x10;
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x1d:
      if (*(char *)((int)addr + 1) == '\0') {
        plyr_wrk.sta = plyr_wrk.sta & 0xffffffef;
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x1e:
      if (*(char *)((int)addr + 1) == '\0') {
        plyr_wrk.move_box.spd.z = (float)(uint) * (ushort *)((int)addr + 2);
        plyr_wrk.move_box.rot.x = (float)(uint) * (ushort *)((int)addr + 6);
        plyr_wrk.move_box.spd.w = (float)(int)*(short *)(addr + 1);
        plyr_wrk.mvsta = 0;
        SetPlyrAnime('\0', '\0');
        goto LAB_0019d9e0;
      }
      addr = addr + 2;
      break;
    case 0x1f:
      if (*(char *)((int)addr + 1) == '\0') {
        plyr_wrk.move_box.trot.w = SetRot360(*(ushort *)((int)addr + 2));
        *(undefined *)((int)addr + 1) = 1;
        goto LAB_0019e3b8;
      }
      addr = addr + 1;
      break;
    case 0x20:
      EventEnemySet((byte *)addr);
    LAB_0019da18:
      addr = (int *)((int)addr + 10);
      break;
    case 0x21:
      if (*(char *)((int)addr + 1) == '\0') {
        scene_no = *(short *)(addr + 2);
        *(float *)((int)ene_wrk + (uint) * (byte *)((int)addr + 2) * 0x430 +
                   0x30) = (float)(uint) * (ushort *)(addr + 1);
        *(float *)((int)ene_wrk + (uint) * (byte *)((int)addr + 2) * 0x430 +
                   0x34) = (float)(int)*(short *)((int)addr + 6);
        *(float *)((int)ene_wrk + (uint) * (byte *)((int)addr + 2) * 0x430 +
                   0x38) = (float)(uint)(ushort)scene_no;
        *(undefined4 *)((int)ene_wrk +
                        (uint) * (byte *)((int)addr + 2) * 0x430 + 0x3c) =
            0x3f800000;
        *(undefined *)((int)addr + 1) = 1;
        goto LAB_0019da18;
      }
      addr = (int *)((int)addr + 10);
      break;
    case 0x22:
      if (*(char *)((int)addr + 1) == '\0') {
        fVar12 = SetRot360(*(ushort *)(addr + 1));
        *(float *)((int)ene_wrk + (uint) * (byte *)((int)addr + 2) * 0x430 +
                   100) = fVar12;
        *(undefined4 *)((int)ene_wrk +
                        (uint) * (byte *)((int)addr + 2) * 0x430 + 0x6c) =
            0x3f800000;
        *(undefined *)((int)addr + 1) = 1;
      LAB_0019df50:
        addr = (int *)((int)addr + 6);
      } else {
        addr = (int *)((int)addr + 6);
      }
      break;
    case 0x23:
      if (*(char *)((int)addr + 1) == '\0') {
        *(undefined *)((int)addr + 1) = 1;
        goto LAB_0019df50;
      }
      addr = (int *)((int)addr + 6);
      break;
    case 0x28:
      if (*(char *)((int)addr + 1) == '\0') {
        uVar9 = (uint)poss_item[*(byte *)((int)addr + 2)] +
                (uint) * (byte *)((int)addr + 3);
        if (0x62 < uVar9) {
          uVar9 = 99;
        }
        poss_item[*(byte *)((int)addr + 2)] = (byte)uVar9;
        if (poss_item[9] != 0) {
          poss_item[9] = 1;
        }
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x29:
      if (*(char *)((int)addr + 1) == '\0') {
        pbVar13 = (int *)(uint) * (byte *)((int)addr + 2);
        pbVar13 = pbVar13 + 0x950d8;
        if (*(byte *)((int)addr + 3) < *(byte *)pbVar13) {
          *(byte *)pbVar13 = *(byte *)pbVar13 - 1;
        } else {
          *(undefined *)pbVar13 = 0;
        }
        *(undefined *)((int)addr + 1) = 1;
        cVar11 = *(char *)((int)addr + 2);
      } else {
        cVar11 = *(char *)((int)addr + 2);
      }
      if (cVar11 == '\t') {
        if (ingame_wrk.clear_count != 0) {
          poss_item[9] = 1;
        }
        goto LAB_0019e3b8;
      }
      addr = addr + 1;
      break;
    case 0x2a:
      if (*(char *)((int)addr + 1) == '\0') {
        item_ap[*(byte *)((int)addr + 2)][0] = 0;
        item_ap[*(byte *)((int)addr + 2)][1] = 0;
        ItemDispDataRenew();
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x2b:
      if (*(char *)((int)addr + 1) == '\0') {
        item_ap[*(byte *)((int)addr + 2)][0] = -1;
        item_ap[*(byte *)((int)addr + 2)][1] = -1;
        ItemDispDataRenew();
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x2c:
      if (*(char *)((int)addr + 1) == '\0') {
        if (poss_file[*(byte *)((int)addr + 2)][*(byte *)((int)addr + 3)] !=
            '\x03') {
          poss_file[*(byte *)((int)addr + 2)][*(byte *)((int)addr + 3)] =
              '\x02';
        }
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x2d:
      if (*(char *)((int)addr + 1) == '\0') {
        poss_file[*(byte *)((int)addr + 2)][*(byte *)((int)addr + 3)] = '\x01';
      LAB_0019ddb0:
        *(undefined *)((int)addr + 1) = 1;
        ItemDispDataRenew();
        addr = addr + 1;
      } else {
        addr = addr + 1;
      }
      break;
    case 0x2e:
      if (*(char *)((int)addr + 1) == '\0') {
        poss_file[*(byte *)((int)addr + 2)][*(byte *)((int)addr + 3)] = '\0';
        goto LAB_0019ddb0;
      }
      addr = addr + 1;
      break;
    case 0x2f:
      ItemGet('\x04', *(uchar *)((int)addr + 1), *(uchar *)((int)addr + 2),
              *(uchar *)(addr + 1));
      ingame_wrk.mode = 0xe;
      event_stts[ev_wrk.evt_no] = '\x01';
      ev_wrk.evt_no = 0xff;
      ev_wrk.get_item = 1;
      goto LAB_0019e48c;
    case 0x30:
      ItemGet(*(uchar *)((int)addr + 2), *(uchar *)((int)addr + 3),
              *(uchar *)(addr + 1), *(uchar *)((int)addr + 6));
      ingame_wrk.mode = 0xe;
      event_stts[ev_wrk.evt_no] = '\x01';
      ev_wrk.evt_no = 0xff;
      ev_wrk.get_item = 1;
      goto LAB_0019e48c;
    case 0x32:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorKeyLockOnly(*(short *)((int)addr + 2));
      LAB_0019e1c4:
        *(undefined *)((int)addr + 1) = 1;
        goto LAB_0019e3b8;
      }
      addr = addr + 1;
      break;
    case 0x33:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorKeyUnlockOnly(*(short *)((int)addr + 2));
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x34:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorSttsChange(*(short *)((int)addr + 2), '\x04');
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x35:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorSttsChange(*(short *)((int)addr + 2), '\x01');
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x36:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorSttsChange(*(short *)((int)addr + 2), '\x03');
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x37:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorSttsChange(*(short *)((int)addr + 2), '\x06');
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x38:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorPassSetHide(*(short *)((int)addr + 2));
        goto LAB_0019deb0;
      }
      addr = addr + 1;
      break;
    case 0x39:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorSttsChange(*(short *)((int)addr + 2), '\x05');
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0x3a:
      if (*(char *)((int)addr + 1) == '\0') {
        DoorChangeModel(*(short *)((int)addr + 2), *(short *)(addr + 1));
        *(undefined *)((int)addr + 1) = 1;
        goto LAB_0019df50;
      }
      addr = (int *)((int)addr + 6);
      break;
    case 0x3b:
      psVar3 = (short *)((int)addr + 2);
      puVar2 = (uchar *)((int)addr + 1);
      addr = addr + 1;
      DoorDispOnOff(*psVar3, *puVar2);
      break;
    case 0x3c:
      if (*(char *)((int)addr + 1) == '\0') {
        if (*(char *)(addr + 1) == '\0') {
          FurnActOffEve(*(short *)((int)addr + 2));
          goto LAB_0019df50;
        }
        FurnActOnEve(*(short *)((int)addr + 2));
        addr = (int *)((int)addr + 6);
      } else {
        addr = (int *)((int)addr + 6);
      }
      break;
    case 0x3d:
      if (*(char *)((int)addr + 1) == '\0') {
        SetFurnAttrEve(*(short *)((int)addr + 2), *(short *)(addr + 1),
                       (uint) * (byte *)((int)addr + 6));
        goto LAB_0019df74;
      }
      addr = addr + 2;
      break;
    case 0x3e:
      psVar3 = (short *)((int)addr + 2);
      puVar2 = (uchar *)((int)addr + 1);
      addr = addr + 1;
      ChangeRotDoorFaceRoomId(*psVar3, *puVar2);
      break;
    case 0x3f:
      psVar3 = (short *)((int)addr + 2);
      addr = addr + 1;
      DoorPassSetTouch(*psVar3);
      break;
    case 0x46:
      puVar2 = (uchar *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      MapFloorChange(*puVar2);
      break;
    case 0x47:
      DoorOpenShiftForce(*(short *)((int)addr + 2));
      addr = addr + 1;
      if (ev_wrk.btl_lock != 0) {
        UnlockAllDoorInNowRoom();
        ev_wrk.btl_lock = 0;
      }
      break;
    case 0x50:
      if (*(char *)((int)addr + 1) == '\0') {
        plyr_wrk.sta = plyr_wrk.sta | 2;
      } else {
        plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      }
      if (ingame_wrk.clear_count != 0) {
        plyr_wrk.sta = plyr_wrk.sta & 0xfffffffd;
      }
      goto switchD_0019d678_caseD_fb;
    case 0x5a:
      dat_adr = (byte *)((int)addr + 1);
      pbVar1 = (byte *)((int)addr + 2);
      addr = addr + 1;
      ev_wrk.pht_ev[*dat_adr] = *pbVar1;
      break;
    case 0x5b:
      addr = (int *)((int)addr + 2);
      dat_adr = ev_wrk.pht_ev + 9;
      iVar10 = 9;
      do {
        *dat_adr = 0xff;
        iVar10 = iVar10 + -1;
        dat_adr = dat_adr + -1;
      } while (-1 < iVar10);
      break;
    case 100:
      puVar2 = (uchar *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      PuzzleGhostReq(*puVar2);
      break;
    case 0x65:
      puVar2 = (uchar *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      PuzzleGhostLoadReq(*puVar2);
      break;
    case 0x6e:
      if (*(char *)((int)addr + 1) == '\0') {
        EndAutoEne('\x01');
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x78:
      puVar2 = (uchar *)((int)addr + 1);
      psVar3 = (short *)((int)addr + 2);
      piVar4 = addr + 1;
      addr = (int *)((int)addr + 6);
      ReqDramaCamera(*puVar2, *psVar3, *(short *)piVar4);
      CameraNoRenewEach('\x03');
      break;
    case 0x82:
      addr = (int *)((int)addr + 2);
      DoorLockBattleSet();
      break;
    case 0x8c:
      dat_adr = (byte *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      ChangeMonochrome((uint)*dat_adr);
      break;
    case 0x8d:
      dat_adr = (byte *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      ChangeMAGATOKI2((uint)*dat_adr);
      break;
    case 0x96:
      if (*(char *)((int)addr + 1) == '\0') {
        black_time = 0x40;
        SetBlackOut2(0x40);
        *(undefined *)((int)addr + 1) = 1;
      }
      if (black_time != 0) {
        bVar8 = false;
        black_time = black_time + -1;
      }
      goto switchD_0019d678_caseD_fb;
    case 0x97:
      if (*(char *)((int)addr + 1) == '\0') {
        SetBlackIn2(0x40);
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x98:
      cVar11 = *(char *)((int)addr + 1);
      if (cVar11 == '\0') {
        load_file_id = SeFileLoadAndSetWide(*(short *)((int)addr + 2));
        cVar11 = '\x01';
        *(undefined *)((int)addr + 1) = 1;
      }
      goto LAB_0019e2e8;
    case 0x99:
      if (*(char *)((int)addr + 1) == '\0') {
        SeStartFix(0x5d, 0, 0x1000, 0x1000, 0);
        *(undefined *)((int)addr + 1) = 1;
        goto switchD_0019d678_caseD_fb;
      }
      addr = (int *)((int)addr + 2);
      break;
    case 0x9a:
      if (*(char *)((int)addr + 1) == '\0') {
        load_file_id = SeFileLoadAndSetWide(*(short *)((int)addr + 2));
        SetBlackOut2(0x40);
        *(undefined *)((int)addr + 1) = 1;
      }
      if (black_time != 0) {
        bVar8 = false;
        black_time = black_time + -1;
      }
      cVar11 = *(char *)((int)addr + 1);
    LAB_0019e2e8:
      if (cVar11 == '\x01') {
        if ((load_file_id == -1) ||
            (iVar10 = IsLoadEnd(load_file_id), iVar10 != 0)) {
          *(undefined *)((int)addr + 1) = 2;
        } else {
          bVar8 = false;
        }
      LAB_0019e3b8:
        addr = addr + 1;
      } else {
        addr = addr + 1;
      }
      break;
    case 200:
      addr = (int *)((int)addr + 2);
      ap_wrk.stts = ap_wrk.stts | 0x80;
      break;
    case 0xc9:
      addr = (int *)((int)addr + 2);
      ap_wrk.stts = ap_wrk.stts & 0x7f;
      break;
    case 0xca:
      addr = (int *)((int)addr + 2);
      FloatGhostAppearStop();
      break;
    case 0xcb:
      addr = (int *)((int)addr + 2);
      FloatGhostAppearStart();
      break;
    case 0xcc:
      addr = (int *)((int)addr + 2);
      ap_wrk.stts = ap_wrk.stts | 0x20;
      break;
    case 0xcd:
      addr = (int *)((int)addr + 2);
      ap_wrk.stts = ap_wrk.stts & 0xdf;
      break;
    case 0xce:
      addr = (int *)((int)addr + 2);
      FuyuEneRelease();
      break;
    case 0xcf:
      dat_adr = (byte *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      ap_wrk.room_fg[*dat_adr] = 0;
      break;
    case 0xd0:
      dat_adr = (byte *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      ap_wrk.room_fg[*dat_adr] = 1;
      break;
    case 0xd1:
      ram0x003227d6 = 1000;
      goto switchD_0019d678_caseD_fb;
    case 0xd2:
      ap_wrk._92_2_ = 1000;
      addr = (int *)((int)addr + 2);
      ap_wrk.stts = ap_wrk.stts | 4;
      break;
    case 0xd3:
      dat_adr = (byte *)((int)addr + 1);
      addr = (int *)((int)addr + 2);
      SettleGhostAppearReq((uint)*dat_adr);
      bVar6 = ev_wrk.evt_no;
      ev_wrk.evt_no = 0xff;
      event_stts[bVar6] = '\x01';
      goto LAB_0019e48c;
    case 0xe6:
      if (*(char *)((int)addr + 1) == '\0') {
        DelDataLoadWrk(*(short *)((int)addr + 2));
        goto LAB_0019e1c4;
      }
      addr = addr + 1;
      break;
    case 0xf0:
      if (*(char *)((int)addr + 1) == '\0') {
        event_stts[*(short *)((int)addr + 2)] = '\x01';
        goto LAB_0019e3b8;
      }
      addr = addr + 1;
      break;
    case 0xfa:
      if (ingame_wrk.msn_no == 4) {
        EndingInit();
      } else if (ingame_wrk.msn_no == 0) {
        ingame_wrk.msn_no = ingame_wrk.msn_no + 1;
        NewgameItemInit2();
        InterMissionEnd();
      } else {
        InterMissionInit();
      }
      ev_wrk.evt_no = 0xff;
      goto LAB_0019e48c;
    case 0xfe:
      if (ingame_wrk.mode != 0x10) {
        ingame_wrk.mode = 6;
      }
      ev_wrk.evt_no = 0xff;
      goto LAB_0019e48c;
    case 0xff:
      ingame_wrk.mode = 6;
      event_stts[ev_wrk.evt_no] = '\x01';
      ev_wrk.evt_no = 0xff;
    LAB_0019e48c:
      bVar8 = false;
      ev_wrk.mode = 0;
    }
    if (!bVar8) {
      return;
    }
    uVar5 = *(undefined *)addr;
  } while (true);
}

void EventOpenMain() {
  uchar uVar1;

  if ((((ingame_wrk.mode != 7) && (ev_wrk.get_item == 0)) &&
       (uVar1 = IsDoorOpenCtrlMode(), uVar1 == '\0')) &&
      (uVar1 = EventOpenCtrl(), uVar1 != '\0')) {
    ingame_wrk.mode = 7;
    ev_wrk.mode = 1;
  }
  return;
}

u_char EventOpenCtrl() {
  int i;

  byte bVar1;
  uchar uVar2;
  byte *pbVar3;
  int iVar4;

  iVar4 = 0;
  pbVar3 = ev_wrk.pos_req;
  while (true) {
    bVar1 = *pbVar3;
    if (((bVar1 != 0xff) && (event_stts[bVar1] == '\0')) &&
        (uVar2 = EventOpenJudge((ushort)bVar1), uVar2 != '\0'))
      break;
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 1;
    if (0xf < iVar4) {
      ev_wrk.use_item = 0xff;
      return '\0';
    }
  }
  ev_wrk.evt_no = *pbVar3;
  ev_wrk.msg_init = 0;
  ev_wrk.use_item = 0xff;
  return '\x01';
}

u_char EventOpenJudge(short int event_no) {
  int i;
  int *addr;
  sceVu0FVECTOR ev_pos;

  byte bVar1;
  ushort uVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  float fVar10;
  float ev_pos[4];

  iVar4 = PuzzleGhostContinue((uchar)event_no);
  if (iVar4 != 0) {
    return '\0';
  }
  if (ev_wrk.get_item != 0) {
    return '\0';
  }
  iVar4 = *(int *)(iRam007f0000 + (short)event_no * 4 + 0x7f0000);
  pbVar9 = (byte *)(iVar4 + 0x7f0000);
  if ((ap_wrk.zh_mode != 0) && (*(char *)(iVar4 + 0x7f0003) != -0x36)) {
    return '\0';
  }
  if ((plyr_wrk.sta & 1) == 0) {
    bVar1 = *pbVar9;
  } else {
    bVar1 = *(byte *)(iVar4 + 0x7f0003);
    if ((((bVar1 < 200) && (bVar1 != 0x14)) && (bVar1 != 0xbf)) &&
        (bVar1 != 0x1e)) {
      return '\0';
    }
    bVar1 = *pbVar9;
  }
  uVar8 = (uint)bVar1;
  iVar7 = 0;
  if (uVar8 != 0) {
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      if (event_stts[*(short *)(pbVar9 + iVar5 + 8)] == '\0') {
        return '\0';
      }
      iVar5 = iVar7 * 2;
    } while (iVar7 < (int)uVar8);
  }
  iVar7 = 0;
  if (*(byte *)(iVar4 + 0x7f0001) != 0) {
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      if (poss_item[*(short *)(pbVar9 + uVar8 * 2 + iVar5 + 8)] == 0) {
        return '\0';
      }
      iVar5 = iVar7 * 2;
    } while (iVar7 < (int)(uint) * (byte *)(iVar4 + 0x7f0001));
  }
  cVar6 = *(char *)(iVar4 + 0x7f0003);
  if ((cVar6 == '\v') && (*(byte *)(iVar4 + 0x7f0002) != ev_wrk.use_item)) {
    return '\0';
  }
  if (((cVar6 == '\n') || (cVar6 == -0x37)) || (cVar6 == '\r')) {
    if (plyr_wrk.mode != 0) {
      return '\0';
    }
    if (*key_now[5] != 1) {
      return '\0';
    }
    iVar7 = GetLoadStartLock();
    if (iVar7 != 0) {
      return '\0';
    }
    cVar6 = *(char *)(iVar4 + 0x7f0003);
  }
  if (cVar6 == '\f') {
    if (ev_wrk.use_item == 0xff) {
      if (plyr_wrk.mode != 0) {
        return '\0';
      }
      if (*key_now[5] != 1) {
        return '\0';
      }
      iVar7 = GetLoadStartLock();
      if (iVar7 != 0) {
        return '\0';
      }
      cVar6 = *(char *)(iVar4 + 0x7f0003);
    } else if (*(byte *)(iVar4 + 0x7f0002) != ev_wrk.use_item) {
      return '\0';
    }
  }
  if ((cVar6 == '\x1e') && (*(byte *)(iVar4 + 0x7f0002) != ev_wrk.pht_2d)) {
    return '\0';
  }
  if (cVar6 == '(') {
    if (*(byte *)(iVar4 + 0x7f0002) != ev_wrk.pht_furn) {
      return '\0';
    }
    uVar2 = *(ushort *)(iVar4 + 0x7f0004);
  } else {
    uVar2 = *(ushort *)(iVar4 + 0x7f0004);
  }
  ev_pos[0] = (float)(uint)uVar2;
  ev_pos[2] = (float)(uint) * (ushort *)(iVar4 + 0x7f0006);
  if (ev_pos[0] != 0.0) {
    if (ev_pos[2] == 0.0) {
      bVar1 = *(byte *)(iVar4 + 0x7f0003);
      goto LAB_0019e914;
    }
    uVar3 = OutSightChk(ev_pos, &plyr_wrk.move_box.spd.z,
                        plyr_wrk.move_box.trot.w, DAT_00355cf8, DAT_00355cfc);
    if (uVar3 != '\0') {
      if (*(char *)(iVar4 + 0x7f0003) != '\r') {
        return '\0';
      }
      fVar10 = GetDistV(ev_pos, &plyr_wrk.move_box.spd.z);
      if (100.0 < fVar10) {
        return '\0';
      }
    }
  }
  bVar1 = *(byte *)(iVar4 + 0x7f0003);
LAB_0019e914:
  if ((bVar1 < 0xbe) && (plyr_wrk.mode == 1)) {
    FinderEndSet();
  } else if ((bVar1 == 0xff) && (plyr_wrk.mode == 1)) {
    FinderEndSet();
  }
  return '\x01';
}

int GetEventMessageAddr(short int msg_no) {
  int iVar1;

  iVar1 = Get4Byte((uchar *)0x7f0008);
  iVar1 = Get4Byte((uchar *)(iVar1 + (short)msg_no * 4 + 0x7f0000));
  return iVar1 + 0x7f0000;
}

void EventEnemySet(u_char *addr) {
  int i;

  byte bVar1;
  short sVar2;
  ushort uVar3;
  ENE_WRK *ew;
  int i;

  ev_wrk.end_ev = addr[1];
  bVar1 = addr[2];
  i = (uint)bVar1 * 0x430;
  ew = (ENE_WRK *)((int)ene_wrk + i);
  if ((ew->sta & 1) != 0) {
    ew->sta = ew->sta | 0x2000;
    EneWrkReleaseChk(ew);
  }
  ev_wrk.btl_ene = addr[3];
  *(byte *)((int)ene_wrk + i + 0x11) = addr[3];
  uVar3 = *(ushort *)(addr + 8);
  *(float *)((int)ene_wrk + i + 0x30) = (float)(uint) * (ushort *)(addr + 4);
  sVar2 = *(short *)(addr + 6);
  *(float *)((int)ene_wrk + i + 0x38) = (float)(uint)uVar3;
  ew->sta = 2;
  *(float *)((int)ene_wrk + i + 0x34) = (float)(int)sVar2;
  if (bVar1 == 3) {
    ene_wrk[3].mpos.p4[2]._2_1_ = 2;
  } else {
    *(undefined *)((int)ene_wrk + i + 0x10) = 0;
  }
  return;
}

int BattleEndEventOpenJudge(u_char ene_no) {
  uchar uVar1;

  if (ingame_wrk.game != 1) {
    if (ev_wrk.btl_ene != ene_no) {
      return 0;
    }
    if (event_stts[ev_wrk.end_ev] != '\0') {
      return 0;
    }
    uVar1 = EventOpenJudge((ushort)ev_wrk.end_ev);
    if (uVar1 != '\0') {
      ingame_wrk.mode = 7;
      ingame_wrk.stts = ingame_wrk.stts & 0xdf;
      ev_wrk.mode = 1;
      ev_wrk.evt_no = ev_wrk.end_ev;
      ev_wrk.msg_init = 0;
      ev_wrk.btl_ene = 0xff;
      return 1;
    }
  }
  return 0;
}

int PhotoEventOpenJudge(u_char pht_2d, u_char pht_furn) {
  int i;

  byte bVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;

  if (ingame_wrk.game != 1) {
    pbVar5 = ev_wrk.pht_ev;
    iVar3 = 0;
    ev_wrk.pht_2d = pht_2d;
    ev_wrk.pht_furn = pht_furn;
    do {
      bVar1 = *pbVar5;
      iVar4 = iVar3 + 1;
      if (((event_stts[bVar1] == '\0') && (bVar1 != 0xff)) &&
          (uVar2 = EventOpenJudge((ushort)bVar1), uVar2 != '\0')) {
        ev_wrk.evt_no = *pbVar5;
        ev_wrk.mode = 1;
        *pbVar5 = 0xff;
        ingame_wrk.mode = 7;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        ev_wrk.msg_init = 0;
        ev_wrk.pht_2d = 0xff;
        ev_wrk.pht_furn = 0xff;
        return 1;
      }
      pbVar5 = ev_wrk.pht_ev + iVar3 + 1;
      iVar3 = iVar4;
    } while (iVar4 < 10);
    ev_wrk.pht_furn = 0xff;
    ev_wrk.pht_2d = 0xff;
  }
  return 0;
}

float SetRot360(short int rot360) {
  float rot;

  float rot;

  rot = ((float)(int)(short)rot360 / 180.0) * DAT_00355d00;
  RotLimitChk(&rot);
  return rot;
}

int EventSceneCtrl(short int scene_no) {
  int ret;

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)(short)scene_no;
  iVar4 = 0;
  iVar2 = iVar4;
  if (ev_wrk.movie_on < 6) {
    switch (ev_wrk.movie_on) {
    case 0:
      if ((ingame_wrk.stts & 0x20) == 0) {
        iVar2 = SceneDecisionMovie(iVar3);
        if (iVar2 == 0) {
          SceneDataLoadReq(iVar3, (uint *)0x1090000);
          ev_wrk.movie_on = 2;
          change_efbank = 0;
        } else {
          ev_wrk.movie_on = 1;
        }
      } else {
        ingame_wrk.stts = ingame_wrk.stts | 0x28;
        iVar2 = SceneDecisionMovie(iVar3);
        if (iVar2 != 0) {
          SeStopAndBackup();
          ReqMpegEvent(iVar3);
          ingame_wrk.stts = ingame_wrk.stts & 0xd7;
          ev_wrk.movie_on = 3;
          return 1;
        }
        iVar2 = SceneAllLoad(iVar3, (uint *)0x1090000);
        if (iVar2 != 0) {
          ev_wrk.movie_on = 4;
          change_efbank = 0;
          EventLoadDataInit();
          SeStopAndBackup();
          AdpcmMapNoUse();
          scene_bg_load_flg = 1;
        }
      }
      iVar2 = 1;
      break;
    case 1:
      iVar1 = SceneFadeOut();
      iVar2 = 0;
      if (iVar1 != 0) {
        ReqMpegEvent(iVar3);
        ev_wrk.movie_on = 3;
        ingame_wrk.stts = ingame_wrk.stts | 0x28;
        iVar2 = iVar4;
      }
      break;
    case 2:
      iVar3 = SceneFadeOut();
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = SceneDataLoadWait();
        iVar2 = 0;
        if (iVar3 != 0) {
          EventLoadDataInit();
          AdpcmMapNoUse();
          ev_wrk.movie_on = 4;
          ingame_wrk.stts = ingame_wrk.stts | 0x28;
          scene_bg_load_flg = 1;
          iVar2 = iVar4;
        }
      }
      break;
    case 3:
      iVar2 = 0;
      if (movie_wrk.play_event_sta == 0) {
        ev_wrk.movie_on = 0;
        ingame_wrk.stts = ingame_wrk.stts & 0xdf;
        AdpcmSceneStop();
        SetRenewDoorAddrForMovie();
        iVar2 = 2;
      }
      break;
    case 4:
      iVar2 = EventLoadData((uchar)scene_no);
      if (iVar2 != 0) {
        scene_bg_load_flg = 0;
      }
      gra2dDraw(3);
      SceneDraw(iVar3);
      gra2dDraw(4);
      gra2dDraw(5);
      iVar2 = SceneIsEnd();
      if (iVar2 == 0) {
        SetSysBackColor(0, 0, 0);
        iVar2 = 1;
      } else {
        ev_wrk.movie_on = 5;
        iVar2 = 0;
      }
      break;
    case 5:
      iVar3 = EventLoadData((uchar)scene_no);
      iVar2 = 0;
      if (iVar3 != 0) {
        Init3D();
        change_efbank = 1;
        ev_wrk.movie_on = 0;
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

int SceneFadeOut() {
  static int fade_cnt = 0;
  static int fade_cnt2 = 0;
  int ret;
  int frame;
  float alpha;

  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;

  if (fade_cnt2_154 < 1) {
    iVar3 = fade_cnt_153 + -1;
    if (fade_cnt_153 == 0) {
      AdpcmPreSceneFadeOut(0x1e);
      SeStopAndBackup();
      iVar3 = 0x1e;
    }
    fVar5 = (float)(0x1e - iVar3) * 4.266667;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    fade_cnt_153 = iVar3;
    if (iVar3 < 1) {
      fade_cnt_153 = 1;
      bVar2 = IsFadeoutEndAdpcmScene();
      if (bVar2 != 0) {
        fade_cnt2_154 = 10;
        fade_cnt_153 = 0;
        ingame_wrk.stts = ingame_wrk.stts | 0x28;
      }
    }
    SceneSetSquare(1, 0.0, 0.0, 640.0, 448.0, '\0', '\0', '\0',
                   (uchar)(int)fVar5);
    uVar4 = 0;
  } else {
    fade_cnt2_154 = fade_cnt2_154 + -1;
    bVar1 = fade_cnt2_154 < 1;
    if (bVar1) {
      fade_cnt2_154 = 0;
    }
    uVar4 = (uint)bVar1;
    SceneSetSquare(1, 0.0, 0.0, 640.0, 448.0, '\0', '\0', '\0', 0x80);
  }
  return uVar4;
}

void InterMissionInit() {
  ap_wrk.fgst_no = 0xff;
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  ingame_wrk.msn_no = ingame_wrk.msn_no + 1;
  ingame_wrk.mode = 0x16;
  ev_wrk.spev_tmp[0] = 0;
  effect_disp_flg = 1;
  EAdpcmFadeOut(0x3c);
  AdpcmMapCtrlInit();
  SeStopAll();
  SavePointMenuOpenInit('\x01');
  return;
}

void InterMissionEnd() {
  ev_wrk.next_msn = 1;
  ingame_wrk.stts = ingame_wrk.stts & 0xdf;
  ev_wrk.spev_tmp[0] = 0;
  InGameInit();
  ap_wrk.fgst_no = 0xff;
  ingame_wrk.mode = 5;
  MissionTitleInit((uint)ingame_wrk.msn_no);
  return;
}

void InterMissionMain() {
  char cVar1;
  int iVar2;

  cVar1 = SavePointMenuMain(1);
  if ((cVar1 != '\0') && (iVar2 = IsEndAdpcmFadeOut(), iVar2 != 0)) {
    InterMissionEnd();
    return;
  }
  return;
}

void DoorLockBattleSet() {
  if (ev_wrk.btl_lock != 1) {
    LockAllDoorInNowRoom();
    ev_wrk.btl_lock = 1;
  }
  return;
}

void DoorLockBattleAfter() {
  int iVar1;

  iVar1 = EnemyUseJudge(1);
  if (iVar1 == 0) {
    if (ev_wrk.btl_lock == 1) {
      if (((find_wrk.mode == '\0') && (ingame_wrk.mode != 0xe)) &&
          (plyr_wrk.mode == 4)) {
        plyr_wrk.mode = 0;
        ReqEneStop('\0', '\0');
      }
      UnlockAllDoorInNowRoom();
      ev_wrk.btl_lock = 0;
    } else if (ev_wrk.btl_lock == 2) {
      ev_wrk.btl_lock = 4;
    }
  }
  return;
}

void LockBattleDoorOpen() {
  if (ev_wrk.btl_lock - 1 < 2) {
    plyr_wrk.mode = 4;
    ReqEneStop('\x01', '\0');
    return;
  }
  if (ev_wrk.btl_lock == 4) {
    plyr_wrk.mode = ev_wrk.btl_lock;
    ReqEneStop('\x01', '\0');
    return;
  }
  return;
}

int LockBattleAfterJudge() { return (int)(ev_wrk.btl_lock == 4); }

void LockBattleDoorOpenMSGDisp() {
  uchar *puVar1;
  int iVar2;

  switch (ev_wrk.btl_lock) {
  case 1:
  case 2:
    puVar1 = (uchar *)GetIngameMSGAddr('\x06', 0x1c);
    SetMessageV3(puVar1, 0x64000);
    iVar2 = MesStatusCheck();
    if (iVar2 == 0) {
      plyr_wrk.mode = 0;
      ReqEneStop('\0', '\0');
      return;
    }
    ev_wrk.btl_lock = 3;
    break;
  case 3:
    puVar1 = (uchar *)GetIngameMSGAddr('\x06', 0x1c);
    SetMessageV3(puVar1, 0x64000);
    if (*key_now[5] == 1) {
      MessageWaitOff();
    }
    iVar2 = MesStatusCheck();
    if (iVar2 == 0) {
      plyr_wrk.mode = 0;
      ReqEneStop('\0', '\0');
      ev_wrk.btl_lock = 2;
    }
    break;
  case 4:
    find_wrk.mode = '\x02';
    puVar1 = (uchar *)GetIngameMSGAddr('\x06', 0x1d);
    SetMessageV3(puVar1, 0x64000);
    iVar2 = MesStatusCheck();
    if (iVar2 == 0) {
      UnlockAllDoorInNowRoom();
      plyr_wrk.mode = 0;
      ReqEneStop('\0', '\0');
      ev_wrk.btl_lock = 0;
    } else {
      ev_wrk.btl_lock = 5;
    }
    break;
  case 5:
    puVar1 = (uchar *)GetIngameMSGAddr('\x06', 0x1d);
    SetMessageV3(puVar1, 0x64000);
    if (*key_now[5] == 1) {
      MessageWaitOff();
    }
    iVar2 = MesStatusCheck();
    if (iVar2 == 0) {
      UnlockAllDoorInNowRoom();
      plyr_wrk.mode = 0;
      ReqEneStop('\0', '\0');
      ev_wrk.btl_lock = 0;
      find_wrk.mode = '\0';
    }
  }
  return;
}

int ScenePlay(short int scene_no) {
  int iVar1;

  iVar1 = EventSceneCtrl(scene_no);
  return (int)(iVar1 == 2);
}

void EndingInit() {
  ingame_wrk.stts = ingame_wrk.stts | 0xa0;
  ev_wrk.spev_tmp[0] = 0;
  ingame_wrk.mode = 0x17;
  ending_mode = 1;
  clear_disp = 0;
  clear_disp_mode = 0;
  first_clear_flg = 0;
  if (cam_custom_wrk.func_spe[2] == '\0') {
    cam_custom_wrk.func_spe[2] = '\x01';
  }
  if (ingame_wrk.clear_count == 0) {
    clear_disp_mode = 1;
    first_clear_flg = 1;
    ingame_wrk.clear_count = ingame_wrk.clear_count + 1;
  } else if ((cribo.clear_info & 2) != 0) {
    if (ingame_wrk.clear_count < 0x6c) {
      ingame_wrk.clear_count = ingame_wrk.clear_count + 1;
    }
    if (ingame_wrk.difficult != 0) {
      if ((cribo.clear_info & 1) == 0) {
        clear_disp_mode = 2;
      } else if (ingame_wrk.clear_count == 3) {
        clear_disp_mode = (uint)ingame_wrk.clear_count;
      }
      cribo.clear_info = cribo.clear_info | 1;
      if (cam_custom_wrk.func_spe[3] == '\0') {
        cam_custom_wrk.func_spe[3] = '\x01';
      }
    }
  }
  SavePointMenuOpenInit('\x02');
  return;
}

void EndingMain() {
  char cVar1;
  int iVar2;

  if (ending_mode != 2) {
    if (ending_mode < 3) {
      if (ending_mode == 1) {
        if ((ingame_wrk.difficult == 0) || ((cribo.clear_info & 2) == 0)) {
          MoviePlay(0x5b);
        } else {
          MoviePlay(0x5c);
        }
        ending_mode = 2;
        ingame_wrk.stts = ingame_wrk.stts | 0x20;
      }
    } else if (ending_mode == 3) {
      iVar2 = CallStoryClear();
      if (iVar2 != 0) {
        ending_mode = 4;
      }
    } else if ((ending_mode == 4) &&
               (cVar1 = SavePointMenuMain(2), cVar1 != '\0')) {
      EAdpcmFadeOut(0x3c);
      sys_wrk.game_mode = 2;
      outgame_wrk.mode = 0;
    }
    return;
  }
  MoviePlay(0x60);
  ending_mode = 3;
  ingame_wrk.stts = ingame_wrk.stts | 0x20;
  SeBackupInit();
  return;
}
