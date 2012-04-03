inherit ROOM;
void create() {
	set( "short", "港口" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room35.c",
		"out"       : "/open/clan/13_luck/room/room150",
	]) );
	set( "long", @LONG

    这里是可以搭船去十三吉祥的唯一水路，港口边停了几艘小船，
妳向船家租了一艘船，当妳准备要启程时，你看了看海面上的波浪，
发现似乎好像有一定的规律，妳猜想着难道这片海有被下过阵法，在
想一想，或许依着这些固定规律就可以找到出口了。

LONG);
	setup();
	replace_program(ROOM);
}
