#include <room.h>

inherit ROOM;

void create()
{
	set("short","内室");
          set("long",@LONG
这里是雪苍派掌门平时休息的地方，里面的摆设极整齐且清朴，只见墙上挂了对刀剑
，显得极具气派，相传这对刀剑乃是雪苍派开山祖师从一位异人手中得来的，只是可惜雪苍
派开山祖师鬼影老人不会刀剑，否则必能以此刀剑扬名立万。
 
 
LONG);
        set("exits", ([
	"west":__DIR__"room8",
        ]) );
     set("objects",([
     "/open/snow/npc/kai.c": 1,
]));
	set("light_up",1);
        setup();
}
