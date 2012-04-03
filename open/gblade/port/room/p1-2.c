// Room: /open/gblade/port/room/p1-2.c
inherit ROOM;

void create ()
{
  set ("short", "中央大道");
  set ("long", @LONG
宽广的石板路 , 崭新的建筑 , 繁荣的街景 , 这里真是个
希望之都啊 , 络亦不绝的行人涌入城市 , 大家脸上带着自信
的笑容 , 人人都想在枫林港大展身手 , 创一番大事业 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"p1-3.c",
  "north" : __DIR__"p1-1",
]));

  setup();
}
