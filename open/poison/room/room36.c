#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "虎居");
  set ("long", @LONG
才一进门你就知道 ,这是一个错误的决定 ;炉上烧着一锅滚烫的
热油 ,案上放着一把锋利的大刀 ,白晃晃的刀锋反映着你的恐惧
 ,一位满口利牙的老婆婆 ,正露出她那一颗颗白牙 ,对着你露齿
而笑 :~~~~~~

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "out" : (: look_door,     "out" :),
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room35",
]));
  create_door("out", "木雕门", "enter", DOOR_CLOSED);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/tiger.c" : 1,
]));
  set("light_up", 1);

  setup();
}
