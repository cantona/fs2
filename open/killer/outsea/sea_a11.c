#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", "深沟");
set("long",@LONG
这你的水压把你的身体加重了一倍，每走一步，都觉得气血损失了大半
，往四周眺望，一片死寂，景象一成不变，也没有任何目标可以确定位置，
看来得小心迷路。
LONG);
set("exits",([
"north":__DIR__"sea02",
"south":__DIR__"sea_a07",
"east":__DIR__"sea_a08",
"west":__DIR__"sea_a10",
]));
setup();
}
int valid_leave(object me,string dir)
{
int sk;
me=this_player();
sk=me->query_skill("force");
if(present("octopus",environment(me)))
{
tell_object(me,"你被八爪章鱼给档了下来。\n");
return 0;
}
if(me->query_temp("put_water")!=1)
{
call_out("sea01",2,me);
return 0;
}
if(dir=="north"||dir=="west"||dir=="south"||dir=="east")
{
if(sk<75)
{
me->start_busy(2);
tell_object(me,HIW"一股强大的压力使的你无法动弹。\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N运起强大的内力，使得水压不置于压迫其身。\n"NOR,me);
me->add("force",-100);
return 1;
}
}
}
int sea01(object me)
{
me=this_player();
if (me->query_temp("put_water")!=1)
{
tell_object(me,HIB"\n\n由于定海珠的力量消失了，一瞬间强大的水压把你挤出水面！\n\n"NOR);
me->move(__DIR__"sea01");
}
else
{
tell_object(me,HIY"定海珠的力量让你又动了起来。\n"NOR);
me->add("force",-100);
COMBAT_D->report_status(me,1);
}
}

void init()
{
object me;
me=this_player();
	if(present("octopus",environment(me)))
	return ;
if(me->query("class")!="killer")
	{
	if(random(10)<4)
	  {
	  object mob;
	  message_vision("在$N眼前突然一只八爪章鱼挡住了去路。\n",me);
	  mob=new(__DIR__"octopus");
	  mob->move(environment(me));
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	}
if(random(10)<1)
	{
	  object mob;
	  message_vision("在$N眼前突然一只八爪章鱼挡住了去路。\n",me);
	  mob=new(__DIR__"octopus");
	  mob->move(environment(me));
	  mob->command("kill "+getuid(me));
	  return ;
	  }
}