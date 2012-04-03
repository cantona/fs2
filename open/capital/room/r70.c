// Room: /open/capital/room/r70.c

inherit ROOM;

void create ()
{
  set ("short", "中央街口");
  set ("long", @LONG
这里是一个交叉路口，在你的西边是芝麻胡同，东边则是萝卜胡同
。萝卜胡同内有着远近驰名的悦来客栈及城内最大的当铺，芝麻胡同内
则有王安食堂及干记商行。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"h12",
  "south" : __DIR__"r71",
  "north" : __DIR__"r69",
  "east" : __DIR__"h13",
]));

  setup();
}
