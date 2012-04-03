// Room: /u/l/lotus/girl/r9.c

#include <room.h>
#include "/open/open.h"


inherit ROOM;

void create ()
{
  set ("short", "柴房");
  set ("long", @LONG
堆放柴火的房间, 一个小女孩哭哭啼啼的坐在地上, 看起来有些
狼狈。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"nini.c" : 1,
]));
  create_door("north", "雕花木门", "south", DOOR_CLOSED);
  setup();
}
