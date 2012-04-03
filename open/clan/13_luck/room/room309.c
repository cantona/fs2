inherit ROOM;
void create() {
	set( "short", "绝世匕首室" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file2"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "owner", "kanako" );
	set( "build", 10284 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room266",
	]) );
	set( "long", @LONG

    杀手，又是那可怕的杀手，一身魔气杀定人无数，使出玄武，白虎
，青龙，朱雀，就等着去见黑白伯伯了，可见这武器的来处不易，尤其
是看到笨杀手飞燕，一身杀气无穷，见到他走过来大家一定要危恐避之
，不然下一个死亡的就是你。

LONG);
	setup();
	replace_program(ROOM);
}
