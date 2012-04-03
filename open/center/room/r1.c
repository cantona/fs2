// Room: /u/l/lotus/girl/r1.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "粉色的房间");
  set ("long", @LONG
一张收拾过的大床, 粉色的幛幕, 垂着流苏, 茶几上有一瓶装着
水的蔷薇, 粉色的桌巾上也绣了大大小小的蔷薇.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : CENTER_ROOM"w1",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r1.c");
  create_door("south", "雕花木门", "north", DOOR_CLOSED);
  setup();
}
