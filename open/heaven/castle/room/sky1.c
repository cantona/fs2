//天界之城 Edit By Del
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "荒舞修罗道");
        set("long", @LONG

你正走在一道狭窄的山谷里面，两旁的山壁隐约可以看见刀剑的痕迹，上
面还沾了一些未干的血渍。正当你意识到苗头不对之际，眼前突然闪过几
道黑影，你不禁握紧手上的武器 ...

LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"sky0",
  "southeast" : __DIR__"sky5",
  "southwest" : __DIR__"sky2",
]));
        set("outdoors",1);
        set("no_transmit",1);
        setup();
        }
