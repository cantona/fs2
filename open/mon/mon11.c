inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "登山小径");
        set ("long", @LONG
走到这里，路况一转，你得绕一个大弯才能更往前进，而且路面
也愈来愈抖，愈往前走，路愈是难走，前面的路已经愈来愈小条了，
若非怀着绝世轻功的人走上这条路将会倍感吃力，但通往山上的小路
依旧清楚可见。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north" : __DIR__"mon12",
        "west"  : __DIR__"mon10",
]));
        setup();
}

