// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","掌门人休息室");
        set("long", @LONG
这里是掌门人 陆清风 的休息室，向北的方向有两扇窗，往西则
放着一张百年的龙骨大床，大门则是向南而开，门口还站了两名看门
弟子。
LONG);
  set("light_up",1);
set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/npc/boy2":2,
]));
set("exits", ([
        "south":__DIR__"r61",
]));
  setup();
}
