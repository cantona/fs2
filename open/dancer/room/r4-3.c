// Room: /open/dancer/room/r4-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","小路");
  set ("long", @LONG
你正走在山野小路之中，这里离村庄较远了，北方是一大片森林，
西方可走到一处草地，南方的小路可让你走到村庄，东方则是一片树林
。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : "/open/dancer/room/r4-4.c",
  "south" : "/open/dancer/room/r5-3.c",
  "west" : "/open/dancer/room/r4-2.c",

]));

  set("light_up", 1);

  setup();
}
