#include <room.h>

inherit ROOM;

void create()
{
        set("short","房间");
         set("long","这是一间曾经经过精心设计的房间,然而现在已经废弃了,由地上的灰尘可以知道,近几年来,鲜少有人进出。\n");

        set("exits", ([
          "north":__DIR__"hole6",
        ]) );
        setup();
}
