inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-2" );
	set( "object", ([
		"amount7"  : 50000,
		"amount8"  : 50000,
		"file4"    : "/open/killer/obj/bellstar",
		"amount6"  : 50000,
		"amount1"  : 50000,
		"file2"    : "/open/killer/obj/bellstar",
		"file1"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount4"  : 50000,
		"file6"    : "/open/killer/obj/bellstar",
		"file7"    : "/open/killer/obj/bellstar",
		"file9"    : "/open/killer/obj/bellstar",
		"amount5"  : 50000,
		"amount9"  : 50000,
		"amount2"  : 50000,
		"file8"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10077 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是东房杀意锥房,这个房间的武器都是由miffy 和其他好友帮忙收集而成
因为杀意锥的难以取得,所以更显得此武器的难能可贵,而由此出去的武器
也都能够发挥他其最大的功用,吸取杀气,因此此大楼的主人杀气也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
