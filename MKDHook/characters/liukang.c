#include "liukang.h"


struct scan_action scan_lk_2 = {
	16976,
	0x3000019,
	16,
	MOVE_FORWARD,
	MOVE_FORWARD,
	-1,
	0,
	0
};


struct scan_action_fatality scan_lk_3 = {
	16953,
	0x3000019,
	24,
	MOVE_DOWN,
	MOVE_FORWARD,

	// fatality part
	0x3FFFFFFE,
	0x1000032,
	0x202CE0,
	MOVE_FORWARD,
	MOVE_FORWARD,
	MOVE_UP,
	MOVE_UP
	- 1
};


struct scan_action scan_lk_4 = {
	12801,
	0x3000019,
	15,
	MOVE_FORWARD,
	MOVE_FORWARD,
	-1,
	0,
	0
};



struct mk_file_entry liukang2_alt_entry_table[LIUKANG_FILES] = {
	{"liukang2_alt.ssf" ,0, 4},

	{"liukang_alt.sec",0, 1},
	{"liukang_alt_ap.sec",0, 1},
	{"liukang.mko",0, 3},
	{"sh_liukang.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"luikang_fx.mko",0,3},
	{"jun_fan.mko",0, 3},
	{"style_jun_fan.sec",0,1},
	{"pao_chui.mko",0, 3},
	{"style_pao_chui.sec",0,1},
	{"nunchaku.mko",0, 3},
	{"style_nunchaku.sec",0,1},
	{"liukang_alt_anims.sec",0, 2},
	{"fat_anims_shujinko_1.sec",0,2},
	{"fat_anims_liukang_headrip.sec",0,2},
	{"jun_fan_anims.sec",0, 2},
	{"pao_chui_anims.sec",0, 2},
	{"nunchaku_anims.sec",0,2},
	{"pz_noob_anims.sec",0,2},
};

// I:\ps2dvd\art\liukang2_alt.ssf
struct mk_toc_entry liukang2_alt_file_table[LIUKANG_FILES + 1] = {
		{&liukang2_alt_entry_table[0]    ,0,0 },

		{&liukang2_alt_entry_table[1]	,0,	   435840 },	// liukang_alt.sec
		{&liukang2_alt_entry_table[2]	,0,    435840 },	// liukang_alt_ap.sec
		{&liukang2_alt_entry_table[3]	,0,    83116  },	// liukang.mko
		{&liukang2_alt_entry_table[4]	,0,    343552 },	// sh_liukang.sec
		{&liukang2_alt_entry_table[5]	,0,    10164  },	// fight_fx.mko
		{&liukang2_alt_entry_table[6]	,0,    21368  },	// blood_fx.mko
		{&liukang2_alt_entry_table[7]	,0,    12344  },	// luikang_fx.mko
		{&liukang2_alt_entry_table[8] 	,0,	   15424  },	// jun_fan.mko
		{&liukang2_alt_entry_table[9]	,0,    10112  },	// style_jun_fan.sec
		{&liukang2_alt_entry_table[10]	,0,	   16692  },	// pao_chui.mko
		{&liukang2_alt_entry_table[11]	,0,    10112  },	// style_pao_chui.sec
		{&liukang2_alt_entry_table[12]	,0,	   15372  },	// nunchaku.mko
		{&liukang2_alt_entry_table[13]	,0,	   10112  },	// style_nunchaku.sec
		{&liukang2_alt_entry_table[14]	,0,	   103552 },	// liukang_alt_anims.sec
		{&liukang2_alt_entry_table[15]	,0,	   70016  },	// fat_anims_shujinko_1.sec
		{&liukang2_alt_entry_table[16]	,0,	   64384  },	// fat_anims_liukang_headrip.sec
		{&liukang2_alt_entry_table[17]	,0,	   174976 },	// jun_fan_anims.sec
		{&liukang2_alt_entry_table[18]	,0,	   145536 },	// pao_chui_anims.sec
		{&liukang2_alt_entry_table[19]	,0,	   222208 },	// nunchaku_anims.sec
		{&liukang2_alt_entry_table[20]	,0,	   53120  },	// pz_noob_anims.sec

		{0,0,0}
};

struct mk_file_entry liukang2_entry_table[LIUKANG_FILES] = {
	{"liukang2.ssf" ,0, 4},

	{"liukang.sec",0, 1},
	{"liukang_ap.sec",0, 1},
	{"liukang.mko",0, 3},
	{"sh_liukang.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"luikang_fx.mko",0,3},
	{"jun_fan.mko",0, 3},
	{"style_jun_fan.sec",0,1},
	{"pao_chui.mko",0, 3},
	{"style_pao_chui.sec",0,1},
	{"nunchaku.mko",0, 3},
	{"style_nunchaku.sec",0,1},
	{"liukang_anims.sec",0, 2},
	{"fat_anims_shujinko_1.sec",0,2},
	{"fat_anims_liukang_headrip.sec",0,2},
	{"jun_fan_anims.sec",0, 2},
	{"pao_chui_anims.sec",0, 2},
	{"nunchaku_anims.sec",0,2},
	{"pz_noob_anims.sec",0,2},
};

// I:\ps2dvd\art\liukang2.ssf
struct mk_toc_entry liukang2_file_table[LIUKANG_FILES + 1] = {
		{&liukang2_entry_table[0]    ,0,0 },

