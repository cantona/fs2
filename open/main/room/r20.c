// Room: /open/main/room/r20.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
	这条道路直往南北延伸，往东方的草原望去
	可以看到一座大城，西方的视线被台地所阻隔
	但隐约的看到在台地上似乎有座山。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r29",
  "north" : __DIR__"r13",
  "east" : __DIR__"s15",
]));

  set("outdoors", "/open/main");

  setup();
}
