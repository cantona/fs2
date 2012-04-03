// Room: /open/poison/room/room20
#include <ansi.h>
#include <room.h>
inherit ROOM;
void create()
{
  set ("short", "牢房");
  set ("long", @LONG
这里是冥蛊魔教用来囚禁一般囚犯的地牢，地上则是铺
上了一层杂乱无序的稻草，你感到这里是那么的脏乱，一刻
也不愿再多停留，恨不得早点离开。
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"path13",
]));
  set("objects", ([ /* sizeof() == 1 */
	"/open/poison/npc/yun" : 1,
]));
  set("need_key/north",1);
  create_door("north",HIR"红色铁门"NOR,"south",DOOR_LOCKED);
  setup();
}
