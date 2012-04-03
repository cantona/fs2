// Room: /open/capital/room/r46.c

inherit ROOM;

void create ()
{
  set ("short", "日升驰道");
  set ("long", @LONG
西边有个小广场，广场上有几间小茅草屋。屋旁摆了一些农具，看
起来似乎是处理粮草用的。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/farm",
  "south" : "/open/capital/room/r45",
  "north" : "/open/capital/room/r47",
]));

  set("gopath", "south");

  setup();
}
