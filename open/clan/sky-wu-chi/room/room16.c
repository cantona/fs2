// Room : /open/clan/sky-wu-chi/room/room16.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
     你进入了恨天的房间，房内摆设非常的简单，只有小小的几张椅子，
 几张木桌，和一张小小的床，你不断的环顾四周，愈看愈觉得舒适且高雅
 ，你注意到了墙边的一块石头，上面刻着「绝世刀客”，一股刀客的刀气
 充满了整个房间，空气中充满了杀气，你似乎随时有生命的危险。
. 
LONG);
	set( "short", "刀绝无情" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room206",
	]) );
	set( "object", ([
		"amount5"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file9"    : "/obj/gift/bingtang",
		"amount2"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/obj/gift/xiandan",
		"amount8"  : 1,
		"file3"    : "/obj/gift/lingzhi",
		"file8"    : "/obj/gift/shenliwan",
		"amount3"  : 1,
		"amount9"  : 1,
		"file2"    : "/obj/gift/xiandan",
		"file4"    : "/obj/gift/hobowdan",
		"file5"    : "/obj/gift/xiandan",
		"file7"    : "/obj/gift/shenliwan",
		"file6"    : "/obj/gift/unknowdan",
	]) );
	set( "owner", "roboo" );
	set( "build", 10078 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
