inherit ROOM;

void create ()
{
  set ("short", "南堂火");
  set ("long", @LONG
不知是不是迷信的关系，总觉得有闻到焦烤的味道，难道书本烧
起来了，还是只是自己的多虑，是那些书让我有这种想法的吗？这里
的书本可真奇妙。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
