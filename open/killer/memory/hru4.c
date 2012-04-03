#include <room.h>

inherit ROOM;

void create()
{
           set("short","紫霞组");
         set("long",@LONG
	
	紫霞组是负责守护通吃小筑的安全，但是因为工会老大并不喜欢人家保护，
	所以与红叶组与银狼组一样，只能守护在工会老大的附近。
	因此，紫霞组特地安排人镇守通吃小筑左翼。
 
LONG);
        set("exits", ([
    "east":__DIR__"hru1.c",
        ]) );
        set("objects",([
          "/open/killer/npc/magnpc2.c":2,]));
        setup();
}
