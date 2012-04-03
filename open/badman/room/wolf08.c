inherit ROOM;
void create()
{
  set ("short","叉路");
  set ("long",@LONG
这里是一条叉路 ,道路在这里向东西两个不同的方向延伸 .东边是
一间破旧的草屋 ,而西边则是道路的延伸 .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wolf10.c",
  "east" : __DIR__"wolf09.c",
  "south" : __DIR__"wolf07.c",
]));

  set("objects",([ /* sizeof() == 2 */
  "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
