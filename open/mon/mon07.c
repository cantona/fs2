inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "登山小道");
        set ("long", @LONG
小道上满是黄土杂草，通往长白山上的路途显得有些难走，西边
有一座古亭，疲累的旅人都会在那里休息一番，而往山上的道路是东
边的小路。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "south" : __DIR__"mon06",
        "east"  : __DIR__"mon08",
        "west"  : __DIR__"mon09",
]));
        setup();
}

