inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());   
set ("short", "密室");
  set ("long", @LONG
一入房门 ,你马上感到寒气扑面而来 ,略一凝神 ,只见左手一个平台上 ,一个暗蓝色的(box) 散发出令你赶到无比舒适的灵气，使你忍不住想去开启它。

LONG);
  set("exits", ([ /* sizeof() == 2 */
  "out" : "/open/mogi/forest/entrance.c"
]));
  set("light_up", 1);
  set("no_clean_up",1);
  setup();
}
 void init()
{
 add_action("open_box","open");
 }

  int open_box(string str)
 {
  object me,ob;
  me =this_player();
    message_vision("箱内竟是空无一物 ,你不禁呆了一会\n",me);
  me->set("liyu",3);
  return 1;
  }
