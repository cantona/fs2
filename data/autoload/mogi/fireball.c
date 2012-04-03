#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int k;
int conjure (object me, object target)
{
        string msg;
fun=me->query("spells/fireball/level");
if (!me->query("spells/fireball/level"))
     return 0;
if(me->query("class")!="dancer")
return notify_fail("这法术只有舞者能用。\n");
        if( !target ) target = offensive_target(me); 
        if(!me->is_fighting(target) )
        return notify_fail("这法术只能对战斗中的对手使用。\n");
        if(me->query("atman") < 50 )
        return notify_fail("你的法力不足\n");
        if(me->query_temp("fireball")==1)
        return notify_fail("你正在施法中\n");
if( fun <= 20) {
        msg = CYN "$N突然唸着：" NOR ;
        msg += HIR "幻～火！\n" NOR ;
        msg += HIW "$N祭起一团火球轰向$n。\n" NOR;
        k=fun*2;
} else if( fun>=21&&fun<=40) {
msg=CYN "$N突然唸着：" NOR ;
msg+= HIR "妖～火！\n" NOR;
msg += HIW "$N祭起一团火球轰向$n。\n" NOR;
k=fun*3;
} else if( fun>=41&&fun<=60) {
msg=CYN "$N突然唸着：" NOR ;
msg+= HIR "三～昧～真～火！\n" NOR;
msg += HIW "$N祭起一团火球轰向$n。\n" NOR;
k=fun*4;
} else if( fun>=61&&fun<=80) {
msg=CYN "$N突然唸着：" NOR ;
msg+= HIR "天～火！"+HIY+"地～火！"+HIB+"阴～火！\n" NOR;
msg += HIW "$N祭起三团火球轰向$n。\n" NOR;
k=fun*6;
} else if( fun>=81 && me->query("adv_dancer")==1)
{
msg=CYN "$N突然大喊：" NOR ;
msg+= HIR "怒"+HIW+"～"+HIR+"火"+HIW+"～"+HIR+"烧"+HIW+"～"+HIR+"尽"+HIW+"～"+HIR+"九"+HIW+"～"+HIR+"重"+HIW+"～"+HIR+"天！\n" NOR;
msg += HIW "只见$n身旁尽是无边无际的火海。\n" NOR;
k=fun*12;
}
else{
msg=CYN "$N突然唸着：" NOR ;
msg+= HIM "熔～岩～炼～狱～波！\n" NOR;
msg += HIW "$N祭起一片火海轰向$n。\n" NOR;
k=fun*8;
}
        message_vision(msg, me, target);
        me->set_temp("fireball",1);
call_out("act1",6,msg,target,me);
       return 1;
}
int act1(string msg,object target,object me){
      me->set_temp("fireball",0);
if(me->is_fighting(target)) {
      if(80>random(100))
        {
                msg = HIM "结果$p惨被$P轰中！\n" NOR;
 target->receive_wound("kee",k+100);
 target->apply_condition("burn",random(10) +fun/10);
 
        } else {
                msg = HIM "可是被$p躲开了。\n" NOR;
        }
        me->add("atman",-50);
        message_vision(msg, me, target);
		COMBAT_D->report_status(target);
if(fun<100) spell_improved("fireball",random(500));
}
        return 1;
}
