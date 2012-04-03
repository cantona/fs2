// Room: /open/dancer/room/r7-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","村庄");
  set ("long", @LONG
这里是村庄的闹区，由于镜月岛的居民不多，因此这里虽然号称是
闹区实际上人口并不多，比起蜀中、平南等大城要差多了。向东可离开
村庄。


LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/dancer/room/r7-2.c",
  "east" : "/open/dancer/room/r7-4.c",
  "south" : "/open/dancer/room/r8-3.c",
  "north" : "/open/dancer/room/r6-3.c",

]));

  set("light_up", 1);

  setup();
}
