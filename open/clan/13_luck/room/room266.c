inherit ROOM;
void create() {
	set( "short", "金织手套室" );
	set( "owner", "kanako" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room309",
		"south"     : "/open/clan/13_luck/room/room304.c",
	]) );
	set( "light_up", 1 );
	set( "build", 11601 );
	set( "long", @LONG

    在那平南城，有那可怕的风行山寨，有那一群无恶不作的三头目，
而手套就是出自他们第三头目的手中，而他们的头也被悬赏着，所以也
是也不少人去灭寨，为了经费需求，而打大头目要小心一点，学了段家
的招式，会被他定到死。

LONG);
	setup();
	replace_program(ROOM);
}
