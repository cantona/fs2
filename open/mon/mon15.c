inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "小平台");
        set ("long", @LONG
从平原小径走过来，这个小平台的面积不大，平台边有两棵树，
伴随着些许青葱的绿草，冷冷的山风似乎传达不到这个地方，阵阵
的暖意却慢慢的由心中升起。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "west"     : __DIR__"mon14",
]));
        setup();
}

