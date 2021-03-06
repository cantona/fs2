inherit ROOM;
void create() {
	set( "short", "奇门八阵" );
	set( "owner", "herozero" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room96",
	]) );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/obj/gift/bingtang",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount7"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount4"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/mogi/castle/obj/blood-water",
		"amount9"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10095 );
	set( "long", @LONG
逃出了结界，不远处似乎有间小屋，在这种鸡不生蛋的地方有人
住，真是太神奇了，你不禁加快了脚步，想过去一探究竟，走着走着
，四周的景像突然间起了大变化，看着瞬息万变的环境，你不禁冷汗
直流，完了，运气怎么这么背，离开了结界，却踩进了传说中的奇门
八阵。
LONG);
	setup();
	replace_program(ROOM);
}
