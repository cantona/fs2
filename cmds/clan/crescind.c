// 帮派设定税率指令 by Chan 05/12/99

#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me)
{
        string str;
        str=CLAN_D->clan_tax();
if(wizardp(me))
        printf("传回值是 %s",str);
        return 1;
}
