// Room: /open/start/room/s7.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "养鸡房");
  set ("long", @LONG
咯咯咯！此起彼落的鸡叫声不绝于耳，这里是村人们
饲养鸡畜的地方，吵杂的声音与外面安静的村落形成截然
不同的两个世界，这里可能是凌云村中最热闹的地方吧！

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/start/room/s6",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/chicken" : 3,
  "/open/start/npc/hen" : 3,    //hen add by nako
]));

  setup();
}
