// Room: /u/l/lotus/girl/chaoroom.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "巧心姑娘的房间");
  set ("long", @LONG
简单雅致的房间, 四处收拾的一尘不染, 漂亮的桌巾椅垫吸引了
你的目光, 鹅黄色的底, 配上些许手工细致的刺绣, 十分典雅出色,
竹制的家具, 看来格外出尘.
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"f2d.c",
]));
  set("light_up", 1);
  set("file_name", __DIR__"chaoroom.c");
  create_door("west", "雕花木门", "east", DOOR_CLOSED);
  setup();
}
