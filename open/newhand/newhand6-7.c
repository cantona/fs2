#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "狂想空间后来就架设在中兴大学管理的大神是Weiwei,同时Weiwei将狂
想的lib释放出去,另外Weiwei开始着手改版狂想空间,早期的狂想空间
是使用MudOS v21c2的driver,但是有很多的缺点存在,例如人数限制因
driver的关系只能在四十人之下..还有存在一些蛮大的BUG,后来Weiwei
修正了一个月左右(我听说的,可能更长)改板至MudOS v22 a16的板本，
同时间之前狂想的巫师Anmy也在雄专架起了狂想南部分站
" );

  set("exits", ([
  "north" : __DIR__"newhand6-6",
  "south" : __DIR__"newhand6-8",
               ]));
  set("light_up", 1);
  setup();
}

