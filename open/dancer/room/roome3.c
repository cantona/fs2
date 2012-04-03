// Room: /open/dancer/room/roome3.c :cgy
#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
夜梦小筑的走廊，北面的墙上有着美丽的雕塑，走到这
里你闻到阵阵花香，东面就是月牙儿的寝室，南面则是花园
，如果没事的话还是不要随便进入寝室吧!!



LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/roome2.c",
  "east" : "/open/dancer/room/roome4.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "east" : (: look_door,     "east" :),
]));

  create_door("east", MAG"镂花红桧大门"NOR, "west", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
