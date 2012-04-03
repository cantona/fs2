// Room: /open/main/room/f15.c

inherit ROOM;

void create ()
{
  set ("short", "森林");
  set ("long", @LONG
这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/squirt" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r15",
  "west" : __DIR__"f14",
  "east" : __DIR__"f16",
]));
   set("objects",([
     "/open/main/npc/sho-long.c": 1
     ]));

  setup();
}
