// Room: /open/badman/room/eqroom.c
inherit ROOM;

void create ()
{
  set ("short", "恶人的EQ储存室");
  set ("long", @LONG
这是用来让恶人休息及恶人的前辈为了要照顾后辈所做的宝物储存室...
看者这许多的宝物..大家要有...感谢先辈的照顾.... .
LONG);

  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g1",
]));
  set("no_fight", 1);

  setup();
}
