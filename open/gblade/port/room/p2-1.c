// Room: /open/gblade/port/room/p2-1.c
inherit ROOM;

void create ()
{
    set("short" , "石板大道");
  set ("long", @LONG
这里是枫林港最繁荣的商业中心 , 一堆摊贩沿路兜售 , 璘琅满
目的货品 , 真是令人目不暇给 , 仔细看看 , 也许你会买到奇珍异
宝喔 , 北边是全国有数的大钱庄 , 南边的商店 , 货物之齐全 ,在
全国也是数一数二的 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
/*
  "south" : __DIR__"p2-6.c",
*/
  "north" : __DIR__"p2-5.c",
  "west" : __DIR__"p2-2.c",
  "east" : __DIR__"p1-3",
]));
	set("objects",([
	"/open/gblade/port/npc/man":1,
	]));

  setup();
}
