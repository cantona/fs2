// Room: /u/l/lotus/girl/r3.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "乳白色的房间");
  set ("long", @LONG
被褥凌乱的大床, 乳白色的幛幕, 垂着流苏桌椅是略带透明的乳
白色, 茶几上有一瓶香水百合.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"w2.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  CENTER_NPC"fung.c" : 1,
  CENTER_NPC"cowman.c" : 1,
]));
  set("light_up", 1);
  create_door("south", "雕花木门", "north", DOOR_CLOSED);
  setup();
}
