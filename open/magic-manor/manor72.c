#include <ansi.h>
#include <room.h>

inherit ROOM;

void create ()
{
	set ("short", "庄院大门");
	set ("long", @LONG
到正厅的必经之路，一扇若大的红色大门竖立眼前，这扇大门是
采千年寒铁所铸造而成，，平时是可以任人自由开启的，若非有点内
功底子的人是很难推开这扇门的。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor02",
	"south"	: __DIR__"manor71",
	]));

	create_door("north",HIR"鸿元聚灵门"NOR,"south",DOOR_CLOSED);
	set("light_up", 1);

	setup();
	replace_program(ROOM);

}
