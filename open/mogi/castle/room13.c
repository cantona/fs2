// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","古堡一楼");
        set ("long","四周似乎还潜伏着什么妖魔鬼怪,令人心里惶惶不安。地板是由已腐旧的的木板
钉成,走在上面不停的发出嘎吱嘎吱的声音。令人不禁想起是否有陷阱呢。

                      ～嘎吱～嘎吱～

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room12",
            "north"  : __DIR__"room15",
            "west" :  __DIR__"room14",
      ]));

       

        setup();
}
