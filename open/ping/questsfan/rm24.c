// Room: /u/d/dhk/questsfan/rm24
#include <ansi.h>
#include <room.h>
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "树林右翼");
  set ("long", @LONG
这里是约是嵩山山腰处，往东南走好像会通往＂百草谷″
，不过那只是传闻，也不知道是不是真有那地方。此地依旧云
雾迷蒙，气氛神秘，奇声随侍左右。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"rm28",
  "northwest" : __DIR__"rm8",
]));

  setup();
}
int valid_leave(object who,string dir)
{
    who=this_player();
        if(dir=="eastdown"&&who->query_temp("stupid")==1)
  {
// tell_object(who,""HIM"谷中仙说道:阁下仙缘已尽，快走吧！"NOR"\n");
        return notify_fail("谷中仙说道:阁下仙缘已尽，快走吧！\n");
        return :: valid_leave(who,dir);
  }
  return :: valid_leave(who,dir);
}

