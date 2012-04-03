// Room: /open/main/room/r5.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
这里是从驿站通往北卢关必经的要道, 东边的沼泽地一不小心会把
人整个吞进去, 西边有一块平地, 看起来毫不起眼.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r7",
  "west" : __DIR__"L4",
  "east" : __DIR__"p7",
]));
  set("outdoors", "/open/main");

  setup();
}
