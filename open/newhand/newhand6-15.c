#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "后来分站就回雄专了,这次之后fir..等就一直没有消息,回来之后,
我继续接手这里的发展,那时除了发展门派外,我决定开始着手写帮派
(clan)的制度,之前clan是采用weiwei所写的原始程式来修正的,后来
我决定修正,重写写新的,这时运气好了,arthur加入我们,arthur是Es超
强的巫师,那时他快入伍了,由于他的帮助使我在短时间内完成了帮派的
基本架构..........
" );

  set("exits", ([
  "north" : __DIR__"newhand6-14",
  "south" : __DIR__"newhand6-16",
               ]));
  set("light_up", 1);
  setup();
}

