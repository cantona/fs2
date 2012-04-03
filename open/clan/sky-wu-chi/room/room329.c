inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-9" );
	set( "object", ([
		"amount3"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_boots",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_hands",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 11040 );
	set( "exits", ([
		"northeast" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是西南房杂器房,这个房间的武器都是由miffy 和其他好友帮忙收集而成
因为杂器的难以取得,所以更显得此武器的难能可贵,而由此出去的武器
也都能够发挥他其最大的功用,巧妙组合,因此此大楼的主人头脑也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
