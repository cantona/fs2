// Room : /open/clan/sky-wu-chi/room/room79.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "通道前段" );
	set( "owner", "aow" );
	set( "light_up", 1 );
	set( "object", ([
		"file4"    : "/u/h/houng/eq/armband1",
		"amount4"  : 1,
	]) );
	set( "build", 12891 );
	set( "long", @LONG
笔直的通道，一直通往尽头的马房，四周没有任何物品 
地上却铺着高级的地毯，真是令人起疑。除此之外墙上还悬 
有巨大的火把，那摇曳的火光把整个通道照耀既明亮又诡异
，不禁令你毛骨悚然。你深深的吸了一口气，运起心法中最
上乘的镇心术，将心神收摄心无旁鹜的专心走去。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room18",
  "north" : "/open/clan/sky-wu-chi/room/room84.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
