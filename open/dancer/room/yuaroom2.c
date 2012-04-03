//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIC "月半弯的小屋" NOR );
  set ("long", @LONG

这是一间雅致的小屋，屋里的布置虽然简陋，但仍不失
其高雅的品味，且整理得一尘不染，可想而知其主人必
是一位高尚幽雅的人！

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south"     :"/open/dancer/room/yuaroom.c",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/master_yuaa.c" : 1,
]));

  setup();
 
}
