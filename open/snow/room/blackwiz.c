#include <room.h>
inherit ROOM;
 void create()
{
  set("short", "玩家议见发表室");
  set("long", @LONG
 对于黑牙联有议见或要建议的
                       玩家可在此留言




LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south"  :  "/open/snow/room/black4" ,
   ]) );
       setup();
        call_other("/obj/board/killerwiz_b","???");
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}
