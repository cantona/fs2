#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "通吃小筑后方");
  set ("long", @LONG

	这是通吃小筑通往后山的山路，前方是一段陡峭的爬坡路段，
	相传当年天下第一高手杨小邪就是在这里锻炼出，天下第一的跑功！！
            所谓的跑功，就是不靠内力，纯粹靠脚力的快速移动术！！
	你也想练看看吗？  只可惜杨小邪与他师傅欧阳不空早已不知去向......

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"hr16.c",   
     "south" : __DIR__"hr7.c",   
]));

set("objects",([
  "/open/killer/npc/magnpc1.c":2,]));

  setup();
}

void init()
{
//
}

int do_look(string str)
{
  object me;

   if(str )
    return notify_fail("你想看什么？？看看有没有人救你吗？？用哭的比较快啦！！\n");
   return 1;
}
