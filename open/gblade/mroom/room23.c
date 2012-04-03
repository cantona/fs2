// Room: /u/m/moner/room/room23.c
inherit ROOM;

void create ()
{
  set ("short", "厨房");
  set ("long", @LONG

这是平时厨子们做菜的地方，在右边的一角放着小山一般高的蔬菜，
厨子在卖力的烧着菜，手中的菜刀盘旋飞舞，看来刀法不会必你差多
少，阵阵的白烟从铁锅中冒出，丝丝的香气传入你的鼻中，你忍不住
流了满地的口水。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room10.c",
]));
  set("light_up", 1);

  setup();
}
