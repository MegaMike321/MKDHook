#include "konquest_npc.h"
#include "..\mkdeception.h"
#include "..\ps2mem.h"
#include "..\mips.h"

struct mk_file_entry kon_npc_entry_table[KON_NPC_FILES] = {
		{"kon_unique_npcs.ssf"	,0, 4},
		{"kon_ashrah.sec", 0, 1 },
		{"kon_baraka.sec", 0, 1 },
		{"kon_blaze.sec", 0, 1 },
		{"kon_boraicho.sec", 0, 1 },
		{"kon_cage.sec", 0, 1 },
		{"kon_drahmin.sec", 0, 1 },
		{"kon_ermac.sec", 0, 1 },
		{"kon_frost.sec", 0, 1 },
		{"kon_fujin.sec", 0, 1 },
		{"kon_hotaru.sec", 0, 1 },
		{"kon_hsu.sec", 0, 1 },
		{"kon_jade.sec", 0, 1 },
		{"kon_jarek.sec", 0, 1 },
		{"kon_jax.sec", 0, 1 },
		{"kon_kai.sec", 0, 1 },
		{"kon_kang.sec", 0, 1 },
		{"kon_kano.sec", 0, 1 },
		{"kon_kenshi.sec", 0, 1 },
		{"kon_kira.sec", 0, 1 },
		{"kon_kitana.sec", 0, 1 },
		{"kon_kobra.sec", 0, 1 },
		{"kon_kunglao.sec", 0, 1 },
		{"kon_limei.sec", 0, 1 },
		{"kon_mileena.sec", 0, 1 },
		{"kon_mokap.sec", 0, 1 },
		{"kon_nightwolf.sec", 0, 1 },
		{"kon_noob.sec", 0, 1 },
		{"kon_rain.sec", 0, 1 },
		{"kon_reiko.sec", 0, 1 },
		{"kon_quanchi.sec", 0, 1 },
		{"kon_reptile.sec", 0, 1 },
		{"kon_sareena.sec", 0, 1 },
		{"kon_scorpion.sec", 0, 1 },
		{"kon_shangmk5.sec", 0, 1 },
		{"kon_sindel.sec", 0, 1 },
		{"kon_smoke.sec", 0, 1 },
		{"kon_sonya.sec", 0, 1 },
		{"kon_stryker.sec", 0, 1 },
		{"kon_subzero.sec", 0, 1 },
		{"kon_tanya.sec", 0, 1 },
		{"kon_cyrax.sec", 0, 1 },
		{"kon_sektor.sec", 0, 1 },
		{"kon_dairou.sec", 0, 1 },
		{"kon_raidenmk5.sec", 0, 1 },
		{"kon_raidenmk6.sec", 0, 1 },
		{"kon_darrius.sec", 0, 1 },
		{"kon_kabal.sec", 0, 1 },
		{"kon_shaok.sec", 0, 1 },
		{"kon_havik.sec", 0, 1 },
		{"kon_havika.sec", 0, 1 },
		{"kon_goro.sec", 0, 1 },
		{"kon_sheeva.sec", 0, 1 },
		{"kon_kintaro.sec", 0, 1 },
		{"kon_motaro.sec", 0, 1 },
		{"kon_kang_lvng.sec", 0, 1 },
		{"kon_kang_dead.sec", 0, 1 },
		{"kon_shinnok.sec", 0, 1 },
		{"kon_nitara.sec", 0, 1 },
		{"kon_mavado.sec", 0, 1 },
		{"kon_spec_forc.sec", 0, 1 },
		{"kon_meat.sec", 0, 1 },
		{"kon_tremor.sec", 0, 1 },
		{"kon_subzeroumk3.sec", 0, 1 },
		{"kon_ermacumk3.sec", 0, 1 },
		{"kon_cyber_subzero.sec", 0, 1 },
		{"kon_freak.sec", 0, 1 },
		{"kon_torch.sec", 0, 1 },
		{"kon_rainmk2.sec", 0, 1 },
		{"kon_noob_alt.sec", 0, 1 },
		{"kon_smoke_alt.sec", 0, 1 },
		{"kon_raidenmk5_dark.sec", 0, 1 },
		{"kon_hornbuckle.sec", 0, 1 },
		{"kon_hornbuckle_dead.sec", 0, 1 },
		{"kon_raidenmk6_light.sec", 0, 1 },
		{"kon_sektor_te.sec", 0, 1 },
		{"kon_ashrah_ap.sec", 0, 1 },
		{"kon_baraka_ap.sec", 0, 1 },
		{"kon_blaze_ap.sec", 0, 1 },
		{"kon_boraicho_ap.sec", 0, 1 },
		{"kon_cage_ap.sec", 0, 1 },
		{"kon_drahmin_ap.sec", 0, 1 },
		{"kon_ermac_ap.sec", 0, 1 },
		{"kon_frost_ap.sec", 0, 1 },
		{"kon_hotaru_ap.sec", 0, 1 },
		{"kon_jade_ap.sec", 0, 1 },
		{"kon_jax_ap.sec", 0, 1 },
		{"kon_kang_ap.sec", 0, 1 },
		{"kon_kenshi_ap.sec", 0, 1 },
		{"kon_kira_ap.sec", 0, 1 },
		{"kon_kitana_ap.sec", 0, 1 },
		{"kon_kobra_ap.sec", 0, 1 },
		{"kon_kunglao_ap.sec", 0, 1 },
		{"kon_limei_ap.sec", 0, 1 },
		{"kon_mileena_ap.sec", 0, 1 },
		{"kon_mokap_ap.sec", 0, 1 },
		{"kon_nightwolf_ap.sec", 0, 1 },
		{"kon_noob_ap.sec", 0, 1 },
		{"kon_reiko_ap.sec", 0, 1 },
		{"kon_quanchi_ap.sec", 0, 1 },
		{"kon_sareena_ap.sec", 0, 1 },
		{"kon_scorpion_ap.sec", 0, 1 },
		{"kon_shangmk5_ap.sec", 0, 1 },
		{"kon_sindel_ap.sec", 0, 1 },
		{"kon_smoke_ap.sec", 0, 1 },
		{"kon_sonya_ap.sec", 0, 1 },
		{"kon_subzero_ap.sec", 0, 1 },
		{"kon_tanya_ap.sec", 0, 1 },
		{"kon_cyrax_ap.sec", 0, 1 },
		{"kon_dairou_ap.sec", 0, 1 },
		{"kon_raidenmk5_ap.sec", 0, 1},
		{"kon_raidenmk6_ap.sec", 0, 1 },
		{"kon_darrius_ap.sec", 0, 1 },
		{"kon_kabal_ap.sec", 0, 1 },
		{"kon_shaok_ap.sec", 0, 1 },
		{"kon_havik_ap.sec", 0, 1 },
		{"kon_havika_ap.sec", 0, 1 },
		{"kon_goro_ap.sec", 0, 1 },
		{"kon_kang_lvng_ap.sec", 0, 1 },
		{"kon_kang_dead_ap.sec", 0, 1 },
		{"kon_shinnok_ap.sec", 0, 1 },
		{"kon_nitara_ap.sec", 0, 1 },
		{"kon_tremor_ap.sec", 0, 1 },
		{"kon_freak_ap.sec", 0, 1 },
		{"kon_rainmk2_ap.sec", 0, 1 },
		{"kon_noob_alt_ap.sec", 0, 1 },
		{"kon_smoke_alt_ap.sec", 0, 1 },
};

