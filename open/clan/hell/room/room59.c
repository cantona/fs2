inherit ROOM;
void create() {
	set( "short", "$HIC$剑神界$NOR$-御善防" );
	set( "object", ([
		"amount2"  : 14,
		"file10"   : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount7"  : 1,
		"amount10" : 1,
		"file2"    : "/open/ping/obj/poison_pill",
		"amount1"  : 40,
		"file1"    : "/open/fire-hole/obj/w-pill",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"file9"    : "/open/gsword/obj1/sball",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/daemon/class/fighter/armband",
		"file4"    : "/open/gsword/obj1/karmband",
		"amount6"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file5"    : "/open/gsword/obj1/khelmet",
	]) );
	set( "owner", "ashin" );
	set( "build", 10637 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/hell/room/room13",
		"east"      : "/open/clan/hell/room/room57",
	]) );
	set( "long", @LONG
一进到这里就看到满桌的食物，让人想抓一把来吃
不过一想到这里是地府，心想这里的东西能吃吗。。。
但眼前一片美食，你怎会放手让他走呢，往桌上一看，
上面摆的是。。。

    $HIR$血腥玛莉$NOR$(Blood drink)
    $HIR$人肉肉包$NOR$(Human dumpling)
LONG);
	setup();
	replace_program(ROOM);
}








