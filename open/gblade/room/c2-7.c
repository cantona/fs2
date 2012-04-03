inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

四周尽是一片漆黑，即使手中有火把，仍然看不太清楚四周的环境，你只
好靠着墙壁摸索前进。突然前方传来一阵兽吼，把你吓了一大跳，不知道
是什么样的野兽竟然能发出如此的巨响。

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c2-6.c",
  "east" : __DIR__"c2-8.c",
]));

  setup();
}
