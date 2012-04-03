// Room: /open/dancer/room/r4-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","草原");
  set ("long", @LONG
你身处一处草原之中，你的东边是一条小路，北方是一大片森林，
南方看来是一座山丘，不过由于树林的阻挡，你无法由此爬上山丘。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r4-3.c",
  "north" : "/open/dancer/room/r3-2.c",

]));

  set("light_up", 1);

  setup();
}
