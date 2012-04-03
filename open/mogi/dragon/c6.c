// Room: /u/p/poloer/dragon/c6
inherit ROOM;

void create ()
{
  set ("short", "炎龙古后段");
  set ("long", @LONG
来到了后段就必须更加小心，也就是越靠近凶恶的谷主啰。四周
突然比较有生气起来，可以看到些小动物了，但不禁怀疑这是诱敌的
技巧吗?

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob8.c" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c5",
  "south" : __DIR__"c8",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
