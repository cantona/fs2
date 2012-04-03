// Room: /open/capital/room/food
inherit ROOM;

void create ()
{
  set ("short", "王安食堂");
  set ("long", @LONG
京城数一数二的大食堂，据说老板和干通天很熟，才有机会把店面
开在这芝麻胡同上。这的大厨虽然没有御厨那么好的手艺，但是这儿的
烤鸭烤鸡却深受皇帝及达官贵人们的喜爱，所以这家食堂严然是贵族们
聚会宴客的场所，身上要是没带个百来两银子，还是别进来自讨没趣的
好。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"h10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/redwaiter" : 1,
]));
  set("light_up", 1);

  setup();
}
