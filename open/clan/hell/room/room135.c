inherit ROOM;
void create() {
	set( "short", "礁石群" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room142",
	]) );
	set( "long", @LONG
海水就在脚边不断的拍上拍下,强大的冲力好像随时要把你卷入海中,脚下的
礁石孤独的矗立在海水之中,每日在涨潮退潮之中不断地被重复被淹没的命运,不
远处另有一块比较高大的岩石,似乎可以攀到岸上,为了不被灭顶的危险,还是赶快
上去吧.

LONG);
	setup();
	replace_program(ROOM);
}
