// Room: /open/capital/room/king/kr4-4-4.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
这是通往永德殿的及其它殿的走道,看到天花板是用黄金做的,心想着
不亏是皇宫内苑,有那么大的财力来建造这些殿,走道的右方通往御书房
LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr4-4-3.c",
  "east" : __DIR__"kr4-4-5.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/taigan1" : 2,
]));
  set("light_up", 1);

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
