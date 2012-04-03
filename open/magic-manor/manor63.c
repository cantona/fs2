#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIY"金灵塔"NOR);
	set ("long", @LONG
金灵塔的周围遍满了奇异的金属，五彩的金属不时的碰撞并发出
无比尖瑞的声音，若非有一番功力的人，将承受不住这样大的音波侵
袭，此塔中布满奇异金属，若不能寻找到一个克制金的宝物，将有可
能在里面被音波给震破五脏六腑。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"west"	: __DIR__"manor62",
	"enter"	: __DIR__"gold/gold01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
