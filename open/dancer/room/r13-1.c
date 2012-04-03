// Room: /open/dancer/room/r13-1.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","花丛");
  set ("long", @LONG
你发现你的四周满是花朵，恍如置身花海之中，有些甚至是你从未
看过之品种，令你不禁以为到了世外桃园之中。


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/dancer/room/r13-2.c",

]));
   set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/water_girl.c" : 1,
]));
  set("light_up", 1);

  setup();
}
