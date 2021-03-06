// clanvd.c

#include <clan.h>
#include <ansi.h>
inherit F_SAVE;

//传回帮派列表 by ACKY
string *fs_clan()
{
	int clan_sum, o=0, i;
	mixed *file;
	string *clan_idt;
	file = get_dir("/open/clan/",-1);
	clan_sum = sizeof(file);
	clan_idt = allocate(clan_sum);
	for( clan_sum=0; clan_sum<sizeof(file); clan_sum++ )
		if( file[clan_sum][1]==-2 )	{
			clan_idt[o] = file[clan_sum][0];
			o++;
		}
	clan_idt = filter_array(clan_idt, "filter_clan", this_object());
	return clan_idt;
}

int filter_clan( string clan ) //将不要显示的帮派加在这里即可 by ACKY
{
	if( !clan || clan=="std" || clan=="area" || clan=="new_heaven" || clan=="demon_castle" )
		return 0;
	else
		return 1;
}

int clan_log() //纪录帮派钱庄存款 by ACKY
{
	int o, clan_sum;
	string *clan_id, m;
	sscanf (ctime (time()), "%s %s %d %d:%d:%d %d", m, m, o, o, o, o, o);
	clan_id = fs_clan();
	clan_sum = sizeof(clan_id);
	for( o=0; o<clan_sum; o++ )
		log_file("clan/"+clan_id[o]+"/BANK-"+ctime(time())[4..6], sprintf("%s 钱庄存有%10d两黄金 帮众存有%10d两黄金\n"
		,ctime(time())[0..15],CLAN_D->clan_query(clan_id[o],"gold"),CLAN_D->clan_query(clan_id[o],"member_gold")));

	return 1;
}

int clan_develop() //per 2 hour = 一个月 by ACKY
{
	int o, clan_sum, prestige, temp;
	string *clan_id;
	clan_id = fs_clan();
	clan_sum = sizeof(clan_id);
	for( o=0; o<clan_sum; o++ )	{
		prestige = CLAN_D->clan_query( clan_id[o], "prestige" )/10000;
		temp     = prestige*10000;
		if( CLAN_D->clan_query(clan_id[o],"gold") > temp ) {
			CLAN_D->add_money  ( clan_id[o], -temp );
			CLAN_D->add_clanset( clan_id[o], "develop", random(prestige*4) );
		}
		log_file("clan/"+clan_id[o]+"/DEVELOP-"+ctime(time())[4..6], sprintf("%s 帮派声望%6d\n"
			,ctime(time())[0..15],CLAN_D->clan_query(clan_id[o],"develop")));
	}
	return 1;
}

int clan_tax() //per 1 hour = 半个月 by ACKY
{
	int o, i, sum, clan_sum, tax, money, bank;
	object *user = users();
	string *clan_id;
	clan_id = fs_clan();
	clan_sum = sizeof(clan_id);
	for( o=0; o<clan_sum; o++ )	{	//运算出可先取得的值,避免重复计算
		sum = sizeof(user);
		tax = CLAN_D->clan_query(clan_id[o],"tax");

		for( i=0; i<sum; i++ )	{
			bank = user[i]->query("bank/coin");
			if( user[i]->query("clan/id")==clan_id[o] && bank>0 && !wizardp(user[i]) ) {
				money = bank/10000*tax/100;
				user[i]->add("bank/coin", -money*10000 );
				CLAN_D->add_money( clan_id[o], money );
			}
		}
	}
	return 1;
}

int clan_prestige() //per 12 hour = 每六个月 发钱给帮派龙头 by ACKY
{
	int o, clan_sum, money;
	string *clan_id;
	clan_id = fs_clan();
	clan_sum = sizeof(clan_id);	//运算出可先取得的值,避免重复计算
	for( o=0; o<clan_sum; o++ )	{
		if( CLAN_D->clan_query( clan_id[o], "prestige_best" )==1 )	{
			money = CLAN_D->clan_query( clan_id[o], "cost" );
			money = money*6 + random(money);
			tell_object(users(),HIY"\n\t\t.____奉天承运__皇帝诏曰____.\n\n"+
				"\t天下第一帮"+CLAN_D->clan_query( clan_id[o], "name" )+"创帮有成，特犒赏黄金"+CHINESE_D->chinese_number(money)+"两。"+
				"\n\n\t\t\t\t\t\t钦此\n\n"NOR);
			CLAN_D->add_money( clan_id[o] , money );
		}
	}
	return 1;
}

