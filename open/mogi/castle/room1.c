// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", "妖魔古堡大殿");
        set ("long","你好不容易可以定下来看看四周的状况了。环顾四周，你发现到处充满了强烈
的杀气,刚才惨酷的战斗使你心有余悸。更不时传来阵阵妖魔的奸笑声，但是既
已来此想回头也来不及了，还是先到处看看再作打算......。\n
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 3 */
            "east"  : __DIR__"room2",
            "west"  : __DIR__"room12",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob1" : 6,
      ]));

        setup();
}
