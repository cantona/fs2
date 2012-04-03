// Room: /open/dancer/room/r8-4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","树林");
  set ("long", @LONG
你身处在密林之中，放眼望去尽是一片树海，茂密的树木几乎将
阳光完全阻挡，只有些许光线由树缝中射入。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/dancer/room/r8-5.c",

]));

  set("light_up", 0);

  setup();
}
