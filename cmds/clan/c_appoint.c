// by ~babe~ (小雪球) ^O^
//重新写who的load法,改善改变等级会掉东西的缺点 by bss 2/13/2000
#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
	string  id, title;
	int  rank_o,rank, temp,i;
	object who,*inv,ob,user;
	if( !str )
		return notify_fail("指令格式：c_appoint <id> <阶级> <职衔>\n");
	if( sscanf(str, "%s %d %s", id, rank, title) != 3 )
		return notify_fail("指令格式：c_appoint <id> <阶级> <职衔>\n");
	if( me->query("clan/rank") > 4 )
		return notify_fail("您无权使用此指令。\n");
	if( strlen(title) > 10 )
		return notify_fail("职衔最长只能五个字。\n");
	if( me->query("clan/rank") >= rank)
		return notify_fail("您只能任命位阶比您低的职位。\n");
	if( (rank<2) || (rank>7) )
		return notify_fail("所能任命的阶级只能为(2~7)六级。\n");
	if( !who = FINGER_D->acquire_login_ob(id) )
		return notify_fail("没有这个人。\n");
	if( !find_player(id))	{
		ob="/adm/daemons/cappointd.c"->get_user_ob(id);
		user="/adm/daemons/cappointd.c"->get_user_body(ob);
		user->set_temp("link_ob", ob);
		user->setup();
		who=user;
	}	else	{
		who=find_player(id);
	}	if( !who->is_character() || me->query("id")==id )
			return notify_fail("请不要开玩笑。\n");
		if( who->query("clan/name") != me->query("clan/name") )
			return notify_fail("对方并不和你同帮派。\n");
		switch( rank ) {
		case 2: temp = 4000000; break;
		case 3: temp = 2000000; break;
		case 4: temp = 1000000; break;
		case 5: temp =  500000;	break;
		case 6: temp =       0;	break;
		case 7: temp =       0;	break;
	}
	if( me->query("clan/rank") >= who->query("clan/rank") )
		return notify_fail("您只能任命位阶比您低的职位。\n");
	if( who->query("combat_exp") < temp )
		return notify_fail("对方的江湖历练不足以胜任此职务。\n");
	if( !CLAN_D->clan_promote(me->query("clan/id"), who->query("id"), "level"+rank))
		return notify_fail("此阶级已额满。\n");
	rank_o = who->query("clan/rank");
	who->set("clan/rank",rank);
	who->set("clan/title",title);
	if( rank < rank_o )
		CHANNEL_D->do_channel(me, "ct",
			"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t提拔"+
			who->query("name")+"("+who->query("id")+")为「"HIC+who->query("clan/title")+HIY"”。"NOR);
	else if( rank > rank_o )
		CHANNEL_D->do_channel(me, "ct",
			"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t将"+
			who->query("name")+"("+who->query("id")+")贬为「"HIC+who->query("clan/title")+HIY"”。"NOR);
	else
		CHANNEL_D->do_channel(me, "ct",
			"\n\t我 -「"HIW+me->query("clan/title")+HIY"”郑重的宣布……\n\t将"+
			who->query("name")+"("+who->query("id")+")调任「"HIC+who->query("clan/title")+HIY"”。"NOR);
	who->save();
	return 1;
}

int help( object me )
{
	write(@HELP
	c_appoint <ID> <位阶> <职衔>

	任命某人的位阶及职衔，高阶者可以任命低阶者。

	<位阶> 请输入数字(2~7)
	<职衔> 请输入中文(1~5字)

	各阶级之人数限定 -
		阶级２：二人	经验值-四百万
		阶级３：四人	经验值-二百万
		阶级４：八人	经验值-一百万
		阶级５：不限	经验值-五拾万
		阶级６：不限	经验值-　不限
		阶级７：不限	经验值-　不限
HELP    );
	return 1;
}
