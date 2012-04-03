#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set("short","杀手总坛大厅");
  set ("long", @LONG
这里是黑牙联总坛大厅，并没有特别的装饰，但有一个人高高坐在其上。
眼前所见的，正是武林一大杀手组织的的主席---叶秀杀
相传此人是一哑吧，但武功之强，非凡人可知，此外在身旁的是他的弟子，
也是武林中响当当的杀手。如果想杀他还是先看看自己的份量吧。。。。
三楼是杀手出任务时可以拿装备的地方，但是必须先问过叶秀杀才可以。
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
 "south":__DIR__"ru3",
    "up":__DIR__"misrm1",
  "east":__DIR__"ru4",
  "west":__DIR__"ru5",
 "north":__DIR__"bedrm",
]));

  set("objects",([
 "/daemon/class/killer/master_yar.c" :1,
        "/open/main/obj/torch" : 1,
        ]));
  set("valid_startroom", 1);
  setup();
}
