// Room : /open/clan/demon_castle/room/room6.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "short", "ζ紫星堂ζ" );
	set( "owner", "mory" );
	set( "object", ([
		"file8"    : "/open/mogi/castle/obj/ninepill",
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/magic-manor/obj/magic-sign",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"amount1"  : 1,
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/ping/obj/iceger",
		"amount7"  : 1,
		"file2"    : "/open/gsword/obj/ring-1",
		"file10"   : "/open/killer/weapon/k_torch",
		"amount9"  : 1,
		"amount3"  : 5,
		"file3"    : "/open/doctor/pill/gnd_pill",
		"file7"    : "/open/main/obj/firesword",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 11,
	]) );
	set( "light_up", 1 );
	set( "build", 10661 );
	set( "clan_room", "恶魔城" );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/demon_castle/room/room20.c",
		"south"     : "/open/clan/demon_castle/room/room5.c",
		"west"      : "/open/clan/demon_castle/room/room19.c",
]) );
	set( "long", @LONG

    [1m[37m走进此地隐约有一股无名的杀气紧盯着妳，四周的空气有如寒冰[0m
[1m[37m结霜般的令妳透不过气来，寒风飕飕的吹，妳的心跳亦随着加速跳动[0m
[1m[37m眼前一位神秘之人盘坐于七彩灵石之上吸收着大地精华，透露出一种[0m
[1m[37m诡异的感觉，看来此处不是你久留之地，还是趁早离开为妙。[0m

LONG);
	setup();

	}
