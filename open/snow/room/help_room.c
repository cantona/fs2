#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","神秘小屋");
  set ("long", @LONG
这里是一间极为神秘的小屋，你似乎对这里不曾有
任何印象，你非常地怀疑这里是否是阴曹地府 ?
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/snow/room/help_room2",
]));


   set("light_up",1);


  setup();
}
