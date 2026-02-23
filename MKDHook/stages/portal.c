#include "portal.h"

struct mk_file_entry portal2_entry_table[PORTAL_FILES] = {
	{"portal2.ssf"	,0, 4},

	{"portal.sec"	,0, 1},
	{"portal.mko"	,0, 3},
	{"portal_fx.mko"	,0, 3},
};

struct mk_toc_entry portal2_file_table[PORTAL_FILES + 1] = {
		{&portal2_entry_table[0]	,0,0 },

		{&portal2_entry_table[1]	,0,1507968},
		{&portal2_entry_table[2]	,0,13268},
		{&portal2_entry_table[3]	,0,3640},

		{0,0,0}
};



void init_portal_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < PORTAL_FILES; i++)
	{
		portal2_entry_table[i].belong = &portal2_file_table[0];
	}


	for (int i = 1; i < PORTAL_FILES; i++)
	{
		portal2_file_table[i].previousSize = baseSize;
		baseSize += (portal2_file_table[i].size + 2048 - 1) & -2048;
	}


}