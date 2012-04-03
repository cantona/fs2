// Room: /open/main/room/gy2.c
inherit ROOM;

void create ()
{
  set ("short", "扶桑军营");
  set ("long", @LONG
你来到了扶桑的军营，意外的发现他们在此当根据地，切莫随意
    行动，以免横尸荒野。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/officer2.c" : 2,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"gy1.c",
  "enter" : __DIR__"gy3.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
   if(dir=="enter"&&present("guard",environment(me))) 
{
    if(!me->query_temp("allow-enter"))
    return notify_fail("看来你无法往这个方向移动。\n");
}
return 1;
}
