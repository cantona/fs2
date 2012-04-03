#include <ansi.h>
inherit ROOM;
string statue();
void create ()
{
  set ("short", "海断层");
  set ("long", @LONG
再往西走，有一个落差极大的海底深沟，仅仅靠着定水珠的力量可以让
你在水底免去呼吸，但如果没有良好的内力的话，是无法忍受强大的水压很
久。
在断层前有一个奇怪的神像(statue)，以及一个标志(sign)。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/killer/sea/room/landrm1.c",
  "westdown" : __DIR__"sea02",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "statue" : (: statue :),
  "sign" : "深海处潜伏巨大章鱼，请勿乱闯。
",
]));

  setup();
}
int valid_leave(object me,string dir)
{
int sk;
me=this_player();
sk=me->query_skill("force");
if(dir=="westdown")
{
if(sk<50)
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
if(dir=="east")
{
return 1;
}
}
int sea01(object me)
{
me=this_player();
if (me->query_temp("put_water")!=1)
{
tell_object(me,HIB"\n\n由于定水珠的力量消失了，一瞬间强大的水压把你挤出水面！\n\n"NOR);
me->move(__DIR__"sea01");
}
else
{
tell_object(me,HIY"定水珠的力量让你又动了起来。\n"NOR);
me->add("force",-100);
COMBAT_D->report_status(me,1);
}
}
string statue()
{
object me;
me=this_player();
if(!present("static_water",me))
return "一个你从未见过的雕像，十分的怪异，令你目不转睛的看着。\n";
if(me->query_temp("put_water")!=1)
{
if(me->query_temp("look_statue")!=1)
{
me->set_temp("look_statue",1);
call_out("move01",1,me);
return "一个你从未见过的雕像，十分的怪异，令你目不转睛的看着。\n";
}
return "一个你从未见过的雕像，十分的怪异，令你目不转睛的看着。\n";
}
else
return "一个你从未见过的雕像，十分的怪异，令你目不转睛的看着。\n";
}
int move01(object me)
{
message_vision(HIB"\n\n$N傻傻的看着雕像。\n"NOR,me);
me->start_busy(5);
call_out("move02",2,me);
return 1;
}
int move02(object me)
{
message_vision(HIB"\n\n雕像似乎缓缓的张开了眼睛。\n"NOR,me);
call_out("move03",3,me);
return 1;
}
int move03(object me)
{
message_vision(HIY"\n\n一瞬间，雕像锐利的双眼把$N给吸了进去！！\n"NOR,me);
me->move(__DIR__"statueroom");
me->delete_temp("look_statue");
return 1;
}
