// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","走廊");
        set("long", @LONG
这儿是第二层，在这十分的安静几乎听不到任何声音，因为这里
是掌门人等的休憩处，因此没人敢在这大声喧哗。往南走可到小阁楼
，往东可到謢法长老休息室，往西则是到天道历史发展室。
LONG);
set("exits", ([
	"south":__DIR__"r60",
	"east":__DIR__"r64",
	"west":__DIR__"r66",
]));
  set("light_up",1);
  setup();
}
