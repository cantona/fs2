// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","小阁楼之第二层");
        set("long", @LONG
这栋小阁楼将天道的区域给总括了起来，想到地下室，想上二楼
，都是要从这栋小阁楼来走的。四处的火把十分不明显，你要来这最
好自己带着火把。
LONG);
set("exits", ([
	"down":__DIR__"r58",
        "north":__DIR__"r65",
]));
  set("no_light",1);
  setup();
}
