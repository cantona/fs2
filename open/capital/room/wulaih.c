// Room: /open/capital/room/wulaih.c
inherit ROOM;

void create ()
{
  set ("short", "无赖窝");
  set ("long", @LONG
这里是个脏乱的地方, 很难想像在京城里也有这种汙浊的地区,
你向四周一看, 便可发现还有不少人或躺或坐的靠在墙壁上, 双眼斜
视着你, 嗯~~没事还是不要在这儿逗留才好。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r39",
  "north" : "/open/capital/room/wulaih2",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/wulai" : 1,
  "/open/capital/npc/dipi" : 1,
]));
  set("light_up", 1);

  setup();
}
