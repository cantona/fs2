inherit ROOM;
void create() {
	set( "short", "小贤家" );
	set( "owner", "sznn" );
	set( "object", ([
		"file7"    : "/open/tendo/obj/shoe",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file6"    : "/open/ping/obj/neck0",
		"amount6"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"file8"    : "/open/scholar/obj/icefan",
		"amount8"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/sky/obj1/thunder_emblem",
		"file10"   : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount3"  : 62,
	]) );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room231",
	]) );
	set( "build", 10326 );
	set( "light_up", 1 );
	set( "long", @LONG

    你一进到这个神秘洞穴，马上被四道凶狠的目光所惊吓，小心一
看，原来是四只守护圣兽，分别是[0;1;32m□[1mC[1m□[1ms[0m，白虎，[0;1;31m□[1m□[1m□[1m□[0m，[0;1;36m□[1m□[1m□[1mZ[0m守住洞穴
的四周，小心的守护着正在练功的主人，当你想回头时，已经太晚了
，四只圣兽已经把你包围住了。


LONG);
	setup();
	replace_program(ROOM);
}
