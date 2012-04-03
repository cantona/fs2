// Room: /u/s/smore/room/suking/suking12.c

inherit ROOM;
#include <room.h>
void create ()
{
  set ("short", "将军寝室");
  set ("long", @LONG
    你走进了一间普普通通的房间, 既没有栏雕玉砌,也没有珠
宝珍藏,蜀中将军的居所竟是如此的简简单单, 然而平淡的摆设
中,却不失其高雅.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/suking11+",
]));
   set("item_desc", ([ /* sizeof() == 1 */
       "west" : (: look_door,     "west" :),
        ]));
  create_door("west", "木雕门", "east", DOOR_CLOSED);
  set("objects",([
      "/open/gsword/mob/z_wife":1,
      ]));
  set("light_up", 1);

  setup();
}
