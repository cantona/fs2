// Room: /u/p/pokai/room/wu/tower4-2
inherit ROOM;

void create()
{
  set ("short", "武威七杀塔四楼--");
  set ("long", @LONG
你眼前有一个大梯子，你想又是往上推进一楼的时刻了。由于疲累的关系，你对
四周的景致也无心注意，你只觉得四周的暗蓝色比刚刚的都还要来得深、也还要来沈
。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"tower5-1",
  "north" : __DIR__"tower4-1",
]));
  setup();
}
