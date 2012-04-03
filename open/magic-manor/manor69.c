#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "山庄走道");
	set ("long", @LONG
经过了练武广场，又来到一处山庄必经的走道，山庄的走道两旁
仍是布满了奇异的藤蔓，开的花散发着奇异幽香，夹道的轻轻微风吹
来，使整个走道上布满着淡淡幽香，令人精神为之一震。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor70",
	"south"	: __DIR__"manor33",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
