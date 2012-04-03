inherit ROOM;
void create() {
	set( "short", "毒药库" );
	set( "owner", "kris" );
	set( "object", ([
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file3"    : "/obj/poison/five_poison",
		"amount2"  : 9937,
		"file1"    : "/obj/poison/rose_poison",
		"amount1"  : 10077,
		"file6"    : "/open/snow/obj/figring",
		"file8"    : "/open/doctor/obj/cloth",
		"amount3"  : 10386,
		"amount4"  : 6163,
		"file4"    : "/obj/poison/faint_poison",
		"file2"    : "/obj/poison/dark_poison",
		"amount8"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10049 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room187",
	]) );
	set( "long", @LONG
这里一看便知道是一间用来储存药材的库房，房间四周围是一列
列年代久远的架子，架子上则摆满了许多破破烂烂的药罐子，年
代久远的架子摆上破破烂烂的药罐子，让人怀疑这间储藏库还有
人在使用维护吗。  往东走可以回到毒人居。
LONG);
	setup();
	replace_program(ROOM);
}
