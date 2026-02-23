#pragma once
#include "..\toc.h"

#define SKYTEMPLE_FILES 8

extern struct mk_file_entry skytemple2_entry_table[SKYTEMPLE_FILES];
extern struct mk_toc_entry skytemple2_file_table[SKYTEMPLE_FILES + 1];

void init_skytemple_toc();