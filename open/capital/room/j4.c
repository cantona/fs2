// Room: /open/capital/room/j4
inherit ROOM;

void create ()
{
  set ("short", "地下密室");
  set ("long", @LONG
交谈的声音越来越近，前方也有些许光线。不由得想冒险犯难一番
，前去看看到底在搞甚么鬼。往南是有楼梯的密室。两边仍然是布满青
苔的石壁。有几个扶桑人守在这。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"j2",
  "north" : __DIR__"j3",
]));

  setup();
}
