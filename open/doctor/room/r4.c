inherit ROOM;
void create()
{
        set("short", "药圃");
        set("long", @LONG
古云 :「医者可救人，也可杀人。”这句话不假，现在在你眼前的都
是至毒之草，遍地都是，有夺命一瞬间的断肠草，九节菖蒲，七日草等等
，但是你忽然想到，最毒之物，七步之内，必有解药这句话。
LONG
        );
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r5.c",
  "east" : __DIR__"r3.c",
]));
        set("no_clean_up", 0);

        setup();
        }


