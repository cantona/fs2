inherit ROOM;
void create() {
	set( "short", "幕后钱庄的家" );
	set( "owner", "puffy" );
	set( "object", ([
		"file4"    : "/open/killer/obj/bellstar",
		"amount7"  : 6,
		"file9"    : "/open/main/obj/et_sword",
		"amount2"  : 1360,
		"file8"    : "/open/magic-manor/obj/soil-ball",
		"amount8"  : 1,
		"amount1"  : 1,
		"amount4"  : 267,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file1"    : "/open/magic-manor/obj/golden-ball",
		"file10"   : "/obj/gift/hobowdan",
		"file5"    : "/open/gsword/npc2/sadsword",
		"amount9"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"file7"    : "/open/killer/obj/black",
		"file2"    : "/open/marksman/obj/super_pill",
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11123 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room201.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room203.c",
		"west"      : "/open/clan/sky-wu-chi/room/room202.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/room204.c",
	]) );
	set( "long", @LONG
走进这里突然一阵闪光在眼前
有金光
白光
五色的光芒
你拿出太阳眼镜带上
才看清楚
原来...墙壁是金子作的
玻璃是钻石镶成的
地板全都是白银
原来你到了一个大财主的家了
这里是大财主smalltwo的家..帮里有95%的钱是靠它在提供的
这里豪华的设备让你瞠目结舌
LONG);
	setup();
	replace_program(ROOM);
}
