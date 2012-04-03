// Room: /u/l/lotus/girl/tin2.c
#include "/open/open.h"

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "后院门口");
  set ("long", @LONG
东面客人喝花酒喧闹的声音一阵一阵传来, 西面有一道门通往后
院。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"tin1.c",
  "west" : __DIR__"w4.c",
  "east" : __DIR__"guest4.c",
]));
  set("light_up", 1);
  create_door("west", "木门", "east", DOOR_CLOSED);
  setup();
}
