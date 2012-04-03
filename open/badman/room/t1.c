// Room: /open/badman/room/t1.c

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
你身处在一个阴暗的地道中，几乎伸手不见五指，凹凸不平的
地面使你不得不扶着墙壁才能慢慢移动。前头是一片漆黑，不知道
这条地道会通往何处....

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/main/room/F12",
  "north" : "/open/badman/room/t2",
]));

  setup();
}
