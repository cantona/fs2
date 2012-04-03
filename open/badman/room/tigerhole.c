// Room: /open/badman/room/tigerhole
inherit ROOM;

void create ()
{
  set ("short", "虎穴");
  set ("long", @LONG
你终于来到了地道的尽头，四周斑斑的血迹和吃剩的动物尸体
，原来这竟是森林之王－老虎的巢穴，看来此地还是不宜久留，赶
快离开的好。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/badman/room/t7",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/s_tiger" : 1,
]));

  setup();
}
