// Room: /u/d/dhk/questsfan/room14
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "晶谷外缘");
  set ("long", @LONG
这里就是传闻中晶谷四关之一，现在由段世族人中所
擢选出最强的四天王之一"百里勇"所镇守。只见到一位衣
衫褴褛的憔夫正运足十成时的功力施展着绝世刀法，其攻
势之凌厉、防守之严密以达滴水不漏之境界。一刀一式均
让人看的目瞪口呆。难怪此人镇守~天下~不是、是晶谷第
一关。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room13",
  "northdown" : __DIR__"room15",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ung.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir){
if(who->query("marks/fan-finger")!=1)
    if(dir=="northdown" && who->query("questsfan/quest_step")!=3)
    {
    message_vision(HIC"百里勇大声的对$N说道:晶谷岂是让人随意进入的地方?还不快滚!!\n"NOR,who);
      return notify_fail("百里勇大声的对你说道:晶谷岂是让人随意进入的地方?还不快滚!!\n");
    }
  return :: valid_leave(who,dir);
}
