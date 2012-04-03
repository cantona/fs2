// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "魔龙塔");
  set ("long", @LONG

这里是魔龙塔的第二层，一踏入这里，四周的杀气突然浓烈了起来，一
双双怖满杀气的眼睛正凝视着你。你定了定神后，注意到这个房间的四
周，地上满怖着刀痕，角落处推满一堆堆的骇骨，使你不寒儿凛。

LONG);
set("objects",([
"/daemon/class/blademan/npc/sbman2.c":1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r9.c",
  "climb" : __DIR__"room/r1.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("stabber man",environment(me)))
return notify_fail("你无法往上走！\n");
return ::valid_leave(me,dir);
}
