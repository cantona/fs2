// Room: /open/badman/room/r11
inherit ROOM;

void create ()
{
  set ("short", "兵器库二楼");
  set ("long", @LONG
还没想到....:b

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"r10",
]));
  set("light_up", 1);

  setup();
}
