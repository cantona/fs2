inherit ROOM;
void create() {
	set( "short", "懒虫的家" );
	set( "owner", "scs" );
	set( "object", ([
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount2"  : 20,
		"amount1"  : 38,
		"file7"    : "/open/ping/obj/ring-2",
		"file8"    : "/open/love/obj/cloth1",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount3"  : 19,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"file10"   : "/open/gsword/obj/yuboots",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"amount4"  : 20,
	]) );
	set( "light_up", 1 );
	set( "build", 10013 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room226",
		"west"      : "/open/clan/ou-cloud-club/room/room164",
	]) );
	set( "long", @LONG
这是傲云山庄内,号称点子之王的懒虫的练功房里面藏着
他争战狂想多年的宝物,摆设看似简单其实内藏玄机,暗中布有
阵式防像oasis这样的小人。最近懒虫正在苦思新招式,希望能
一举打败焚天这个魔头,墙上深刻的刀痕,都显示着他实力的增
加.听说他已经领务出幔罗千叶刀法的终极绝招,相信不久后他
会成为傲云山庄内不可或缺的高手之一.
LONG);
	setup();
	replace_program(ROOM);
}
