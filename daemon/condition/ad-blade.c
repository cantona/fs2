// 秦啸天 - 狂龙七斩诀专用
#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power",1);
    tell_object( me , HIY"你身上的无极刀伤发作，雷霆刀意腐蚀全身，顿时四肢无力，使不出劲。\n" NOR);
    message("vision",HIC+me->name()+"体内"HIM"无极刀意"HIC"发作，雷霆电击游走全身，脸上显示痛苦无比的表情！\n"NOR,environment(me),me);
    me->add("kee",-350);
    me->add("eff_kee",-350);
    me->add("sen",-200);
    me->add("gin",-200);
    me->set_temp("no_power",1);
	me->set_temp("ad-blade",1);
    me->apply_condition("ad-blade",duration-1);
	COMBAT_D->report_status(me);
    if (duration < 1) {
    me->delete_temp("no_power",1);
	me->delete_temp("ad-blade",1);
    return 0;
    }
    return 1;
}
