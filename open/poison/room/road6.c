// Room: /open/poison/room/road6
inherit ROOM;

void create ()
{
  set ("short", "园中小径");
  set ("long", @LONG
你走在一个小径上，两旁尽是翠绿的竹林，竹叶随风起
舞，发出沙沙的声响，东南方有一小小的山洞。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"path11.c",
  0 : __DIR__"path2",
  "northwest" : __DIR__"road17",
]));
  set("outdoors", "/open/poison");

  setup();
}
