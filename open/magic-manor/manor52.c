#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "灵花园");
	set ("long", @LONG
灵花园中的一草一木都是世间难得一见的珍贵品种，生长在灵花
园中长年的吸收灵气，每一花草树木都长的青葱翠绿、艳美无比，是
世间难得一见的花园。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor51",
	"south"	: __DIR__"manor68",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
