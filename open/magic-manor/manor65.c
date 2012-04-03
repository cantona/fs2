#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", YEL"土灵塔"NOR);
	set ("long", @LONG
土灵塔的周围遍满了土墙的包围，若有灵性的土墙会朝有生命的
物体移动，并将他们重重包围，直至生物的生命消逝才罢休，此塔中
布满的土墙，若不能寻找到一个克制土的宝物，将有可能被里面的飞
沙走石给淹没。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor64",
	"enter"	: __DIR__"soil/soil01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
