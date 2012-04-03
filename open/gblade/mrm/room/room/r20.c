// Room: /u/m/moner/room/room/room/r13.c 
inherit ROOM;
 
void create ()
{
set("short","魔龙塔");
  set ("long", @LONG

这里是魔龙塔的第六层，一踏入这里，四周的杀气突然浓烈了起来，一
双双怖满杀气的眼睛正凝视着你。你定了定神后，注意到这个房间的四
周，地上满怖着刀痕，角落处推满一堆堆的骇骨，使你不寒儿凛。

LONG);
set("objects",([
"/daemon/class/blademan/npc/sbman7.c":1,
]));
  set("exits", ([ /* sizeof() == 2 */
"climb":"/open/gblade/mrm/room/class/r1.c",
  "south" : __DIR__"r19.c",
]));
set("no_plan",1);
//add no transmit by bss
  set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="climb")
if(present("prayer man",environment(me)))
return notify_fail("你无法往上走！\n");
if(!userp(me))
return notify_fail("只有玩者才能进!!!!\n");
return ::valid_leave(me,dir);
}
