#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "卧房");
  set ("long", @LONG

这里是王元霸的独子王人杰的卧房，房中的陈设相当的简单，角落一个石
头盆景，另一边摆着一架纱照屏，案上有个墨冻石鼎。榻上挂着水墨字帐
子，看起来又大方又素净。


LONG);


  set("light_up", 1 );
  set("exits", ([ /* sizeof() == 1 */
  "south": __DIR__"g3-3",
]));
create_door("south", "雕花紫檀木门", "north", DOOR_CLOSED);

  setup();
}
