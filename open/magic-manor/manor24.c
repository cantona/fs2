#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIC"水灵塔"NOR);
	set ("long", @LONG
水灵塔的周围遍满了冰气的包围，极冷的水气化为万般的冰气并
不时的向你这边袭来，若非功力深厚的人，将承受不住这样大的冰气
侵袭，此塔中布满了冰气，若不能寻找到一个克制水的宝物，将有可
能在里面被冰气活活的给冻死。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor21",
	"enter"	: __DIR__"water/water01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
