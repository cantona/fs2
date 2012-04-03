// Room: /open/port/room/r3-4.c

inherit ROOM;

void create()
{
        set("short", "东大街");
        set("long", @LONG

    北边是间医馆，想必就是与金刀门并称金刀银针的《银针门》，
而两派掌门之间交情颇深，且忌恶如仇，但银针门并不像金刀门一样
让人感觉富丽堂皇，反而使人感觉非常寒酸，但是从外面看起来却十
分的干净。

LONG
        );
        set("light_up", 1);
        set("objects", ([ ]));
        set("outdoors", "/open/port");
        set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r3-3",
  "north" : "/open/doctor/room/d1",
  "south" : __DIR__"r3-6",
]));
        set("no_clean_up", 0);

        setup();
        }


