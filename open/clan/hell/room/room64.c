inherit ROOM;
void create() {
	set( "short", "$HIY$$HBRED$护卫戒指$NOR$存放区" );
	set( "object", ([
		"file2"    : "/open/capital/guard/gring",
		"file3"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/capital/guard/gring",
		"file6"    : "/open/capital/guard/gring",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/capital/guard/gring",
	]) );
	set( "build", 10831 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room39",
	]) );
	set( "long", @LONG
护卫戒指算是戒指里头较难取得的装备了,然而由于他会分享经验值得这个
缺点,再加上地府的帮众大部分都有深厚的功力,平常是很少在用它的,不过这个
戒指再对大型敌人战斗的时候,仍然有一定的效果,小敏帮主特地将帮里的护卫戒
指集中到这里给大家取用,希望大家用毕可以归还

LONG);
	setup();
	replace_program(ROOM);
}
