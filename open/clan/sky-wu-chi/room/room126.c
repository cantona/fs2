inherit ROOM;
void create() {
	set( "short", "空瓶子武器室2" );
	set( "object", ([
		"file8"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount8"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 10073 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room125.c",
		"east"      : "/open/clan/sky-wu-chi/room/room129",
	]) );
	set( "long", @LONG
这里的武器也没有什么不一样的,只是一些比较好的兵器,每一样
的兵器有很能够让人家来玩味的,只要你对兵器有所了解,你就会发现
在这里看到的兵器,说不定有的都还是你没看过的呢..所以你才知到
这个房子的主人是多么的对兵器有多爱护...
你现在可以在这里看到的兵器有 邪刀(shi-blade)鱼龙(ublade)
赤焰绝炎针(fire needle)火龙剑(fire dragon sword)

LONG);
	setup();
	replace_program(ROOM);
}
