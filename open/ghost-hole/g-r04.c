#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"幽冥道"NOR"小村");
        set("long",@LONG
你走进了幽冥界唯一的小村庄, 这里可以说是
幽冥里与人间界最相似的地方了, 只有少数几个观
念与人类相同的魔物住在这里, 在你西边是贩卖幽
冥界所有杂物的地方, 东边则是让来到幽冥界人们
所休息的地方...
LONG);
        set("exits",([
        "south":__DIR__"g-r05",
	"west":__DIR__"g-r06",
	"east":__DIR__"g-r07",
        "north":__DIR__"g-r03",
        ]));
        set("no_transmit",1);
        setup();
}
