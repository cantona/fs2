#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "当时刚创建的狂想只有仙剑派一个门派,后来才出现了中央大陆的部份
听Wade说他只有写过中央大陆的房间,其他都没有写过,那时根据现在己知的
资料,帮忙架站的大神是Elon,还有一些高手级的巫师如：fund、ccat、bigcat
ice...等(历史太久我也不知道了)。中央大陆完成后,其余的门派才陆续建立..
...
" );
  set("exits", ([
  "north" : __DIR__"newhand6-1",
  "south" : __DIR__"newhand6-3",
               ]));
  set("light_up", 1);
  setup();
}

