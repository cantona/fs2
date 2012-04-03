// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","西大街");
  set ("long", @LONG
你正走在刀客的大本营 - 西大街上 . 街上有些衣着华丽的
刀客 , 配戴着黄金小刀 , 那是名满天下的金刀弟子 . 北边一
栋华宅 , 应该就是武林三大派之一的金刀门了 ! 听说金刀门十
分有钱 , 不过 , 从来没有人知道他们财富的来源 . 往西可以
登上六阳山 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/gblade/room/g1-1",
	"east" : "/open/port/room/r4-2",
]));
	set("objects",([
	"/open/port/npc/trainee":1,
	]));

  setup();
}
