#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "走廊");
	set ("long", @LONG
舍室外的走廊，南北各通往一间舍室，南边的是静灵舍，北边的
是转精舍，再往西边可以通往另一段走廊，走廊两旁的景物朴实简单
却又不失高雅。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor11",
	"south"	: __DIR__"manor14",
	"east"	: __DIR__"manor08",
	"west"	: __DIR__"manor10",
	]));

	set("light_up", 1);

	setup();
}
