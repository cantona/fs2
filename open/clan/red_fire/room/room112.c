inherit ROOM;
void create() {
	set( "short", "飞龙居后殿" );
	set( "object", ([
		"amount7"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file10"   : "/daemon/class/fighter/figring",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"file8"    : "/open/main/obj/et_sword",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/gsword/obj/dragon-sword",
		"amount4"  : 1,
		"file7"    : "/open/ping/obj/ring-2",
		"amount10" : 1,
	]) );
	set( "owner", "andylin" );
	set( "build", 10006 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room78",
	]) );
	set( "long", @LONG
这里是飞龙居后殿，这里通常是安迪本人练功看书的地方，但
是却不常见到他本人，你环顾四周，发觉此地环境清静，鲜少人烟
，或许你运气好的话，可以在此遇到安迪本人，一睹他在此练功的
风采，传说中他会骑着飞龙直接来到此地........。


LONG);
	setup();
	replace_program(ROOM);
}
