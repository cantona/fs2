// Room: /open/badman/room/r5

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "武道馆");
  set ("long", @LONG
这里是恶人谷的武道馆，所有的新进小喽喽都得在这里接受训
练。道馆里充满着汗臭味，从四处零散的兵器和墙上挂着的一幅幅
战术演练图(figure)，你可以想见即使是区区一个山贼也得接受严
格的训练才能在恶人谷中生存。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"b5",
  "south" : __DIR__"r12",
  "east" : __DIR__"b14",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "figure" : "你看到图上写着：
哪来啥战术？围殴就对了嘛，都哪个年代了还装大侠？
					恶人谷先祖 oda 到此一游...:b
",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/lolo" : 3,
  "/open/badman/npc/teacher" : 1,
]));
  set("light_up", 1);

  setup();
}
