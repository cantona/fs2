#include <room.h>

inherit ROOM;

void create()
{
           set("short","洞穴");
          set("long","这是一条相当狭隘的小路,阴风四起吹得你毛骨悚然,你只希望能早一点离开这条死气沈沈的小路。\n");

        set("exits", ([
          "west":__DIR__"hole6",
          "east":__DIR__"hole1",
        ]) );
        setup();
}
