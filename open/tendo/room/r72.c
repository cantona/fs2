// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","监牢地道");
        set("long", @LONG
一进到这你就感到一阵阴风向你吹来，使你毛骨悚然，在这个地
道的左右就是一间间的牢房，你不禁在想--若一天你也被关来这那该
怎么办?
LONG);
set("exits", ([
        "south":__DIR__"r73",
	"east":__DIR__"r78",
	"west":__DIR__"r75",
	"north":__DIR__"r59",
]));
  setup();
}
