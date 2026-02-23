#include "courtyard.h"

struct mk_file_entry courtyard2_entry_table[COURTYARD_FILES] = {
	{"courtyard2.ssf"	,0, 4},

	{"courtyard.sec"	,0, 1},
	{"courtyard.mko"	,0, 3},
	{"courtyard_fx.mko"	,0, 3},
	{"courtyard_anims.sec"	,0, 2},
};

struct mk_toc_entry courtyard2_file_table[COURTYARD_FILES + 1] = {
		{&courtyard2_entry_table[0]	,0,0 },

		{&courtyard2_entry_table[1]	,0,1811456},
		{&courtyard2_entry_table[2]	,0,26192},
		{&courtyard2_entry_table[3]	,0,1948},
		{&courtyard2_entry_table[4]	,0,39552},

		{0,0,0}
};



void init_courtyard_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < COURTYARD_FILES; i++)
	{
		courtyard2_entry_table[i].belong = &courtyard2_file_table[0];
	}


	for (int i = 1; i < COURTYARD_FILES; i++)
	{
		courtyard2_file_table[i].previousSize = baseSize;
		baseSize += (courtyard2_file_table[i].size + 2048 - 1) & -2048;
	}


}