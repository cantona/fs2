// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short",HIC"冰蟾洞内"NOR);
   set ("long","
这里就是千年冰蟾所住的洞穴。出乎意料的，这大毒物所住的洞穴却是出
其的干净，没有一丝恶臭，地上更是干干净净的。洞内倒是挺宽敞的，壁
上凝结着一闪一闪的结晶物，搞不好还是天然的水晶呢。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"entrance",
      ]));

       set("objects",([ /* sizeof() == 1 */
       __DIR__"npc/ice-frog" : 1,
                      ]));

        setup();
}
