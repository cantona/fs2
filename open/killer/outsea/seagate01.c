inherit ROOM;
#include <ansi.h>
void create ()
{
set("short", "海断层");
set("long",@LONG
这你的水压把你的身体加重了一倍，每走一步，都觉得气血损失了大半
，眼前有一个下沈的地形，似乎可以通往更深的海底，相对而言，水压也似
乎有所改变。
LONG);
set("exits",([
"east":__DIR__"sea_a03",
"westdown":__DIR__"sea03",
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
if(dir=="east")
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
return 1;
}
}
if(dir=="westdown")
{
if(!present("dragon_stone",me))
{
message_vision("一股强大的水压令$N无法前进。\n",me);
return 0;
}
if(sk<100)
{
me->start_busy(2);
tell_object(me,HIW"一股更加强大的压力使的你无法动弹。\n"NOR);
call_out("sea01",2,me);
return 1;
}
else
{
message_vision(HIY"$N运起强大的内力，使得水压不置于压迫其身。\n"NOR,me);
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