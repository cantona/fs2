#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "小径");
	set("long", "以碎石铺成的小路，平时很少有人经过，所以长了一地的青苔，由于离
剑派也有一段距离，所以平时也鲜少有人清扫。
");

  set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"alley8",
  "southeast" : __DIR__"alley6",
  "south" : __DIR__"plain11",
  "east" : __DIR__"plain13",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
