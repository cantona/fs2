inherit ROOM;
void create() {
	set( "short", "旎旎的家" );
	set( "object", ([
		"amount1"  : 640,
		"file1"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "owner", "neonn" );
	set( "light_up", 1 );
	set( "build", 11211 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room16",
	]) );
	set( "long", @LONG
这里是旎旎的家,没事请勿大声喧哗....................:)
TIN FORCE 是很怕别人吵的ㄛ.不过有空的话,欢迎大家来坐坐.
旎旎也是很爱干净的人,千万别把EQ丢得乱七八糟ㄛ.
有事的话,欢迎大家用E-MAIL联络 知道我的Email 吗 ?

LONG);
	setup();
	replace_program(ROOM);
}