// I:\ps2dvd\art\kon_unique_npcs.ssf
struct mk_toc_entry kon_npc_file_table[KON_NPC_FILES + 1] = {
		{&kon_npc_entry_table[0], 0, 0},
		{&kon_npc_entry_table[1], 0,  104576   },       // kon_ashrah.sec
		{&kon_npc_entry_table[2], 0,  119296  },        // kon_baraka.sec
		{&kon_npc_entry_table[3], 0,  90496   },        // kon_blaze.sec
		{&kon_npc_entry_table[4], 0,  125312   },       // kon_boraicho.sec
		{&kon_npc_entry_table[5], 0,  108544  },        // kon_cage.sec
		{&kon_npc_entry_table[6], 0,  99968   },        // kon_drahmin.sec
		{&kon_npc_entry_table[7], 0,  94336    },       // kon_ermac.sec
		{&kon_npc_entry_table[8], 0,  97920    },       // kon_frost.sec
		{&kon_npc_entry_table[9], 0,  102656  },        // kon_fujin.sec
		{&kon_npc_entry_table[10], 0, 114560  },       // kon_hotaru.sec
		{&kon_npc_entry_table[11], 0, 106368   },      // kon_hsu.sec
		{&kon_npc_entry_table[12], 0, 108416  },       // kon_jade.sec
		{&kon_npc_entry_table[13], 0, 100096  },       // kon_jarek.sec
		{&kon_npc_entry_table[14], 0, 102656  },       // kon_jax.sec
		{&kon_npc_entry_table[15], 0, 99712   },       // kon_kai.sec
		{&kon_npc_entry_table[16], 0, 104576   },      // kon_kang.sec
		{&kon_npc_entry_table[17], 0, 103424  },       // kon_kano.sec
		{&kon_npc_entry_table[18], 0, 100224  },       // kon_kenshi.sec
		{&kon_npc_entry_table[19], 0, 114176  },       // kon_kira.sec
		{&kon_npc_entry_table[20], 0, 94848   },       // kon_kitana.sec
		{&kon_npc_entry_table[21], 0, 107008   },      // kon_kobra.sec
		{&kon_npc_entry_table[22], 0, 108800  },       // kon_kunglao.sec
		{&kon_npc_entry_table[23], 0, 123264  },       // kon_limei.sec
		{&kon_npc_entry_table[24], 0, 98304    },      // kon_mileena.sec
		{&kon_npc_entry_table[25], 0, 102016  },       // kon_mokap.sec
		{&kon_npc_entry_table[26], 0, 107392  },       // kon_nightwolf.sec
		{&kon_npc_entry_table[27], 0, 89728    },      // kon_noob.sec
		{&kon_npc_entry_table[28], 0, 95232    },      // kon_rain.sec
		{&kon_npc_entry_table[29], 0, 106880   },      // kon_reiko.sec
		{&kon_npc_entry_table[30], 0, 99456   },       // kon_quanchi.sec
		{&kon_npc_entry_table[31], 0, 95616   },       // kon_reptile.sec
		{&kon_npc_entry_table[32], 0, 102784  },       // kon_sareena.sec
		{&kon_npc_entry_table[33], 0, 105472  },       // kon_scorpion.sec
		{&kon_npc_entry_table[34], 0, 110208  },       // kon_shangmk5.sec
		{&kon_npc_entry_table[35], 0, 103936  },       // kon_sindel.sec
		{&kon_npc_entry_table[36], 0, 156544   },      // kon_smoke.sec
		{&kon_npc_entry_table[37], 0, 105984  },       // kon_sonya.sec
		{&kon_npc_entry_table[38], 0, 105600   },      // kon_stryker.sec
		{&kon_npc_entry_table[39], 0, 102016  },       // kon_subzero.sec
		{&kon_npc_entry_table[40], 0, 114816  },       // kon_tanya.sec
		{&kon_npc_entry_table[41], 0, 128384  },       // kon_cyrax.sec
		{&kon_npc_entry_table[42], 0, 128384   },      // kon_sektor.sec
		{&kon_npc_entry_table[43], 0, 121728  },       // kon_dairou.sec
		{&kon_npc_entry_table[44], 0, 118272   },      // kon_raidenmk5.sec
		{&kon_npc_entry_table[45], 0, 122880  },       // kon_raidenmk6.sec
		{&kon_npc_entry_table[46], 0, 100864   },      // kon_darrius.sec
		{&kon_npc_entry_table[47], 0, 119424  },       // kon_kabal.sec
		{&kon_npc_entry_table[48], 0, 128256   },      // kon_shaok.sec
		{&kon_npc_entry_table[49], 0, 127488  },       // kon_havik.sec
		{&kon_npc_entry_table[50], 0, 97024   },       // kon_havika.sec
		{&kon_npc_entry_table[51], 0, 106752  },       // kon_goro.sec
		{&kon_npc_entry_table[52], 0, 107008  },       // kon_sheeva.sec
		{&kon_npc_entry_table[53], 0, 124672  },       // kon_kintaro.sec
		{&kon_npc_entry_table[54], 0, 117632   },      // kon_motaro.sec
		{&kon_npc_entry_table[55], 0, 104704   },      // kon_kang_lvng.sec
		{&kon_npc_entry_table[56], 0, 104704  },       // kon_kang_dead.sec
		{&kon_npc_entry_table[57], 0, 102528  },       // kon_shinnok.sec
		{&kon_npc_entry_table[58], 0, 116864   },      // kon_nitara.sec
		{&kon_npc_entry_table[59], 0, 114304  },       // kon_mavado.sec
		{&kon_npc_entry_table[60], 0, 112000  },       // kon_spec_forc.sec
		{&kon_npc_entry_table[61], 0, 94080    },      // kon_meat.sec
		{&kon_npc_entry_table[62], 0, 95232    },      // kon_tremor.sec
		{&kon_npc_entry_table[63], 0, 95232    },      // kon_subzeroumk3.sec
		{&kon_npc_entry_table[64], 0, 95232    },      // kon_ermacumk3.sec
		{&kon_npc_entry_table[65], 0, 128384   },      // kon_cyber_subzero.sec
		{&kon_npc_entry_table[66], 0, 116480   },      // kon_freak.sec
		{&kon_npc_entry_table[67], 0, 104704  },       // kon_torch.sec
		{&kon_npc_entry_table[68], 0, 95616   },       // kon_rainmk2.sec
		{&kon_npc_entry_table[69], 0, 89728   },       // kon_noob_alt.sec
		{&kon_npc_entry_table[70], 0, 93696   },       // kon_smoke_alt.sec
		{&kon_npc_entry_table[71], 0, 118272  },       // kon_raidenmk5_dark.sec
		{&kon_npc_entry_table[72], 0, 104704  },       // kon_hornbuckle.sec
		{&kon_npc_entry_table[73], 0, 104704  },       // kon_hornbuckle_dead.sec
		{&kon_npc_entry_table[74], 0, 122880  },       // kon_raidenmk6_light.sec
		{&kon_npc_entry_table[75], 0, 128384   },      // kon_sektor_te.sec
		{&kon_npc_entry_table[76], 0,  104576   },       // kon_ashrah_ap.sec
		{&kon_npc_entry_table[77], 0,  119296  },        // kon_baraka_ap.sec
		{&kon_npc_entry_table[78], 0,  90496   },        // kon_blaze_ap.sec
		{&kon_npc_entry_table[79], 0,  125312   },       // kon_boraicho_ap.sec
		{&kon_npc_entry_table[80], 0,  108544  },        // kon_cage_ap.sec
		{&kon_npc_entry_table[81], 0,  99968   },        // kon_drahmin_ap.sec
		{&kon_npc_entry_table[82], 0,  94336    },       // kon_ermac_ap.sec
		{&kon_npc_entry_table[83], 0,  97920    },       // kon_frost_ap.sec
		{&kon_npc_entry_table[84], 0, 114560  },       // kon_hotaru_ap.sec
		{&kon_npc_entry_table[85], 0, 108416  },       // kon_jade_ap.sec
		{&kon_npc_entry_table[86], 0, 102656  },       // kon_jax_ap.sec
		{&kon_npc_entry_table[87], 0, 104576   },      // kon_kang_ap.sec
		{&kon_npc_entry_table[88], 0, 100224  },       // kon_kenshi_ap.sec
		{&kon_npc_entry_table[89], 0, 114176  },       // kon_kira_ap.sec
		{&kon_npc_entry_table[90], 0, 94848   },       // kon_kitana_ap.sec
		{&kon_npc_entry_table[91], 0, 107008   },      // kon_kobra_ap.sec
		{&kon_npc_entry_table[92], 0, 108800  },       // kon_kunglao_ap.sec
		{&kon_npc_entry_table[93], 0, 123264  },       // kon_limei_ap.sec
		{&kon_npc_entry_table[94], 0, 98304    },      // kon_mileena_ap.sec
		{&kon_npc_entry_table[95], 0, 102016  },       // kon_mokap_ap.sec
		{&kon_npc_entry_table[96], 0, 107392  },       // kon_nightwolf_ap.sec
		{&kon_npc_entry_table[97], 0, 89728    },      // kon_noob_ap.sec
		{&kon_npc_entry_table[98], 0, 106880   },      // kon_reiko_ap.sec
		{&kon_npc_entry_table[99], 0, 99456   },       // kon_quanchi_ap.sec
		{&kon_npc_entry_table[100], 0, 102784  },       // kon_sareena_ap.sec
		{&kon_npc_entry_table[101], 0, 105472  },       // kon_scorpion_ap.sec
		{&kon_npc_entry_table[102], 0, 110208  },       // kon_shangmk5_ap.sec
		{&kon_npc_entry_table[103], 0, 103936  },       // kon_sindel_ap.sec
		{&kon_npc_entry_table[104], 0, 156544   },      // kon_smoke_ap.sec
		{&kon_npc_entry_table[105], 0, 105984  },       // kon_sonya_ap.sec
		{&kon_npc_entry_table[106], 0, 102016  },       // kon_subzero_ap.sec
		{&kon_npc_entry_table[107], 0, 114816  },       // kon_tanya_ap.sec
		{&kon_npc_entry_table[108], 0, 128384  },       // kon_cyrax_ap.sec
		{&kon_npc_entry_table[109], 0, 121728  },       // kon_dairou_ap.sec
		{&kon_npc_entry_table[110], 0, 118272 },       // kon_raidenmk5_dark.sec
		{&kon_npc_entry_table[111], 0, 122880 },       // kon_raidenmk6_ap.sec
		{&kon_npc_entry_table[112], 0, 100864 },      // kon_darrius_ap.sec
		{&kon_npc_entry_table[113], 0, 119424 },       // kon_kabal_ap.sec
		{&kon_npc_entry_table[114], 0, 128256 },      // kon_shaok_ap.sec
		{&kon_npc_entry_table[115], 0, 127488 },       // kon_havik_ap.sec
		{&kon_npc_entry_table[116], 0, 97024 },       // kon_havika_ap.sec
		{&kon_npc_entry_table[117], 0, 106752 },       // kon_goro_ap.sec
		{&kon_npc_entry_table[118], 0, 104704 },      // kon_kang_lvng_ap.sec
		{&kon_npc_entry_table[119], 0, 104704 },       // kon_kang_dead_ap.sec
		{&kon_npc_entry_table[120], 0, 102528 },       // kon_shinnok_ap.sec
		{&kon_npc_entry_table[121], 0, 116864 },      // kon_nitara_ap.sec
		{&kon_npc_entry_table[122], 0, 95232 },      // kon_tremor_ap.sec
		{&kon_npc_entry_table[123], 0, 116480 },      // kon_freak_ap.sec
		{&kon_npc_entry_table[124], 0, 95616 },       // kon_rainmk2_ap.sec
		{&kon_npc_entry_table[125], 0, 89728 },       // kon_noob_alt_ap.sec
		{&kon_npc_entry_table[126], 0, 93696 },       // kon_smoke_alt_ap.sec
		{0,0,0}
};

void init_kon_npc_toc()
{
	int baseSize = 2048;
	for (int i = 0; i < KON_NPC_FILES; i++)
	{
		kon_npc_entry_table[i].belong = &kon_npc_file_table[0];
	}


	for (int i = 1; i < KON_NPC_FILES; i++)
	{
		kon_npc_file_table[i].previousSize = baseSize;
		baseSize += (kon_npc_file_table[i].size + 2048 - 1) & -2048;
	}
}

void init_kon_npc_hook()
{
	init_kon_npc_toc();


	makeJal(0x3390B0, load_new_kon_npc);
	makeJal(0x3EC678, load_new_kon_npc);
	makeJal(0x3ECD90, load_new_kon_npc);
}


void load_new_kon_npc()
{
	load_ssf(&kon_npc_file_table[0]);
}
