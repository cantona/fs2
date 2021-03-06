inherit ROOM;
void create() {
	set( "short", "照名设备室" );
	set( "owner", "winder" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/firedancer/npc/eq/r_neck",
		"amount6"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file6"    : "/open/mogi/village/obj/mogi_ring",
		"file9"    : "/open/mogi/village/obj/mogi_ring",
		"amount7"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
	]) );
	set( "build", 15939 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room277",
	]) );
	set( "long", @LONG

    照明设备是在幻想中必备的器具，如李元济身上的狼眼钻戒，穿过
那七星之塔，魔森林，和可怕的网中人，才能到达的魔界商店，所贩卖
的魔界戒子都有此功能，而戒子带在身上就可以了，不需要装备靠着他
的发亮，就可以看到房间的任何地方了。

LONG);
	setup();
	replace_program(ROOM);
}
