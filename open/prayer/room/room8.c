// Room: /u/r/rence/room/room8.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;

void create()
{
        set("short","七杀塔第五层出口");
        set("long",@LONG
这里是七杀塔第五层的出口,只见在出口处有一目露精
光的中年男子站立着,一付杀气腾腾的样子......... 
在墙上挂着一付扁额(picture):
          
          「泷山三强者之一...任戎冲”

LONG);
        set("outdoor", "/u/k/kael/room/");
        set("exits", ([ /* sizeof() == 4 */
        "伤门":__DIR__"room2",
        "景门":__DIR__"room3",
        "开门":__DIR__"room4",
        "休门":__DIR__"room5",
	"up" : "/u/k/kael/room/tower6",
        ]) );
        set("objects",([ /* sizeof() == 1 */
  "/u/k/kael/npc/jen4-1.c" : 1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
	if(dir=="up"&&present("zon-jon jen",environment(me)))
return notify_fail("任戎冲伸手一拦 ,说道:要想上楼,先打败我再说!\n");
	return ::valid_leave(me,dir);
}









