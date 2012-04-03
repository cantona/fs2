inherit ROOM;
void create() {
	set( "short", "水晶虫洞前段" );
	set( "object", ([
		"file10"   : "/open/ping/obj/gold_hand",
		"file5"    : "/open/scholar/obj/icefan",
		"file1"    : "/daemon/class/blademan/obj/shield",
		"file4"    : "/daemon/class/fighter/armband",
		"amount8"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/ping/obj/ring-2",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"file6"    : "/open/snow/obj/figring",
	]) );
	set( "owner", "issei" );
	set( "build", 10080 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room167",
		"down"      : "/open/clan/ou-cloud-club/room/room18.c",
	]) );
	set( "long", @LONG
这是一个极寒冷极绝望的异空间甬道。眼中所见只有一片萧索的冰冻。洞穴四壁
均为光滑晶莹、无法攀附的水晶岩壁......无数个大小不一的乳白透明蛆蛹包裹着
千万光年前的死尸骨骸，孤寂地垂悬在遥远的甬道顶端。似有若无的鬼魂痛苦呻
吟景象，不断如失了焦的画面般重叠在你的视网模之间......

仿佛听到远处传来数万个肮脏骨盆相撞击的声音，液化脑随在骨管中流动的声音。

一股不知名的诡异力量促使你继续向西方走去......

LONG);
	setup();
	replace_program(ROOM);
}








