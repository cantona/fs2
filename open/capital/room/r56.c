// Room: /open/capital/room/r56.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
这里邻近皇城，附近又多是达官贵人们的住所, 因此巡逻特别严密
不到一柱香的时间之内, 禁卫军就来来回回巡了数趟, 也因为如此, 街
上也没什么人走动。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r55",
  "east" : __DIR__"r58",
]));
  set("outdoors", "/open/capital");

  setup();
}
