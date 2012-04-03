// Room: /open/gsword/room/eghouuse3.c
inherit ROOM;

void create ()
{
  set ("short", "寝居");
  set ("long", @LONG
这儿是辈分较高的师兄们所住的地方，只见一张张的床排列的非常整齐
，床上的被褥，衣物等更是折叠的方方正正，显见仙剑纪律之严，更显
仙剑弟子的心性不诃。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g3-8.c",
]));

  set("objects",([
    "/open/gsword/npc/trainee-1":1,
  ]));

  setup();
}
