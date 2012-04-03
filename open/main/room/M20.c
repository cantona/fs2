// This is a room made by roommaker.

inherit ROOM;

void create ()
{
  set ("short", "农户");
  set ("long", @LONG
一间简单的小房间，里面摆设一看就知道这边住的是标准的庄稼汉，墙壁上挂着
斗笠，蓑衣，但似乎没有什么有用的东西。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/M19",
  "north" : "/open/main/room/M16",
]));

  setup();
}
