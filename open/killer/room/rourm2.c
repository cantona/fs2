// open/killer/room/rourm2.c
//这是由柴荣哪一间改过来的，所以建议放到杀手的目录里面

#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
set("short","试炼之间");
          set("long",@LONG
在你眼前的就是传说中的超上级杀手--柴荣，据说他以并没有真正脱离黑牙联。
而是秘密的在此训练，黑牙联的超级杀手，据说柴荣的必杀密技----魔气杀，
都是黑牙联之中最上层的终极奥义，一般弟子根本不能学。
而据说阎影匕首的试炼，也是由此开始。。。。。

LONG);
        set("exits", ([
"up":__DIR__"rbd.c",
        ]) );
set("objects",([
    "/open/killer/npc/rou2":1,
]));
set("light_up",1);
        setup();
}