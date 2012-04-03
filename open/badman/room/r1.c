// Room: /open/badman/room/r1
inherit ROOM;

void create ()
{
  set ("short", "小饭馆");
  set ("long", @LONG
几张摆设朴素的小圆桌，和几张老旧的长板凳，在橘黄色的灯
火照耀下，使得整个小饭馆看起来格外的令人感到温馨。出乎你意
料的，店里面的顾客似乎不多，感觉其来不太像是一般山寨里的食
堂那样，闹哄哄的挤满了一堆爱喝酒闹事的流氓。
    北边的房间传来阵阵的香味。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r13",
  "east" : __DIR__"b8",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/ha" : 1,
]));

  setup();
}
