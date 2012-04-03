// Room: /open/capital/room/r47.c

inherit ROOM;

void create ()
{
  set ("short", "日升驰道");
  set ("long", @LONG
城东的车马大道。西边有几间木造的两层木屋，几个卫兵在前面巡
逻，看起来似乎是个很重要的地方，你想靠近去看看，卫兵却挡着你，
不让你靠近。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/capital/room/guardh.c",
  "south" : "/open/capital/room/r46",
  "north" : "/open/capital/room/r48",
]));

  set("gopath", "south");

  setup();
}
