inherit ROOM;
void create() {
	set( "short", "$CYN$威洛$NOR$的$MAG$静$YEL$心$HIW$斋$NOR$" );
	set( "build", 10095 );
	set( "owner", "welo" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room164.c",
		"east"      : "/open/clan/red_fire/room/room68.c",
		"west"      : "/open/clan/red_fire/room/room116.c",
		"north"     : "/open/clan/red_fire/room/room135.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这是$CYN$威洛$NOR$思考事情的地方，素雅的摆设让你进入之
后$RED$心情$NOR$便开始平静了起来。房间中央一个$HIW$小圆桌$NOR$，桌上
放着正在燃烧的$YEL$檀香$NOR$，一阵扑鼻的香味让你忘却武林间
的$MAG$烦恼$NOR$，旁边放着泡茶用的茶具，外来的访客可以在这
边泡茶聊天，$CYN$威洛$NOR$是个很好客的$YEL$剑士$NOR$，房里总准备着好
几种上好的茶叶，以备在客人来到之时可以好好招待他
们，墙上挂着威洛由四处字画摊收集而来的$CYN$古画墨宝$NOR$，
你定眼一看，乖乖～～竟然有着$HIW$颜真卿$NOR$，$HIW$王羲之$NOR$等人的
墨宝，应该是$MAG$赝品$NOR$吧。
LONG);
	setup();
	replace_program(ROOM);
}
