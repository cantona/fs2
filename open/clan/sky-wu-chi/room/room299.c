inherit ROOM;
void create() {
	set( "short", "匕首房" );
	set( "light_up", 1 );
	set( "build", 10715 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room307",
	]) );
	set( "owner", "erme" );
	set( "long", @LONG
这里是一间小小的匕首房,一面挂满匕首的墙,一丝阴暗的光线,
一台精致的刑枱,几件小小的拷问工具,精简的组成了这间匕首房,
小木桌上散布着几张名单,上面是一些得罪过伊耳谜的人,
伊耳谜最喜欢在这里计划如何暗杀人了！！
LONG);
	setup();
	replace_program(ROOM);
}
