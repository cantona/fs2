// wizlist.c

inherit F_CLEAN_UP;
#include <ansi.h>
int main(object me, string arg)
{
	string *list;
	int my_level, i, j;
	int ch;
	object ob;

	list = sort_array(SECURITY_D->query_wizlist(), 1);
   write(MUD_NAME + "目前的天神地鬼一共有 "+ (sizeof(list)-1) + " 位：(前面有 * 者表正在线上)\n");
	my_level=wiz_level(me);
        printf("----------------------------    "+HIW+" 天帝        地皇"+NOR+"   ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(manager)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------  "+HIM+"混世魔王    罗煞女王  "+NOR+"----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(guest)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
printf("\n----------------------------    "+HIC+"玉帝       修罗王"+NOR+"   ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(admin)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIY+"菩萨       夜叉王   "+NOR+"----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(arch)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIG+"天仙        判官"+NOR+"    ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(wizard)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIR+"护法        无常"+NOR+"    ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(apprentice)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/隐身") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------  "+HIB+"天兵天将    牛头马面"+NOR+"  ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(immortal)")
		printf("%c%-10s%s", (find_player(list[i])) ? ch:' ', list[i], ((j++)%7==6) ? "\n  " : "");
	write("\n");
	return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : wizlist
指令说明 :
           本指令用来查看目前狂想空间总共有多少个巫师。
HELP
    );
    return 1;
}
