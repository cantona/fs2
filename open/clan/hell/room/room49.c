inherit ROOM;
void create() {
	set( "short", "$HIY$香蕉周刊$HIR$无靶儿$HIW$WC$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"file1"    : "/open/ping/obj/poison_pill",
	]) );
	set( "owner", "blur" );
	set( "build", 11484 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room34.c",
		"east"      : "/open/clan/hell/room/room136",
		"west"      : "/open/clan/hell/room/room51.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
香蕉周刊虽然没有位女性员工...
但还是在公司外盖了间女用WC
其实这间WC就是这本杂志内容的最大供应商....
其实...香蕉周刊早就在推广偷拍行□....
只是小璩的VCD被独家标走...不然这次也给它大削一笔...
不过...根据大飞神秘友人透露可靠消息...
最近香蕉周刊拍到知名红星天X(又名X心)的Bembem画面...
相信不久后就会公诸于世....wahaha
LONG);
	setup();
	replace_program(ROOM);
}
