// Room: /open/center/room/r10.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "乐器房");
  set ("long", @LONG
收藏了巧心姑娘的乐器, 丫嬛苹儿正逐一擦拭, 不时的拿起乐器
把玩. 苹儿看见你闯了进来, 吃惊的看着你.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"tin4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"ping.c" : 1,
]));
  set("light_up", 1);
  create_door("north", "雕花木门", "south", DOOR_CLOSED);
  setup();
}
