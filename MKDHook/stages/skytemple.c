#include "skytemple.h"

struct mk_file_entry skytemple2_entry_table[SKYTEMPLE_FILES] = {
	{"skytemple2.ssf"	,0, 4},

	{"skytemple.sec"	,0, 1},
	{"skytemple.mko"	,0, 3},
	{"skytemple_fx.mko"	,0, 3},
	{"warhammer.mko"	,0, 3},
	{"style_war_hammer.sec"	,0, 1},
	{"skytemple_anims.sec"	,0, 2},
	{"warhammer_anims.sec"	,0, 2},
};

struct mk_toc_entry skytemple2_file_table[SKYTEMPLE_FILES + 1] = {
		{&skytemple2_entry_table[0]	,0,0 },

		{&skytemple2_entry_table[1]	,0,3074176},
		{&skytemple2_entry_table[2]	,0,66984}, //66984
		{&skytemple2_entry_table[3]	,0,7588}, //7588
		{&skytemple2_entry_table[4]	,0,5788}, //5788
		{&skytemple2_entry_table[5]	,0,10112}, //10112
		{&skytemple2_entry_table[6]	,0,33408}, //33408
		{&skytemple2_entry_table[7]	,0,145536}, //145536

		{0,0,0}
};



void init_skytemple_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < SKYTEMPLE_FILES; i++)
	{
		skytemple2_entry_table[i].belong = &skytemple2_file_table[0];
	}


	for (int i = 1; i < SKYTEMPLE_FILES; i++)
	{
		skytemple2_file_table[i].previousSize = baseSize;
		baseSize += (skytemple2_file_table[i].size + 2048 - 1) & -2048;
	}


}