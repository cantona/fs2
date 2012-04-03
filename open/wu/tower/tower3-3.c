// Room: /u/p/pokai/room/wu/tower3-3
inherit ROOM;

void create ()
{
  set ("short", "武威七杀塔三楼--");
  set ("long", @LONG
这里的陈设和方才的那间相似：空荡荡的，没有窗户，只有个往四楼的长梯，
以及一地的血印、破砖、和那股恼人的深蓝色，你只觉得自己不断地在喘气，仿佛
惊魂未定。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"tower4-1",
  "west" : __DIR__"tower3-2",
]));
  set("light_up", 1);

  setup();
}
