#include <room.h>

inherit ROOM;

void create()
{
        set("short","禁闭室");
          set("long","这是一间禁闭室,四周打扫得一尘不染,你看到墙上写着
             忍                   退
             一                   一
             时                   步
             风                   海
             平                   阔
             浪                   天
             静                   空

这几个字是用来规劝门下触犯门归弟子,而看到那毛笔自竟然能入石三分,你不禁对写这对词的武林高手敬佩不已。\n");

        set("exits", ([
          "east":__DIR__"hole6",
        ]) );

        create_door("east", "漆黑牢门", "west", DOOR_CLOSED);

        set("objects", ([ /* sizeof() == 3 */
         "/open/snow/npc/linhwi" :1,
         ]));
         setup();
}
