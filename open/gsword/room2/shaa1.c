//open/gsword/room2/shaa1
#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"仙剑第二试炼峡谷"NOR);
   set("long", @LONG
步入此处.和你之前所见的完全不同...此处好比世外桃源.在你进入之后..
你发现在你的前方有一个逐渐成型的人影..看样子他就是此处的试炼者了.。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room/su3",
 "back":"/open/gsword/room/g5-1.c",
      ]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/t2" : 1,
]));
        set("light_up",1);
        set("no_fight",1);
        set("no_transmit", 1);
        setup();
}
