inherit ITEM;
#include <ansi.h>
void create()
{
set_name("海漩涡",({"whirlpool"}));
set("no_get",1);
set("no_sac",1);
setup();
}
void init()
{
object me;
me=this_player();
if(present("dragon_stone",me))
{
message_vision(HIY"\n\n来至遥远的中原人士"HIR+me->query("name")+HIY"啊！请让我为你服务吧！\n\n"NOR,me);
destruct(present("dragon_stone",me));
me->start_busy(4);
call_out("s_msg",1,me);
}
}
int s_msg(object me)
{
message_vision(HIB"\n\n海漩涡猛然向$N冲了过来，$N整个人被包围在海漩涡的中心。\n\n"NOR,me);
call_out("s_msg2",2,me);
return 1;
}
int s_msg2(object me)
{
message_vision(HIY"\n\n$N的身体犹如抹布一般的扭曲于漩涡中，向上直旋。\n\n"NOR,me);
me->move(__DIR__"island/island");
message_vision(HIR"\n\n$N被海漩涡给送到这里。\n"NOR,me);
return 1;
}