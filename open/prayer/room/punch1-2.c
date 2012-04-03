//open/prayer/room/punch1-2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "圣火总坛大厅");
  set ("long", @LONG

    这是圣火教的总坛大厅，帮务处理与玩家讨论的地方，你可以在这留
下你对圣火教的建议，或是圣火教哪出了问题，都可以在此留言，毕竟圣
火教是为大家而开的，请大家好好爱惜它。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-manager" : 1,               //弟子
]));
  set("exits", ([ /* sizeof() == 4 */
        "north" : "/open/prayer/room/punch1",           //`帮主
        "south" : "/open/prayer/room/punch1-10",                //`大厅
//      "east" : "/open/prayer/room/punch1-8",          //`大厅
//      "west" : "/open/prayer/room/punch1-10",         //`大厅
]));
  set("light_up", 1);
  setup();
  call_other("/obj/board/prayer_b", "???");
}
 
