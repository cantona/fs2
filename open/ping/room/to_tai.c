// Room: /open/main/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
这里是平南城南郊, 一路上风景优美, 十分怡人
你远远望去, 南边似乎有座高山, 禁不住好奇, 想要
去一探究竟.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road12",
  "south" : "/open/tailong/room/aa0.c",
]));
  set("outdoors", "/open/main");

  setup();
  replace_program(ROOM);
}
