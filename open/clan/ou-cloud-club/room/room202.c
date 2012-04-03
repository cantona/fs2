inherit ROOM;
void create() {
	set( "short", "千羽居" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/daemon/class/fighter/armband",
		"file3"    : "/open/love/obj/cloth1",
		"file2"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
	]) );
	set( "build", 6313 );
	set( "item_desc", ([
		"漂亮的海" : @ITEM
ITEM,
	]) );
	set( "light_up", 1 );
	set( "owner", "lnergy" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room203",
	]) );
	set( "long", @LONG
这是段家小子lnergy的家,
他是水手出身,水上功夫了得.
素有浪里白龙之称,一张俊俏
的脸,深受众女子的爱慕
他与懒虫是生死之交...一同
闯荡江湖多年,最近生出退隐
之心,在这个风光明媚的湖边
搭起这间草庐,做其退隐之处
LONG);
	setup();
	replace_program(ROOM);
}
