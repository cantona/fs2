inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-4" );
	set( "object", ([
		"file5"    : "/open/killer/obj/dagger",
		"amount2"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/killer/obj/dagger",
		"file2"    : "/open/killer/obj/dagger",
		"file3"    : "/open/killer/obj/dagger",
		"amount4"  : 1,
		"file4"    : "/open/killer/obj/dagger",
		"amount1"  : 1,
	]) );
	set( "build", 10023 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是南房灭神房,这个房间的武器都是由miffy 和其他好友帮忙收集而成
因为灭神匕的难以取得,所以更显得此武器的难能可贵,而由此出去的武器
也都能够发挥他其最大的功用,制敌机先,因此此大楼的主人武器技巧也是相当之高高到
绝世罕见的地步...

LONG);
	setup();
	replace_program(ROOM);
}
