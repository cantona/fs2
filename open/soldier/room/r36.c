
#include <room.h>
#include "/open/open.h"
inherit ROOM;
void create()
{
set("short","修练房");
set("long", @LONG

    在这四周布满了历代兵器，在你面前有一中年人在那
习武，他手里拿的兵器非常耀眼，使你眼睛都快张不开了
一席盔甲也耀耀动人，这么高大挺拔的大个莫非就是反乱
军首领吗。。。

LONG
);
    set("exits", ([
   "north" : __DIR__"r37.c",
   "east"  : __DIR__"r35.c",
        ]) );
	set("light_up",1);
  set("valid_startroom", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

        setup();
}
int valid_leave(object me, string dir)
{
if(dir=="north")

if((me->query("class")!="soldier")&&me->query("class")!="soldier")
return notify_fail("只有佣兵才可进去。\n");
  return ::valid_leave(me,dir);
}
 
