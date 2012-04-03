// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","芳林园");
  set ("long", @LONG
这里是枫林境内最大的花园 - 芳林园 . 假日时居民们最喜
欢到这里来赏花 , 散步 , 园中百花竞放 , 古木参天 , 到处都
是宜人的景色 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-9",
	"south" : "/open/port/room/r3-4",
	"north" : "/open/port/room/r3-11",
]));
	set("objects",([
	]));

  setup();
}
