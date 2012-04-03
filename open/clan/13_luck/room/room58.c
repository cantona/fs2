inherit ROOM;
void create() {
	set( "short", "忘尘居" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/ping/obj/ring-2",
		"amount4"  : 1,
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "luner" );
	set( "build", 10060 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room53",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是残心静修之处，房中的陈设相当的简单，角落一个石头盆
景，另一边摆着一架纱照屏，案上有个墨冻石鼎。墙上挂着一幅主人
的画像，画里还题着一首诗。

     「 自古多情空余恨 ， 凡夫俗子总无愁 
        残风晓月不知处 ， 忘情天涯不染尘 ”

LONG);
	setup();
	replace_program(ROOM);
}
