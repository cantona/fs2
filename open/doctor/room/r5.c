inherit ROOM;
void create()
{
        set("short", "药圃");
  set ("long", @LONG

    这里是药材胚苗的存放室，一栋独立的小间竖立
    在田埂的正中央，从那里面传来浓郁的青草味..

LONG);

        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r4",
  "north" : __DIR__"r6",
  "east" : __DIR__"r2",
]));
        set("no_clean_up", 0);

        setup();
        }


