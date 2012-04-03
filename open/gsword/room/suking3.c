// Room: /u/s/smore/room/suking/suking3.c

inherit ROOM;

void create ()
{
  set ("short", "府衙大厅");
  set ("long", @LONG
走进这大厅，周围肃穆的气氛让你不敢四处乱看，不过你依
然可以感觉得到四周的装设气派堂皇，又不流于俗套，可见大将
军左正也不是一个只会打战的草包.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/suking1",
  "west" : "/open/gsword/room/suking4",
  "north" : "/open/gsword/room/suking6",
  "east" : "/open/gsword/room/suking2",
]));

  set("light_up", 1);

  setup();
}
