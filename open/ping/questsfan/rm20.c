// Room: /u/d/dhk/questsfan/rm15
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""WHT"石林"NOR"");
  set ("long", @LONG
这儿是一处寸草不生，坚石林立的地方。而且这儿净是一些奇
形怪状的巨石四处林立。但是却又不是人造而成的，所以此地得名
＂石林″也。在仔细看看这些巨石，有些质地松散、有些质地坚硬
各式各样的石形都有，有一点像石头大观园一般。

LONG);

  set("exits", ([ /* sizeof() == 5 */
  "southdown" : __DIR__"rm16",
  "northup" : __DIR__"rm14",
  "west" : __DIR__"rm15",
  "eastup" : __DIR__"rm19",
  "eastdown" : __DIR__"rm17",
]));
  set("outdoors", "/u/d");

  setup();
}
void init()
{
    call_out("dhk",1,this_player());
}
void dhk(object who)
{
  if(who->query_temp("run")!=5 && who->query_temp("run")==4)
  {
   tell_object(who,""WHT"这道黑色的人影又快速朝西边奔去，还是追赶不及。"NOR"\n");
   who->set_temp("run",5);
   remove_call_out("dhk");
  }
}

