#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
           set("short","洞穴");
          set("long","这是一间密室,你觉得这里杀气腾腾,,让你有说不出来的压迫感,觉得好像有什么不对劲,希望赶快离开这里。\n");
        set("exits", ([
                "out":__DIR__"hole13",
        ]) );
	set("objects",([
        SNOW_NPC"killer":1,
	]));
        setup();
}
