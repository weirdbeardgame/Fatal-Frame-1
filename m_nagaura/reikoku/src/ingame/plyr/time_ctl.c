// STATUS: NOT STARTED


void TimeCtrlInit() {
  memset(&time_wrk,0,0x88);
  GetNowClock(&time_wrk.start);
  GetNowClock(&time_wrk.real);
  return;
}

void GameTimeCtrl() {
  if (time_wrk.real_ofs != 0xffffffffffffffff) {
    time_wrk.real_ofs = time_wrk.real_ofs + 1;
  }
  if ((ingame_wrk.stts & 0x80) == 0) {
    if (time_wrk.game < 0x14996c4) {
      time_wrk.game = time_wrk.game + 1;
    }
    if (time_wrk.one_game < 0x14996c4) {
      time_wrk.one_game = time_wrk.one_game + 1;
    }
  }
  return;
}

void SetNowClock(sceCdCLOCK *nc) {
  uint uVar1;
  uint uVar2;
  ulong in_v1;
  
  GetNowClock(nc);
  if (nc->pad == '\0') {
    uVar1 = (uint)&nc->year & 7;
    uVar2 = (uint)nc & 7;
    time_wrk.real =
         (sceCdCLOCK)
         ((*(long *)(&nc->year + -uVar1) << (7 - uVar1) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)nc - uVar2) >> uVar2 * 8);
    time_wrk.real_ofs = 0;
  }
  return;
}

void PlyrTimerCtrl() {
  ulong uVar1;
  
  if (plyr_wrk.dop._13_1_ == plyr_wrk.dop._14_1_) {
    if (time_wrk.room != 0xffffffffffffffff) {
      time_wrk.room = time_wrk.room + 1;
    }
  }
  else {
    time_wrk.room = 0;
  }
  if (plyr_wrk.mode == 1) {
    if (time_wrk.finder != 0xffffffffffffffff) {
      time_wrk.finder = time_wrk.finder + 1;
    }
    if ((plyr_wrk.mvsta & 4) == 0) {
      time_wrk.fwalk = 0;
    }
    else if (time_wrk.fwalk != 0xffffffffffffffff) {
      time_wrk.fwalk = time_wrk.fwalk + 1;
    }
  }
  else {
    time_wrk.fwalk = 0;
    time_wrk.finder = 0;
  }
  if ((plyr_wrk.mvsta & 4) == 0) {
    if ((plyr_wrk.mvsta & 2) == 0) {
      if ((plyr_wrk.mvsta & 1) == 0) {
        if (time_wrk.stop != 0xffffffffffffffff) {
          time_wrk.stop = time_wrk.stop + 1;
        }
        time_wrk.run = 0;
      }
      else {
        if (time_wrk.run != 0xffffffffffffffff) {
          time_wrk.run = time_wrk.run + 1;
        }
        time_wrk.stop = 0;
      }
      time_wrk.swalk = 0;
      time_wrk.nwalk = 0;
    }
    else {
      if (time_wrk.nwalk != 0xffffffffffffffff) {
        time_wrk.nwalk = time_wrk.nwalk + 1;
      }
      time_wrk.stop = 0;
      time_wrk.swalk = 0;
      time_wrk.run = 0;
    }
  }
  else {
    if (time_wrk.swalk != 0xffffffffffffffff) {
      time_wrk.swalk = time_wrk.swalk + 1;
    }
    time_wrk.stop = 0;
    time_wrk.nwalk = 0;
    time_wrk.run = 0;
  }
  if ((pad[0].now == 0) && (time_wrk.stop != 0)) {
    if (time_wrk.no_pad != 0xffffffffffffffff) {
      time_wrk.no_pad = time_wrk.no_pad + 1;
    }
  }
  else {
    time_wrk.no_pad = 0;
  }
  if (area_wrk.fg_max == (uchar)area_wrk.padding) {
    uVar1 = time_wrk.area + 1;
    if (time_wrk.area == 0xffffffffffffffff) goto LAB_00198bc8;
  }
  else {
    time_wrk.area = 0;
    uVar1 = time_wrk.area;
  }
  time_wrk.area = uVar1;
LAB_00198bc8:
  if (time_wrk.play != 0xffffffffffffffff) {
    time_wrk.play = time_wrk.play + 1;
  }
  return;
}

void EntryTimeCtrl() {
  ulong uVar1;
  
  if ((time_wrk.game != 0) && (uVar1 = __umoddi3(time_wrk.game,36000), uVar1 == 0)) {
    ap_wrk.gtime = ap_wrk.gtime + 1;
  }
  if ((time_wrk.play != 0) && (uVar1 = __umoddi3(time_wrk.play,0xe10), uVar1 == 0)) {
    ap_wrk.ptime = ap_wrk.ptime + 1;
  }
  if ((time_wrk.area != 0) && (uVar1 = __umoddi3(time_wrk.area,600), uVar1 == 0)) {
    ap_wrk.atime[area_wrk.fg_max] = ap_wrk.atime[area_wrk.fg_max] + 1;
  }
  return;
}

void SetRealTime() {
  SetNowClock(&time_wrk.real);
  return;
}
