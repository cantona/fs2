inherit ROOM;
void create() {
	set( "short", "阳炎臂环室" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file1"    : "/open/wind-rain/obj/bird-blade",
		"amount3"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount1"  : 1,
	]) );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room280",
		"south"     : "/open/clan/13_luck/room/room298.c",
	]) );
	set( "build", 10083 );
	set( "light_up", 1 );
	set( "long", @LONG

    陇山，闻之变色的陇山派，那个出自任正晴之手的浩日诀，手上的
炎阳臂环，也是不错的防具，但要得到他要先打败任正晴或他儿子，幸
好有他儿子在，不然，凭他的浩日诀要在他手上要东西，可以说是难矣
，看到五线谱，眼前一黑，什么都不知道了。

LONG);
	setup();
	replace_program(ROOM);
}
