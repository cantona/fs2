#include <ansi.h> 
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        object ob; 
if(me->is_fighting()) {
target = offensive_target(me);
} else {
   if(!target) return notify_fail("你要打谁？\n");
}
        if(me->query("family/family_name")!="冥蛊魔教")
        return notify_fail("你不是魔教徒。\n");
        if(!ob = present("faint poison",me))
                return notify_fail("你的身上没有一刻香。\n");
	if( environment(me)->query("no_fight") )
		return notify_fail("这里不准战斗。\n");
	if( target->query("no_kill") )
		return notify_fail("这个家伙你不能动就是不能动。\n");
     if(target->is_busy())
     return notify_fail("敌人 BUSY 中，快攻击吧\n");

       msg=HIY "$N从口中放出迷烟，往$n吹去！\n" NOR;
       me->start_busy(1);        
if(80>random(100)) {
        msg+= GRN "$n一不留神，吸到迷烟，行动变缓了。\n" NOR;
 target->start_busy(3);
        } else {
        msg+=HIG "$n识破了$N的毒招，身子一侧，避了开去。\n" NOR;
        }
        message_vision(msg, me, target);
        me->kill_ob(target);
        target->kill_ob(me);
        ob->add_amount(-1);
        return 1;
}
 
