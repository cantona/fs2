#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "崎岖的山路");
  set ("long", @LONG

	在你眼前的是一段更陡峭的山坡，两旁是令人怵目惊心的峭壁。
	看来你得更小心的爬这一段山路，否则摔下去可不是开玩笑的。
	远方似乎有水声传来？不会吧？在这种山中？

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"hr17.c",   
     "south" : __DIR__"hr15.c",   
]));

set("objects",([
  "/open/killer/npc/spy4.c":1,]));

  setup();
}
