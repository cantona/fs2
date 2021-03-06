// 分功化影身法 之 化 影
// 这一个command仅是提供玩家决定是否驱动化影术或是分功
// 所以并不会去扣掉玩家的任何东西，
// 一切消耗会在事后计算
// 因为此系统将会影响玩家的exp取得
#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        int i;
        
        if( !arg )
             return notify_fail("指令格式：cmd step shadow/share/none \n");
        
   if (arg=="none")
   {
        	if (me->query_temp("step-shadow"))
        	{
        		me->delete_temp("step-shadow");
        		return notify_fail("你已经停止使用化影术\n");
	        	}
        		if (me->query_temp("step-share"))
	        	{
        			me->delete_temp("step-share");
        			return notify_fail("你已经停止使用分功术\n");
	        	}
        		return notify_fail("笨蛋，你又没有使用身法\n");
       }
        if (arg=="shadow")
        {
             if (!me->query("dark-steps/shadow/enable"))
             	return notify_fail("你根本没有学过化影术\n");
             if (me->query_temp("step-shadow"))
                 return notify_fail("你已经使用了化影术\n");
             if (me->query_temp("step-share") ||  !me->query_temp("step-shadow"))
             {
                 message_vision(HIC"$N默运化影术的步法......。\n"NOR,me);
                 me->set_temp("step-shadow",1);
                 me->delete_temp("step-share",1);
                 return notify_fail("分功术的效用逐渐失去\n");
             }
        }
        if (arg=="share")
        {
             if (!me->query("dark-steps/share/enable"))
             	return notify_fail("你根本没有学过分功术\n");
             if (me->query_temp("step-share"))
                 return notify_fail("你已经使用分功术\n");
             if (me->query_temp("step-shadow")|| !me->query_temp("step-share"))
             {
                 message_vision(HIC"$N默运分功术的步法......。\n"NOR,me);
                 me->set_temp("step-share",1);
                 me->delete_temp("step-shadow",1);
                 return notify_fail("化影术的效用逐渐失去\n");
             }
       }
       return 0;
}

int help(object me)
{
    write(@HELP
 
指令格式： cmd step shadow/share/none
 
说明：决定使用分功化影身法的化影术或是分功术
      
HELP
);
     return 1;
}

