#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set ("long"," 约过一阵子后狂想空间在巫师们的努力下渐渐步上轨道玩家也越来越多
,在历经几次的调整后,如：叛师要扣技能、转派的限定...等,也慢慢使狂想
越来越稳,同时新手的巫师加入也使狂想的发展越来越快,听那时的玩家及巫
师说曾经到一百位的巫师!!!但同时也因为巫师群多使得巫师和玩家的粉争也
越来越多!!!!
  \n");
  set("exits", ([
  "north" : __DIR__"newhand6-2",
  "south" : __DIR__"newhand6-4",
               ]));
  set("light_up", 1);
  setup();
}

