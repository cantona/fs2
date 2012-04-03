
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "楼梯");
  set ("long", @LONG
看来这里是通往三楼的楼梯，走到这里你已经打得手有点发软，而传
说中三楼才是妖魔古堡的菁英聚集地带，各式奇幻的武功和厉害的妖
魔正准备顷巢而出。不过上楼前却看到一个满脸杀气的恶鬼横在楼梯
间？
LONG);
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room34",
  "up" : __DIR__"room41",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ground-ghost.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
 object ob;
 me=this_player();
 ob=this_object();
        if(dir=="up"&&present("ghost",environment(me)))
  {

message_vision(HIY"地邪鬼对$N怒喝 : 干什么！？\n"NOR,me);
 ob->kill_ob(me);

return 0;
}
return 1;
}
