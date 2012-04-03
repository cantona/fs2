#include <room.h>

inherit ROOM;

void create()
{
        set("short","洞穴");
        set("long","这是一间废弃的[2~房间,由地上的灰尘可以看出,近几年来,很少人来过这里了。\n");

        set("item_desc", ([ /* sizeof() == 1 */  "west" : (: look_door, "west":),
]));

        set("exits", ([
          "west":__DIR__"hole7",
          "east":__DIR__"hole4",
          "south":__DIR__"hole8",
          "north":__DIR__"hole9",
        ]) );

        create_door("west","漆黑牢门", "east",DOOR_CLOSED);

        setup();
}
