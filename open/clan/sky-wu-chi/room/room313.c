inherit ROOM;
void create() {
	set( "short", "黯然销魂房" );
	set( "owner", "supalu" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
	]) );
	set( "item_desc", ([
		"食神雕像" : @ITEM
他,不知道是上天派来的天使,或是地狱派来的恶魔,
能将火擅用的出神入化,史蒂芬周的雕像.
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 7049 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room314",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
远方的你已感受到此地之销魂,不自主的往后退了几步,
不自在的感觉让你想快离开这里,嚣张的气焰,怒意,
狂妄,让你不禁流下泪来,是.....洋葱..原来都是洋葱惹
的祸,但你已深陷其中,不吃不可了,没想到少侠也是性情中人啊!!!
LONG);
	setup();
	replace_program(ROOM);
}
