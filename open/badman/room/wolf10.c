inherit ROOM;
void create()
{
   set ("short","小道");
  set ("long",@LONG
这里是这个村庄最大的一条道路 ,来到这里 ,狼只已不复见 ,在你
的西边是一栋民房 ,往北则是道路的延伸 .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wolf11.c",
  "east" : __DIR__"wolf08.c",
  "north" : __DIR__"wolf12.c",
]));

  setup();
}
