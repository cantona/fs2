inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-8" );
	set( "object", ([
		"file5"    : "/open/ping/obj/poison_pill",
		"amount4"  : 5,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount5"  : 11,
		"amount3"  : 16,
		"amount1"  : 16,
		"file2"    : "/open/fire-hole/obj/w-pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 15,
	]) );
	set( "light_up", 1 );
	set( "owner", "miffy" );
	set( "build", 10716 );
	set( "exits", ([
		"northwest" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是东南房救命神丹房,这个房间的丹药都是由miffy 和其他好友帮忙收集而成
因为救命神丹的难以取得,所以更显得此神丹的难能可贵,而由此出去的神丹
也都能够发挥他其最大的功用,起死回生,因此此大楼的主人炼药也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
