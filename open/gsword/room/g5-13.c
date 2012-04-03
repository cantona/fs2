// Room: /open/gsword/room/g5-13.c
inherit ROOM;

void create ()
{
  set ("short", "阵法厅");
  set ("long", @LONG
这里是仙剑派门人修行阵法的地方，你可以看到这里有许多的小人放
在这儿，一群排成北斗七星，一群排成太极的图案，还有许多的一群跟本
让你看不出这是什么图形,看着看着你发觉你的眼皮越来越重,才知道仙剑
阵法实在博大精深。武林第一果然名不虚传。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-9.c",
  "east" : "/open/gsword/room/g5-14.c",
]));

  set("objects", ([ /* sizeof() == 1 */
        "/daemon/class/swordsman/shouyau": 1,
]));

  set("light_up", 1);

  setup();
}
