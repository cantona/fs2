#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间历史发展馆"NOR);
  set( "long", "狂想空间(Fantasy Space)创建于一九九五年十一月,当时创站的大神
是Wade(波罗面包),那时根据Wade口述了解那时Wade是ES的巫师,但是由于
跟ES的巫师群在理念上有不同的地方,因此用了Es2lib为主要架构,来创
起了狂想空间(Fantasy Space)!!那时FS是架设在Wade的师大研究室中!!!
" );
  set("exits", ([
  "northwest" : __DIR__"newhand",
  "south" : __DIR__"newhand6-2",
               ]));
  set("light_up", 1);
  setup();
}

