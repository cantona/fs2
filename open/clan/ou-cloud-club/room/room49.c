// Room : /open/clan/ou-cloud-club/room/room49.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$炼金研究栋$NOR$" );
	set( "build", 10032 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/ou-cloud-club/room/room54.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room48",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
你来到一扇青光之门的前方,柔和的青光却似乎想要阻止你开启,
或许门后正有群魔张牙舞爪的准备迎接客人,看来似乎不适合以帅气
的破门方式强行进入,最好是寻找一把可以开启的钥匙吧!!不过你好
像隐约听到钟声由门后传来,邪恶的地方也存在着神的净地吗!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
