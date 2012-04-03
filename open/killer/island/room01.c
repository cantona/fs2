#include <ansi.h>
inherit ROOM;
void create ()
{
set("short","房间");
set("long",@LONG
房间的摆设极为简单，与平常人家的卧房没有什么两样，但是却多了几具残缺
不全的尸骨与血渍，由此可见这里似乎曾经有过厮杀的场面，而且由血渍喷洒的情
况看来，多半是一刀毙命，手法干净俐落，就连杀了不少人的你都不由得看的入迷
。
LONG);
set("exits",([
"east":__DIR__"b_r02",
]));
set("objects",([
__DIR__"npc/corpse01":1,
]));
setup();
}
void init()
{
        add_action("do_search", "search");
}

int do_search()
{
object me;
me = this_player();
if (me->query_temp("quest_corpse")==2)
{
tell_object(me,"这具尸体看起来完整多了!!\n");
return 1;
}
else
{
tell_object(me,"你发觉到尸体少了一些部位。\n");
me->set_temp("quest_corpse",1);
return 1;
}
}
