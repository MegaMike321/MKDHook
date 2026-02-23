#pragma once
#include "..\toc.h"

#define COURTYARD_FILES 5

extern struct mk_file_entry courtyard2_entry_table[COURTYARD_FILES];
extern struct mk_toc_entry courtyard2_file_table[COURTYARD_FILES + 1];

void init_courtyard_toc();