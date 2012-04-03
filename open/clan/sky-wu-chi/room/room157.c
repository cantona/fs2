inherit ROOM;
void create() {
	set( "short", "空瓶子招待所" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/gsword/npc2/sadsword",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount7"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/ywhand",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/gsword/obj/yugem",
		"amount5"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
	]) );
	set( "owner", "ywartee" );
	set( "light_up", 1 );
	set( "build", 13008 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room234.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room133",
		"out"       : "/open/clan/sky-wu-chi/room/room60.c",
	]) );
	set( "long", @LONG
这里是空瓶子一般在招待贵宾的地方,这里没有太豪华的家俱
这里有一张太师椅
旁边有两排长椅,供贵宾坐,而太师椅则是给空瓶子坐的..所以
你也就知道这里正是由空瓶子所占的地盘上,在这里你不敢
太放肆,否则会遭受到比死还难过的折蘑....
LONG);
	setup();
	replace_program(ROOM);
}
