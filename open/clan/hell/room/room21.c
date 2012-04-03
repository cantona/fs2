inherit ROOM;
void create() {
	set( "short", "$RED$猫神界 大门$NOR$" );
	set( "owner", "onyx" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room14",
		"enter"     : "/open/clan/hell/room/room38",
	]) );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/sky/obj11/yellow-crystal",
		"amount7"  : 16,
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"file6"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file9"    : "/daemon/class/blademan/obj/mkblade",
		"amount3"  : 1,
		"amount4"  : 3,
		"amount5"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
		"amount2"  : 4,
		"file5"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "light_up", 1 );
	set( "build", 10057 );
	set( "long", @LONG
    这里是^(OO)^的地盘，到处弥漫着怪异的味道........
这里的掌管者是kalin,他正专心的看着小泽圆的告别座，嘴角还不时流出一丝丝的猪涎。
看来真是让人呕吐到最高点!!!!!突然他转过头来对你奸笑几声，你不禁吓了一大跳!!!
    这里是^(OO)^的地盘，到处弥漫着怪异的味道........
LONG);
	setup();
	replace_program(ROOM);
}
