#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "金灵道");
	set ("long", @LONG
一条通往金灵塔必需要经过的道路，金灵塔那里传来的金之气息
已经愈来愈浓厚，若非有一番修为的人来到此，也许会抵受不住
那金气的猛烈侵袭。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor63",
	"west"	: __DIR__"manor59",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
