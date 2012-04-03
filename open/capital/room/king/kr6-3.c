// Room: /open/capital/room/king/kr6-3
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "皇城禁地");
  set ("long", @LONG
这儿是大内皇城的广场, 这里的视野十分辽阔, 在此地不得大肆喧
哗, 北方不远处有一高大的建筑物, 这附近经常有禁卫军在巡逻.
LONG);

  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/king/kr6-2",
  "east" : "/open/capital/room/king/kr6-4",
]));

  setup();
}
int valid_leave(object who,string dir)
{
  if(dir && present("soldier",environment(who)))
  {
        if((who->query("class")=="officer" && who->query_temp("can_in")==1) || (who->query("class")=="taigan"))
        {
        return :: valid_leave(who,dir);
        }
        else
        {
  return notify_fail("皇城禁卫军说道:你想跑?!跑得掉吗?\n");
        }
  }
        return :: valid_leave(who,dir);
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"皇宫守卫大声的对你说:皇城禁地岂容你大声喧哗，还不快滚!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