int clan_cost()	//帮派开销 per 2 hour = 一个月 by ACKY
{	int o, clan_sum, cost;
	string *clan_id;
	clan_id = fs_clan();
	clan_sum = sizeof(clan_id);
	for( o=0; o<clan_sum; o++ )	{ //运算出可先取得的值,避免重复计算
		cost = CLAN_D->clan_query( clan_id[o], "cost" );
		if( CLAN_D->clan_query(clan_id[o],"gold") > cost )
			CLAN_D->add_money( clan_id[o], -cost );
		else {
			CLAN_D->clan_set   ( clan_id[o], "gold"      ,  0 );
			CLAN_D->add_clanset( clan_id[o], "develop"   ,-10 );
			CLAN_D->add_clanset( clan_id[o], "weapon"    ,-10 );
			CLAN_D->add_clanset( clan_id[o], "armor_tech",-10 );
		}
	}
	return 1;
}

int clan_stop_time(string clan)	//第一种停止模式-时间到
{
	int kill_1,kill_2,money;
	string clan2,clan_win,clan_lose,clan_cwin,clan_close;
	clan2 = CLAN_D->clan_query(clan,"clan_war");
	kill_1 = CLAN_D->clan_query(clan,"war_kill");
	kill_2 = CLAN_D->clan_query(clan2,"war_kill");
	if( kill_1 > kill_2 )	{
		clan_win = clan;
		clan_lose = clan2;
		money = kill_1*10000+100000;
	}
	else if( kill_1 < kill_2 )	{
		clan_win=clan2;
		clan_lose=clan;
		money = kill_2*10000+100000;
	}
	else	{
		clan_cwin=CLAN_D->clan_query(clan,"name");
		clan_close=CLAN_D->clan_query(clan2,"name");
		shout(HIR"\n\t轰动武林～～惊动万教～～\n\t"
			HIC+clan_cwin+HIR"与"HIM+clan_close+HIR"的帮派对决终于结束……\n\t"
			HIC+clan_cwin+HIR"总共杀掉"HIM+clan_close+HIG""+CHINESE_D->chinese_number(kill_1)+HIR"位帮众，\n\t"
			HIM+clan_close+HIC"总共杀掉"HIC+clan_cwin+HIG""+CHINESE_D->chinese_number(kill_2)+HIR"位帮众，\n\t"
			HIR+"双方皆死伤惨重，故以平手作收。\n"NOR);
		CLAN_D->clan_set(clan,"war",0);
		CLAN_D->clan_set(clan2,"war",0);
		CLAN_D->clan_set(clan,"war_kill",0);
		CLAN_D->clan_set(clan2,"war_kill",0);
		CLAN_D->clan_set(clan,"clan_war","无");
		CLAN_D->clan_set(clan2,"clan_war","无");
		CLAN_D->clan_set(clan,"clan_war_end_time",0);
		CLAN_D->clan_set(clan2,"clan_war_end_time",0);
		return 1;
	}
	clan_cwin=CLAN_D->clan_query(clan_win,"name");
	clan_close=CLAN_D->clan_query(clan_lose,"name");
	shout(HIR"\n\t轰动武林～～惊动万教～～\n\t"
		HIC+clan_cwin+HIR"与"HIM+clan_close+HIR"的帮派对决终于结束……\n\t"
		HIC+clan_cwin+HIR"总共杀掉"HIM+clan_close+HIG""+CHINESE_D->chinese_number(kill_1)+HIR"位帮众，\n\t"
		HIM+clan_close+HIC"总共杀掉"HIC+clan_cwin+HIG""+CHINESE_D->chinese_number(kill_2)+HIR"位帮众，\n\t"
		HIM+clan_close+"战败，必须赔偿"HIC+clan_cwin+HIY""+CHINESE_D->chinese_number(money)+"两黄金"HIR+"。\n"NOR);
	CLAN_D->clan_set(clan_win,"war",0);
	CLAN_D->clan_set(clan_lose,"war",0);
	CLAN_D->clan_set(clan_win,"war_kill",0);
	CLAN_D->clan_set(clan_lose,"war_kill",0);
	CLAN_D->clan_set(clan_win,"clan_war","无");
	CLAN_D->clan_set(clan_lose,"clan_war","无");
	CLAN_D->clan_set(clan_win,"clan_war_end_time",0);
	CLAN_D->clan_set(clan_lose,"clan_war_end_time",0);
	CLAN_D->add_money(clan_win,money);
	CLAN_D->add_money(clan_lose,-money);
	CLAN_D->add_clanset(clan_win,"win",1);
	CLAN_D->add_clanset(clan_lose,"lose",1);
	return 1;
}

