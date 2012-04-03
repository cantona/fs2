inherit ROOM;
void create() {
	set( "short", "神风圣堂" );
	set( "owner", "smalloo" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount9"  : 5,
		"amount3"  : 364,
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/killer/obj/s_pill",
		"amount4"  : 26,
		"file5"    : "/open/fire-hole/obj/w-pill",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/ping/obj/poison_pill",
		"amount1"  : 348,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount2"  : 7,
		"amount5"  : 2,
	]) );
	set( "build", 12369 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room334",
		"enter"     : "/open/clan/13_luck/room/room331",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    终于来到了[0;1;34m□[1m□[1m□[1m□[1m□[1mt[1m□[1m□[0m，眼前站着一位高人，他并不是天下会的
神风堂主--->[0;1;34m□[1m□[1m□[1m□[0m。他轻飘飘的身影，轻功已经达到神而明之的[0;1;36m□[1mW[0m
[0;1;36m□[1mZ[1m□[1m□[1m□[1m□[0m，坚定的目光，透露出[0;1;32m□[1m□[1m□[1mj[1m□[1m□[1m□[1m□[0m之气而是打败[0;1;34m□[1m□[1m□[1m□[0m的[0;1;33m□[1m□[1m□[1m][1;35m□[1mp[0m
[0;1;35m□[1m□[1m□[1mk[0m，而[0;1;35m□[1mp[1m□[1m□[1m□[1mk[0m喜爱人才，留[0;1;34m□[1m□[1m□[1m□[0m下来教导武学，也希望席日聂风
可以战胜[0;1;35m□[1mp[1m□[1m□[1m□[1mk[0m。


LONG);
	setup();
	replace_program(ROOM);
}
