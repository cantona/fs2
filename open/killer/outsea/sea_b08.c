#include <ansi.h>
inherit ROOM;
void create ()
{
set("short", "深沟");
set("long",@LONG
水压越来越强了，你连抬起脚来都觉得痛苦，每走一步，气血就急速
下降，或许你已经来不及回去了，在缺养的状态下，你慢慢有了昏炫的感
觉。
LONG);
set("exits",([
"north":__DIR__"sea_b03",
"south":__DIR__"sea_b04",
"east":__DIR__"sea_b09",
"west":__DIR__"sea_b11",
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
tell_object(me,"你被八爪章鱼给挡了下来。\n");
return 0;
}
if(present("water_ninjia",environment(me)))
{
tell_object(me,"你被水忍给挡了下来。\n");
return 0;
}
if(me->query_temp("put_water")!=1)
{
call_out("sea01",2,me);
return 0;
}
if(dir=="west"||dir=="east"||dir=="north"||dir=="south")
{
if(!present("dragon_stone",me))
{
message_vision("一股强大的水压令$N无法前进。\n",me);
return 0;
}
if(sk<100)
{
me->start_busy(2);
tell_object(me,HIW"一股强大的压力使的你无法动弹。\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N运起强大的内力，使得水压不置于压迫其身。\n"NOR,me);
me->add("force",-200);
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
	if(present("water ninjia",environment(me)))
	return ;
if(me->query("class")!="killer")
	{
	if(random(10)<4)
	  {
	  object mob;
	  if(random(5)>2)
	  {
	  mob=new(__DIR__"octopus");
 	  message_vision("在$N眼前突然"+mob->query("name")+"挡住了去路。\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  {
	  mob=new(__DIR__"w_ninjia");
	  mob->move(environment(me));
	  message_vision("在$N眼前突然"+mob->query("name")+"挡住了去路。\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  }
	}
if(random(10)<1)
	{
	  object mob;
	  if(random(5)>2)
	  {
	  mob=new(__DIR__"octopus");
 	  message_vision("在$N眼前突然"+mob->query("name")+"挡住了去路。\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	  {
	  mob=new(__DIR__"w_ninjia");
	  mob->move(environment(me));
	  message_vision("在$N眼前突然"+mob->query("name")+"挡住了去路。\n",me);
	  mob->command("kill "+getuid(me));
	  return ;
	  }
	}
}