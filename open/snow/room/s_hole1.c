// Room: /open/snow/room/hole1.c
// 雪泉圣地中的洞穴
#include <room.h>
inherit ROOM;
void create ()
{
  set ("short", "洞穴");
  set ("long", @LONG
一个狭小、阴暗、潮湿的洞穴，四周长满了青苔，看起来好像很久都没
有人来过的样子，依靠着从上面透下来些许的光线，隐约的看到有条小
路向前而去。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"s_hole.c",
  "north" : __DIR__"s_hole3.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
