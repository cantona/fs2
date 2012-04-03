// Room: /open/main/room/m23.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
  set ("long", @LONG
西边是一座高耸的山, 完全找不到路可以上去, 听说有时会有
仙人出没, 所有除了叫笔架山之外, 又有一个名称叫飞来峰, 上面
有一个石头有一个大大的脚印, 称为仙迹岩, 只是向来只是传说罢
了, 根本没人上去过, 除非有特殊的福缘吧?!
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m15",
  "east" : __DIR__"r32",
  "south" : __DIR__"s25",
  "west" : __DIR__"house.c",
]));
  set("outdoors", "/open/main");

  setup();
}
