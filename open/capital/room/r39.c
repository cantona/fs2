// Room: /open/capital/room/r39.c

inherit ROOM;

void create ()
{
  set ("short", "永福胡同");
  set ("long", @LONG
北面有栋颓圮的房子，有几个混混样子的人在前面游荡，在这种人
稀少的地方遇到这些人还是快溜为妙。也许北边的那栋房子正是某帮派
的堂口也说不定。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
    "north" : __DIR__"wulaih",
  "west" : __DIR__"r38",
  "east" : __DIR__"r41",
]));
  set("gopath", "west");

  setup();
}
