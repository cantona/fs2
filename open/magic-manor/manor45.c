#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "走廊");
	set ("long", @LONG
走进这里，走廊上有三个门可以通往三间不同的厢房，走廊上布
置简单并没有什么太起眼的摆设，整齐、清洁是眼前唯一的写照。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor46",
	"south"	: __DIR__"manor48",
	"east"	: __DIR__"manor66",
	"west"	: __DIR__"manor47",
	]));

	set("light_up", 1);

	setup();
}
