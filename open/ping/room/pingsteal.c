#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "平南铁铺");
	set( "build", 606 );
  set ("long", @LONG
这里是平南城的打铁铺,几个打铁师父正在辛勤的工作,
墙上挂满了做好的兵器,刀,剑等样样不缺,你可以在这里买
东西.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road5",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sells0" : 1,
]));
  set("light_up", 1);

  setup();
}
