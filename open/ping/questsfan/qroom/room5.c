// Room: /u/d/dhk/questsfan/room8
inherit ROOM;

#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "绝崖的彼端");
  set ("long", @LONG
这里的北面有一座大型的木栅，只有木栅的角边留有
一道小门而且还上了锁。这里人烟罕至，难道此岭有人居
住。不会是逃命到此的将军吧？…
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room2",
  "east" : "/open/ping/questsfan/room9",
  "enter" : "/open/ping/questsfan/room10",
]));
  set("outdoors", "/u/d");
set("need_key/out",1);
create_door("enter",HIY"大木栅栅门"NOR,"out",DOOR_LOCKED);
  setup();
}
