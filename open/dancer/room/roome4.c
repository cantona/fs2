// Room: /open/dancer/room/roome4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short",BLU"寝室"NOR);
  set ("long", @LONG
这里是月牙儿的寝室月牙儿平日都是在此休憩，而弟子们若非有
要事也都尽可能的不进此房间打扰她，因此这个房间通常都是宁静的
适合瞑坐沉思。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" :"/open/dancer/room/roome3.c",

]));
       
        set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  create_door("west",MAG"雕花紫檀木门"NOR, "east", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
