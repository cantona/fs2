// Room: /open/ping/room/p7
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "寝居");
  set ("long", @LONG
这里是一间整齐的房间, 四周打扫的很干净, 简直就像是新的一般
, 你看到这里的摆设似乎是一位女孩子家的房间, 若说有何突兀的地方
大概是墙上挂着一些笔、扇等书生专用的兵器。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p6",
]));
  set("objects", ([ /* sizeof() == 1 */
  PING_NPC"duan0" : 1
]));
  set("light_up", 1);

  setup();
}
