// n_area18.c by konn
#include </open/gblade/room/n_area.h>
inherit ROOM;

void create()
{
        set("short", "�㳡");
        set("long",
             n_area(18)
);

        set("exits", ([
            "north" : __DIR__"n_area16",
            "east"  : __DIR__"n_area19",
            "west"  : __DIR__"n_area24",
            "south" : __DIR__"n_area21",
      ]));

        set("objects", ([
      ]));

        setup();
}
