// Room: /u/d/dhk/questsfan/room26
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", ""HIG"胜天"WHT"峰"NOR"");
  set ("long", @LONG
这里就是最后的关卡，是由全族最强的段家嫡系---
段川岳所镇守，他身着＂十彩皇衣″手持＂菱骨晶扇″
并且精通各门派武学要义。他风姿倬约、器宇轩昂的伫
立在胜天峰上的一处山洞前。此地是全谷最平凡的地方
四周的一草一木，凡映入眼帘的景象要有多普通就有多
普通，正好与全谷产生强烈的对比。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room27",
  "eastdown" : __DIR__"room25",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/muan.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir)
{
if(who->query("marks/fan-finger")!=1)
   if(dir=="enter" && who->query("questsfan/quest_step")!=6)
     {
       message_vision(HIC"段川岳神情严肃的对$N说道:汇灵地岂是让人随意进入的地方?请阁下尽快离开!!!\n"NOR,who);
       return notify_fail("段川岳神情严肃的对你说道:汇灵地岂是让人随意进入的地方?请阁下尽快离开!!!\n");

     }
    return :: valid_leave(who,dir);
}
