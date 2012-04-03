// Room: /open/dancer/room/r3-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你的四周是一片树林，而放眼望去东边则是陡峭的山丘，山丘上
同样是密布的树林。心中不由开始害怕，不知会不会有野兽跑下山来
。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/dancer/room/r4-4.c",
  "north" : "/open/dancer/room/r2-4.c",
  "west" : "/open/dancer/room/r3-3.c",

]));

  set("light_up", 1);

  setup();
}
