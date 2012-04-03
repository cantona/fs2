inherit ROOM;
void create() {
	set( "short", "元素空间" );
	set( "build", 12273 );
	set( "light_up", 1 );
	set( "exits", ([
		"northwest" : "/open/clan/sky-wu-chi/room/hall",
		"southwest" : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/hall",
		"north"     : "/open/clan/sky-wu-chi/room/hall",
		"east"      : "/open/clan/sky-wu-chi/room/hall",
		"southeast" : "/open/clan/sky-wu-chi/room/hall",
		"northeast" : "/open/clan/sky-wu-chi/room/room336",
	]) );
	set( "long", @LONG
这里你看到了黑白红蓝绿黄这六种元素,而这六种元素正密集且不消散的
在这一空间里移动,在移动的同时你看到一些不同元素的磨擦产生的一些
微小电子,而你看到这空间的中心有一个神秘的圆球正在吸取这些微小的电子
你不知道这是什么东西,而且这圆球还不时的擩动着,仿佛像是一个活物
LONG);
	setup();
	replace_program(ROOM);
}
