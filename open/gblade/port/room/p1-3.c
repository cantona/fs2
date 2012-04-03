// Room: /open/gblade/port/room/p1-3.c
inherit ROOM;

void create ()
{
  set ("short", "中央广场");
  set ("long", @LONG
这是一个大广场 , 东西南北四条大路构成了枫林港的主体
这里是枫林港的中心地带 , 街道来来往往的行人 , 有刀客 , 
有商人 , 也有些鬼鬼祟祟的旅客 , 真是个五花八门的城市 ,
西边是枫林港最繁荣的商业地带 , 南边为港阜所在 , 东边则
是刀客的大本营 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1-2",
  "south" : __DIR__"p3-1.c",
  "west" : __DIR__"p2-1.c",
  "east" : __DIR__"p1-4.c",
]));

  setup();
}
