cmake_minimum_required(VERSION 3.26.0)
project(FatalFrame1)

set(SOURCES bit.c cache.c csc.c deci2.c
 defhandler.c devvif0.c devvif1.c diei.c eecdvd.c eeloadfile.c filestub.c glue.c graphdev.c init.c intr.c
 iopheap.c iopreset.c ipuinit.c kprintf.c libdma.c libgifpk.c libipu.c libmc.c libpad.c libpc.c libvu0.c 
 mpc.c mpeg.c pack.c sdr_cb.c sdr_main.c sifcmd.c sifrpc.c thread.c tty.c var.c)

add_subdirectory(m_nagaura/reikoku/src)

add_executable(FatalFrame1 ${SOURCES})

target_include_directories(FatalFrame1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})