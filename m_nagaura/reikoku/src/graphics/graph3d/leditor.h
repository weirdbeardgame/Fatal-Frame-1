// STATUS: NOT STARTED

#ifndef M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_LEDITOR_H
#define M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_LEDITOR_H

typedef struct {
	char *name;
	int subnum;
	int nmax;
} DEBUG_SUB_MENU;


void ReadLights(ROOM_LIGHT *rdata, void *buf);
void ApplyLight(int room_no);
void MakeLightEditorData(DEBUG_MENU **dbgmenu_tbl, int now_tree);
void MakeFogData(DEBUG_SUB_MENU **dbgmenu_tbl, int pos);
void ApplyFogData();

#endif // M_NAGAURA_REIKOKU_SRC_GRAPHICS_GRAPH3D_LEDITOR_H
