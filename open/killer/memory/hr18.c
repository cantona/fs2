#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "悬崖");
  set ("long", @LONG

	当你逐渐接近莫塔湖的源河之时，你心中不禁感叹造物者的神奇。
	想不到在这种高山上竟然会有这么壮阔的一条河流！！
	想到这里，你不由的想更加的去接近这一条河流。。。。
LONG);

  set("exits", ([ /* sizeof() == 3   */
     "east" : __DIR__"hr19.c",   
     "west" : __DIR__"hr17.c",   
]));

  setup();
}
