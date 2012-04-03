// By Swy 最后修正 QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
    	int i, dam;
 	object *all = me->query_enemy();
    	if(!me->is_fighting())
		return notify_fail("火计只能在战斗中使用。\n");
	if( me->query("sen") < 30 )
		return notify_fail("你的精神力不够，无法用计。\n");
	if( me->query_skill("plan") < 120 )
		return notify_fail("你的谋略能力不够。\n");
	// 不是儒门
   	if( me->query("family/family_name") != "儒门")
    		return notify_fail("不是儒生，不给你用咧！！^_^\n");
    	me->add("sen",-20);

	me->start_busy(1);
	message_vision( HIR + @LONG
$N使用孔明兵法之中的火计！顿时现场一片的大火弥漫着四周 .....
LONG + NOR , me , target );
	for( i = 0 ; i < sizeof(all) ; i ++ ) 
	{
if( 80 > random(100))
		{
			if( me->query("quest/gold-fire") && (me->query("combat_exp")>3000000))
			{
             dam=all[i]->query("max_kee")/3;
if(dam > 1000) dam=1000;
				message_vision( HIR + @LONG
$N大叫‘极火一出，万物具焚’，使出融合了焚天魔王极火功的儒门火计
只见阵阵火龙贯穿了$n周身大穴，造成了重创。
LONG + NOR , me , all[i] );
				all[i]->apply_condition("burn",30);  
all[i]->receive_wound( "kee" ,dam);
COMBAT_D->report_status( all[i] );
			}
			else
			{
        dam=all[i]->query("max_kee")/5;
        if(dam > 800) dam=800;
				message_vision( HIR + @LONG
$n来不及逃跑，因此被$N放出了火焰烧伤了！
LONG + NOR , me , all[i] );
				all[i]->apply_condition("burn",10);  
			all[i]->receive_wound( "kee" ,dam);
// 强力的攻击不能再delay的人 by swy
// all[i]->start_busy(1);
			COMBAT_D->report_status( all[i] );
		}
			}
		else 
			message_vision( HIY + @LONG
$n见情势不妙，跳了开来，逃过了一劫！
LONG + NOR , me ,all[i] );
	}
	return 1;
}
