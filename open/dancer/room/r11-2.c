// Room: /open/dancer/room/r11-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在枫树林之中，所见之处几乎都是枫树，但是并非十
分茂盛，四周事物仍清悉可见。四周的枫树每到秋天，那满天火
红想必十分壮丽吧。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r10-2.c",
  "west" : "/open/dancer/room/r11-1.c",
  "east" : "/open/dancer/room/r11-3.c",
]));

  set("light_up", 1);

  setup();
}
