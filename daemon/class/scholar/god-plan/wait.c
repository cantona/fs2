// By Swy 最后修正 QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	int i;
	object *all;
	if( me->query("sen") < 10 )
		return notify_fail("你的精神不够集中，无法用伏兵之计。\n");
	if( me->query_temp("invis")==1)
		return notify_fail("你尚未被发觉，不须再使用此计。\n");
// 儒门...
        if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
     if( me->query_skill("plan",1) < 75 )
		return notify_fail("你的谋略程度不够。\n");
    me->add("sen",-15);
	message_vision( CYN + @LONG
$N开始埋伏起来，等待时机！
LONG + NOR , me );
	me->set_temp("invis",1);
	all = all_inventory(environment(me));
	for( i = 0 ; i < sizeof(all) ; i ++ ) 
	if( living(all[i]) ) all[i]->set_temp("see-wait",me);
	return 1;
}



