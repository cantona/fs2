// Room: /open/main/room/s33.c

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/marksman/room/room2-1",
  "north" : __DIR__"L23",
  "east" : __DIR__"s34",
]));
  set("outdoors", "/open/main");
}
