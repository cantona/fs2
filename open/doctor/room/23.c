#include <room.h>
inherit ROOM;
void create()
{
        set("short","总管的书房");
        set("long",@LONG
银针门总管的书房，这里是总管处理门务的地方，总管是门主以下与
副门主同一职等的干部，专门负责门内事务的处理。

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"18",          
        "south":__DIR__"28",          
        "east":__DIR__"22",           
        "west":__DIR__"24",        

        ]) );
        set("no_fight", 0);
        set("light_up", 1);


  setup();
}


