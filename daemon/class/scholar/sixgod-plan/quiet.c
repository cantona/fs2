#include <ansi.h>
// by sueplan 寂静计
// busy型
int perform(object me,object target)
{
	int i, dec;
        object *all = me->query_enemy();

        if(!me->is_fighting())
        return notify_fail("只能在战斗中使用。\n");
        if( me->query("sen") < 100 )
		return notify_fail("你的精神不够，无法使用。\n");
// 不是儒门
        if( me->query("family/family_name") != "儒门")
        return notify_fail("不是儒生，不给你用咧！！^_^\n");
   if(all[i]->is_busy())
     return notify_fail("敌人正受你计谋所困,快趁机攻击吧!\n");
        me->add("sen",-20);
        me->add("force",-50);
   for( i = 0 ; i < sizeof(all) ; i ++ )
   {
      if(all[i]->query_temp("busy-plan")==3)
         return notify_fail("此计只能对同一人只能用三次。\n");
      message_vision( HIY + @LONG
$N使出了六韬奇略中的寂静计, $n跟本察觉不到自己已经面临危机!!!
LONG + NOR , me , all[i] );
        all[i]->start_busy(4);
     all[i]->add_temp("busy-plan",1);
   }
      me->start_busy(1);
      return 1;
}

