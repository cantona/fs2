// Room: /u/r/ranko/hut.c
inherit ROOM;

void create ()
{
  set ("short", "小茅屋");
  set ("long", @LONG
一间以茅草搭成的茅屋，里面堆放着一些杂物，似乎是农夫们堆放
器具的地方，亦是小孩子玩耍的场所。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"f5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/child.c" : 2,
]));

  setup();
}
