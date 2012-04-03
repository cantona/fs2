// Room : /open/clan/sky-wu-chi/room/room84.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "通道后段" );
	set( "light_up", 1 );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/ping/obj/cloud",
		"amount2"  : 1,
		"file1"    : "/open/ping/questsfan/obj/key",
		"amount1"  : 1,
		"file2"    : "/open/ping/questsfan/obj/key",
	]) );
	set( "owner", "aow" );
	set( "build", 10240 );
	set( "long", @LONG
笔直的通道，一直通往尽头的马房，四周没有任何物品 
地上却铺着高级的地毯。在你通过了通道前段后你便比较不
害怕这个通道了。似乎感觉它变得亲切了许多，这下你不禁
胆大了起来，开始用手去摸摸通道的墙壁，看看是不是有什
么暗门之类的会让你发现。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room79",
  "north" : "/open/clan/sky-wu-chi/room/room88.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
