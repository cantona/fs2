inherit ROOM;

void create ()
{
  set ("short", "魔教分坛");
  set ("long", @LONG
墙上架着一具具雄雄的火把，中间则供奉着一座非人非蛇的魔神
图腾，这种和平南城格格不入的其怪装饰，便是冥蛊魔教处于平南城
的根据地了。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/ping/room/road1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/elder3.c" : 1,
]));

  setup();
}
