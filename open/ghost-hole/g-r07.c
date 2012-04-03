#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"幽冥道"NOR"棺材房");
        set("long",@LONG
这里看似一个庙宇, 感觉上荒废了许久, 地上摆满
了许许多多大小不一的棺材, 看来是让魔物们躺着休息
用的, 或许你也可以选择一个棺材来休息(g-rest).. 
LONG);
        set("exits",([
        "west":__DIR__"g-r04",
        ]));
        set("no_transmit",1);
        setup();
}
void init ()
{
add_action("do_rest","g-rest");
}

int do_rest()
{
object me=this_player();
int mkee,msen,mgin;
mgin=me->query("max_gin");
mkee=me->query("max_kee");
msen=me->query("max_sen");
if(me->query_temp("ghost-hole/village/take_a_rest"))
return notify_fail("人的一生只能躺一次棺材,你还想躺几次啊!!\n");
message_vision(HIY"$N选好了一个棺材后, 就急忙的躺了进去..\n"NOR,me);
me->set("gin",mgin);
me->set("kee",mkee);
me->set("sen",msen);
me->set_temp("ghost-hole/village/take_a_rest",1);
me->start_busy(1);
call_out("message",1,me);
return 1;
}
int message(object me)
{
me=this_player();
message_vision(HIR"$N的脸色突然转为红嫩, 精气神突然回覆到了最佳状态!!\n"NOR,me);
message_vision(HIY"$N仿佛苏醒的死尸一般, 从棺材板里面跳了出来...!!\n"NOR,me);
return 1;
}