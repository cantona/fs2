#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
set("short","专用兵器室");
          set("long",@LONG
这是这是叶秀杀用来存放令他伤心的武器--杀意魔戒的地方。
西方有一个的通道，那是往兵器室的出口吧。 
LONG);
        set("exits", ([
"west":__DIR__"weaponrm.c",
        ]) );
set("objects",([
    "/open/killer/obj/kbox":1,
]));
set("light_up",1);
        setup();
}