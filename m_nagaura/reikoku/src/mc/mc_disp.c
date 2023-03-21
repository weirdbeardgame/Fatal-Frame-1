// STATUS: NOT STARTED


void mcDispMessage() {
	int msg_no;
	
  if (mc_ctrl.msg_no < 0x29) {
    if (mc_ctrl.mode == 7) {
      PutStringYW(8,(byte)mc_ctrl.msg_no,0x30,0x88,0x808080,0x80,0xf000,0);
    }
    else {
      PutStringYW(8,(byte)mc_ctrl.msg_no,0x30,0x164,0x808080,0x80,0xf000,0);
    }
  }
  return;
}

void mcSetMessage(int msg_no) {
  mc_ctrl.msg_no = msg_no;
  return;
}

char mcCheckMsgType(int msg_no) {
  switch(msg_no) {
  case 0:
  case 1:
  case 0xe:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
    return '\x01';
  default:
    return '\0';
  case 0xc:
  case 0x10:
  case 0x25:
  case 0x27:
    return '\x02';
  }
}

char mcCheckDrawButton(int msg_no) {
  switch(msg_no) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x23:
  case 0x24:
    return '\x01';
  default:
    return '\0';
  }
}
