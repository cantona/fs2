inherit ROOM;
void create()
{
        set("short", "药圃");
  set ("long", @LONG

   这里有着整齐的花圃，正是银针门的栽种区..

LONG);
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r9",
  "north" : __DIR__"r7",
  "west" : __DIR__"r11",
]));
        set("no_clean_up", 0);

        setup();
        }


