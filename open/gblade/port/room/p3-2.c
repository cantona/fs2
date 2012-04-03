// Room: /open/gblade/port/room/p3-2.c
inherit ROOM;

void create ()
{
  set ("short", "中央大道");
  set ("long", @LONG
宽广的石板路 , 崭新的建筑 , 繁荣的街景 , 这里真是个
希望之都啊 . 道路往南衔接港口 , 西边是枫林港最大的客栈
因为通航带来的大量旅客 , 客栈生意非常之好 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p4-1.c",
  "south" : __DIR__"p3-3.c",
  "north" : __DIR__"p3-1",
]));

  setup();
}
