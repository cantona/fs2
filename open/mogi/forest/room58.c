// by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","往魔界村小径");
        set ("long","
  总算出了魔森林了，出现在眼前的是一条小径，小径的不远处隐约有一座
村庄，村庄的四周似乎泛着隐隐和平的光芒。传说中魔界村是个不受邪物侵
犯的地方，只有人类和低等魔物才可进入。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"room59",
            "west" : __DIR__"out",
      ]));

       

        setup();
}
