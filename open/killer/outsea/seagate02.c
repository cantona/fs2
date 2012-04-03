inherit ROOM;
#include <ansi.h>
void create ()
{
set("short", "深沟--海漩涡");
set("long",@LONG
一个巨大无比的海漩涡就在你眼前不断的旋转着，仿佛永远不会停止，
这种自然界的力量，让你看的目瞪口呆，仿佛是天神刻意制造的海底奇观，
神奇无比。
LONG);
set("exits",([
"east":__DIR__"sea_b03",
]));
setup();
}
int valid_leave(object me,string dir)
{
int sk;
me=this_player();
sk=me->query_skill("force");
if(me->query_temp("put_water")!=1)
{
call_out("sea01",2,me);
return 0;
}
if(dir=="east")
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
