#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"仙剑最终试炼谷"NOR);
   set("long", @LONG
传说中仙剑的练剑室..室中处处都是骇人的剑痕.你眼前有一个模糊的影子
难道他就是传说中的...!?
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "south":"/open/gsword/room2/shab1",
 "back":"/open/gsword/room/g5-1.c",
      ]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/t4" : 1,
]));
        set("light_up",1);
        set("no_transmit", 1);
        set("no_die_room",1);
        set("die_room","open/gsword/room/eqroom");
        setup();
}
