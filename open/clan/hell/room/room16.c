inherit ROOM;
void create() {
	set( "short", "$RED$猫森林$NOR$" );
	set( "owner", "wanwanwan" );
	set( "build", 1124 );
	set( "light_up", 1 );
	set( "exits", ([
		"search"    : "/open/clan/hell/room/room17.c",
		"east"      : "/open/clan/hell/room/room12",
	]) );
	set( "long", @LONG
在这茂竹的森林里，出口并不特别明显，前方的路到底通往那里呢？
疑？地上有一块$HIW$大石头$NOR$(stone)，上面的字似乎正警告着路人
四周望去，树干上都被一些招式所伤，从招式的形状和深度看南，
都是被内力极深的高手所伤，莫非是传说的$RED$霹雳猫$NOR$吗？
或许四处找找能有所收获吧！！

　　　　　 $HIW$喵～　喵～　$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
