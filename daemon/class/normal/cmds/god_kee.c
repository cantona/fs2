// fight.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
        object obj, old_target;
        seteuid(getuid());
        if(!me->query("sec_kee"))
                return notify_fail("�������û��������\n");
        if((me->query("sec_kee")) != "god")
                return notify_fail("��ֻ��ʹ������֮����\n");
        SEC_KEE_D(me->query("sec_kee"))->kee_out(me,obj);
        return 1;
}
 
int help(object me)
{
   write(@HELP
 
ָ���ʽ��cmd god_kee
 
˵���������ָ����������������������Ļ������ܡ�
 
HELP
   );
   return 1;
}