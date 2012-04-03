// Room: /u/s/smore/room/suking/suking6.c

inherit ROOM;

void create ()
{
  set ("short", "府衙大厅");
  set ("long", @LONG
走近将军席，你的心里充满了恐惧与不安，大红色的地毯衬
托出将军的气派非凡，抬头望去，将军席就在你的北方不远处，
左右两边则是左侍卫房及右侍卫房
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/suking3",
  "west" : "/open/gsword/room/suking5",
  "north" : "/open/gsword/room/suking8+",
  "east" : "/open/gsword/room/suking7",
]));

  set("light_up", 1);

  setup();
}
