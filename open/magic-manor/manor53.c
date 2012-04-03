#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIY"聚灵池"NOR);
	set ("long", @LONG
聚灵池，是聚灵山庄的一个奇特的池子，山庄飘散出来的灵气大
都会飘往这里，最后被聚灵池吸收，在聚灵池中心，聚集着强大的灵
气，愈往池中心，灵气愈是强烈，并聚成五彩灵光，在池中来来回回
的穿越奔腾，刹是好看。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor68",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
