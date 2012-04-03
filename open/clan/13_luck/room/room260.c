inherit ROOM;
void create() {
	set( "short", "‘桃花树林’ " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room259",
		"north"     : "/open/clan/13_luck/room/room261.c",
	]) );
	set( "long", @LONG
愈往桃花林的里面走，愈觉得危机四伏，总觉得似乎有人在偷窥着你。
可是在这么漂亮的景色下面，就算有人来偷袭你，似乎也是心甘情愿的。而
四周的小动物也蹦蹦跳跳的围绕着你绕圈圈，而让你的心情也跟着愉悦起来
了。
LONG);
	setup();
	replace_program(ROOM);
}
