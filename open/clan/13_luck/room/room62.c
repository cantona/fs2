inherit ROOM;
void create() {
	set( "short", "相思林" );
	set( "owner", "mad" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room65.c",
		"east"      : "/open/clan/13_luck/room/room63.c",
		"out"       : "/open/clan/13_luck/room/room61",
		"down"      : "/open/clan/13_luck/room/room116",
		"north"     : "/open/clan/13_luck/room/room64",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
杀意魔戒是相传产于天山派禁地的矿石所炼出的魔水晶所制成,平时是黑牙联的杀手
赖以成名的杀敌利器,一般人想要得到除了挑战黑牙联主席外别无他法,还要冒着被追杀
的危险,小敏帮主特地任命帮中的杀手收集一些戒指,收藏在这里以为备用
LONG);
	setup();
	replace_program(ROOM);
}
