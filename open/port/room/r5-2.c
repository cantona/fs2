// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","海岸");
  set ("long", @LONG
这里是枫林港的海岸 . 为免海水倒灌 , 或是有人遭到意外
 , 居名们在海岸旁加修了一道护堤 . 一条石子铺成的小路向东
西方延伸 . 北边即为单将军庙 , 每到黄昏 , 庙旁的空地上便
聚集了捕鱼归来的渔民在此贩卖 , 形成鱼市 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r5-1",
	"west" : "/open/port/room/r5-3",
]));
	set("objects",([
	]));

  setup();
}
