// Room : /open/clan/ou-cloud-club/room/room36.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城 $HIR$入口$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
穿越一大片崎岖的森林山路之后,你来到了恶魔城的大门之前,
古老生锈的门把,赫然有几处锈斑脱落的部分,看来仍有人能不惧于
邪恶力量的闯进此城,直觉告诉你,若没有一身惊人艺业,绝对无法
从此城生还,因为它所给你的压迫感就是如此的巨大!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/clan/ou-cloud-club/room/room35",
  "enter" : "/open/clan/ou-cloud-club/room/room37",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
