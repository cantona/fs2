inherit ROOM;
void create()
{
        set("short", "药圃");
        set("long", @LONG

           乾坤八卦，尽藏玄机
           亦正亦邪，非正非邪
           前后左右，并非来处
                                 
看到了这些字，你恨自己过于贪心，误入药园陷阱之中。

LONG
        );
        set("can_search",1);
        set("exits", ([ /* sizeof() == 6 */
  "west" : __DIR__"r6",
  "north" : __DIR__"r5",
  "south" : __DIR__"r6",
  "up" : __DIR__"r6",
  "down" : __DIR__"r6",
  "east" : __DIR__"r7",
]));
        set("no_clean_up", 0);

        setup();
        }


