inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","半山腰");
        set ("long",@LONG
走了一段路后来到天山的半山腰，这里已经稍为可以眺远观景了，从
这里开始道路变的更崎岖难行，你得多费点劲才能继续的往前行。
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"room7",
        "east" :  __DIR__"room8", 
        "eastdown" :  __DIR__"room5",           
        ]));

       
        setup();
}
