inherit ROOM;

void create ()
{
  set ("short", "南堂水");
  set ("long", @LONG
不知是不是迷信的关系，总觉得自己好像处于水中，难道自己走
进水中，还是只是自己的多虑，是那些书让我有这种想法的吗？这里
的书本可真奇妙。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"water.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_water.c" : 1,
]));

  setup();
}
