#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "在中兴的狂想空间跟之前在师大的狂想空间最大的不同是没有杀手
及圣火这二个门派,先说明一下,那时杀手是由Fund所创建的,那时是依附
在雪苍山这个门派之下,后来那时是玩家的渡大大(Wataru)觉得杀手不错
便,申请Wiz开始了杀手门派的改版,但是那时Weiwei及Wataru在理念上有
不同,所以weiwei并没有在狂想空间加入Wataru所修正的杀手门派,而圣火
一开始没有加入的原因是因为,据了解是因为Weiwei认为圣火门派发展并
不是很完整,技能、特功的部份不是符合rule,后来才有开!!!!
" );

  set("exits", ([
  "north" : __DIR__"newhand6-7",
  "south" : __DIR__"newhand6-9",
               ]));
  set("light_up", 1);
  setup();
}

