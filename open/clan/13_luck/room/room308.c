inherit ROOM;
void create() {
	set( "short", "幻蛇鞭室" );
	set( "owner", "mei" );
	set( "object", ([
		"amount10" : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/gsword/obj/yuboots",
		"amount5"  : 1,
		"file1"    : "/open/wind-rain/obj/bird-blade",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/ping/obj/ring-2",
		"amount4"  : 149,
		"amount3"  : 1,
		"file10"   : "/open/clan/area/home/hae_bag",
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 1,
		"file2"    : "/open/gsword/obj/dragon-sword",
		"file9"    : "/open/mogi/dragon/obj/key",
		"amount1"  : 1,
		"file6"    : "/daemon/class/fighter/armband",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11997 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room264",
	]) );
	set( "long", @LONG

    蛇鞭壮阳，不对那是虎鞭才对，现在没super pill丹了，所以一见
到蛇郎君大家都远离这个灾难，他一身武功尤以定人最强，加上万鞭归
一，更是高招，常打的解amulet的人毫无招架之力，所以我们帮派世间
道不存whip，要就自己去打，不是懒，是怕麻烦。

LONG);
	setup();
	replace_program(ROOM);
}
