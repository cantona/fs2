// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","一楼底部");
        set ("long","四周都是阴森森的鬼气,使人越走越觉得心慌。不过你似乎
看到另一端有微弱的灯光。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "west" :  __DIR__"room20",
            "east" :  __DIR__"room11",
            "southwest"  : __DIR__"room16",
      ]));

       

        setup();
}
