// Room: /open/dancer/room/r6-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","村庄");
  set ("long", @LONG
这里是村庄的南部，向北你可以展开你的旅程，也可以向北回到村
庄内人烟较多之处。由于这座岛上居民不多，因此这里的人口并不
多，西边是一栋民房。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/dancer/room/r7-3.c",
  "south" : "/open/dancer/room/r9-3.c",
  "west" : "/open/dancer/room/r8-2.c",

]));

  set("light_up", 1);

  setup();
}
