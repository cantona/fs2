// Room: /open/main/room/r26.c

#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
南北两边是十分浓密的森林, 如果不是这边人来人往, 恐怕会
遭歹徒暗算哩.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"F12",
  "west" : __DIR__"r25",
  "east" : CENTER_ROOM"road2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/magic-manor/npc/steal-man" : 1,
]));


  set("outdoors", "/open/main");

  setup();
}
