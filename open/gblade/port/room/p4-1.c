// Room: /open/gblade/port/room/p4-1.c
inherit ROOM;

void create()
{
	set("short","五湖客栈");
  set ("long", @LONG
这里是本港最大的客栈 , 取名为五湖客栈 , 正是因为客源
来自于五湖四海 , 这里平常生意都非常之好 , 你几乎很难找的
到空房 , 除非你能出的起更高的价钱 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"p3-2",
]));
  setup();
}
