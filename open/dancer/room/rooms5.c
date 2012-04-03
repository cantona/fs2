// Room: /open/dancer/room/rooms5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIR"玄关"NOR);
  set ("long", @LONG
这里是夜梦小筑的玄关，在这里有两个美丽的女子看守，看她们
的模样似乎弱不禁风，实际上应该是身怀绝技吧。所以没事的话还是
不要惹她们的好，从这里可离开夜梦小筑，向北则是夜梦小筑内部重
心。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/rooms4.c",
  "out" : "/open/dancer/room/dream.c",
]));
 set("objects", ([ /* sizeof() == 1 */
 "/open/dancer/npc/ygirl.c" : 2,
]));

  set("light_up", 1);

  setup();
}
