inherit ROOM;
void create() {
	set( "short", "花园" );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"file2"    : "/obj/gift/xiandan",
	]) );
	set( "owner", "edcfr" );
	set( "build", 11042 );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room57",
	]) );
	set( "long", @LONG

这里是亚奥利斯的庭园，这里四季如春，所以栽种了许多的漂亮的植
物，如野百合(lily)，黑玫瑰(rose)，此外这还养了许多动物，如百
灵鸟(mongolian lark)，云豹 (panther)等，你不时还可以听到淙淙
的流水声，往西望去，只见一座高耸入云的高山，这里真是人间仙境
呀!


LONG);
	setup();
	replace_program(ROOM);
}
