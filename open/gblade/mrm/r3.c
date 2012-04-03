// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "魔龙塔");
  set ("long", @LONG

这里是魔龙塔的外围，一踏入这里，四周的杀气突然浓烈了起来，一
双双怖满杀气的眼睛正凝视着你。你定了定神后，注意到这个房间的四
周，地上满怖着刀痕，角落处推满一堆堆的骇骨，使你不寒儿凛。
你仔细一看，左边石块上似乎有字(paper)。

LONG);
set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r2.c",
  "enter" : __DIR__"r4.c",
]));
set("item_desc",([
"paper":"魔龙塔迷宫，是以四季的运行所设制而成，不懂四季运行的\n"+
        "必招致危险。\n"+
        "                                            神秘人留\n",
]));
set("objects",([
"/daemon/class/blademan/npc/corpse.c":2,
]));
  setup();
  replace_program(ROOM);
}
