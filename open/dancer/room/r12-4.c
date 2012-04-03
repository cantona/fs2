// Room: /open/dancer/room/r12-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你的四周是一片枫树林，而放眼望去东边则是陡峭的山丘，山丘上
同样是密布的枫树。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/dancer/room/r11-4.c",

]));

  set("light_up", 1);

  setup();
}
