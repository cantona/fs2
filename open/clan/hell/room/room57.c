inherit ROOM;
void create() {
	set( "short", "$HIC$剑神界$NOR$-刑具房" );
	set( "owner", "ashin" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file2"    : "/open/mogi/dragon/obj/key",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file7"    : "/open/capital/guard/gring",
		"amount8"  : 1,
		"amount4"  : 18,
		"file8"    : "/open/gsword/obj1/sball",
		"file3"    : "/open/gsword/obj1/sball",
		"amount1"  : 42,
		"file5"    : "/open/capital/guard/gring",
	]) );
	set( "build", 11763 );
	set( "exits", ([
		"enter"     : "/open/clan/hell/room/room33",
		"east"      : "/open/clan/hell/room/room5.c",
		"west"      : "/open/clan/hell/room/room59.c",
	]) );
	set( "long", @LONG
这里是剑神界中放所有刑具的地方，桌上摆满了
所有能用的工具。。。这里比十八层还像十八层地狱
，看到了一件件染满血的刑具，就知道这里的人被折
磨的变成怎样了。

    $HIR$一根特大号长鞭$NOR$-剑神专用$NOR$(Big whip)
    $HIR$一个点不着蜡烛$NOR$(Unlight fire)
LONG);
	setup();
	replace_program(ROOM);
}






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































