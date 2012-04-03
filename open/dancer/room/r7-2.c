// Room: /open/dancer/room/r7-2.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","村庄");
  set ("long", @LONG
这里是镜月岛上唯一的村庄，西边则是镜月港，是你进出镜月岛唯
一的通道，你的东边是村庄内的闹区，在这里你看到鱼民们正辛苦的修
补着鱼网,往北是这个村庄的鱼池。


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/port.c",
  "east" : "/open/dancer/room/r7-3.c",

]));

  set("light_up", 1);

  setup();
}
