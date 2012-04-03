#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "灵舍走廊");
	set ("long", @LONG
经过穿堂到达灵舍走廊，这里是到达火灵塔必经之路，北边的方
向是通往左灵火舍，经过灵舍走廊可以抵达各个舍室，走出灵舍可以
到达一个走道，灵舍的走廊传来的尽是灵舍中充斥的灵气，令你想跓
足在这里享受那灵气浸萦的感觉。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor20",
	"east"	: __DIR__"manor02",
	"west"	: __DIR__"manor08",
	]));

	set("light_up", 1);

	setup();
}
