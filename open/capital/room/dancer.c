//room:/open/dancer/room/start.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short", HIY "舞者公会" NOR );
  set ("long", @LONG

                舞者公会

这里是舞者的公会你可以在这里加入(join)成为舞者
甚至可以直接拜公会的主管为师！但是令人感到不解
的是为何远在镜月岛的夜梦小筑其公会会设在天子脚
下的京城呢？

LONG);

  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 1 */
 "west" : __DIR__"r69",

]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/master_linr.c" : 1,
]));

  setup();
  call_other("/obj/dancer_bc.c","???");
  }