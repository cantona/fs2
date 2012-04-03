// Room: /open/start/room/f13.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "草棚");
  set ("long", @LONG
这是农夫们搭建专门用来休息的草棚，棚内只有
一些简陋的器具，几张破旧的椅子，有个大水缸放在
旁边。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"f8",
  "west" : __DIR__"f12",
  "south" : __DIR__"f18",
  "east" : __DIR__"f14",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/obj/beck" : 1,
]));
  set("light_up", 1);

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
