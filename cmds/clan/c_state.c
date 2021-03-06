// c_state by ACKY 04/13/00

#include <ansi.h>
inherit F_CLEAN_UP;

string get_rank_list( string id, int rank )
{
	string *list;
	int i;

	list = CLAN_D->clan_query(id, "level"+rank);
	if( !i = sizeof(list) )
		return "无";
	id = "";
	while(i--) {
		if( i==sizeof(list)-5 )
			id += "\n\t\t  ";
		id += list[i];
		if(i) id += "，";
		else id += "。";
	}
	return id;
}

string level( string id, string str )
{
	int i, level;
	i = CLAN_D->clan_query(id,str);
	for( level=0; i>0; level++ )
		i-= (level)*(level);
	level-=2;
	if( level < 0 )	level = 0;
	return CHINESE_D->chinese_number(level);
}

string ally( string id )
{
	int	i;
	string	ally, *list;

	list = CLAN_D->clan_query( id, "ally" );
	if( !i = sizeof(list) )
		return "无";
	ally = "";
	while(i--) {
		if( i==sizeof(list)-5 )
			id += "\n\t\t　　　";
		if( !CLAN_D->have_clan( list[i] ) ) {
			CLAN_D->clan_set( id, "ally", list-({list[i]}) );
			continue;
		}
		ally += "【" + CLAN_D->clan_query( list[i], "name" ) + "】";
	}
	return ally;
}

string room( string id, string item )
{
	string	room;
	object	ob;

	if( !room = CLAN_D->clan_query( id, item ) )
		return "无";
	if( !ob = find_object(room) )
		return "无";
	return trans_color(ob->short());
}

int main( object me )
{
	string list="", str="无", tmp, id;
	object *glist, ob;
	int i,money,bank,level;

	if( !me->query("clan" ) ) return 0;
	if( wizardp(me) ) {
		if( CLAN_D->what_clan_area(me) == "NULL" )
			return notify_fail( "此处并非帮派区域。\n" );
		id = CLAN_D->what_clan_area(me);
	}
	else {
		if( me->query("clan/rank") > 5 )
			return notify_fail("您无权使用此指令。\n");
		id = me->query("clan/id");
	}

	money  = sizeof(get_dir(CLAN_D->get_clan_dir(me)+"room/"))*20;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"npc/"))*2;
	money += sizeof(CLAN_D->clan_query(id, "members"))*10;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"weapon/"))*1;
	money += sizeof(get_dir(CLAN_D->get_clan_dir(me)+"armor/"))*1;
	CLAN_D->clan_set( id, "cost", money );
	if(CLAN_D->clan_query(id,"alert"))
		str="警戒中";

	list+=sprintf(HIM"\n	　　.__________"HIY"%s(%s)状态一览表"HIM"__________.\n\n",me->query("clan/name"), id );
	list+=sprintf(HIW"□ 人事 -\n");
	list+=sprintf(HIW"	阶级- １："NOR"%s。\n",CLAN_D->clan_query(id, "master"));
	list+=sprintf(HIW"	阶级- ２："NOR"%s\n",get_rank_list(id, 2));
	list+=sprintf(HIW"	阶级- ３："NOR"%s\n",get_rank_list(id, 3));
	list+=sprintf(HIW"	阶级- ４："NOR"%s\n",get_rank_list(id, 4));
	list+=sprintf(HIW"	玩家人数："NOR"%4d人\n",sizeof(CLAN_D->clan_query(id, "members")));
	list+=sprintf(HIW"	帮众人数："NOR"%4d人\n\n",sizeof(get_dir(CLAN_D->get_clan_dir(me)+"npc/")));
	list+=sprintf(HIY"□ 财务 -\n");
	list+=sprintf(HIY"	帮派存款总额："NOR"共计黄金%10d两\n",CLAN_D->clan_query(id,"gold"));
	i = CLAN_D->clan_query(id,"member_gold")/(CLAN_D->clan_query(id,"gold")/100);
	if( i > 100 )
		i = 100;
	list+=sprintf(HIY"	帮众存款比率："NOR"占总存款%10d％\n", i );
	list+=sprintf(HIY"	帮派目前税率："NOR"每回征收%10d％\n",CLAN_D->clan_query(id,"tax"));
	money = 0;
	glist=users();
	for(i=0;i<sizeof(users());i++)
		if( glist[i]->query("clan/id") == id )	{
			bank = glist[i]->query("bank/coin");
			if( bank > 0 )
				money += bank/10000*CLAN_D->clan_query(id,"tax")/100;
		}
	list+=sprintf(HIY"	此次征得税收："NOR"共计黄金%10d两\n", money );
	list+=sprintf(HIY"	帮派目前关税："NOR"每回黄金%10d两\n",CLAN_D->clan_query(id,"gatetax"));
	list+=sprintf(HIY"	帮派基本开销："NOR"每月黄金%10d两\n",CLAN_D->clan_query(id,"cost"));
	list+=sprintf(HIY"	帮派发展经费："NOR"每月黄金%10d两\n\n",CLAN_D->clan_query(id,"prestige"));
	list+=sprintf(HIG"□ 发展 -\n");
	list+=sprintf(HIG"	帮派威望："NOR"%6s级\n\n",level(id,"develop") );
	list+=sprintf(HIC"□ 区域 -\n");
	list += sprintf(HIC"\t区域规模: "NOR"%d\n", sizeof(get_dir("/open/clan/"+id+"/room/")) );
	list += HIC  "\t帮派核心: "NOR + room( id, "home" );
	list += HIC"\n\t帮派钱庄: "NOR + room( id, "bank" );
	list += HIC"\n\t帮派兵营: "NOR + room( id, "npc_room" );
	list += HIC"\n\t帮派闸门: "NOR + room( id, "gate" );
	list += HIC"\n\t帮派监狱: "NOR + room( id, "jail" );
	list+=sprintf(HIR"\n\n□ 外交 -\n");
	list+=sprintf(HIR"	同盟友好帮派："NOR"%s\n", ally( id ) );
	list+=sprintf(HIR"	帮派警戒状态："NOR"%s\n",str);
	list+=sprintf(HIR"	帮派战胜次数："NOR"%s回\n",CHINESE_D->chinese_number(CLAN_D->clan_query(id,"win")) );
	list+=sprintf(HIR"	帮派战败次数："NOR"%s回\n",CHINESE_D->chinese_number(CLAN_D->clan_query(id,"lose")) );
	me->start_more(list);
	return 1;
}

int help( object me )
{
	write("\n   c_state    ：帮派状况总览。

");
        return 1;
}
