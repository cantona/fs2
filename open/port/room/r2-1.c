// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","中央大街");
  set ("long", @LONG
你正走在宽广的中央大街上 . 中央大街连接着北门和港口 , 
贯穿了整个枫林港的心脏地带 . 街道非常的宽广 , 在路中间放
了朱红漆的杈子 , 禁止人们通行 , 以提供车马快速的行进 . 东
边是本地最出名的清风楼客栈 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r2-4",
	"north" : "/open/port/room/r3-1",
	"south" : "/open/port/room/r2-2",
]));
	set("objects",([
	]));

  setup();
}
