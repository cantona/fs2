inherit ROOM;
void create() {
	set( "short", "$HIG$人灵草$NOR$" );
	set( "object", ([
		"amount3"  : 1025,
		"file3"    : "/open/doctor/item/human_item",
		"file1"    : "/open/doctor/item/human_item",
		"amount2"  : 1500,
		"amount1"  : 1500,
		"file2"    : "/open/doctor/item/human_item",
	]) );
	set( "owner", "skyent" );
	set( "light_up", 1 );
	set( "build", 10178 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room300",
	]) );
	set( "long", @LONG
此乃昆仑山上最为出名的三圣草之一$HIR$「$HIG$人灵草$HIR$”$NOR$的囤积之地，
传说此草可储存死于$YEL$大地$NOR$中$HIW$尸骸的精华$NOR$，对于$HIR$病危$NOR$的人，具有$HIR$起死
回生$NOR$之能，但此物须经过医者精湛的医术配其特殊内功方可提炼。

LONG);
	setup();
	replace_program(ROOM);
}
