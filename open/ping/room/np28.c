#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "玄关");
  set ("long", @LONG
长长的走道向前延伸, 北边有一间房间, 正是段云独生女～段小诗～
的闺房, 你闻到房中传出的香气, 不禁心神俱醉。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"np29",
  "east" : __DIR__"np24",
]));
  set("light_up", 1);

  setup();
}
