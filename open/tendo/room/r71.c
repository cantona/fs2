// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","謢法长老休息室");
        set("long", @LONG
这里是天道謢法长老 龙清和 的休息室，因为龙清和是謢法长老
，且又是掌门人的师兄，所以特别为他准备了一间休息室。你大概看
了一下，在这里有一张床、一张小几子和一张办公桌，看来这办公桌
就是龙清和平日用来处理公文的地方了。
LONG);
  set("light_up",1);
set("exits", ([
	"west":__DIR__"r63",
]));
  setup();
}
