#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[0;1;31m□[1m□[1m□[1ms[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mt[0m");
  set ("long", @LONG
这里是结界的边缘, 这里的魔法力就没那么的强烈了, 天候温度跟平
常一样, 但还未离开幻界的控制范围, 这里有一根直达云际, 十分奇怪的
巨石, 这个也是拿来巩固结界用的吧! 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"f-33.c",
  "west" : __DIR__"f-42.c",
]));
  set("outdoors", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/fire-liz.c" : 1,
]));

  setup();
}
