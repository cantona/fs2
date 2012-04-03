#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "依山傍月亭");
  set ("long", @LONG
这里是雪苍派的内厅，里头的装饰看起来有一段历史了，由于
这里是雪苍派的根据地，这儿的建筑有两百多年，相传雪苍派
开山祖师当年开派时似乎有建造一些暗室密门之类的。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room16",
  "east" : __DIR__"troom_0.c",
]));
     set("objects",([
     "/open/snow/npc/fly.c": 1,
]));
  set("light_up", 1);

  setup();
}
