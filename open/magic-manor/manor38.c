#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "山庄走道");
	set ("long", @LONG
山庄走道旁种满了一种奇异的藤蔓，蔓延了道路的两侧，开的花
散发着奇异幽香，夹道的轻轻微风吹来，使整个走道上布满着淡淡幽
香，令人精神为之一震。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor37",
	"south"	: __DIR__"manor39",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
