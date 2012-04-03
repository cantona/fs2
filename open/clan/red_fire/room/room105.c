inherit ROOM;
void create() {
	set( "short", "$HIC$--地狱火的房间--$NOR$" );
	set( "owner", "dungaii" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"file1"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount2"  : 1,
		"file3"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
	]) );
	set( "build", 10197 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room86.c",
	]) );
	set( "long", @LONG
这里是地狱火的房间，房间的布局极为简单。一张床，
一张桌子，还放着一台地狱火最珍爱的$HIW$$HBCYN$电脑$NOR$！没有了这台电
脑，地狱火就不能在$HIC$ＦＳ$NOR$和大家一起冒险了！桌子旁边摆着
一架古色古香的书架，上面放满了地狱火目前所习练过的武
功之心得！


LONG);
	setup();
	replace_program(ROOM);
}
