// by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","魔界村外");
        set ("long","这里是魔界村的东北方，在这不远处耸立着妖魔古城。由远方看来这古
堡相当庞大，上空不断闪着魔电，外表阴阴蓝蓝的，乱诡异的。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"d",
            "south"  : __DIR__"f",
      ]));

       

        setup();
}
