#include <room.h>

inherit ROOM;

void create()
{
           set("short","洞穴");
          set("long","洞穴第二层,由于景象都差不多,所以在没有完整的地图概念之前,最好不要误闯此处。\n");

        set("exits", ([
          "west":__DIR__"hole23",
          "north":__DIR__"hole13",
         "east":__DIR__"hole24",
        ]) );
        set("objects", ([ /* sizeof() == 3 */
        "/open/snow/npc/corpse" :2
       ]) );
        setup();
}
