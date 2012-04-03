inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "连峰道");
  set ("long", @LONG
沿着山峰而走，来到这一条连接山峰的道路，虽是一条连接着山
峰的小路，但是却格外的不好走，处处是陷阱，若一个不小心跌下山
峰，将会是粉身碎骨。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"mon43",
  "north" : __DIR__"mon41",
]));

  setup();
}
