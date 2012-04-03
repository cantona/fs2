#include <room.h>
inherit ROOM;
void create()
{
        set("short", "走廊");
        set("long", @LONG

    一股臭药味扑鼻而来，但是这种味道对行医之人来说，可以使他
们更为振奋，而银针门的弟子们也都以行医救世为目标，墙上贴了一
些人体的穴位图。

LONG
        );
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"17",            
        "south":__DIR__"23",          

        ]) );

  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="男性")
        return notify_fail("男人是无法进入总管书房的 ?\n");

   return 1;
}


