// Room: /open/gsword/room/suroom2.c

inherit ROOM;

void create ()
{
  set ("short", "四海刀联");
  set ("long", @LONG
本总部因感于身在剑士充斥的蜀中招生困难
于辛亥年十月十日将总部移往枫林港
不便之处 , 敬请包涵体谅

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"su11",
]));
  set("light_up", 1);

  setup();
}
