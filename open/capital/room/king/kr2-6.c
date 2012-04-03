// Room: /open/capital/room/king/kr2-6
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "皇城禁地");
  set ("long", @LONG
这儿就是大内皇城禁地, 在此地不得大肆喧哗, 禁卫军的巡逻非常
严密, 你感觉到你已深入大内禁地了, 往西走可通往凤仪殿, 往南走可
通往凤息亭, 东边是皇帝享福的承德宫, 只有宫女和太监可以进出, 如
果你是男儿身, 劝你不要以身试法.
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/nobird.c" : 1,
  "/open/capital/npc/kingirl.c" : 1,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr3-6",
  "west" : __DIR__"kr2-5",
  "east" :__DIR__"kr1-4",
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
