inherit ROOM;
void create()
{
  set ("short","狼谷");
  set ("long", @LONG
这里是恶人谷附近的一个小山谷 ,映入眼前的 ,除了形势陡峻的谷地
外 ,便是结伴成群的狼 .但这些狼儿却是好像受过训练一般 ,只是看着你
 ,而不攻击 .

LONG);

  set("outdoor", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"wolf01.c",
  "north" : __DIR__"wolf05.c",
  ]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/wolf.c" : 2,
]));
  setup();
}
