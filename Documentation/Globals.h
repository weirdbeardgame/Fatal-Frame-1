// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/mode_slct.c
// *****************************************************************************

/* data 250180 */ SPRT_DAT msl_bg_btl[11];
/* data 2502e0 */ SPRT_DAT msl_bg_fsm[11];
/* data 250440 */ SPRT_DAT msl_bg_opt[11];
/* data 2505a0 */ SPRT_DAT msl_bg_snd[11];
/* data 250700 */ SPRT_DAT msl_bg_sty[11];
/* data 250860 */ SPRT_DAT msel_sprt[0];
/* sdata 356300 */ static u_char sm_csr_info[2];
/* sdata 356304 */ int cmn_tex_load;
/* sdata 356308 */ int title_bgm_no;
/* sdata 356318 */ CLEAR_BONUS cribo;
/* bss 357dc8 */ static DSP_M_SLCT_WRK dsp_ms;
/* sbss 357880 */ static int ms_load_id;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/memory_album.c
// *****************************************************************************

/* data 251ae0 */ MC_ALBUM_SAVE mc_album_save;
/* data 251d80 */ MC_ALBUM_SAVE album_save_dat[2];
/* sdata 35631a */ char is_newdata_albmside;
/* bss 357df0 */ static DSP_MEM_ALBM dm_albm;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/main/gamemain.c
// *****************************************************************************

/* sdata 35631c */ int init_load_id;
/* sdata 356320 */ int init_load_adr;
/* sdata 356324 */ int init_load_size;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/main/glob.c
// *****************************************************************************

/* sdata 356328 */ u_int realtime_scene_flg;
/* sdata 35632c */ u_int scene_bg_load_flg;
/* data 2522c0 */ SYS_WRK sys_wrk;
/* data 2522e0 */ TIME_WRK time_wrk;
/* data 252368 */ OPTION_WRK opt_wrk;
/* data 252378 */ OUTGAME_WRK outgame_wrk;
/* data 2523c0 */ PAD_STRUCT pad[2];
/* data 252740 */ u_short *key_now[32];
/* data 2527c0 */ u_short *key_bak[32];
/* data 252840 */ SgCAMERA camera;
/* data 252a70 */ INGAME_WRK ingame_wrk;
/* data 252a90 */ PLYR_WRK plyr_wrk;
/* data 252e90 */ ENE_WRK ene_wrk[4];
/* data 253f50 */ MAP_WRK map_wrk;
/* data 253f70 */ ROOM_WRK room_wrk;
/* data 254360 */ u_char poss_item[200];
/* data 254428 */ u_char poss_file[4][50];
/* sdata 356330 */ u_char flm_exp_flg[5];
/* data 2544f0 */ MAP_CAM_DAT map_cam_dat[500];
/* data 259ae0 */ MAP_CAM_DAT map_cam_dat2[500];
/* data 25f0d0 */ MAP_CAM_DAT map_cam_dat3[300];
/* data 262460 */ MAP_CAM_DAT map_cam_dat4[300];
/* data 2657f0 */ PHOTO_WRK photo_wrk;
/* data 265928 */ PFILE_WRK pfile_wrk;
/* data 265ce8 */ CAM_CUSTOM_WRK cam_custom_wrk;
/* data 265d00 */ DEBUG_NUMBERS dbg_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/system.c
// *****************************************************************************

/* sdata 356338 */ int odev;
/* sdata 35633c */ int stop_put_draw_env;
/* sdata 356340 */ static int fr;
/* data 265eb0 */ sceGsDBuff g_db;
/* sbss 357894 */ static int down_fr;
/* sdata 35634c */ sceGsDrawEnv1 *pdrawenv;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/fileload.c
// *****************************************************************************

/* bss 357e40 */ static u_int sbuff[16];
/* bss 357e80 */ static sceSifClientData flCd;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/key_cnf.c
// *****************************************************************************

/* data 2660e0 */ u_short *default_key[32];
/* data 266160 */ u_short *default_key_bak[32];
/* data 2661e0 */ u_char key_type[32];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/pad.c
// *****************************************************************************

/* data 266200 */ u_short sce_pad[16];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/eeiop.c
// *****************************************************************************

/* data 266240 */ EI_SYS ei_sys;
/* data 266280 */ IOP_COMMAND send_cmd[32];
/* data 266680 */ IOP_STAT rcv_stat;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/cdvd/eecdvd.c
// *****************************************************************************

/* sbss 357898 */ static CDVD_REQ_STAT cdvd_rstat;
/* bss 357ea8 */ static LOAD_FINISH_DATA load_finish[32];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_ctrl.c
// *****************************************************************************

/* data 266800 */ ADPCM_MAP adpcm_map;
/* sbss 35789b */ static u_char fout_flg;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/adpcm/ea_dat.c
// *****************************************************************************

/* data 266c40 */ ADPCM_VOL adpcm_vol_tbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/eese.c
// *****************************************************************************

/* data 2677c0 */ SE_CTRL se_ctrl;
/* data 267828 */ SE_MENU_FADE sm_fade;
/* bss 357ed0 */ static SE_WRK se_wrk[24];
/* bss 3584d0 */ static SE_WRK se_wrk_bk[24];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_data.c
// *****************************************************************************

/* rdata 349f80 */ char se_use_static_tbl[0][30];
/* rdata 349fa0 */ char se_use_btlhit_tbl[0][3];
/* rdata 349fa8 */ char se_use_voice_tbl[0][5];
/* rdata 349fe0 */ char se_use_door_tbl[0][2];
/* rdata 349ff0 */ char se_use_foot_tbl[0][1];
/* rdata 34a010 */ char se_use_srund_tbl[0][1];
/* rdata 34a028 */ char se_use_ghost_tbl[0][11];
/* rdata 34a158 */ char se_use_event_tbl[0][3];
/* rdata 34a1a8 */ char se_use_wide_tbl[0][1];
/* rdata 34a1b8 */ char se_use_jidou_tbl[0][1];
/* data 267838 */ static SE_STE se_ste_tbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_ev.c
// *****************************************************************************

/* data 267870 */ SE_EV_WRK se_ev_wrk[24];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_trans.c
// *****************************************************************************

/* data 267930 */ FG_FILE_TBL fgf_tbl[0];
/* data 267950 */ SE_TRANS_CTRL st_ctrl;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/sd_room.c
// *****************************************************************************

