// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","西大街");
  set ("long", @LONG
由于四海刀联和金刀门齐聚在此的缘故 , 这一带成了刀客的   
大本营 . 走在路上的大多是强调以武力解决一切的刀客 . 如果
你没有太大的把握 , 还是别想在此撒野的好 . 南边的大宅是四
海刀联 , 你看到许多刀客进进出出的 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-1",
	"west" : "/open/port/room/r4-2",
	"south" : "/open/port/room/r4-6",
]));
	set("objects",([
	"/open/port/npc/blademan2":1,
	]));

  setup();
}
