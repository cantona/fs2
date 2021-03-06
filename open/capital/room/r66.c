// Room: /open/capital/room/r66.c

inherit ROOM;

void create ()
{
  set ("short", "中央大街");
  set ("long", @LONG
走在京城的中央大街, 看到的是一幅繁华热闹的景象, 街上不时有
快马奔过, 显示出这条街交通的繁忙, 过路的人潮也不少, 让你感受到
王朝活泼的朝气与生命力。
    在远远的北方宫殿是皇帝的住所，也是王朝的精神中枢。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r59",
  "south" : __DIR__"r67",
]));
  set("outdoors", "/open/capital");

  setup();
}
