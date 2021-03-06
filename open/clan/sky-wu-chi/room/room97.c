inherit ROOM;
void create() {
	set( "short", "$HIW$海天一线$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/open/capital/obj/king-boots",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/bingtang",
		"amount3"  : 1,
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
	]) );
	set( "build", 10152 );
	set( "owner", "herozero" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"out"       : "/open/clan/sky-wu-chi/room/room26.c",
		"north"     : "/open/clan/sky-wu-chi/room/room96.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里是传说中的圣地‘海天一线’，据说传说中的武圣就住在这，
但是实际的地点却始终个谜，听说有不少人为了寻找武圣而来到这，但
结果都是无功而返，但是这里秀丽的景色深深的吸引着你的目光，也许
，一个不小心就让你找到传说中的武圣喔 :>
LONG);
	setup();
	replace_program(ROOM);
}
