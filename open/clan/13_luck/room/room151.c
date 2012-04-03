inherit ROOM;
void create() {
	set( "short", "我是鬼" );
	set( "object", ([
		"file10"   : "/open/mogi/village/obj/mogi_ring",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file9"    : "/daemon/class/fighter/armband",
		"amount7"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/obj/gift/hobowdan",
		"amount5"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount6"  : 1,
		"file1"    : "/obj/gift/lingzhi",
		"amount3"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10227 );
	set( "light_up", 1 );
	set( "owner", "ptko" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room98",
	]) );
	set( "long", @LONG
如果你真的爱一个人你会用什么方式，是用心、用钱、用人、用爱、用所有的一切
还是其他的东西呢？常常思考这到底是怎么一回事，恋爱这东西真的很神奇。
当你有了之后，你会全心全意，还是会后悔，还是不知所措¨这要等你拥有才知道

LONG);
	setup();
	replace_program(ROOM);
}
