inherit ROOM;
void create() {
	set( "short", "青龙殿回廊" );
	set( "build", 10087 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room15",
		"west"      : "/open/clan/13_luck/room/room10.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    刚踏足此处便有一种阴森可怕的感觉袭来，人生来便俱有第六感，
就在此时你的第六感告诉你····。或许你觉得只是第六感作祟，但
相信这种感觉吧！除非你身具高超武学或者你不怕死。在往东方走去就
是鼎鼎有名的‘朱雀堂’。

LONG);
	setup();
	replace_program(ROOM);
}
