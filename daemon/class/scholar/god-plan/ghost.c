#include <ansi.h>
// By Swy 最后修正 QC 98/6/20
int perform(object me,object target)
{
	int i, dec;
        object *all = me->query_enemy();

        if(!me->is_fighting())
                return notify_fail("只能在战斗中使用。\n");
	if( me->query("sen") < 10 )
		return notify_fail("你的精神不够，无法使用。\n");
        if( me->query_skill("plan",1) < 30 )
		return notify_fail("你的谋略程度不够。\n");
      
 
 me->add("sen",-10);
// 不是儒门
   if( me->query("family/family_name") != "儒门")
      return notify_fail("不是儒生，不给你用咧！！^_^\n");
   for( i = 0 ; i < sizeof(all) ; i ++ )
   {
      if(all[i]->query_temp("ghost")==1)
         return notify_fail("对同一人只能用一次。\n");
      message_vision( RED + @LONG
$N突然地对使用$n欺敌之计，令$n手忙脚乱不知所措！
LONG + NOR , me , all[i] );
      all[i]->start_busy(2);
      all[i]->set_temp("ghost",1);
   }
      me->start_busy(1);
      return 1;
}

