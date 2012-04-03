#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "水灵道");
	set ("long", @LONG
一条通往水灵塔必需要经过的道路，水灵塔那里传来的水之气息
已经愈来愈浓厚，若非有一番修为的人来到此，也许会抵受不住
那水气的猛烈侵袭。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor24",
	"south"	: __DIR__"manor04",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
