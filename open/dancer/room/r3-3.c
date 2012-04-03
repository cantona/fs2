// Room: /open/dancer/room/r3-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", "树林");
  set ("long", @LONG
你身处在树林之中，所见之处几乎都是树木，但是并非十分
茂盛，四周事物仍清悉可见。

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/clan/wind/room/room61.c",
  "east" : __DIR__"r3-4.c",
  "west" : __DIR__"r3-2.c",
]));

  setup();
}
