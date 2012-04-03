// Room : /open/clan/ou-cloud-club/room/room5.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room11",
		"west"      : "/open/clan/ou-cloud-club/room/room122.c",
]) );
	set( "long", @LONG


明月几时有  把酒问青天  不知天上宫阙  今夕是何年

我欲乘风归去  惟恐琼楼玉宇

高处不胜寒  起舞弄清影  何似在人间

转朱阁  低绮户  照无眠

不应有恨  何事长向别时圆

人有悲欢离合  月有阴晴圆缺

此事古难全  但愿人长久  千里共婵娟

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "light_up", 1 );
	set( "short", "水调歌头--苏轼" );
	set( "owner", "abcabc" );
	set( "build", 10304 );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/skykey",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount1"  : 65,
		"file7"    : "/open/gblade/obj/dragon_book",
		"file2"    : "/open/fire-hole/obj/r-pill",
		"amount9"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount2"  : 326,
		"file9"    : "/daemon/class/fighter/armband",
		"amount4"  : 2,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"file8"    : "/open/gblade/obj/dragon_book",
		"amount6"  : 1,
		"amount8"  : 1,
	]) );
	setup();

	}
