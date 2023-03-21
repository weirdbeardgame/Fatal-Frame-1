cmake_minimum_required(VERSION 3.26.0)
project(Game)

set(COMMON_SOURCES common/ul_math.c common/utility.c)

set(EDIT_SOURCES edit/map_data.c edit/mde_disp.c edit/mde_file.c 
edit/mde_fmnu.c edit/mde_main.c edit/mde_mdsp.c edit/mde_menu.c edit/test_2d.c)

set(GRAPH2D_SOURCES graphics/graph2d/compress.c graphics/graph2d/effect_ene.c graphics/graph2d/effect_obj.c 
graphics/graph2d/effect_oth.c graphics/graph2d/effect_rdr.c graphics/graph2d/effect_scr.c graphics/graph2d/effect_sub.c
graphics/graph2d/effect_sub2.c graphics/graph2d/effect.c graphics/graph2d/g2d_debug.c graphics/graph2d/g2d_main.c 
graphics/graph2d/message.c graphics/graph2d/number.c graphics/graph2d/rare_ene.c graphics/graph2d/snapshot.c graphics/graph2d/takep_pe.c
graphics/graph2d/tim2_new.c graphics/graph2d/tim2.c)

set(GRAPH3D_SOURCES graphics/graph3d/gra3d.c graphics/graph3d/leditor.c graphics/graph3d/load3d.c graphics/graph3d/mirror.c 
graphics/graph3d/object.c graphics/graph3d/sce_pp3.c graphics/graph3d/sgcam.c graphics/graph3d/sgdma.c graphics/graph3d/sglib.c
graphics/graph3d/sglight.c graphics/graph3d/sgsgd.c graphics/graph3d/sgsu.c graphics/graph3d/sgsup.c graphics/graph3d/shadow.c)

set(MOTION_SOURCES graphics/motion/accessory.c graphics/motion/acs_dat.c graphics/motion/anicode.c graphics/motion/mdlact.c
graphics/motion/mdldat.c graphics/motion/mdlwork.c graphics/motion/mim_dat.c graphics/motion/mime.c graphics/motion/motion.c)

set(MOV_SOURCES graphics/mov/movie.c)

set(SCENE_SOURCES graphics/scene/fod.c graphics/scene/scene_dat.c graphics/scene/scene.c)

set(INGAME_SOURCES ingame/ig_glob.c ingame/ig_init.c ingame/ingame.c)

set(CAMERA_SOURCES ingame/camera/camera.c)

set(ENEMY_SOURCES ingame/enemy/ene_ctl.c ingame/enemy/move_ctl.c)

set(ENTRY_SOURCES ingame/entry/ap_bgost.c ingame/entry/ap_dgost.c ingame/entry/ap_fgost.c ingame/entry/ap_ggost.c
ingame/entry/ap_pgost.c ingame/entry/ap_rgost.c ingame/entry/ap_sgost.c ingame/entry/ap_zgost.c ingame/entry/entry.c
ingame/entry/fgst_dat.c ingame/entry/rgst_dat.c)

set(EVENT_SOURCES ingame/event/ev_load.c ingame/event/ev_main.c ingame/event/ev_spcl.c 
ingame/event/mv_cmnd.c ingame/event/wan_dat.c ingame/event/wan_soul.c)

set(INFO_SOURCES ingame/info/inf_disp.c)

set(MAP_SOURCES ingame/map/furn_spe/adj_valg.c ingame/map/furn_spe/fsla_dat.c ingame/map/furn_spe/fsla_main.c ingame/map/furn_spe/fspe_acs.c
ingame/map/furn_spe/furn_spe.c ingame/map/door_conte.c ingame/map/doortype.c ingame/map/find_ctl.c ingame/map/find_dat.c ingame/map/furn_ctl.c
ingame/map/furn_dat.c ingame/map/furn_eff.c ingame/map/item_ctl.c ingame/map/map_area.c ingame/map/map_ctrl.c ingame/map/map_htck.c ingame/map/rotd_ctl.c)

set(MENU_SOURCES ingame/menu/gameover.c ingame/menu/ig_album.c ingame/menu/ig_camra.c ingame/menu/ig_file.c
ingame/menu/ig_glst.c ingame/menu/ig_map.c ingame/menu/ig_menu.c ingame/menu/ig_option.c ingame/menu/ig_rank.c
ingame/menu/ig_spd_menu.c ingame/menu/item_get.c ingame/menu/item.c ingame/menu/pause.c ingame/menu/sp_menu.c)

set(PHOTO_SOURCES ingame/photo/photo.c ingame/photo/pht_main.c ingame/photo/pht_make.c)

set(PLYR_SOURCES ingame/plyr/plyr_ctl.c ingame/plyr/time_ctl.c ingame/plyr/unit_ctl.c)

set(MAIN_SOURCES main/gamemain.c main/glob.c main/main.c)

set(MC_SOURCES mc/mc_acs.c mc/mc_album.c mc/mc_at.c mc/mc_disp.c 
mc/mc_exec.c mc/mc_icon.c mc/mc_main.c mc/mc_start.c mc/mc.c)

set(OUTGAME_SOURCES outgame/memory_album.c outgame/mode_slct.c outgame/mot_menu.c outgame/mot_test.c
outgame/scn_test.c outgame/snd_test.c outgame/title.c outgame/btl_mode/btl_dat.c 
outgame/btl_mode/btl_menu.c outgame/btl_mode/btl_mode.c)

add_library(Game ${COMMON_SOURCES} ${EDIT_SOURCES} ${GRAPH2D_SOURCES}
${GRAPH3D_SOURCES} ${MOTION_SOURCES} ${MOV_SOURCES} ${SCENE_SOURCES}
${INGAME_SOURCES} ${CAMERA_SOURCES} ${ENEMY_SOURCES} ${ENTRY_SOURCES}
${EVENT_SOURCES} ${INFO_SOURCES} ${MAP_SOURCES} ${MENU_SOURCES} 
${PHOTO_SOURCES} ${PLYR_SOURCES} ${MAIN_SOURCES} ${MC_SOURCES}
${OUTGAME_SOURCES}
)

set (INCLUDE_DIRS common edit graphics/graph2d graphics/graph3d graphics/motion graphics/mov
graphics/scene ingame ingame/camera ingame/enemy ingame/entry ingame/event ingame/info ingame/map/furn_spe
ingame/map ingame/menu ingame/photo main mc os os/eeiop os/eeiop/cdvd op/eeiop/adpcm outgame)

target_include_directories(Game PUBLIC ${INCLUDE_DIRS})
