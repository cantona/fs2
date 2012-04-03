// Room: /open/poison/room/path4
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
你来到一个坑道中，这里一片死寂，相当沈静，远方传
来阵阵的滴水声，似乎是在勾惑着你的灵魂，心想幸好自己
修为够，定性强，否则早就崩溃于此地。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/poison/room/path5",
  "eastup" : "/open/poison/room/path3",
]));

  setup();
}
