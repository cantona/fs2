// Room: /u/f/fire/room/room1-6.c
//inherit ROOM;

#include <ansi.h>
#include <marksman.h>
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", YEL"宋家商店"NOR);
  set ("long", @LONG
这里摆满了各式各样刚刚打造出来的防具和武器，屋里到处是皮
革金属布料和刀剑。你似乎看到在墙上及桌上看到零零散散的火把及
绳钩可买。商店里的老板正亲地招待你。
LONG); 

 set("exits", ([ /* sizeof() == 1 */
"north" : __DIR__"room1-4",
]));
set("outdoors","/open/marksman");

  setup();
}
