// Room: /open/dancer/room/r9-5.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short","山林");
  set ("long", @LONG
你身处在山丘之上，在你的西边隐约可看见一条小路，然而你却
无法由西边穿越树林，东边则是陡峭的山岗。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/dancer/room/r8-5.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/poison_girl.c" : 1,
]));
  set("light_up", 1);

  setup();
}
