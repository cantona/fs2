inherit ROOM;
void create()
{
  set ("short","村庄口");
  set ("long",@LONG
这里似乎是一个小村庄 ,来到这里 ,狼群变的更奇怪了 ,不但不怕
你 ,还很亲热的闻着你身上的味道 .这里看来是这个村庄唯一的出入口
 ,进去看一看吧 .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wolf08.c",
  "southup" : __DIR__"wolf04.c",
]));

  set("objects",([ /* sizeof() == 2 */
  "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
