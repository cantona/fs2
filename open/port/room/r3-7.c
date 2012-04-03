// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阜财巷");
  set ("long", @LONG
这里是阜财巷 , 道路两旁均是由若干大型厅堂和回廊所组成
的华宅 , 而且大多有园池之美 , 华宅主人不是从京城退休的高
官 , 就是在枫林致富的巨贾 , 他们大多过着豪奢的生活 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r3-6",
]));
	set("objects",([
	]));

  setup();
}
