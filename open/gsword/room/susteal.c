#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "蜀中铁铺");
	set( "build", 1978 );
  set ("long", @LONG
 这里是蜀中的打铁铺,几个打铁师父正在辛勤的工作,
墙上挂满了做好的兵器,刀,剑等样样不缺,你可以在这
里买些东西.	
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su2.c",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sells0" : 1,
]));


  setup();
}
