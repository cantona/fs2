// Room: /open/gsword/room/kitchen.c
inherit ROOM;

void create ()
{
  set ("short", "伙房");
  set ("long", @LONG
这是平时厨子们做菜的地方，在右边的一角放着小山一般高的蔬菜，
左前方用来炒菜的铁锅尤为吓人，算了算半径，直有五尺之多，想必
这厨子的也有几分内功底子。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/eghouse1.c",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/disciple.c" : 1,
]));

  set("light_up", 1);

  setup();
}
