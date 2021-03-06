// Room: /open/main/room/L15.c
#include "/open/open.h"

inherit ROOM;

void create()
{
	set("short", "哭风坡");
	set("long", @LONG
你看到路边有个亭子，有不少人正围着哈杯茶休息呢。你仔细
瞧来瞧去，唯有卖茶的老头是你唯一感觉上认识的人。有问题的话
不妨去问问他，看他的样子，应该知道不少事吧。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"r42",
  "west" : __DIR__"L14",
  "north" : __DIR__"s25",
  "east" : __DIR__"r39",
]) );

  set("objects", ([
      MAIN_NPC"vendor"  :       1,
  ]) );
  set("outdoors", "/open/main" );

  setup();
}
