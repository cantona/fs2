// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","古堡一楼");
        set ("long","行行复行行,此行的目的你恐怕已忘的一干二净了。埋伏的妖怪、险恶的机关
在在都使你想打退堂鼓。西方似乎有一条长廊。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room6",
            "south"  : __DIR__"room7",
            "west"  : __DIR__"room23",
            "northwest"  : __DIR__"room9",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob4" : 2,
      ]));

        setup();
}
