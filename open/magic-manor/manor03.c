#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "灵阁走廊");
	set ("long", @LONG
经过穿堂到达灵阁走廊，这里是到达水灵塔必经之路，北边的方
向是通往右灵水阁，经过灵阁走廊可以抵达各个灵阁，走出灵阁可以
到达一个走道，灵阁的走廊传来的尽是灵阁中充斥的灵气，令你想跓
足在这里享受那灵气浸萦的感觉。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor19",
	"east"	: __DIR__"manor04",
	"west"	: __DIR__"manor02",
	]));

	set("light_up", 1);

	setup();
}
