// Room: /open/poison/room/room21
inherit ROOM;
#include <ansi.h>
#include <room.h>
void create ()
{
  set ("short", "牢房");
  set ("long", @LONG
这里空空荡荡的，当铁门关上时，里面一片死寂，听不
到外面任何一丝声音，四周墙壁上挂满了各式各样的刑具，
地上留有斑斑旧血迹，这里该是魔教用来刑囚的地方吧。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room22.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/wine.c" : 1,
]));
  create_door("west",HIY "黄色铁门"NOR, "east", DOOR_CLOSED);
  set("need_key", ([ /* sizeof() == 1 */
  "west" : 1,
]));

  setup();
}
