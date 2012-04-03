inherit ROOM;
void create() {
	set( "short", "$RED$‘阎罗王’$NOR$的$HIY$收藏地狱$NOR$‘$HIY$幸运草环$NOR$’" );
	set( "light_up", 1 );
	set( "build", 11663 );
	set( "exits", ([
		"force"     : "/open/clan/hell/room/room31",
		"fan"       : "/open/clan/hell/room/room88.c",
		"ball"      : "/open/clan/hell/room/room86.c",
		"ring"      : "/open/clan/hell/room/room39.c",
		"dagger"    : "/open/clan/hell/room/room90",
		"sword"     : "/open/clan/hell/room/room33.c",
		"claw"      : "/open/clan/hell/room/room89.c",
		"south"     : "/open/clan/hell/room/room23.c",
		"blade"     : "/open/clan/hell/room/room32.c",
		"icer"      : "/open/clan/hell/room/room81.c",
	]) );
	set( "long", @LONG
这里是地府的阎罗王收藏武器的地方,他的鬼子鬼孙们从四处蒐集回来的武器
都会收藏在这里,由于收藏品实在太多了,所以他收藏的区域不只一间,这里往四周
延神出去,各有收藏诸般兵器的地方,以便让各们各派加入地府的人都能够随时有
武器可取用

LONG);
	setup();
	replace_program(ROOM);
}
