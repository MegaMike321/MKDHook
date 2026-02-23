#pragma once
#include "..\toc.h"

#define PORTAL_FILES 4

extern struct mk_file_entry portal2_entry_table[PORTAL_FILES];
extern struct mk_toc_entry portal2_file_table[PORTAL_FILES + 1];

void init_portal_toc();