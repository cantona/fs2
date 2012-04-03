inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "破旧茅屋");
        set ("long", @LONG 
这是一间久无人住的茅屋，里头的摆设只剩一张残破的桌子和几
张小椅子。如果你走累了还可以休息一下，由窗外远远望去可以看到
一片雪白的长白山，也不失为一个观赏风景的好地方。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "out" : __DIR__"mon02",
        "east" : __DIR__"mon60",
]));
        setup();
}