/* data 267960 */ ADPCM_ROOM_PLAY adpcm_param_tbl[0];
/* data 267a20 */ int foot_se_index[0];
/* data 267a90 */ static ROOM_SOUND_INFO rm_snd_info[0];
/* data 267cb0 */ static ROOM_DOOR_SE rm_door[0];
/* data 267eb8 */ static ROOM_FOOT_SE rm_foot[0];
/* data 268200 */ static u_int rm_srund[0];
/* data 2682a8 */ static u_int rm_event[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/os/eeiop/se_plyr.c
// *****************************************************************************

/* data 268350 */ SE_FOOT_RAND_ITA rand_ita_tbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/compress.c
// *****************************************************************************

/* data 268388 */ DCT_ROOT ZigZag[64];
/* sdata 356360 */ PHOTO_EXPAND photo_expand;
/* data 268408 */ short int dad[2049];
/* data 269410 */ short int lson[2049];
/* data 26a418 */ short int rson[2305];
/* data 26b620 */ u_char text[2065];
/* sdata 356362 */ short int matchpos;
/* sdata 356364 */ short int matchlen;
/* bss 358ae0 */ static u_char pixelstrip[8][384];
/* bss 3596e0 */ static float C[8][8];
/* bss 3597e0 */ static float Ct[8][8];
/* sbss 3578b4 */ static int InputRunLength;
/* sbss 3578b8 */ static int OutputRunLength;
/* bss 3598e0 */ static int quantum[8][8];
/* sbss 3578bc */ static char repair_flg;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect.c
// *****************************************************************************

/* data 26be40 */ SPRT_DAT effdat[0];
/* data 26c5c0 */ SPRT_DAT camdat[0];
/* sdata 356368 */ static int tmp_effect_off;
/* sdata 35636c */ static void *r23_e1;
/* sdata 356370 */ static void *r23_e2;
/* sdata 356374 */ static u_char r28_torch_flag;
/* sdata 356398 */ int change_efbank;
/* sdata 35639c */ int eff_blur_off;
/* sdata 3563a0 */ int effect_disp_flg;
/* sdata 3563a4 */ int eff_filament_off;
/* sdata 3563a8 */ int now_buffer[2];
/* sdata 3563b0 */ int eff_dith_off;
/* sdata 3563b4 */ int stop_effects;
/* sdata 3563b8 */ int monochrome_mode;
/* sdata 3563bc */ int magatoki_mode;
/* sdata 3563c0 */ int shibata_set_off;
/* data 26c7e0 */ SBTSET msbtset;
/* data 26c820 */ EFFECT_CONT efcnt[64];
/* data 26dc20 */ EFFECT_CONT efcntm[48];
/* data 26eb20 */ EFFECT_CONT efcnt_cnt[64];
/* data 26ff20 */ EFFECT_CONT efcntm_cnt[48];
/* sdata 3563c4 */ int look_debugmenu;
/* sbss 3578c8 */ static int set_buffer[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_sub.c
// *****************************************************************************

/* data 270e20 */ static SCRCTRL sc_col;
/* sdata 3563d0 */ static int old_ltol_addr1;
/* sdata 3563d4 */ static int old_ltol_addr2;
/* sbss 3578d4 */ static u_char old_cam_no;
/* bss 359f30 */ static SPRITE_DATA commonsp;
/* sbss 3578d8 */ static u_long128 *buf;
/* sbss 3578dc */ static u_long128 *buf2;
/* sbss 3578e0 */ static u_long128 *bufz;
/* sdata 3563d8 */ int vib1_time;
/* sdata 3563dc */ int vib2_time;
/* sdata 3563e0 */ int vib2_pow;
/* sdata 3563e4 */ int tecmo_logo_flow;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_sub2.c
// *****************************************************************************

/* data 270e30 */ FALL_TABLE fall_table[0];
/* sdata 3563e8 */ short int fallen_effect_switch;
/* sdata 3563ea */ short int gus_effect_switch;
/* sdata 3563ec */ short int hole_effect_switch;
/* sdata 3563f0 */ short int line_effect_switch[4];
/* sdata 3563fc */ static u_char r_temp;
/* sdata 3563fd */ static u_char g_temp;
/* sdata 3563fe */ static u_char b_temp;
/* sdata 3563ff */ static u_char rate_temp;
/* data 270f30 */ SPRT_SDAT btl_strt[11];
/* data 270fd0 */ SPRT_SDAT btl_rslt[23];
/* data 271118 */ SPRT_SDAT msg_strt;
/* data 271128 */ SPRT_SDAT btl_msel[0];
/* data 271298 */ SPRT_SDAT btl_msel2[0];
/* data 2713f8 */ ANM2D_DAT_TABLE anm2d_dat[0][12];
/* data 2735b8 */ ANM2D_WRK_TABLE wrk_table[0];
/* sdata 356400 */ ANM_WRK anm_wrk;
/* sdata 356408 */ static short int anm_no_keep;
/* sdata 35640a */ static short int anm_load_id;
/* sdata 35640c */ static u_char anm_init;
/* sdata 35640d */ static u_char clear_end;
/* sdata 35640e */ static u_char clear_end2;
/* sdata 35640f */ static u_char clear_end3;
/* sdata 356410 */ int clear_anime_timer;
/* data 276148 */ SPRT_DAT clear_all[11];
/* data 2762a8 */ SPRT_DAT story_end[11];
/* bss 359f90 */ static sceVu0FVECTOR leaves[600];
/* bss 35c510 */ static sceVu0FVECTOR leavesaim[600];
/* bss 35ea90 */ static sceVu0FVECTOR accel[600];
/* bss 361010 */ static sceVu0FVECTOR rots[600];
/* bss 363590 */ static sceVu0FVECTOR hole_gus[200];
/* bss 364210 */ static sceVu0FVECTOR line_gus[4][80];
/* data 276410 */ LEAVES_TABLE fall_wrk;
/* data 277bc0 */ LEAVES_TABLE gus_wrk;
/* data 279370 */ LEAVES_TABLE hole_wrk;
/* data 27ab20 */ LEAVES_TABLE line_wrk[4];
/* data 2809e0 */ BTL_ANM_LOAD banm;
/* sdata 356430 */ enum T_LOAD_MODE {
	BANM_NORM = 0,
	BANM_LOAD = 1,
	BANM_AFTLOAD = 2,
	BANM_TEXDISP = 3
};

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_scr.c
// *****************************************************************************

/* data 2809f0 */ EFF_BLUR eff_blur;
/* data 280a18 */ EFF_FOCUS eff_focus;
/* sdata 356438 */ EFF_DEFORM eff_deform;
/* sdata 356440 */ short int overlap_passflg[2];
/* sdata 356444 */ float blur_x_offset;
/* sdata 356448 */ float blur_y_offset;
/* sdata 3564f4 */ int gameover_flow;
/* sdata 35653c */ int ef_exfade1_flow1;
/* sdata 356540 */ int ef_exfade1_flow2;
/* sdata 356544 */ int ef_exfade1_time1;
/* sdata 356548 */ int ef_exfade2_flow1;
/* sdata 35654c */ int ef_exfade2_time1;
/* sdata 356550 */ int ef_exfade2_time2;
/* sdata 356554 */ int ef_exfade2_time3;
/* bss 374f10 */ static HAND_WRK hand_wrk;
/* bss 374fe0 */ static DEFWORK dw[25][33];
/* sbss 3578fc */ static int now_loading_flow;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_obj.c
// *****************************************************************************

/* sdata 356558 */ static int p_dbg_flg;
/* sdata 35655c */ static float pdyoff0;
/* sdata 356560 */ static float pdyoff1;
/* sdata 356564 */ static float pdxoff;
/* bss 382540 */ static EFF_PARTSBLUR eff_partsblur;
/* data 280ac0 */ EFFINFO2 efi[8];
/* sbss 357900 */ static int init_pdef2;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_oth.c
// *****************************************************************************

/* sdata 356578 */ int stop_lf;
/* sdata 3565a4 */ u_char prgb;
/* sdata 3565a5 */ u_char pa;
/* sdata 3565a8 */ float wind1;
/* sdata 3565ac */ float wind2;
/* sdata 3565b0 */ float ppos1;
/* sdata 3565b4 */ float pvel1;
/* sdata 3565b8 */ float pvel2;
/* sdata 3565bc */ float pvel3;
/* sdata 3565c0 */ float psize;
/* data 297450 */ sceVu0FVECTOR canal_bpos[3];
/* data 297480 */ float canal_size[3][2];
/* sdata 356614 */ static float ini_yvel;
/* sdata 356618 */ static float grav;
/* sdata 35661c */ static float ydec;
/* sdata 356620 */ static float ldec;
/* sdata 356624 */ static float lvel;
/* data 297498 */ float texsc[3];
/* data 2974a8 */ float canaltm[3];
/* sdata 356628 */ float ligscl;
/* sdata 35662c */ float cana1;
/* sdata 356630 */ float cana2;
/* sdata 356634 */ float cana3;
/* sdata 356638 */ float cana4;
/* sdata 35663c */ int setlight;
/* sdata 356640 */ int setpoly;
/* data 2974d0 */ static SPRT_DAT eneface[0];
/* bss 385290 */ static RIPPLE_SUB rs[48];
/* bss 385b90 */ static EFF_LEAF eff_leaf[6];
/* sbss 357914 */ static int init_pond;
/* sbss 357918 */ static int init_hhaze;
/* sbss 35791c */ static int init_newitem;
/* sbss 357920 */ static int init_torch;
/* sbss 357924 */ static int init_smoke;
/* sbss 357928 */ static int init_haze_pond;
/* data 297510 */ int cont_facespr_tbl[3];
/* data 297520 */ int cont_facespr_otbl[3];
/* sbss 35792c */ static void *amulet_fire_ret;
/* sbss 357930 */ static int amulet_fire_flow;
/* sbss 357934 */ static int amulet_fire_cnt;
/* bss 387a50 */ static HEAT_HAZE ene_particle[3];
/* bss 391080 */ static HEAT_HAZE amu_particle[1];
/* bss 394290 */ static HEAT_HAZE torch_particle[5];
/* bss 3a3ce0 */ static HEAT_HAZE smoke_particle[4];
/* bss 3b0520 */ static NEW_ITEM ni[24];
/* bss 3b0820 */ static RIPPLE2 rip[8];
/* data 297530 */ FACESPIRIT_ST facespirit[3];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_rdr.c
// *****************************************************************************

/* data 297ad0 */ static SUNSHINE sunshine[0];
/* data 297d00 */ static sceVu0FVECTOR ef_pazzene_p;
/* data 297d10 */ static sceVu0FVECTOR ef_smoke_pos11;
/* data 297d20 */ static sceVu0FVECTOR ef_smoke_pos12;
/* data 297d30 */ static sceVu0FVECTOR ef_smoke_pos13;
/* data 297d40 */ static sceVu0FVECTOR ef_smoke_pos14;
/* data 297d50 */ static sceVu0FVECTOR ef_smoke_pos21;
/* data 297d60 */ static sceVu0FVECTOR ef_smoke_pos22;
/* data 297d70 */ static sceVu0FVECTOR ef_smoke_pos23;
/* data 297d80 */ static sceVu0FVECTOR ef_smoke_pos24;
/* sbss 35793c */ static int room_old;
/* sbss 357940 */ static u_char ef_pazz_ene_flow;
/* sbss 357944 */ static int ef_rdfire3_cnt;
/* data 297d90 */ BURN_FIRE burn_fire[10];
/* data 298150 */ EFFRDR_RSV blood_drop_rsv[16];
/* data 2981d0 */ EFFRDR_RSV pfire_rsv[4];
/* bss 3b9220 */ static int ef_rdfire3_call[6];
/* bss 3b9238 */ static FURN_ACT_WRK *ef_rdfire3[6];
/* bss 3b9250 */ static void *ef_smoke_addr[4];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/effect_ene.c
// *****************************************************************************

/* data 2981f0 */ static int enedmg_fileno_tbl[0][2];
/* data 298418 */ static SPRT_DAT enedmg_texno_tbl[0];
/* data 298460 */ static sceVu0FVECTOR eto_light[5];
/* data 2984b0 */ static u_char eto_rgb[5][3];
/* sdata 356684 */ u_char sr1;
/* sdata 356685 */ u_char sg1;
/* sdata 356686 */ u_char sb1;
/* sdata 356687 */ u_char sa1;
/* sdata 356688 */ u_char sr2;
/* sdata 356689 */ u_char sg2;
/* sdata 35668a */ u_char sb2;
/* sdata 35668b */ u_char sa2;
/* sdata 35668c */ int SWORDTYPE;
/* sdata 356690 */ float rac1;
/* sdata 356694 */ float rac2;
/* sdata 356698 */ float rbre;
/* sdata 35669c */ u_char rrr;
/* sdata 35669d */ u_char ggg;
/* sdata 35669e */ u_char bbb;
/* sdata 3566b0 */ float enedmg2_sp;
/* data 2984d0 */ ENDMG1 enedmg1[3];
/* data 298680 */ ENDMG2 enedmg2;
/* sdata 3566b4 */ int eneseal_status;
/* sdata 3566b8 */ int enedmg_status;
/* data 298690 */ SWORD_LINE sw_line;
/* bss 3ba080 */ static sceVu0FVECTOR reserve_lig;
/* sdata 3566bc */ int camsearch_miss;
/* data 2986a0 */ CAMSEARCH_STR camsearch[3];
/* sdata 3566c0 */ int camview_miss;
/* data 298ca0 */ CAMVIEW_STR camview[3];
/* sdata 3566c4 */ int campush_miss;
/* data 299450 */ CAMPUSH_STR campush[3];
/* sdata 3566c8 */ int camslow_miss;
/* data 29acb0 */ CAMSLOW_STR camslow[3];
/* sdata 3566cc */ int camstop_miss;
/* data 29c7b0 */ CAMSTOP_STR camstop[3];
/* data 29d010 */ sceVu0FVECTOR sword_line[2];
/* bss 3ba090 */ static sceVu0FVECTOR spos[96];
/* bss 3ba690 */ static u_int enedmg_tex_addr[4];
/* data 29d030 */ EDMG_TEX_WRK edmg_tex_wrk[10];
/* data 29d080 */ TAIL_DMG2_DAT enedmg2_tail[44];
/* bss 3ba6a0 */ static NEW_PERTICLE new_perticle[44];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/g2d_debug.c
// *****************************************************************************

/* sdata 3566d0 */ int dither_alp;
/* sdata 3566d4 */ int dither_col;
/* data 2a7580 */ static DEBUG_MENU dbg_menu_t;
/* data 2a7618 */ static DEBUG_MENU dbg_menu_lt;
/* data 2a76b0 */ static DEBUG_MENU dbg_menu_ct;
/* data 2a7748 */ static DEBUG_MENU dbg_menu_c1;
/* data 2a77e0 */ static DEBUG_MENU dbg_menu_et;
/* data 2a7878 */ static DEBUG_MENU dbg_menu_e1;
/* data 2a7910 */ static DEBUG_MENU dbg_menu_e2;
/* data 2a79a8 */ static DEBUG_MENU dbg_menu_ot;
/* data 2a7a40 */ static DEBUG_MENU dbg_menu_e3;
/* data 2a7ad8 */ static DEBUG_MENU dbg_menu_e4;
/* data 2a7b70 */ static DEBUG_MENU dbg_menu_e5;
/* data 2a7c08 */ static DEBUG_MENU dbg_menu_e51;
/* data 2a7ca0 */ static DEBUG_MENU dbg_menu_e41;
/* data 2a7d38 */ static DEBUG_MENU dbg_menu_e6;
/* data 2a7dd0 */ static DEBUG_MENU dbg_menu_e7;
/* data 2a7e68 */ static DEBUG_MENU dbg_menu_e8;
/* data 2a7f00 */ static DEBUG_MENU dbg_menu_e81;
/* data 2a7f98 */ static DEBUG_MENU dbg_menu_e83;
/* data 2a8030 */ static DEBUG_MENU dbg_menu_le_top;
/* data 2a80c8 */ static DEBUG_MENU dbg_menu_le_save;
/* data 2a8160 */ static DEBUG_MENU dbg_menu_le_infinite;
/* data 2a81f8 */ static DEBUG_MENU dbg_menu_le_point;
/* data 2a8290 */ static DEBUG_MENU dbg_menu_le_spot;
/* data 2a8328 */ static DEBUG_MENU dbg_menu_le_sdone;
/* data 2a83c0 */ static DEBUG_MENU dbg_menu_le_ldone;
/* data 2a8458 */ static DEBUG_MENU dbg_menu_le_infinite_value;
/* data 2a84f0 */ static DEBUG_MENU dbg_menu_le_point_value;
/* data 2a8588 */ static DEBUG_MENU dbg_menu_le_spot_value;
/* data 2a8620 */ static DEBUG_MENU dbg_menu_e84;
/* data 2a86b8 */ static DEBUG_MENU dbg_menu_e841;
/* data 2a8750 */ static DEBUG_MENU dbg_menu_e21;
/* data 2a87e8 */ static DEBUG_MENU dbg_menu_le_infinite_apply;
/* data 2a8880 */ static DEBUG_MENU dbg_menu_le_point_apply;
/* data 2a8918 */ static DEBUG_MENU dbg_menu_le_spot_apply;
/* data 2a89b0 */ static DEBUG_MENU dbg_menu_e31;
/* data 2a8a48 */ static DEBUG_MENU dbg_menu_e32;
/* data 2a8ae0 */ static DEBUG_MENU dbg_menu_e33;
/* data 2a8b78 */ static DEBUG_MENU dbg_menu_esc;
/* data 2a8c10 */ static DEBUG_MENU dbg_menu_esc_col;
/* data 2a8ca8 */ static DEBUG_MENU dbg_menu_esc_tp1;
/* data 2a8d40 */ static DEBUG_MENU dbg_menu_esc_tp2;
/* data 2a8dd8 */ static DEBUG_MENU dbg_menu_esc_cont;
/* data 2a8e70 */ static DEBUG_MENU dbg_menu_eprt;
/* data 2a8f08 */ static DEBUG_MENU dbg_menu_eprt_blr;
/* data 2a8fa0 */ static DEBUG_MENU dbg_menu_fog_top;
/* data 2a9038 */ static DEBUG_MENU dbg_menu_fog_apply;
/* data 2a90d0 */ static DEBUG_MENU dbg_menu_sbtset;
/* data 2a9168 */ static DEBUG_MENU dbg_menu_ef_new_def;
/* data 2a9200 */ static DEBUG_MENU dbg_menu_3ddisp_menu;
/* data 2a9298 */ static DEBUG_MENU dbg_menu_le_ambient_value;
/* data 2a9330 */ static DEBUG_MENU dbg_menu_le_ambient_apply;
/* data 2a93c8 */ static DEBUG_MENU dbg_menu_c1_1;
/* data 2a9460 */ static DEBUG_MENU dbg_menu_hinttex;
/* data 2a94f8 */ static DEBUG_MENU dbg_menu_ef_pe_ne;
/* data 2a9590 */ static DEBUG_MENU dbg_menu_esc_nega;
/* data 2a9628 */ static DEBUG_MENU dbg_menu_param;
/* data 2a96c0 */ static DEBUG_MENU dbg_menu_ccustom;
/* data 2a9758 */ static DEBUG_MENU dbg_menu_param_item;
/* data 2a97f0 */ static DEBUG_MENU *dbgmenu_tbl[0];
/* data 2a98d8 */ static int *dbgmenu_inttbl[0];
/* sdata 356a50 */ static int sbtset_old;
/* sdata 356a54 */ static int perf_sec;
/* sdata 356a58 */ static float perf_max;
/* sdata 356a74 */ int hint_test_sw;
/* sdata 356a78 */ int hint_test_posx;
/* sbss 357948 */ static int control;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/g2d_main.c
// *****************************************************************************

/* sdata 356a80 */ G2D_LOAD_FLG g2d_load_flg;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/message.c
// *****************************************************************************

/* data 2a9b58 */ u_char ascii_font_tbl[0];
/* data 2a9c38 */ u_char ascii_font_tbl2[0];
/* data 2a9d18 */ int wbyte_font_tbl0[0];
/* data 2a9d38 */ int wbyte_font_tbl1[0];
/* data 2a9d60 */ int wbyte_font_tbl2[0];
/* data 2a9dc8 */ int wbyte_font_tbl3[0];
/* data 2a9e30 */ int wbyte_font_tbl4[0];
/* data 2a9f80 */ int wbyte_font_tbl5[0];
/* data 2aa0d8 */ static int font_w_b0[0];
/* data 2aa420 */ static int font_w_b1[0];
/* data 2aa768 */ static int font_w_b2[0];
/* data 2aaab0 */ static int font_w_b3[0];
/* data 2aadf8 */ static int font_w_b4[0];
/* data 2ab140 */ SPRT_DAT fntdat[0];
/* data 2ab200 */ SPRT_DAT mesbox[0];
/* data 2ab300 */ SPRT_DAT btntex[0];
/* data 2ab380 */ static int *mes_ex_nums[0];
/* bss 3bb1d8 */ static MES_DAT msdat;
/* bss 3bb230 */ static MESV22 mesv22;
/* sdata 356abc */ u_char *save_mes_addr;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/number.c
// *****************************************************************************

/* data 2ab388 */ SPRT_DAT number_tex[0][10];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/snapshot.c
// *****************************************************************************

/* sdata 356ac0 */ static BITMAPFILEHEADER1 bfhp1;
/* sdata 356ac8 */ static int now_no[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/tim2.c
// *****************************************************************************

/* sdata 356ad0 */ u_char g_bInterlace;
/* sdata 356ad4 */ int ndpkt;
/* sdata 356ad8 */ int ndpri;
/* sdata 356adc */ int nmdpkt;
/* sdata 356ae0 */ int nmdpri;
/* sdata 356ae4 */ int mes_swap;
/* sdata 356ae8 */ Q_WORDDATA *pbuf;
/* data 2ab890 */ u_int draw_pri[4096][2];
/* sdata 356aec */ Q_WORDDATA *mpbuf;
/* data 2b3890 */ Q_WORDDATA mpbufw[2][8192];
/* data 2f3890 */ int draw_mpri[1024][2];
/* sbss 35794c */ static u_int next_tex_addr;
/* sbss 357950 */ static u_int next_clut_addr;
/* sbss 357954 */ static sceDmaChan *DmaGif;
/* sbss 357958 */ static sceDmaChan *DmaVif;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/tim2_new.c
// *****************************************************************************

/* sdata 356af0 */ u_int *tm2_end_pkt;
/* bss 3bb540 */ static Q_WORDDATA fnt_pkt[512];
/* bss 3bd540 */ static Q_WORDDATA g2d_end_pkt[2];
/* bss 3bd560 */ static Q_WORDDATA g2d_top_pkt[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/rare_ene.c
// *****************************************************************************

/* data 2f5890 */ static SPRT_DAT rare_ene00101[0];
/* data 2f5910 */ static SPRT_DAT rare_ene00102[0];
/* data 2f5990 */ static RARE_ENE_1DAT rare_ene001[0];
/* data 2f59a0 */ static RARE_ENE_DAT rare_ene[0];
/* data 2f5a50 */ static u_int rare_textbl[0];
/* data 2f5a80 */ static SPRT_DAT pazz_ene00101[0];
/* data 2f5ac0 */ static RARE_ENE_1DAT pazz_ene001[0];
/* data 2f5ac8 */ static SPRT_DAT pazz_ene00201[0];
/* data 2f5b08 */ static RARE_ENE_1DAT pazz_ene002[0];
/* data 2f5b10 */ static SPRT_DAT pazz_ene00301[0];
/* data 2f5b50 */ static RARE_ENE_1DAT pazz_ene003[0];
/* data 2f5b58 */ static SPRT_DAT pazz_ene00401[0];
/* data 2f5b98 */ static RARE_ENE_1DAT pazz_ene004[0];
/* data 2f5ba0 */ static SPRT_DAT pazz_ene00501[0];
/* data 2f5be0 */ static RARE_ENE_1DAT pazz_ene005[0];
/* data 2f5be8 */ static SPRT_DAT pazz_ene00601[0];
/* data 2f5c28 */ static RARE_ENE_1DAT pazz_ene006[0];
/* data 2f5c30 */ static SPRT_DAT pazz_ene00701[0];
/* data 2f5c70 */ static RARE_ENE_1DAT pazz_ene007[0];
/* data 2f5c78 */ static SPRT_DAT pazz_ene10301[0];
/* data 2f5cb8 */ static RARE_ENE_1DAT pazz_ene103[0];
/* data 2f5cc0 */ static RARE_ENE_DAT pazz_ene[0];
/* data 2f5d50 */ u_int pazz_textbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/gra3d.c
// *****************************************************************************

/* sdata 356b08 */ static u_int *ptexture;
/* sdata 356b0c */ static u_int *ctexture;
/* sdata 356b10 */ static u_int *itexture;
/* data 2f5d80 */ static u_int ene_display[4];
/* data 2f5d90 */ u_int fly_display[3];
/* data 2f5da0 */ sceVu0FVECTOR fog_param[64];
/* data 2f61a0 */ sceVu0IVECTOR fog_rgb[64];
/* data 2f65a0 */ sceVu0FVECTOR fog_param_finder[64];
/* data 2f69a0 */ sceVu0IVECTOR fog_rgb_finder[64];
/* sdata 356b14 */ int disp_frame_counter;
/* data 2f6da0 */ u_char mimchodo_num[0];
/* data 2f6da8 */ u_int *pmanmodel[70];
/* data 2f6ec0 */ u_int *pmanmpk[70];
/* data 2f6fd8 */ u_int *pmanpk2[70];
/* sdata 356b18 */ u_int *pgirlbase;
/* sdata 356b1c */ u_int *pgirlshadow;
/* sdata 356b20 */ u_int *pgirlacs[2];
/* sdata 356b35 */ static u_char bak_cam_door_or;
/* sdata 356b38 */ static int locked_fog_room_no;
/* sdata 356b3c */ static u_char fog_lock;
/* data 2f7110 */ static sceVu0FVECTOR girlbox[0];
/* data 2f7190 */ static sceVu0FVECTOR enebox[0];
/* data 2f7210 */ sceVu0FMATRIX runit_mtx;
/* sbss 357964 */ static int mir_reflect_flg;
/* bss 3c2f40 */ static SPOT_WRK mir_reflect_spot;
/* sbss 357968 */ static int mir_room_workno;
/* data 2f7250 */ LIGHT_PACK girls_light;
/* data 2f7420 */ LIGHT_PACK enemy_light;
/* data 2f75f0 */ u_int *ssearch_models[15];
/* sdata 356b4c */ u_int search_num;
/* data 2f7630 */ u_int *ssearch_models2[15];
/* sdata 356b50 */ u_int search_num2;
/* sbss 35796c */ static int disp3d_all;
/* sbss 357970 */ static int disp3d_room;
/* sbss 357974 */ static int disp3d_room_shadow;
/* sbss 357978 */ static int disp3d_furn;
/* sbss 35797c */ static int disp3d_girl;
/* sbss 357980 */ static int disp3d_enemy;
/* sbss 357984 */ static int disp3d_mirror;
/* sbss 357988 */ static int disp3d_2ddraw;
/* bss 3c2f80 */ static SgSourceChainTag tag_buffer[2][6144];
/* bss 3f2f80 */ static SgLIGHT lights[16];
/* bss 3f3880 */ static SgLIGHT slights[16];
/* sbss 357990 */ static int room_no[2];
/* data 2f7670 */ sceVu0FVECTOR room_ambient_light;
/* data 2f7680 */ SgLIGHT room_pararell_light[12];
/* data 2f7d40 */ SgLIGHT room_point_light[16];
/* data 2f8640 */ SgLIGHT room_spot_light[16];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/leditor.c
// *****************************************************************************

/* data 2f8f40 */ static char *room_name[0];
/* sbss 357998 */ static u_int *ldata_top;
/* sbss 35799c */ static u_int *pdata_top;
/* sbss 3579a0 */ static u_int *sdata_top;
/* bss 3f4180 */ static sceVu0FVECTOR le_ambient;
/* bss 3f4190 */ static SgLIGHT le_lights[3];
/* bss 3f4340 */ static SgLIGHT le_plights[16];
/* bss 3f4c40 */ static SgLIGHT le_slights[16];
/* sbss 3579a4 */ static int fog_mode;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/load3d.c
// *****************************************************************************

/* data 2f9008 */ ROOM_LOAD_BLOCK room_load_block[2];
/* sdata 356b98 */ int r022_light_on;
/* data 2f9170 */ static short int load_furn_num[0];
/* data 2f92a8 */ static short int load_door_num[0];
/* data 2f9350 */ RMDL_ADDR room_addr_tbl[64];
/* data 2f9a50 */ u_int *furn_addr_tbl[500];
/* data 2fa220 */ u_int *door_addr_tbl[128];
/* data 2fa420 */ u_int *item_addr_tbl[48];
/* bss 3f5540 */ static ROOM_LOAD_BLOCK backup_block;
/* sbss 3579b0 */ static char now_load_block;
/* sbss 3579b4 */ static int room_load_num;
/* bss 3f55f8 */ static int room_load_id[32];
/* sbss 3579b8 */ static int room_req_id;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mdldat.c
// *****************************************************************************

/* data 2fa4e0 */ ANI_CODE m000anm000[0];
/* data 2fa4e8 */ ANI_CODE m000anm001[0];
/* data 2fa4f8 */ ANI_CODE m000anm002[0];
/* data 2fa508 */ ANI_CODE m000anm003[0];
/* data 2fa518 */ ANI_CODE m000anm004[0];
/* data 2fa528 */ ANI_CODE m000anm005[0];
/* data 2fa540 */ ANI_CODE m000anm006[0];
/* data 2fa558 */ ANI_CODE m000anm007[0];
/* data 2fa560 */ ANI_CODE m000anm008[0];
/* data 2fa570 */ ANI_CODE m000anm009[0];
/* data 2fa580 */ ANI_CODE m000anm010[0];
/* data 2fa588 */ ANI_CODE m000anm011[0];
/* data 2fa590 */ ANI_CODE m000anm012[0];
/* data 2fa598 */ ANI_CODE m000anm013[0];
/* data 2fa5a0 */ ANI_CODE m000anm014[0];
/* data 2fa5a8 */ ANI_CODE m000anm015[0];
/* data 2fa5b0 */ ANI_CODE m000anm016[0];
/* data 2fa5b8 */ ANI_CODE m000anm017[0];
/* data 2fa5c0 */ ANI_CODE m000anm018[0];
/* data 2fa5c8 */ ANI_CODE m000anm019[0];
/* data 2fa5d0 */ ANI_CODE m000anm020[0];
/* data 2fa5d8 */ ANI_CODE m000anm021[0];
/* data 2fa5e0 */ ANI_CODE m000anm022[0];
/* data 2fa5e8 */ ANI_CODE m000anm023[0];
/* data 2fa5f0 */ ANI_CODE m000anm024[0];
/* data 2fa5f8 */ ANI_CODE m000anm025[0];
/* data 2fa600 */ ANI_CODE m000anm026[0];
/* data 2fa608 */ ANI_CODE m000anm027[0];
/* data 2fa610 */ ANI_CODE m000anm028[0];
/* data 2fa618 */ ANI_CODE m000anm029[0];
/* data 2fa620 */ ANI_CODE m000anm030[0];
/* data 2fa628 */ ANI_CODE m000anm031[0];
/* data 2fa630 */ ANI_CODE m000anm032[0];
/* data 2fa638 */ ANI_CODE m000anm033[0];
/* data 2fa640 */ ANI_CODE m000anm034[0];
/* data 2fa648 */ ANI_CODE m000anm035[0];
/* data 2fa650 */ ANI_CODE m000anm036[0];
/* data 2fa658 */ ANI_CODE m000anm037[0];
/* data 2fa660 */ ANI_CODE m000anm038[0];
/* data 2fa668 */ ANI_CODE m000anm039[0];
/* data 2fa670 */ ANI_CODE m000anm040[0];
/* data 2fa678 */ ANI_CODE m000anm041[0];
/* data 2fa680 */ ANI_CODE m000anm042[0];
/* data 2fa688 */ ANI_CODE m000anm043[0];
/* data 2fa690 */ ANI_CODE m000anm044[0];
/* data 2fa698 */ ANI_CODE m000anm045[0];
/* data 2fa6a0 */ ANI_CODE m000anm046[0];
/* data 2fa6a8 */ ANI_CODE m000anm047[0];
/* data 2fa6b0 */ ANI_CODE m000anm048[0];
/* data 2fa6c8 */ ANI_CODE m000anm049[0];
/* data 2fa6e0 */ ANI_CODE m000anm050[0];
/* data 2fa6f8 */ ANI_CODE m000anm051[0];
/* data 2fa710 */ ANI_CODE m000anm052[0];
/* data 2fa728 */ ANI_CODE m000anm053[0];
/* data 2fa740 */ ANI_CODE m000anm054[0];
/* data 2fa758 */ ANI_CODE m000anm055[0];
/* data 2fa770 */ ANI_CODE m000anm056[0];
/* data 2fa780 */ ANI_CODE m000anm057[0];
/* data 2fa788 */ ANI_CODE m000anm058[0];
/* data 2fa798 */ ANI_CODE m000anm059[0];
/* data 2fa7a0 */ ANI_CODE m000anm060[0];
/* data 2fa7b0 */ ANI_CODE m000anm061[0];
/* data 2fa7b8 */ ANI_CODE m000anm062[0];
/* data 2fa7c0 */ ANI_CODE m000anm063[0];
/* data 2fa7c8 */ ANI_CODE m000anm064[0];
/* data 2fa7d0 */ ANI_CODE m000anm065[0];
/* data 2fa7d8 */ ANI_CODE m000anm066[0];
/* data 2fa7e0 */ ANI_CODE m000anm067[0];
/* data 2fa7e8 */ ANI_CODE m000anm068[0];
/* data 2fa7f0 */ ANI_CODE m000anm069[0];
/* data 2fa800 */ ANI_CODE m000anm070[0];
/* data 2fa810 */ ANI_CODE m000anm071[0];
/* data 2fa820 */ ANI_CODE m000anm072[0];
/* data 2fa830 */ ANI_CODE m000anm073[0];
/* data 2fa840 */ ANI_CODE m000anm074[0];
/* data 2fa850 */ ANI_CODE m000anm075[0];
/* data 2fa860 */ ANI_CODE m000anm076[0];
/* data 2fa870 */ ANI_CODE m000anm077[0];
/* data 2fa880 */ ANI_CODE m000anm078[0];
/* data 2fa890 */ ANI_CODE m000anm079[0];
/* data 2fa8a0 */ ANI_CODE m000anm080[0];
/* data 2fa8b0 */ ANI_CODE m000anm081[0];
/* data 2fa8c0 */ ANI_CODE m000anm082[0];
/* data 2fa8d0 */ ANI_CODE m000anm083[0];
/* data 2fa8e0 */ ANI_CODE m000anm084[0];
/* data 2fa8f0 */ ANI_CODE m000anm085[0];
/* data 2fa8f8 */ ANI_CODE m000anm086[0];
/* data 2fa900 */ ANI_CODE m000anm087[0];
/* data 2fa908 */ ANI_CODE m000anm088[0];
/* data 2fa910 */ ANI_CODE m000anm089[0];
/* data 2fa918 */ ANI_CODE m000anm090[0];
/* data 2fa920 */ ANI_CODE m000anm091[0];
/* data 2fa928 */ ANI_CODE m000anm092[0];
/* data 2fa930 */ ANI_CODE m000anm093[0];
/* data 2fa938 */ ANI_CODE m000anm094[0];
/* data 2fa940 */ ANI_CODE m000anm095[0];
/* data 2fa948 */ ANI_CODE m000anm096[0];
/* data 2fa968 */ ANI_CODE m000anm097[0];
/* data 2fa988 */ ANI_CODE m000anm098[0];
/* data 2fa9c8 */ ANI_CODE m000anm099[0];
/* data 2faa00 */ ANI_CODE m000anm100[0];
/* data 2faa08 */ ANI_CODE m000anm101[0];
/* data 2faa18 */ ANI_CODE m000anm102[0];
/* data 2faa28 */ ANI_CODE m000anm103[0];
/* data 2faa30 */ ANI_CODE m000anm104[0];
/* data 2faa38 */ ANI_CODE m000anm105[0];
/* data 2faa78 */ ANI_CODE m000anm106[0];
/* data 2faab8 */ ANI_CODE m000anm107[0];
/* data 2faac0 */ ANI_CODE m001anm048[0];
/* data 2faad8 */ ANI_CODE m001anm049[0];
/* data 2faaf0 */ ANI_CODE m001anm050[0];
/* data 2fab08 */ ANI_CODE m001anm051[0];
/* data 2fab20 */ ANI_CODE m001anm052[0];
/* data 2fab38 */ ANI_CODE m001anm053[0];
/* data 2fab50 */ ANI_CODE m001anm054[0];
/* data 2fab68 */ ANI_CODE m001anm055[0];
/* data 2fab80 */ ANI_CODE m001anm069[0];
/* data 2fab98 */ ANI_CODE m001anm070[0];
/* data 2fabb0 */ ANI_CODE m001anm071[0];
/* data 2fabc8 */ ANI_CODE m001anm072[0];
/* data 2fabe0 */ ANI_CODE m001anm073[0];
/* data 2fabf8 */ ANI_CODE m001anm074[0];
/* data 2fac10 */ ANI_CODE m001anm075[0];
/* data 2fac28 */ ANI_CODE m001anm076[0];
/* data 2fac40 */ ANI_CODE m010anm002[0];
/* data 2fac48 */ ANI_CODE m010anm006[0];
/* data 2fac50 */ ANI_CODE m010anm007[0];
/* data 2fac58 */ ANI_CODE m010anm009[0];
/* data 2fac60 */ ANI_CODE m010anm010[0];
/* data 2fac68 */ ANI_CODE m010anm011[0];
/* data 2fac70 */ ANI_CODE m010anm012[0];
/* data 2fac78 */ ANI_CODE m010anm013[0];
/* data 2fac80 */ ANI_CODE m011anm002[0];
/* data 2fac88 */ ANI_CODE m011anm006[0];
/* data 2fac90 */ ANI_CODE m011anm007[0];
/* data 2fac98 */ ANI_CODE m011anm008[0];
/* data 2faca0 */ ANI_CODE m011anm009[0];
/* data 2faca8 */ ANI_CODE m011anm010[0];
/* data 2facb0 */ ANI_CODE m011anm011[0];
/* data 2facb8 */ ANI_CODE m011anm012[0];
/* data 2facc0 */ ANI_CODE m011anm013[0];
/* data 2facc8 */ ANI_CODE m011anm014[0];
/* data 2facd0 */ ANI_CODE m012anm000[0];
/* data 2facd8 */ ANI_CODE m012anm002[0];
/* data 2face0 */ ANI_CODE m012anm003[0];
/* data 2face8 */ ANI_CODE m012anm004[0];
/* data 2facf0 */ ANI_CODE m012anm005[0];
/* data 2facf8 */ ANI_CODE m012anm006[0];
/* data 2fad00 */ ANI_CODE m012anm007[0];
/* data 2fad08 */ ANI_CODE m012anm008[0];
/* data 2fad10 */ ANI_CODE m012anm009[0];
/* data 2fad18 */ ANI_CODE m012anm010[0];
/* data 2fad20 */ ANI_CODE m012anm011[0];
/* data 2fad28 */ ANI_CODE m012anm012[0];
/* data 2fad30 */ ANI_CODE m012anm013[0];
/* data 2fad38 */ ANI_CODE m013anm002[0];
/* data 2fad40 */ ANI_CODE m013anm006[0];
/* data 2fad48 */ ANI_CODE m013anm007[0];
/* data 2fad50 */ ANI_CODE m013anm008[0];
/* data 2fad58 */ ANI_CODE m013anm009[0];
/* data 2fad60 */ ANI_CODE m013anm010[0];
/* data 2fad68 */ ANI_CODE m013anm011[0];
/* data 2fad70 */ ANI_CODE m013anm012[0];
/* data 2fad78 */ ANI_CODE m014anm002[0];
/* data 2fad80 */ ANI_CODE m014anm006[0];
/* data 2fad88 */ ANI_CODE m014anm007[0];
/* data 2fad90 */ ANI_CODE m014anm008[0];
/* data 2fad98 */ ANI_CODE m014anm009[0];
/* data 2fada0 */ ANI_CODE m014anm010[0];
/* data 2fada8 */ ANI_CODE m014anm011[0];
/* data 2fadb0 */ ANI_CODE m014anm012[0];
/* data 2fadb8 */ ANI_CODE m014anm013[0];
/* data 2fadc0 */ ANI_CODE m014anm014[0];
/* data 2fadc8 */ ANI_CODE m014anm015[0];
/* data 2fadd0 */ ANI_CODE m014anm016[0];
/* data 2fadd8 */ ANI_CODE m014anm017[0];
/* data 2fade0 */ ANI_CODE m014anm018[0];
/* data 2fade8 */ ANI_CODE m015anm000[0];
/* data 2fadf0 */ ANI_CODE m015anm003[0];
/* data 2fadf8 */ ANI_CODE m015anm004[0];
/* data 2fae00 */ ANI_CODE m015anm006[0];
/* data 2fae08 */ ANI_CODE m015anm007[0];
/* data 2fae10 */ ANI_CODE m015anm008[0];
/* data 2fae18 */ ANI_CODE m015anm009[0];
/* data 2fae20 */ ANI_CODE m015anm010[0];
/* data 2fae28 */ ANI_CODE m015anm011[0];
/* data 2fae30 */ ANI_CODE m015anm012[0];
/* data 2fae38 */ ANI_CODE m015anm013[0];
/* data 2fae40 */ ANI_CODE m015anm014[0];
/* data 2fae48 */ ANI_CODE m015anm015[0];
/* data 2fae50 */ ANI_CODE m015anm016[0];
/* data 2fae58 */ ANI_CODE m015anm017[0];
/* data 2fae60 */ ANI_CODE m016anm002[0];
/* data 2fae68 */ ANI_CODE m016anm006[0];
/* data 2fae70 */ ANI_CODE m016anm007[0];
/* data 2fae78 */ ANI_CODE m016anm009[0];
/* data 2fae80 */ ANI_CODE m016anm010[0];
/* data 2fae88 */ ANI_CODE m016anm011[0];
/* data 2fae90 */ ANI_CODE m016anm012[0];
/* data 2fae98 */ ANI_CODE m016anm013[0];
/* data 2faea0 */ ANI_CODE m016anm014[0];
/* data 2faea8 */ ANI_CODE m016anm015[0];
/* data 2faeb0 */ ANI_CODE m016anm016[0];
/* data 2faeb8 */ ANI_CODE m016anm017[0];
/* data 2faec0 */ ANI_CODE m016anm018[0];
/* data 2faec8 */ ANI_CODE m018anm000[0];
/* data 2faed0 */ ANI_CODE m018anm003[0];
/* data 2faed8 */ ANI_CODE m018anm004[0];
/* data 2faee0 */ ANI_CODE m018anm006[0];
/* data 2faee8 */ ANI_CODE m018anm007[0];
/* data 2faef0 */ ANI_CODE m018anm008[0];
/* data 2faef8 */ ANI_CODE m018anm009[0];
/* data 2faf00 */ ANI_CODE m018anm010[0];
/* data 2faf08 */ ANI_CODE m018anm011[0];
/* data 2faf10 */ ANI_CODE m018anm012[0];
/* data 2faf18 */ ANI_CODE m018anm013[0];
/* data 2faf20 */ ANI_CODE m018anm014[0];
/* data 2faf28 */ ANI_CODE m018anm015[0];
/* data 2faf30 */ ANI_CODE m018anm016[0];
/* data 2faf38 */ ANI_CODE m019anm000[0];
/* data 2faf40 */ ANI_CODE m019anm001[0];
/* data 2faf48 */ ANI_CODE m019anm002[0];
/* data 2faf50 */ ANI_CODE m019anm006[0];
/* data 2faf58 */ ANI_CODE m019anm007[0];
/* data 2faf60 */ ANI_CODE m019anm008[0];
/* data 2faf68 */ ANI_CODE m019anm009[0];
/* data 2faf70 */ ANI_CODE m019anm010[0];
/* data 2faf78 */ ANI_CODE m019anm011[0];
/* data 2faf80 */ ANI_CODE m019anm012[0];
/* data 2faf88 */ ANI_CODE m019anm013[0];
/* data 2faf90 */ ANI_CODE m020anm000[0];
/* data 2faf98 */ ANI_CODE m020anm002[0];
/* data 2fafa0 */ ANI_CODE m020anm005[0];
/* data 2fafa8 */ ANI_CODE m020anm006[0];
/* data 2fafb0 */ ANI_CODE m020anm007[0];
/* data 2fafb8 */ ANI_CODE m020anm008[0];
/* data 2fafc0 */ ANI_CODE m020anm009[0];
/* data 2fafc8 */ ANI_CODE m020anm010[0];
/* data 2fafd0 */ ANI_CODE m020anm011[0];
/* data 2fafd8 */ ANI_CODE m020anm012[0];
/* data 2fafe0 */ ANI_CODE m020anm013[0];
/* data 2fafe8 */ ANI_CODE m020anm014[0];
/* data 2faff0 */ ANI_CODE m021anm000[0];
/* data 2faff8 */ ANI_CODE m021anm002[0];
/* data 2fb000 */ ANI_CODE m021anm003[0];
/* data 2fb008 */ ANI_CODE m021anm004[0];
/* data 2fb010 */ ANI_CODE m021anm005[0];
/* data 2fb018 */ ANI_CODE m021anm009[0];
/* data 2fb020 */ ANI_CODE m022anm000[0];
/* data 2fb028 */ ANI_CODE m022anm002[0];
/* data 2fb030 */ ANI_CODE m022anm006[0];
/* data 2fb038 */ ANI_CODE m022anm007[0];
/* data 2fb040 */ ANI_CODE m022anm009[0];
/* data 2fb048 */ ANI_CODE m022anm010[0];
/* data 2fb050 */ ANI_CODE m022anm011[0];
/* data 2fb058 */ ANI_CODE m022anm012[0];
/* data 2fb060 */ ANI_CODE m022anm013[0];
/* data 2fb068 */ ANI_CODE m022anm014[0];
/* data 2fb070 */ ANI_CODE m022anm015[0];
/* data 2fb078 */ ANI_CODE m023anm000[0];
/* data 2fb080 */ ANI_CODE m023anm002[0];
/* data 2fb088 */ ANI_CODE m023anm006[0];
/* data 2fb090 */ ANI_CODE m023anm007[0];
/* data 2fb098 */ ANI_CODE m023anm009[0];
/* data 2fb0a0 */ ANI_CODE m023anm010[0];
/* data 2fb0a8 */ ANI_CODE m023anm011[0];
/* data 2fb0b0 */ ANI_CODE m023anm012[0];
/* data 2fb0b8 */ ANI_CODE m024anm000[0];
/* data 2fb0c0 */ ANI_CODE m024anm002[0];
/* data 2fb0c8 */ ANI_CODE m024anm006[0];
/* data 2fb0d0 */ ANI_CODE m024anm007[0];
/* data 2fb0d8 */ ANI_CODE m024anm009[0];
/* data 2fb0e0 */ ANI_CODE m024anm010[0];
/* data 2fb0e8 */ ANI_CODE m024anm011[0];
/* data 2fb0f0 */ ANI_CODE m024anm012[0];
/* data 2fb0f8 */ ANI_CODE m024anm013[0];
/* data 2fb100 */ ANI_CODE m024anm014[0];
/* data 2fb108 */ ANI_CODE m024anm015[0];
/* data 2fb110 */ ANI_CODE m024anm016[0];
/* data 2fb118 */ ANI_CODE m025anm000[0];
/* data 2fb120 */ ANI_CODE m025anm006[0];
/* data 2fb128 */ ANI_CODE m025anm007[0];
/* data 2fb130 */ ANI_CODE m025anm009[0];
/* data 2fb140 */ ANI_CODE m025anm010[0];
/* data 2fb148 */ ANI_CODE m025anm013[0];
/* data 2fb150 */ ANI_CODE m025anm014[0];
/* data 2fb158 */ ANI_CODE m025anm015[0];
/* data 2fb160 */ ANI_CODE m025anm016[0];
/* data 2fb170 */ ANI_CODE m025anm017[0];
/* data 2fb178 */ ANI_CODE m025anm018[0];
/* data 2fb180 */ ANI_CODE m025anm019[0];
/* data 2fb190 */ ANI_CODE m025anm020[0];
/* data 2fb198 */ ANI_CODE m027anm000[0];
/* data 2fb1a0 */ ANI_CODE m027anm001[0];
/* data 2fb1a8 */ ANI_CODE m027anm002[0];
/* data 2fb1b0 */ ANI_CODE m027anm003[0];
/* data 2fb1b8 */ ANI_CODE m027anm004[0];
/* data 2fb1c0 */ ANI_CODE m027anm006[0];
/* data 2fb1c8 */ ANI_CODE m027anm007[0];
/* data 2fb1d0 */ ANI_CODE m027anm009[0];
/* data 2fb1d8 */ ANI_CODE m027anm010[0];
/* data 2fb1e0 */ ANI_CODE m027anm011[0];
/* data 2fb1e8 */ ANI_CODE m027anm012[0];
/* data 2fb1f0 */ ANI_CODE m027anm013[0];
/* data 2fb1f8 */ ANI_CODE m027anm014[0];
/* data 2fb200 */ ANI_CODE m027anm015[0];
/* data 2fb208 */ ANI_CODE m027anm016[0];
/* data 2fb210 */ ANI_CODE m028anm000[0];
/* data 2fb218 */ ANI_CODE m028anm001[0];
/* data 2fb220 */ ANI_CODE m028anm002[0];
/* data 2fb228 */ ANI_CODE m028anm006[0];
/* data 2fb230 */ ANI_CODE m028anm007[0];
/* data 2fb238 */ ANI_CODE m028anm009[0];
/* data 2fb240 */ ANI_CODE m028anm010[0];
/* data 2fb248 */ ANI_CODE m028anm011[0];
/* data 2fb250 */ ANI_CODE m028anm012[0];
/* data 2fb258 */ ANI_CODE m028anm013[0];
/* data 2fb260 */ ANI_CODE m028anm014[0];
/* data 2fb268 */ ANI_CODE m028anm015[0];
/* data 2fb270 */ ANI_CODE m031anm000[0];
/* data 2fb278 */ ANI_CODE m031anm001[0];
/* data 2fb280 */ ANI_CODE m031anm002[0];
/* data 2fb288 */ ANI_CODE m031anm003[0];
/* data 2fb290 */ ANI_CODE m031anm004[0];
/* data 2fb298 */ ANI_CODE m031anm006[0];
/* data 2fb2a0 */ ANI_CODE m031anm011[0];
/* data 2fb2a8 */ ANI_CODE m031anm012[0];
/* data 2fb2b0 */ ANI_CODE m032anm000[0];
/* data 2fb2b8 */ ANI_CODE m032anm002[0];
/* data 2fb2c0 */ ANI_CODE m032anm003[0];
/* data 2fb2c8 */ ANI_CODE m032anm004[0];
/* data 2fb2d0 */ ANI_CODE m032anm006[0];
/* data 2fb2d8 */ ANI_CODE m032anm007[0];
/* data 2fb2e0 */ ANI_CODE m032anm008[0];
/* data 2fb2e8 */ ANI_CODE m032anm009[0];
/* data 2fb2f0 */ ANI_CODE m032anm010[0];
/* data 2fb2f8 */ ANI_CODE m032anm011[0];
/* data 2fb300 */ ANI_CODE m032anm012[0];
/* data 2fb308 */ ANI_CODE m032anm013[0];
/* data 2fb310 */ ANI_CODE m032anm014[0];
/* data 2fb318 */ ANI_CODE m032anm015[0];
/* data 2fb320 */ ANI_CODE m032anm016[0];
/* data 2fb328 */ ANI_CODE m032anm017[0];
/* data 2fb330 */ ANI_CODE m032anm018[0];
/* data 2fb338 */ ANI_CODE m032anm019[0];
/* data 2fb340 */ ANI_CODE m033anm000[0];
/* data 2fb348 */ ANI_CODE m033anm002[0];
/* data 2fb350 */ ANI_CODE m033anm003[0];
/* data 2fb358 */ ANI_CODE m033anm004[0];
/* data 2fb360 */ ANI_CODE m033anm005[0];
/* data 2fb368 */ ANI_CODE m033anm006[0];
/* data 2fb370 */ ANI_CODE m033anm007[0];
/* data 2fb378 */ ANI_CODE m033anm008[0];
/* data 2fb380 */ ANI_CODE m033anm009[0];
/* data 2fb388 */ ANI_CODE m033anm010[0];
/* data 2fb390 */ ANI_CODE m033anm011[0];
/* data 2fb398 */ ANI_CODE m033anm012[0];
/* data 2fb3a0 */ ANI_CODE m033anm013[0];
/* data 2fb3a8 */ ANI_CODE m033anm014[0];
/* data 2fb3b0 */ ANI_CODE m033anm015[0];
/* data 2fb3b8 */ ANI_CODE m033anm016[0];
/* data 2fb3c0 */ ANI_CODE m033anm017[0];
/* data 2fb3c8 */ ANI_CODE m033anm018[0];
/* data 2fb3d0 */ ANI_CODE m033anm019[0];
/* data 2fb3d8 */ ANI_CODE m034anm000[0];
/* data 2fb3e0 */ ANI_CODE m034anm002[0];
/* data 2fb3e8 */ ANI_CODE m034anm003[0];
/* data 2fb3f0 */ ANI_CODE m034anm004[0];
/* data 2fb3f8 */ ANI_CODE m034anm006[0];
/* data 2fb400 */ ANI_CODE m034anm007[0];
/* data 2fb408 */ ANI_CODE m034anm008[0];
/* data 2fb410 */ ANI_CODE m034anm009[0];
/* data 2fb418 */ ANI_CODE m034anm010[0];
/* data 2fb420 */ ANI_CODE m034anm011[0];
/* data 2fb428 */ ANI_CODE m034anm012[0];
/* data 2fb430 */ ANI_CODE m034anm013[0];
/* data 2fb438 */ ANI_CODE m034anm014[0];
/* data 2fb440 */ ANI_CODE m034anm015[0];
/* data 2fb448 */ ANI_CODE m034anm016[0];
/* data 2fb450 */ ANI_CODE m034anm017[0];
/* data 2fb458 */ ANI_CODE m034anm018[0];
/* data 2fb460 */ ANI_CODE m034anm019[0];
/* data 2fb468 */ ANI_CODE m035anm000[0];
/* data 2fb470 */ ANI_CODE m035anm002[0];
/* data 2fb478 */ ANI_CODE m035anm006[0];
/* data 2fb480 */ ANI_CODE m035anm007[0];
/* data 2fb488 */ ANI_CODE m035anm008[0];
/* data 2fb490 */ ANI_CODE m035anm009[0];
/* data 2fb498 */ ANI_CODE m035anm010[0];
/* data 2fb4a0 */ ANI_CODE m035anm011[0];
/* data 2fb4a8 */ ANI_CODE m035anm012[0];
/* data 2fb4b0 */ ANI_CODE m035anm013[0];
/* data 2fb4b8 */ ANI_CODE m035anm014[0];
/* data 2fb4c0 */ ANI_CODE m035anm015[0];
/* data 2fb4c8 */ ANI_CODE m035anm016[0];
/* data 2fb4d0 */ ANI_CODE m035anm017[0];
/* data 2fb4d8 */ ANI_CODE m035anm018[0];
/* data 2fb4e0 */ ANI_CODE m035anm019[0];
/* data 2fb4e8 */ ANI_CODE m036anm000[0];
/* data 2fb4f0 */ ANI_CODE m036anm002[0];
/* data 2fb4f8 */ ANI_CODE m036anm006[0];
/* data 2fb500 */ ANI_CODE m036anm007[0];
/* data 2fb508 */ ANI_CODE m036anm008[0];
/* data 2fb510 */ ANI_CODE m036anm009[0];
/* data 2fb518 */ ANI_CODE m036anm010[0];
/* data 2fb520 */ ANI_CODE m036anm011[0];
/* data 2fb528 */ ANI_CODE m036anm012[0];
/* data 2fb530 */ ANI_CODE m036anm013[0];
/* data 2fb538 */ ANI_CODE m036anm014[0];
/* data 2fb540 */ ANI_CODE m036anm015[0];
/* data 2fb548 */ ANI_CODE m036anm016[0];
/* data 2fb550 */ ANI_CODE m037anm000[0];
/* data 2fb560 */ ANI_CODE m037anm002[0];
/* data 2fb570 */ ANI_CODE m037anm006[0];
/* data 2fb580 */ ANI_CODE m037anm007[0];
/* data 2fb590 */ ANI_CODE m037anm008[0];
/* data 2fb5a0 */ ANI_CODE m037anm009[0];
/* data 2fb5b0 */ ANI_CODE m037anm010[0];
/* data 2fb5c0 */ ANI_CODE m037anm011[0];
/* data 2fb5c8 */ ANI_CODE m037anm012[0];
/* data 2fb5d8 */ ANI_CODE m037anm013[0];
/* data 2fb5e0 */ ANI_CODE m037anm014[0];
/* data 2fb5f0 */ ANI_CODE m037anm015[0];
/* data 2fb5f8 */ ANI_CODE m037anm016[0];
/* data 2fb600 */ ANI_CODE m037anm017[0];
/* data 2fb610 */ ANI_CODE m038anm000[0];
/* data 2fb618 */ ANI_CODE m038anm001[0];
/* data 2fb620 */ ANI_CODE m038anm002[0];
/* data 2fb628 */ ANI_CODE m038anm006[0];
/* data 2fb630 */ ANI_CODE m038anm007[0];
/* data 2fb638 */ ANI_CODE m038anm008[0];
/* data 2fb640 */ ANI_CODE m038anm009[0];
/* data 2fb648 */ ANI_CODE m038anm010[0];
/* data 2fb650 */ ANI_CODE m038anm011[0];
/* data 2fb658 */ ANI_CODE m038anm012[0];
/* data 2fb660 */ ANI_CODE m040anm000[0];
/* data 2fb668 */ ANI_CODE m040anm002[0];
/* data 2fb670 */ ANI_CODE m040anm006[0];
/* data 2fb678 */ ANI_CODE m040anm011[0];
/* data 2fb680 */ ANI_CODE m040anm013[0];
/* data 2fb688 */ ANI_CODE m040anm014[0];
/* data 2fb690 */ ANI_CODE m040anm015[0];
/* data 2fb698 */ ANI_CODE m040anm016[0];
/* data 2fb6a0 */ ANI_CODE m042anm002[0];
/* data 2fb6a8 */ ANI_CODE m042anm006[0];
/* data 2fb6b0 */ ANI_CODE m042anm007[0];
/* data 2fb6b8 */ ANI_CODE m042anm008[0];
/* data 2fb6c0 */ ANI_CODE m042anm009[0];
/* data 2fb6c8 */ ANI_CODE m042anm010[0];
/* data 2fb6d0 */ ANI_CODE m042anm011[0];
/* data 2fb6d8 */ ANI_CODE m042anm012[0];
/* data 2fb6e0 */ ANI_CODE m042anm013[0];
/* data 2fb6e8 */ ANI_CODE m042anm014[0];
/* data 2fb6f0 */ ANI_CODE m042anm015[0];
/* data 2fb6f8 */ ANI_CODE m042anm016[0];
/* data 2fb700 */ ANI_CODE m042anm017[0];
/* data 2fb708 */ ANI_CODE arei_anm[0];
/* data 2fb710 */ ANI_CODE arei_loop_anm[0];
/* data 2fb718 */ ANI_CODE *m000anm_tbl[0];
/* data 2fb8d0 */ ANI_CODE *m001anm_tbl[0];
/* data 2fba88 */ ANI_CODE *m010anm_tbl[0];
/* data 2fbac8 */ ANI_CODE *m011anm_tbl[0];
/* data 2fbb08 */ ANI_CODE *m012anm_tbl[0];
/* data 2fbb48 */ ANI_CODE *m013anm_tbl[0];
/* data 2fbb80 */ ANI_CODE *m014anm_tbl[0];
/* data 2fbbd0 */ ANI_CODE *m015anm_tbl[0];
/* data 2fbc20 */ ANI_CODE *m016anm_tbl[0];
/* data 2fbc70 */ ANI_CODE *m018anm_tbl[0];
/* data 2fbcb8 */ ANI_CODE *m019anm_tbl[0];
/* data 2fbcf8 */ ANI_CODE *m020anm_tbl[0];
/* data 2fbd38 */ ANI_CODE *m021anm_tbl[0];
/* data 2fbd70 */ ANI_CODE *m022anm_tbl[0];
/* data 2fbdb8 */ ANI_CODE *m023anm_tbl[0];
/* data 2fbdf0 */ ANI_CODE *m024anm_tbl[0];
/* data 2fbe38 */ ANI_CODE *m025anm_tbl[0];
/* data 2fbe90 */ ANI_CODE *m027anm_tbl[0];
/* data 2fbed8 */ ANI_CODE *m028anm_tbl[0];
/* data 2fbf20 */ ANI_CODE *m031anm_tbl[0];
/* data 2fbf58 */ ANI_CODE *m032anm_tbl[0];
/* data 2fbfb0 */ ANI_CODE *m033anm_tbl[0];
/* data 2fc008 */ ANI_CODE *m034anm_tbl[0];
/* data 2fc060 */ ANI_CODE *m035anm_tbl[0];
/* data 2fc0b8 */ ANI_CODE *m036anm_tbl[0];
/* data 2fc100 */ ANI_CODE *m037anm_tbl[0];
/* data 2fc150 */ ANI_CODE *m038anm_tbl[0];
/* data 2fc188 */ ANI_CODE *m040anm_tbl[0];
/* data 2fc1d0 */ ANI_CODE *m042anm_tbl[0];
/* data 2fc220 */ ANI_CODE *arei_anm_tbl[0];
/* data 2fc228 */ ANI_CODE *arei_loopanm_tbl[0];
/* data 2fc230 */ MANMDL_DAT manmdl_dat[0];
/* data 2fc770 */ ANI_CODE **anm_tbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mdlwork.c
// *****************************************************************************

/* data 2fc8a8 */ static PLYR_FILE_ID plyr_file_id[0];
/* sdata 356bb8 */ u_int *plyr_clut_addr;
/* sdata 356bbc */ u_int *plyr_bwc_addr;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mdlact.c
// *****************************************************************************

/* data 2fc8e8 */ char (*plyr_act_func[0])(/* parameters unknown */);
/* data 2fc908 */ PLYR_FURI_DAT plyr_act_furi0[0];
/* data 2fc998 */ PLYR_FURI_DAT plyr_act_furi1[0];
/* data 2fc9d8 */ PLYR_FURI_DAT plyr_act_furi2[0];
/* data 2fca18 */ PLYR_FURI_DAT plyr_act_furi3[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mime.c
// *****************************************************************************

/* sdata 356bcc */ static u_int plyr_mepati_cnt;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/accessory.c
// *****************************************************************************

/* data 2fcc50 */ SPRING rope_spring[20][9];
/* data 2fd1f0 */ C_PARTICLE rope_particle[20][10];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/motion.c
// *****************************************************************************

/* data 300430 */ MIME_CTRL mim_chodo[20];
/* data 3005c0 */ u_char mim_chodo_se[20];
/* data 3005d8 */ MIME_DAT mim_cdat[2][20];
/* data 300900 */ ANI_CTRL ani_mdl[20];
/* data 301d00 */ ANI_MDL_CTRL ani_mdl_ctrl[20];
/* sdata 356bf0 */ ENE_PKT_CTRL ene_pkt_ctrl[4];
/* sdata 356bf8 */ ACS_ALPHA plyracs_ctrl[2];
/* data 301df0 */ ROPE_CTRL rope_ctrl[20];
/* data 3022f0 */ CMOVE_CTRL cmove_ctrl[10];
/* data 3023b8 */ ENE_VRAM_CTRL ene_vram_ctrl[4];
/* data 3023f8 */ ENE_VRAM_CTRL ene_vram_bak[4];
/* data 302438 */ ENE_CHILD_CTRL ene_child_ctrl[4];
/* sdata 356c00 */ MSN_PLYR_INIT plyr_init_ctrl;
/* sdata 356c02 */ char plyr_mdl_no;
/* sdata 356c03 */ u_char mim_mepati_id;
/* sdata 356c04 */ u_char mim_nigiri_l_id;
/* sdata 356c05 */ u_char mim_nigiri_r_id;
/* data 302468 */ QUAKE_CTRL quake;
/* data 302480 */ PLYR_ACT_WRK plyr_act_wrk;
/* bss 3f7590 */ static sceVu0FMATRIX m_start[60];
/* bss 3f8490 */ static sceVu0FMATRIX m_end[60];
/* sdata 356c08 */ float now_frot_x;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/mim_dat.c
// *****************************************************************************

/* data 3024c0 */ u_char mimchodo_r003[0];
/* data 3024c8 */ u_char mimchodo_r007[0];
/* data 3024d0 */ u_char mimchodo_r009[0];
/* data 3024d8 */ u_char mimchodo_r011[0];
/* data 3024e0 */ u_char mimchodo_r021[0];
/* data 3024e8 */ u_char mimchodo_r041[0];
/* data 3024f0 */ MIME_LOAD mimchodo_tbl[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/motion/acs_dat.c
// *****************************************************************************

/* data 302640 */ SPHERE sphere_R100;
/* data 302650 */ SPHERE sphere_R150;
/* data 302660 */ SPHERE sphere_R200;
/* data 302670 */ TUBE tube_R150_H200;
/* data 302690 */ TUBE tube_R90_H200;
/* data 3026b0 */ WMIM mimacs_ribon_dat;
/* data 3026e0 */ WMIM mimacs_hair_dat;
/* data 302710 */ WMIM_DAT m000_wmim_tbl[0];
/* data 302730 */ WMIM mimacs_hair00_dat;
/* data 302760 */ WMIM mimacs_hair01_dat;
/* data 302790 */ WMIM_DAT m021_wmim_tbl[0];
/* data 3027a8 */ WMIM_DAT m023_wmim_tbl[0];
/* data 3027c0 */ WMIM mimacs_lhand_dat;
/* data 3027f0 */ WMIM mimacs_rhand_dat;
/* data 302820 */ WMIM_DAT m027_wmim_tbl[0];
/* data 302838 */ WMIM_DAT m028_wmim_tbl[0];
/* data 302850 */ float rope_vtx0[0];
/* data 302868 */ float rope_vtx1[0];
/* data 302880 */ float rope_vtx2[0];
/* data 302898 */ ROPE_DAT rope_dat0;
/* data 3028b0 */ ROPE_DAT rope_dat1;
/* data 3028c8 */ ROPE_DAT rope_dat2;
/* data 3028e0 */ float rope_vtx3[0];
/* data 3028f8 */ ROPE_DAT rope_dat3;
/* data 302910 */ float rope_vtx4[0];
/* data 302920 */ ROPE_DAT rope_dat4;
/* data 302938 */ float rope_vtx5[0];
/* data 302950 */ ROPE_DAT rope_dat5;
/* data 302968 */ float rope_vtx6[0];
/* data 302980 */ ROPE_DAT rope_dat6;
/* data 302998 */ float rope_vtx7[0];
/* data 3029b0 */ ROPE_DAT rope_dat7;
/* data 3029c8 */ float rope_vtx8[0];
/* data 3029e0 */ float rope_vtx9[0];
/* data 3029f8 */ float rope_vtx10[0];
/* data 302a10 */ ROPE_DAT rope_dat8;
/* data 302a28 */ ROPE_DAT rope_dat9;
/* data 302a40 */ ROPE_DAT rope_dat10;
/* data 302a58 */ ROPE_DAT *rope_tbl[0];
/* data 302a88 */ CLOTH cloth_manto0;
/* data 302a98 */ CLOTH cloth_manto1;
/* data 302aa8 */ CLOTH cloth_manto2;
/* data 302ab8 */ CLOTH cloth_manto3;
/* data 302ac8 */ CLOTH cloth_manto4;
/* data 302ad8 */ CLOTH cloth_manto5;
/* data 302ae8 */ CLOTH cloth_manto6;
/* data 302af8 */ CLOTH cloth_nawa0;
/* data 302b08 */ CLOTH cloth_nawa1;
/* data 302b18 */ CLOTH cloth_furisode;
/* data 302b28 */ COLLISION_DAT m000_collision[0];
/* data 302b40 */ sceVu0FVECTOR m006_rist_vtx0[0];
/* data 302b80 */ sceVu0FVECTOR m006_rist_vtx1[0];
/* data 302bc0 */ CLOTH_DAT m006_cloth[0];
/* data 302be8 */ COLLISION_DAT m006_collision[0];
/* data 302c00 */ sceVu0FVECTOR m015_rist_vtx0[0];
/* data 302c40 */ sceVu0FVECTOR m015_rist_vtx1[0];
/* data 302c80 */ CLOTH_DAT m015_cloth[0];
/* data 302cb0 */ COLLISION_DAT m015_collision[0];
/* data 302cd0 */ sceVu0FVECTOR m016_rist_vtx0[0];
/* data 302d10 */ sceVu0FVECTOR m016_rist_vtx1[0];
/* data 302d50 */ CLOTH_DAT m016_cloth[0];
/* data 302d80 */ sceVu0FVECTOR m017_rist_vtx0[0];
/* data 302dc0 */ sceVu0FVECTOR m017_rist_vtx1[0];
/* data 302e00 */ CLOTH_DAT m017_cloth[0];
/* data 302e58 */ CLOTH_DAT m019_cloth[0];
/* data 302e90 */ sceVu0FVECTOR m020_rist_vtx0[0];
/* data 302ed0 */ sceVu0FVECTOR m020_rist_vtx1[0];
/* data 302f10 */ CLOTH_DAT m020_cloth[0];
/* data 302f40 */ sceVu0FVECTOR m023_rist_vtx0[0];
/* data 302f80 */ CLOTH_DAT m023_cloth[0];
/* data 302fc0 */ sceVu0FVECTOR m024_rist_vtx0[0];
/* data 303000 */ sceVu0FVECTOR m024_rist_vtx1[0];
/* data 303040 */ sceVu0FVECTOR m024_rist_vtx2[0];
/* data 303080 */ sceVu0FVECTOR m024_rist_vtx3[0];
/* data 3030c0 */ CLOTH_DAT m024_cloth[0];
/* data 303100 */ sceVu0FVECTOR m026_rist_vtx0[0];
/* data 303140 */ sceVu0FVECTOR m026_rist_vtx1[0];
/* data 303180 */ CLOTH_DAT m026_cloth[0];
/* data 3031b0 */ sceVu0FVECTOR m029_rist_vtx0[0];
/* data 3031f0 */ sceVu0FVECTOR m029_rist_vtx1[0];
/* data 303230 */ CLOTH_DAT m029_cloth[0];
/* data 303260 */ sceVu0FVECTOR m032_rist_vtx0[0];
/* data 3032a0 */ sceVu0FVECTOR m032_rist_vtx1[0];
/* data 3032e0 */ CLOTH_DAT m032_cloth[0];
/* data 303328 */ COLLISION_DAT m032_collision[0];
/* data 303340 */ sceVu0FVECTOR m033_rist_vtx0[0];
/* data 303380 */ sceVu0FVECTOR m033_rist_vtx1[0];
/* data 3033c0 */ CLOTH_DAT m033_cloth[0];
/* data 3033f0 */ sceVu0FVECTOR m034_rist_vtx0[0];
/* data 303430 */ sceVu0FVECTOR m034_rist_vtx1[0];
/* data 303470 */ CLOTH_DAT m034_cloth[0];
/* data 3034b8 */ CLOTH_DAT m035_cloth[0];
/* data 3034f0 */ sceVu0FVECTOR m036_rist_vtx0[0];
/* data 303530 */ CLOTH_DAT m036_cloth[0];
/* data 303570 */ sceVu0FVECTOR m037_rist_vtx0[0];
/* data 3035b0 */ sceVu0FVECTOR m037_rist_vtx1[0];
/* data 3035f0 */ CLOTH_DAT m037_cloth[0];
/* data 303620 */ COLLISION_DAT m037_collision[0];
/* data 303638 */ CLOTH_DAT m038_cloth[0];
/* data 303680 */ sceVu0FVECTOR m040_rist_vtx0[0];
/* data 3036c0 */ sceVu0FVECTOR m040_rist_vtx1[0];
/* data 303700 */ CLOTH_DAT m040_cloth[0];
/* data 303758 */ CLOTH_DAT m051_cloth[0];
/* data 3037b0 */ CLOTH_DAT m058_cloth[0];
/* data 3037e0 */ CLOTH_DAT m059_cloth[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/object.c
// *****************************************************************************

/* sdata 356c40 */ qword *pstart1;
/* sdata 356c44 */ qword *pstart3;
/* sdata 356c4c */ qword *pbase1;
/* sdata 356c50 */ qword *pbase3;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sce_pp3.c
// *****************************************************************************

/* bss 3fb3f0 */ static sceGsDBuff db;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsgd.c
// *****************************************************************************

/* sdata 356c64 */ static int post_process;
/* sbss 3579cc */ static int PresetChk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sglib.c
// *****************************************************************************

/* sdata 356c68 */ SgLIGHT *SgInfiniteLight;
/* sdata 356c6c */ SgLIGHT *SgPointLight;
/* sdata 356c70 */ SgLIGHT *SgSpotLight;
/* sdata 356c74 */ int model_buffer_size;
/* sdata 356c78 */ int model_tag_size;
/* sdata 356c7c */ sceVu0FVECTOR *vertex_buffer;
/* sdata 356c80 */ sceVu0FVECTOR *normal_buffer;
/* sdata 356c84 */ int vnbuf_size;
/* data 303810 */ sceVu0FVECTOR vf12reg[2];
/* sdata 356c88 */ int loadtri2_flg;
/* sdata 356c8c */ int loadbw_flg;
/* sdata 356c90 */ int set_bw_color;
/* data 303830 */ static sceVu0FVECTOR trad;
/* data 303840 */ static sceVu0FVECTOR tgsinf[2];
/* sdata 356c9c */ sceVu0FVECTOR *objwork;
/* sdata 356ca0 */ SgSourceChainTag *cachetag;
/* sdata 356ca4 */ int vu1tag_num;
/* sdata 356ca8 */ int sbuffer_p;
/* sdata 356cac */ int edge_check;
/* data 303860 */ sceVu0FMATRIX SgWSMtx;
/* data 3038a0 */ sceVu0FMATRIX SgCMtx;
/* data 3038e0 */ sceVu0FMATRIX SgCMVtx;
/* data 303920 */ sceVu0FMATRIX DLightMtx;
/* data 303960 */ sceVu0FMATRIX SLightMtx;
/* data 3039a0 */ sceVu0FMATRIX DColorMtx;
/* data 3039e0 */ sceVu0FMATRIX SColorMtx;
/* data 303a20 */ sceVu0FVECTOR TAmbient;
/* sdata 356cb0 */ int ptag;
/* sdata 356cb4 */ qword *SgWorkBase;
/* sdata 356cb8 */ SgVULightCoord *SgLightCoordp;
/* sdata 356cbc */ SgVULightParallel *SgLightParallelp;
/* sdata 356cc0 */ SgVULightSpot *SgLightSpotp;
/* sdata 356cc4 */ SgVULightPoint *SgLightPointp;
/* sdata 356cc8 */ int SgInfiniteNum;
/* sdata 356ccc */ int SgPointNum;
/* sdata 356cd0 */ int SgPointGroupNum;
/* data 303a30 */ SgPOINTGROUP SgPointGroup[1];
/* data 303af0 */ sceVu0FVECTOR ieye;
/* sdata 356cd4 */ int SgSpotNum;
/* sdata 356cd8 */ int SgSpotGroupNum;
/* data 303b00 */ SgSPOTGROUP SgSpotGroup[1];
/* sdata 356cdc */ void *sgd_top_addr;
/* data 303c30 */ CoordCache ccahe;
/* sdata 356ce0 */ sceDmaChan *dvif0;
/* sdata 356ce4 */ sceDmaChan *dvif1;
/* sdata 356ce8 */ sceDmaChan *dgif;
/* sdata 356cec */ sceDmaChan *dfspr;
/* sdata 356cf0 */ SgSourceChainTag *cachetagdbuf[2];
/* sdata 356cf8 */ sceVu0FVECTOR *objworkdbuf[2];
/* sdata 356d00 */ int tagswap;
/* data 303c80 */ sceVu0FVECTOR fog_value;
/* data 303c90 */ sceVu0IVECTOR fog_color;
/* data 303ca0 */ ShadowTexture shadowtex;
/* sdata 356d04 */ int vu_prog_num;
/* sdata 356d08 */ int clip_value_check;
/* data 303cd0 */ sceVu0FVECTOR clip_value;
/* sdata 356d0c */ int wscissor_flg;
/* data 303ce0 */ sceVu0FVECTOR wscissor_upper;
/* data 303cf0 */ sceVu0FVECTOR wscissor_lower;
/* sdata 356d10 */ u_int *pGroupPacket;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsu.c
// *****************************************************************************

/* sdata 356d14 */ static int write_flg;
/* sdata 356d18 */ static int write_counter;
/* sdata 356d1c */ static int dbg_flg;
/* sdata 356d20 */ static int debug_sign;
/* sdata 356d24 */ static int o0;
/* sdata 356d28 */ static int o1;
/* sdata 356d34 */ SgCOORDUNIT *lcp;
/* sdata 356d38 */ PHEAD *lphead;
/* sdata 356d3c */ u_int nextprim;
/* sdata 356d40 */ u_int *vuvnprim;
/* sdata 356d44 */ int blocksm;
/* sdata 356d48 */ int write_coord;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgdma.c
// *****************************************************************************

/* sdata 356d50 */ static u_int send_dma_flg;
/* data 303d10 */ static int DummyFlushData[0];
/* sbss 3579d8 */ static u_int *previous_tri2_prim;
/* sbss 3579dc */ static u_int *push_tri2_prim;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sglight.c
// *****************************************************************************

/* sdata 356d60 */ static int stack_num;
/* sdata 356d64 */ static int dbg_flg;
/* sbss 3579e0 */ static int write_counter;
/* bss 3fb720 */ static SgLIGHT *stack_light[9];
/* bss 3fb750 */ static sceVu0FVECTOR stack_eye[3];
/* bss 3fb780 */ static int stack_light_num[9];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgsup.c
// *****************************************************************************

/* sdata 356db0 */ static int write_flg;
/* sdata 356db4 */ static int write_counter;
/* sdata 356db8 */ static int dbg_flg;
/* sdata 356dc8 */ u_int *save_tri2_pointer;
/* sdata 356dcc */ u_int *save_bw_pointer;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/sgcam.c
// *****************************************************************************

/* data 303d40 */ sceVu0FVECTOR clip_volume;
/* data 303d50 */ static sceVu0FVECTOR clip_volumev;
/* sdata 356ddc */ SgCAMERA *nowcamera;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/shadow.c
// *****************************************************************************

/* data 303d60 */ SgCAMERA scamera;
/* sdata 356de0 */ static int write_flg;
/* sdata 356de4 */ static sceVu0FMATRIX *LWSMtx;
/* sdata 356de8 */ static sceVu0FMATRIX *LCMtx;
/* sdata 356dec */ static sceVu0FMATRIX *LIPMatrix;
/* sdata 356df0 */ static sceVu0IVECTOR *shadow_col;
/* sdata 356df4 */ static u_int *common_vector;
/* sdata 356df8 */ static int shadow_dbg_flg;
/* sdata 356dfc */ static int shadow_apgnum;
/* bss 3fb900 */ static sceVu0FVECTOR ndirection;
/* bss 3fb910 */ static sceVu0FVECTOR spos;
/* bss 3fb920 */ static sceVu0FMATRIX InverseMatrix;
/* bss 3fb960 */ static sceVu0FMATRIX IPMatrix;
/* bss 3fb9a0 */ static sceVu0FMATRIX CullingMatrix;
/* sbss 3579f0 */ static int write_counter;
/* bss 3fb9e0 */ static sceVu0FVECTOR wbbox[8];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph3d/mirror.c
// *****************************************************************************

/* sbss 3579f4 */ static int mxmax;
/* sbss 3579f8 */ static int mxmin;
/* sbss 3579fc */ static int mymax;
/* sbss 357a00 */ static int mymin;
/* sbss 357a04 */ static float mzmax;
/* sbss 357a08 */ static float mzmin;
/* data 304540 */ sceVu0FMATRIX mir_mtx;
/* data 304580 */ sceVu0FVECTOR mir_norm;
/* data 304590 */ sceVu0FVECTOR mir_center;
/* sdata 356e04 */ int mirror_points;
/* data 3045a0 */ sceVu0FVECTOR mirror_lpos[5];
/* data 3045f0 */ sceVu0FVECTOR mirror_cval[5];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/mov/movie.c
// *****************************************************************************

/* sdata 356e08 */ static VoData *voBufData;
/* sdata 356e0c */ static VoTag *voBufTag;
/* sdata 356e10 */ ReadBuf *readBuf;
/* sdata 356e14 */ static u_char *audioBuff;
/* sdata 356e18 */ static char *videoDecStack;
/* sdata 356e1c */ u_int scene_bg_color;
/* sdata 356e20 */ int isWithAudio;
/* sdata 356e24 */ char *commandname;
/* sdata 356e2c */ char *VERSION;
/* data 304640 */ char *mpegName[0];
/* data 3046e0 */ u_char mpeg_vol_rate[0];
/* sdata 356e34 */ int isCountVblank;
/* sdata 356e38 */ int vblankCount;
/* sdata 356e3c */ int isFrameEnd;
/* sdata 356e40 */ int oddeven;
/* sdata 356e44 */ int handler_error;
/* sdata 356e48 */ int isStrFileInit;
/* data 304708 */ VoBuf voBuf;
/* sdata 356e88 */ MOVIE_WRK movie_wrk;
/* sdata 356e90 */ int thread_id;
/* sdata 356e94 */ u_int controller_val;
/* bss 3fba80 */ static u_long128 viBufTag[257];
/* sbss 357a0c */ static u_char *mpegWork;
/* sbss 357a10 */ static u_long128 *viBufData;
/* bss 3fca90 */ static TimeStamp timeStamp[512];
/* sdata 356e98 */ int videoDecTh;
/* sdata 356e9c */ int defaultTh;
/* data 304720 */ StrFile infile;
/* data 304758 */ VideoDec videoDec;
/* data 304810 */ AudioDec audioDec;
/* sdata 356ea0 */ int frd;
/* data 304870 */ sceGsDBuff db;
/* sdata 356ea4 */ int play_mov_no;
/* bss 3ffac0 */ static char _0_buf[2048];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/scene/fod.c
// *****************************************************************************

/* data 304aa0 */ sceVu0FMATRIX fod_cmn_mtx;
/* data 304ae0 */ FOD_EFF_PARAM eff_param;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/scene/scene.c
// *****************************************************************************

/* data 304bc0 */ SCENE_CTRL scene_ctrl[2];
/* data 30d900 */ SCENE_FILE scene_file;
/* sdata 356eb0 */ static int scn_load_status;
/* sdata 356eb4 */ static int scn_load_num;
/* sdata 356eb8 */ int scn_vib_time0;
/* sdata 356ebc */ int scn_vib_time1;
/* data 30d930 */ static sceVu0FVECTOR m000_bbox[0];
/* data 30d9b0 */ static sceVu0FVECTOR m030_bbox[0];
/* data 30da30 */ static sceVu0FVECTOR m060_bbox[0];
/* sdata 356ee8 */ int scn_load_buf_id;
/* sdata 356eec */ int scn_now_play_id;
/* sbss 357a20 */ static int scn_load_id[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/scene/scene_dat.c
// *****************************************************************************

/* data 30dab0 */ SCN_ENE_EFCT scn_ene_efct[0];
/* data 30dfc0 */ SCN_VIB_TYPE scn_vib_type[0];
/* data 30e0c0 */ SCN_VIB_DATA scn_vib_0020[0];
/* data 30e0d8 */ SCN_VIB_DATA scn_vib_0022[0];
/* data 30e108 */ SCN_VIB_DATA scn_vib_0030[0];
/* data 30e128 */ SCN_VIB_DATA scn_vib_0031[0];
/* data 30e138 */ SCN_VIB_DATA scn_vib_1010[0];
/* data 30e178 */ SCN_VIB_DATA scn_vib_1030[0];
/* data 30e1a0 */ SCN_VIB_DATA scn_vib_1031[0];
/* data 30e1b0 */ SCN_VIB_DATA scn_vib_1034[0];
/* data 30e1d0 */ SCN_VIB_DATA scn_vib_1070[0];
/* data 30e1e8 */ SCN_VIB_DATA scn_vib_1080[0];
/* data 30e200 */ SCN_VIB_DATA scn_vib_1090[0];
/* data 30e220 */ SCN_VIB_DATA scn_vib_1100[0];
/* data 30e238 */ SCN_VIB_DATA scn_vib_1101[0];
/* data 30e248 */ SCN_VIB_DATA scn_vib_1102[0];
/* data 30e260 */ SCN_VIB_DATA scn_vib_1120[0];
/* data 30e298 */ SCN_VIB_DATA scn_vib_1150[0];
/* data 30e2b0 */ SCN_VIB_DATA scn_vib_1160[0];
/* data 30e2e0 */ SCN_VIB_DATA scn_vib_1170[0];
/* data 30e2f8 */ SCN_VIB_DATA scn_vib_1180[0];
/* data 30e328 */ SCN_VIB_DATA scn_vib_1220[0];
/* data 30e350 */ SCN_VIB_DATA scn_vib_1230[0];
/* data 30e360 */ SCN_VIB_DATA scn_vib_1240[0];
/* data 30e378 */ SCN_VIB_DATA scn_vib_1250[0];
/* data 30e390 */ SCN_VIB_DATA scn_vib_1260[0];
/* data 30e3c0 */ SCN_VIB_DATA scn_vib_1300[0];
/* data 30e3d0 */ SCN_VIB_DATA scn_vib_1301[0];
/* data 30e418 */ SCN_VIB_DATA scn_vib_1330[0];
/* data 30e430 */ SCN_VIB_DATA scn_vib_1332[0];
/* data 30e440 */ SCN_VIB_DATA scn_vib_1340[0];
/* data 30e458 */ SCN_VIB_DATA scn_vib_1410[0];
/* data 30e488 */ SCN_VIB_DATA scn_vib_2010[0];
/* data 30e498 */ SCN_VIB_DATA scn_vib_2013[0];
/* data 30e4b0 */ SCN_VIB_DATA scn_vib_2020[0];
/* data 30e4d8 */ SCN_VIB_DATA scn_vib_2030[0];
/* data 30e510 */ SCN_VIB_DATA scn_vib_2040[0];
/* data 30e540 */ SCN_VIB_DATA scn_vib_2060[0];
/* data 30e558 */ SCN_VIB_DATA scn_vib_2072[0];
/* data 30e578 */ SCN_VIB_DATA scn_vib_2090[0];
/* data 30e5a8 */ SCN_VIB_DATA scn_vib_2091[0];
/* data 30e5b8 */ SCN_VIB_DATA scn_vib_2092[0];
/* data 30e5d0 */ SCN_VIB_DATA scn_vib_2110[0];
/* data 30e5e0 */ SCN_VIB_DATA scn_vib_2130[0];
/* data 30e5f8 */ SCN_VIB_DATA scn_vib_2131[0];
/* data 30e608 */ SCN_VIB_DATA scn_vib_2132[0];
/* data 30e618 */ SCN_VIB_DATA scn_vib_2140[0];
/* data 30e648 */ SCN_VIB_DATA scn_vib_2141[0];
/* data 30e678 */ SCN_VIB_DATA scn_vib_2142[0];
/* data 30e688 */ SCN_VIB_DATA scn_vib_2150[0];
/* data 30e6c0 */ SCN_VIB_DATA scn_vib_2160[0];
/* data 30e6d8 */ SCN_VIB_DATA scn_vib_3010[0];
/* data 30e6e8 */ SCN_VIB_DATA scn_vib_3030[0];
/* data 30e700 */ SCN_VIB_DATA scn_vib_3040[0];
/* data 30e718 */ SCN_VIB_DATA scn_vib_3060[0];
/* data 30e728 */ SCN_VIB_DATA scn_vib_3070[0];
/* data 30e748 */ SCN_VIB_DATA scn_vib_3080[0];
/* data 30e760 */ SCN_VIB_DATA scn_vib_3090[0];
/* data 30e770 */ SCN_VIB_DATA scn_vib_3100[0];
/* data 30e780 */ SCN_VIB_DATA scn_vib_3110[0];
/* data 30e798 */ SCN_VIB_DATA scn_vib_4011[0];
/* data 30e7b0 */ SCN_VIB_DATA scn_vib_4020[0];
/* data 30e7c0 */ SCN_VIB_DATA scn_vib_4041[0];
/* data 30e7d0 */ SCN_VIB_DATA scn_vib_4042[0];
/* data 30e7e8 */ SCN_VIB_DATA scn_vib_4050[0];
/* data 30e800 */ SCN_VIB_DATA scn_vib_4070[0];
/* data 30e818 */ SCN_VIB_DATA scn_vib_4090[0];
/* data 30e830 */ SCN_VIB_DATA scn_vib_4100[0];
/* data 30e848 */ SCN_VIB_DATA scn_vib_4110[0];
/* data 30e858 */ SCN_VIB_DATA scn_vib_4120[0];
/* data 30e868 */ SCN_VIB_DATA scn_vib_5010[0];
/* data 30e880 */ SCN_VIB_DATA scn_vib_5020[0];
/* data 30e8a0 */ SCN_VIB_DATA scn_vib_dmy[0];
/* data 30e8a8 */ SCN_VIB_DATA *scn_vib_tbl[0];
/* data 30ea38 */ u_char scene_movie_no[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/ingame.c
// *****************************************************************************

/* sdata 356ef0 */ int start_msn;
/* sdata 356ef4 */ int msn0_wait_timer;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/ig_init.c
// *****************************************************************************

/* sdata 356ef8 */ LOAD_START_WRK load_start_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/ig_glob.c
// *****************************************************************************

/* data 30ea70 */ FURN_WRK furn_wrk[60];
/* data 3169f0 */ FURN_EFCT fefct_wrk[60];
/* data 317cb0 */ ITEM_DISP_WRK item_dsp_wrk[2][16];
/* data 3180b0 */ u_char ene_cam_req_checker[50];
/* data 3180e8 */ FURN_ATTR_FLG furn_attr_flg[500];
/* data 319088 */ DOOR_STTS_KEEP door_keep[300];
/* data 319ea0 */ FLY_WRK fly_wrk[10];
/* sdata 356f00 */ u_char ep_sensor[3];
/* sdata 356f04 */ int disp3d_room_req;
/* sdata 356f08 */ int disp3d_furn_req;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/camera/camera.c
// *****************************************************************************

/* data 31a6c0 */ u_int ncam_000[0];
/* data 31a6c8 */ u_int ncam_001[0];
/* data 31a6d0 */ u_int ncam_002[0];
/* data 31a6d8 */ u_int ncam_003[0];
/* data 31a6e0 */ u_int ncam_006[0];
/* data 31a6e8 */ u_int ncam_007[0];
/* data 31a6f0 */ u_int ncam_008[0];
/* data 31a6f8 */ u_int ncam_009[0];
/* data 31a700 */ u_int ncam_010[0];
/* data 31a708 */ u_int ncam_011[0];
/* data 31a718 */ u_int ncam_012[0];
/* data 31a720 */ u_int ncam_013[0];
/* data 31a728 */ u_int ncam_014[0];
/* data 31a730 */ u_int ncam_015[0];
/* data 31a738 */ u_int ncam_016[0];
/* data 31a740 */ u_int ncam_021[0];
/* data 31a748 */ u_int ncam_022[0];
/* data 31a750 */ u_int ncam_023[0];
/* data 31a758 */ u_int ncam_024[0];
/* data 31a760 */ u_int ncam_025[0];
/* data 31a770 */ u_int ncam_026[0];
/* data 31a780 */ u_int *ncam_comple_dat1[0];
/* data 31af50 */ u_int *ncam_comple_dat2[0];
/* data 31b720 */ u_int *ncam_comple_dat3[0];
/* data 31bef0 */ u_int *ncam_comple_dat4[0];
/* data 31c6c0 */ u_int bcam_000[0];
/* data 31c6c8 */ u_int *bcam_comple_dat1[0];
/* data 31ce98 */ u_int *bcam_comple_dat2[0];
/* data 31d668 */ u_int *bcam_comple_dat3[0];
/* data 31de38 */ u_int *bcam_comple_dat4[0];
/* data 31e608 */ u_int dcam_000[0];
/* data 31e610 */ u_int *dcam_comple_dat1[0];
/* data 31eac0 */ u_int *dcam_comple_dat2[0];
/* data 31ef70 */ u_int *dcam_comple_dat3[0];
/* data 31f420 */ u_int *dcam_comple_dat4[0];
/* data 31f8d0 */ u_short dc0000[0];
/* data 31f8d8 */ u_short dc0010[0];
/* data 31f8e8 */ u_short dc0020[0];
/* data 31f8f0 */ u_short dc0030[0];
/* data 31f8f8 */ u_short dc0040[0];
/* data 31f900 */ u_short dc0050[0];
/* data 31f908 */ u_short dc0060[0];
/* data 31f910 */ u_short dc0070[0];
/* data 31f918 */ u_short dc0080[0];
/* data 31f920 */ u_short dc0090[0];
/* data 31f928 */ u_short dc0100[0];
/* data 31f930 */ u_short dc0110[0];
/* data 31f938 */ u_short dc0120[0];
/* data 31f940 */ u_short dc0130[0];
/* data 31f948 */ u_short dc0140[0];
/* data 31f950 */ u_short dc0150[0];
/* data 31f958 */ u_short dc0160[0];
/* data 31f960 */ u_short dc0170[0];
/* data 31f968 */ u_short dc0180[0];
/* data 31f970 */ u_short dc0190[0];
/* data 31f978 */ u_short dc0200[0];
/* data 31f980 */ u_short dc0210[0];
/* data 31f988 */ u_short dc0220[0];
/* data 31f990 */ u_short dc0230[0];
/* data 31f998 */ u_short dc0240[0];
/* data 31f9a0 */ u_short dc0250[0];
/* data 31f9a8 */ u_short dc0260[0];
/* data 31f9b0 */ u_short dc0270[0];
/* data 31f9b8 */ u_short dc0280[0];
/* data 31f9c0 */ u_short dc0290[0];
/* data 31f9c8 */ u_short dc0300[0];
/* data 31f9d0 */ u_short dc0310[0];
/* data 31f9d8 */ u_short dc0320[0];
/* data 31f9e0 */ u_short dc0330[0];
/* data 31f9e8 */ u_short dc0340[0];
/* data 31f9f0 */ u_short dc0350[0];
/* data 31f9f8 */ u_short dc0360[0];
/* data 31fa00 */ u_short dc0370[0];
/* data 31fa08 */ u_short dc0380[0];
/* data 31fa10 */ u_short dc0390[0];
/* data 31fa18 */ u_short dc0400[0];
/* data 31fa20 */ u_short dc0410[0];
/* data 31fa28 */ u_short dc0420[0];
/* data 31fa30 */ u_short dc0430[0];
/* data 31fa38 */ u_short dc0440[0];
/* data 31fa40 */ u_short dc0450[0];
/* data 31fa48 */ u_short dc0460[0];
/* data 31fa50 */ u_short dc0470[0];
/* data 31fa58 */ u_short dc0480[0];
/* data 31fa60 */ u_short dc0490[0];
/* data 31fa68 */ u_short dc0500[0];
/* data 31fa70 */ u_short dc0510[0];
/* data 31fa78 */ u_short *dc_no_tbl0[0];
/* data 31fb48 */ u_short dc1000[0];
/* data 31fb50 */ u_short dc1010[0];
/* data 31fb58 */ u_short dc1020[0];
/* data 31fb60 */ u_short dc1030[0];
/* data 31fb78 */ u_short dc1040[0];
/* data 31fb80 */ u_short dc1050[0];
/* data 31fb88 */ u_short dc1060[0];
/* data 31fb90 */ u_short dc1070[0];
/* data 31fb98 */ u_short dc1080[0];
/* data 31fba0 */ u_short dc1090[0];
/* data 31fba8 */ u_short dc1100[0];
/* data 31fbb0 */ u_short dc1110[0];
/* data 31fbb8 */ u_short dc1120[0];
/* data 31fbc0 */ u_short dc1130[0];
/* data 31fbc8 */ u_short dc1140[0];
/* data 31fbd0 */ u_short dc1150[0];
/* data 31fbd8 */ u_short dc1160[0];
/* data 31fbe0 */ u_short dc1170[0];
/* data 31fbe8 */ u_short dc1180[0];
/* data 31fbf0 */ u_short dc1190[0];
/* data 31fbf8 */ u_short dc1200[0];
/* data 31fc00 */ u_short dc1210[0];
/* data 31fc08 */ u_short dc1220[0];
/* data 31fc10 */ u_short dc1230[0];
/* data 31fc18 */ u_short dc1240[0];
/* data 31fc20 */ u_short dc1250[0];
/* data 31fc28 */ u_short dc1260[0];
/* data 31fc30 */ u_short dc1270[0];
/* data 31fc38 */ u_short dc1280[0];
/* data 31fc40 */ u_short dc1290[0];
/* data 31fc48 */ u_short *dc_no_tbl1[0];
/* data 31fcc0 */ u_short dc2000[0];
/* data 31fcc8 */ u_short dc2010[0];
/* data 31fcd0 */ u_short dc2020[0];
/* data 31fcd8 */ u_short dc2030[0];
/* data 31fce0 */ u_short dc2040[0];
/* data 31fce8 */ u_short dc2050[0];
/* data 31fcf0 */ u_short dc2060[0];
/* data 31fcf8 */ u_short dc2070[0];
/* data 31fd00 */ u_short dc2080[0];
/* data 31fd08 */ u_short dc2090[0];
/* data 31fd10 */ u_short dc2100[0];
/* data 31fd18 */ u_short dc2110[0];
/* data 31fd20 */ u_short dc2120[0];
/* data 31fd28 */ u_short dc2130[0];
/* data 31fd30 */ u_short dc2140[0];
/* data 31fd38 */ u_short dc2150[0];
/* data 31fd40 */ u_short dc2160[0];
/* data 31fd48 */ u_short dc2170[0];
/* data 31fd50 */ u_short dc2180[0];
/* data 31fd58 */ u_short dc2190[0];
/* data 31fd60 */ u_short dc2200[0];
/* data 31fd68 */ u_short dc2210[0];
/* data 31fd70 */ u_short dc2220[0];
/* data 31fd78 */ u_short dc2230[0];
/* data 31fd80 */ u_short dc2240[0];
/* data 31fd88 */ u_short dc2250[0];
/* data 31fd90 */ u_short dc2260[0];
/* data 31fd98 */ u_short dc2270[0];
/* data 31fda0 */ u_short dc2280[0];
/* data 31fda8 */ u_short dc2290[0];
/* data 31fdb0 */ u_short *dc_no_tbl2[0];
/* data 31fe28 */ u_short dc3000[0];
/* data 31fe30 */ u_short dc3010[0];
/* data 31fe38 */ u_short dc3020[0];
/* data 31fe40 */ u_short dc3030[0];
/* data 31fe48 */ u_short dc3040[0];
/* data 31fe50 */ u_short dc3050[0];
/* data 31fe58 */ u_short dc3060[0];
/* data 31fe60 */ u_short dc3070[0];
/* data 31fe68 */ u_short dc3080[0];
/* data 31fe70 */ u_short dc3090[0];
/* data 31fe78 */ u_short dc3100[0];
/* data 31fe80 */ u_short dc3110[0];
/* data 31fe88 */ u_short dc3120[0];
/* data 31fe90 */ u_short dc3130[0];
/* data 31fe98 */ u_short dc3140[0];
/* data 31fea0 */ u_short dc3150[0];
/* data 31fea8 */ u_short dc3160[0];
/* data 31feb0 */ u_short dc3170[0];
/* data 31feb8 */ u_short dc3180[0];
/* data 31fec0 */ u_short dc3190[0];
/* data 31fec8 */ u_short dc3200[0];
/* data 31fed0 */ u_short dc3210[0];
/* data 31fed8 */ u_short dc3220[0];
/* data 31fee0 */ u_short dc3230[0];
/* data 31fee8 */ u_short dc3240[0];
/* data 31fef0 */ u_short dc3250[0];
/* data 31fef8 */ u_short dc3260[0];
/* data 31ff00 */ u_short dc3270[0];
/* data 31ff08 */ u_short dc3280[0];
/* data 31ff10 */ u_short dc3290[0];
/* data 31ff18 */ u_short *dc_no_tbl3[0];
/* sdata 356f10 */ static u_short cam_no_save;
/* sdata 356f12 */ static u_short compling;
/* sdata 356f14 */ static u_char cam_mode_old;
/* sdata 356f15 */ static u_char req_rc_fade;
/* sdata 356f16 */ static u_char drm_cam_req;
/* sdata 356f18 */ static u_short drm_cam_tm;
/* data 31ff90 */ u_short drm_cam_no[12];
/* sdata 356f1a */ u_char DBG_cam_id_move_chk;
/* sdata 356f1b */ u_char cd_edit_end;
/* sdata 356f1c */ int msn_no;
/* sdata 356f20 */ int renewal_data_chk;
/* sdata 356f24 */ int renewal_data_chk_cnt;
/* sdata 356f28 */ u_short cdcopy[2];
/* sdata 356f2c */ u_char cam_info_disp;
/* data 31ffb0 */ sceVu0FVECTOR adj_cam_pos;
/* sdata 356f4a */ u_short fior_tm;
/* data 320020 */ CAM_ID_MOVE cam_id_move;
/* sdata 356f50 */ int cam_kind;
/* sdata 356f54 */ int cam_type;
/* sdata 356f58 */ int cd_step;
/* sdata 356f5c */ int cam_id;
/* sdata 356f60 */ short int plyr_adj[4];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/enemy/ene_ctl.c
// *****************************************************************************

/* data 320060 */ ENE_DAT jene_dat0[0];
/* data 3200a0 */ AENE_INFO_DAT aene_info_dat0[0];
/* data 320100 */ FLY_DATA fly_dat[0];
/* data 320138 */ ENE_DAT jene_dat1[0];
/* data 320478 */ ENE_DAT fene_dat1[0];
/* data 320678 */ AENE_INFO_DAT aene_info_dat1[0];
/* data 320ab8 */ ENE_DAT jene_dat2[0];
/* data 320ff8 */ ENE_DAT fene_dat2[0];
/* data 321238 */ AENE_INFO_DAT aene_info_dat2[0];
/* data 321458 */ ENE_DAT jene_dat3[0];
/* data 321698 */ ENE_DAT fene_dat3[0];
/* data 321b98 */ AENE_INFO_DAT aene_info_dat3[0];
/* data 321bd8 */ ENE_DAT jene_dat4[0];
/* data 321e18 */ ENE_DAT fene_dat4[0];
/* data 322218 */ AENE_INFO_DAT aene_info_dat4[0];
/* data 322238 */ ENE_DAT *jene_dat[0];
/* data 322250 */ ENE_DAT *fene_dat[0];
/* data 322268 */ AENE_INFO_DAT *aene_info_dat[0];
/* sdata 356f68 */ u_char req_dmg_ef[3];
/* sdata 356f6c */ static u_short es_adpcm_tm;
/* sdata 356f94 */ int ene_dead_load;
/* sdata 356f98 */ int ene_dead_mode;
/* data 322280 */ int erootd0[20][3];
/* data 322370 */ int erootd1[20][3];
/* data 322460 */ int erootd2[20][3];
/* sdata 356fa8 */ u_char er_max_tbl[3];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/enemy/move_ctl.c
// *****************************************************************************

/* data 322550 */ void (*CommJmpTbl[0])(/* parameters unknown */);
/* data 322720 */ void (*BCommJmpTbl[0])(/* parameters unknown */);

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/entry.c
// *****************************************************************************

/* data 322778 */ AP_WRK ap_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_bgost.c
// *****************************************************************************

/* data 3227d8 */ BGST_WRK bgst_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_dgost.c
// *****************************************************************************

/* data 3227e8 */ u_char dgst_room[0];
/* data 3227f8 */ MSN_LOAD_DAT dgst_load[3];
/* sdata 356fc0 */ DGST_WRK dgst_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_fgost.c
// *****************************************************************************

/* data 322810 */ int load_mdl_addr[0];
/* data 322820 */ int load_mot_addr[0];
/* data 322830 */ int load_se_addr[0];
/* sdata 356fc8 */ FG_LOAD_WRK fg_load_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_ggost.c
// *****************************************************************************

/* data 322840 */ GGOST_DAT msn03ggst_dat;
/* data 322868 */ GGOST_DAT msn04ggst_dat;
/* data 322890 */ GGOST_DAT *ggst_dat[0];
/* sdata 356fcc */ int gg_load_mode;
/* sdata 356fd0 */ int gg_room_bak;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_pgost.c
// *****************************************************************************

/* data 322898 */ PGOST_DAT pg_dat[0];
/* sdata 356fd8 */ int test_rg_no;
/* sdata 356fe0 */ PGOST_WRK pg_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_rgost.c
// *****************************************************************************

/* data 3228e0 */ RGOST_DSP_WRK rg_dsp_wrk[3];
/* data 322940 */ RGOST_WRK rg_wrk[200];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_sgost.c
// *****************************************************************************

/* data 322c60 */ SGEF_DAT sgef_dat[0];
/* data 322cf0 */ u_short sgef_adpcm_dat[0];
/* sdata 356fe8 */ SGST_WRK sgst_wrk;
/* data 322d00 */ SgCAMERA sg_cmr_bak;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/ap_zgost.c
// *****************************************************************************

/* data 322f30 */ ZHOUR_WRK zh_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/fgst_dat.c
// *****************************************************************************

/* data 322f60 */ u_char fgst_ap_no[5][20];
/* data 322fc8 */ FGST_AP_DAT fg_ap_dat1[0];
/* data 3239b8 */ FGST_AP_DAT fg_ap_dat2[0];
/* data 324618 */ FGST_AP_DAT fg_ap_dat3[0];
/* data 3253f8 */ FGST_AP_DAT fg_ap_dat4[0];
/* data 326208 */ FGST_AP_DAT *fg_ap_dat[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/entry/rgst_dat.c
// *****************************************************************************

/* data 326220 */ RGOST_AP_DAT rg_ap_dat[0];
/* data 326280 */ RGOST_DAT rg_dat[0];
/* data 3262c0 */ sceVu0FVECTOR rg_center00[0];
/* data 3262d0 */ sceVu0FVECTOR rg_center01[0];
/* data 3262f0 */ sceVu0FVECTOR *rgc_dat[0];
/* data 3262f8 */ RG_DISP_DAT rg_start_dat[0];
/* data 326308 */ RG_DISP_DAT rg_inter_dat[0];
/* data 326318 */ RG_DISP_DAT rg_end_dat[0];
/* data 326320 */ RG_ALP_DAT rg_alp_start00[0];
/* data 326328 */ RG_ALP_DAT rg_alp_start01[0];
/* data 326340 */ RG_ALP_DAT *rg_alp_start[0];
/* data 326348 */ RG_ALP_DAT rg_alp_inter00[0];
/* data 326350 */ RG_ALP_DAT rg_alp_inter01[0];
/* data 326360 */ RG_ALP_DAT *rg_alp_inter[0];
/* data 326368 */ RG_ALP_DAT rg_alp_end00[0];
/* data 326370 */ RG_ALP_DAT rg_alp_end01[0];
/* data 326378 */ RG_ALP_DAT *rg_alp_end[0];
/* data 326380 */ RG_ANI_DAT rg_ani_start00[0];
/* data 326388 */ RG_ANI_DAT rg_ani_start01[0];
/* data 326390 */ RG_ANI_DAT *rg_ani_start[0];
/* data 326398 */ RG_ANI_DAT rg_ani_inter00[0];
/* data 3263a0 */ RG_ANI_DAT rg_ani_inter01[0];
/* data 3263a8 */ RG_ANI_DAT *rg_ani_inter[0];
/* data 3263b0 */ RG_ANI_DAT rg_ani_end00[0];
/* data 3263b8 */ RG_ANI_DAT rg_ani_end01[0];
/* data 3263c0 */ RG_ANI_DAT *rg_ani_end[0];
/* data 3263c8 */ RG_RATE_DAT rg_rate_start00[0];
/* data 3263d0 */ RG_RATE_DAT rg_rate_start01[0];
/* data 3263e0 */ RG_RATE_DAT *rg_rate_start[0];
/* data 3263e8 */ RG_RATE_DAT rg_rate_inter00[0];
/* data 3263f0 */ RG_RATE_DAT rg_rate_inter01[0];
/* data 326400 */ RG_RATE_DAT *rg_rate_inter[0];
/* data 326408 */ RG_RATE_DAT rg_rate_end00[0];
/* data 326410 */ RG_RATE_DAT rg_rate_end01[0];
/* data 326420 */ RG_RATE_DAT *rg_rate_end[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_main.c
// *****************************************************************************

/* data 326428 */ u_char event_stts[250];
/* data 326528 */ EVENT_WRK ev_wrk;
/* sdata 357000 */ int black_time;
/* sdata 357004 */ int load_file_id;
/* sdata 357008 */ int ending_mode;
/* sdata 35700c */ int clear_disp;
/* sdata 357010 */ int clear_disp_mode;
/* sdata 357014 */ int first_clear_flg;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_spcl.c
// *****************************************************************************

/* data 326558 */ void (*SpecialEventInitTbl[0])(/* parameters unknown */);
/* data 3266c8 */ void (*SpecialEventMainTbl[0])(/* parameters unknown */);
/* data 326838 */ SPRT_SDAT spev00_sp_bak[0];
/* data 3268d8 */ SPRT_SDAT spev00_sp_bff[0];
/* data 326920 */ SPRT_SDAT spev00_sp_bft[0];
/* data 326968 */ SPRT_SDAT spev00_sp_stn[0];
/* data 3269b0 */ short int spev00_stn_pos[0][2];
/* data 3269c8 */ SPRT_SDAT spev00_sp_lin[0];
/* data 326a58 */ SPRT_SROT spev00_lin_rot[0];
/* data 326aa8 */ SPRT_SSCL spev00_lin_scl[0];
/* data 326af8 */ SPRT_SDAT spev00_sp_num[0];
/* data 326b68 */ SPRT_SDAT spev00_sp_sta[0];
/* data 326bb0 */ short int spev00_sta_pos[0][2];
/* data 326bc8 */ SPRT_SDAT spev00_sp_lia[0];
/* data 326ca0 */ SPRT_SROT spev00_lia_rot[0];
/* data 326cf0 */ SPRT_SSCL spev00_lia_scl[0];
/* data 326d40 */ SPRT_SDAT spev00_sp_hln[0];
/* data 326d88 */ SPRT_SDAT spev00_sp_csr[0];
/* data 326de0 */ SPRT_SSCL spev00_csr_scl[0];
/* data 326df8 */ SPRT_SDAT spev00_sp_cpf[0];
/* data 326e30 */ SPRT_SDAT spev00_sp_cpf2[0];
/* data 326eb0 */ short int spev00_cbt_pos[0][3];
/* data 326ec8 */ SPRT_SDAT spev00_sp_cap[0];
/* data 326ed8 */ SPRT_SDAT spev01_sp_bak[0];
/* data 326f78 */ SPRT_SDAT spev01_sp_gl3[0];
/* data 326f98 */ SPRT_SDAT spev01_sp_gl5[0];
/* data 326fb8 */ SPRT_SDAT spev01_sp_btn[0];
/* data 327048 */ SPRT_SDAT spev01_sp_btp[0];
/* data 3270d8 */ SPRT_SDAT spev01_sp_btf[0];
/* data 327168 */ SPRT_SDAT spev01_sp_num[0];
/* data 3271f8 */ short int spev01_nm3_pos[0][2];
/* data 327208 */ short int spev01_nm4_pos[0][2];
/* data 327218 */ short int spev01_nm5_pos[0][2];
/* data 327230 */ SPRT_SDAT spev01_sp_cpf[0];
/* data 327260 */ short int spev01_cbt_pos[0][2];
/* data 327268 */ SPRT_SDAT spev01_sp_cap[0];
/* data 327278 */ SPRT_SDAT spev02_sp_bak[0];
/* data 327318 */ SPRT_SDAT spev02_sp_of1[0];
/* data 327328 */ SPRT_SDAT spev02_sp_of3[0];
/* data 327358 */ SPRT_SDAT spev03_sp_bak[0];
/* data 3273f8 */ SPRT_SDAT spev03_sp_dol[0];
/* data 327478 */ SPRT_SSCL spev03_dol_scl[0];
/* sdata 357018 */ SPRT_SROT spev03_dol_left;
/* data 3274a8 */ SPRT_SDAT spev03_sp_dla[0];
/* data 327528 */ SPRT_SSCL spev03_dla_scl[0];
/* data 327558 */ SPRT_SDAT spev03_sp_cap[0];
/* data 327568 */ SPRT_SDAT spev04_sp_bk0[0];
/* data 327598 */ SPRT_SDAT spev04_sp_bk1[0];
/* data 3275c8 */ SPRT_SDAT spev04_sp_bk2[0];
/* data 3275f8 */ SPRT_SDAT spev04_sp_bk3[0];
/* data 327628 */ SPRT_SDAT spev04_sp_bd1[0];
/* data 327670 */ SPRT_SDAT spev04_sp_bzf[0];
/* data 3276b8 */ SPRT_SDAT spev04_sp_bld[0];
/* data 327748 */ SPRT_SDAT spev04_sp_cap[0];
/* data 327790 */ short int spev04_cbt_pos[0][2];
/* data 327798 */ SPRT_SDAT spev04_sp_slf[0];
/* data 327898 */ SPRT_SDAT spev04_sp_sel[0];
/* data 327998 */ SPRT_SSCL spev04_bd1_scl[0];
/* data 3279c0 */ SPRT_SSCL spev04_bz2_scl[0];
/* data 327a08 */ SPRT_SSCL spev04_sel_scl[0];
/* data 327a50 */ SPRT_SDAT spev04_sp_bd2[0];
/* data 327a80 */ SPRT_SDAT spev04_sp_cpt[0];
/* data 327a90 */ SPRT_SDAT spev20_sp_bak[0];
/* data 327b30 */ SPRT_SDAT spev20_sp_cdl[0];
/* data 327b88 */ SPRT_SDAT spev20_sp_cla[0];
/* data 327be0 */ SPRT_SDAT spev20_sp_cpf[0];
/* data 327bf0 */ SPRT_SDAT spev20_sp_cfa[0];
/* data 327c48 */ SPRT_SDAT spev20_sp_cdl0[0];
/* data 327ce8 */ SPRT_SDAT spev20_sp_cdl1[0];
/* data 327cf8 */ SPRT_SDAT spev20_sp_cdl2[0];
/* data 327d08 */ SPRT_SDAT spev20_sp_cdl3[0];
/* data 327da8 */ SPRT_SDAT spev20_sp_cdl5[0];
/* data 327db8 */ SPRT_SDAT spev20_sp_cdl4[0];
/* data 327e90 */ SPRT_SDAT pzl_men_bg[0];
/* data 327f30 */ SPRT_SDAT spev21_sp_menz[0];
/* data 327f88 */ SPRT_SDAT spev21_sp_bak[0];
/* data 328028 */ SPRT_SDAT spev21_sp_zft[0];
/* data 328098 */ SPRT_SDAT spev21_sp_zfl[0];
/* data 3280d0 */ SPRT_SDAT spev21_sp_zbt[0];
/* data 328108 */ SPRT_SDAT spev21_sp_cpf[0];
/* data 328118 */ SPRT_SDAT spev21_sp_cap[0];
/* data 328148 */ STR_DAT spev_str;
/* data 328170 */ SQAR_DAT spev_sq0;
/* sdata 357020 */ static int pzl_load_id;
/* sdata 357028 */ static int button_time;
/* sdata 35702c */ static int spev_alp_cnt;
/* data 328188 */ STAR_PZL_DAT star_pzl_dat[0];
/* data 328200 */ DIAL_KEY_DAT dkey_dat[0];
/* data 328260 */ u_char pghost_no_dat[0];
/* data 328268 */ EV_DOLL_DAT evdl_dat[0];
/* data 3282c0 */ EV_BTZ_DAT evbtz_dat[5];
/* data 3282d8 */ EV_BTZ_DAT evbtz_ans[5];
/* data 3282f0 */ EV_BLD_DAT evbld_dat;
/* data 328320 */ SPRT_SSCL spev04_sel_scl2[0];
/* data 328368 */ EV_CDL_DAT evcdl_dat;
/* data 3283d8 */ static short int spev20_cbt_pos[0][2];
/* data 3283e8 */ static short int spev20_sp_flm[0][6];
/* data 328430 */ static short int spev20_sp_sflm[0][6];
/* data 328478 */ static short int id_table[0][2];
/* data 328490 */ static short int dmodel_table[0][2];
/* data 3284a0 */ static short int doorid_table[0][2];
/* sdata 357064 */ short int yoro_door;
/* sdata 357066 */ short int ika_door;
/* sdata 357068 */ short int kana_door;
/* sdata 35706a */ short int tano_door;
/* sdata 35706c */ static u_char open_close;
/* sdata 35706e */ static short int go_flg;
/* sdata 357070 */ static short int go_flg_s;
/* sdata 357072 */ static short int choudo_no;
/* sdata 357074 */ static char alpha_keep;
/* sdata 357075 */ static char first_meet;
/* sdata 357080 */ static u_char omen_no;
/* sdata 357081 */ static u_char stts_no;
/* sdata 357082 */ static u_char omen_msgno;
/* sdata 357083 */ static u_char omen_itemno;
/* sdata 357088 */ ZUSHI_WRK zushi_dat[4];
/* data 3284b8 */ static short int camera_table[0];
/* sdata 3570a0 */ SPECIAL_EVENT_WRK spev_wrk;
/* data 3284e0 */ STAR_PZL_WRK star_pzl_wrk;
/* data 328518 */ DIAL_KEY_WRK dkey_wrk;
/* sbss 357a90 */ static char order_keep[5];
/* sbss 357a95 */ static char order_no;
/* sbss 357a98 */ static u_char butsuzo_alpha[3];
/* sbss 357aa0 */ static u_char zushi_alpha[3];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/ev_load.c
// *****************************************************************************

/* data 328530 */ MSN_LOAD_DAT msn0_title_load_dat[0];
/* data 3285e0 */ MSN_LOAD_DAT scn0022_load[0];
/* data 3285f0 */ u_short scn0022_del_dat[0];
/* data 3285f8 */ SCN_LOAD_DAT scn_load0[0];
/* data 328610 */ MSN_LOAD_DAT msn1_title_load_dat[0];
/* data 328660 */ MSN_LOAD_DAT scn1010_load[0];
/* data 328688 */ u_short scn1010_del_dat[0];
/* data 328690 */ MSN_LOAD_DAT scn1030_load[0];
/* data 3286a0 */ u_short scn1030_del_dat[0];
/* data 3286a8 */ MSN_LOAD_DAT scn1034_load[0];
/* data 3286e8 */ u_short scn1034_del_dat[0];
/* data 3286f0 */ MSN_LOAD_DAT scn1160_load[0];
/* data 3286f8 */ u_short scn1160_del_dat[0];
/* data 328708 */ MSN_LOAD_DAT scn1070_load[0];
/* data 328738 */ u_short scn1070_del_dat[0];
/* data 328740 */ MSN_LOAD_DAT scn1090_load[0];
/* data 328750 */ u_short scn1090_del_dat[0];
/* data 328758 */ MSN_LOAD_DAT scn1100_load[0];
/* data 328760 */ u_short scn1100_del_dat[0];
/* data 328768 */ MSN_LOAD_DAT scn1102_load[0];
/* data 328790 */ u_short scn1102_del_dat[0];
/* data 328798 */ MSN_LOAD_DAT scn1120_load[0];
/* data 3287c8 */ u_short scn1120_del_dat[0];
/* data 3287d0 */ MSN_LOAD_DAT scn1170_load[0];
/* data 3287e0 */ u_short scn1170_del_dat[0];
/* data 3287e8 */ MSN_LOAD_DAT scn1150_load[0];
/* data 328828 */ u_short scn1150_del_dat[0];
/* data 328838 */ MSN_LOAD_DAT scn1180_load[0];
/* data 328880 */ u_short scn1180_del_dat[0];
/* data 328888 */ MSN_LOAD_DAT scn1230_load[0];
/* data 3288d8 */ u_short scn1230_del_dat[0];
/* data 3288f8 */ MSN_LOAD_DAT scn1220_load[0];
/* data 328968 */ u_short scn1220_del_dat[0];
/* data 328970 */ MSN_LOAD_DAT scn1260_load[0];
/* data 3289c0 */ u_short scn1260_del_dat[0];
/* data 3289e0 */ MSN_LOAD_DAT scn1250_load[0];
/* data 3289f0 */ u_short scn1250_del_dat[0];
/* data 328a00 */ MSN_LOAD_DAT scn1280_load[0];
/* data 328a40 */ u_short scn1280_del_dat[0];
/* data 328a58 */ MSN_LOAD_DAT scn1301_load[0];
/* data 328a70 */ u_short scn1301_del_dat[0];
/* data 328a88 */ MSN_LOAD_DAT scn1320_load[0];
/* data 328a98 */ u_short scn1320_del_dat[0];
/* data 328aa8 */ MSN_LOAD_DAT scn1330_load[0];
/* data 328ad0 */ u_short scn1330_del_dat[0];
/* data 328ad8 */ MSN_LOAD_DAT scn1410_load[0];
/* data 328ae0 */ u_short scn1410_del_dat[0];
/* data 328ae8 */ SCN_LOAD_DAT scn_load1[0];
/* data 328bf0 */ MSN_LOAD_DAT msn2_title_load_dat[0];
/* data 328c40 */ MSN_LOAD_DAT scn2013_load[0];
/* data 328c70 */ u_short scn2013_del_dat[0];
/* data 328c78 */ MSN_LOAD_DAT scn2160_load[0];
/* data 328ce0 */ u_short scn2160_del_dat[0];
/* data 328ce8 */ MSN_LOAD_DAT scn2020_load[0];
/* data 328d08 */ u_short scn2020_del_dat[0];
/* data 328d10 */ MSN_LOAD_DAT scn2030_load[0];
/* data 328d40 */ u_short scn2030_del_dat[0];
/* data 328d50 */ MSN_LOAD_DAT scn2100_load[0];
/* data 328dc0 */ u_short scn2100_del_dat[0];
/* data 328de0 */ MSN_LOAD_DAT scn2040_load[0];
/* data 328e28 */ u_short scn2040_del_dat[0];
/* data 328e48 */ MSN_LOAD_DAT scn2170_load[0];
/* data 328e70 */ u_short scn2170_del_dat[0];
/* data 328e80 */ MSN_LOAD_DAT scn2060_load[0];
/* data 328e88 */ u_short scn2060_del_dat[0];
/* data 328e90 */ MSN_LOAD_DAT scn2062_load[0];
/* data 328e98 */ u_short scn2062_del_dat[0];
/* data 328ea0 */ MSN_LOAD_DAT scn2070_load[0];
/* data 328ea8 */ u_short scn2070_del_dat[0];
/* data 328eb0 */ MSN_LOAD_DAT scn2072_load[0];
/* data 328ed8 */ u_short scn2072_del_dat[0];
/* data 328ee0 */ MSN_LOAD_DAT scn2090_load[0];
/* data 328f00 */ u_short scn2090_del_dat[0];
/* data 328f10 */ MSN_LOAD_DAT scn2092_load[0];
/* data 328f40 */ u_short scn2092_del_dat[0];
/* data 328f48 */ MSN_LOAD_DAT scn2130_load[0];
/* data 328f50 */ u_short scn2130_del_dat[0];
/* data 328f68 */ MSN_LOAD_DAT scn2132_load[0];
/* data 328f88 */ u_short scn2132_del_dat[0];
/* data 328f90 */ MSN_LOAD_DAT scn2140_load[0];
/* data 328fb0 */ u_short scn2140_del_dat[0];
/* data 328fb8 */ MSN_LOAD_DAT scn2141_load[0];
/* data 328fc0 */ u_short scn2141_del_dat[0];
/* data 328fc8 */ MSN_LOAD_DAT scn2150_load[0];
/* data 328fd0 */ u_short scn2150_del_dat[0];
/* data 328fd8 */ SCN_LOAD_DAT scn_load2[0];
/* data 3290c0 */ MSN_LOAD_DAT msn3_title_load_dat[0];
/* data 329128 */ MSN_LOAD_DAT scn3020_load[0];
/* data 329140 */ u_short scn3020_del_dat[0];
/* data 329148 */ MSN_LOAD_DAT scn3030_load[0];
/* data 329168 */ u_short scn3030_del_dat[0];
/* data 329170 */ MSN_LOAD_DAT scn3100_load[0];
/* data 3291a8 */ u_short scn3100_del_dat[0];
/* data 3291b8 */ MSN_LOAD_DAT scn3050_load[0];
/* data 3291c0 */ u_short scn3050_del_dat[0];
/* data 3291c8 */ MSN_LOAD_DAT scn3110_load[0];
/* data 3291d0 */ u_short scn3110_del_dat[0];
/* data 3291d8 */ MSN_LOAD_DAT scn3060_load[0];
/* data 3291f0 */ u_short scn3060_del_dat[0];
/* data 3291f8 */ MSN_LOAD_DAT scn3070_load[0];
/* data 329200 */ u_short scn3070_del_dat[0];
/* data 329208 */ MSN_LOAD_DAT scn4900_load[0];
/* data 329218 */ u_short scn4900_del_dat[0];
/* data 329220 */ MSN_LOAD_DAT scn4901_load[0];
/* data 329230 */ u_short scn4901_del_dat[0];
/* data 329238 */ SCN_LOAD_DAT scn_load3[0];
/* data 3292b0 */ MSN_LOAD_DAT msn4_title_load_dat[0];
/* data 329350 */ MSN_LOAD_DAT scn4011_load[0];
/* data 329358 */ u_short scn4011_del_dat[0];
/* data 329360 */ MSN_LOAD_DAT scn4020_load[0];
/* data 329368 */ u_short scn4020_del_dat[0];
/* data 329370 */ MSN_LOAD_DAT scn4040_load[0];
/* data 329378 */ u_short scn4040_del_dat[0];
/* data 329380 */ MSN_LOAD_DAT scn4042_load[0];
/* data 329388 */ u_short scn4042_del_dat[0];
/* data 329390 */ MSN_LOAD_DAT scn4030_load[0];
/* data 329398 */ u_short scn4030_del_dat[0];
/* data 3293a0 */ MSN_LOAD_DAT scn4050_load[0];
/* data 3293b8 */ u_short scn4050_del_dat[0];
/* data 3293c0 */ MSN_LOAD_DAT scn4070_load[0];
/* data 3293e8 */ u_short scn4070_del_dat[0];
/* data 3293f8 */ SCN_LOAD_DAT scn_load4[0];
/* data 329470 */ MSN_LOAD_DAT *msn_title_load_dat[0];
/* data 329488 */ u_char msn_start_floor[0];
/* data 329490 */ u_char msn_start_room[0];
/* data 329498 */ SCN_LOAD_DAT *scn_load[0];
/* data 3294b0 */ SPRT_SDAT msn_title_sp_bak[0];
/* data 329550 */ SPRT_SDAT msn_title00_sp_flr[0];
/* data 329560 */ SPRT_SDAT msn_title00_sp_ttl[0];
/* data 329580 */ SPRT_SDAT msn_title01_sp_flr[0];
/* data 3295a0 */ SPRT_SDAT msn_title01_sp_ttl[0];
/* data 3295b0 */ SPRT_SDAT msn_title02_sp_flr[0];
/* data 3295c0 */ SPRT_SDAT msn_title02_sp_ttl[0];
/* data 3295d0 */ SPRT_SDAT msn_title03_sp_flr[0];
/* data 3295e0 */ SPRT_SDAT msn_title03_sp_ttl[0];
/* data 3295f0 */ SPRT_SDAT msn_title04_sp_flr[0];
/* data 329600 */ SPRT_SDAT msn_title04_sp_ttl[0];
/* data 329610 */ u_char msn_title_sp_flr_no[0];
/* data 329618 */ u_char msn_title_flr_sp_num[0];
/* data 329620 */ u_char msn_title_sp_ttl_no[0];
/* data 329628 */ u_char msn_title_ttl_sp_num[0];
/* data 329630 */ SPRT_SDAT *msn_title_sp_flr[0];
/* data 329648 */ SPRT_SDAT *msn_title_sp_ttl[0];
/* data 329660 */ SPRT_SDAT stg_title_sp_bak[0];
/* data 329700 */ SPRT_SDAT stg_title_sp_flr[0];
/* data 329710 */ SPRT_SDAT stg_title_sp_ttl[0];
/* data 329730 */ MSN_LOAD_DAT load_dat_wrk[40];
/* sdata 3570a8 */ MSN_TITLE_WRK mttl_wrk;
/* sdata 3570b0 */ EVENT_LOAD_WRK ev_load_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/mv_cmnd.c
// *****************************************************************************

/* sdata 3570b8 */ MOVIE_CMD_WRK mvcmd_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/info/inf_disp.c
// *****************************************************************************

/* data 329870 */ SPRT_DAT spr_dat[0];
/* data 3318b0 */ short unsigned int flip_table[0];
/* sdata 3570d0 */ float NC_ADJ;
/* data 3320b8 */ SPRT_DAT raze_sprt;
/* data 3320d8 */ INFO_WRK info_wrk;
/* bss 402130 */ static INF_DSP inf_dsp;
/* bss 402160 */ static NEW_INF new_inf;
/* bss 4022b8 */ static LIFE_BALL life_ball[5];
/* bss 4022d0 */ static PRTCL_BALL prtcl_ball[5][24];
/* sbss 357ab0 */ static FLSH_CORE flsh_lgt;
/* bss 4024b0 */ static FLSH_CORE flsh_max[5];
/* sbss 357ab8 */ static FLSH_CORE flsh_chrg[2];
/* sbss 357ac0 */ static FLSH_CORE feramp;
/* bss 4024c0 */ static ZAN zanzo[12];
/* bss 4025e0 */ static ZAN dmg_scr;
/* bss 4025f8 */ static JET_SET jet1[25];
/* bss 402678 */ static JET_SET jet2[25];
/* bss 4026f8 */ static u_char znz[12][6];
/* sdata 3570d8 */ char point_get_end;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/map_ctrl.c
// *****************************************************************************

/* rdata 34f558 */ u_char floor_exist[5][4];
/* data 3320e8 */ u_char room_pass[42];
/* sdata 3570e8 */ u_char gtmp_cam_type;
/* sdata 3570e9 */ u_char gtmp_room;
/* sdata 3570ea */ u_short gtmp_cam_no;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/map_area.c
// *****************************************************************************

/* data 332120 */ u_char area_dat[11][6];
/* sdata 3570ec */ u_char one_room_load_ok;
/* data 332170 */ AREA_WRK area_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/door_ctl.c
// *****************************************************************************

/* data 3326b0 */ AREA_READ_WRK area_read_wrk;
/* data 3326d0 */ DOOR_OPEN_CTRL door_open_ctrl;
/* data 332710 */ DOOR_WRK door_wrk[20];
/* data 332c10 */ AUTO_CLOSE_DOOR_WRK ac_door_wrk[10];
/* data 332e90 */ NON_CLOSE_DOOR_WRK nc_door_wrk[50];
/* data 333b10 */ DOJ_SQUARE_MTN doj_square_mtn;
/* data 333b30 */ sceVu0FVECTOR tmp_area_end_door_pos;
/* sbss 357ac9 */ static char load_conte_flg;
/* bss 402740 */ static u_short lock_did[20];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/doortype.c
// *****************************************************************************

/* data 333b40 */ DOOR_TYPE_DAT door_type_dat[0];
/* data 3341a0 */ static float dopen_tbl_dplrn[0];
/* data 334278 */ static float dopen_tbl_dplrc[0];
/* data 334348 */ static float dopen_tbl_dplrl[0];
/* data 334418 */ static float dopen_tbl_dpsrc[0];
/* data 3344f0 */ static float dopen_tbl_dplln[0];
/* data 3345c8 */ static float dopen_tbl_dpllc[0];
/* data 3346a8 */ static float dopen_tbl_dplll[0];
/* data 334780 */ static float dopen_tbl_dpslc[0];
/* data 334878 */ static float dopen_tbl_dpln_dbl0[0];
/* data 334938 */ static float dopen_tbl_dpln_dbl1[0];
/* data 3349f8 */ static float dopen_tbl_dplc_dbl0[0];
/* data 334ad0 */ static float dopen_tbl_dplc_dbl1[0];
/* data 334ba8 */ static float dopen_tbl_dpsc_dbl0[0];
/* data 334c68 */ static float dopen_tbl_dpsc_dbl1[0];
/* data 334d28 */ static float dopen_tbl_frc[0];
/* data 334de0 */ static float dopen_tbl_frr[0];
/* data 334e90 */ static float dopen_tbl_flc[0];
/* data 334f28 */ static float dopen_tbl_flr[0];
/* data 334fd0 */ static float dopen_tbl_f_dbl0[0];
/* data 335068 */ static float dopen_tbl_f_dbl1[0];
/* data 335100 */ static float dclose68_tbl[0];
/* data 335330 */ static float dclose69_tbl[0];
/* data 335560 */ static float dclose70_tbl[0];
/* data 335790 */ static float dclose71_tbl[0];
/* data 3359c0 */ static float dclose72r_tbl[0];
/* data 335ba0 */ static float dclose72l_tbl[0];
/* data 335d80 */ static float dclose73r_tbl[0];
/* data 335fb0 */ static float dclose73l_tbl[0];
/* data 3361e0 */ static float dclose74r_tbl[0];
/* data 336410 */ static float dclose74l_tbl[0];
/* data 336640 */ static float dopen_tbl_drot[0];
/* data 336750 */ static float dopen_tbl_dpsk[0];
/* data 3368d8 */ static float dopen_tbl_dplk[0];
/* data 3369f0 */ float *dtbl_tbl[0];
/* data 336a78 */ DOOR_MTN_DAT door_mtn_dat[0];
/* data 336ba8 */ DOOR_MOVE_DAT door_move_dat[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/find_ctl.c
// *****************************************************************************

/* data 336c48 */ u_char find_stts[250];
/* data 336d48 */ FIND_WRK find_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/find_dat.c
// *****************************************************************************

/* data 336d68 */ FIND_DAT find_dat[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_ctl.c
// *****************************************************************************

/* sdata 3570f4 */ int furn_disp_flg;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_dat.c
// *****************************************************************************

/* data 337730 */ FURN_DAT furn_dat[0];
/* data 3393f8 */ u_int furn_attr_dat[0][5];
/* data 3396a0 */ sceVu0FVECTOR furn_photo_center00[0];
/* data 3396b0 */ sceVu0FVECTOR furn_photo_center01[0];
/* data 3396c0 */ sceVu0FVECTOR furn_photo_center02[0];
/* data 3396d0 */ sceVu0FVECTOR furn_photo_center03[0];
/* data 3396e0 */ sceVu0FVECTOR furn_photo_center04[0];
/* data 3396f0 */ sceVu0FVECTOR furn_photo_center05[0];
/* data 339700 */ sceVu0FVECTOR furn_photo_center06[0];
/* data 339710 */ sceVu0FVECTOR furn_photo_center07[0];
/* data 339720 */ sceVu0FVECTOR furn_photo_center08[0];
/* data 339730 */ sceVu0FVECTOR furn_photo_center09[0];
/* data 339740 */ sceVu0FVECTOR furn_photo_center10[0];
/* data 339750 */ sceVu0FVECTOR furn_photo_center11[0];
/* data 339760 */ sceVu0FVECTOR furn_photo_center12[0];
/* data 339770 */ sceVu0FVECTOR furn_photo_center13[0];
/* data 339780 */ sceVu0FVECTOR furn_photo_center14[0];
/* data 339790 */ sceVu0FVECTOR furn_photo_center15[0];
/* data 3397a0 */ sceVu0FVECTOR furn_photo_center16[0];
/* data 3397b0 */ sceVu0FVECTOR furn_photo_center17[0];
/* data 3397c0 */ sceVu0FVECTOR furn_photo_center18[0];
/* data 3397d0 */ sceVu0FVECTOR furn_photo_center19[0];
/* data 3397e0 */ sceVu0FVECTOR furn_photo_center20[0];
/* data 339830 */ sceVu0FVECTOR furn_photo_center21[0];
/* data 339840 */ sceVu0FVECTOR furn_photo_center22[0];
/* data 339850 */ sceVu0FVECTOR furn_photo_center23[0];
/* data 339860 */ sceVu0FVECTOR furn_photo_center24[0];
/* data 339870 */ sceVu0FVECTOR furn_photo_center25[0];
/* data 339880 */ sceVu0FVECTOR furn_photo_center26[0];
/* data 339890 */ sceVu0FVECTOR furn_photo_center27[0];
/* data 3398a0 */ sceVu0FVECTOR furn_photo_center28[0];
/* data 3398b0 */ sceVu0FVECTOR furn_photo_center29[0];
/* data 3398c0 */ sceVu0FVECTOR furn_photo_center30[0];
/* data 3398d0 */ sceVu0FVECTOR furn_photo_center31[0];
/* data 3398e0 */ sceVu0FVECTOR furn_photo_center32[0];
/* data 3398f0 */ sceVu0FVECTOR furn_photo_center33[0];
/* data 339900 */ sceVu0FVECTOR furn_photo_center34[0];
/* data 339910 */ sceVu0FVECTOR furn_photo_center35[0];
/* data 339920 */ sceVu0FVECTOR furn_photo_center36[0];
/* data 339930 */ sceVu0FVECTOR furn_photo_center37[0];
/* data 339940 */ sceVu0FVECTOR furn_photo_center38[0];
/* data 339950 */ sceVu0FVECTOR furn_photo_center39[0];
/* data 339960 */ sceVu0FVECTOR furn_photo_center40[0];
/* data 339970 */ sceVu0FVECTOR furn_photo_center41[0];
/* data 339980 */ sceVu0FVECTOR furn_photo_center42[0];
/* data 339990 */ sceVu0FVECTOR furn_photo_center43[0];
/* data 3399a0 */ sceVu0FVECTOR furn_photo_center44[0];
/* data 3399b0 */ sceVu0FVECTOR furn_photo_center45[0];
/* data 3399c0 */ sceVu0FVECTOR furn_photo_center46[0];
/* data 3399d0 */ sceVu0FVECTOR furn_photo_center47[0];
/* data 3399e0 */ sceVu0FVECTOR furn_photo_center48[0];
/* data 3399f0 */ sceVu0FVECTOR furn_photo_center49[0];
/* data 339a00 */ sceVu0FVECTOR furn_photo_center50[0];
/* data 339a10 */ sceVu0FVECTOR furn_photo_center51[0];
/* data 339a30 */ sceVu0FVECTOR furn_photo_center52[0];
/* data 339a40 */ sceVu0FVECTOR furn_photo_center53[0];
/* data 339a50 */ sceVu0FVECTOR furn_photo_center54[0];
/* data 339a60 */ sceVu0FVECTOR furn_photo_center55[0];
/* data 339a70 */ sceVu0FVECTOR furn_photo_center56[0];
/* data 339a80 */ sceVu0FVECTOR furn_photo_center57[0];
/* data 339a90 */ sceVu0FVECTOR furn_photo_center58[0];
/* data 339aa0 */ sceVu0FVECTOR furn_photo_center59[0];
/* data 339ab0 */ sceVu0FVECTOR furn_photo_center60[0];
/* data 339ac0 */ sceVu0FVECTOR furn_photo_center61[0];
/* data 339ad0 */ sceVu0FVECTOR furn_photo_center62[0];
/* data 339ae0 */ sceVu0FVECTOR furn_photo_center63[0];
/* data 339af0 */ sceVu0FVECTOR furn_photo_center64[0];
/* data 339b00 */ sceVu0FVECTOR furn_photo_center65[0];
/* data 339b10 */ sceVu0FVECTOR furn_photo_center66[0];
/* data 339b20 */ sceVu0FVECTOR furn_photo_center67[0];
/* data 339b30 */ sceVu0FVECTOR furn_photo_center68[0];
/* data 339b40 */ sceVu0FVECTOR furn_photo_center69[0];
/* data 339b50 */ sceVu0FVECTOR furn_photo_center70[0];
/* data 339b60 */ sceVu0FVECTOR furn_photo_center71[0];
/* data 339b70 */ sceVu0FVECTOR furn_photo_center72[0];
/* data 339b80 */ sceVu0FVECTOR furn_photo_center73[0];
/* data 339b90 */ sceVu0FVECTOR furn_photo_center74[0];
/* data 339ba0 */ sceVu0FVECTOR furn_photo_center75[0];
/* data 339bb0 */ sceVu0FVECTOR furn_photo_center76[0];
/* data 339bc0 */ sceVu0FVECTOR furn_photo_center77[0];
/* data 339bd0 */ sceVu0FVECTOR furn_photo_center78[0];
/* data 339be0 */ sceVu0FVECTOR furn_photo_center79[0];
/* data 339bf0 */ sceVu0FVECTOR furn_photo_center80[0];
/* data 339c00 */ sceVu0FVECTOR furn_photo_center81[0];
/* data 339c10 */ sceVu0FVECTOR furn_photo_center82[0];
/* data 339c20 */ sceVu0FVECTOR furn_photo_center83[0];
/* data 339c30 */ sceVu0FVECTOR furn_photo_center84[0];
/* data 339c40 */ sceVu0FVECTOR furn_photo_center85[0];
/* data 339c50 */ sceVu0FVECTOR furn_photo_center86[0];
/* data 339c60 */ sceVu0FVECTOR furn_photo_center87[0];
/* data 339c70 */ sceVu0FVECTOR furn_photo_center88[0];
/* data 339c80 */ sceVu0FVECTOR furn_photo_center89[0];
/* data 339c90 */ sceVu0FVECTOR furn_photo_center90[0];
/* data 339ca0 */ sceVu0FVECTOR furn_photo_center91[0];
/* data 339cb0 */ sceVu0FVECTOR furn_photo_center92[0];
/* data 339cc0 */ sceVu0FVECTOR furn_photo_center93[0];
/* data 339cd0 */ sceVu0FVECTOR furn_photo_center94[0];
/* data 339ce0 */ sceVu0FVECTOR furn_photo_center95[0];
/* data 339cf0 */ sceVu0FVECTOR furn_photo_center96[0];
/* data 339d00 */ sceVu0FVECTOR furn_photo_center97[0];
/* data 339d10 */ sceVu0FVECTOR furn_photo_center98[0];
/* data 339d20 */ sceVu0FVECTOR furn_photo_center99[0];
/* data 339d30 */ sceVu0FVECTOR furn_photo_center100[0];
/* data 339d40 */ sceVu0FVECTOR furn_photo_center101[0];
/* data 339d50 */ sceVu0FVECTOR furn_photo_center102[0];
/* data 339d60 */ sceVu0FVECTOR *fpc_dat[0];
/* data 339f00 */ u_char fpc_rot_dat[0][8];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_eff.c
// *****************************************************************************

/* data 339f10 */ FURN_EFCT_FIRE fefct_fire[0];
/* data 33a080 */ FURN_EFCT_SUNSHINE fefct_sunshine[0];
/* data 33a120 */ FURN_EFCT_DEFORM fefct_deform[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/item_ctl.c
// *****************************************************************************

/* data 33a130 */ MAP_ITEM_DAT map_item_dat[162];
/* data 33aa10 */ u_char map_item_ap_type[0][2];
/* data 33aa18 */ MAP_FILE_DAT map_file_dat0[50];
/* data 33acd8 */ MAP_FILE_DAT map_file_dat1[50];
/* data 33af98 */ MAP_FILE_DAT map_file_dat2[50];
/* data 33b258 */ MAP_FILE_DAT map_file_dat3[50];
/* data 33b518 */ MAP_FILE_DAT *map_file_dat[4];
/* data 33b528 */ u_short item_ap[300][2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/furn_spe.c
// *****************************************************************************

/* data 33b9e0 */ sceVu0FVECTOR special_furn_pos[0];
/* sdata 357124 */ static float tremble_width;
/* sdata 357128 */ static float tremble_time;
/* sdata 35712c */ static int tremble_count;
/* data 33ba60 */ FURN_DAT_SAVE f_dat_save[430];
/* data 33bdc0 */ FURN_ACT_WRK f_act_wrk[20];
/* data 33cb80 */ TREMBLE_H_WRK tremble_h_wrk[5];
/* sdata 357130 */ u_char fspe_miku_act;
/* sdata 357131 */ u_char temp_miku_act;
/* sdata 357132 */ u_char thunder_time;
/* sdata 357133 */ u_char lightning_time;
/* sdata 357134 */ u_char thunder_state;
/* sdata 357135 */ u_char lightning_state;
/* sdata 357138 */ sceVu0FVECTOR *thunder_pos_p;
/* data 33ce00 */ sceVu0FVECTOR thunder_direction;
/* sdata 35713c */ u_short thunder_sound_no;
/* sdata 35713e */ u_char thunder_room;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/fsla_main.c
// *****************************************************************************

/* data 33ce10 */ u_char able_to_light_tbl[0];
/* data 33ce60 */ POINT_LIGHT_WRK point_light_wrk[8];
/* data 33cee0 */ FSPE_LIGHT_WRK fspe_light_wrk[7];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/fsla_dat.c
// *****************************************************************************

/* data 33d0a0 */ FSPE_LIGHT_ANM fspe_lightanm_fadein1[0];
/* data 33d0c8 */ FSPE_LIGHT_ANM fspe_lightanm_fadein2[0];
/* data 33d0f0 */ FSPE_LIGHT_ANM fspe_lightanm_normal1[0];
/* data 33d130 */ FSPE_LIGHT_ANM fspe_lightanm_normal2[0];
/* data 33d158 */ FSPE_LIGHT_ANM fspe_lightanm_normal3[0];
/* data 33d198 */ FSPE_LIGHT_ANM fspe_lightanm_normal4[0];
/* data 33d1c0 */ FSPE_LIGHT_ANM fspe_lightanm_strong1[0];
/* data 33d1e8 */ FSPE_LIGHT_ANM fspe_lightanm_strong2[0];
/* data 33d210 */ FSPE_LIGHT_ANM fspe_lightanm_fadeout1[0];
/* data 33d238 */ FSPE_LIGHT_ANM fspe_lightanm_fadeout2[0];
/* data 33d268 */ FSPE_LIGHT_ANM *fspe_la_normal1[0];
/* data 33d278 */ FSPE_LIGHT_ANM *fspe_la_strong[0];
/* data 33d288 */ FSPE_LIGHT_ANM *fspe_la_normal2[0];
/* data 33d298 */ FSPE_LIGHT_ANM *fspe_la_inp1[0];
/* data 33d2a0 */ FSPE_LIGHT_ANM *fspe_la_inp2[0];
/* data 33d2a8 */ FSPE_LIGHT_ANM *fspe_la_outp1[0];
/* data 33d2b0 */ FSPE_LIGHT_ANM *fspe_la_outp2[0];
/* data 33d2b8 */ FSPE_LIGHT_ANM **fspe_la_array[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/furn_spe/adj_valg.c
// *****************************************************************************

/* bss 402810 */ static ADJ_VALG_WRK adj_valg_wrk[15];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/item.c
// *****************************************************************************

/* data 33d2d8 */ ITEM_USE_DAT item_use_dat[70];
/* data 33d3f0 */ short int item_sort[70];
/* data 33d480 */ short int file2item[0];
/* data 33d488 */ char file2phot[0];
/* data 33d490 */ char pht_waku_put[0];
/* data 33d498 */ static u_short char_tex[7];
/* data 33d4a8 */ static u_short top_char[7];
/* data 33d4b8 */ static u_short end_char[7];
/* data 33d4c8 */ FOR_YW2D yw2d;
/* data 33d540 */ INGAME_MENU_WRK ig_menu_wrk;
/* data 33d550 */ MENU_ITEM_WRK menu_item_wrk[200];
/* sbss 357ad0 */ static FLSH_CORE flsh[2];
/* bss 402ae0 */ static ITM_EFF_WRK iew;
/* sbss 357ad8 */ static MSG_DSP msg;
/* sbss 357ae0 */ static YWDBG ywdbg;
/* sbss 357ae8 */ static FLSH_CORE dbg_flsh;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/gameover.c
// *****************************************************************************

/* bss 402b10 */ static GO_WRK go_wrk;
/* sbss 357af0 */ static FLSH_CORE flsh;
/* sbss 357af4 */ static int gov_load_id;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/pause.c
// *****************************************************************************

/* sdata 357140 */ PAD_CTRL pad_ctrl;
/* sdata 357148 */ PAUSE_WRK pause_wrk;
/* sbss 357af8 */ static PAUSE_DSP ps_dsp;
/* sbss 357b00 */ static FLSH_CORE flsh;
/* sdata 357150 */ char in_pause;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_album.c
// *****************************************************************************

/* bss 402b20 */ static ALBM_WRK albm_wrk;
/* bss 402b30 */ static FLSH_CORE flsh[6];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_camra.c
// *****************************************************************************

/* data 33d870 */ int camera_power_up_point[3][3];
/* data 33d898 */ int camera_sub_abi_point[5];
/* data 33d8b0 */ int camera_spe_abi_point[5];
/* sdata 357168 */ CAMERA_MENU_WRK cmr_menu_wrk;
/* bss 402b40 */ static CAM_DSP cam_dsp;
/* sdata 357170 */ FLSH_CORE flsh;
/* sdata 357178 */ FLSH_CORE flsh2;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_menu.c
// *****************************************************************************

/* data 33d8c8 */ STR_DAT ig_menu_str;
/* sdata 357190 */ int get_time_once;
/* data 33d8f0 */ SPRT_DAT sozai;
/* data 33d910 */ SPRT_DAT mask_l;
/* data 33d930 */ SPRT_DAT mask_s;
/* sbss 357b10 */ static ANA_PAD ana_pad;
/* sbss 357b18 */ static FLSH_CORE flsh;
/* sbss 357b1c */ static int menu_load_id;
/* sbss 357b20 */ static int fndr_load_id;
/* sbss 357b24 */ static int mode_load_id;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_spd_menu.c
// *****************************************************************************

/* sdata 357198 */ SPD_MNU spd_mnu;
/* sbss 357b28 */ static int smap_load_id;
/* sbss 357b2c */ static int sopt_load_id;
/* sbss 357b30 */ static int fnd_load_id;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/item_get.c
// *****************************************************************************

/* data 33d950 */ TAPE_DAT tape_dat[0];
/* sdata 35719c */ int play_tape_timer;
/* sbss 357b38 */ static FILE_GET_CTRL get_ctrl;
/* sbss 357b40 */ static FILE_GET_DSP file_dsp;
/* bss 402b60 */ static FILE_GET_FADE fade_ctr;
/* bss 402b70 */ static FILE2D file2d;
/* sbss 357b48 */ static FLSH_CORE flsh;
/* sbss 357b4c */ static int igt_load_id;
/* sdata 3571a0 */ char tape_play;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_file.c
// *****************************************************************************

/* data 33d998 */ u_char file_kind[0];
/* data 33d9a0 */ static RELATION_NAME_PLATE name_plate[0];
/* data 33dbe0 */ SPRT_DAT spr_dat_tmp[0];
/* data 33dc80 */ static char exp_table[0][8][2];
/* data 33de80 */ static char hum_table[0][8][2];
/* data 33e050 */ RELATION_COM rel_com[0];
/* data 33e468 */ static char name_rbl[0][2];
/* data 33e4a8 */ RELATION_PRT rel_prt[0];
/* data 33e650 */ RELATION_DAT rel_dat[0];
/* data 33ec50 */ RELATION_YAJI rel_yaj[0];
/* data 33f020 */ CAPTION_LIST caption_list[0];
/* data 33f0d8 */ CAPTION_DATA caption_data[0];
/* sbss 357b50 */ static FILE_REL file_rel;
/* bss 402b80 */ static MEM_BOX mem_box[3];
/* bss 402bc8 */ static MENU_FILE menu_file;
/* bss 402bf8 */ static PHOT_FILE phot_file[4];
/* sbss 357b58 */ static FLSH_CORE flsh[4];
/* bss 402c38 */ static short int menu_dsp_file[50];
/* sdata 3571b8 */ enum NAME_PLATE_RABEL {
	SAKKA = 0,
	SAKKA2 = 1,
	JYOSYU = 2,
	JYOSYU2 = 3,
	HENSYU = 4,
	HENSYU2 = 5,
	TOUSYU = 6,
	TOUSYU2 = 7,
	KIRIE = 8,
	KIRIE2 = 9,
	KIRIE3 = 10,
	KIRIE4 = 11,
	SINKAN = 12,
	SINKAN2 = 13,
	KIMONO = 14,
	KIMONO2 = 15,
	KIMONO3 = 16,
	RYOZO = 17,
	RYOZO2 = 18,
	YAE = 19,
	YAE2 = 20,
	MIKOTO = 21,
	MIKOTO2 = 22,
	MIKOTO3 = 23,
	MAFUYU = 24,
	MAFUYU2 = 25,
	MAFUYU3 = 26,
	MIKU = 27,
	MIYUKI = 28,
	MIYUKI2 = 29,
	OMOI = 30,
	OMOI2 = 31
};
/* sdata 3571bc */ enum PARENT_RABEL {
	SAKKA_PRT = 0,
	HIMURO_PRT = 1,
	MUNA_PRT = 2,
	HINA_PRT = 3,
	OMOI_PRT = 4
};
/* sdata 3571c0 */ enum REL_DIRECTION {
	R_UP = 0,
	R_DOWN = 1,
	R_LEFT = 2,
	R_RIGHT = 3
};
/* sdata 3571c4 */ enum REL_ALPB {
	R_A = 0,
	R_B = 1,
	R_C = 2,
	R_D = 3,
	R_E = 4,
	R_F = 5,
	R_G = 6,
	R_G2 = 7,
	R_H = 8,
	R_I = 9,
	R_J = 10,
	R_J2 = 11,
	R_K = 12,
	R_K2 = 13,
	R_L = 14,
	R_L2 = 15,
	R_N = 16,
	R_O = 17,
	R_P = 18,
	R_Q = 19,
	R_R = 20,
	R_S = 21,
	R_T = 22,
	R_U = 23,
	R_V = 24,
	R_W = 25,
	R_X = 26,
	R_Y = 27,
	R_Z = 28
};
/* data 33f248 */ RELATION_CSR rel_csr;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_rank.c
// *****************************************************************************

/* data 33f270 */ SAVE_RANK save_rank;
/* sbss 357b60 */ static MENU_RANK menu_rank;
/* sbss 357b68 */ static FLSH_CORE flsh;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_glst.c
// *****************************************************************************

/* data 33f390 */ static GLIST_ORDER glist_order[0];
/* data 33f6f8 */ GLIST_INDEX glist_index[108];
/* bss 402ca0 */ static MENU_GLST menu_glist;
/* sbss 357b70 */ static FLSH_CORE flsh;
/* data 33f7d0 */ GLIST_PHOTO glist_photo;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_map.c
// *****************************************************************************

/* sdata 3571c8 */ u_char rm_in_flr0[8];
/* data 33f7e0 */ u_char rm_in_flr1[29];
/* data 33f800 */ u_char rm_in_flr2[12];
/* sdata 3571d0 */ u_char rm_in_flr3[2];
/* data 33f810 */ MAP_DOOR_POS map_door_pos[0];
/* data 33fa78 */ MAP_SVP_POS map_svp_pos[0];
/* bss 402cb0 */ static MAP_CTRL map;
/* sbss 357b78 */ static FLSH_CORE flsh[3];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/ig_option.c
// *****************************************************************************

/* sbss 357b80 */ static MENU_OPT menu_opt;
/* sbss 357b88 */ static FLSH_CORE flsh[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/menu/sp_menu.c
// *****************************************************************************

/* sbss 357b98 */ static SAVE_CONTE sav_con;
/* bss 402cc8 */ static MIRACLE_LENZ mrcl_lnz;
/* bss 402cd8 */ static SV_DSP_SW sv_dsp_sw;
/* bss 402cf0 */ static DSP_SVP dsp_svp;
/* bss 402d00 */ static ALBM_MODE albm_mode;
/* bss 402d10 */ static BOOK book[6];
/* sdata 3571f0 */ SAVE_POINT_MENU_WRK spmenu_wrk;
/* sbss 357ba0 */ static FLSH_CORE flsh[3];
/* sbss 357ba8 */ static int sp_load_id;
/* sbss 357bac */ static u_char btn_flsh_cnt;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/map/door_conte.c
// *****************************************************************************

/* bss 402d58 */ static DOOR_CONTE dorcon;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/photo/pht_main.c
// *****************************************************************************

/* sdata 357200 */ int after_timer;
/* sdata 357218 */ int pazene_load_buf[2];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/photo/pht_make.c
// *****************************************************************************

/* data 33fbd8 */ SPRT_DAT hintdat[0];
/* data 3407f8 */ SPRT_DAT hintreadat[0];
/* data 340e58 */ int pazene_load_tbl[0];
/* sdata 357220 */ int frm_type;
/* sdata 357224 */ int ers_type;
/* sdata 357244 */ int hint_2d;
/* sdata 357248 */ int hint_rea;
/* sdata 35724c */ int hint_3d;
/* sdata 357250 */ int hint_2d_num;
/* sdata 357254 */ int hint_3d_num;
/* sdata 357258 */ int pic_save_flag;
/* sdata 35725c */ int pht_finder_off;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/plyr/plyr_ctl.c
// *****************************************************************************

/* data 341058 */ float photo_rng_tbl[0];
/* data 341060 */ u_short photo_frame_tbl[0][2];
/* data 341068 */ float circle_radius_tbl[0];
/* data 341078 */ u_char charge_max_tbl[0];
/* data 341080 */ u_char ini_charge_tbl[0];
/* data 341088 */ u_short photo_dmg_tbl[0];
/* data 3410b8 */ float photo_dist_ratio[0];
/* data 3410e0 */ float photo_center_ratio[0];
/* data 341108 */ float photo_charge_ratio[0];
/* sdata 357260 */ int pa_radius_set;
/* sdata 357264 */ static u_char step_direction;
/* sdata 357265 */ static u_char no_photo_tm;
/* sdata 357266 */ static u_char dmg_step;
/* sdata 35726c */ float paz;
/* sdata 3572ec */ float spd_ld;
/* sdata 3572f0 */ float spd_sd;
/* sdata 3572f4 */ float spd_su;
/* sdata 3572f8 */ float spd_sdr;
/* sdata 3572fc */ float spd_sur;
/* data 341118 */ PWARP_DAT pwarp_dat[0];
/* sbss 357bbb */ static u_char avoid_chk;
/* sbss 357bbc */ static u_short hp_down_deg;
/* sdata 357300 */ u_char plyr_vib_time;
/* sdata 357308 */ PWARP_WRK pwarp_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/edit/test_2d.c
// *****************************************************************************

/* data 341128 */ SPRT_DAT test_tex0[0];
/* data 3411c8 */ SPRT_DAT test_tex1[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/scn_test.c
// *****************************************************************************

/* sdata 357310 */ static int mono_flg;
/* sdata 357314 */ static SCENE_CTRL *scn_p;
/* sdata 357318 */ static FOD_CTRL *scn_fc;
/* sdata 35731c */ static FOD_LIGHT *scn_fl;
/* data 341370 */ static char *scene_name[100];
/* data 341500 */ static int scn_test_load_id[20];
/* sdata 3574f4 */ static int scn_test_load_num;
/* data 341550 */ static void (*SceneTestDBMenu[0])(/* parameters unknown */);
/* data 341588 */ static SCN_EFF_CTRL scn_eff_ctrl[0];
/* data 341790 */ SCN_TEST_WRK scn_test_wrk;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/title.c
// *****************************************************************************

/* data 342c90 */ SPRT_DAT title_sprt[11];
/* data 342df0 */ SPRT_DAT font_sprt[20];
/* sdata 3576a0 */ int opening_movie_type;
/* data 343070 */ TITLE_WRK title_wrk;
/* sbss 357be8 */ static TTL_DSP_WRK ttl_dsp;
/* bss 402e40 */ static OUT_DITHER_STR out_dither;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/graphics/graph2d/takep_pe.c
// *****************************************************************************

/* sdata 3576c8 */ static int pe_callflg;
/* data 343080 */ sceVu0IVECTOR particle_eff_col;
/* sdata 3576cc */ u_char eye_light_flg;
/* data 343090 */ sceVu0FVECTOR l_eye_pos;
/* data 3430a0 */ sceVu0FVECTOR r_eye_pos;
/* data 3430b0 */ PARTICLE_EFF_OBJ dummy_pe_obj;
/* sbss 357bec */ static int pe_active_time;
/* sbss 357bf0 */ static u_int pe_index;
/* sbss 357bf4 */ static int rem_pe_ix;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc.c
// *****************************************************************************

/* data 343140 */ MC_DATA_STR mc_gamedata_str[0];
/* data 343230 */ MC_DATA_STR mc_albumdata_str[0];
/* data 343250 */ MC_DATA_STR mc_albumdata2_str[0];
/* sdata 3576d0 */ u_long mc_gamedata_str_num;
/* sdata 3576d8 */ u_long mc_albumdata_str_num;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_main.c
// *****************************************************************************

/* data 343280 */ MC_CTRL mc_ctrl;
/* data 343d40 */ MC_HEADER mc_header;
/* data 343d60 */ MC_HEADER mc_header_buf[16];
/* sdata 3576f0 */ u_int mc_game_size;
/* sdata 3576f4 */ u_int mc_album_size;
/* sdata 3576f8 */ u_char mc_start_flg;
/* sdata 3576f9 */ u_char mc_msn_flg;
/* sdata 3576fa */ u_char mc_newalbum_flg;
/* sdata 3576fc */ u_int mc_album_type;
/* sdata 357700 */ u_int mc_photo_num;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_acs.c
// *****************************************************************************

/* data 343f60 */ char (*mc_acs[0])(/* parameters unknown */);

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_exec.c
// *****************************************************************************

/* sdata 357755 */ u_char save_pht_in_game;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_start.c
// *****************************************************************************

/* data 343f88 */ MC_START_CHECK mc_start_check[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_icon.c
// *****************************************************************************

/* rdata 352a48 */ char mc_icon_title[0];
/* rdata 352a70 */ char mc_icon_album[0];
/* rdata 352aa0 */ int mc_bgcolor[4][4];
/* rdata 352ae0 */ float mc_lightdir[3][4];
/* rdata 352b10 */ float mc_lightcol[3][4];
/* rdata 352b40 */ float mc_ambient[4];
/* data 343fa8 */ u_char *mc_iconName[0];
/* rdata 352b60 */ int mc_iconFile[0];
/* rdata 352b70 */ int mc_iconFileAlbum[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/mc/mc_at.c
// *****************************************************************************

/* sbss 357c28 */ static DSP_MC dsp_mc;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/outgame.c
// *****************************************************************************

/* sdata 357758 */ static int rsc_menu_csr;
/* sdata 357760 */ static int rsc_no[2];
/* sbss 357c2c */ static u_int load_size;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/btl_mode/btl_menu.c
// *****************************************************************************

/* data 343fc0 */ MSN_LOAD_DAT stage_load_dat0[0];
/* data 343ff8 */ MSN_LOAD_DAT stage_load_dat1[0];
/* data 344030 */ MSN_LOAD_DAT stage_load_dat2[0];
/* data 344068 */ MSN_LOAD_DAT stage_load_dat3[0];
/* data 3440a0 */ MSN_LOAD_DAT stage_load_dat4[0];
/* data 3440d8 */ MSN_LOAD_DAT *stage_load_dat[0];
/* data 3440f0 */ FREE_DAT free_dat[0];
/* data 3445d0 */ BTL_SAVE_STR btl_save_str[0];
/* sdata 3577e0 */ u_long btl_save_str_num;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/btl_mode/btl_mode.c
// *****************************************************************************

/* data 344670 */ int rank_dat[0];
/* data 344688 */ int battle_scr_effct[0];
/* data 3446d8 */ int btlBonus[0];
/* sdata 3577e8 */ static int sp_load_id;
/* data 344700 */ BTL_MODE_WRK btl_wrk;
/* data 344710 */ STAGE_WRK stage_wrk[20];
/* sdata 3577f0 */ long int msn_high_score;
/* sdata 3577f8 */ long int msn_total_score;
/* sdata 357800 */ long int msn_bonus;
/* sdata 357808 */ int stage_all_clear_bak;
/* sdata 35780c */ int btl_mode_bgm_init;
/* sdata 357810 */ int btl_clear_disp;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/btl_mode/btl_dat.c
// *****************************************************************************

/* data 344850 */ STAGE_DAT stage_dat[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/wan_soul.c
// *****************************************************************************

/* data 345750 */ WANDER_SOUL_WRK wander_soul_wrk[1];
/* sbss 357c3c */ static int ene_face_load_id;
/* sbss 357c40 */ static void *ws_noise_buf;
/* sbss 357c44 */ static void *face_buff;
/* sbss 357c48 */ static u_short adpcm_wait_limit;
/* sbss 357c4c */ static void *p_deform_buf;
/* sbss 357c50 */ static void *overlap_buf;
/* sbss 357c54 */ static u_char soul_tell_mode;
/* sbss 357c56 */ static short int telling_count;
/* bss 402e60 */ static sceVu0FVECTOR save_soul_pos;
/* bss 402e70 */ static sceVu0FVECTOR end_cam_pos;
/* bss 402e80 */ static sceVu0FVECTOR cam_move_speed;
/* bss 402e90 */ static sceVu0FVECTOR cam_ref_adjust_val;

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/ingame/event/wan_dat.c
// *****************************************************************************

/* data 345820 */ sceVu0FVECTOR soul_des100[0];
/* data 345840 */ sceVu0FVECTOR soul_des101[0];
/* data 345890 */ sceVu0FVECTOR soul_des102[0];
/* data 3458b0 */ sceVu0FVECTOR soul_des103[0];
/* data 3458d0 */ sceVu0FVECTOR soul_des105[0];
/* data 345930 */ sceVu0FVECTOR soul_des110[0];
/* data 345950 */ sceVu0FVECTOR soul_des112[0];
/* data 345970 */ sceVu0FVECTOR soul_des114[0];
/* data 345990 */ sceVu0FVECTOR soul_des119[0];
/* data 3459b0 */ sceVu0FVECTOR soul_des120[0];
/* data 345a00 */ sceVu0FVECTOR soul_des121[0];
/* data 345a20 */ sceVu0FVECTOR soul_des123[0];
/* data 345a40 */ sceVu0FVECTOR soul_des128[0];
/* data 345a90 */ sceVu0FVECTOR soul_des130[0];
/* data 345ab0 */ sceVu0FVECTOR soul_des131[0];
/* data 345ad0 */ sceVu0FVECTOR soul_des132[0];
/* data 345af0 */ sceVu0FVECTOR soul_des202[0];
/* data 345b10 */ sceVu0FVECTOR soul_des203[0];
/* data 345b60 */ sceVu0FVECTOR soul_des204[0];
/* data 345b80 */ sceVu0FVECTOR soul_des206[0];
/* data 345ba0 */ sceVu0FVECTOR soul_des211[0];
/* data 345bc0 */ sceVu0FVECTOR soul_des212[0];
/* data 345be0 */ sceVu0FVECTOR soul_des214[0];
/* data 345c00 */ sceVu0FVECTOR soul_des215[0];
/* data 345c20 */ sceVu0FVECTOR soul_des216[0];
/* data 345c40 */ sceVu0FVECTOR soul_des000[0];
/* data 345ce0 */ sceVu0FVECTOR *soul_des_array[0];
/* data 345d48 */ WANDER_SOUL_DAT wander_soul_dat[0];

// *****************************************************************************
// FILE -- /home/m_nagaura/reikoku/src/outgame/sound_test.c
// *****************************************************************************

/* data 345de8 */ u_short music_list[0];
/* bss 402ea0 */ static ST_F stf;
/* sbss 357c58 */ static BEAT_DSP bb;
/* sbss 357c5e */ static char playback_part2;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_fmod.c
// *****************************************************************************

/* rdata 3542b8 */ static float one;
/* rdata 3542c0 */ static float Zero[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* rdata 3542c8 */ static __int32_t two_over_pi[0];
/* rdata 3545e0 */ static __int32_t npio2_hw[0];
/* rdata 354660 */ static float zero;
/* rdata 354664 */ static float half;
/* rdata 354668 */ static float two8;
/* rdata 35466c */ static float invpio2;
/* rdata 354670 */ static float pio2_1;
/* rdata 354674 */ static float pio2_1t;
/* rdata 354678 */ static float pio2_2;
/* rdata 35467c */ static float pio2_2t;
/* rdata 354680 */ static float pio2_3;
/* rdata 354684 */ static float pio2_3t;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* rdata 354688 */ static float one;
/* rdata 35468c */ static float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* rdata 354690 */ static int init_jk[0];
/* rdata 3546a0 */ static float PIo2[0];
/* rdata 3546cc */ static float zero;
/* rdata 3546d0 */ static float one;
/* rdata 3546d4 */ static float two8;
/* rdata 3546d8 */ static float twon8;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

/* rdata 3546e0 */ static float one;
/* rdata 3546e4 */ static float pio4;
/* rdata 3546e8 */ static float pio4lo;
/* rdata 3546f0 */ static float T[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_lib_ver.c
// *****************************************************************************

/* rdata 354724 */ __fdlibm_version __fdlib_version;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* rdata 354728 */ static float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* rdata 35472c */ static float two25;
/* rdata 354730 */ static float twom25;
/* rdata 354734 */ static float huge;
/* rdata 354738 */ static float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* bss 357c60 */ func_ptr __CTOR_LIST__[2];
/* bss 357c68 */ func_ptr __DTOR_LIST__[2];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 354740 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 354840 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 354940 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 354a40 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/ctype/ctype_.c
// *****************************************************************************

/* rdata 354b40 */ char _ctype_[257];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/impure.c
// *****************************************************************************

/* data 348ea8 */ static _reent impure_data;
/* data 349194 */ _reent *_impure_ptr;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* data 349198 */ mbinptr __malloc_av_[258];
/* data 3495a0 */ long unsigned int __malloc_trim_threshold;
/* data 3495a8 */ long unsigned int __malloc_top_pad;
/* data 3495b0 */ char *__malloc_sbrk_base;
/* data 3495b8 */ long unsigned int __malloc_max_sbrked_mem;
/* data 3495c0 */ long unsigned int __malloc_max_total_mem;
/* data 3495c8 */ mallinfo __malloc_current_mallinfo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* bss 357c70 */ int errno;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* data 3495f0 */ int __mb_cur_max;
/* rdata 354eb8 */ static lconv lconv;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* rdata 354f10 */ double __mprec_tens[0];
/* rdata 354fd8 */ double __mprec_bigtens[0];
/* rdata 355000 */ double __mprec_tinytens[0];

// *****************************************************************************
// FILE -- (unknown)
// *****************************************************************************

/* nil 345e80 */ __ps2_libinfo__;
/* nil 345e94 */ cb_thid;
/* nil 345e98 */ scmd_sema_keep_cmd;
/* nil 345e9c */ ncmd_sema_keep_cmd;
/* nil 345ea0 */ cb_semid;
/* nil 345ea4 */ Init_seq;
/* nil 345eb8 */ _ncmd_bind;
/* nil 345ebc */ _icmd_bind;
/* nil 345ec0 */ _sf_bind;
/* nil 345ec4 */ _scmd_dr_bind;
/* nil 345ec8 */ _scmd_bind;
/* nil 345ecc */ _it_bind;
/* nil 345ed0 */ c_cnt.57;
/* nil 3478f0 */ stm_status;
/* nil 347928 */ __ps2_libinfo__;
/* nil 347938 */ isclr;
/* nil 347960 */ ststbl;
/* nil 347970 */ stdtbl;
/* nil 347980 */ mfdtbl;
/* nil 3479b8 */ srcfile;
/* nil 3480f8 */ eenull;
/* nil 348120 */ SysEntry;
/* nil 348160 */ count;
/* nil 348164 */ _putchar;
/* nil 348168 */ _cmd_init_check;
/* nil 34816c */ _sceSifInitCheck;
/* nil 3481f0 */ _fs_init;
/* nil 3481f4 */ _fs_semid;
/* nil 3481f8 */ _fs_iob_semid;
/* nil 3481fc */ _fs_fsq_semid;
/* nil 348200 */ _fswildcard;
/* nil 348204 */ _bind;
/* nil 348208 */ _bind_check;
/* nil 34820c */ _lfwildcard;
/* nil 348218 */ ttyinit;
/* nil 34821c */ heap_ptr.30;
/* nil 348220 */ topId;
/* nil 348228 */ __ps2_libinfo__;
/* nil 348250 */ init_vif_regs.126;
/* nil 348270 */ __ps2_libinfo__;
/* nil 348280 */ isInit;
/* nil 348284 */ isWarning;
/* nil 348288 */ PadStateStr;
/* nil 3482a8 */ ReqStateStr;
/* nil 3482b8 */ __ps2_libinfo__;
/* nil 3482c8 */ mcRunCmdNo;
/* nil 3482cc */ semaidRegFunc;
/* nil 3482d0 */ __ps2_libinfo__;
/* nil 3482e0 */ gp.6;
/* nil 3482f0 */ init_vif_regs.3;
/* nil 348310 */ init_mp3.3;
/* nil 348320 */ _strmap;
/* nil 3483d0 */ __ps2_libinfo__;
/* nil 3483e0 */ _buffbase;
/* nil 408b40 */ _sprtagdata;
/* nil 408d40 */ _bstag;
/* nil 348cc8 */ _rix;
/* nil 348ce8 */ _ri0;
/* nil 348d08 */ _isDirty;
/* nil 348d40 */ ext_func.183;
/* nil 348d6c */ tempRefWrap.193;
/* nil 348d70 */ tempRefOld.194;
/* nil 348db8 */ _isCSCerror;
/* nil 348dd0 */ __ps2_libinfo__;
/* nil 348de0 */ __ps2_libinfo__;
/* nil 348df0 */ sceSd_gEnd_func;
/* nil 348e20 */ __ps2_libinfo__;
/* nil 348e30 */ iqval;
/* nil 348e80 */ vqval;
/* nil 348ea0 */ p.3;
/* nil 34860c */ _original_or_copy;
/* nil 3474c0 */ _sceCd_scmdsdata;
/* nil 348434 */ _ipubp;
/* nil 34851c */ _isSecondField;
/* nil 348588 */ _forward_f_code;
/* nil 34840c */ _forwTop;
/* nil 3478c8 */ _sceCd_cd_scmd;
/* nil 348408 */ _zFrame;
/* nil 348618 */ _copyright_number_3;
/* nil 348c98 */ _top32;
/* nil 348650 */ _refFrame0;
/* nil 348d34 */ _trFrameNumberA;
/* nil 3485ac */ _picture_structure;
/* nil 348cb8 */ _alternate_scan;
/* nil 348608 */ _copyright_identifier;
/* nil 348640 */ _qscqsc;
/* nil 347990 */ sceDmaCurrentEnv;
/* nil 3485b0 */ _top_field_first;
/* nil 348438 */ _iputop;
/* nil 348e00 */ _sce_sdr_transIntr0Hdr;
/* nil 3487f0 */ _refTop1;
/* nil 34850c */ _picWidth;
/* nil 348e08 */ _sce_sdr_spu2IntrHdr;
/* nil 345ea8 */ _sceCd_ncmd_semid;
/* nil 3485d4 */ _field_sequence;
/* nil 34856c */ _matrix_coefficients;
/* nil 348e0c */ _sce_sdr_transIntr0Arg;
/* nil 348578 */ _temporal_reference;
/* nil 35d070 */ _gp;
/* nil 348630 */ _closed_gop;
/* nil 3483f0 */ _bsDatap;
/* nil 345f00 */ _sceCd_ncmdrdata;
/* nil 348548 */ _progressive_sequence;
/* nil 34855c */ _video_format;
/* nil 345ed8 */ sceCdCbfunc_number;
/* nil 345e90 */ SCE_CD_debug;
/* nil 347050 */ _sceCd_cd_ncmd;
/* nil 3483e4 */ _sprtag;
/* nil 348538 */ _bit_rate_value;
/* nil 348528 */ _widthMB;
/* nil 3486b8 */ _refFrame1;
/* nil 34841c */ _backBot;
/* nil 3485dc */ _burst_amplitude;
/* nil 348634 */ _broken_link;
/* nil 348520 */ _horizontal_size;
/* nil 3485b4 */ _frame_pred_frame_dct;
/* nil 348e10 */ _sce_sdr_transIntr1Arg;
/* nil 348504 */ _totalFrames;
/* nil 348cb4 */ _q_scale_type;
/* nil 3478f8 */ dch;
/* nil 345eb0 */ _sceCd_c_cb_sem;
/* nil 348620 */ _time_code_hours;
/* nil 348cc0 */ _intra_slice;
/* nil 348624 */ _time_code_minutes;
/* nil 348568 */ _transfer_characteristics;
/* nil 3485d0 */ _v_axis;
/* nil 348788 */ _refTop0;
/* nil 348dfc */ _sce_sdr_gIRQCB;
/* nil 348598 */ _f_code;
/* nil 348990 */ _refBot2;
/* nil 3485a8 */ _intra_dc_precision;
/* nil 348614 */ _copyright_number_2;
/* nil 348c88 */ _headerPts;
/* nil 348440 */ _d4madr;
/* nil 3485bc */ _intra_vlc_format;
/* nil 348428 */ _tmp_flag;
/* nil 34858c */ _full_pel_backward_vector;
/* nil 34853c */ _vbv_buffer_size_value;
/* nil 348558 */ _frame_rate_extension_d;
/* nil 34843c */ _d4tadr;
/* nil 346f80 */ _sceCd_rd_intr_data;
/* nil 348508 */ _isError;
/* nil 348524 */ _vertical_size;
/* nil 348dc0 */ _cscDma;
/* nil 348534 */ _frame_rate_code;
/* nil 348514 */ _cWidth;
/* nil 347040 */ _sceCd_Read_cur_pos;
/* nil 348404 */ _backFrame;
/* nil 345eac */ _sceCd_scmd_semid;
/* nil 348590 */ _backward_f_code;
/* nil 3485b8 */ _concealment_motion_vectors;
/* nil 348518 */ _cHeight;
/* nil 348858 */ _refTop2;
/* nil 348444 */ _d4chcr;
/* nil 3483e8 */ _refBlockp;
/* nil 348550 */ _low_delay;
/* nil 348c80 */ _isOutputPicture;
/* nil 348604 */ _copyright_flag;
/* nil 348df8 */ _sce_sdr_gDMA1CB;
/* nil 3484c0 */ _defNIQM;
/* nil 348d30 */ _tmpRefBase;
/* nil 348554 */ _frame_rate_extension_n;
/* nil 348540 */ _constrained_parameters_flag;
/* nil 348610 */ _copyright_number_1;
/* nil 348410 */ _backTop;
/* nil 3485c4 */ _chroma_420_type;
/* nil 348d38 */ _tmpRefGOPreset;
/* nil 34844c */ _d3madr;
/* nil 348510 */ _picHeight;
/* nil 34854c */ _chroma_format;
/* nil 348d78 */ _showCount;
/* nil 345f80 */ _sceCd_ncmdsdata;
/* nil 348cb0 */ _isMpeg2;
/* nil 348e04 */ _sce_sdr_transIntr1Hdr;
/* nil 3485d8 */ _sub_carrier;
/* nil 348644 */ _curFrame;
/* nil 348648 */ _curTop;
/* nil 348c90 */ _headerDts;
/* nil 3488c0 */ _refBot0;
/* nil 348e14 */ _sce_sdr_spu2IntrArg;
/* nil 348424 */ _isTop32dirty;
/* nil 348ca4 */ _load_non_intra_quantizer_matrix;
/* nil 348418 */ _forwBot;
/* nil 348580 */ _vbv_delay;
/* nil 348530 */ _aspect_ratio_information;
/* nil 3485c8 */ _progressive_frame;
/* nil 348170 */ _sceFs_q;
/* nil 348ca0 */ _load_intra_quantizer_matrix;
/* nil 348560 */ _color_description;
/* nil 348500 */ _bsDataSize;
/* nil 34863c */ _sp_dcr;
/* nil 348454 */ _d3qwc;
/* nil 3483ec */ _theSceMpeg;
/* nil 34852c */ _heightMB;
/* nil 3485c0 */ _repeat_first_field;
/* nil 348638 */ _trFrameNumber;
/* nil 348570 */ _display_horizontal_size;
/* nil 348414 */ _zTop;
/* nil 348210 */ __sce_sema_id;
/* nil 348214 */ __sce_eh_sema_id;
/* nil 345eb4 */ _sceCd_ee_read_mode;
/* nil 348564 */ _color_primaries;
/* nil 348448 */ _d4qwc;
/* nil 345ed4 */ sceCdCbfunc_num;
/* nil 3485e8 */ _frame_center_horizontal_offset;
/* nil 3489f8 */ _mbcont;
/* nil 34857c */ _picture_coding_type;
/* nil 348720 */ _refFrame2;
/* nil 3485f8 */ _frame_center_vertical_offset;
/* nil 348450 */ _d3chcr;
/* nil 348480 */ _defIQM;
/* nil 348cac */ _load_chroma_non_intra_quantizer_matrix;
/* nil 348628 */ _time_code_seconds;
/* nil 348cbc */ _priority_breakpoint;
/* nil 34861c */ _drop_frame_flag;
/* nil 34864c */ _curBot;
/* nil 3485e0 */ _sub_carrier_phase;
/* nil 348400 */ _forwFrame;
/* nil 348c9c */ _top32len;
/* nil 348584 */ _full_pel_forward_vector;
/* nil 34862c */ _time_code_pictures;
/* nil 348928 */ _refBot1;
/* nil 347920 */ sceDmaDebugMode;
/* nil 348420 */ _zBot;
/* nil 3485cc */ _composite_display_flag;
/* nil 34842c */ _ipucmd;
/* nil 348574 */ _display_vertical_size;
/* nil 347080 */ _sceCd_scmdrdata;
/* nil 348544 */ _profile_and_level_indication;
/* nil 348430 */ _ipuctrl;
/* nil 348df4 */ _sce_sdr_gDMA0CB;
/* nil 348ca8 */ _load_chroma_intra_quantizer_matrix;
