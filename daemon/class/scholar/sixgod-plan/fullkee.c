//完复计 by sueplan - 快速回复kee所伤到的最大值
#include <ansi.h>
inherit SSERVER;
int delfullkee(object);
int perform(object me, object target)
{
        int force=me->query_skill("force");
        if( me->query("force") < 1000 )
        return notify_fail("你的内力不够。\n");
        if( me->is_fighting() )
        return notify_fail("战斗中不能使用。\n");
        if( target != me)   
        return notify_fail("此计只能对自己用。\n");
        if( me->query_temp("fullkee") == 1 )
        return notify_fail("你已经用了完复计，请等会再用。\n");
          message_vision(HIW"$N用出六韬奇略中的完复计，一阵白烟在$N天顶前掠过。\n"NOR,me);
        message_vision(HIG"$N感受到身上一股气劲，觉得气力回复了不少。\n"NOR,me);
        me->receive_curing("kee",force*3);
        me->set_temp("fullkee",1);
        me->add("force",-500);
        call_out("delfullkee",10,me);
        return 1;
}
int delfullkee(object me)
{

        if(me) {
        me->delete_temp("fullkee");
        }
        return 1;
}


