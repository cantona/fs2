// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","隧道");
        set("long", @LONG
一进入这个隧道中你就感到无比的亢奋，好像有什么有趣的事要
发生了一样。你不断的克制自己的心神，但此时心神却十分不听话一
再的在你心中发出原始的吼声..ㄡ ㄨ~~~
LONG);
set("exits", ([
        "out":__DIR__"r27",
]));
  set("no_light",1);
  setup();
}
