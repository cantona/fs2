inherit ROOM;
void create() {
	set( "short", "$HIC$傲$HIW$云$NOR$阁" );
	set( "build", 10119 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room212.c",
		"north"     : "/open/clan/ou-cloud-club/room/room214",
		"east"      : "/open/clan/ou-cloud-club/room/room213.c",
		"south"     : "/open/clan/ou-cloud-club/room/room203.c",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的二楼，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的小心谨慎，以免进入了不该进入的房间。
　　　　　　　　　　　　　　　　　　　　　　　
左边是魔．牙门幻十郎(miko)的房间，右边则是梅影云烟(icpms)的房间。

LONG);
	setup();
	replace_program(ROOM);
}
