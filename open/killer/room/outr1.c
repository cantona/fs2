#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "花园小路");
  set ("long", @LONG
   西方传来阵阵的花香，那里似乎种了不少植物。
   随风飘来的花香令你不禁沈醉其中，欣赏起身边的植物。
   不过欣赏归欣赏，可别忘了这里可是杀手的总坛哦。。。。。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr2.c",
      "east" : __DIR__"outr0.c",
]));
  setup();
}