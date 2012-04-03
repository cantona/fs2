// Room: /u/l/lotus/girl/r2.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "橙色的房间");
  set ("long", @LONG
一张收拾过的大床, 橙色的幛幕, 垂着流苏. 桌子上有一大瓶栀
子花. 户外的阳光透过橙色的窗帘射进来,令你有一种十分温馨的感
觉.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : CENTER_ROOM"w1.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r2.c");
  create_door("north", "雕花木门", "south", DOOR_CLOSED);
  setup();
}
