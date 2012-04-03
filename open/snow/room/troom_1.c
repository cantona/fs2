// Room: /u/e/eiei/work/troom_1.c
inherit ROOM;

void create ()
{
  set ("short", "林间小径");
  set ("long", @LONG
    走出雪苍派的总部之后，就可以看到这一条通往山上的
    小路。路旁长满了一些叫不出名字的植物，虽然看起来
    有点诡异，不过由于颜色鲜艳，所以散发出另一种美丽
    的气息。
LONG);

  set("outdoors", "/u/e/eiei/work");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"troom_0.c",
  "north" : __DIR__"troom_2.c",
]));

  setup();
}
