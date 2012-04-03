inherit ROOM;
void create() {
	set( "short", "$HIW$黑轮卧房 - $HIC$主室$NOR$" );
	set( "object", ([
		"file8"    : "/open/fire-hole/obj/p-pill",
		"amount8"  : 3,
		"file3"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 20,
	]) );
	set( "build", 10073 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room40",
		"north"     : "/open/clan/hell/room/room40",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里就是黑轮卧室的主房了，眼前这位便是传说
说中的剑魔．  他正在闭目养神．即使如此身上还是
流出惊人的杀戾之气，你不由的退后了几步，深怕惊
醒了这位  [0;1;32m□[1mC[1;34m [1m□[1m□[1m [1m□[1m□[1m [1;31m□[1m][0m [0;1m□[1mE[0m [0;1m□[1m□[1m [1m□[1m□[0m

([0;1;31m□[1m□[1m□[1mN[1;36m□[1mg[1m□[1m□[0m)[0;1;31m□[1mC[1m□[1m][0m「[0;1m□[1m□[1;31m□[1m□[1;37m□[1mC[0m”黑轮(Jinkazama)

LONG);
	setup();
	replace_program(ROOM);
}
