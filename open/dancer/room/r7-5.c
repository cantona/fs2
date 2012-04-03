// Room: /open/dancer/room/r7-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","草原");
  set ("long", @LONG
你身处一处草原之中，你的西边是一条小路，北方是一大片森林，
看起来阴森森的不知道是否有野兽隐藏其中。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/r7-4.c",
  "south" : "/open/dancer/room/r8-5.c",

]));

  set("light_up", 1);

  setup();
}
