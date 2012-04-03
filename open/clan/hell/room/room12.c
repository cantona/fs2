inherit ROOM;
void create() {
	set( "short", "$RED$猫神界$NOR$" );
	set( "object", ([
		"file6"    : "/open/magic-manor/obj/water-ball",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/fire-ball",
		"amount6"  : 1,
		"file5"    : "/open/magic-manor/obj/wood-ball",
		"amount4"  : 1,
	]) );
	set( "item_desc", ([
		"corpse" : @ITEM
这是$RED$霹雳猫$NOR$的尸体，里面什么东西都没有，
有股恶臭从里面散发出来，哇勒，
到底几天没洗澡了........   有够猪
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10566 );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room5.c",
		"down"      : "/open/clan/hell/room/room6.c",
		"west"      : "/open/clan/hell/room/room16",
		"east"      : "/open/clan/hell/room/room14.c",
	]) );
	set( "long", @LONG
    这里就是著名的阴间入口「猫界”，在你面前矗立着一座高大的
黑色城楼，所多亡魂正哭哭啼啼地列队前进，因为一进鬼门关就无法再
回阳间了。你在门前徘徊了许多，深怕一进就出不来，此时此刻。你的
神在不知觉中被拉了进去。

  霹雳猫的尸体(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
