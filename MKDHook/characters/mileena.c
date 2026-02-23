#include "mileena.h"

struct mk_file_entry mileena2_entry_table[MILEENA_FILES] = {
	{"mileena2.ssf" ,0, 4},

	{"mileena.sec",0, 1},
	{"mileena_ap.sec",0, 1},
	{"mileena.mko",0, 3},
	{"sh_mileena.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"mileena_fx.mko",0,3},
	{"ying_yeung.mko",0, 3},
	{"style_ying_yeung.sec",0,1},
	{"mian.mko",0, 3},
	{"style_mian.sec",0,1},
	{"sai.mko",0, 3},
	{"style_sai.sec",0,1},
	{"mileena_anims.sec",0, 2},
	{"fat_anims_mileena.sec",0,2},
	{"fat_anims_weaponkicks.sec",0,2},
	{"ying_yeung_anims.sec",0, 2},
	{"mian_anims.sec",0, 2},
	{"sai_anims.sec",0,2},
	{"pz_mileena_anims.sec",0,2},
};

// I:\ps2dvd\art\mileena2.ssf
struct mk_toc_entry mileena2_file_table[MILEENA_FILES + 1] = {
		{&mileena2_entry_table[0]	,0,0 },

		{&mileena2_entry_table[1]	,0,	   534016 },	// mileena.sec
		{&mileena2_entry_table[2]	,0,    534016 },	// mileena_ap.sec
		{&mileena2_entry_table[3]	,0,    58808  },	// mileena.mko
		{&mileena2_entry_table[4]	,0,    360320  },	// sh_mileena.sec
		{&mileena2_entry_table[5]	,0,    10164  },	// fight_fx.mko
		{&mileena2_entry_table[6]	,0,    21368  },	// blood_fx.mko
		{&mileena2_entry_table[7]	,0,    4188   },	// mileena_fx.mko
		{&mileena2_entry_table[8] 	,0,	   13892  },	// ying_yeung.mko
		{&mileena2_entry_table[9]	,0,    10112  },	// style_ying_yeung.sec
		{&mileena2_entry_table[10]	,0,	   16044  },	// mian.mko
		{&mileena2_entry_table[11]	,0,    10112   },	// style_mian.sec
		{&mileena2_entry_table[12]	,0,	   14284  },	// sai.mko
		{&mileena2_entry_table[13]	,0,	   6016   },	// style_sai.sec
		{&mileena2_entry_table[14]	,0,	   105472 },	// mileena_anims.sec
		{&mileena2_entry_table[15]	,0,	   104192  },	// fat_anims_mileena.sec
		{&mileena2_entry_table[16]	,0,	   103936 },	// fat_anims_weaponkicks.sec
		{&mileena2_entry_table[17]	,0,	   189312 },	// ying_yeung_anims.sec
		{&mileena2_entry_table[18]	,0,	   173696 },	// mian_anims.sec
		{&mileena2_entry_table[19]	,0,	   232960 },	// sai_anims.sec
		{&mileena2_entry_table[20]	,0,	   63104  },	// pz_mileena_anims.sec

		{0,0,0}
};

void init_mileena_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < MILEENA_FILES; i++)
	{
		mileena2_entry_table[i].belong = &mileena2_file_table[0];
	}


	for (int i = 1; i < MILEENA_FILES; i++)
	{
		mileena2_file_table[i].previousSize = baseSize;
		baseSize += (mileena2_file_table[i].size + 2048 - 1) & -2048;
	}
}