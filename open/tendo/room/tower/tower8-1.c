
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","密室");
        set("long", @LONG
这是一个空旷、干净、摆设十分简单，只有一张床和一些简单家
俱的房间，不过你注意到，东边的墙(wall)和别的地方的墙颜色有点
不同，你在想--可能是因为地道的关系吧!!且左右的火把闪烁不定使
你更加确定你的推测。
LONG);
set("item_desc", ([ /* sizeof() == 1 */
"wall" : "你发现这个墙怪怪的，似乎可以推动。
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"tower8.c",
]));
  set("no_transmit",1);
  setup();
}
void init()
{
        add_action("do_push","push");
}

int do_push(string str)
{
        object who;
        who = this_player();

        if(str!="wall"){return 0;}
        tell_object(who,"[1;33m你轻轻的推了一下墙，但墙却快速的转了一圈，也连带把你转"+"了进去。[0m\n");
        who->move("/open/tendo/room/tower/tower8-2");
        tell_room(this_object(),"[1;33m你看到尽头的墙被[1;37m"+who->query("name")+"[1;33m一推之下"
				+"[1;33m转动了一圈，而[1;37m"+who->query("name")+"[1;33m也被墙给"+
				"[1;33m转了进去。[0m\n");
        return 1;
}


