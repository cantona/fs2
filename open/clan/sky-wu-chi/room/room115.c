// Room : /open/clan/sky-wu-chi/room/room115.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "long", @LONG
这儿是天道无极的阵眼，阵眼中设有八八六十四卦，分
别通往不同的卦象让帮众能从这儿到达其它帮众的练功房，
也能从这儿回到帮内大厅，这个房间没有什么摆设，只有在
中心有一个高八尺、宽八尺，呈八角型状的铁铸大八卦，上
头以朱漆绘有易经上的六十四个卦象。

LONG);
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
]) );
	set( "short", "乾坤门" );
	set( "owner", "crlin" );
	set( "object", ([
		"file10"   : "/open/doctor/item/sick_item",
		"file7"    : "/open/doctor/pill/gnd_pill",
		"file4"    : "/open/doctor/pill/human_pill",
		"amount10" : 1204,
		"amount9"  : 1230,
		"amount8"  : 41,
		"file6"    : "/open/doctor/pill/sky_pill",
		"file2"    : "/open/doctor/obj/needle9",
		"amount7"  : 2477,
		"file8"    : "/open/common/obj/plaster2",
		"amount2"  : 1,
		"file9"    : "/open/doctor/pill/ff_pill",
		"file5"    : "/open/doctor/pill/ice_pill",
		"amount6"  : 2453,
		"amount4"  : 2402,
		"file1"    : "/open/doctor/pill/taii_pill",
		"amount5"  : 524,
		"amount1"  : 656,
		"amount3"  : 902,
		"file3"    : "/open/doctor/pill/nine_pill",
	]) );
	set( "light_up", 1 );
	set( "build", 10004 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	setup();

	}
