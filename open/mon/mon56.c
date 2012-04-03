inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一片绿油油的草原，你真不敢相信，在这么高的长白山上
竟然会有如此的一片草原，这里原本是一个池子，但是池水经年累月
的，已经干涸了一部份，而干涸的部份却长出了一片青绿的草原。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/b-wolf.c" : 4,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon57",
  "north" : __DIR__"mon55",
]));

  setup();
}
