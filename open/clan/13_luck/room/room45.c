inherit ROOM;
void create() {
	set( "short", "厨房" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room90",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是肥肥的防具所，所有防具都整齐划一的排列在防具所里
每个防具都闪亮着他们的光芒，导致整各房间闪闪发亮，你看到里
面所收藏的妖幻防具，不禁啧啧称其....所有的防具在肥肥作战时□则给了肥肥一道强劲的防护.....


LONG);
	setup();
	replace_program(ROOM);
}
