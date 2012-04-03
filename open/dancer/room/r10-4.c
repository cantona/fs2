// Room: /open/dancer/room/r10-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","草原");
  set ("long", @LONG
你身处一处草原之中，你的两侧都是树林，北方是一条小路向西
通去，南方则是一片树海无法视其内部。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : "/open/dancer/room/r10-5.c",
  "west" : "/open/dancer/room/r10-3.c",
  "north" : "/open/dancer/room/r9-4.c",
  "south" : "/open/dancer/room/r11-4.c",

]));

  set("light_up", 1);

  setup();
}
