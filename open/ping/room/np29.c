#include </open/open.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "寝居");
  set ("long", @LONG
你走进此房, 感觉眼睛一亮 ,四周打扫的很干净, 简直就像是新的
一般, 这正是段云爱女～段小诗～的闺房, 若说有何突兀的地方, 大概
是墙上挂着一些笔、扇等书生专用的兵器。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"np28",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan0" : 1,
]));

  setup();
  replace_program(ROOM);
}
