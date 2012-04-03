#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "小拱桥");
  set ("long", @LONG
一做最简单不过的小桥，窄的仅能容纳数人通过，桥下一流清溪穿过，带来
阵阵水气，使你精神又为之一振，再往前面走就属仙剑派的后山了。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"walley4",
  "south" : __DIR__"walley3",
]));

  set("outdoors", "/open/gsword/room");
  set("objects",([
     "/open/gsword/mob/hunter.c" :1,
   ]));

  setup();
}
