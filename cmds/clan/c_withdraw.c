// by ACKY 04/18/00

int help( object me )
{
	write("
	c_withdraw <数量> <货币种类>：于帮派钱庄提款。

		   货币种类：
		 	    diamond ： 钻石
		 	    cash    ： 银票
			    gold    ： 黄金

	帮派存款少于一百万两黄金时, 不提供此服务。
");
	return 1;
}

int main( object me, string arg )
{
	int amount, value;
	object n_money;
	string kind, clan_id;

	if( !me->query("clan" ) ) return 0;

	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("此处并非贵帮之地盘。\n");

	clan_id = me->query("clan/id");

	if( file_name(environment(me)) != CLAN_D->clan_query( clan_id, "bank" ) )
		return notify_fail( "此处并非钱庄。\n" );

	if( !arg )
		return "/cmds/clan/c_deposit.c"->balance( me );

	if( sscanf( arg, "%d %s", amount, kind ) != 2 )
		return help(me);

        if( file_size("/obj/money/"+kind+".c") < 0 )
                return notify_fail("钱庄内没有这种货币。\n");

        if( amount < 1 )
                return notify_fail("提款一次至少要一个。\n");

	value = call_other( "/obj/money/"+kind, "query", "base_value" );

	if( value < 10000 )
                return notify_fail("钱庄内没有这种货币。\n");

        value /= 10000;
        value *= amount;

        if( me->query("clan/bank") < value || value < 1 )
		return notify_fail("您在钱庄里没有存这么多钱。\n");

	if( value > 1000000 )
		return notify_fail( "金额不得一次提领超过黄金一百万两。\n" );

        if( CLAN_D->clan_query( clan_id, "gold" ) < 1000000 )
		return notify_fail("目前贵帮周转不灵，无法提款。\n");

        me->add( "clan/bank", -value );
	CLAN_D->add_money( clan_id, -value );
	CLAN_D->clan_set( clan_id, "member_gold", CLAN_D->clan_query( clan_id, "member_gold" )-value );

        n_money = present(kind + "_money", me);

        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(me);
                n_money->set_amount(amount);
        }
        else
                n_money->add_amount(amount);

        write( sprintf("您一共提出%s%s%s。\n",
		chinese_number(amount),
		n_money->query("base_unit"),
		n_money->query("name") ) );

        return 1;
}

