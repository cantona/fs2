//open/prayer/room/garden18.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","花园");
        set("long",@LONG

圣火教总坛的花园,走到此处忽然惊觉四处邪气阵阵,烟雾迷漫........... 

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/garden14",		//花园
        "west":"/open/prayer/room/garden19",		// "
        ]) );
   setup();
}
