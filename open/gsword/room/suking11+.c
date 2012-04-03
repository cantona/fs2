// Room: /u/s/smore/room/suking/suking11+
inherit ROOM;
#include <room.h>
void create ()
{
  set ("short", "将军府二楼");
  set ("long", @LONG
这里是将军府的二楼, 也是将军全家人生活的地方, 向东是
将军和夫人的寝室, 往下可以回到将军府. 往将军寝室有一
道木门, 也许你可以试着打开它(open door).
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "down" : "/open/gsword/room/suking8+",
  "east" : "/open/gsword/room/suking12",
]));
  set("item_desc", ([ /* sizeof() == 1 */
    "east" : (: look_door,     "east" :),
    ]));
  create_door("east", "木雕门", "west", DOOR_CLOSED);
  set("light_up", 1);

  setup();
}
