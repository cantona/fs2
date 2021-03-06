inherit ROOM;
void create() {
	set( "short", "珍珑室" );
	set( "object", ([
		"amount1"  : 1,
		"amount6"  : 5,
		"file2"    : "/open/fire-hole/obj/y-pill",
		"amount2"  : 10,
		"file3"    : "/obj/gift/xisuidan",
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/obj/gift/lingzhi",
		"file7"    : "/open/fire-hole/obj/w-pill",
		"file9"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"file4"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 1,
		"file10"   : "/obj/gift/xiandan",
		"amount5"  : 67,
		"file8"    : "/obj/gift/hobowdan",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"amount4"  : 4,
		"file6"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "build", 10006 );
	set( "owner", "jsa" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room188",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
此处乃是特为下棋而设计的棋室，纸门上图画着闲
云野鹤，轻风徐徐添几分豁达；进得室来却不见繁琐家
俱摆设，房间正中置一石桌，桌上雕凿出棋盘纹路，楚
河汉界车马争锋，以水玉雕成的棋子晃着微微光晕，红
黑二色的漆色分为两军逐鹿中原；桌下是几张古朴的蒲
团，旁边有几个小几供放置香茗佳酿。
LONG);
	setup();
	replace_program(ROOM);
}
