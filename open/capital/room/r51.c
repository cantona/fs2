// Room: /open/capital/room/r51.c

inherit ROOM;

void create ()
{
  set ("short", "街道");
  set ("long", @LONG
撼东门在你的北边。左边的墙较低矮，可以看见里面的花园，百花
争艳，花园里有几个婢女模样的人和几名男子相互戏耍着，你不禁感叹
世风日下，但是又觉得有点羡慕。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r50",
  "north" : "/open/capital/room/r17",
]));

  set("gopath", "south");

  setup();
}
