#include <room.h>

inherit ROOM;

void create()
{
	set("short","密室");
          set("long",@LONG
这里是一个暗室，一片黑漆漆的，看都看不清楚
 
 
LONG);
        set("exits", ([
		"out":__DIR__"room3",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/obj/snow_token":1,]));
        setup();
}
