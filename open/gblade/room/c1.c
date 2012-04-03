inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

头顶传来喀喀的巨响，也不知道是谁走路所发出来的脚步声，透过这里特
殊的构造，所产生的回音还真是吓人，你最好是快一点离开，免得被这振
耳的巨响给弄聋了。
你往地道的深处望去，地道似乎很久没有人走过了，不知道里面隐藏了些
什么危机，你想是不是该多准备一些东西再来走这个地道？

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"g1-2.c",
  "north" : __DIR__"c2.c",
]));

  setup();
}
