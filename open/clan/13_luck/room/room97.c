inherit ROOM;
void create() {
	set( "short", "维修室" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/scholar/obj/icefan",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "fuze" );
	set( "build", 10207 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room94.c",
		"east"      : "/open/clan/13_luck/room/room234.c",
		"enter"     : "/open/clan/13_luck/room/room235",
		"west"      : "/open/clan/13_luck/room/room233.c",
	]) );
	set( "long", @LONG
   这里是维修专家为了造福有困难所开辟的维修室，看到房间内满满的工具
与破旧的材料，你心想有此地方维修太好了，你专注的看着[32m维修仙人[0m，努力的
制造一只强而有利的[31m武器[0m，让你心动的想请[32m维修仙人[0m帮你制造一把
  
LONG);
	setup();
	replace_program(ROOM);
}