int clan_stop_kill(string clan_lose)   //第二种停止模式..帮主被作掉......
{
 string clan_win,clan_master,c1_number,cmoney,clan_close,clan_cwin;
 int clan2_number,clan_money;
 clan_win=CLAN_D->clan_query(clan_lose,"clan_war");
 clan_master=CLAN_D->clan_query(clan_lose,"master");
 clan2_number=CLAN_D->clan_query(clan_win,"war_kill");
 clan_money=clan2_number*1000+100000;
 c1_number=sprintf("%d",clan2_number);
 cmoney=sprintf("%d",clan_money);
 clan_cwin=CLAN_D->clan_query(clan_win,"name");
 clan_close=CLAN_D->clan_query(clan_lose,"name");
 shout(HIC"\t号外!!号外!!轰动武林的"+HIG+clan_cwin+HIC+"和"+HIG+clan_close+HIC+"的帮派对决总于有了结果了!!!!\n"+HIG+
	 "       "+clan_cwin+HIC+"杀掉了"+HIG+clan_close+HIC+"帮派帮主:"+HIG+clan_master+HIC+"\n"+
	 "\t一时之间"+HIG+clan_close+HIC+"因为帮主被做掉,以致军心大乱!!!一路败退!!!\n"+HIC+
	 "\t最后判定::"+HIG+clan_close+HIC+"必须要付出"+cmoney+"两的赔偿金!!!\n"NOR);
   CLAN_D->clan_set(clan_win,"war_kill",0);
   CLAN_D->clan_set(clan_lose,"war_kill",0);
   CLAN_D->clan_set(clan_win,"clan_war","无帮派");
   CLAN_D->clan_set(clan_lose,"clan_war","无帮派");
   CLAN_D->clan_set(clan_win,"clan_war_end_time",0);
   CLAN_D->clan_set(clan_lose,"clan_war_end_time",0);
   CLAN_D->clan_set(clan_win,"war",0);
   CLAN_D->clan_set(clan_lose,"war",0);
   CLAN_D->add_money(clan_win,clan_money);
   CLAN_D->add_money(clan_lose,-clan_money);
   return 1;
}

int clan_stop_money(string clan_lose,int money)   //第三种停止模式..求和......
{
 string clan_win,clan_master,c1_number,cmoney,clan_close,clan_cwin;
 int clan2_number,clan_money;
 clan_win=CLAN_D->clan_query(clan_lose,"clan_war");
 clan_master=CLAN_D->clan_query(clan_lose,"master");
 clan_cwin=CLAN_D->clan_query(clan_win,"name");
 clan_close=CLAN_D->clan_query(clan_lose,"name");
 cmoney=sprintf("%d",money);
 shout(HIC"\t号外!!号外!!轰动武林的"+HIG+clan_cwin+HIC+"和"+HIG+clan_close+HIC+"的帮派对决总于有了结果了!!!!\n"+HIG+
	 "   "+clan_cwin+HIC+"愿接受"+HIG+clan_close+HIC+"的帮主"+HIG+clan_master+HIC+"求和!!!双方同意结束战斗状态!!!\n"+HIC+
	 "\t最后"+HIG+clan_close+HIC+"愿给予"+HIG+clan_cwin+HIC+"共"+cmoney+"两的求和金!!!\n"NOR);
   CLAN_D->clan_set(clan_win,"war",0);
   CLAN_D->clan_set(clan_lose,"war",0);
   CLAN_D->clan_set(clan_win,"war_kill",0);
   CLAN_D->clan_set(clan_lose,"war_kill",0);
   CLAN_D->clan_set(clan_win,"clan_war","无");
   CLAN_D->clan_set(clan_lose,"clan_war","无");
   CLAN_D->clan_set(clan_win,"clan_war_end_time",0);
   CLAN_D->clan_set(clan_lose,"clan_war_end_time",0);
   CLAN_D->add_money(clan_win,money);
   CLAN_D->add_money(clan_lose,-money);
   return 1;
}
