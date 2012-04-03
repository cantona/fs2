// Room: /u/m/moner/open/room/room14.c 
inherit ROOM;
 
void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

    这里是风行山寨的走廊, 北边就是大厅了, 两旁墙壁上整齐的挂着
两排火把, 火光照的你两颊红红的。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r9.c",
  "south" : __DIR__"r10.c",
  "east" : __DIR__"r7.c",
]));

  setup();
  replace_program(ROOM);
}
