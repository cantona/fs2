inherit ROOM;
#include <ansi.h>

void create()
{
	set( "short", HIW"【"HIY"狂想乐透彩券投注站"HIW"】"NOR );
	set( "long", @LONG

    这里人来人往十分热闹, 每人手里都拿着签注单, 正专心地
选着自己的幸运号码, 但也有些人拿着单子四处张望, 想要参考
别人的号码, 这里被挤的水泄不通, 你不禁想出去喘口气, 结果
被一波一波的人潮挤的无法动弹, 大喊救命!
    旁边有个小布告栏(board)。

LONG);
	set("item_desc", ([
		"board" : "
	pick  <号码> 购买彩券
	auto         快选五张彩券
	list  <期数> 查询购买号码
	claim <期数> 兑奖

	每天晚上九点准时开奖
	头奖除奖金之外另附十名替身
",
	]) );
	set( "no_kill", 1 );
	set( "no_fight", 1 );
	set( "objects", ([
		"/u/a/acky/lotto/lotto" : 1,
	]) );
	set( "exits", ([
		"north" : __DIR__"road3",
	]) );
	setup();
}
