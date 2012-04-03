// 帮派设定税率指令 by Chan 05/12/99
// 修正税率和时间 by ACKY

#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
	int num,value,num1;
	if( !str )
		return notify_fail("指令格式：cset_tax <税率>\n");
	if( me->query("clan/rank") > 2 )
		return notify_fail("您无权使用此指令。\n");
    num = atoi(str);
    if( num < 1 )
		return notify_fail("税率不得低于1%。\n");
	if( num > 90 )
		return notify_fail("税率不得高于90%。\n");
	CLAN_D->clan_set(me->query("clan/id"),"tax",num);
	CHANNEL_D->do_channel(me, "ct",
		"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t本帮税率调为百分之"+
		CHINESE_D->chinese_number(num)+"，\n\t税收将收入帮派钱庄，作为壮大本帮之用。"NOR);
    return 1;
}

int help( object me )

{
    write(@HELP

	cset_tax <税率>

	设定帮派税率(1~90)，

	定期每半个月收一次税。
	
HELP
    );
 return 1;
}

