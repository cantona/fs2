// Room : /open/clan/ou-cloud-club/room/room39.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
两旁墙上的古老烛台中,昏暗不明的烛火随着腐败的空气摇晃着,
你依稀可见到墙上零星的散布着斑驳的血迹,几乎使你当场作呕,更令
人感到惊惧的,是面前有些许奇怪的人影漫无目的的走动着,以眼角余
光偷偷观察,才警觉到这些都是四肢五官残破不全的食尸人,虽然空有
力量而无智慧灵魂的怪物不足为惧,但若是被缠上了,光他们恐怖的面
容就可以让你连作三天恶梦了,还是尽速低调通过吧!!
LONG);
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "light_up", 1 );
	set( "short", "$HIW$恶魔城$HIR$入口$NOR$" );
	set( "object", ([
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file3"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/prayer/obj/boris-cloth",
	]) );
	set( "build", 10034 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/ou-cloud-club/room/room38.c",
		"east"      : "/open/clan/ou-cloud-club/room/room40.c",
]) );
	set( "no_transmit", 1 );
	setup();

	}
