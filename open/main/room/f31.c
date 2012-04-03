// Room: /open/main/room/f31.c

inherit ROOM;

void create ()
{
  set ("short", "森林");
  set ("long", @LONG
这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r49",
  "west" : __DIR__"f30",
]));

  setup();
}
