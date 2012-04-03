#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "小径");
	set("long", "以碎石铺成的小路，平时很少有人经过，所以长了一地的青苔，由于离
剑派也有一段距离，所以平时也鲜少有人清扫。
");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"alley7",
  "south" : __DIR__"plain13",
]) );

  set("outdoors", "/open/gsword/room" );
  set("objects",([
  "/open/gsword/mob/white_tiger.c": 1,
  ]));


  setup();
}
