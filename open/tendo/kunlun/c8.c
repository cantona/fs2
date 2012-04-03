//七星阵
// by airke

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "庭园");
	set("long", @LONG
一间装设典雅的庭院，附近的建材都是以昆
仑山百年老木做成，典雅中带着几分朴素。这庭
园中种满了各式各样的奇花异草，四周不时还飘
散着淡淡的花香。

LONG
	);
	
	set("exits", ([ /* sizeof() == 3 */
	"north" : __DIR__"g1",
        "enter" : __DIR__"d1",
]));
	set("outdoors", "1");

	setup();
}


