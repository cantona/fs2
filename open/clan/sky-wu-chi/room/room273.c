inherit ROOM;
void create() {
	set( "short", "烂刀休闲室" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"east"      : "/open/clan/sky-wu-chi/room/room277",
		"west"      : "/open/clan/sky-wu-chi/room/room276",
		"south"     : "/open/clan/sky-wu-chi/room/room274",
		"cong"      : "/open/clan/sky-wu-chi/room/room99.c",
		"north"     : "/open/clan/sky-wu-chi/room/room275",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的二楼，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的小心谨慎，以免进入了不该进入的房间。
　　　　　　　　　　　　　　　　　　　　　　　
左边是向日葵(flwer)的房间，右边则没有房间了。

LONG);
	setup();
	replace_program(ROOM);
}

























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