		{&liukang2_entry_table[1]	,0,	   342400 },	// liukang.sec
		{&liukang2_entry_table[2]	,0,    342400 },	// liukang_ap.sec
		{&liukang2_entry_table[3]	,0,    83116  },	// liukang.mko
		{&liukang2_entry_table[4]	,0,    343552 },	// sh_liukang.sec
		{&liukang2_entry_table[5]	,0,    10164  },	// fight_fx.mko
		{&liukang2_entry_table[6]	,0,    21368  },	// blood_fx.mko
		{&liukang2_entry_table[7]	,0,    12344  },	// luikang_fx.mko
		{&liukang2_entry_table[8] 	,0,	   15424  },	// jun_fan.mko
		{&liukang2_entry_table[9]	,0,    10112  },	// style_jun_fan.sec
		{&liukang2_entry_table[10]	,0,	   16692  },	// pao_chui.mko
		{&liukang2_entry_table[11]	,0,    10112  },	// style_pao_chui.sec
		{&liukang2_entry_table[12]	,0,	   15372  },	// nunchaku.mko
		{&liukang2_entry_table[13]	,0,	   10112  },	// style_nunchaku.sec
		{&liukang2_entry_table[14]	,0,	   98560  },	// liukang_alt_anims.sec
		{&liukang2_entry_table[15]	,0,	   70016  },	// fat_anims_shujinko_1.sec
		{&liukang2_entry_table[16]	,0,	   64384  },	// fat_anims_liukang_headrip.sec
		{&liukang2_entry_table[17]	,0,	   174976 },	// jun_fan_anims.sec
		{&liukang2_entry_table[18]	,0,	   145536 },	// pao_chui_anims.sec
		{&liukang2_entry_table[19]	,0,	   222208 },	// nunchaku_anims.sec
		{&liukang2_entry_table[20]	,0,	   53120  },	// pz_noob_anims.sec

		{0,0,0}
};

struct mk_file_entry liukang3_alt_entry_table[LIUKANG_FILES] = {
	{"liukang3_alt.ssf" ,0, 4},

	{"liukang_alt.sec",0, 1},
	{"liukang_alt_ap.sec",0, 1},
	{"liukang.mko",0, 3},
	{"sh_liukang.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"luikang_fx.mko",0,3},
	{"jun_fan.mko",0, 3},
	{"style_jun_fan.sec",0,1},
	{"pao_chui.mko",0, 3},
	{"style_pao_chui.sec",0,1},
	{"nunchaku.mko",0, 3},
	{"style_nunchaku.sec",0,1},
	{"liukang_alt_anims.sec",0, 2},
	{"fat_anims_shujinko_1.sec",0,2},
	{"fat_anims_liukang_headrip.sec",0,2},
	{"jun_fan_anims.sec",0, 2},
	{"pao_chui_anims.sec",0, 2},
	{"nunchaku_anims.sec",0,2},
	{"pz_noob_anims.sec",0,2},
};

// I:\ps2dvd\art\liukang3_alt.ssf
struct mk_toc_entry liukang3_alt_file_table[LIUKANG_FILES + 1] = {
		{&liukang3_alt_entry_table[0]    ,0,0 },

		{&liukang3_alt_entry_table[1]	,0,	   435840 },	// liukang_alt.sec
		{&liukang3_alt_entry_table[2]	,0,    435840 },	// liukang_alt_ap.sec
		{&liukang3_alt_entry_table[3]	,0,    83116  },	// liukang.mko
		{&liukang3_alt_entry_table[4]	,0,    343552 },	// sh_liukang.sec
		{&liukang3_alt_entry_table[5]	,0,    10164  },	// fight_fx.mko
		{&liukang3_alt_entry_table[6]	,0,    21368  },	// blood_fx.mko
		{&liukang3_alt_entry_table[7]	,0,    12344  },	// luikang_fx.mko
		{&liukang3_alt_entry_table[8] 	,0,	   15424  },	// jun_fan.mko
		{&liukang3_alt_entry_table[9]	,0,    10112  },	// style_jun_fan.sec
		{&liukang3_alt_entry_table[10]	,0,	   16692  },	// pao_chui.mko
		{&liukang3_alt_entry_table[11]	,0,    10112  },	// style_pao_chui.sec
		{&liukang3_alt_entry_table[12]	,0,	   15372  },	// nunchaku.mko
		{&liukang3_alt_entry_table[13]	,0,	   10112  },	// style_nunchaku.sec
		{&liukang3_alt_entry_table[14]	,0,	   103552 },	// liukang_alt_anims.sec
		{&liukang3_alt_entry_table[15]	,0,	   70016  },	// fat_anims_shujinko_1.sec
		{&liukang3_alt_entry_table[16]	,0,	   64384  },	// fat_anims_liukang_headrip.sec
		{&liukang3_alt_entry_table[17]	,0,	   174976 },	// jun_fan_anims.sec
		{&liukang3_alt_entry_table[18]	,0,	   145536 },	// pao_chui_anims.sec
		{&liukang3_alt_entry_table[19]	,0,	   222208 },	// nunchaku_anims.sec
		{&liukang3_alt_entry_table[20]	,0,	   53120  },	// pz_noob_anims.sec

