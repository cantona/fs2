inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "镇长的家");
        set ("long", @LONG
由入门到进入这间屋子，所有的一切都显得气派辉皇，和一般的
民宅有天壤之别，虽然镇长称不上大富大贵，但是却比一般的人还要
富有的多。让你不敢小觑镇长的能力。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town12",
]));
        set("light_up", 1);
        setup();
}
