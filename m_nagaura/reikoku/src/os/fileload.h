// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_OS_FILELOAD_H
#define M_NAGAURA_REIKOKU_SRC_OS_FILELOAD_H


int FileLoadInit();
void FileLoadNReq(int file_no, long int addr);
int FileLoadNEnd(int file_no);
void FileLoadB(int file_no, long int addr);

#endif // M_NAGAURA_REIKOKU_SRC_OS_FILELOAD_H
