// Room: /open/start/room/s8.c

inherit ROOM;

void create ()
{
  set ("short", "南村口");
	set( "build", 7 );
  set ("long", @LONG
这里是凌云村南面的村口，往南过去是村民耕种的
田地，你可以看到许多农夫正辛勤的耕作着，也有几只
水牛在犁田，农田中的稻草人上停憩着几只不知死活的
鸟。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/start/room/s5",
  "south" : "/open/start/room/f3",
]));

  set("outdoors", "/open/start");

  setup();
}
