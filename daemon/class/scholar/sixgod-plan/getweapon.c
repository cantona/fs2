//By sueplan取走敌人的weapon - 草船借箭 2000.7.27
//修改为对同一个敌人只能用三次 by sueplan
#include <ansi.h>
inherit SSERVER;
int delwap(object me);
int perform(object me, object target)

{
        object ob=this_object();
        object ewp;
        int i;
        if( !target ) target = offensive_target(me);
        if( !me->is_fighting(target) )
        return notify_fail("草船借箭只能在战斗中使用。\n");
        ewp=target->query_temp("weapon");
        if( !ewp || target->query("id")=="fire king" || target->query("id")=="degu sa" )
        return notify_fail("敌人手中并没有兵器。\n");
        if( me->query("force") < 500 )
        return notify_fail("你的内力不够。\n");
        if( userp(target) ) 
        return notify_fail("这招对玩者没用。\n");
        if( me->query("kee") < 300 )
        return notify_fail("你的气不够。\n");
        if( me->query_temp("getwap") == 1 )
        return notify_fail("你刚用完此计，马上用是会被对方看破的。\n");

message_vision(HIG"面带微笑，似乎$n的举动已在欲料之中。\n"NOR,me,target);
message_vision(HIY"只见$N贴近$n的兵器，一晃身划向他的兵器。\n"NOR,me,target);
        if( environment(me) == environment(target) ) 
          i=random(100);
           if( i > 50 )
          {
          ewp->unequip();
message_vision(HIR"$N以迅雷不及掩耳之速运用六韬奇略中草船借箭的功夫，结果$n殊不知手中的"+ewp->query("name")+HIR"已被取走。\n"NOR,me,target);
          ewp->set("value",1);
          ewp->move(me);
          target->rest_action();
          } 
        else 
        {
message_vision(HIC"但是却见$N的双手无法处及$n的兵器。\n"NOR,me,target);
        me->add("kee",-100);
        }
        me->set_temp("getwap",1);
        me->add("force",-500);
        call_out("delwap",5,me);
//为了必免连用太扯所加的DELAY TIME
        return 1;
}
int delwap(object me)
{
        if(me) {
        me->delete_temp("getwap");
        }
        return 1;
}



