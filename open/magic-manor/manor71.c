#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "山庄走道");
	set ("long", @LONG
再往前去就是山庄的内部了，山庄的走道两旁仍是布满了奇异的
藤蔓，开的花散发着奇异幽香，夹道的轻轻微风吹来，使整个走道上
布满着淡淡幽香，令人精神为之一震。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor72",
	"south"	: __DIR__"manor70",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
