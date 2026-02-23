#include "tanya.h"

struct mk_file_entry tanya2_entry_table[TANYA_FILES] = {
	{"tanya2.ssf" ,0, 4},

	{"tanya.sec",0, 1},
	{"tanya_ap.sec",0, 1},
	{"tanya.mko",0, 3},
	{"sh_tanya.sec",0, 1},
	{"fight_fx.mko",0,3},
	{"blood_fx.mko",0,3},
	{"tanya_fx.mko",0,3},
	{"zi_ran_men.mko",0, 3},
	{"style_zi_ran_men.sec",0,1},
	{"yue_chuan.mko",0, 3},
	{"style_yue_chuan.sec",0,1},
	{"tonfa.mko",0, 3},
	{"style_tonfa.sec",0,1},
	{"tanya_anims.sec",0, 2},
	{"fat_anims_thighrip.sec",0,2},
	{"fat_anims_ninja.sec",0,2},
	{"zi_ran_men_anims.sec",0, 2},
	{"yue_chuan_anims.sec",0, 2},
	{"tonfa_anims.sec",0,2},
	{"pz_mileena_anims.sec",0,2},
};

// I:\ps2dvd\art\tanya2.ssf
struct mk_toc_entry tanya2_file_table[TANYA_FILES + 1] = {
		{&tanya2_entry_table[0]	,0,0 },

		{&tanya2_entry_table[1] 	,0,	   534016 },	// tanya.sec
		{&tanya2_entry_table[2]	    ,0,    534016 },	// tanya_ap.sec
		{&tanya2_entry_table[3]   	,0,    69892  },	// tanya.mko
		{&tanya2_entry_table[4]	    ,0,    521600  },	// sh_tanya.sec
		{&tanya2_entry_table[5]	    ,0,    10164  },	// fight_fx.mko
		{&tanya2_entry_table[6]	    ,0,    21368  },	// blood_fx.mko
		{&tanya2_entry_table[7]	    ,0,    12272  },	// tanya_fx.mko
		{&tanya2_entry_table[8] 	,0,	   11580  },	// zi_ran_men.mko
		{&tanya2_entry_table[9]	    ,0,    10112  },	// style_zi_ran_men.sec
		{&tanya2_entry_table[10]	,0,	   12460  },	// yue_chuan.mko
		{&tanya2_entry_table[11]	,0,    10112   },	// style_yue_chuan.sec
		{&tanya2_entry_table[12]	,0,	   16292  },	// tonfa.mko
		{&tanya2_entry_table[13]	,0,	   10112  },	// style_tonfa.sec
		{&tanya2_entry_table[14]	,0,	   143360 },	// tonfa_anims.sec
		{&tanya2_entry_table[15]	,0,	   90792  },	// fat_anims_thighrip.sec
		{&tanya2_entry_table[16]	,0,	   93184  },	// fat_anims_ninja.sec
		{&tanya2_entry_table[17]	,0,	   114176 },	// zi_ran_men_anims.sec
		{&tanya2_entry_table[18]	,0,	   132608 },	// yue_chuan_anims.sec
		{&tanya2_entry_table[19]	,0,	   172288 },	// tonfa_anims.sec
		{&tanya2_entry_table[20]	,0,	   63104  },	// pz_mileena_anims.sec

		{0,0,0}
};

void init_tanya_toc()
{

	int baseSize = 2048;
	for (int i = 0; i < TANYA_FILES; i++)
	{
		tanya2_entry_table[i].belong = &tanya2_file_table[0];
	}


	for (int i = 1; i < TANYA_FILES; i++)
	{
		tanya2_file_table[i].previousSize = baseSize;
		baseSize += (tanya2_file_table[i].size + 2048 - 1) & -2048;
	}
}