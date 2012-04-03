// Room: /open/dancer/room/r5-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","小路");
  set ("long", @LONG
你正走在山野小路之中，你的南方是座小村庄，往西可上到一座小
山丘，南方的村庄乃是这座岛上唯一的村庄。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r4-3.c",
  "south" : "/open/dancer/room/r6-3.c",
  "west" : "/open/dancer/room/r5-2.c",

]));

  set("light_up", 1);

  setup();
}
