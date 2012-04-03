// Room: /open/capital/room/r16.c

inherit ROOM;

void create ()
{
  set ("short", "街道");
  set ("long", @LONG
你走在两座高墙之间，左边的是有四五层楼高的灰色大石墙，保卫
着京城的安全，右边是镇远侯府的红色墙，也有三层楼那么高，不禁想
起自己的窝只是间烂茅草屋。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r18",
  "north" : "/open/capital/room/r02",
]));

  set("gopath", "north");

  setup();
}
