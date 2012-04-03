#include <room.h>

inherit ROOM;
void do_west();
void create()
{
      set("short","雪泉入口");
      set("long",@LONG
眼前所见是一座山泉，在山壁上流着潺潺泉水，相传雪泉泉水
有神奇的魔力，但是在雪泉中有传说中的守护圣兽把守着，而
且圣水的位置到底在那，也是一个问题，不少英雄豪杰，进入
雪泉都无功而返。
LONG);
        set("exits", ([
		"east":__DIR__"water2",
        ]) );
	set("light_up",1);
	set("objects",([
	"/obj/source/rose_flower":1,
	]));
        setup();
}
void init()
{
       add_action("do_enter","enter");
}
int do_enter(string str)
{
     if(str!="water")
         return 0;
     if(!present("snow token",this_player()))
         return notify_fail("要有雪泉圣物才能进入雪泉。\n");
     tell_object(this_player(),"你走进泉水之中。\n");
      this_player()->move(__DIR__"water3");
     return 1;
}
