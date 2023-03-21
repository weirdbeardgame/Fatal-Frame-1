// STATUS: NOT STARTED


DIntr() {
  if ((Status & 0x10000) != 0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    return (Status & 0x10000) != 0;
  }
  return false;
}

EIntr() {
  EI();
  return (Status & 0x10000) != 0;
}
