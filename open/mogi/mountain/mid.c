// room1.c by roger

inherit ROOM;
#include <ansi.h>
#include <mountain.msg>
void create () {
set ("short","天邪峰");
set ("long","
这里是天邪峰山腹，前方是片广大的平原，四周都是光秃秃的峭壁，
看来要上山是非经过这不可了。但是上方似乎有着强烈的妖气环绕
着，模模糊糊浓雾中似乎夹杂着一道金光，银光和一道红光。。。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
       "west" : __DIR__"room19",
       "east" : __DIR__"room16",
      ]));

        set("objects",([ /* sizeof() == 1 */
        __DIR__"npc/gold-ghost" : 1,
        __DIR__"npc/silver-ghost" : 1,
        __DIR__"npc/red-ghost" : 1,
      ]));

        setup();
}
int valid_leave(object me, string dir)

{
if(dir=="west"&&present("ghost",environment(me)))  return 0;

else return 1;
}
