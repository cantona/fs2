inherit ROOM;
void create() {
	set( "short", "$HIC$傲$HIW$云$NOR$阁" );
	set( "build", 10174 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/ou-cloud-club/room/room172",
		"east"      : "/open/clan/ou-cloud-club/room/room166.c",
		"down"      : "/open/clan/ou-cloud-club/room/room152",
		"west"      : "/open/clan/ou-cloud-club/room/room165",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的二楼，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是幻魔(ads)的梦幻阁，右边则是小懒虫(scs)的房间．

LONG);
	setup();
	replace_program(ROOM);
}
