// Room: /u/m/moner/open/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
    这里是风行山寨的走廊, 北边就是大厅了, 两旁墙壁上整齐的挂着
两排火把, 火光照的你两颊红红的。东边有个出口通往玄关。


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r1.c",
  "east" : __DIR__"r3.c",
]));

  setup();
  replace_program(ROOM);
}
