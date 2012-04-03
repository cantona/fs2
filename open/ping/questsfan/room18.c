// Room: /u/d/dhk/questsfan/room18
inherit ROOM;
#include <ansi.h>
#include <room.h>
#include </open/open.h>

void create ()
{
  set ("short", "晶谷间层");
  set ("long", @LONG
此地就是传闻中的晶谷第二关，其地处晶谷中段。由
一位虬髯大汉所镇守。你四下观望发现东北角的山壁上插
满各式各样的名剑利器，想必守关人必是一位剑痴吧！又
在那片山壁下有一名大汉在舞弄著名剑＂紫虹″。只见他
一手捏剑诀、双脚展开＂飘风急步″剑势、剑光化成一张
剑网，真是叹为观止。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"room19",
  "eastup" : __DIR__"room17",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shing.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir){
if(who->query("marks/fan-finger")!=1)
   if(dir=="westdown" && who->query("questsfan/quest_step")!=4)
     {
     message_vision(HIC"南宫勋正声的对$N说道: 晶谷不是让人随意进入的地方?请尊驾快快离去!!\n"NOR,who);
       return notify_fail("南宫勋正声的对你说道:晶谷不是让人随意进入的地方?请尊驾快快离去!!\n");
     }
   return :: valid_leave(who,dir);
}
