inherit ROOM;

void create()
{
        set("short", "药圃");
        set("long", @LONG
看过来看过去，抬抬头再看看地，这里是一片水洼地，连个药材的踪影
都没有，嗯嗯嗯～这里有种东东吗？？

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r10",
  "north" : __DIR__"r8",
]));
        set("can_search",1);
        set("no_clean_up", 0);
        set("outdoors", 1);

        setup();
        }


