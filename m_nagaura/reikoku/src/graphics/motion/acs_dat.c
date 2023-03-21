// STATUS: NOT STARTED

SPHERE sphere_R100 = {
	/* .center = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .r = */ 100.f
};
SPHERE sphere_R150 = {
	/* .center = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .r = */ 150.f
};
SPHERE sphere_R200 = {
	/* .center = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .r = */ 200.f
};
TUBE tube_R150_H200 = {
	/* .p0 = */ {
		/* [0] = */ -100.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .p1 = */ {
		/* [0] = */ 100.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .r = */ 180.f,
	/* .axis = */ 0
};
TUBE tube_R90_H200 = {
	/* .p0 = */ {
		/* [0] = */ -100.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .p1 = */ {
		/* [0] = */ 100.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f
	},
	/* .r = */ 70.f,
	/* .axis = */ 0
};
WMIM mimacs_ribon_dat = {
	/* .name = */ 0x356c10,
	/* .mass = */ 0.0199999996f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.100000001f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM mimacs_hair_dat = {
	/* .name = */ 0x356c18,
	/* .mass = */ 0.0250000004f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.200000003f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM_DAT m000_wmim_tbl[0] = {
};
WMIM mimacs_hair00_dat = {
	/* .name = */ 0x356c20,
	/* .mass = */ 0.0250000004f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.200000003f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM mimacs_hair01_dat = {
	/* .name = */ 0x356c28,
	/* .mass = */ 0.0250000004f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.200000003f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM_DAT m021_wmim_tbl[0] = {
};
WMIM_DAT m023_wmim_tbl[0] = {
};
WMIM mimacs_lhand_dat = {
	/* .name = */ 0x356c30,
	/* .mass = */ 0.0250000004f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.200000003f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM mimacs_rhand_dat = {
	/* .name = */ 0x356c38,
	/* .mass = */ 0.0250000004f,
	/* .Ks = */ 0.0199999996f,
	/* .dec = */ 0.899999976f,
	/* .pos = */ {
		/* [0] = */ 2.5f,
		/* [1] = */ -2.29999995f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* .gravity = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.200000003f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};
WMIM_DAT m027_wmim_tbl[0] = {
};
WMIM_DAT m028_wmim_tbl[0] = {
};
float rope_vtx0[0] = {
};
float rope_vtx1[0] = {
};
float rope_vtx2[0] = {
};
ROPE_DAT rope_dat0 = {
	/* .vtx = */ rope_vtx0,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
ROPE_DAT rope_dat1 = {
	/* .vtx = */ rope_vtx1,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
ROPE_DAT rope_dat2 = {
	/* .vtx = */ rope_vtx2,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
float rope_vtx3[0] = {
};
ROPE_DAT rope_dat3 = {
	/* .vtx = */ rope_vtx3,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.f,
	/* .fixed_num = */ 2
};
float rope_vtx4[0] = {
};
ROPE_DAT rope_dat4 = {
	/* .vtx = */ rope_vtx4,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.f,
	/* .fixed_num = */ 2
};
float rope_vtx5[0] = {
};
ROPE_DAT rope_dat5 = {
	/* .vtx = */ rope_vtx5,
	/* .gravity = */ 3.5f,
	/* .Kd = */ 0.992999971f,
	/* .Ke = */ 0.f,
	/* .fixed_num = */ 2
};
float rope_vtx6[0] = {
};
ROPE_DAT rope_dat6 = {
	/* .vtx = */ rope_vtx6,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.f,
	/* .fixed_num = */ 2
};
float rope_vtx7[0] = {
};
ROPE_DAT rope_dat7 = {
	/* .vtx = */ rope_vtx7,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.99000001f,
	/* .Ke = */ 0.f,
	/* .fixed_num = */ 2
};
float rope_vtx8[0] = {
};
float rope_vtx9[0] = {
};
float rope_vtx10[0] = {
};
ROPE_DAT rope_dat8 = {
	/* .vtx = */ rope_vtx8,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
ROPE_DAT rope_dat9 = {
	/* .vtx = */ rope_vtx9,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
ROPE_DAT rope_dat10 = {
	/* .vtx = */ rope_vtx10,
	/* .gravity = */ 2.5f,
	/* .Kd = */ 0.980000019f,
	/* .Ke = */ 0.00999999978f,
	/* .fixed_num = */ 2
};
ROPE_DAT *rope_tbl[0] = {
};
CLOTH cloth_manto0 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 6,
	/* .h = */ 8,
	/* .type = */ 0
};
CLOTH cloth_manto1 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 6,
	/* .h = */ 5,
	/* .type = */ 0
};
CLOTH cloth_manto2 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 9,
	/* .h = */ 4,
	/* .type = */ 0
};
CLOTH cloth_manto3 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 3,
	/* .h = */ 6,
	/* .type = */ 0
};
CLOTH cloth_manto4 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 5,
	/* .h = */ 4,
	/* .type = */ 0
};
CLOTH cloth_manto5 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 2,
	/* .h = */ 6,
	/* .type = */ 0
};
CLOTH cloth_manto6 = {
	/* .gravity = */ 0.50999999f,
	/* .Kd = */ 0.947000027f,
	/* .Ke = */ 0.f,
	/* .w = */ 5,
	/* .h = */ 6,
	/* .type = */ 0
};
CLOTH cloth_nawa0 = {
	/* .gravity = */ 0.569999993f,
	/* .Kd = */ 0.879999995f,
	/* .Ke = */ 0.f,
	/* .w = */ 3,
	/* .h = */ 7,
	/* .type = */ 3
};
CLOTH cloth_nawa1 = {
	/* .gravity = */ 0.569999993f,
	/* .Kd = */ 0.879999995f,
	/* .Ke = */ 0.f,
	/* .w = */ 3,
	/* .h = */ 5,
	/* .type = */ 3
};
CLOTH cloth_furisode = {
	/* .gravity = */ 0.939999998f,
	/* .Kd = */ 0.893000007f,
	/* .Ke = */ 0.f,
	/* .w = */ 5,
	/* .h = */ 4,
	/* .type = */ 1
};
COLLISION_DAT m000_collision[0] = {
};
sceVu0FVECTOR m006_rist_vtx0[0] = {
};
sceVu0FVECTOR m006_rist_vtx1[0] = {
};
CLOTH_DAT m006_cloth[0] = {
};
COLLISION_DAT m006_collision[0] = {
};
sceVu0FVECTOR m015_rist_vtx0[0] = {
};
sceVu0FVECTOR m015_rist_vtx1[0] = {
};
CLOTH_DAT m015_cloth[0] = {
};
COLLISION_DAT m015_collision[0] = {
};
sceVu0FVECTOR m016_rist_vtx0[0] = {
};
sceVu0FVECTOR m016_rist_vtx1[0] = {
};
CLOTH_DAT m016_cloth[0] = {
};
sceVu0FVECTOR m017_rist_vtx0[0] = {
};
sceVu0FVECTOR m017_rist_vtx1[0] = {
};
CLOTH_DAT m017_cloth[0] = {
};
CLOTH_DAT m019_cloth[0] = {
};
sceVu0FVECTOR m020_rist_vtx0[0] = {
};
sceVu0FVECTOR m020_rist_vtx1[0] = {
};
CLOTH_DAT m020_cloth[0] = {
};
sceVu0FVECTOR m023_rist_vtx0[0] = {
};
CLOTH_DAT m023_cloth[0] = {
};
sceVu0FVECTOR m024_rist_vtx0[0] = {
};
sceVu0FVECTOR m024_rist_vtx1[0] = {
};
sceVu0FVECTOR m024_rist_vtx2[0] = {
};
sceVu0FVECTOR m024_rist_vtx3[0] = {
};
CLOTH_DAT m024_cloth[0] = {
};
sceVu0FVECTOR m026_rist_vtx0[0] = {
};
sceVu0FVECTOR m026_rist_vtx1[0] = {
};
CLOTH_DAT m026_cloth[0] = {
};
sceVu0FVECTOR m029_rist_vtx0[0] = {
};
sceVu0FVECTOR m029_rist_vtx1[0] = {
};
CLOTH_DAT m029_cloth[0] = {
};
sceVu0FVECTOR m032_rist_vtx0[0] = {
};
sceVu0FVECTOR m032_rist_vtx1[0] = {
};
CLOTH_DAT m032_cloth[0] = {
};
COLLISION_DAT m032_collision[0] = {
};
sceVu0FVECTOR m033_rist_vtx0[0] = {
};
sceVu0FVECTOR m033_rist_vtx1[0] = {
};
CLOTH_DAT m033_cloth[0] = {
};
sceVu0FVECTOR m034_rist_vtx0[0] = {
};
sceVu0FVECTOR m034_rist_vtx1[0] = {
};
CLOTH_DAT m034_cloth[0] = {
};
CLOTH_DAT m035_cloth[0] = {
};
sceVu0FVECTOR m036_rist_vtx0[0] = {
};
CLOTH_DAT m036_cloth[0] = {
};
sceVu0FVECTOR m037_rist_vtx0[0] = {
};
sceVu0FVECTOR m037_rist_vtx1[0] = {
};
CLOTH_DAT m037_cloth[0] = {
};
COLLISION_DAT m037_collision[0] = {
};
CLOTH_DAT m038_cloth[0] = {
};
sceVu0FVECTOR m040_rist_vtx0[0] = {
};
sceVu0FVECTOR m040_rist_vtx1[0] = {
};
CLOTH_DAT m040_cloth[0] = {
};
CLOTH_DAT m051_cloth[0] = {
};
CLOTH_DAT m058_cloth[0] = {
};
CLOTH_DAT m059_cloth[0] = {
};
