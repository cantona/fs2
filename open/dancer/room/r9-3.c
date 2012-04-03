// Room: /open/dancer/room/r9-3.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","小路");
  set ("long", @LONG
你正走在山野小路之中，北边是座小村庄，从这里你可以开始你的
镜月之旅，去探索这神秘的土地。小路向东延伸过去。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r9-4.c",
  "north" : "/open/dancer/room/r8-3.c",

]));

  set("light_up", 1);

  setup();
}
