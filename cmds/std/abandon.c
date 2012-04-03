// abandon.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	if( !arg ) return notify_fail("你要放弃哪一项技能？\n");
	arg = lower_case(arg);

        if (!me->query_skill(arg,1) && !me->query_learned(arg))
		return notify_fail("你并没有学过这项技能。\n");
	if( !me->abandon_skill(arg) )
		return notify_fail("你早就放弃这项技能了。\n");

	if( arg == "spiritism" )
		me->delete("spiritism");
	write("你决定放弃继续学习" + to_chinese(arg) + "。\n");
	return 1;
}

int help()
{
	write(@TEXT
指令格式：abandon <技能名称>

放弃一项你所学的技能，注意这里所说的「放弃”是指将这项技能从你人物的资料中
删除，如果你以后还要练，这就爱莫能助了.

这个指令使用的场合通常是用来删除一些「不小心”练出来的技能，由于我们假设你
的人物随时都会从他／她的各种动作、战斗中学习，因此有些技能会因为你经常地使
用而出现在你的技能列表中，这个人物就必须花费一些精神去「记住”所学过的一切
，然而，人的资质各有不同，灵性高的人能够学习许多技能而成为多才多艺的才子，
灵性较差的人就只能专心于特定几项技能，如果你学的技能种类太多，超过你的灵性
，你会发现人物的学习速度将比只学几种技能的人慢，超过越多，学习效果低落的情
况越严重，这种情形就像是一个学期同时选修太多学分，虽然你仍然可以凭着超人的
意志力练下去，不过这将会多花费你许多宝贵的时间。

  注意: 如果一旦放弃了某项技能, 将无法再学回来.
TEXT
	);
	return 1;
}
