// Room: /open/gsword/room/g2-16.c
inherit ROOM;

void create ()
{
  set ("short", "菜圃");
  set ("long", @LONG
一片广大的菜圃 ,种满了各式各样种类的蔬菜 ,供应本派绝大部
份的菜类来源 ,这片菜圃每天为仙剑所节省之开销 ,皆为一比可观的
数字 ,开源结流 ,能省则省 ,这就是仙剑聚财之首道 .

LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc/oldfarmer" : 1,
  "/open/gsword/npc/farmer" : 2,
]));
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g2-15",
]));

  setup();
}
