#pragma once
#include "..\toc.h"
#include "..\moves.h"

extern struct scan_action scan_lk_2;
extern struct scan_action_fatality scan_lk_3;
extern struct scan_action scan_lk_4;

#define LIUKANG_FILES 21

extern struct mk_file_entry liukang2_alt_entry_table[LIUKANG_FILES];
extern struct mk_toc_entry liukang2_alt_file_table[LIUKANG_FILES + 1];

extern struct mk_file_entry liukang2_entry_table[LIUKANG_FILES];
extern struct mk_toc_entry liukang2_file_table[LIUKANG_FILES + 1];

extern struct mk_file_entry liukang3_alt_entry_table[LIUKANG_FILES];
extern struct mk_toc_entry liukang3_alt_file_table[LIUKANG_FILES + 1];

extern struct mk_file_entry liukang3_entry_table[LIUKANG_FILES];
extern struct mk_toc_entry liukang3_file_table[LIUKANG_FILES + 1];


void init_liukang_toc();