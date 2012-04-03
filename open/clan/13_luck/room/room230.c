inherit ROOM;
void create() {
	set( "short", "龙灭之道" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room229",
		"west"      : "/open/clan/13_luck/room/room228",
	]) );
	set( "long", @LONG

　　四周围静的让人毛骨耸然，空气中充斥着一股作人欲呕的血腥味
，往东方望去，只见一座高塔耸立，外表看来相当的老旧，不知己伫
立在那里多久了，传说塔里有一武林最强兵器，不过塔里群龙聚集守
卫，不知有多少武林人士偷窥塔里宝物，却命丧塔里。

LONG);
	setup();
	replace_program(ROOM);
}
