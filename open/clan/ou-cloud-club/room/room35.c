// Room : /open/clan/ou-cloud-club/room/room35.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$罗马尼亚  $HIW$外西凡尼亚$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
面前美丽的的多瑙河向西流去,不过,在沿岸的一座山坡顶崖边
,却矗立着一座古老城堡,城堡上空乌云密布,偶尔落下的几道闪电
更是令人心理泛起一阵不祥之感,这座古老的城堡,隐藏着未知的
邪恶强大力量,来自另一个世界的可怕存在...
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room34",
  "northwest" : "/open/clan/ou-cloud-club/room/room36.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
