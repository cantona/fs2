// Room: /open/main/room/r17.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
这是一条人烟稀少的小路,直直的往东西走去,谁也不知道他通
往哪.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/main/room/r16",
      "east" : "/open/killer/room/firstrm",
]));

  set("outdoors", "/open/main");


  setup();
}
