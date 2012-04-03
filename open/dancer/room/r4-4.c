// Room: /open/dancer/room/r4-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在树林之中，所见之处几乎都是树木，但是并非十分
茂盛，四周事物仍清悉可见。在你的西边是条小路，而东边则是
山丘。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r5-4.c",
  "north" : "/open/dancer/room/r3-4.c",
  "west" : "/open/dancer/room/r4-3.c",
]));

  set("light_up", 1);

  setup();
}
