inherit ROOM;
void create() {
	set( "short", "小二的电脑室" );
	set( "light_up", 1 );
	set( "build", 10040 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"west"      : "/open/clan/demon_castle/room/room11",
		"down"      : "/open/clan/demon_castle/room/room15",
		"north"     : "/open/clan/demon_castle/room/room13",
	]) );
	set( "long", @LONG
这里堆满了电脑零件,可是能够组起来的电脑只有一台.
期中考过了,希望除了英文以外全部都能pass.
听说limit要结婚了...
如果他不找我去...
hi
我就去抢婚
LONG);
	setup();
	replace_program(ROOM);
}
