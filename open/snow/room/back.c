#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "后山");
  set ("long", @LONG
这里是雪苍派的后山，在平时，很少人会到这来，在后
面似乎有一个洞穴，显现出一股的神秘感，不知道里面是
否暗藏什么玄机呢 ?
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room20",
  "enter" : __DIR__"hole",
]));
  set("light_up", 1);

  setup();
}
