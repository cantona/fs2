// Room: /open/gblade/port/room/p1-6.c
inherit ROOM;

void create()
{
	set("short","王氏杂货铺");
  set ("long", @LONG
这是一家杂货铺 , 贩卖着火把 , 地图等日常所需的东西 .
你看到店里璘琅满目的陈列着各种商品 , 如果你有什么在别家店
里买不到的东西 , 也许可以在这里找到 !

LONG);

  set("light_up", 1);
	set("objects",([
	"/open/port/npc/keeper_wang":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
	"west" : "/open/port/room/r1-4",
]));
  setup();
}
