// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "南厢房");
  set ("long", @LONG
这是计谋厅的南厢房，你可以看到计谋厅的长老正坐在那边
，手上拿着笔正在地形图上作记号，仔细看那张地形图才发觉是
儒门四周的地形，可能是正在作儒门的防备工事图。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"w3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/old_scholar2.c" : 1,
]));

  setup();
}
