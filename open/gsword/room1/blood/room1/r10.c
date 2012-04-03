#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "血魔堡一楼");
  set ("long", @LONG
此为千年血魔在千年仙魔大战前所建立的城堡，由于当年仙魔大战
的缘故，使得此地处处断垣残壁，鬼魅之气充斥于大气间，你渐渐
受这片鬼气影响而失去方向感了。

LONG);

  set("exits", ([ /* sizeof() == 5*/
  "west" : "/open/gsword/room1/blood/room1/r13.c",
  "east" : "/open/gsword/room1/blood/room1/r9.c",
  "north" : "/open/gsword/room1/blood/room1/r15.c",
  "south" : "/open/gsword/room1/blood/room1/r24.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );

  setup();
}
