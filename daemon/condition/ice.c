//ice
// bleeding.c
#include <combat.h>
#include <ansi.h>
inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{											
	if( !living(me) ) {
		message("vision", me->name() + "被冰冻之霜活活冻死了了!!\n",
			environment(me), me);

	} else if( duration > 6 ) {
		message("vision", me->name() + HIR"身上受冰霜之气侵袭。\n"NOR,
			environment(me), me);
		me->receive_damage("kee",300);
		me->receive_damage("sen",300);
		me->receive_damage("gin",300);

	} else if( duration > 2 ) {
		message("vision", me->name() + "身上不断冒出阵阵寒意。\n",
			environment(me), me);
		me->receive_damage("kee",200);
		me->receive_damage("sen",200);
		me->receive_damage("gin",200);

	} else {
                tell_object(me, HIR"寒意渐渐消失。\n"NOR);
                message("vision", me->name() + "身上的冰冻之感渐渐消失。\n",
                        environment(me), me);
                me->receive_damage("kee",100);
                me->receive_damage("sen",100);
                me->receive_damage("gin",100);
	}    
	me->apply_condition("ice", duration - 1);
	COMBAT_D->report_status(me);
        if( duration < 1)
	 	return 0;
	return 1;
}
