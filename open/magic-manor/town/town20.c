#include <room.h>
#include <ansi.h>
inherit SHOP;

void create()
{
        seteuid(getuid());
        set("short", "云风商店");
        set("long", @LONG
店内摆满了各式各样的东西，商店回收各式各样的东西，也有提
供交易。所以你可要看清楚了，也许正有你所需要的东西呢！你可以
看看这里有些甚么(list)，交易(buy)，还有估价(value)。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
	"south" : __DIR__"town26",
]));
        set("light_up", 1);
        setup();
}
