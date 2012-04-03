inherit ROOM;
void create() {
	set( "short", "藏剑居" );
	set( "owner", "wcy" );
	set( "object", ([
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file2"    : "/open/ping/obj/chilin_legging",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount4"  : 4,
		"file7"    : "/daemon/class/fighter/armband",
		"amount9"  : 1,
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/gsword/obj/dragon-sword",
		"file9"    : "/open/scholar/obj/icefan",
		"file1"    : "/open/capital/guard/gring",
		"file6"    : "/open/ping/obj/cloud_fan",
		"file5"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11040 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room172",
	]) );
	set( "long", @LONG
这里是佾云遨游神州各地后收藏宝物的地方, 里面的宝物都相当珍贵
其中又以由钻石所打造的防具最为亮眼, 传说穿上此防具的佾云无人能敌,
你可以四处逛逛并且想像一下佾云的英姿, 右边的墙壁雕刻着人型招式,
你心想或许这就是佾云成名江湖最得意的招式
LONG);
	setup();
	replace_program(ROOM);
}
