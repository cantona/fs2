inherit ROOM;

void create ()
{
  set ("short", "东津港区");
  set ("long", @LONG
这是一个正在开发的港口，许多的工人正在这里
忙碌着，北边原本是预定通往主港，但现在仍在施工
中，东边则是通往偏港。

LONG);

  set("exits", ([ /* sizeof() == 2 */
   "west" : "/open/main/room/gy1",
  "east" : "/open/island/room/port2",
]));
  set("outdoors", "/open/main");

  setup();
}

