// Room: /open/capital/room/r25.c

inherit ROOM;

void create ()
{
  set ("short", "日落驰道");
  set ("long", @LONG
路边老榕树荫下有个挑担卖酒的，酒很凉，既解渴又过瘾，还有开
花蚕豆，椒盐花生和卤蛋下酒，口味虽未见佳，做得却很干净。卖酒的
是个白发苍苍的红鼻子老头，京城里一半以上的人都晓得城西有个卖酒
卖了六十年的老头。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/oldman" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r26",
  "north" : __DIR__"r24",
"west" : "/open/wind-rain/room1",
  "east" : __DIR__"h09.c",
]));
  set("gopath", "north");

  setup();
}
