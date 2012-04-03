// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "北厢房");
  set ("long", @LONG
这是学识厅老师的厢房，只见房中桌上十分的整齐，桌上尽放置
着许许多多的经典，仔细观看桌上的书本，每本看起来都十分的老旧
，便可知道老师多么专研于学识的研究。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"e3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/literate.c" : 1,
]));

  setup();
}
