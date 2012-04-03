// bcheck.c
// By LinaSi-Inverse-( 1999 )

inherit F_CLEAN_UP;
#include <ansi.h>

int main(object me, string arg)
{
    object ob;
    string Nbow;
    if( !arg ) return notify_fail("[指令格式]：bcheck <弓>\n");
    if(sscanf(arg, "%s",Nbow) !=1 )
    return notify_fail("[指令格式]：bcheck <弓>\n");
    if( me->query("family/family_name") != "射日派")
    return notify_fail("你不是射日派的人。\n");
    if( !ob = present(Nbow, me) )
    return notify_fail("你身上没有这把弓 ...。\n");
    if( ob->query("skill_type") != "archery" )
    return notify_fail("看清楚那不是弓 .....！\n");
    if(ob->query("arrow/id") != "none")
    write("剩余箭数：" HIC + ob->query("arrow/amount") + NOR "支"
    +ob->query("arrow/name")+ "(" +ob->query("arrow/id")+ ")\n" );
    else  write("现在"+ob->query("name")+"上没有任何弓箭\n");

return 1;
}
int help (object me)
{
        write(@HELP
[指令格式]：bcheck <bow>

[相关指令]：holdup, unhold
HELP
);
        return 1;
}

