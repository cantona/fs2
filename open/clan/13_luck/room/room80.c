inherit ROOM;
void create() {
	set( "short", "小雄猫之家" );
	set( "object", ([
		"file10"   : "/open/tendo/obj/chaosbelt",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount10" : 1,
		"file5"    : "/open/marksman/obj/dragon_bow",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10233 );
	set( "owner", "acomidy" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room76.c",
		"enter"     : "/open/clan/13_luck/room/room108",
	]) );
	set( "long", @LONG

    雄猫雄猫! 看我雄猫肉脚, 百战百败, 我武必输, 狂想成军, 古
堡被荡, 魔界被杀, 京城大捷下地狱, 百输雄猫, 花光自己的潜能,
肉角雄猫, 输掉自己美好的经验值, 当战斗号角响, 我雄猫奋起逃难
, 建树百世恶名, 敌人贯穿胸膛, 雄猫懦弱无能, 雄猫被定被抢, 弱
视八方, 四海被欺.............改编当时天下第一旅269雄狮战歌

LONG);
	setup();
	replace_program(ROOM);
}
