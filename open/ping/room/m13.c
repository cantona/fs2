// Room: /open/ping/room/m13.c ~night~(小恋)

inherit ROOM;

void create ()
{
  set ("short", "风行森林外");
  set ("long", @LONG

呼～好不容易经过了风行森林,你深深的吸了一口气,这里的空气比森林里面好多了,耸立在
你眼前的正是风林山,听说山上有一些杀人不眨眼的山贼,没事就跑下山来找乐子,当然倒楣
的就是这附近的百姓了. 看来,好像没有路可以上去风行山,总不可能用爬的吧!我们又不是
乌龟...... 这时候你发现旁边的岩石好像怪怪的耶～～   嗯～～


LONG);

  set("objects", ([ /* sizeof() == 1 */
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"m12",
]));

  setup();
}
void init()
{
      add_action("do_search","search");
      add_action("do_push","push");
}
int do_search(string str)
{
      if(str!="stone")
          write(
          "你发现左边有个大石头(stone),看起来似乎被人搬动过 !\n");
      else
          write(
          "嗯 ～   以我的力量应该推的动这颗大石头吧 ！\n");
          return 1;
}
int do_push(string str)
{
          write(
          "你费尽了九牛二虎之力把这个石头给推开，走入地道中 .....\n",this_player());
          this_player()->move(__DIR__"m14");
          return 1;
}
