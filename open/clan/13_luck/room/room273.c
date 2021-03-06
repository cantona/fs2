inherit ROOM;
void create() {
	set( "short", "妖幻头带室" );
	set( "owner", "turtle" );
	set( "object", ([
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file6"    : "/open/ping/obj/ring-2",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file5"    : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount1"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
	]) );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room311",
		"south"     : "/open/clan/13_luck/room/room306.c",
	]) );
	set( "build", 10275 );
	set( "light_up", 1 );
	set( "long", @LONG

    此防具，为闻名无不吓破胆的千年树妖舞风扬身上所有的，此妖有
千年之功力，长年在长白山上修练，法术更是无人能敌，与他为敌只会
一肚子大便的状态，尤其是虚弱，所以他的防具不是说有就有的，也要
看有没有人敢去打为了那一件[0;1;33m□[1m□[1m□[1m□[1m□[1mY[1m□[1ma[0m。

LONG);
	setup();
	replace_program(ROOM);
}
