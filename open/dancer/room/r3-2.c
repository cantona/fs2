// Room: /open/dancer/room/r3-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在树林之中，所见之处几乎都是树木，但是并非十分
茂盛，四周事物仍清悉可见。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/dancer/room/r4-2.c",
  "north" : "/open/dancer/room/r2-2.c",
  "west" : "/open/dancer/room/r3-1.c",
  "east" : "/open/dancer/room/r3-3.c",
]));

  set("light_up", 1);

  setup();
}
