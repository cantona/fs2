// Room: /u/p/pokai/room/wu/tower5-1
inherit ROOM;

void create ()
{
  set ("short", "武威七杀塔五楼--");
  set ("long", @LONG
来到这里，你忽然发现地上布满一层灰，连刚刚楼梯的把手上，也满是灰尘，你
想能上到五层楼的人，一定是少之又少。这儿的景色依旧单调：深蓝色的墙壁、无窗
格局，唯一令你感到不一样的，是少了刚刚那一股肃杀之气。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower5-2",
  "down" : __DIR__"tower4-2",
]));
  set("light_up", 1);

  setup();
}
