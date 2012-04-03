inherit ROOM;
void create() {
	set( "short", "$HIM$【$HIY$猪神界$HIM$】$NOR$" );
	set( "owner", "taxi" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10386 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room5.c",
		"east"      : "/open/clan/hell/room/room18.c",
		"west"      : "/open/clan/hell/room/room115",
		"up"        : "/open/clan/hell/room/room8.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

$WHT$这里是$HIG$^(OO)^$WHT$的地盘，到处弥漫着怪异的味道............
掌管者是$HIB$kalin,$WHT$他正专心的看着$HIR$小泽圆$WHT$的告别座，嘴角还不时流出一丝丝的猪涎。
看来真是让人呕吐到最高点!!!!!突然他转过头来对你奸笑几声，你不禁吓了一大跳!!!
心里直想着 : 还是快点离开这个淫窟地方好了，不然哪一天我的$HIM$菊花$WHT$又要开了.. :P$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
