// Room: /open/death/square.c

inherit ROOM;

void create ()
{
  set ("short", "死神广场");
  set ("long", @LONG

这是一间什么都没有的广场
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/death/road2.c",
  "north" : "/open/death/nroad",
  "west" : "/open/death/wroad",
  "east" : "/open/death/eroad.c",
]));

  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

  setup();
}
