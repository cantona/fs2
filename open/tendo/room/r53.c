// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","二代弟子休息室");
        set("long", @LONG
这间休息室是给天道派第二代弟子休息时所用的，在这间房中有
缸水，你可以喝一点来解渴。此外这还有几张床可让你暂时休息一下
，回复一下疲倦的身心。
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/obj/beck":1,
]));
set("exits", ([
	"east":__DIR__"r39",
]));
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);
  set("light_up",1);
  set("no_spells",1);
  setup();
}
