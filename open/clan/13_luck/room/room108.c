inherit ROOM;
void create() {
	set( "short", "靶场" );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file4"    : "/open/tendo/obj/shoe",
		"amount2"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
	]) );
	set( "build", 11232 );
	set( "light_up", 1 );
	set( "owner", "acomidy" );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room80",
	]) );
	set( "long", @LONG
来到此..看到众多的靶场..一定又来到acomidy 的练习箭法的地方..
有75公尺靶场..175靶场..跟300靶场..最后还有1500公尺的描准射击..
准备想发明一些新绝招..等待exp 300one的到来..
也期待伟大的巫师能给射手一些新招式..所以我一直没有去解更高阶的灵气
怕以后会有凤凰之气的出现..addoil
LONG);
	setup();
	replace_program(ROOM);
}
