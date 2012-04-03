// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","城墙边");
  set ("long", @LONG
你正走在城墙边的小巷上 . 北边有道砖石砌成的阶梯贴着城
墙而上 , 你可以顺着阶梯登上城墙 . 南边是守卫队头办公的地
方 , 东边是守卫队员们的休息室 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r6-4",
	"south" : "/open/port/room/r6-5",
	"west" : "/open/port/room/r6-2",
	"northup" : "/open/port/room/r6-6",
]));
	set("objects",([
	]));

  setup();
}
