// Room: /u/r/rence/room/room1.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;

void create()
{
        set("short","泷山迷宫");
        set("long",@LONG
这里充满着神秘的感觉，在四周各有一扇门，不知是通往何处，
七杀塔内的密秘到底是什么呢? 这些门的背后到底通到那? 然
而在石壁上有刻着：

          
          「东西南北，阴阳无极，破乾坤”

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "伤门":__DIR__"room2",
        "景门":__DIR__"room3",
        "开门":__DIR__"room4",
        "休门":__DIR__"room5",

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/u/r/rence/npc/gmob4.c" : 1,
  "/u/r/rence/npc/gmob8-1.c" : 2,
]));
  setup();
}
