inherit ROOM;
void create() {
	set( "short", "$HIW$奈何桥尾$NOR$" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 14261 );
set( "exits", ([        
		"north"     : "/open/clan/hell/room/room13.c",
		"south"     : "/open/clan/hell/room/room3.c",
		"west"      : "/open/clan/hell/room/room95.c",
	]) );
	set( "long", @LONG
这里已经是奈何桥的桥尾了，再往前走就要进鬼门关了，鬼门关前排
了好长的队伍，队伍里大致上有三种人，一种是魂魄出窍，来地府观光的
，另外一种就是阳寿已尽，而被钩魂使者带过来的，最后一种，就是像你
这种孤魂野鬼，死后没地方去，只好来地府报到的。

  黑无常(Black gargoyle)
LONG);
	setup();
	replace_program(ROOM);
}
