// Room: /u/l/lotus/girl/r5.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "清爽的房间");
  set ("long", @LONG
一张刚收拾过的大床, 天蓝色的幛幕, 垂着流苏, 地毯也是天蓝
色的, 茶几上有一瓶蓝色的小花.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : CENTER_ROOM"w3.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r5.c");
  create_door("south", "雕花木门", "north", DOOR_CLOSED);
  setup();
}
