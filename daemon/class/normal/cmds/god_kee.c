// fight.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        object obj, old_target;
        seteuid(getuid());
        if(!me->query("sec_kee"))
                return notify_fail("你的身上没有灵气。\n");
        if((me->query("sec_kee")) != "god")
                return notify_fail("你只能使用仙云之气。\n");
        SEC_KEE_D(me->query("sec_kee"))->kee_out(me,obj);
        return 1;
}
 
int help(object me)
{
   write(@HELP
 
指令格式：cmd god_kee
 
说明：用这个指令可以让你启动仙云灵气的护身功能。
 
HELP
   );
   return 1;
}
