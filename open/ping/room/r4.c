// Room: /u/m/moner/open/room/r4.c 
inherit ROOM;
 
void create ()
{
  set ("short", "二楼楼梯");
  set ("long", @LONG

    往上可以通往三楼, 往下回到一楼, 楼梯的扶手和整座楼梯都是选用上等
木材制造的, 它的雕工精细的让你真是叹为观止, 往西是二楼的走廊。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"r3.c",
  "west" : __DIR__"r5.c",
  "down" : __DIR__"r7.c",
]));

  setup();
  replace_program(ROOM);
}
