// Room: /open/main/room/d7.c

inherit ROOM;

void create ()
{
  set ("short", "沙漠");
  set ("long", @LONG
这儿是一望无际的撒哈拉沙漠，四周只现出闪闪发光的海市蜃楼
东边一道高高的围墙, 似乎就是所谓的万里长城吧?
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"d6",
  "south" : __DIR__"d14",
  "east" : __DIR__"gy1.c",
  "north" : "/open/ping/questsfan/richrm1",
]));
  set("outdoors", "/open/main");

  setup();
}
