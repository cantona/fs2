inherit ROOM;
void create() {
	set( "short", "新手休息室" );
	set( "object", ([
		"file6"    : "/open/wu/npc/obj/armband",
		"file5"    : "/daemon/class/fighter/ywleg",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/ywsu",
		"amount5"  : 1,
		"amount8"  : 1,
		"amount1"  : 12,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file8"    : "/daemon/class/fighter/ywhelme",
		"file3"    : "/daemon/class/fighter/ywhand",
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/daemon/class/fighter/ywgem",
		"amount2"  : 1,
	]) );
	set( "build", 10884 );
	set( "owner", "daffodils" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room102",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    当你一走进这间房间，你感觉到前所未有的干净。这间房间就是
负责十三吉祥一切杂事的新人休息室。你看到一个人正辛苦工作的可
怜仆人，你询问一下在一旁进进出出的其他工作人她的名字，你终于
在一个他的主人的口中得知她叫做新手废物，她也是这里的打杂工人
。在一旁有些皇宫贵族在这间房间里进进出出，有的要惩罚新手未尽
力把工作做好，有的是要指派新手去做别的事的主人。新手真的十分
的悲哀。

LONG);
	setup();
	replace_program(ROOM);
}
