inherit ROOM;
void create() {
	set( "short", "Ｂｅｂｅ的神秘小屋" );
	set( "owner", "bebe" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/spsword-4",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
		"file4"    : "/open/scholar/obj/icefan",
		"amount4"  : 1,
		"amount1"  : 1,
	]) );
	set( "item_desc", ([
		"c_room_item BEBE的客厅" : @ITEM
　　　　


　　　　　□[31m～～～这里是ＢＥＢＥ神秘花园～～～[0m

　　　　　　　　　
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10032 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room117",
		"west"      : "/open/clan/hell/room/room5.c",
	]) );
	set( "long", @LONG

　　你刚来到这里的大门，就感觉到一股不知哪里来的声音
对你说[31m‘～～小孩子～这里不是你来的地方喔～～还不快回[0m
[31m家读书’[0m，你再仔细的一看，原来这里就是传说中[36mＢｅｂｅ[0m
的神秘小屋．
LONG);
	setup();
	replace_program(ROOM);
}
