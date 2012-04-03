// Room: /open/capital/room/king/kr4-1-A
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "东厂通道");
  set ("long", @LONG
从此处往西可以走到东厂，这里是东厂的太监通往皇宫的必经之路
，此处正有两名东厂守卫看守着。
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kr4-2",
//  "west" : "/open/capital/room/sroom/room21",
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
