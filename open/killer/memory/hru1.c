#include <room.h>

inherit ROOM;

void create()
{
           set("short","工会老大所在处");
         set("long",@LONG
	
	在你眼前的只是一些普通的摆设，普通的令你难以相信，
	这会是杀手工会老大的休息与办公场所。
	这房间另外有通向另外四间房间，不知道是不是有机关存在。
 
LONG);
        set("exits", ([
           "south":__DIR__"hr7.c",
	"north":__DIR__"hru5.c",
    "west":__DIR__"hru4.c",
    "east":__DIR__"hru3.c",
        ]) );
        set("objects",([
          "/daemon/class/killer/black.c":1,]));
        setup();
}
