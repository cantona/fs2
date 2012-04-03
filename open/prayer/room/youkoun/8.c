//open/prayer/room/youkoun/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        在办公房的南边, 副门主正在跟她最信任的女弟子讨论门
        内的事务. 看她们一副拿不定主意的样子, 令你不禁想上
        前去提供意见.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"7",             //副门主室
        "northeast":__DIR__"5",         
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/vice-chair7" : 1,             
        "/open/prayer/npc/trainee3" : 1,                //弟子
                
]));
     
  setup();
}