		{0,0,0}
};

struct mk_file_entry liukang3_entry_table[LIUKANG_FILES] = {
	{"liukang3.ssf" ,0, 4},

	{"liukang.sec",0, 1},
	{"liukang_ap.sec",0, 1},
	{"liukang.mko",0, 3},
	{"sh_liukang.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"luikang_fx.mko",0,3},
	{"jun_fan.mko",0, 3},
	{"style_jun_fan.sec",0,1},
	{"pao_chui.mko",0, 3},
	{"style_pao_chui.sec",0,1},
	{"nunchaku.mko",0, 3},
	{"style_nunchaku.sec",0,1},
	{"liukang_anims.sec",0, 2},
	{"fat_anims_shujinko_1.sec",0,2},
	{"fat_anims_liukang_headrip.sec",0,2},
	{"jun_fan_anims.sec",0, 2},
	{"pao_chui_anims.sec",0, 2},
	{"nunchaku_anims.sec",0,2},
	{"pz_noob_anims.sec",0,2},
};

// I:\ps2dvd\art\liukang3.ssf
struct mk_toc_entry liukang3_file_table[LIUKANG_FILES + 1] = {
		{&liukang3_entry_table[0]    ,0,0 },

		{&liukang3_entry_table[1]	,0,	   342400 },	// liukang.sec
		{&liukang3_entry_table[2]	,0,    342400 },	// liukang_ap.sec
		{&liukang3_entry_table[3]	,0,    83116  },	// liukang.mko
		{&liukang3_entry_table[4]	,0,    343552 },	// sh_liukang.sec
		{&liukang3_entry_table[5]	,0,    10164  },	// fight_fx.mko
		{&liukang3_entry_table[6]	,0,    21368  },	// blood_fx.mko
		{&liukang3_entry_table[7]	,0,    12344  },	// luikang_fx.mko
		{&liukang3_entry_table[8] 	,0,	   15424  },	// jun_fan.mko
		{&liukang3_entry_table[9]	,0,    10112  },	// style_jun_fan.sec
		{&liukang3_entry_table[10]	,0,	   16692  },	// pao_chui.mko
		{&liukang3_entry_table[11]	,0,    10112  },	// style_pao_chui.sec
		{&liukang3_entry_table[12]	,0,	   15372  },	// nunchaku.mko
		{&liukang3_entry_table[13]	,0,	   10112  },	// style_nunchaku.sec
		{&liukang3_entry_table[14]	,0,	   98560  },	// liukang_alt_anims.sec
		{&liukang3_entry_table[15]	,0,	   70016  },	// fat_anims_shujinko_1.sec
		{&liukang3_entry_table[16]	,0,	   64384  },	// fat_anims_liukang_headrip.sec
		{&liukang3_entry_table[17]	,0,	   174976 },	// jun_fan_anims.sec
		{&liukang3_entry_table[18]	,0,	   145536 },	// pao_chui_anims.sec
		{&liukang3_entry_table[19]	,0,	   222208 },	// nunchaku_anims.sec
		{&liukang3_entry_table[20]	,0,	   53120  },	// pz_noob_anims.sec

		{0,0,0}
};

void init_liukang_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < LIUKANG_FILES; i++)
	{
		liukang2_alt_entry_table[i].belong = &liukang2_alt_file_table[0];
	}


	for (int i = 1; i < LIUKANG_FILES; i++)
	{
		liukang2_alt_file_table[i].previousSize = baseSize;
		baseSize += (liukang2_alt_file_table[i].size + 2048 - 1) & -2048;
	}

	baseSize = 2048;
	for (int i = 0; i < LIUKANG_FILES; i++)
	{
		liukang2_entry_table[i].belong = &liukang2_file_table[0];
	}


	for (int i = 1; i < LIUKANG_FILES; i++)
	{
		liukang2_file_table[i].previousSize = baseSize;
		baseSize += (liukang2_file_table[i].size + 2048 - 1) & -2048;
	}

	baseSize = 2048;
	for (int i = 0; i < LIUKANG_FILES; i++)
	{
		liukang3_alt_entry_table[i].belong = &liukang3_alt_file_table[0];
	}


	for (int i = 1; i < LIUKANG_FILES; i++)
	{
		liukang3_alt_file_table[i].previousSize = baseSize;
		baseSize += (liukang3_alt_file_table[i].size + 2048 - 1) & -2048;
	}

	baseSize = 2048;
	for (int i = 0; i < LIUKANG_FILES; i++)
	{
		liukang3_entry_table[i].belong = &liukang3_file_table[0];
	}


	for (int i = 1; i < LIUKANG_FILES; i++)
	{
		liukang3_file_table[i].previousSize = baseSize;
		baseSize += (liukang3_file_table[i].size + 2048 - 1) & -2048;
	}
}
