// Room : /open/clan/ou-cloud-club/room/room2.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
这里为帮会的银行．．．除了让帮众存钱外，重要的
是让大家捐赠多余的钱财，以供帮会可以自由运用，并且
以财行义，你可以看看这儿的公告(board) ．．．

 
                     [0;1;33m□[1m□[1m [1m [1m [1m [1m [1m [1m□[1m□[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m□[1m□[1m [1m [1m [1m□[1m□[1m [1m [1m [1m [1m [1m [1m□[1m□[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m□[1m□[1m [1m [1m [1m□[1m□[1m [1m [1m [1m [1m [1m [1m□[1m□[1m [0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m□[1m□[1m [1m [1m [1m□[1m□[1m [1m [1m [1m [1m [1m [1m□[1m□[0m
[0;1;33m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[0m
 [33m                    钱      钱   钱[0m
[33m                     钱      钱   钱[0m
[33m                     钱      钱   钱[0m
[33m                 钱钱钱钱钱钱钱钱钱[0m
[33m                     钱      钱[0m

           [0;1;31m□[1mi[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mi[1m□[1mj[0m 
           [0;1;31m□[1mi[1m□[1mS[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mI[1m□[1m□[1m□[1m□[1m□[1mj[0m

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "short", "$HIC$傲云$HIR$钱庄$NOR$" );
	set( "item_desc", ([
		"board" : @ITEM
c_deposit          帮派钱庄存钱(暂时存入，还能领出)
c_donate           帮派钱庄捐钱(不能在领出，贡献给帮派)
要c_donate前需先c_deposit存入才行
ITEM,
	]) );
	set( "object", ([
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"amount5"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"amount7"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount6"  : 1,
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"amount4"  : 1,
	]) );
	set( "build", 10957 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/hall",
]) );
	set( "light_up", 1 );
	setup();

	}
