// Room: /u/l/lotus/girl/r4.c
#include "/open/open.h"


#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "翠绿色的房间");
  set ("long", @LONG
一张收拾过的大床, 翠绿色的幛幕, 垂着流苏, 茶几上有一瓶万
年青. 靠墙边有一个架子, 放了一对绿玉狮子, 和一个青磁花瓶.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : CENTER_ROOM"w2.c",
]));
  set("light_up", 1);
  set("file_name", CENTER_ROOM"r4.c");
  create_door("north", "雕花木门", "south", DOOR_CLOSED);
  setup();
}
