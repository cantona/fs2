#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "血魔堡");
  set ("long", @LONG
眼前所见为血魔新造的城堡，四周所见皆为血色，此地的道路也与一般道路不同
隐隐透出难以掩护的魔气，不过在你眼里确觉得格外舒服。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "out" : "/open/mogi/mountain/entrance.c",
  "south" : "/open/gsword/room1/blood1/r2.c",
  "east" : "/open/gsword/room1/blood1/r3.c",
  "west" : "/open/gsword/room1/blood1/r4.c",
]));

  set("light_up", 1);
  set ( "no_transmit", 1 );
  setup();
}
