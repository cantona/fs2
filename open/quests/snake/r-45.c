
inherit ROOM;
#include <ansi.h>

void create()
{
        set("short","蛇寨 地下室");
        set("long",@LONG
绳索由上垂吊而下，除了往上椅外，周遭都是石壁包围着。
LONG);
        set("no_transmit",1);
        set("exits",([
"up":__DIR__"r-46",
"down":__DIR__"r-44",
]));
        setup();
}
