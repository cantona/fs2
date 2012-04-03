inherit ROOM;
void create() {
	set( "short", "小魔女的魔法屋" );
	set( "object", ([
		"file9"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/tendo/obj/chaosbelt",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
	]) );
	set( "build", 10197 );
	set( "owner", "mei" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room101",
		"enter"     : "/open/clan/13_luck/room/room307",
	]) );
	set( "long", @LONG

－*0*－　小魔女的魔法屋　－>.<－　
＠＠首先粉欢迎你的到来＠＠，这里面有很多你意想不到的惊喜喔，
向左边看印入眼帘的是一堆可爱的 kity 喵，向右边看是一些令人叹
为观止的防具及武器，而正前方挂着一幅猪头人身的画像，那就是

         ＠我最敬爱的师父＠

　           可爱小猪头        *@_@*


LONG);
	setup();
	replace_program(ROOM);
}
