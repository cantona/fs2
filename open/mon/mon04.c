inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "长白山下");
  set ("long", @LONG
经过一番长途拔涉，你终于走到这极具盛名的「长白山”了，抬
头望望间前的长白山，山顶上白霭霭的一片，景色之壮观，令你囋叹
不已。环绕在长白山四边的轻烟，更为雪白的山头更添一股美感。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"mon03",
  "westdown" : "/open/snow/room/room3.c",
  "north" : __DIR__"mon05",
]));

  setup();
}

