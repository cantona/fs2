inherit ROOM;
void create() {
	set( "short", "中国厨艺技术学院" );
	set( "light_up", 1 );
	set( "owner", "supalu" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room313",
	]) );
	set( "long", @LONG
你只闻到阵阵的香味扑鼻而来,放眼一看,此地原来是个
厨房,但为何人人是和尚,莫非到了庙里,你不经意的往头
上一瞧,斗大的三个字令你无法言语---少林寺,当你发觉来了不
该来的地方时,突然冒出18名大汉,大喊(少林寺18铜人),
还犹豫,快点跑吧!
LONG);
	setup();
	replace_program(ROOM);
}
