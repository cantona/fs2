// Room: /open/badman/room/t6.c

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
你走到了地道的尽头，微弱的光线从洞口射了进来，但是仍然
无法让你看清这四周，还是赶快先离开这个阴森的地道吧。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/t5",
  "out" : "/open/badman/room/b0",
]));

  setup();
}
