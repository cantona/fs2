#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
int do_trade(string);
void create()
{
  set("short","狼棚");
  set ("long",@LONG
这里看来是村民用来给狼儿休息的地方。在棚角那有个老人站在
那，看来你可以去跟他说说话。
LONG);

  set("light_up", 1);
   set("exits", ([ /* sizeof() == 2 */
   "corner" : __DIR__"corner.c",
   "west" : __DIR__"wolf08.c",
]));
  set("objects",([ /* sizeof() == 4 */
  "/open/badman/npc/wolf.c" : 2,
   "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
