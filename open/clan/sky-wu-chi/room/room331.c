inherit ROOM;
void create() {
	set( "short", "战斗着衣间" );
	set( "owner", "bbsman" );
	set( "object", ([
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"file1"    : "/open/mogi/dragon/obj/sunblade",
		"file4"    : "/open/quests/snake/npc/obj/snake_gem",
		"file6"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/doctor/item/human_item",
		"amount4"  : 1,
		"amount8"  : 8,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/capital/obj/blade2",
		"file2"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "build", 10083 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room250",
	]) );
	set( "long", @LONG
墙边衣柜中挂着许多外出服，在‘屠龙刀’外出时，
会先在右边的战斗准备室找有没有干净的旧衣服可以穿，
不够的才来这边拿新的衣服。一旁的落地镜照出了您强健
的体魄，由此可见屠龙刀有点自恋。梳妆台上的CK香水，
您可别偷拿唷。
LONG);
	setup();
	replace_program(ROOM);
}
