// Room : /open/clan/demon_castle/room/room2.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "short", "魔˙装备室" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/demon_castle/room/hall",
]) );
	set( "no_transmit", 1 );
	set( "long", @LONG

    走进此间石室，数道耀眼的光茫闪烁不定，原来此地便是收藏着
恶魔城主要武器装备的EQ室，只见武器柜上摆满了许多稀世利器，无
论是剑、刀、棍、暗器、可谓是十八般武器样样齐全，可见帮主初创
恶魔城时亦花费了许多心血在于武器装备的收集，难怪恶魔城能独霸
天下，屹立不摇。
(想知道使用方法请look eq room)


LONG);
set( "item_desc", ([ /* sizeof() == 1 */
  "eq room" : "  在此eq室，你可以用 list 武器种类 来知道有什么你想要的武器，
用 list 防具种类 来知道有什么你想要的护具，
用 list another  来知道有什么你想要的杂物，
用 take + 物品名   来取得你想要的物品，
用 put  + 物品名   来存放你不要的物品 .
",
]) );
set( "objects", ([ /* sizeof() == 1 */
  "/open/clan/demon_castle/npc/npc4" : 1,
]) );
	set( "clan_room", "傲云山庄" );
	set( "no_transmit", 1 );
	set( "eqroom", 1 );
	setup();

	}
