// 声东击西 By sueplan - 只能对同一ppl用一次
#include <ansi.h>
inherit SSERVER;
object me=this_player();
object target=me->query_enemy(me);
int perform(object me, object target)
{
        if( me->query("force") < 1000 )
        return notify_fail("以你的内力不足以用此计。\n");
        if( target->query_temp("no_falsekill") == 3 )
        return notify_fail("对方已被你的奸计所骗过三次了, 在笨也不会再受骗了吧。\n");
        if(me->query_temp("nouse")==1)
        return notify_fail("对方还对你的奸计无法直招架当中!!\n");
        if( me->query("sen") < 100 )
        return notify_fail("以你的神不足以用此计。\n");
        if( me->query("gin") < 100 )
        return notify_fail("以你的经不足以用此计。\n");
        if( me->query("family/family_name") != "儒门")
        return notify_fail("不是儒生，不给你用咧！！^_^\n");
        if(!me->is_fighting())
        return notify_fail("声东击西只能在战斗中使用。\n");
        me->add("sen",-30);
        me->start_busy(1);
message_vision(HIY"$N竟然使出了声东击西的奸计，令$n无法反应。\n"NOR,me,target);
        target->add_temp("no_falsekill",1);
        me->set_temp("nouse",1);
        target->set_temp("no_power",1);
        call_out("delnopower",60,target);
        return 1;
}

int delnopower()
{
        if (target) {
        target->detele_temp("no_power");
        me->delete_temp("nouse",1);
        }
        return 1;
}

