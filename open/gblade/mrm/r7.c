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
set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r8.c",
  "down" : __DIR__"r6.c",
]));
set("objects",([
"/daemon/class/blademan/npc/corpse2.c":2,
]));
  setup();
  replace_program(ROOM);
}
