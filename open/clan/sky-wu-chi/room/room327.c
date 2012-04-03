inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-7" );
	set( "object", ([
		"amount5"  : 5000,
		"file4"    : "/open/killer/obj/s_pill",
		"file2"    : "/open/killer/obj/s_pill",
		"file5"    : "/open/killer/obj/s_pill",
		"amount4"  : 4000,
		"amount3"  : 2000,
		"file3"    : "/open/killer/obj/s_pill",
		"amount2"  : 5000,
		"file1"    : "/open/killer/obj/s_pill",
		"amount1"  : 2000,
	]) );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 10080 );
	set( "exits", ([
		"southwest" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是东北房丹药房,这个房间的丹药都是由miffy 和其他好友帮忙收集而成
因为丹药的难以取得,所以更显得此丹药的难能可贵,而由此出去的丹药
也都能够发挥他其最大的功用,救赎万物,因此此大楼的主人医术也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
