#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "小径");
  set ("long", @LONG
以碎石铺成的小路，平时很少有人经过，所以长了一地的青苔，由于离
剑派也有一段距离，所以平时也鲜少有人清扫。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"alley7",
  "south" : __DIR__"alley5",
  "east" : __DIR__"plain11",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
