inherit ROOM;
void create()
{
  set ("short","狼谷谷口");
  set ("long", @LONG
这里是恶人谷附近的一个小山谷 ,映入眼前的 ,除了形势陡峻的谷地
外 ,便是结伴成群的狼 .但这些狼儿却是好像受过训练一般 ,只是看着你
 ,而不攻击 .

LONG);
  
  set("outdoors", "/open/badman/room");
  set("exits", ([ /* sizeof() == 4 */
   "hole" : __DIR__"forest12.c",
   "northeast" : __DIR__"wolf02.c",
   "northwest" : __DIR__"wolf03.c",
   "northdown" : __DIR__"wolf04.c",
  ]));

  set("objects", ([ /* sizeof() == 3 */
  "/open/badman/npc/wolf.c" : 3,
]));
  setup();
}
