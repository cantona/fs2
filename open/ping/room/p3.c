// Room: /open/ping/room/p3
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
长廊到了这儿有个转角, 通向一间房间去, 角落处摆设着一瓶花,
连着挂着几幅诗画, 一看之下似乎出自名家之手, 颇有一种非凡之势。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"p6",
  "north" : __DIR__"p4",
  "east" : __DIR__"p2",
]));
  set("light_up", 1);

  setup();
}
