// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","密道");
        set("long", @LONG
四处阴森森的，空气中弥漫着一股不寻常的气息，就连你带进来
的火把也显得十分的暗淡。这样的场面使你怯步，心中一股寒意不禁
油然升起，有种声音一直在叫你回头，不要继续往前走了....
LONG);
set("exits", ([
	"northeast":__DIR__"r81",
	"south":__DIR__"r83",
]));
  setup();
}
