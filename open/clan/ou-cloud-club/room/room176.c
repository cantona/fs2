inherit ROOM;
void create() {
	set( "short", "$HIC$傲$HIW$云$NOR$阁$NOR$" );
	set( "build", 10021 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room179.c",
		"north"     : "/open/clan/ou-cloud-club/room/room181",
		"west"      : "/open/clan/ou-cloud-club/room/room173.c",
		"south"     : "/open/clan/ou-cloud-club/room/room172.c",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的二楼，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是无奇(wuchy)的卧房，右边则是幸福(doa)的幸福泉源．

LONG);
	setup();
	replace_program(ROOM);
}
