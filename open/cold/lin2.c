// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","神殿内厅");
	set("long", @LONG
这里是神殿的内厅，在里头，一片空荡荡的，没有任何东西
，让人感到怀疑这里是否有什么阴谋，或是有什么特殊的秘密 ?
只见这边有个开着的小窗，不时的吹着冷冷的北风，让人不寒而
栗。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"south":COLD_ROOM"lin1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
