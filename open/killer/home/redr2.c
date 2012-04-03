#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","红叶组");
  set ("long", @LONG
这里是黑牙联总坛大厅右翼，也是黑牙联最强的红叶暗杀组的所在地。
江振武在此处，随时待命出击，并且培养自己的专属杀手。
一身野心并不在叶秀杀之下，但是叶秀杀并不以为意。
因为江振武身上所散发出的霸气，正是叶秀杀所需要的。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west":__DIR__"redr1.c",
  "south":__DIR__"redr3.c",
]));

  set("objects",([
        "/open/killer/npc/rednpc2.c" : 2,
        ]));  
  setup();
}