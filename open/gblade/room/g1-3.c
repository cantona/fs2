inherit ROOM;

void create ()
{
  set ("short", "青石板路");
  set ("long", @LONG

从这里往北望去，只见崇阁巍峨，层楼高起；面面琳宫合抱，迢迢复道萦
纡；金辉兽面，彩焕璃头，富丽堂皇。想不到金刀门竟然如此华丽。

LONG);
 
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"g1-9.c",
  "south" : __DIR__"g1-2.c",
  "north" : __DIR__"g1-4.c",
  "east" : __DIR__"g1-10.c",
]));

  setup();
}
